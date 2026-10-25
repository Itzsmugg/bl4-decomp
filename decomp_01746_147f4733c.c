// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f4733c FUN_147f4733c body=59 status=ok
// SIG undefined FUN_147f4733c(void)

undefined8 FUN_147f4733c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47388 FUN_147f47388 body=38 status=ok
// SIG undefined FUN_147f47388(void)

void FUN_147f47388(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147f473fc FUN_147f473fc body=217 status=ok
// SIG undefined FUN_147f473fc(void)

longlong FUN_147f473fc(longlong param_1,longlong param_2)

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
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 147f4757c FUN_147f4757c body=54 status=ok
// SIG undefined FUN_147f4757c(void)

undefined1 FUN_147f4757c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f4768e(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147f475da FUN_147f475da body=59 status=ok
// SIG undefined FUN_147f475da(void)

undefined8 FUN_147f475da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47620 FUN_147f47620 body=32 status=ok
// SIG undefined FUN_147f47620(void)

void FUN_147f47620(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f4768e FUN_147f4768e body=105 status=ok
// SIG undefined FUN_147f4768e(void)

longlong FUN_147f4768e(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f47728 FUN_147f47728 body=63 status=ok
// SIG undefined FUN_147f47728(void)

undefined1 FUN_147f47728(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f4786c(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 147f47790 FUN_147f47790 body=59 status=ok
// SIG undefined FUN_147f47790(void)

undefined8 FUN_147f47790(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f477dc FUN_147f477dc body=65 status=ok
// SIG undefined FUN_147f477dc(void)

void FUN_147f477dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *param_2 = &PTR_FUN_14ac88ea0;
    if (param_2[0x32] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x34) = 0;
  }
  return;
}



// FUNCTION 147f4786c FUN_147f4786c body=341 status=ok
// SIG undefined FUN_147f4786c(void)

longlong FUN_147f4786c(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  puVar13 = (undefined8 *)(param_2 + 0x98);
  puVar14 = (undefined8 *)(param_1 + 0x98);
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  uVar1 = *(undefined4 *)(param_2 + 0x160);
  uVar2 = *(undefined4 *)(param_2 + 0x164);
  uVar3 = *(undefined4 *)(param_2 + 0x168);
  uVar4 = *(undefined4 *)(param_2 + 0x16c);
  uVar5 = *(undefined4 *)(param_2 + 0x170);
  uVar6 = *(undefined4 *)(param_2 + 0x174);
  uVar7 = *(undefined4 *)(param_2 + 0x178);
  uVar8 = *(undefined4 *)(param_2 + 0x17c);
  uVar9 = *(undefined4 *)(param_2 + 0x183);
  uVar10 = *(undefined4 *)(param_2 + 0x187);
  uVar11 = *(undefined4 *)(param_2 + 0x18b);
  *(undefined4 *)(param_1 + 0x17f) = *(undefined4 *)(param_2 + 0x17f);
  *(undefined4 *)(param_1 + 0x183) = uVar9;
  *(undefined4 *)(param_1 + 0x187) = uVar10;
  *(undefined4 *)(param_1 + 0x18b) = uVar11;
  *(undefined4 *)(param_1 + 0x170) = uVar5;
  *(undefined4 *)(param_1 + 0x174) = uVar6;
  *(undefined4 *)(param_1 + 0x178) = uVar7;
  *(undefined4 *)(param_1 + 0x17c) = uVar8;
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x168) = uVar3;
  *(undefined4 *)(param_1 + 0x16c) = uVar4;
  FUN_147f335da(param_1 + 400,param_2 + 400);
  return param_1;
}



// FUNCTION 147f47a36 FUN_147f47a36 body=63 status=ok
// SIG undefined FUN_147f47a36(void)

undefined1 FUN_147f47a36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f47b38(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f47a9e FUN_147f47a9e body=59 status=ok
// SIG undefined FUN_147f47a9e(void)

undefined8 FUN_147f47a9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47b38 FUN_147f47b38 body=140 status=ok
// SIG undefined FUN_147f47b38(void)

longlong FUN_147f47b38(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  FUN_147f3395a(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 147f47bf6 FUN_147f47bf6 body=179 status=ok
// SIG undefined FUN_147f47bf6(void)

undefined8 FUN_147f47bf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f4786c(param_2,param_3);
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    puVar2 = (undefined8 *)(param_3 + 0x1b8);
    puVar3 = (undefined8 *)(param_2 + 0x1b8);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
    *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_3 + 0x208);
    *(undefined4 *)(param_2 + 0x218) = *(undefined4 *)(param_3 + 0x218);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 147f47cd2 FUN_147f47cd2 body=59 status=ok
// SIG undefined FUN_147f47cd2(void)

undefined8 FUN_147f47cd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47d1e FUN_147f47d1e body=65 status=ok
// SIG undefined FUN_147f47d1e(void)

void FUN_147f47d1e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14ac88ea0;
    if (param_2[0x32] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 147f47ddc FUN_147f47ddc body=102 status=ok
// SIG undefined FUN_147f47ddc(void)

undefined1 FUN_147f47ddc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f47b38(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0xd8);
    puVar3 = (undefined8 *)(param_2 + 0xd8);
    for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 147f47e6a FUN_147f47e6a body=59 status=ok
// SIG undefined FUN_147f47e6a(void)

undefined8 FUN_147f47e6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47eb6 FUN_147f47eb6 body=65 status=ok
// SIG undefined FUN_147f47eb6(void)

void FUN_147f47eb6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *param_2 = &PTR_FUN_14ac87330;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  return;
}



// FUNCTION 147f480d6 FUN_147f480d6 body=59 status=ok
// SIG undefined FUN_147f480d6(void)

undefined8 FUN_147f480d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f481cc FUN_147f481cc body=63 status=ok
// SIG undefined FUN_147f481cc(void)

undefined1 FUN_147f481cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f482f6(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 147f48234 FUN_147f48234 body=59 status=ok
// SIG undefined FUN_147f48234(void)

undefined8 FUN_147f48234(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f48280 FUN_147f48280 body=40 status=ok
// SIG undefined FUN_147f48280(void)

void FUN_147f48280(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_145982a8c(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147f482f6 FUN_147f482f6 body=276 status=ok
// SIG undefined FUN_147f482f6(void)

longlong FUN_147f482f6(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_147f4840a(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xdc);
  uVar7 = *(undefined4 *)(param_2 + 0xe0);
  uVar8 = *(undefined4 *)(param_2 + 0xe4);
  uVar9 = *(undefined4 *)(param_2 + 0xeb);
  uVar10 = *(undefined4 *)(param_2 + 0xef);
  uVar11 = *(undefined4 *)(param_2 + 0xf3);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1 + 0xeb) = uVar9;
  *(undefined4 *)(param_1 + 0xef) = uVar10;
  *(undefined4 *)(param_1 + 0xf3) = uVar11;
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  FUN_147f335da(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f4840a FUN_147f4840a body=95 status=ok
// SIG undefined FUN_147f4840a(void)

undefined8 * FUN_147f4840a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145982adf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f4846a(param_1,iVar1);
      FUN_147f484cc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f4846a FUN_147f4846a body=98 status=ok
// SIG undefined FUN_147f4846a(void)

void FUN_147f4846a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f484cc FUN_147f484cc body=121 status=ok
// SIG undefined FUN_147f484cc(void)

void FUN_147f484cc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14a1ca850;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined1 *)(param_1 + 0x10 + lVar1) = *(undefined1 *)(param_2 + 0x10 + lVar1);
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14a1a0a00;
      *(undefined2 *)(param_1 + 0x18 + lVar1) = *(undefined2 *)(param_2 + 0x18 + lVar1);
      *(undefined ***)(param_1 + 0x20 + lVar1) = &PTR_FUN_14a1ca850;
      *(undefined8 *)(param_1 + 0x28 + lVar1) = *(undefined8 *)(param_2 + 0x28 + lVar1);
      *(undefined1 *)(param_1 + 0x30 + lVar1) = *(undefined1 *)(param_2 + 0x30 + lVar1);
      *(undefined ***)(param_1 + 0x20 + lVar1) = &PTR_FUN_14a1a0a40;
      *(undefined4 *)(param_1 + 0x38 + lVar1) = *(undefined4 *)(param_2 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f48546 FUN_147f48546 body=38 status=ok
// SIG undefined FUN_147f48546(void)

undefined8 FUN_147f48546(undefined8 param_1,int param_2)

{
  FUN_145982a8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f4856c FUN_147f4856c body=55 status=ok
// SIG undefined FUN_147f4856c(void)

void FUN_147f4856c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb238c8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb238c8 = FUN_140002ddd(FUN_14643fa2d,uVar1,L"GpsTestSettings_TraceList");
  }
  return;
}



// FUNCTION 147f486c8 FUN_147f486c8 body=63 status=ok
// SIG undefined FUN_147f486c8(void)

undefined1 FUN_147f486c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f48850(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f48730 FUN_147f48730 body=59 status=ok
// SIG undefined FUN_147f48730(void)

undefined8 FUN_147f48730(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4877c FUN_147f4877c body=38 status=ok
// SIG undefined FUN_147f4877c(void)

void FUN_147f4877c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14386a6a4(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f487f0 FUN_147f487f0 body=38 status=ok
// SIG undefined FUN_147f487f0(void)

undefined8 FUN_147f487f0(undefined8 param_1,int param_2)

{
  FUN_14386a6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f48816 FUN_147f48816 body=55 status=ok
// SIG undefined FUN_147f48816(void)

void FUN_147f48816(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb238e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb238e0 = FUN_140002ddd(FUN_14643fac3,uVar1,L"GpsTest_TraceList");
  }
  return;
}



// FUNCTION 147f48850 FUN_147f48850 body=143 status=ok
// SIG undefined FUN_147f48850(void)

longlong FUN_147f48850(longlong param_1,longlong param_2)

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
  FUN_1405b70a4(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_147f3395a(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return param_1;
}



// FUNCTION 147f48910 FUN_147f48910 body=119 status=ok
// SIG undefined FUN_147f48910(void)

undefined8 FUN_147f48910(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
    do {
      FUN_147f482f6(param_2 + -0x108,param_3 + -0x108);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_3 + 0x48);
      *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_3 + 0x50);
      param_3 = param_3 + 0x160;
      param_2 = param_2 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f489b0 FUN_147f489b0 body=59 status=ok
// SIG undefined FUN_147f489b0(void)

undefined8 FUN_147f489b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f489fc FUN_147f489fc body=62 status=ok
// SIG undefined FUN_147f489fc(void)

void FUN_147f489fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *param_2 = &PTR_FUN_14ac87f30;
    FUN_144a2da94(param_2 + 0x21);
    FUN_145982a8c(param_2);
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 147f48ab6 FUN_147f48ab6 body=90 status=ok
// SIG undefined FUN_147f48ab6(void)

undefined1 FUN_147f48ab6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f48850(param_2,param_3);
    *(undefined1 *)(param_2 + 0xd8) = *(undefined1 *)(param_3 + 0xd8);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f48b38 FUN_147f48b38 body=59 status=ok
// SIG undefined FUN_147f48b38(void)

undefined8 FUN_147f48b38(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f48b84 FUN_147f48b84 body=38 status=ok
// SIG undefined FUN_147f48b84(void)

void FUN_147f48b84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14386a6a4(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f48c64 FUN_147f48c64 body=59 status=ok
// SIG undefined FUN_147f48c64(void)

undefined8 FUN_147f48c64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f48d3a FUN_147f48d3a body=88 status=ok
// SIG undefined FUN_147f48d3a(void)

undefined1 FUN_147f48d3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x23);
      uVar12 = *(undefined4 *)((longlong)puVar1 + 0x27);
      uVar13 = *(undefined4 *)((longlong)puVar1 + 0x2b);
      lVar2 = param_2 + 0x30 + lVar14;
      *(undefined4 *)(lVar2 + -0x11) = *(undefined4 *)((longlong)puVar1 + 0x1f);
      *(undefined4 *)(lVar2 + -0xd) = uVar11;
      *(undefined4 *)(lVar2 + -9) = uVar12;
      *(undefined4 *)(lVar2 + -5) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_147f335da();
      lVar14 = lVar14 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f48dba FUN_147f48dba body=59 status=ok
// SIG undefined FUN_147f48dba(void)

undefined8 FUN_147f48dba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f48e00 FUN_147f48e00 body=38 status=ok
// SIG undefined FUN_147f48e00(void)

void FUN_147f48e00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f48f0a FUN_147f48f0a body=54 status=ok
// SIG undefined FUN_147f48f0a(void)

undefined1 FUN_147f48f0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3741a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147f48f68 FUN_147f48f68 body=59 status=ok
// SIG undefined FUN_147f48f68(void)

undefined8 FUN_147f48f68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4909a FUN_147f4909a body=54 status=ok
// SIG undefined FUN_147f4909a(void)

undefined1 FUN_147f4909a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f374bc(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147f490f8 FUN_147f490f8 body=59 status=ok
// SIG undefined FUN_147f490f8(void)

undefined8 FUN_147f490f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4921c FUN_147f4921c body=59 status=ok
// SIG undefined FUN_147f4921c(void)

undefined8 FUN_147f4921c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4936c FUN_147f4936c body=59 status=ok
// SIG undefined FUN_147f4936c(void)

undefined8 FUN_147f4936c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4940e FUN_147f4940e body=120 status=ok
// SIG undefined FUN_147f4940e(void)

void FUN_147f4940e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  }
  local_30 = *param_2;
  local_28 = *(undefined2 *)(param_2 + 1);
  local_20 = param_2[2];
  FUN_1448618b0(param_1 + 0x20,&local_30,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f494a2 FUN_147f494a2 body=101 status=ok
// SIG undefined FUN_147f494a2(void)

void FUN_147f494a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f49508 FUN_147f49508 body=101 status=ok
// SIG undefined FUN_147f49508(void)

void FUN_147f49508(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f4956e FUN_147f4956e body=134 status=ok
// SIG undefined FUN_147f4956e(void)

void FUN_147f4956e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac88b60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f495e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f495f4 FUN_147f495f4 body=62 status=ok
// SIG undefined FUN_147f495f4(void)

void FUN_147f495f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f4962f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f49634 FUN_147f49634 body=107 status=ok
// SIG undefined FUN_147f49634(void)

/* WARNING: Removing unreachable block (ram,0x000147f49666) */
/* WARNING: Removing unreachable block (ram,0x000147f49642) */
/* WARNING: Removing unreachable block (ram,0x000147f49658) */
/* WARNING: Removing unreachable block (ram,0x000147f49671) */
/* WARNING: Removing unreachable block (ram,0x000147f4965a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f49634(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb23a80;
  LOCK();
  UNLOCK();
  DAT_14cb23a80 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb23a88 = _DAT_14cb23a88 + -1;
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
    _DAT_14cb23a88 = _DAT_14cb23a88 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f496a0 FUN_147f496a0 body=31 status=ok
// SIG undefined FUN_147f496a0(void)

undefined8 FUN_147f496a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f496d4 FUN_147f496d4 body=85 status=ok
// SIG undefined FUN_147f496d4(void)

void FUN_147f496d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac898f0;
  return;
}



// FUNCTION 147f4972a FUN_147f4972a body=118 status=ok
// SIG undefined FUN_147f4972a(void)

void FUN_147f4972a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac898f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f49791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f497a0 FUN_147f497a0 body=105 status=ok
// SIG undefined FUN_147f497a0(void)

undefined8 FUN_147f497a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d6d7b0(param_1 + 0x18,local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4980a FUN_147f4980a body=45 status=ok
// SIG undefined FUN_147f4980a(void)

longlong FUN_147f4980a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145bfd59c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f4983e FUN_147f4983e body=54 status=ok
// SIG undefined FUN_147f4983e(void)

longlong FUN_147f4983e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f49874 FUN_147f49874 body=113 status=ok
// SIG undefined FUN_147f49874(void)

void FUN_147f49874(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147f498e6 FUN_147f498e6 body=152 status=ok
// SIG undefined FUN_147f498e6(void)

void FUN_147f498e6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    uVar4 = 0;
    do {
      cVar3 = FUN_14570329c(lVar2 + uVar4,param_2);
      if (cVar3 != '\0') {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)(int)lVar5 * 0x18 != uVar4);
  }
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f4997e(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar5 * 0x18) = *param_2;
  *(undefined2 *)(lVar2 + 8 + lVar5 * 0x18) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = param_2[2];
  return;
}



// FUNCTION 147f4997e FUN_147f4997e body=147 status=ok
// SIG undefined FUN_147f4997e(void)

void FUN_147f4997e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147f49a2c FUN_147f49a2c body=29 status=ok
// SIG undefined FUN_147f49a2c(void)

bool FUN_147f49a2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f49a4a FUN_147f49a4a body=26 status=ok
// SIG undefined FUN_147f49a4a(void)

bool FUN_147f49a4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f49a64 FUN_147f49a64 body=24 status=ok
// SIG undefined FUN_147f49a64(void)

bool FUN_147f49a64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147f49a7c FUN_147f49a7c body=101 status=ok
// SIG undefined FUN_147f49a7c(void)

void FUN_147f49a7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f49ae2 FUN_147f49ae2 body=134 status=ok
// SIG undefined FUN_147f49ae2(void)

void FUN_147f49ae2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac88bf0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f49b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f49b68 FUN_147f49b68 body=44 status=ok
// SIG undefined FUN_147f49b68(void)

void FUN_147f49b68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f49b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147f49b9a FUN_147f49b9a body=29 status=ok
// SIG undefined FUN_147f49b9a(void)

bool FUN_147f49b9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f49bb8 FUN_147f49bb8 body=26 status=ok
// SIG undefined FUN_147f49bb8(void)

bool FUN_147f49bb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f49bd2 FUN_147f49bd2 body=101 status=ok
// SIG undefined FUN_147f49bd2(void)

void FUN_147f49bd2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac88c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f49c38 FUN_147f49c38 body=134 status=ok
// SIG undefined FUN_147f49c38(void)

void FUN_147f49c38(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac88c60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f49caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f49cbe FUN_147f49cbe body=134 status=ok
// SIG undefined FUN_147f49cbe(void)

bool FUN_147f49cbe(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 147f49d46 FUN_147f49d46 body=308 status=ok
// SIG undefined FUN_147f49d46(void)

void FUN_147f49d46(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140d3808e(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f49e82 FUN_147f49e82 body=29 status=ok
// SIG undefined FUN_147f49e82(void)

bool FUN_147f49e82(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f49ea0 FUN_147f49ea0 body=26 status=ok
// SIG undefined FUN_147f49ea0(void)

bool FUN_147f49ea0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f49eba FUN_147f49eba body=101 status=ok
// SIG undefined FUN_147f49eba(void)

void FUN_147f49eba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac88cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f49f20 FUN_147f49f20 body=134 status=ok
// SIG undefined FUN_147f49f20(void)

void FUN_147f49f20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac88cd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f49f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f49fa6 FUN_147f49fa6 body=134 status=ok
// SIG undefined FUN_147f49fa6(void)

bool FUN_147f49fa6(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 147f4a02e FUN_147f4a02e body=107 status=ok
// SIG undefined FUN_147f4a02e(void)

/* WARNING: Removing unreachable block (ram,0x000147f4a060) */
/* WARNING: Removing unreachable block (ram,0x000147f4a03c) */
/* WARNING: Removing unreachable block (ram,0x000147f4a052) */
/* WARNING: Removing unreachable block (ram,0x000147f4a06b) */
/* WARNING: Removing unreachable block (ram,0x000147f4a054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f4a02e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb23a38;
  LOCK();
  UNLOCK();
  DAT_14cb23a38 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb23a40 = _DAT_14cb23a40 + -1;
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
    _DAT_14cb23a40 = _DAT_14cb23a40 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f4a09a FUN_147f4a09a body=137 status=ok
// SIG undefined FUN_147f4a09a(void)

void * FUN_147f4a09a(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x400) == 0) {
      memmove(param_1,param_2,0x400);
    }
    if (*(longlong *)((longlong)param_1 + 0x400) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x400) = *(undefined8 *)((longlong)param_2 + 0x400);
    *(undefined8 *)((longlong)param_2 + 0x400) = 0;
    *(undefined4 *)((longlong)param_1 + 0x408) = *(undefined4 *)((longlong)param_2 + 0x408);
    *(undefined4 *)((longlong)param_1 + 0x40c) = *(undefined4 *)((longlong)param_2 + 0x40c);
    *(undefined8 *)((longlong)param_2 + 0x408) = 0x1000000000;
  }
  return param_1;
}



// FUNCTION 147f4a124 FUN_147f4a124 body=132 status=ok
// SIG undefined FUN_147f4a124(void)

int FUN_147f4a124(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 == 0) {
    iVar2 = FUN_147f4a1a8(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = 0;
    FUN_147f4a1ec(param_1 + 0x80);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 0x98) = iVar2 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar2 = iVar1 * 8 + 1;
  }
  return iVar2;
}



// FUNCTION 147f4a1a8 FUN_147f4a1a8 body=68 status=ok
// SIG undefined FUN_147f4a1a8(void)

int FUN_147f4a1a8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_145ad7338(param_1,iVar1);
  }
  FUN_145ad72b1((longlong)iVar1 * 8 + *param_1,8);
  return iVar1;
}



// FUNCTION 147f4a1ec FUN_147f4a1ec body=65 status=ok
// SIG undefined FUN_147f4a1ec(void)

void FUN_147f4a1ec(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_145ad73bc(param_1,iVar1);
  }
  FUN_145ad730b((longlong)iVar1 * 0x410 + *param_1,8);
  return;
}



// FUNCTION 147f4a22e FUN_147f4a22e body=103 status=ok
// SIG undefined FUN_147f4a22e(void)

void FUN_147f4a22e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x40c)) {
    *(int *)(param_1 + 0x40c) = iVar3;
    FUN_145765378(param_1,*(undefined4 *)(param_1 + 0x408));
    return;
  }
  return;
}



// FUNCTION 147f4a296 FUN_147f4a296 body=170 status=ok
// SIG undefined FUN_147f4a296(void)

void FUN_147f4a296(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (longlong)param_2;
  lVar3 = lVar4 * 0x410;
  FUN_147f4a340(param_3,*(longlong *)(param_1 + 0x80) + lVar3);
  lVar2 = *(longlong *)(param_1 + 0x80);
  *(undefined4 *)(lVar2 + 0x408 + lVar3) = 0;
  if (*(int *)(lVar2 + 0x40c + lVar3) < 0) {
    FUN_147f4a22e(lVar2 + lVar3,0);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8);
  if (iVar1 == -1) {
    return;
  }
  iVar5 = 0;
  do {
    FUN_147f4a296(param_1,iVar1 + iVar5,param_3);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8) = 0xffffffff;
  FUN_147f4a3ca(param_1,iVar1);
  return;
}



// FUNCTION 147f4a340 FUN_147f4a340 body=137 status=ok
// SIG undefined FUN_147f4a340(void)

void FUN_147f4a340(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x408);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x408);
    *(uint *)(param_1 + 0x408) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar2) < uVar1) {
      FUN_1457652fe(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x400);
    if (*(void **)((longlong)param_2 + 0x400) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)((longlong)iVar2 * 0x40 + lVar3),_Src,(longlong)(int)uVar1 << 6);
    *(undefined4 *)((longlong)param_2 + 0x408) = 0;
  }
  return;
}



// FUNCTION 147f4a3ca FUN_147f4a3ca body=114 status=ok
// SIG undefined FUN_147f4a3ca(void)

void FUN_147f4a3ca(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + (int)lVar2) * 8) =
         0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar3 = param_2 - 1U >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x90),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4) = uVar3;
  return;
}



// FUNCTION 147f4a43c FUN_147f4a43c body=107 status=ok
// SIG undefined FUN_147f4a43c(void)

/* WARNING: Removing unreachable block (ram,0x000147f4a46e) */
/* WARNING: Removing unreachable block (ram,0x000147f4a44a) */
/* WARNING: Removing unreachable block (ram,0x000147f4a460) */
/* WARNING: Removing unreachable block (ram,0x000147f4a479) */
/* WARNING: Removing unreachable block (ram,0x000147f4a462) */

void FUN_147f4a43c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb23a70;
  LOCK();
  UNLOCK();
  DAT_14cb23a70 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb23a78 = DAT_14cb23a78 + -1;
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
    DAT_14cb23a78 = DAT_14cb23a78 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f4a4a8 FUN_147f4a4a8 body=31 status=ok
// SIG undefined FUN_147f4a4a8(void)

undefined8 FUN_147f4a4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f4a4dc FUN_147f4a4dc body=85 status=ok
// SIG undefined FUN_147f4a4dc(void)

void FUN_147f4a4dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88d50;
  return;
}



// FUNCTION 147f4a532 FUN_147f4a532 body=118 status=ok
// SIG undefined FUN_147f4a532(void)

void FUN_147f4a532(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac88d50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4a599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f4a5a8 FUN_147f4a5a8 body=105 status=ok
// SIG undefined FUN_147f4a5a8(void)

undefined8 FUN_147f4a5a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ad7034(param_1 + 0x18,local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4a612 FUN_147f4a612 body=54 status=ok
// SIG undefined FUN_147f4a612(void)

longlong FUN_147f4a612(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f4a648 FUN_147f4a648 body=116 status=ok
// SIG undefined FUN_147f4a648(void)

void FUN_147f4a648(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_147f4a6be(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f4a6be FUN_147f4a6be body=133 status=ok
// SIG undefined FUN_147f4a6be(void)

void FUN_147f4a6be(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f4a744 FUN_147f4a744 body=82 status=ok
// SIG undefined FUN_147f4a744(void)

undefined8 FUN_147f4a744(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140b5495e();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    if (*(int *)(param_1 + 0x3d8) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(param_1 + 0x3d0);
    }
    return uVar2;
  }
  uVar2 = FUN_147f4a796(param_1);
  return uVar2;
}



// FUNCTION 147f4a796 FUN_147f4a796 body=102 status=ok
// SIG undefined FUN_147f4a796(void)

void FUN_147f4a796(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1412df7ca();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4a7fe FUN_147f4a7fe body=309 status=ok
// SIG undefined FUN_147f4a7fe(void)

undefined8 FUN_147f4a7fe(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if (param_1[1] == 0) {
    FUN_140056680(&local_38,&DAT_149e01fe8);
  }
  else {
    local_48 = *(undefined2 **)(param_1[1] + 0x18);
    FUN_1400021e4(&local_48,&local_38);
  }
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  if (*(longlong *)(*param_1 + 0xa8) == 0) {
    FUN_140056680(&local_48,&DAT_149e01fe8);
  }
  else {
    local_28 = *(undefined8 *)(*(longlong *)(*param_1 + 0xa8) + 0x18);
    FUN_1400021e4(&local_28,&local_48);
  }
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s - %s",puVar2,puVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4a934 FUN_147f4a934 body=253 status=ok
// SIG undefined FUN_147f4a934(void)

ulonglong FUN_147f4a934(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    uVar7 = FUN_1447210f0();
    FUN_140a702f6(&local_40,uVar7);
    if (local_38 != (longlong *)0x0) {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar9 = local_38;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_40 == 0) {
          uVar8 = 0;
        }
        else {
          cVar4 = FUN_140bbb356(local_40,param_2,*(undefined8 *)(param_1 + 0x120),0);
          uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          if (cVar4 == '\0') {
            uVar6 = FUN_140a70784(local_40,param_2,*(undefined8 *)(param_1 + 0x120),0);
            uVar8 = (ulonglong)uVar6;
          }
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        goto LAB_147f4a9ed;
      }
    }
  }
  uVar8 = 0;
LAB_147f4a9ed:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147f4aa32 FUN_147f4aa32 body=240 status=ok
// SIG undefined FUN_147f4aa32(void)

void FUN_147f4aa32(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    uVar6 = FUN_1447210f0();
    FUN_140a702f6(&local_38,uVar6);
    if (local_30 != (longlong *)0x0) {
      iVar5 = (int)local_30[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_30 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar7 = local_30;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if ((local_38 != 0) &&
           (cVar4 = FUN_140bbb356(local_38,param_2,*(undefined8 *)(param_1 + 0x120),0),
           cVar4 == '\0')) {
          FUN_14105eeda(local_38,param_2,*(undefined8 *)(param_1 + 0x120),0);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4ab24 FUN_147f4ab24 body=240 status=ok
// SIG undefined FUN_147f4ab24(void)

void FUN_147f4ab24(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    uVar6 = FUN_1447210f0();
    FUN_140a702f6(&local_38,uVar6);
    if (local_30 != (longlong *)0x0) {
      iVar5 = (int)local_30[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_30 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar7 = local_30;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if ((local_38 != 0) &&
           (cVar4 = FUN_140bbb356(local_38,param_2,*(undefined8 *)(param_1 + 0x120),0),
           cVar4 != '\0')) {
          FUN_14119101a(local_38,param_2,*(undefined8 *)(param_1 + 0x120),0);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4ac16 FUN_147f4ac16 body=113 status=ok
// SIG undefined FUN_147f4ac16(void)

void FUN_147f4ac16(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x48);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
      FUN_147f4a648(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 8),_Src,(longlong)(int)uVar1 << 3);
    *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f4ac8e FUN_147f4ac8e body=99 status=ok
// SIG undefined FUN_147f4ac8e(void)

void FUN_147f4ac8e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23b24);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23b2c);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f4acf2 FUN_147f4acf2 body=285 status=ok
// SIG undefined FUN_147f4acf2(void)

void FUN_147f4acf2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xd8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      if (lVar2 != 0) {
        FUN_147f4a7fe(lVar2 + 0x268,local_78);
        FUN_1470ed5e8(local_68,local_78);
        lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23b34);
        FUN_1403719a4(lVar3 + 8,local_68);
        FUN_144a2da94(local_68);
        FUN_147f4a7fe(lVar2 + 0x140,local_88);
        FUN_1470ed5e8(local_68,local_88);
        lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23b3c);
        FUN_1403719a4(lVar2 + 8,local_68);
        FUN_144a2da94(local_68);
      }
    }
  }
  FUN_147f574a0(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4ae16 FUN_147f4ae16 body=188 status=ok
// SIG undefined FUN_147f4ae16(void)

void FUN_147f4ae16(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23b74);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if (*(byte *)(param_1 + 0xb8) == 1) {
    local_58 = 0;
    local_38 = 4;
    local_28 = (DAT_14c9a8634 & 0x20) == 0;
    local_30 = 1;
    local_50 = (uint)*(byte *)(param_1 + 0xb8);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23b7c);
    FUN_1403719a4(lVar1 + 8,&local_58);
    FUN_144a2da94(&local_58);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4aed8 FUN_147f4aed8 body=416 status=ok
// SIG undefined FUN_147f4aed8(void)

void FUN_147f4aed8(longlong param_1)

{
  void **ppvVar1;
  int iVar2;
  undefined1 auStack_3d8 [32];
  void *local_3b8;
  int local_3b0;
  undefined1 local_3a8 [288];
  undefined1 local_288 [288];
  undefined1 local_168 [288];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(undefined1 *)(param_1 + 0x432) = *(undefined1 *)(param_1 + 0x438);
  ppvVar1 = (void **)(param_1 + 0x440);
  iVar2 = *(int *)(param_1 + 0x448) + -1;
  if (*(int *)(param_1 + 0x448) == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(param_1 + 0xc0,*(undefined8 *)(param_1 + 0x440),iVar2);
  FUN_14053c976(param_1 + 0xd0,param_1 + 0x450);
  FUN_14053c976(param_1 + 0x1f0,param_1 + 0x570);
  FUN_14053c976(param_1 + 0x310,param_1 + 0x690);
  *(undefined2 *)(param_1 + 0x430) = *(undefined2 *)(param_1 + 0x7b0);
  FUN_140803772(&local_3b8);
  *(undefined1 *)(param_1 + 0x438) = local_46;
  if (ppvVar1 != &local_3b8) {
    *(int *)(param_1 + 0x448) = local_3b0;
    if (local_3b0 == 0 && *(int *)(param_1 + 0x44c) == 0) {
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_3b0);
      if (local_3b0 != 0) {
        memcpy(*ppvVar1,local_3b8,(longlong)local_3b0 * 2);
      }
    }
  }
  FUN_14053c976(param_1 + 0x450,local_3a8);
  FUN_14053c976(param_1 + 0x570,local_288);
  FUN_14053c976(param_1 + 0x690,local_168);
  *(undefined1 *)(param_1 + 0x7b0) = local_48;
  *(undefined1 *)(param_1 + 0x7b1) = local_47;
  FUN_140315562(&local_3b8);
  if ((local_40 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4b07a FUN_147f4b07a body=175 status=ok
// SIG undefined FUN_147f4b07a(void)

undefined8 * FUN_147f4b07a(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  uint uVar4;
  
  lVar3 = FUN_14479d2ce(param_1 + 0xd8);
  uVar2 = DAT_14c9ab180;
  if (lVar3 == 0) {
    uVar4 = (uint)DAT_14c9ab188;
    *(ushort *)(param_2 + 3) = DAT_14c9ab180;
    if (uVar2 < 0x19) {
      _Src = &DAT_14c9ab168;
      _Dst = param_2;
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_2 = _Dst;
      _Src = DAT_14c9ab168;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar1 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar4 * 0x120)));
    }
    else {
      (*pcVar1)();
    }
    *(byte *)(param_2 + 4) = DAT_14c9ab188;
  }
  else {
    *(undefined2 *)(param_2 + 3) = 8;
    *param_2 = 0;
    FUN_14485c47a(param_2,lVar3);
    *(undefined1 *)(param_2 + 4) = 0xe;
  }
  return param_2;
}



// FUNCTION 147f4b12a FUN_147f4b12a body=194 status=ok
// SIG undefined FUN_147f4b12a(void)

void FUN_147f4b12a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_147f574a0();
  lVar3 = FUN_14479d2ce(param_1 + 0xd8);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x120);
  }
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23b74);
  puVar1 = (undefined8 *)(lVar3 + 0x40);
  if (*(byte *)(lVar3 + 0x60) == 0xe) {
    FUN_14485c47a(puVar1,uVar5);
    return;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar3 + 0x60) * 0x120))
  ;
  if (pcVar2 != (code *)0x0) {
    puVar4 = puVar1;
    if (0x18 < *(ushort *)(lVar3 + 0x58)) {
      puVar4 = *(undefined8 **)(lVar3 + 0x40);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < *(ushort *)(lVar3 + 0x58)) {
    FUN_1400020a8(*puVar1);
  }
  *(undefined2 *)(lVar3 + 0x58) = 8;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  FUN_14485c47a(puVar1,uVar5);
  *(undefined1 *)(lVar3 + 0x60) = 0xe;
  return;
}



// FUNCTION 147f4b1ec FUN_147f4b1ec body=16 status=ok
// SIG undefined FUN_147f4b1ec(void)

undefined1 FUN_147f4b1ec(void)

{
  FUN_147f4b1fc();
  return 1;
}



// FUNCTION 147f4b1fc FUN_147f4b1fc body=599 status=ok
// SIG undefined FUN_147f4b1fc(void)

void FUN_147f4b1fc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a1;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = (longlong *)FUN_140343d7a();
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_140b066c4();
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_140b066c4();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        lVar2 = *(longlong *)(param_1 + 0x48);
        local_a1 = 2;
        local_b0 = FUN_144a7be76(param_1);
        FUN_144a7bec8(param_1,&local_70);
        local_a0[0] = 0;
        local_78 = 0;
        FUN_144a7bf34(local_a0,&local_70,&local_b0,&local_a1);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        FUN_1447c3578(lVar2 + 0x80,&local_70,local_a0);
        lVar8 = FUN_140593260(&local_70);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar9 = &local_70;
          if (0x18 < local_58) {
            ppppuVar9 = (undefined8 ****)local_70;
          }
          (*pcVar3)(ppppuVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70);
        }
        FUN_144a5ac3a(local_a0);
        if (lVar8 == 0) {
          if (*(char *)(lVar2 + 0xb9) != '\x01') {
            FUN_147f4b47a(param_1);
            goto LAB_147f4b271;
          }
          lVar8 = plVar4[0x39];
        }
        plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0xd8);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)FUN_147f4b57c(plVar4);
          if (plVar6 == (longlong *)0x0) goto LAB_147f4b271;
          FUN_1458df8c6(plVar6 + 0xc5,lVar2 + 0xc0);
          FUN_14010ee68(plVar4,plVar6);
          FUN_140486fc4(plVar6,lVar8,0);
          FUN_140b506a4(plVar6);
          FUN_147f586ba(plVar6,1);
          FUN_14485c47a(param_1 + 0xd8,plVar6);
        }
        else if (plVar6[0x24] != lVar8) {
          (**(code **)(*plVar6 + 0x490))(plVar6,lVar8,&DAT_14cad8330,0);
        }
        (**(code **)(*plVar7 + 0x10))(plVar7,plVar6);
      }
    }
  }
LAB_147f4b271:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4b454 FUN_147f4b454 body=31 status=ok
// SIG undefined FUN_147f4b454(void)

undefined8 FUN_147f4b454(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xb8) == '\x01') {
    FUN_147f4b1fc();
  }
  return 0;
}



// FUNCTION 147f4b47a FUN_147f4b47a body=258 status=ok
// SIG undefined FUN_147f4b47a(void)

void FUN_147f4b47a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0xd8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar2 = (longlong *)FUN_140343d7a(param_1);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1449a018c();
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1449a018c();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)(*plVar1 + 0x420))(plVar1,0);
        if (plVar4 != plVar1) {
          return;
        }
        uVar3 = FUN_140b066c4();
        plVar1 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        uVar3 = FUN_140b066c4();
        plVar2 = (longlong *)FUN_144718840(plVar1,uVar3);
        if (plVar2 == (longlong *)0x0 || plVar1 == plVar2) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000147f4b579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2,0,*(code **)(*plVar2 + 0x10));
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f4b4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x420))(plVar1,0);
  return;
}



// FUNCTION 147f4b57c FUN_147f4b57c body=148 status=ok
// SIG undefined FUN_147f4b57c(void)

undefined8 FUN_147f4b57c(undefined8 param_1)

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
  uVar1 = FUN_1407fc1c8();
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



// FUNCTION 147f4b612 FUN_147f4b612 body=221 status=ok
// SIG undefined FUN_147f4b612(void)

void FUN_147f4b612(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23b9c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  uVar2 = FUN_147f17bc0();
  FUN_1401cfad2(uVar2,local_70,*(undefined1 *)(param_1 + 0xb8));
  FUN_1470ed5e8(local_60,local_70);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23ba4);
  FUN_1403719a4(lVar1 + 8,local_60);
  FUN_144a2da94(local_60);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bac);
  FUN_144983130(lVar1 + 8,param_1 + 0xc0);
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4b6f0 FUN_147f4b6f0 body=1458 status=ok
// SIG undefined FUN_147f4b6f0(void)

void FUN_147f4b6f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 ***pppuVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  undefined8 ****ppppuVar17;
  longlong lVar18;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_90;
  undefined8 ***local_88;
  int local_80;
  undefined4 uStack_7c;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = *(longlong *)(param_1 + 0x48);
  local_b9 = 2;
  local_c8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_88);
  local_b8 = (void *)((ulonglong)local_b8 & 0xffffffffffffff00);
  local_90 = 0;
  FUN_144a7bf34(&local_b8,&local_88,&local_c8,&local_b9);
  plVar9 = (longlong *)CONCAT44(uStack_7c,local_80);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_1447c3578(lVar8 + 0x80,&local_88,&local_b8);
  lVar8 = FUN_14030a32e(&local_88);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar17 = &local_88;
    if (0x18 < local_70) {
      ppppuVar17 = (undefined8 ****)local_88;
    }
    (*pcVar4)(ppppuVar17);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  FUN_144a5ac3a(&local_b8);
  plVar9 = (longlong *)FUN_140343d7a(param_1);
  if (plVar9 == (longlong *)0x0) {
LAB_147f4b83d:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar10 = FUN_144a78ab8();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
    if (plVar9 == (longlong *)0x0) goto LAB_147f4b83d;
    uVar10 = FUN_144a78ab8();
    plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
    if (plVar9 == plVar11) goto LAB_147f4b83d;
  }
  pwVar16 = L"No Target";
  if (lVar8 != 0) {
    pwVar16 = L"Has Target";
  }
  FUN_140056680(&local_88,pwVar16);
  lVar12 = FUN_1470e53c2(param_2,&DAT_14cb23b9c);
  iVar7 = local_80;
  pppuVar6 = local_88;
  ppppuVar17 = (undefined8 ****)(lVar12 + 0x40);
  if (*(byte *)(lVar12 + 0x60) == 8) {
    if (ppppuVar17 != &local_88) {
      lVar18 = (longlong)local_80;
      *(int *)(lVar12 + 0x48) = local_80;
      if (local_80 == 0 && *(int *)(lVar12 + 0x4c) == 0) {
        *(undefined4 *)(lVar12 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppppuVar17,local_80);
        if (iVar7 != 0) {
          memcpy(*ppppuVar17,pppuVar6,lVar18 * 2);
        }
      }
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar12 + 0x60) * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar14 = ppppuVar17;
      if (0x18 < *(ushort *)(lVar12 + 0x58)) {
        ppppuVar14 = *(undefined8 *****)(lVar12 + 0x40);
      }
      (*pcVar4)(ppppuVar14);
    }
    if (0x18 < *(ushort *)(lVar12 + 0x58)) {
      FUN_1400020a8(*ppppuVar17);
    }
    pppuVar6 = local_88;
    local_b8 = (void *)0x0;
    lVar18 = (longlong)local_80;
    local_b0 = local_80;
    if (lVar18 == 0) {
      local_ac = 0;
      *(undefined2 *)(lVar12 + 0x58) = 0x10;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined4 *)(lVar12 + 0x48) = 0;
LAB_147f4b9c3:
      *(undefined4 *)(lVar12 + 0x4c) = 0;
    }
    else {
      local_d0 = param_2;
      FUN_1446dd670(&local_b8,local_80,0);
      memcpy(local_b8,pppuVar6,lVar18 * 2);
      pvVar5 = local_b8;
      lVar18 = (longlong)local_b0;
      *(undefined2 *)(lVar12 + 0x58) = 0x10;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(int *)(lVar12 + 0x48) = local_b0;
      param_2 = local_d0;
      if (lVar18 == 0) goto LAB_147f4b9c3;
      FUN_1446dd670(ppppuVar17,local_b0,0);
      memcpy(*ppppuVar17,pvVar5,lVar18 * 2);
      param_2 = local_d0;
    }
    *(undefined1 *)(lVar12 + 0x60) = 8;
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8(local_b8);
    }
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if ((lVar8 != 0) && (plVar11 != (longlong *)0x0)) {
    uVar10 = (**(code **)(*plVar11 + 0x28))(plVar11);
    puVar13 = (undefined4 *)FUN_1400b9668(uVar10,0,lVar8);
    if (puVar13 != (undefined4 *)0x0) {
      uVar3 = *puVar13;
      lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23bac);
      puVar2 = (undefined8 *)(lVar8 + 0x40);
      if (*(byte *)(lVar8 + 0x60) == 3) {
        *(undefined4 *)puVar2 = uVar3;
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar15 = puVar2;
          if (0x18 < *(ushort *)(lVar8 + 0x58)) {
            puVar15 = *(undefined8 **)(lVar8 + 0x40);
          }
          (*pcVar4)(puVar15);
        }
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          FUN_1400020a8(*puVar2);
        }
        *(undefined2 *)(lVar8 + 0x58) = 4;
        *(undefined4 *)(lVar8 + 0x40) = uVar3;
        *(undefined1 *)(lVar8 + 0x60) = 3;
      }
    }
    goto LAB_147f4ba15;
  }
  FUN_140056680(&local_88,&DAT_14a90fb04);
  lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23bac);
  pppuVar6 = local_88;
  ppppuVar17 = (undefined8 ****)(lVar8 + 0x40);
  if (*(byte *)(lVar8 + 0x60) == 8) {
    if (ppppuVar17 != &local_88) {
      *(int *)(lVar8 + 0x48) = local_80;
      if (local_80 == 0 && *(int *)(lVar8 + 0x4c) == 0) {
        *(undefined4 *)(lVar8 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppppuVar17,local_80);
        if (local_80 != 0) {
          memcpy(*ppppuVar17,pppuVar6,(longlong)local_80 * 2);
        }
      }
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar14 = ppppuVar17;
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        ppppuVar14 = *(undefined8 *****)(lVar8 + 0x40);
      }
      (*pcVar4)(ppppuVar14);
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      FUN_1400020a8(*ppppuVar17);
    }
    pppuVar6 = local_88;
    local_b8 = (void *)0x0;
    local_b0 = local_80;
    if ((longlong)local_80 == 0) {
      local_ac = 0;
      *(undefined2 *)(lVar8 + 0x58) = 0x10;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined4 *)(lVar8 + 0x48) = 0;
LAB_147f4bc65:
      *(undefined4 *)(lVar8 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_80,0);
      memcpy(local_b8,pppuVar6,(longlong)local_80 * 2);
      pvVar5 = local_b8;
      lVar12 = (longlong)local_b0;
      *(undefined2 *)(lVar8 + 0x58) = 0x10;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(int *)(lVar8 + 0x48) = local_b0;
      if (lVar12 == 0) goto LAB_147f4bc65;
      FUN_1446dd670(ppppuVar17,local_b0,0);
      memcpy(*ppppuVar17,pvVar5,lVar12 * 2);
    }
    *(undefined1 *)(lVar8 + 0x60) = 8;
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8(local_b8);
    }
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_147f4ba15:
  FUN_147f574a0(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4bca4 FUN_147f4bca4 body=215 status=ok
// SIG undefined FUN_147f4bca4(void)

void FUN_147f4bca4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bbc);
  FUN_144983130(lVar1 + 8,param_1 + 0x88);
  local_58 = 0;
  local_38 = 4;
  local_50 = (uint)*(byte *)(param_1 + 0xc0);
  local_28 = (DAT_14c9a8634 & 0x20) == 0;
  local_30 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bc4);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bcc);
  FUN_144983130(lVar1 + 8,param_1 + 0xd8);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4bd7c FUN_147f4bd7c body=1511 status=ok
// SIG undefined FUN_147f4bd7c(void)

void FUN_147f4bd7c(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  undefined8 ****ppppuVar18;
  longlong lVar19;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_90;
  undefined8 ***local_88;
  int local_80;
  undefined4 uStack_7c;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = *(longlong *)(param_1 + 0x48);
  lVar8 = local_d0 + 0x88;
  local_b9 = 2;
  local_c8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_88);
  local_b8 = (void *)((ulonglong)local_b8 & 0xffffffffffffff00);
  local_90 = 0;
  FUN_144a7bf34(&local_b8,&local_88,&local_c8,&local_b9);
  plVar9 = (longlong *)CONCAT44(uStack_7c,local_80);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_1447c3578(lVar8,&local_88,&local_b8);
  lVar8 = FUN_14030a32e(&local_88);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar18 = &local_88;
    if (0x18 < local_70) {
      ppppuVar18 = (undefined8 ****)local_88;
    }
    (*pcVar5)(ppppuVar18);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  FUN_144a5ac3a(&local_b8);
  plVar9 = (longlong *)FUN_140343d7a(param_1);
  if (plVar9 == (longlong *)0x0) {
LAB_147f4bed1:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar10 = FUN_144a78ab8();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
    if (plVar9 == (longlong *)0x0) goto LAB_147f4bed1;
    uVar10 = FUN_144a78ab8();
    plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
    if (plVar9 == plVar11) goto LAB_147f4bed1;
  }
  pwVar16 = L"No Target";
  if (lVar8 != 0) {
    pwVar16 = L"Has Target";
  }
  FUN_140056680(&local_88,pwVar16);
  lVar12 = FUN_1470e53c2(param_2,&DAT_14cb23bbc);
  iVar4 = local_80;
  pppuVar7 = local_88;
  ppppuVar18 = (undefined8 ****)(lVar12 + 0x40);
  if (*(byte *)(lVar12 + 0x60) == 8) {
    if (ppppuVar18 != &local_88) {
      lVar19 = (longlong)local_80;
      *(int *)(lVar12 + 0x48) = local_80;
      if (local_80 == 0 && *(int *)(lVar12 + 0x4c) == 0) {
        *(undefined4 *)(lVar12 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppppuVar18,local_80);
        if (iVar4 != 0) {
          memcpy(*ppppuVar18,pppuVar7,lVar19 * 2);
        }
      }
    }
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar12 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar14 = ppppuVar18;
      if (0x18 < *(ushort *)(lVar12 + 0x58)) {
        ppppuVar14 = *(undefined8 *****)(lVar12 + 0x40);
      }
      (*pcVar5)(ppppuVar14);
    }
    if (0x18 < *(ushort *)(lVar12 + 0x58)) {
      FUN_1400020a8(*ppppuVar18);
    }
    pppuVar7 = local_88;
    local_b8 = (void *)0x0;
    lVar19 = (longlong)local_80;
    local_b0 = local_80;
    if (lVar19 == 0) {
      local_ac = 0;
      *(undefined2 *)(lVar12 + 0x58) = 0x10;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined4 *)(lVar12 + 0x48) = 0;
LAB_147f4bfbf:
      *(undefined4 *)(lVar12 + 0x4c) = 0;
    }
    else {
      local_d8 = param_2;
      FUN_1446dd670(&local_b8,local_80,0);
      memcpy(local_b8,pppuVar7,lVar19 * 2);
      pvVar6 = local_b8;
      lVar19 = (longlong)local_b0;
      *(undefined2 *)(lVar12 + 0x58) = 0x10;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(int *)(lVar12 + 0x48) = local_b0;
      param_2 = local_d8;
      if (lVar19 == 0) goto LAB_147f4bfbf;
      FUN_1446dd670(ppppuVar18,local_b0,0);
      memcpy(*ppppuVar18,pvVar6,lVar19 * 2);
      param_2 = local_d8;
    }
    *(undefined1 *)(lVar12 + 0x60) = 8;
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8(local_b8);
    }
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_88,&DAT_14a90fb04);
  lVar12 = FUN_1470e53c2(param_2,&DAT_14cb23bcc);
  pppuVar7 = local_88;
  ppppuVar18 = (undefined8 ****)(lVar12 + 0x40);
  if (*(byte *)(lVar12 + 0x60) == 8) {
    if (ppppuVar18 != &local_88) {
      *(int *)(lVar12 + 0x48) = local_80;
      if (local_80 == 0 && *(int *)(lVar12 + 0x4c) == 0) {
        *(undefined4 *)(lVar12 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppppuVar18,local_80);
        if (local_80 != 0) {
          memcpy(*ppppuVar18,pppuVar7,(longlong)local_80 * 2);
        }
      }
    }
    goto LAB_147f4c1d1;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar12 + 0x60) * 0x120)
                     );
  if (pcVar5 != (code *)0x0) {
    ppppuVar14 = ppppuVar18;
    if (0x18 < *(ushort *)(lVar12 + 0x58)) {
      ppppuVar14 = *(undefined8 *****)(lVar12 + 0x40);
    }
    (*pcVar5)(ppppuVar14);
  }
  if (0x18 < *(ushort *)(lVar12 + 0x58)) {
    FUN_1400020a8(*ppppuVar18);
  }
  pppuVar7 = local_88;
  local_b8 = (void *)0x0;
  local_b0 = local_80;
  if ((longlong)local_80 == 0) {
    local_ac = 0;
    *(undefined2 *)(lVar12 + 0x58) = 0x10;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined4 *)(lVar12 + 0x48) = 0;
LAB_147f4c1b7:
    *(undefined4 *)(lVar12 + 0x4c) = 0;
  }
  else {
    local_d8 = param_2;
    FUN_1446dd670(&local_b8,local_80,0);
    memcpy(local_b8,pppuVar7,(longlong)local_80 * 2);
    pvVar6 = local_b8;
    lVar19 = (longlong)local_b0;
    *(undefined2 *)(lVar12 + 0x58) = 0x10;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(int *)(lVar12 + 0x48) = local_b0;
    param_2 = local_d8;
    if (lVar19 == 0) goto LAB_147f4c1b7;
    FUN_1446dd670(ppppuVar18,local_b0,0);
    memcpy(*ppppuVar18,pvVar6,lVar19 * 2);
    param_2 = local_d8;
  }
  *(undefined1 *)(lVar12 + 0x60) = 8;
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8(local_b8);
  }
LAB_147f4c1d1:
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (((lVar8 != 0) && (plVar11 != (longlong *)0x0)) &&
     (iVar4 = *(int *)(local_d0 + 0xd0), (longlong)iVar4 != 0)) {
    lVar12 = *(longlong *)(local_d0 + 200);
    lVar19 = 0;
    uVar17 = param_2;
    do {
      uVar17 = CONCAT71((int7)(uVar17 >> 8),*(undefined1 *)(lVar12 + lVar19));
      uVar10 = (**(code **)(*plVar11 + 0x28))(plVar11);
      puVar13 = (undefined4 *)FUN_1400b9668(uVar10,uVar17 & 0xffffffff,lVar8);
      if (puVar13 != (undefined4 *)0x0) {
        uVar3 = *puVar13;
        lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23bcc);
        puVar2 = (undefined8 *)(lVar8 + 0x40);
        if (*(byte *)(lVar8 + 0x60) == 3) {
          *(undefined4 *)puVar2 = uVar3;
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar15 = puVar2;
            if (0x18 < *(ushort *)(lVar8 + 0x58)) {
              puVar15 = *(undefined8 **)(lVar8 + 0x40);
            }
            (*pcVar5)(puVar15);
          }
          if (0x18 < *(ushort *)(lVar8 + 0x58)) {
            FUN_1400020a8(*puVar2);
          }
          *(undefined2 *)(lVar8 + 0x58) = 4;
          *(undefined4 *)(lVar8 + 0x40) = uVar3;
          *(undefined1 *)(lVar8 + 0x60) = 3;
        }
        break;
      }
      lVar19 = lVar19 + 1;
    } while (iVar4 != lVar19);
  }
  FUN_147f574a0(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4c364 FUN_147f4c364 body=117 status=ok
// SIG undefined FUN_147f4c364(void)

ulonglong FUN_147f4c364(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if ((longlong)(int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if (*(byte *)(lVar4 + lVar5) < 7) {
        iVar2 = FUN_143889c92(param_1,*(byte *)(lVar4 + lVar5),param_3);
        if (0 < iVar2) {
          uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_147f4c3ae;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar1 != lVar5);
    uVar3 = 0;
LAB_147f4c3ae:
    lVar4 = *param_2;
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147f4c3da FUN_147f4c3da body=110 status=ok
// SIG undefined FUN_147f4c3da(void)

void FUN_147f4c3da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bd4);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bdc);
    FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  }
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f4c458 FUN_147f4c458 body=308 status=ok
// SIG undefined FUN_147f4c458(void)

void FUN_147f4c458(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14066e964();
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0xf0) == '\x01') {
    local_89 = 2;
    local_98 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_58);
    local_88[0] = 0;
    local_60 = 0;
    FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_1447c3578(lVar2 + 0xb8,&local_58,local_88);
    uVar5 = FUN_144a7ecd0(&local_58);
    *(undefined4 *)(param_1 + 0xdc) = uVar5;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar4 = &local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58;
      }
      (*pcVar3)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4c58e FUN_147f4c58e body=220 status=ok
// SIG undefined FUN_147f4c58e(void)

void FUN_147f4c58e(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf0) == '\x01') {
    fVar7 = *(float *)(param_1 + 0xd8);
    fVar2 = *(float *)(param_1 + 0xdc);
    fVar6 = (float)FUN_141236616(param_1);
    fVar6 = (fVar7 + fVar2) - fVar6;
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb23bdc);
    pfVar1 = (float *)(lVar4 + 0x40);
    if (*(byte *)(lVar4 + 0x60) == 3) {
      *pfVar1 = fVar7;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        pfVar5 = pfVar1;
        if (0x18 < *(ushort *)(lVar4 + 0x58)) {
          pfVar5 = *(float **)(lVar4 + 0x40);
        }
        (*pcVar3)(pfVar5);
      }
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar4 + 0x58) = 4;
      *(float *)(lVar4 + 0x40) = fVar7;
      *(undefined1 *)(lVar4 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 147f4c66a FUN_147f4c66a body=84 status=ok
// SIG undefined FUN_147f4c66a(void)

undefined8 * FUN_147f4c66a(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac3c890;
  FUN_140785382(param_1 + 0x10,0x14);
  FUN_140785382(param_1 + 0x17,2);
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  FUN_147f4c6be(param_1);
  return param_1;
}



// FUNCTION 147f4c6be FUN_147f4c6be body=65 status=ok
// SIG undefined FUN_147f4c6be(void)

void FUN_147f4c6be(longlong param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(char *)(param_1 + 0xf1) == '\0') ^ 3;
  FUN_145781132(param_1 + 0x80,uVar1 & 0xffffffff,0);
  FUN_145781132(param_1 + 0xb8,uVar1 & 0xffffffff,0);
  return;
}



// FUNCTION 147f4c700 FUN_147f4c700 body=221 status=ok
// SIG undefined FUN_147f4c700(void)

void FUN_147f4c700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23be4);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bec);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  uVar2 = FUN_1470ac0d1();
  FUN_1401cfad2(uVar2,local_70,*(undefined1 *)(param_1 + 0xf0));
  FUN_1470ed5e8(local_60,local_70);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bf4);
  FUN_1403719a4(lVar1 + 8,local_60);
  FUN_144a2da94(local_60);
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4c7e4 FUN_147f4c7e4 body=225 status=ok
// SIG undefined FUN_147f4c7e4(void)

void FUN_147f4c7e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23be4);
  FUN_144983130(lVar1 + 8,lVar3 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bec);
  FUN_144983130(lVar1 + 8,lVar3 + 0xb8);
  uVar2 = FUN_1470ac0d1();
  FUN_1401cfad2(uVar2,local_70,*(undefined1 *)(lVar3 + 0xf0));
  FUN_1470ed5e8(local_60,local_70);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23bf4);
  FUN_1403719a4(lVar3 + 8,local_60);
  FUN_144a2da94(local_60);
  FUN_147f574a0(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4c8c6 FUN_147f4c8c6 body=64 status=ok
// SIG undefined FUN_147f4c8c6(void)

char FUN_147f4c8c6(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x48) + 0xe0);
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf1) == '\0') {
    if (cVar1 == '\v') {
      cVar1 = FUN_147f4c906();
    }
    else {
      cVar1 = FUN_147f4cb66();
    }
  }
  else if (cVar1 == '\v') {
    cVar1 = FUN_147f4cdf0();
  }
  else {
    cVar1 = FUN_147f4d052();
  }
  return cVar1 * '\x02';
}



// FUNCTION 147f4c906 FUN_147f4c906 body=607 status=ok
// SIG undefined FUN_147f4c906(void)

undefined8 FUN_147f4c906(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 auStack_138 [36];
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f9;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong *local_c0;
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_110 = 0;
  local_114 = 0;
  local_c8 = 2;
  local_70[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,local_f8);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_144a7bf34(local_a0,local_f8,local_70,&local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,local_70,local_a0);
  cVar4 = FUN_140a1d9f8(local_70,&local_114);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    local_f9 = 2;
    local_108 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_c8);
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_144a7bf34(local_f8,&local_c8,&local_108,&local_f9);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    puVar7 = &local_c8;
    FUN_1447c3578(lVar2 + 0xb8,puVar7,local_f8);
    cVar4 = FUN_147f54268(puVar7,&local_110);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b0) {
        puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      }
      (*pcVar3)(puVar7);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT71(uStack_c7,local_c8));
    }
    FUN_144a5ac3a(local_f8);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar6 = local_70;
    if (0x18 < local_58) {
      ppppuVar6 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar6);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_144a5ac3a(local_a0);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_147f54318(*(undefined1 *)(lVar2 + 0xf0),local_114,&local_110);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4cb66 FUN_147f4cb66 body=649 status=ok
// SIG undefined FUN_147f4cb66(void)

bool FUN_147f4cb66(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_138 [40];
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined1 local_f9;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong *local_c0;
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_10c = 0;
  local_110 = 0;
  local_c8 = 2;
  local_70[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,local_f8);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_144a7bf34(local_a0,local_f8,local_70,&local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,local_70,local_a0);
  cVar4 = FUN_140a1d9f8(local_70,&local_10c);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    local_f9 = 2;
    local_108 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_c8);
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_144a7bf34(local_f8,&local_c8,&local_108,&local_f9);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    puVar6 = &local_c8;
    FUN_1447c3578(lVar2 + 0xb8,puVar6,local_f8);
    cVar4 = FUN_140a1d9f8(puVar6,&local_110);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b0) {
        puVar6 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      }
      (*pcVar3)(puVar6);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT71(uStack_c7,local_c8));
    }
    FUN_144a5ac3a(local_f8);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar5 = local_70;
    if (0x18 < local_58) {
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar5);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_144a5ac3a(local_a0);
  if (cVar4 == '\0') {
switchD_147f4cd94_default:
    bVar7 = false;
  }
  else {
    switch(*(undefined1 *)(lVar2 + 0xf0)) {
    case 0:
      bVar7 = local_10c < local_110;
      break;
    case 1:
      bVar7 = local_110 < local_10c;
      break;
    case 2:
      bVar7 = local_10c <= local_110;
      break;
    case 3:
      bVar7 = local_110 <= local_10c;
      break;
    case 4:
      bVar7 = local_10c == local_110;
      break;
    case 5:
      bVar7 = local_10c != local_110;
      break;
    default:
      goto switchD_147f4cd94_default;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 147f4cdf0 FUN_147f4cdf0 body=609 status=ok
// SIG undefined FUN_147f4cdf0(void)

undefined8 FUN_147f4cdf0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 auStack_138 [36];
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f9;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong *local_c0;
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_110 = 0;
  local_114 = 0;
  local_c8 = 2;
  local_70[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,local_f8);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_144a7bf34(local_a0,local_f8,local_70,&local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,local_70,local_a0);
  cVar4 = FUN_140a1daa8(local_70,&local_114);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    local_f9 = 2;
    local_108 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_c8);
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_144a7bf34(local_f8,&local_c8,&local_108,&local_f9);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    puVar7 = &local_c8;
    FUN_1447c3578(lVar2 + 0xb8,puVar7,local_f8);
    cVar4 = FUN_147f54268(puVar7,&local_110);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b0) {
        puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      }
      (*pcVar3)(puVar7);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT71(uStack_c7,local_c8));
    }
    FUN_144a5ac3a(local_f8);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar6 = local_70;
    if (0x18 < local_58) {
      ppppuVar6 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar6);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_144a5ac3a(local_a0);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_147f543e1(*(undefined1 *)(lVar2 + 0xf0),local_114,&local_110);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4d052 FUN_147f4d052 body=658 status=ok
// SIG undefined FUN_147f4d052(void)

ulonglong FUN_147f4d052(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined1 auStack_138 [40];
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined1 local_f9;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong *local_c0;
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_10c = 0.0;
  local_110 = 0.0;
  local_c8 = 2;
  local_70[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,local_f8);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_144a7bf34(local_a0,local_f8,local_70,&local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,local_70,local_a0);
  cVar4 = FUN_140a1daa8(local_70,&local_10c);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    local_f9 = 2;
    local_108 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_c8);
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_144a7bf34(local_f8,&local_c8,&local_108,&local_f9);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    puVar8 = &local_c8;
    FUN_1447c3578(lVar2 + 0xb8,puVar8,local_f8);
    cVar4 = FUN_140a1daa8(puVar8,&local_110);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b0) {
        puVar8 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT71(uStack_c7,local_c8));
    }
    FUN_144a5ac3a(local_f8);
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = local_70;
    if (0x18 < local_58) {
      ppppuVar7 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_144a5ac3a(local_a0);
  if (cVar4 == '\0') {
switchD_147f4d284_default:
    uVar5 = 0;
    goto LAB_147f4d28d;
  }
  uVar6 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_147f4d284::switchdataD_14ac8b59c +
           (longlong)(int)(&switchD_147f4d284::switchdataD_14ac8b59c)[*(byte *)(lVar2 + 0xf0)]) >> 8
          );
  switch(*(byte *)(lVar2 + 0xf0)) {
  case 0:
    bVar9 = local_110 < local_10c;
    break;
  case 1:
    bVar9 = local_10c < local_110;
    break;
  case 2:
    bVar9 = local_110 < local_10c;
    goto LAB_147f4d2ca;
  case 3:
    bVar9 = local_10c < local_110;
LAB_147f4d2ca:
    uVar5 = CONCAT71(uVar6,!bVar9);
    goto LAB_147f4d28d;
  case 4:
    bVar9 = local_10c == local_110;
    goto LAB_147f4d2dc;
  case 5:
    bVar9 = local_10c != local_110;
LAB_147f4d2dc:
    uVar5 = (ulonglong)(-(uint)bVar9 & 1);
    goto LAB_147f4d28d;
  default:
    goto switchD_147f4d284_default;
  }
  uVar5 = CONCAT71(uVar6,!bVar9 && local_10c != local_110);
LAB_147f4d28d:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147f4d2e6 FUN_147f4d2e6 body=25 status=ok
// SIG undefined FUN_147f4d2e6(void)

char FUN_147f4d2e6(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  return (cVar1 != '\x02') * '\x02';
}



// FUNCTION 147f4d300 FUN_147f4d300 body=437 status=ok
// SIG undefined FUN_147f4d300(void)

void FUN_147f4d300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x100) == '\x01') {
    FUN_141810ac4(param_1 + 0x80,local_70);
    FUN_1470ed5e8(local_60,local_70);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23bfc);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_141810ac4(param_1 + 0x108,local_80);
    FUN_1470ed5e8(local_60,local_80);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c04);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    FUN_141810ac4(param_1 + 400,local_90);
    FUN_1470ed5e8(local_60,local_90);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c0c);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(char *)(param_1 + 0x298) == '\x01') {
    FUN_141810ac4(param_1 + 0x218,local_a0);
    FUN_1470ed5e8(local_60,local_a0);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c14);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4d4ba FUN_147f4d4ba body=849 status=ok
// SIG undefined FUN_147f4d4ba(void)

void FUN_147f4d4ba(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_71;
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_71 = 2;
  local_80 = FUN_144a7be76();
  FUN_144a7bec8(param_1,local_90);
  local_70[0] = 0;
  local_48 = 0;
  FUN_144a7bf34(local_70,local_90,&local_80,&local_71);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (*(char *)(lVar6 + 0x100) == '\x01') {
    uVar4 = FUN_140343ed8(lVar6 + 0x80,local_70);
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cb23bfc);
    puVar2 = (uint *)(lVar5 + 0x40);
    if (*(byte *)(lVar5 + 0x60) == 1) {
      *puVar2 = uVar4 & 0xff;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar7 = puVar2;
        if (0x18 < *(ushort *)(lVar5 + 0x58)) {
          puVar7 = *(uint **)(lVar5 + 0x40);
        }
        (*pcVar3)(puVar7);
      }
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)puVar2);
      }
      *(undefined2 *)(lVar5 + 0x58) = 4;
      *(uint *)(lVar5 + 0x40) = uVar4 & 0xff;
      *(undefined1 *)(lVar5 + 0x60) = 1;
    }
  }
  if (*(char *)(lVar6 + 0x188) == '\x01') {
    uVar4 = FUN_140343ed8(lVar6 + 0x108,local_70);
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cb23c04);
    puVar2 = (uint *)(lVar5 + 0x40);
    if (*(byte *)(lVar5 + 0x60) == 1) {
      *puVar2 = uVar4 & 0xff;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar7 = puVar2;
        if (0x18 < *(ushort *)(lVar5 + 0x58)) {
          puVar7 = *(uint **)(lVar5 + 0x40);
        }
        (*pcVar3)(puVar7);
      }
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)puVar2);
      }
      *(undefined2 *)(lVar5 + 0x58) = 4;
      *(uint *)(lVar5 + 0x40) = uVar4 & 0xff;
      *(undefined1 *)(lVar5 + 0x60) = 1;
    }
  }
  if (*(char *)(lVar6 + 0x210) == '\x01') {
    uVar4 = FUN_140343ed8(lVar6 + 400,local_70);
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cb23c0c);
    puVar2 = (uint *)(lVar5 + 0x40);
    if (*(byte *)(lVar5 + 0x60) == 1) {
      *puVar2 = uVar4 & 0xff;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar7 = puVar2;
        if (0x18 < *(ushort *)(lVar5 + 0x58)) {
          puVar7 = *(uint **)(lVar5 + 0x40);
        }
        (*pcVar3)(puVar7);
      }
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)puVar2);
      }
      *(undefined2 *)(lVar5 + 0x58) = 4;
      *(uint *)(lVar5 + 0x40) = uVar4 & 0xff;
      *(undefined1 *)(lVar5 + 0x60) = 1;
    }
  }
  if (*(char *)(lVar6 + 0x298) == '\x01') {
    uVar4 = FUN_140343ed8(lVar6 + 0x218,local_70);
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23c14);
    puVar2 = (uint *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 1) {
      *puVar2 = uVar4 & 0xff;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar7 = puVar2;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          puVar7 = *(uint **)(lVar6 + 0x40);
        }
        (*pcVar3)(puVar7);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)puVar2);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(uint *)(lVar6 + 0x40) = uVar4 & 0xff;
      *(undefined1 *)(lVar6 + 0x60) = 1;
    }
  }
  FUN_147f574a0(param_1,param_2);
  FUN_144a5ac3a(local_70);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4d80c FUN_147f4d80c body=265 status=ok
// SIG undefined FUN_147f4d80c(void)

void FUN_147f4d80c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [16];
  undefined2 *local_70;
  int local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_1470ac0d1();
  FUN_1401cfad2(uVar1,&local_70,*(undefined1 *)(param_1 + 0x80));
  FUN_140592d2e(param_1 + 0x90,&local_90);
  puVar4 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar4 = local_90;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar3 = local_70;
  }
  FUN_140002266(local_80,L"NumAllies %s %s",puVar3,puVar4);
  FUN_1470ed5e8(local_60,local_80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23c1c);
  FUN_1403719a4(lVar2 + 8,local_60);
  FUN_144a2da94(local_60);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147f573da(param_1,param_2);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4d926 FUN_147f4d926 body=476 status=ok
// SIG undefined FUN_147f4d926(void)

void FUN_147f4d926(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 ****ppppuVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_d8 [16];
  undefined2 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)(param_1 + 0x48);
  uVar3 = FUN_1412b37f4();
  uVar5 = FUN_1470ac0d1();
  FUN_1401cfad2(uVar5,&local_c8,*(undefined1 *)(lVar6 + 0x80));
  local_a9 = 2;
  local_b8 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_70);
  local_a8[0] = 0;
  local_80 = 0;
  FUN_144a7bf34(local_a8,&local_70,&local_b8,&local_a9);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_1447c3578(lVar6 + 0x88,&local_70,local_a8);
  uVar4 = FUN_1405d5f74(&local_70);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar8 = &local_70;
    if (0x18 < local_58) {
      ppppuVar8 = (undefined8 ****)local_70;
    }
    (*pcVar2)(ppppuVar8);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70);
  }
  FUN_144a5ac3a(local_a8);
  puVar7 = local_c8;
  if (local_c0 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_e8 = uVar4;
  FUN_140002266(local_d8,L"%d %s %d",uVar3,puVar7);
  FUN_1470ed5e8(local_a8,local_d8);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23c1c);
  FUN_1403719a4(lVar6 + 8,local_a8);
  FUN_144a2da94(local_a8);
  FUN_147f574a0(param_1,param_2);
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4db04 FUN_147f4db04 body=83 status=ok
// SIG undefined FUN_147f4db04(void)

undefined8 * FUN_147f4db04(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac3ca70;
  FUN_140fbcb60(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_140440628(param_1 + 0x1a,&DAT_14cb23c3c,0);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  return param_1;
}



// FUNCTION 147f4db5e FUN_147f4db5e body=267 status=ok
// SIG undefined FUN_147f4db5e(void)

void FUN_147f4db5e(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 200) == 1) {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c2c);
    FUN_144983130(lVar1 + 8,param_1 + 0xd0);
  }
  lVar1 = (ulonglong)(*(int *)(param_1 + 0xb0) < 2) * 0x10;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0xb0 + lVar1);
  lVar2 = (longlong)local_70;
  _Src = *(void **)(param_1 + 0xa8 + lVar1);
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar2 * 2);
  }
  FUN_1470ed5e8(local_68,&local_78);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c24);
  FUN_1403719a4(lVar1 + 8,local_68);
  FUN_144a2da94(local_68);
  FUN_147f573da(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4dc6a FUN_147f4dc6a body=403 status=ok
// SIG undefined FUN_147f4dc6a(void)

undefined8 * FUN_147f4dc6a(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar6 + 200) == 1) {
    local_89 = 2;
    local_98 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_58);
    local_88[0] = 0;
    local_60 = 0;
    FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_1447c3578(lVar6 + 0xd0,&local_58,local_88);
    plVar3 = (longlong *)FUN_14070d842(&local_58);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar7 = &local_58;
      if (0x18 < local_40) {
        pppuVar7 = (undefined8 ***)local_58;
      }
      (*pcVar2)(pppuVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    FUN_144a5ac3a(local_88);
  }
  else {
    plVar3 = (longlong *)FUN_144a7be76(param_1);
  }
  puVar8 = &DAT_14caa8558;
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1401b0f18();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_1401b0f18();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
        puVar8 = (undefined8 *)(lVar6 + 0x78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4ddfe FUN_147f4ddfe body=525 status=ok
// SIG undefined FUN_147f4ddfe(void)

void FUN_147f4ddfe(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147f574a0();
  uVar3 = FUN_147f4dc6a(param_1);
  FUN_147479a5e(uVar3,&local_60,0x80);
  FUN_144a8b2a0(&local_50,&local_60,&DAT_149e01f72);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb23c34);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
    goto LAB_147f4dfb4;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120))
  ;
  if (pcVar1 != (code *)0x0) {
    ppvVar5 = ppvVar6;
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      ppvVar5 = *(void ***)(lVar4 + 0x40);
    }
    (*pcVar1)(ppvVar5);
  }
  if (0x18 < *(ushort *)(lVar4 + 0x58)) {
    FUN_1400020a8(*ppvVar6);
  }
  pvVar2 = local_50;
  local_40 = (void *)0x0;
  local_38 = local_48;
  if ((longlong)local_48 == 0) {
    local_34 = 0;
    *(undefined2 *)(lVar4 + 0x58) = 0x10;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_147f4df9c:
    *(undefined4 *)(lVar4 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_48,0);
    memcpy(local_40,pvVar2,(longlong)local_48 * 2);
    pvVar2 = local_40;
    lVar7 = (longlong)local_38;
    *(undefined2 *)(lVar4 + 0x58) = 0x10;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(int *)(lVar4 + 0x48) = local_38;
    if (lVar7 == 0) goto LAB_147f4df9c;
    FUN_1446dd670(ppvVar6,local_38,0);
    memcpy(*ppvVar6,pvVar2,lVar7 * 2);
  }
  *(undefined1 *)(lVar4 + 0x60) = 8;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
LAB_147f4dfb4:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e00c FUN_147f4e00c body=166 status=ok
// SIG undefined FUN_147f4e00c(void)

void FUN_147f4e00c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 auStack_50 [3];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  auStack_50[0] = 0;
  local_38 = 8;
  FUN_14485c47a(auStack_50,*(undefined8 *)(param_1 + 0x80));
  local_30 = 6;
  local_28 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c44);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e0b4 FUN_147f4e0b4 body=41 status=ok
// SIG undefined FUN_147f4e0b4(void)

void FUN_147f4e0b4(longlong param_1,undefined8 param_2)

{
  FUN_147f4e0de(param_1 + 0xd8);
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 147f4e0de FUN_147f4e0de body=1420 status=ok
// SIG undefined FUN_147f4e0de(void)

void FUN_147f4e0de(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  void *pvVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void **ppvVar10;
  float *pfVar11;
  wchar_t *pwVar12;
  undefined8 *_Src;
  float *pfVar13;
  longlong lVar14;
  undefined8 *_Dst;
  void **ppvVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b8 [40];
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _Src = (undefined8 *)(param_1 + 0xf8);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23c4c);
  bVar1 = *(byte *)(lVar6 + 0x60);
  _Dst = (undefined8 *)(lVar6 + 0x40);
  if (bVar1 == *(byte *)(param_1 + 0x118)) {
    if (0x18 < *(ushort *)(param_1 + 0x110)) {
      _Src = *(undefined8 **)(param_1 + 0xf8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      _Dst = *(undefined8 **)(lVar6 + 0x40);
    }
    uVar7 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar8 = _Dst;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_1 + 0x118);
    uVar2 = *(ushort *)(param_1 + 0x110);
    *(ushort *)(lVar6 + 0x58) = uVar2;
    puVar8 = _Dst;
    if (0x18 < uVar2) {
      puVar8 = (undefined8 *)FUN_14001cc68(uVar2,0);
      *_Dst = puVar8;
      _Src = (undefined8 *)*_Src;
    }
    uVar7 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar3)(puVar8,_Src);
    }
    *(undefined1 *)(lVar6 + 0x60) = *(undefined1 *)(param_1 + 0x118);
  }
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23c54);
  ppvVar15 = (void **)(lVar6 + 0x40);
  lVar9 = FUN_1470e53c2(param_2,&DAT_14cb23c5c);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    FUN_140056680(&local_90,L"Not running");
    pvVar4 = local_90;
    if (*(byte *)(lVar6 + 0x60) == 8) {
      if (ppvVar15 != &local_90) {
        *(int *)(lVar6 + 0x48) = local_88;
        if (local_88 == 0 && *(int *)(lVar6 + 0x4c) == 0) {
          *(undefined4 *)(lVar6 + 0x4c) = 0;
        }
        else {
          FUN_1446dd670(ppvVar15,local_88);
          if (local_88 != 0) {
            memcpy(*ppvVar15,pvVar4,(longlong)local_88 * 2);
          }
        }
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppvVar10 = ppvVar15;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          ppvVar10 = *(void ***)(lVar6 + 0x40);
        }
        (*pcVar3)(ppvVar10);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*ppvVar15);
      }
      pvVar4 = local_90;
      local_80 = (void *)0x0;
      local_78 = local_88;
      if ((longlong)local_88 == 0) {
        local_74 = 0;
        *(undefined2 *)(lVar6 + 0x58) = 0x10;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(undefined4 *)(lVar6 + 0x48) = 0;
LAB_147f4e639:
        *(undefined4 *)(lVar6 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_88,0);
        memcpy(local_80,pvVar4,(longlong)local_88 * 2);
        pvVar4 = local_80;
        lVar9 = (longlong)local_78;
        *(undefined2 *)(lVar6 + 0x58) = 0x10;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(int *)(lVar6 + 0x48) = local_78;
        if (lVar9 == 0) goto LAB_147f4e639;
        FUN_1446dd670(ppvVar15,local_78,0);
        memcpy(*ppvVar15,pvVar4,lVar9 * 2);
      }
      *(undefined1 *)(lVar6 + 0x60) = 8;
      if (local_80 != (void *)0x0) {
        FUN_1400020a8(local_80);
      }
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_147f4e5e4;
  }
  cVar5 = FUN_143886d22();
  if (cVar5 == '\0') {
    pwVar12 = L"Inactive";
  }
  else if (*(char *)(*(longlong *)(param_1 + 0xe8) + 0xc70) == '\x01') {
    pwVar12 = L"Paused";
  }
  else {
    pwVar12 = L"Active";
  }
  FUN_140056680(&local_90,pwVar12);
  pvVar4 = local_90;
  if (*(byte *)(lVar6 + 0x60) == 8) {
    if (ppvVar15 != &local_90) {
      *(int *)(lVar6 + 0x48) = local_88;
      if (local_88 == 0 && *(int *)(lVar6 + 0x4c) == 0) {
        *(undefined4 *)(lVar6 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar15,local_88);
        if (local_88 != 0) {
          memcpy(*ppvVar15,pvVar4,(longlong)local_88 * 2);
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppvVar10 = ppvVar15;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        ppvVar10 = *(void ***)(lVar6 + 0x40);
      }
      (*pcVar3)(ppvVar10);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*ppvVar15);
    }
    pvVar4 = local_90;
    local_80 = (void *)0x0;
    local_78 = local_88;
    if ((longlong)local_88 == 0) {
      local_74 = 0;
      *(undefined2 *)(lVar6 + 0x58) = 0x10;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined4 *)(lVar6 + 0x48) = 0;
LAB_147f4e53a:
      *(undefined4 *)(lVar6 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_88,0);
      memcpy(local_80,pvVar4,(longlong)local_88 * 2);
      pvVar4 = local_80;
      lVar14 = (longlong)local_78;
      *(undefined2 *)(lVar6 + 0x58) = 0x10;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(int *)(lVar6 + 0x48) = local_78;
      if (lVar14 == 0) goto LAB_147f4e53a;
      FUN_1446dd670(ppvVar15,local_78,0);
      memcpy(*ppvVar15,pvVar4,lVar14 * 2);
    }
    *(undefined1 *)(lVar6 + 0x60) = 8;
    if (local_80 != (void *)0x0) {
      FUN_1400020a8(local_80);
    }
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  pfVar13 = (float *)(lVar9 + 0x40);
  fVar16 = (float)FUN_140daa176(*(undefined8 *)(param_1 + 0xe8));
  fVar17 = (float)FUN_143886d18(*(undefined8 *)(param_1 + 0xe8));
  fVar18 = 0.0;
  if (0.0 <= fVar16 - fVar17) {
    fVar18 = fVar16 - fVar17;
  }
  if (*(byte *)(lVar9 + 0x60) == 3) {
    *pfVar13 = fVar18;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar9 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      pfVar11 = pfVar13;
      if (0x18 < *(ushort *)(lVar9 + 0x58)) {
        pfVar11 = *(float **)(lVar9 + 0x40);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < *(ushort *)(lVar9 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar13);
    }
    *(undefined2 *)(lVar9 + 0x58) = 4;
    *(float *)(lVar9 + 0x40) = fVar18;
    *(undefined1 *)(lVar9 + 0x60) = 3;
  }
LAB_147f4e5e4:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e66c FUN_147f4e66c body=11 status=ok
// SIG undefined FUN_147f4e66c(void)

bool FUN_147f4e66c(longlong param_1)

{
  return *(char *)(param_1 + 0x1f0) != '\0';
}



// FUNCTION 147f4e67c FUN_147f4e67c body=181 status=ok
// SIG undefined FUN_147f4e67c(void)

void FUN_147f4e67c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c6c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  local_58 = 0;
  local_38 = 4;
  local_50 = (uint)*(byte *)(param_1 + 0x132);
  local_28 = (DAT_14c9a8634 & 0x20) == 0;
  local_30 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c74);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e732 FUN_147f4e732 body=83 status=ok
// SIG undefined FUN_147f4e732(void)

undefined8 * FUN_147f4e732(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac3cc50;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23c7c,0);
  FUN_140440628(param_1 + 0x17,&DAT_14cb23c84,0);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 147f4e7a4 FUN_147f4e7a4 body=99 status=ok
// SIG undefined FUN_147f4e7a4(void)

void FUN_147f4e7a4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c8c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23c94);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f4e808 FUN_147f4e808 body=97 status=ok
// SIG undefined FUN_147f4e808(void)

void FUN_147f4e808(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_140eb09aa(&local_28);
  *(undefined4 *)(param_1 + 0xd8) = local_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e86a FUN_147f4e86a body=37 status=ok
// SIG undefined FUN_147f4e86a(void)

undefined8 FUN_147f4e86a(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf0) == '\x01') {
    cVar1 = FUN_143874bec();
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 147f4e890 FUN_147f4e890 body=92 status=ok
// SIG undefined FUN_147f4e890(void)

undefined8 * FUN_147f4e890(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  local_14 = param_2;
  FUN_1437eb57a();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4e8ee FUN_147f4e8ee body=316 status=ok
// SIG undefined FUN_147f4e8ee(void)

int FUN_147f4e8ee(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                 undefined1 param_5)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_14048b906(*param_2);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
    FUN_14048ba0c(param_1,&local_48,param_3,uVar2 & 0xffffffff);
    lVar1 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar1 == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x260);
      uStack_60 = *(undefined8 *)(lVar1 + 0x268);
      local_58 = *(undefined8 *)(lVar1 + 0x270);
    }
    if ((longlong)(int)param_4[1] != 0) {
      lVar1 = *param_4;
      lVar4 = (longlong)(int)param_4[1] * 0x30;
      iVar3 = 0;
      do {
        FUN_147f5e21a(lVar1,local_80);
        fVar5 = (float)FUN_14048b95e(uVar2 & 0xffffffff,&local_68,local_80);
        iVar3 = iVar3 + (uint)(*(byte *)(param_1 + 0x38) !=
                              (-(fVar5 <= local_48 + local_44 && local_48 - local_44 <= fVar5) & 1U)
                              );
        lVar1 = lVar1 + 0x30;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
      goto LAB_147f4e9e5;
    }
  }
  iVar3 = 0;
LAB_147f4e9e5:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 147f4ea2c FUN_147f4ea2c body=652 status=ok
// SIG undefined FUN_147f4ea2c(void)

void FUN_147f4ea2c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar2 = FUN_147f17c9d();
    FUN_1401cfad2(uVar2,local_70,1);
    FUN_1470ed5e8(local_60,local_70);
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23c9c);
    FUN_1403719a4(lVar3 + 8,local_60);
    FUN_144a2da94(local_60);
    lVar3 = param_1 + 0x88;
    puVar4 = &DAT_14cb23ccc;
LAB_147f4ead3:
    lVar1 = FUN_1470e53c2(param_2,puVar4);
    FUN_144983130(lVar1 + 8,lVar3);
  }
  else if (*(char *)(param_1 + 0x80) == '\0') {
    lVar3 = param_1 + 0xc0;
    puVar4 = &DAT_14cb23c9c;
    goto LAB_147f4ead3;
  }
  uVar2 = FUN_147f17c66();
  FUN_1401cfad2(uVar2,local_80,*(undefined1 *)(param_1 + 0xf8));
  FUN_1470ed5e8(local_60,local_80);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23ca4);
  FUN_1403719a4(lVar3 + 8,local_60);
  FUN_144a2da94(local_60);
  if (*(char *)(param_1 + 0x208) == '\x01') {
    if (*(char *)(param_1 + 0x200) == '\x01') {
      FUN_141811684(param_1 + 0x140,local_90);
      FUN_1470ed5e8(local_60,local_90);
      lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23cb4);
      FUN_1403719a4(lVar3 + 8,local_60);
      FUN_144a2da94(local_60);
    }
    if (*(char *)(param_1 + 0x201) == '\x01') {
      FUN_141811684(param_1 + 0x180,local_a0);
      FUN_1470ed5e8(local_60,local_a0);
      lVar3 = FUN_1470e53c2(param_2,&DAT_14cb23cbc);
      FUN_1403719a4(lVar3 + 8,local_60);
      FUN_144a2da94(local_60);
    }
    if (*(char *)(param_1 + 0x202) != '\x01') goto LAB_147f4eb6a;
    FUN_141811684(param_1 + 0x1c0,local_b0);
    FUN_1470ed5e8(local_60,local_b0);
    puVar4 = &DAT_14cb23cc4;
  }
  else {
    FUN_141811684(param_1 + 0x100,local_c0);
    FUN_1470ed5e8(local_60,local_c0);
    puVar4 = &DAT_14cb23cac;
  }
  lVar3 = FUN_1470e53c2(param_2,puVar4);
  FUN_1403719a4(lVar3 + 8,local_60);
  FUN_144a2da94(local_60);
LAB_147f4eb6a:
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4ecbe FUN_147f4ecbe body=84 status=ok
// SIG undefined FUN_147f4ecbe(void)

void FUN_147f4ecbe(longlong param_1)

{
  FUN_145781132(param_1 + 0x100,0,0);
  FUN_145781132(param_1 + 0x140,0,0);
  FUN_145781132(param_1 + 0x180,0,0);
  FUN_145781132(param_1 + 0x1c0,0,0);
  return;
}



// FUNCTION 147f4ed12 FUN_147f4ed12 body=2143 status=ok
// SIG undefined FUN_147f4ed12(void)

void FUN_147f4ed12(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0 [24];
  undefined8 ***local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ushort local_c0;
  ushort local_b8;
  undefined1 local_b0;
  char local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_f0[0] = 2;
  local_a0[0] = (undefined8 ***)FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_d8);
  local_78[0] = 0;
  local_50 = 0;
  FUN_144a7bf34(local_78,&local_d8,local_a0,local_f0);
  plVar16 = (longlong *)CONCAT44(uStack_cc,local_d0);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  if (*(char *)(lVar6 + 0x80) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0xd8);
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23ccc);
    puVar15 = (undefined8 *)(lVar8 + 0x40);
    if (*(byte *)(lVar8 + 0x60) == 2) {
      *(undefined4 *)puVar15 = uVar3;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar9 = puVar15;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          puVar9 = *(undefined8 **)(lVar8 + 0x40);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*puVar15);
      }
      *(undefined2 *)(lVar8 + 0x58) = 4;
      *(undefined4 *)(lVar8 + 0x40) = uVar3;
      *(undefined1 *)(lVar8 + 0x60) = 2;
    }
  }
  else if (*(char *)(lVar6 + 0x80) == '\0') {
    FUN_1447c3578(lVar6 + 0xc0,local_a0,local_78);
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23c9c);
    bVar2 = *(byte *)(lVar8 + 0x60);
    puVar15 = (undefined8 *)(lVar8 + 0x40);
    if (bVar2 == local_80) {
      ppppuVar13 = (undefined8 ****)local_a0[0];
      if (local_88 < 0x19) {
        ppppuVar13 = local_a0;
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        puVar15 = *(undefined8 **)(lVar8 + 0x40);
      }
      uVar7 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
      if (pcVar4 == (code *)0x0) {
        memcpy(puVar15,ppppuVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar4)(puVar15);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar9 = puVar15;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          puVar9 = *(undefined8 **)(lVar8 + 0x40);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*puVar15);
      }
      uVar14 = (uint)local_80;
      *(ushort *)(lVar8 + 0x58) = local_88;
      ppppuVar13 = local_a0;
      puVar9 = puVar15;
      if (0x18 < local_88) {
        puVar9 = (undefined8 *)FUN_14001cc68(local_88,0);
        *puVar15 = puVar9;
        ppppuVar13 = (undefined8 ****)local_a0[0];
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar14 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(puVar9,ppppuVar13,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar14 * 0x120)));
      }
      else {
        (*pcVar4)(puVar9,ppppuVar13);
      }
      *(byte *)(lVar8 + 0x60) = local_80;
    }
    cVar5 = FUN_1418115bc(local_a0,local_f0);
    if ((cVar5 != '\0') && (lVar8 = FUN_140343d7a(param_1), lVar8 != 0)) {
      lVar10 = FUN_1470e53c2(param_2,&DAT_14cb23cd4);
      lVar8 = *(longlong *)(lVar8 + 0x1c8);
      if (lVar8 == 0) {
        local_f8 = DAT_14c8464f0;
        local_108 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_100 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_108 = *(undefined8 *)(lVar8 + 0x260);
        uStack_100 = *(undefined8 *)(lVar8 + 0x268);
        local_f8 = *(undefined8 *)(lVar8 + 0x270);
      }
      local_d0 = FUN_14048b95e(*(undefined1 *)(lVar6 + 0xf8),&local_108,local_f0);
      local_d8 = (undefined8 ****)0x0;
      local_b8 = 4;
      local_b0 = 3;
      local_a8 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      FUN_1403719a4(lVar10 + 8,&local_d8);
      FUN_144a2da94(&local_d8);
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar13 = local_a0;
      if (0x18 < local_88) {
        ppppuVar13 = (undefined8 ****)local_a0[0];
      }
      (*pcVar4)(ppppuVar13);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(local_a0[0]);
    }
  }
  if (*(char *)(lVar6 + 0x208) == '\x01') {
    if (*(char *)(lVar6 + 0x200) == '\x01') {
      FUN_1447c3578(lVar6 + 0x140,&local_d8,local_78);
      lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23cb4);
      plVar16 = (longlong *)(lVar8 + 0x40);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar11 = plVar16;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          plVar11 = *(longlong **)(lVar8 + 0x40);
        }
        (*pcVar4)(plVar11);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*plVar16);
      }
      *(ushort *)(lVar8 + 0x58) = local_c0;
      if (local_c0 < 0x19) {
        uVar7 = (ulonglong)((uint)(byte)local_b8 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
            memcpy(plVar16,&local_d8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar16,&local_d8);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar16,&local_d8);
        }
      }
      else {
        *plVar16 = (longlong)local_d8;
        local_d8 = (undefined8 ****)0x0;
        local_c0 = 0;
      }
      *(byte *)(lVar8 + 0x60) = (byte)local_b8;
      local_b8 = local_b8 & 0xff00;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar13 = &local_d8;
        if (0x18 < local_c0) {
          ppppuVar13 = (undefined8 ****)local_d8;
        }
        (*DAT_14c9a85d0)(ppppuVar13);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8);
      }
    }
    if (*(char *)(lVar6 + 0x201) == '\x01') {
      FUN_1447c3578(lVar6 + 0x180,&local_d8,local_78);
      lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23cbc);
      plVar16 = (longlong *)(lVar8 + 0x40);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar11 = plVar16;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          plVar11 = *(longlong **)(lVar8 + 0x40);
        }
        (*pcVar4)(plVar11);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*plVar16);
      }
      *(ushort *)(lVar8 + 0x58) = local_c0;
      if (local_c0 < 0x19) {
        uVar7 = (ulonglong)((uint)(byte)local_b8 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
            memcpy(plVar16,&local_d8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar16,&local_d8);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar16,&local_d8);
        }
      }
      else {
        *plVar16 = (longlong)local_d8;
        local_d8 = (undefined8 ****)0x0;
        local_c0 = 0;
      }
      *(byte *)(lVar8 + 0x60) = (byte)local_b8;
      local_b8 = local_b8 & 0xff00;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar13 = &local_d8;
        if (0x18 < local_c0) {
          ppppuVar13 = (undefined8 ****)local_d8;
        }
        (*DAT_14c9a85d0)(ppppuVar13);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8);
      }
    }
    if (*(char *)(lVar6 + 0x202) != '\x01') goto LAB_147f4ede8;
    FUN_1447c3578(lVar6 + 0x1c0,&local_d8,local_78);
    puVar12 = &DAT_14cb23cc4;
  }
  else {
    FUN_1447c3578(lVar6 + 0x100,&local_d8,local_78);
    puVar12 = &DAT_14cb23cac;
  }
  lVar6 = FUN_1470e53c2(param_2,puVar12);
  plVar16 = (longlong *)(lVar6 + 0x40);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120))
  ;
  if (pcVar4 != (code *)0x0) {
    plVar11 = plVar16;
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      plVar11 = *(longlong **)(lVar6 + 0x40);
    }
    (*pcVar4)(plVar11);
  }
  if (0x18 < *(ushort *)(lVar6 + 0x58)) {
    FUN_1400020a8(*plVar16);
  }
  *(ushort *)(lVar6 + 0x58) = local_c0;
  if (local_c0 < 0x19) {
    uVar7 = (ulonglong)((uint)(byte)local_b8 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
        memcpy(plVar16,&local_d8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar16,&local_d8);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar16,&local_d8);
    }
  }
  else {
    *plVar16 = (longlong)local_d8;
    local_d8 = (undefined8 ****)0x0;
    local_c0 = 0;
  }
  *(byte *)(lVar6 + 0x60) = (byte)local_b8;
  local_b8 = local_b8 & 0xff00;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar13 = &local_d8;
    if (0x18 < local_c0) {
      ppppuVar13 = (undefined8 ****)local_d8;
    }
    (*DAT_14c9a85d0)(ppppuVar13);
  }
  if (0x18 < local_c0) {
    FUN_1400020a8(local_d8);
  }
LAB_147f4ede8:
  FUN_147f574a0(param_1,param_2);
  FUN_144a5ac3a(local_78);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f4f572 FUN_147f4f572 body=310 status=ok
// SIG undefined FUN_147f4f572(void)

void FUN_147f4f572(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147f58661(&local_60,*(undefined1 *)(param_1 + 0x80));
  local_58 = 0;
  local_38 = 8;
  local_50 = local_60;
  local_30 = 0x12;
  local_28 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23cfc);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23cf4);
    FUN_144983130(lVar1 + 8,param_1 + 0x88);
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d04);
    FUN_144983130(lVar1 + 8,param_1 + 200);
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d0c);
    FUN_144983130(lVar1 + 8,param_1 + 0x108);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4f6ae FUN_147f4f6ae body=1057 status=ok
// SIG undefined FUN_147f4f6ae(void)

void FUN_147f4f6ae(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float *pfVar2;
  code *pcVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 **_Src;
  longlong lVar6;
  void **ppvVar7;
  float *pfVar8;
  void **ppvVar9;
  undefined8 ***pppuVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [40];
  void *local_d0;
  int local_c8;
  undefined1 local_b9;
  undefined8 **local_b8;
  int local_b0;
  undefined4 uStack_ac;
  ushort local_a0;
  byte local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147f574a0();
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_b9 = 2;
  local_d0 = (void *)FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_b8);
  local_90[0] = 0;
  local_68 = 0;
  FUN_144a7bf34(local_90,&local_b8,&local_d0,&local_b9);
  plVar4 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((*(char *)(lVar6 + 0x100) == '\x01') && (0.0 < *(float *)(param_1 + 0x110))) {
    FUN_1447c3578(lVar6 + 200,&local_b8,local_90);
    fVar12 = (float)FUN_144a7ecd0(&local_b8);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar10 = &local_b8;
      if (0x18 < local_a0) {
        pppuVar10 = (undefined8 ***)local_b8;
      }
      (*pcVar3)(pppuVar10);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8);
    }
    fVar13 = *(float *)(param_1 + 0x110);
    fVar14 = (float)FUN_141236616(param_1);
    fVar14 = (fVar12 + fVar13) - fVar14;
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar14;
    }
    lVar11 = FUN_1470e53c2(param_2,&DAT_14cb23d04);
    pfVar2 = (float *)(lVar11 + 0x40);
    if (*(byte *)(lVar11 + 0x60) == 3) {
      *pfVar2 = fVar12;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        pfVar8 = pfVar2;
        if (0x18 < *(ushort *)(lVar11 + 0x58)) {
          pfVar8 = *(float **)(lVar11 + 0x40);
        }
        (*pcVar3)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar11 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar2);
      }
      *(undefined2 *)(lVar11 + 0x58) = 4;
      *(float *)(lVar11 + 0x40) = fVar12;
      *(undefined1 *)(lVar11 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar6 + 0x140) != '\x01') goto LAB_147f4f771;
  FUN_1447c3578(lVar6 + 0x108,&local_b8,local_90);
  fVar12 = (float)FUN_144a7ecd0(&local_b8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar10 = &local_b8;
    if (0x18 < local_a0) {
      pppuVar10 = (undefined8 ***)local_b8;
    }
    (*pcVar3)(pppuVar10);
  }
  if (0x18 < local_a0) {
    FUN_1400020a8(local_b8);
  }
  fVar13 = (float)FUN_140b399a0(param_1,lVar6);
  FUN_140002266(&local_d0,L"%0.02f / %0.02f)",(double)fVar13,(double)fVar12);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23d0c);
  pvVar5 = local_d0;
  ppvVar9 = (void **)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 8) {
    if (ppvVar9 != &local_d0) {
      *(int *)(lVar6 + 0x48) = local_c8;
      if (local_c8 == 0 && *(int *)(lVar6 + 0x4c) == 0) {
        *(undefined4 *)(lVar6 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar9,local_c8);
        if (local_c8 != 0) {
          memcpy(*ppvVar9,pvVar5,(longlong)local_c8 * 2);
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppvVar7 = ppvVar9;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        ppvVar7 = *(void ***)(lVar6 + 0x40);
      }
      (*pcVar3)(ppvVar7);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*ppvVar9);
    }
    pvVar5 = local_d0;
    local_b8 = (undefined8 ***)0x0;
    local_b0 = local_c8;
    if ((longlong)local_c8 == 0) {
      uStack_ac = 0;
      *(undefined2 *)(lVar6 + 0x58) = 0x10;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined4 *)(lVar6 + 0x48) = 0;
LAB_147f4fa97:
      *(undefined4 *)(lVar6 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_c8,0);
      memcpy(local_b8,pvVar5,(longlong)local_c8 * 2);
      _Src = local_b8;
      lVar11 = (longlong)local_b0;
      *(undefined2 *)(lVar6 + 0x58) = 0x10;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(int *)(lVar6 + 0x48) = local_b0;
      if (lVar11 == 0) goto LAB_147f4fa97;
      FUN_1446dd670(ppvVar9,local_b0,0);
      memcpy(*ppvVar9,_Src,lVar11 * 2);
    }
    *(undefined1 *)(lVar6 + 0x60) = 8;
    if ((undefined8 ***)local_b8 != (undefined8 ***)0x0) {
      FUN_1400020a8(local_b8);
    }
  }
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147f4f771:
  FUN_144a5ac3a(local_90);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4fad0 FUN_147f4fad0 body=209 status=ok
// SIG undefined FUN_147f4fad0(void)

void FUN_147f4fad0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f573da();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d34);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d3c);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  local_58 = 0;
  local_38 = 4;
  local_50 = (uint)*(byte *)(param_1 + 0xf0);
  local_28 = (DAT_14c9a8634 & 0x20) == 0;
  local_30 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d44);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4fba2 FUN_147f4fba2 body=403 status=ok
// SIG undefined FUN_147f4fba2(void)

byte * FUN_147f4fba2(longlong param_1,byte *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_99;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined4 local_70;
  undefined8 **local_68;
  longlong *local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    param_2[0] = 0;
    param_2[1] = 1;
    goto LAB_147f4fc9a;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_99 = 2;
  local_a8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_68);
  local_98 = 0;
  local_70 = 0;
  FUN_144a7bf34(&local_98,&local_68,&local_a8,&local_99);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,&local_68,&local_98);
  FUN_144a5ac3a(&local_98);
  FUN_1438130a6(&local_98,*(undefined8 *)(param_1 + 0xd8));
  iVar5 = FUN_147e47d32(CONCAT71(uStack_97,local_98),&local_68);
  if (iVar5 == 1) {
    bVar4 = *(byte *)(lVar2 + 0xf1);
LAB_147f4fcd1:
    *param_2 = bVar4;
    bVar4 = 1;
  }
  else {
    if (iVar5 == 2) {
      bVar4 = *(byte *)(lVar2 + 0xf1) ^ 1;
      goto LAB_147f4fcd1;
    }
    bVar4 = 0;
  }
  param_2[1] = bVar4;
  FUN_1438130c8(&local_98);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar6 = &local_68;
    if (0x18 < local_50) {
      pppuVar6 = (undefined8 ***)local_68;
    }
    (*pcVar3)(pppuVar6);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
LAB_147f4fc9a:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4fd36 FUN_147f4fd36 body=93 status=ok
// SIG undefined FUN_147f4fd36(void)

undefined8 FUN_147f4fd36(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [38];
  char local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf0) == '\x01') {
    FUN_147f4fba2(param_1,&local_12);
    if ((local_11 == '\x01') && (local_12 != '\x01')) {
      uVar1 = 2;
      goto LAB_147f4fd59;
    }
  }
  uVar1 = 0;
LAB_147f4fd59:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4fd94 FUN_147f4fd94 body=81 status=ok
// SIG undefined FUN_147f4fd94(void)

void FUN_147f4fd94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f4fdda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f4fde6 FUN_147f4fde6 body=80 status=ok
// SIG undefined FUN_147f4fde6(void)

undefined8 * FUN_147f4fde6(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac47a10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140440628(param_1 + 0x11,&DAT_14cb23d4c,0);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  return param_1;
}



// FUNCTION 147f4fe3c FUN_147f4fe3c body=16 status=ok
// SIG undefined FUN_147f4fe3c(void)

char FUN_147f4fe3c(void)

{
  char cVar1;
  
  cVar1 = FUN_1438797ea();
  return cVar1 * '\x02';
}



// FUNCTION 147f4fe4c FUN_147f4fe4c body=37 status=ok
// SIG undefined FUN_147f4fe4c(void)

undefined8 FUN_147f4fe4c(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xc1) == '\x01') {
    cVar1 = FUN_1438797ea();
    if (cVar1 == '\0') {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 147f4fe72 FUN_147f4fe72 body=319 status=ok
// SIG undefined FUN_147f4fe72(void)

void FUN_147f4fe72(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0x80) == 1) {
    local_89 = 2;
    local_98 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_58);
    local_88[0] = 0;
    local_60 = 0;
    FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_1447c3578(lVar2 + 0x88,&local_58,local_88);
    uVar4 = FUN_14030a32e(&local_58);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar5 = &local_58;
      if (0x18 < local_40) {
        pppuVar5 = (undefined8 ***)local_58;
      }
      (*pcVar3)(pppuVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    FUN_144a5ac3a(local_88);
  }
  else {
    uVar4 = FUN_140343d7a(param_1);
  }
  FUN_140a40fb0(uVar4);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4ffc2 FUN_147f4ffc2 body=262 status=ok
// SIG undefined FUN_147f4ffc2(void)

void FUN_147f4ffc2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x100) == '\x01') {
    FUN_141810ac4(param_1 + 0x80,local_70);
    FUN_1470ed5e8(local_60,local_70);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d54);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d5c);
    FUN_144983130(lVar1 + 8,param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x180) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d64);
    FUN_144983130(lVar1 + 8,param_1 + 0x148);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f500ce FUN_147f500ce body=958 status=ok
// SIG undefined FUN_147f500ce(void)

void FUN_147f500ce(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int *piVar10;
  float *pfVar11;
  undefined8 ***pppuVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 **local_b8;
  longlong *local_b0;
  ushort local_a0;
  byte local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *(longlong *)(param_1 + 0x48);
  local_b9 = 2;
  local_c8 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_b8);
  local_90[0] = 0;
  local_68 = 0;
  FUN_144a7bf34(local_90,&local_b8,&local_c8,&local_b9);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (*(char *)(lVar8 + 0x100) == '\x01') {
    uVar5 = FUN_140343ed8(lVar8 + 0x80,local_90);
    lVar7 = FUN_1470e53c2(param_2,&DAT_14cb23d54);
    puVar2 = (uint *)(lVar7 + 0x40);
    if (*(byte *)(lVar7 + 0x60) == 1) {
      *puVar2 = uVar5 & 0xff;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar9 = puVar2;
        if (0x18 < *(ushort *)(lVar7 + 0x58)) {
          puVar9 = *(uint **)(lVar7 + 0x40);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)puVar2);
      }
      *(undefined2 *)(lVar7 + 0x58) = 4;
      *(uint *)(lVar7 + 0x40) = uVar5 & 0xff;
      *(undefined1 *)(lVar7 + 0x60) = 1;
    }
  }
  if (*(char *)(lVar8 + 0x140) == '\x01') {
    if (*(int *)(param_1 + 0xdc) < 1) {
      FUN_1447c3578(lVar8 + 0x108,&local_b8,local_90);
      iVar6 = FUN_1405d5f74(&local_b8);
      iVar6 = iVar6 - *(int *)(param_1 + 0xd8);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppuVar12 = &local_b8;
        if (0x18 < local_a0) {
          pppuVar12 = (undefined8 ***)local_b8;
        }
        (*pcVar4)(pppuVar12);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(local_b8);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8);
    }
    iVar13 = 0;
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    lVar7 = FUN_1470e53c2(param_2,&DAT_14cb23d5c);
    piVar1 = (int *)(lVar7 + 0x40);
    if (*(byte *)(lVar7 + 0x60) == 2) {
      *piVar1 = iVar13;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        piVar10 = piVar1;
        if (0x18 < *(ushort *)(lVar7 + 0x58)) {
          piVar10 = *(int **)(lVar7 + 0x40);
        }
        (*pcVar4)(piVar10);
      }
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)piVar1);
      }
      *(undefined2 *)(lVar7 + 0x58) = 4;
      *(int *)(lVar7 + 0x40) = iVar13;
      *(undefined1 *)(lVar7 + 0x60) = 2;
    }
  }
  if (*(char *)(lVar8 + 0x180) == '\x01') {
    fVar14 = *(float *)(param_1 + 0xe0);
    if (0.0 < fVar14) {
      fVar15 = (float)FUN_141236616(param_1);
      fVar14 = fVar14 - fVar15;
    }
    else {
      FUN_1447c3578(lVar8 + 0x148,&local_b8,local_90);
      fVar14 = (float)FUN_144a7ecd0(&local_b8);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppuVar12 = &local_b8;
        if (0x18 < local_a0) {
          pppuVar12 = (undefined8 ***)local_b8;
        }
        (*pcVar4)(pppuVar12);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(local_b8);
      }
    }
    fVar15 = 0.0;
    if (0.0 <= fVar14) {
      fVar15 = fVar14;
    }
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23d64);
    pfVar3 = (float *)(lVar8 + 0x40);
    if (*(byte *)(lVar8 + 0x60) == 3) {
      *pfVar3 = fVar15;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        pfVar11 = pfVar3;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          pfVar11 = *(float **)(lVar8 + 0x40);
        }
        (*pcVar4)(pfVar11);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar3);
      }
      *(undefined2 *)(lVar8 + 0x58) = 4;
      *(float *)(lVar8 + 0x40) = fVar15;
      *(undefined1 *)(lVar8 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  FUN_144a5ac3a(local_90);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5048e FUN_147f5048e body=703 status=ok
// SIG undefined FUN_147f5048e(void)

/* WARNING: Removing unreachable block (ram,0x000147f5067b) */
/* WARNING: Removing unreachable block (ram,0x000147f505de) */
/* WARNING: Removing unreachable block (ram,0x000147f5071b) */

void FUN_147f5048e(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_79;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147f582ec();
  if (*(char *)(param_1 + 0xb4) == '\x02') {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar3 + 0x100) == '\x01') {
      local_79 = 2;
      local_a0[0] = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_90);
      local_78 = local_78 & 0xffffffffffffff00;
      local_50 = 0;
      FUN_144a7bf34(&local_78,&local_90,local_a0,&local_79);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      cVar4 = FUN_140343ed8(lVar3 + 0x80,&local_78);
      pwVar6 = L"false";
      if (cVar4 != '\0') {
        pwVar6 = L"true";
      }
      FUN_140056680(local_a0,L"Condition: ");
      FUN_144a882a8(&local_90,local_a0,pwVar6);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_3,iVar2);
      }
      lVar5 = *param_3;
      lVar7 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar5 + lVar7) = 0;
      *(undefined8 *)(lVar5 + lVar7) = local_90;
      *(undefined4 *)(lVar5 + 8 + lVar7) = (undefined4)local_88;
      *(undefined4 *)(lVar5 + 0xc + lVar7) = local_88._4_4_;
      local_88 = (longlong *)0x0;
      local_90 = 0;
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_144a5ac3a(&local_78);
    }
    if (*(char *)(lVar3 + 0x140) == '\x01') {
      FUN_140002266(&local_78,L"Count: %u of %u",*(undefined4 *)(param_1 + 0xd8),
                    *(undefined4 *)(param_1 + 0xdc));
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_3,iVar2);
      }
      lVar5 = *param_3;
      lVar7 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar5 + lVar7) = 0;
      *(ulonglong *)(lVar5 + lVar7) = local_78;
      local_78 = 0;
      *(undefined4 *)(lVar5 + 8 + lVar7) = (undefined4)local_70;
      *(undefined4 *)(lVar5 + 0xc + lVar7) = local_70._4_4_;
      local_70 = 0;
    }
    if (*(char *)(lVar3 + 0x180) == '\x01') {
      fVar8 = *(float *)(param_1 + 0xe0) - *(float *)(param_2 + 8);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      FUN_140002266(&local_78,L"Duration: %0.02fs of %0.02fs",(double)fVar8,
                    (double)*(float *)(param_1 + 0xe4));
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_3,iVar2);
      }
      lVar3 = *param_3;
      lVar5 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar3 + lVar5) = 0;
      *(ulonglong *)(lVar3 + lVar5) = local_78;
      local_78 = 0;
      *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_70;
      *(undefined4 *)(lVar3 + 0xc + lVar5) = local_70._4_4_;
      local_70 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f5075e FUN_147f5075e body=430 status=ok
// SIG undefined FUN_147f5075e(void)

void FUN_147f5075e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  uint local_68;
  undefined2 local_50;
  undefined1 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d6c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    local_70 = 0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xb9);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d7c);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_70 = 0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xba);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d84);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_70 = 0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xbb);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d8c);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
    local_70 = 0;
    local_50 = 4;
    local_68 = (uint)*(byte *)(param_1 + 0xbc);
    local_40 = (DAT_14c9a8634 & 0x20) == 0;
    local_48 = 1;
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23d94);
    FUN_1403719a4(lVar1 + 8,&local_70);
    FUN_144a2da94(&local_70);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5093c FUN_147f5093c body=65 status=ok
// SIG undefined FUN_147f5093c(void)

void FUN_147f5093c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23dac);
  FUN_144983130(lVar1 + 8,param_1 + 0x1e8);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f5097e FUN_147f5097e body=92 status=ok
// SIG undefined FUN_147f5097e(void)

void FUN_147f5097e(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(char *)(param_2 + 1);
  if (local_14 == '\x01') {
    local_18 = *param_2;
  }
  (**(code **)(*param_1 + 0x130))(param_1,&local_18);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f509dc FUN_147f509dc body=166 status=ok
// SIG undefined FUN_147f509dc(void)

void FUN_147f509dc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 auStack_50 [3];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  auStack_50[0] = 0;
  local_38 = 8;
  FUN_14485c47a(auStack_50,*(undefined8 *)(param_1 + 0x1e8));
  local_30 = 6;
  local_28 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23db4);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f50a84 FUN_147f50a84 body=41 status=ok
// SIG undefined FUN_147f50a84(void)

void FUN_147f50a84(longlong param_1,undefined8 param_2)

{
  FUN_147f4e0de(param_1 + 0x120);
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 147f50aae FUN_147f50aae body=92 status=ok
// SIG undefined FUN_147f50aae(void)

void FUN_147f50aae(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(char *)(param_2 + 1);
  if (local_14 == '\x01') {
    local_18 = *param_2;
  }
  (**(code **)(*param_1 + 0x130))(param_1,&local_18);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f50b12 FUN_147f50b12 body=67 status=ok
// SIG undefined FUN_147f50b12(void)

void FUN_147f50b12(longlong param_1)

{
  longlong lVar1;
  
  FUN_14066e964();
  lVar1 = FUN_140343d7a(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_140a40fb0(lVar1);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0xdc,lVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 147f50b56 FUN_147f50b56 body=37 status=ok
// SIG undefined FUN_147f50b56(void)

char FUN_147f50b56(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x28))();
  cVar1 = FUN_144729dda((longlong)param_1 + 0xdc);
  return cVar1 * '\x02';
}



// FUNCTION 147f50b7c FUN_147f50b7c body=668 status=ok
// SIG undefined FUN_147f50b7c(void)

void FUN_147f50b7c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  undefined8 ***pppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  undefined8 **local_d8;
  longlong *plStack_d0;
  double local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  longlong *plStack_70;
  undefined8 local_68;
  ushort uStack_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140cad146();
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar5 = FUN_140343d7a(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_14479d2ce(param_1 + 0xdc);
    if (lVar6 != 0) {
      local_e8[0] = 2;
      local_108 = (double)FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_78);
      local_d8 = (undefined8 **)((ulonglong)local_d8 & 0xffffffffffffff00);
      uStack_b0 = 0;
      FUN_144a7bf34(&local_d8,&local_78,&local_108,local_e8);
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_70 + 0x10))();
        }
      }
      FUN_1447c3578(lVar2 + 0x80,&local_78,&local_d8);
      FUN_144a7b7fe(&local_78,&local_108);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar3 != (code *)0x0) {
        pppuVar8 = &local_78;
        if (0x18 < uStack_60) {
          pppuVar8 = (undefined8 ***)local_78;
        }
        (*pcVar3)(pppuVar8);
      }
      if (0x18 < uStack_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(&local_d8);
      lVar4 = *(longlong *)(lVar5 + 0x1c8);
      if (lVar4 == 0) {
        pdVar7 = (double *)&DAT_14c8464e0;
        uVar9 = (undefined4)DAT_14c8464f0;
        uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
        pdVar7 = (double *)(lVar4 + 0x260);
      }
      local_c8 = local_f8 - (double)CONCAT44(uVar10,uVar9);
      plStack_d0 = (longlong *)(dStack_100 - pdVar7[1]);
      local_d8 = (undefined8 **)(local_108 - *pdVar7);
      FUN_144afe7fe(&local_d8,&local_78);
      local_d8 = local_78;
      plStack_d0 = plStack_70;
      local_c8 = (double)local_68;
      uStack_b0 = SUB84(dStack_100,0);
      uStack_ac = (undefined4)((ulonglong)dStack_100 >> 0x20);
      local_b8 = (undefined4)local_108;
      uStack_b4 = local_108._4_4_;
      local_a8 = local_f8;
      uStack_a0 = 0;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0x3ff0000000000000;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      FUN_147e3f446(lVar6,&local_d8,lVar2 + 0xb8);
      *(undefined1 *)(param_1 + 0xd8) = 0;
      local_118 = 0;
      FUN_14485c47a(&local_118,lVar5);
      FUN_147f54ed6(local_e8,param_1,&local_118);
      FUN_1403734ae(lVar6 + 0x1258,&local_110,local_e8);
      FUN_1449db362(local_e8);
      *(undefined8 *)(param_1 + 0xe8) = local_110;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f50e1a FUN_147f50e1a body=167 status=ok
// SIG undefined FUN_147f50e1a(void)

void FUN_147f50e1a(longlong param_1,int *param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_4;
  lVar1 = FUN_14479d2ce();
  lVar2 = FUN_140343d7a(param_1);
  if (((lVar1 == lVar2) && (*param_2 != -1)) && (*param_3 == -1)) {
    lVar1 = FUN_140343d7a(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_14479d2ce(param_1 + 0xdc);
      if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
        FUN_14480f766(lVar1 + 0x1258);
      }
    }
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f50eca FUN_147f50eca body=65 status=ok
// SIG undefined FUN_147f50eca(void)

void FUN_147f50eca(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23dc4);
  FUN_144983130(lVar1 + 8,param_1 + 0x1e8);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f50f0c FUN_147f50f0c body=133 status=ok
// SIG undefined FUN_147f50f0c(void)

void FUN_147f50f0c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23de4);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23dec);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23df4);
  FUN_144983130(lVar1 + 8,param_1 + 0xf0);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f50f92 FUN_147f50f92 body=328 status=ok
// SIG undefined FUN_147f50f92(void)

ulonglong FUN_147f50f92(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  char local_64;
  undefined1 local_60 [40];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((*(char *)(lVar2 + 0x128) == '\x01') && (*(char *)(lVar2 + 0xe0) == '\r')) {
    FUN_140577a88(lVar2 + 0xc0,local_a0);
    local_69 = 2;
    local_78 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,local_88);
    local_60[0] = 0;
    local_38 = 0;
    FUN_144a7bf34(local_60,local_88,&local_78,&local_69);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    puVar5 = local_60;
    plVar4 = (longlong *)FUN_14057746a(local_a0,puVar5);
    FUN_144a5ac3a(puVar5);
    if (plVar4 != (longlong *)0x0) {
      local_64 = *(char *)(param_2 + 1);
      if (local_64 == '\x01') {
        local_68 = *param_2;
      }
      uVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_68);
      puVar5 = (undefined1 *)(ulonglong)uVar3;
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (plVar4 != (longlong *)0x0) goto LAB_147f510a1;
  }
  puVar5 = (undefined1 *)0x0;
LAB_147f510a1:
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar5 & 0xffffff01;
}



// FUNCTION 147f510dc FUN_147f510dc body=88 status=ok
// SIG undefined FUN_147f510dc(void)

void FUN_147f510dc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(char *)(param_2 + 1);
  if (local_14 == '\x01') {
    local_18 = *param_2;
  }
  FUN_147f50f92(param_1,&local_18);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f51136 FUN_147f51136 body=912 status=ok
// SIG undefined FUN_147f51136(void)

void FUN_147f51136(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_2c8 [40];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 *local_248;
  undefined4 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined4 local_228 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_147f573da();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23e1c);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  if (*(int *)(param_1 + 0xf8) != 0) {
    local_248 = local_228;
    local_230 = '\0';
    local_238 = &local_28;
    local_240 = local_248;
    uVar3 = FUN_147f1cc46();
    FUN_1401cfad2(uVar3,&local_280,(longlong)*(int *)(param_1 + 0xf8));
    iVar1 = iStack_278 + -1;
    if (iStack_278 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_248,CONCAT44(uStack_27c,local_280),iVar1);
    if (CONCAT44(uStack_27c,local_280) != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0xf8) == 1) {
      if (local_238 <= (ulonglong *)((longlong)local_240 + 6U)) {
        FUN_140213274(&local_248,3);
      }
      *(undefined2 *)(local_240 + 1) = 0x20;
      *local_240 = 0x3d0020;
      local_240 = (undefined4 *)((longlong)local_240 + 6);
      FUN_140592d2e(param_1 + 0x108,&local_280);
      iVar1 = iStack_278 + -1;
      if (iStack_278 == 0) {
        iVar1 = 0;
      }
      FUN_1449668a2(&local_248,CONCAT44(uStack_27c,local_280),iVar1);
      if (CONCAT44(uStack_27c,local_280) != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14006620a(&local_280,local_248,(ulonglong)((longlong)local_240 - (longlong)local_248) >> 1);
    local_290 = local_280;
    uStack_28c = uStack_27c;
    iStack_288 = iStack_278;
    uStack_284 = uStack_274;
    FUN_1470ed5e8(&local_280);
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23dfc);
    FUN_1403719a4(lVar2 + 8,&local_280);
    FUN_144a2da94(&local_280);
    if (local_230 == '\x01') {
      FUN_1400020a8(local_248);
    }
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    local_248 = local_228;
    local_230 = '\0';
    local_238 = &local_28;
    local_240 = local_248;
    uVar3 = FUN_147f1cc7d();
    FUN_1401cfad2(uVar3,&local_280,(longlong)*(int *)(param_1 + 0x17c));
    iVar1 = iStack_278 + -1;
    if (iStack_278 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_248,CONCAT44(uStack_27c,local_280),iVar1);
    if (CONCAT44(uStack_27c,local_280) != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x17c) == 2) {
      if (local_238 <= (ulonglong *)((longlong)local_240 + 6U)) {
        FUN_140213274(&local_248,3);
      }
      *(undefined2 *)(local_240 + 1) = 0x20;
      *local_240 = 0x3d0020;
      local_240 = (undefined4 *)((longlong)local_240 + 6);
      FUN_140592d2e(param_1 + 0x188,&local_280);
      iVar1 = iStack_278 + -1;
      if (iStack_278 == 0) {
        iVar1 = 0;
      }
      FUN_1449668a2(&local_248,CONCAT44(uStack_27c,local_280),iVar1);
      if (CONCAT44(uStack_27c,local_280) != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14006620a(&local_280,local_248,(ulonglong)((longlong)local_240 - (longlong)local_248) >> 1);
    local_2a0 = local_280;
    uStack_29c = uStack_27c;
    iStack_298 = iStack_278;
    uStack_294 = uStack_274;
    FUN_1470ed5e8(&local_280);
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23e04);
    FUN_1403719a4(lVar2 + 8,&local_280);
    FUN_144a2da94(&local_280);
    if (local_230 == '\x01') {
      FUN_1400020a8(local_248);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f514cc FUN_147f514cc body=1471 status=ok
// SIG undefined FUN_147f514cc(void)

void FUN_147f514cc(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *_Src;
  undefined8 ***pppuVar12;
  undefined8 *_Dst;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined1 local_d1;
  undefined8 **local_d0;
  longlong *local_c8;
  ushort local_b8;
  byte local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80 [2];
  undefined1 local_78 [40];
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_147f574a0();
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_78[0] = 0;
  local_50[0] = 0;
  local_d1 = 2;
  local_e0 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_d0);
  local_a8[0] = 0;
  local_80[0] = 0;
  FUN_144a7bf34(local_a8,&local_d0,&local_e0,&local_d1);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_c8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (*(int *)(lVar6 + 0xb8) == 1) {
    FUN_1447c3578(lVar6 + 0xc0,&local_d0,local_a8);
    uVar5 = FUN_14070d842(&local_d0);
    FUN_1456bb102(local_78,uVar5);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar12 = &local_d0;
      if (0x18 < local_b8) {
        pppuVar12 = (undefined8 ***)local_d0;
      }
      (*pcVar4)(pppuVar12);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
  }
  else {
    FUN_1447f8f6a(local_78,local_a8);
    FUN_14495544a(local_50,local_80);
  }
  if ((*(int *)(lVar6 + 0xf8) == 1) &&
     (((&DAT_14c9a8514)[(uint)*(byte *)(lVar6 + 0x128) * 0x120] & 0x20) != 0)) {
    FUN_1414321f6(lVar6 + 0x100,&local_d0,local_78,local_a8);
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cb23dfc);
    plVar11 = (longlong *)(lVar8 + 0x40);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar10 = plVar11;
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        plVar10 = *(longlong **)(lVar8 + 0x40);
      }
      (*pcVar4)(plVar10);
    }
    if (0x18 < *(ushort *)(lVar8 + 0x58)) {
      FUN_1400020a8(*plVar11);
    }
    *(ushort *)(lVar8 + 0x58) = local_b8;
    if (local_b8 < 0x19) {
      uVar7 = (ulonglong)((uint)local_b0 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
          memcpy(plVar11,&local_d0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar11,&local_d0);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar11,&local_d0);
      }
    }
    else {
      *plVar11 = (longlong)local_d0;
      local_d0 = (undefined8 ***)0x0;
      local_b8 = 0;
    }
    *(byte *)(lVar8 + 0x60) = local_b0;
    local_b0 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      pppuVar12 = &local_d0;
      if (0x18 < local_b8) {
        pppuVar12 = (undefined8 ***)local_d0;
      }
      (*DAT_14c9a85d0)(pppuVar12);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0);
    }
  }
  if (*(int *)(lVar6 + 0x17c) == 2) {
    if (((&DAT_14c9a8514)[(uint)*(byte *)(lVar6 + 0x1a8) * 0x120] & 0x20) != 0) {
      FUN_1414321f6(lVar6 + 0x180,&local_d0,local_78,local_a8);
      lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e04);
      plVar11 = (longlong *)(lVar6 + 0x40);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar10 = plVar11;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          plVar10 = *(longlong **)(lVar6 + 0x40);
        }
        (*pcVar4)(plVar10);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*plVar11);
      }
      *(ushort *)(lVar6 + 0x58) = local_b8;
      if (local_b8 < 0x19) {
        uVar7 = (ulonglong)((uint)local_b0 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
            memcpy(plVar11,&local_d0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar11,&local_d0);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar11,&local_d0);
        }
      }
      else {
        *plVar11 = (longlong)local_d0;
        local_d0 = (undefined8 ***)0x0;
        local_b8 = 0;
      }
      *(byte *)(lVar6 + 0x60) = local_b0;
      local_b0 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppuVar12 = &local_d0;
        if (0x18 < local_b8) {
          pppuVar12 = (undefined8 ***)local_d0;
        }
        (*DAT_14c9a85d0)(pppuVar12);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(local_d0);
      }
    }
  }
  else if (*(int *)(lVar6 + 0x17c) == 1) {
    _Src = (undefined8 *)(param_1 + 0xd8);
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e04);
    bVar2 = *(byte *)(lVar6 + 0x60);
    _Dst = (undefined8 *)(lVar6 + 0x40);
    if (bVar2 == *(byte *)(param_1 + 0xf8)) {
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        _Src = *(undefined8 **)(param_1 + 0xd8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        _Dst = *(undefined8 **)(lVar6 + 0x40);
      }
      uVar7 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
      if (pcVar4 == (code *)0x0) {
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar4)(_Dst,_Src);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar9 = _Dst;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          puVar9 = *(undefined8 **)(lVar6 + 0x40);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*_Dst);
      }
      bVar2 = *(byte *)(param_1 + 0xf8);
      uVar3 = *(ushort *)(param_1 + 0xf0);
      *(ushort *)(lVar6 + 0x58) = uVar3;
      puVar9 = _Dst;
      if (0x18 < uVar3) {
        puVar9 = (undefined8 *)FUN_14001cc68(uVar3,0);
        *_Dst = puVar9;
        _Src = (undefined8 *)*_Src;
      }
      uVar7 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
      if (pcVar4 == (code *)0x0) {
        memcpy(puVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar4)(puVar9,_Src);
      }
      *(undefined1 *)(lVar6 + 0x60) = *(undefined1 *)(param_1 + 0xf8);
    }
  }
  FUN_144a5ac3a(local_a8);
  FUN_144a5ac3a(local_78);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f51a8c FUN_147f51a8c body=157 status=ok
// SIG undefined FUN_147f51a8c(void)

void FUN_147f51a8c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_1 + 0x80);
  local_58 = 0;
  local_38 = 8;
  local_30 = 0x12;
  local_28 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e38);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f51b3a FUN_147f51b3a body=390 status=ok
// SIG undefined FUN_147f51b3a(void)

void FUN_147f51b3a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong auStack_50 [3];
  undefined2 local_38;
  undefined1 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  auStack_50[0] = 0;
  local_38 = 8;
  FUN_14485c47a(auStack_50,*(undefined8 *)(param_1 + 0x80));
  local_30 = 6;
  local_28 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23e48);
  FUN_1403719a4(lVar2 + 8,&local_58);
  FUN_144a2da94(&local_58);
  local_58 = 0;
  local_38 = 4;
  auStack_50[0] = CONCAT44(auStack_50[0]._4_4_,0x3f800000);
  local_30 = 3;
  local_28 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar1 = FUN_144a43716(param_1 + 0x90);
  FUN_144a2da94(&local_58);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23e50);
    FUN_144983130(lVar2 + 8,param_1 + 0x88);
  }
  local_58 = 0;
  local_38 = 4;
  auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
  local_30 = 3;
  local_28 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar1 = FUN_144a43716(param_1 + 200);
  FUN_144a2da94(&local_58);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb23e58);
    FUN_144983130(lVar2 + 8,param_1 + 0xc0);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f51cc2 FUN_147f51cc2 body=181 status=ok
// SIG undefined FUN_147f51cc2(void)

void FUN_147f51cc2(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  float *pfVar5;
  
  fVar2 = *(float *)(param_1 + 0xd8);
  if ((fVar2 != 3.4028235e+38) || (NAN(fVar2))) {
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb23e58);
    pfVar1 = (float *)(lVar4 + 0x40);
    if (*(byte *)(lVar4 + 0x60) == 3) {
      *pfVar1 = fVar2;
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        pfVar5 = pfVar1;
        if (0x18 < *(ushort *)(lVar4 + 0x58)) {
          pfVar5 = *(float **)(lVar4 + 0x40);
        }
        (*pcVar3)(pfVar5);
      }
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar4 + 0x58) = 4;
      *(float *)(lVar4 + 0x40) = fVar2;
      *(undefined1 *)(lVar4 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 147f51d7c FUN_147f51d7c body=603 status=ok
// SIG undefined FUN_147f51d7c(void)

void FUN_147f51d7c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e70);
    FUN_144983130(lVar1 + 8,param_1 + 0x80);
  }
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e78);
    FUN_144983130(lVar1 + 8,param_1 + 0xc0);
  }
  if (*(char *)(param_1 + 0x138) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e80);
    FUN_144983130(lVar1 + 8,param_1 + 0x100);
  }
  if (*(char *)(param_1 + 0x178) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e88);
    FUN_144983130(lVar1 + 8,param_1 + 0x140);
  }
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e90);
    FUN_144983130(lVar1 + 8,param_1 + 0x180);
  }
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23e98);
    FUN_144983130(lVar1 + 8,param_1 + 0x1c0);
  }
  if (*(char *)(param_1 + 0x238) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23ea0);
    FUN_144983130(lVar1 + 8,param_1 + 0x200);
  }
  if (*(char *)(param_1 + 0x278) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23ea8);
    FUN_144983130(lVar1 + 8,param_1 + 0x240);
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23eb0);
    FUN_144983130(lVar1 + 8,param_1 + 0x280);
  }
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23eb8);
    FUN_144983130(lVar1 + 8,param_1 + 0x2c0);
  }
  if (*(char *)(param_1 + 0x338) == '\x01') {
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb23ec0);
    FUN_144983130(lVar1 + 8,param_1 + 0x300);
  }
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 147f51fd8 FUN_147f51fd8 body=2378 status=ok
// SIG undefined FUN_147f51fd8(void)

void FUN_147f51fd8(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 ***pppuVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88;
  longlong *local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x48);
  fVar11 = (float)FUN_141236616();
  if (*(char *)(lVar7 + 0xb8) == '\x01') {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
    fVar14 = 0.0;
    if (lVar6 != 0) {
      iVar4 = *(int *)(lVar6 + 0x18);
      if ((((-1 < (longlong)iVar4) && (iVar4 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) &&
          (lVar6 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar4 * 8),
          lVar6 != 0)) &&
         ((*(char *)(lVar6 + 0xb4) != '\x02' &&
          (fVar12 = (*(float *)(lVar6 + 300) + *(float *)(lVar6 + 0x128)) - fVar11, 0.0 <= fVar12)))
         ) {
        fVar14 = fVar12;
      }
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e70);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0xf8) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23e78) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e78);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x138) == '\x01') {
    if (*(char *)(param_1 + 0xf4) == '\x01') {
      fVar12 = *(float *)(param_1 + 0xec) - fVar11;
      fVar14 = 0.0;
      if (0.0 <= fVar12) {
        fVar14 = fVar12;
      }
      lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e80);
      pfVar1 = (float *)(lVar6 + 0x40);
      if (*(byte *)(lVar6 + 0x60) == 3) {
        *pfVar1 = fVar14;
      }
      else {
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
        if (pcVar5 != (code *)0x0) {
          pfVar8 = pfVar1;
          if (0x18 < *(ushort *)(lVar6 + 0x58)) {
            pfVar8 = *(float **)(lVar6 + 0x40);
          }
          (*pcVar5)(pfVar8);
        }
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          FUN_1400020a8(*(undefined8 *)pfVar1);
        }
        *(undefined2 *)(lVar6 + 0x58) = 4;
        *(float *)(lVar6 + 0x40) = fVar14;
        *(undefined1 *)(lVar6 + 0x60) = 3;
      }
    }
    else {
      local_b9 = 2;
      local_c8 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_88);
      local_b8[0] = 0;
      local_90 = 0;
      FUN_144a7bf34(local_b8,&local_88,&local_c8,&local_b9);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      FUN_1447c3578(lVar7 + 0x100,&local_88,local_b8);
      uVar13 = FUN_144a7ecd0(&local_88);
      lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e80);
      puVar3 = (undefined8 *)(lVar6 + 0x40);
      if (*(byte *)(lVar6 + 0x60) == 3) {
        *(undefined4 *)puVar3 = uVar13;
      }
      else {
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
        if (pcVar5 != (code *)0x0) {
          puVar9 = puVar3;
          if (0x18 < *(ushort *)(lVar6 + 0x58)) {
            puVar9 = *(undefined8 **)(lVar6 + 0x40);
          }
          (*pcVar5)(puVar9);
        }
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          FUN_1400020a8(*puVar3);
        }
        *(undefined2 *)(lVar6 + 0x58) = 4;
        *(undefined4 *)(lVar6 + 0x40) = uVar13;
        *(undefined1 *)(lVar6 + 0x60) = 3;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        pppuVar10 = &local_88;
        if (0x18 < local_70) {
          pppuVar10 = (undefined8 ***)local_88;
        }
        (*pcVar5)(pppuVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88);
      }
      FUN_144a5ac3a(local_b8);
    }
  }
  if (*(char *)(lVar7 + 0x178) == '\x01') {
    fVar12 = *(float *)(param_1 + 0xf0) - fVar11;
    fVar14 = 0.0;
    if (0.0 <= fVar12) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e88);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x1b8) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23e90) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e90);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x1f8) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23e98) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23e98);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x238) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23ea0) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23ea0);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x278) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23ea8) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23ea8);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x2b8) == '\x01') {
    fVar14 = 0.0;
    if ((*(longlong *)(param_1 + 0xd8) == DAT_14cb23eb0) &&
       (fVar12 = *(float *)(param_1 + 0xe0) - fVar11, 0.0 <= fVar12)) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23eb0);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x2f8) == '\x01') {
    fVar12 = *(float *)(param_1 + 0xe4) - fVar11;
    fVar14 = 0.0;
    if (0.0 <= fVar12) {
      fVar14 = fVar12;
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb23eb8);
    pfVar1 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar8 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar14;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  if (*(char *)(lVar7 + 0x338) == '\x01') {
    fVar11 = *(float *)(param_1 + 0xe8) - fVar11;
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar11;
    }
    lVar7 = FUN_1470e53c2(param_2,&DAT_14cb23ec0);
    pfVar1 = (float *)(lVar7 + 0x40);
    if (*(byte *)(lVar7 + 0x60) == 3) {
      *pfVar1 = fVar14;
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar8 = pfVar1;
        if (0x18 < *(ushort *)(lVar7 + 0x58)) {
          pfVar8 = *(float **)(lVar7 + 0x40);
        }
        (*pcVar5)(pfVar8);
      }
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar7 + 0x58) = 4;
      *(float *)(lVar7 + 0x40) = fVar14;
      *(undefined1 *)(lVar7 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f5292a FUN_147f5292a body=254 status=ok
// SIG undefined FUN_147f5292a(void)

void FUN_147f5292a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (-1 < (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar2 = *(int *)(param_1 + 200);
    if ((int)param_2 < iVar2) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50), lVar5 != 0)) {
        do {
          iVar2 = *(int *)(param_1 + 0x18);
          if ((-1 < (longlong)iVar2) &&
             ((iVar2 < *(int *)(lVar5 + 0x78) &&
              (plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar2 * 8),
              plVar1 != (longlong *)0x0)))) {
            lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
            lVar4 = FUN_146435dae();
            if ((lVar4 != 0) &&
               ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                 == lVar4 + 0x30)))) {
              (**(code **)(*plVar1 + 0x138))(plVar1,uVar6);
            }
          }
          lVar5 = *(longlong *)(lVar5 + 0x18);
        } while (lVar5 != 0);
        iVar2 = *(int *)(param_1 + 200);
      }
      if (~param_2 + iVar2 != 0) {
        lVar5 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar5 = param_1 + 0x80;
        }
        memmove((void *)(lVar5 + uVar6 * 8),(void *)(lVar5 + uVar6 * 8 + 8),
                (longlong)(int)(~param_2 + iVar2) << 3);
        iVar2 = *(int *)(param_1 + 200);
      }
      *(int *)(param_1 + 200) = iVar2 + -1;
      FUN_147f5566a(param_1 + 0x80);
      return;
    }
  }
  return;
}



// FUNCTION 147f52a28 FUN_147f52a28 body=125 status=ok
// SIG undefined FUN_147f52a28(void)

void FUN_147f52a28(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_147f57e7c();
  lVar3 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if ((plVar2 != (longlong *)0x0) && ((byte)(*(char *)((longlong)plVar2 + 0xb4) - 1U) < 2)) {
        (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3,1);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147f52aa6 FUN_147f52aa6 body=51 status=ok
// SIG undefined FUN_147f52aa6(void)

undefined4 FUN_147f52aa6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140290574();
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(param_2 + 8));
  }
  return uVar1;
}



// FUNCTION 147f52ae6 FUN_147f52ae6 body=130 status=ok
// SIG undefined FUN_147f52ae6(void)

void FUN_147f52ae6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_147f55710(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_2 * 0x10;
  memmove((void *)(lVar2 + lVar3 + 0x10),(void *)(lVar2 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) << 4);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  FUN_14071ee2a(lVar2 + lVar3,1);
  return;
}



// FUNCTION 147f52b68 FUN_147f52b68 body=192 status=ok
// SIG undefined FUN_147f52b68(void)

void FUN_147f52b68(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((-1 < (int)param_2) && (iVar2 = *(int *)(param_1 + 0x1b8), (int)param_2 < iVar2)) {
    lVar1 = param_1 + 0x130;
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar3 = lVar1;
    }
    lVar4 = (ulonglong)param_2 * 0x10;
    if (*(longlong *)(lVar3 + lVar4) != 0) {
      FUN_140457ffc(*(longlong *)(lVar3 + lVar4) + 0x50,param_1);
      FUN_140457ffc(*(longlong *)(lVar3 + lVar4) + 0x68,param_1);
      iVar2 = *(int *)(param_1 + 0x1b8);
    }
    if (~param_2 + iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar3 = lVar1;
      }
      memmove((void *)(lVar3 + lVar4),(void *)(lVar3 + lVar4 + 0x10),
              (longlong)(int)(~param_2 + iVar2) << 4);
      iVar2 = *(int *)(param_1 + 0x1b8);
    }
    *(int *)(param_1 + 0x1b8) = iVar2 + -1;
    FUN_147f5578e(lVar1);
    return;
  }
  return;
}



// FUNCTION 147f52c58 FUN_147f52c58 body=115 status=ok
// SIG undefined FUN_147f52c58(void)

float FUN_147f52c58(longlong param_1,uint param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x1b8) <= (int)param_2)) {
    fVar3 = 3.4028235e+38;
  }
  else {
    lVar1 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1b0);
    }
    fVar3 = 0.0;
    if (*(char *)(lVar1 + 0xc + (ulonglong)param_2 * 0x10) == '\0') {
      lVar1 = lVar1 + (ulonglong)param_2 * 0x10;
      fVar3 = 3.4028235e+38;
      if (0.0 < *(float *)(lVar1 + 8)) {
        fVar2 = (float)FUN_141236616(0x7f7fffff);
        fVar2 = fVar2 - *(float *)(lVar1 + 8);
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
          fVar3 = fVar2;
        }
      }
    }
  }
  return fVar3;
}



// FUNCTION 147f52ccc FUN_147f52ccc body=55 status=ok
// SIG undefined FUN_147f52ccc(void)

void FUN_147f52ccc(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xe0))) {
    FUN_147f52d04(param_1 + 0xd8,param_2);
  }
  FUN_140c485dc(param_1,param_2);
  return;
}



// FUNCTION 147f52d04 FUN_147f52d04 body=99 status=ok
// SIG undefined FUN_147f52d04(void)

void FUN_147f52d04(longlong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f55d9c(param_1,iVar1);
  }
  uVar2 = (ulonglong)param_2;
  memmove((void *)(*param_1 + uVar2 * 4 + 4),(void *)(*param_1 + uVar2 * 4),
          (ulonglong)(iVar1 - param_2) << 2);
  FUN_147f55d88(uVar2 * 4 + *param_1,1);
  return;
}



// FUNCTION 147f52d68 FUN_147f52d68 body=119 status=ok
// SIG undefined FUN_147f52d68(void)

void FUN_147f52d68(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147f5292a();
  if ((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0xe0), (int)param_2 <= iVar1)) {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 4),
              (void *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 4 + 4),
              (longlong)(int)(~param_2 + iVar1) << 2);
      iVar1 = *(int *)(param_1 + 0xe0);
    }
    *(int *)(param_1 + 0xe0) = iVar1 + -1;
    FUN_147f55e22(param_1 + 0xd8);
    return;
  }
  return;
}



// FUNCTION 147f52de0 FUN_147f52de0 body=160 status=ok
// SIG undefined FUN_147f52de0(void)

ulonglong FUN_147f52de0(longlong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((byte)(*(char *)(param_1 + 0xb4) - 1U) < 2) {
    cVar3 = (*param_4)(param_2,param_3,param_1);
    if (cVar3 == '\0') {
LAB_147f52e6c:
      uVar4 = 0;
    }
    else {
      lVar5 = param_1 + 0x130;
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1b0);
      }
      iVar1 = *(int *)(param_1 + 0x1b8);
      if ((longlong)iVar1 != 0) {
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar5 + lVar6);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x110))(plVar2,param_2,param_3,param_4), cVar3 == '\0')
             ) goto LAB_147f52e6c;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147f52e80 FUN_147f52e80 body=119 status=ok
// SIG undefined FUN_147f52e80(void)

void FUN_147f52e80(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147f5292a();
  if ((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0xe0), (int)param_2 <= iVar1)) {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 4),
              (void *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 4 + 4),
              (longlong)(int)(~param_2 + iVar1) << 2);
      iVar1 = *(int *)(param_1 + 0xe0);
    }
    *(int *)(param_1 + 0xe0) = iVar1 + -1;
    FUN_147f55ebe(param_1 + 0xd8);
    return;
  }
  return;
}



// FUNCTION 147f52ef8 FUN_147f52ef8 body=55 status=ok
// SIG undefined FUN_147f52ef8(void)

void FUN_147f52ef8(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xe0))) {
    FUN_147f52f30(param_1 + 0xd8,param_2);
  }
  FUN_140c485dc(param_1,param_2);
  return;
}



// FUNCTION 147f52f30 FUN_147f52f30 body=98 status=ok
// SIG undefined FUN_147f52f30(void)

void FUN_147f52f30(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f55f9c(param_1,iVar1);
  }
  lVar2 = (ulonglong)param_2 * 0x40;
  memmove((void *)(*param_1 + lVar2 + 0x40),(void *)(*param_1 + lVar2),
          (ulonglong)(iVar1 - param_2) << 6);
  FUN_147f55f59(lVar2 + *param_1,1);
  return;
}



// FUNCTION 147f52f92 FUN_147f52f92 body=58 status=ok
// SIG undefined FUN_147f52f92(void)

void FUN_147f52f92(longlong param_1,int param_2)

{
  FUN_147f5292a();
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xe0))) {
    FUN_147f52fcc(param_1 + 0xd8,param_2);
    return;
  }
  return;
}



// FUNCTION 147f52fcc FUN_147f52fcc body=80 status=ok
// SIG undefined FUN_147f52fcc(void)

void FUN_147f52fcc(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_144a2da94(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147f56022(param_1);
  return;
}



// FUNCTION 147f5301c FUN_147f5301c body=46 status=ok
// SIG undefined FUN_147f5301c(void)

void FUN_147f5301c(longlong param_1,undefined4 param_2)

{
  FUN_147f52ae6(param_1 + 0x130);
  FUN_147f5304a(param_1 + 0x1c8,param_2);
  return;
}



// FUNCTION 147f5304a FUN_147f5304a body=99 status=ok
// SIG undefined FUN_147f5304a(void)

void FUN_147f5304a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141026396(param_1,iVar1);
  }
  lVar2 = (longlong)param_2;
  memmove((void *)(*param_1 + lVar2 * 4 + 4),(void *)(*param_1 + lVar2 * 4),
          (ulonglong)(uint)(iVar1 - param_2) << 2);
  FUN_141026383(lVar2 * 4 + *param_1,1);
  return;
}



// FUNCTION 147f530ae FUN_147f530ae body=104 status=ok
// SIG undefined FUN_147f530ae(void)

void FUN_147f530ae(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147f52b68();
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar1) << 2);
    iVar1 = *(int *)(param_1 + 0x1d0);
  }
  *(int *)(param_1 + 0x1d0) = iVar1 + -1;
  FUN_147f56118(param_1 + 0x1c8);
  return;
}



// FUNCTION 147f53116 FUN_147f53116 body=147 status=ok
// SIG undefined FUN_147f53116(void)

ulonglong FUN_147f53116(longlong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (1 < (byte)(*(char *)(param_1 + 0xb4) - 1U)) goto LAB_147f5319b;
  cVar3 = (*param_4)(param_2,param_3,param_1);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c0);
    if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar1)) goto LAB_147f5319b;
    lVar5 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
    }
    plVar2 = *(longlong **)(lVar5 + (longlong)iVar1 * 0x10);
    if (plVar2 == (longlong *)0x0) goto LAB_147f5319b;
    cVar3 = (**(code **)(*plVar2 + 0x110))(plVar2,param_2,param_3,param_4);
    if (cVar3 != '\0') goto LAB_147f5319b;
  }
  uVar4 = 0;
LAB_147f5319b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147f531aa FUN_147f531aa body=547 status=ok
// SIG undefined FUN_147f531aa(void)

void FUN_147f531aa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  void **ppvVar5;
  longlong lVar6;
  void **ppvVar7;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb23ed8);
  iVar1 = *(int *)(param_1 + 0x1c0);
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar1)) goto LAB_147f53393;
  lVar6 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1b0);
  }
  lVar6 = *(longlong *)(lVar6 + (longlong)iVar1 * 0x10);
  if (lVar6 == 0) goto LAB_147f53393;
  ppvVar7 = (void **)(lVar4 + 0x40);
  FUN_141741cb8(lVar6,&local_60);
  pvVar3 = local_60;
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar7 != &local_60) {
      *(int *)(lVar4 + 0x48) = local_58;
      if (local_58 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar7,local_58);
        if (local_58 != 0) {
          memcpy(*ppvVar7,pvVar3,(longlong)local_58 * 2);
        }
      }
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppvVar5 = ppvVar7;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        ppvVar5 = *(void ***)(lVar4 + 0x40);
      }
      (*pcVar2)(ppvVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*ppvVar7);
    }
    pvVar3 = local_60;
    local_50 = (void *)0x0;
    local_48 = local_58;
    if ((longlong)local_58 == 0) {
      local_44 = 0;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_147f5336c:
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_58,0);
      memcpy(local_50,pvVar3,(longlong)local_58 * 2);
      pvVar3 = local_50;
      lVar6 = (longlong)local_48;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(int *)(lVar4 + 0x48) = local_48;
      if (lVar6 == 0) goto LAB_147f5336c;
      FUN_1446dd670(ppvVar7,local_48,0);
      memcpy(*ppvVar7,pvVar3,lVar6 * 2);
    }
    *(undefined1 *)(lVar4 + 0x60) = 8;
    if (local_50 != (void *)0x0) {
      FUN_1400020a8(local_50);
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147f53393:
  thunk_FUN_147f574a0(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f53406 FUN_147f53406 body=55 status=ok
// SIG undefined FUN_147f53406(void)

void FUN_147f53406(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xd8))) {
    FUN_147f5343e(param_1 + 0xd0,param_2);
  }
  FUN_140c485dc(param_1,param_2);
  return;
}



// FUNCTION 147f5343e FUN_147f5343e body=99 status=ok
// SIG undefined FUN_147f5343e(void)

void FUN_147f5343e(longlong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147f561c6(param_1,iVar1);
  }
  uVar2 = (ulonglong)param_2;
  memmove((void *)(*param_1 + uVar2 * 8 + 8),(void *)(*param_1 + uVar2 * 8),
          (ulonglong)(iVar1 - param_2) << 3);
  FUN_147f561b3(uVar2 * 8 + *param_1,1);
  return;
}



// FUNCTION 147f534a2 FUN_147f534a2 body=119 status=ok
// SIG undefined FUN_147f534a2(void)

void FUN_147f534a2(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147f5292a();
  if ((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0xd8), (int)param_2 <= iVar1)) {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2 * 8),
              (void *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2 * 8 + 8),
              (longlong)(int)(~param_2 + iVar1) << 3);
      iVar1 = *(int *)(param_1 + 0xd8);
    }
    *(int *)(param_1 + 0xd8) = iVar1 + -1;
    FUN_147f5624c(param_1 + 0xd0);
    return;
  }
  return;
}



// FUNCTION 147f5351a FUN_147f5351a body=46 status=ok
// SIG undefined FUN_147f5351a(void)

void FUN_147f5351a(longlong param_1,undefined4 param_2)

{
  FUN_147f52ae6(param_1 + 0x130);
  FUN_147f53548(param_1 + 0x1c8,param_2);
  return;
}



// FUNCTION 147f53548 FUN_147f53548 body=85 status=ok
// SIG undefined FUN_147f53548(void)

void FUN_147f53548(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14596baf6(param_1,iVar1);
  }
  lVar2 = (longlong)param_2;
  memmove((void *)(*param_1 + lVar2 + 1),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_2));
  FUN_14596bae6(lVar2 + *param_1,1);
  return;
}



// FUNCTION 147f5359e FUN_147f5359e body=98 status=ok
// SIG undefined FUN_147f5359e(void)

void FUN_147f5359e(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_147f52b68();
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(int)param_2),
            (void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 0x1c8) + 1),
            (longlong)(int)(~param_2 + iVar1));
    iVar1 = *(int *)(param_1 + 0x1d0);
  }
  *(int *)(param_1 + 0x1d0) = iVar1 + -1;
  FUN_147f562e8(param_1 + 0x1c8);
  return;
}



// FUNCTION 147f53600 FUN_147f53600 body=38 status=ok
// SIG undefined FUN_147f53600(void)

undefined8 FUN_147f53600(undefined8 param_1,int param_2)

{
  FUN_14388850e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f53626 FUN_147f53626 body=241 status=ok
// SIG undefined FUN_147f53626(void)

void FUN_147f53626(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar5 = FUN_14479d2ce(param_1 + 0x48);
      local_28 = 8;
      local_40[0] = (undefined8 ***)0x0;
      FUN_14485c47a(local_40,uVar5);
      local_20 = 0xe;
      FUN_1402b90a2(uVar3,&DAT_14cb23ef0,local_40);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_40;
        if (0x18 < local_28) {
          pppuVar6 = (undefined8 ***)local_40[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_28) {
        FUN_1400020a8(local_40[0]);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f53718 FUN_147f53718 body=206 status=ok
// SIG undefined FUN_147f53718(void)

void FUN_147f53718(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      local_20 = 8;
      local_38[0] = (undefined8 ***)0x0;
      local_18 = 7;
      FUN_1402b90a2(uVar3,&DAT_14cb23ef0,local_38);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = local_38;
        if (0x18 < local_20) {
          pppuVar5 = (undefined8 ***)local_38[0];
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_20) {
        FUN_1400020a8(local_38[0]);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f537f6 FUN_147f537f6 body=198 status=ok
// SIG undefined FUN_147f537f6(void)

bool FUN_147f537f6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38) == param_2)
        goto LAB_147f5380f;
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_147f5380f:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar1 = FUN_144a7fca4(lVar5);
    *param_3 = uVar1;
  }
  return lVar5 != 0;
}



// FUNCTION 147f538bc FUN_147f538bc body=336 status=ok
// SIG undefined FUN_147f538bc(void)

undefined4 *
FUN_147f538bc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 local_80 [4];
  undefined2 local_60;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140ffab16(param_1,local_90);
  local_80[0] = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  *local_88 = *(undefined8 *)*param_4;
  FUN_140382e86(local_88 + 1,local_80);
  FUN_144a2da94(local_80);
  *(undefined4 *)(local_88 + 8) = 0xffffffff;
  local_98 = param_5;
  cVar1 = FUN_140ffa974(param_1,param_3,local_88,local_90);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_88 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_88 + 8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_90[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_90[0];
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f53a0e FUN_147f53a0e body=31 status=ok
// SIG undefined FUN_147f53a0e(void)

undefined8 FUN_147f53a0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f53a42 FUN_147f53a42 body=85 status=ok
// SIG undefined FUN_147f53a42(void)

void FUN_147f53a42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b220;
  return;
}



// FUNCTION 147f53a98 FUN_147f53a98 body=118 status=ok
// SIG undefined FUN_147f53a98(void)

void FUN_147f53a98(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8b220;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f53aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f53b0e FUN_147f53b0e body=105 status=ok
// SIG undefined FUN_147f53b0e(void)

undefined8 FUN_147f53b0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1461306da(param_1 + 0x18,local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f53b78 FUN_147f53b78 body=45 status=ok
// SIG undefined FUN_147f53b78(void)

longlong FUN_147f53b78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145765684(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f53ba6 FUN_147f53ba6 body=54 status=ok
// SIG undefined FUN_147f53ba6(void)

longlong FUN_147f53ba6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 147f53bdc FUN_147f53bdc body=360 status=ok
// SIG undefined FUN_147f53bdc(void)

void FUN_147f53bdc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0xf0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x100);
  }
  iVar6 = *(int *)(param_1 + 0x108);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) < iVar3 >> 2) {
    lVar2 = param_1 + 0xd0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0xe0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0xc0);
        if (*(longlong *)(local_78 + 0xc0) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x14 + (longlong)iVar3 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x108));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f53d46 FUN_147f53d46 body=142 status=ok
// SIG undefined FUN_147f53d46(void)

void FUN_147f53d46(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1404ee62c(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f53dd6 FUN_147f53dd6 body=148 status=ok
// SIG undefined FUN_147f53dd6(void)

void FUN_147f53dd6(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0xe8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xec) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xe8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0xe8) = param_2;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147f53e6a FUN_147f53e6a body=48 status=ok
// SIG undefined FUN_147f53e6a(void)

void FUN_147f53e6a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147f53e9a FUN_147f53e9a body=101 status=ok
// SIG undefined FUN_147f53e9a(void)

void FUN_147f53e9a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_1457ef5d8(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147f53f30 FUN_147f53f30 body=125 status=ok
// SIG undefined FUN_147f53f30(void)

void FUN_147f53f30(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_147f3b5c8(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147f53fae FUN_147f53fae body=31 status=ok
// SIG undefined FUN_147f53fae(void)

undefined8 FUN_147f53fae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f53fea FUN_147f53fea body=93 status=ok
// SIG undefined FUN_147f53fea(void)

void FUN_147f53fea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ac8ab40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147f54048 FUN_147f54048 body=126 status=ok
// SIG undefined FUN_147f54048(void)

void FUN_147f54048(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8ab40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f540b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f540c6 FUN_147f540c6 body=21 status=ok
// SIG undefined FUN_147f540c6(void)

undefined8 FUN_147f540c6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147f540dc FUN_147f540dc body=31 status=ok
// SIG undefined FUN_147f540dc(void)

undefined8 FUN_147f540dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f5410e FUN_147f5410e body=93 status=ok
// SIG undefined FUN_147f5410e(void)

void FUN_147f5410e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f5416c FUN_147f5416c body=93 status=ok
// SIG undefined FUN_147f5416c(void)

void FUN_147f5416c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147f541ca FUN_147f541ca body=126 status=ok
// SIG undefined FUN_147f541ca(void)

void FUN_147f541ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b3b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac8b340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f54239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f54252 FUN_147f54252 body=19 status=ok
// SIG undefined FUN_147f54252(void)

undefined8 FUN_147f54252(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147f54268 FUN_147f54268 body=175 status=ok
// SIG undefined FUN_147f54268(void)

ulonglong FUN_147f54268(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_1[4] == '\v') {
    *param_2 = *param_1;
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    FUN_1400b56fe(local_48,param_1,0xb);
    uVar2 = CONCAT71(uVar3,local_28 != 0);
    if (local_28 != 0) {
      *param_2 = (longlong)local_48[0];
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_48;
      if (0x18 < local_30) {
        pppuVar4 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f54318 FUN_147f54318 body=201 status=ok
// SIG undefined FUN_147f54318(void)

ulonglong FUN_147f54318(byte param_1,int param_2,float *param_3)

{
  undefined7 uVar2;
  ulonglong uVar1;
  bool bVar3;
  bool bVar4;
  
  uVar2 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_147f54332::switchdataD_14ac8b5ec +
           (longlong)(int)(&switchD_147f54332::switchdataD_14ac8b5ec)[param_1]) >> 8);
  switch(param_1) {
  case 0:
    bVar3 = *param_3 - param_3[1] == (float)param_2;
    bVar4 = *param_3 - param_3[1] < (float)param_2;
    break;
  case 1:
    bVar3 = (float)param_2 == *param_3 + param_3[1];
    bVar4 = (float)param_2 < *param_3 + param_3[1];
    break;
  case 2:
    bVar3 = *param_3 - param_3[1] < (float)param_2;
    goto LAB_147f54395;
  case 3:
    bVar3 = (float)param_2 < *param_3 + param_3[1];
LAB_147f54395:
    uVar1 = CONCAT71(uVar2,!bVar3);
    goto LAB_147f543da;
  case 4:
    bVar3 = *param_3 - param_3[1] <= (float)param_2 && (float)param_2 <= *param_3 + param_3[1];
    goto LAB_147f543d6;
  case 5:
    bVar3 = (float)param_2 < *param_3 - param_3[1] || *param_3 + param_3[1] < (float)param_2;
LAB_147f543d6:
    uVar1 = (ulonglong)-(uint)bVar3;
    goto LAB_147f543da;
  default:
    uVar1 = 0;
    goto LAB_147f543da;
  }
  uVar1 = CONCAT71(uVar2,!bVar4 && !bVar3);
LAB_147f543da:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 147f543e1 FUN_147f543e1 body=177 status=ok
// SIG undefined FUN_147f543e1(void)

ulonglong FUN_147f543e1(byte param_1,float param_2,float *param_3)

{
  undefined7 uVar2;
  ulonglong uVar1;
  bool bVar3;
  float fVar4;
  
  uVar2 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_147f543fb::switchdataD_14ac8b604 +
           (longlong)(int)(&switchD_147f543fb::switchdataD_14ac8b604)[param_1]) >> 8);
  switch(param_1) {
  case 0:
    fVar4 = *param_3 - param_3[1];
    bVar3 = fVar4 < param_2;
    break;
  case 1:
    fVar4 = *param_3 + param_3[1];
    bVar3 = param_2 < fVar4;
    break;
  case 2:
    bVar3 = *param_3 - param_3[1] < param_2;
    goto LAB_147f5444e;
  case 3:
    bVar3 = param_2 < *param_3 + param_3[1];
LAB_147f5444e:
    uVar1 = CONCAT71(uVar2,!bVar3);
    goto LAB_147f5448b;
  case 4:
    bVar3 = *param_3 - param_3[1] <= param_2 && param_2 <= *param_3 + param_3[1];
    goto LAB_147f54487;
  case 5:
    bVar3 = param_2 < *param_3 - param_3[1] || *param_3 + param_3[1] < param_2;
LAB_147f54487:
    uVar1 = (ulonglong)-(uint)bVar3;
    goto LAB_147f5448b;
  default:
    uVar1 = 0;
    goto LAB_147f5448b;
  }
  uVar1 = CONCAT71(uVar2,!bVar3 && param_2 != fVar4);
LAB_147f5448b:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 147f54492 FUN_147f54492 body=81 status=ok
// SIG undefined FUN_147f54492(void)

undefined8 FUN_147f54492(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147f544ea FUN_147f544ea body=89 status=ok
// SIG undefined FUN_147f544ea(void)

bool FUN_147f544ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147f54535;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147f54535:
  return lVar6 == param_2;
}


