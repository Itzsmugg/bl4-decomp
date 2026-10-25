// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dbfb570 FUN_14dbfb570 body=162 status=ok
// SIG undefined FUN_14dbfb570(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfb7bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbfb7b2) */

void FUN_14dbfb570(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = (-*(longlong *)(unaff_RDI + -0x28) ^ 0xffffffffffffffffU) + 1;
  uVar1 = ~(uVar1 & param_1) & (uVar1 | param_1);
  FUN_166852f14();
  FUN_160e4af34();
  FUN_160babe2e();
  FUN_165228462(uVar1);
  return;
}



// FUNCTION 14dbfb612 FUN_14dbfb612 body=593 status=ok
// SIG undefined FUN_14dbfb612(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfb7bd) */

void FUN_14dbfb612(void)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  FUN_160e4af34();
  FUN_160babe2e();
  if (-1 < unaff_RSI) {
    FUN_165228462(unaff_retaddr);
    return;
  }
  FUN_165122260();
  return;
}



// FUNCTION 14dbfb867 FUN_14dbfb867 body=69 status=ok
// SIG undefined FUN_14dbfb867(void)

undefined1 FUN_14dbfb867(void)

{
  undefined1 in_AL;
  undefined8 in_R9;
  undefined8 unaff_R12;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
                    /* WARNING: Read-only address (ram,0x00014d7ab633) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7ab633 = in_AL;
  *(undefined8 *)(local_res18 + -8) = in_R9;
  *(undefined8 *)(local_res18 + -0x10) = in_R9;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x78d6bde;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(code **)(local_res18 + -0x10) = FUN_165c7153c;
  return 0;
}



// FUNCTION 14dbfb904 FUN_14dbfb904 body=470 status=ok
// SIG undefined FUN_14dbfb904(void)

/* WARNING: Removing unreachable block (ram,0x00015b4a61fe) */
/* WARNING: Removing unreachable block (ram,0x00015b4a61f2) */
/* WARNING: Removing unreachable block (ram,0x00015b4a6203) */
/* WARNING: Removing unreachable block (ram,0x00015b4a62d1) */
/* WARNING: Removing unreachable block (ram,0x0001564d2025) */
/* WARNING: Removing unreachable block (ram,0x00014dbfba4a) */
/* WARNING: Removing unreachable block (ram,0x00014dbfba56) */
/* WARNING: Removing unreachable block (ram,0x00014dbfb9a6) */
/* WARNING: Removing unreachable block (ram,0x00015b21ff99) */
/* WARNING: Removing unreachable block (ram,0x0001564d201f) */

undefined8 FUN_14dbfb904(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14dbfbb9c FUN_14dbfbb9c body=319 status=ok
// SIG undefined FUN_14dbfbb9c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfbc23) */
/* WARNING: Removing unreachable block (ram,0x00014dbfbc29) */

void FUN_14dbfbb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1574b0aea(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3);
  return;
}



// FUNCTION 14dbfbd7f FUN_14dbfbd7f body=51 status=ok
// SIG undefined FUN_14dbfbd7f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfbe24) */
/* WARNING: Removing unreachable block (ram,0x00014dbfbe32) */
/* WARNING: Removing unreachable block (ram,0x00014dbfbe38) */
/* WARNING: Removing unreachable block (ram,0x00014dbfbed8) */
/* WARNING: Removing unreachable block (ram,0x00014dbfbede) */
/* WARNING: Removing unreachable block (ram,0x00014e16eef4) */

void FUN_14dbfbd7f(void)

{
  FUN_16155a432();
  return;
}



// FUNCTION 14dbfbe39 FUN_14dbfbe39 body=627 status=ok
// SIG undefined FUN_14dbfbe39(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfbede) */

void FUN_14dbfbe39(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x164887e41)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14dbfbf88 FUN_14dbfbf88 body=326 status=ok
// SIG undefined FUN_14dbfbf88(void)

void FUN_14dbfbf88(void)

{
  ulonglong uVar1;
  undefined1 in_AL;
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ unaff_RBP;
  LOCK();
  UNLOCK();
  DAT_14d7a7e75 = in_AL;
  *(undefined8 *)(uVar1 - 8) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = 0x14dbfc028;
  FUN_14deb1baa();
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  FUN_14d838a56();
  return;
}



// FUNCTION 14dbfc1ee FUN_14dbfc1ee body=642 status=ok
// SIG undefined FUN_14dbfc1ee(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfc29b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc2a1) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc3cb) */
/* WARNING: Removing unreachable block (ram,0x0001646c7ce4) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc3d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc3d6) */
/* WARNING: Removing unreachable block (ram,0x00015781fe3d) */
/* WARNING: Removing unreachable block (ram,0x000165b8153b) */

void FUN_14dbfc1ee(longlong param_1)

{
  ulonglong unaff_RBX;
  
  *(undefined8 *)((*(ulonglong *)(param_1 + -0x30) ^ unaff_RBX) - 8) = 0x13d776;
  FUN_1629c9909();
  return;
}



// FUNCTION 14dbfc473 FUN_14dbfc473 body=154 status=ok
// SIG undefined FUN_14dbfc473(void)

/* WARNING: Removing unreachable block (ram,0x000162823b0f) */
/* WARNING: Removing unreachable block (ram,0x000162823b1a) */
/* WARNING: Removing unreachable block (ram,0x000162823b15) */
/* WARNING: Removing unreachable block (ram,0x0001611dabfb) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc50d) */

void FUN_14dbfc473(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  if (unaff_RDI != 0xa0) {
    FUN_1669fb603(&stack0x00000000,param_2,FUN_1669fb603);
    return;
  }
  FUN_162823a17();
  return;
}



// FUNCTION 14dbfc50d FUN_14dbfc50d body=147 status=ok
// SIG undefined FUN_14dbfc50d(void)

void FUN_14dbfc50d(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_16292d9fb(in_stack_00000008,param_2,FUN_16292d9fb);
  return;
}



// FUNCTION 14dbfc6b7 FUN_14dbfc6b7 body=2 status=ok
// SIG undefined FUN_14dbfc6b7(void)

void FUN_14dbfc6b7(void)

{
  return;
}



// FUNCTION 14dbfc88f FUN_14dbfc88f body=308 status=ok
// SIG undefined FUN_14dbfc88f(void)

/* WARNING: Removing unreachable block (ram,0x0001623819e4) */
/* WARNING: Removing unreachable block (ram,0x0001623819eb) */
/* WARNING: Removing unreachable block (ram,0x000162381a10) */
/* WARNING: Removing unreachable block (ram,0x000162381a23) */
/* WARNING: Removing unreachable block (ram,0x0001623818b7) */
/* WARNING: Removing unreachable block (ram,0x0001623819f0) */
/* WARNING: Removing unreachable block (ram,0x00014dbfc935) */

undefined8 FUN_14dbfc88f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 local_res8;
  
  if (-1 < unaff_R13) {
    FUN_166482afb(local_res8,param_2,param_3);
    uVar1 = FUN_162e3c9bb(*(ulonglong *)(unaff_RDI + -0x98) ^ local_res8);
    return uVar1;
  }
  uVar1 = FUN_1623818b1();
  return uVar1;
}



// FUNCTION 14dbfcb11 FUN_14dbfcb11 body=644 status=ok
// SIG undefined FUN_14dbfcb11(void)

/* WARNING: Removing unreachable block (ram,0x00014dfa0a2b) */
/* WARNING: Removing unreachable block (ram,0x00014dfa0a25) */
/* WARNING: Removing unreachable block (ram,0x00014dfa0a30) */
/* WARNING: Removing unreachable block (ram,0x00016556da59) */
/* WARNING: Removing unreachable block (ram,0x000166d3be59) */
/* WARNING: Removing unreachable block (ram,0x0001656958da) */
/* WARNING: Removing unreachable block (ram,0x0001656958e0) */
/* WARNING: Removing unreachable block (ram,0x00015b712c16) */
/* WARNING: Removing unreachable block (ram,0x00015b712c10) */
/* WARNING: Removing unreachable block (ram,0x00015b712c1b) */
/* WARNING: Removing unreachable block (ram,0x00015b712c97) */
/* WARNING: Removing unreachable block (ram,0x00015b712c9c) */
/* WARNING: Removing unreachable block (ram,0x00015b712ca2) */
/* WARNING: Removing unreachable block (ram,0x00014dfa23b0) */
/* WARNING: Removing unreachable block (ram,0x000162a7089c) */
/* WARNING: Removing unreachable block (ram,0x00014daea3f2) */
/* WARNING: Removing unreachable block (ram,0x000165deb872) */
/* WARNING: Removing unreachable block (ram,0x00015b900754) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcbbc) */
/* WARNING: Removing unreachable block (ram,0x0001651beac9) */
/* WARNING: Removing unreachable block (ram,0x0001651beac3) */
/* WARNING: Removing unreachable block (ram,0x0001651beace) */
/* WARNING: Removing unreachable block (ram,0x000165deb87d) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcbb1) */
/* WARNING: Removing unreachable block (ram,0x0001658c6a6f) */
/* WARNING: Removing unreachable block (ram,0x00014dfa08ef) */
/* WARNING: Removing unreachable block (ram,0x00014dfa09e6) */
/* WARNING: Removing unreachable block (ram,0x00014dfa09dd) */
/* WARNING: Removing unreachable block (ram,0x00014dfa09ed) */
/* WARNING: Removing unreachable block (ram,0x0001658c6a8e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dbfcb11(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined2 uVar5;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 unaff_R14D;
  ulonglong uVar8;
  bool in_ZF;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000010;
  ulonglong local_res18;
  ulonglong in_stack_00000040;
  
  if (in_ZF) {
    if (-1 < (longlong)in_stack_00000010) {
      *(ulonglong *)(in_stack_00000010 & 0x7fffffffffffffff) = in_stack_00000008;
      return in_RAX;
    }
    uVar2 = thunk_FUN_166d3bdd9();
    return uVar2;
  }
  if (param_4 == 1) {
    if ((longlong)in_stack_00000010 < 0) {
      uVar2 = FUN_162a7089c();
      return uVar2;
    }
    *(ulonglong *)(in_stack_00000010 & 0x7fffffffffffffff) = in_stack_00000008;
    uVar2 = FUN_161c04d88();
    return uVar2;
  }
  if (param_4 == 2) {
    uVar2 = FUN_162a708c3();
    return uVar2;
  }
  if (param_4 == 3) {
    uVar2 = thunk_FUN_156a17a0f(thunk_FUN_156a17a0f);
    return uVar2;
  }
  if (param_4 == 4) {
    if ((longlong)in_stack_00000010 < 0) {
      in_stack_00000008 = in_stack_00000008 ^ 0x101963b0dc930505;
    }
    *(ulonglong *)(in_stack_00000010 & 0x7fffffffffffffff) = in_stack_00000008;
    FUN_15b9006b2();
    puVar4 = (ulonglong *)CONCAT44(0xac91427a,unaff_R14D);
    uVar8 = *(ulonglong *)(unaff_RDI + -0x78) ^ (ulonglong)puVar4;
    uVar6 = 0x232dfbc;
    uVar3 = FUN_14e177749();
    uVar2 = *puVar4;
    *puVar4 = -*puVar4;
    *puVar4 = *puVar4 - 1;
    *puVar4 = *puVar4 | uVar8;
    *puVar4 = ~((~local_res18 | uVar2) & *puVar4);
    in_stack_00000040 = in_stack_00000040 ^ uVar8;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a6034) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a6034) is written */
    LOCK();
    uRam000000014d7a6034 = (undefined1)uVar3;
    UNLOCK();
    *(undefined8 *)(in_stack_00000040 - 8) = 0x3df7e8c;
    *(undefined8 *)(in_stack_00000040 - 0x10) = uVar6;
    *(undefined8 *)(in_stack_00000040 - 0x18) = uVar6;
    *(undefined8 *)(in_stack_00000040 - 0x10) = 0x156ef2e25;
    return uVar3 & 0xffffffffffffff00;
  }
  if (param_4 == 5) {
    if ((longlong)in_stack_00000010 < 0) {
      in_stack_00000008 = in_stack_00000008 ^ 0xdc930505;
    }
    *(ulonglong *)(in_stack_00000010 & 0x7fffffffffffffff) = in_stack_00000008;
    uVar2 = FUN_161c04d88();
    return uVar2;
  }
  if ((longlong)in_stack_00000010 < 0) {
    in_stack_00000008 =
         in_stack_00000008 + 0x101963b0dc930505 + (in_stack_00000008 & 0x101963b0dc930505) * -2;
  }
  *(ulonglong *)(in_stack_00000010 & 0x7fffffffffffffff) = in_stack_00000008;
  FUN_165b55306(in_stack_00000008,param_2);
  uVar2 = *(ulonglong *)(in_stack_00000008 - 0x98) | unaff_RBX;
  lVar7 = uVar2 - (~(*(ulonglong *)(in_stack_00000008 - 0x98) & unaff_RBX) | uVar2);
  uVar5 = 0x334c;
  uVar2 = FUN_15678334c(*(ulonglong *)(in_stack_00000008 - 0xa0) + unaff_RBX +
                        (*(ulonglong *)(in_stack_00000008 - 0xa0) & unaff_RBX) * -2);
  if ((undefined1 *)register0x00000020 == (undefined1 *)0x51f63151) {
    cVar1 = in(uVar5);
    uVar2 = CONCAT71((int7)(uVar2 >> 8),cVar1 + -0x40);
  }
  uVar3 = *(ulonglong *)(lVar7 + -0x80);
  uVar2 = FUN_14e0d4de1(0x177e8f23,uVar2,0xffffffffffffffff - (uVar3 & uVar2) & (uVar3 | uVar2),
                        *(ulonglong *)(lVar7 + -0x30) ^ uVar2);
  return uVar2;
}



// FUNCTION 14dbfce1b FUN_14dbfce1b body=261 status=ok
// SIG undefined FUN_14dbfce1b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfce91) */
/* WARNING: Removing unreachable block (ram,0x00014dbfce97) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcf16) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcf1b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcf21) */
/* WARNING: Removing unreachable block (ram,0x00016523dac3) */

void FUN_14dbfce1b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_16478f46c(FUN_16478f46c,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dbfcf27 FUN_14dbfcf27 body=580 status=ok
// SIG undefined FUN_14dbfcf27(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfd03b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd041) */
/* WARNING: Removing unreachable block (ram,0x000161546353) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd0b4) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd0ba) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd0bf) */
/* WARNING: Removing unreachable block (ram,0x000161a47277) */
/* WARNING: Removing unreachable block (ram,0x00016226a681) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dbfcfa6) */
/* WARNING: Removing unreachable block (ram,0x00016226a5dc) */
/* WARNING: Removing unreachable block (ram,0x000161621e09) */
/* WARNING: Removing unreachable block (ram,0x00016226a5e2) */
/* WARNING: Removing unreachable block (ram,0x00016226a607) */
/* WARNING: Removing unreachable block (ram,0x00016226a62f) */
/* WARNING: Removing unreachable block (ram,0x00016226a641) */
/* WARNING: Removing unreachable block (ram,0x0001566f3509) */
/* WARNING: Removing unreachable block (ram,0x00016226a670) */
/* WARNING: Removing unreachable block (ram,0x00016226a676) */
/* WARNING: Removing unreachable block (ram,0x00016226a63c) */
/* WARNING: Removing unreachable block (ram,0x00016226a687) */

void FUN_14dbfcf27(int param_1,int param_2)

{
  uint uVar1;
  uint unaff_R13D;
  
  uVar1 = ~(param_2 + param_1);
  if (-1 < (int)-((unaff_R13D - (uVar1 | unaff_R13D)) + uVar1 | param_2 + param_1)) {
    FUN_161a47238();
    return;
  }
  (*(code *)0x166bbc433)();
  return;
}



// FUNCTION 14dbfd0bf FUN_14dbfd0bf body=16 status=ok
// SIG undefined FUN_14dbfd0bf(void)

void FUN_14dbfd0bf(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbfd277 FUN_14dbfd277 body=18 status=ok
// SIG undefined FUN_14dbfd277(void)

void FUN_14dbfd277(void)

{
  return;
}



// FUNCTION 14dbfd457 FUN_14dbfd457 body=324 status=ok
// SIG undefined FUN_14dbfd457(void)

void FUN_14dbfd457(undefined8 param_1,longlong param_2)

{
  undefined8 in_R10;
  
  *(undefined8 *)(&stack0x00000018 + param_2) = in_R10;
  FUN_14df576f2();
  FUN_162973ec4();
  return;
}



// FUNCTION 14dbfd63a FUN_14dbfd63a body=188 status=ok
// SIG undefined FUN_14dbfd63a(void)

undefined8 FUN_14dbfd63a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbfd777 FUN_14dbfd777 body=826 status=ok
// SIG undefined FUN_14dbfd777(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfd81e) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd824) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd88d) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd893) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd924) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd92b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfd933) */
/* WARNING: Removing unreachable block (ram,0x0001652279d6) */
/* WARNING: Removing unreachable block (ram,0x0001629b89a9) */
/* WARNING: Removing unreachable block (ram,0x0001629b8a15) */
/* WARNING: Removing unreachable block (ram,0x0001629b8a1b) */
/* WARNING: Removing unreachable block (ram,0x00015b894842) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbfd777(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_stack_00000030;
  
  param_2 = param_2 + in_stack_00000030 * -2;
  *(undefined8 *)(param_2 + -8) = unaff_RSI;
  *(undefined8 *)(param_2 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_2 + -0x10) = 0x16b51e6ae;
  uVar1 = FUN_164767534();
  return uVar1;
}



// FUNCTION 14dbfd933 FUN_14dbfd933 body=28 status=ok
// SIG undefined FUN_14dbfd933(void)

void FUN_14dbfd933(void)

{
  return;
}



// FUNCTION 14dbfd9f5 FUN_14dbfd9f5 body=153 status=ok
// SIG undefined FUN_14dbfd9f5(void)

void FUN_14dbfd9f5(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uStackX_10;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  lVar1 = in_stack_00000028 + param_1 + (in_stack_00000028 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = uStackX_10;
  *(undefined8 *)(lVar1 + -0x10) = local_res18;
  *(undefined8 *)(lVar1 + -0x18) = local_res18;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x20) = 0x157550357;
  return;
}



// FUNCTION 14dbfdcab FUN_14dbfdcab body=67 status=ok
// SIG undefined FUN_14dbfdcab(void)

undefined1 FUN_14dbfdcab(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 unaff_R13;
  longlong local_res20;
  
  *param_3 = ~*param_3;
  *param_3 = *param_3 | 0x100;
  *param_3 = ~*param_3;
  LOCK();
  uVar1 = DAT_14d7a501e;
  UNLOCK();
  DAT_14d7a501e = in_AL;
  *(undefined8 *)(local_res20 + -8) = 0x49c0538;
  *(undefined8 *)(local_res20 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res20 + -0x28cf) = &DAT_156ef2e4a;
  return uVar1;
}



// FUNCTION 14dbfddd0 FUN_14dbfddd0 body=319 status=ok
// SIG undefined FUN_14dbfddd0(void)

void FUN_14dbfddd0(void)

{
  undefined8 local_res18;
  
  FUN_16298b3c1();
  FUN_165525245(local_res18);
  return;
}



// FUNCTION 14dbfdf15 FUN_14dbfdf15 body=135 status=ok
// SIG undefined FUN_14dbfdf15(void)

void FUN_14dbfdf15(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(unaff_RDI + 0x10) = (~unaff_R15 | *(ulonglong *)(unaff_RDI + 0x10)) + unaff_R15 + 1
  ;
  (*(code *)&LAB_157197ba9)(param_1,param_2,in_stack_00000010,local_res8);
  return;
}



// FUNCTION 14dbfe0f0 FUN_14dbfe0f0 body=65 status=ok
// SIG undefined FUN_14dbfe0f0(void)

undefined1 FUN_14dbfe0f0(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 unaff_RBP;
  ushort *in_R9;
  longlong local_res18;
  
  *in_R9 = *in_R9 ^ 0xffff;
  LOCK();
  uVar1 = DAT_14d7be128;
  UNLOCK();
  DAT_14d7be128 = in_AL;
  *(undefined8 *)(local_res18 + -8) = 0x55e109e;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = FUN_165c7153c;
  return uVar1;
}



// FUNCTION 14dbfe196 FUN_14dbfe196 body=103 status=ok
// SIG undefined FUN_14dbfe196(void)

void FUN_14dbfe196(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res10,param_2,unaff_retaddr,local_res8);
  *local_res20 = 0x9b4662;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dbfe371 FUN_14dbfe371 body=131 status=ok
// SIG undefined FUN_14dbfe371(void)

void FUN_14dbfe371(undefined8 param_1,undefined8 param_2)

{
  FUN_14ddce7a7(param_1,param_2);
  (*(code *)0x15b09c83a)();
  return;
}



// FUNCTION 14dbfe3f5 FUN_14dbfe3f5 body=138 status=ok
// SIG undefined FUN_14dbfe3f5(void)

void FUN_14dbfe3f5(void)

{
  (*(code *)0x15b09c83a)();
  return;
}



// FUNCTION 14dbfe47f FUN_14dbfe47f body=152 status=ok
// SIG undefined FUN_14dbfe47f(void)

void FUN_14dbfe47f(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    FUN_165dc09fc(unaff_retaddr);
    return;
  }
  if (unaff_RBX != 0x10a8bd) {
    FUN_16542ed6c();
    return;
  }
  (*(code *)0x16542ed43)(unaff_retaddr,param_2,0x16542ed43);
  return;
}



// FUNCTION 14dbfe51f thunk_FUN_14dbfe524 body=5 status=ok
// SIG undefined thunk_FUN_14dbfe524(void)

void thunk_FUN_14dbfe524(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_165cfcff1((char)param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3 ^ param_1);
  return;
}



// FUNCTION 14dbfe524 FUN_14dbfe524 body=184 status=ok
// SIG undefined FUN_14dbfe524(void)

void FUN_14dbfe524(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_165cfcff1((char)param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3 ^ param_1);
  return;
}



// FUNCTION 14dbfeaec FUN_14dbfeaec body=501 status=ok
// SIG undefined FUN_14dbfeaec(void)

/* WARNING: Removing unreachable block (ram,0x0001653baf4a) */
/* WARNING: Removing unreachable block (ram,0x0001653baf55) */
/* WARNING: Removing unreachable block (ram,0x00014dbfec1f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffd0 : 0x0001653baf72 */
/* WARNING: Removing unreachable block (ram,0x0001653baf7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbfeaec(void)

{
  FUN_160d49cea();
  FUN_164a7c04d();
  return;
}



// FUNCTION 14dbfec25 FUN_14dbfec25 body=138 status=ok
// SIG undefined FUN_14dbfec25(void)

undefined8 FUN_14dbfec25(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined4 *)(local_res18 + -0x20) = 0x6042d975;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = uVar1;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(undefined **)(local_res18 + -0x28) = &DAT_165299640;
  return 0x311ddaca;
}



// FUNCTION 14dbfed58 FUN_14dbfed58 body=164 status=ok
// SIG undefined FUN_14dbfed58(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfedac) */

void FUN_14dbfed58(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  
  *(undefined8 *)(&stack0x00000000 + (unaff_RBP - (unaff_R14 ^ 0x2dad75b6))) =
       *(undefined8 *)(unaff_RDI + -0x78);
  (*(code *)0x162836e87)();
  return;
}



// FUNCTION 14dbfedfd FUN_14dbfedfd body=129 status=ok
// SIG undefined FUN_14dbfedfd(void)

/* WARNING: Instruction at (ram,0x00014dbfef5b) overlaps instruction at (ram,0x00014dbfef5a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbfee78) */
/* WARNING: Removing unreachable block (ram,0x00014dbfee7e) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef5b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef5a) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef60) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef88) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef8e) */
/* WARNING: Removing unreachable block (ram,0x0001629295b6) */
/* WARNING: Removing unreachable block (ram,0x000161817144) */

void FUN_14dbfedfd(void)

{
  FUN_161817144();
  return;
}



// FUNCTION 14dbfee7e FUN_14dbfee7e body=542 status=ok
// SIG undefined FUN_14dbfee7e(void)

/* WARNING: Instruction at (ram,0x00014dbfef5b) overlaps instruction at (ram,0x00014dbfef5a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbfef8e) */
/* WARNING: Removing unreachable block (ram,0x00014dbfef5a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x0001629295ee */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbfee7e(HMODULE param_1,undefined8 param_2,longlong param_3)

{
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  CHAR local_res20 [8];
  
  FUN_15661361a();
  local_res18 = (ulonglong)(in_NT & 1) * 0x4000 |
                (ulonglong)SCARRY8((longlong)local_res10,8) * 0x800 | (ulonglong)(in_IF & 1) * 0x200
                | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)&local_res18 < 0) * 0x80 |
                (ulonglong)(&local_res18 == (ulonglong *)0x0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
                | (ulonglong)((POPCOUNT((ulonglong)&local_res18 & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(&DAT_fffffffffffffff7 < local_res10) | (ulonglong)(in_ID & 1) * 0x200000
                | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                (ulonglong)(in_AC & 1) * 0x40000 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x0001629295f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,local_res20 + param_3);
  return;
}



// FUNCTION 14dbff3bc FUN_14dbff3bc body=338 status=ok
// SIG undefined FUN_14dbff3bc(void)

void FUN_14dbff3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *(undefined8 *)(unaff_R15 + 0x10) = param_2;
  puVar1 = (ulonglong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  *puVar1 = unaff_RBX;
  lVar3 = *(longlong *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(ulonglong *)(param_5 + -0x10) = *puVar1;
  *(undefined8 *)(param_5 + -0x18) = unaff_RDI;
  *(undefined8 *)(param_5 + -8) = 0;
  uVar4 = *(ulonglong *)(param_5 + -0x18);
  *puVar1 = *puVar1 ^ 0x161799959;
  uVar2 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = unaff_R14;
  *(undefined8 *)(param_5 + -0x18) = unaff_R14;
  *(code **)(param_5 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(param_5 + -0x20) = 0x14dbff476;
  uVar5 = FUN_161799937(local_res18,uStackX_10);
  uVar4 = *(ulonglong *)(lVar3 + (0x1787f05d - (~uVar4 + 2)));
  *(undefined8 *)(param_5 + -0x20) = local_res18;
  lVar6 = *(longlong *)(param_5 + -0x20);
  uVar7 = *(ulonglong *)(lVar3 + -0x48);
  *(undefined8 *)(param_5 + -0x20) = uVar2;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  uVar7 = ~(~uVar7 | uVar5) | ~uVar7 & ~uVar7 & ~uVar5 | uVar7;
  *(undefined8 *)(param_5 + -0x28) = 0x14dbff4fa;
  FUN_165a01a69(lVar6,uVar4 + uVar5 + (uVar4 & uVar5) * -2);
  *(undefined8 *)(param_5 + -8 + (lVar6 - ~uVar7)) = *(undefined8 *)(param_5 + -0x18);
  return;
}



// FUNCTION 14dbff58f FUN_14dbff58f body=151 status=ok
// SIG undefined FUN_14dbff58f(void)

undefined8 FUN_14dbff58f(void)

{
  ulonglong unaff_RBX;
  longlong in_R10;
  undefined8 local_res10;
  
  *(undefined8 *)(in_R10 + -8) = 0;
  *(ulonglong *)(in_R10 + -8) = *(ulonglong *)(in_R10 + -8) ^ unaff_RBX;
  *(undefined1 **)(in_R10 + -0x10) = &LAB_1624dfc7a;
  return local_res10;
}



// FUNCTION 14dbff628 FUN_14dbff628 body=142 status=ok
// SIG undefined FUN_14dbff628(void)

void FUN_14dbff628(void)

{
  FUN_1615c43fa();
  return;
}



// FUNCTION 14dbff6b7 FUN_14dbff6b7 body=287 status=ok
// SIG undefined FUN_14dbff6b7(void)

/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */
/* WARNING: Removing unreachable block (ram,0x00014dbff85e) */
/* WARNING: Removing unreachable block (ram,0x00014dbff864) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8d5) */
/* WARNING: Removing unreachable block (ram,0x000156da3bd6) */
/* WARNING: Removing unreachable block (ram,0x000156da3c45) */
/* WARNING: Removing unreachable block (ram,0x000156da3c48) */
/* WARNING: Removing unreachable block (ram,0x00014dbff7cd) */
/* WARNING: Removing unreachable block (ram,0x00014dbff7d8) */
/* WARNING: Removing unreachable block (ram,0x00014dbff81c) */
/* WARNING: Removing unreachable block (ram,0x00014da3d946) */
/* WARNING: Removing unreachable block (ram,0x00014da3da91) */
/* WARNING: Removing unreachable block (ram,0x00014da3da95) */
/* WARNING: Removing unreachable block (ram,0x00015b3e9e40) */
/* WARNING: Removing unreachable block (ram,0x00015b3e9e4b) */
/* WARNING: Removing unreachable block (ram,0x00014dbff7d3) */

undefined8 FUN_14dbff6b7(void)

{
  undefined8 uVar1;
  
  FUN_161ad4e08();
  uVar1 = FUN_165ebb607();
  return uVar1;
}



// FUNCTION 14dbff7d8 thunk_FUN_14dbff7de body=5 status=ok
// SIG undefined thunk_FUN_14dbff7de(void)

/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */
/* WARNING: Removing unreachable block (ram,0x00014dbff85e) */
/* WARNING: Removing unreachable block (ram,0x00014dbff864) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8d5) */
/* WARNING: Removing unreachable block (ram,0x000156da3bd6) */
/* WARNING: Removing unreachable block (ram,0x000156da3c45) */
/* WARNING: Removing unreachable block (ram,0x000156da3c48) */

undefined8 thunk_FUN_14dbff7de(void)

{
  undefined8 uVar1;
  
  FUN_164b1db39();
  FUN_165c927d1();
  uVar1 = FUN_1663e2cb6();
  return uVar1;
}



// FUNCTION 14dbff7de FUN_14dbff7de body=548 status=ok
// SIG undefined FUN_14dbff7de(void)

/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */
/* WARNING: Removing unreachable block (ram,0x00014dbff85e) */
/* WARNING: Removing unreachable block (ram,0x00014dbff864) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbff8d5) */
/* WARNING: Removing unreachable block (ram,0x000156da3bd6) */
/* WARNING: Removing unreachable block (ram,0x000156da3c45) */
/* WARNING: Removing unreachable block (ram,0x000156da3c48) */

undefined8 FUN_14dbff7de(void)

{
  undefined8 uVar1;
  
  FUN_164b1db39();
  FUN_165c927d1();
  uVar1 = FUN_1663e2cb6();
  return uVar1;
}



// FUNCTION 14dbffa7d FUN_14dbffa7d body=130 status=ok
// SIG undefined FUN_14dbffa7d(void)

void FUN_14dbffa7d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined1 **)(local_res10 + -0x28) = &LAB_165e8e4d4;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) =
       *(longlong *)(local_res10 + -8) + *(longlong *)(local_res10 + -0x28);
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  FUN_165e8e470(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dbffb01 FUN_14dbffb01 body=171 status=ok
// SIG undefined FUN_14dbffb01(void)

void FUN_14dbffb01(undefined8 param_1)

{
  (*(code *)0x162817b7b)(param_1);
  return;
}



// FUNCTION 14dbffcf1 FUN_14dbffcf1 body=268 status=ok
// SIG undefined FUN_14dbffcf1(void)

void FUN_14dbffcf1(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = -(~unaff_RBX - *(longlong *)(unaff_R12 + -0x80));
  lVar2 = *(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2;
  FUN_162e476d6(lVar2,FUN_162e476d6,~(uVar1 & in_RAX) & (uVar1 + in_RAX) - (uVar1 & in_RAX));
  (*(code *)0x156c0a3da)(lVar2);
  return;
}



// FUNCTION 14dbfffa3 FUN_14dbfffa3 body=173 status=ok
// SIG undefined FUN_14dbfffa3(void)

void FUN_14dbfffa3(void)

{
  (*(code *)0x16139122e)(&DAT_ac91427a73ca2b2b,0xffffffffffffff88,&DAT_ac91427a73ca2b2b,0x16139122e)
  ;
  return;
}



// FUNCTION 14dc000ee FUN_14dc000ee body=103 status=ok
// SIG undefined FUN_14dc000ee(void)

void FUN_14dc000ee(void)

{
  byte in_ZF;
  
  if ((in_ZF & 1) != 0) {
    return;
  }
  FUN_16165faa9();
  return;
}



// FUNCTION 14dc00322 FUN_14dc00322 body=56 status=ok
// SIG undefined FUN_14dc00322(void)

void FUN_14dc00322(void)

{
  FUN_14d7a8d0a();
  return;
}



// FUNCTION 14dc003ae FUN_14dc003ae body=285 status=ok
// SIG undefined FUN_14dc003ae(void)

/* WARNING: Removing unreachable block (ram,0x00014dc00443) */
/* WARNING: Removing unreachable block (ram,0x00014dc0044e) */
/* WARNING: Removing unreachable block (ram,0x00014dc00449) */

void FUN_14dc003ae(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_16161615f((~(0xffffffffffffffff - in_RAX & uVar1) + uVar1) - ~(0xffffffffffffffff - in_RAX) &
                (~uVar1 | in_RAX) ^ 0xffffffffffffffff,~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX)
                ,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dc00535 FUN_14dc00535 body=242 status=ok
// SIG undefined FUN_14dc00535(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0059d) */

undefined8 FUN_14dc00535(void)

{
  undefined8 in_RAX;
  undefined8 *unaff_RDI;
  undefined8 uStackX_8;
  
  *unaff_RDI = in_RAX;
  return uStackX_8;
}



// FUNCTION 14dc0062a FUN_14dc0062a body=156 status=ok
// SIG undefined FUN_14dc0062a(void)

void FUN_14dc0062a(void)

{
  return;
}



// FUNCTION 14dc006c7 FUN_14dc006c7 body=158 status=ok
// SIG undefined FUN_14dc006c7(void)

/* WARNING: Removing unreachable block (ram,0x000156f3c32e) */
/* WARNING: Removing unreachable block (ram,0x000156f3c334) */
/* WARNING: Removing unreachable block (ram,0x000156f3c3c1) */
/* WARNING: Removing unreachable block (ram,0x000156f3c3c6) */
/* WARNING: Removing unreachable block (ram,0x000156f3c3cc) */
/* WARNING: Removing unreachable block (ram,0x00015700a4b6) */
/* WARNING: Removing unreachable block (ram,0x00015700a545) */
/* WARNING: Removing unreachable block (ram,0x00015700a549) */
/* WARNING: Removing unreachable block (ram,0x00015700a5bb) */
/* WARNING: Removing unreachable block (ram,0x0001657ec141) */
/* WARNING: Removing unreachable block (ram,0x0001657ec147) */
/* WARNING: Removing unreachable block (ram,0x000156f3c290) */
/* WARNING: Removing unreachable block (ram,0x000156f3c296) */
/* WARNING: Removing unreachable block (ram,0x000166c2b625) */
/* WARNING: Removing unreachable block (ram,0x000166c2b684) */
/* WARNING: Removing unreachable block (ram,0x000166c2b686) */
/* WARNING: Removing unreachable block (ram,0x00014dc00767) */

void FUN_14dc006c7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (CARRY8(-(*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15),unaff_R15)) {
    FUN_166c2b589();
    return;
  }
  FUN_157577a85(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
  return;
}



// FUNCTION 14dc00767 FUN_14dc00767 body=33 status=ok
// SIG undefined FUN_14dc00767(void)

void FUN_14dc00767(void)

{
  return;
}



// FUNCTION 14dc008a7 FUN_14dc008a7 body=34 status=ok
// SIG undefined FUN_14dc008a7(void)

void FUN_14dc008a7(ulonglong *param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  *param_1 = ~(-~unaff_R15 - unaff_RDI);
  return;
}



// FUNCTION 14dc00948 FUN_14dc00948 body=293 status=ok
// SIG undefined FUN_14dc00948(void)

void FUN_14dc00948(void)

{
  undefined8 in_stack_00000008;
  
  FUN_1565a49cb(in_stack_00000008);
  FUN_160e5ad00();
  return;
}



// FUNCTION 14dc00baf FUN_14dc00baf body=175 status=ok
// SIG undefined FUN_14dc00baf(void)

undefined8 FUN_14dc00baf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc00cf4 FUN_14dc00cf4 body=133 status=ok
// SIG undefined FUN_14dc00cf4(void)

void FUN_14dc00cf4(void)

{
  return;
}



// FUNCTION 14dc00d7c FUN_14dc00d7c body=133 status=ok
// SIG undefined FUN_14dc00d7c(void)

void FUN_14dc00d7c(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161514297(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14dc00e8d FUN_14dc00e8d body=294 status=ok
// SIG undefined FUN_14dc00e8d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b2fef07) */
/* WARNING: Removing unreachable block (ram,0x00015b2fef0d) */
/* WARNING: Removing unreachable block (ram,0x00014dc00f68) */
/* WARNING: Removing unreachable block (ram,0x0001569678c0) */
/* WARNING: Removing unreachable block (ram,0x00014dc00f1c) */
/* WARNING: Removing unreachable block (ram,0x00014dc01042) */
/* WARNING: Removing unreachable block (ram,0x000164be48d6) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4868) */

void FUN_14dc00e8d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x68) ^ param_1)) {
    FUN_1569678c0();
    return;
  }
  FUN_15b2fee80();
  return;
}



// FUNCTION 14dc00fb5 FUN_14dc00fb5 body=194 status=ok
// SIG undefined FUN_14dc00fb5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c4868) */

void FUN_14dc00fb5(void)

{
  return;
}



// FUNCTION 14dc010e8 FUN_14dc010e8 body=164 status=ok
// SIG undefined FUN_14dc010e8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbac62) */
/* WARNING: Removing unreachable block (ram,0x00014dcbac6d) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad36) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad39) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad65) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad6a) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad70) */
/* WARNING: Removing unreachable block (ram,0x00014dd00be5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0133d) */
/* WARNING: Removing unreachable block (ram,0x00014dc01343) */
/* WARNING: Removing unreachable block (ram,0x00014dc01182) */
/* WARNING: Removing unreachable block (ram,0x00014dc0118d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0120a) */
/* WARNING: Removing unreachable block (ram,0x0001629c3885) */
/* WARNING: Removing unreachable block (ram,0x00014dc01216) */
/* WARNING: Removing unreachable block (ram,0x0001661e8c04) */
/* WARNING: Removing unreachable block (ram,0x00014dc01188) */
/* WARNING: Removing unreachable block (ram,0x00014dcbac68) */

void FUN_14dc010e8(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_166bfa688(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dc0118d thunk_FUN_14dc01193 body=5 status=ok
// SIG undefined thunk_FUN_14dc01193(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0133d) */
/* WARNING: Removing unreachable block (ram,0x00014dc01343) */
/* WARNING: Removing unreachable block (ram,0x00014dc01216) */

void thunk_FUN_14dc01193(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = ~(~*(ulonglong *)(unaff_RDI + -0x68) | param_1);
  FUN_166d7f716(param_1,(~(~uVar1 & uVar2) + uVar2) - uVar1);
  return;
}



// FUNCTION 14dc01193 FUN_14dc01193 body=442 status=ok
// SIG undefined FUN_14dc01193(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0133d) */
/* WARNING: Removing unreachable block (ram,0x00014dc01343) */
/* WARNING: Removing unreachable block (ram,0x00014dc01216) */

void FUN_14dc01193(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = ~(~*(ulonglong *)(unaff_RDI + -0x68) | param_1);
  FUN_166d7f716(param_1,(~(~uVar1 & uVar2) + uVar2) - uVar1);
  return;
}



// FUNCTION 14dc012a2 FUN_14dc012a2 body=160 status=ok
// SIG undefined FUN_14dc012a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0133d) */
/* WARNING: Removing unreachable block (ram,0x00014dc01343) */

void FUN_14dc012a2(ulonglong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar8;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong uVar9;
  longlong unaff_R13;
  undefined8 uStackX_8;
  undefined8 in_stack_00000010;
  ulonglong local_res20;
  
  LAB_14d7c07a5 = param_4 - (char)*(undefined8 *)(&stack0xfffffffffefd7308 + unaff_R12);
  uVar9 = ~((~in_RAX | local_res20) &
           (~((local_res20 ^ 0xffffffffffffffff) & in_RAX) + in_RAX) -
           ~(local_res20 ^ 0xffffffffffffffff));
  lVar8 = param_5 + in_RAX + (param_5 & in_RAX) * -2;
  LOCK();
  UNLOCK();
  *(undefined8 *)(lVar8 + -8) = param_2;
  *(undefined8 *)(lVar8 + -0x10) = param_2;
  *(ulonglong *)(lVar8 + -0x18) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar9 & 0x80) != 0) * 0x80 | (ulonglong)((uVar9 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar9 & 0x10) != 0) * 0x10 | (ulonglong)((uVar9 & 4) != 0) * 4 |
       (ulonglong)((uVar9 & 1) != 0) | (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar8 + -0x20) = unaff_RBP;
  *(undefined8 *)(lVar8 + -0x28) = unaff_RSI;
  lVar3 = *(longlong *)(lVar8 + -0x28);
  uVar9 = *(ulonglong *)(lVar8 + -0x20);
  *(undefined8 *)(lVar8 + -0x18) = param_3;
  *(undefined8 *)(lVar8 + -8) = 0x324a93c;
  uVar4 = *(undefined8 *)(lVar8 + -0x18);
  pcVar7 = FUN_14e001d9c;
  *(undefined1 **)(lVar8 + -0x18) = &LAB_1661e8c87;
  FUN_14e001d9c(param_1,FUN_14e001d9c,uVar4,in_stack_00000010);
  uVar4 = *(undefined8 *)(lVar8 + -0x10);
  *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(lVar8 + -0x20) = *(undefined8 *)(unaff_RDI + -0x98);
  *(code **)(lVar8 + -0x28) = pcVar7;
  *(undefined8 *)(lVar8 + -0x30) = uVar4;
  *(undefined4 *)(lVar8 + -0x30) = 0xd4c31789;
  *(undefined4 *)(lVar8 + -0x2c) = 0xffffffff;
  *(ulonglong *)(lVar8 + -0x28) = ~(uVar9 & param_1) & (uVar9 | param_1);
  uVar9 = *(ulonglong *)(lVar8 + -0x20);
  *(undefined8 *)(lVar8 + -0x30) = uStackX_8;
  *(undefined8 *)(lVar8 + -0x38) = uVar4;
  *(ulonglong *)(lVar8 + -0x20) =
       (param_1 - (*(ulonglong *)(lVar8 + -0x20) | param_1)) + *(longlong *)(lVar8 + -0x20);
  *(undefined8 *)(lVar8 + -0x40) = 0x1661e8d29;
  uVar6 = FUN_1565e9cdc();
  *(undefined8 *)(lVar8 + -0x38) = *(undefined8 *)(lVar3 + -0x80);
  uVar2 = *(ulonglong *)(lVar8 + -0x38);
  *(undefined8 *)(lVar8 + -0x40) = uVar6;
  *(undefined4 *)(lVar8 + -0x40) = 0x323b7386;
  *(undefined4 *)(lVar8 + -0x3c) = 0;
  uVar5 = *(ulonglong *)(lVar8 + -0x40);
  *(ulonglong *)(lVar8 + -0x40) = uVar9 | param_1;
  uVar9 = *(ulonglong *)(lVar8 + -0x40);
  puVar1 = (undefined8 *)(lVar8 + ((uVar5 ^ 0x38e33151) - 0xad84307));
  uVar4 = *puVar1;
  *puVar1 = uVar4;
  puVar1[-1] = uVar4;
  puVar1[-2] = uVar2 ^ uVar9;
  puVar1[-2] = 0;
  puVar1[-2] = puVar1[-2] - unaff_R13;
  puVar1[-2] = -puVar1[-2];
  puVar1[-3] = uVar6;
  *(undefined4 *)(puVar1 + -3) = 0xec264962;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0xffffffff;
  puVar1[-4] = uVar9;
  puVar1[-5] = uVar9;
  puVar1[-6] = uVar9;
  puVar1[-4] = &DAT_1661e8dd9;
  puVar1[-5] = &DAT_165c8a45a;
  return;
}



// FUNCTION 14dc01343 FUN_14dc01343 body=22 status=ok
// SIG undefined FUN_14dc01343(void)

void FUN_14dc01343(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc01400 FUN_14dc01400 body=141 status=ok
// SIG undefined FUN_14dc01400(void)

void FUN_14dc01400(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R15 + 0x10);
  lVar2 = *(longlong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  uVar3 = *(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) =
       (~(uVar3 & unaff_RDI) + unaff_RDI) - *(longlong *)(unaff_R15 + 0x10);
  uVar3 = *(ulonglong *)(unaff_R15 + 0x10);
  *(undefined8 *)(unaff_R15 + 0x10) = 0;
  *(longlong *)(unaff_R15 + 0x10) =
       *(longlong *)(unaff_R15 + 0x10) +
       ~(((~in_R10 & uVar1 ^ 0xffffffffffffffff) + lVar2) - (~in_R10 ^ 0xffffffffffffffff) & uVar3);
  return;
}



// FUNCTION 14dc01684 FUN_14dc01684 body=106 status=ok
// SIG undefined FUN_14dc01684(void)

void FUN_14dc01684(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RDI;
  
  FUN_16109e06b(param_1,~(unaff_RDI & param_2),param_3,param_4);
  return;
}



// FUNCTION 14dc018bc FUN_14dc018bc body=37 status=ok
// SIG undefined FUN_14dc018bc(void)

undefined8 FUN_14dc018bc(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14dc0195f FUN_14dc0195f body=53 status=ok
// SIG undefined FUN_14dc0195f(void)

void FUN_14dc0195f(void)

{
  return;
}



// FUNCTION 14dc019e9 FUN_14dc019e9 body=319 status=ok
// SIG undefined FUN_14dc019e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc01a93) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc019e9(longlong param_1)

{
  ulonglong unaff_RBX;
  
  *(longlong *)(param_1 + -0x30) = *(longlong *)(param_1 + -0x30) + 0x227f;
  *(ulonglong *)(param_1 + -0x30) = *(ulonglong *)(param_1 + -0x30) ^ unaff_RBX;
  FUN_1569d2db0();
  return;
}



// FUNCTION 14dc01c2a FUN_14dc01c2a body=72 status=ok
// SIG undefined FUN_14dc01c2a(void)

undefined8 FUN_14dc01c2a(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dc01f8d FUN_14dc01f8d body=467 status=ok
// SIG undefined FUN_14dc01f8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc02121) */
/* WARNING: Removing unreachable block (ram,0x00014dc020c5) */

undefined8 FUN_14dc01f8d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  
  FUN_164937078(param_1,FUN_164937078,param_3 & unaff_RBP);
  if (*(longlong *)(unaff_R13 + -0x90) == 0) {
    uVar1 = FUN_166b0b667();
    return uVar1;
  }
  uVar1 = FUN_166b0b667();
  return uVar1;
}



// FUNCTION 14dc02161 FUN_14dc02161 body=170 status=ok
// SIG undefined FUN_14dc02161(void)

void FUN_14dc02161(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R14;
  
  *(undefined8 *)(&stack0x1d6ddf7f + -(~unaff_R14 + 2)) = param_3;
  return;
}



// FUNCTION 14dc022a7 FUN_14dc022a7 body=179 status=ok
// SIG undefined FUN_14dc022a7(void)

void FUN_14dc022a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x156e37e6f)(param_1,param_2,0x156e37e6f,param_4);
  return;
}



// FUNCTION 14dc0236f FUN_14dc0236f body=146 status=ok
// SIG undefined FUN_14dc0236f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc023d2) */

void FUN_14dc0236f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  
  FUN_15af5580a(param_4 - unaff_RBP,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dc02548 FUN_14dc02548 body=153 status=ok
// SIG undefined FUN_14dc02548(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc02548(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_164c2f316(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,unaff_retaddr);
  return;
}



// FUNCTION 14dc025ea FUN_14dc025ea body=75 status=ok
// SIG undefined FUN_14dc025ea(void)

void FUN_14dc025ea(void)

{
  return;
}



// FUNCTION 14dc02675 FUN_14dc02675 body=115 status=ok
// SIG undefined FUN_14dc02675(void)

void FUN_14dc02675(void)

{
  return;
}



// FUNCTION 14dc0272d FUN_14dc0272d body=138 status=ok
// SIG undefined FUN_14dc0272d(void)

void FUN_14dc0272d(undefined8 param_1,undefined8 param_2)

{
  FUN_166de0859(param_1,param_2,FUN_166de0859);
  return;
}



// FUNCTION 14dc029df FUN_14dc029df body=158 status=ok
// SIG undefined FUN_14dc029df(void)

void FUN_14dc029df(void)

{
  return;
}



// FUNCTION 14dc02b1b thunk_FUN_14dc02b21 body=5 status=ok
// SIG undefined thunk_FUN_14dc02b21(void)

/* WARNING: Removing unreachable block (ram,0x00014dc02bbe) */

undefined8 thunk_FUN_14dc02b21(void)

{
  int *piVar1;
  ushort uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ushort *puVar4;
  short sVar5;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ushort uStack_10;
  uint6 uStack_e;
  undefined1 auStack_8 [8];
  
  if (-1 < (longlong)(unaff_RDI ^ 0x3877f228)) {
    in_NT = (in_NT & 1) != 0;
    in_IF = (in_IF & 1) != 0;
    in_TF = (in_TF & 1) != 0;
    in_AF = (in_AF & 1) != 0;
    in_ID = (in_ID & 1) != 0;
    in_AC = (in_AC & 1) != 0;
    in_VIP = 0;
    in_VIF = 0;
  }
  uVar2 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          0x80 | (ushort)(in_AF & 1) * 0x10;
  uStack_10 = uVar2 | 1;
  sVar5 = (0x100 - (uVar2 | 0x101)) + uStack_10;
  _uStack_10 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                        (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                        (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                        (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),sVar5);
  puVar4 = &uStack_10;
  if (sVar5 == 0) {
    puVar4 = (ushort *)auStack_8;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = in_R11;
  piVar1 = (int *)((longlong)puVar4 + -0x10);
  *(undefined8 *)piVar1 = in_RAX;
  *piVar1 = -0x1d87012b;
  *piVar1 = *piVar1 + 0x25650b0e;
  uVar3 = (*(code *)&LAB_166455054)();
  return uVar3;
}



// FUNCTION 14dc02b21 FUN_14dc02b21 body=18 status=ok
// SIG undefined FUN_14dc02b21(void)

/* WARNING: Removing unreachable block (ram,0x00014dc02bbe) */

undefined8 FUN_14dc02b21(void)

{
  int *piVar1;
  ushort uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ushort *puVar4;
  short sVar5;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ushort uStack_10;
  uint6 uStack_e;
  undefined1 auStack_8 [8];
  
  if (-1 < (longlong)(unaff_RDI ^ 0x3877f228)) {
    in_NT = (in_NT & 1) != 0;
    in_IF = (in_IF & 1) != 0;
    in_TF = (in_TF & 1) != 0;
    in_AF = (in_AF & 1) != 0;
    in_ID = (in_ID & 1) != 0;
    in_AC = (in_AC & 1) != 0;
    in_VIP = 0;
    in_VIF = 0;
  }
  uVar2 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          0x80 | (ushort)(in_AF & 1) * 0x10;
  uStack_10 = uVar2 | 1;
  sVar5 = (0x100 - (uVar2 | 0x101)) + uStack_10;
  _uStack_10 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                        (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                        (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                        (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),sVar5);
  puVar4 = &uStack_10;
  if (sVar5 == 0) {
    puVar4 = (ushort *)auStack_8;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = in_R11;
  piVar1 = (int *)((longlong)puVar4 + -0x10);
  *(undefined8 *)piVar1 = in_RAX;
  *piVar1 = -0x1d87012b;
  *piVar1 = *piVar1 + 0x25650b0e;
  uVar3 = (*(code *)&LAB_166455054)();
  return uVar3;
}



// FUNCTION 14dc02bc0 FUN_14dc02bc0 body=28 status=ok
// SIG undefined FUN_14dc02bc0(void)

undefined8 FUN_14dc02bc0(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dc02d05 FUN_14dc02d05 body=50 status=ok
// SIG undefined FUN_14dc02d05(void)

void FUN_14dc02d05(void)

{
  byte unaff_SIL;
  ulonglong in_stack_00000008;
  
  if ((longlong)in_stack_00000008 < 0) {
    unaff_SIL = unaff_SIL ^ 0xbd;
  }
  *(byte *)(in_stack_00000008 & 0x7fffffffffffffff) = unaff_SIL;
  FUN_162f0ab82();
  return;
}



// FUNCTION 14dc02d38 FUN_14dc02d38 body=100 status=ok
// SIG undefined FUN_14dc02d38(void)

undefined8 FUN_14dc02d38(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined1 unaff_retaddr;
  ulonglong in_stack_00000008;
  
  if (-1 < (longlong)in_stack_00000008) {
    *(undefined1 *)(in_stack_00000008 & 0x7fffffffffffffff) = unaff_retaddr;
    uVar1 = FUN_162f0ab82();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc02e3c FUN_14dc02e3c body=595 status=ok
// SIG undefined FUN_14dc02e3c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc02ec8) */
/* WARNING: Removing unreachable block (ram,0x00014dc02ece) */
/* WARNING: Removing unreachable block (ram,0x00016180cb00) */
/* WARNING: Removing unreachable block (ram,0x00016180cb0b) */
/* WARNING: Removing unreachable block (ram,0x00016180cb06) */

void FUN_14dc02e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  FUN_15743e350(param_1,in_RAX + unaff_R15 + (in_RAX & unaff_R15) * -2,param_3,param_4);
  return;
}



// FUNCTION 14dc030a4 FUN_14dc030a4 body=311 status=ok
// SIG undefined FUN_14dc030a4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3d4c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc3d4cf) */
/* WARNING: Removing unreachable block (ram,0x00014dc03138) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc030a4(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  ulonglong in_R9;
  longlong unaff_R12;
  undefined4 in_stack_00000030;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x28);
  if ((0xffffffffffffffff - (uVar1 & in_RAX) & (uVar1 | in_RAX)) == 0) {
    FUN_14dc3d272(uVar1,in_stack_00000030);
    return;
  }
  FUN_15b82d5b2(0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                -1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                     (~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),
                -1 - (unaff_RBX & ~(~in_R9 & ~in_RAX)));
  FUN_16212273d();
  FUN_15b4a1017();
  FUN_15b9c6112();
  return;
}



// FUNCTION 14dc031df FUN_14dc031df body=140 status=ok
// SIG undefined FUN_14dc031df(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0338f) */
/* WARNING: Removing unreachable block (ram,0x00014dc032f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc032fb) */
/* WARNING: Removing unreachable block (ram,0x00014dc03384) */
/* WARNING: Removing unreachable block (ram,0x00014dc0338a) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2396) */
/* WARNING: Removing unreachable block (ram,0x00015b8e240a) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2415) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2410) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2405) */
/* WARNING: Removing unreachable block (ram,0x000161a1a680) */
/* WARNING: Removing unreachable block (ram,0x000161a49908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc031df(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  ushort uStackX_20;
  longlong in_stack_00000028;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x28);
  FUN_14e063e86();
  uVar2 = *(ulonglong *)(&stack0x00000018 + unaff_R15);
  *(ulonglong *)(&stack0x00000018 + unaff_R15) = ~*(ulonglong *)(&stack0x00000018 + unaff_R15);
  *(ulonglong *)(&stack0x00000018 + unaff_R15) =
       *(ulonglong *)(&stack0x00000018 + unaff_R15) | unaff_retaddr;
  *(ulonglong *)(&stack0x00000018 + unaff_R15) =
       ~(~(*(ulonglong *)(&stack0x00000018 + unaff_R15) & ~(~unaff_retaddr | uVar2)) +
         *(longlong *)(&stack0x00000018 + unaff_R15) + 1);
  *(undefined8 *)(in_stack_00000028 + -8) = uVar1;
  if (((-0x101 - (uStackX_20 | 0xfeff)) + uStackX_20 & 0x80) == 0) {
    FUN_1566dfa91();
    return;
  }
  FUN_1566dfa91();
  return;
}



// FUNCTION 14dc0326b FUN_14dc0326b body=289 status=ok
// SIG undefined FUN_14dc0326b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0338f) */
/* WARNING: Removing unreachable block (ram,0x00014dc032f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc032fb) */
/* WARNING: Removing unreachable block (ram,0x00014dc03384) */
/* WARNING: Removing unreachable block (ram,0x00014dc0338a) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2396) */
/* WARNING: Removing unreachable block (ram,0x00015b8e240a) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2415) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2410) */
/* WARNING: Removing unreachable block (ram,0x00015b8e2405) */
/* WARNING: Removing unreachable block (ram,0x000161a1a680) */
/* WARNING: Removing unreachable block (ram,0x000161a49908) */

void FUN_14dc0326b(void)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  ushort uStackX_20;
  longlong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(&stack0x00000018 + unaff_R15);
  *(ulonglong *)(&stack0x00000018 + unaff_R15) = ~*(ulonglong *)(&stack0x00000018 + unaff_R15);
  *(ulonglong *)(&stack0x00000018 + unaff_R15) =
       *(ulonglong *)(&stack0x00000018 + unaff_R15) | unaff_retaddr;
  *(ulonglong *)(&stack0x00000018 + unaff_R15) =
       ~(~(*(ulonglong *)(&stack0x00000018 + unaff_R15) & ~(~unaff_retaddr | uVar1)) +
         *(longlong *)(&stack0x00000018 + unaff_R15) + 1);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBX;
  if (((-0x101 - (uStackX_20 | 0xfeff)) + uStackX_20 & 0x80) == 0) {
    FUN_1566dfa91();
    return;
  }
  FUN_1566dfa91();
  return;
}



// FUNCTION 14dc0338f FUN_14dc0338f body=155 status=ok
// SIG undefined FUN_14dc0338f(void)

void FUN_14dc0338f(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  longlong unaff_RSI;
  longlong unaff_R14;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(unaff_RSI + ~param_3) = uStackX_8;
  plVar1 = (longlong *)(param_7 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  FUN_160ca0395(param_5,uStackX_10,in_stack_00000020);
  return;
}



// FUNCTION 14dc0342b FUN_14dc0342b body=172 status=ok
// SIG undefined FUN_14dc0342b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc034d1) */
/* WARNING: Removing unreachable block (ram,0x00014dc034d7) */
/* WARNING: Removing unreachable block (ram,0x00014dc03573) */
/* WARNING: Removing unreachable block (ram,0x000164bea34a) */
/* WARNING: Removing unreachable block (ram,0x000164bea3c4) */
/* WARNING: Removing unreachable block (ram,0x000164bea3ca) */
/* WARNING: Removing unreachable block (ram,0x000164bea3cf) */
/* WARNING: Removing unreachable block (ram,0x000165e04b1b) */

undefined8 FUN_14dc0342b(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ushort *unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  *unaff_R15 = (-0x101 - (*unaff_R15 | 0xfeff)) + *unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0x10838a60;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R13;
  uVar1 = *(ulonglong *)(in_stack_00000028 + -8);
  *(ulonglong *)(in_stack_00000028 + -8) =
       *(ulonglong *)(in_stack_00000028 + -8) | 0xffffffffcf57be22;
  *(ulonglong *)(in_stack_00000028 + -8) =
       ~(~(uVar1 & 0xffffffffcf57be22) & *(ulonglong *)(in_stack_00000028 + -8));
  *(ulonglong *)(in_stack_00000028 + -8) = *(ulonglong *)(in_stack_00000028 + -8) ^ 0x202bcbbd;
  *(longlong *)(in_stack_00000028 + -8) =
       (longlong)(&DAT_1667cbec1 + *(longlong *)(in_stack_00000028 + -8));
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res8;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res8;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_1667cbe87;
  return in_RAX;
}



// FUNCTION 14dc034d7 FUN_14dc034d7 body=172 status=ok
// SIG undefined FUN_14dc034d7(void)

/* WARNING: Removing unreachable block (ram,0x000164bea3cf) */
/* WARNING: Removing unreachable block (ram,0x00014dc03573) */

longlong FUN_14dc034d7(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 !=
      (*(ulonglong *)(unaff_RDI + -0x88) & param_1) * 2) {
    return *(ulonglong *)(unaff_RDI + unaff_RBP) + param_1 +
           (*(ulonglong *)(unaff_RDI + unaff_RBP) & param_1) * -2;
  }
  lVar1 = FUN_165e04b1b();
  return lVar1;
}



// FUNCTION 14dc0358a FUN_14dc0358a body=140 status=ok
// SIG undefined FUN_14dc0358a(void)

undefined8 FUN_14dc0358a(void)

{
  undefined8 in_R11;
  
  FUN_1651da5e3();
  return in_R11;
}



// FUNCTION 14dc03619 FUN_14dc03619 body=83 status=ok
// SIG undefined FUN_14dc03619(void)

undefined8 FUN_14dc03619(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dc036a8 FUN_14dc036a8 body=136 status=ok
// SIG undefined FUN_14dc036a8(void)

void FUN_14dc036a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b2e4711(param_1,param_2,param_3,param_4);
  FUN_14dc03732();
  return;
}



// FUNCTION 14dc03732 FUN_14dc03732 body=855 status=ok
// SIG undefined FUN_14dc03732(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0383e) */
/* WARNING: Removing unreachable block (ram,0x00014dc03844) */
/* WARNING: Removing unreachable block (ram,0x0001610a7bb6) */
/* WARNING: Removing unreachable block (ram,0x00014dc037b1) */

void FUN_14dc03732(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  bool bVar3;
  ulonglong uVar4;
  ulonglong local_res10 [3];
  
  local_res10[1] =
       ~((~unaff_R15 | local_res10[1]) + unaff_R15 + 1) &
       (unaff_RDI + *(longlong *)((longlong)local_res10 + unaff_RBX) +
        ((~*(ulonglong *)((longlong)local_res10 + unaff_RBX) | unaff_RDI) +
         *(longlong *)((longlong)local_res10 + unaff_RBX) + 1) * -2 | unaff_R15);
  uVar4 = ~(local_res10[2] & unaff_R15) &
          (local_res10[2] + unaff_R15) - (local_res10[2] & unaff_R15);
  param_5 = param_5 ^ unaff_R15;
  local_res10[2] = uVar4 & 0xfffffffffffffeff;
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7c2d9d);
  UNLOCK();
  DAT_14d7c2d9d = (char)in_RAX;
  *(undefined8 *)(param_5 - 8) = param_1;
  *(undefined8 *)(param_5 - 0x10) = param_1;
  *(undefined8 *)(param_5 - 0x18) = uVar1;
  *(undefined4 *)(param_5 - 0x18) = 0x57ba93d;
  *(undefined4 *)(param_5 - 0x14) = 0;
  lVar2 = *(longlong *)(param_5 - 0x18);
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x80) != 0) * 0x80 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((uVar4 & 4) != 0) * 4 |
       (ulonglong)((uVar4 & 1) != 0) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = in_R11;
  lVar2 = lVar2 + -0x25c5bad;
  uVar4 = *(ulonglong *)(param_5 - 0x18);
  bVar3 = (uVar4 & 0x80) != 0;
  *(undefined8 *)(param_5 - 0x18) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x20) = param_2;
  *(ulonglong *)(param_5 - 0x28) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)bVar3 * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  if (!bVar3) {
    FUN_1654cff83(lVar2,0x7bd097e,param_3);
    return;
  }
  *(longlong *)(param_5 - 8) = lVar2;
  *(undefined8 *)(param_5 - 0x28cf) = unaff_R13;
  *(undefined8 *)(param_5 - 0x28d7) = unaff_R13;
  *(undefined **)(param_5 - 0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc03a13 FUN_14dc03a13 body=33 status=ok
// SIG undefined FUN_14dc03a13(void)

void FUN_14dc03a13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc03a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStackX_10,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dc03aa8 FUN_14dc03aa8 body=142 status=ok
// SIG undefined FUN_14dc03aa8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc03aa8(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *in_R11;
  ulonglong local_res20;
  
  uVar1 = *in_R11;
  *in_R11 = *in_R11 ^ 0xffffffffffffffff;
  *in_R11 = *in_R11 | param_1;
  *in_R11 = 0xffffffffffffffff - ((~param_1 | uVar1) & *in_R11);
  FUN_15b7fc18f(FUN_15b7fc18f,param_2,local_res20 | param_1);
  return;
}



// FUNCTION 14dc03b3d FUN_14dc03b3d body=145 status=ok
// SIG undefined FUN_14dc03b3d(void)

void FUN_14dc03b3d(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,longlong param_6)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 local_res20;
  
  *(ulonglong *)(param_2 + 0x10) = param_4 & *(ulonglong *)(param_2 + 0x10) ^ 0xffffffffffffffff;
  *(undefined8 *)(param_6 + -8) = unaff_RSI;
  *(undefined8 *)(param_6 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_6 + -0x18) = local_res8;
  *(undefined4 *)(param_6 + -0x18) = 0xa372ce8;
  *(undefined4 *)(param_6 + -0x14) = 0;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x80) != 0) * 0x80 | (ulonglong)((param_5 & 0x40) != 0) * 0x40 |
       (ulonglong)((param_5 & 0x10) != 0) * 0x10 | (ulonglong)((param_5 & 4) != 0) * 4 |
       (ulonglong)((param_5 & 1) != 0) | (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -0x20) = unaff_RDI;
  FUN_1664eb43f(local_res20,in_stack_00000010,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14dc03c67 FUN_14dc03c67 body=191 status=ok
// SIG undefined FUN_14dc03c67(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc03c67(void)

{
  FUN_1627354a4();
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc03dc3 FUN_14dc03dc3 body=591 status=ok
// SIG undefined FUN_14dc03dc3(void)

/* WARNING: Instruction at (ram,0x0001667a97c1) overlaps instruction at (ram,0x0001667a97c0)
    */
/* WARNING: Removing unreachable block (ram,0x0001657b7043) */
/* WARNING: Removing unreachable block (ram,0x0001657b7049) */
/* WARNING: Removing unreachable block (ram,0x000166c8de6b) */
/* WARNING: Removing unreachable block (ram,0x000166c8df16) */
/* WARNING: Removing unreachable block (ram,0x0001657b6f42) */
/* WARNING: Removing unreachable block (ram,0x0001657b6f48) */
/* WARNING: Removing unreachable block (ram,0x0001657b6f4d) */
/* WARNING: Removing unreachable block (ram,0x0001657b703e) */
/* WARNING: Removing unreachable block (ram,0x000166c8df1b) */
/* WARNING: Removing unreachable block (ram,0x000166c8df21) */
/* WARNING: Removing unreachable block (ram,0x00014d969a75) */
/* WARNING: Removing unreachable block (ram,0x0001657b6eb1) */
/* WARNING: Removing unreachable block (ram,0x0001657b6eb7) */
/* WARNING: Removing unreachable block (ram,0x0001657b6f3d) */
/* WARNING: Removing unreachable block (ram,0x0001667a97ad) */
/* WARNING: Removing unreachable block (ram,0x0001667a97c1) */
/* WARNING: Removing unreachable block (ram,0x0001667a97c0) */
/* WARNING: Removing unreachable block (ram,0x0001667a9823) */
/* WARNING: Removing unreachable block (ram,0x00016248da4d) */
/* WARNING: Removing unreachable block (ram,0x0001567861c8) */
/* WARNING: Removing unreachable block (ram,0x00014dc03e52) */

void FUN_14dc03dc3(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI + -0x88) {
    FUN_162a331f5(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                          (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,FUN_162a331f5);
    return;
  }
  FUN_1657b6d7c();
  return;
}



// FUNCTION 14dc03e52 FUN_14dc03e52 body=285 status=ok
// SIG undefined FUN_14dc03e52(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc03e52(void)

{
  FUN_1662391c8();
  FUN_16525db3f();
  return;
}



// FUNCTION 14dc03f72 FUN_14dc03f72 body=474 status=ok
// SIG undefined FUN_14dc03f72(void)

/* WARNING: Removing unreachable block (ram,0x00014dc03ff6) */
/* WARNING: Removing unreachable block (ram,0x00014dc0406b) */
/* WARNING: Removing unreachable block (ram,0x00014dc04071) */
/* WARNING: Removing unreachable block (ram,0x00015b3be112) */

ulonglong FUN_14dc03f72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong in_RAX;
  ushort *unaff_R14;
  undefined8 unaff_R15;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 unaff_retaddr;
  undefined1 uStackX_10;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_R14 = ~*unaff_R14;
  uVar2 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = (~(uVar2 & 0x100) + 0x100) - *unaff_R14;
  *unaff_R14 = *unaff_R14 ^ 0xffff;
                    /* WARNING: Read-only address (ram,0x00014d7aa432) is written */
  LOCK();
  cVar5 = (char)in_RAX;
  if (cVar5 == '\0') {
    uRam000000014d7aa432 = uStackX_10;
  }
  else {
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(undefined4 *)(local_res20 + -0x18) = 0xaeef278;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar5 < '\0') * 0x80 |
       (ulonglong)(cVar5 == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar5) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  uVar13 = *(ulonglong *)(local_res20 + -0x28);
  bVar10 = (uVar13 & 0x4000) != 0;
  bVar9 = (uVar13 & 0x400) != 0;
  bVar8 = (uVar13 & 0x200) != 0;
  bVar7 = (uVar13 & 0x100) != 0;
  bVar6 = (uVar13 & 0x10) != 0;
  bVar12 = (uVar13 & 0x200000) != 0;
  bVar11 = (uVar13 & 0x40000) != 0;
  uVar3 = *(undefined8 *)(local_res20 + -0x20);
  if ((uVar13 & 1) != 0) {
    lVar4 = *(longlong *)(local_res20 + -0x18);
    *(ulonglong *)(local_res20 + -0x18) =
         (ulonglong)bVar10 * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
         (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
         (ulonglong)((uVar13 & 0x80) != 0) * 0x80 | (ulonglong)((uVar13 & 0x40) != 0) * 0x40 |
         (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar13 & 4) != 0) * 4 | 1 |
         (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
    *(longlong *)(local_res20 + -0x20) = lVar4;
    uVar13 = *(ulonglong *)(local_res20 + -0x20);
    lVar1 = *(longlong *)(local_res20 + -0x20);
    *(longlong *)(local_res20 + -0x20) = *(longlong *)(local_res20 + -0x20) + -0x86c0046;
    *(ulonglong *)(local_res20 + -0x20) =
         (ulonglong)bVar10 * 0x4000 | (ulonglong)SBORROW8(lVar1,0x86c0046) * 0x800 |
         (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
         (ulonglong)(*(longlong *)(local_res20 + -0x20) < 0) * 0x80 |
         (ulonglong)(*(longlong *)(local_res20 + -0x20) == 0) * 0x40 | (ulonglong)bVar6 * 0x10 |
         (ulonglong)((POPCOUNT(*(ulonglong *)(local_res20 + -0x20) & 0xff) & 1U) == 0) * 4 |
         (ulonglong)(uVar13 < 0x86c0046) | (ulonglong)bVar12 * 0x200000 |
         (ulonglong)bVar11 * 0x40000;
    uVar13 = *(ulonglong *)(local_res20 + -0x18);
    *(undefined8 *)(local_res20 + -0x18) = uVar3;
    *(undefined8 *)(local_res20 + -0x20) = param_3;
    *(ulonglong *)(local_res20 + -0x28) =
         (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
         (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
    *(longlong *)(local_res20 + -8) = lVar4 + -0x86c0046;
    *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
    *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
    *(undefined8 *)(local_res20 + -0x10) = 0x156ef2e25;
    return in_RAX;
  }
  uVar13 = FUN_161ada2d6();
  return uVar13;
}



// FUNCTION 14dc041fb FUN_14dc041fb body=325 status=ok
// SIG undefined FUN_14dc041fb(void)

/* WARNING: Instruction at (ram,0x00014dc04273) overlaps instruction at (ram,0x00014dc04272)
    */
/* WARNING: Removing unreachable block (ram,0x000156cda206) */
/* WARNING: Removing unreachable block (ram,0x000156775249) */
/* WARNING: Removing unreachable block (ram,0x000156cda27e) */
/* WARNING: Removing unreachable block (ram,0x000156cda284) */
/* WARNING: Removing unreachable block (ram,0x000156cda289) */
/* WARNING: Removing unreachable block (ram,0x000161941bf2) */
/* WARNING: Removing unreachable block (ram,0x000161941bf8) */
/* WARNING: Removing unreachable block (ram,0x000165596fc6) */
/* WARNING: Removing unreachable block (ram,0x000161941b5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc04272) */
/* WARNING: Removing unreachable block (ram,0x00014dc04341) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dc042ac */
/* WARNING: Removing unreachable block (ram,0x00014dc042ac) */
/* WARNING: Removing unreachable block (ram,0x00014dc04336) */
/* WARNING: Removing unreachable block (ram,0x00014dc0433b) */
/* WARNING: Removing unreachable block (ram,0x00015b587863) */
/* WARNING: Removing unreachable block (ram,0x00015b587868) */
/* WARNING: Removing unreachable block (ram,0x00015b587872) */
/* WARNING: Removing unreachable block (ram,0x00015b587877) */
/* WARNING: Removing unreachable block (ram,0x00015b587881) */
/* WARNING: Removing unreachable block (ram,0x00015b587886) */
/* WARNING: Removing unreachable block (ram,0x00015b5878a1) */
/* WARNING: Removing unreachable block (ram,0x00015b5878a6) */
/* WARNING: Removing unreachable block (ram,0x00015b5878d3) */
/* WARNING: Removing unreachable block (ram,0x00015b5878d9) */
/* WARNING: Removing unreachable block (ram,0x000161941a76) */
/* WARNING: Removing unreachable block (ram,0x000161941a8a) */
/* WARNING: Removing unreachable block (ram,0x000161941a8f) */
/* WARNING: Removing unreachable block (ram,0x000161941ab0) */
/* WARNING: Removing unreachable block (ram,0x000161941aab) */
/* WARNING: Removing unreachable block (ram,0x000161941b57) */
/* WARNING: Removing unreachable block (ram,0x000165596eb6) */
/* WARNING: Removing unreachable block (ram,0x000165596f5d) */
/* WARNING: Removing unreachable block (ram,0x000165596f63) */
/* WARNING: Removing unreachable block (ram,0x000165596f68) */
/* WARNING: Removing unreachable block (ram,0x000165d78bb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc041fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined4 in_stack_00000008;
  longlong lVar2;
  ulonglong uStackX_10;
  
  lVar2 = CONCAT44(0xffffffff,in_stack_00000008);
  (&stack0x2bdf45b4)[lVar2] = 0;
  (&stack0x2bdf45b4)[lVar2] = (&stack0x2bdf45b4)[lVar2] + param_4;
  if ((uStackX_10 & 0x80) == 0) {
    uVar1 = FUN_15b40f4fc();
    return uVar1;
  }
  uVar1 = (*(code *)0x165177af9)(param_1,param_2,lVar2 + 0x2bdf459c,0xfffffffffffffff8);
  return uVar1;
}



// FUNCTION 14dc04341 FUN_14dc04341 body=169 status=ok
// SIG undefined FUN_14dc04341(void)

void FUN_14dc04341(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  undefined8 in_stack_00000008;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | unaff_RBP;
  *(ulonglong *)(param_2 + 0x10) =
       -1 - ((0xffffffffffffffff - unaff_RBP | uVar1) & *(ulonglong *)(param_2 + 0x10));
  FUN_161688eda(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14dc043eb thunk_FUN_14dc043f1 body=5 status=ok
// SIG undefined thunk_FUN_14dc043f1(void)

void thunk_FUN_14dc043f1(void)

{
  FUN_15b1e6510();
  return;
}



// FUNCTION 14dc043f1 FUN_14dc043f1 body=126 status=ok
// SIG undefined FUN_14dc043f1(void)

void FUN_14dc043f1(void)

{
  FUN_15b1e6510();
  return;
}



// FUNCTION 14dc0446f FUN_14dc0446f body=643 status=ok
// SIG undefined FUN_14dc0446f(void)

/* WARNING: Removing unreachable block (ram,0x000160cec42f) */
/* WARNING: Removing unreachable block (ram,0x000160cec43b) */
/* WARNING: Removing unreachable block (ram,0x000160cec4a3) */
/* WARNING: Removing unreachable block (ram,0x0001626bff4f) */
/* WARNING: Removing unreachable block (ram,0x0001626bff87) */
/* WARNING: Removing unreachable block (ram,0x000160cec4a9) */
/* WARNING: Removing unreachable block (ram,0x000160cec4b4) */
/* WARNING: Removing unreachable block (ram,0x00014dc045ac) */
/* WARNING: Removing unreachable block (ram,0x00014dc046b5) */
/* WARNING: Removing unreachable block (ram,0x000160e30a0e) */

undefined8 FUN_14dc0446f(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar4 = *(undefined8 *)(unaff_R13 + -0x98);
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_1574e6cf4();
  iVar5 = 0x619d16d8;
  FUN_1619d16d8();
  FUN_164fb9654();
  if (CONCAT44((int)((ulonglong)uVar4 >> 0x20) + iVar5,(int)uVar4) == 0x29ea4cc9) {
    uVar2 = *(ulonglong *)(lVar1 + -0x78);
    uVar3 = *(ulonglong *)(lVar1 + -0x28);
    uVar6 = (uVar3 + unaff_R15) - (uVar3 & unaff_R15);
    uVar4 = FUN_162454b1a(uVar2 + unaff_R15 + ~(~uVar2 | ~unaff_R15) * -2,
                          (~uVar6 | ~uVar3 | ~unaff_R15) + uVar6 + 1);
    return uVar4;
  }
  uVar4 = FUN_162c35a37();
  return uVar4;
}



// FUNCTION 14dc047e4 FUN_14dc047e4 body=265 status=ok
// SIG undefined FUN_14dc047e4(void)

/* WARNING: Removing unreachable block (ram,0x000165afd5db) */
/* WARNING: Removing unreachable block (ram,0x000165afd5e1) */
/* WARNING: Removing unreachable block (ram,0x00015b991477) */
/* WARNING: Removing unreachable block (ram,0x000165afd4a7) */
/* WARNING: Removing unreachable block (ram,0x000165afd53d) */
/* WARNING: Removing unreachable block (ram,0x000165afd542) */
/* WARNING: Removing unreachable block (ram,0x000165afd548) */
/* WARNING: Removing unreachable block (ram,0x000165afd54d) */
/* WARNING: Removing unreachable block (ram,0x0001648b96ab) */
/* WARNING: Removing unreachable block (ram,0x0001648b9736) */
/* WARNING: Removing unreachable block (ram,0x00014dc0488c) */
/* WARNING: Removing unreachable block (ram,0x00014dc04892) */
/* WARNING: Removing unreachable block (ram,0x00015b99151e) */
/* WARNING: Removing unreachable block (ram,0x00015b991524) */

undefined8 FUN_14dc047e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b991477();
  return uVar1;
}



// FUNCTION 14dc0498c FUN_14dc0498c body=369 status=ok
// SIG undefined FUN_14dc0498c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc04a43) */
/* WARNING: Removing unreachable block (ram,0x00014dc04a4f) */
/* WARNING: Removing unreachable block (ram,0x00014dc04a54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc0498c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar1 = *(ulonglong *)
           (unaff_R15 + ~(~(param_3 & 0xffffffffa4c77299) & (param_3 | 0xffffffffa4c77299)));
  if ((unaff_retaddr & 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  thunk_FUN_1616c9c6f(param_1,param_2,-~uVar1 - (~CONCAT44(in_stack_0000000c,in_stack_00000008) + 2)
                     );
  return;
}



// FUNCTION 14dc04b05 FUN_14dc04b05 body=204 status=ok
// SIG undefined FUN_14dc04b05(void)

undefined8 FUN_14dc04b05(longlong param_1)

{
  return *(undefined8 *)(param_1 + -0xa0);
}



// FUNCTION 14dc04bd4 FUN_14dc04bd4 body=485 status=ok
// SIG undefined FUN_14dc04bd4(void)

void FUN_14dc04bd4(undefined8 param_1)

{
  FUN_15b678524();
  FUN_1621a306b();
  FUN_14e16ba1d(param_1);
  return;
}



// FUNCTION 14dc04dba FUN_14dc04dba body=229 status=ok
// SIG undefined FUN_14dc04dba(void)

void FUN_14dc04dba(void)

{
  undefined8 in_stack_00000010;
  
  FUN_162c0c745(in_stack_00000010);
  return;
}



// FUNCTION 14dc04f8c FUN_14dc04f8c body=36 status=ok
// SIG undefined FUN_14dc04f8c(void)

void FUN_14dc04f8c(void)

{
  return;
}



// FUNCTION 14dc05287 FUN_14dc05287 body=155 status=ok
// SIG undefined FUN_14dc05287(void)

void FUN_14dc05287(undefined8 param_1,undefined8 param_2)

{
  FUN_16535da50(param_1,param_2,0xffffffffffffff90);
  return;
}



// FUNCTION 14dc05324 FUN_14dc05324 body=274 status=ok
// SIG undefined FUN_14dc05324(void)

ulonglong FUN_14dc05324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  undefined1 local_res18 [8];
  
  uVar1 = FUN_156f91769(local_res18,param_2,FUN_156f91769,param_4,
                        unaff_RDI - *(longlong *)(&stack0xfffffffff9344685 + unaff_retaddr));
  return ~(uVar1 & unaff_RBX | ~unaff_RBP);
}



// FUNCTION 14dc05439 FUN_14dc05439 body=324 status=ok
// SIG undefined FUN_14dc05439(void)

void FUN_14dc05439(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_164803528(FUN_164803528,*(ulonglong *)(unaff_RSI + -0x70) | unaff_RBP);
  FUN_16111be1e();
  return;
}



// FUNCTION 14dc05581 FUN_14dc05581 body=20 status=ok
// SIG undefined FUN_14dc05581(void)

void FUN_14dc05581(void)

{
  return;
}



// FUNCTION 14dc05600 FUN_14dc05600 body=148 status=ok
// SIG undefined FUN_14dc05600(void)

/* WARNING: Removing unreachable block (ram,0x00014dc05694) */

void FUN_14dc05600(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_15b1fbea7(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) + param_1 + 1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3,param_4);
  return;
}



// FUNCTION 14dc05694 FUN_14dc05694 body=48 status=ok
// SIG undefined FUN_14dc05694(void)

void FUN_14dc05694(void)

{
  ulonglong uVar1;
  longlong in_R11;
  ulonglong unaff_R13;
  ulonglong auStackX_10 [3];
  
  uVar1 = *(ulonglong *)((longlong)auStackX_10 + in_R11);
  *(ulonglong *)((longlong)auStackX_10 + in_R11) = ~*(ulonglong *)((longlong)auStackX_10 + in_R11);
  *(ulonglong *)((longlong)auStackX_10 + in_R11) =
       *(ulonglong *)((longlong)auStackX_10 + in_R11) | unaff_R13;
  *(ulonglong *)((longlong)auStackX_10 + in_R11) =
       ~((~unaff_R13 | uVar1) & *(ulonglong *)((longlong)auStackX_10 + in_R11));
  return;
}



// FUNCTION 14dc0597a FUN_14dc0597a body=171 status=ok
// SIG undefined FUN_14dc0597a(void)

void FUN_14dc0597a(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  uVar1 = ~(~((-0x59c96506 - (param_1 | 0xffffffffa6369afa)) + param_1) &
           (param_3 | 0xffffffffa6369afa));
  uVar2 = uVar1 + *(longlong *)(unaff_RSI + -0x60);
  FUN_15b971369(uVar1,FUN_15b971369,~(uVar2 & unaff_RBP) & (uVar2 | unaff_RBP));
  return;
}



// FUNCTION 14dc05a26 FUN_14dc05a26 body=3 status=ok
// SIG undefined FUN_14dc05a26(void)

void FUN_14dc05a26(void)

{
  return;
}



// FUNCTION 14dc05b03 FUN_14dc05b03 body=279 status=ok
// SIG undefined FUN_14dc05b03(void)

/* WARNING: Removing unreachable block (ram,0x00014dc05b83) */

void FUN_14dc05b03(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RDI;
  
  FUN_1628cb703(param_1,~((param_2 - (unaff_RDI | param_2)) + unaff_RDI),param_3);
  return;
}



// FUNCTION 14dc05b83 FUN_14dc05b83 body=153 status=ok
// SIG undefined FUN_14dc05b83(void)

void FUN_14dc05b83(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_164ba6868();
  FUN_16104f73f(param_1,puVar1,param_3,param_4);
  return;
}



// FUNCTION 14dc05c1d FUN_14dc05c1d body=182 status=ok
// SIG undefined FUN_14dc05c1d(void)

void FUN_14dc05c1d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16104f73f(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc05cd6 FUN_14dc05cd6 body=166 status=ok
// SIG undefined FUN_14dc05cd6(void)

undefined8 FUN_14dc05cd6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc05d7d FUN_14dc05d7d body=30 status=ok
// SIG undefined FUN_14dc05d7d(void)

void FUN_14dc05d7d(void)

{
  FUN_14d7c5135();
  return;
}



// FUNCTION 14dc05e3b FUN_14dc05e3b body=126 status=ok
// SIG undefined FUN_14dc05e3b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc05eb8) */
/* WARNING: Removing unreachable block (ram,0x00014dc05ead) */

void FUN_14dc05e3b(void)

{
  return;
}



// FUNCTION 14dc0611a FUN_14dc0611a body=202 status=ok
// SIG undefined FUN_14dc0611a(void)

/* WARNING: Removing unreachable block (ram,0x0001623440e0) */
/* WARNING: Removing unreachable block (ram,0x00016234412a) */
/* WARNING: Removing unreachable block (ram,0x00014dc061a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc061b3) */
/* WARNING: Removing unreachable block (ram,0x00016234413d) */
/* WARNING: Removing unreachable block (ram,0x000162344141) */

void FUN_14dc0611a(undefined8 param_1,uint param_2)

{
  undefined4 local_res18;
  
  FUN_1623440e0(0xffffffffffffffcd,~local_res18 & param_2 | local_res18);
  return;
}



// FUNCTION 14dc06229 FUN_14dc06229 body=151 status=ok
// SIG undefined FUN_14dc06229(void)

longlong FUN_14dc06229(void)

{
  longlong in_RAX;
  longlong in_R11;
  
  return in_RAX + in_R11 * -2;
}



// FUNCTION 14dc062c2 FUN_14dc062c2 body=140 status=ok
// SIG undefined FUN_14dc062c2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dc0634d) overlaps instruction at (ram,0x00014dc0634c)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc0634c) */

void FUN_14dc062c2(int param_1)

{
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  if ((unaff_retaddr ^ 0x7a99d3de) - unaff_R12 == 0x4d5c62b8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    (*(code *)0x1624429af)(-1 - param_1);
    FUN_14d85d504();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc0651c FUN_14dc0651c body=237 status=ok
// SIG undefined FUN_14dc0651c(void)

void FUN_14dc0651c(undefined8 param_1)

{
  FUN_16624e699(param_1);
  return;
}



// FUNCTION 14dc06643 FUN_14dc06643 body=108 status=ok
// SIG undefined FUN_14dc06643(void)

void FUN_14dc06643(void)

{
  (*(code *)&LAB_164b18b27)();
  return;
}



// FUNCTION 14dc066b1 FUN_14dc066b1 body=760 status=ok
// SIG undefined FUN_14dc066b1(void)

/* WARNING: Removing unreachable block (ram,0x000161dc82e2) */
/* WARNING: Removing unreachable block (ram,0x000161dc82e8) */
/* WARNING: Removing unreachable block (ram,0x000162510492) */
/* WARNING: Removing unreachable block (ram,0x000162510498) */
/* WARNING: Removing unreachable block (ram,0x000161dc824e) */
/* WARNING: Removing unreachable block (ram,0x000161dc82dd) */
/* WARNING: Removing unreachable block (ram,0x000162c08f1b) */
/* WARNING: Removing unreachable block (ram,0x0001625105d7) */
/* WARNING: Removing unreachable block (ram,0x0001625105dd) */
/* WARNING: Removing unreachable block (ram,0x0001625105e2) */
/* WARNING: Removing unreachable block (ram,0x000162510660) */
/* WARNING: Removing unreachable block (ram,0x00016251066b) */
/* WARNING: Removing unreachable block (ram,0x000162510666) */
/* WARNING: Removing unreachable block (ram,0x0001653faa55) */
/* WARNING: Removing unreachable block (ram,0x00014dc06737) */
/* WARNING: Removing unreachable block (ram,0x00014dc067ec) */
/* WARNING: Removing unreachable block (ram,0x00014dc067f2) */
/* WARNING: Removing unreachable block (ram,0x00014dc0687c) */
/* WARNING: Removing unreachable block (ram,0x00014dc06882) */
/* WARNING: Removing unreachable block (ram,0x00016531f892) */
/* WARNING: Removing unreachable block (ram,0x0001646c2c0d) */
/* WARNING: Removing unreachable block (ram,0x0001646c2c99) */
/* WARNING: Removing unreachable block (ram,0x00014e178f38) */
/* WARNING: Removing unreachable block (ram,0x00014e178fac) */
/* WARNING: Removing unreachable block (ram,0x00014e178fb8) */
/* WARNING: Removing unreachable block (ram,0x0001665d7a77) */
/* WARNING: Removing unreachable block (ram,0x0001658b7b6f) */
/* WARNING: Removing unreachable block (ram,0x0001658b7bff) */
/* WARNING: Removing unreachable block (ram,0x0001658b7c04) */
/* WARNING: Removing unreachable block (ram,0x00015716faf6) */
/* WARNING: Removing unreachable block (ram,0x0001658b7ad2) */
/* WARNING: Removing unreachable block (ram,0x000166d72632) */
/* WARNING: Removing unreachable block (ram,0x0001658b7b64) */
/* WARNING: Removing unreachable block (ram,0x0001658b7b6a) */
/* WARNING: Removing unreachable block (ram,0x0001658b7c0a) */

undefined8 FUN_14dc066b1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1611e2778();
  uVar1 = FUN_16551d9cb(param_1 + unaff_R15 + (param_1 & unaff_R15) * -2,
                        (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),FUN_16551d9cb,param_4);
  return uVar1;
}



// FUNCTION 14dc067f2 thunk_FUN_14dc067f8 body=5 status=ok
// SIG undefined thunk_FUN_14dc067f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc06882) */

void thunk_FUN_14dc067f8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1652edf18(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dc067f8 FUN_14dc067f8 body=465 status=ok
// SIG undefined FUN_14dc067f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc06882) */

void FUN_14dc067f8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1652edf18(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dc0693a FUN_14dc0693a body=141 status=ok
// SIG undefined FUN_14dc0693a(void)

void FUN_14dc0693a(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  (*(code *)0x1647d7813)
            (param_1,*(ulonglong *)(unaff_RDI + -0x80) | param_1,
             *(longlong *)(unaff_RDI + -0x70) + param_1 +
             ~(0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x70) | ~param_1) * -2,
             unaff_RBX - param_4);
  return;
}



// FUNCTION 14dc06c3c FUN_14dc06c3c body=162 status=ok
// SIG undefined FUN_14dc06c3c(void)

void FUN_14dc06c3c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(longlong *)(param_4 + 0x10) = param_1 + 1;
  FUN_1611f6b79(in_stack_00000008,param_2,in_stack_00000010,unaff_retaddr);
  return;
}



// FUNCTION 14dc06e2e FUN_14dc06e2e body=148 status=ok
// SIG undefined FUN_14dc06e2e(void)

void FUN_14dc06e2e(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = local_res18 ^ unaff_R15;
  local_res20 = local_res20 ^ unaff_R15;
  uVar1 = FUN_16215bfbc(uStackX_8);
  *(undefined8 *)(local_res20 - 8) = uVar1;
  *(undefined8 *)(local_res20 - 0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 - 0x18) = unaff_RDI;
  uVar1 = *(undefined8 *)(local_res20 - 8);
  *(undefined8 *)(local_res20 - 0x20) = unaff_R14;
  *(undefined8 *)(local_res20 - 0x10) = uVar1;
  *(undefined8 *)(local_res20 - 0x18) = unaff_RBP;
  *(ulonglong **)(local_res20 - 0x20) = &local_res18;
  *(undefined1 **)(local_res20 - 8) = &LAB_15707e6c4;
  (*(code *)0x15707e69a)();
  return;
}



// FUNCTION 14dc06ec2 FUN_14dc06ec2 body=116 status=ok
// SIG undefined FUN_14dc06ec2(void)

void FUN_14dc06ec2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined1 **)(local_res18 + -8) = &LAB_15707e6c4;
  (*(code *)0x15707e69a)();
  return;
}



// FUNCTION 14dc07082 FUN_14dc07082 body=431 status=ok
// SIG undefined FUN_14dc07082(void)

/* WARNING: Removing unreachable block (ram,0x00014dc07233) */
/* WARNING: Removing unreachable block (ram,0x00014dc07190) */
/* WARNING: Removing unreachable block (ram,0x00014dc0719c) */
/* WARNING: Removing unreachable block (ram,0x00014dc07228) */
/* WARNING: Removing unreachable block (ram,0x00014dc0722d) */
/* WARNING: Removing unreachable block (ram,0x000165100bcb) */
/* WARNING: Removing unreachable block (ram,0x000160ec7062) */
/* WARNING: Removing unreachable block (ram,0x000165100bd1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000164f6e966 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc07082(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint7 uVar1;
  uint7 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 uStackX_20;
  
  FUN_16284050a();
  uVar3 = FUN_15b57f837(in_stack_00000008,param_2,param_3);
  uStackX_20 = ~((0xffffffffffffffff - unaff_R15 | uStackX_20) &
                (uStackX_20 ^ 0xffffffffffffffff | unaff_R15)) & 0xffffffff;
  uVar2 = (uint7)(uVar3 >> 8);
  uVar1 = (uint7)(-(uStackX_20 - *(longlong *)(unaff_R12 + -0x58)) >> 8);
  uVar5 = CONCAT71(~((~uVar2 | uVar1) & ~(~(uVar1 ^ 0xffffffffffffff) & ~uVar2)),0xfe) ^ 0xff;
  uVar4 = FUN_161a99aed(uVar5,(*(ulonglong *)(unaff_R12 + -0x78) & uVar3) << ((byte)uVar5 & 0x3f));
  return uVar4;
}



// FUNCTION 14dc07233 FUN_14dc07233 body=47 status=ok
// SIG undefined FUN_14dc07233(void)

undefined8 FUN_14dc07233(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14dc072bb FUN_14dc072bb body=154 status=ok
// SIG undefined FUN_14dc072bb(void)

ulonglong FUN_14dc072bb(void)

{
  longlong unaff_RDI;
  
  return ~*(ulonglong *)(unaff_RDI + -0x60);
}



// FUNCTION 14dc07357 FUN_14dc07357 body=71 status=ok
// SIG undefined FUN_14dc07357(void)

void FUN_14dc07357(void)

{
  return;
}



// FUNCTION 14dc0746f FUN_14dc0746f body=534 status=ok
// SIG undefined FUN_14dc0746f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc07502) */
/* WARNING: Removing unreachable block (ram,0x00014dc07508) */
/* WARNING: Removing unreachable block (ram,0x00014dc0759b) */
/* WARNING: Removing unreachable block (ram,0x0001577ec569) */
/* WARNING: Removing unreachable block (ram,0x0001577ec5db) */
/* WARNING: Removing unreachable block (ram,0x0001577ec5e6) */
/* WARNING: Removing unreachable block (ram,0x0001577ec5e1) */
/* WARNING: Removing unreachable block (ram,0x000157010d57) */

void FUN_14dc0746f(void)

{
  FUN_1577ec569();
  return;
}



// FUNCTION 14dc077fb FUN_14dc077fb body=293 status=ok
// SIG undefined FUN_14dc077fb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc07899) */
/* WARNING: Removing unreachable block (ram,0x00014dc0789f) */
/* WARNING: Removing unreachable block (ram,0x000160f59c27) */
/* WARNING: Removing unreachable block (ram,0x00014dc079c3) */
/* WARNING: Removing unreachable block (ram,0x00014dc079c9) */

undefined8 FUN_14dc077fb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc07923 FUN_14dc07923 body=489 status=ok
// SIG undefined FUN_14dc07923(void)

/* WARNING: Removing unreachable block (ram,0x00014dc079c3) */
/* WARNING: Removing unreachable block (ram,0x00014dc079c9) */

undefined * FUN_14dc07923(void)

{
  return &DAT_166b58854;
}



// FUNCTION 14dc07b9c FUN_14dc07b9c body=26 status=ok
// SIG undefined FUN_14dc07b9c(void)

void FUN_14dc07b9c(void)

{
  return;
}



// FUNCTION 14dc07c51 FUN_14dc07c51 body=153 status=ok
// SIG undefined FUN_14dc07c51(void)

void FUN_14dc07c51(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x16170381c)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc07d87 FUN_14dc07d87 body=114 status=ok
// SIG undefined FUN_14dc07d87(void)

void FUN_14dc07d87(void)

{
  return;
}



// FUNCTION 14dc07e1a FUN_14dc07e1a body=144 status=ok
// SIG undefined FUN_14dc07e1a(void)

void FUN_14dc07e1a(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15;
  FUN_166982621(uVar1,-1 - uVar1);
  return;
}



// FUNCTION 14dc07eab FUN_14dc07eab body=169 status=ok
// SIG undefined FUN_14dc07eab(void)

void FUN_14dc07eab(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong alStack_10 [2];
  
  *(undefined8 *)(&stack0x00000010 + in_RAX) = 0x70ea004a;
  *(undefined8 *)((longlong)&stack0x00000008 + in_RAX) = param_3;
  *(undefined8 *)(&stack0x00000000 + in_RAX) = in_R11;
  puVar1 = (ulonglong *)(&stack0x00000010 + in_RAX);
  uVar2 = *puVar1;
  *(ulonglong *)((longlong)alStack_10 + in_RAX + 8) = ~unaff_RBP + 1;
  *(longlong *)((longlong)alStack_10 + in_RAX) = in_RAX;
  *puVar1 = *puVar1 & 0x4ee23c63 | 0xffffffffb11dc39c;
  *(undefined8 *)((longlong)alStack_10 + in_RAX + 8) = local_res8;
  *(undefined8 *)((longlong)alStack_10 + in_RAX) = 0x14dc07f34;
  FUN_156abc083(param_1,param_2,
                (*puVar1 - (~(uVar2 & 0xffffffffb11dc39c) | *puVar1)) +
                ~(uVar2 & 0xffffffffb11dc39c));
  *(undefined8 *)(&stack0x00000000 + in_RAX) = unaff_RBX;
  *(undefined8 *)((longlong)alStack_10 + in_RAX + 8) = unaff_RBX;
  *(undefined **)(&stack0x00000000 + in_RAX) = &DAT_14d7c043f;
  return;
}



// FUNCTION 14dc07fc6 FUN_14dc07fc6 body=211 status=ok
// SIG undefined FUN_14dc07fc6(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0804c) */

void FUN_14dc07fc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_R13;
  ushort *unaff_R15;
  longlong unaff_retaddr;
  longlong local_res20;
  
  *unaff_R15 = ~*unaff_R15;
  uVar2 = *unaff_R15;
  *unaff_R15 = *unaff_R15 ^ 0xffff;
  *unaff_R15 = (~(uVar2 & 0x100) + 0x100) - *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *plVar1 = *plVar1 + unaff_retaddr;
  *(longlong *)(local_res20 + -0x10) = *plVar1;
  *plVar1 = (longlong)&DAT_166cc2b03;
                    /* WARNING: Could not recover jumptable at 0x000166cc2ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(local_res20 + -0x10),param_2,param_3);
  return;
}



// FUNCTION 14dc08076 FUN_14dc08076 body=159 status=ok
// SIG undefined FUN_14dc08076(void)

void FUN_14dc08076(void)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R12;
  undefined8 local_res8;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ in_R10;
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(undefined8 *)(uVar1 - 0x28) = local_res8;
  *(undefined8 *)(uVar1 - 0x30) = local_res8;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dc08116;
  *(undefined **)(uVar1 - 0x28) = &DAT_160f3f211;
  return;
}



// FUNCTION 14dc082d3 FUN_14dc082d3 body=30 status=ok
// SIG undefined FUN_14dc082d3(void)

void FUN_14dc082d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R15;
  ulonglong uStackX_20;
  
  FUN_156f59b6b(~uStackX_20 & 0xffffffffffffffffU - unaff_R15 | uStackX_20,param_2,param_3,
                FUN_156f59b6b);
  return;
}



// FUNCTION 14dc08356 FUN_14dc08356 body=127 status=ok
// SIG undefined FUN_14dc08356(void)

void FUN_14dc08356(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_15b8d0c90)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dc083d5 FUN_14dc083d5 body=136 status=ok
// SIG undefined FUN_14dc083d5(void)

void FUN_14dc083d5(void)

{
  undefined8 local_res18;
  
  FUN_161a53231(local_res18,FUN_161a53231);
  return;
}



// FUNCTION 14dc0890e FUN_14dc0890e body=149 status=ok
// SIG undefined FUN_14dc0890e(void)

void FUN_14dc0890e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *(longlong *)(unaff_RDI + 0x10) = param_4 + -1;
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  FUN_1658fe008(&LAB_1658fe081,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14dc08a69 FUN_14dc08a69 body=119 status=ok
// SIG undefined FUN_14dc08a69(void)

void FUN_14dc08a69(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_16275a3f4(param_1,param_2,**(undefined8 **)(param_3 + 0x20));
  return;
}



// FUNCTION 14dc08ae2 FUN_14dc08ae2 body=537 status=ok
// SIG undefined FUN_14dc08ae2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc08bca) */
/* WARNING: Removing unreachable block (ram,0x00014dc08b5a) */
/* WARNING: Removing unreachable block (ram,0x00014dc08b65) */
/* WARNING: Removing unreachable block (ram,0x00014dc08bcd) */
/* WARNING: Removing unreachable block (ram,0x00014dc08b60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc08ae2(void)

{
  FUN_161dc584f(FUN_161dc584f);
  return;
}



// FUNCTION 14dc08d11 FUN_14dc08d11 body=168 status=ok
// SIG undefined FUN_14dc08d11(void)

void FUN_14dc08d11(void)

{
  longlong unaff_R12;
  undefined8 local_res8;
  
  FUN_162988bef(*(ulonglong *)(unaff_R12 + -0x60) | local_res8);
  return;
}



// FUNCTION 14dc0904a FUN_14dc0904a body=31 status=ok
// SIG undefined FUN_14dc0904a(void)

void FUN_14dc0904a(void)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr);
  *uStackX_10 = 0x2ec60fc;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc090f7 FUN_14dc090f7 body=22 status=ok
// SIG undefined FUN_14dc090f7(void)

void FUN_14dc090f7(void)

{
  return;
}



// FUNCTION 14dc091a9 FUN_14dc091a9 body=11 status=ok
// SIG undefined FUN_14dc091a9(void)

void FUN_14dc091a9(void)

{
  return;
}



// FUNCTION 14dc0924b FUN_14dc0924b body=295 status=ok
// SIG undefined FUN_14dc0924b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc67cab) */
/* WARNING: Removing unreachable block (ram,0x00014dc09367) */

void FUN_14dc0924b(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  ulonglong in_stack_00000028;
  
  FUN_14e041419();
  FUN_1667bc70a();
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  uVar2 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | 0x30af5247;
  uVar3 = *(ulonglong *)(unaff_R12 + 8);
  *(undefined8 *)(unaff_R12 + 8) = 0;
  *(longlong *)(unaff_R12 + 8) =
       *(longlong *)(unaff_R12 + 8) - (~(~uVar1 & 0xffffffffcf50adb8 | uVar2) | ~uVar3);
  *(longlong *)(unaff_R12 + 8) = -*(longlong *)(unaff_R12 + 8);
  FUN_162c3b15c(in_stack_00000028 | 0x30af5247);
  return;
}



// FUNCTION 14dc09419 FUN_14dc09419 body=140 status=ok
// SIG undefined FUN_14dc09419(void)

void FUN_14dc09419(void)

{
  return;
}



// FUNCTION 14dc094ab FUN_14dc094ab body=29 status=ok
// SIG undefined FUN_14dc094ab(void)

void FUN_14dc094ab(void)

{
  FUN_16133aa9b();
  return;
}



// FUNCTION 14dc09540 FUN_14dc09540 body=212 status=ok
// SIG undefined FUN_14dc09540(void)

/* WARNING: Removing unreachable block (ram,0x00014dc095e1) */
/* WARNING: Removing unreachable block (ram,0x000156ad8569) */

void FUN_14dc09540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  
  FUN_1666cd6e4(param_1,*(ulonglong *)(unaff_R12 + (unaff_RBP ^ 0x6bd289bc)) ^ in_RAX,param_3,
                ~in_RAX | *(ulonglong *)(unaff_R12 + -0xa0));
  FUN_14d7a77e3();
  return;
}



// FUNCTION 14dc09665 FUN_14dc09665 body=144 status=ok
// SIG undefined FUN_14dc09665(void)

/* WARNING: Removing unreachable block (ram,0x00014dc096f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc09665(undefined1 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
    FUN_160dfafc2(param_1,param_2);
    return;
  }
  FUN_14e1e4edc();
  return;
}



// FUNCTION 14dc096f7 FUN_14dc096f7 body=50 status=ok
// SIG undefined FUN_14dc096f7(void)

void FUN_14dc096f7(void)

{
  return;
}



// FUNCTION 14dc0977d FUN_14dc0977d body=791 status=ok
// SIG undefined FUN_14dc0977d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc098c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc079c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc09969) */
/* WARNING: Removing unreachable block (ram,0x00014dc097d3) */
/* WARNING: Removing unreachable block (ram,0x00014dc098be) */
/* WARNING: Removing unreachable block (ram,0x00014dc097fe) */

undefined8 FUN_14dc0977d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x48) == 0) {
    uVar1 = FUN_14d963305();
    return uVar1;
  }
  uVar1 = FUN_161ba70b9(param_1);
  return uVar1;
}



// FUNCTION 14dc09980 FUN_14dc09980 body=159 status=ok
// SIG undefined FUN_14dc09980(void)

void FUN_14dc09980(ulonglong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x14d882c18)
            ((char)param_1,0x14d882c18,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             param_4 - param_3 ^ param_1);
  return;
}



// FUNCTION 14dc09c85 FUN_14dc09c85 body=281 status=ok
// SIG undefined FUN_14dc09c85(void)

void FUN_14dc09c85(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_165227626(FUN_165227626,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dc09f82 FUN_14dc09f82 body=440 status=ok
// SIG undefined FUN_14dc09f82(void)

void FUN_14dc09f82(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  short *psVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  longlong unaff_RBP;
  short unaff_SI;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong lVar6;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  ulonglong auStackX_18 [2];
  
  lVar6 = unaff_R12 - unaff_RBP;
  *(undefined8 *)((longlong)auStackX_18 + lVar6 + -8) = *(undefined8 *)(unaff_RDI + -0xa0);
  uVar3 = *(ulonglong *)((longlong)auStackX_18 + lVar6 + -8);
  puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar6);
  *puVar1 = 0;
  *puVar1 = *puVar1 - param_3;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 1;
  *(undefined8 *)((longlong)auStackX_18 + lVar6 + -8) = unaff_retaddr;
  *(ulonglong *)((longlong)&uStackX_8 + lVar6) = ~param_1 | uVar3;
  uVar5 = *(undefined8 *)((longlong)&uStackX_8 + lVar6);
  *(undefined8 *)((longlong)&uStackX_8 + lVar6) = 0x14dc0a011;
  uVar4 = FUN_1575b44a2(param_1,param_2,uVar5);
  psVar2 = (short *)((longlong)&uStackX_8 + lVar6 + 6);
  *psVar2 = 0;
  *psVar2 = *psVar2 + unaff_SI;
  *(undefined2 *)((longlong)&uStackX_8 + lVar6 + 4) = uVar4;
  *(undefined8 *)((longlong)&uStackX_8 + lVar6) = 0x14dc0a0a4;
  uVar5 = FUN_1668c3daa();
  *(undefined8 *)((longlong)auStackX_18 + lVar6 + -8) = uVar5;
  *(undefined4 *)((longlong)auStackX_18 + lVar6 + -8) = 0;
  *(undefined4 *)((longlong)auStackX_18 + lVar6 + -4) = 0;
  FUN_161c97c51();
  return;
}



// FUNCTION 14dc0a3aa FUN_14dc0a3aa body=138 status=ok
// SIG undefined FUN_14dc0a3aa(void)

void FUN_14dc0a3aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_1668e50e0(unaff_retaddr,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dc0a435 FUN_14dc0a435 body=335 status=ok
// SIG undefined FUN_14dc0a435(void)

/* WARNING: Removing unreachable block (ram,0x000161270f1b) */
/* WARNING: Removing unreachable block (ram,0x000161270f21) */
/* WARNING: Removing unreachable block (ram,0x000156af6ddb) */
/* WARNING: Removing unreachable block (ram,0x00014dc0a4da) */
/* WARNING: Removing unreachable block (ram,0x00014dc0a53a) */
/* WARNING: Removing unreachable block (ram,0x00014dc0a52a) */
/* WARNING: Removing unreachable block (ram,0x00016216ab0d) */

void FUN_14dc0a435(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  short sVar13;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  ulonglong uStackX_20;
  
  uVar3 = *(ulonglong *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = -*(longlong *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -1;
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | param_1;
  uVar4 = *(ulonglong *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) ^ ~((~param_1 | uVar3) & uVar4);
  if ((longlong)param_1 < 0) {
    uVar3 = 0xffffffffffffffff - (uStackX_20 & param_1) & (uStackX_20 | param_1);
    *(undefined8 *)(uVar3 - 8) = uStackX_10;
    pcVar12 = FUN_162eedc61;
    *(undefined8 *)(uVar3 - 0x10) = 0x16216aa6c;
    uVar11 = FUN_162eedc61(FUN_162eedc61,unaff_retaddr);
    *(undefined8 *)(uVar3 - 0x10) = unaff_RSI;
    *(ulonglong *)(uVar3 - 0x18) = uVar11;
    *(undefined4 *)(uVar3 - 0x18) = 0xf4a50a5e;
    *(undefined4 *)(uVar3 - 0x14) = 0xffffffff;
    uVar4 = *(ulonglong *)(unaff_R12 + *(longlong *)(uVar3 - 0x18) + 0xb5af512);
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(unaff_R12 + -0x68);
    *(undefined8 *)(uVar3 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar3 - 0x20) = unaff_RBX;
    uVar5 = *(undefined8 *)(unaff_R12 + -8);
    *(undefined8 *)(uVar3 - 0x28) = unaff_R14;
    plVar1 = (longlong *)(uVar3 - 0x30);
    *(undefined4 *)plVar1 = 0xdefcbe6a;
    *(undefined4 *)(uVar3 - 0x2c) = 0xffffffff;
    lVar7 = *plVar1;
    *plVar1 = unaff_R12;
    lVar8 = *plVar1;
    *(undefined8 *)((longlong)plVar1 + lVar7 + 0x210341ae) = uVar5;
    uVar5 = *(undefined8 *)(uVar3 - 0x28);
    uVar9 = *(undefined8 *)(uVar3 - 0x20);
    *(undefined8 *)(uVar3 - 0x20) = uVar5;
    *(undefined8 *)(uVar3 - 0x28) = uVar5;
    *(undefined8 *)(uVar3 - 0x30) = unaff_R13;
    *(ulonglong *)(uVar3 - 0x38) = uVar11;
    *(undefined4 *)(uVar3 - 0x38) = 0x48db3354;
    *(int *)(uVar3 - 0x38) = *(int *)(uVar3 - 0x38) + 0x3d9a2ea3;
    *(int *)(uVar3 - 0x38) = *(int *)(uVar3 - 0x38) + 0x667e57c4;
    *(undefined4 *)(uVar3 - 0x34) = 0xffffffff;
    uVar5 = *(undefined8 *)(uVar3 - 0x30);
    *(undefined8 *)(uVar3 - 0x20) =
         *(undefined8 *)(lVar8 + *(longlong *)(uVar3 - 0x38) + 0x130c45ad);
    *(code **)(uVar3 - 0x28) = pcVar12;
    *(ulonglong *)(uVar3 - 0x30) = uVar4 ^ uVar11;
    *(undefined8 *)(uVar3 - 0x38) = in_R11;
    uVar6 = *(undefined8 *)(uVar3 - 0x30);
    uVar4 = *(ulonglong *)(lVar8 + -0xa0);
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    *(undefined8 *)(uVar3 - 0x28) = param_3;
    sVar13 = (short)*(undefined8 *)(uVar3 - 0x28);
    *(ulonglong *)(uVar3 - 0x20) = *(ulonglong *)(uVar3 - 0x20) ^ uVar11;
    *(ulonglong *)(uVar3 - 0x28) = ~(uVar4 & uVar11) & (uVar4 | uVar11);
    *(undefined8 *)(uVar3 - 0x30) = local_res8;
    *(undefined8 *)(uVar3 - 0x38) = 0x161270e97;
    uVar10 = FUN_15731ab5f(uVar10);
    *(short *)(uVar3 - 0x32) = (short)uVar6;
    *(undefined8 *)(uVar3 - 0x3a) = uVar9;
    sVar2 = *(short *)(uVar3 - 0x32);
    *(undefined8 *)(uVar3 - 0x42) = uVar10;
    *(short *)(uVar3 - 0x32) = sVar2 - sVar13;
    *(undefined8 *)(uVar3 - 0x38) = uVar5;
    *(undefined8 *)(uVar3 - 0x40) = DAT_15731ab17;
    FUN_156af6ddb();
    return;
  }
  FUN_16216a9e0();
  return;
}



// FUNCTION 14dc0a5f1 FUN_14dc0a5f1 body=157 status=ok
// SIG undefined FUN_14dc0a5f1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0b189) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b1d5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0a67a) */

void FUN_14dc0a5f1(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ushort *puVar8;
  undefined8 in_R11;
  undefined8 unaff_R12;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  ulonglong local_res18;
  ulonglong uStackX_20;
  
  uVar7 = local_res18 + in_RAX + (local_res18 & in_RAX) * -2;
  puVar2 = (undefined8 *)(uStackX_20 ^ in_RAX);
  bVar17 = (uVar7 & 0x4000) != 0;
  bVar16 = (uVar7 & 0x800) != 0;
  bVar15 = (uVar7 & 0x200) != 0;
  bVar14 = 0;
  bVar13 = (uVar7 & 0x80) != 0;
  bVar12 = (uVar7 & 0x40) != 0;
  bVar11 = (uVar7 & 0x10) != 0;
  bVar10 = (uVar7 & 4) != 0;
  bVar9 = (uVar7 & 1) != 0;
  bVar21 = (uVar7 & 0x200000) != 0;
  bVar18 = (uVar7 & 0x40000) != 0;
  bVar20 = 0;
  bVar19 = 0;
  pcVar4 = (code *)swi(0x2e);
  (*pcVar4)();
  *puVar2 = unaff_R12;
  puVar2[-1] = unaff_R12;
  puVar2[-2] = (ulonglong)(bVar17 & 1) * 0x4000 | (ulonglong)(bVar16 & 1) * 0x800 |
               (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
               (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
               (ulonglong)(bVar12 & 1) * 0x40 | (ulonglong)(bVar11 & 1) * 0x10 |
               (ulonglong)(bVar10 & 1) * 4 | (ulonglong)(bVar9 & 1) |
               (ulonglong)(bVar21 & 1) * 0x200000 | (ulonglong)(bVar20 & 1) * 0x100000 |
               (ulonglong)(bVar19 & 1) * 0x80000 | (ulonglong)(bVar18 & 1) * 0x40000;
  puVar2[-3] = 0x14dd0b0e7;
  uVar7 = FUN_162a91169();
  uVar5 = puVar2[-2];
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) ^ uVar7;
  lVar6 = puVar2[-1];
  puVar2[-1] = uVar5;
  *(ulonglong *)(param_4 + 0x10) = ~*(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) & ~unaff_RBX;
  *(ulonglong *)(param_4 + 0x10) = ~*(ulonglong *)(param_4 + 0x10);
  uVar5 = puVar2[-1];
  uVar7 = *(ulonglong *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(ulonglong *)(param_4 + 0x10) =
       *(ulonglong *)(param_4 + 0x10) ^ unaff_RDI & uVar7 ^ 0xffffffffffffffff;
  puVar2[2] = param_2;
  puVar2[1] = *puVar2;
  *puVar2 = in_R11;
  puVar8 = (ushort *)(puVar2 + 3);
  *puVar8 = (-0x101 - (*puVar8 | 0xfeff)) + *puVar8;
  lVar3 = puVar2[4];
  plVar1 = (longlong *)(lVar3 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar6;
  *(longlong *)(lVar3 + -0x10) = *plVar1;
  *(undefined8 *)(lVar3 + -0x18) = uVar5;
  *(undefined8 **)(lVar3 + -0x20) = (undefined8 *)(lVar3 + -0x18);
  *(undefined1 **)(*(longlong *)(lVar3 + -0x20) + 0x10) = &LAB_161e4968e;
                    /* WARNING: Could not recover jumptable at 0x000161e49678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + -0x10))();
  return;
}



// FUNCTION 14dc0a746 FUN_14dc0a746 body=102 status=ok
// SIG undefined FUN_14dc0a746(void)

void FUN_14dc0a746(void)

{
  FUN_15b45aa33();
  FUN_166a42dce();
  FUN_14de584f2();
  FUN_15b752fb8();
  return;
}



// FUNCTION 14dc0a7ac FUN_14dc0a7ac body=324 status=ok
// SIG undefined FUN_14dc0a7ac(void)

void FUN_14dc0a7ac(void)

{
  FUN_166a42dce();
  FUN_14de584f2();
  FUN_15b752fb8();
  return;
}



// FUNCTION 14dc0a95e FUN_14dc0a95e body=79 status=ok
// SIG undefined FUN_14dc0a95e(void)

void FUN_14dc0a95e(void)

{
  ulonglong in_R9;
  
  *(undefined4 *)
   (&stack0x00000000 + ~(~(in_R9 & 0xffffffff91670130) & (in_R9 | 0xffffffff91670130))) = 0xffffffff
  ;
  return;
}



// FUNCTION 14dc0aaa8 FUN_14dc0aaa8 body=144 status=ok
// SIG undefined FUN_14dc0aaa8(void)

void FUN_14dc0aaa8(longlong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_160c85a1f)
            (-param_1 + unaff_R15 + (-param_1 & unaff_R15) * -2,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dc0ab3a FUN_14dc0ab3a body=344 status=ok
// SIG undefined FUN_14dc0ab3a(void)

/* WARNING: Removing unreachable block (ram,0x00016158e978) */
/* WARNING: Removing unreachable block (ram,0x00014dc0abde) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ac3a) */

void FUN_14dc0ab3a(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) ^ param_1;
  if (-1 < (longlong)uVar1) {
    FUN_166abe22b((char)param_1,*(ulonglong *)(unaff_RDI + -0x80) | param_1,uVar1,
                  *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
    return;
  }
  FUN_16158e96e();
  return;
}



// FUNCTION 14dc0af4d FUN_14dc0af4d body=133 status=ok
// SIG undefined FUN_14dc0af4d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0afce) */
/* WARNING: Removing unreachable block (ram,0x00014dc0afd4) */
/* WARNING: Removing unreachable block (ram,0x00014dc0aff5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b00e) */
/* WARNING: Removing unreachable block (ram,0x000161c14139) */
/* WARNING: Removing unreachable block (ram,0x00014e176d24) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a9) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca29) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca2f) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca57) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca4d) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca5f) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa3) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa9) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb5d) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb58) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb9b) */
/* WARNING: Removing unreachable block (ram,0x000156c0cbae) */
/* WARNING: Removing unreachable block (ram,0x000156eda328) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b059) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b064) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0da) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0e5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b198) */
/* WARNING: Removing unreachable block (ram,0x000156c0c927) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a1) */
/* WARNING: Removing unreachable block (ram,0x00016288fd10) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb4) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb9) */
/* WARNING: Removing unreachable block (ram,0x00016288fdbf) */
/* WARNING: Removing unreachable block (ram,0x00016246b384) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd88fa2) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b05f) */
/* WARNING: Removing unreachable block (ram,0x000161c870f1) */

void FUN_14dc0af4d(void)

{
  FUN_161c870f1();
  return;
}



// FUNCTION 14dc0afd4 FUN_14dc0afd4 body=274 status=ok
// SIG undefined FUN_14dc0afd4(void)

/* WARNING: Removing unreachable block (ram,0x00014e176d24) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a9) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b059) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b064) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0da) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0e5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b198) */
/* WARNING: Removing unreachable block (ram,0x000156c0c927) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a1) */
/* WARNING: Removing unreachable block (ram,0x00016288fd10) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb4) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb9) */
/* WARNING: Removing unreachable block (ram,0x00016288fdbf) */
/* WARNING: Removing unreachable block (ram,0x00016246b384) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a7) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca29) */
/* WARNING: Removing unreachable block (ram,0x00014dd88fa2) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca2f) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca57) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca4d) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca5f) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa3) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa9) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb5d) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb58) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb9b) */
/* WARNING: Removing unreachable block (ram,0x000156c0cbae) */
/* WARNING: Removing unreachable block (ram,0x000156eda328) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b05f) */

void FUN_14dc0afd4(void)

{
  FUN_156510278();
  return;
}



// FUNCTION 14dc0b0eb FUN_14dc0b0eb body=262 status=ok
// SIG undefined FUN_14dc0b0eb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0b1a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a9) */
/* WARNING: Removing unreachable block (ram,0x00014e176d24) */

void FUN_14dc0b0eb(void)

{
  FUN_14e176d24();
  return;
}



// FUNCTION 14dc0b2f2 FUN_14dc0b2f2 body=153 status=ok
// SIG undefined FUN_14dc0b2f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016270178d) */
/* WARNING: Removing unreachable block (ram,0x000162701793) */
/* WARNING: Removing unreachable block (ram,0x00016105a83d) */
/* WARNING: Removing unreachable block (ram,0x00016105a8dc) */
/* WARNING: Removing unreachable block (ram,0x00014e0ff5a1) */
/* WARNING: Removing unreachable block (ram,0x00016105a8e2) */
/* WARNING: Removing unreachable block (ram,0x00016105a991) */
/* WARNING: Removing unreachable block (ram,0x00016105a997) */
/* WARNING: Removing unreachable block (ram,0x0001567387a7) */
/* WARNING: Removing unreachable block (ram,0x0001667cad61) */
/* WARNING: Removing unreachable block (ram,0x0001667cad67) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b385) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b38b) */
/* WARNING: Removing unreachable block (ram,0x000157438900) */
/* WARNING: Removing unreachable block (ram,0x00014e21cac5) */
/* WARNING: Removing unreachable block (ram,0x00014e21cb23) */
/* WARNING: Removing unreachable block (ram,0x00014e21cb30) */
/* WARNING: Removing unreachable block (ram,0x0001627016e6) */

void FUN_14dc0b2f2(uint param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar7;
  
  uVar3 = (ushort)*(undefined8 *)(unaff_R13 + -0x28);
  puVar6 = (undefined1 *)
           ((~*(ulonglong *)(unaff_R13 + -0x30) | ~unaff_R15) &
           (*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15));
  uVar2 = *(ulonglong *)(unaff_R13 + -8);
  uVar4 = (~unaff_R15 | uVar2) ^ 0xffffffffffffffff |
          ~((~uVar2 + unaff_R15) - ~(uVar2 | ~unaff_R15));
  uVar2 = (~*(ulonglong *)(unaff_R13 + -0x70) | ~unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x70) | unaff_R15);
  bVar7 = (uVar4 & 0x400) != 0;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = param_3;
  *(undefined **)(uVar2 - 8) = &DAT_15b8d7e15;
  uVar5 = (ulonglong)(((int)uVar2 + param_1) - 7);
  *(undefined8 *)(uVar5 - 8) = 0x2c;
  param_1 = param_1 | (uint)unaff_RBX;
  *(ulonglong *)(uVar5 - 0x10) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x400 |
       (ulonglong)((uVar4 & 0x200) != 0) * 0x200 | (ulonglong)((int)param_1 < 0) * 0x80 |
       (ulonglong)(param_1 == 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(param_1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  out(*puVar6,~(uVar3 & (ushort)unaff_R15) & (uVar3 | (ushort)unaff_R15));
  *(uint *)(unaff_RBX + 0x13) = (uint)unaff_RBX;
  pcVar1 = puVar6 + (ulonglong)bVar7 * -2 + 0x29;
  *pcVar1 = *pcVar1 + (char)param_1;
  *(byte *)(unaff_RBX + 0x53) = *(byte *)(unaff_RBX + 0x53) & (byte)(param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc0b38b FUN_14dc0b38b body=156 status=ok
// SIG undefined FUN_14dc0b38b(void)

void FUN_14dc0b38b(void)

{
  ulonglong unaff_RBX;
  undefined8 local_res8;
  
  (*(code *)0x156b7abc7)
            (local_res8,0x798c482a,*(undefined8 *)(local_res8 + -0x88),
             *(ulonglong *)(local_res8 + -0x58) ^ unaff_RBX);
  return;
}



// FUNCTION 14dc0b4ae FUN_14dc0b4ae body=156 status=ok
// SIG undefined FUN_14dc0b4ae(void)

/* WARNING: Removing unreachable block (ram,0x0001659d4ea8) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b544) */

void FUN_14dc0b4ae(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  uint local_res18;
  longlong lVar2;
  
  bVar1 = (byte)param_1 & 0x3f;
  if (CARRY4((uint)(in_RAX >> bVar1) | (uint)(in_RAX << 0x41 - bVar1) | (uint)(0L << 0x40 - bVar1),
             local_res18)) {
    FUN_1659d4e0b();
    return;
  }
  lVar2 = CONCAT44((int)(-(*(ulonglong *)(unaff_RDI + -0x98) | param_1) >> 0x20),0x4ec9a8a);
  if (lVar2 != 0x4ec9a82) {
    *(ulonglong *)(&stack0xfffffffffb13658e + lVar2) =
         *(ulonglong *)(&stack0xfffffffffb13658e + lVar2) ^ 0xffffffffffffffff;
    *(ulonglong *)(&stack0xfffffffffb13658e + lVar2) =
         *(ulonglong *)(&stack0xfffffffffb13658e + lVar2) | param_1;
    FUN_165627732(0x10,param_2,0x679f7ef4,param_4);
    return;
  }
  FUN_162191cf6();
  return;
}



// FUNCTION 14dc0b5ed FUN_14dc0b5ed body=106 status=ok
// SIG undefined FUN_14dc0b5ed(void)

undefined8 FUN_14dc0b5ed(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc0b9e3 FUN_14dc0b9e3 body=155 status=ok
// SIG undefined FUN_14dc0b9e3(void)

void FUN_14dc0b9e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1628b8d95(in_stack_00000008,param_2,param_3);
  return;
}



// FUNCTION 14dc0bb1a FUN_14dc0bb1a body=443 status=ok
// SIG undefined FUN_14dc0bb1a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0bbbb) */
/* WARNING: Removing unreachable block (ram,0x000161762bcf) */
/* WARNING: Removing unreachable block (ram,0x000161762c55) */
/* WARNING: Removing unreachable block (ram,0x000161762c5b) */
/* WARNING: Removing unreachable block (ram,0x000165fc2440) */

undefined8 FUN_14dc0bb1a(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -0x50) == 0) {
    uVar1 = FUN_14dc884e4();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc0beae FUN_14dc0beae body=136 status=ok
// SIG undefined FUN_14dc0beae(void)

void FUN_14dc0beae(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15b8bb5ad(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dc0bfda FUN_14dc0bfda body=147 status=ok
// SIG undefined FUN_14dc0bfda(void)

void FUN_14dc0bfda(void)

{
  FUN_160b7c9d2();
  return;
}



// FUNCTION 14dc0c06e FUN_14dc0c06e body=147 status=ok
// SIG undefined FUN_14dc0c06e(void)

undefined8 FUN_14dc0c06e(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14dc0c102 FUN_14dc0c102 body=160 status=ok
// SIG undefined FUN_14dc0c102(void)

undefined8 FUN_14dc0c102(ulonglong param_1)

{
  undefined8 in_RAX;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + (param_1 ^ unaff_retaddr ^ 0x7ad884b5)) =
       in_stack_00000008;
  return in_RAX;
}



// FUNCTION 14dc0c237 FUN_14dc0c237 body=461 status=ok
// SIG undefined FUN_14dc0c237(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0c2d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc0c237(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161e0c7dc(param_1,FUN_161e0c7dc,0xffffffffffffffc8,
                ~*(ulonglong *)(unaff_RDI + -0x60) | param_1);
  return;
}



// FUNCTION 14dc0c406 FUN_14dc0c406 body=122 status=ok
// SIG undefined FUN_14dc0c406(void)

void FUN_14dc0c406(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  (*(code *)0x1648a19a0)
            (*(ulonglong *)(in_R11 + -0x28) ^ in_R10,
             *(ulonglong *)(in_R11 + -0x80) + in_R10 +
             (*(ulonglong *)(in_R11 + -0x80) & in_R10) * -2);
  return;
}



// FUNCTION 14dc0c51f FUN_14dc0c51f body=123 status=ok
// SIG undefined FUN_14dc0c51f(void)

/* WARNING: Removing unreachable block (ram,0x00016501adfb) */
/* WARNING: Removing unreachable block (ram,0x00016501ae11) */
/* WARNING: Removing unreachable block (ram,0x00016501ae22) */
/* WARNING: Removing unreachable block (ram,0x00014dc0c594) */
/* WARNING: Removing unreachable block (ram,0x00014dc0c59a) */

void FUN_14dc0c51f(undefined8 param_1,int param_2)

{
  uint unaff_EBP;
  uint in_stack_00000008;
  
  FUN_160db9f13(param_1,param_2 + (unaff_EBP ^
                                  ~(~(in_stack_00000008 & 0x8816dd47) &
                                   (in_stack_00000008 | 0x8816dd47))));
  return;
}



// FUNCTION 14dc0c59a FUN_14dc0c59a body=155 status=ok
// SIG undefined FUN_14dc0c59a(void)

void FUN_14dc0c59a(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R15;
  undefined8 in_stack_00000018;
  
  uVar1 = *(ulonglong *)(unaff_R15 + 0x10);
  *(undefined8 *)(unaff_R15 + 0x10) = 0;
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) ^ ~(param_3 & uVar1);
  FUN_14d891c64(param_1,param_2,in_stack_00000018,param_4);
  return;
}



// FUNCTION 14dc0c784 FUN_14dc0c784 body=180 status=ok
// SIG undefined FUN_14dc0c784(void)

void FUN_14dc0c784(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RSI;
  
  FUN_162576800(param_1,&stack0x00000000,~param_3 & unaff_RSI);
  return;
}



// FUNCTION 14dc0c8c3 FUN_14dc0c8c3 body=486 status=ok
// SIG undefined FUN_14dc0c8c3(void)

void FUN_14dc0c8c3(undefined8 param_1)

{
  FUN_1664a6fd9(param_1);
  FUN_161bb19ae();
  FUN_166cd950b();
  return;
}



// FUNCTION 14dc0cbce FUN_14dc0cbce body=128 status=ok
// SIG undefined FUN_14dc0cbce(void)

void FUN_14dc0cbce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_15b642ca5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc0cd1b FUN_14dc0cd1b body=153 status=ok
// SIG undefined FUN_14dc0cd1b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0cdb7) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce3d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce52) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce57) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce62) */
/* WARNING: Removing unreachable block (ram,0x00015b8703ce) */
/* WARNING: Removing unreachable block (ram,0x0001576154d8) */
/* WARNING: Removing unreachable block (ram,0x00015b8704cc) */
/* WARNING: Removing unreachable block (ram,0x00015b8704d2) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cd57) */

undefined8 FUN_14dc0cd1b(void)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar6 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  if (unaff_R15 != 0) {
    uVar4 = FUN_162083e6e();
    return uVar4;
  }
  FUN_1651e384c(uVar6,~(0xffffffffffffffffU - *(longlong *)(unaff_R13 + -0x28)));
  puVar1 = (undefined8 *)(&stack0xfffffffff5648da0 + unaff_retaddr);
  puVar1[-1] = uVar6;
  uVar6 = *(ulonglong *)(unaff_R13 + -0x48);
  lVar7 = -8;
  puVar2 = puVar1 + -1;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0x9142dafd;
  *(int *)((longlong)puVar1 + -4) = *(int *)((longlong)puVar1 + -4) + 0x6ebd2503;
  uVar5 = *puVar2;
  *puVar2 = 0x162083f8b;
  uVar5 = FUN_14dce8917(uVar5 ^ uVar6);
  uVar4 = *puVar1;
  *(undefined8 *)((longlong)puVar1 + lVar7 + 0x10) = 0;
  puVar2 = (ulonglong *)((longlong)puVar1 + lVar7 + 0x10);
  *puVar2 = *puVar2 ^ unaff_R12;
  uVar3 = puVar1[1];
  puVar1[2] = uVar4;
  puVar1[1] = 0;
  uVar6 = puVar1[4];
  puVar1[4] = puVar1[4] & uVar5;
  puVar1[4] = ~puVar1[4];
  puVar1[4] = puVar1[4] & (uVar6 | uVar5);
  puVar1[5] = puVar1[5] ^ uVar5;
  uVar4 = puVar1[3];
  *(ushort *)(puVar1 + 4) = *(ushort *)(puVar1 + 4) & 0xfeff;
  lVar7 = puVar1[5];
  *(undefined8 *)(lVar7 + -0x10) = uVar3;
  *(undefined8 *)(lVar7 + -0x18) = uVar3;
  *(undefined **)(lVar7 + -0x10) = &DAT_162084009;
  return uVar4;
}



// FUNCTION 14dc0cdb7 FUN_14dc0cdb7 body=216 status=ok
// SIG undefined FUN_14dc0cdb7(void)

/* WARNING: Removing unreachable block (ram,0x00015b8704cc) */
/* WARNING: Removing unreachable block (ram,0x00015b8704d2) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce62) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce57) */

undefined8 FUN_14dc0cdb7(void)

{
  byte bVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  byte unaff_R15B;
  
  bVar1 = (byte)*(undefined8 *)(unaff_R13 + -0x60);
  if (-1 < (char)((~unaff_R15B | bVar1) & (~bVar1 | unaff_R15B))) {
    uVar2 = FUN_15b8703b2();
    return uVar2;
  }
  FUN_15788f93d();
  return DAT_15788f8a5;
}



// FUNCTION 14dc0ce62 FUN_14dc0ce62 body=154 status=ok
// SIG undefined FUN_14dc0ce62(void)

void FUN_14dc0ce62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_165c10f5c(local_res10,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dc0d090 FUN_14dc0d090 body=71 status=ok
// SIG undefined FUN_14dc0d090(void)

void FUN_14dc0d090(void)

{
  return;
}



// FUNCTION 14dc0d1a8 FUN_14dc0d1a8 body=314 status=ok
// SIG undefined FUN_14dc0d1a8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc0d250) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d273) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d277) */

void FUN_14dc0d1a8(char param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160f9a469(param_1 + '\x01',param_2,
                (-(-1 - unaff_R15) - ((*(ulonglong *)(unaff_R13 + -0x88) ^ 0xffffffffffffffff) + 2))
                + (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dc0d2e5 FUN_14dc0d2e5 body=20 status=ok
// SIG undefined FUN_14dc0d2e5(void)

void FUN_14dc0d2e5(void)

{
  return;
}



// FUNCTION 14dc0d3a8 FUN_14dc0d3a8 body=266 status=ok
// SIG undefined FUN_14dc0d3a8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d826) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d696) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d4ac) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d4b2) */
/* WARNING: Removing unreachable block (ram,0x00016179332c) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5b8) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5d0) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5d5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5db) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5e6) */
/* WARNING: Removing unreachable block (ram,0x000161c22ade) */
/* WARNING: Removing unreachable block (ram,0x000161c22b24) */
/* WARNING: Removing unreachable block (ram,0x000161c22b28) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d678) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d67e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d683) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d699) */
/* WARNING: Removing unreachable block (ram,0x00016115bb96) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7af) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d820) */
/* WARNING: Removing unreachable block (ram,0x000166472d36) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */
/* WARNING: Removing unreachable block (ram,0x000165a0e664) */

undefined8 FUN_14dc0d3a8(longlong param_1)

{
  undefined8 uVar1;
  ulonglong in_R10;
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_R15 + 8) = param_1 - ~in_R10;
  FUN_1656f8337();
  uVar1 = FUN_166bafc28();
  return uVar1;
}



// FUNCTION 14dc0d4b2 FUN_14dc0d4b2 body=303 status=ok
// SIG undefined FUN_14dc0d4b2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d826) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d696) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5d5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5db) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d5e6) */
/* WARNING: Removing unreachable block (ram,0x000161c22ade) */
/* WARNING: Removing unreachable block (ram,0x000161c22b24) */
/* WARNING: Removing unreachable block (ram,0x000161c22b28) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d678) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d67e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d683) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d699) */
/* WARNING: Removing unreachable block (ram,0x00016115bb96) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7af) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d820) */
/* WARNING: Removing unreachable block (ram,0x000166472d36) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */
/* WARNING: Removing unreachable block (ram,0x000165a0e664) */

undefined8 FUN_14dc0d4b2(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res20;
  ulonglong in_stack_00000038;
  
  in_stack_00000038 = in_stack_00000038 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000038 - 8) = local_res20;
  *(undefined8 *)(in_stack_00000038 - 0x10) = 0x14dc0d542;
  uVar2 = FUN_14dc7e674(FUN_14dc7e674,param_2,local_res8);
  if (((uint)uVar2 | 0x7fffffff) != 0x7fffffff) {
    *(undefined8 *)(in_stack_00000038 - 0x10) = uVar2;
    *(undefined4 *)(in_stack_00000038 - 0xc) = 0xffffffff;
    uVar2 = thunk_FUN_16179334b();
    return uVar2;
  }
  *(undefined8 *)(in_stack_00000038 - 0x10) = uVar2;
  *(undefined4 *)(in_stack_00000038 - 0xc) = 0;
  *(undefined8 *)(in_stack_00000038 - 0x10) = 0xebfc94b;
  uVar1 = *(ulonglong *)(in_stack_00000038 - 0x10);
  *(ulonglong *)(in_stack_00000038 - 0x10) =
       *(ulonglong *)(in_stack_00000038 - 0x10) | 0xfffffffff14036b4;
  *(ulonglong *)(in_stack_00000038 - 0x10) =
       ~(~(uVar1 & 0xfffffffff14036b4) & *(ulonglong *)(in_stack_00000038 - 0x10));
  *(undefined4 *)(in_stack_00000038 - 0x18) = 0x8908a90f;
  *(undefined8 *)(in_stack_00000038 - 0x20) = 0x1617933de;
  uVar2 = FUN_162b1d783(in_stack_00000038 - 0x10);
  return uVar2;
}



// FUNCTION 14dc0d5e6 FUN_14dc0d5e6 body=157 status=ok
// SIG undefined FUN_14dc0d5e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d826) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d696) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7af) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d820) */
/* WARNING: Removing unreachable block (ram,0x000166472d36) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */
/* WARNING: Removing unreachable block (ram,0x000165a0e664) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d683) */

undefined8 FUN_14dc0d5e6(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong in_RAX;
  undefined8 uVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff133bbd6 + in_RAX);
  *puVar1 = *(ulonglong *)(unaff_R13 + param_4);
  uVar3 = *puVar1;
  *(undefined4 *)puVar1 = 0x7143b754;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  *puVar1 = -(~uVar3 + (*puVar1 ^ 0x7143b756));
  *puVar1 = *puVar1 - ~unaff_R15;
  uVar6 = *puVar1;
  *puVar1 = param_1;
  uVar4 = *puVar1;
  *puVar1 = uVar6 + (uVar3 & unaff_R15) * -2;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88);
  if (*(ulonglong *)(unaff_R13 + -0x88) != 0) {
    uVar5 = FUN_161c22ade();
    return uVar5;
  }
  *puVar1 = unaff_RSI;
  lVar2 = *(longlong *)(unaff_R13 + -0x38);
  *puVar1 = 0x161c22b64;
  FUN_165d4f43b(uVar4,lVar2,~((~unaff_R15 | uVar3) & (~uVar3 | unaff_R15)));
  uVar3 = *(ulonglong *)(lVar2 + -0x30);
  uVar6 = uVar3 & unaff_R15;
  *puVar1 = (uVar3 + unaff_R15) - ((uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0) | 1) - 1);
  puVar1[-1] = 0x161c22c08;
  FUN_164ff612f();
  uVar5 = FUN_161c22c0e();
  return uVar5;
}



// FUNCTION 14dc0d683 FUN_14dc0d683 body=153 status=ok
// SIG undefined FUN_14dc0d683(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d826) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d696) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7af) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d820) */
/* WARNING: Removing unreachable block (ram,0x000166472d36) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */
/* WARNING: Removing unreachable block (ram,0x000165a0e664) */

undefined8 FUN_14dc0d683(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 *puVar4;
  longlong unaff_RDI;
  
  puVar4 = (undefined8 *)(param_1 + param_2);
  uVar3 = *puVar4;
  _fxrstor(puVar4 + 3);
  puVar2 = (uint *)(puVar4 + 2);
  *(undefined8 *)puVar2 = in_RAX;
  *puVar2 = 0x9ce1a5a7;
  *puVar2 = *puVar2 ^ 0x4f045ea2;
  *(undefined4 *)(puVar4 + 1) = 0x7921cb95;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar4 + (puVar4[1] ^ 0x7921cb91) + 0x10) = 0;
  puVar4[1] = FUN_14dc0d71f;
  FUN_16196023f(FUN_16196023f,uVar3);
  puVar1 = puVar4 + 2;
  puVar4[1] = *(undefined8 *)(unaff_RDI + -0x80);
  *puVar1 = puVar4[1];
  uVar3 = *puVar1;
  *puVar1 = &LAB_164ee81c5;
  return uVar3;
}



// FUNCTION 14dc0d71f FUN_14dc0d71f body=535 status=ok
// SIG undefined FUN_14dc0d71f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d826) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d7af) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d820) */
/* WARNING: Removing unreachable block (ram,0x000166472d36) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8a5) */
/* WARNING: Removing unreachable block (ram,0x000165a0e664) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */

undefined8 FUN_14dc0d71f(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14dc0d8ab FUN_14dc0d8ab body=140 status=ok
// SIG undefined FUN_14dc0d8ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */

void * FUN_14dc0d8ab(void)

{
  void *pvVar1;
  byte in_SF;
  
  if ((in_SF & 1) == 0) {
    return ProcessEnvironmentBlock;
  }
  pvVar1 = (void *)FUN_165eb5930();
  return pvVar1;
}



// FUNCTION 14dc0d93a FUN_14dc0d93a body=166 status=ok
// SIG undefined FUN_14dc0d93a(void)

undefined8 FUN_14dc0d93a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc0d9e3 FUN_14dc0d9e3 body=174 status=ok
// SIG undefined FUN_14dc0d9e3(void)

void FUN_14dc0d9e3(void)

{
  ushort uVar1;
  ushort *unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  short unaff_R13W;
  undefined8 unaff_R14;
  longlong in_stack_00000028;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = 0;
  *unaff_RBP = *unaff_RBP ^ -~uVar1 - (~(0xfeffU - unaff_R13W) + 2);
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  (*(code *)0x164812510)();
  return;
}



// FUNCTION 14dc0da92 FUN_14dc0da92 body=18 status=ok
// SIG undefined FUN_14dc0da92(void)

void FUN_14dc0da92(void)

{
  (*(code *)&LAB_15b05acb6)();
  return;
}



// FUNCTION 14dc0db39 thunk_FUN_14dc0db3f body=5 status=ok
// SIG undefined thunk_FUN_14dc0db3f(void)

/* WARNING: Instruction at (ram,0x0001573e27c2) overlaps instruction at (ram,0x0001573e27c1)
    */
/* WARNING: Removing unreachable block (ram,0x000162433093) */
/* WARNING: Removing unreachable block (ram,0x0001624330b6) */
/* WARNING: Removing unreachable block (ram,0x00016243314f) */
/* WARNING: Removing unreachable block (ram,0x0001622910d5) */
/* WARNING: Removing unreachable block (ram,0x0001624330ae) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dc51) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dc57) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dd5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dd53) */
/* WARNING: Removing unreachable block (ram,0x00016152e45d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000162432fcd */
/* WARNING: Removing unreachable block (ram,0x0001573e27bb) */
/* WARNING: Removing unreachable block (ram,0x000166dda8af) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 thunk_FUN_14dc0db3f(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong in_R9;
  uint uVar7;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStackX_10;
  undefined1 auStackX_18 [16];
  
  FUN_165066176();
  lVar6 = -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
               (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  FUN_1610ad751(lVar6,(unaff_R15 - uVar4) + (~uVar4 - ~(uVar4 & unaff_R15)) * -2);
  uVar7 = ~(~*(uint *)(unaff_R14 + ~((~in_R9 | unaff_R15) + in_R9 + 1)) | 0x1f02f77c) ^ 0xffffffff;
  *(uint *)(unaff_R14 + 0x40) = *(uint *)(unaff_R14 + 0x40) | 0xe0fd0883;
  uVar2 = *(uint *)(unaff_R14 + 0x40);
  iVar3 = *(int *)(unaff_R14 + 0x40);
  *(undefined4 *)(unaff_R14 + 0x40) = 0;
  *(int *)(unaff_R14 + 0x40) =
       *(int *)(unaff_R14 + 0x40) + (-2 - ~-((iVar3 - (uVar7 | uVar2)) + uVar7));
  if (&DAT_fffffffffffffff7 < &uStackX_10) {
    uStackX_10 = (ulonglong)(in_NT & 1) * 0x4000 |
                 (ulonglong)SCARRY8((longlong)&uStackX_10,8) * 0x800 |
                 (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                 (ulonglong)((longlong)auStackX_18 < 0) * 0x80 |
                 (ulonglong)(&stack0x00000000 == &DAT_ffffffffffffffe8) * 0x40 |
                 (ulonglong)(in_AF & 1) * 0x10 |
                 (ulonglong)((POPCOUNT((ulonglong)auStackX_18 & 0xff) & 1U) == 0) * 4 | 1 |
                 (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar5 = FUN_1573e278f();
    return uVar5;
  }
  uStackX_10 = uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2;
  FUN_165717a36();
  uVar5 = FUN_15b400a7a(lVar6);
  return uVar5;
}



// FUNCTION 14dc0db3f FUN_14dc0db3f body=274 status=ok
// SIG undefined FUN_14dc0db3f(void)

/* WARNING: Instruction at (ram,0x0001573e27c2) overlaps instruction at (ram,0x0001573e27c1)
    */
/* WARNING: Removing unreachable block (ram,0x000162433093) */
/* WARNING: Removing unreachable block (ram,0x0001624330b6) */
/* WARNING: Removing unreachable block (ram,0x00016243314f) */
/* WARNING: Removing unreachable block (ram,0x0001622910d5) */
/* WARNING: Removing unreachable block (ram,0x0001624330ae) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dc51) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dc57) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dd5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0dd53) */
/* WARNING: Removing unreachable block (ram,0x00016152e45d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000162432fcd */
/* WARNING: Removing unreachable block (ram,0x0001573e27bb) */
/* WARNING: Removing unreachable block (ram,0x000166dda8af) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc0db3f(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong in_R9;
  uint uVar7;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStackX_10;
  undefined1 auStackX_18 [16];
  
  FUN_165066176();
  lVar6 = -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
               (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  FUN_1610ad751(lVar6,(unaff_R15 - uVar4) + (~uVar4 - ~(uVar4 & unaff_R15)) * -2);
  uVar7 = ~(~*(uint *)(unaff_R14 + ~((~in_R9 | unaff_R15) + in_R9 + 1)) | 0x1f02f77c) ^ 0xffffffff;
  *(uint *)(unaff_R14 + 0x40) = *(uint *)(unaff_R14 + 0x40) | 0xe0fd0883;
  uVar2 = *(uint *)(unaff_R14 + 0x40);
  iVar3 = *(int *)(unaff_R14 + 0x40);
  *(undefined4 *)(unaff_R14 + 0x40) = 0;
  *(int *)(unaff_R14 + 0x40) =
       *(int *)(unaff_R14 + 0x40) + (-2 - ~-((iVar3 - (uVar7 | uVar2)) + uVar7));
  if (&DAT_fffffffffffffff7 < &uStackX_10) {
    uStackX_10 = (ulonglong)(in_NT & 1) * 0x4000 |
                 (ulonglong)SCARRY8((longlong)&uStackX_10,8) * 0x800 |
                 (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                 (ulonglong)((longlong)auStackX_18 < 0) * 0x80 |
                 (ulonglong)(&stack0x00000000 == &DAT_ffffffffffffffe8) * 0x40 |
                 (ulonglong)(in_AF & 1) * 0x10 |
                 (ulonglong)((POPCOUNT((ulonglong)auStackX_18 & 0xff) & 1U) == 0) * 4 | 1 |
                 (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar5 = FUN_1573e278f();
    return uVar5;
  }
  uStackX_10 = uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2;
  FUN_165717a36();
  uVar5 = FUN_15b400a7a(lVar6);
  return uVar5;
}



// FUNCTION 14dc0dc57 FUN_14dc0dc57 body=298 status=ok
// SIG undefined FUN_14dc0dc57(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0dd53) */

void FUN_14dc0dc57(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_15b907f61();
  FUN_156e8a439(param_1);
  syscall();
  *(undefined8 *)(~local_res10 - 8) = 0x5ad1a;
  FUN_165c7153c(0x14dc0dd96);
  return;
}



// FUNCTION 14dc0dd81 FUN_14dc0dd81 body=38 status=ok
// SIG undefined FUN_14dc0dd81(void)

void FUN_14dc0dd81(void)

{
  undefined8 local_res18;
  
  syscall();
  *(undefined8 *)(local_res18 + -8) = 0x5ad1a;
  FUN_165c7153c(0x14dc0dd96);
  return;
}



// FUNCTION 14dc0de0c FUN_14dc0de0c body=163 status=ok
// SIG undefined FUN_14dc0de0c(void)

void FUN_14dc0de0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1658e91f1(0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc0deb0 FUN_14dc0deb0 body=278 status=ok
// SIG undefined FUN_14dc0deb0(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0df3e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0df44) */

void FUN_14dc0deb0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  uint *unaff_RSI;
  ulonglong uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  bool bVar3;
  undefined4 in_stack_00000008;
  longlong lStackX_20;
  
  if (((ulonglong)unaff_RSI &
      ((CONCAT44(0x156cad6a,in_stack_00000008) ^ 0x156cad6a00000000) >> 1) +
      (CONCAT44(0x156cad6a,in_stack_00000008) << 0x3f)) == 0) {
    *unaff_RSI = param_3;
    thunk_FUN_16178a6c5();
    return;
  }
  if (((ulonglong)unaff_RSI & 0x7fffffffffffffff) == 0) {
    FUN_156eb688c();
    return;
  }
  if (((ulonglong)unaff_RSI & 0x7fffffffffffffff) == 0) {
    *(undefined8 *)(lStackX_20 + -8) = unaff_RBP;
    *(undefined8 *)(lStackX_20 + -0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lStackX_20 + -0x18) = in_R11;
    *(undefined8 *)(lStackX_20 + -0x20) = in_R10;
    uVar1 = *(undefined8 *)(lStackX_20 + -0x18);
    *(undefined8 *)(lStackX_20 + -0x10) = unaff_R13;
    *(undefined8 *)(lStackX_20 + -0x18) = unaff_R13;
    *(undefined8 *)(lStackX_20 + -0x20) = uVar1;
    *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
    *(undefined **)(lStackX_20 + -8) = &DAT_166516655;
    *(undefined **)(lStackX_20 + -0x18) = &DAT_166516636;
    return;
  }
  uVar2 = ~(ulonglong)param_3 | 0x5b74249df7e95353;
  uVar2 = (~uVar2 | (ulonglong)param_3 | 0xa48bdb620816acac) + uVar2 + 1;
  bVar3 = uVar2 == 0;
  FUN_16242bfd3(param_1,param_2,~uVar2);
  if (bVar3) {
    FUN_161329f98();
    return;
  }
  FUN_161329fb1();
  return;
}



// FUNCTION 14dc0df44 FUN_14dc0df44 body=150 status=ok
// SIG undefined FUN_14dc0df44(void)

void FUN_14dc0df44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  
  FUN_160c88879(param_1,in_stack_00000010,param_3,local_res8);
  return;
}



// FUNCTION 14dc0e22f FUN_14dc0e22f body=296 status=ok
// SIG undefined FUN_14dc0e22f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0e2b9) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e2bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e2c4) */

void FUN_14dc0e22f(void)

{
  FUN_1653c5059();
  return;
}



// FUNCTION 14dc0e357 FUN_14dc0e357 body=284 status=ok
// SIG undefined FUN_14dc0e357(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0e46e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e479) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e493) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e497) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e474) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e3e4) */
/* WARNING: Removing unreachable block (ram,0x0001563e693d) */
/* WARNING: Removing unreachable block (ram,0x0001563e6993) */

void FUN_14dc0e357(undefined8 param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong uVar2;
  undefined8 uStackX_10;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
  uVar1 = (-0x101 - (local_res18 | 0xfeff)) + local_res18;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined4 *)(local_res20 + -0x28) = 0x2c7fb5a3;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  uVar2 = *(ulonglong *)(local_res20 + -0x28) ^ 0x2b4d38d6;
  if (0x7dfc723 < uVar2) {
    *(ulonglong *)(local_res20 + -8) = 0x7dfc723 - uVar2;
    FUN_15b3d5987(param_1,param_2,uStackX_10);
    return;
  }
  FUN_16530573e();
  return;
}



// FUNCTION 14dc0e479 FUN_14dc0e479 body=139 status=ok
// SIG undefined FUN_14dc0e479(void)

void FUN_14dc0e479(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) & param_1;
  FUN_15b401f5a(param_1,0x62,uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0),
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14dc0e77f FUN_14dc0e77f body=454 status=ok
// SIG undefined FUN_14dc0e77f(void)

/* WARNING: Instruction at (ram,0x00014dc0e7b9) overlaps instruction at (ram,0x00014dc0e7b8)
    */
/* WARNING: Removing unreachable block (ram,0x00016595315a) */
/* WARNING: Removing unreachable block (ram,0x00014dc0e7b2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014dc0e7cd */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc0e77f(undefined8 param_1,uint param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulonglong in_RAX;
  undefined8 uVar15;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong uVar16;
  undefined8 in_stack_00000008;
  undefined1 auStackX_10 [24];
  uint uVar3;
  
  bVar9 = (in_NT & 1) != 0;
  bVar10 = (in_IF & 1) != 0;
  bVar11 = (in_TF & 1) != 0;
  bVar12 = (in_AF & 1) != 0;
  bVar14 = (in_ID & 1) != 0;
  bVar13 = (in_AC & 1) != 0;
  *(ulonglong *)(unaff_RBX - 8) = unaff_RBX;
  puVar4 = *(ulonglong **)(unaff_RBX - 8);
  puVar6 = puVar4 + -1;
  *puVar6 = in_RAX;
  if (puVar6 == (ulonglong *)0x0) {
    puVar4[-2] = (ulonglong)bVar9 * 0x4000 | (ulonglong)SCARRY8((longlong)puVar4,-8) * 0x800 |
                 (ulonglong)bVar10 * 0x200 | (ulonglong)bVar11 * 0x100 | 0x40 |
                 (ulonglong)bVar12 * 0x10 | 4 | (ulonglong)(&DAT_00000007 < puVar4) |
                 (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
    puVar4[-3] = (ulonglong)bVar9 * 0x4000 | (ulonglong)SCARRY8((longlong)puVar4,-8) * 0x800 |
                 (ulonglong)bVar10 * 0x200 | (ulonglong)bVar11 * 0x100 | 0x40 |
                 (ulonglong)bVar12 * 0x10 | 4 | (ulonglong)(&DAT_00000007 < puVar4) |
                 (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
    *(int *)(puVar4 + -3) = (int)puVar4[-3] << 0x19;
    *(uint *)(puVar4 + -3) = (uint)puVar4[-3] >> 0x1f;
    if ((int)puVar4[-3] != 0) {
      FUN_165953111();
      return;
    }
    uVar7 = *puVar4;
    *puVar4 = unaff_R13;
    *(undefined2 *)puVar4 = 0xfeff;
    uVar16 = *puVar4;
    *puVar4 = unaff_RBX;
    uVar8 = *puVar4;
    _DAT_00000000 = auStackX_10;
    *(ushort *)((longlong)puVar4 + 6) = (~(ushort)uVar16 | (ushort)puVar4[3]) - 0x100;
    *(ushort *)(puVar4 + 3) = *(ushort *)((longlong)puVar4 + 6);
    lVar5 = puVar4[4];
    puVar4 = (ulonglong *)(lVar5 + -8);
    *puVar4 = 0;
    *puVar4 = *puVar4 - unaff_RSI;
    *puVar4 = -*puVar4;
    *(undefined8 *)(lVar5 + -0x10) = 0x14dc0e8ad;
    uVar15 = FUN_166271846(param_1,uVar7);
    uVar16 = *puVar4;
    *(undefined8 *)(lVar5 + -8) = uVar15;
    *(undefined4 *)(lVar5 + -8) = 0xe7f30fe0;
    *(undefined4 *)(lVar5 + -4) = 0xffffffff;
    *(ulonglong *)(lVar5 + -8) = *(ulonglong *)(uVar8 + *(longlong *)(lVar5 + -8) + 0x180cefa0);
    uVar7 = *(ulonglong *)(lVar5 + -8);
    FUN_165b8fc50(uVar16,(~(uVar7 & uVar16) + uVar16) - ~uVar7,param_3 ^ uVar16);
    return;
  }
  *(int *)puVar6 = 0x5048fdce;
  *(int *)puVar6 = (int)*puVar6 + 0x43764cb6;
  puVar1 = (uint *)((longlong)puVar4 + -4);
  *puVar1 = 0x59d31ab8;
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 0x6272d364;
  puVar4[-2] = (ulonglong)bVar9 * 0x4000 | (ulonglong)SCARRY4(uVar3,0x6272d364) * 0x800 |
               (ulonglong)bVar10 * 0x200 | (ulonglong)bVar11 * 0x100 |
               (ulonglong)((int)*puVar1 < 0) * 0x80 | (ulonglong)(*puVar1 == 0) * 0x40 |
               (ulonglong)bVar12 * 0x10 | (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(0x9d8d2c9b < uVar2) | (ulonglong)bVar14 * 0x200000 |
               (ulonglong)bVar13 * 0x40000;
  puVar4[-3] = param_4;
  if ((puVar4[-2] & 0x40) != 0) {
    uVar7 = puVar4[-3];
    uVar16 = puVar4[-2];
    puVar4[-2] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar16 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar16 & 0x80) != 0) * 0x80 | (ulonglong)((uVar16 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 | (ulonglong)((uVar16 & 4) != 0) * 4 |
                 (ulonglong)((uVar16 & 1) != 0) | (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
    puVar4[-3] = in_stack_00000008;
    if ((puVar4[-2] & 0x40) != 0) {
      FUN_161cdda07();
      return;
    }
    puVar4[-2] = 0x10;
    *(undefined4 *)(puVar4 + -2) = 0x33677e4;
    *(undefined4 *)((longlong)puVar4 + -0xc) = 0;
    puVar4[-2] = ~(param_3 & puVar4[1]) + *(longlong *)((longlong)puVar6 + puVar4[-2] + -0x33677d4);
    puVar4[-2] = puVar4[-2] - ~param_3;
    uVar16 = ~uVar7 | unaff_RBX;
    FUN_1616ed6a2(FUN_1616ed6a2,~(~(param_2 & 0xeba2f781) & (param_2 | 0xeba2f781)) ^ 0xffffffff,
                  *(undefined8 *)(unaff_R13 - 0x88),~((~uVar16 | ~unaff_RBX | uVar7) + uVar16 + 1));
    return;
  }
  FUN_161cdda07();
  return;
}



// FUNCTION 14dc0e958 FUN_14dc0e958 body=174 status=ok
// SIG undefined FUN_14dc0e958(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c03ce) */

void FUN_14dc0e958(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x28) == 0) {
    FUN_14dc3598e(FUN_14dc3598e,~-*(longlong *)(unaff_R13 + -0x28) + 1U ^ unaff_R15);
    return;
  }
  FUN_15686d726();
  return;
}



// FUNCTION 14dc0ea07 FUN_14dc0ea07 body=83 status=ok
// SIG undefined FUN_14dc0ea07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc0ea07(void)

{
  longlong in_R9;
  undefined8 unaff_R12;
  
  *(undefined8 *)(&stack0xfffffffff9bf1886 + in_R9) = unaff_R12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc0eab5 FUN_14dc0eab5 body=736 status=ok
// SIG undefined FUN_14dc0eab5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0ec6c) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ec72) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ecf7) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ecfd) */
/* WARNING: Removing unreachable block (ram,0x000160ed6f3d) */
/* WARNING: Removing unreachable block (ram,0x000156a20a0c) */

void FUN_14dc0eab5(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res8;
  
  FUN_16110683d(0,param_2,
                (local_res8 & ~*(ulonglong *)(unaff_R12 + -0x80) | ~local_res8) &
                (*(ulonglong *)(unaff_R12 + -0x80) | local_res8),
                ~((~local_res8 | in_RAX) & ~(in_RAX & ~local_res8)));
  FUN_16297fe81();
  FUN_156a20a0c();
  return;
}



// FUNCTION 14dc0ed9e FUN_14dc0ed9e body=129 status=ok
// SIG undefined FUN_14dc0ed9e(void)

void FUN_14dc0ed9e(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_157114336(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dc0eec1 FUN_14dc0eec1 body=51 status=ok
// SIG undefined FUN_14dc0eec1(void)

void FUN_14dc0eec1(void)

{
  return;
}



// FUNCTION 14dc0ef6b FUN_14dc0ef6b body=88 status=ok
// SIG undefined FUN_14dc0ef6b(void)

void FUN_14dc0ef6b(void)

{
  return;
}



// FUNCTION 14dc0f0c4 FUN_14dc0f0c4 body=114 status=ok
// SIG undefined FUN_14dc0f0c4(void)

void FUN_14dc0f0c4(undefined8 param_1,ulonglong param_2)

{
  FUN_15b65d76e(0xab9f8da33fe72828,~param_2);
  return;
}



// FUNCTION 14dc0f136 FUN_14dc0f136 body=642 status=ok
// SIG undefined FUN_14dc0f136(void)

/* WARNING: Instruction at (ram,0x0001572504e9) overlaps instruction at (ram,0x0001572504e8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc0f296) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f2a1) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f29c) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f1e9) */

void FUN_14dc0f136(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong unaff_R15;
  
  FUN_1566b1ed3(0xfff38349,param_2,param_3);
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & unaff_R15;
  *(ulonglong *)(param_2 + 0x10) = (lVar1 + unaff_R15) - *(longlong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = ~((ulonglong)&stack0x00000008 & *(ulonglong *)(param_2 + 0x10));
  FUN_160c7f489();
  return;
}



// FUNCTION 14dc0f2a1 FUN_14dc0f2a1 body=186 status=ok
// SIG undefined FUN_14dc0f2a1(void)

void FUN_14dc0f2a1(undefined8 param_1)

{
  FUN_1610ed69d(param_1,FUN_1610ed69d);
  return;
}



// FUNCTION 14dc0f3f2 FUN_14dc0f3f2 body=127 status=ok
// SIG undefined FUN_14dc0f3f2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0f51c) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f522) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f527) */
/* WARNING: Removing unreachable block (ram,0x00015736fa2a) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f478) */

void FUN_14dc0f3f2(ulonglong param_1)

{
  ulonglong unaff_RSI;
  code *pcVar1;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 auStackX_20 [8];
  ulonglong in_stack_00000028;
  
  if ((unaff_R12 - param_1) + (in_stack_00000028 | param_1) * 2 + in_stack_00000028 * -2 == 0) {
    FUN_15736f94f();
    return;
  }
  pcVar1 = FUN_1618807f1;
  FUN_1618807f1(auStackX_20);
  FUN_161896022(*(ulonglong *)(pcVar1 + (unaff_RSI ^ 0x4b7ccac2)) ^ in_R10,
                *(ulonglong *)(pcVar1 + -0x48) ^ in_R10);
  return;
}



// FUNCTION 14dc0f478 FUN_14dc0f478 body=174 status=ok
// SIG undefined FUN_14dc0f478(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0f51c) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f522) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f527) */

void FUN_14dc0f478(void)

{
  FUN_15718c62f();
  return;
}



// FUNCTION 14dc0f527 FUN_14dc0f527 body=170 status=ok
// SIG undefined FUN_14dc0f527(void)

void FUN_14dc0f527(void)

{
  (*(code *)0x15b1372ac)();
  return;
}



// FUNCTION 14dc0f5ef FUN_14dc0f5ef body=129 status=ok
// SIG undefined FUN_14dc0f5ef(void)

void FUN_14dc0f5ef(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x7f059) {
    return;
  }
  FUN_161084d5e(param_1,param_2);
  return;
}



// FUNCTION 14dc0f726 FUN_14dc0f726 body=82 status=ok
// SIG undefined FUN_14dc0f726(void)

void FUN_14dc0f726(void)

{
  return;
}



// FUNCTION 14dc0f7d7 FUN_14dc0f7d7 body=251 status=ok
// SIG undefined FUN_14dc0f7d7(void)

/* WARNING: Removing unreachable block (ram,0x000157267f2e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f86a) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f8a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f8a0) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f8a9) */
/* WARNING: Removing unreachable block (ram,0x000157267ed6) */

void FUN_14dc0f7d7(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x68);
  uVar1 = ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68)) &
           (~(uVar1 & param_1) + param_1) - ~uVar1);
  if (uVar1 == 0) {
    FUN_15b3b824c();
    return;
  }
  FUN_15ba3d198(param_1,uVar1,FUN_15ba3d198,0xffffffffbad565f2);
  return;
}



// FUNCTION 14dc0f86a FUN_14dc0f86a body=130 status=ok
// SIG undefined FUN_14dc0f86a(void)

void FUN_14dc0f86a(void)

{
  FUN_14dcbb56f();
  FUN_14dc0f8f0();
  return;
}



// FUNCTION 14dc0f8f0 FUN_14dc0f8f0 body=186 status=ok
// SIG undefined FUN_14dc0f8f0(void)

/* WARNING: Instruction at (ram,0x000166507373) overlaps instruction at (ram,0x000166507372)
    */
/* WARNING: Removing unreachable block (ram,0x00016650753b) */
/* WARNING: Removing unreachable block (ram,0x00016650754c) */
/* WARNING: Removing unreachable block (ram,0x000166507631) */
/* WARNING: Removing unreachable block (ram,0x000166507645) */
/* WARNING: Removing unreachable block (ram,0x00016650764a) */
/* WARNING: Removing unreachable block (ram,0x000166507541) */
/* WARNING: Removing unreachable block (ram,0x0001665073da) */
/* WARNING: Removing unreachable block (ram,0x000166507469) */
/* WARNING: Removing unreachable block (ram,0x00015722bfe9) */
/* WARNING: Removing unreachable block (ram,0x000166507479) */
/* WARNING: Removing unreachable block (ram,0x00015b2da1db) */
/* WARNING: Removing unreachable block (ram,0x00015b2da1f0) */
/* WARNING: Removing unreachable block (ram,0x00015b2da1f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f9ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0f994) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000160d7b944 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc0f8f0(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  undefined1 local_res8 [32];
  
  *(uint *)(in_RAX + -9) = *(uint *)(in_RAX + -9) | 0x525141d6;
  if (~(ulonglong)local_res8 < 0x100) {
    FUN_1658899dc(0xff - ~(ulonglong)local_res8,param_2,FUN_1658899dc);
    return;
  }
  FUN_160d7b944();
  return;
}



// FUNCTION 14dc0f9ab FUN_14dc0f9ab body=16 status=ok
// SIG undefined FUN_14dc0f9ab(void)

void FUN_14dc0f9ab(void)

{
  return;
}



// FUNCTION 14dc0fa64 FUN_14dc0fa64 body=623 status=ok
// SIG undefined FUN_14dc0fa64(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0faed) */
/* WARNING: Removing unreachable block (ram,0x00014dc0faf3) */
/* WARNING: Removing unreachable block (ram,0x0001567137ce) */

void FUN_14dc0fa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong uVar4;
  undefined8 unaff_R15;
  
  uVar4 = *(ulonglong *)(unaff_R12 + -0xa0) ^ in_RAX;
  uVar2 = ~(*(ulonglong *)(unaff_R12 + -0x68) & in_RAX) &
          (*(ulonglong *)(unaff_R12 + -0x68) | in_RAX);
  *(undefined8 *)(uVar2 - 8) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = param_4;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  puVar1 = (undefined8 *)(uVar2 - 0x20);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  uVar3 = *puVar1;
  *puVar1 = &LAB_15b6b7400;
  *(ulonglong *)(uVar2 - 0x28) = uVar4;
  *(ulonglong *)(uVar2 - 0x30) = uVar4;
  *(code **)(uVar2 - 0x28) = FUN_14d851ab9;
  (*(code *)0x16511038e)(param_1,param_2,param_3,uVar3);
  return;
}



// FUNCTION 14dc0fc15 FUN_14dc0fc15 body=273 status=ok
// SIG undefined FUN_14dc0fc15(void)

/* WARNING: Removing unreachable block (ram,0x00015b7fd56b) */
/* WARNING: Removing unreachable block (ram,0x00015b7fd571) */
/* WARNING: Removing unreachable block (ram,0x00014dc0fccf) */
/* WARNING: Removing unreachable block (ram,0x00015b15ab89) */
/* WARNING: Removing unreachable block (ram,0x00014dc0fd1d) */

ulonglong FUN_14dc0fc15(ulonglong param_1)

{
  ulonglong uVar1;
  
  if (&DAT_fffffffffffffff7 < &stack0x00000000) {
    return param_1 ^ 0xffffffffffffffff;
  }
  uVar1 = FUN_15b7fd4e8();
  return uVar1;
}


