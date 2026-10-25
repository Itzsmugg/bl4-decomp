// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dbb0f90 FUN_14dbb0f90 body=158 status=ok
// SIG undefined FUN_14dbb0f90(void)

void FUN_14dbb0f90(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156fe864e(*(ulonglong *)(unaff_R13 + -0x88),FUN_156fe864e,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dbb10c9 FUN_14dbb10c9 body=145 status=ok
// SIG undefined FUN_14dbb10c9(void)

undefined8 FUN_14dbb10c9(void)

{
  longlong *plVar1;
  short sVar2;
  undefined8 uVar3;
  short in_AX;
  undefined8 unaff_RSI;
  short *unaff_R13;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong local_res20;
  
  sVar2 = *unaff_R13;
  *unaff_R13 = 0;
  *unaff_R13 = *unaff_R13 + (-0x101 - in_AX) + sVar2;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  uVar3 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_1661bc860;
  return uVar3;
}



// FUNCTION 14dbb129a FUN_14dbb129a body=307 status=ok
// SIG undefined FUN_14dbb129a(void)

undefined8 FUN_14dbb129a(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_retaddr;
  
  FUN_1616a431c(param_1,unaff_retaddr);
  return in_RAX;
}



// FUNCTION 14dbb15d2 FUN_14dbb15d2 body=99 status=ok
// SIG undefined FUN_14dbb15d2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbb15d2(void)

{
  FUN_14d7a907f();
  return;
}



// FUNCTION 14dbb170e FUN_14dbb170e body=308 status=ok
// SIG undefined FUN_14dbb170e(void)

void FUN_14dbb170e(void)

{
  FUN_1658bb8a9();
  FUN_161b7386a(FUN_161b7386a);
  return;
}



// FUNCTION 14dbb184e FUN_14dbb184e body=174 status=ok
// SIG undefined FUN_14dbb184e(void)

void FUN_14dbb184e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x160b5496f)
            (param_1,8,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x60)) &
              (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14dbb18fc FUN_14dbb18fc body=294 status=ok
// SIG undefined FUN_14dbb18fc(void)

void FUN_14dbb18fc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar2;
  char unaff_retaddr;
  undefined8 local_res8;
  
  uVar2 = unaff_RBP - (param_2 << ((unaff_retaddr + 0xbcU ^ 0x44) & 0x3f));
  uVar1 = FUN_1619896ec(local_res8,uVar2,param_3);
  FUN_1618538af(local_res8,unaff_RDI + (uVar2 & uVar1) * -2);
  return;
}



// FUNCTION 14dbb1ac8 FUN_14dbb1ac8 body=156 status=ok
// SIG undefined FUN_14dbb1ac8(void)

void FUN_14dbb1ac8(undefined8 param_1)

{
  char in_AL;
  short in_R11W;
  undefined8 unaff_R13;
  ulonglong uVar1;
  ushort *unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_retaddr = (~(in_R11W + 0x880U) | *unaff_retaddr) - 0x100;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a70ea) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a70ea) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7a70ea = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = 0x571b372;
  *(longlong *)(local_res20 + -0x20) = *(longlong *)(local_res20 + -0x20) + -0x25189e2;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  (*(code *)0x162066882)(0x3202990,local_res8);
  return;
}



// FUNCTION 14dbb1b67 FUN_14dbb1b67 body=167 status=ok
// SIG undefined FUN_14dbb1b67(void)

void FUN_14dbb1b67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort unaff_R13W;
  undefined8 local_res10;
  
  FUN_1614fc0c8(local_res10,param_2,param_3,0xffff - unaff_R13W & 0x100 | unaff_R13W);
  return;
}



// FUNCTION 14dbb1d50 FUN_14dbb1d50 body=135 status=ok
// SIG undefined FUN_14dbb1d50(void)

void FUN_14dbb1d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_1648262e5(param_1,in_stack_00000010,param_3,FUN_1648262e5,
                *(undefined8 *)(in_stack_00000008 + -0x90));
  return;
}



// FUNCTION 14dbb1e5d FUN_14dbb1e5d body=140 status=ok
// SIG undefined FUN_14dbb1e5d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb1f81) */
/* WARNING: Removing unreachable block (ram,0x00014dbb1f87) */

void FUN_14dbb1e5d(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  uVar1 = ~(0xffffffffffffffff - unaff_R15) & ~param_1;
  uVar1 = FUN_15b10ad86(~(((~param_1 | unaff_R15) - ~(uVar1 & ~(~param_1 | unaff_R15))) + ~uVar1),
                        ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                         (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  uVar3 = (uVar1 - 1) - ~*(ulonglong *)(unaff_R12 + -0x90);
  uVar2 = (*(ulonglong *)(unaff_R12 + -0x90) & uVar1) << 1;
  if (uVar2 <= uVar3) {
    return;
  }
  if (uVar2 < uVar3) {
    return;
  }
  FUN_1659d827c(CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0x2a) ^ 0x2a ^ uVar1,
                *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1);
  return;
}



// FUNCTION 14dbb1ee9 FUN_14dbb1ee9 body=315 status=ok
// SIG undefined FUN_14dbb1ee9(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb1f81) */
/* WARNING: Removing unreachable block (ram,0x00014dbb1f87) */

void FUN_14dbb1ee9(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  ulonglong uVar2;
  
  uVar2 = (in_RAX - 1) - ~*(ulonglong *)(unaff_R12 + -0x90);
  uVar1 = (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) << 1;
  if (uVar1 <= uVar2) {
    return;
  }
  if (uVar1 < uVar2) {
    return;
  }
  FUN_1659d827c(unaff_RDI ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dbb2156 FUN_14dbb2156 body=65 status=ok
// SIG undefined FUN_14dbb2156(void)

void FUN_14dbb2156(void)

{
  return;
}



// FUNCTION 14dbb226f FUN_14dbb226f body=122 status=ok
// SIG undefined FUN_14dbb226f(void)

void FUN_14dbb226f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156480e49(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbb22eb FUN_14dbb22eb body=318 status=ok
// SIG undefined FUN_14dbb22eb(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb2389) */

void FUN_14dbb22eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_15b351b91(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14dbb24e4 FUN_14dbb24e4 body=146 status=ok
// SIG undefined FUN_14dbb24e4(void)

void FUN_14dbb24e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong *unaff_RBP;
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = -*unaff_RBP;
  *unaff_RBP = *unaff_RBP - 1;
  *unaff_RBP = *unaff_RBP | in_RAX;
  *unaff_RBP = ~((~in_stack_00000008 | uVar1) & *unaff_RBP);
  (*(code *)0x166a6b08f)(param_1,0x166a6b08f,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14dbb2579 FUN_14dbb2579 body=59 status=ok
// SIG undefined FUN_14dbb2579(void)

void FUN_14dbb2579(void)

{
  return;
}



// FUNCTION 14dbb25e9 FUN_14dbb25e9 body=127 status=ok
// SIG undefined FUN_14dbb25e9(void)

void FUN_14dbb25e9(void)

{
  undefined2 unaff_BP;
  undefined8 unaff_RDI;
  undefined2 *in_R10;
  undefined8 unaff_R12;
  longlong in_stack_00000030;
  
  *in_R10 = unaff_BP;
  *(undefined8 *)(in_stack_00000030 + -8) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -8) = 0;
  *(longlong *)(in_stack_00000030 + -8) = *(longlong *)(in_stack_00000030 + -8) + -0x14dbb267f;
  *(longlong *)(in_stack_00000030 + -8) = -*(longlong *)(in_stack_00000030 + -8);
  FUN_14d7aaf11();
  return;
}



// FUNCTION 14dbb273e FUN_14dbb273e body=321 status=ok
// SIG undefined FUN_14dbb273e(void)

/* WARNING: Removing unreachable block (ram,0x000161a33de9) */
/* WARNING: Removing unreachable block (ram,0x000161a33df4) */
/* WARNING: Removing unreachable block (ram,0x000156524c5f) */
/* WARNING: Removing unreachable block (ram,0x000161a33def) */
/* WARNING: Removing unreachable block (ram,0x000156524c4d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb27c4) */

undefined8
FUN_14dbb273e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar3 = *(ulonglong *)(unaff_RDI + unaff_RBP + 0x404321b);
  uVar2 = ~(~(0xffffffffffffffff - unaff_retaddr) & ~uVar3);
  uVar3 = ~unaff_retaddr & (uVar3 ^ 0xffffffffffffffff) | unaff_retaddr;
  if ((longlong)((uVar3 - (uVar2 | uVar3)) + uVar2 ^ 0xffffffffffffffff) < 0) {
    uVar1 = (*(code *)0x14de421ff)(0x14de421ff,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_161a33cbc();
  return uVar1;
}



// FUNCTION 14dbb2880 FUN_14dbb2880 body=51 status=ok
// SIG undefined FUN_14dbb2880(void)

void FUN_14dbb2880(void)

{
  return;
}



// FUNCTION 14dbb291f FUN_14dbb291f body=118 status=ok
// SIG undefined FUN_14dbb291f(void)

void FUN_14dbb291f(void)

{
  FUN_164861f0d();
  return;
}



// FUNCTION 14dbb299c FUN_14dbb299c body=148 status=ok
// SIG undefined FUN_14dbb299c(void)

void FUN_14dbb299c(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  ulonglong uVar1;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x88);
  FUN_165c9f9ce(0x15abf771,*(undefined8 *)(unaff_R13 + -0x38),
                -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                     (uVar1 + unaff_R15) - (uVar1 & unaff_R15)),
                0xffffffffffffffff - ((in_RAX | in_R9) + unaff_R15 + 1) & unaff_RBX);
  return;
}



// FUNCTION 14dbb2c2a FUN_14dbb2c2a body=191 status=ok
// SIG undefined FUN_14dbb2c2a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb2ccf) */

void FUN_14dbb2c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar3;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  uVar2 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(code **)(local_res18 + -0x20) = UNRECOVERED_JUMPTABLE;
  *(undefined4 *)(local_res18 + -0x20) = 0x3c18c0a1;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(local_res18 + -0x20) ^ 0x3c18c0a9;
  *(undefined8 *)(local_res18 + -0x10 + uVar3) = 0;
  puVar1 = (undefined8 *)(local_res18 + -0x10 + uVar3);
  *puVar1 = *puVar1;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x1621e0dab;
                    /* WARNING: Could not recover jumptable at 0x0001621e0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uStackX_8,uVar2);
  return;
}



// FUNCTION 14dbb2ccf FUN_14dbb2ccf body=153 status=ok
// SIG undefined FUN_14dbb2ccf(void)

void FUN_14dbb2ccf(void)

{
  FUN_1663aa887();
  return;
}



// FUNCTION 14dbb2e07 FUN_14dbb2e07 body=160 status=ok
// SIG undefined FUN_14dbb2e07(void)

/* WARNING: Removing unreachable block (ram,0x000162996e4c) */
/* WARNING: Removing unreachable block (ram,0x000162996ece) */
/* WARNING: Removing unreachable block (ram,0x000162996ed9) */
/* WARNING: Removing unreachable block (ram,0x000162996edf) */
/* WARNING: Removing unreachable block (ram,0x000162996ee4) */
/* WARNING: Removing unreachable block (ram,0x00014dfbd3cf) */
/* WARNING: Removing unreachable block (ram,0x000162996f48) */
/* WARNING: Removing unreachable block (ram,0x000162996f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb2ea9) */
/* WARNING: Removing unreachable block (ram,0x00014dbb2f4c) */
/* WARNING: Removing unreachable block (ram,0x00014dbb2f52) */
/* WARNING: Removing unreachable block (ram,0x00014dfbd29a) */

undefined8 FUN_14dbb2e07(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (-1 < (longlong)(~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) + in_RAX)) {
    uVar1 = FUN_1655941be(*(undefined8 *)(unaff_R12 + -0x58));
    return uVar1;
  }
  uVar1 = FUN_161874b2e();
  return uVar1;
}



// FUNCTION 14dbb2ea9 FUN_14dbb2ea9 body=475 status=ok
// SIG undefined FUN_14dbb2ea9(void)

/* WARNING: Removing unreachable block (ram,0x000162996e4c) */
/* WARNING: Removing unreachable block (ram,0x000162996ece) */
/* WARNING: Removing unreachable block (ram,0x000162996ed9) */
/* WARNING: Removing unreachable block (ram,0x000162996edf) */
/* WARNING: Removing unreachable block (ram,0x000162996ee4) */
/* WARNING: Removing unreachable block (ram,0x00014dfbd3cf) */
/* WARNING: Removing unreachable block (ram,0x000162996f48) */
/* WARNING: Removing unreachable block (ram,0x000162996f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb2f52) */

undefined8 FUN_14dbb2ea9(void)

{
  undefined8 uVar1;
  
  FUN_1574d7210();
  uVar1 = FUN_162996e4c();
  return uVar1;
}



// FUNCTION 14dbb2f52 FUN_14dbb2f52 body=15 status=ok
// SIG undefined FUN_14dbb2f52(void)

void FUN_14dbb2f52(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbb2f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dbb309d thunk_FUN_14dbb30a3 body=5 status=ok
// SIG undefined thunk_FUN_14dbb30a3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb31b6) */

void thunk_FUN_14dbb30a3(void)

{
  longlong unaff_R13;
  
  FUN_162e36135();
  FUN_162516efb(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dbb30a3 FUN_14dbb30a3 body=155 status=ok
// SIG undefined FUN_14dbb30a3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb31b6) */

void FUN_14dbb30a3(void)

{
  longlong unaff_R13;
  
  FUN_162e36135();
  FUN_162516efb(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dbb3140 FUN_14dbb3140 body=196 status=ok
// SIG undefined FUN_14dbb3140(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb31b6) */

void FUN_14dbb3140(void)

{
  longlong unaff_R13;
  
  FUN_162516efb(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dbb32f1 FUN_14dbb32f1 body=136 status=ok
// SIG undefined FUN_14dbb32f1(void)

void FUN_14dbb32f1(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_160bd442c(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dbb35e8 FUN_14dbb35e8 body=159 status=ok
// SIG undefined FUN_14dbb35e8(void)

void FUN_14dbb35e8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_1571472e8)(param_1,4,~param_1 | *(ulonglong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14dbb374d FUN_14dbb374d body=580 status=ok
// SIG undefined FUN_14dbb374d(void)

/* WARNING: Removing unreachable block (ram,0x00015ba2a13a) */
/* WARNING: Removing unreachable block (ram,0x00015ba2a140) */
/* WARNING: Removing unreachable block (ram,0x00014dcebb41) */
/* WARNING: Removing unreachable block (ram,0x00015ba2a1c4) */
/* WARNING: Removing unreachable block (ram,0x00015ba2a1ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbb37c5) */

void FUN_14dbb374d(void)

{
  return;
}



// FUNCTION 14dbb384a FUN_14dbb384a body=450 status=ok
// SIG undefined FUN_14dbb384a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb38e0) */
/* WARNING: Removing unreachable block (ram,0x00014dbb38e6) */

void FUN_14dbb384a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ushort *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 in_stack_00000008;
  ushort auStackX_10 [4];
  undefined8 uStackX_18;
  
  puVar2 = (ushort *)
           ((longlong)auStackX_10 +
           (param_1 - ~(~(unaff_RDI & 0xffffffffa7ed4437) & (unaff_RDI | 0xffffffffa7ed4437))));
  *puVar2 = *puVar2 ^ 0xffff;
  *puVar2 = *puVar2 | 0x100;
  *puVar2 = *puVar2 ^ 0xffff;
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(undefined8 *)(param_5 + -0x18) = in_stack_00000008;
  puVar1 = (ulonglong *)(param_5 + -8);
  uVar3 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | unaff_R13;
  *puVar1 = ~((~unaff_R13 | uVar3) & *puVar1);
  uVar4 = *(undefined8 *)(param_5 + -0x18);
  uVar5 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  *(undefined8 *)(param_5 + -0x20) = uVar5;
  *(undefined8 *)(param_5 + -0x20) = uStackX_18;
  *(undefined4 *)(param_5 + -0x28) = 0x3d09e75d;
  *(undefined4 *)(param_5 + -0x24) = 0;
  uVar3 = *(ulonglong *)(param_5 + -0x28);
  *(undefined8 *)(param_5 + -0x28) = unaff_R12;
  *(undefined8 *)(param_5 + -0x18 + (uVar3 ^ 0x3d09e755)) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = param_2;
  FUN_1657769cf(uVar4,FUN_1657769cf,*(undefined8 *)(param_5 + -0x20));
  return;
}



// FUNCTION 14dbb3971 FUN_14dbb3971 body=119 status=ok
// SIG undefined FUN_14dbb3971(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb3a8e) */

void FUN_14dbb3971(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong unaff_retaddr;
  longlong alStackX_10 [3];
  
  uVar2 = FUN_166de0145(param_1,param_2);
  *(undefined8 *)((longlong)alStackX_10 + (uVar2 ^ 0x20523e77)) = 0;
  plVar1 = (longlong *)((longlong)alStackX_10 + (uVar2 ^ 0x20523e77));
  *plVar1 = *plVar1 + unaff_R14;
  alStackX_10[0] = *(longlong *)(unaff_retaddr + -8);
  if (*(longlong *)(unaff_retaddr + -0xa0) == 0 && unaff_R15 == 0) {
    FUN_1656351b6(param_1,FUN_1656351b6,param_3);
    return;
  }
  FUN_165fa102c();
  return;
}



// FUNCTION 14dbb39ea FUN_14dbb39ea body=167 status=ok
// SIG undefined FUN_14dbb39ea(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb3a8e) */

void FUN_14dbb39ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong alStackX_10 [3];
  
  *(undefined8 *)((longlong)alStackX_10 + (in_RAX ^ 0x20523e77)) = 0;
  plVar1 = (longlong *)((longlong)alStackX_10 + (in_RAX ^ 0x20523e77));
  *plVar1 = *plVar1 + unaff_R14;
  alStackX_10[0] = *(longlong *)(unaff_R13 + -8);
  if (*(longlong *)(unaff_R13 + -0xa0) == 0 && unaff_R15 == 0) {
    FUN_1656351b6(param_1,FUN_1656351b6,param_3);
    return;
  }
  FUN_165fa102c();
  return;
}



// FUNCTION 14dbb3a94 FUN_14dbb3a94 body=320 status=ok
// SIG undefined FUN_14dbb3a94(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb3b38) */
/* WARNING: Removing unreachable block (ram,0x00014dbb3b3e) */
/* WARNING: Removing unreachable block (ram,0x0001660f3abd) */
/* WARNING: Removing unreachable block (ram,0x0001660f3bd0) */
/* WARNING: Removing unreachable block (ram,0x0001660f3bd5) */
/* WARNING: Removing unreachable block (ram,0x0001660f3bdb) */
/* WARNING: Removing unreachable block (ram,0x0001660f3be0) */

void FUN_14dbb3a94(void)

{
  FUN_1660f3abd();
  return;
}



// FUNCTION 14dbb3dbd FUN_14dbb3dbd body=148 status=ok
// SIG undefined FUN_14dbb3dbd(void)

void FUN_14dbb3dbd(void)

{
  return;
}



// FUNCTION 14dbb428f FUN_14dbb428f body=153 status=ok
// SIG undefined FUN_14dbb428f(void)

void FUN_14dbb428f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_160d0fced(param_1,param_2,param_3,-*(longlong *)(unaff_RDI + -0x88));
  return;
}



// FUNCTION 14dbb4329 FUN_14dbb4329 body=155 status=ok
// SIG undefined FUN_14dbb4329(void)

void FUN_14dbb4329(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16478c69c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dbb43c4 FUN_14dbb43c4 body=131 status=ok
// SIG undefined FUN_14dbb43c4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb43ee) */

void FUN_14dbb43c4(void)

{
  return;
}



// FUNCTION 14dbb44cf FUN_14dbb44cf body=321 status=ok
// SIG undefined FUN_14dbb44cf(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb4591) */

void FUN_14dbb44cf(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x88) ^ param_1)) {
    FUN_165ff1330();
    return;
  }
  FUN_165ff1330();
  return;
}



// FUNCTION 14dbb4696 FUN_14dbb4696 body=307 status=ok
// SIG undefined FUN_14dbb4696(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb4736) */
/* WARNING: Removing unreachable block (ram,0x00014dbb473c) */
/* WARNING: Removing unreachable block (ram,0x000165db5226) */

undefined8 FUN_14dbb4696(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  undefined8 in_R10;
  code *pcVar9;
  undefined8 in_R11;
  undefined1 unaff_R12B;
  undefined7 unaff_000000a1;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  byte in_AF;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte in_TF;
  byte bVar16;
  byte in_IF;
  byte bVar17;
  byte bVar18;
  byte in_NT;
  byte bVar19;
  byte in_AC;
  byte bVar20;
  byte in_VIF;
  byte bVar21;
  byte in_VIP;
  byte bVar22;
  byte in_ID;
  byte bVar23;
  ulonglong uVar24;
  undefined8 unaff_retaddr;
  longlong alStackX_8 [4];
  undefined8 uStack_8;
  
  lVar10 = unaff_R15 - (param_2 + unaff_RBP * -2);
  *(undefined8 *)((longlong)alStackX_8 + lVar10 + 8) = in_RAX;
  *(longlong *)((longlong)alStackX_8 + lVar10) = alStackX_8[0];
  lVar5 = *(longlong *)((longlong)alStackX_8 + lVar10);
  uVar7 = *(undefined8 *)((longlong)alStackX_8 + lVar10 + 8);
  *(undefined8 *)((longlong)alStackX_8 + lVar10 + 8) = in_R10;
  *(undefined8 *)((longlong)alStackX_8 + lVar10) = param_1;
  *(undefined8 *)((longlong)alStackX_8 + lVar10 + -8) =
       *(undefined8 *)((longlong)ProcessEnvironmentBlock + 0x3ac);
  *(undefined4 *)((longlong)&uStack_8 + lVar10) = 0xe70fca;
  *(undefined4 *)((longlong)&uStack_8 + lVar10 + 4) = 0;
  puVar1 = (ulonglong *)
           (&stack0xffffffffff18f03e + *(longlong *)((longlong)&uStack_8 + lVar10) + lVar10);
  uVar6 = *puVar1;
  uVar24 = puVar1[1];
  puVar1[2] = uVar7;
  uVar2 = *(undefined1 *)(CONCAT71(unaff_000000a1,unaff_R12B) + 2 + lVar5);
  puVar1[3] = CONCAT71(unaff_000000a1,unaff_R12B);
  puVar1[2] = param_4;
  uVar8 = CONCAT71((int7)(param_4 >> 8),0xad) ^ 0xf;
  puVar1[1] = unaff_R13;
  *puVar1 = CONCAT71(unaff_00000019,unaff_BL);
  puVar1[-1] = uVar24;
  puVar1[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  pcVar9 = FUN_166181122;
  puVar1[-2] = 0x165db51ab;
  FUN_166181122(uVar6,unaff_retaddr);
  uVar24 = *puVar1;
  bVar19 = (uVar24 & 0x4000) != 0;
  bVar18 = (uVar24 & 0x800) != 0;
  bVar17 = (uVar24 & 0x200) != 0;
  bVar16 = (uVar24 & 0x100) != 0;
  bVar15 = (uVar24 & 0x80) != 0;
  bVar14 = (uVar24 & 0x40) != 0;
  bVar13 = (uVar24 & 0x10) != 0;
  bVar12 = (uVar24 & 4) != 0;
  bVar11 = (uVar24 & 1) != 0;
  bVar23 = (uVar24 & 0x200000) != 0;
  bVar20 = (uVar24 & 0x40000) != 0;
  bVar22 = 0;
  bVar21 = 0;
  puVar3 = (undefined8 *)puVar1[1];
  pcVar4 = (code *)swi(0x2e);
  (*pcVar4)();
  *puVar3 = pcVar9;
  puVar3[-2] = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar2);
  puVar3[-1] = pcVar9;
  puVar3[-2] = (ulonglong)(bVar19 & 1) * 0x4000 | (ulonglong)(bVar18 & 1) * 0x800 |
               (ulonglong)((uVar24 & 0x400) != 0) * 0x400 | (ulonglong)(bVar17 & 1) * 0x200 |
               (ulonglong)(bVar16 & 1) * 0x100 | (ulonglong)(bVar15 & 1) * 0x80 |
               (ulonglong)(bVar14 & 1) * 0x40 | (ulonglong)(bVar13 & 1) * 0x10 |
               (ulonglong)(bVar12 & 1) * 4 | (ulonglong)(bVar11 & 1) |
               (ulonglong)(bVar23 & 1) * 0x200000 | (ulonglong)(bVar22 & 1) * 0x100000 |
               (ulonglong)(bVar21 & 1) * 0x80000 | (ulonglong)(bVar20 & 1) * 0x40000;
  uVar24 = puVar3[-2];
  puVar3[-2] = uVar8;
  puVar3[-3] = in_R11;
  *puVar3 = 0x208ed94;
  puVar3[-2] = unaff_RDI;
  puVar3[-3] = unaff_RDI;
  if ((uVar24 & 1) != 0) {
    uVar7 = FUN_161b2f622();
    return uVar7;
  }
  uVar7 = FUN_161b2f622();
  return uVar7;
}



// FUNCTION 14dbb4822 thunk_FUN_156b249bc body=5 status=ok
// SIG undefined thunk_FUN_156b249bc(void)

void thunk_FUN_156b249bc(void)

{
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dbb486c FUN_14dbb486c body=403 status=ok
// SIG undefined FUN_14dbb486c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb4971) */
/* WARNING: Removing unreachable block (ram,0x00014dbb4977) */

void FUN_14dbb486c(void)

{
  byte bVar1;
  undefined1 in_AL;
  longlong unaff_RBX;
  byte in_R11B;
  byte in_stack_00000008;
  
  *(byte *)(unaff_RBX + 0x2e) = *(byte *)(unaff_RBX + 0x2e) | in_R11B;
  bVar1 = *(byte *)(unaff_RBX + 0x2e);
  *(undefined1 *)(unaff_RBX + 0x2e) = 0;
  *(char *)(unaff_RBX + 0x2e) = *(char *)(unaff_RBX + 0x2e) + (in_stack_00000008 & bVar1 ^ 0xff);
  FUN_162ec374e(in_AL);
  FUN_161a1b1fe();
  return;
}



// FUNCTION 14dbb4a03 FUN_14dbb4a03 body=795 status=ok
// SIG undefined FUN_14dbb4a03(void)

/* WARNING: Instruction at (ram,0x000164b06622) overlaps instruction at (ram,0x000164b06621)
    */
/* WARNING: Removing unreachable block (ram,0x0001662ce492) */
/* WARNING: Removing unreachable block (ram,0x0001662ce498) */
/* WARNING: Removing unreachable block (ram,0x000164b065ab) */
/* WARNING: Removing unreachable block (ram,0x000164b06622) */
/* WARNING: Removing unreachable block (ram,0x000164b06621) */
/* WARNING: Removing unreachable block (ram,0x0001662ce522) */
/* WARNING: Removing unreachable block (ram,0x0001662ce533) */
/* WARNING: Removing unreachable block (ram,0x0001662ce53a) */
/* WARNING: Removing unreachable block (ram,0x00014dbb4ab8) */
/* WARNING: Removing unreachable block (ram,0x00014dbb4abe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dbb4a03(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             longlong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_3;
  puVar1 = (ulonglong *)(param_5 + -0x20);
  *puVar1 = (ulonglong)&LAB_164b2f81b;
  *puVar1 = in_stack_00000010;
  *(undefined8 *)(param_5 + -0x28) = 0x165e8bc98;
  FUN_164b2f7b0(param_1,param_2,*(undefined8 *)(param_5 + -8));
  *(undefined8 *)(param_5 + -0x28) = in_stack_00000008;
  lVar4 = *(longlong *)(param_5 + -0x28);
  uVar5 = *puVar1;
  *puVar1 = (ulonglong)FUN_164b2f7b0;
  *(code **)(param_5 + -0x28) = FUN_164b2f7b0;
  *puVar1 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = 0;
  *(undefined8 *)(param_5 + -0x28) = unaff_R12;
  uVar3 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) = *(ulonglong *)(param_5 + -0x18) & unaff_RBP - 0xa590cc9U;
  *(ulonglong *)(param_5 + -0x18) = ~*(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       *(ulonglong *)(param_5 + -0x18) & (uVar3 | unaff_RBP - 0xa590cc9U);
  *puVar1 = param_2;
  *(ulonglong *)(param_5 + -0x28) = param_2;
  puVar2 = (ulonglong *)(param_5 + -0x30);
  *puVar2 = uVar5;
  uVar8 = 8;
  *puVar1 = 0x14d7aa323;
  *(undefined8 *)(param_5 + -0x38) = 0x165e8bd4b;
  FUN_1570b5cdc(8,FUN_1570b5cdc);
  uVar3 = *(ulonglong *)(unaff_RDI + lVar4);
  *puVar2 = uVar8;
  uVar5 = *puVar2;
  *puVar2 = *(ulonglong *)(unaff_RDI + -0x40);
  bVar6 = (byte)uVar5 & 0x3f;
  uVar7 = FUN_165e92a2c(uVar5,FUN_165e92a2c,0xffffffffffffffd0,
                        param_4 >> bVar6 | param_4 << 0x41 - bVar6 |
                        (ulonglong)(uVar3 + uVar8 < (uVar3 & uVar8) << 1) << 0x40 - bVar6);
  return uVar7;
}



// FUNCTION 14dbb4b48 FUN_14dbb4b48 body=75 status=ok
// SIG undefined FUN_14dbb4b48(void)

undefined8 FUN_14dbb4b48(undefined8 param_1,ulonglong param_2)

{
  longlong in_R11;
  undefined8 in_stack_00000018;
  
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | param_2;
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  return in_stack_00000018;
}



// FUNCTION 14dbb4c60 thunk_FUN_14dbb4c66 body=5 status=ok
// SIG undefined thunk_FUN_14dbb4c66(void)

void thunk_FUN_14dbb4c66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  
  FUN_15764dc35(param_1,FUN_15764dc35,param_3,uStackX_8);
  return;
}



// FUNCTION 14dbb4c66 FUN_14dbb4c66 body=132 status=ok
// SIG undefined FUN_14dbb4c66(void)

void FUN_14dbb4c66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  
  FUN_15764dc35(param_1,FUN_15764dc35,param_3,uStackX_8);
  return;
}



// FUNCTION 14dbb4cfd FUN_14dbb4cfd body=164 status=ok
// SIG undefined FUN_14dbb4cfd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb4d8e) */

void FUN_14dbb4cfd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000018;
  
  FUN_166890a78(param_1,param_2,param_3,param_4,in_stack_00000018 ^ in_RAX);
  return;
}



// FUNCTION 14dbb4e93 FUN_14dbb4e93 body=78 status=ok
// SIG undefined FUN_14dbb4e93(void)

void FUN_14dbb4e93(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16131bb16(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbb4fd3 FUN_14dbb4fd3 body=172 status=ok
// SIG undefined FUN_14dbb4fd3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa723) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa726) */
/* WARNING: Removing unreachable block (ram,0x742903b2) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa799) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa70a) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa721) */

void FUN_14dbb4fd3(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R11;
  ulonglong local_res20;
  
  syscall();
  *(undefined8 *)(in_R11 + param_1 + ~(~local_res20 | ~param_1) * -2 + -8) = 0x32645fe;
  FUN_165c7153c(0x14d9cb38d,param_2,param_3);
  return;
}



// FUNCTION 14dbb50f3 FUN_14dbb50f3 body=61 status=ok
// SIG undefined FUN_14dbb50f3(void)

undefined1 FUN_14dbb50f3(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 unaff_R14;
  ulonglong uStackX_18;
  longlong local_res20;
  
  LOCK();
  uVar1 = DAT_14d7bd91d;
  UNLOCK();
  DAT_14d7bd91d = in_AL;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_14dbb5131;
  return uVar1;
}



// FUNCTION 14dbb522c FUN_14dbb522c body=21 status=ok
// SIG undefined FUN_14dbb522c(void)

void FUN_14dbb522c(void)

{
  return;
}



// FUNCTION 14dbb52da FUN_14dbb52da body=288 status=ok
// SIG undefined FUN_14dbb52da(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb5359) */
/* WARNING: Removing unreachable block (ram,0x00014dbb535f) */

ulonglong FUN_14dbb52da(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar2 = FUN_166601198(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                                ~(~*(ulonglong *)(unaff_RDI + -0x68) | ~param_1) * -2,
                        ~((param_1 - (param_2 | param_1)) + param_2) & (param_2 | param_1));
  *(ulonglong *)(unaff_R14 + 8) = ~uVar2;
  return ~(uVar1 & param_1) & (uVar1 | param_1);
}



// FUNCTION 14dbb54bb FUN_14dbb54bb body=122 status=ok
// SIG undefined FUN_14dbb54bb(void)

void FUN_14dbb54bb(void)

{
  return;
}



// FUNCTION 14dbb555c FUN_14dbb555c body=42 status=ok
// SIG undefined FUN_14dbb555c(void)

void FUN_14dbb555c(void)

{
  return;
}



// FUNCTION 14dbb580f FUN_14dbb580f body=151 status=ok
// SIG undefined FUN_14dbb580f(void)

void FUN_14dbb580f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165be33b5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbb59f5 FUN_14dbb59f5 body=146 status=ok
// SIG undefined FUN_14dbb59f5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbb5a91) */

void FUN_14dbb59f5(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5,ulonglong param_6)

{
  char *pcVar1;
  byte bVar2;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte unaff_BL;
  longlong lVar10;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  byte bVar3;
  
  *(ulonglong *)(unaff_R12 + 8) =
       ~((*(longlong *)(unaff_R12 + 8) - (unaff_RBP | *(ulonglong *)(unaff_R12 + 8))) + unaff_RBP);
  lVar10 = param_6 + unaff_R15 + (param_6 & unaff_R15) * -2;
  *(undefined8 *)(lVar10 + -8) = unaff_RSI;
  *(undefined **)(lVar10 + -0x10) = &DAT_165e2987a;
  *(undefined **)(lVar10 + -0x18) = &DAT_165e2987a;
  if ((param_5 & 0x40) != 0) {
    FUN_165e2981b();
    return;
  }
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(longlong *)(lVar10 + -0x10) = *(longlong *)(lVar10 + -0x10) - *(longlong *)(lVar10 + -8);
  *(longlong *)(lVar10 + -0x10) = -*(longlong *)(lVar10 + -0x10);
  *(undefined8 *)(lVar10 + -8) = 0;
  *(longlong *)(lVar10 + -8) = *(longlong *)(lVar10 + -8) - *(longlong *)(lVar10 + -0x18);
  *(longlong *)(lVar10 + -8) = -*(longlong *)(lVar10 + -8);
  *(undefined8 *)(lVar10 + -0x10) = 0xffffffffffffff8c;
  uVar7 = in((short)param_2);
  bVar9 = unaff_BL | (byte)uVar7;
  uVar8 = param_1 - 1;
  if (uVar8 != 0 && bVar9 != 0) {
    bVar2 = *(byte *)(param_2 + -0x45);
    bVar3 = *(byte *)(param_2 + -0x45);
    pcVar1 = (char *)(param_1 + 0xba51f12 + unaff_RDI);
    bVar6 = (byte)uVar8 & 0x1f;
    cVar4 = *pcVar1;
    *pcVar1 = *pcVar1 << bVar6;
    bVar5 = (uVar8 & 0x1f) != 0;
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 + bVar3) + 0x65b2c42e);
    *pcVar1 = (*pcVar1 - bVar9) -
              (!bVar5 && CARRY1((byte)param_2,bVar2) || bVar5 && (char)(cVar4 << bVar6 - 1) < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbb5a91 FUN_14dbb5a91 body=131 status=ok
// SIG undefined FUN_14dbb5a91(void)

void FUN_14dbb5a91(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  
  FUN_14d80fa4c(param_1,-1 - ((~(unaff_RBP + in_RAX) | param_2) & (~param_2 | in_RAX)),FUN_14d80fa4c
               );
  return;
}



// FUNCTION 14dbb5b1b FUN_14dbb5b1b body=165 status=ok
// SIG undefined FUN_14dbb5b1b(void)

void FUN_14dbb5b1b(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  (*(code *)0x15ba00af0)(param_1,0x15ba00af0,~(param_3 & param_1) & (param_3 | param_1));
  return;
}



// FUNCTION 14dbb5e98 FUN_14dbb5e98 body=190 status=ok
// SIG undefined FUN_14dbb5e98(void)

void FUN_14dbb5e98(void)

{
  return;
}



// FUNCTION 14dbb61f2 FUN_14dbb61f2 body=340 status=ok
// SIG undefined FUN_14dbb61f2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbb61f2(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  longlong in_stack_00000028;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x40);
  FUN_1611f1bfd();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uVar1;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_1629a0c32;
  return;
}



// FUNCTION 14dbb63d3 FUN_14dbb63d3 body=58 status=ok
// SIG undefined FUN_14dbb63d3(void)

void FUN_14dbb63d3(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  *(undefined8 *)(&stack0x352812c5 + -~param_3) = param_2;
  return;
}



// FUNCTION 14dbb6465 FUN_14dbb6465 body=153 status=ok
// SIG undefined FUN_14dbb6465(void)

void FUN_14dbb6465(void)

{
  FUN_14df73c7f();
  return;
}



// FUNCTION 14dbb6500 FUN_14dbb6500 body=133 status=ok
// SIG undefined FUN_14dbb6500(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6586) */
/* WARNING: Removing unreachable block (ram,0x00014dbb66c2) */
/* WARNING: Removing unreachable block (ram,0x00014dbb66eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbb670a) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6864) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6870) */
/* WARNING: Removing unreachable block (ram,0x00014d9329f0) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */

undefined8 FUN_14dbb6500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165072db8(param_1,param_2);
  return uVar1;
}



// FUNCTION 14dbb6586 FUN_14dbb6586 body=286 status=ok
// SIG undefined FUN_14dbb6586(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dbb6586(ulonglong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong unaff_RBX;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 uStackX_18;
  uint local_res20 [2];
  undefined8 in_stack_00000028;
  ulonglong in_stack_00000030;
  ulonglong in_stack_00000038;
  
  in_stack_00000030 = ~((~param_1 | in_stack_00000030) & (~in_stack_00000030 | param_1));
  in_stack_00000038 = in_stack_00000038 ^ param_1;
  local_res20[0] = 0x4dbb660a;
  local_res20[1] = 1;
  uVar7 = FUN_1567cfa2a(param_1,local_res10);
  puVar1 = (ulonglong *)((longlong)&stack0x00000030 + unaff_RBX);
  uVar4 = *(ulonglong *)(unaff_R12 + -0xa0);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 ^ uVar4;
  uVar4 = *puVar1;
  *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX) = uStackX_18;
  *puVar1 = uVar4 + uVar7;
  *puVar1 = *puVar1 + (uVar4 & uVar7) * -2;
  *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX) =
       *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX);
  *(undefined8 *)((longlong)&stack0x00000030 + unaff_RBX) = unaff_R13;
  *(longlong *)((longlong)&stack0x00000028 + unaff_RBX) = (longlong)&stack0x00000030 + unaff_RBX;
  lVar6 = *(longlong *)((longlong)&stack0x00000028 + unaff_RBX);
  *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX) = unaff_R14;
  *(longlong *)((longlong)local_res20 + unaff_RBX) = lVar6 + 0x10;
  *(code **)((longlong)&uStackX_18 + unaff_RBX) = FUN_14dbb66a7;
  uVar8 = FUN_16247e44c();
  piVar3 = (int *)((longlong)&stack0x00000028 + unaff_RBX);
  *(undefined4 *)((longlong)&stack0x00000028 + unaff_RBX + 4) = 0;
  *piVar3 = *piVar3;
  if (*piVar3 < 0) {
    puVar2 = (uint *)((longlong)local_res20 + unaff_RBX);
    *puVar2 = 0x9a8d3482;
    *puVar2 = *puVar2 ^ 0x6572cb7d;
    *(uint *)((longlong)&stack0x00000028 + unaff_RBX + 4) = *puVar2;
    puVar2[0] = 0x4dbb670a;
    puVar2[1] = 1;
    return uVar8;
  }
  in_R10 = in_R10 ^ unaff_R15;
  *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX) = _LAB_16247e3eb_1;
  uVar5 = *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX);
  uVar10 = CONCAT71((int7)((ulonglong)_LAB_16247e3eb_1 >> 8),0x70);
  *(code **)((longlong)&stack0x00000028 + unaff_RBX) = FUN_14dbb6744;
  uVar9 = FUN_1573ccefb();
  uVar8 = *(undefined8 *)(&stack0x00000048 + unaff_RBX);
  *(undefined8 *)(&stack0x00000048 + unaff_RBX) = _LAB_16247e3dc;
  *(undefined8 *)(&stack0x00000040 + unaff_RBX) = uVar10;
  *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX) = uVar10;
  *(ulonglong *)((longlong)&stack0x00000030 + unaff_RBX) = in_R10;
  *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX) = uVar8;
  *(undefined8 *)((longlong)local_res20 + unaff_RBX) = uVar9;
  uVar9 = *(undefined8 *)((longlong)local_res20 + unaff_RBX);
  uVar10 = *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX);
  *(undefined8 *)(&stack0x00000040 + unaff_RBX) = 0;
  *(longlong *)(&stack0x00000040 + unaff_RBX) =
       *(longlong *)(&stack0x00000040 + unaff_RBX) + _LAB_16247e443_1;
  uVar8 = *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX);
  *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX) = uVar8;
  *(undefined8 *)((longlong)&stack0x00000030 + unaff_RBX) = uVar8;
  *(ulonglong *)((longlong)&stack0x00000028 + unaff_RBX) = unaff_R15;
  *(undefined8 *)((longlong)&uStackX_18 + unaff_RBX) = _DAT_16247e3b4;
  *(undefined8 *)((longlong)local_res20 + unaff_RBX) =
       *(undefined8 *)((longlong)&uStackX_18 + unaff_RBX);
  *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX) = uVar5;
  *(undefined8 *)((longlong)&stack0x00000038 + unaff_RBX) =
       *(undefined8 *)((longlong)local_res20 + unaff_RBX);
  uVar8 = *(undefined8 *)((longlong)&stack0x00000030 + unaff_RBX);
  *(undefined8 *)((longlong)&stack0x00000030 + unaff_RBX) = uVar9;
  *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX) =
       *(undefined8 *)((longlong)&stack0x00000028 + unaff_RBX);
  *(ulonglong *)((longlong)&stack0x00000028 + unaff_RBX) =
       ~((~param_1 | local_res8) & (~local_res8 | param_1));
  uVar8 = FUN_16271c3cb(uVar10,uVar8);
  return uVar8;
}



// FUNCTION 14dbb66a7 FUN_14dbb66a7 body=156 status=ok
// SIG undefined FUN_14dbb66a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67d0) */

undefined8 FUN_14dbb66a7(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  longlong unaff_R13;
  int in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (in_stack_00000008 < 0) {
    return in_RAX;
  }
  uVar1 = CONCAT71((int7)((ulonglong)*(undefined8 *)(unaff_R13 + -0x60) >> 8),0x70);
  FUN_1573ccefb();
  uVar1 = FUN_16271c3cb(in_stack_00000028,uVar1);
  return uVar1;
}



// FUNCTION 14dbb6744 FUN_14dbb6744 body=139 status=ok
// SIG undefined FUN_14dbb6744(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67d0) */

undefined8 FUN_14dbb6744(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res18;
  
  uVar1 = FUN_16271c3cb(local_res18,param_2);
  return uVar1;
}



// FUNCTION 14dbb67d0 FUN_14dbb67d0 body=264 status=ok
// SIG undefined FUN_14dbb67d0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */

undefined8 FUN_14dbb67d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16577b362(param_1,param_2,8);
  return uVar1;
}



// FUNCTION 14dbb68ea FUN_14dbb68ea body=316 status=ok
// SIG undefined FUN_14dbb68ea(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb6989) */
/* WARNING: Removing unreachable block (ram,0x00014dbb698f) */
/* WARNING: Removing unreachable block (ram,0x000156b94722) */

undefined8 FUN_14dbb68ea(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  
  uVar1 = FUN_156b94722((~(~in_R11 & unaff_RBX) + unaff_RBX) - in_R11);
  return uVar1;
}



// FUNCTION 14dbb6c67 FUN_14dbb6c67 body=663 status=ok
// SIG undefined FUN_14dbb6c67(void)

void FUN_14dbb6c67(void)

{
  (*(code *)0x16530383a)();
  return;
}



// FUNCTION 14dbb6e51 FUN_14dbb6e51 body=167 status=ok
// SIG undefined FUN_14dbb6e51(void)

void FUN_14dbb6e51(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(&stack0xfffffffff5a77553 + param_1);
  *(ulonglong *)(&stack0xfffffffff5a77553 + param_1) =
       ~*(ulonglong *)(&stack0xfffffffff5a77553 + param_1);
  *(ulonglong *)(&stack0xfffffffff5a77553 + param_1) =
       *(ulonglong *)(&stack0xfffffffff5a77553 + param_1) | unaff_R15;
  uVar2 = *(ulonglong *)(&stack0xfffffffff5a77553 + param_1);
  lVar3 = *(longlong *)(&stack0xfffffffff5a77553 + param_1);
  *(undefined8 *)(&stack0xfffffffff5a77553 + param_1) = 0;
  *(ulonglong *)(&stack0xfffffffff5a77553 + param_1) =
       *(longlong *)(&stack0xfffffffff5a77553 + param_1) -
       ~((lVar3 - (~unaff_R15 | uVar1 | uVar2)) + (~unaff_R15 | uVar1));
  *(longlong *)(&stack0xfffffffff5a77553 + param_1) =
       -*(longlong *)(&stack0xfffffffff5a77553 + param_1);
  FUN_14e181edf(in_stack_00000010,param_2,param_3,FUN_14e181edf);
  return;
}



// FUNCTION 14dbb6ef8 FUN_14dbb6ef8 body=157 status=ok
// SIG undefined FUN_14dbb6ef8(void)

void FUN_14dbb6ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_14dd20736)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbb70e3 FUN_14dbb70e3 body=7 status=ok
// SIG undefined FUN_14dbb70e3(void)

void FUN_14dbb70e3(void)

{
  FUN_165dc09fc();
  return;
}



// FUNCTION 14dbb70ea FUN_14dbb70ea body=60 status=ok
// SIG undefined FUN_14dbb70ea(void)

void FUN_14dbb70ea(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX != 0x4fd2) {
    return;
  }
  FUN_165dc09fc();
  return;
}



// FUNCTION 14dbb718b FUN_14dbb718b body=350 status=ok
// SIG undefined FUN_14dbb718b(void)

/* WARNING: Removing unreachable block (ram,0x000156f82589) */
/* WARNING: Removing unreachable block (ram,0x00014dbb722a) */
/* WARNING: Removing unreachable block (ram,0x00014dbb727b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb72b7) */
/* WARNING: Removing unreachable block (ram,0x00014dbb72bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbb72b2) */
/* WARNING: Removing unreachable block (ram,0x00014dbb72c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dbb718b(undefined8 param_1,int param_2)

{
  int iStackX_18;
  
  FUN_15b3a690f(FUN_15b3a690f,param_2 - iStackX_18,0x6ea080bf);
  return;
}



// FUNCTION 14dbb72c2 FUN_14dbb72c2 body=142 status=ok
// SIG undefined FUN_14dbb72c2(void)

void FUN_14dbb72c2(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  
  uVar1 = -(param_3 - *(longlong *)(param_1 + -0x88));
  FUN_1615133c9(param_1,*(ulonglong *)(param_1 + -0x78) ^ unaff_RBX,
                ~(uVar1 & unaff_RBX) & (~(uVar1 & unaff_RBX) + unaff_RBX) - ~uVar1);
  return;
}



// FUNCTION 14dbb7655 FUN_14dbb7655 body=640 status=ok
// SIG undefined FUN_14dbb7655(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb7768) */
/* WARNING: Removing unreachable block (ram,0x00014dbb7773) */
/* WARNING: Removing unreachable block (ram,0x00014dbb776e) */
/* WARNING: Removing unreachable block (ram,0x00014dbb76d7) */

void FUN_14dbb7655(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ushort *in_R11;
  undefined8 unaff_R15;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uStackX_20;
  
  *in_R11 = ~*in_R11;
  *in_R11 = ~*in_R11;
  *in_R11 = *in_R11 & 0xfeff;
  *in_R11 = ~*in_R11;
  *in_R11 = ~*in_R11;
  bVar10 = (uStackX_20 & 0x4000) != 0;
  bVar9 = (uStackX_20 & 0x800) != 0;
  bVar8 = (uStackX_20 & 0x200) != 0;
  bVar7 = (uStackX_20 & 0x100) != 0;
  bVar6 = (uStackX_20 & 0x80) != 0;
  bVar5 = (uStackX_20 & 0x40) != 0;
  bVar4 = (uStackX_20 & 0x10) != 0;
  bVar3 = (uStackX_20 & 4) != 0;
  bVar2 = (uStackX_20 & 1) != 0;
  bVar14 = (uStackX_20 & 0x200000) != 0;
  bVar11 = (uStackX_20 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2);
  *param_5 = unaff_R15;
  param_5[-1] = unaff_R15;
  param_5[-2] = (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
                (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
                (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 |
                (ulonglong)(bVar3 & 1) * 4 | (ulonglong)(bVar2 & 1) |
                (ulonglong)(bVar14 & 1) * 0x200000 | (ulonglong)(bVar13 & 1) * 0x100000 |
                (ulonglong)(bVar12 & 1) * 0x80000 | (ulonglong)(bVar11 & 1) * 0x40000;
  uVar15 = param_5[-2];
  param_5[-2] = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar15 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar15 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 |
                (ulonglong)((uVar15 & 1) != 0) | (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  param_5[-3] = unaff_RBX;
  uVar15 = param_5[-2];
  param_5[-2] = in_R10;
  param_5[-3] = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar15 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar15 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 |
                (ulonglong)((uVar15 & 1) != 0) | (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  *param_5 = 0x5c2c88a;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbb7b9b FUN_14dbb7b9b body=14 status=ok
// SIG undefined FUN_14dbb7b9b(void)

void FUN_14dbb7b9b(void)

{
  thunk_FUN_161178fac();
  return;
}



// FUNCTION 14dbb7c4b FUN_14dbb7c4b body=155 status=ok
// SIG undefined FUN_14dbb7c4b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dbb7e4b) overlaps instruction at (ram,0x00014dbb7e4a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbb7d55) */
/* WARNING: Removing unreachable block (ram,0x00014dbb7e3e) */
/* WARNING: Removing unreachable block (ram,0x00014dbb7e43) */

void FUN_14dbb7c4b(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  
  lVar3 = -(unaff_RBP & (~unaff_RDI | unaff_R15));
  FUN_15635222d();
  uVar2 = -(param_2 - *(longlong *)(lVar3 + -0x69));
  uVar5 = *(ulonglong *)(lVar3 + -0x49);
  uVar4 = ~param_1 | uVar5;
  uVar5 = ~uVar5;
  uVar5 = ((uVar5 & param_1 ^ 0xffffffffffffffff) + param_1) - (uVar5 ^ 0xffffffffffffffff);
  FUN_1624e87ba(param_1,(-(param_1 ^ 0xffffffffffffffff) - (~uVar2 + 2)) + (uVar2 & param_1) * -2,
                param_3);
  uVar5 = *(ulonglong *)(-1 - ((uVar5 - (uVar4 | uVar5)) + uVar4));
  uVar2 = *(ulonglong *)(unaff_R12 - 0x58);
  uVar4 = FUN_1618f66b8(uVar2,FUN_1618f66b8,~((~unaff_R15 | uVar5) & (~uVar5 | unaff_R15)));
  uVar4 = uVar4 ^ ~(unaff_R12 & (in_R11 | 0xfffffffffa07f403));
  uVar5 = *(ulonglong *)((ulonglong)(CONCAT31(0xd84e6,(char)unaff_R15) ^ 0xd84e600) - 0x50);
  plVar1 = (longlong *)(&stack0xfffffffffe6c70c4 + uVar4);
  *plVar1 = uVar5 + uVar2;
  *plVar1 = *plVar1 + (uVar5 & uVar2) * -2;
  *(longlong *)(&stack0xfffffffffe6c70c4 + uVar4) = *plVar1;
  thunk_FUN_162e8396a();
  return;
}



// FUNCTION 14dbb7ce7 FUN_14dbb7ce7 body=223 status=ok
// SIG undefined FUN_14dbb7ce7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dbb7e4b) overlaps instruction at (ram,0x00014dbb7e4a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbb7d55) */
/* WARNING: Removing unreachable block (ram,0x00014dbb7e3e) */
/* WARNING: Removing unreachable block (ram,0x00014dbb7e43) */

void FUN_14dbb7ce7(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  
  uVar2 = -(param_2 - *(longlong *)(unaff_RDI + -0x68));
  uVar3 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x48);
  uVar4 = ~*(ulonglong *)(unaff_RDI + -0x48);
  uVar4 = ((uVar4 & param_1 ^ 0xffffffffffffffff) + param_1) - (uVar4 ^ 0xffffffffffffffff);
  FUN_1624e87ba(param_1,(-(param_1 ^ 0xffffffffffffffff) - (~uVar2 + 2)) + (uVar2 & param_1) * -2,
                param_3);
  uVar2 = *(ulonglong *)(-1 - ((uVar4 - (uVar3 | uVar4)) + uVar3));
  uVar3 = *(ulonglong *)(unaff_R12 - 0x58);
  uVar4 = FUN_1618f66b8(uVar3,FUN_1618f66b8,~((~unaff_R15 | uVar2) & (~uVar2 | unaff_R15)));
  uVar4 = uVar4 ^ ~(unaff_R12 & (in_R11 | 0xfffffffffa07f403));
  uVar2 = *(ulonglong *)((ulonglong)(CONCAT31(0xd84e6,(char)unaff_R15) ^ 0xd84e600) - 0x50);
  plVar1 = (longlong *)(&stack0xfffffffffe6c70cc + uVar4);
  *plVar1 = uVar2 + uVar3;
  *plVar1 = *plVar1 + (uVar2 & uVar3) * -2;
  *(longlong *)(&stack0xfffffffffe6c70cc + uVar4) = *plVar1;
  thunk_FUN_162e8396a();
  return;
}



// FUNCTION 14dbb7dcc FUN_14dbb7dcc body=130 status=ok
// SIG undefined FUN_14dbb7dcc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dbb7e4b) overlaps instruction at (ram,0x00014dbb7e4a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbb7e3e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbb7dcc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x165d671e2)();
  return;
}



// FUNCTION 14dbb7f1c FUN_14dbb7f1c body=7 status=ok
// SIG undefined FUN_14dbb7f1c(void)

void FUN_14dbb7f1c(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbb7faa FUN_14dbb7faa body=713 status=ok
// SIG undefined FUN_14dbb7faa(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb8173) */

void FUN_14dbb7faa(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R12;
  undefined8 uStackX_8;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  (*(code *)0x162b71b18)
            (~(0xffffffffffffffff - uStackX_8) & ~param_1 |
             0xffffffffffffffff - (~param_1 | uStackX_8),
             0xffffffffffffffff - (((uStackX_8 - 1) - ~-(uVar1 | uStackX_8)) + uVar1) &
             (uVar1 | uStackX_8));
  uVar1 = FUN_164b19848(0xfffffffffffffff8,0xffffffffc5d668c3);
  if ((*(ulonglong *)(unaff_R12 + -0x60) & uVar1 & 0x7fffffffffffffff) == 0) {
    FUN_164bfc77f();
    return;
  }
  FUN_164bfc77f();
  return;
}



// FUNCTION 14dbb84e7 FUN_14dbb84e7 body=179 status=ok
// SIG undefined FUN_14dbb84e7(void)

/* WARNING: Removing unreachable block (ram,0x000166d70bfa) */
/* WARNING: Removing unreachable block (ram,0x00014dbb8584) */

undefined8 FUN_14dbb84e7(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  if (!CARRY8(~(*(ulonglong *)(unaff_RDI + -0x48) | param_1) + 1 + param_1,
              *(ulonglong *)(unaff_RDI + -0x48))) {
    uVar1 = FUN_166d70b5e();
    return uVar1;
  }
  if (-1 < unaff_R14) {
    lVar2 = FUN_16557d30e(FUN_16557d30e,
                          ~(~(~unaff_RSI & ~param_2) &
                           ((param_2 ^ 0xffffffffffffffff) + param_1) -
                           ((param_2 ^ 0xffffffffffffffff) & param_1)),param_3,param_4);
    *(undefined8 *)(&stack0xffffffffff4682f0 + lVar2) = 0x180eb04;
    return in_RAX;
  }
  uVar1 = FUN_16177ce04();
  return uVar1;
}



// FUNCTION 14dbb8803 FUN_14dbb8803 body=890 status=ok
// SIG undefined FUN_14dbb8803(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb892e) */
/* WARNING: Removing unreachable block (ram,0x0001566fad30) */
/* WARNING: Removing unreachable block (ram,0x00014dbb889f) */
/* WARNING: Removing unreachable block (ram,0x00014dbb88a5) */
/* WARNING: Removing unreachable block (ram,0x00014dbb8929) */
/* WARNING: Removing unreachable block (ram,0x00014dbb8934) */
/* WARNING: Removing unreachable block (ram,0x00014dbb8957) */
/* WARNING: Removing unreachable block (ram,0x00014dbb895f) */
/* WARNING: Removing unreachable block (ram,0x0001659df4a9) */
/* WARNING: Removing unreachable block (ram,0x0001659df4b5) */

undefined8 FUN_14dbb8803(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  FUN_15b0f5c0e();
  uVar1 = FUN_1650cd2f2(in_RAX,0x3569817e);
  return uVar1;
}



// FUNCTION 14dbb8a8e FUN_14dbb8a8e body=152 status=ok
// SIG undefined FUN_14dbb8a8e(void)

void FUN_14dbb8a8e(undefined8 param_1,undefined8 param_2)

{
  FUN_14dc7699a(param_1,param_2,FUN_14dc7699a);
  return;
}



// FUNCTION 14dbb8c39 FUN_14dbb8c39 body=296 status=ok
// SIG undefined FUN_14dbb8c39(void)

/* WARNING: Removing unreachable block (ram,0x00015671e468) */
/* WARNING: Removing unreachable block (ram,0x00014dbb8cd0) */

void FUN_14dbb8c39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  longlong in_R10;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined8 local_res18;
  
  param_5 = param_5 ^ in_RAX;
  *(undefined8 *)(param_5 - 8) = param_3;
  plVar1 = (longlong *)(param_5 - 0x10);
  *plVar1 = unaff_R15;
  *(undefined8 *)(param_5 - 0x18) = unaff_RBP;
  lVar3 = *plVar1;
  *plVar1 = 0x16c83f38f;
  *plVar1 = *plVar1 + -0x70d8889;
  lVar4 = *plVar1;
  *plVar1 = in_R10;
  *(longlong *)(param_5 - 0x18) = in_R10;
  plVar2 = (longlong *)(param_5 - 0x20);
  *plVar2 = lVar4;
  *(undefined8 *)(param_5 - 0x28) = local_res18;
  *(undefined4 *)(param_5 - 0x28) = 0x1d5769e;
  *(int *)(param_5 - 0x28) = *(int *)(param_5 - 0x28) + 0x15786517;
  *(undefined4 *)(param_5 - 0x24) = 0;
  lVar4 = *(longlong *)(param_5 - 0x28);
  *(undefined8 *)(param_5 - 0x28) = param_2;
  lVar4 = *(longlong *)(param_5 + lVar4 + -0x174ddbbd);
  lVar5 = *plVar2;
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar4;
  *plVar1 = -*plVar1;
  *(longlong *)(param_5 - 8) = lVar5;
  *plVar1 = unaff_R14;
  *(longlong *)(param_5 - 0x18) = unaff_R14;
  *plVar2 = lVar3;
  *plVar1 = 0x14d7c1696;
  return;
}



// FUNCTION 14dbb8d65 FUN_14dbb8d65 body=151 status=ok
// SIG undefined FUN_14dbb8d65(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb8dfc) */

void FUN_14dbb8d65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  if (((0xffffffffffffffff - unaff_RBP | *(ulonglong *)(unaff_RSI + -0xa0)) &
      ~(*(ulonglong *)(unaff_RSI + -0xa0) & ~unaff_RBP)) == 0) {
    FUN_14db5d049(in_stack_00000008,param_2,param_3);
    return;
  }
  FUN_1664955bb();
  return;
}



// FUNCTION 14dbb8dfc FUN_14dbb8dfc body=73 status=ok
// SIG undefined FUN_14dbb8dfc(void)

void FUN_14dbb8dfc(void)

{
  return;
}



// FUNCTION 14dbb8eb1 FUN_14dbb8eb1 body=17 status=ok
// SIG undefined FUN_14dbb8eb1(void)

void FUN_14dbb8eb1(void)

{
  return;
}



// FUNCTION 14dbb8ec3 thunk_FUN_14dbc325b body=5 status=ok
// SIG undefined thunk_FUN_14dbc325b(void)

void thunk_FUN_14dbc325b(undefined8 param_1)

{
  FUN_1565e845e(param_1,FUN_1565e845e);
  return;
}



// FUNCTION 14dbc3255 thunk_FUN_14dbc325b body=5 status=ok
// SIG undefined thunk_FUN_14dbc325b(void)

void thunk_FUN_14dbc325b(undefined8 param_1)

{
  FUN_1565e845e(param_1,FUN_1565e845e);
  return;
}



// FUNCTION 14dbc325b FUN_14dbc325b body=130 status=ok
// SIG undefined FUN_14dbc325b(void)

void FUN_14dbc325b(undefined8 param_1)

{
  FUN_1565e845e(param_1,FUN_1565e845e);
  return;
}



// FUNCTION 14dbc32dd FUN_14dbc32dd body=170 status=ok
// SIG undefined FUN_14dbc32dd(void)

void FUN_14dbc32dd(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161883fb2(param_1,FUN_161883fb2,0xffffffffffffff78,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dbc338e FUN_14dbc338e body=223 status=ok
// SIG undefined FUN_14dbc338e(void)

void FUN_14dbc338e(void)

{
  ulonglong uVar1;
  undefined8 local_res8;
  
  uVar1 = 0xffffffff9839f96c;
  FUN_16597a851();
  *local_res8 = -*local_res8;
  *local_res8 = *local_res8 - 1;
  *local_res8 = *local_res8 | uVar1;
  return;
}



// FUNCTION 14dbc349e FUN_14dbc349e body=305 status=ok
// SIG undefined FUN_14dbc349e(void)

void FUN_14dbc349e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = local_res8;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x28) = param_4;
  uVar1 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = 0x14dbc354d;
  uVar1 = FUN_156487d1c(param_1,param_2,8,uVar1);
  *(undefined8 *)(local_res20 + -0x28) = uVar1;
  *(undefined8 *)(local_res20 + -0x30) = local_res10;
  (*(code *)0x14da89d8a)(local_res10);
  return;
}



// FUNCTION 14dbc379f FUN_14dbc379f body=114 status=ok
// SIG undefined FUN_14dbc379f(void)

void FUN_14dbc379f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d7be979(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbc3832 FUN_14dbc3832 body=134 status=ok
// SIG undefined FUN_14dbc3832(void)

void FUN_14dbc3832(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15);
  FUN_160fd2f0d((uVar2 - (uVar1 | uVar2)) + uVar1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dbc396a FUN_14dbc396a body=156 status=ok
// SIG undefined FUN_14dbc396a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc396a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b384ce6(param_1,param_2,param_3,FUN_15b384ce6);
  return;
}



// FUNCTION 14dbc3a8c FUN_14dbc3a8c body=35 status=ok
// SIG undefined FUN_14dbc3a8c(void)

void FUN_14dbc3a8c(void)

{
  return;
}



// FUNCTION 14dbc3c51 FUN_14dbc3c51 body=136 status=ok
// SIG undefined FUN_14dbc3c51(void)

longlong FUN_14dbc3c51(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x90) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * -2;
}



// FUNCTION 14dbc3cdb FUN_14dbc3cdb body=161 status=ok
// SIG undefined FUN_14dbc3cdb(void)

void FUN_14dbc3cdb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong in_R11;
  longlong unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  uVar1 = local_res8;
  local_res8 = *(undefined8 *)(unaff_retaddr + -0x68);
  FUN_160fb94af(param_1,uVar1);
  *(undefined4 *)((longlong)&local_res8 + (in_R11 ^ 0xd6e0f0b)) = 0;
  local_res8 = param_3;
  FUN_15673fc57(param_1,uStackX_10,param_3);
  return;
}



// FUNCTION 14dbc3d7c FUN_14dbc3d7c body=140 status=ok
// SIG undefined FUN_14dbc3d7c(void)

void FUN_14dbc3d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(undefined4 *)((longlong)&local_res8 + (unaff_retaddr ^ 0xd6e0f0b)) = 0;
  local_res8 = param_3;
  FUN_15673fc57(param_1,local_res10,param_3);
  return;
}



// FUNCTION 14dbc3e0a FUN_14dbc3e0a body=186 status=ok
// SIG undefined FUN_14dbc3e0a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc3ebf) */
/* WARNING: Removing unreachable block (ram,0x00014dbc3ec5) */
/* WARNING: Removing unreachable block (ram,0x000165647a9d) */

void FUN_14dbc3e0a(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_R13;
  ushort in_stack_00000008;
  
  uVar2 = (~in_stack_00000008 | *unaff_R13) - 0x100;
  *unaff_R13 = 0xe356;
  *unaff_R13 = *unaff_R13 + 0xbad9;
  *unaff_R13 = *unaff_R13 + 0x61d1;
  uVar1 = *unaff_R13;
  *unaff_R13 = *unaff_R13 & uVar2;
  *unaff_R13 = *unaff_R13 << 1;
  *unaff_R13 = (uVar2 + uVar1) - *unaff_R13;
  FUN_165647a9d();
  return;
}



// FUNCTION 14dbc3ec5 FUN_14dbc3ec5 body=100 status=ok
// SIG undefined FUN_14dbc3ec5(void)

void FUN_14dbc3ec5(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2);
  return;
}



// FUNCTION 14dbc4093 FUN_14dbc4093 body=29 status=ok
// SIG undefined FUN_14dbc4093(void)

void FUN_14dbc4093(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbc413b FUN_14dbc413b body=142 status=ok
// SIG undefined FUN_14dbc413b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc418f) */

void FUN_14dbc413b(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  (*(code *)0x164fb6a72)(param_1,unaff_RSI + param_3 * -2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dbc41d0 FUN_14dbc41d0 body=26 status=ok
// SIG undefined FUN_14dbc41d0(void)

void FUN_14dbc41d0(void)

{
  return;
}



// FUNCTION 14dbc432f FUN_14dbc432f body=166 status=ok
// SIG undefined FUN_14dbc432f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc43d6) */

void FUN_14dbc432f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  
  if (-1 < unaff_RSI + -0xa0) {
    FUN_1659eaf87(param_1,param_2,param_3);
    return;
  }
  FUN_1659eaf87(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbc43d6 FUN_14dbc43d6 body=127 status=ok
// SIG undefined FUN_14dbc43d6(void)

void FUN_14dbc43d6(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x30) | in_RAX;
  lVar1 = (-in_RAX - *(ulonglong *)(unaff_R12 + -0x30)) + uVar2 * 2;
  FUN_15651e1c0(lVar1,-uVar2,*(undefined8 *)(unaff_R12 + -0x80),~-lVar1 + 1);
  thunk_FUN_14dbc445d();
  return;
}



// FUNCTION 14dbc4457 thunk_FUN_14dbc445d body=5 status=ok
// SIG undefined thunk_FUN_14dbc445d(void)

void thunk_FUN_14dbc445d(undefined8 param_1,undefined8 param_2)

{
  FUN_15b7fec7f(FUN_15b7fec7f,param_2);
  return;
}



// FUNCTION 14dbc445d FUN_14dbc445d body=127 status=ok
// SIG undefined FUN_14dbc445d(void)

void FUN_14dbc445d(undefined8 param_1,undefined8 param_2)

{
  FUN_15b7fec7f(FUN_15b7fec7f,param_2);
  return;
}



// FUNCTION 14dbc44e2 FUN_14dbc44e2 body=7 status=ok
// SIG undefined FUN_14dbc44e2(void)

void FUN_14dbc44e2(void)

{
  return;
}



// FUNCTION 14dbc461c FUN_14dbc461c body=19 status=ok
// SIG undefined FUN_14dbc461c(void)

void FUN_14dbc461c(void)

{
  return;
}



// FUNCTION 14dbc46d6 FUN_14dbc46d6 body=168 status=ok
// SIG undefined FUN_14dbc46d6(void)

undefined8 FUN_14dbc46d6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 local_res8;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 0x10) = param_4;
  *(undefined8 *)(param_1 - 0x18) = 0;
  *(undefined8 *)(param_1 - 8) = *(undefined8 *)(param_1 - 0x18);
  *(undefined8 *)(param_1 - 0x18) = local_res8;
  *(undefined8 *)(param_1 - 0x20) = local_res8;
  *(undefined **)(param_1 - 0x18) = &DAT_14dbc4780;
  return in_RAX;
}



// FUNCTION 14dbc4783 FUN_14dbc4783 body=191 status=ok
// SIG undefined FUN_14dbc4783(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc4815) */
/* WARNING: Removing unreachable block (ram,0x00014dbc4820) */
/* WARNING: Removing unreachable block (ram,0x0001613994ca) */
/* WARNING: Removing unreachable block (ram,0x0001613994d5) */
/* WARNING: Removing unreachable block (ram,0x0001613994d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbc481b) */
/* WARNING: Removing unreachable block (ram,0x00015705dcf6) */
/* WARNING: Removing unreachable block (ram,0x00015705dd2b) */

void FUN_14dbc4783(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x78) == 0) {
    FUN_156f4f6c8();
    return;
  }
  FUN_161399430();
  return;
}



// FUNCTION 14dbc493f thunk_FUN_14dbc4945 body=5 status=ok
// SIG undefined thunk_FUN_14dbc4945(void)

void thunk_FUN_14dbc4945(void)

{
  undefined8 uStackX_8;
  
  FUN_165c7153c(uStackX_8);
  return;
}



// FUNCTION 14dbc4945 FUN_14dbc4945 body=98 status=ok
// SIG undefined FUN_14dbc4945(void)

void FUN_14dbc4945(void)

{
  undefined8 local_res8;
  
  FUN_165c7153c(local_res8);
  return;
}



// FUNCTION 14dbc49d8 FUN_14dbc49d8 body=101 status=ok
// SIG undefined FUN_14dbc49d8(void)

void FUN_14dbc49d8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined2 in_R10W;
  undefined6 in_register_00000092;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  LOCK();
  UNLOCK();
  DAT_14d7ac73d = in_AL;
  *(undefined8 *)(local_res10 + -8) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R15;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  uVar2 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -8) = 0xa69bd0;
  uVar2 = *(ulonglong *)(local_res10 + -0x10);
  *(ulonglong *)(local_res10 + -0x101f8) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(local_res10 + -0x10200) = CONCAT62(in_register_00000092,in_R10W);
  *(undefined8 *)(local_res10 + -0x10208) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10210) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10218) = unaff_RBP;
  lVar1 = *(longlong *)(local_res10 + -0x10210);
  *(undefined8 *)(local_res10 + -0x10210) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10218) = 0x165c715a3;
  FUN_1651b2788(unaff_retaddr);
  *(undefined8 *)(local_res10 + -0x10218) = DAT_1651b2750;
  FUN_156d5694c(DAT_1651b2710 + uVar2 + (DAT_1651b2710 & uVar2) * -2,DAT_1651b2760,
                ~(param_3 & uVar2) & lVar1 - unaff_retaddr);
  return;
}



// FUNCTION 14dbc4ca4 FUN_14dbc4ca4 body=121 status=ok
// SIG undefined FUN_14dbc4ca4(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014dbc4d7b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc4ca4(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 local_res8;
  longlong lStackX_18;
  
  FUN_14dff2fa4(param_1,~((~in_RAX | param_2 + unaff_RDI) &
                         (param_2 + unaff_RDI ^ 0xffffffffffffffffU | in_RAX)));
  pvVar1 = ClientId.UniqueProcess;
  *(undefined8 *)(lStackX_18 + -8) = in_R10;
  *(undefined8 *)(lStackX_18 + -0x10) = in_R10;
  *(void **)(lStackX_18 + -0x18) = pvVar1;
  *(undefined4 *)(lStackX_18 + -0x18) = 0x7a3642a;
  *(undefined4 *)(lStackX_18 + -0x14) = 0;
  FUN_1660fc2ca(local_res8);
  return;
}



// FUNCTION 14dbc4d28 FUN_14dbc4d28 body=148 status=ok
// SIG undefined FUN_14dbc4d28(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc4d28(void)

{
  void *pvVar1;
  longlong in_RAX;
  longlong lVar2;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  pvVar1 = ClientId.UniqueProcess;
  lVar2 = in_RAX - local_res10;
  *(undefined8 *)(lVar2 + -8) = in_R10;
  *(undefined8 *)(lVar2 + -0x10) = in_R10;
  *(void **)(lVar2 + -0x18) = pvVar1;
  *(undefined4 *)(lVar2 + -0x18) = 0x7a3642a;
  *(undefined4 *)(lVar2 + -0x14) = 0;
  FUN_1660fc2ca(unaff_retaddr);
  return;
}



// FUNCTION 14dbc4ef3 FUN_14dbc4ef3 body=153 status=ok
// SIG undefined FUN_14dbc4ef3(void)

void FUN_14dbc4ef3(void)

{
  return;
}



// FUNCTION 14dbc5391 FUN_14dbc5391 body=145 status=ok
// SIG undefined FUN_14dbc5391(void)

void FUN_14dbc5391(undefined8 param_1,ulonglong param_2)

{
  undefined1 in_AL;
  longlong in_R11;
  longlong unaff_R15;
  undefined8 local_res8;
  longlong local_res18 [2];
  longlong lStack0000000000000030;
  
  lStack0000000000000030 =
       unaff_R15 - *(longlong *)((longlong)local_res18 + (in_R11 - (param_2 ^ 0x7092a061)));
  FUN_16262b185(in_AL,local_res8);
  return;
}



// FUNCTION 14dbc55e3 FUN_14dbc55e3 body=51 status=ok
// SIG undefined FUN_14dbc55e3(void)

void FUN_14dbc55e3(void)

{
  return;
}



// FUNCTION 14dbc5676 FUN_14dbc5676 body=104 status=ok
// SIG undefined FUN_14dbc5676(void)

undefined8 FUN_14dbc5676(void)

{
  return 0x30a620e4;
}



// FUNCTION 14dbc570f FUN_14dbc570f body=90 status=ok
// SIG undefined FUN_14dbc570f(void)

void FUN_14dbc570f(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbc5768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 14dbc597f FUN_14dbc597f body=149 status=ok
// SIG undefined FUN_14dbc597f(void)

void FUN_14dbc597f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_15b8c4422(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dbc5a14 FUN_14dbc5a14 body=151 status=ok
// SIG undefined FUN_14dbc5a14(void)

void FUN_14dbc5a14(void)

{
  FUN_1622c1eaa();
  return;
}



// FUNCTION 14dbc5aac FUN_14dbc5aac body=74 status=ok
// SIG undefined FUN_14dbc5aac(void)

void FUN_14dbc5aac(void)

{
  return;
}



// FUNCTION 14dbc5cf3 FUN_14dbc5cf3 body=175 status=ok
// SIG undefined FUN_14dbc5cf3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc5d30) */

void FUN_14dbc5cf3(longlong param_1)

{
  ulonglong unaff_RBX;
  
  (*(code *)&LAB_162be84a9)
            (param_1,(~*(ulonglong *)(param_1 + -0x78) | ~unaff_RBX) &
                     (*(ulonglong *)(param_1 + -0x78) | unaff_RBX),
             *(ulonglong *)(param_1 + -0x88) ^ unaff_RBX);
  return;
}



// FUNCTION 14dbc5e0d FUN_14dbc5e0d body=134 status=ok
// SIG undefined FUN_14dbc5e0d(void)

/* WARNING: Removing unreachable block (ram,0x000166481f93) */

void FUN_14dbc5e0d(void)

{
  int in_stack_00000010;
  
  FUN_164a5734e();
  if (-1 < in_stack_00000010) {
    FUN_161218ac1();
    FUN_166bfad1a();
    FUN_16579c9c9();
    return;
  }
  return;
}



// FUNCTION 14dbc5e94 FUN_14dbc5e94 body=631 status=ok
// SIG undefined FUN_14dbc5e94(void)

/* WARNING: Removing unreachable block (ram,0x000166481f93) */

void FUN_14dbc5e94(ulonglong param_1)

{
  longlong unaff_RDI;
  int in_stack_00000010;
  
  if (-1 < in_stack_00000010) {
    FUN_161218ac1(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
    FUN_166bfad1a();
    FUN_16579c9c9();
    return;
  }
  return;
}



// FUNCTION 14dbc5f45 FUN_14dbc5f45 body=176 status=ok
// SIG undefined FUN_14dbc5f45(void)

void FUN_14dbc5f45(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 local_res10;
  
  uVar2 = ~(param_5 & unaff_RBP) & (param_3 | unaff_RBP);
  puVar1 = (undefined8 *)(uVar2 - 8);
  *puVar1 = local_res10;
  *(undefined8 *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  *puVar1 = &LAB_165c30090;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RSI;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_14dbc5ff6;
  *(undefined8 *)(uVar2 - 0x20) = 0x165c3006f;
  return;
}



// FUNCTION 14dbc60a0 FUN_14dbc60a0 body=179 status=ok
// SIG undefined FUN_14dbc60a0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc611f) */
/* WARNING: Removing unreachable block (ram,0x00014dbc6125) */

void FUN_14dbc60a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RDI;
  longlong lStackX_8;
  
  *(undefined8 *)(&stack0x64d0add9 + lStackX_8) = unaff_RDI;
  thunk_FUN_15b642ca5(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbc6125 FUN_14dbc6125 body=174 status=ok
// SIG undefined FUN_14dbc6125(void)

void FUN_14dbc6125(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  FUN_1620f858d(param_1,~(uVar1 | in_RAX),
                ~(~((in_RAX - (uVar1 | in_RAX)) + uVar1 ^ 0xffffffffffffffff) | ~(uVar1 | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14dbc61d9 FUN_14dbc61d9 body=610 status=ok
// SIG undefined FUN_14dbc61d9(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc6278) */
/* WARNING: Removing unreachable block (ram,0x00014dbc6284) */

undefined8
FUN_14dbc61d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16598e9fc(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dbc69a7 FUN_14dbc69a7 body=153 status=ok
// SIG undefined FUN_14dbc69a7(void)

void FUN_14dbc69a7(void)

{
  FUN_166b80ada();
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbc6a40 FUN_14dbc6a40 body=102 status=ok
// SIG undefined FUN_14dbc6a40(void)

void FUN_14dbc6a40(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbc6af3 thunk_FUN_14dbc6af9 body=5 status=ok
// SIG undefined thunk_FUN_14dbc6af9(void)

void thunk_FUN_14dbc6af9(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  ulonglong uStackX_18;
  
  uVar1 = uStackX_18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 8) = 0x360ce5c;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(code **)(uVar1 - 0x18) = FUN_14dbc6b84;
  FUN_166a78a01(param_1,*(undefined8 *)(uVar1 - 0x20));
  return;
}



// FUNCTION 14dbc6af9 FUN_14dbc6af9 body=139 status=ok
// SIG undefined FUN_14dbc6af9(void)

void FUN_14dbc6af9(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 8) = 0x360ce5c;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(code **)(uVar1 - 0x18) = FUN_14dbc6b84;
  FUN_166a78a01(param_1,*(undefined8 *)(uVar1 - 0x20));
  return;
}



// FUNCTION 14dbc6b84 FUN_14dbc6b84 body=173 status=ok
// SIG undefined FUN_14dbc6b84(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc6c2d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc6b84(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
          ~(~*(ulonglong *)(unaff_RDI + -0x60) | param_1 ^ 0xffffffffffffffff) * -2;
  if (-1 < lVar1) {
    FUN_15b8f1045(FUN_15b8f1045,*(ulonglong *)(unaff_RDI + -0x80) | param_1,
                  ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                   (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),lVar1);
    return;
  }
  FUN_156644151();
  return;
}



// FUNCTION 14dbc6c33 FUN_14dbc6c33 body=168 status=ok
// SIG undefined FUN_14dbc6c33(void)

void FUN_14dbc6c33(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161a14df4(FUN_161a14df4,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dbc6f39 FUN_14dbc6f39 body=605 status=ok
// SIG undefined FUN_14dbc6f39(void)

/* WARNING: Removing unreachable block (ram,0x00014db2456b) */
/* WARNING: Removing unreachable block (ram,0x00014dbc6fed) */
/* WARNING: Removing unreachable block (ram,0x00014dbc705e) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7063) */

void FUN_14dbc6f39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_RAX;
  ulonglong uVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R15;
  uint unaff_retaddr;
  
  uVar11 = (ulonglong)unaff_retaddr ^ 0x7e2e3f49;
  *(undefined8 *)(&stack0xfffffffff747a294 + uVar11) = in_RAX;
  *(undefined8 *)(&stack0xfffffffff747a28c + uVar11) = unaff_RSI;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar7 = *(ulonglong *)(&stack0xfffffffff747a294 + uVar11);
  *(undefined8 *)(&stack0xfffffffff747a29c + uVar11) = 0;
  uVar4 = *(ulonglong *)(&stack0xfffffffff747a29c + uVar11);
  *(undefined8 *)(&stack0xfffffffff747a294 + uVar11) = unaff_R15;
  uVar8 = *(ulonglong *)(&stack0xfffffffff747a294 + uVar11);
  *(ulonglong *)(&stack0xfffffffff747a29c + uVar11) =
       *(ulonglong *)(&stack0xfffffffff747a29c + uVar11) & uVar3;
  *(ulonglong *)(&stack0xfffffffff747a29c + uVar11) =
       ~*(ulonglong *)(&stack0xfffffffff747a29c + uVar11);
  *(ulonglong *)(&stack0xfffffffff747a29c + uVar11) =
       *(ulonglong *)(&stack0xfffffffff747a29c + uVar11) & (~(uVar4 & uVar3) + uVar3) - ~uVar4;
  *(undefined4 *)(&stack0xfffffffff747a294 + uVar11) = 0x4aab661e;
  *(undefined4 *)(&stack0xfffffffff747a298 + uVar11) = 0;
  uVar12 = -((*(ulonglong *)(&stack0xfffffffff747a294 + uVar11) ^ 0x4aab661e) -
            *(longlong *)(&stack0xfffffffff747a29c + uVar11));
  *(ulonglong *)(&stack0xfffffffff747a294 + uVar11) = uVar7;
  *(undefined4 *)(&stack0xfffffffff747a294 + uVar11) = 0x4df4bd9;
  *(undefined4 *)(&stack0xfffffffff747a298 + uVar11) = 0;
  lVar9 = *(longlong *)(&stack0xfffffffff747a294 + uVar11);
  *(undefined8 *)(&stack0xfffffffff747a294 + uVar11) = param_1;
  *(ulonglong *)(&stack0xfffffffff747a28c + uVar11) = uVar7;
  *(undefined4 *)(&stack0xfffffffff747a28c + uVar11) = 0x4f4e89db;
  *(undefined4 *)(&stack0xfffffffff747a290 + uVar11) = 0;
  uVar3 = *(ulonglong *)(&stack0xfffffffff747a28c + uVar11);
  *(undefined8 *)(&stack0xfffffffff747a28c + uVar11) = in_R10;
  *(undefined4 *)(&stack0xfffffffff747a284 + uVar11) = 0x125199cc;
  *(undefined4 *)(&stack0xfffffffff747a288 + uVar11) = 0;
  uVar6 = *(undefined8 *)(&stack0xfffffffff747a28c + uVar11);
  uVar4 = *(ulonglong *)(&stack0xfffffffff747a294 + uVar11);
  puVar1 = (ulonglong *)
           (&stack0xfffffffff747a294 +
           (lVar9 - (uVar3 ^ *(longlong *)(&stack0xfffffffff747a284 + uVar11) + 0x3940283eU)) +
           uVar11);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  *puVar1 = ~((~uVar8 | uVar12) & (~uVar12 | uVar8));
  *puVar1 = uVar4;
  puVar1[-1] = uVar4;
  puVar1[-2] = uVar8;
  puVar2 = puVar1 + -3;
  *puVar2 = uVar7;
  if ((~(uVar3 & uVar8) & (uVar3 | uVar8)) != 0) {
    *(undefined4 *)puVar2 = 0xa658681e;
    *(undefined4 *)((longlong)puVar1 + -0x14) = 0xffffffff;
    puVar1[-3] = *(undefined8 *)(unaff_R13 + (0x59a79771 - ~*puVar2));
    uVar3 = puVar1[-3];
    puVar1[-2] = uVar7;
    puVar1[-3] = param_2;
    *puVar1 = uVar3;
    uVar10 = puVar1[-3];
    uVar5 = puVar1[-1];
    puVar1[-1] = uVar6;
    puVar1[-2] = uVar6;
    puVar1[-3] = param_4;
    uVar3 = *(ulonglong *)(unaff_R13 + -8);
    uVar6 = puVar1[-3];
    puVar1[-3] = param_3;
    puVar1[-1] = 0;
    puVar1[-1] = puVar1[-1] ^ uVar3;
    FUN_16225fe4c(uVar5,uVar10,puVar1[-3],uVar6);
    return;
  }
  FUN_1629a8a28();
  return;
}



// FUNCTION 14dbc7101 FUN_14dbc7101 body=179 status=ok
// SIG undefined FUN_14dbc7101(void)

void FUN_14dbc7101(void)

{
  FUN_1565eb7a5();
  return;
}



// FUNCTION 14dbc72cf FUN_14dbc72cf body=124 status=ok
// SIG undefined FUN_14dbc72cf(void)

/* WARNING: Removing unreachable block (ram,0x0001563ee327) */
/* WARNING: Removing unreachable block (ram,0x0001563ee32d) */
/* WARNING: Removing unreachable block (ram,0x0001628bee4b) */
/* WARNING: Removing unreachable block (ram,0x0001563ee203) */
/* WARNING: Removing unreachable block (ram,0x0001563ee286) */
/* WARNING: Removing unreachable block (ram,0x0001563ee28b) */
/* WARNING: Removing unreachable block (ram,0x0001563ee291) */
/* WARNING: Removing unreachable block (ram,0x00015742cba2) */
/* WARNING: Removing unreachable block (ram,0x00014e1c3af1) */
/* WARNING: Removing unreachable block (ram,0x0001628beda2) */
/* WARNING: Removing unreachable block (ram,0x0001628beda8) */
/* WARNING: Removing unreachable block (ram,0x0001628bee3a) */
/* WARNING: Removing unreachable block (ram,0x0001628bee51) */
/* WARNING: Removing unreachable block (ram,0x00015724faf6) */

void FUN_14dbc72cf(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 extraout_var;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong uVar3;
  longlong unaff_R13;
  undefined4 in_stack_00000018;
  ulonglong in_stack_00000020;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar3 = unaff_R12 ^
          0xffffffffffffffff -
          (0xffffffffffffffff - (in_R10 & 0xffffffff80b7e801) & (in_R10 | 0xffffffff80b7e801));
  if (param_3 == uVar3) {
    FUN_166b2b306();
    return;
  }
  if (param_3 - uVar3 != 1) {
    if ((longlong)in_stack_00000020 < 0) {
      FUN_15786fe91();
      uVar4 = CONCAT44(extraout_var,0x40bf358a);
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar5 = 0;
      FUN_164f165ee();
      uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | uVar4;
      uVar3 = *(ulonglong *)(unaff_R13 + -0x78) & uVar4 ^ 0xffffffffffffffff;
      uVar2 = 0xfffffffffffffffe - ~-uVar1;
      FUN_161962d2b(((uVar2 + uVar3) - (uVar2 & uVar3)) + uVar1 + 1,FUN_161962d2b,
                    *(ulonglong *)(unaff_R13 + -0x88) ^ uVar4,
                    *(ulonglong *)(unaff_R13 + -0x60) + uVar4 +
                    (*(ulonglong *)(unaff_R13 + -0x60) & uVar4) * -2);
      return;
    }
    *(undefined4 *)(in_stack_00000020 & 0x7fffffffffffffff) = in_stack_00000018;
    FUN_1665397ba();
    return;
  }
  FUN_15724f9f6();
  return;
}



// FUNCTION 14dbc73c6 FUN_14dbc73c6 body=141 status=ok
// SIG undefined FUN_14dbc73c6(void)

void FUN_14dbc73c6(undefined8 param_1)

{
  longlong unaff_R12;
  
  FUN_15b6c0afe(param_1,FUN_15b6c0afe,0,*(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14dbc7453 FUN_14dbc7453 body=135 status=ok
// SIG undefined FUN_14dbc7453(void)

void FUN_14dbc7453(void)

{
  return;
}



// FUNCTION 14dbc7589 FUN_14dbc7589 body=153 status=ok
// SIG undefined FUN_14dbc7589(void)

void FUN_14dbc7589(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 unaff_R12;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  param_2 = param_2 - *(longlong *)(&stack0xfffffffff30ef6e9 + unaff_retaddr);
  *(undefined8 *)(param_2 + -8) = param_3;
  *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -0x18) = unaff_R12;
  *(undefined1 **)(param_2 + -8) = &LAB_1625c4190;
  *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_2 + -0x18);
  *(undefined8 *)(param_2 + -0x20) = uStackX_8;
  *(undefined8 *)(param_2 + -0x28) = uStackX_8;
  *(code **)(param_2 + -0x20) = FUN_14dbc7626;
  FUN_1625c4133(local_res10,*(undefined8 *)(param_2 + -0x28),FUN_1625c4133);
  return;
}



// FUNCTION 14dbc7626 FUN_14dbc7626 body=147 status=ok
// SIG undefined FUN_14dbc7626(void)

/* WARNING: Removing unreachable block (ram,0x00015ba2fff2) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7747) */
/* WARNING: Removing unreachable block (ram,0x00014dbc774d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc77f5) */
/* WARNING: Removing unreachable block (ram,0x00014dbc77fb) */
/* WARNING: Removing unreachable block (ram,0x0001621d4b14) */
/* WARNING: Removing unreachable block (ram,0x00014dbc76ba) */
/* WARNING: Removing unreachable block (ram,0x00015ba2ffe7) */
/* WARNING: Removing unreachable block (ram,0x0001651820a3) */

undefined8 FUN_14dbc7626(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  byte abStackX_18 [16];
  
  bVar1 = abStackX_18[param_1];
  bVar2 = abStackX_18[param_1];
  abStackX_18[param_1] = ~abStackX_18[param_1];
  abStackX_18[param_1] = (~(bVar2 & 0x45) + 0x45) - abStackX_18[param_1];
  bVar2 = abStackX_18[param_1];
  abStackX_18[param_1] = 0;
  abStackX_18[param_1] = abStackX_18[param_1] ^ ~(~(bVar1 & 0x45) & bVar2);
  if ((local_res10 & 1) == 0) {
    uVar3 = FUN_14dcee153();
    return uVar3;
  }
  return 0;
}



// FUNCTION 14dbc76ba FUN_14dbc76ba body=758 status=ok
// SIG undefined FUN_14dbc76ba(void)

/* WARNING: Removing unreachable block (ram,0x00015ba2fff2) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7747) */
/* WARNING: Removing unreachable block (ram,0x00014dbc774d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc77f5) */
/* WARNING: Removing unreachable block (ram,0x00014dbc77fb) */
/* WARNING: Removing unreachable block (ram,0x0001621d4b14) */

undefined8
FUN_14dbc76ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar2 = ~(local_res20 & in_RAX) & (local_res20 | in_RAX);
  *(undefined8 *)(uVar2 - 8) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = in_R11;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  lVar3 = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) - lVar3;
  plVar1 = (longlong *)(uVar2 - 0x10);
  lVar3 = *plVar1;
  *plVar1 = -*plVar1;
  uVar5 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  *(ulonglong *)(uVar2 - 0x20) = local_res10 ^ in_RAX;
  *(undefined8 *)(uVar2 - 0x28) = uVar5;
  *(undefined1 **)(uVar2 - 8) = &LAB_16518211e;
  uVar5 = *(undefined8 *)(uVar2 - 0x20);
  if (lVar3 != 0) {
    uVar5 = FUN_1651820a3(in_stack_00000008);
    return uVar5;
  }
  uVar4 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x10) = uVar4;
  *(undefined8 *)(uVar2 - 0x18) = uVar4;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x28) = param_4;
  *(undefined8 *)(uVar2 - 0x30) = uVar5;
  uVar5 = *(undefined8 *)(uVar2 - 0x30);
  *(undefined8 *)(uVar2 - 0x10) = 0x14d7a90d4;
  return uVar5;
}



// FUNCTION 14dbc78a0 FUN_14dbc78a0 body=152 status=ok
// SIG undefined FUN_14dbc78a0(void)

void FUN_14dbc78a0(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1657a269f(~(~(0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) |
                 ~(~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)) ^ 0xffffffffffffffff,
                FUN_1657a269f);
  return;
}



// FUNCTION 14dbc7c5c FUN_14dbc7c5c body=429 status=ok
// SIG undefined FUN_14dbc7c5c(void)

/* WARNING: Removing unreachable block (ram,0x00016142e093) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7cfa) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7d00) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7d90) */
/* WARNING: Removing unreachable block (ram,0x00016142dfff) */
/* WARNING: Removing unreachable block (ram,0x00016142e019) */
/* WARNING: Removing unreachable block (ram,0x00016142e00a) */
/* WARNING: Removing unreachable block (ram,0x00016142e037) */
/* WARNING: Removing unreachable block (ram,0x00016142e096) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7dde) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7de1) */

void FUN_14dbc7c5c(void)

{
  return;
}



// FUNCTION 14dbc7da6 FUN_14dbc7da6 body=130 status=ok
// SIG undefined FUN_14dbc7da6(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc7dde) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc7da6(void)

{
  return;
}



// FUNCTION 14dbc7e5c FUN_14dbc7e5c body=130 status=ok
// SIG undefined FUN_14dbc7e5c(void)

void FUN_14dbc7e5c(void)

{
  return;
}



// FUNCTION 14dbc7fa2 FUN_14dbc7fa2 body=138 status=ok
// SIG undefined FUN_14dbc7fa2(void)

void FUN_14dbc7fa2(void)

{
  return;
}



// FUNCTION 14dbc802e FUN_14dbc802e body=467 status=ok
// SIG undefined FUN_14dbc802e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001658b0f42) */
/* WARNING: Removing unreachable block (ram,0x0001658b0f48) */
/* WARNING: Removing unreachable block (ram,0x0001658b0fb4) */
/* WARNING: Removing unreachable block (ram,0x0001658b0fb7) */
/* WARNING: Removing unreachable block (ram,0x00014dbc80c8) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8158) */
/* WARNING: Removing unreachable block (ram,0x000164a9bbd5) */
/* WARNING: Removing unreachable block (ram,0x0001614f3949) */
/* WARNING: Removing unreachable block (ram,0x0001614f394f) */
/* WARNING: Removing unreachable block (ram,0x0001614f3954) */
/* WARNING: Removing unreachable block (ram,0x0001614f39cd) */
/* WARNING: Removing unreachable block (ram,0x0001614f39d3) */
/* WARNING: Removing unreachable block (ram,0x000165f35b4c) */
/* WARNING: Removing unreachable block (ram,0x000165f35bc8) */
/* WARNING: Removing unreachable block (ram,0x000165f35bd3) */
/* WARNING: Removing unreachable block (ram,0x000165f35bce) */
/* WARNING: Removing unreachable block (ram,0x000165736636) */
/* WARNING: Removing unreachable block (ram,0x0001657366c1) */
/* WARNING: Removing unreachable block (ram,0x0001616507f6) */
/* WARNING: Removing unreachable block (ram,0x0001617e176b) */
/* WARNING: Removing unreachable block (ram,0x0001617e1802) */
/* WARNING: Removing unreachable block (ram,0x0001617e1807) */
/* WARNING: Removing unreachable block (ram,0x0001617e180d) */
/* WARNING: Removing unreachable block (ram,0x000164a9b9e3) */
/* WARNING: Removing unreachable block (ram,0x000164a9ba71) */
/* WARNING: Removing unreachable block (ram,0x00016532d170) */
/* WARNING: Removing unreachable block (ram,0x000164a9ba7d) */
/* WARNING: Removing unreachable block (ram,0x000164a9bbda) */
/* WARNING: Removing unreachable block (ram,0x000164a9bbe0) */
/* WARNING: Removing unreachable block (ram,0x000164a9bbf8) */
/* WARNING: Removing unreachable block (ram,0x000164a9bbfc) */
/* WARNING: Removing unreachable block (ram,0x0001647870b7) */
/* WARNING: Removing unreachable block (ram,0x00016475f2fa) */
/* WARNING: Removing unreachable block (ram,0x0001657366c6) */
/* WARNING: Removing unreachable block (ram,0x0001657366cc) */
/* WARNING: Removing unreachable block (ram,0x000165736757) */
/* WARNING: Removing unreachable block (ram,0x0001649b0072) */
/* WARNING: Removing unreachable block (ram,0x00016573675d) */
/* WARNING: Removing unreachable block (ram,0x0001657367f4) */
/* WARNING: Removing unreachable block (ram,0x0001657367ff) */
/* WARNING: Removing unreachable block (ram,0x0001657367fa) */
/* WARNING: Removing unreachable block (ram,0x00015732cc2f) */
/* WARNING: Removing unreachable block (ram,0x00015732cc9e) */
/* WARNING: Removing unreachable block (ram,0x00015732cca4) */
/* WARNING: Removing unreachable block (ram,0x00016475f2e3) */
/* WARNING: Removing unreachable block (ram,0x00016475f2fe) */
/* WARNING: Removing unreachable block (ram,0x00016475f338) */
/* WARNING: Removing unreachable block (ram,0x0001616e2f78) */
/* WARNING: Removing unreachable block (ram,0x0001616e2f7e) */
/* WARNING: Removing unreachable block (ram,0x00016165088e) */
/* WARNING: Removing unreachable block (ram,0x00016165089a) */
/* WARNING: Removing unreachable block (ram,0x000161650a35) */
/* WARNING: Removing unreachable block (ram,0x000161650a3b) */
/* WARNING: Removing unreachable block (ram,0x000161650b1a) */
/* WARNING: Removing unreachable block (ram,0x000161650b1f) */
/* WARNING: Removing unreachable block (ram,0x000161650b25) */
/* WARNING: Removing unreachable block (ram,0x00014de1673d) */
/* WARNING: Removing unreachable block (ram,0x00014de1674a) */
/* WARNING: Removing unreachable block (ram,0x0001659bc2fe) */
/* WARNING: Removing unreachable block (ram,0x0001659bc381) */
/* WARNING: Removing unreachable block (ram,0x00016190522f) */
/* WARNING: Removing unreachable block (ram,0x000161905254) */
/* WARNING: Removing unreachable block (ram,0x000161905257) */
/* WARNING: Removing unreachable block (ram,0x0001659bc387) */
/* WARNING: Removing unreachable block (ram,0x0001659bc3ea) */
/* WARNING: Removing unreachable block (ram,0x0001659bc3f0) */
/* WARNING: Removing unreachable block (ram,0x0001659bc3f5) */
/* WARNING: Removing unreachable block (ram,0x0001616e2edb) */
/* WARNING: Removing unreachable block (ram,0x00015b7b8e22) */
/* WARNING: Removing unreachable block (ram,0x00014dbc815d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8163) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8191) */
/* WARNING: Removing unreachable block (ram,0x00014dbc818c) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8198) */
/* WARNING: Removing unreachable block (ram,0x0001614f38be) */
/* WARNING: Removing unreachable block (ram,0x000156758e25) */
/* WARNING: Removing unreachable block (ram,0x000156758eb0) */
/* WARNING: Removing unreachable block (ram,0x000156758eb6) */
/* WARNING: Removing unreachable block (ram,0x000156758eab) */
/* WARNING: Removing unreachable block (ram,0x00014de8079f) */
/* WARNING: Removing unreachable block (ram,0x00014dbc80bd) */
/* WARNING: Removing unreachable block (ram,0x00014d7c464e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dbc802e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RBP;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  *(ulonglong *)(in_RAX + 0x10) = ~unaff_R15;
  *(undefined8 *)(param_5 + -8) = param_4;
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x18) = local_res8;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_RBP;
  uVar1 = FUN_14dcadb1c(param_1,param_2,*(undefined8 *)(param_5 + -0x20));
  return uVar1;
}



// FUNCTION 14dbc8202 FUN_14dbc8202 body=128 status=ok
// SIG undefined FUN_14dbc8202(void)

void FUN_14dbc8202(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  FUN_15b784d8c(*(undefined8 *)(unaff_R12 + -0x58),FUN_15b784d8c,
                ~(in_RAX & unaff_retaddr | ~(in_RAX | unaff_retaddr)));
  return;
}



// FUNCTION 14dbc8289 thunk_FUN_14dbc828f body=5 status=ok
// SIG undefined thunk_FUN_14dbc828f(void)

/* WARNING: Removing unreachable block (ram,0x0001621c79fc) */
/* WARNING: Removing unreachable block (ram,0x00014dbc837c) */
/* WARNING: Removing unreachable block (ram,0x00014dbc832b) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8380) */
/* WARNING: Removing unreachable block (ram,0x0001621c7993) */

void thunk_FUN_14dbc828f(void)

{
  FUN_1621c7993();
  return;
}



// FUNCTION 14dbc828f FUN_14dbc828f body=148 status=ok
// SIG undefined FUN_14dbc828f(void)

/* WARNING: Removing unreachable block (ram,0x0001621c79fc) */
/* WARNING: Removing unreachable block (ram,0x00014dbc837c) */
/* WARNING: Removing unreachable block (ram,0x00014dbc832b) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8380) */
/* WARNING: Removing unreachable block (ram,0x0001621c7993) */

void FUN_14dbc828f(void)

{
  FUN_1621c7993();
  return;
}



// FUNCTION 14dbc832b FUN_14dbc832b body=186 status=ok
// SIG undefined FUN_14dbc832b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc837c) */

void FUN_14dbc832b(void)

{
  return;
}



// FUNCTION 14dbc83e6 FUN_14dbc83e6 body=153 status=ok
// SIG undefined FUN_14dbc83e6(void)

void FUN_14dbc83e6(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b7855f1(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,
                (~(~*(ulonglong *)(unaff_RSI + -0x58) | ~unaff_RBP) ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP));
  return;
}



// FUNCTION 14dbc847f FUN_14dbc847f body=146 status=ok
// SIG undefined FUN_14dbc847f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc847f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1572c96d7(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dbc8514 FUN_14dbc8514 body=143 status=ok
// SIG undefined FUN_14dbc8514(void)

void FUN_14dbc8514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x156e2a093)(param_1,in_stack_00000010,param_3,0x156e2a093);
  return;
}



// FUNCTION 14dbc85a3 FUN_14dbc85a3 body=443 status=ok
// SIG undefined FUN_14dbc85a3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc86d8) */

void FUN_14dbc85a3(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48);
  lVar5 = in_R10 + 0xc9b6e89;
  uVar4 = FUN_1615a3771();
  lVar6 = local_res20 + unaff_R15 + (local_res20 & unaff_R15) * -2;
  if (local_res20 + unaff_R15 < (local_res20 & unaff_R15) * 2) {
    *(ulonglong *)(lVar6 + -8) = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
    *(longlong *)(lVar6 + -0x10) = lVar5;
    *(undefined4 *)(lVar6 + -0x18) = 0;
    *(undefined4 *)(lVar6 + -0x14) = 0;
    *(undefined8 *)(lVar6 + -0x10) = uVar4;
    *(undefined8 *)(lVar6 + -0x18) = uVar4;
    *(ulonglong *)(lVar6 + -0x20) = uVar2 ^ unaff_R15;
    plVar1 = (longlong *)(lVar6 + -0x28);
    *(undefined4 *)plVar1 = 0xa961dc1a;
    *(undefined4 *)(lVar6 + -0x24) = 0xffffffff;
    lVar5 = *plVar1;
    *plVar1 = in_R10;
    *(undefined8 *)((longlong)plVar1 + lVar5 + 0x569e23fe) = *(undefined8 *)(lVar6 + -8);
    uVar4 = *(undefined8 *)(lVar6 + -0x20);
    uVar3 = *(undefined8 *)(lVar6 + -0x18);
    *(undefined8 *)(lVar6 + -0x18) = 0xc9b6e89;
    *(undefined8 *)(lVar6 + -0x20) = uVar3;
    *(undefined4 *)(lVar6 + -0x20) = 0x6318de7f;
    *(undefined4 *)(lVar6 + -0x1c) = 0;
    *(undefined8 *)(lVar6 + -0x28) = uVar4;
    *(undefined8 *)(lVar6 + -0x30) = uVar4;
    *(code **)(lVar6 + -0x28) = FUN_162324c09;
    FUN_15b9100a7();
    return;
  }
  FUN_162324b57();
  return;
}



// FUNCTION 14dbc879b FUN_14dbc879b body=240 status=ok
// SIG undefined FUN_14dbc879b(void)

/* WARNING: Instruction at (ram,0x00014dbc884f) overlaps instruction at (ram,0x00014dbc884e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbc884e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c27cc) */
/* WARNING: Removing unreachable block (ram,0x00014d7c27ce) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffec : 0x00015653a53e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc879b(void)

{
  longlong in_R9;
  
  if (in_R9 != 0x127a52) {
    FUN_15ba426be();
                    /* WARNING: Ignoring partial resolution of indirect */
    FUN_165748312();
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbc888b FUN_14dbc888b body=9 status=ok
// SIG undefined FUN_14dbc888b(void)

void FUN_14dbc888b(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14dbc8a41 FUN_14dbc8a41 body=163 status=ok
// SIG undefined FUN_14dbc8a41(void)

void FUN_14dbc8a41(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *(undefined4 *)(&stack0xfffffffffa2e84e4 + in_R11) = 0x1bd35571;
  *(undefined8 *)(&stack0xfffffffffa2e84dc + in_R11) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffffa2e84d4 + in_R11) = in_RAX;
  *(undefined4 *)(&stack0xfffffffffa2e84d4 + in_R11) = 0x4bea0295;
  *(undefined4 *)(&stack0xfffffffffa2e84d8 + in_R11) = 0;
  *(undefined8 *)(&stack0xfffffffffa2e84d4 + in_R11) = param_3;
  *(undefined8 *)(&stack0xfffffffffa2e84cc + in_R11) = unaff_RDI;
  *(undefined8 *)(&stack0xfffffffffa2e84cc + in_R11) = local_res18;
  FUN_161b138f3(param_1,FUN_161b138f3,0x4bea029d);
  return;
}



// FUNCTION 14dbc8b63 FUN_14dbc8b63 body=400 status=ok
// SIG undefined FUN_14dbc8b63(void)

/* WARNING: Removing unreachable block (ram,0x0001657c9313) */
/* WARNING: Removing unreachable block (ram,0x0001657c9319) */
/* WARNING: Removing unreachable block (ram,0x0001657c9324) */
/* WARNING: Removing unreachable block (ram,0x0001657c9353) */
/* WARNING: Removing unreachable block (ram,0x0001657c9357) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8bf0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbc8b63(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbc8c86 FUN_14dbc8c86 body=321 status=ok
// SIG undefined FUN_14dbc8c86(void)

/* WARNING: Instruction at (ram,0x00014dbc8d35) overlaps instruction at (ram,0x00014dbc8d34)
    */
/* WARNING: Removing unreachable block (ram,0x0001656a4a54) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8d9a) */

void FUN_14dbc8c86(void)

{
  uint unaff_R15D;
  
  FUN_15658c70e();
  if (-1 < (int)(-1 - ~unaff_R15D)) {
    return;
  }
  FUN_1656a4a3e();
  return;
}



// FUNCTION 14dbc8fb0 FUN_14dbc8fb0 body=140 status=ok
// SIG undefined FUN_14dbc8fb0(void)

void FUN_14dbc8fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  ulonglong *unaff_R14;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | in_RAX;
  *unaff_R14 = unaff_RSI & *unaff_R14 ^ 0xffffffffffffffff;
  FUN_156e722da(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbc9176 FUN_14dbc9176 body=16 status=ok
// SIG undefined FUN_14dbc9176(void)

void FUN_14dbc9176(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbc92bd FUN_14dbc92bd body=764 status=ok
// SIG undefined FUN_14dbc92bd(void)

/* WARNING: Instruction at (ram,0x00016235ef34) overlaps instruction at (ram,0x00016235ef31)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbc93e5) */
/* WARNING: Removing unreachable block (ram,0x00014dbc93eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbc950d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9807) */
/* WARNING: Removing unreachable block (ram,0x00014dbc980d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9512) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9518) */
/* WARNING: Removing unreachable block (ram,0x00014dbc951d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc95ab) */
/* WARNING: Removing unreachable block (ram,0x00014dbc95b6) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1c1c) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1c65) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1cac) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1cb2) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1cd2) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1cdf) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1d3d) */
/* WARNING: Removing unreachable block (ram,0x00015b7c1ca7) */
/* WARNING: Removing unreachable block (ram,0x00016235ee2f) */
/* WARNING: Removing unreachable block (ram,0x00016235ef34) */
/* WARNING: Removing unreachable block (ram,0x00016235ef31) */
/* WARNING: Removing unreachable block (ram,0x00016235ef3a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc95bc) */
/* WARNING: Removing unreachable block (ram,0x00014dbc962f) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9634) */
/* WARNING: Removing unreachable block (ram,0x00014dbc963a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9757) */
/* WARNING: Removing unreachable block (ram,0x0001658dab9a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc975d) */
/* WARNING: Removing unreachable block (ram,0x000161d0702c) */
/* WARNING: Removing unreachable block (ram,0x00014dd0f815) */
/* WARNING: Removing unreachable block (ram,0x000166cb8642) */
/* WARNING: Removing unreachable block (ram,0x000166cb86bc) */
/* WARNING: Removing unreachable block (ram,0x000166cb86c1) */
/* WARNING: Removing unreachable block (ram,0x000166cb86c7) */
/* WARNING: Removing unreachable block (ram,0x00015b005d06) */

undefined8 FUN_14dbc92bd(undefined8 param_1)

{
  undefined8 uVar1;
  int *piVar2;
  longlong unaff_R12;
  int local_res8 [8];
  
  piVar2 = (int *)((longlong)local_res8 + unaff_R12);
  *piVar2 = -0xb683eb6;
  *piVar2 = *piVar2 + 0xb683eb6;
  FUN_15b801093(param_1);
  uVar1 = FUN_166cb8642();
  return uVar1;
}



// FUNCTION 14dbc95bc thunk_FUN_14dbc95c2 body=5 status=ok
// SIG undefined thunk_FUN_14dbc95c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc9807) */
/* WARNING: Removing unreachable block (ram,0x00014dbc980d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc963a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9757) */
/* WARNING: Removing unreachable block (ram,0x00014dbc975d) */
/* WARNING: Removing unreachable block (ram,0x0001658dab9a) */

undefined8 thunk_FUN_14dbc95c2(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x50) == unaff_R15) {
    return in_RAX;
  }
  uVar1 = thunk_FUN_14dd0f81b();
  return uVar1;
}



// FUNCTION 14dbc95c2 FUN_14dbc95c2 body=764 status=ok
// SIG undefined FUN_14dbc95c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc9807) */
/* WARNING: Removing unreachable block (ram,0x00014dbc980d) */
/* WARNING: Removing unreachable block (ram,0x00014dbc963a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9757) */
/* WARNING: Removing unreachable block (ram,0x00014dbc975d) */
/* WARNING: Removing unreachable block (ram,0x0001658dab9a) */

undefined8 FUN_14dbc95c2(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x50) == unaff_R15) {
    return in_RAX;
  }
  uVar1 = thunk_FUN_14dd0f81b();
  return uVar1;
}



// FUNCTION 14dbc98c4 FUN_14dbc98c4 body=53 status=ok
// SIG undefined FUN_14dbc98c4(void)

void FUN_14dbc98c4(void)

{
  undefined1 in_AL;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  LOCK();
  UNLOCK();
  FUN_14d7acf9a = in_AL;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -8) = 0x1d070e;
  FUN_1629c9909(*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dbc9966 FUN_14dbc9966 body=236 status=ok
// SIG undefined FUN_14dbc9966(void)

void FUN_14dbc9966(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  uVar1 = (param_5 & unaff_R15 ^ 0xffffffffffffffff) & in_R11;
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = uStackX_8;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x28) = 0x14dbc99f8;
  uVar2 = FUN_14d90933e(param_1,uVar2);
  *(undefined8 *)(uVar1 - 0x28) = uVar2;
  *(undefined8 *)
   ((uVar1 - 0x10) +
   ~((~(unaff_RSI | 0xffffffff934df473) | ~(unaff_RSI & 0xffffffff934df473)) +
     (unaff_RSI | 0xffffffff934df473) + 1)) = 0x253c330d;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x253c330d;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x14d90933e;
  FUN_14d7a7e4e();
  return;
}



// FUNCTION 14dbc9a71 FUN_14dbc9a71 body=34 status=ok
// SIG undefined FUN_14dbc9a71(void)

void FUN_14dbc9a71(undefined8 param_1)

{
  (*(code *)0x162e55c8e)(param_1,0x162e55c8e);
  return;
}



// FUNCTION 14dbc9a96 FUN_14dbc9a96 body=35 status=ok
// SIG undefined FUN_14dbc9a96(void)

void FUN_14dbc9a96(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbc9b3b FUN_14dbc9b3b body=363 status=ok
// SIG undefined FUN_14dbc9b3b(void)

/* WARNING: Instruction at (ram,0x00016508bcbe) overlaps instruction at (ram,0x00016508bcbd)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbc9c7e) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9c84) */
/* WARNING: Removing unreachable block (ram,0x00015712e7ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9bde) */
/* WARNING: Removing unreachable block (ram,0x00016508bcbe) */
/* WARNING: Removing unreachable block (ram,0x00016508bcbd) */
/* WARNING: Removing unreachable block (ram,0x00016508bcc4) */
/* WARNING: Removing unreachable block (ram,0x00016508bcd5) */
/* WARNING: Removing unreachable block (ram,0x00016508bcca) */

void FUN_14dbc9b3b(void)

{
  return;
}



// FUNCTION 14dbc9c84 FUN_14dbc9c84 body=197 status=ok
// SIG undefined FUN_14dbc9c84(void)

void FUN_14dbc9c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint *unaff_RBX;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  undefined4 local_res20;
  
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX & 0x9c4ad30;
  *unaff_RBX = ~*unaff_RBX;
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX + ~(~param_4 & uVar1);
  FUN_165349d0b(local_res20,param_2,local_res8,in_stack_00000018);
  return;
}



// FUNCTION 14dbc9d49 FUN_14dbc9d49 body=510 status=ok
// SIG undefined FUN_14dbc9d49(void)

/* WARNING: Removing unreachable block (ram,0x00014dbc9f44) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9f4a) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9e99) */
/* WARNING: Removing unreachable block (ram,0x00015766bd84) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9e93) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9ed2) */
/* WARNING: Removing unreachable block (ram,0x00014dbc9ed6) */

undefined8 FUN_14dbc9d49(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15740ec14();
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  FUN_161a21dd0();
  uVar1 = *(ulonglong *)(CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),~(ushort)unaff_RSI) + -0x58);
  uVar2 = FUN_14db222ef(FUN_15740ec14 + (param_1 & uVar3) * -2,
                        (uVar1 & uVar3 ^ 0xffffffffffffffff) & (~(uVar1 & uVar3) + uVar3) - ~uVar1);
  return uVar2;
}



// FUNCTION 14dbc9f4a FUN_14dbc9f4a body=137 status=ok
// SIG undefined FUN_14dbc9f4a(void)

void FUN_14dbc9f4a(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  FUN_166d91268(param_1,~((param_1 - (uVar1 | param_1)) + uVar1) &
                        (uVar1 + param_1) - (uVar1 & param_1));
  return;
}



// FUNCTION 14dbc9fd4 FUN_14dbc9fd4 body=186 status=ok
// SIG undefined FUN_14dbc9fd4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbca090) */
/* WARNING: Removing unreachable block (ram,0x00014dbca07b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbc9fd4(undefined8 param_1,longlong param_2)

{
  FUN_16668a0de(FUN_16668a0de,param_2 + 1,0x5ce6);
  return;
}



// FUNCTION 14dbca090 FUN_14dbca090 body=284 status=ok
// SIG undefined FUN_14dbca090(void)

void FUN_14dbca090(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0x48);
  FUN_166650021(FUN_166650021,lVar1);
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  *(ulonglong *)(lVar1 + 0x10) = ~*(ulonglong *)(lVar1 + 0x10);
  *(ulonglong *)(lVar1 + 0x10) = (~(uVar2 & unaff_R15) + unaff_R15) - *(longlong *)(lVar1 + 0x10);
  *(ulonglong *)(lVar1 + 0x10) = ~(unaff_R14 & *(ulonglong *)(lVar1 + 0x10));
  FUN_15b64f02f();
  return;
}



// FUNCTION 14dbca30e FUN_14dbca30e body=152 status=ok
// SIG undefined FUN_14dbca30e(void)

/* WARNING: Removing unreachable block (ram,0x00014dbca39d) */
/* WARNING: Removing unreachable block (ram,0x00014dbca3a8) */
/* WARNING: Removing unreachable block (ram,0x00014dbca3a3) */

void FUN_14dbca30e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_R11;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48) ^ unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  FUN_162c2bbdb((*(ulonglong *)(unaff_R13 + -0x78) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) * -2 + -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  *(ulonglong *)(unaff_R14 + 0x18) = ~*(ulonglong *)(unaff_R14 + 0x18);
  uVar1 = ~in_stack_00000030 & uVar1;
  *(code **)(uVar1 - 8) = FUN_162c2bbdb;
  *(undefined8 *)(uVar1 - 0x10) = uStackX_20;
  *(ulonglong *)(uVar1 - 0x10) = uVar2;
  *(ulonglong *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(undefined8 *)(uVar1 - 0x28) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_165940b28;
  FUN_14d7c24d0();
  return;
}



// FUNCTION 14dbca3a8 FUN_14dbca3a8 body=156 status=ok
// SIG undefined FUN_14dbca3a8(void)

void FUN_14dbca3a8(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58);
  FUN_16661b9a6(CONCAT71((~(uint7)(in_RAX >> 8) | (uint7)(*(ulonglong *)(unaff_R12 + -0x58) >> 8)) &
                         (uint7)((uVar1 + in_RAX) - (uVar1 & in_RAX) >> 8) ^ 0xffffffffffffff,0x8a))
  ;
  return;
}



// FUNCTION 14dbca444 FUN_14dbca444 body=147 status=ok
// SIG undefined FUN_14dbca444(void)

void FUN_14dbca444(void)

{
  return;
}



// FUNCTION 14dbca4d8 FUN_14dbca4d8 body=589 status=ok
// SIG undefined FUN_14dbca4d8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbca60c) */
/* WARNING: Removing unreachable block (ram,0x00014dbca612) */
/* WARNING: Removing unreachable block (ram,0x00014dbca579) */
/* WARNING: Removing unreachable block (ram,0x00014dbca5e1) */
/* WARNING: Removing unreachable block (ram,0x00014dbca5dc) */
/* WARNING: Removing unreachable block (ram,0x00014dbca601) */
/* WARNING: Removing unreachable block (ram,0x00014dbca607) */
/* WARNING: Removing unreachable block (ram,0x000162b5e551) */
/* WARNING: Removing unreachable block (ram,0x000162b5e586) */
/* WARNING: Removing unreachable block (ram,0x000162b5e5b1) */
/* WARNING: Removing unreachable block (ram,0x000162b5e5ac) */
/* WARNING: Removing unreachable block (ram,0x000162b5e5c6) */
/* WARNING: Removing unreachable block (ram,0x0001572570c0) */
/* WARNING: Removing unreachable block (ram,0x0001572570d5) */
/* WARNING: Removing unreachable block (ram,0x0001572570e5) */
/* WARNING: Removing unreachable block (ram,0x000162b5e545) */

undefined8 FUN_14dbca4d8(void)

{
  ushort uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  short local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar1 = ~(0xffffU - local_res18);
  syscall();
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res20 + -0x20) = 0xe4221dd;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(local_res20 + -0x20) ^ 0x8149aa1;
  uVar4 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(local_res20 + -0x20) = uVar3;
  *(longlong *)(local_res20 + -0x20) = *(longlong *)(local_res20 + -0x20) + -0x4e2236a;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(ulonglong *)(local_res20 + -8) = uVar3 - 0x4e2236a;
  uVar2 = FUN_165c7153c();
  return uVar2;
}



// FUNCTION 14dbca7a1 FUN_14dbca7a1 body=336 status=ok
// SIG undefined FUN_14dbca7a1(void)

/* WARNING: Removing unreachable block (ram,0x0001649f22bd) */
/* WARNING: Removing unreachable block (ram,0x0001649f22c3) */
/* WARNING: Removing unreachable block (ram,0x00014dbca838) */
/* WARNING: Removing unreachable block (ram,0x00014dbca849) */
/* WARNING: Removing unreachable block (ram,0x00014dbca7e4) */
/* WARNING: Removing unreachable block (ram,0x00014dbca844) */
/* WARNING: Removing unreachable block (ram,0x00015b8a04cf) */

void FUN_14dbca7a1(undefined8 param_1,undefined8 param_2)

{
  FUN_15b8a04cf(param_1,param_2);
  return;
}



// FUNCTION 14dbca849 FUN_14dbca849 body=159 status=ok
// SIG undefined FUN_14dbca849(void)

void FUN_14dbca849(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_20;
  
  (*(code *)0x1566caf78)(param_1,uStackX_20,param_3,param_4);
  return;
}



// FUNCTION 14dbca8e9 FUN_14dbca8e9 body=166 status=ok
// SIG undefined FUN_14dbca8e9(void)

void FUN_14dbca8e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_R10;
  ulonglong uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  uVar1 = ~(((param_4 | 0xffffffffe92a7399) -
            (~(in_R10 & 0xffffffffe92a7399) | param_4 | 0xffffffffe92a7399)) +
           ~(in_R10 & 0xffffffffe92a7399));
  FUN_162622ab3(*(longlong *)(unaff_R13 + uVar1) + unaff_R15,param_2,1,uVar1);
  return;
}



// FUNCTION 14dbca995 FUN_14dbca995 body=160 status=ok
// SIG undefined FUN_14dbca995(void)

void FUN_14dbca995(uint param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined8 *)(&stack0x00000000 + (unaff_RBX - (param_4 + in_R10 + (unaff_RBP & in_R10) * -2))) =
       *(undefined8 *)(unaff_R13 + -0x90);
  FUN_166c29ba2(~param_1,param_2,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dbcaa35 FUN_14dbcaa35 body=140 status=ok
// SIG undefined FUN_14dbcaa35(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcaaae) */

void FUN_14dbcaa35(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161d4a124((char)param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dbcaac1 FUN_14dbcaac1 body=150 status=ok
// SIG undefined FUN_14dbcaac1(void)

void FUN_14dbcaac1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_162150cbc(param_1,local_res8,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dbcab58 FUN_14dbcab58 body=61 status=ok
// SIG undefined FUN_14dbcab58(void)

undefined8 FUN_14dbcab58(void)

{
  undefined8 in_stack_00000018;
  
  return in_stack_00000018;
}



// FUNCTION 14dbcabd9 FUN_14dbcabd9 body=304 status=ok
// SIG undefined FUN_14dbcabd9(void)

void FUN_14dbcabd9(undefined8 param_1)

{
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_165ceac55(param_1,unaff_retaddr);
  FUN_1659d236a(*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14dbcad0b FUN_14dbcad0b body=154 status=ok
// SIG undefined FUN_14dbcad0b(void)

void FUN_14dbcad0b(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RSI;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(ulonglong *)(param_2 + 8) = -1 - (unaff_RSI & *(ulonglong *)(param_2 + 8));
  FUN_1567309a5(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 14dbcada6 FUN_14dbcada6 body=30 status=ok
// SIG undefined FUN_14dbcada6(void)

void FUN_14dbcada6(void)

{
  return;
}



// FUNCTION 14dbcaecf FUN_14dbcaecf body=134 status=ok
// SIG undefined FUN_14dbcaecf(void)

void FUN_14dbcaecf(void)

{
  return;
}



// FUNCTION 14dbcaff0 FUN_14dbcaff0 body=140 status=ok
// SIG undefined FUN_14dbcaff0(void)

void FUN_14dbcaff0(undefined8 param_1)

{
  FUN_15b0a7685(param_1,FUN_15b0a7685);
  return;
}



// FUNCTION 14dbcb07d FUN_14dbcb07d body=46 status=ok
// SIG undefined FUN_14dbcb07d(void)

void FUN_14dbcb07d(void)

{
  return;
}



// FUNCTION 14dbcb1d2 FUN_14dbcb1d2 body=165 status=ok
// SIG undefined FUN_14dbcb1d2(void)

/* WARNING: Removing unreachable block (ram,0x000156b87651) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb278) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb2a5) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb2b0) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb314) */
/* WARNING: Removing unreachable block (ram,0x000156b87618) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb31c) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb30d) */

undefined8 FUN_14dbcb1d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  if (*(longlong *)(unaff_R13 + -0x98) == -1) {
    uVar1 = (*(code *)0x1571269bf)(param_1,unaff_retaddr,param_3);
    return uVar1;
  }
  uVar1 = FUN_1626770d6();
  return uVar1;
}



// FUNCTION 14dbcb278 FUN_14dbcb278 body=319 status=ok
// SIG undefined FUN_14dbcb278(void)

/* WARNING: Removing unreachable block (ram,0x000156b87651) */

undefined8 FUN_14dbcb278(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  ulonglong *puVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
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
  undefined8 unaff_retaddr;
  ulonglong local_18;
  undefined1 local_10 [16];
  
  local_18 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  puVar3 = &local_18;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar3 = (ulonglong *)local_10;
  }
  puVar3[-1] = unaff_R12;
  puVar3[-2] = unaff_RSI;
  uVar1 = puVar3[-1];
  uVar2 = *puVar3;
  *puVar3 = unaff_R14;
  puVar3[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 5 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar3[-2] = unaff_RBP;
  puVar3[-3] = unaff_R14 & 0xffffffffffffff00;
  if ((puVar3[-1] & 1) != 0) {
    uVar4 = puVar3[-1];
    if ((uVar4 & 1) != 0) {
      puVar3[2] = puVar3[-2];
      puVar3[1] = CONCAT71((int7)((ulonglong)param_1 >> 8),~(byte)param_1);
      puVar3[3] = uVar1;
      puVar3[2] = in_R11;
      puVar3[1] = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 |
                  (ulonglong)SCARRY8((longlong)(puVar3 + 2),8) * 0x800 |
                  (ulonglong)((uVar4 & 0x400) != 0) * 0x400 |
                  (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
                  (ulonglong)((uVar4 & 0x100) != 0) * 0x100 |
                  (ulonglong)((longlong)(puVar3 + 3) < 0) * 0x80 |
                  (ulonglong)(puVar3 == (ulonglong *)&DAT_ffffffffffffffe8) * 0x40 |
                  (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
                  (ulonglong)((POPCOUNT((ulonglong)(puVar3 + 3) & 0xff) & 1U) == 0) * 4 |
                  (ulonglong)(&DAT_fffffffffffffff7 < puVar3 + 2) |
                  (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
                  (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
      puVar3[1] = (ulonglong)&LAB_162dd5647;
      *puVar3 = unaff_R15;
      puVar3[-1] = unaff_R15;
      *puVar3 = (ulonglong)&DAT_156b8768f;
      return uVar2;
    }
    uVar4 = puVar3[-2] | 0xffffffffd6b4e1bf;
    uVar4 = *(ulonglong *)(unaff_R13 + ~((~uVar4 | ~unaff_RBX) + uVar4 + 1));
    puVar3[-1] = param_1;
    uVar2 = puVar3[-1];
    puVar3[-1] = uVar4 + unaff_R15 + (uVar4 & unaff_R15) * -2;
    uVar2 = (*(code *)&LAB_1563ac770)
                      (uVar2,unaff_retaddr,*(undefined8 *)(unaff_R13 + -0x88),
                       *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
    return uVar2;
  }
  uVar2 = FUN_156b87618(param_1,unaff_retaddr,-(~param_4 + 2));
  return uVar2;
}



// FUNCTION 14dbcb3b8 FUN_14dbcb3b8 body=127 status=ok
// SIG undefined FUN_14dbcb3b8(void)

void FUN_14dbcb3b8(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_156790eeb(param_1,local_res8,FUN_156790eeb);
  return;
}



// FUNCTION 14dbcb44f FUN_14dbcb44f body=140 status=ok
// SIG undefined FUN_14dbcb44f(void)

void FUN_14dbcb44f(void)

{
  FUN_156acb830(FUN_156acb830);
  return;
}



// FUNCTION 14dbcb642 FUN_14dbcb642 body=506 status=ok
// SIG undefined FUN_14dbcb642(void)

/* WARNING: Removing unreachable block (ram,0x000161291cc7) */
/* WARNING: Removing unreachable block (ram,0x000161291ccd) */
/* WARNING: Removing unreachable block (ram,0x000161291b23) */
/* WARNING: Removing unreachable block (ram,0x000161291b29) */
/* WARNING: Removing unreachable block (ram,0x000161291b9b) */
/* WARNING: Removing unreachable block (ram,0x0001614e41bc) */
/* WARNING: Removing unreachable block (ram,0x0001614e4392) */
/* WARNING: Removing unreachable block (ram,0x0001614e4395) */
/* WARNING: Removing unreachable block (ram,0x000161291ba7) */
/* WARNING: Removing unreachable block (ram,0x000161291be6) */
/* WARNING: Removing unreachable block (ram,0x000161291bf7) */
/* WARNING: Removing unreachable block (ram,0x000161291bf1) */
/* WARNING: Removing unreachable block (ram,0x000161291bf9) */
/* WARNING: Removing unreachable block (ram,0x000164afdb06) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb6df) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb6cd) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb6e3) */
/* WARNING: Removing unreachable block (ram,0x000161291aa3) */
/* WARNING: Removing unreachable block (ram,0x00016595be1a) */
/* WARNING: Removing unreachable block (ram,0x00016595bea9) */
/* WARNING: Removing unreachable block (ram,0x00016595beaf) */
/* WARNING: Removing unreachable block (ram,0x000165a6a328) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb769) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb775) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb787) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb78a) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb7f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb7fe) */
/* WARNING: Removing unreachable block (ram,0x00014dbcb7ed) */
/* WARNING: Removing unreachable block (ram,0x0001657fa3a7) */
/* WARNING: Removing unreachable block (ram,0x00014df2747e) */
/* WARNING: Removing unreachable block (ram,0x00014df27518) */
/* WARNING: Removing unreachable block (ram,0x00014df2751e) */
/* WARNING: Removing unreachable block (ram,0x00015b5e9daa) */
/* WARNING: Removing unreachable block (ram,0x000156db96c7) */
/* WARNING: Removing unreachable block (ram,0x00015b5e9ed9) */
/* WARNING: Removing unreachable block (ram,0x00015b5e9edf) */
/* WARNING: Removing unreachable block (ram,0x00015b5e9eea) */

void FUN_14dbcb642(void)

{
  FUN_14df2747e();
  return;
}



// FUNCTION 14dbcb9fe FUN_14dbcb9fe body=160 status=ok
// SIG undefined FUN_14dbcb9fe(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbcb9fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1649ad0e6(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dbcbbb8 thunk_FUN_14dbcbbbe body=5 status=ok
// SIG undefined thunk_FUN_14dbcbbbe(void)

void thunk_FUN_14dbcbbbe(void)

{
  return;
}



// FUNCTION 14dbcbbbe FUN_14dbcbbbe body=131 status=ok
// SIG undefined FUN_14dbcbbbe(void)

void FUN_14dbcbbbe(void)

{
  return;
}



// FUNCTION 14dbcbd91 FUN_14dbcbd91 body=160 status=ok
// SIG undefined FUN_14dbcbd91(void)

void FUN_14dbcbd91(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_16508b58a((char)param_1,param_2,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x38)) &
                 (~*(ulonglong *)(unaff_RDI + -0x38) | param_1)),FUN_16508b58a);
  return;
}



// FUNCTION 14dbcbe32 FUN_14dbcbe32 body=144 status=ok
// SIG undefined FUN_14dbcbe32(void)

void FUN_14dbcbe32(void)

{
  (*(code *)&LAB_14d9079fc)();
  return;
}



// FUNCTION 14dbcbec8 FUN_14dbcbec8 body=203 status=ok
// SIG undefined FUN_14dbcbec8(void)

void FUN_14dbcbec8(void)

{
  longlong unaff_R15;
  
  *(undefined8 *)(&stack0xfffffffffdeec6c1 + unaff_R15) = 0;
  (*(code *)0x14dd486a2)();
  return;
}



// FUNCTION 14dbcbf80 FUN_14dbcbf80 body=773 status=ok
// SIG undefined FUN_14dbcbf80(void)

/* WARNING: Removing unreachable block (ram,0x000162117211) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc00b) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc011) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc0ac) */
/* WARNING: Removing unreachable block (ram,0x0001621170f4) */
/* WARNING: Removing unreachable block (ram,0x000162117216) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc0b2) */
/* WARNING: Removing unreachable block (ram,0x000162715185) */
/* WARNING: Removing unreachable block (ram,0x000166b7052d) */
/* WARNING: Removing unreachable block (ram,0x000162715219) */
/* WARNING: Removing unreachable block (ram,0x000162715225) */

undefined8 FUN_14dbcbf80(ulonglong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong unaff_R12;
  ulonglong in_stack_00000008;
  
  *(longlong *)(param_2 + 0x10) = -*(longlong *)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -1;
  *(ulonglong *)(param_2 + 0x10) =
       ((unaff_R12 & param_1 ^ 0xffffffffffffffff) + param_1) - *(longlong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) =
       (*(longlong *)(param_2 + 0x10) - (in_stack_00000008 | *(ulonglong *)(param_2 + 0x10))) +
       in_stack_00000008 ^ 0xffffffffffffffff;
  uVar1 = FUN_162715185();
  return uVar1;
}



// FUNCTION 14dbcc45e thunk_FUN_14dbcc464 body=5 status=ok
// SIG undefined thunk_FUN_14dbcc464(void)

void thunk_FUN_14dbcc464(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong auStackX_10 [3];
  
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       ~*(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) | param_1;
  *(undefined8 *)((longlong)auStackX_10 + unaff_RDI) = 0xb5e2cde;
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       *(longlong *)((longlong)auStackX_10 + unaff_RDI) + 0x9436383;
  uVar1 = *(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) | 0xffffffffeb5e6f9e;
  uVar2 = *(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(undefined8 *)((longlong)auStackX_10 + unaff_RDI) = 0;
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       *(longlong *)((longlong)auStackX_10 + unaff_RDI) - ~(~(uVar1 & 0xffffffffeb5e6f9e) & uVar2);
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       -*(longlong *)((longlong)auStackX_10 + unaff_RDI);
  FUN_1623995f3();
  FUN_14dbcc50a();
  return;
}



// FUNCTION 14dbcc464 FUN_14dbcc464 body=164 status=ok
// SIG undefined FUN_14dbcc464(void)

void FUN_14dbcc464(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong auStackX_10 [3];
  
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       ~*(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) | param_1;
  *(undefined8 *)((longlong)auStackX_10 + unaff_RDI) = 0xb5e2cde;
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       *(longlong *)((longlong)auStackX_10 + unaff_RDI) + 0x9436383;
  uVar1 = *(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_RDI) | 0xffffffffeb5e6f9e;
  uVar2 = *(ulonglong *)((longlong)auStackX_10 + unaff_RDI);
  *(undefined8 *)((longlong)auStackX_10 + unaff_RDI) = 0;
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       *(longlong *)((longlong)auStackX_10 + unaff_RDI) - ~(~(uVar1 & 0xffffffffeb5e6f9e) & uVar2);
  *(longlong *)((longlong)auStackX_10 + unaff_RDI) =
       -*(longlong *)((longlong)auStackX_10 + unaff_RDI);
  FUN_1623995f3();
  FUN_14dbcc50a();
  return;
}



// FUNCTION 14dbcc50a FUN_14dbcc50a body=167 status=ok
// SIG undefined FUN_14dbcc50a(void)

void FUN_14dbcc50a(void)

{
  FUN_161c77bd6();
  return;
}



// FUNCTION 14dbcc8cb FUN_14dbcc8cb body=21 status=ok
// SIG undefined FUN_14dbcc8cb(void)

void FUN_14dbcc8cb(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dbcc8e0 FUN_14dbcc8e0 body=151 status=ok
// SIG undefined FUN_14dbcc8e0(void)

void FUN_14dbcc8e0(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x123d37) {
    return;
  }
  if (unaff_RSI != 0x123d38) {
    FUN_15b061638();
    return;
  }
  FUN_15b061606();
  FUN_14dbcc978();
  return;
}



// FUNCTION 14dbcc978 FUN_14dbcc978 body=166 status=ok
// SIG undefined FUN_14dbcc978(void)

void FUN_14dbcc978(void)

{
  FUN_14dfbb95e(FUN_14dfbb95e);
  return;
}



// FUNCTION 14dbcca1e FUN_14dbcca1e body=124 status=ok
// SIG undefined FUN_14dbcca1e(void)

void FUN_14dbcca1e(void)

{
  FUN_15b032114();
  return;
}



// FUNCTION 14dbccc08 FUN_14dbccc08 body=598 status=ok
// SIG undefined FUN_14dbccc08(void)

/* WARNING: Instruction at (ram,0x00014dbccd16) overlaps instruction at (ram,0x00014dbccd15)
    */
/* WARNING: Removing unreachable block (ram,0x0001629b8c3e) */
/* WARNING: Removing unreachable block (ram,0x000165a3de9d) */
/* WARNING: Removing unreachable block (ram,0x00015b19df0e) */
/* WARNING: Removing unreachable block (ram,0x0001629b8cc7) */
/* WARNING: Removing unreachable block (ram,0x00014dbccd15) */
/* WARNING: Removing unreachable block (ram,0x00014dbcccfa) */
/* WARNING: Removing unreachable block (ram,0x00014dbccd6f) */
/* WARNING: Removing unreachable block (ram,0x00014dbccd72) */

void FUN_14dbccc08(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_165ca0a8e();
  *(int *)(&stack0x00000010 + unaff_RBX) = *(int *)(&stack0x00000010 + unaff_RBX) + 0x7dcb4c64;
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  if ((ulonglong *)(unaff_RSI + -0x28) != (ulonglong *)0x0) {
    FUN_1629b8c1d();
    return;
  }
  if (*(ulonglong *)(unaff_RSI + -0x60) != unaff_RBP) {
    thunk_FUN_15b7c9c8b();
    return;
  }
  (*(code *)0x1570d8ff4)
            (*(undefined8 *)(unaff_RSI + -0x38),0x1570d8ff4,0,
             ~((~unaff_RBP | uVar1) & (~uVar1 | unaff_RBP)));
  return;
}



// FUNCTION 14dbccd8a FUN_14dbccd8a body=260 status=ok
// SIG undefined FUN_14dbccd8a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbccdff) */
/* WARNING: Removing unreachable block (ram,0x00014dbcce05) */

void FUN_14dbccd8a(void)

{
  FUN_15af3f178();
  return;
}



// FUNCTION 14dbcce05 FUN_14dbcce05 body=136 status=ok
// SIG undefined FUN_14dbcce05(void)

void FUN_14dbcce05(undefined8 param_1,undefined8 param_2)

{
  FUN_14e1e43d4(param_1,param_2);
  return;
}



// FUNCTION 14dbcce8f FUN_14dbcce8f body=65 status=ok
// SIG undefined FUN_14dbcce8f(void)

void FUN_14dbcce8f(void)

{
  return;
}



// FUNCTION 14dbcd137 FUN_14dbcd137 body=25 status=ok
// SIG undefined FUN_14dbcd137(void)

void FUN_14dbcd137(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbcd1cf FUN_14dbcd1cf body=136 status=ok
// SIG undefined FUN_14dbcd1cf(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcd258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dbcd1cf(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x50)) {
    FUN_16123640b();
    return;
  }
  FUN_16172d3de(FUN_16172d3de,param_2);
  FUN_14dc15173((-0x1fd1839d98de3b3b - (~*(ulonglong *)(unaff_R13 + -0x58) + 2)) +
                ((*(ulonglong *)(unaff_R13 + -0x58) | 0x1fd1839d98de3b3b) + 0xe02e7c626721c4c5) * -2
               );
  return;
}



// FUNCTION 14dbcd258 FUN_14dbcd258 body=497 status=ok
// SIG undefined FUN_14dbcd258(void)

void FUN_14dbcd258(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 unaff_BPL;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong *unaff_R14;
  ulonglong unaff_R15;
  
  *unaff_R14 = *(ulonglong *)(unaff_R13 + -0x98);
  unaff_R14[2] = 0;
  unaff_R14[2] = unaff_R14[2] + *unaff_R14;
  unaff_R14[1] = in_RAX;
  *unaff_R14 = unaff_RSI;
  uVar2 = *unaff_R14;
  *unaff_R14 = *(ulonglong *)(unaff_R13 + -0xa0);
  unaff_R14[2] = unaff_R14[2] ^ unaff_R15;
  unaff_R14[1] = uVar2;
  uVar2 = unaff_R14[3];
  *unaff_R14 = unaff_R12;
  uVar3 = *unaff_R14;
  unaff_R14[3] = unaff_R14[3] & unaff_R15;
  unaff_R14[3] = ~unaff_R14[3];
  unaff_R14[3] = unaff_R14[3] & (~(uVar2 & unaff_R15) + unaff_R15) - ~uVar2;
  *unaff_R14 = 0x14dbcd2fe;
  uVar4 = FUN_1611bef28();
  unaff_R14[1] = uVar4;
  *unaff_R14 = CONCAT71(~(uint7)(-1 - (uVar3 & 0xffffffffdb23ae9f) >> 8) |
                        ~((uint7)(uVar3 >> 8) | 0xffffffffdb23ae),unaff_BPL);
  *(undefined4 *)(unaff_R14 + 1) = 0;
  *(undefined4 *)((longlong)unaff_R14 + 0xc) = 0;
  *(undefined4 *)((longlong)unaff_R14 + 0xc) = *(undefined4 *)((longlong)unaff_R14 + 0xc);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x40);
  unaff_R14[1] = 0x14dbcd3a6;
  uVar5 = FUN_1619689ec();
  uVar3 = *(ulonglong *)(uVar2 - 0x58);
  uVar1 = *(ulonglong *)(uVar2 - 0x78);
  unaff_R14[1] = uVar1 + uVar5;
  unaff_R14[1] = unaff_R14[1] + (uVar1 & uVar5) * -2;
  unaff_R14[1] = uVar3 ^ uVar5;
  unaff_R14[1] = uVar2;
  *unaff_R14 = uVar2;
  unaff_R14[-1] = uVar2;
  unaff_R14[1] = (ulonglong)&LAB_14dbcd44e;
  *unaff_R14 = (ulonglong)&DAT_16263f8dd;
  return;
}



// FUNCTION 14dbcd454 FUN_14dbcd454 body=172 status=ok
// SIG undefined FUN_14dbcd454(void)

void FUN_14dbcd454(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1668dc7f7(param_1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dbcd5b7 thunk_FUN_14dbcd5bd body=5 status=ok
// SIG undefined thunk_FUN_14dbcd5bd(void)

void thunk_FUN_14dbcd5bd(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined2 unaff_BX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  FUN_15754f083(CONCAT62((int6)(uVar1 >> 0x10),unaff_BX),param_2,*(undefined8 *)(unaff_R13 + -0x88),
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) & uVar1);
  FUN_15b10c68c();
  return;
}



// FUNCTION 14dbcd5bd FUN_14dbcd5bd body=155 status=ok
// SIG undefined FUN_14dbcd5bd(void)

void FUN_14dbcd5bd(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined2 unaff_BX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  FUN_15754f083(CONCAT62((int6)(uVar1 >> 0x10),unaff_BX),param_2,*(undefined8 *)(unaff_R13 + -0x88),
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) & uVar1);
  FUN_15b10c68c();
  return;
}



// FUNCTION 14dbcd659 FUN_14dbcd659 body=172 status=ok
// SIG undefined FUN_14dbcd659(void)

void FUN_14dbcd659(void)

{
  FUN_15b10c68c();
  return;
}



// FUNCTION 14dbcd797 FUN_14dbcd797 body=435 status=ok
// SIG undefined FUN_14dbcd797(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcd949) */
/* WARNING: Removing unreachable block (ram,0x00014dbcd94f) */
/* WARNING: Removing unreachable block (ram,0x00014dbcd81e) */
/* WARNING: Removing unreachable block (ram,0x00014dbcd824) */
/* WARNING: Removing unreachable block (ram,0x00014dbcd872) */
/* WARNING: Removing unreachable block (ram,0x00014dbcd876) */
/* WARNING: Removing unreachable block (ram,0x0001618591f6) */
/* WARNING: Removing unreachable block (ram,0x00015ba443e8) */
/* WARNING: Removing unreachable block (ram,0x00015ba443ee) */

undefined8 FUN_14dbcd797(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbcd94f FUN_14dbcd94f body=139 status=ok
// SIG undefined FUN_14dbcd94f(void)

void FUN_14dbcd94f(void)

{
  return;
}



// FUNCTION 14dbcdaf4 FUN_14dbcdaf4 body=81 status=ok
// SIG undefined FUN_14dbcdaf4(void)

void FUN_14dbcdaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14d85d504(param_1,local_res10,param_3,param_4);
  return;
}



// FUNCTION 14dbcdc13 FUN_14dbcdc13 body=40 status=ok
// SIG undefined FUN_14dbcdc13(void)

void FUN_14dbcdc13(void)

{
  return;
}



// FUNCTION 14dbcdeee FUN_14dbcdeee body=139 status=ok
// SIG undefined FUN_14dbcdeee(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcdf70) */

void FUN_14dbcdeee(ulonglong param_1,undefined8 param_2)

{
  ulonglong local_res10;
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  uStackX_18 = uStackX_18 + param_1 + (uStackX_18 & param_1) * -2;
  uStackX_20 = uStackX_20 ^ param_1;
  FUN_164c1d620((~param_1 | local_res10) & (~local_res10 | param_1) ^ 0xffffffffffffffff,param_2,
                &uStackX_18,FUN_164c1d620);
  return;
}



// FUNCTION 14dbce00c FUN_14dbce00c body=124 status=ok
// SIG undefined FUN_14dbce00c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a5093) */
/* WARNING: Removing unreachable block (ram,0x000165231992) */
/* WARNING: Removing unreachable block (ram,0x00014dbce102) */
/* WARNING: Removing unreachable block (ram,0x00014dbce24b) */
/* WARNING: Removing unreachable block (ram,0x00014dbce120) */
/* WARNING: Removing unreachable block (ram,0x00014dbce12b) */
/* WARNING: Removing unreachable block (ram,0x00014dbce23a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4fed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbce00c(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong unaff_RBX;
  uint unaff_ESI;
  int local_res8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined2 in_stack_00000058;
  undefined8 in_stack_00000060;
  int in_stack_00000130;
  undefined4 uStack0000000000000134;
  
  if ((0xfffffffd < unaff_ESI) && (unaff_ESI < 0xfffffffe)) {
    uVar2 = (~(~((uint)in_stack_00000018 & 0x90b38282) & ((uint)in_stack_00000018 | 0x90b38282)) - 1
            ) - ~param_1;
    if (uVar2 < *(uint *)((longlong)&stack0x00000028 + unaff_RBX)) {
      uVar1 = FUN_14d9a8632();
      return uVar1;
    }
    in_stack_00000130 = -local_res8 - (uVar2 - *(uint *)((longlong)&stack0x00000028 + unaff_RBX));
    uStack0000000000000134 = 0x656c6946;
    uVar1 = (*(code *)&LAB_156dc009f)(0xacaffa62);
    return uVar1;
  }
  return in_stack_00000018;
}



// FUNCTION 14dbce095 FUN_14dbce095 body=161 status=ok
// SIG undefined FUN_14dbce095(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a5093) */
/* WARNING: Removing unreachable block (ram,0x00014dbce102) */
/* WARNING: Removing unreachable block (ram,0x00014dbce24b) */
/* WARNING: Removing unreachable block (ram,0x00014dbce120) */
/* WARNING: Removing unreachable block (ram,0x00014dbce12b) */
/* WARNING: Removing unreachable block (ram,0x00014dbce23a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4fed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbce095(uint param_1)

{
  longlong unaff_RBX;
  uint unaff_retaddr;
  uint local_res10 [4];
  
  if ((~(~(unaff_retaddr & 0x90b38282) & (unaff_retaddr | 0x90b38282)) - 1) - ~param_1 <
      *(uint *)((longlong)local_res10 + unaff_RBX)) {
    FUN_14d9a8632();
    return;
  }
  (*(code *)&LAB_156dc009f)(0xacaffa62);
  return;
}



// FUNCTION 14dbce137 FUN_14dbce137 body=418 status=ok
// SIG undefined FUN_14dbce137(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a5093) */
/* WARNING: Removing unreachable block (ram,0x00014dbce24b) */

void FUN_14dbce137(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,ulonglong param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong lVar5;
  longlong in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15;
  *(ulonglong *)(in_R11 + 8) = -1 - (~(unaff_RBP & ~uVar2) & *(ulonglong *)(in_R11 + 8));
  pcVar4 = (code *)FUN_1663e0b8d();
  lVar5 = -~(unaff_RBX | param_1) -
          (~(~(unaff_RBX | param_1) | param_7 & param_1 ^ 0xffffffffffffffff) + 2);
  if (((param_1 & 0xffffffffb9da9e59 ^ 0xffffffffffffffff) & (param_1 | 0xffffffffb9da9e59)) == 0) {
    FUN_14d9a4fed();
    return;
  }
  *(undefined8 *)(lVar5 + -7) = param_3;
  *(undefined8 *)(lVar5 + -0xf) = unaff_R12;
  *(undefined8 *)(lVar5 + -0xf) = param_4;
  puVar1 = (undefined8 *)(lVar5 + -0x17);
  *puVar1 = param_4;
  *(undefined8 *)(lVar5 + -0xf) = *(undefined8 *)(lVar5 + -7);
  uVar3 = *puVar1;
  *puVar1 = param_2;
  *(undefined8 *)(lVar5 + -0x1f) = unaff_retaddr;
  *(code **)(lVar5 + -0x27) = FUN_1663e0b8d;
  *(undefined1 **)(lVar5 + -7) = &LAB_164fe00e3;
  (*pcVar4)(~((~unaff_R15 | param_5) & (~(~param_5 & unaff_R15) + unaff_R15) - param_5),*puVar1,
            *(undefined8 *)(lVar5 + -0xf),uVar3);
  return;
}



// FUNCTION 14dbce2de FUN_14dbce2de body=261 status=ok
// SIG undefined FUN_14dbce2de(void)

/* WARNING: Removing unreachable block (ram,0x00014dbce37a) */

undefined8 FUN_14dbce2de(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbce4ea FUN_14dbce4ea body=159 status=ok
// SIG undefined FUN_14dbce4ea(void)

/* WARNING: Removing unreachable block (ram,0x00014d95d66a) */
/* WARNING: Removing unreachable block (ram,0x00014dbce580) */
/* WARNING: Removing unreachable block (ram,0x00014dbce58b) */
/* WARNING: Removing unreachable block (ram,0x00014dbce63a) */
/* WARNING: Removing unreachable block (ram,0x00014dbce586) */

void FUN_14dbce4ea(void)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 local_res18;
  
  uVar3 = local_res18 ^ unaff_RBP;
  plVar1 = (longlong *)(uVar3 - 8);
  *plVar1 = unaff_R13;
  *(undefined8 *)(uVar3 - 0x10) = unaff_R15;
  *(longlong *)(uVar3 - 0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x1610ff8d3;
  *plVar1 = -*plVar1;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RSI;
  puVar2 = (ulonglong *)(uVar3 - 0x20);
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ unaff_RBX;
  *(undefined8 *)(uVar3 - 0x28) = local_res8;
  FUN_1610ff88b();
  return;
}



// FUNCTION 14dbce58b FUN_14dbce58b body=184 status=ok
// SIG undefined FUN_14dbce58b(void)

/* WARNING: Removing unreachable block (ram,0x00014d95d66a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbce58b(void)

{
  FUN_14d95d661();
  return;
}



// FUNCTION 14dbce643 FUN_14dbce643 body=120 status=ok
// SIG undefined FUN_14dbce643(void)

/* WARNING: Removing unreachable block (ram,0x000156b3b034) */
/* WARNING: Removing unreachable block (ram,0x00014dbce74f) */
/* WARNING: Removing unreachable block (ram,0x00014dbce6bc) */
/* WARNING: Removing unreachable block (ram,0x00014dbce749) */
/* WARNING: Removing unreachable block (ram,0x000156b3ae8e) */
/* WARNING: Removing unreachable block (ram,0x00015afa946c) */

undefined8 FUN_14dbce643(void)

{
  undefined8 in_RAX;
  
  uRam000000014d7bd7de = 0;
  return in_RAX;
}



// FUNCTION 14dbce6bc FUN_14dbce6bc body=812 status=ok
// SIG undefined FUN_14dbce6bc(void)

/* WARNING: Removing unreachable block (ram,0x000156b3b034) */
/* WARNING: Removing unreachable block (ram,0x00014dbce74f) */

ulonglong FUN_14dbce6bc(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar5;
  
  uVar5 = *(ulonglong *)(unaff_RDI + (unaff_RBP ^ 0x79a525ab));
  uVar4 = *(ulonglong *)(unaff_RDI + -0x48) ^ param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = FUN_16181a72b(param_1,~(uVar5 & param_1) & (uVar5 + param_1) - (uVar5 & param_1),param_3,
                        param_4);
  uVar5 = ~((~(param_1 | 0xffffffffab31f15c) | ~(in_R10 & 0xffffffffab31f15c)) +
            (param_1 | 0xffffffffab31f15c) + 1);
  uVar3 = FUN_16197de2d();
  uVar5 = ~(uVar1 & uVar5) & (uVar1 | uVar5);
                    /* WARNING: Read-only address (ram,0x00014d7bd7de) is written */
  LOCK();
  if ((char)uVar3 != '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
    uVar2 = uRam000000014d7bd7de;
  }
  uRam000000014d7bd7de = uVar2;
  UNLOCK();
  *(ulonglong *)(uVar5 - 8) = uVar4;
  *(ulonglong *)(uVar5 - 0x10) = uVar4;
  *(ulonglong *)(uVar5 - 0x18) = uVar4;
  *(ulonglong *)(uVar5 - 0x20) = uVar4;
  *(undefined1 **)(uVar5 - 0x18) = &LAB_15afa9492;
  return uVar3;
}



// FUNCTION 14dbce9ca FUN_14dbce9ca body=371 status=ok
// SIG undefined FUN_14dbce9ca(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcea77) */
/* WARNING: Removing unreachable block (ram,0x00014dbcea83) */

void FUN_14dbce9ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar12;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar3 = local_res20 ^ unaff_R14;
  *(undefined8 *)(uVar3 - 8) = local_res8;
  plVar1 = (longlong *)(uVar3 - 0x10);
  *plVar1 = 0x16c57a518;
  *plVar1 = *plVar1 + -0x9994256;
  lVar4 = *plVar1;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar3 - 0x20) = local_res10;
  lVar5 = *(longlong *)(uVar3 - 8);
  uVar8 = *(undefined8 *)(uVar3 - 0x20);
  *(undefined8 *)(uVar3 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x10) = 0;
  uVar6 = *(undefined8 *)(uVar3 - 0x20);
  *(undefined8 *)(uVar3 - 0x20) = param_2;
  *(undefined8 *)(uVar3 - 0x28) = param_4;
  *(longlong *)(uVar3 - 0x10) = *(longlong *)(uVar3 - 0x10) + lVar5;
  uVar7 = *(undefined8 *)(uVar3 - 0x28);
  uVar9 = *(undefined8 *)(uVar3 - 0x20);
  *(undefined8 *)(uVar3 - 0x20) = in_RAX;
  uVar10 = *(undefined8 *)(uVar3 - 0x20);
  *(longlong *)(uVar3 - 8) = lVar4;
  *(undefined8 *)(uVar3 - 0x18) = uVar10;
  *(undefined4 *)(uVar3 - 0x18) = 0xdfbc76d;
  *(undefined4 *)(uVar3 - 0x14) = 0;
  *(undefined8 *)(uVar3 - 0x18) = uVar7;
  *(undefined8 *)(uVar3 - 0x20) = uVar8;
  *(undefined8 *)(uVar3 - 0x20) = 0x16524d7d3;
  FUN_162be627a(param_1,uVar9);
  uVar7 = *(undefined8 *)(uVar3 - 0x18);
  puVar2 = (ulonglong *)(uVar3 - 0x10);
  *(ushort *)puVar2 = (ushort)*puVar2 & 0xfeff;
  uVar12 = *puVar2;
  lVar4 = *(longlong *)(uVar3 - 8);
                    /* WARNING: Read-only address (ram,0x00014d7be96b) is written */
  LOCK();
  cVar11 = (char)uVar7;
  if (cVar11 == '\0') {
    uRam000000014d7be96b = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(lVar4 + -8) = unaff_retaddr;
  *(undefined8 *)(lVar4 + -0x10) = unaff_retaddr;
  *(undefined4 *)(lVar4 + -0x18) = 0xe26737f;
  *(undefined4 *)(lVar4 + -0x14) = 0;
  lVar5 = *(longlong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar12 & 0x200) != 0) * 0x200 | (ulonglong)((uVar12 & 0x100) != 0) * 0x100 |
       (ulonglong)(cVar11 < '\0') * 0x80 | (ulonglong)(cVar11 == '\0') * 0x40 |
       (ulonglong)((uVar12 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar11) & 1U) == 0) * 4 |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -0x20) = uVar6;
  *(undefined8 *)(lVar4 + -0x28) = unaff_R15;
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar4 + -0x20);
  *(longlong *)(lVar4 + -8) = lVar5 + -0xac88773;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dbceb3f FUN_14dbceb3f body=503 status=ok
// SIG undefined FUN_14dbceb3f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcebef) */

void FUN_14dbceb3f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 uStackX_10;
  ulonglong local_res20;
  
  lVar2 = (~(local_res20 | in_RAX) | ~((~local_res20 - ~(local_res20 & in_RAX)) + local_res20)) +
          (local_res20 | in_RAX);
  *(undefined8 *)(lVar2 + -7) = unaff_RBP;
  *(undefined8 *)(lVar2 + -0xf) = param_3;
  *(undefined8 *)(lVar2 + -0x17) = param_3;
  *(undefined8 *)(lVar2 + -0xf) = *(undefined8 *)(lVar2 + -7);
  uVar1 = *(undefined8 *)(lVar2 + -0x17);
  *(undefined8 *)(lVar2 + -0x17) = uStackX_10;
  *(undefined8 *)(lVar2 + -0x1f) = unaff_RDI;
  FUN_162e6178f(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14dbced36 FUN_14dbced36 body=161 status=ok
// SIG undefined FUN_14dbced36(void)

void FUN_14dbced36(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b07c834(*(ulonglong *)(unaff_R12 + -0x58),*(ulonglong *)(unaff_R12 + -0x58) | in_RAX,
                param_3 + in_RAX + (param_3 & in_RAX) * -2);
  return;
}



// FUNCTION 14dbceffd FUN_14dbceffd body=341 status=ok
// SIG undefined FUN_14dbceffd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcf082) */

undefined8 FUN_14dbceffd(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  
  if (&stack0x00000000 == &DAT_ffffffffffffffd8) {
    FUN_15b90906f();
    uVar1 = FUN_161283724(0xfffffffff71a4329,param_2,
                          (~DAT_15b908fe7 | ~unaff_R15) & (DAT_15b908fe7 | unaff_R15),
                          param_4 + unaff_R15 + (param_4 & unaff_R15) * -2);
    return uVar1;
  }
  uVar1 = FUN_1610784a4();
  return uVar1;
}


