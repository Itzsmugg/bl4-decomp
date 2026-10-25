// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dc519c7 FUN_14dc519c7 body=164 status=ok
// SIG undefined FUN_14dc519c7(void)

void FUN_14dc519c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_RSI) = param_1;
  FUN_164a519d1(local_res10[0],FUN_164a519d1,param_3,param_4);
  FUN_165e93f27();
  return;
}



// FUNCTION 14dc51f83 FUN_14dc51f83 body=169 status=ok
// SIG undefined FUN_14dc51f83(void)

void FUN_14dc51f83(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint6 uVar3;
  char in_stack_00000040;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  uVar3 = (uint6)(uVar1 >> 0x10);
  uVar2 = (ulonglong)uVar3 << 0x10;
  if (in_stack_00000040 < '\0') {
    uVar2 = CONCAT62(uVar3,0xffff);
  }
  FUN_1613fab88(uVar1,uVar2 & 0xffffffffffffff00,
                ~(*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP),uVar1 ^ unaff_RBP);
  return;
}



// FUNCTION 14dc5202d FUN_14dc5202d body=147 status=ok
// SIG undefined FUN_14dc5202d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc520c2) */

void FUN_14dc5202d(void)

{
  FUN_1569bd573();
  FUN_165dc2c59();
  return;
}



// FUNCTION 14dc520c2 FUN_14dc520c2 body=322 status=ok
// SIG undefined FUN_14dc520c2(void)

void FUN_14dc520c2(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_14e05dc92(param_1,param_2,
                -((~(~(param_3 & 0xfffffffff6430930) & (param_3 | 0xfffffffff6430930)) ^ 0x654d3649)
                 - *(longlong *)(unaff_R13 + -0x88)) ^ unaff_R15);
  (*(code *)0x161341f51)(local_res8,param_2,0x161341f51);
  return;
}



// FUNCTION 14dc52205 FUN_14dc52205 body=160 status=ok
// SIG undefined FUN_14dc52205(void)

void FUN_14dc52205(void)

{
  return;
}



// FUNCTION 14dc522a8 FUN_14dc522a8 body=186 status=ok
// SIG undefined FUN_14dc522a8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc52329) */
/* WARNING: Removing unreachable block (ram,0x00014dc5233a) */
/* WARNING: Removing unreachable block (ram,0x00014dc52365) */
/* WARNING: Removing unreachable block (ram,0x00014dc5232f) */

void FUN_14dc522a8(undefined8 param_1)

{
  longlong unaff_RSI;
  longlong unaff_R12;
  
  FUN_161667dbe(param_1,~*(ulonglong *)(unaff_R12 + unaff_RSI));
  return;
}



// FUNCTION 14dc5243f FUN_14dc5243f body=99 status=ok
// SIG undefined FUN_14dc5243f(void)

void FUN_14dc5243f(void)

{
  return;
}



// FUNCTION 14dc524cf FUN_14dc524cf body=214 status=ok
// SIG undefined FUN_14dc524cf(void)

void FUN_14dc524cf(void)

{
  undefined8 unaff_retaddr;
  
  FUN_16105951b(unaff_retaddr);
  thunk_FUN_15b1097be();
  return;
}



// FUNCTION 14dc525f6 FUN_14dc525f6 body=277 status=ok
// SIG undefined FUN_14dc525f6(void)

/* WARNING: Removing unreachable block (ram,0x00014dc52673) */
/* WARNING: Removing unreachable block (ram,0x00014dc5267e) */
/* WARNING: Removing unreachable block (ram,0x0001621e4f21) */
/* WARNING: Removing unreachable block (ram,0x0001621e4fc0) */
/* WARNING: Removing unreachable block (ram,0x0001659d4d9a) */
/* WARNING: Removing unreachable block (ram,0x000162191cf6) */
/* WARNING: Removing unreachable block (ram,0x0001659d4e9d) */
/* WARNING: Removing unreachable block (ram,0x0001659d4ea3) */
/* WARNING: Removing unreachable block (ram,0x0001659d4ea8) */
/* WARNING: Removing unreachable block (ram,0x0001621e4fc6) */
/* WARNING: Removing unreachable block (ram,0x000160b8c788) */
/* WARNING: Removing unreachable block (ram,0x0001621e50c7) */
/* WARNING: Removing unreachable block (ram,0x0001621e50cd) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dc52701) */
/* WARNING: Removing unreachable block (ram,0x00014dc52707) */
/* WARNING: Removing unreachable block (ram,0x00014dc5270c) */
/* WARNING: Removing unreachable block (ram,0x00014dc52784) */
/* WARNING: Removing unreachable block (ram,0x0001649c353f) */
/* WARNING: Removing unreachable block (ram,0x00014dc5278a) */
/* WARNING: Removing unreachable block (ram,0x00014dc52814) */
/* WARNING: Removing unreachable block (ram,0x00014dc5281a) */
/* WARNING: Removing unreachable block (ram,0x00014dc52867) */
/* WARNING: Removing unreachable block (ram,0x00014dc52878) */
/* WARNING: Removing unreachable block (ram,0x00014dc528c4) */
/* WARNING: Removing unreachable block (ram,0x00014dc529ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc529d0) */
/* WARNING: Removing unreachable block (ram,0x000156b3e463) */
/* WARNING: Removing unreachable block (ram,0x00015b9fd3f1) */
/* WARNING: Removing unreachable block (ram,0x0001659c1158) */
/* WARNING: Removing unreachable block (ram,0x0001659c11e0) */
/* WARNING: Removing unreachable block (ram,0x0001659c11e5) */
/* WARNING: Removing unreachable block (ram,0x0001659c11eb) */
/* WARNING: Removing unreachable block (ram,0x000166431970) */
/* WARNING: Removing unreachable block (ram,0x00014dc52679) */

void FUN_14dc525f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_157580a1b(FUN_157580a1b,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc5270c FUN_14dc5270c body=175 status=FAIL
// SIG undefined FUN_14dc5270c(void)
/* DECOMPILE FAILED */

// FUNCTION 14dc5281a FUN_14dc5281a body=179 status=FAIL
// SIG undefined FUN_14dc5281a(void)
/* DECOMPILE FAILED */

// FUNCTION 14dc528ce FUN_14dc528ce body=387 status=ok
// SIG undefined FUN_14dc528ce(void)

/* WARNING: Removing unreachable block (ram,0x00014dc529d0) */

void FUN_14dc528ce(ulonglong param_1)

{
  ulonglong in_stack_00000008;
  
  FUN_14dc747a5(param_1,(in_stack_00000008 & param_1 ^ 0xffffffffffffffff) &
                        (in_stack_00000008 | param_1));
  return;
}



// FUNCTION 14dc52a4f FUN_14dc52a4f body=99 status=ok
// SIG undefined FUN_14dc52a4f(void)

void FUN_14dc52a4f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1570470a5(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc52ab2 FUN_14dc52ab2 body=295 status=ok
// SIG undefined FUN_14dc52ab2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc52bde) */

void FUN_14dc52ab2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = FUN_14dba62bb(param_1);
  uVar2 = (~uVar1 | *(ulonglong *)(unaff_R12 + -0x78)) &
          (*(ulonglong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffff | uVar1);
  if (uVar2 == 0) {
    thunk_FUN_162afd3e3();
    return;
  }
  FUN_1629ec463(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar1,~uVar2,param_3);
  return;
}



// FUNCTION 14dc52bde FUN_14dc52bde body=144 status=ok
// SIG undefined FUN_14dc52bde(void)

void FUN_14dc52bde(void)

{
  FUN_14db98fb7();
  return;
}



// FUNCTION 14dc52d07 FUN_14dc52d07 body=32 status=ok
// SIG undefined FUN_14dc52d07(void)

void FUN_14dc52d07(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStackX_10;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_4;
  FUN_14d85d504(param_1,uStackX_10,param_3,param_5);
  return;
}



// FUNCTION 14dc52da5 FUN_14dc52da5 body=29 status=ok
// SIG undefined FUN_14dc52da5(void)

void FUN_14dc52da5(void)

{
  return;
}



// FUNCTION 14dc52f02 FUN_14dc52f02 body=317 status=ok
// SIG undefined FUN_14dc52f02(void)

void FUN_14dc52f02(void)

{
  FUN_1655cf39d();
  FUN_1649f7617();
  return;
}



// FUNCTION 14dc532d2 FUN_14dc532d2 body=776 status=ok
// SIG undefined FUN_14dc532d2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000166d93a45) overlaps instruction at (ram,0x000166d93a44)
    */
/* WARNING: Removing unreachable block (ram,0x0001660f4f0b) */
/* WARNING: Removing unreachable block (ram,0x0001660f4f16) */
/* WARNING: Removing unreachable block (ram,0x0001629aa7f6) */
/* WARNING: Removing unreachable block (ram,0x0001660f4f11) */
/* WARNING: Removing unreachable block (ram,0x0001660f4de3) */
/* WARNING: Removing unreachable block (ram,0x00014de403b7) */
/* WARNING: Removing unreachable block (ram,0x0001629aa7a9) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd2a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc5342f) */
/* WARNING: Removing unreachable block (ram,0x000166d93a1e) */
/* WARNING: Removing unreachable block (ram,0x000166d93a45) */
/* WARNING: Removing unreachable block (ram,0x000166d93a44) */
/* WARNING: Removing unreachable block (ram,0x00014dc5348f) */
/* WARNING: Removing unreachable block (ram,0x00014dc534a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc534a1) */
/* WARNING: Removing unreachable block (ram,0x00016644a9ac) */
/* WARNING: Removing unreachable block (ram,0x0001660f4de9) */
/* WARNING: Removing unreachable block (ram,0x0001660f4d45) */
/* WARNING: Removing unreachable block (ram,0x00014dc53396) */
/* WARNING: Removing unreachable block (ram,0x00014dc53429) */
/* WARNING: Removing unreachable block (ram,0x000162cf2e40) */
/* WARNING: Removing unreachable block (ram,0x000162cf2ec5) */
/* WARNING: Removing unreachable block (ram,0x00016644a89b) */
/* WARNING: Removing unreachable block (ram,0x00016644a9a6) */
/* WARNING: Removing unreachable block (ram,0x0001629aa725) */
/* WARNING: Removing unreachable block (ram,0x0001629aa7a3) */
/* WARNING: Removing unreachable block (ram,0x0001667c2517) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc532d2(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x38) < 0) {
    uVar1 = thunk_FUN_166bd0de6();
    return uVar1;
  }
  uVar1 = thunk_FUN_166bd0de6();
  return uVar1;
}



// FUNCTION 14dc534a8 FUN_14dc534a8 body=13 status=ok
// SIG undefined FUN_14dc534a8(void)

void FUN_14dc534a8(void)

{
  return;
}



// FUNCTION 14dc53676 FUN_14dc53676 body=310 status=ok
// SIG undefined FUN_14dc53676(void)

/* WARNING: Removing unreachable block (ram,0x00014dc53716) */

undefined8 FUN_14dc53676(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x80)) &
      (~*(ulonglong *)(unaff_R13 + -0x80) | unaff_R15)) == 0) {
    return in_RAX;
  }
  uVar1 = FUN_14dc2c183();
  return uVar1;
}



// FUNCTION 14dc537b3 FUN_14dc537b3 body=379 status=ok
// SIG undefined FUN_14dc537b3(void)

/* WARNING: Removing unreachable block (ram,0x0001611600ee) */
/* WARNING: Removing unreachable block (ram,0x0001611600e2) */
/* WARNING: Removing unreachable block (ram,0x0001611600f9) */
/* WARNING: Removing unreachable block (ram,0x000161160181) */
/* WARNING: Removing unreachable block (ram,0x000161160187) */
/* WARNING: Removing unreachable block (ram,0x00016235996e) */
/* WARNING: Removing unreachable block (ram,0x0001647b1555) */
/* WARNING: Removing unreachable block (ram,0x0001623599ec) */
/* WARNING: Removing unreachable block (ram,0x0001623599f2) */
/* WARNING: Removing unreachable block (ram,0x0001623599f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc53831) */
/* WARNING: Removing unreachable block (ram,0x00014dc53837) */

void FUN_14dc537b3(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI);
  uVar2 = *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI) =
       ~*(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI) =
       ~unaff_R15 & *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI) | unaff_R15;
  *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI) =
       -1 - ((~uVar1 & ~unaff_R15 | uVar2) & *(ulonglong *)(&stack0xfffffffff2a14c73 + unaff_RDI));
  FUN_165e6d998(param_1);
  thunk_FUN_1627529c3();
  return;
}



// FUNCTION 14dc53837 FUN_14dc53837 body=151 status=ok
// SIG undefined FUN_14dc53837(void)

void FUN_14dc53837(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15642b83a)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28),
             -1 - ((~unaff_R15 | param_3) & (param_3 ^ 0xffffffffffffffff | unaff_R15)));
  return;
}



// FUNCTION 14dc5395a FUN_14dc5395a body=456 status=ok
// SIG undefined FUN_14dc5395a(void)

void FUN_14dc5395a(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_R13;
  
  FUN_1565274a6();
  FUN_161025952();
  FUN_157223df3(((~param_2 | 0x10) - (param_2 | 0xffffffffffffffef | ~param_2 | 0x10)) +
                (param_2 | 0xffffffffffffffef) ^ 0xffffffffffffffff,
                *(ulonglong *)(unaff_R13 + -0x28) ^ 0x10);
  return;
}



// FUNCTION 14dc53bbc FUN_14dc53bbc body=333 status=ok
// SIG undefined FUN_14dc53bbc(void)

/* WARNING: Removing unreachable block (ram,0x000160dbc9a2) */
/* WARNING: Removing unreachable block (ram,0x000160dbc9a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc53ead) */
/* WARNING: Removing unreachable block (ram,0x00015b36a275) */
/* WARNING: Removing unreachable block (ram,0x00014dc53d0b) */
/* WARNING: Removing unreachable block (ram,0x0001625f9ffe) */
/* WARNING: Removing unreachable block (ram,0x00014dc53e12) */
/* WARNING: Removing unreachable block (ram,0x00014dc53e18) */
/* WARNING: Removing unreachable block (ram,0x00014dc53c60) */
/* WARNING: Removing unreachable block (ram,0x0001570230ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc53d00) */
/* WARNING: Removing unreachable block (ram,0x00014dc53d06) */
/* WARNING: Removing unreachable block (ram,0x00014dc53e1d) */
/* WARNING: Removing unreachable block (ram,0x00014dc53ea7) */
/* WARNING: Removing unreachable block (ram,0x000157853a52) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f45) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f50) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f4b) */

undefined8 FUN_14dc53bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -0x68) == 0) {
    uVar1 = FUN_160dbc8a9();
    return uVar1;
  }
  FUN_14d9f1940();
  uVar1 = FUN_156a5c46b(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dc53d0b FUN_14dc53d0b body=269 status=ok
// SIG undefined FUN_14dc53d0b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc53ead) */
/* WARNING: Removing unreachable block (ram,0x00015b36a275) */
/* WARNING: Removing unreachable block (ram,0x00014dc53e1d) */
/* WARNING: Removing unreachable block (ram,0x00014dc53ea7) */
/* WARNING: Removing unreachable block (ram,0x000157853a52) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f45) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f50) */

undefined8 FUN_14dc53d0b(longlong param_1)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_R14;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  *(longlong *)(param_1 + 0x10) = (in_RAX - unaff_R14) + *(longlong *)(param_1 + 0x10);
  FUN_165fcac52();
  if (-1 < (longlong)
           (~(unaff_R15 & ~*(ulonglong *)(unaff_retaddr + -0x50)) &
            (~*(ulonglong *)(unaff_retaddr + -0x50) | unaff_R15) ^ 0xffffffffffffffff)) {
    uVar1 = FUN_1625f9ffe();
    return uVar1;
  }
  FUN_15b31022b();
  uVar1 = (*(code *)0x1656ffad6)();
  return uVar1;
}



// FUNCTION 14dc53e1d thunk_FUN_14dc53e23 body=5 status=ok
// SIG undefined thunk_FUN_14dc53e23(void)

/* WARNING: Removing unreachable block (ram,0x00014dc53ead) */
/* WARNING: Removing unreachable block (ram,0x00015b36a275) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f45) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f50) */

undefined8 thunk_FUN_14dc53e23(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  uVar1 = FUN_162bb2b2c((~uVar2 | *(ulonglong *)(unaff_R12 + -0x58) & in_RAX ^ 0xffffffffffffffff) +
                        uVar2 + 1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                        unaff_RSI & ~(param_3 & ~in_RAX) ^ 0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14dc53e23 FUN_14dc53e23 body=601 status=ok
// SIG undefined FUN_14dc53e23(void)

/* WARNING: Removing unreachable block (ram,0x00014dc53ead) */
/* WARNING: Removing unreachable block (ram,0x00015b36a275) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f45) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc53f50) */

undefined8 FUN_14dc53e23(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  uVar1 = FUN_162bb2b2c((~uVar2 | *(ulonglong *)(unaff_R12 + -0x58) & in_RAX ^ 0xffffffffffffffff) +
                        uVar2 + 1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                        unaff_RSI & ~(param_3 & ~in_RAX) ^ 0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14dc53fe9 FUN_14dc53fe9 body=327 status=ok
// SIG undefined FUN_14dc53fe9(void)

longlong FUN_14dc53fe9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166c45c3c(0x76b4cf3,FUN_166c45c3c,param_3,0x76b4cfb);
  return (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x68)) + unaff_R15;
}



// FUNCTION 14dc541dc FUN_14dc541dc body=258 status=ok
// SIG undefined FUN_14dc541dc(void)

void FUN_14dc541dc(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined8 in_R10;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar4;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff792c6b4 + unaff_retaddr) = param_3;
  puVar2 = (undefined8 *)(&stack0xfffffffff792c6b4 + unaff_retaddr);
  *puVar2 = unaff_RDI;
  puVar1 = puVar2 + -1;
  *puVar1 = in_RAX;
  *(uint *)puVar1 = 0;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0xd00d7944;
  *(uint *)puVar1 = (uint)*puVar1 + 0x70cb962c;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x4b87ab76;
  *(undefined4 *)((longlong)puVar2 + -4) = 0xe99fcc29;
  *(int *)((longlong)puVar2 + -4) = *(int *)((longlong)puVar2 + -4) + 0x166033d7;
  uVar3 = *puVar1;
  puVar2[-1] = in_R10;
  uVar3 = uVar3 ^ 0xb5ea4d6;
  puVar2[-1] = puVar2[-1];
  puVar2[-2] = unaff_R15;
  puVar2[-2] = in_RAX;
  puVar2[-3] = uVar3;
  *(undefined8 *)(uVar3 + unaff_RBP) = param_3;
  puVar2[-4] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar3 < 0) * 0x80 |
               (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar2[-5] = unaff_RBP;
  if ((*(ushort *)(puVar2 + -4) & 0x80) != 0) {
    FUN_162d86984();
    return;
  }
  uVar4 = puVar2[-4];
  puVar2[-4] = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar4 & 0x800) != 0) * 0x800 | (ulonglong)((uVar4 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
               (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  if ((*(uint *)(puVar2 + -4) >> 7 & 1) == 0) {
    FUN_162d86984();
    return;
  }
  puVar2[-4] = param_3;
  *(undefined4 *)(puVar2 + -4) = 0x5e00a0;
  *(undefined4 *)((longlong)puVar2 + -0x1c) = 0;
  puVar1 = (ulonglong *)((longlong)puVar2 + puVar2[-4] + -0x5e00c0);
  *(undefined4 *)puVar1 = 0xa678eef7;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xfb417662;
  *(uint *)((longlong)puVar1 + 4) = *(uint *)((longlong)puVar1 + 4) ^ 0x4be899d;
  uVar3 = *(ulonglong *)((longlong)(uVar3 + unaff_RBP) + (*puVar1 ^ 0x59871137) + 8);
  *puVar1 = param_1;
  uVar4 = *puVar1;
  *puVar1 = 0x14dc54357;
  FUN_14deda599(param_1,FUN_14deda599,~(~uVar4 & uVar3) + uVar3);
  puVar1[1] = unaff_RSI;
  *puVar1 = unaff_RSI;
  puVar1[1] = (ulonglong)&LAB_14dc54369;
  return;
}



// FUNCTION 14dc542b6 FUN_14dc542b6 body=175 status=ok
// SIG undefined FUN_14dc542b6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc542b6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14deda599(param_1,FUN_14deda599,
                ~(~param_1 & *(ulonglong *)(unaff_RDI + -0x40)) + *(ulonglong *)(unaff_RDI + -0x40))
  ;
  return;
}



// FUNCTION 14dc544fd FUN_14dc544fd body=291 status=ok
// SIG undefined FUN_14dc544fd(void)

/* WARNING: Removing unreachable block (ram,0x000166392ae3) */
/* WARNING: Removing unreachable block (ram,0x00014dc545ac) */
/* WARNING: Removing unreachable block (ram,0x00014dc545b4) */
/* WARNING: Removing unreachable block (ram,0x00015af8ec65) */
/* WARNING: Removing unreachable block (ram,0x00015af8ecff) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed0f) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed0a) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed3f) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed3a) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed9b) */
/* WARNING: Removing unreachable block (ram,0x00015af8eda9) */
/* WARNING: Removing unreachable block (ram,0x00015af8edae) */
/* WARNING: Removing unreachable block (ram,0x00015af8edb4) */
/* WARNING: Removing unreachable block (ram,0x00015af8ed6f) */
/* WARNING: Removing unreachable block (ram,0x00015af8edb9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc544fd(void)

{
  undefined1 local_resc [28];
  
  FUN_15af8ec65(local_resc);
  return;
}



// FUNCTION 14dc54624 FUN_14dc54624 body=68 status=ok
// SIG undefined FUN_14dc54624(void)

void FUN_14dc54624(void)

{
  ulonglong in_RAX;
  char *pcVar1;
  ulonglong unaff_retaddr;
  
  pcVar1 = (char *)(in_RAX & 0xffffffffffffff04);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *(undefined4 *)(&stack0x00000008 + (unaff_retaddr ^ 0x414752ec)) = 0xffffffff;
  return;
}



// FUNCTION 14dc54721 FUN_14dc54721 body=579 status=ok
// SIG undefined FUN_14dc54721(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1626) */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c6) */
/* WARNING: Removing unreachable block (ram,0x00014dc547a9) */
/* WARNING: Removing unreachable block (ram,0x0001611cd1e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc547d4) */

void FUN_14dc54721(void)

{
  return;
}



// FUNCTION 14dc54848 FUN_14dc54848 body=112 status=ok
// SIG undefined FUN_14dc54848(void)

void FUN_14dc54848(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined8 local_res10;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc548b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (local_res10,param_2,param_3,param_4 ^ CONCAT44(unaff_retaddr_00,unaff_retaddr));
  return;
}



// FUNCTION 14dc54901 FUN_14dc54901 body=186 status=ok
// SIG undefined FUN_14dc54901(void)

void FUN_14dc54901(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_162ac21e8(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dc549c3 FUN_14dc549c3 body=285 status=ok
// SIG undefined FUN_14dc549c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001618252fc) */
/* WARNING: Removing unreachable block (ram,0x00016182537a) */
/* WARNING: Removing unreachable block (ram,0x000161825380) */
/* WARNING: Removing unreachable block (ram,0x000166b16274) */
/* WARNING: Removing unreachable block (ram,0x00016672ff5d) */
/* WARNING: Removing unreachable block (ram,0x00016672ff63) */
/* WARNING: Removing unreachable block (ram,0x00014dc54a51) */
/* WARNING: Removing unreachable block (ram,0x00014dc54a62) */
/* WARNING: Removing unreachable block (ram,0x00014dc54ad2) */
/* WARNING: Removing unreachable block (ram,0x00014dc54ade) */
/* WARNING: Removing unreachable block (ram,0x00014dc54ae3) */
/* WARNING: Removing unreachable block (ram,0x0001612f7e3f) */
/* WARNING: Removing unreachable block (ram,0x0001612f7f5a) */
/* WARNING: Removing unreachable block (ram,0x0001612f7f60) */
/* WARNING: Removing unreachable block (ram,0x00015af6669a) */
/* WARNING: Removing unreachable block (ram,0x00015af666e5) */
/* WARNING: Removing unreachable block (ram,0x00016672fec4) */
/* WARNING: Removing unreachable block (ram,0x00016672ff58) */
/* WARNING: Removing unreachable block (ram,0x00015af66850) */
/* WARNING: Removing unreachable block (ram,0x00015af66856) */
/* WARNING: Removing unreachable block (ram,0x00015af6685b) */
/* WARNING: Removing unreachable block (ram,0x00015af669fd) */
/* WARNING: Removing unreachable block (ram,0x00015af66a02) */
/* WARNING: Removing unreachable block (ram,0x00015af66a08) */
/* WARNING: Removing unreachable block (ram,0x00015af66a2a) */
/* WARNING: Removing unreachable block (ram,0x00015af66a2f) */
/* WARNING: Removing unreachable block (ram,0x000161c5904b) */
/* WARNING: Removing unreachable block (ram,0x000161c590cc) */
/* WARNING: Removing unreachable block (ram,0x000161c590d1) */
/* WARNING: Removing unreachable block (ram,0x00015b485514) */
/* WARNING: Removing unreachable block (ram,0x000161c590d7) */
/* WARNING: Removing unreachable block (ram,0x000161c59141) */
/* WARNING: Removing unreachable block (ram,0x0001565eb349) */
/* WARNING: Removing unreachable block (ram,0x0001565eb3ed) */
/* WARNING: Removing unreachable block (ram,0x0001565eb3f3) */
/* WARNING: Removing unreachable block (ram,0x000156849555) */
/* WARNING: Removing unreachable block (ram,0x000161c59147) */
/* WARNING: Removing unreachable block (ram,0x00016595099a) */
/* WARNING: Removing unreachable block (ram,0x000165950a12) */
/* WARNING: Removing unreachable block (ram,0x000165950a15) */
/* WARNING: Removing unreachable block (ram,0x000165950b6e) */
/* WARNING: Removing unreachable block (ram,0x000165950b6b) */
/* WARNING: Removing unreachable block (ram,0x000165950b6d) */
/* WARNING: Removing unreachable block (ram,0x000165950bd8) */
/* WARNING: Removing unreachable block (ram,0x000165950bf0) */
/* WARNING: Removing unreachable block (ram,0x000165950bf4) */
/* WARNING: Removing unreachable block (ram,0x000161c591e0) */
/* WARNING: Removing unreachable block (ram,0x000161c591e6) */
/* WARNING: Removing unreachable block (ram,0x000161c591eb) */
/* WARNING: Removing unreachable block (ram,0x000161c59262) */
/* WARNING: Removing unreachable block (ram,0x000161c59267) */
/* WARNING: Removing unreachable block (ram,0x000161c59276) */
/* WARNING: Removing unreachable block (ram,0x000161c5927b) */
/* WARNING: Removing unreachable block (ram,0x000161c59281) */
/* WARNING: Removing unreachable block (ram,0x000161c59286) */
/* WARNING: Removing unreachable block (ram,0x00014dc54a57) */

undefined8 FUN_14dc549c3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14db3b7c4();
  return uVar1;
}



// FUNCTION 14dc54ae3 FUN_14dc54ae3 body=155 status=ok
// SIG undefined FUN_14dc54ae3(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc54ae3(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  
  FUN_166a3d633(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + param_3)) &
                         (~param_1 & ~*(ulonglong *)(unaff_RDI + param_3) | param_1)));
  return;
}



// FUNCTION 14dc54df9 FUN_14dc54df9 body=16 status=ok
// SIG undefined FUN_14dc54df9(void)

void FUN_14dc54df9(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc5505c FUN_14dc5505c body=882 status=ok
// SIG undefined FUN_14dc5505c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc55156) */
/* WARNING: Removing unreachable block (ram,0x00014dc55162) */
/* WARNING: Removing unreachable block (ram,0x00016633920e) */
/* WARNING: Removing unreachable block (ram,0x000166339229) */
/* WARNING: Removing unreachable block (ram,0x000166339299) */
/* WARNING: Removing unreachable block (ram,0x00016633929f) */
/* WARNING: Removing unreachable block (ram,0x000160ece87f) */
/* WARNING: Removing unreachable block (ram,0x00014dc551f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc551fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc55203) */
/* WARNING: Removing unreachable block (ram,0x00014dc55279) */
/* WARNING: Removing unreachable block (ram,0x00014dc5527d) */
/* WARNING: Removing unreachable block (ram,0x00014dc552aa) */
/* WARNING: Removing unreachable block (ram,0x00014dc552af) */
/* WARNING: Removing unreachable block (ram,0x00014dc552b5) */
/* WARNING: Removing unreachable block (ram,0x00014dc552ba) */

undefined8
FUN_14dc5505c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  FUN_157165de0();
  puVar1 = (ulonglong *)(&stack0xfffffffff326dd7e + unaff_RSI);
  uVar4 = *puVar1;
  *puVar1 = in_R10;
  *(ulonglong *)(&stack0xfffffffff326dd76 + unaff_RSI) = unaff_R12 ^ uVar4;
  *(ulonglong *)(&stack0xfffffffff326dd6e + unaff_RSI) =
       -1 - ((unaff_R15 ^ 0xffffffffffffffff | uVar3) & ~(uVar3 & ~unaff_R15));
  puVar2 = (ulonglong *)(&stack0xfffffffff326dd86 + unaff_RSI);
  uVar3 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | uVar4;
  *puVar2 = (~uVar4 | uVar3) & *puVar2 ^ 0xffffffffffffffff;
  uVar6 = *(undefined8 *)(&stack0xfffffffff326dd76 + unaff_RSI);
  uVar5 = *puVar1;
  *puVar1 = *(ulonglong *)(&stack0xfffffffff326dd6e + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff326dd76 + unaff_RSI) = param_2;
  *(ulonglong *)(&stack0xfffffffff326dd6e + unaff_RSI) = uVar4;
  uVar3 = *(ulonglong *)(&stack0xfffffffff326dd6e + unaff_RSI);
  *(longlong *)(&stack0xfffffffff326dd6e + unaff_RSI) = unaff_R13;
  *(ulonglong *)(&stack0xfffffffff326dd66 + unaff_RSI) = uVar5;
  *(undefined8 *)(&stack0xfffffffff326dd5e + unaff_RSI) = uVar6;
  *(ulonglong *)(&stack0xfffffffff326dd56 + unaff_RSI) =
       *(ulonglong *)(&stack0xfffffffff326dd8e + unaff_RSI);
  *(longlong *)(&stack0xfffffffff326dd8e + unaff_RSI) =
       -*(longlong *)(&stack0xfffffffff326dd8e + unaff_RSI);
  *(longlong *)(&stack0xfffffffff326dd8e + unaff_RSI) =
       *(longlong *)(&stack0xfffffffff326dd8e + unaff_RSI) + -1;
  *(ulonglong *)(&stack0xfffffffff326dd8e + unaff_RSI) =
       *(ulonglong *)(&stack0xfffffffff326dd8e + unaff_RSI) | uVar4;
  uVar4 = *(ulonglong *)(&stack0xfffffffff326dd8e + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff326dd8e + unaff_RSI) = 0;
  *(ulonglong *)(&stack0xfffffffff326dd8e + unaff_RSI) =
       *(longlong *)(&stack0xfffffffff326dd8e + unaff_RSI) +
       ~(~(uVar3 & ~*(ulonglong *)(&stack0xfffffffff326dd56 + unaff_RSI)) & uVar4);
  uVar3 = *puVar1;
  *puVar1 = *(ulonglong *)(&stack0xfffffffff326dd66 + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffff326dd76 + unaff_RSI) = uVar3;
  *(undefined8 *)(&stack0xfffffffff326dd6e + unaff_RSI) = param_4;
  uVar6 = FUN_162a8654d();
  return uVar6;
}



// FUNCTION 14dc553e6 FUN_14dc553e6 body=681 status=ok
// SIG undefined FUN_14dc553e6(void)

/* WARNING: Removing unreachable block (ram,0x00014da57de1) */
/* WARNING: Removing unreachable block (ram,0x000164be51e0) */
/* WARNING: Removing unreachable block (ram,0x000164be51e6) */
/* WARNING: Removing unreachable block (ram,0x00014da57cac) */
/* WARNING: Removing unreachable block (ram,0x00014da57d2b) */
/* WARNING: Removing unreachable block (ram,0x000164b796eb) */
/* WARNING: Removing unreachable block (ram,0x00014da57d31) */
/* WARNING: Removing unreachable block (ram,0x00014da57dd6) */
/* WARNING: Removing unreachable block (ram,0x00014da57ddc) */
/* WARNING: Removing unreachable block (ram,0x0001660372e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc5551e) */
/* WARNING: Removing unreachable block (ram,0x00014dc5548d) */
/* WARNING: Removing unreachable block (ram,0x00014dc55518) */
/* WARNING: Removing unreachable block (ram,0x000164be5155) */

void FUN_14dc553e6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_R15 ^ 0x4182c1a9)) = unaff_retaddr;
  uVar1 = ~(~(0xffffffffffffffffU - param_5) & ~param_1);
  *(undefined8 *)(uVar1 - 8) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined **)(uVar1 - 0x18) = &DAT_16233986a;
  FUN_166b7159d(local_res18,param_2,param_3,0x16886519c);
  return;
}



// FUNCTION 14dc555b2 FUN_14dc555b2 body=379 status=ok
// SIG undefined FUN_14dc555b2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc55640) */

void FUN_14dc555b2(byte param_1)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ushort *puVar3;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong in_stack_00000008;
  undefined8 local_res10;
  ulonglong uStackX_20;
  longlong in_stack_00000028;
  
  puVar3 = (ushort *)(in_stack_00000008 + 0x10);
  *puVar3 = (-0x101 - (*puVar3 | 0xfeff)) + *puVar3;
  LOCK();
  bVar4 = in_AL < FUN_14d7aae2a;
  bVar5 = SBORROW1(in_AL,FUN_14d7aae2a);
  cVar1 = in_AL - FUN_14d7aae2a;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = FUN_14d7aae2a;
  }
  FUN_14d7aae2a = bVar2;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res10;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R15;
  uVar6 = *(ulonglong *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R11;
  *(ulonglong *)(in_stack_00000028 + -0x28) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x1eff1be;
  *(undefined8 *)(in_stack_00000028 + -0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000028 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc558d2 FUN_14dc558d2 body=122 status=ok
// SIG undefined FUN_14dc558d2(void)

void FUN_14dc558d2(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined2 *in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined2 in_R9W;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  *in_RAX = in_R9W;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = 0;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 & unaff_RBP;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & (uVar2 | unaff_RBP);
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_8;
  FUN_1661214f1();
  return;
}



// FUNCTION 14dc5594f FUN_14dc5594f body=22 status=ok
// SIG undefined FUN_14dc5594f(void)

void FUN_14dc5594f(void)

{
  return;
}



// FUNCTION 14dc55bf7 FUN_14dc55bf7 body=399 status=ok
// SIG undefined FUN_14dc55bf7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc55c40) */
/* WARNING: Removing unreachable block (ram,0x00014dc55c96) */
/* WARNING: Removing unreachable block (ram,0x00014dc55c51) */
/* WARNING: Removing unreachable block (ram,0x0001576132da) */
/* WARNING: Removing unreachable block (ram,0x00014dc55cfb) */
/* WARNING: Removing unreachable block (ram,0x00014dc55d01) */
/* WARNING: Removing unreachable block (ram,0x00014dc55d06) */

void FUN_14dc55bf7(void)

{
  (*(code *)0x14dc57852)();
  return;
}



// FUNCTION 14dc55dac FUN_14dc55dac body=102 status=ok
// SIG undefined FUN_14dc55dac(void)

void FUN_14dc55dac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong unaff_RBX;
  uint unaff_ESI;
  undefined8 unaff_retaddr;
  
  uVar1 = *(uint *)(unaff_RBX + 4);
  *(uint *)(unaff_RBX + 4) = ~*(uint *)(unaff_RBX + 4);
  *(uint *)(unaff_RBX + 4) = (~(uVar1 & 0xa29a7cd4) + 0xa29a7cd4) - *(int *)(unaff_RBX + 4);
  *(uint *)(unaff_RBX + 4) = ~((~unaff_ESI | 0x5d65832b) & *(uint *)(unaff_RBX + 4));
  FUN_1650a2e5f(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc55e12 FUN_14dc55e12 body=63 status=ok
// SIG undefined FUN_14dc55e12(void)

void FUN_14dc55e12(void)

{
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -0x20) = &LAB_14dc55e53;
  return;
}



// FUNCTION 14dc55f2a FUN_14dc55f2a body=474 status=ok
// SIG undefined FUN_14dc55f2a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5605b) */

void FUN_14dc55f2a(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_16619dc33();
  uVar1 = (~(uVar1 & 0xe9fe1b48f8ceff48) + 0xe9fe1b48f8ceff48) - ~uVar1;
                    /* WARNING: Read-only address (ram,0x00016619dc43) is written */
                    /* WARNING: Read-only address (ram,0x00016619dc43) is written */
                    /* WARNING: Read-only address (ram,0x00016619dc43) is written */
                    /* WARNING: Read-only address (ram,0x00016619dc43) is written */
  uRam000000016619dc43 = ~(-~uVar1 - (~(~(uVar1 | 0xe9fe1b48f8ceff48) + 0xe9fe1b48f8ceff49) + 2));
  return;
}



// FUNCTION 14dc5619f FUN_14dc5619f body=3 status=ok
// SIG undefined FUN_14dc5619f(void)

void FUN_14dc5619f(void)

{
  return;
}



// FUNCTION 14dc562d5 FUN_14dc562d5 body=191 status=ok
// SIG undefined FUN_14dc562d5(void)

longlong FUN_14dc562d5(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ulonglong in_R9;
  undefined8 in_R11;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  ulonglong in_stack_00000028;
  
  uVar1 = ~(in_stack_00000028 & in_RAX) & (in_stack_00000028 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x28) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = 0x14dc56394;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14dbe817f;
  return (in_R9 - (~(local_res18 & in_RAX) | in_R9)) + ~(local_res18 & in_RAX);
}



// FUNCTION 14dc56420 FUN_14dc56420 body=4 status=ok
// SIG undefined FUN_14dc56420(void)

void FUN_14dc56420(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc56422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc56538 FUN_14dc56538 body=397 status=ok
// SIG undefined FUN_14dc56538(void)

/* WARNING: Removing unreachable block (ram,0x00014dc56637) */
/* WARNING: Removing unreachable block (ram,0x00014dc56670) */
/* WARNING: Removing unreachable block (ram,0x00014dc56676) */
/* WARNING: Removing unreachable block (ram,0x00014dc56681) */
/* WARNING: Removing unreachable block (ram,0x00014dc565e6) */

undefined8 FUN_14dc56538(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -8);
  if (-1 < (longlong)((~param_1 + uVar1) - (~param_1 & uVar1))) {
    uVar2 = FUN_161909be3();
    return uVar2;
  }
  uVar2 = in_R10;
  FUN_162113153(FUN_162113153,param_2,param_3,param_4,in_stack_00000010 ^ param_1);
  uVar1 = (~(~uVar1 & param_1) + param_1) - uVar1 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = uVar2;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_161909d1a;
  uVar2 = FUN_1626171d4();
  return uVar2;
}



// FUNCTION 14dc56969 FUN_14dc56969 body=177 status=ok
// SIG undefined FUN_14dc56969(void)

/* WARNING: Removing unreachable block (ram,0x00014dc56a1a) */
/* WARNING: Removing unreachable block (ram,0x00014dc56aa7) */
/* WARNING: Removing unreachable block (ram,0x00014dc56ab8) */
/* WARNING: Removing unreachable block (ram,0x00014dc56ab3) */
/* WARNING: Removing unreachable block (ram,0x00014dc56aa2) */
/* WARNING: Removing unreachable block (ram,0x00015b46baca) */
/* WARNING: Removing unreachable block (ram,0x00014dc56a0f) */

void FUN_14dc56969(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 local_res20;
  
  uVar2 = local_res20 ^ unaff_RBP;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  puVar1 = (ulonglong *)(uVar2 - 0x10);
  *puVar1 = 0x170d3ad06;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  *puVar1 = ~*puVar1;
  *puVar1 = -*puVar1 - 0xacd818a;
  uVar3 = *puVar1;
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  uVar4 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = in_RAX;
  *(undefined8 *)(uVar2 - 0x10) = uVar4;
  uVar4 = *(undefined8 *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 8) = uVar3;
  FUN_14d7c2205(param_1,uVar4);
  return;
}



// FUNCTION 14dc56a1a FUN_14dc56a1a body=446 status=ok
// SIG undefined FUN_14dc56a1a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc56ab8) */

void FUN_14dc56a1a(void)

{
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_15b46bb0e;
  *(longlong *)(local_res10 + -0x18) = local_res10 + -0x10;
  FUN_14d7abe67();
  return;
}



// FUNCTION 14dc56bdc FUN_14dc56bdc body=37 status=ok
// SIG undefined FUN_14dc56bdc(void)

undefined8 FUN_14dc56bdc(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  undefined8 local_res8;
  undefined8 uStackX_20;
  
  *(undefined8 *)((longlong)&uStackX_20 + (unaff_R13 - (in_RAX ^ 0x53414152))) = param_1;
  return local_res8;
}



// FUNCTION 14dc56d34 thunk_FUN_14dc56d3a body=5 status=ok
// SIG undefined thunk_FUN_14dc56d3a(void)

void thunk_FUN_14dc56d3a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161b21af4(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dc56d3a FUN_14dc56d3a body=158 status=ok
// SIG undefined FUN_14dc56d3a(void)

void FUN_14dc56d3a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161b21af4(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dc56eef FUN_14dc56eef body=23 status=ok
// SIG undefined FUN_14dc56eef(void)

void FUN_14dc56eef(void)

{
  return;
}



// FUNCTION 14dc57092 FUN_14dc57092 body=352 status=ok
// SIG undefined FUN_14dc57092(void)

/* WARNING: Removing unreachable block (ram,0x00014dc57147) */
/* WARNING: Removing unreachable block (ram,0x00014dc5714d) */
/* WARNING: Removing unreachable block (ram,0x0001658c7340) */

void FUN_14dc57092(void)

{
  thunk_FUN_1658c7346();
  return;
}



// FUNCTION 14dc572a9 FUN_14dc572a9 body=162 status=ok
// SIG undefined FUN_14dc572a9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc57310) */

undefined8 FUN_14dc572a9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_1;
  puVar1 = (undefined8 *)(local_res18 + -0x10);
  *puVar1 = param_1;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x16ee8a;
  *puVar1 = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *puVar1 = FUN_15b3d5987;
  return *(undefined8 *)(local_res18 + -0x20);
}



// FUNCTION 14dc57324 FUN_14dc57324 body=112 status=ok
// SIG undefined FUN_14dc57324(void)

void FUN_14dc57324(undefined8 param_1,undefined8 param_2)

{
  FUN_162f1fb53(param_1,param_2);
  FUN_16541436c();
  return;
}



// FUNCTION 14dc57395 FUN_14dc57395 body=159 status=ok
// SIG undefined FUN_14dc57395(void)

void FUN_14dc57395(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16541436c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc574d9 FUN_14dc574d9 body=168 status=ok
// SIG undefined FUN_14dc574d9(void)

void FUN_14dc574d9(void)

{
  FUN_162d541ee();
  return;
}



// FUNCTION 14dc57582 FUN_14dc57582 body=131 status=ok
// SIG undefined FUN_14dc57582(void)

void FUN_14dc57582(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  longlong local_res8;
  longlong local_res18;
  
  LOCK();
  if ((char)in_RAX == DAT_14d7ac4fd) {
    DAT_14d7ac4fd = (char)local_res8;
  }
  else {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7ac4fd);
  }
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined4 *)(local_res18 + -0x18) = 0x113e9e19;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  *(code **)(local_res18 + -0x20) = FUN_14dc57606;
  FUN_14dd46b5f();
  *(ulonglong *)(local_res18 + -0x18) = unaff_RBX;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  uVar3 = *(ulonglong *)(local_res8 + -0x88);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res8 + -0x78);
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  *(longlong *)(local_res18 + -0x18) = local_res8;
  plVar1 = (longlong *)(local_res18 + -0x20);
  *plVar1 = local_res8;
  *(undefined1 *)plVar1 = 0x10;
  (*(code *)0x156e5911e)
            (*plVar1,uVar4 & unaff_RBX,(uVar3 - unaff_RBX) + (~unaff_RBX | uVar3) * -2 + -2,
             param_3 + ~(~param_4 | ~uVar2) * -2);
  return;
}



// FUNCTION 14dc57606 FUN_14dc57606 body=265 status=ok
// SIG undefined FUN_14dc57606(void)

void FUN_14dc57606(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  
  (*(code *)0x156e5911e)
            (0x10,*(ulonglong *)(param_1 + -0x78) & unaff_RBX,
             (*(ulonglong *)(param_1 + -0x88) - unaff_RBX) +
             (~unaff_RBX | *(ulonglong *)(param_1 + -0x88)) * -2 + -2,
             param_3 + ~(~param_4 | ~unaff_RBX) * -2);
  return;
}



// FUNCTION 14dc57699 FUN_14dc57699 body=500 status=ok
// SIG undefined FUN_14dc57699(void)

/* WARNING: Removing unreachable block (ram,0x0001566f50c2) */
/* WARNING: Removing unreachable block (ram,0x00014dc57726) */

void FUN_14dc57699(void)

{
  return;
}



// FUNCTION 14dc577c6 FUN_14dc577c6 body=331 status=ok
// SIG undefined FUN_14dc577c6(void)

/* WARNING: Removing unreachable block (ram,0x00014dc57902) */
/* WARNING: Removing unreachable block (ram,0x00014dc57914) */
/* WARNING: Removing unreachable block (ram,0x000166cdf5af) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc577c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1625d3e5f(param_1,param_2,param_3);
  FUN_166cdf5af();
  return;
}



// FUNCTION 14dc57914 FUN_14dc57914 body=170 status=ok
// SIG undefined FUN_14dc57914(void)

void FUN_14dc57914(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  FUN_164707579(local_res10,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc57a8e FUN_14dc57a8e body=71 status=ok
// SIG undefined FUN_14dc57a8e(void)

void FUN_14dc57a8e(void)

{
  return;
}



// FUNCTION 14dc57ba7 FUN_14dc57ba7 body=35 status=ok
// SIG undefined FUN_14dc57ba7(void)

void FUN_14dc57ba7(void)

{
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0x8a1ede;
  FUN_14d85d504(local_res8);
  return;
}



// FUNCTION 14dc57c69 FUN_14dc57c69 body=279 status=ok
// SIG undefined FUN_14dc57c69(void)

/* WARNING: Removing unreachable block (ram,0x0001614f7837) */
/* WARNING: Removing unreachable block (ram,0x0001614f7842) */
/* WARNING: Removing unreachable block (ram,0x0001614f783d) */
/* WARNING: Removing unreachable block (ram,0x00014dc57ccd) */

void FUN_14dc57c69(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R15;
  ulonglong uStack_20;
  
  if (unaff_RDI == 1) {
    FUN_1567a8419();
    return;
  }
  if (unaff_RDI == 2) {
    FUN_16261f941();
    return;
  }
  if (unaff_RDI == 3) {
    return;
  }
  if (unaff_RDI == 4) {
    FUN_15b2300b5();
    return;
  }
  if (unaff_RDI == 5) {
    return;
  }
  lVar5 = 0;
  uVar4 = FUN_1652f7c33();
  lVar5 = lVar5 - param_2;
  puVar1 = (ulonglong *)(&stack0xfffffffffffffff0 + lVar5);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ DAT_1652f7bbb;
  uVar2 = *puVar1;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = DAT_1652f7c0b;
  uVar6 = (0xffffffffffffffff - unaff_R15 | *(ulonglong *)(&stack0xfffffffffffffff0 + lVar5)) &
          (~*(ulonglong *)(&stack0xfffffffffffffff0 + lVar5) | unaff_R15) ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0xfffffffffffffff0 + lVar5) = uVar2 ^ unaff_R15;
  uVar3 = *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = uVar4;
  *(ulonglong *)(&stack0xffffffffffffffe8 + lVar5) =
       DAT_1652f7c03 + unaff_R15 + (DAT_1652f7c03 & unaff_R15) * -2;
  uVar2 = *(ulonglong *)(&stack0xffffffffffffffe8 + lVar5);
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
  *(longlong *)(&stack0xffffffffffffffe8 + lVar5) =
       *(longlong *)(&stack0xffffffffffffffe8 + lVar5) - DAT_1652f7bcb;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = param_3;
  *(undefined8 *)((longlong)&uStack_20 + lVar5) = 0x15714a457;
  FUN_14e1762fc(uVar3);
  uVar3 = *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5);
  *(ulonglong *)(&stack0xfffffffffffffff8 + lVar5) =
       *(ulonglong *)(&stack0xfffffffffffffff8 + lVar5) & unaff_R15;
  *(ulonglong *)(&stack0xfffffffffffffff8 + lVar5) =
       ~*(ulonglong *)(&stack0xfffffffffffffff8 + lVar5);
  *(code **)(&stack0xffffffffffffffe8 + lVar5) = FUN_1652f7c33;
  *(undefined8 *)((longlong)&uStack_20 + lVar5) = uVar3;
  *(ulonglong *)(&stack0xfffffffffffffff8 + lVar5) =
       ((uVar2 | unaff_R15) - (*(ulonglong *)(&stack0xfffffffffffffff8 + lVar5) | uVar2 | unaff_R15)
       ) + *(longlong *)(&stack0xfffffffffffffff8 + lVar5);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = in_R10;
  *(code **)(&stack0xffffffffffffffe8 + lVar5) = FUN_14e1762fc;
  uVar2 = *(ulonglong *)(&stack0x00000000 + lVar5);
  *(ulonglong *)(&stack0x00000000 + lVar5) = ~*(ulonglong *)(&stack0x00000000 + lVar5);
  *(ulonglong *)(&stack0x00000000 + lVar5) = *(ulonglong *)(&stack0x00000000 + lVar5) | unaff_R15;
  *(ulonglong *)((longlong)&uStack_20 + lVar5) = uVar6;
  *(ulonglong *)(&stack0x00000000 + lVar5) =
       ~((~unaff_R15 | uVar2) & *(ulonglong *)(&stack0x00000000 + lVar5));
  FUN_1667065a8();
  return;
}



// FUNCTION 14dc57d5c FUN_14dc57d5c body=132 status=ok
// SIG undefined FUN_14dc57d5c(void)

void FUN_14dc57d5c(ushort param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  ushort local_res18;
  
  local_res18 = 0xffff - (local_res18 & param_1) & (param_4 | param_1);
  (*(code *)&LAB_165111f54)
            (local_res10,(local_res18 + 0x100) - (local_res18 & 0x100),param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc57de1 FUN_14dc57de1 body=152 status=ok
// SIG undefined FUN_14dc57de1(void)

void FUN_14dc57de1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d9afa3c(*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,param_2,
                (in_RAX - (~param_3 | in_RAX)) + ~param_3);
  return;
}



// FUNCTION 14dc57f14 FUN_14dc57f14 body=151 status=ok
// SIG undefined FUN_14dc57f14(void)

/* WARNING: Removing unreachable block (ram,0x00014dc57fad) */

void FUN_14dc57f14(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  undefined2 unaff_SI;
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x50) ^ param_1)) {
    thunk_FUN_14dd62e5f(param_1,~(param_1 & ~*(ulonglong *)(unaff_RDI + -0x38) ^ 0xffffffffffffffff)
                                | ~(~*(ulonglong *)(unaff_RDI + -0x38) | param_1));
    return;
  }
  FUN_156edf142(param_1,CONCAT62((int6)(*(ulonglong *)(unaff_RDI + -0x60) + param_3 >> 0x10),
                                 unaff_SI),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dc57fad FUN_14dc57fad body=160 status=ok
// SIG undefined FUN_14dc57fad(void)

void FUN_14dc57fad(undefined8 param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 in_stack_00000010;
  
  FUN_160f59b95(param_1,in_stack_00000010,CONCAT44(local_resc,local_res8));
  return;
}



// FUNCTION 14dc580fc FUN_14dc580fc body=162 status=ok
// SIG undefined FUN_14dc580fc(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5819a) */
/* WARNING: Removing unreachable block (ram,0x00014dc58184) */

void FUN_14dc580fc(void)

{
  FUN_166c2fc44();
  return;
}



// FUNCTION 14dc581a0 FUN_14dc581a0 body=173 status=ok
// SIG undefined FUN_14dc581a0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc581a0(void)

{
  FUN_1669dc213();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc5824f FUN_14dc5824f body=278 status=ok
// SIG undefined FUN_14dc5824f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc582d0) */
/* WARNING: Removing unreachable block (ram,0x000161cd06c5) */

void FUN_14dc5824f(void)

{
  FUN_161cd06c5();
  return;
}



// FUNCTION 14dc583f3 FUN_14dc583f3 body=149 status=ok
// SIG undefined FUN_14dc583f3(void)

void FUN_14dc583f3(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_15690298a(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14dc58488 FUN_14dc58488 body=162 status=ok
// SIG undefined FUN_14dc58488(void)

void FUN_14dc58488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_15ba0fd8a(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14dc5852a FUN_14dc5852a body=163 status=ok
// SIG undefined FUN_14dc5852a(void)

void FUN_14dc5852a(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  uint uVar3;
  int iVar4;
  undefined8 uStackX_18;
  
  uVar2 = param_1 << 0xc | param_1 >> 0x14;
  uVar3 = 0xfffff000 - ((~(param_1 << 0xc) - 0x1000) - ~uVar2);
  iVar4 = uVar3 + uVar2;
  if (!CARRY4(uVar3,uVar2)) {
    FUN_1619ebc23(iVar4);
    return;
  }
  if ((!CARRY4(uVar3,uVar2)) && (iVar4 != 0)) {
    pcVar1 = (code *)swi(0x2e);
    (*pcVar1)();
    *(undefined8 *)~((~unaff_RBP | uStackX_18) & (~uStackX_18 | unaff_RBP)) = 0x15ef022;
    FUN_15b3d5987();
    return;
  }
  FUN_1619ebc23(iVar4);
  return;
}



// FUNCTION 14dc585ce FUN_14dc585ce body=83 status=ok
// SIG undefined FUN_14dc585ce(void)

void FUN_14dc585ce(void)

{
  code *pcVar1;
  ulonglong unaff_RBP;
  undefined8 local_res20;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *(undefined8 *)~((~unaff_RBP | local_res20) & (~local_res20 | unaff_RBP)) = 0x15ef022;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dc5866a FUN_14dc5866a body=125 status=ok
// SIG undefined FUN_14dc5866a(void)

longlong FUN_14dc5866a(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  
  return unaff_RBX +
         ((-~param_1 - (~(~in_RAX & (param_1 ^ 0xffffffffffffffff) | in_RAX) + 2)) + 1) * -2;
}



// FUNCTION 14dc586f9 FUN_14dc586f9 body=19 status=ok
// SIG undefined FUN_14dc586f9(void)

void FUN_14dc586f9(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc58810 FUN_14dc58810 body=96 status=ok
// SIG undefined FUN_14dc58810(void)

void FUN_14dc58810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x28) = 0;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x28);
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x14dc5888e;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14dc58949 FUN_14dc58949 body=142 status=ok
// SIG undefined FUN_14dc58949(void)

void FUN_14dc58949(uint param_1,uint param_2,undefined8 param_3)

{
  int in_EAX;
  uint uVar1;
  undefined8 local_res20;
  
  uVar1 = ((~(in_EAX + 2U) + 1) - ~param_1) - ~param_2;
  FUN_16223c28e(FUN_16223c28e,uVar1 * 0x20000 | uVar1 >> 0xf,param_3,local_res20);
  return;
}



// FUNCTION 14dc589df FUN_14dc589df body=187 status=ok
// SIG undefined FUN_14dc589df(void)

/* WARNING: Removing unreachable block (ram,0x000157549370) */
/* WARNING: Removing unreachable block (ram,0x000157549360) */
/* WARNING: Removing unreachable block (ram,0x00014dc58b2a) */
/* WARNING: Removing unreachable block (ram,0x00014dc58b55) */
/* WARNING: Removing unreachable block (ram,0x00014dc58b34) */

void FUN_14dc589df(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong unaff_RDI;
  undefined8 in_R11;
  longlong lVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  
  lVar5 = *(ulonglong *)(unaff_R13 + -0x98) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x98) & unaff_R15) * -2;
  uVar4 = local_res8 + unaff_R15 + (local_res8 & unaff_R15) * -2;
  if (((longlong)uVar4 >= 0) && ((longlong)uVar4 < 0)) {
    uVar2 = *(ulonglong *)(unaff_RDI + -0x70);
    uVar3 = (~(~uVar2 & uVar4) + uVar4) - uVar2;
    FUN_161ba1f31(uVar4,FUN_161ba1f31,~((~uVar3 | ~uVar4 | uVar2) + uVar3 + 1),
                  (~param_3 | param_4) + unaff_RBX + 1);
    FUN_162b66239();
    return;
  }
  *(undefined8 *)(uVar4 - 8) = in_R11;
  *(longlong *)(uVar4 - 0x10) = lVar5;
  plVar1 = (longlong *)(uVar4 - 0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar5;
  *plVar1 = -*plVar1;
  *(undefined8 *)(uVar4 - 0x20) = unaff_retaddr;
  FUN_1572bbb08(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14dc58a9b FUN_14dc58a9b body=143 status=ok
// SIG undefined FUN_14dc58a9b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc58b2a) */
/* WARNING: Removing unreachable block (ram,0x00014dc58b34) */
/* WARNING: Removing unreachable block (ram,0x00014dc58b55) */

void FUN_14dc58a9b(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = (~(~uVar1 & param_1) + param_1) - uVar1;
  FUN_161ba1f31(param_1,FUN_161ba1f31,~((~uVar2 | ~param_1 | uVar1) + uVar2 + 1),
                (~param_3 | param_4) + unaff_RBX + 1);
  FUN_162b66239();
  return;
}



// FUNCTION 14dc58b2a FUN_14dc58b2a body=73 status=ok
// SIG undefined FUN_14dc58b2a(void)

void FUN_14dc58b2a(void)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  return;
}



// FUNCTION 14dc58d24 FUN_14dc58d24 body=311 status=ok
// SIG undefined FUN_14dc58d24(void)

/* WARNING: Removing unreachable block (ram,0x00014dc58da9) */
/* WARNING: Removing unreachable block (ram,0x00014dc58daf) */
/* WARNING: Removing unreachable block (ram,0x00014dc58e41) */
/* WARNING: Removing unreachable block (ram,0x000156ea1346) */

undefined8 FUN_14dc58d24(void)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x29a9d) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  uVar1 = FUN_161bd0643();
  return uVar1;
}



// FUNCTION 14dc58f2e FUN_14dc58f2e body=181 status=ok
// SIG undefined FUN_14dc58f2e(void)

void FUN_14dc58f2e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14e178c0a(param_1,-~*(ulonglong *)(unaff_RDI + -0x68) - 1 ^ param_1);
  FUN_16131bb16();
  return;
}



// FUNCTION 14dc58fe4 FUN_14dc58fe4 body=162 status=ok
// SIG undefined FUN_14dc58fe4(void)

/* WARNING: Removing unreachable block (ram,0x0001663bed3b) */
/* WARNING: Removing unreachable block (ram,0x0001663bed41) */
/* WARNING: Removing unreachable block (ram,0x0001663bed57) */

void FUN_14dc58fe4(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc5667) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0xc5668) {
    if (unaff_RSI != 0xc5821) {
      return;
    }
    FUN_16131bb16(param_1);
    return;
  }
  FUN_1663beca1(param_1,param_2);
  return;
}



// FUNCTION 14dc59086 FUN_14dc59086 body=59 status=ok
// SIG undefined FUN_14dc59086(void)

void FUN_14dc59086(void)

{
  return;
}



// FUNCTION 14dc590ff FUN_14dc590ff body=321 status=ok
// SIG undefined FUN_14dc590ff(void)

/* WARNING: Removing unreachable block (ram,0x00014dc591d9) */

void FUN_14dc590ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160bc0907(param_1,param_2,param_3);
  FUN_1651c286a();
  return;
}



// FUNCTION 14dc592c6 FUN_14dc592c6 body=162 status=ok
// SIG undefined FUN_14dc592c6(void)

void FUN_14dc592c6(void)

{
  return;
}



// FUNCTION 14dc59369 FUN_14dc59369 body=169 status=ok
// SIG undefined FUN_14dc59369(void)

void FUN_14dc59369(undefined8 param_1)

{
  undefined2 in_stack_00000040;
  
  FUN_1625984ce(param_1,0x6615d18f,in_stack_00000040,0xffffffff9ad2277f);
  return;
}



// FUNCTION 14dc59412 FUN_14dc59412 body=449 status=ok
// SIG undefined FUN_14dc59412(void)

/* WARNING: Removing unreachable block (ram,0x00014dc595b3) */
/* WARNING: Removing unreachable block (ram,0x00014dc595be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc59412(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong in_R11;
  undefined8 local_res18;
  
  uVar1 = ((param_1 - (local_res18 | param_1)) + local_res18 ^ 0xffffffffffffffff) &
          (in_R11 + local_res18 | param_1);
  FUN_161713675(uVar1,param_2,param_3);
  FUN_1624ba374(uVar1,param_2);
  (*(code *)0x164b232de)(0);
  return;
}



// FUNCTION 14dc59908 FUN_14dc59908 body=580 status=ok
// SIG undefined FUN_14dc59908(void)

/* WARNING: Removing unreachable block (ram,0x0001628dddb5) */
/* WARNING: Removing unreachable block (ram,0x0001628dddc0) */
/* WARNING: Removing unreachable block (ram,0x00014dc59ac5) */
/* WARNING: Removing unreachable block (ram,0x00014dc59ad0) */
/* WARNING: Removing unreachable block (ram,0x00014dc59acb) */
/* WARNING: Removing unreachable block (ram,0x0001628dddbb) */
/* WARNING: Removing unreachable block (ram,0x00014dc599aa) */
/* WARNING: Removing unreachable block (ram,0x00014dc59a23) */
/* WARNING: Removing unreachable block (ram,0x00014dc59a29) */
/* WARNING: Removing unreachable block (ram,0x0001622a4a26) */
/* WARNING: Removing unreachable block (ram,0x0001622a4a2c) */
/* WARNING: Removing unreachable block (ram,0x0001656c6343) */
/* WARNING: Removing unreachable block (ram,0x000162692f87) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

ulonglong FUN_14dc59908(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong unaff_R12;
  undefined8 unaff_R13;
  
  uVar5 = *(ulonglong *)(unaff_R12 + -0x90) ^ in_RAX;
  uVar3 = *(ulonglong *)(unaff_R12 + -0x98);
  uVar4 = *(ulonglong *)(unaff_R12 + -0xa0);
  uVar1 = ~(*(ulonglong *)(unaff_R12 + -0x68) & in_RAX) &
          (*(ulonglong *)(unaff_R12 + -0x68) | in_RAX);
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(ulonglong *)(uVar1 - 0x10) = uVar5;
  *(ulonglong *)(uVar1 - 0x18) = uVar5;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 0x20) = &LAB_162ee60a9;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(ulonglong *)(uVar1 - 0x18) = uVar4 ^ in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = param_1;
  *(undefined8 *)(uVar1 - 8) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(code **)(uVar1 - 0x10) = thunk_FUN_15b642ca5;
  return ~((~in_RAX | uVar3) & (~uVar3 | in_RAX));
}



// FUNCTION 14dc59a29 FUN_14dc59a29 body=304 status=ok
// SIG undefined FUN_14dc59a29(void)

/* WARNING: Removing unreachable block (ram,0x00014dc59ac5) */
/* WARNING: Removing unreachable block (ram,0x00014dc59ad0) */
/* WARNING: Removing unreachable block (ram,0x00014dc59acb) */
/* WARNING: Removing unreachable block (ram,0x0001622a4a2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc59a29(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_14d8e5b92(param_1,param_2,*(longlong *)(unaff_RDI + -0x98) + param_1,param_4);
  FUN_162b29b54();
  return;
}



// FUNCTION 14dc59bfa FUN_14dc59bfa body=148 status=ok
// SIG undefined FUN_14dc59bfa(void)

void FUN_14dc59bfa(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  FUN_16649e0b0(param_1,0x4a06d22,*(undefined8 *)(unaff_RDI + -0x70),param_4 ^ param_1);
  return;
}



// FUNCTION 14dc59c8e FUN_14dc59c8e body=138 status=ok
// SIG undefined FUN_14dc59c8e(void)

void FUN_14dc59c8e(ulonglong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulonglong *puVar3;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  
  puVar3 = (ulonglong *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0x59) ^ 0x18);
  bVar1 = ((ulonglong)puVar3 & 0x3f) == 0;
  bVar2 = -1 < (longlong)((*(ulonglong *)(unaff_RDI + -0x50) & param_1) << ((byte)puVar3 & 0x3f));
  if ((bVar1 || bVar2) && (!bVar1 && !bVar2)) {
    *puVar3 = unaff_R13 & unaff_RBX ^ 0xab9f8da33fe72828;
    FUN_14db4b4cf();
    return;
  }
  return;
}



// FUNCTION 14dc59d1a FUN_14dc59d1a body=26 status=ok
// SIG undefined FUN_14dc59d1a(void)

void FUN_14dc59d1a(undefined8 param_1,ulonglong *param_2)

{
  ulonglong unaff_R13;
  
  *param_2 = unaff_R13 ^ 0xab9f8da33fe72828;
  FUN_14db4b4cf();
  return;
}



// FUNCTION 14dc5a038 FUN_14dc5a038 body=17 status=ok
// SIG undefined FUN_14dc5a038(void)

void FUN_14dc5a038(void)

{
  return;
}



// FUNCTION 14dc5a36a FUN_14dc5a36a body=310 status=ok
// SIG undefined FUN_14dc5a36a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5a3b0) */

void FUN_14dc5a36a(undefined8 param_1,undefined8 param_2)

{
  FUN_1660e5cc3(param_1,param_2);
  (*(code *)&LAB_1653a6a55)();
  return;
}



// FUNCTION 14dc5a4a4 FUN_14dc5a4a4 body=159 status=ok
// SIG undefined FUN_14dc5a4a4(void)

undefined8 FUN_14dc5a4a4(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 in_RAX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar2;
  longlong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar3;
  undefined8 local_res10;
  
  param_1 = param_1 ^ ~((~unaff_RDI | in_R10) & (~in_R10 | unaff_RDI));
  puVar1 = (ulonglong *)(&stack0xfffffffffd7d2104 + param_1);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(undefined8 *)(&stack0xfffffffffd7d20fc + param_1) = param_4;
  *(undefined8 *)(&stack0xfffffffffd7d20f4 + param_1) = local_res10;
  uVar3 = *puVar1;
  uVar2 = uVar3 + unaff_R12;
  *puVar1 = uVar2;
  *(ulonglong *)(&stack0xfffffffffd7d20f4 + param_1) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar3,-unaff_R12) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar3 < (ulonglong)-unaff_R12) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar3 = *(ulonglong *)(&stack0xfffffffffd7d20f4 + param_1);
  *(ulonglong *)(&stack0xfffffffffd7d20f4 + param_1) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(&stack0xfffffffffd7d20f4 + param_1) = &LAB_16249364c;
  return in_RAX;
}



// FUNCTION 14dc5a54a FUN_14dc5a54a body=28 status=ok
// SIG undefined FUN_14dc5a54a(void)

void FUN_14dc5a54a(void)

{
  return;
}



// FUNCTION 14dc5a683 FUN_14dc5a683 body=136 status=ok
// SIG undefined FUN_14dc5a683(void)

void FUN_14dc5a683(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = -~*(ulonglong *)(unaff_R13 + -0x78) - 1;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  uVar2 = uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0);
  FUN_156a4a24d(~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),
                (*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15) -
                ((-2 - (uVar2 | 0xfffffffffffffffe)) + uVar2));
  return;
}



// FUNCTION 14dc5a8ff FUN_14dc5a8ff body=305 status=ok
// SIG undefined FUN_14dc5a8ff(void)

void FUN_14dc5a8ff(undefined8 param_1)

{
  undefined8 unaff_RBP;
  
  (*(code *)0x165c08293)(param_1,unaff_RBP);
  return;
}



// FUNCTION 14dc5ab46 FUN_14dc5ab46 body=722 status=ok
// SIG undefined FUN_14dc5ab46(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2ef2d) */
/* WARNING: Removing unreachable block (ram,0x00014dc5abd9) */
/* WARNING: Removing unreachable block (ram,0x00014dc5ac34) */
/* WARNING: Removing unreachable block (ram,0x00014dc5ac3b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc5ab46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  ushort uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar3;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar2 = (-0x101 - ~(~local_res10 & 0x100)) + local_res10;
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  puVar1 = (undefined8 *)(local_res18 + -0x10);
  *puVar1 = unaff_R12;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x30) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -8) = 0x706bb62;
  *puVar1 = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *puVar1 = FUN_165c7153c;
  return in_RAX;
}



// FUNCTION 14dc5ac92 FUN_14dc5ac92 body=536 status=ok
// SIG undefined FUN_14dc5ac92(void)

void FUN_14dc5ac92(void)

{
  FUN_15676bf1e();
  FUN_162e7abf1();
  FUN_162de1d7d();
  return;
}



// FUNCTION 14dc5afa7 FUN_14dc5afa7 body=743 status=ok
// SIG undefined FUN_14dc5afa7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5b044) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b152) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b157) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b15d) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b1e0) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b1e6) */
/* WARNING: Removing unreachable block (ram,0x0001566155cf) */
/* WARNING: Removing unreachable block (ram,0x00015ba1b483) */
/* WARNING: Removing unreachable block (ram,0x00016541b136) */
/* WARNING: Removing unreachable block (ram,0x00016541b141) */
/* WARNING: Removing unreachable block (ram,0x00016541b13c) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b20d) */
/* WARNING: Removing unreachable block (ram,0x00014dc5b210) */

undefined8
FUN_14dc5afa7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_156588856(in_RAX & 0xffffffffffffff00,param_2,param_3,param_4,
                        *(undefined8 *)(unaff_RDI + -0x90));
  return uVar1;
}



// FUNCTION 14dc5b478 FUN_14dc5b478 body=152 status=ok
// SIG undefined FUN_14dc5b478(void)

void FUN_14dc5b478(void)

{
  FUN_1667ddf5f();
  return;
}



// FUNCTION 14dc5b510 FUN_14dc5b510 body=65 status=ok
// SIG undefined FUN_14dc5b510(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc5b510(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  undefined1 local_res8;
  
  func_0x000120431ae8();
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x53);
  *pcVar1 = *pcVar1 + local_res8;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc5b63a FUN_14dc5b63a body=2 status=ok
// SIG undefined FUN_14dc5b63a(void)

void FUN_14dc5b63a(void)

{
  return;
}



// FUNCTION 14dc5b870 FUN_14dc5b870 body=57 status=ok
// SIG undefined FUN_14dc5b870(void)

void FUN_14dc5b870(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RDI;
  ulonglong in_R10;
  
  *param_2 = (-~unaff_RDI - ((param_4 ^ 0xffffffffffffffff) + 2)) + (in_R10 & unaff_RDI) * -2;
  thunk_FUN_15b1097be();
  return;
}



// FUNCTION 14dc5b90d FUN_14dc5b90d body=144 status=ok
// SIG undefined FUN_14dc5b90d(void)

void FUN_14dc5b90d(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_14de2edd8(param_1,unaff_retaddr,*(ulonglong *)(unaff_R13 + -0x80) | unaff_R15,
                *(undefined8 *)(unaff_R13 + -0x40));
  return;
}



// FUNCTION 14dc5b9a0 FUN_14dc5b9a0 body=3 status=ok
// SIG undefined FUN_14dc5b9a0(void)

void FUN_14dc5b9a0(void)

{
  return;
}



// FUNCTION 14dc5ba2d FUN_14dc5ba2d body=343 status=ok
// SIG undefined FUN_14dc5ba2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc5ba2d(ulonglong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong in_R10;
  
  uVar2 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~param_1 & *(ulonglong *)(in_R10 + 0x10) | param_1;
  uVar3 = *(ulonglong *)(in_R10 + 0x10);
  *(undefined8 *)(in_R10 + 0x10) = 0;
  *(longlong *)(in_R10 + 0x10) =
       *(longlong *)(in_R10 + 0x10) + ~((0xffffffffffffffff - param_1 | uVar2) & uVar3);
  uVar5 = 0x108de21;
  lVar4 = FUN_15b115a5a();
  *(code **)(&stack0xfffffffffb1c306b + lVar4) = FUN_15b115a5a;
  *(undefined4 *)(&stack0xfffffffffb1c3063 + lVar4) = 0x2a7defa6;
  *(undefined4 *)(&stack0xfffffffffb1c3067 + lVar4) = 0;
  puVar1 = (undefined8 *)
           ((longlong)(&stack0xfffffffffb1c306b + lVar4) +
           ((*(ulonglong *)(&stack0xfffffffffb1c3063 + lVar4) ^ 0x2ba3c613) - 0x1de29bd));
  *puVar1 = uVar5;
  puVar1[-1] = 0;
  *(undefined4 *)(puVar1 + -1) = 7;
  FUN_16660110f(*puVar1,FUN_16660110f);
  return;
}



// FUNCTION 14dc5bc27 FUN_14dc5bc27 body=317 status=ok
// SIG undefined FUN_14dc5bc27(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5bcb7) */
/* WARNING: Removing unreachable block (ram,0x00014dc5bcac) */

void FUN_14dc5bc27(undefined8 param_1,undefined8 param_2)

{
  FUN_156f2d3de(param_1,param_2);
  return;
}



// FUNCTION 14dc5bdef FUN_14dc5bdef body=149 status=ok
// SIG undefined FUN_14dc5bdef(void)

undefined8 FUN_14dc5bdef(void)

{
  return 0x5955;
}



// FUNCTION 14dc5c038 FUN_14dc5c038 body=153 status=ok
// SIG undefined FUN_14dc5c038(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc5c038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong in_R10;
  ulonglong unaff_R15;
  longlong local_res10 [3];
  
  uVar1 = local_res10[2] & unaff_R15;
  local_res10[2] = uVar1 * 2;
  FUN_1615d9bcb(param_1,param_2,
                *(longlong *)((longlong)local_res10 + in_R10) + unaff_R15 + uVar1 * -2,param_4);
  return;
}



// FUNCTION 14dc5c34b FUN_14dc5c34b body=163 status=ok
// SIG undefined FUN_14dc5c34b(void)

void FUN_14dc5c34b(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  *(ulonglong *)(param_2 + 8) =
       (in_RAX - (*(ulonglong *)(param_2 + 8) | in_RAX)) + *(longlong *)(param_2 + 8);
  return;
}



// FUNCTION 14dc5c524 FUN_14dc5c524 body=28 status=ok
// SIG undefined FUN_14dc5c524(void)

void FUN_14dc5c524(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc5c6d3 FUN_14dc5c6d3 body=131 status=ok
// SIG undefined FUN_14dc5c6d3(void)

void * FUN_14dc5c6d3(short *param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  ulonglong uVar2;
  short sVar3;
  void *pvVar4;
  undefined8 unaff_R14;
  ulonglong uStackX_18;
  longlong lStackX_20;
  
  sVar3 = FUN_162a12671(param_1,FUN_162a12671,param_3);
  sVar1 = *param_1;
  *param_1 = 0;
  *param_1 = *param_1 + (-0x101 - sVar3) + sVar1;
  pvVar4 = ProcessEnvironmentBlock;
  *(undefined8 *)(lStackX_20 + -8) = unaff_R14;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_R14;
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_20 + -0x20) = param_2;
  *(undefined4 *)(lStackX_20 + -0x28) = 0x74d28326;
  *(undefined4 *)(lStackX_20 + -0x24) = 0;
  uVar2 = *(ulonglong *)(lStackX_20 + -0x28);
  *(undefined8 *)(lStackX_20 + -0x28) = 0x77ab666;
  *(ulonglong *)(lStackX_20 + -0x28) = *(longlong *)(lStackX_20 + -0x28) - (uVar2 ^ 0x765ad508);
  *(undefined1 **)(lStackX_20 + -0x28) = &LAB_166c9f823;
  return pvVar4;
}



// FUNCTION 14dc5c757 FUN_14dc5c757 body=140 status=ok
// SIG undefined FUN_14dc5c757(void)

void * FUN_14dc5c757(short *param_1)

{
  short sVar1;
  ulonglong uVar2;
  short in_AX;
  void *pvVar3;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  longlong local_res18;
  
  sVar1 = *param_1;
  *param_1 = 0;
  *param_1 = *param_1 + (-0x101 - in_AX) + sVar1;
  pvVar3 = ProcessEnvironmentBlock;
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_retaddr;
  *(undefined4 *)(local_res18 + -0x28) = 0x74d28326;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar2 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = 0x77ab666;
  *(ulonglong *)(local_res18 + -0x28) = *(longlong *)(local_res18 + -0x28) - (uVar2 ^ 0x765ad508);
  *(undefined1 **)(local_res18 + -0x28) = &LAB_166c9f823;
  return pvVar3;
}



// FUNCTION 14dc5c86a FUN_14dc5c86a body=162 status=ok
// SIG undefined FUN_14dc5c86a(void)

void FUN_14dc5c86a(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong in_R10;
  undefined8 in_stack_00000010;
  
  *param_4 = ~(in_R10 & *param_4);
  FUN_161bf9930(FUN_161bf9930,param_2,~param_1 | param_6,in_stack_00000010);
  return;
}



// FUNCTION 14dc5cc36 FUN_14dc5cc36 body=168 status=ok
// SIG undefined FUN_14dc5cc36(void)

void FUN_14dc5cc36(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  *(ulonglong *)(param_4 + 0x10) =
       (*(longlong *)(param_4 + 0x10) + -1) - ~(in_RAX - (*(ulonglong *)(param_4 + 0x10) | in_RAX));
  FUN_166061761(param_1,0xffffffffabebfb59,param_3,CONCAT44(uStackX_14,local_res10));
  return;
}



// FUNCTION 14dc5cd6e FUN_14dc5cd6e body=94 status=ok
// SIG undefined FUN_14dc5cd6e(void)

void FUN_14dc5cd6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -8) = 0x52709c8;
  FUN_15b0571a9(param_1,unaff_retaddr,param_3,*(undefined8 *)(local_res10 + -0x28));
  return;
}



// FUNCTION 14dc5cdd1 FUN_14dc5cdd1 body=108 status=ok
// SIG undefined FUN_14dc5cdd1(void)

void FUN_14dc5cdd1(char param_1)

{
  ulonglong uVar1;
  char cVar2;
  char in_AL;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  LOCK();
  cVar2 = param_1;
  if (in_AL != DAT_14d7a4be0) {
    cVar2 = DAT_14d7a4be0;
  }
  DAT_14d7a4be0 = cVar2;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = 0x4c8e34a;
  *(undefined8 *)(uVar1 - 0x28cf) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28d7) = unaff_R13;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc5cee9 FUN_14dc5cee9 body=168 status=ok
// SIG undefined FUN_14dc5cee9(void)

undefined8 FUN_14dc5cee9(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  undefined8 local_res8;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | param_1;
  *(ulonglong *)(unaff_RSI + 8) = ~(param_4 & *(ulonglong *)(unaff_RSI + 8));
  uVar1 = FUN_165ba3128(local_res20,FUN_165ba3128,param_3,local_res8);
  return uVar1;
}



// FUNCTION 14dc5d2cd FUN_14dc5d2cd body=148 status=ok
// SIG undefined FUN_14dc5d2cd(void)

void FUN_14dc5d2cd(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  longlong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar4 = *(undefined8 *)(unaff_R13 + -8);
  uVar2 = *(undefined8 *)(unaff_R13 + -0xa0);
  FUN_166883af5();
  *(ulonglong *)(in_R9 + -8) = uVar3 + unaff_R15 + (uVar3 & unaff_R15) * -2;
  *(undefined8 *)(in_R9 + -0x10) = unaff_RBX;
  uVar5 = *(undefined8 *)(in_R9 + -0x10);
  *(undefined8 *)(in_R9 + -0x10) = *(undefined8 *)(in_R9 + -8);
  *(undefined8 *)(in_R9 + -0x18) = uVar5;
  *(undefined8 *)(in_R9 + -0x20) = uVar4;
  *(undefined4 *)(in_R9 + -0x20) = 0x33ec54b;
  *(undefined4 *)(in_R9 + -0x1c) = 0;
  puVar1 = (ulonglong *)(in_R9 + *(longlong *)(in_R9 + -0x20) + -0x33ec56b);
  *puVar1 = 0x28b3b929;
  *puVar1 = *puVar1 ^ 0x28b3b929;
  puVar1[3] = *puVar1;
  puVar1[3] = (ulonglong)(&LAB_156645d8e + puVar1[3]);
  puVar1[1] = puVar1[1];
  puVar1[1] = 0x14dc5d41b;
  FUN_156645d57();
  *(undefined8 *)((longlong)puVar1 + -0x28a7) = uVar2;
  *(undefined8 *)((longlong)puVar1 + -0x28af) = uVar2;
  *(undefined **)((longlong)puVar1 + -0x28a7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc5d361 FUN_14dc5d361 body=208 status=ok
// SIG undefined FUN_14dc5d361(void)

void FUN_14dc5d361(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R9;
  undefined8 unaff_R13;
  undefined8 uStackX_10;
  
  *(undefined8 *)(in_R9 + -8) = unaff_RBP;
  *(undefined8 *)(in_R9 + -0x10) = unaff_RBX;
  uVar2 = *(undefined8 *)(in_R9 + -0x10);
  *(undefined8 *)(in_R9 + -0x10) = *(undefined8 *)(in_R9 + -8);
  *(undefined8 *)(in_R9 + -0x18) = uVar2;
  *(undefined8 *)(in_R9 + -0x20) = uStackX_10;
  *(undefined4 *)(in_R9 + -0x20) = 0x33ec54b;
  *(undefined4 *)(in_R9 + -0x1c) = 0;
  puVar1 = (ulonglong *)(in_R9 + *(longlong *)(in_R9 + -0x20) + -0x33ec56b);
  *puVar1 = 0x28b3b929;
  *puVar1 = *puVar1 ^ 0x28b3b929;
  puVar1[3] = *puVar1;
  puVar1[3] = (ulonglong)(&LAB_156645d8e + puVar1[3]);
  puVar1[1] = puVar1[1];
  puVar1[1] = 0x14dc5d41b;
  FUN_156645d57();
  *(undefined8 *)((longlong)puVar1 + -0x28a7) = unaff_R13;
  *(undefined8 *)((longlong)puVar1 + -0x28af) = unaff_R13;
  *(undefined **)((longlong)puVar1 + -0x28a7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc5d6e5 FUN_14dc5d6e5 body=105 status=ok
// SIG undefined FUN_14dc5d6e5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5d8be) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d8c4) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d7e2) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d80c) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d814) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d8b3) */
/* WARNING: Removing unreachable block (ram,0x000161abf1e8) */

void FUN_14dc5d6e5(void)

{
  FUN_1664bc76d();
  FUN_161247f8d();
  return;
}



// FUNCTION 14dc5d750 FUN_14dc5d750 body=367 status=ok
// SIG undefined FUN_14dc5d750(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5d8be) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d8c4) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d7e2) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d80c) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d814) */
/* WARNING: Removing unreachable block (ram,0x00014dc5d8b3) */
/* WARNING: Removing unreachable block (ram,0x000161abf1e8) */

void FUN_14dc5d750(void)

{
  FUN_161247f8d();
  return;
}



// FUNCTION 14dc5d8c4 FUN_14dc5d8c4 body=17 status=ok
// SIG undefined FUN_14dc5d8c4(void)

void FUN_14dc5d8c4(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dc5d8d5 FUN_14dc5d8d5 body=449 status=ok
// SIG undefined FUN_14dc5d8d5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5d97f) */

void FUN_14dc5d8d5(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong *unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R14;
  
  if (unaff_R14 == 0xcfa94) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xcfa95) {
    FUN_1664507a3();
    *unaff_R12 = ~(unaff_R13 & *unaff_R12);
    FUN_160da9969(param_1 ^ unaff_RBP,*(undefined8 *)(unaff_RSI + -0x58));
    FUN_161ae0470(FUN_161ae0470);
    return;
  }
  FUN_1664507ef();
  return;
}



// FUNCTION 14dc5db2f FUN_14dc5db2f body=274 status=ok
// SIG undefined FUN_14dc5db2f(void)

void FUN_14dc5db2f(void)

{
  FUN_15b896146();
  return;
}



// FUNCTION 14dc5dd01 FUN_14dc5dd01 body=149 status=ok
// SIG undefined FUN_14dc5dd01(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5de0e) */
/* WARNING: Removing unreachable block (ram,0x00014dc5deb9) */
/* WARNING: Removing unreachable block (ram,0x00014dc5debe) */
/* WARNING: Removing unreachable block (ram,0x00014dc5dec4) */
/* WARNING: Removing unreachable block (ram,0x000166c24868) */
/* WARNING: Removing unreachable block (ram,0x000166c248a0) */
/* WARNING: Removing unreachable block (ram,0x000166c248ab) */
/* WARNING: Removing unreachable block (ram,0x00016241244b) */

void FUN_14dc5dd01(void)

{
  FUN_160ca1700();
  FUN_16241244b();
  return;
}



// FUNCTION 14dc5dd99 FUN_14dc5dd99 body=470 status=ok
// SIG undefined FUN_14dc5dd99(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5de0e) */
/* WARNING: Removing unreachable block (ram,0x00014dc5deb9) */
/* WARNING: Removing unreachable block (ram,0x00014dc5debe) */
/* WARNING: Removing unreachable block (ram,0x00014dc5dec4) */
/* WARNING: Removing unreachable block (ram,0x000166c24868) */
/* WARNING: Removing unreachable block (ram,0x000166c248a0) */
/* WARNING: Removing unreachable block (ram,0x000166c248ab) */
/* WARNING: Removing unreachable block (ram,0x00016241244b) */

void FUN_14dc5dd99(void)

{
  FUN_16241244b();
  return;
}



// FUNCTION 14dc5e0aa FUN_14dc5e0aa body=711 status=ok
// SIG undefined FUN_14dc5e0aa(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5e1d1) */
/* WARNING: Removing unreachable block (ram,0x00015750b90b) */
/* WARNING: Removing unreachable block (ram,0x00015750b911) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e1c6) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e26c) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e272) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e27d) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e278) */
/* WARNING: Removing unreachable block (ram,0x0001568c54a4) */
/* WARNING: Removing unreachable block (ram,0x00015b07108d) */
/* WARNING: Removing unreachable block (ram,0x00015b071134) */
/* WARNING: Removing unreachable block (ram,0x00015b071139) */
/* WARNING: Removing unreachable block (ram,0x00014df57811) */
/* WARNING: Removing unreachable block (ram,0x00014df578a0) */
/* WARNING: Removing unreachable block (ram,0x00014df578a5) */
/* WARNING: Removing unreachable block (ram,0x00014df578ab) */
/* WARNING: Removing unreachable block (ram,0x00015b07113f) */
/* WARNING: Removing unreachable block (ram,0x00014df578b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc5e263) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc5e0aa(undefined8 param_1,ulonglong param_2)

{
  undefined8 in_RAX;
  ulonglong in_stack_00000010;
  
  FUN_164eed2cb();
  thunk_FUN_1623d2f5b(in_RAX,-1 - ((~in_stack_00000010 + param_2) - (~in_stack_00000010 & param_2) &
                                  (~param_2 | in_stack_00000010)));
  return;
}



// FUNCTION 14dc5e27d FUN_14dc5e27d body=91 status=ok
// SIG undefined FUN_14dc5e27d(void)

void FUN_14dc5e27d(void)

{
  return;
}



// FUNCTION 14dc5e6c6 FUN_14dc5e6c6 body=30 status=ok
// SIG undefined FUN_14dc5e6c6(void)

void FUN_14dc5e6c6(void)

{
  return;
}



// FUNCTION 14dc5e935 FUN_14dc5e935 body=313 status=ok
// SIG undefined FUN_14dc5e935(void)

/* WARNING: Removing unreachable block (ram,0x00016150cef7) */
/* WARNING: Removing unreachable block (ram,0x00016150cefd) */
/* WARNING: Removing unreachable block (ram,0x00014dc5ea67) */
/* WARNING: Removing unreachable block (ram,0x00014dc5ea73) */
/* WARNING: Removing unreachable block (ram,0x00014dc5eb59) */
/* WARNING: Removing unreachable block (ram,0x00014dc5eb5d) */
/* WARNING: Removing unreachable block (ram,0x00016150cf02) */
/* WARNING: Removing unreachable block (ram,0x00016150cf04) */

void FUN_14dc5e935(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined4 in_R10D;
  longlong unaff_R12;
  
  FUN_161d4e251(in_R10D,param_2,
                *(ulonglong *)(unaff_R12 + -0x60) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x60) & in_RAX) * -2);
  FUN_16150cef7();
  return;
}



// FUNCTION 14dc5ea73 FUN_14dc5ea73 body=345 status=ok
// SIG undefined FUN_14dc5ea73(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5eb59) */

void FUN_14dc5ea73(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong uStackX_20;
  ulonglong in_stack_00000030;
  
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000030 - 8) = 0x1eb301ce;
  *(ulonglong *)(in_stack_00000030 - 8) = *(ulonglong *)(in_stack_00000030 - 8) ^ 0x1eb301ce;
  *(ulonglong *)(in_stack_00000030 - 8) = *(ulonglong *)(in_stack_00000030 - 8) ^ unaff_RBX;
  *(undefined8 *)(in_stack_00000030 - 0x10) = in_R10;
  *(undefined8 *)(in_stack_00000030 - 0x18) = in_R10;
  *(undefined8 *)(in_stack_00000030 - 0x20) = 0x14dc5eb0f;
  FUN_156a09feb();
  *(undefined8 *)(in_stack_00000030 - 0x18) = param_1;
  *(undefined8 *)(in_stack_00000030 - 0x18) = *(undefined8 *)(unaff_R13 + -0x60);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  *(ulonglong *)(in_stack_00000030 - 0x18) = uVar1 + uStackX_20;
  *(ulonglong *)(in_stack_00000030 - 0x18) =
       *(longlong *)(in_stack_00000030 - 0x18) + (uVar1 & uStackX_20) * -2;
  *(undefined8 *)(in_stack_00000030 - 0x18) = *(undefined8 *)(unaff_R13 + -0x38);
  *(undefined8 *)(in_stack_00000030 - 0x18) = *(undefined8 *)(in_stack_00000030 - 0x18);
  *(undefined4 *)(in_stack_00000030 - 0x18) = 0xab5b6cb0;
  *(undefined8 *)(in_stack_00000030 - 0x20) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 - 0x28) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 - 0x30) = unaff_R14;
  *(code **)(in_stack_00000030 - 0x20) = FUN_14dc5ebce;
  *(undefined8 *)(in_stack_00000030 - 0x28) = 0x156d8f144;
  return;
}



// FUNCTION 14dc5ebce FUN_14dc5ebce body=149 status=ok
// SIG undefined FUN_14dc5ebce(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c8f52) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f63) */
/* WARNING: Removing unreachable block (ram,0x00014d8c900a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9010) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9005) */
/* WARNING: Removing unreachable block (ram,0x0001666dbeee) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f5e) */
/* WARNING: Removing unreachable block (ram,0x00014dc5ec66) */

void FUN_14dc5ebce(void)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 uStackX_10;
  ulonglong uStackX_19;
  undefined1 in_stack_00000030 [16];
  undefined1 in_stack_00000040 [16];
  
  if (CARRY8(CONCAT44(uStackX_c,local_res8) + CONCAT44(uStackX_10,uStackX_c) +
             in_stack_00000030._7_8_ + in_stack_00000040._1_8_,uStackX_19)) {
    FUN_1658af9f6();
    return;
  }
  thunk_FUN_14d8c8ec9();
  return;
}



// FUNCTION 14dc5ec66 FUN_14dc5ec66 body=120 status=ok
// SIG undefined FUN_14dc5ec66(void)

void FUN_14dc5ec66(void)

{
  FUN_14dec17ce();
  return;
}



// FUNCTION 14dc5eef0 FUN_14dc5eef0 body=73 status=ok
// SIG undefined FUN_14dc5eef0(void)

void FUN_14dc5eef0(void)

{
  return;
}



// FUNCTION 14dc5f01c FUN_14dc5f01c body=481 status=ok
// SIG undefined FUN_14dc5f01c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5f1f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc5f200) */
/* WARNING: Removing unreachable block (ram,0x00014dc5f1fb) */
/* WARNING: Removing unreachable block (ram,0x00014dc5f0be) */
/* WARNING: Removing unreachable block (ram,0x00014dc5f0c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc5f0cc) */

undefined8
FUN_14dc5f01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong lVar5;
  undefined8 unaff_R12;
  ulonglong uVar6;
  uint unaff_retaddr;
  
  uVar1 = unaff_retaddr ^ 0xfc64953;
  *(undefined8 *)(&stack0xfffffffff039b6ad + uVar1) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff039b6a5 + uVar1) = 0x67f98b2b;
  *(undefined4 *)(&stack0xfffffffff039b6a9 + uVar1) = 0x6f8ba524;
  *(uint *)(&stack0xfffffffff039b6a9 + uVar1) =
       *(uint *)(&stack0xfffffffff039b6a9 + uVar1) ^ 0x6f8ba524;
  uVar2 = *(ulonglong *)(&stack0xfffffffff039b6a5 + uVar1);
  *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) =
       *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1);
  *(undefined8 *)(&stack0xfffffffff039b69d + uVar1) = in_R11;
  lVar5 = (uVar2 ^ 0x67f98b2b) - unaff_RBP;
  if (-1 < lVar5) {
    uVar6 = ~-lVar5 | *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1);
    *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1) =
         ~*(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1);
    *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) = unaff_RDI;
    *(longlong *)(&stack0xfffffffff039b69d + uVar1) = unaff_RBP;
    uVar2 = *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1);
    uVar3 = *(ulonglong *)(&stack0xfffffffff039b69d + uVar1);
    *(undefined8 *)(&stack0xfffffffff039b69d + uVar1) = param_3;
    *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1) =
         ~*(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1);
    lVar5 = *(longlong *)(&stack0xfffffffff039b6c5 + uVar1);
    *(undefined8 *)(&stack0xfffffffff039b6c5 + uVar1) = 0;
    *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1) =
         *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1) ^
         (~((~uVar3 | uVar2) + uVar3 + 1) + uVar3) - lVar5;
    uVar4 = *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1);
    *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) = param_4;
    *(undefined8 *)(&stack0xfffffffff039b6a5 + uVar1) = uVar4;
    *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1) =
         -1 - ((*(longlong *)(&stack0xfffffffff039b6c5 + uVar1) -
               (uVar6 | *(ulonglong *)(&stack0xfffffffff039b6c5 + uVar1))) + uVar6);
    *(undefined8 *)(&stack0xfffffffff039b69d + uVar1) = in_RAX;
    *(undefined8 *)(&stack0xfffffffff039b695 + uVar1) = in_RAX;
    *(undefined8 *)(&stack0xfffffffff039b68d + uVar1) = in_RAX;
    *(undefined1 **)(&stack0xfffffffff039b69d + uVar1) = &LAB_165ed09d0;
    *(undefined **)(&stack0xfffffffff039b695 + uVar1) = &DAT_1650971b0;
    return *(undefined8 *)(&stack0xfffffffff039b68d + uVar1);
  }
  uVar4 = FUN_165ed0923();
  return uVar4;
}



// FUNCTION 14dc5f200 FUN_14dc5f200 body=169 status=ok
// SIG undefined FUN_14dc5f200(void)

void FUN_14dc5f200(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  undefined8 in_RAX;
  ulonglong *puVar2;
  undefined8 in_R10;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined8 unaff_retaddr;
  
  puVar2 = (ulonglong *)
           (param_1 + ~(~(param_2 & 0xffffffffd1301f25) & (param_2 | 0xffffffffd1301f25)));
  uVar15 = *puVar2;
  *puVar2 = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar15 & 0x800) != 0) * 0x800 | (ulonglong)((uVar15 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
            (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  pvVar1 = ProcessEnvironmentBlock;
  uVar15 = *puVar2;
  bVar12 = (uVar15 & 0x4000) != 0;
  bVar11 = (uVar15 & 0x800) != 0;
  bVar10 = (uVar15 & 0x400) != 0;
  bVar9 = (uVar15 & 0x200) != 0;
  bVar8 = (uVar15 & 0x100) != 0;
  bVar7 = (uVar15 & 0x80) != 0;
  bVar6 = (uVar15 & 0x40) != 0;
  bVar5 = (uVar15 & 0x10) != 0;
  bVar4 = (uVar15 & 4) != 0;
  bVar3 = (uVar15 & 1) != 0;
  bVar14 = (uVar15 & 0x200000) != 0;
  bVar13 = (uVar15 & 0x40000) != 0;
  *puVar2 = (ulonglong)L"/Script/Engine.Engine";
  puVar2[-1] = (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
               (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x100 | (ulonglong)bVar7 * 0x80 |
               (ulonglong)bVar6 * 0x40 | (ulonglong)bVar5 * 0x10 | (ulonglong)bVar4 * 4 |
               (ulonglong)bVar3 | (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined4 *)(puVar2 + -2) = 0xd132e46e;
  *(undefined4 *)((longlong)puVar2 + -0xc) = 0xffffffff;
  uVar15 = puVar2[-2];
  puVar2[-2] = in_RAX;
  puVar2[-3] = in_RAX;
  *(undefined4 *)(puVar2 + -3) = 0x4bd3cc5b;
  *(undefined4 *)((longlong)puVar2 + -0x14) = 0;
  puVar2[-4] = (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
               (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x100 | (ulonglong)bVar7 * 0x80 |
               (ulonglong)bVar6 * 0x40 | (ulonglong)bVar5 * 0x10 | (ulonglong)bVar4 * 4 |
               (ulonglong)bVar3 | (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  puVar2[-4] = in_R10;
  puVar2[-5] = in_R10;
  puVar2[-4] = (ulonglong)FUN_14dc5f2ac;
  FUN_162c05566(pvVar1,uVar15,unaff_retaddr);
  return;
}



// FUNCTION 14dc5f2ac FUN_14dc5f2ac body=119 status=ok
// SIG undefined FUN_14dc5f2ac(void)

void FUN_14dc5f2ac(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined **)(uVar1 - 8) = &DAT_14dc5f341;
  thunk_FUN_15b642ca5(*(undefined8 *)(uVar1 - 0x10));
  return;
}



// FUNCTION 14dc5f40a FUN_14dc5f40a body=161 status=ok
// SIG undefined FUN_14dc5f40a(void)

void FUN_14dc5f40a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  FUN_1648b00e8(param_1,0x14d7c0744,param_3,param_4);
  return;
}



// FUNCTION 14dc5f686 FUN_14dc5f686 body=16 status=ok
// SIG undefined FUN_14dc5f686(void)

void FUN_14dc5f686(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc5f818 FUN_14dc5f818 body=182 status=ok
// SIG undefined FUN_14dc5f818(void)

undefined8 FUN_14dc5f818(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc5f8ce FUN_14dc5f8ce body=141 status=ok
// SIG undefined FUN_14dc5f8ce(void)

void FUN_14dc5f8ce(void)

{
  return;
}



// FUNCTION 14dc5f9fe FUN_14dc5f9fe body=175 status=ok
// SIG undefined FUN_14dc5f9fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5fb3f) */
/* WARNING: Removing unreachable block (ram,0x00014dc5faad) */
/* WARNING: Removing unreachable block (ram,0x00014dc5fb34) */
/* WARNING: Removing unreachable block (ram,0x00014dc5fb3a) */
/* WARNING: Removing unreachable block (ram,0x0001613adbe5) */
/* WARNING: Removing unreachable block (ram,0x0001613adc6b) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000166ce02b9) */

void FUN_14dc5f9fe(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong local_res8 [4];
  
  local_res8[1] =
       ((in_RAX - 1) - ~*(ulonglong *)((longlong)local_res8 + (unaff_RBP ^ 0x615ce69))) +
       (local_res8[1] & in_RAX) * -2;
  FUN_166ce02b9();
  return;
}



// FUNCTION 14dc5faad FUN_14dc5faad body=310 status=ok
// SIG undefined FUN_14dc5faad(void)

/* WARNING: Removing unreachable block (ram,0x00014dc5fb3f) */
/* WARNING: Removing unreachable block (ram,0x0001613adbe5) */
/* WARNING: Removing unreachable block (ram,0x0001613adc6b) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

void FUN_14dc5faad(void)

{
  FUN_1613adbe5();
  return;
}



// FUNCTION 14dc5fe7a FUN_14dc5fe7a body=145 status=ok
// SIG undefined FUN_14dc5fe7a(void)

void FUN_14dc5fe7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_15b642ca5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc5ffd1 FUN_14dc5ffd1 body=456 status=ok
// SIG undefined FUN_14dc5ffd1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc60067) */
/* WARNING: Removing unreachable block (ram,0x00014dc60073) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc5ffd1(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) - param_2;
  uVar3 = FUN_16229c1e4(uVar2 ^ param_1,FUN_16229c1e4);
  return uVar3;
}



// FUNCTION 14dc60116 FUN_14dc60116 body=155 status=ok
// SIG undefined FUN_14dc60116(void)

/* WARNING: Removing unreachable block (ram,0x00014dc601ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc601b1) */
/* WARNING: Removing unreachable block (ram,0x000162ade9b1) */

void FUN_14dc60116(void)

{
  FUN_162ade9b1();
  return;
}



// FUNCTION 14dc601b1 FUN_14dc601b1 body=163 status=ok
// SIG undefined FUN_14dc601b1(void)

void FUN_14dc601b1(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1619fddee(param_1,*(ulonglong *)(unaff_RDI + -0x98) | param_1,param_3);
  return;
}



// FUNCTION 14dc60323 FUN_14dc60323 body=154 status=ok
// SIG undefined FUN_14dc60323(void)

void FUN_14dc60323(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (~in_R10 + 1);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar2;
  *(undefined8 *)(local_res10 + -0x18) = uVar2;
  *(longlong *)(local_res10 + -0x10) = *plVar1;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x1619e3f5f;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  FUN_1619e3eec();
  return;
}



// FUNCTION 14dc604dc FUN_14dc604dc body=265 status=ok
// SIG undefined FUN_14dc604dc(void)

/* WARNING: Removing unreachable block (ram,0x00014dc60558) */
/* WARNING: Removing unreachable block (ram,0x00014dc6055e) */
/* WARNING: Removing unreachable block (ram,0x00014dc60563) */

void FUN_14dc604dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156bc14c0(param_1,0xfffffffff945580e,param_3);
  return;
}



// FUNCTION 14dc605e7 FUN_14dc605e7 body=865 status=ok
// SIG undefined FUN_14dc605e7(void)

/* WARNING: Removing unreachable block (ram,0x000156e1a305) */
/* WARNING: Removing unreachable block (ram,0x000156e1a30b) */
/* WARNING: Removing unreachable block (ram,0x000156e1a310) */
/* WARNING: Removing unreachable block (ram,0x000156e1a28a) */
/* WARNING: Removing unreachable block (ram,0x0001563f34f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6067b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dc605e7(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1649eb60c();
  return uVar1;
}



// FUNCTION 14dc60740 FUN_14dc60740 body=152 status=ok
// SIG undefined FUN_14dc60740(void)

void FUN_14dc60740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBP;
  ushort *unaff_RSI;
  undefined8 local_res8;
  longlong local_res20;
  
  *unaff_RSI = (-0x101 - (*unaff_RSI | 0xfeff)) + *unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = local_res8;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(code **)(local_res20 + -0x18) = FUN_14dc607db;
  (*(code *)0x164a3217c)(param_1,param_2,0x164a3217c,param_4);
  return;
}



// FUNCTION 14dc607db FUN_14dc607db body=178 status=ok
// SIG undefined FUN_14dc607db(void)

void FUN_14dc607db(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  (*(code *)&LAB_1573cf128)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
             unaff_RDI + param_3 * -2);
  return;
}



// FUNCTION 14dc6088f FUN_14dc6088f body=425 status=ok
// SIG undefined FUN_14dc6088f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6091c) */
/* WARNING: Removing unreachable block (ram,0x00014dc60922) */

void FUN_14dc6088f(void)

{
  FUN_15af765e8();
  return;
}



// FUNCTION 14dc609af FUN_14dc609af body=106 status=ok
// SIG undefined FUN_14dc609af(void)

void FUN_14dc609af(void)

{
  return;
}



// FUNCTION 14dc60a40 FUN_14dc60a40 body=11 status=ok
// SIG undefined FUN_14dc60a40(void)

void FUN_14dc60a40(void)

{
  return;
}



// FUNCTION 14dc60a4c FUN_14dc60a4c body=26 status=ok
// SIG undefined FUN_14dc60a4c(void)

void FUN_14dc60a4c(void)

{
  return;
}



// FUNCTION 14dc60ad7 FUN_14dc60ad7 body=280 status=ok
// SIG undefined FUN_14dc60ad7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc60b5b) */
/* WARNING: Removing unreachable block (ram,0x00014dc60b67) */
/* WARNING: Removing unreachable block (ram,0x00014dc60ba8) */

void FUN_14dc60ad7(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&LAB_16554f3d3)(param_1,param_2,&LAB_16554f3d3);
  return;
}



// FUNCTION 14dc60b67 FUN_14dc60b67 body=192 status=ok
// SIG undefined FUN_14dc60b67(void)

void FUN_14dc60b67(undefined8 param_1,undefined8 param_2)

{
  FUN_16238f4a6(param_1,param_2,8);
  return;
}



// FUNCTION 14dc60c29 FUN_14dc60c29 body=129 status=ok
// SIG undefined FUN_14dc60c29(void)

/* WARNING: Instruction at (ram,0x000156b41918) overlaps instruction at (ram,0x000156b41917)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc60c9b) */
/* WARNING: Removing unreachable block (ram,0x00014dc60cac) */
/* WARNING: Removing unreachable block (ram,0x00014dc60ca1) */
/* WARNING: Removing unreachable block (ram,0x000156b4183a) */
/* WARNING: Removing unreachable block (ram,0x000156b418cc) */
/* WARNING: Removing unreachable block (ram,0x000162524a08) */
/* WARNING: Removing unreachable block (ram,0x000156b418d2) */
/* WARNING: Removing unreachable block (ram,0x000156b41918) */
/* WARNING: Removing unreachable block (ram,0x000156b41917) */

undefined8 FUN_14dc60c29(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162524a08();
  return uVar1;
}



// FUNCTION 14dc60cac FUN_14dc60cac body=168 status=ok
// SIG undefined FUN_14dc60cac(void)

undefined8 FUN_14dc60cac(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc60def FUN_14dc60def body=21 status=ok
// SIG undefined FUN_14dc60def(void)

void FUN_14dc60def(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc60e97 FUN_14dc60e97 body=82 status=ok
// SIG undefined FUN_14dc60e97(void)

void FUN_14dc60e97(void)

{
  return;
}



// FUNCTION 14dc60f27 FUN_14dc60f27 body=157 status=ok
// SIG undefined FUN_14dc60f27(void)

void FUN_14dc60f27(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  lVar2 = *(longlong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  uVar3 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) =
       ((uVar3 & unaff_R15 ^ 0xffffffffffffffff) + unaff_R15) - *(longlong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) =
       ~((~(0xffffffffffffffff - unaff_R15 & uVar1) + lVar2) - ~(0xffffffffffffffff - unaff_R15) &
        *(ulonglong *)(unaff_RBP + 0x10));
  (*(code *)0x1667b0b77)(param_1,0x1667b0b77);
  return;
}



// FUNCTION 14dc60fc4 FUN_14dc60fc4 body=966 status=ok
// SIG undefined FUN_14dc60fc4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc61057) */
/* WARNING: Removing unreachable block (ram,0x00014dc61062) */
/* WARNING: Removing unreachable block (ram,0x00014dc6105d) */

ulonglong FUN_14dc60fc4(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return in_RAX ^ unaff_R15;
}



// FUNCTION 14dc6177a FUN_14dc6177a body=173 status=ok
// SIG undefined FUN_14dc6177a(void)

void FUN_14dc6177a(void)

{
  undefined7 unaff_000000b9;
  ulonglong uStack_80;
  
  FUN_1662d584a(&DAT_ac91427a73ca2b2b,FUN_1662d584a,0xffffffffffffff88);
  FUN_160d19afd(0xffffffffffffffff - (uStack_80 & CONCAT71(unaff_000000b9,0x69)) &
                (uStack_80 | CONCAT71(unaff_000000b9,0x69)),0);
  return;
}



// FUNCTION 14dc61827 FUN_14dc61827 body=150 status=ok
// SIG undefined FUN_14dc61827(void)

void FUN_14dc61827(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160d19afd(0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),0);
  return;
}



// FUNCTION 14dc61c55 FUN_14dc61c55 body=35 status=ok
// SIG undefined FUN_14dc61c55(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc61c55(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc61d91 FUN_14dc61d91 body=175 status=ok
// SIG undefined FUN_14dc61d91(void)

void FUN_14dc61d91(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined4 *)(unaff_RSI + -8) = 0x1e28324;
  *(undefined4 *)(unaff_RSI + -4) = 0x4a80ab8e;
  *(uint *)(unaff_RSI + -4) = *(uint *)(unaff_RSI + -4) ^ 0x4a80ab8e;
  puVar1 = (ulonglong *)(unaff_RSI + *(longlong *)(unaff_RSI + -8) + -0x1e2832c);
  *puVar1 = *(ulonglong *)(unaff_R13 - 0x78);
  uVar2 = *(ulonglong *)(unaff_R13 - 0x28);
  *puVar1 = *puVar1 + unaff_R15 + (*puVar1 & unaff_R15) * -2;
  uVar3 = *puVar1;
  *puVar1 = unaff_R13;
  puVar1[-1] = unaff_R13;
  *puVar1 = (ulonglong)FUN_14dc61e44;
  (*(code *)0x165600526)(uVar3,uVar2 ^ unaff_R15);
  return;
}



// FUNCTION 14dc61e44 FUN_14dc61e44 body=277 status=ok
// SIG undefined FUN_14dc61e44(void)

void FUN_14dc61e44(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x16485377e)
            ((~(~in_RAX & *(ulonglong *)(unaff_R12 + -0xa0)) + *(ulonglong *)(unaff_R12 + -0xa0)) -
             in_RAX);
  return;
}



// FUNCTION 14dc61ee3 FUN_14dc61ee3 body=160 status=ok
// SIG undefined FUN_14dc61ee3(void)

void FUN_14dc61ee3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R15;
  ulonglong local_res8;
  
  FUN_15b9d0213(param_1,(~(0xffffffffffffffffU - unaff_R15 & local_res8) + local_res8) -
                        ~(0xffffffffffffffffU - unaff_R15),param_3);
  return;
}



// FUNCTION 14dc62033 FUN_14dc62033 body=141 status=ok
// SIG undefined FUN_14dc62033(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001665a2e8f) overlaps instruction at (ram,0x0001665a2e8e)
    */
/* WARNING: Removing unreachable block (ram,0x0001665a2e8e) */
/* WARNING: Removing unreachable block (ram,0x00014dc620ae) */

void FUN_14dc62033(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x1661a62d9)();
  return;
}



// FUNCTION 14dc620c1 FUN_14dc620c1 body=299 status=ok
// SIG undefined FUN_14dc620c1(void)

/* WARNING: Removing unreachable block (ram,0x00015656489e) */
/* WARNING: Removing unreachable block (ram,0x0001565648a9) */
/* WARNING: Removing unreachable block (ram,0x00014dc6214b) */
/* WARNING: Removing unreachable block (ram,0x00014dc62151) */
/* WARNING: Removing unreachable block (ram,0x000164f9dfcb) */
/* WARNING: Removing unreachable block (ram,0x000164f9dfd1) */
/* WARNING: Removing unreachable block (ram,0x000164f9dfde) */
/* WARNING: Removing unreachable block (ram,0x000164f9dfe5) */
/* WARNING: Removing unreachable block (ram,0x000164f9e058) */
/* WARNING: Removing unreachable block (ram,0x000164f9e05d) */
/* WARNING: Removing unreachable block (ram,0x000164f9e063) */
/* WARNING: Removing unreachable block (ram,0x000164f9e068) */
/* WARNING: Removing unreachable block (ram,0x000166aefc65) */
/* WARNING: Removing unreachable block (ram,0x000166aefc6b) */
/* WARNING: Removing unreachable block (ram,0x000166aefcf2) */
/* WARNING: Removing unreachable block (ram,0x000166aefcf8) */
/* WARNING: Removing unreachable block (ram,0x0001567ab3ef) */
/* WARNING: Removing unreachable block (ram,0x000164f9de7d) */
/* WARNING: Removing unreachable block (ram,0x000164f9de8f) */
/* WARNING: Removing unreachable block (ram,0x000164f9df02) */
/* WARNING: Removing unreachable block (ram,0x000164f9df0a) */
/* WARNING: Removing unreachable block (ram,0x000164f9df1f) */
/* WARNING: Removing unreachable block (ram,0x000164f9df25) */
/* WARNING: Removing unreachable block (ram,0x0001618461f2) */
/* WARNING: Removing unreachable block (ram,0x0001567ab479) */
/* WARNING: Removing unreachable block (ram,0x0001567ab491) */
/* WARNING: Removing unreachable block (ram,0x0001567ab49d) */
/* WARNING: Removing unreachable block (ram,0x0001567ab51a) */
/* WARNING: Removing unreachable block (ram,0x000156c8a3eb) */
/* WARNING: Removing unreachable block (ram,0x000156c8a40c) */
/* WARNING: Removing unreachable block (ram,0x000156c8a410) */
/* WARNING: Removing unreachable block (ram,0x0001567ab520) */
/* WARNING: Removing unreachable block (ram,0x00016255908d) */
/* WARNING: Removing unreachable block (ram,0x0001567ab59c) */
/* WARNING: Removing unreachable block (ram,0x0001567ab5a2) */
/* WARNING: Removing unreachable block (ram,0x0001567ab5a7) */
/* WARNING: Removing unreachable block (ram,0x0001565648a4) */
/* WARNING: Removing unreachable block (ram,0x0001651f6bc1) */
/* WARNING: Removing unreachable block (ram,0x000156564810) */
/* WARNING: Removing unreachable block (ram,0x0001651f6c53) */
/* WARNING: Removing unreachable block (ram,0x0001651f6c59) */
/* WARNING: Removing unreachable block (ram,0x000162df5eaa) */
/* WARNING: Removing unreachable block (ram,0x000156380a7f) */
/* WARNING: Removing unreachable block (ram,0x000162df5eb0) */
/* WARNING: Removing unreachable block (ram,0x0001651f6c5e) */

undefined8 FUN_14dc620c1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156380a7f();
  return uVar1;
}



// FUNCTION 14dc621ed FUN_14dc621ed body=136 status=ok
// SIG undefined FUN_14dc621ed(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6230c) */

void FUN_14dc621ed(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156f32239(param_1,*(ulonglong *)(unaff_RDI + -0x28) | param_1);
  FUN_16470fee1();
  return;
}



// FUNCTION 14dc62276 FUN_14dc62276 body=165 status=ok
// SIG undefined FUN_14dc62276(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6230c) */

void FUN_14dc62276(undefined8 param_1,undefined8 param_2)

{
  longlong in_R11;
  ulonglong unaff_R13;
  
  FUN_16470fee1(param_1,param_2,
                ~(~(unaff_R13 & ~*(ulonglong *)(in_R11 + -0x68)) &
                 (~*(ulonglong *)(in_R11 + -0x68) | unaff_R13)),*(undefined8 *)(in_R11 + -0x30));
  return;
}



// FUNCTION 14dc6231b FUN_14dc6231b body=146 status=ok
// SIG undefined FUN_14dc6231b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc623a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc623ae) */
/* WARNING: Removing unreachable block (ram,0x00014d836a6b) */
/* WARNING: Removing unreachable block (ram,0x000165554b00) */
/* WARNING: Removing unreachable block (ram,0x00014d836aea) */
/* WARNING: Removing unreachable block (ram,0x00014d836af0) */
/* WARNING: Removing unreachable block (ram,0x000156d46357) */
/* WARNING: Removing unreachable block (ram,0x00014d836afb) */

undefined8 FUN_14dc6231b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  if (-~unaff_R15 == ~-(*(ulonglong *)(unaff_R13 + -0x68) | unaff_R15) + 2) {
    uVar2 = FUN_1647d2129(-1 - ((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x78))
                               & (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15
                                 )),
                          ~(uVar1 & unaff_R15) &
                          (~(uVar1 & unaff_R15) + unaff_R15) - (uVar1 ^ 0xffffffffffffffff),param_3)
    ;
    return uVar2;
  }
  uVar2 = FUN_156d462e5();
  return uVar2;
}



// FUNCTION 14dc623ae FUN_14dc623ae body=269 status=ok
// SIG undefined FUN_14dc623ae(void)

undefined1 * FUN_14dc623ae(void)

{
  return &LAB_166042f2b;
}



// FUNCTION 14dc626c7 FUN_14dc626c7 body=89 status=ok
// SIG undefined FUN_14dc626c7(void)

longlong FUN_14dc626c7(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  return unaff_RBX + in_RAX;
}



// FUNCTION 14dc6289d FUN_14dc6289d body=63 status=ok
// SIG undefined FUN_14dc6289d(void)

void FUN_14dc6289d(void)

{
  return;
}



// FUNCTION 14dc62a72 FUN_14dc62a72 body=158 status=ok
// SIG undefined FUN_14dc62a72(void)

void FUN_14dc62a72(void)

{
  ushort *unaff_RDI;
  ushort unaff_R13W;
  
  *unaff_RDI = ((unaff_R13W & 0x2801 ^ 0xffff) & (unaff_R13W | 0x2801) | *unaff_RDI) - 0x100;
  FUN_14dcfca3a();
  FUN_14dc62b12();
  return;
}



// FUNCTION 14dc62b12 FUN_14dc62b12 body=58 status=ok
// SIG undefined FUN_14dc62b12(void)

void FUN_14dc62b12(void)

{
  return;
}



// FUNCTION 14dc62bd0 FUN_14dc62bd0 body=44 status=ok
// SIG undefined FUN_14dc62bd0(void)

void FUN_14dc62bd0(void)

{
  return;
}



// FUNCTION 14dc62c57 FUN_14dc62c57 body=122 status=ok
// SIG undefined FUN_14dc62c57(void)

void FUN_14dc62c57(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 != 0x11f730) {
    FUN_14e07af67();
    return;
  }
  FUN_14e07af46(param_1,param_2,FUN_14e07af46,0x110000);
  return;
}



// FUNCTION 14dc62def FUN_14dc62def body=260 status=ok
// SIG undefined FUN_14dc62def(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc62e78) */
/* WARNING: Removing unreachable block (ram,0x00014dc62e7e) */
/* WARNING: Removing unreachable block (ram,0x00014dc62e83) */
/* WARNING: Removing unreachable block (ram,0x00014dc62ee4) */
/* WARNING: Removing unreachable block (ram,0x00014dc62ee9) */
/* WARNING: Removing unreachable block (ram,0x00014dc62eef) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa112) */

ulonglong FUN_14dc62def(void)

{
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  FUN_166af891e(*(ulonglong *)(unaff_R12 + -0x58) + local_res8 +
                (*(ulonglong *)(unaff_R12 + -0x58) & local_res8) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) + local_res8 +
                (*(ulonglong *)(unaff_R12 + -0x78) & local_res8) * -2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ local_res8,unaff_retaddr ^ local_res8);
  return *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
}



// FUNCTION 14dc62efa FUN_14dc62efa body=6 status=ok
// SIG undefined FUN_14dc62efa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc62efa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc62f93 FUN_14dc62f93 body=353 status=ok
// SIG undefined FUN_14dc62f93(void)

/* WARNING: Removing unreachable block (ram,0x00014dc63032) */

void FUN_14dc62f93(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong uVar3;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7c05d4);
  UNLOCK();
  DAT_14d7c05d4 = (char)in_RAX;
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = uVar2;
  *(undefined4 *)(local_res18 + -0x18) = 0x5c9e430;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  uVar3 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x28);
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(undefined4 *)(local_res18 + -0x28) = 0x290ef22;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(longlong *)(local_res18 + -0x10 + (*(ulonglong *)(local_res18 + -0x28) ^ 0x290ef2a)) =
       lVar1 + -0x2d1b4da;
  if ((*(ulonglong *)(local_res18 + -0x20) & 0x80) == 0) {
    FUN_1567a8f75();
    return;
  }
  FUN_1567a8f75();
  return;
}



// FUNCTION 14dc6325f FUN_14dc6325f body=127 status=ok
// SIG undefined FUN_14dc6325f(void)

void FUN_14dc6325f(undefined8 param_1)

{
  FUN_164c406e8(param_1,FUN_164c406e8);
  return;
}



// FUNCTION 14dc6367a FUN_14dc6367a body=187 status=ok
// SIG undefined FUN_14dc6367a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc636f3) */
/* WARNING: Removing unreachable block (ram,0x00014dc636fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc636f9) */
/* WARNING: Removing unreachable block (ram,0x000160fd31be) */

undefined8
FUN_14dc6367a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  longlong in_stack_00000008;
  
  uVar2 = *(ulonglong *)(in_stack_00000008 + -0xa0) ^ unaff_RBX;
  uVar3 = *(ulonglong *)(in_stack_00000008 + -0x98) | unaff_RBX;
  if (CARRY8(~uVar3 | ~(*(ulonglong *)(in_stack_00000008 + -0x98) & unaff_RBX),uVar3)) {
    uVar1 = FUN_15b4db1f5(uVar2,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_15b4db1f5(uVar2,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dc637a8 FUN_14dc637a8 body=156 status=ok
// SIG undefined FUN_14dc637a8(void)

void FUN_14dc637a8(undefined8 param_1)

{
  (*(code *)0x1621aee33)(param_1);
  return;
}



// FUNCTION 14dc63846 FUN_14dc63846 body=148 status=ok
// SIG undefined FUN_14dc63846(void)

/* WARNING: Removing unreachable block (ram,0x00014dc638dd) */

undefined8 FUN_14dc63846(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  if (uVar2 == 0) {
    uVar1 = FUN_165fcaffe();
    return uVar1;
  }
  uVar1 = (*(code *)0x156674b3d)
                    (0x156674b3d,4,*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 + uVar2 * -2,
                     *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14dc638dd FUN_14dc638dd body=111 status=ok
// SIG undefined FUN_14dc638dd(void)

void FUN_14dc638dd(void)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined1 **)(local_res10 + -8) = &LAB_14dc6396b;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x20) = uVar1;
  *(code **)(local_res10 + -0x10) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14dc639ad FUN_14dc639ad body=25 status=ok
// SIG undefined FUN_14dc639ad(void)

void FUN_14dc639ad(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc63a7f FUN_14dc63a7f body=150 status=ok
// SIG undefined FUN_14dc63a7f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc63ac2) */

void FUN_14dc63a7f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_3 + -0x58);
  (*(code *)0x1661df2d0)
            (~((~in_R10 | uVar1) & (~(~uVar1 & in_R10) + in_R10) - uVar1),
             *(undefined8 *)(param_3 + -0x48));
  return;
}



// FUNCTION 14dc63b16 FUN_14dc63b16 body=178 status=ok
// SIG undefined FUN_14dc63b16(void)

/* WARNING: Removing unreachable block (ram,0x00014e0680d2) */
/* WARNING: Removing unreachable block (ram,0x00014e0681da) */
/* WARNING: Removing unreachable block (ram,0x00014dc63bc2) */
/* WARNING: Removing unreachable block (ram,0x00014dc63bc8) */
/* WARNING: Removing unreachable block (ram,0x00014e0681df) */
/* WARNING: Removing unreachable block (ram,0x00014e0681e5) */
/* WARNING: Removing unreachable block (ram,0x00014e0681ea) */

undefined8 FUN_14dc63b16(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e0680d2();
  return uVar1;
}



// FUNCTION 14dc63bc8 FUN_14dc63bc8 body=143 status=ok
// SIG undefined FUN_14dc63bc8(void)

void FUN_14dc63bc8(short *param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  short sVar1;
  short in_AX;
  undefined8 in_stack_00000008;
  
  sVar1 = *param_1;
  *param_1 = 0x62ff;
  *param_1 = *param_1 + -0x62ff;
  *param_1 = *param_1 + (-0x101 - ((~(param_4 & 0xfeff) - 0x101) - (-1 - in_AX))) + sVar1;
  FUN_15758007c(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc63cd6 FUN_14dc63cd6 body=135 status=ok
// SIG undefined FUN_14dc63cd6(void)

void FUN_14dc63cd6(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  
  FUN_165305a2c(param_1,~(unaff_RBP + param_2 + 1U));
  return;
}



// FUNCTION 14dc63e12 FUN_14dc63e12 body=172 status=ok
// SIG undefined FUN_14dc63e12(void)

/* WARNING: Removing unreachable block (ram,0x00014dc63e80) */
/* WARNING: Removing unreachable block (ram,0x00014dc63ebf) */

void FUN_14dc63e12(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x88) != 0) {
    FUN_162718a40();
    return;
  }
  FUN_1623fc4ff(param_1,~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38),unaff_R15);
  return;
}



// FUNCTION 14dc63ebf FUN_14dc63ebf body=167 status=ok
// SIG undefined FUN_14dc63ebf(void)

void FUN_14dc63ebf(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_162cf8647)
            (~*(ulonglong *)(unaff_R13 + -0x38) & ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38),
             &LAB_162cf8647,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dc63f66 FUN_14dc63f66 body=159 status=ok
// SIG undefined FUN_14dc63f66(void)

void FUN_14dc63f66(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16189e652(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,*(undefined8 *)(unaff_R12 + -0x78)
               );
  return;
}



// FUNCTION 14dc64005 FUN_14dc64005 body=134 status=ok
// SIG undefined FUN_14dc64005(void)

/* WARNING: Instruction at (ram,0x00014dc64017) overlaps instruction at (ram,0x00014dc64016)
    */

void FUN_14dc64005(undefined8 param_1,char param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined4 *unaff_RSI;
  undefined8 in_R10;
  undefined1 auStackX_8 [32];
  
  if (param_2 == '\0') {
    pcVar1 = (code *)swi(0x48);
    (*pcVar1)(*unaff_RSI);
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = in_R10;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -8) =
       *(undefined8 *)((longlong)register0x00000020 + -8);
  *(undefined1 **)((longlong)register0x00000020 + -8) = &LAB_15b423fff;
  return;
}



// FUNCTION 14dc6408b FUN_14dc6408b body=155 status=ok
// SIG undefined FUN_14dc6408b(void)

void FUN_14dc6408b(void)

{
  FUN_162dd74a9();
  return;
}



// FUNCTION 14dc6419e FUN_14dc6419e body=140 status=ok
// SIG undefined FUN_14dc6419e(void)

void FUN_14dc6419e(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  FUN_164b1c66e(param_1,~((~(~unaff_RBP & param_2) + param_2) - unaff_RBP & (~param_2 | in_RAX)));
  return;
}



// FUNCTION 14dc6422b FUN_14dc6422b body=2 status=ok
// SIG undefined FUN_14dc6422b(void)

void FUN_14dc6422b(void)

{
  return;
}



// FUNCTION 14dc642e7 FUN_14dc642e7 body=90 status=ok
// SIG undefined FUN_14dc642e7(void)

void FUN_14dc642e7(char param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char in_AL;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  LOCK();
  cVar1 = param_1;
  if (in_AL != DAT_14d7c27f6) {
    cVar1 = DAT_14d7c27f6;
  }
  DAT_14d7c27f6 = cVar1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = 0x156ea86;
  *(undefined8 *)(local_res10 + -8) = *(undefined8 *)(local_res10 + -0x18);
  FUN_15b3d5987(param_1,unaff_retaddr,*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dc64371 FUN_14dc64371 body=302 status=ok
// SIG undefined FUN_14dc64371(void)

/* WARNING: Removing unreachable block (ram,0x00014dc64411) */

undefined8 FUN_14dc64371(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc6449e FUN_14dc6449e body=164 status=ok
// SIG undefined FUN_14dc6449e(void)

void FUN_14dc6449e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  *(undefined8 *)(unaff_RSI + 0x10) = param_3;
  *(ulonglong *)(unaff_RSI + 0x10) = -1 - (in_RAX & *(ulonglong *)(unaff_RSI + 0x10));
  *(undefined8 *)(param_6 + -8) = param_4;
  *(undefined8 *)(param_6 + -0x10) = uStackX_10;
  *(undefined8 *)(param_6 + -0x18) = uStackX_10;
  *(undefined8 *)(param_6 + -0x20) = unaff_retaddr;
  uVar1 = *(undefined8 *)(param_6 + -0x20);
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x20) = 0x14dc64539;
  FUN_1663dfe6f(param_1,param_2,uVar1,&DAT_1663dfebd);
  return;
}



// FUNCTION 14dc64543 FUN_14dc64543 body=62 status=ok
// SIG undefined FUN_14dc64543(void)

void FUN_14dc64543(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0x132194) {
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14dc64acb FUN_14dc64acb body=426 status=ok
// SIG undefined FUN_14dc64acb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc64b5c) */
/* WARNING: Removing unreachable block (ram,0x00014dc64b62) */

void FUN_14dc64acb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_10;
  
  FUN_156e65b46(param_1,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dc64c7a FUN_14dc64c7a body=69 status=ok
// SIG undefined FUN_14dc64c7a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc64c7a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc64d16 FUN_14dc64d16 body=171 status=ok
// SIG undefined FUN_14dc64d16(void)

/* WARNING: Removing unreachable block (ram,0x00014dc64da1) */

void FUN_14dc64d16(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  uVar1 = -~*(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x88) - (~param_3 + 2);
  FUN_1618828a0(FUN_1618828a0,0xa1ce,~((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14dc64dc1 FUN_14dc64dc1 body=290 status=ok
// SIG undefined FUN_14dc64dc1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc64e53) */

void FUN_14dc64dc1(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong uVar7;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  ulonglong auStackX_18 [2];
  
  param_4 = param_4 - unaff_R14;
  *(undefined8 *)((longlong)auStackX_18 + param_4) = unaff_RSI;
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar3 = *(undefined8 *)((longlong)auStackX_18 + param_4 + 8);
  *(undefined8 *)((longlong)auStackX_18 + param_4 + 8) = in_R11;
  *(undefined8 *)((longlong)auStackX_18 + param_4 + 8) = unaff_R12;
  *(undefined8 *)((longlong)auStackX_18 + param_4) = unaff_RBX;
  uVar7 = *(ulonglong *)(&stack0x00000028 + param_4) | unaff_R15;
  *(undefined8 *)((longlong)auStackX_18 + param_4) = param_3;
  *(ulonglong *)((longlong)auStackX_18 + param_4 + -8) =
       uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2;
  if (-1 < (longlong)uVar7) {
    FUN_16561a60b();
    return;
  }
  *(ulonglong *)(&stack0x00000028 + param_4) = ~*(ulonglong *)(&stack0x00000028 + param_4);
  *(ulonglong *)(&stack0x00000028 + param_4) =
       *(ulonglong *)(&stack0x00000028 + param_4) | ~unaff_R15;
  *(ulonglong *)(&stack0x00000028 + param_4) = ~*(ulonglong *)(&stack0x00000028 + param_4);
  uVar5 = *(undefined8 *)((longlong)auStackX_18 + param_4);
  *(ulonglong *)(&stack0x00000028 + param_4) = ~*(ulonglong *)(&stack0x00000028 + param_4);
  *(undefined8 *)((longlong)auStackX_18 + param_4) = local_res8;
  *(undefined8 *)((longlong)auStackX_18 + param_4 + -8) = uStackX_10;
  *(undefined8 *)((longlong)&local_res8 + param_4) = uVar3;
  puVar1 = (ulonglong *)((longlong)auStackX_18 + param_4 + -0x18);
  *(undefined4 *)puVar1 = 0x686f639a;
  *(undefined4 *)((longlong)auStackX_18 + param_4 + -0x14) = 0;
  uVar2 = *(ulonglong *)((longlong)auStackX_18 + (*puVar1 ^ 0x686f6392) + param_4 + 8);
  uVar3 = *(undefined8 *)((longlong)&local_res8 + param_4);
  lVar4 = *(longlong *)(&stack0x00000028 + param_4);
  *(undefined8 *)(&stack0x00000028 + param_4) = 0;
  *(ulonglong *)(&stack0x00000028 + param_4) =
       *(longlong *)(&stack0x00000028 + param_4) + (uVar7 - (uVar2 | uVar7)) + lVar4;
  uVar6 = *(undefined8 *)((longlong)auStackX_18 + param_4);
  *(undefined8 *)((longlong)auStackX_18 + param_4 + 8) = uVar5;
  *(undefined8 *)((longlong)auStackX_18 + param_4) = in_R10;
  *(undefined8 *)((longlong)auStackX_18 + param_4 + -8) = uVar3;
  *(undefined4 *)((longlong)auStackX_18 + param_4 + -8) = 0xe50db5c;
  *(undefined4 *)((longlong)auStackX_18 + param_4 + -4) = 0;
  FUN_14d8b617c(param_1,param_2,FUN_14d8b617c,uVar6);
  return;
}



// FUNCTION 14dc65031 FUN_14dc65031 body=468 status=ok
// SIG undefined FUN_14dc65031(void)

void FUN_14dc65031(undefined1 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_156c5579c(param_1,(~unaff_RSI | param_2) + unaff_RSI + 1,param_3,
                *(undefined8 *)(unaff_RDI + -0x98),*(undefined8 *)(unaff_RDI + -8),
                *(undefined8 *)(unaff_RDI + -0x90));
  (*(code *)0x156770dbc)();
  return;
}



// FUNCTION 14dc651e0 FUN_14dc651e0 body=196 status=ok
// SIG undefined FUN_14dc651e0(void)

/* WARNING: Removing unreachable block (ram,0x00015b085502) */
/* WARNING: Removing unreachable block (ram,0x00015b085508) */
/* WARNING: Removing unreachable block (ram,0x00015b08550d) */
/* WARNING: Removing unreachable block (ram,0x00014dc6531a) */
/* WARNING: Removing unreachable block (ram,0x00014dc65320) */
/* WARNING: Removing unreachable block (ram,0x00014dc653b8) */
/* WARNING: Removing unreachable block (ram,0x00014dc653be) */
/* WARNING: Removing unreachable block (ram,0x00015b08546b) */
/* WARNING: Removing unreachable block (ram,0x000157188661) */
/* WARNING: Removing unreachable block (ram,0x000165ca9e07) */
/* WARNING: Removing unreachable block (ram,0x000165a93b89) */
/* WARNING: Removing unreachable block (ram,0x000165a93bd0) */
/* WARNING: Removing unreachable block (ram,0x000165a93bd4) */
/* WARNING: Removing unreachable block (ram,0x000165a93c2e) */
/* WARNING: Removing unreachable block (ram,0x000165a93c3f) */
/* WARNING: Removing unreachable block (ram,0x000165a93c68) */
/* WARNING: Removing unreachable block (ram,0x000165a93c61) */
/* WARNING: Removing unreachable block (ram,0x000165a93c6a) */
/* WARNING: Removing unreachable block (ram,0x000165a93c70) */
/* WARNING: Removing unreachable block (ram,0x000165a93c8f) */

void FUN_14dc651e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  puVar1 = (undefined8 *)(unaff_RBP + (unaff_R15 ^ 0x73199581));
  uVar2 = *(undefined8 *)((longlong)ProcessEnvironmentBlock + 0x18);
  *puVar1 = uVar2;
  *puVar1 = in_RAX;
  puVar1[-1] = uVar2;
  puVar1[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | 0x80 | (ulonglong)(in_AF & 1) * 0x10 | 1 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if (((*(uint *)(puVar1 + -1) & 1) == 0) && ((*(uint *)(puVar1 + -1) >> 6 & 1) == 0)) {
    puVar1[-1] = param_1;
    puVar1[-1] = unaff_R14;
    puVar1[-1] = in_R11;
    FUN_165ca9e07();
    return;
  }
  FUN_165a93b89();
  return;
}



// FUNCTION 14dc65320 FUN_14dc65320 body=453 status=ok
// SIG undefined FUN_14dc65320(void)

/* WARNING: Removing unreachable block (ram,0x00015b085502) */
/* WARNING: Removing unreachable block (ram,0x00015b08550d) */
/* WARNING: Removing unreachable block (ram,0x00015b085508) */
/* WARNING: Removing unreachable block (ram,0x00014dc653be) */

void FUN_14dc65320(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0x4f99d9a0;
  *puVar1 = *puVar1 ^ 0x4f99d9a0;
  *puVar1 = *puVar1 ^ unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  puVar1 = (ulonglong *)(local_res18 + -0x20);
  *(undefined4 *)puVar1 = 0x324381b4;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  *(undefined8 *)(local_res18 + -0x10 + (*puVar1 ^ 0x324381bc)) = 0;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *puVar1 = param_2;
  *(undefined1 **)(local_res18 + -8) = &LAB_1571886b6 + *(longlong *)(local_res18 + -8);
  FUN_14d7abf30(local_res8,*puVar1,param_3,param_4);
  return;
}



// FUNCTION 14dc6565a FUN_14dc6565a body=111 status=ok
// SIG undefined FUN_14dc6565a(void)

void FUN_14dc6565a(void)

{
  return;
}



// FUNCTION 14dc658f5 FUN_14dc658f5 body=272 status=ok
// SIG undefined FUN_14dc658f5(void)

/* WARNING: Instruction at (ram,0x000157888db5) overlaps instruction at (ram,0x000157888db1)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc6596f) */
/* WARNING: Removing unreachable block (ram,0x00014dc65975) */
/* WARNING: Removing unreachable block (ram,0x000157888d48) */
/* WARNING: Removing unreachable block (ram,0x000157888dae) */
/* WARNING: Removing unreachable block (ram,0x000157888da9) */
/* WARNING: Removing unreachable block (ram,0x000157888db1) */
/* WARNING: Removing unreachable block (ram,0x00014dc65a8b) */
/* WARNING: Removing unreachable block (ram,0x00014dc65a97) */
/* WARNING: Removing unreachable block (ram,0x00014dc65b44) */
/* WARNING: Removing unreachable block (ram,0x00014dc65b4a) */
/* WARNING: Removing unreachable block (ram,0x000165a7033c) */
/* WARNING: Removing unreachable block (ram,0x000165a7036a) */
/* WARNING: Removing unreachable block (ram,0x000165a7036e) */
/* WARNING: Removing unreachable block (ram,0x000165a703d9) */
/* WARNING: Removing unreachable block (ram,0x000165a703df) */
/* WARNING: Removing unreachable block (ram,0x000165a703e9) */
/* WARNING: Removing unreachable block (ram,0x000165f67721) */
/* WARNING: Removing unreachable block (ram,0x000165f677a9) */
/* WARNING: Removing unreachable block (ram,0x000165f677b5) */
/* WARNING: Removing unreachable block (ram,0x00016119138a) */
/* WARNING: Removing unreachable block (ram,0x000157272491) */
/* WARNING: Removing unreachable block (ram,0x000161191403) */
/* WARNING: Removing unreachable block (ram,0x000161191409) */
/* WARNING: Removing unreachable block (ram,0x00016119140e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dc658f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  
  FUN_1567de0cb(param_1,param_2,param_3,param_4,*(undefined8 *)(in_stack_00000008 + -0x70));
  uVar1 = FUN_1648861b9(*(ulonglong *)(in_stack_00000008 + -0x88) & unaff_R15 ^ 0xffffffffffffffff,
                        0xffffffffffffffa0,FUN_1648861b9,
                        ~((~unaff_R15 | *(ulonglong *)(in_stack_00000008 + -0x60)) &
                         (~*(ulonglong *)(in_stack_00000008 + -0x60) | unaff_R15)));
  return uVar1;
}



// FUNCTION 14dc65a06 FUN_14dc65a06 body=305 status=ok
// SIG undefined FUN_14dc65a06(void)

/* WARNING: Instruction at (ram,0x000157888db5) overlaps instruction at (ram,0x000157888db1)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc65a8b) */
/* WARNING: Removing unreachable block (ram,0x00014dc65a97) */
/* WARNING: Removing unreachable block (ram,0x00014dc65b44) */
/* WARNING: Removing unreachable block (ram,0x00014dc65b4a) */
/* WARNING: Removing unreachable block (ram,0x000165a7033c) */
/* WARNING: Removing unreachable block (ram,0x000165a7036a) */
/* WARNING: Removing unreachable block (ram,0x000165a7036e) */
/* WARNING: Removing unreachable block (ram,0x000165a703d9) */
/* WARNING: Removing unreachable block (ram,0x000165a703df) */
/* WARNING: Removing unreachable block (ram,0x000165a703e9) */
/* WARNING: Removing unreachable block (ram,0x000165f67721) */
/* WARNING: Removing unreachable block (ram,0x000165f677a9) */
/* WARNING: Removing unreachable block (ram,0x000165f677b5) */
/* WARNING: Removing unreachable block (ram,0x00016119138a) */
/* WARNING: Removing unreachable block (ram,0x000157272491) */
/* WARNING: Removing unreachable block (ram,0x000161191403) */
/* WARNING: Removing unreachable block (ram,0x000161191409) */
/* WARNING: Removing unreachable block (ram,0x00016119140e) */
/* WARNING: Removing unreachable block (ram,0x000157888dae) */

void FUN_14dc65a06(void)

{
  return;
}



// FUNCTION 14dc65a97 FUN_14dc65a97 body=179 status=ok
// SIG undefined FUN_14dc65a97(void)

/* WARNING: Removing unreachable block (ram,0x000165a703df) */
/* WARNING: Removing unreachable block (ram,0x000165a703e9) */
/* WARNING: Removing unreachable block (ram,0x00016119140e) */
/* WARNING: Removing unreachable block (ram,0x000165a7036a) */
/* WARNING: Removing unreachable block (ram,0x000165f677b5) */
/* WARNING: Removing unreachable block (ram,0x00014dc65b4a) */

void FUN_14dc65a97(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x30) + unaff_R15 ==
      (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) * 2) {
    FUN_157272491();
    return;
  }
  return;
}



// FUNCTION 14dc65b4a FUN_14dc65b4a body=49 status=ok
// SIG undefined FUN_14dc65b4a(void)

void FUN_14dc65b4a(void)

{
  return;
}



// FUNCTION 14dc65c86 FUN_14dc65c86 body=519 status=ok
// SIG undefined FUN_14dc65c86(void)

/* WARNING: Removing unreachable block (ram,0x00015b0da7fc) */
/* WARNING: Removing unreachable block (ram,0x00014dc65d39) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc65c86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_1658f16c8(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14dc65dcd FUN_14dc65dcd body=142 status=ok
// SIG undefined FUN_14dc65dcd(void)

/* WARNING: Removing unreachable block (ram,0x00014dc65ecb) */

void FUN_14dc65dcd(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 local_res10;
  longlong in_stack_00000028;
  
  FUN_15b9b326b(param_1);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBP;
  *(undefined1 **)(in_stack_00000028 + -0x10) = &LAB_1662f6f01;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_1662f6f01;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(ulonglong *)(in_stack_00000028 + -8) =
       *(ulonglong *)(in_stack_00000028 + -8) ^ *(ulonglong *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_RAX;
  FUN_14d7a77f5();
  return;
}



// FUNCTION 14dc65e5b FUN_14dc65e5b body=399 status=ok
// SIG undefined FUN_14dc65e5b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc65ecb) */

void FUN_14dc65e5b(void)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_1662f6f01;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_1662f6f01;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) =
       *(ulonglong *)(local_res20 + -8) ^ *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  FUN_14d7a77f5();
  return;
}



// FUNCTION 14dc65fed FUN_14dc65fed body=237 status=ok
// SIG undefined FUN_14dc65fed(void)

undefined8 FUN_14dc65fed(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong unaff_R13;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | in_RAX;
  *(ulonglong *)(unaff_R13 + 8) = ~((~in_RAX | uVar1) & *(ulonglong *)(unaff_R13 + 8));
  uVar2 = FUN_15b412154();
  return uVar2;
}



// FUNCTION 14dc660dd FUN_14dc660dd body=145 status=ok
// SIG undefined FUN_14dc660dd(void)

void FUN_14dc660dd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  FUN_15b67d774(*(longlong *)(unaff_R12 + -0x98) + in_RAX,param_2,param_3,param_4);
  FUN_156b90669();
  return;
}



// FUNCTION 14dc6616e FUN_14dc6616e body=142 status=ok
// SIG undefined FUN_14dc6616e(void)

void FUN_14dc6616e(undefined8 param_1,undefined8 param_2)

{
  FUN_156b90669(param_1,param_2);
  return;
}



// FUNCTION 14dc6634e FUN_14dc6634e body=49 status=ok
// SIG undefined FUN_14dc6634e(void)

void * FUN_14dc6634e(void)

{
  return ProcessEnvironmentBlock;
}



// FUNCTION 14dc6648b thunk_FUN_14dc66491 body=5 status=ok
// SIG undefined thunk_FUN_14dc66491(void)

void thunk_FUN_14dc66491(void)

{
  FUN_1629c9909();
  return;
}



// FUNCTION 14dc66491 FUN_14dc66491 body=74 status=ok
// SIG undefined FUN_14dc66491(void)

void FUN_14dc66491(void)

{
  FUN_1629c9909();
  return;
}



// FUNCTION 14dc6651d FUN_14dc6651d body=127 status=ok
// SIG undefined FUN_14dc6651d(void)

void FUN_14dc6651d(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1575cd55c(param_1,~unaff_R15,*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dc6659c FUN_14dc6659c body=151 status=ok
// SIG undefined FUN_14dc6659c(void)

void FUN_14dc6659c(void)

{
  FUN_14dc7b515();
  return;
}



// FUNCTION 14dc66633 FUN_14dc66633 body=17 status=ok
// SIG undefined FUN_14dc66633(void)

undefined8 FUN_14dc66633(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc66784 FUN_14dc66784 body=123 status=ok
// SIG undefined FUN_14dc66784(void)

void FUN_14dc66784(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res10 = (~local_res10 | ~in_RAX) & (local_res10 | in_RAX);
  local_res18 = local_res18 ^ in_RAX;
  (*(code *)0x162d0c5ee)(param_1,&local_res10);
  return;
}



// FUNCTION 14dc6692d thunk_FUN_14dc66933 body=5 status=ok
// SIG undefined thunk_FUN_14dc66933(void)

void thunk_FUN_14dc66933(void)

{
  return;
}



// FUNCTION 14dc66933 FUN_14dc66933 body=5 status=ok
// SIG undefined FUN_14dc66933(void)

void FUN_14dc66933(void)

{
  return;
}



// FUNCTION 14dc669ad FUN_14dc669ad body=134 status=ok
// SIG undefined FUN_14dc669ad(void)

void FUN_14dc669ad(void)

{
  ushort uVar1;
  undefined8 unaff_RBP;
  ushort *unaff_R15;
  longlong in_stack_00000028;
  
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  uVar1 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = (~(uVar1 & 0x100) + 0x100) - *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = -*unaff_R15;
  *unaff_R15 = *unaff_R15 - 1;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *(undefined1 **)(in_stack_00000028 + -8) = &LAB_14dc66a34;
  return;
}



// FUNCTION 14dc66a40 FUN_14dc66a40 body=130 status=ok
// SIG undefined FUN_14dc66a40(void)

/* WARNING: Removing unreachable block (ram,0x00014dc66a59) */

void FUN_14dc66a40(undefined8 param_1,undefined8 param_2)

{
  FUN_1658e10cc(param_1,param_2,FUN_1658e10cc);
  return;
}



// FUNCTION 14dc66b6a FUN_14dc66b6a body=146 status=ok
// SIG undefined FUN_14dc66b6a(void)

void FUN_14dc66b6a(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar1 = ~(local_res18 & unaff_R15 | ~(local_res18 | unaff_R15));
  *(undefined8 *)(uVar1 - 8) = local_res8;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_1572fdef1;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_1572fdef1;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined8 *)(uVar1 - 0x28) = in_RAX;
  FUN_14dec5570(unaff_retaddr,8);
  return;
}



// FUNCTION 14dc66c0d FUN_14dc66c0d body=114 status=ok
// SIG undefined FUN_14dc66c0d(void)

void FUN_14dc66c0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) ^ 0xffffffffffffffff;
  lVar1 = *(longlong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) & unaff_R15;
  *(ulonglong *)(param_4 + 8) = (lVar1 + unaff_R15) - *(longlong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) =
       ~((*(longlong *)(param_4 + 8) - (unaff_R13 | *(ulonglong *)(param_4 + 8))) + unaff_R13);
  FUN_15b404573(param_1,param_2,unaff_retaddr,uStackX_8);
  return;
}


