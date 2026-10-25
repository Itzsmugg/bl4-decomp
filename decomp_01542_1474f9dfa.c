// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474f9dfa FUN_1474f9dfa body=109 status=ok
// SIG undefined FUN_1474f9dfa(void)

void FUN_1474f9dfa(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a436520;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  *(undefined1 **)((longlong)param_2 + 0xfc) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0x3f800000;
  return;
}



// FUNCTION 1474f9e8c FUN_1474f9e8c body=226 status=ok
// SIG undefined FUN_1474f9e8c(void)

undefined8 FUN_1474f9e8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      uVar12 = *(undefined8 *)(param_3 + 0x18);
      uVar13 = *(undefined8 *)(param_3 + 0x20);
      uVar14 = *(undefined8 *)(param_3 + 0x28);
      uVar15 = *(undefined8 *)(param_3 + 0x30);
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      uVar2 = *(undefined4 *)(param_3 + 0x40);
      uVar3 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = uVar1;
      *(undefined4 *)(param_2 + 0x40) = uVar2;
      *(undefined4 *)(param_2 + 0x44) = uVar3;
      *(undefined8 *)(param_2 + 0x28) = uVar14;
      *(undefined8 *)(param_2 + 0x30) = uVar15;
      *(undefined8 *)(param_2 + 0x18) = uVar12;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      param_3 = param_3 + 0x108;
      param_2 = param_2 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474f9f96 FUN_1474f9f96 body=59 status=ok
// SIG undefined FUN_1474f9f96(void)

undefined8 FUN_1474f9f96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f9fe2 FUN_1474f9fe2 body=57 status=ok
// SIG undefined FUN_1474f9fe2(void)

void FUN_1474f9fe2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 1474fa0a0 FUN_1474fa0a0 body=221 status=ok
// SIG undefined FUN_1474fa0a0(void)

undefined8 FUN_1474fa0a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      memcpy((void *)(param_2 + 0x20),(void *)(param_3 + 0x20),0x11a);
      param_3 = param_3 + 0x200;
      param_2 = param_2 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fa1a6 FUN_1474fa1a6 body=59 status=ok
// SIG undefined FUN_1474fa1a6(void)

undefined8 FUN_1474fa1a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fa1f2 FUN_1474fa1f2 body=57 status=ok
// SIG undefined FUN_1474fa1f2(void)

void FUN_1474fa1f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1474fa27c FUN_1474fa27c body=151 status=ok
// SIG undefined FUN_1474fa27c(void)

void FUN_1474fa27c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a436dc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  param_2[0x1f] = 0;
  param_2[0x20] = 0xffffffff7fffffff;
  param_2[0x21] = 0;
  param_2[0x22] = 0xffffffff7fffffff;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0x3ff0000000000000;
  param_2[0x26] = 0x3ff0000000000000;
  param_2[0x27] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x28) = 0x3f000000;
  return;
}



// FUNCTION 1474fa314 FUN_1474fa314 body=151 status=ok
// SIG undefined FUN_1474fa314(void)

void FUN_1474fa314(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a436dc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  param_2[0x1f] = 0;
  param_2[0x20] = 0xffffffff7fffffff;
  param_2[0x21] = 0;
  param_2[0x22] = 0xffffffff7fffffff;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0x3ff0000000000000;
  param_2[0x26] = 0x3ff0000000000000;
  param_2[0x27] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x28) = 0x3f000000;
  return;
}



// FUNCTION 1474fa3d0 FUN_1474fa3d0 body=63 status=ok
// SIG undefined FUN_1474fa3d0(void)

undefined1 FUN_1474fa3d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474fa4fa(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1474fa438 FUN_1474fa438 body=59 status=ok
// SIG undefined FUN_1474fa438(void)

undefined8 FUN_1474fa438(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fa484 FUN_1474fa484 body=40 status=ok
// SIG undefined FUN_1474fa484(void)

void FUN_1474fa484(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1474fa600(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1474fa4fa FUN_1474fa4fa body=261 status=ok
// SIG undefined FUN_1474fa4fa(void)

longlong FUN_1474fa4fa(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
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
  uVar1 = *(undefined4 *)(param_2 + 0xd8);
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  uVar4 = *(undefined4 *)(param_2 + 0xe4);
  uVar5 = *(undefined4 *)(param_2 + 0xe8);
  uVar6 = *(undefined4 *)(param_2 + 0xec);
  uVar7 = *(undefined4 *)(param_2 + 0xf0);
  uVar8 = *(undefined4 *)(param_2 + 0xf4);
  uVar9 = *(undefined4 *)(param_2 + 0xf8);
  uVar10 = *(undefined4 *)(param_2 + 0xfc);
  uVar11 = *(undefined4 *)(param_2 + 0x100);
  uVar12 = *(undefined4 *)(param_2 + 0x104);
  uVar13 = *(undefined4 *)(param_2 + 0x10c);
  uVar14 = *(undefined4 *)(param_2 + 0x110);
  uVar15 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = uVar13;
  *(undefined4 *)(param_1 + 0x110) = uVar14;
  *(undefined4 *)(param_1 + 0x114) = uVar15;
  *(undefined4 *)(param_1 + 0xf8) = uVar9;
  *(undefined4 *)(param_1 + 0xfc) = uVar10;
  *(undefined4 *)(param_1 + 0x100) = uVar11;
  *(undefined4 *)(param_1 + 0x104) = uVar12;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  *(undefined4 *)(param_1 + 0xf0) = uVar7;
  *(undefined4 *)(param_1 + 0xf4) = uVar8;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  FUN_140e00d48(param_1 + 0x118,param_2 + 0x118);
  uVar16 = *(undefined8 *)(param_2 + 0x130);
  uVar17 = *(undefined8 *)(param_2 + 0x134);
  uVar18 = *(undefined8 *)(param_2 + 0x13c);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = uVar16;
  *(undefined8 *)(param_1 + 0x134) = uVar17;
  *(undefined8 *)(param_1 + 0x13c) = uVar18;
  return param_1;
}



// FUNCTION 1474fa600 FUN_1474fa600 body=74 status=ok
// SIG undefined FUN_1474fa600(void)

void FUN_1474fa600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a436dc0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474fa726 FUN_1474fa726 body=39 status=ok
// SIG undefined FUN_1474fa726(void)

undefined8 FUN_1474fa726(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fa776 FUN_1474fa776 body=59 status=ok
// SIG undefined FUN_1474fa776(void)

undefined8 FUN_1474fa776(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fa898 FUN_1474fa898 body=100 status=ok
// SIG undefined FUN_1474fa898(void)

undefined1 FUN_1474fa898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1408f8b6a(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    uVar8 = *(undefined4 *)(param_3 + 0x30);
    uVar9 = *(undefined4 *)(param_3 + 0x34);
    uVar10 = *(undefined4 *)(param_3 + 0x38);
    uVar11 = *(undefined4 *)(param_3 + 0x3c);
    uVar12 = *(undefined4 *)(param_3 + 0x3a);
    uVar13 = *(undefined4 *)(param_3 + 0x3e);
    uVar14 = *(undefined4 *)(param_3 + 0x42);
    uVar15 = *(undefined4 *)(param_3 + 0x46);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    *(undefined4 *)(param_2 + 0x30) = uVar8;
    *(undefined4 *)(param_2 + 0x34) = uVar9;
    *(undefined4 *)(param_2 + 0x38) = uVar10;
    *(undefined4 *)(param_2 + 0x3c) = uVar11;
    *(undefined4 *)(param_2 + 0x3a) = uVar12;
    *(undefined4 *)(param_2 + 0x3e) = uVar13;
    *(undefined4 *)(param_2 + 0x42) = uVar14;
    *(undefined4 *)(param_2 + 0x46) = uVar15;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1474fa924 FUN_1474fa924 body=59 status=ok
// SIG undefined FUN_1474fa924(void)

undefined8 FUN_1474fa924(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fa96a FUN_1474fa96a body=37 status=ok
// SIG undefined FUN_1474fa96a(void)

void FUN_1474fa96a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[10] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1474faab8 FUN_1474faab8 body=59 status=ok
// SIG undefined FUN_1474faab8(void)

undefined8 FUN_1474faab8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fab5a FUN_1474fab5a body=119 status=ok
// SIG undefined FUN_1474fab5a(void)

void FUN_1474fab5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xc] = 0;
  param_2[0xd] = 0xffffffff;
  *(undefined4 *)(param_2 + 0xe) = 0xffffffff;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  uVar1 = DAT_14c8464e8;
  param_2[0x19] = DAT_14c8464e0;
  param_2[0x1a] = uVar1;
  param_2[0x1b] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 1474fabd2 FUN_1474fabd2 body=119 status=ok
// SIG undefined FUN_1474fabd2(void)

void FUN_1474fabd2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xc] = 0;
  param_2[0xd] = 0xffffffff;
  *(undefined4 *)(param_2 + 0xe) = 0xffffffff;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  uVar1 = DAT_14c8464e8;
  param_2[0x19] = DAT_14c8464e0;
  param_2[0x1a] = uVar1;
  param_2[0x1b] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 1474fac68 FUN_1474fac68 body=186 status=ok
// SIG undefined FUN_1474fac68(void)

undefined8 FUN_1474fac68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
    do {
      puVar17 = (undefined8 *)(param_3 + -0x98);
      puVar18 = (undefined8 *)(param_2 + -0x98);
      for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      FUN_140472df2(param_2 + -0x20,param_3 + -0x20);
      FUN_144756208(param_2 + -0x10,param_3 + -0x10);
      FUN_1408f8b6a(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      uVar8 = *(undefined4 *)(param_3 + 0x30);
      uVar9 = *(undefined4 *)(param_3 + 0x34);
      uVar10 = *(undefined4 *)(param_3 + 0x38);
      uVar11 = *(undefined4 *)(param_3 + 0x3c);
      uVar12 = *(undefined4 *)(param_3 + 0x3a);
      uVar13 = *(undefined4 *)(param_3 + 0x3e);
      uVar14 = *(undefined4 *)(param_3 + 0x42);
      uVar15 = *(undefined4 *)(param_3 + 0x46);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      *(undefined4 *)(param_2 + 0x30) = uVar8;
      *(undefined4 *)(param_2 + 0x34) = uVar9;
      *(undefined4 *)(param_2 + 0x38) = uVar10;
      *(undefined4 *)(param_2 + 0x3c) = uVar11;
      *(undefined4 *)(param_2 + 0x3a) = uVar12;
      *(undefined4 *)(param_2 + 0x3e) = uVar13;
      *(undefined4 *)(param_2 + 0x42) = uVar14;
      *(undefined4 *)(param_2 + 0x46) = uVar15;
      param_3 = param_3 + 0xf0;
      param_2 = param_2 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fad4a FUN_1474fad4a body=59 status=ok
// SIG undefined FUN_1474fad4a(void)

undefined8 FUN_1474fad4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fad96 FUN_1474fad96 body=38 status=ok
// SIG undefined FUN_1474fad96(void)

void FUN_1474fad96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1474eb6be(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1474fae0c FUN_1474fae0c body=94 status=ok
// SIG undefined FUN_1474fae0c(void)

void FUN_1474fae0c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a442710;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1b] = 0xc3c23d70a;
  param_2[0x1c] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1474faea8 FUN_1474faea8 body=59 status=ok
// SIG undefined FUN_1474faea8(void)

undefined8 FUN_1474faea8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474faef4 FUN_1474faef4 body=38 status=ok
// SIG undefined FUN_1474faef4(void)

void FUN_1474faef4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_14179b85e(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1474faf68 FUN_1474faf68 body=114 status=ok
// SIG undefined FUN_1474faf68(void)

void FUN_1474faf68(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,0x10);
    iVar2 = (int)(uVar1 / 0xf0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474fafda FUN_1474fafda body=60 status=ok
// SIG undefined FUN_1474fafda(void)

void FUN_1474fafda(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474fb016(param_1,param_2);
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return;
}



// FUNCTION 1474fb016 FUN_1474fb016 body=373 status=ok
// SIG undefined FUN_1474fb016(void)

undefined8 * FUN_1474fb016(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar11 = param_2;
  puVar12 = param_1;
  for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1408f8e5c(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  pvVar2 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_144756262(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1408f8bc0(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 * 0x70);
  }
  uVar3 = param_2[0x15];
  uVar4 = param_2[0x16];
  uVar5 = param_2[0x17];
  uVar6 = param_2[0x18];
  uVar7 = param_2[0x19];
  uVar8 = param_2[0x1a];
  uVar9 = *(undefined8 *)((longlong)param_2 + 0xda);
  *(undefined8 *)((longlong)param_1 + 0xd2) = *(undefined8 *)((longlong)param_2 + 0xd2);
  *(undefined8 *)((longlong)param_1 + 0xda) = uVar9;
  param_1[0x19] = uVar7;
  param_1[0x1a] = uVar8;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar6;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  return param_1;
}



// FUNCTION 1474fb1c0 FUN_1474fb1c0 body=221 status=ok
// SIG undefined FUN_1474fb1c0(void)

undefined8 FUN_1474fb1c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x180);
      param_3 = param_3 + 0x260;
      param_2 = param_2 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fb2c6 FUN_1474fb2c6 body=59 status=ok
// SIG undefined FUN_1474fb2c6(void)

undefined8 FUN_1474fb2c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fb312 FUN_1474fb312 body=57 status=ok
// SIG undefined FUN_1474fb312(void)

void FUN_1474fb312(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1474fb39c FUN_1474fb39c body=156 status=ok
// SIG undefined FUN_1474fb39c(void)

void FUN_1474fb39c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4384a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  *(undefined2 *)(param_2 + 0x1d) = 1;
  uVar1 = DAT_14c8464e8;
  param_2[0x1e] = DAT_14c8464e0;
  param_2[0x1f] = uVar1;
  param_2[0x20] = DAT_14c8464f0;
  param_2[0x23] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x21] = DAT_14c8464f8;
  param_2[0x22] = uVar1;
  param_2[0x24] = 0x3ff0000000000000;
  param_2[0x25] = 0x3ff0000000000000;
  param_2[0x26] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1474fb438 FUN_1474fb438 body=156 status=ok
// SIG undefined FUN_1474fb438(void)

void FUN_1474fb438(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4384a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  *(undefined2 *)(param_2 + 0x1d) = 1;
  uVar1 = DAT_14c8464e8;
  param_2[0x1e] = DAT_14c8464e0;
  param_2[0x1f] = uVar1;
  param_2[0x20] = DAT_14c8464f0;
  param_2[0x23] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x21] = DAT_14c8464f8;
  param_2[0x22] = uVar1;
  param_2[0x24] = 0x3ff0000000000000;
  param_2[0x25] = 0x3ff0000000000000;
  param_2[0x26] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1474fb4f8 FUN_1474fb4f8 body=240 status=ok
// SIG undefined FUN_1474fb4f8(void)

undefined8 FUN_1474fb4f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      puVar13 = (undefined8 *)(param_3 + 0x18);
      puVar14 = (undefined8 *)(param_2 + 0x18);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      param_3 = param_3 + 0x138;
      param_2 = param_2 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fb610 FUN_1474fb610 body=59 status=ok
// SIG undefined FUN_1474fb610(void)

undefined8 FUN_1474fb610(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fb65c FUN_1474fb65c body=57 status=ok
// SIG undefined FUN_1474fb65c(void)

void FUN_1474fb65c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  return;
}



// FUNCTION 1474fb6e6 FUN_1474fb6e6 body=42 status=ok
// SIG undefined FUN_1474fb6e6(void)

void FUN_1474fb6e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4386b0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 1474fb710 FUN_1474fb710 body=42 status=ok
// SIG undefined FUN_1474fb710(void)

void FUN_1474fb710(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4386b0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 1474fb75e FUN_1474fb75e body=250 status=ok
// SIG undefined FUN_1474fb75e(void)

undefined8 FUN_1474fb75e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      lVar1 = param_3 + lVar14;
      lVar2 = param_2 + 0x40 + lVar14;
      *(undefined2 *)(lVar2 + -0x30) = *(undefined2 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x1c);
      uVar4 = *(undefined4 *)(lVar1 + 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x24);
      uVar6 = *(undefined4 *)(lVar1 + 0x28);
      uVar7 = *(undefined4 *)(lVar1 + 0x2c);
      uVar8 = *(undefined4 *)(lVar1 + 0x30);
      uVar9 = *(undefined4 *)(lVar1 + 0x34);
      *(undefined4 *)(lVar2 + -0x28) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0x24) = uVar3;
      *(undefined4 *)(lVar2 + -0x20) = uVar4;
      *(undefined4 *)(lVar2 + -0x1c) = uVar5;
      *(undefined4 *)(lVar2 + -0x18) = uVar6;
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar1 + 0x38);
      FUN_14123bd80(lVar2,lVar1 + 0x40);
      uVar3 = *(undefined4 *)(lVar1 + 0x8c);
      uVar4 = *(undefined4 *)(lVar1 + 0x90);
      uVar5 = *(undefined4 *)(lVar1 + 0x94);
      uVar6 = *(undefined4 *)(lVar1 + 0x98);
      uVar7 = *(undefined4 *)(lVar1 + 0x9c);
      uVar8 = *(undefined4 *)(lVar1 + 0xa0);
      uVar9 = *(undefined4 *)(lVar1 + 0xa4);
      uVar10 = *(undefined4 *)(lVar1 + 0xa8);
      uVar11 = *(undefined4 *)(lVar1 + 0xac);
      uVar12 = *(undefined4 *)(lVar1 + 0xb0);
      uVar13 = *(undefined4 *)(lVar1 + 0xb4);
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar1 + 0x88);
      *(undefined4 *)(lVar2 + 0x4c) = uVar3;
      *(undefined4 *)(lVar2 + 0x50) = uVar4;
      *(undefined4 *)(lVar2 + 0x54) = uVar5;
      *(undefined4 *)(lVar2 + 0x58) = uVar6;
      *(undefined4 *)(lVar2 + 0x5c) = uVar7;
      *(undefined4 *)(lVar2 + 0x60) = uVar8;
      *(undefined4 *)(lVar2 + 100) = uVar9;
      *(undefined4 *)(lVar2 + 0x68) = uVar10;
      *(undefined4 *)(lVar2 + 0x6c) = uVar11;
      *(undefined4 *)(lVar2 + 0x70) = uVar12;
      *(undefined4 *)(lVar2 + 0x74) = uVar13;
      *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar1 + 0xb8);
      FUN_140d2c6ac(param_2 + lVar14 + 0xc0,param_3 + lVar14 + 0xc0);
      *(undefined1 *)(lVar2 + 0x90) = *(undefined1 *)(lVar1 + 0xd0);
      FUN_140472df2(param_2 + lVar14 + 0xd8,param_3 + lVar14 + 0xd8);
      lVar14 = lVar14 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fb880 FUN_1474fb880 body=59 status=ok
// SIG undefined FUN_1474fb880(void)

undefined8 FUN_1474fb880(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fb8cc FUN_1474fb8cc body=40 status=ok
// SIG undefined FUN_1474fb8cc(void)

void FUN_1474fb8cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1474fb944(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 1474fb944 FUN_1474fb944 body=74 status=ok
// SIG undefined FUN_1474fb944(void)

void FUN_1474fb944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4386b0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474fba8a FUN_1474fba8a body=59 status=ok
// SIG undefined FUN_1474fba8a(void)

undefined8 FUN_1474fba8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fbb60 FUN_1474fbb60 body=63 status=ok
// SIG undefined FUN_1474fbb60(void)

undefined1 FUN_1474fbb60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474fbc8a(param_2,param_3);
    param_3 = param_3 + 0x9a0;
    param_2 = param_2 + 0x9a0;
  }
  return 1;
}



// FUNCTION 1474fbbc8 FUN_1474fbbc8 body=59 status=ok
// SIG undefined FUN_1474fbbc8(void)

undefined8 FUN_1474fbbc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fbc14 FUN_1474fbc14 body=40 status=ok
// SIG undefined FUN_1474fbc14(void)

void FUN_1474fbc14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x9a0) == '\x01') {
    FUN_1474ed282(param_2);
    *(undefined1 *)(param_2 + 0x9a0) = 0;
  }
  return;
}



// FUNCTION 1474fbc8a FUN_1474fbc8a body=746 status=ok
// SIG undefined FUN_1474fbc8a(void)

longlong FUN_1474fbc8a(longlong param_1,longlong param_2)

{
  int *piVar1;
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
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x90);
  uVar4 = *(undefined4 *)(param_2 + 0x94);
  uVar5 = *(undefined4 *)(param_2 + 0x98);
  uVar6 = *(undefined4 *)(param_2 + 0x9c);
  uVar7 = *(undefined4 *)(param_2 + 0xa0);
  uVar8 = *(undefined4 *)(param_2 + 0xa4);
  uVar9 = *(undefined4 *)(param_2 + 0xa8);
  uVar10 = *(undefined4 *)(param_2 + 0xac);
  uVar11 = *(undefined4 *)(param_2 + 0xb0);
  uVar12 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  *(undefined4 *)(param_1 + 0xa8) = uVar9;
  *(undefined4 *)(param_1 + 0xac) = uVar10;
  *(undefined4 *)(param_1 + 0xb0) = uVar11;
  *(undefined4 *)(param_1 + 0xb4) = uVar12;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  lVar13 = *(longlong *)(param_2 + 0xd8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0xd8);
    }
  }
  *(longlong *)(param_1 + 0xd8) = lVar13;
  memcpy((void *)(param_1 + 0xe0),(void *)(param_2 + 0xe0),0x2a4);
  puVar14 = *(undefined8 **)(param_2 + 0x388);
  puVar15 = *(undefined8 **)(param_1 + 0x388);
  if (puVar15 != puVar14) {
    *(undefined8 **)(param_1 + 0x388) = puVar14;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  FUN_1474fbf74(param_1 + 0x390,param_2 + 0x390);
  FUN_1474fbfd4(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_14054c6c4(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_1474fc02c(param_1 + 0x3c0,param_2 + 0x3c0);
  FUN_1474fc086(param_1 + 0x3d0,param_2 + 0x3d0);
  FUN_1474f1476(param_1 + 0x3e0,param_2 + 0x3e0);
  FUN_1474fc3d0(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_14748d4c2(param_1 + 0x4f0,param_2 + 0x4f0);
  FUN_14748d4c2(param_1 + 0x500,param_2 + 0x500);
  FUN_1474fc0de(param_1 + 0x510,param_2 + 0x510);
  FUN_1474fc638(param_1 + 0x520,param_2 + 0x520);
  puVar14 = (undefined8 *)(param_2 + 0x570);
  puVar15 = (undefined8 *)(param_1 + 0x570);
  for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x5b8);
  uVar3 = *(undefined4 *)(param_2 + 0x5bc);
  uVar4 = *(undefined4 *)(param_2 + 0x5c0);
  uVar5 = *(undefined4 *)(param_2 + 0x5c4);
  uVar6 = *(undefined4 *)(param_2 + 0x5c8);
  uVar7 = *(undefined4 *)(param_2 + 0x5cc);
  uVar8 = *(undefined4 *)(param_2 + 0x5d0);
  uVar9 = *(undefined4 *)(param_2 + 0x5d4);
  uVar10 = *(undefined4 *)(param_2 + 0x5d6);
  uVar11 = *(undefined4 *)(param_2 + 0x5da);
  uVar12 = *(undefined4 *)(param_2 + 0x5de);
  *(undefined4 *)(param_1 + 0x5d2) = *(undefined4 *)(param_2 + 0x5d2);
  *(undefined4 *)(param_1 + 0x5d6) = uVar10;
  *(undefined4 *)(param_1 + 0x5da) = uVar11;
  *(undefined4 *)(param_1 + 0x5de) = uVar12;
  *(undefined4 *)(param_1 + 0x5c8) = uVar6;
  *(undefined4 *)(param_1 + 0x5cc) = uVar7;
  *(undefined4 *)(param_1 + 0x5d0) = uVar8;
  *(undefined4 *)(param_1 + 0x5d4) = uVar9;
  *(undefined4 *)(param_1 + 0x5b8) = uVar2;
  *(undefined4 *)(param_1 + 0x5bc) = uVar3;
  *(undefined4 *)(param_1 + 0x5c0) = uVar4;
  *(undefined4 *)(param_1 + 0x5c4) = uVar5;
  FUN_14470be02(param_1 + 0x5e8,param_2 + 0x5e8);
  FUN_14471637c(param_1 + 0x618,param_2 + 0x618);
  uVar2 = *(undefined4 *)(param_2 + 0x63c);
  uVar3 = *(undefined4 *)(param_2 + 0x640);
  uVar4 = *(undefined4 *)(param_2 + 0x644);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
  *(undefined4 *)(param_1 + 0x63c) = uVar2;
  *(undefined4 *)(param_1 + 0x640) = uVar3;
  *(undefined4 *)(param_1 + 0x644) = uVar4;
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x648);
  FUN_1470d3316(param_1 + 0x650,param_2 + 0x650);
  FUN_1474fc138(param_1 + 0x7b8,param_2 + 0x7b8);
  FUN_1474fc138(param_1 + 0x800,param_2 + 0x800);
  FUN_14475634e(param_1 + 0x848,param_2 + 0x848);
  *(undefined1 *)(param_1 + 0x858) = *(undefined1 *)(param_2 + 0x858);
  *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_2 + 0x860);
  memcpy((void *)(param_1 + 0x868),(void *)(param_2 + 0x868),0x138);
  return param_1;
}



// FUNCTION 1474fbf74 FUN_1474fbf74 body=95 status=ok
// SIG undefined FUN_1474fbf74(void)

undefined8 * FUN_1474fbf74(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1474fc185(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474fc1b0(param_1,iVar1);
      FUN_1474fc212(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474fbfd4 FUN_1474fbfd4 body=88 status=ok
// SIG undefined FUN_1474fbfd4(void)

undefined8 * FUN_1474fbfd4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fc298(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc02c FUN_1474fc02c body=89 status=ok
// SIG undefined FUN_1474fc02c(void)

undefined8 * FUN_1474fc02c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fc2fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc086 FUN_1474fc086 body=88 status=ok
// SIG undefined FUN_1474fc086(void)

undefined8 * FUN_1474fc086(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fc36e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc0de FUN_1474fc0de body=89 status=ok
// SIG undefined FUN_1474fc0de(void)

undefined8 * FUN_1474fc0de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fc5c4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc138 FUN_1474fc138 body=77 status=ok
// SIG undefined FUN_1474fc138(void)

longlong FUN_1474fc138(longlong param_1,longlong param_2)

{
  FUN_144756208();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1447a122a(param_1 + 0x18,param_2 + 0x18);
  FUN_1447a122a(param_1 + 0x28,param_2 + 0x28);
  FUN_140472df2(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 1474fc185 FUN_1474fc185 body=43 status=ok
// SIG undefined FUN_1474fc185(void)

void FUN_1474fc185(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1474fc1b0 FUN_1474fc1b0 body=98 status=ok
// SIG undefined FUN_1474fc1b0(void)

void FUN_1474fc1b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fc212 FUN_1474fc212 body=133 status=ok
// SIG undefined FUN_1474fc212(void)

void FUN_1474fc212(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -1);
      _Src = (void *)puVar2[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1408f8e5c(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar2 + 1);
      param_1[2] = *puVar2;
      param_1 = param_1 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474fc298 FUN_1474fc298 body=98 status=ok
// SIG undefined FUN_1474fc298(void)

void FUN_1474fc298(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fc2fa FUN_1474fc2fa body=115 status=ok
// SIG undefined FUN_1474fc2fa(void)

void FUN_1474fc2fa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474fc36e FUN_1474fc36e body=98 status=ok
// SIG undefined FUN_1474fc36e(void)

void FUN_1474fc36e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fc3d0 FUN_1474fc3d0 body=225 status=ok
// SIG undefined FUN_1474fc3d0(void)

longlong FUN_1474fc3d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1405b70a4();
  FUN_1474fc4b2(param_1 + 0x10,param_2 + 0x10);
  lVar1 = 0x20;
  do {
    FUN_1474fc50a(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  lVar1 = 0x40;
  do {
    FUN_1405b70a4(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x80);
  lVar1 = 0x80;
  do {
    FUN_1405b70a4(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xa0);
  lVar1 = 0xa0;
  do {
    FUN_144a67f5c(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xc0);
  lVar1 = 0xc0;
  do {
    FUN_14054c6c4(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xe0);
  lVar1 = 0xe0;
  do {
    FUN_1474fc4b2(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x100);
  return param_1;
}



// FUNCTION 1474fc4b2 FUN_1474fc4b2 body=88 status=ok
// SIG undefined FUN_1474fc4b2(void)

undefined8 * FUN_1474fc4b2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fc562(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc50a FUN_1474fc50a body=88 status=ok
// SIG undefined FUN_1474fc50a(void)

undefined8 * FUN_1474fc50a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146e0edd6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fc562 FUN_1474fc562 body=98 status=ok
// SIG undefined FUN_1474fc562(void)

void FUN_1474fc562(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fc5c4 FUN_1474fc5c4 body=115 status=ok
// SIG undefined FUN_1474fc5c4(void)

void FUN_1474fc5c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fc638 FUN_1474fc638 body=122 status=ok
// SIG undefined FUN_1474fc638(void)

longlong FUN_1474fc638(longlong param_1,longlong param_2)

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
    FUN_1474fc6b2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1474fc6b2 FUN_1474fc6b2 body=117 status=ok
// SIG undefined FUN_1474fc6b2(void)

undefined8 * FUN_1474fc6b2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1474fc728(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 1474fc728 FUN_1474fc728 body=128 status=ok
// SIG undefined FUN_1474fc728(void)

void FUN_1474fc728(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1474fc7aa FUN_1474fc7aa body=54 status=ok
// SIG undefined FUN_1474fc7aa(void)

void FUN_1474fc7aa(longlong *param_1)

{
  FUN_1474fc728(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474fc7e0 FUN_1474fc7e0 body=52 status=ok
// SIG undefined FUN_1474fc7e0(void)

void FUN_1474fc7e0(longlong *param_1)

{
  FUN_1474fc814();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474fc814 FUN_1474fc814 body=89 status=ok
// SIG undefined FUN_1474fc814(void)

void FUN_1474fc814(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1474fc96e FUN_1474fc96e body=133 status=ok
// SIG undefined FUN_1474fc96e(void)

undefined8 FUN_1474fc96e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      *(undefined2 *)(param_2 + -0x70) = *(undefined2 *)(param_3 + -0x70);
      *(undefined8 *)(param_2 + -0x78) = *(undefined8 *)(param_3 + -0x78);
      puVar2 = (undefined8 *)(param_3 + -0x68);
      puVar3 = (undefined8 *)(param_2 + -0x68);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_140472df2(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fca1c FUN_1474fca1c body=59 status=ok
// SIG undefined FUN_1474fca1c(void)

undefined8 FUN_1474fca1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fca68 FUN_1474fca68 body=57 status=ok
// SIG undefined FUN_1474fca68(void)

void FUN_1474fca68(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14a43af20;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1474fcb26 FUN_1474fcb26 body=202 status=ok
// SIG undefined FUN_1474fcb26(void)

undefined8 FUN_1474fcb26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0xd8;
      param_2 = param_2 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fcc18 FUN_1474fcc18 body=59 status=ok
// SIG undefined FUN_1474fcc18(void)

undefined8 FUN_1474fcc18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fcc64 FUN_1474fcc64 body=57 status=ok
// SIG undefined FUN_1474fcc64(void)

void FUN_1474fcc64(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 1474fcd90 FUN_1474fcd90 body=59 status=ok
// SIG undefined FUN_1474fcd90(void)

undefined8 FUN_1474fcd90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fce66 FUN_1474fce66 body=63 status=ok
// SIG undefined FUN_1474fce66(void)

undefined1 FUN_1474fce66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474fcf90(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 1474fcece FUN_1474fcece body=59 status=ok
// SIG undefined FUN_1474fcece(void)

undefined8 FUN_1474fcece(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fcf1a FUN_1474fcf1a body=40 status=ok
// SIG undefined FUN_1474fcf1a(void)

void FUN_1474fcf1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1474fd2e8(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1474fcf90 FUN_1474fcf90 body=464 status=ok
// SIG undefined FUN_1474fcf90(void)

longlong FUN_1474fcf90(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0xd8);
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  uVar4 = *(undefined4 *)(param_2 + 0xe4);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  uVar6 = *(undefined4 *)(param_2 + 0xf0);
  uVar7 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  FUN_144756208(param_1 + 0x100,param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  lVar12 = *(longlong *)(param_2 + 0x120);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x120);
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar12;
  uVar1 = *(undefined4 *)(param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  uVar4 = *(undefined4 *)(param_2 + 0x138);
  uVar5 = *(undefined4 *)(param_2 + 0x13c);
  uVar6 = *(undefined4 *)(param_2 + 0x140);
  uVar7 = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = uVar5;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  FUN_1408d5a44(param_1 + 0x158,param_2 + 0x158);
  FUN_1474fd160(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1408d5a44(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  FUN_1474fd1b8(param_1 + 0x240,param_2 + 0x240);
  FUN_144a67f5c(param_1 + 0x250,param_2 + 0x250);
  FUN_140472d9a(param_1 + 0x260,param_2 + 0x260);
  return param_1;
}



// FUNCTION 1474fd160 FUN_1474fd160 body=88 status=ok
// SIG undefined FUN_1474fd160(void)

undefined8 * FUN_1474fd160(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fd212(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fd1b8 FUN_1474fd1b8 body=89 status=ok
// SIG undefined FUN_1474fd1b8(void)

undefined8 * FUN_1474fd1b8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474fd274(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474fd212 FUN_1474fd212 body=98 status=ok
// SIG undefined FUN_1474fd212(void)

void FUN_1474fd212(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fd274 FUN_1474fd274 body=115 status=ok
// SIG undefined FUN_1474fd274(void)

void FUN_1474fd274(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474fd2e8 FUN_1474fd2e8 body=166 status=ok
// SIG undefined FUN_1474fd2e8(void)

void FUN_1474fd2e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a43bb70;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_14179b8cc(param_1 + 0x3a);
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_14179b8cc(param_1 + 0x2b);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474fd38e FUN_1474fd38e body=230 status=ok
// SIG undefined FUN_1474fd38e(void)

void FUN_1474fd38e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a43c110;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0xffffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x4049000000000000;
  param_2[0x1f] = 0x4010000000000000;
  param_2[0x20] = 0x4070000000000000;
  param_2[0x23] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x21] = DAT_14c8464e0;
  param_2[0x22] = uVar1;
  param_2[0x26] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x24] = DAT_14c8464e0;
  param_2[0x25] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0x27] = DAT_14c8464e0;
  param_2[0x28] = uVar1;
  param_2[0x29] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x174) = 0xe;
  return;
}



// FUNCTION 1474fd4b2 FUN_1474fd4b2 body=59 status=ok
// SIG undefined FUN_1474fd4b2(void)

undefined8 FUN_1474fd4b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fd4fe FUN_1474fd4fe body=57 status=ok
// SIG undefined FUN_1474fd4fe(void)

void FUN_1474fd4fe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 1474fd626 FUN_1474fd626 body=59 status=ok
// SIG undefined FUN_1474fd626(void)

undefined8 FUN_1474fd626(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fd70e FUN_1474fd70e body=59 status=ok
// SIG undefined FUN_1474fd70e(void)

undefined8 FUN_1474fd70e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fd75a FUN_1474fd75a body=38 status=ok
// SIG undefined FUN_1474fd75a(void)

void FUN_1474fd75a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_141084e4a(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 1474fd7ce FUN_1474fd7ce body=98 status=ok
// SIG undefined FUN_1474fd7ce(void)

void FUN_1474fd7ce(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474fd8b4 FUN_1474fd8b4 body=59 status=ok
// SIG undefined FUN_1474fd8b4(void)

undefined8 FUN_1474fd8b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fd978 FUN_1474fd978 body=30 status=ok
// SIG undefined FUN_1474fd978(void)

undefined8 FUN_1474fd978(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  return 0;
}



// FUNCTION 1474fd9a4 FUN_1474fd9a4 body=221 status=ok
// SIG undefined FUN_1474fd9a4(void)

undefined8 FUN_1474fd9a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x9c);
      param_3 = param_3 + 0x178;
      param_2 = param_2 + 0x178;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fdaaa FUN_1474fdaaa body=59 status=ok
// SIG undefined FUN_1474fdaaa(void)

undefined8 FUN_1474fdaaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fdaf6 FUN_1474fdaf6 body=57 status=ok
// SIG undefined FUN_1474fdaf6(void)

void FUN_1474fdaf6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 1474fdbc6 FUN_1474fdbc6 body=59 status=ok
// SIG undefined FUN_1474fdbc6(void)

undefined8 FUN_1474fdbc6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fdc12 FUN_1474fdc12 body=57 status=ok
// SIG undefined FUN_1474fdc12(void)

void FUN_1474fdc12(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1474fdd96 FUN_1474fdd96 body=39 status=ok
// SIG undefined FUN_1474fdd96(void)

undefined8 FUN_1474fdd96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474fdde6 FUN_1474fdde6 body=59 status=ok
// SIG undefined FUN_1474fdde6(void)

undefined8 FUN_1474fdde6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fdf34 FUN_1474fdf34 body=59 status=ok
// SIG undefined FUN_1474fdf34(void)

undefined8 FUN_1474fdf34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474fdfd6 FUN_1474fdfd6 body=114 status=ok
// SIG undefined FUN_1474fdfd6(void)

void FUN_1474fdfd6(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1474fe048 FUN_1474fe048 body=114 status=ok
// SIG undefined FUN_1474fe048(void)

void FUN_1474fe048(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1474fe0ba FUN_1474fe0ba body=71 status=ok
// SIG undefined FUN_1474fe0ba(void)

longlong FUN_1474fe0ba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_1463305e4(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1474fe102 FUN_1474fe102 body=71 status=ok
// SIG undefined FUN_1474fe102(void)

longlong FUN_1474fe102(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_14632f238(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1474fe14a FUN_1474fe14a body=71 status=ok
// SIG undefined FUN_1474fe14a(void)

longlong FUN_1474fe14a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146330a98(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1474fe191 FUN_1474fe191 body=61 status=ok
// SIG undefined FUN_1474fe191(void)

void FUN_1474fe191(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474fe1ce FUN_1474fe1ce body=146 status=ok
// SIG undefined FUN_1474fe1ce(void)

void FUN_1474fe1ce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474fe262 FUN_1474fe262 body=71 status=ok
// SIG undefined FUN_1474fe262(void)

undefined8 * FUN_1474fe262(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a442380;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return puVar2;
}



// FUNCTION 1474fe2aa FUN_1474fe2aa body=38 status=ok
// SIG undefined FUN_1474fe2aa(void)

undefined8 FUN_1474fe2aa(undefined8 param_1,int param_2)

{
  FUN_1474fe31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474fe2d0 FUN_1474fe2d0 body=74 status=ok
// SIG undefined FUN_1474fe2d0(void)

undefined8 * FUN_1474fe2d0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a442388;
  puVar1 = TlsGetValue(DAT_14c760fc8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760fc8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474fe31a FUN_1474fe31a body=85 status=ok
// SIG undefined FUN_1474fe31a(void)

void FUN_1474fe31a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a442380;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a442388;
  puVar1 = TlsGetValue(DAT_14c760fc8);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001474fe368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c760fc8,(LPVOID)0x0);
  return;
}



// FUNCTION 1474fe370 FUN_1474fe370 body=95 status=ok
// SIG undefined FUN_1474fe370(void)

void FUN_1474fe370(longlong param_1,uint param_2)

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



// FUNCTION 1474fe3d0 FUN_1474fe3d0 body=132 status=ok
// SIG undefined FUN_1474fe3d0(void)

void FUN_1474fe3d0(longlong param_1,int param_2)

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



// FUNCTION 1474fe456 FUN_1474fe456 body=111 status=ok
// SIG undefined FUN_1474fe456(void)

void FUN_1474fe456(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xd0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,8);
  }
  return;
}



// FUNCTION 1474fe4c6 FUN_1474fe4c6 body=132 status=ok
// SIG undefined FUN_1474fe4c6(void)

void FUN_1474fe4c6(longlong param_1,int param_2)

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



// FUNCTION 1474fe54c FUN_1474fe54c body=111 status=ok
// SIG undefined FUN_1474fe54c(void)

void FUN_1474fe54c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x360,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x360)) {
      uVar2 = uVar1 / 0x360 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x360,0x10);
  }
  return;
}



// FUNCTION 1474fe5bc FUN_1474fe5bc body=112 status=ok
// SIG undefined FUN_1474fe5bc(void)

void FUN_1474fe5bc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1474fe62c FUN_1474fe62c body=132 status=ok
// SIG undefined FUN_1474fe62c(void)

void FUN_1474fe62c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474fe6b2 FUN_1474fe6b2 body=147 status=ok
// SIG undefined FUN_1474fe6b2(void)

void FUN_1474fe6b2(longlong param_1,int param_2)

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



// FUNCTION 1474fe746 FUN_1474fe746 body=146 status=ok
// SIG undefined FUN_1474fe746(void)

void FUN_1474fe746(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x360,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x360)) {
      uVar5 = uVar4 / 0x360 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x360,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474fe7da FUN_1474fe7da body=48 status=ok
// SIG undefined FUN_1474fe7da(void)

void FUN_1474fe7da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1474fe80a FUN_1474fe80a body=112 status=ok
// SIG undefined FUN_1474fe80a(void)

void FUN_1474fe80a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 1474fe87a FUN_1474fe87a body=95 status=ok
// SIG undefined FUN_1474fe87a(void)

void FUN_1474fe87a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1474fe8da FUN_1474fe8da body=112 status=ok
// SIG undefined FUN_1474fe8da(void)

void FUN_1474fe8da(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x90,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 1474fe94a FUN_1474fe94a body=1900 status=ok
// SIG undefined FUN_1474fe94a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1474fe94a(double *param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auStack_2a8 [32];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar21 = (longlong)*(int *)((longlong)param_1 + 0x6c);
  if (lVar21 == -1) {
    puVar20 = &DAT_14c846480;
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *(undefined8 *)*param_2 = *puVar20;
      puVar20 = puVar20 + 1;
      param_2 = (undefined1 (*) [16])(*param_2 + 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2a8);
  }
  if (*(char *)(param_3[3] + lVar21) == '\0') {
    FUN_1447d5d8e(param_3,*(int *)((longlong)param_1 + 0x6c));
  }
  lVar3 = *param_3;
  lVar21 = lVar21 * 0x60;
  dVar28 = *(double *)(lVar3 + lVar21);
  dVar26 = ((double *)(lVar3 + lVar21))[1];
  pdVar1 = (double *)(lVar3 + 0x10 + lVar21);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  pdVar1 = (double *)(lVar3 + 0x20 + lVar21);
  local_288 = *pdVar1;
  dStack_280 = pdVar1[1];
  pdVar1 = (double *)(lVar3 + 0x30 + lVar21);
  dVar16 = *pdVar1;
  dVar11 = pdVar1[1];
  auVar29 = *(undefined1 (*) [16])(lVar3 + 0x40 + lVar21);
  dVar4 = auVar29._0_8_;
  dVar8 = auVar29._8_8_;
  auVar35 = *(undefined1 (*) [16])(lVar3 + 0x50 + lVar21);
  dVar5 = auVar35._0_8_;
  dVar10 = auVar35._8_8_;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  auVar36 = _DAT_149934d80;
  auVar34 = *(undefined1 (*) [16])(param_1 + 8);
  dVar6 = auVar34._0_8_;
  dVar9 = auVar34._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_1 + 10);
  dVar7 = auVar2._0_8_;
  auVar29 = minpd(auVar34,auVar29);
  auVar34 = minpd(auVar2,auVar35);
  auVar35._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  iVar18 = movmskpd((int)lVar3,auVar35);
  auVar29._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar29._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar19 = movmskpd((int)lVar21,auVar29);
  if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar33 = *param_1;
    dVar27 = param_1[1];
    dVar37 = param_1[2];
    dVar17 = param_1[3];
    dVar32 = dVar33 * dVar14 * 1.0 + dVar17 * dVar26 + dVar28 * dVar37 * -1.0 + dVar15 * dVar27;
    dVar12 = param_1[4] * dVar4;
    dVar13 = param_1[5] * dVar8;
    dVar30 = param_1[6] * dVar5;
    dVar31 = param_1[7] * dVar10;
    auVar34._8_4_ = SUB84(dVar32,0);
    auVar34._0_8_ =
         dVar27 * dVar14 * -1.0 + dVar37 * dVar26 + dVar28 * dVar17 * 1.0 + dVar15 * dVar33;
    auVar34._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    *param_2 = auVar34;
    *(double *)param_2[1] =
         dVar17 * dVar14 * 1.0 + ((dVar28 * dVar27 * 1.0 + dVar15 * dVar37) - dVar26 * dVar33);
    *(double *)(param_2[1] + 8) =
         dVar37 * dVar14 * -1.0 + ((dVar28 * dVar33 * -1.0 + dVar15 * dVar17) - dVar26 * dVar27);
    dVar27 = dVar13 * dVar28 - dVar26 * dVar12;
    dVar37 = dVar30 * dVar26 - dVar14 * dVar13;
    dVar32 = dVar12 * dVar14 - dVar28 * dVar30;
    dVar33 = dVar31 * dVar15 - dVar15 * dVar31;
    dVar37 = dVar37 + dVar37;
    dVar32 = dVar32 + dVar32;
    dVar27 = dVar27 + dVar27;
    dVar33 = dVar33 + dVar33;
    *(double *)param_2[2] =
         local_288 + (dVar27 * dVar26 - dVar14 * dVar32) + dVar15 * dVar37 + dVar12;
    *(double *)(param_2[2] + 8) =
         dStack_280 + (dVar37 * dVar14 - dVar27 * dVar28) + dVar15 * dVar32 + dVar13;
    *(double *)param_2[3] = dVar16 + (dVar32 * dVar28 - dVar26 * dVar37) + dVar15 * dVar27 + dVar30;
    *(double *)(param_2[3] + 8) =
         dVar11 + (dVar33 * dVar15 - dVar33 * dVar15) + dVar15 * dVar33 + dVar31;
    *(double *)param_2[4] = dVar6 * dVar4;
    *(double *)(param_2[4] + 8) = dVar9 * dVar8;
    *(double *)param_2[5] = dVar7 * dVar5;
    *(double *)(param_2[5] + 8) = auVar2._8_8_ * dVar10;
  }
  else {
    dVar30 = dVar26 + dVar26;
    dVar32 = dVar14 + dVar14;
    dVar27 = dVar28 * (dVar28 + dVar28);
    dVar11 = (DAT_149934d80._8_8_ - (dVar14 * dVar32 + dVar27)) * dVar8;
    dVar33 = (dVar28 + dVar28) * dVar15;
    dVar31 = (dVar32 * dVar26 - dVar33) * dVar5;
    local_188 = (1.0 - (dVar27 + dVar26 * dVar30)) * dVar5;
    dVar10 = dVar10 * auVar2._8_8_;
    dVar27 = (dVar30 * dVar28 + dVar32 * dVar15) * dVar4;
    local_1a8 = (dVar32 * dVar26 + dVar33) * dVar8;
    local_1c8 = (dVar28 * dVar32 - dVar30 * dVar15) * dVar4;
    local_1d8._8_4_ = SUB84(dVar27,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar14 * dVar32 + dVar26 * dVar30)) * dVar4;
    local_1d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar11,0);
    local_1b8._0_8_ = (dVar30 * dVar28 - dVar32 * dVar15) * dVar8;
    local_1b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar31,0);
    local_198._0_8_ = (dVar30 * dVar15 + dVar28 * dVar32) * dVar5;
    local_198._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    uStack_180 = 0;
    uStack_160 = 0x3ff0000000000000;
    dVar14 = *param_1;
    dVar15 = param_1[1];
    dVar11 = param_1[2];
    dVar30 = dVar15 + dVar15;
    dVar31 = dVar11 + dVar11;
    dVar26 = dVar14 * (dVar14 + dVar14);
    local_208 = (1.0 - (dVar26 + dVar15 * dVar30)) * dVar7;
    dVar28 = param_1[3];
    dVar32 = dVar31 * dVar28;
    dVar33 = (dVar14 + dVar14) * param_1[3];
    dVar28 = dVar30 * dVar28;
    local_218 = (dVar28 + *param_1 * dVar31) * dVar7;
    dStack_210 = (dVar31 * dVar15 - dVar33) * dVar7;
    local_258 = ((double)DAT_149934d80 - (dVar11 * dVar31 + dVar15 * dVar30)) * dVar6;
    dVar26 = (DAT_149934d80._8_8_ - (dVar11 * dVar31 + dVar26)) * dVar9;
    dStack_250 = (dVar30 * dVar14 + dVar32) * dVar6;
    local_228 = (dVar31 * dVar15 + dVar33) * dVar9;
    local_248 = (*param_1 * dVar31 - dVar28) * dVar6;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar26,0);
    local_238._0_8_ = (dVar30 * dVar14 - dVar32) * dVar9;
    local_238._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_1[4];
    dStack_1f0 = param_1[5];
    local_1e8 = param_1[6];
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = local_288;
    dStack_170 = dStack_280;
    local_168 = dVar16;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar23._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
    auVar23._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
    auVar29 = blendvpd(_DAT_149936790,auVar36,auVar23);
    uVar22 = -(ulonglong)(0.0 <= dVar5 * dVar7);
    dVar28 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
    dVar26 = auVar29._0_8_;
    local_148 = local_148 * dVar26;
    local_150 = local_150 * dVar26;
    local_158 = local_158 * dVar26;
    dVar26 = auVar29._8_8_;
    local_128 = local_128 * dVar26;
    local_130 = local_130 * dVar26;
    local_138 = dVar26 * local_138;
    local_108 = local_108 * dVar28;
    local_110 = local_110 * dVar28;
    local_118 = dVar28 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar28 = local_268 * local_268 + local_278 * local_278;
    dVar26 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar25._0_8_ = dVar28 + dVar26;
    auVar25._8_8_ = dVar28 + dVar26;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar29 = sqrtpd(auVar25,auVar25);
    auVar35 = divpd(auVar36,auVar29);
    auVar36._0_8_ = auVar35._0_8_ * local_268;
    auVar36._8_8_ = auVar35._8_8_ * dStack_260;
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar24);
    *(double *)param_2[4] = dVar4 * dVar6;
    *(double *)(param_2[4] + 8) = dVar8 * dVar9;
    auVar2._8_4_ = SUB84(dVar10,0);
    auVar2._0_8_ = dVar5 * dVar7;
    auVar2._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    param_2[5] = auVar2;
    *(ulonglong *)*param_2 =
         (ulonglong)(local_278 * auVar35._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    *(ulonglong *)(*param_2 + 8) =
         (ulonglong)(dStack_270 * auVar35._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    param_2[1] = auVar29;
    *(undefined8 *)param_2[2] = local_f8;
    *(undefined8 *)(param_2[2] + 8) = uStack_f0;
    *(undefined8 *)param_2[3] = local_e8;
    *(undefined8 *)(param_2[3] + 8) = 0;
  }
  if ((local_d0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474ff0b8 FUN_1474ff0b8 body=516 status=ok
// SIG undefined FUN_1474ff0b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474ff0b8(undefined8 param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0x3ff0000000000000;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  auVar11 = _DAT_149934d80;
  *(undefined1 (*) [16])(param_4 + 8) = _DAT_149934d80;
  *(undefined1 (*) [16])(param_4 + 10) = ZEXT816(0x3ff0000000000000);
  dVar4 = *param_2 - param_3[4];
  dVar5 = param_2[1] - param_3[5];
  dVar13 = param_2[2] - param_3[6];
  dVar9 = *param_3;
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  dVar10 = param_3[10];
  dVar6 = -dVar9;
  dVar7 = -param_3[1];
  dVar2 = param_3[2] * -1.0;
  dVar3 = param_3[3] * 1.0;
  dVar15 = dVar4 * dVar2 - dVar6 * dVar13;
  dVar14 = dVar5 * dVar6 - dVar4 * dVar7;
  dVar8 = dVar13 * dVar7 - dVar5 * dVar2;
  dVar8 = dVar8 + dVar8;
  dVar15 = dVar15 + dVar15;
  dVar14 = dVar14 + dVar14;
  auVar12 = divpd(auVar11,auVar1);
  auVar11._8_8_ = 0x3ff0000000000000;
  auVar11._0_8_ = dVar10;
  auVar11 = divpd(ZEXT816(0x3ff0000000000000),auVar11);
  param_4[4] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar12._0_8_) *
               ((dVar14 * dVar7 - dVar15 * dVar2) + dVar3 * dVar8 + dVar4);
  param_4[5] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar12._8_8_) *
               (dVar14 * dVar9 + dVar2 * dVar8 + dVar3 * dVar15 + dVar5);
  param_4[6] = (dVar3 * dVar14 + dVar13 + (dVar15 * dVar6 - dVar8 * dVar7)) *
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar10)) & auVar11._0_8_);
  param_4[7] = 0;
  return;
}



// FUNCTION 1474ff2bc FUN_1474ff2bc body=53 status=ok
// SIG undefined FUN_1474ff2bc(void)

void FUN_1474ff2bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 200);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474ff2f2 FUN_1474ff2f2 body=112 status=ok
// SIG undefined FUN_1474ff2f2(void)

void FUN_1474ff2f2(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,0x10);
  }
  return;
}



// FUNCTION 1474ff362 FUN_1474ff362 body=146 status=ok
// SIG undefined FUN_1474ff362(void)

void FUN_1474ff362(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ff3f6 FUN_1474ff3f6 body=57 status=ok
// SIG undefined FUN_1474ff3f6(void)

void FUN_1474ff3f6(undefined8 *param_1,int param_2)

{
  FUN_1474f9a9f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1474ff430(param_1,param_2);
  return;
}



// FUNCTION 1474ff430 FUN_1474ff430 body=112 status=ok
// SIG undefined FUN_1474ff430(void)

void FUN_1474ff430(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,0x10);
  }
  return;
}



// FUNCTION 1474ff4a0 FUN_1474ff4a0 body=146 status=ok
// SIG undefined FUN_1474ff4a0(void)

void FUN_1474ff4a0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ff534 FUN_1474ff534 body=113 status=ok
// SIG undefined FUN_1474ff534(void)

void FUN_1474ff534(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1474ff5a6 FUN_1474ff5a6 body=147 status=ok
// SIG undefined FUN_1474ff5a6(void)

void FUN_1474ff5a6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ff63a FUN_1474ff63a body=143 status=ok
// SIG undefined FUN_1474ff63a(void)

void FUN_1474ff63a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474ff6ca FUN_1474ff6ca body=122 status=ok
// SIG undefined FUN_1474ff6ca(void)

void FUN_1474ff6ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1474ff744 FUN_1474ff744 body=48 status=ok
// SIG undefined FUN_1474ff744(void)

void FUN_1474ff744(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf0,0x10);
  }
  return;
}



// FUNCTION 1474ff774 FUN_1474ff774 body=100 status=ok
// SIG undefined FUN_1474ff774(void)

void FUN_1474ff774(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14470ea6a(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
    }
  }
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 1474ff7d8 FUN_1474ff7d8 body=100 status=ok
// SIG undefined FUN_1474ff7d8(void)

void FUN_1474ff7d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144756262(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
    }
  }
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 1474ff83c FUN_1474ff83c body=48 status=ok
// SIG undefined FUN_1474ff83c(void)

void FUN_1474ff83c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1474ff86c FUN_1474ff86c body=4179 status=ok
// SIG undefined FUN_1474ff86c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474ff86c(longlong *param_1,int param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auStack_418 [32];
  longlong local_3f8;
  int local_3ec;
  longlong local_3e8;
  longlong local_3e0;
  undefined1 local_3d8 [16];
  double *local_3c8;
  double *local_3c0;
  undefined1 local_3b8 [16];
  double *local_3a8;
  double *local_3a0;
  undefined1 local_398 [16];
  double *local_388;
  double *local_380;
  undefined1 local_378 [16];
  double *local_368;
  double *local_360;
  undefined1 local_358 [16];
  double *local_348;
  double *local_340;
  undefined1 local_338 [16];
  double *local_328;
  double *local_320;
  double *local_318;
  undefined1 *local_310;
  double local_308 [2];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188 [4];
  double local_168 [10];
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_2a8 = ZEXT816(0);
  iVar15 = (int)param_1[4];
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if (iVar15 == 0) {
    uVar20 = 0;
    iVar15 = 0;
  }
  else {
    FUN_1447d6d9c(local_2a8);
    iVar15 = local_2a8._8_4_;
    uVar20 = local_2a8._12_4_;
  }
  local_2a8._8_4_ = iVar15 + 1U;
  if (uVar20 < iVar15 + 1U) {
    FUN_1408f8cfa(local_2a8,iVar15);
  }
  *(int *)(local_2a8._0_8_ + (longlong)iVar15 * 4) = param_2;
  pdVar1 = local_188 + 2;
  do {
    auVar41 = _DAT_149934d80;
    lVar22 = (longlong)param_2;
    iVar15 = *(int *)(*(longlong *)(param_1[2] + 0x90) + lVar22 * 4);
    if (*(char *)(param_1[3] + (longlong)iVar15) == '\0') {
      uVar13 = local_2a8._8_4_;
      lVar22 = (longlong)(int)local_2a8._8_4_;
      uVar20 = local_2a8._8_4_ + 1;
      local_2a8._8_4_ = uVar20;
      if ((uint)local_2a8._12_4_ < uVar20) {
        FUN_1408f8cfa(local_2a8,uVar13);
      }
      *(int *)(local_2a8._0_8_ + lVar22 * 4) = param_2;
      iVar18 = local_2a8._8_4_;
    }
    else {
      lVar25 = *param_1;
      lVar19 = lVar22 * 0x60;
      pdVar16 = (double *)(lVar25 + lVar19);
      local_3f8 = (longlong)iVar15 * 0x60;
      pdVar17 = (double *)(lVar25 + local_3f8);
      local_2d8 = ZEXT816(0);
      local_2e8 = ZEXT816(0);
      local_2b8 = ZEXT816(0x3ff0000000000000);
      auVar29 = *(undefined1 (*) [16])(lVar25 + 0x40 + local_3f8);
      dVar3 = auVar29._0_8_;
      dVar5 = auVar29._8_8_;
      auVar37 = *(undefined1 (*) [16])(lVar25 + 0x50 + local_3f8);
      dVar4 = auVar37._0_8_;
      auVar2 = *(undefined1 (*) [16])(lVar25 + 0x40 + lVar19);
      auVar44 = *(undefined1 (*) [16])(lVar25 + 0x50 + lVar19);
      auVar29 = minpd(auVar2,auVar29);
      auVar35 = minpd(auVar44,auVar37);
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar18 = movmskpd((int)lVar25,auVar30);
      auVar29._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
      uVar20 = movmskpd((int)local_2e8,auVar29);
      local_3ec = iVar15;
      if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
        dVar39 = *pdVar16;
        dVar8 = pdVar16[1];
        dVar45 = pdVar16[2];
        dVar46 = pdVar16[3];
        dVar9 = *pdVar17;
        dVar10 = pdVar17[1];
        dVar11 = pdVar17[2];
        dVar12 = pdVar17[3];
        dVar28 = pdVar17[3];
        dVar34 = pdVar17[3];
        dVar40 = pdVar17[1];
        dVar33 = pdVar17[1];
        dVar31 = pdVar17[2];
        dVar32 = pdVar17[2];
        local_308[0] = dVar8 * dVar31 * -1.0 +
                       dVar45 * dVar40 + dVar46 * *pdVar17 * 1.0 + dVar39 * dVar28;
        local_308[1] = dVar39 * dVar32 * 1.0 +
                       dVar46 * dVar33 + dVar45 * *pdVar17 * -1.0 + dVar8 * dVar34;
        local_2f8._0_8_ =
             dVar46 * dVar31 * 1.0 + ((*pdVar17 * dVar8 * 1.0 + dVar45 * dVar28) - dVar39 * dVar40);
        local_2f8._8_8_ =
             dVar45 * dVar32 * -1.0 +
             ((*pdVar17 * dVar39 * -1.0 + dVar46 * dVar34) - dVar8 * dVar33);
        dVar39 = pdVar16[4] * dVar3;
        dVar8 = pdVar16[5] * dVar5;
        dVar31 = pdVar16[6] * dVar4;
        dVar32 = pdVar16[7] * auVar37._8_8_;
        dVar40 = dVar8 * dVar9 - dVar10 * dVar39;
        dVar45 = dVar31 * dVar10 - dVar11 * dVar8;
        dVar46 = dVar39 * dVar11 - dVar9 * dVar31;
        dVar33 = dVar32 * dVar12 - dVar12 * dVar32;
        dVar45 = dVar45 + dVar45;
        dVar46 = dVar46 + dVar46;
        dVar40 = dVar40 + dVar40;
        dVar33 = dVar33 + dVar33;
        local_2e8._0_8_ =
             (dVar40 * dVar10 - dVar11 * dVar46) + dVar28 * dVar45 + dVar39 + pdVar17[4];
        local_2e8._8_8_ = (dVar45 * dVar11 - dVar40 * dVar9) + dVar34 * dVar46 + dVar8 + pdVar17[5];
        dVar28 = (dVar46 * dVar9 - dVar10 * dVar45) + dVar28 * dVar40 + dVar31 + pdVar17[6];
        dVar34 = (dVar33 * dVar12 - dVar33 * dVar12) + dVar34 * dVar33 + dVar32 + pdVar17[7];
      }
      else {
        dVar34 = *pdVar17;
        dVar40 = pdVar17[1];
        dVar33 = pdVar17[2];
        dVar31 = dVar40 + dVar40;
        dVar32 = dVar33 + dVar33;
        dVar28 = dVar34 * (dVar34 + dVar34);
        local_1f8 = ((double)DAT_149934d80 - (dVar33 * dVar32 + dVar40 * dVar31)) * dVar3;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar33 * dVar32 + dVar28)) * dVar5;
        local_1a8 = (1.0 - (dVar28 + dVar40 * dVar31)) * dVar4;
        dVar28 = pdVar17[3];
        dVar33 = dVar32 * dVar28;
        dVar39 = (dVar34 + dVar34) * pdVar17[3];
        dVar28 = dVar31 * dVar28;
        dStack_1f0 = (dVar31 * dVar34 + dVar33) * dVar3;
        local_1c8 = (dVar32 * dVar40 + dVar39) * dVar5;
        local_1b8 = (dVar28 + *pdVar17 * dVar32) * dVar4;
        local_1d8 = (dVar31 * dVar34 - dVar33) * dVar5;
        dStack_1b0 = (dVar32 * dVar40 - dVar39) * dVar4;
        local_1e8 = (*pdVar17 * dVar32 - dVar28) * dVar3;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar17[4];
        dStack_190 = pdVar17[5];
        local_188[0] = pdVar17[6];
        local_188[1] = 1.0;
        dVar34 = *pdVar16;
        dVar40 = pdVar16[1];
        dVar33 = pdVar16[2];
        local_268 = pdVar16[8];
        local_258 = pdVar16[9];
        dStack_230 = pdVar16[10];
        dVar39 = dVar40 + dVar40;
        dVar31 = dVar33 + dVar33;
        dVar28 = dVar34 * (dVar34 + dVar34);
        local_278 = ((double)DAT_149934d80 - (dVar33 * dVar31 + dVar40 * dVar39)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar33 * dVar31 + dVar28)) * local_258;
        local_228 = (1.0 - (dVar28 + dVar40 * dVar39)) * dStack_230;
        dVar28 = pdVar16[3];
        dVar33 = dVar31 * dVar28;
        dVar32 = (dVar34 + dVar34) * pdVar16[3];
        dVar28 = dVar39 * dVar28;
        dStack_270 = (dVar39 * dVar34 + dVar33) * local_268;
        local_248 = (dVar31 * dVar40 + dVar32) * local_258;
        local_238 = (dVar28 + *pdVar16 * dVar31) * dStack_230;
        local_268 = (*pdVar16 * dVar31 - dVar28) * local_268;
        local_258 = (dVar39 * dVar34 - dVar33) * local_258;
        dStack_230 = (dVar31 * dVar40 - dVar32) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar16[4];
        dStack_210 = pdVar16[5];
        local_208 = pdVar16[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(pdVar1,&local_278,&local_1f8);
        FUN_144a1c686(pdVar1,0x3e45798ee0000000);
        auVar35._8_8_ = -(ulonglong)(0.0 <= auVar2._8_8_ * dVar5);
        auVar35._0_8_ = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar3);
        auVar29 = blendvpd(_DAT_149936790,auVar41,auVar35);
        uVar24 = -(ulonglong)(0.0 <= auVar44._0_8_ * dVar4);
        dVar28 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
        dVar34 = auVar29._0_8_;
        local_168[0] = local_168[0] * dVar34;
        local_188[3] = local_188[3] * dVar34;
        local_188[2] = local_188[2] * dVar34;
        dVar34 = auVar29._8_8_;
        local_168[4] = local_168[4] * dVar34;
        local_168[3] = local_168[3] * dVar34;
        local_168[2] = dVar34 * local_168[2];
        local_168[8] = local_168[8] * dVar28;
        local_168[7] = local_168[7] * dVar28;
        local_168[6] = dVar28 * local_168[6];
        pdVar17 = &local_298;
        pdVar16 = (double *)FUN_14481fd10(&local_298,pdVar1);
        dVar40 = (double)CONCAT44(uStack_28c,uStack_290);
        dVar28 = local_288._0_8_;
        dVar34 = local_288._8_8_;
        dVar33 = dVar28 * dVar28 + local_298 * local_298;
        dVar31 = dVar34 * dVar34 + dVar40 * dVar40;
        auVar36._0_8_ = dVar33 + dVar31;
        auVar36._8_8_ = dVar33 + dVar31;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar29 = sqrtpd(auVar36,auVar36);
        auVar41 = divpd(auVar41,auVar29);
        auVar42._0_8_ = auVar41._0_8_ * dVar28;
        auVar42._8_8_ = auVar41._8_8_ * dVar34;
        local_308[0] = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        local_308[1] = (double)((ulonglong)(dVar40 * auVar41._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar26);
        dVar34 = 0.0;
        local_2e8 = local_118;
        dVar28 = local_108;
      }
      dVar40 = auVar44._8_8_ * auVar37._8_8_;
      dVar4 = auVar44._0_8_ * dVar4;
      dVar5 = auVar2._8_8_ * dVar5;
      dVar3 = auVar2._0_8_ * dVar3;
      local_2d8._8_4_ = SUB84(dVar34,0);
      local_2d8._0_8_ = dVar28;
      local_2d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      local_2c8._8_4_ = SUB84(dVar5,0);
      local_2c8._0_8_ = dVar3;
      local_2c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_2b8._8_4_ = SUB84(dVar40,0);
      local_2b8._0_8_ = dVar4;
      local_2b8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      auVar41._8_8_ =
           -(ulonglong)((double)((ulonglong)local_308[1] & 0x7ff0000000000000) == INFINITY);
      auVar41._0_8_ =
           -(ulonglong)((double)((ulonglong)local_308[0] & 0x7ff0000000000000) == INFINITY);
      iVar15 = movmskpd((int)pdVar16,auVar41);
      auVar37._8_8_ = -(ulonglong)((double)(local_2f8._8_8_ & 0x7ff0000000000000) == INFINITY);
      auVar37._0_8_ = -(ulonglong)((double)(local_2f8._0_8_ & 0x7ff0000000000000) == INFINITY);
      uVar20 = movmskpd((int)pdVar17,auVar37);
      if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar44._8_8_ = -(ulonglong)((double)(local_2e8._8_8_ & 0x7ff0000000000000) == INFINITY);
        auVar44._0_8_ = -(ulonglong)((double)(local_2e8._0_8_ & 0x7ff0000000000000) == INFINITY);
        iVar15 = movmskpd(iVar15,auVar44);
        lVar25 = -(ulonglong)((double)((ulonglong)dVar34 & 0x7ff0000000000000) == INFINITY);
        auVar2._8_4_ = (int)lVar25;
        auVar2._0_8_ = -(ulonglong)((double)((ulonglong)dVar28 & 0x7ff0000000000000) == INFINITY);
        auVar2._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar20 = movmskpd(0,auVar2);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1474ffed4;
        lVar25 = -(ulonglong)((double)((ulonglong)dVar5 & 0x7ff0000000000000) == INFINITY);
        auVar6._8_4_ = (int)lVar25;
        auVar6._0_8_ = -(ulonglong)((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY);
        auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar15 = movmskpd(iVar15,auVar6);
        lVar25 = -(ulonglong)((double)((ulonglong)dVar40 & 0x7ff0000000000000) == INFINITY);
        auVar7._8_4_ = (int)lVar25;
        auVar7._0_8_ = -(ulonglong)((double)((ulonglong)dVar4 & 0x7ff0000000000000) == INFINITY);
        auVar7._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar20 = movmskpd(0,auVar7);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1474ffed4;
      }
      else {
LAB_1474ffed4:
        local_3e8 = lVar19;
        local_3e0 = lVar22;
        cVar14 = FUN_144a78e48(*param_1 + lVar19);
        pwVar23 = L"false";
        pwVar21 = L"false";
        if (cVar14 != '\0') {
          pwVar21 = L"true";
        }
        cVar14 = FUN_144a78e48(*param_1 + local_3f8);
        if (cVar14 != '\0') {
          pwVar23 = L"true";
        }
        FUN_140056680(&local_1f8,L"NaN created in during FTransform Multiplication\n");
        FUN_142787b30(pdVar1,param_2);
        pdVar16 = local_168 + 2;
        FUN_142787b30(pdVar16,local_3ec);
        FUN_140230a18(local_168 + 6,pwVar21);
        FUN_140230a18(local_118,pwVar23);
        local_310 = local_f8;
        local_318 = pdVar1;
        FUN_1407adb6e(&local_298,&local_318);
        FUN_140230a2e(&local_278,
                      L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                      ,&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        lVar22 = 0x80;
        do {
          if (*(longlong *)((longlong)local_188 + lVar22) != 0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + -0x20;
        } while (lVar22 != 0);
        FUN_1467f64aa(*param_1 + local_3e8,local_338);
        FUN_14146ec20(pdVar1,local_338);
        local_328 = pdVar1;
        local_320 = pdVar16;
        FUN_1407adb6e(&local_298,&local_328);
        FUN_140230a2e(&local_278,L"\tBone {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1467f64aa(*param_1 + local_3f8,local_358);
        FUN_14146ec20(pdVar1,local_358);
        local_348 = pdVar1;
        local_340 = pdVar16;
        FUN_1407adb6e(&local_298,&local_348);
        FUN_140230a2e(&local_278,L"\tParent {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1467f64aa(local_308,local_378);
        FUN_14146ec20(pdVar1,local_378);
        local_368 = pdVar1;
        local_360 = pdVar16;
        FUN_1407adb6e(&local_298,&local_368);
        FUN_140230a2e(&local_278,L"\tResult {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_398,local_3e8 + *param_1,0x60,0);
        FUN_14146ec20(pdVar1,local_398);
        local_388 = pdVar1;
        local_380 = pdVar16;
        FUN_1407adb6e(&local_298,&local_388);
        FUN_140230a2e(&local_278,L"\tBone B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3b8,local_3f8 + *param_1,0x60,0);
        FUN_14146ec20(pdVar1,local_3b8);
        local_3a8 = pdVar1;
        local_3a0 = pdVar16;
        FUN_1407adb6e(&local_298,&local_3a8);
        FUN_140230a2e(&local_278,L"\tParent B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3d8,local_308,0x60,0);
        FUN_14146ec20(pdVar1,local_3d8);
        local_3c8 = pdVar1;
        local_3c0 = pdVar16;
        FUN_1407adb6e(&local_298,&local_3c8);
        FUN_140230a2e(&local_278,L"\tResult B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        lVar22 = local_3e0;
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        if (local_1f8 != 0.0) {
          FUN_1400020a8();
        }
      }
      lVar25 = lVar22 * 0x60;
      pdVar16 = local_308;
      pdVar17 = (double *)(*param_1 + lVar25);
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar17 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar17 = pdVar17 + 1;
      }
      lVar19 = *param_1;
      dVar3 = *(double *)(lVar19 + lVar25);
      dVar4 = ((double *)(lVar19 + lVar25))[1];
      pdVar16 = (double *)(lVar19 + 0x10 + lVar25);
      dVar5 = *pdVar16;
      dVar28 = pdVar16[1];
      dVar34 = dVar5 * dVar5 + dVar3 * dVar3;
      dVar40 = dVar28 * dVar28 + dVar4 * dVar4;
      auVar38._0_8_ = dVar34 + dVar40;
      auVar38._8_8_ = dVar34 + dVar40;
      auVar27._8_8_ = -(ulonglong)(1e-08 <= auVar38._8_8_);
      auVar27._0_8_ = -(ulonglong)(1e-08 <= auVar38._0_8_);
      auVar41 = sqrtpd(auVar38,auVar38);
      auVar29 = divpd(_DAT_149934d80,auVar41);
      auVar43._0_8_ = auVar29._0_8_ * dVar5;
      auVar43._8_8_ = auVar29._8_8_ * dVar28;
      auVar41 = blendvpd(_DAT_149935300,auVar43,auVar27);
      *(ulonglong *)(lVar19 + lVar25) =
           (ulonglong)(dVar3 * auVar29._0_8_) & -(ulonglong)(1e-08 <= auVar38._0_8_);
      ((ulonglong *)(lVar19 + lVar25))[1] =
           (ulonglong)(dVar4 * auVar29._8_8_) & -(ulonglong)(1e-08 <= auVar38._8_8_);
      *(undefined1 (*) [16])(lVar19 + 0x10 + lVar25) = auVar41;
      *(undefined1 *)(param_1[3] + lVar22) = 1;
      iVar15 = *(int *)(local_2a8._0_8_ + -4 + (longlong)(int)local_2a8._8_4_ * 4);
      iVar18 = local_2a8._8_4_ + -1;
      local_2a8._8_4_ = iVar18;
    }
    param_2 = iVar15;
    if (iVar18 == 0) {
      if (local_2a8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1475008c2 FUN_1475008c2 body=68 status=ok
// SIG undefined FUN_1475008c2(void)

void FUN_1475008c2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147500906();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147500906 FUN_147500906 body=322 status=ok
// SIG undefined FUN_147500906(void)

void FUN_147500906(longlong *param_1)

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



// FUNCTION 147500a4a FUN_147500a4a body=96 status=ok
// SIG undefined FUN_147500a4a(void)

void FUN_147500a4a(longlong param_1,int param_2)

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



// FUNCTION 147500aaa FUN_147500aaa body=112 status=ok
// SIG undefined FUN_147500aaa(void)

void FUN_147500aaa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,0x10);
  }
  return;
}



// FUNCTION 147500b1a FUN_147500b1a body=76 status=ok
// SIG undefined FUN_147500b1a(void)

void FUN_147500b1a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3ff0000000000000;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = &DAT_200000002;
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) & 0xfc;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 147500b66 FUN_147500b66 body=147 status=ok
// SIG undefined FUN_147500b66(void)

void FUN_147500b66(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147500bfa FUN_147500bfa body=132 status=ok
// SIG undefined FUN_147500bfa(void)

void FUN_147500bfa(longlong param_1,int param_2)

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



// FUNCTION 147500c80 FUN_147500c80 body=335 status=ok
// SIG undefined FUN_147500c80(void)

undefined4 * FUN_147500c80(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147500dd0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147500eb6(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147500fa8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147500dd0 FUN_147500dd0 body=230 status=ok
// SIG undefined FUN_147500dd0(void)

int * FUN_147500dd0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147500eb6 FUN_147500eb6 body=128 status=ok
// SIG undefined FUN_147500eb6(void)

undefined8 FUN_147500eb6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147500f36((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147500f36 FUN_147500f36 body=114 status=ok
// SIG undefined FUN_147500f36(void)

void FUN_147500f36(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147500fa8 FUN_147500fa8 body=473 status=ok
// SIG undefined FUN_147500fa8(void)

void FUN_147500fa8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147501182 FUN_147501182 body=132 status=ok
// SIG undefined FUN_147501182(void)

void FUN_147501182(longlong param_1,int param_2)

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



// FUNCTION 147501208 FUN_147501208 body=115 status=ok
// SIG undefined FUN_147501208(void)

void FUN_147501208(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14750127c FUN_14750127c body=147 status=ok
// SIG undefined FUN_14750127c(void)

void FUN_14750127c(longlong param_1,int param_2)

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



// FUNCTION 147501310 FUN_147501310 body=326 status=ok
// SIG undefined FUN_147501310(void)

undefined4 * FUN_147501310(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147501458(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_14750153e(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14750163a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147501458 FUN_147501458 body=229 status=ok
// SIG undefined FUN_147501458(void)

int * FUN_147501458(longlong *param_1,int *param_2)

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



// FUNCTION 14750153e FUN_14750153e body=137 status=ok
// SIG undefined FUN_14750153e(void)

undefined8 FUN_14750153e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1475015c8((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475015c8 FUN_1475015c8 body=114 status=ok
// SIG undefined FUN_1475015c8(void)

void FUN_1475015c8(longlong *param_1,int param_2)

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



// FUNCTION 14750163a FUN_14750163a body=477 status=ok
// SIG undefined FUN_14750163a(void)

void FUN_14750163a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 147501818 FUN_147501818 body=132 status=ok
// SIG undefined FUN_147501818(void)

void FUN_147501818(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14750189c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14750189c FUN_14750189c body=90 status=ok
// SIG undefined FUN_14750189c(void)

void FUN_14750189c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1475015c8();
  return;
}



// FUNCTION 1475018f6 FUN_1475018f6 body=95 status=ok
// SIG undefined FUN_1475018f6(void)

void FUN_1475018f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147501956 FUN_147501956 body=132 status=ok
// SIG undefined FUN_147501956(void)

void FUN_147501956(longlong param_1,int param_2)

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



// FUNCTION 1475019dc FUN_1475019dc body=114 status=ok
// SIG undefined FUN_1475019dc(void)

longlong FUN_1475019dc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_14caab3e0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caab3e0 = FUN_140002ddd(FUN_146333c21,uVar2,L"AnimNode_RigidBody");
      if (DAT_14caab3e0 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14caab3e0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caab3e0 + 0x38) * 8) ==
        DAT_14caab3e0 + 0x30)) {
      return *param_1;
    }
  }
  return 0;
}



// FUNCTION 147501a4e FUN_147501a4e body=79 status=ok
// SIG undefined FUN_147501a4e(void)

undefined8 * FUN_147501a4e(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a4423b0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return puVar2;
}



// FUNCTION 147501a9e FUN_147501a9e body=38 status=ok
// SIG undefined FUN_147501a9e(void)

undefined8 FUN_147501a9e(undefined8 param_1,int param_2)

{
  FUN_147501b0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147501ac4 FUN_147501ac4 body=74 status=ok
// SIG undefined FUN_147501ac4(void)

undefined8 * FUN_147501ac4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a4423b8;
  puVar1 = TlsGetValue(DAT_14c760fcc);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760fcc,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147501b0e FUN_147501b0e body=113 status=ok
// SIG undefined FUN_147501b0e(void)

void FUN_147501b0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a4423b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a4423b8;
  puVar1 = TlsGetValue(DAT_14c760fcc);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147501b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c760fcc,(LPVOID)0x0);
  return;
}



// FUNCTION 147501b80 FUN_147501b80 body=29 status=ok
// SIG undefined FUN_147501b80(void)

undefined8 FUN_147501b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147501bc6 FUN_147501bc6 body=60 status=ok
// SIG undefined FUN_147501bc6(void)

void FUN_147501bc6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a442430;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14a4423c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147501c02 FUN_147501c02 body=60 status=ok
// SIG undefined FUN_147501c02(void)

void FUN_147501c02(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a442430;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14a4423c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147501c3e FUN_147501c3e body=100 status=ok
// SIG undefined FUN_147501c3e(void)

void FUN_147501c3e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection(param_2);
  puVar5 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar5 = &PTR_LAB_14a442430;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14a4423c0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar1;
  *(undefined4 *)(puVar5 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147501c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147501cb6 FUN_147501cb6 body=26 status=ok
// SIG undefined FUN_147501cb6(void)

undefined8 FUN_147501cb6(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 8));
  return 1;
}



// FUNCTION 147501cd2 FUN_147501cd2 body=29 status=ok
// SIG undefined FUN_147501cd2(void)

undefined8 FUN_147501cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147501d18 FUN_147501d18 body=60 status=ok
// SIG undefined FUN_147501d18(void)

void FUN_147501d18(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a442510;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a4424a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147501d54 FUN_147501d54 body=60 status=ok
// SIG undefined FUN_147501d54(void)

void FUN_147501d54(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a442510;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a4424a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147501d90 FUN_147501d90 body=100 status=ok
// SIG undefined FUN_147501d90(void)

void FUN_147501d90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14a442510;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a4424a0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147501de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147501e02 FUN_147501e02 body=21 status=ok
// SIG undefined FUN_147501e02(void)

undefined8 FUN_147501e02(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147501e1a FUN_147501e1a body=132 status=ok
// SIG undefined FUN_147501e1a(void)

void FUN_147501e1a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147501ea0 FUN_147501ea0 body=48 status=ok
// SIG undefined FUN_147501ea0(void)

void FUN_147501ea0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 147501ed0 FUN_147501ed0 body=147 status=ok
// SIG undefined FUN_147501ed0(void)

void FUN_147501ed0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147501f64 FUN_147501f64 body=48 status=ok
// SIG undefined FUN_147501f64(void)

void FUN_147501f64(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 147501f94 FUN_147501f94 body=126 status=ok
// SIG undefined FUN_147501f94(void)

void FUN_147501f94(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0xa8,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x2ac)) {
    *(int *)(param_1 + 0x2ac) = iVar4;
    FUN_14055a22a(param_1,*(undefined4 *)(param_1 + 0x2a8),iVar4,0xa8);
    return;
  }
  return;
}



// FUNCTION 147502012 FUN_147502012 body=101 status=ok
// SIG undefined FUN_147502012(void)

void FUN_147502012(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_1456c2f56(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147502078 FUN_147502078 body=251 status=ok
// SIG undefined FUN_147502078(void)

void FUN_147502078(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147502174(puVar1,puVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147502174 FUN_147502174 body=751 status=ok
// SIG undefined FUN_147502174(void)

ulonglong FUN_147502174(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 extraout_XMM0_Db;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (((9.999999747378752e-05 < ABS(*param_1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (uVar11 = 0, 9.999999747378752e-05 < ABS(param_1[2]))) {
    dVar8 = *param_2;
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar5 = sin(dVar8 * 0.01745329238474369);
    dVar6 = sin(dVar1 * 0.01745329238474369);
    dVar7 = sin(dVar2 * 0.01745329238474369);
    sin(0.0);
    dVar8 = cos(dVar8 * 0.01745329238474369);
    dVar9 = cos(dVar1 * 0.01745329238474369);
    dVar10 = cos(dVar2 * 0.01745329238474369);
    cos(0.0);
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar13 = dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar13 != 1.0) || (NAN(dVar13))) {
      if (9.99999993922529e-09 <= dVar13) {
        dVar2 = dVar2 * (1.0 / SQRT(dVar13));
        dVar1 = dVar1 * (1.0 / SQRT(dVar13));
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        uVar14 = (undefined4)DAT_14c8464f0;
        uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar2 = DAT_14c8464e8;
        dVar1 = DAT_14c8464e0;
      }
    }
    else {
      uVar11 = -(ulonglong)(param_1[2] == 0.0) & (ulonglong)param_1[2];
      uVar14 = (undefined4)uVar11;
      uVar15 = (undefined4)(uVar11 >> 0x20);
    }
    fVar4 = (float)(dVar5 * (double)CONCAT44(uVar15,uVar14) +
                   dVar8 * dVar9 * dVar1 + dVar6 * dVar8 * dVar2);
    fVar12 = fVar4;
    if (1.0 <= fVar4) {
      fVar12 = 1.0;
    }
    fVar12 = acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 |
                          ~-(uint)(fVar4 < -1.0) & (uint)fVar12));
    uVar3 = -(uint)((float)(-dVar7 * dVar8 * (double)CONCAT44(uVar15,uVar14) +
                           (dVar5 * dVar7 * dVar9 - dVar6 * dVar10) * dVar1 +
                           (dVar5 * dVar7 * dVar6 + dVar9 * dVar10) * dVar2) < 0.0);
    uVar11 = (ulonglong)(uVar3 & (uint)-(fVar12 * 57.295776)) |
             CONCAT44(extraout_XMM0_Db,~uVar3 & (uint)(fVar12 * 57.295776));
  }
  return uVar11;
}



// FUNCTION 147502464 FUN_147502464 body=654 status=ok
// SIG undefined FUN_147502464(void)

void FUN_147502464(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_40;
  uStack_a0 = uStack_38;
  local_98 = local_30;
  local_b0 = local_84;
  local_b8 = local_80;
  uVar2 = FUN_1475026f4(local_24,&local_a8,plVar1,local_7c);
  *param_3 = uVar2;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475026f4 FUN_1475026f4 body=678 status=ok
// SIG undefined FUN_1475026f4(void)

float FUN_1475026f4(float param_1,double *param_2,longlong *param_3,uint param_4,float param_5,
                   float param_6)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  
  uVar8 = 2;
  if (2 < param_4) {
    uVar8 = param_4;
  }
  fVar15 = 0.0;
  if (0.0 < param_1) {
    uVar12 = *(uint *)(param_3 + 1);
    if ((int)uVar8 < (int)uVar12) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1447a8aa0(param_3,0);
      }
      if (*(int *)((longlong)param_3 + 0x24) < 0) {
        *(undefined4 *)(param_3 + 4) = 0;
        FUN_14482f6fa(param_3 + 3,0);
      }
      else {
        *(undefined4 *)(param_3 + 4) = 0;
      }
      *(undefined4 *)(param_3 + 5) = 0;
      uVar12 = *(uint *)(param_3 + 1);
    }
    if (uVar12 == 0) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar8);
      }
      if (*(int *)((longlong)param_3 + 0xc) < (int)uVar8) {
        FUN_1447a8aa0(param_3,uVar8);
      }
      if (*(int *)((longlong)param_3 + 0x24) < (int)uVar8) {
        FUN_14482f6fa(param_3 + 3,uVar8);
      }
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      lVar11 = *param_3;
      *(double *)(lVar11 + 0x10 + (longlong)iVar3 * 0x18) = param_2[2];
      uVar5 = *(undefined4 *)((longlong)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar2 = (undefined4 *)(lVar11 + (longlong)iVar3 * 0x18);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      iVar3 = (int)param_3[4];
      *(uint *)(param_3 + 4) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0x24) < iVar3 + 1U) {
        FUN_14475e4ac(param_3 + 3,iVar3);
      }
      *(undefined4 *)(param_3[3] + (longlong)iVar3 * 4) = 0;
      *(undefined4 *)(param_3 + 5) = 0;
    }
    else {
      lVar10 = (longlong)(int)param_3[5];
      lVar11 = *param_3;
      dVar14 = 1.0 / (double)param_1;
      dVar4 = (param_2[2] - *(double *)(lVar11 + 0x10 + lVar10 * 0x18)) * dVar14;
      dVar13 = (param_2[1] - *(double *)(lVar11 + 8 + lVar10 * 0x18)) * dVar14;
      dVar14 = dVar14 * (*param_2 - *(double *)(lVar11 + lVar10 * 0x18));
      fVar15 = (float)SQRT(dVar4 * dVar4 + dVar14 * dVar14 + dVar13 * dVar13);
      if (uVar12 == uVar8) {
        uVar9 = (int)param_3[5] + 1;
        uVar12 = 0;
        if (uVar9 != uVar8) {
          uVar12 = uVar9;
        }
        lVar10 = (longlong)(int)uVar12;
        *(double *)(lVar11 + 0x10 + lVar10 * 0x18) = param_2[2];
        dVar4 = param_2[1];
        pdVar1 = (double *)(lVar11 + lVar10 * 0x18);
        *pdVar1 = *param_2;
        pdVar1[1] = dVar4;
        *(float *)(param_3[3] + lVar10 * 4) = fVar15;
        *(uint *)(param_3 + 5) = uVar12;
      }
      else {
        *(uint *)(param_3 + 5) = uVar12;
        *(uint *)(param_3 + 1) = uVar12 + 1;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar12 + 1) {
          FUN_1403e3958(param_3,uVar12);
          lVar11 = *param_3;
        }
        *(double *)(lVar11 + 0x10 + (longlong)(int)uVar12 * 0x18) = param_2[2];
        uVar5 = *(undefined4 *)((longlong)param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 1);
        uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
        puVar2 = (undefined4 *)(lVar11 + (longlong)(int)uVar12 * 0x18);
        *puVar2 = *(undefined4 *)param_2;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        lVar11 = param_3[4];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(param_3 + 4) = uVar8;
        if (*(uint *)((longlong)param_3 + 0x24) < uVar8) {
          FUN_14475e4ac(param_3 + 3);
        }
        *(float *)(param_3[3] + (longlong)(int)lVar11 * 4) = fVar15;
      }
      iVar3 = (int)param_3[4];
      if ((longlong)iVar3 < 1) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = 0.0;
        lVar11 = 0;
        do {
          fVar15 = fVar15 + *(float *)(param_3[3] + lVar11 * 4);
          lVar11 = lVar11 + 1;
        } while (iVar3 != lVar11);
      }
      fVar15 = fVar15 / (float)iVar3;
      if (((param_5 < param_6) && (0.0 <= param_5)) && (0.0 <= param_6)) {
        fVar15 = (fVar15 - param_5) / (param_6 - param_5);
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
      }
    }
  }
  return fVar15;
}



// FUNCTION 14750299c FUN_14750299c body=1337 status=ok
// SIG undefined FUN_14750299c(void)

void FUN_14750299c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_1b8 [32];
  uint local_198;
  undefined8 *local_190;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined ***local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_135;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128 [2];
  undefined4 local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  byte local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined **local_b8 [14];
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_bc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_118 = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  plVar1 = local_128;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_12c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  local_130 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_134 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_134);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_134);
  }
  local_135 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_135);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_135);
  }
  FUN_14109baa4(local_b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_160 = local_b8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    local_160 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_190 = &local_158;
  local_158 = local_f8;
  uStack_150 = uStack_f0;
  local_148 = local_e8;
  local_168 = local_135;
  local_170 = local_134;
  local_178 = local_130;
  local_180 = local_12c;
  local_198 = (uint)local_d9;
  local_188 = plVar1;
  uVar2 = FUN_147502ed6(local_bc,local_c8,local_d0,local_d8);
  *param_3 = uVar2;
  local_b8[0] = (undefined **)&DAT_14a176f00;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_b8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147502ed6 FUN_147502ed6 body=739 status=ok
// SIG undefined FUN_147502ed6(void)

undefined8
FUN_147502ed6(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined4 param_5,double *param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined8 param_12)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 unaff_R13;
  ulonglong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined1 local_208 [16];
  double local_1f8;
  double local_1e8 [12];
  undefined1 local_188 [96];
  double local_128 [4];
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  uVar9 = 0;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_3 != 0 && param_2 != (longlong *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_11);
    (**(code **)(*param_2 + 0x4a8))(param_2,local_128,param_3,param_5);
    if (param_4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      (**(code **)(*param_2 + 0x4a8))(param_2,local_188,param_4,param_5);
      FUN_1449437a2(local_128,local_1e8,local_188);
      pdVar2 = local_1e8;
      pdVar3 = local_128;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *pdVar3 = *pdVar2;
        pdVar2 = pdVar2 + 1;
        pdVar3 = pdVar3 + 1;
      }
    }
    local_e8 = *param_6 * local_e8;
    dStack_e0 = param_6[1] * dStack_e0;
    local_d8 = param_6[2] * local_d8;
    dVar6 = dStack_e0 * local_128[0] - local_e8 * local_128[1];
    dVar7 = local_d8 * local_128[1] - dStack_e0 * local_128[2];
    dVar8 = local_e8 * local_128[2] - local_128[0] * local_d8;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar6 = dVar6 + dVar6;
    dStack_100 = (local_128[2] * dVar7 - local_128[0] * dVar6) + local_128[3] * dVar8 + dStack_e0 +
                 dStack_100;
    local_1f8 = dVar6 * local_128[3] + local_d8 + (dVar8 * local_128[0] - dVar7 * local_128[1]) +
                local_f8;
    local_208._8_4_ = SUB84(dStack_100,0);
    local_208._0_8_ =
         (dVar6 * local_128[1] - dVar8 * local_128[2]) + local_128[3] * dVar7 + local_e8 + local_108
    ;
    local_208._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
    local_210 = param_10;
    local_218 = param_9;
    uVar5 = FUN_1475026f4(param_1,local_208,param_7,param_8);
    local_218 = 0x3f800000;
    uVar5 = FUN_1474f59af(uVar5,param_12,uVar4 & 0xffffffff,0);
    param_9 = (undefined4)uVar5;
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_c0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return CONCAT44(uVar9,param_9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475031ba FUN_1475031ba body=477 status=ok
// SIG undefined FUN_1475031ba(void)

void FUN_1475031ba(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_108 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  plVar2 = local_100;
  lVar1 = local_110;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = 0.0;
  dVar5 = 0.0;
  dVar4 = 0.0;
  if (local_110 != 0 && (local_108 != 0 && local_100 != (longlong *)0x0)) {
    (**(code **)(*local_100 + 0x4a8))(local_100,local_98,local_108,0);
    (**(code **)(*plVar2 + 0x4a8))(plVar2,local_f8,lVar1,0);
    dVar3 = local_c8 - local_68;
    dVar4 = local_d8 - local_78;
    dVar5 = dStack_d0 - dStack_70;
  }
  *param_3 = dVar4;
  param_3[1] = dVar5;
  param_3[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750339e FUN_14750339e body=893 status=ok
// SIG undefined FUN_14750339e(void)

void FUN_14750339e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  byte local_41;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
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
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = iVar1 != 0;
  local_60 = local_58;
  local_68 = local_54;
  local_70 = local_50;
  local_78 = local_4c;
  local_88 = (uint)local_41;
  uVar2 = FUN_14750371c(local_28,local_30,local_31,local_40);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750371c FUN_14750371c body=403 status=ok
// SIG undefined FUN_14750371c(void)

void FUN_14750371c(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,char param_6,float param_7,float param_8,float param_9,
                  float param_10)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_60;
  ulonglong uVar3;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = 0;
  if (param_4 != 0 && (param_2 != 0 && param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x4a8))(0,local_c8,param_2,param_3);
    (**(code **)(*param_1 + 0x4a8))(param_1,local_128,param_4,param_5);
    dVar2 = SQRT((local_f8 - local_98) * (local_f8 - local_98) +
                 (local_108 - local_a8) * (local_108 - local_a8) +
                 (dStack_100 - dStack_a0) * (dStack_100 - dStack_a0));
    fVar1 = (float)dVar2;
    uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    if (param_6 != '\0') {
      if (ABS(param_8 - param_7) <= 1e-08) {
        fVar1 = (float)(-(uint)(param_8 <= fVar1) & 0x3f800000);
      }
      else {
        fVar1 = (fVar1 - param_7) / (param_8 - param_7);
      }
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      uVar3 = (ulonglong)(uint)((param_10 - param_9) * fVar1 + param_9);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 1475038b4 FUN_1475038b4 body=244 status=ok
// SIG undefined FUN_1475038b4(void)

void FUN_1475038b4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1432ac7f0(0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475039b2 FUN_1475039b2 body=756 status=ok
// SIG undefined FUN_1475039b2(void)

void FUN_1475039b2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158 [13];
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  iVar2 = local_cc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  puVar6 = local_b0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  puVar4 = &local_98;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b0 = &local_178;
  local_178 = local_e8;
  uStack_170 = uStack_e0;
  local_168 = local_d8;
  local_198 = local_c8;
  uStack_194 = uStack_c4;
  uStack_190 = uStack_c0;
  uStack_18c = uStack_bc;
  local_188 = local_b8;
  local_1b8 = iVar2 != 0;
  local_1a8 = local_ec;
  FUN_147503ca8(local_158,puVar4,puVar6);
  puVar5 = local_158;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147503ca8 FUN_147503ca8 body=1036 status=ok
// SIG undefined FUN_147503ca8(void)

undefined8 *
FUN_147503ca8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,double *param_4,
             char param_5,double *param_6,float param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 *local_e0;
  float local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  uVar1 = DAT_14caab7e0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((ABS(*param_4) <= 9.999999747378752e-05) && (ABS(param_4[1]) <= 9.999999747378752e-05)) &&
     (ABS(param_4[2]) <= 9.999999747378752e-05)) {
    FUN_140002266(&local_88,L"AimVector should not be zero. Please specify which direction.");
    if (iStack_80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)CONCAT44(uStack_84,local_88);
    }
    FUN_1415b7ec4(puVar3,3,uVar1);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    puVar5 = &DAT_14c846480;
    puVar6 = param_1;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    goto LAB_147503f6c;
  }
  if (param_5 == '\0') {
LAB_147503e4d:
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (((ABS(*param_6) <= 9.999999747378752e-05) && (ABS(param_6[1]) <= 9.999999747378752e-05)) &&
       (ABS(param_6[2]) <= 9.999999747378752e-05)) {
      FUN_140002266(&local_88,L"LookUpVector should not be zero. Please specify which direction.");
      if (iStack_80 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)CONCAT44(uStack_84,local_88);
      }
      FUN_1415b7ec4(puVar3,3,uVar1);
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
      goto LAB_147503e4d;
    }
  }
  uVar1 = DAT_14caab7e0;
  if ((param_7 < 0.0) || (180.0 < param_7)) {
    FUN_140002266(&local_88,L"ClampConeInDegree should range from (0, 180). ");
    if (iStack_80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)CONCAT44(uStack_84,local_88);
    }
    FUN_1415b7ec4(puVar3,3,uVar1);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
  }
  local_a8 = *param_6;
  uStack_a0 = param_6[1];
  local_98 = param_6[2];
  dVar11 = local_98 * local_98 + local_a8 * local_a8 + uStack_a0 * uStack_a0;
  if ((dVar11 != 1.0) || (NAN(dVar11))) {
    if (dVar11 < 9.99999993922529e-09) {
      local_98 = DAT_14c8464f0;
      uVar7 = (undefined4)DAT_14c8464e0;
      uVar8 = DAT_14c8464e0._4_4_;
      uVar9 = (undefined4)DAT_14c8464e8;
      uVar10 = DAT_14c8464e8._4_4_;
      goto LAB_147503ebe;
    }
    dVar11 = 1.0 / SQRT(dVar11);
    local_98 = local_98 * dVar11;
    uStack_a0 = uStack_a0 * dVar11;
    local_a8 = local_a8 * dVar11;
  }
  else {
    local_98 = param_6[2];
    uVar7 = *(undefined4 *)param_6;
    uVar8 = *(undefined4 *)((longlong)param_6 + 4);
    uVar9 = *(undefined4 *)(param_6 + 1);
    uVar10 = *(undefined4 *)((longlong)param_6 + 0xc);
LAB_147503ebe:
    local_a8 = (double)CONCAT44(uVar8,uVar7);
    uStack_a0 = (double)CONCAT44(uVar10,uVar9);
  }
  local_c8 = *param_4;
  uStack_c0 = param_4[1];
  local_b8 = param_4[2];
  dVar11 = local_b8 * local_b8 + local_c8 * local_c8 + uStack_c0 * uStack_c0;
  if ((dVar11 != 1.0) || (NAN(dVar11))) {
    if (dVar11 < 9.99999993922529e-09) {
      local_b8 = DAT_14c8464f0;
      uVar7 = (undefined4)DAT_14c8464e0;
      uVar8 = DAT_14c8464e0._4_4_;
      uVar9 = (undefined4)DAT_14c8464e8;
      uVar10 = DAT_14c8464e8._4_4_;
      goto LAB_147503f17;
    }
    dVar11 = 1.0 / SQRT(dVar11);
    local_b8 = local_b8 * dVar11;
    uStack_c0 = uStack_c0 * dVar11;
    local_c8 = local_c8 * dVar11;
  }
  else {
    local_b8 = param_4[2];
    uVar7 = *(undefined4 *)param_4;
    uVar8 = *(undefined4 *)((longlong)param_4 + 4);
    uVar9 = *(undefined4 *)(param_4 + 1);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0xc);
LAB_147503f17:
    local_c8 = (double)CONCAT44(uVar8,uVar7);
    uStack_c0 = (double)CONCAT44(uVar10,uVar9);
  }
  local_d8 = param_7;
  local_e0 = &local_a8;
  local_e8 = uVar4;
  FUN_14690aafc(&local_88,param_2,param_3,&local_c8);
  puVar5 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)param_1 = local_88;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_84;
  *(int *)(param_1 + 1) = iStack_80;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_7c;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
LAB_147503f6c:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475040b6 FUN_1475040b6 body=393 status=ok
// SIG undefined FUN_1475040b6(void)

void FUN_1475040b6(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [44];
  float local_4c;
  float local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  fVar2 = local_48;
  fVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar3 = (float)FUN_140073f12(local_44);
  fVar3 = (fVar3 + 1.0) * 0.5;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *param_3 = (fVar1 - fVar2) * fVar3 + fVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147504240 FUN_147504240 body=955 status=ok
// SIG undefined FUN_147504240(void)

void FUN_147504240(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a64e42();
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
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_74;
  local_a8 = local_70;
  local_b0 = local_6c;
  local_b8 = local_68;
  local_c0 = local_64;
  local_c8 = local_60;
  FUN_1475045fc(&local_90,local_54,local_58,local_5c);
  *(undefined8 *)(param_3 + 4) = local_80;
  *param_3 = local_90;
  param_3[1] = uStack_8c;
  param_3[2] = uStack_88;
  param_3[3] = uStack_84;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475045fc FUN_1475045fc body=417 status=ok
// SIG undefined FUN_1475045fc(void)

double * FUN_1475045fc(double *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      float param_5,float param_6,float param_7,float param_8,float param_9,
                      float param_10)

{
  float fVar1;
  
  fVar1 = (float)FUN_140073f12(param_2);
  fVar1 = (fVar1 + 1.0) * 0.5;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_1 = (double)((param_6 - param_5) * fVar1 + param_5);
  fVar1 = (float)FUN_140073f12(param_3);
  fVar1 = (fVar1 + 1.0) * 0.5;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[1] = (double)((param_8 - param_7) * fVar1 + param_7);
  fVar1 = (float)FUN_140073f12(param_4);
  fVar1 = (fVar1 + 1.0) * 0.5;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[2] = (double)((param_10 - param_9) * fVar1 + param_9);
  return param_1;
}



// FUNCTION 1475047b4 FUN_1475047b4 body=200 status=ok
// SIG undefined FUN_1475047b4(void)

void FUN_1475047b4(void)

{
  int iVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  longlong lVar4;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  LARGE_INTEGER local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_40);
  LVar3 = local_40;
  dVar2 = DAT_14c83f420;
  local_38 = &local_41;
  local_40.QuadPart = (LONGLONG)FUN_1475087c6;
  lVar4 = FUN_144a773aa(&local_40,&DAT_14c760fd0);
  iVar1 = *(int *)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x18) = iVar1 + 1U;
  if (*(uint *)(lVar4 + 0x1c) < iVar1 + 1U) {
    FUN_1475088d4((longlong *)(lVar4 + 0x10),iVar1);
  }
  lVar4 = *(longlong *)(lVar4 + 0x10);
  *(double *)(lVar4 + (longlong)iVar1 * 0x10) =
       ((double)LVar3.QuadPart * dVar2 + 16777216.0) * 1000.0;
  *(undefined8 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147504886 FUN_147504886 body=1075 status=ok
// SIG undefined FUN_147504886(void)

void FUN_147504886(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 local_120;
  double local_118;
  double local_110;
  undefined1 *local_108;
  float local_fc;
  float local_f8;
  int local_f4;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_108 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar8 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_f4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f4);
  }
  iVar4 = local_f4;
  local_f8 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_fc = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_128 = local_f0;
  if (puVar3 != (undefined1 *)0x0) {
    local_128 = puVar3;
  }
  local_130 = local_d8;
  if (puVar2 != (undefined1 *)0x0) {
    local_130 = puVar2;
  }
  local_138 = local_c0;
  if (puVar8 != (undefined1 *)0x0) {
    local_138 = puVar8;
  }
  puVar8 = local_a8;
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
  }
  puVar7 = local_90;
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = local_78;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = local_60;
  if (local_108 != (undefined1 *)0x0) {
    puVar5 = local_108;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_110 = (double)local_fc;
  local_118 = (double)local_f8;
  local_120 = iVar4 != 0;
  FUN_14690f924(puVar5,puVar6,puVar7,puVar8);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147504cc4 FUN_147504cc4 body=337 status=ok
// SIG undefined FUN_147504cc4(void)

void FUN_147504cc4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147504e16(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147504e16 FUN_147504e16 body=97 status=ok
// SIG undefined FUN_147504e16(void)

void FUN_147504e16(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146330dac();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_147504e59;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_147504e59:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 147504e78 FUN_147504e78 body=270 status=ok
// SIG undefined FUN_147504e78(void)

void FUN_147504e78(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14750503c(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147504f88 FUN_147504f88 body=176 status=ok
// SIG undefined FUN_147504f88(void)

void FUN_147504f88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1475089f6(puVar3);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x30);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750503c FUN_14750503c body=102 status=ok
// SIG undefined FUN_14750503c(void)

undefined8 * FUN_14750503c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146330dac(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1475050a2 FUN_1475050a2 body=270 status=ok
// SIG undefined FUN_1475050a2(void)

void FUN_1475050a2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475054c0(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475051b8 FUN_1475051b8 body=337 status=ok
// SIG undefined FUN_1475051b8(void)

void FUN_1475051b8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14750530a(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750530a FUN_14750530a body=97 status=ok
// SIG undefined FUN_14750530a(void)

void FUN_14750530a(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_1417b54d8();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_14750534d;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_14750534d:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 14750536c FUN_14750536c body=165 status=ok
// SIG undefined FUN_14750536c(void)

void FUN_14750536c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1432ad346(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505418 FUN_147505418 body=164 status=ok
// SIG undefined FUN_147505418(void)

void FUN_147505418(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1432ad368(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475054c0 FUN_1475054c0 body=102 status=ok
// SIG undefined FUN_1475054c0(void)

undefined8 * FUN_1475054c0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_1417b54d8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147505526 FUN_147505526 body=270 status=ok
// SIG undefined FUN_147505526(void)

void FUN_147505526(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147505a32(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750563c FUN_14750563c body=337 status=ok
// SIG undefined FUN_14750563c(void)

void FUN_14750563c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14750578e(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750578e FUN_14750578e body=97 status=ok
// SIG undefined FUN_14750578e(void)

void FUN_14750578e(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146330ed8();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_1475057d1;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1475057d1:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 1475057f6 FUN_1475057f6 body=185 status=ok
// SIG undefined FUN_1475057f6(void)

void FUN_1475057f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_147508ac6(puVar3);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x100))(plVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475058b0 FUN_1475058b0 body=186 status=ok
// SIG undefined FUN_1475058b0(void)

void FUN_1475058b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_147508ac6(puVar3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750596c FUN_14750596c body=188 status=ok
// SIG undefined FUN_14750596c(void)

void FUN_14750596c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_147508ac6(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505a32 FUN_147505a32 body=102 status=ok
// SIG undefined FUN_147505a32(void)

undefined8 * FUN_147505a32(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146330ed8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147505a98 FUN_147505a98 body=270 status=ok
// SIG undefined FUN_147505a98(void)

void FUN_147505a98(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147505ed4(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505bae FUN_147505bae body=337 status=ok
// SIG undefined FUN_147505bae(void)

void FUN_147505bae(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147505d00(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505d00 FUN_147505d00 body=97 status=ok
// SIG undefined FUN_147505d00(void)

void FUN_147505d00(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146331096();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_147505d43;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_147505d43:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 147505d62 FUN_147505d62 body=184 status=ok
// SIG undefined FUN_147505d62(void)

void FUN_147505d62(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147508b0e(puVar2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x120);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505e1c FUN_147505e1c body=179 status=ok
// SIG undefined FUN_147505e1c(void)

void FUN_147505e1c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147508b0e(puVar3);
  if (lVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x124);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147505ed4 FUN_147505ed4 body=102 status=ok
// SIG undefined FUN_147505ed4(void)

undefined8 * FUN_147505ed4(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146331096(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147505f40 FUN_147505f40 body=637 status=ok
// SIG undefined FUN_147505f40(void)

void FUN_147505f40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  uVar6 = local_68;
  uVar5 = local_70;
  uVar4 = local_74;
  uVar3 = local_78;
  uVar2 = local_80;
  iVar1 = local_84;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1409ffe1d();
  uVar7 = FUN_1475066d7(uVar7);
  FUN_144757f48(uVar7,0x1000000);
  local_98 = iVar1 != 0;
  local_a0 = uVar2;
  local_a8 = uVar3;
  FUN_14750676c(uVar7,uVar6,uVar5,uVar4);
  *param_3 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475061c4 FUN_1475061c4 body=230 status=ok
// SIG undefined FUN_1475061c4(void)

void FUN_1475061c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475062ac(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475062ac FUN_1475062ac body=110 status=ok
// SIG undefined FUN_1475062ac(void)

void FUN_1475062ac(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == '\0') {
    local_18 = 0;
    FUN_1447cd2ec(param_1 + 0x38);
  }
  else {
    local_18 = 0;
    FUN_1447cd2ec(param_1 + 0x48);
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) | 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506322 FUN_147506322 body=230 status=ok
// SIG undefined FUN_147506322(void)

void FUN_147506322(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14750640a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750640a FUN_14750640a body=100 status=ok
// SIG undefined FUN_14750640a(void)

void FUN_14750640a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == '\0') {
    lVar1 = param_1 + 0x28;
  }
  else {
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) goto LAB_14750644a;
    lVar1 = param_1 + 0x48;
  }
  local_18 = 0;
  FUN_1447cd2ec(lVar1);
LAB_14750644a:
  FUN_145ed9db4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506470 FUN_147506470 body=305 status=ok
// SIG undefined FUN_147506470(void)

void FUN_147506470(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if ((*(int *)(param_1 + 0x80) != -1) && (*(int *)(puVar1 + 3) == *(int *)(param_1 + 0x80))) {
    local_20 = local_28;
    FUN_1447cd2ec(param_1 + 0x58);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475065a2 FUN_1475065a2 body=305 status=ok
// SIG undefined FUN_1475065a2(void)

void FUN_1475065a2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if ((*(int *)(param_1 + 0x80) != -1) && (*(int *)(puVar1 + 3) == *(int *)(param_1 + 0x80))) {
    local_20 = local_28;
    FUN_1447cd2ec(param_1 + 0x68);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475066d7 FUN_1475066d7 body=148 status=ok
// SIG undefined FUN_1475066d7(void)

undefined8 FUN_1475066d7(undefined8 param_1)

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
  uVar1 = FUN_14598643a();
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



// FUNCTION 14750676c FUN_14750676c body=566 status=ok
// SIG undefined FUN_14750676c(void)

void FUN_14750676c(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar1 = FUN_144a7a45a(param_2);
    if (lVar1 != 0) {
      local_90 = param_7;
      local_98 = param_5;
      fVar5 = (float)FUN_1478f2168(lVar1,param_3,param_4,0);
      if (0.0 < fVar5) {
        FUN_14485c47a(param_1 + 0x78,lVar1);
        lVar2 = FUN_1478f778a(lVar1,param_3);
        if (lVar2 != 0) {
          *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar2 + 0x130);
        }
        if (param_6 != 0) {
          FUN_1478f1bb6(lVar1,param_6,param_3);
        }
        puVar3 = (undefined8 *)FUN_144a72ab6(0x28,param_1 + 0x88);
        *puVar3 = &PTR_LAB_14a44d540;
        uVar4 = FUN_144a3f946();
        puVar3[2] = uVar4;
        *puVar3 = &PTR_FUN_14a44d4d0;
        puVar3[3] = 0;
        FUN_14485c47a(puVar3 + 3,param_1);
        puVar3[4] = FUN_1475062ac;
        FUN_1478f7946(lVar1,param_1 + 0x88,param_3);
        puVar3 = (undefined8 *)FUN_144a72ab6(0x28,param_1 + 0x98);
        *puVar3 = &PTR_LAB_14a44d540;
        uVar4 = FUN_144a3f946();
        puVar3[2] = uVar4;
        *puVar3 = &PTR_FUN_14a44d4d0;
        puVar3[3] = 0;
        FUN_14485c47a(puVar3 + 3,param_1);
        puVar3[4] = FUN_14750640a;
        FUN_1478f78a2(lVar1,param_1 + 0x98,param_3);
        FUN_1475069a4(&local_80);
        local_78 = 0;
        uStack_70 = 0;
        FUN_14485c47a(&local_78,param_1);
        uStack_70 = local_80;
        FUN_14113f0c0(&local_78);
        FUN_14053c012(lVar1 + 1000,&local_78);
        FUN_147506a64(&local_88);
        local_78 = 0;
        uStack_70 = 0;
        FUN_14485c47a(&local_78,param_1);
        uStack_70 = local_88;
        FUN_14113f0c0(&local_78);
        FUN_14053c012(lVar1 + 0x3f8,&local_78);
        goto LAB_1475067f9;
      }
    }
  }
  local_78 = 0;
  FUN_1447cd2ec(param_1 + 0x48);
LAB_1475067f9:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475069a4 FUN_1475069a4 body=190 status=ok
// SIG undefined FUN_1475069a4(void)

undefined8 * FUN_1475069a4(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabbd0) {
    FUN_144b3d300(&DAT_14caabbd0);
    if (DAT_14caabbd0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"eived",6);
      builtin_wcsncpy(local_48 + 8,L"BeginRec",8);
      builtin_wcsncpy(local_48,L"OnNotify",8);
      FUN_1446f470e(&DAT_14caabbc8,local_48,1);
      _Init_thread_footer(&DAT_14caabbd0);
    }
  }
  *param_1 = DAT_14caabbc8;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506a64 FUN_147506a64 body=193 status=ok
// SIG undefined FUN_147506a64(void)

undefined8 * FUN_147506a64(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabbe0) {
    FUN_144b3d300(&DAT_14caabbe0);
    if (DAT_14caabbe0 == -1) {
      builtin_wcsncpy(local_38,L"OnNotifyEndReceived",0x14);
      FUN_1446f470e(&DAT_14caabbd8,local_38,1);
      _Init_thread_footer(&DAT_14caabbe0);
    }
  }
  *param_1 = DAT_14caabbd8;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506b32 FUN_147506b32 body=97 status=ok
// SIG undefined FUN_147506b32(void)

void FUN_147506b32(longlong *param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  lVar2 = (longlong)iVar1;
  *(int *)(param_1 + 1) = iVar1 + 3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 3) {
    FUN_14475e4ac(param_1,iVar1);
  }
  *(float *)(*param_1 + lVar2 * 4) = (float)*param_2;
  *(float *)(*param_1 + 4 + lVar2 * 4) = (float)param_2[1];
  *(float *)(*param_1 + 8 + lVar2 * 4) = (float)param_2[2];
  return;
}



// FUNCTION 147506b94 FUN_147506b94 body=270 status=ok
// SIG undefined FUN_147506b94(void)

void FUN_147506b94(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147506fda(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506caa FUN_147506caa body=337 status=ok
// SIG undefined FUN_147506caa(void)

void FUN_147506caa(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147506dfc(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506dfc FUN_147506dfc body=97 status=ok
// SIG undefined FUN_147506dfc(void)

void FUN_147506dfc(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146331a52();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_147506e3f;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_147506e3f:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 147506e5e FUN_147506e5e body=188 status=ok
// SIG undefined FUN_147506e5e(void)

void FUN_147506e5e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b82e(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147506f1c FUN_147506f1c body=186 status=ok
// SIG undefined FUN_147506f1c(void)

void FUN_147506f1c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b82e(puVar3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


