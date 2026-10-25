// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd185b1 FUN_14dd185b1 body=307 status=ok
// SIG undefined FUN_14dd185b1(void)

void FUN_14dd185b1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_162d87988(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14dd186ef FUN_14dd186ef body=153 status=ok
// SIG undefined FUN_14dd186ef(void)

void FUN_14dd186ef(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_1653ef1ff(param_1,*(undefined8 *)(unaff_RDI + param_3 + 0x60b55de4),in_stack_00000008);
  return;
}



// FUNCTION 14dd1894c FUN_14dd1894c body=140 status=ok
// SIG undefined FUN_14dd1894c(void)

void FUN_14dd1894c(void)

{
  (*(code *)&LAB_14e20f558)();
  return;
}



// FUNCTION 14dd189da FUN_14dd189da body=152 status=ok
// SIG undefined FUN_14dd189da(void)

void FUN_14dd189da(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  *param_3 = ~*param_3;
  *param_3 = *param_3 | unaff_retaddr;
  *param_3 = ~(unaff_R13 & *param_3);
  (*(code *)&LAB_165e03b7d)(unaff_retaddr,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dd18a72 FUN_14dd18a72 body=133 status=ok
// SIG undefined FUN_14dd18a72(void)

void FUN_14dd18a72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156e9822a(FUN_156e9822a,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd18af8 FUN_14dd18af8 body=115 status=ok
// SIG undefined FUN_14dd18af8(void)

void FUN_14dd18af8(void)

{
  undefined1 local_res18;
  
  if (-1 < local_res18) {
    return;
  }
  FUN_156a6464d();
  return;
}



// FUNCTION 14dd18b6c FUN_14dd18b6c body=131 status=ok
// SIG undefined FUN_14dd18b6c(void)

void FUN_14dd18b6c(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int in_R10D;
  undefined8 unaff_retaddr;
  uint in_stack_00000008;
  
  *(undefined4 *)(&stack0x00000008 + param_2) = 0;
  FUN_15af26ffa(param_1,~-((in_stack_00000008 ^ 0x4c38a810) - in_R10D) | ~param_4,unaff_retaddr);
  FUN_14dd18bf1();
  return;
}



// FUNCTION 14dd18bf1 FUN_14dd18bf1 body=68 status=ok
// SIG undefined FUN_14dd18bf1(void)

undefined8 FUN_14dd18bf1(void)

{
  undefined8 in_RAX;
  longlong unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0x5e9a43d5 + -(-1 - unaff_R13)) = unaff_R15;
  return in_RAX;
}



// FUNCTION 14dd18d2d FUN_14dd18d2d body=135 status=ok
// SIG undefined FUN_14dd18d2d(void)

void FUN_14dd18d2d(void)

{
  FUN_14dfaac30(FUN_14dfaac30);
  return;
}



// FUNCTION 14dd18f4f FUN_14dd18f4f body=155 status=ok
// SIG undefined FUN_14dd18f4f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd18fea) */
/* WARNING: Removing unreachable block (ram,0x00014dd18f9c) */
/* WARNING: Removing unreachable block (ram,0x00014dd18fdf) */

void FUN_14dd18f4f(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RBP + 0x5b75867);
  FUN_1571cf7bc(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,FUN_1571cf7bc);
  return;
}



// FUNCTION 14dd18fea FUN_14dd18fea body=146 status=ok
// SIG undefined FUN_14dd18fea(void)

void FUN_14dd18fea(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  local_res8[1] =
       (local_res8[1] & unaff_R15 ^ 0xffffffffffffffff) &
       (*(ulonglong *)
         ((longlong)local_res8 + ~(~(param_2 & 0xffffffffdf0bf5f7) & (param_2 | 0xffffffffdf0bf5f7))
         ) | unaff_R15);
  local_res8[2] = local_res8[2] & unaff_R15;
  (*(code *)&LAB_15b17a398)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd1927b FUN_14dd1927b body=430 status=ok
// SIG undefined FUN_14dd1927b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd19429) */

void FUN_14dd1927b(undefined8 param_1)

{
  undefined4 local_res8;
  
  FUN_14df6f4c9(param_1);
  FUN_160e29e1b();
  if (local_res8 < 0) {
    return;
  }
  FUN_162954d88();
  return;
}



// FUNCTION 14dd1942f FUN_14dd1942f body=162 status=ok
// SIG undefined FUN_14dd1942f(void)

void FUN_14dd1942f(void)

{
  return;
}



// FUNCTION 14dd194d4 FUN_14dd194d4 body=21 status=ok
// SIG undefined FUN_14dd194d4(void)

void FUN_14dd194d4(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd1957a FUN_14dd1957a body=150 status=ok
// SIG undefined FUN_14dd1957a(void)

void FUN_14dd1957a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x156364214)(param_1,0x156364214,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dd1970e FUN_14dd1970e body=138 status=ok
// SIG undefined FUN_14dd1970e(void)

void FUN_14dd1970e(void)

{
  thunk_FUN_165aea7a0(thunk_FUN_165aea7a0);
  return;
}



// FUNCTION 14dd19798 FUN_14dd19798 body=283 status=ok
// SIG undefined FUN_14dd19798(void)

/* WARNING: Removing unreachable block (ram,0x00014dd19824) */

void FUN_14dd19798(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 <
      (*(ulonglong *)(unaff_RDI + -0x88) & param_1) << 1) {
    FUN_1569975c5(param_1,uVar1);
    return;
  }
  FUN_1569975c5(param_1,uVar1);
  return;
}



// FUNCTION 14dd198b6 FUN_14dd198b6 body=21 status=ok
// SIG undefined FUN_14dd198b6(void)

void FUN_14dd198b6(void)

{
  return;
}



// FUNCTION 14dd199e1 FUN_14dd199e1 body=139 status=ok
// SIG undefined FUN_14dd199e1(void)

void FUN_14dd199e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_R10;
  longlong unaff_R12;
  
  FUN_160fcaa7c(param_1,0xffffffff80b453af,param_3,
                CONCAT71((int7)((*(longlong *)(unaff_R12 + -0x40) + -1) - ~in_R10 >> 8),0x20));
  return;
}



// FUNCTION 14dd19a6d FUN_14dd19a6d body=95 status=ok
// SIG undefined FUN_14dd19a6d(void)

void FUN_14dd19a6d(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  
  FUN_156d72f82(param_1,in_stack_00000010);
  FUN_15b4164f5(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(undefined8 *)(unaff_R13 + -0x28));
  FUN_166d611bc(uStackX_18);
  return;
}



// FUNCTION 14dd19acc FUN_14dd19acc body=317 status=ok
// SIG undefined FUN_14dd19acc(void)

void FUN_14dd19acc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_15b4164f5(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(undefined8 *)(unaff_R13 + -0x28));
  FUN_166d611bc(unaff_retaddr);
  return;
}



// FUNCTION 14dd19cc7 FUN_14dd19cc7 body=60 status=ok
// SIG undefined FUN_14dd19cc7(void)

void FUN_14dd19cc7(void)

{
  return;
}



// FUNCTION 14dd19f0f FUN_14dd19f0f body=131 status=ok
// SIG undefined FUN_14dd19f0f(void)

void FUN_14dd19f0f(void)

{
  FUN_15b4416d7();
  return;
}



// FUNCTION 14dd1a21c FUN_14dd1a21c body=36 status=ok
// SIG undefined FUN_14dd1a21c(void)

void FUN_14dd1a21c(void)

{
  return;
}



// FUNCTION 14dd1a2bc FUN_14dd1a2bc body=512 status=ok
// SIG undefined FUN_14dd1a2bc(void)

/* WARNING: Removing unreachable block (ram,0x00016516c21c) */
/* WARNING: Removing unreachable block (ram,0x0001612a7b50) */
/* WARNING: Removing unreachable block (ram,0x000162f66b16) */
/* WARNING: Removing unreachable block (ram,0x0001612a7bea) */
/* WARNING: Removing unreachable block (ram,0x0001612a7bf0) */
/* WARNING: Removing unreachable block (ram,0x0001612a7bf5) */
/* WARNING: Removing unreachable block (ram,0x00014dd1a340) */

undefined8 FUN_14dd1a2bc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1612a7b50();
  return uVar1;
}



// FUNCTION 14dd1a4c1 FUN_14dd1a4c1 body=21 status=ok
// SIG undefined FUN_14dd1a4c1(void)

void FUN_14dd1a4c1(void)

{
  return;
}



// FUNCTION 14dd1a618 FUN_14dd1a618 body=159 status=ok
// SIG undefined FUN_14dd1a618(void)

void FUN_14dd1a618(ulonglong param_1)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar1 = local_res18 ^ param_1;
  param_1 = local_res20 ^ param_1;
  syscall();
  *(undefined8 *)(param_1 - 8) = unaff_R15;
  *(undefined8 *)(param_1 - 0x10) = unaff_R15;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(param_1 - 0x18);
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 0x20) = unaff_R13;
  uVar1 = *(ulonglong *)(param_1 - 0x18);
  *(undefined8 *)(param_1 - 0x18) = unaff_RBX;
  *(ulonglong *)(param_1 - 0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 8) = 0x4f6d93a;
  FUN_165fc331e(0x14dd1a672);
  return;
}



// FUNCTION 14dd1a74e FUN_14dd1a74e body=65 status=ok
// SIG undefined FUN_14dd1a74e(void)

void FUN_14dd1a74e(void)

{
  return;
}



// FUNCTION 14dd1a9d0 FUN_14dd1a9d0 body=348 status=ok
// SIG undefined FUN_14dd1a9d0(void)

/* WARNING: Removing unreachable block (ram,0x00015636f588) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aa5d) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aae3) */
/* WARNING: Removing unreachable block (ram,0x00015636f468) */
/* WARNING: Removing unreachable block (ram,0x0001622db8bf) */
/* WARNING: Removing unreachable block (ram,0x00015636f4fb) */
/* WARNING: Removing unreachable block (ram,0x00015636f501) */
/* WARNING: Removing unreachable block (ram,0x00015636f506) */
/* WARNING: Removing unreachable block (ram,0x00015636f582) */
/* WARNING: Removing unreachable block (ram,0x000161901b07) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aae9) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aa52) */

undefined8 FUN_14dd1a9d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b729d63();
  return uVar1;
}



// FUNCTION 14dd1ab56 FUN_14dd1ab56 body=33 status=ok
// SIG undefined FUN_14dd1ab56(void)

void FUN_14dd1ab56(undefined8 param_1)

{
  FUN_1624eabac(param_1,FUN_1624eabac);
  return;
}



// FUNCTION 14dd1ab78 FUN_14dd1ab78 body=158 status=ok
// SIG undefined FUN_14dd1ab78(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1aca2) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aca8) */
/* WARNING: Removing unreachable block (ram,0x00014dd1ac17) */
/* WARNING: Removing unreachable block (ram,0x00015666133d) */

void FUN_14dd1ab78(void)

{
  FUN_15666133d();
  return;
}



// FUNCTION 14dd1ac17 FUN_14dd1ac17 body=306 status=ok
// SIG undefined FUN_14dd1ac17(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1aca2) */
/* WARNING: Removing unreachable block (ram,0x00014dd1aca8) */

void FUN_14dd1ac17(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res10 [24];
  
  (*(code *)0x1619a779b)(param_1,local_res10,param_3,param_2);
  return;
}



// FUNCTION 14dd1aca8 FUN_14dd1aca8 body=32 status=ok
// SIG undefined FUN_14dd1aca8(void)

void FUN_14dd1aca8(void)

{
  return;
}



// FUNCTION 14dd1ade3 FUN_14dd1ade3 body=467 status=ok
// SIG undefined FUN_14dd1ade3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1ae6c) */
/* WARNING: Removing unreachable block (ram,0x00014dd1ae78) */

void FUN_14dd1ade3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1612d3f05(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd1b03c FUN_14dd1b03c body=123 status=ok
// SIG undefined FUN_14dd1b03c(void)

void FUN_14dd1b03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166514298(param_1,param_2,param_3,FUN_166514298);
  return;
}



// FUNCTION 14dd1b144 FUN_14dd1b144 body=166 status=ok
// SIG undefined FUN_14dd1b144(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1b273) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b279) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b308) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b313) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b319) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b31e) */

void FUN_14dd1b144(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res18 [2];
  
  uVar1 = in_R10 ^ unaff_retaddr ^ 0x55b10faa;
  *(undefined8 *)((longlong)local_res18 + uVar1) = 0x2b574df9;
  *(ulonglong *)((longlong)local_res18 + uVar1) =
       *(ulonglong *)((longlong)local_res18 + uVar1) ^ 0x2b574df9;
  *(ulonglong *)((longlong)local_res18 + uVar1) = ~*(ulonglong *)((longlong)local_res18 + uVar1);
  *(longlong *)((longlong)local_res18 + uVar1) = *(longlong *)((longlong)local_res18 + uVar1) + 2;
  *(longlong *)((longlong)local_res18 + uVar1) = -*(longlong *)((longlong)local_res18 + uVar1);
  *(longlong *)((longlong)local_res18 + uVar1) =
       *(longlong *)((longlong)local_res18 + uVar1) - ~unaff_RBX;
  local_res18[0] = *(ulonglong *)(unaff_R12 + -0x98);
  FUN_16258f237(in_stack_00000008,param_2);
  FUN_1622da8cf(in_stack_00000008,
                (~unaff_R15 | unaff_RDI) & (~unaff_RDI | unaff_R15) ^ 0xffffffffffffffff);
  FUN_1661a013e();
  return;
}



// FUNCTION 14dd1b1ea FUN_14dd1b1ea body=170 status=ok
// SIG undefined FUN_14dd1b1ea(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1b273) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b279) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b308) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b313) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b319) */
/* WARNING: Removing unreachable block (ram,0x00014dd1b31e) */

void FUN_14dd1b1ea(undefined8 param_1)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_1622da8cf(param_1,(~unaff_R15 | unaff_RDI) & (~unaff_RDI | unaff_R15) ^ 0xffffffffffffffff);
  FUN_1661a013e();
  return;
}



// FUNCTION 14dd1b279 FUN_14dd1b279 body=299 status=ok
// SIG undefined FUN_14dd1b279(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1b31e) */

void FUN_14dd1b279(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15;
  uVar2 = ~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15);
  if (uVar1 != 0) {
    FUN_1576284ae(-1 - uVar1,uVar2);
    return;
  }
  FUN_1576284ae(0xffffffffffffffff,uVar2);
  return;
}



// FUNCTION 14dd1b3a7 FUN_14dd1b3a7 body=140 status=ok
// SIG undefined FUN_14dd1b3a7(void)

void FUN_14dd1b3a7(ulonglong param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined8 unaff_RBP;
  longlong lVar1;
  longlong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulonglong local_res20;
  
  lVar1 = *(longlong *)(&stack0x00000008 + unaff_R15) + param_1 + (local_res20 & param_1) * -2;
                    /* WARNING: Read-only address (ram,0x00014d7ac105) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7ac105 = in_AL;
  *(undefined8 *)(lVar1 + -8) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBP;
  FUN_14da724e9(in_stack_00000010,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dd1b6d2 FUN_14dd1b6d2 body=137 status=ok
// SIG undefined FUN_14dd1b6d2(void)

void FUN_14dd1b6d2(void)

{
  return;
}



// FUNCTION 14dd1b7f9 FUN_14dd1b7f9 body=95 status=ok
// SIG undefined FUN_14dd1b7f9(void)

void FUN_14dd1b7f9(void)

{
  return;
}



// FUNCTION 14dd1b947 FUN_14dd1b947 body=188 status=ok
// SIG undefined FUN_14dd1b947(void)

ulonglong FUN_14dd1b947(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  return ~((~unaff_R15 | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1);
}



// FUNCTION 14dd1ba07 FUN_14dd1ba07 body=183 status=ok
// SIG undefined FUN_14dd1ba07(void)

/* WARNING: Removing unreachable block (ram,0x000160bd6692) */
/* WARNING: Removing unreachable block (ram,0x000160bd6698) */
/* WARNING: Removing unreachable block (ram,0x00014dd1ba91) */
/* WARNING: Removing unreachable block (ram,0x00014dd1ba97) */
/* WARNING: Removing unreachable block (ram,0x00014dd1bab4) */

undefined8 FUN_14dd1ba07(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  
  *(undefined8 *)(unaff_R13 + -0x58) = 0;
  *(longlong *)(unaff_R13 + -0x58) =
       *(longlong *)(unaff_R13 + -0x58) -
       ~((~in_stack_00000008 | unaff_R14) & (~unaff_R14 | unaff_R15));
  *(longlong *)(unaff_R13 + -0x58) = -*(longlong *)(unaff_R13 + -0x58);
  uVar3 = (~unaff_R12 | ~unaff_R15) & (~(unaff_R12 & unaff_R15) + unaff_R15) - ~unaff_R12;
  if (uVar3 == 0) {
    uVar1 = thunk_FUN_160bd661e();
    return uVar1;
  }
  *(ulonglong *)(unaff_R13 + -0x80) = uVar3;
  uVar2 = ~unaff_R15 | in_R11;
  uVar3 = ~unaff_R15 & ~in_R11 | unaff_R15;
  *(undefined8 *)(unaff_R13 + -0x40) = 0;
  *(ulonglong *)(unaff_R13 + -0x40) =
       *(ulonglong *)(unaff_R13 + -0x40) ^
       0xffffffffffffffff - ((uVar2 - 1) - ~(~((~(uVar2 & uVar3) + uVar3) - ~uVar2) + 1 + uVar3));
  *(undefined8 *)(unaff_R13 + -0x90) = 0x633d5eaa;
  uVar1 = FUN_15766a9d7(param_1,param_2);
  return uVar1;
}



// FUNCTION 14dd1bb23 FUN_14dd1bb23 body=79 status=ok
// SIG undefined FUN_14dd1bb23(void)

void FUN_14dd1bb23(undefined8 param_1)

{
  thunk_FUN_15b0ba9dc(param_1);
  return;
}



// FUNCTION 14dd1bcc6 FUN_14dd1bcc6 body=125 status=ok
// SIG undefined FUN_14dd1bcc6(void)

void FUN_14dd1bcc6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e09f382(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (~(~*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) + unaff_R15) -
                *(ulonglong *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dd1bf30 FUN_14dd1bf30 body=258 status=ok
// SIG undefined FUN_14dd1bf30(void)

/* WARNING: Instruction at (ram,0x00014dd1bfe6) overlaps instruction at (ram,0x00014dd1bfe5)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd1bfd5) */
/* WARNING: Removing unreachable block (ram,0x00014dd1bfe6) */
/* WARNING: Removing unreachable block (ram,0x00014dd1bfe5) */
/* WARNING: Removing unreachable block (ram,0x00014dd1bfea) */

void FUN_14dd1bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R11;
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
  byte bVar15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  bVar11 = (local_res10 & 0x4000) != 0;
  bVar10 = (local_res10 & 0x800) != 0;
  bVar9 = (local_res10 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (local_res10 & 0x80) != 0;
  bVar6 = (local_res10 & 0x40) != 0;
  bVar5 = (local_res10 & 0x10) != 0;
  bVar4 = (local_res10 & 4) != 0;
  bVar3 = (local_res10 & 1) != 0;
  bVar15 = (uStackX_12 & 0x20) != 0;
  bVar12 = (uStackX_12 & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res8);
  *local_res18 = unaff_RBX;
  local_res18[-1] = unaff_RBX;
  *(undefined4 *)(local_res18 + -2) = 0x3521e93;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  uVar2 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res18[-3] = uVar2;
  local_res18[-4] = unaff_retaddr;
  local_res18[-5] = in_R11;
  local_res18[-3] = local_res18[-3] + -0x2107bd1;
  local_res18[-3] = param_3;
  local_res18[-4] = param_3;
  local_res18[-3] = &LAB_1652a8fcc;
  return;
}



// FUNCTION 14dd1c0dc FUN_14dd1c0dc body=163 status=ok
// SIG undefined FUN_14dd1c0dc(void)

void FUN_14dd1c0dc(undefined8 param_1,undefined8 param_2)

{
  FUN_15b3d1bac(1,param_2,FUN_15b3d1bac);
  return;
}



// FUNCTION 14dd1c17f FUN_14dd1c17f body=145 status=ok
// SIG undefined FUN_14dd1c17f(void)

void FUN_14dd1c17f(void)

{
  return;
}



// FUNCTION 14dd1c219 FUN_14dd1c219 body=317 status=ok
// SIG undefined FUN_14dd1c219(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1c2a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd1c2b3) */
/* WARNING: Removing unreachable block (ram,0x00016640d149) */

void FUN_14dd1c219(void)

{
  FUN_16640d149();
  return;
}



// FUNCTION 14dd1c479 FUN_14dd1c479 body=73 status=ok
// SIG undefined FUN_14dd1c479(void)

void FUN_14dd1c479(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(unaff_retaddr);
  *local_res10 = unaff_R14;
  local_res10[-1] = unaff_R14;
  local_res10[-2] = uVar2;
  *(undefined4 *)(local_res10 + -2) = 0xabc2e8f;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  local_res10[-2] = in_R9;
  local_res10[-3] = in_R9;
  local_res10[-2] = &DAT_14dd1c4c4;
  return;
}



// FUNCTION 14dd1c58f FUN_14dd1c58f body=14 status=ok
// SIG undefined FUN_14dd1c58f(void)

void FUN_14dd1c58f(void)

{
  return;
}



// FUNCTION 14dd1c62c FUN_14dd1c62c body=158 status=ok
// SIG undefined FUN_14dd1c62c(void)

void FUN_14dd1c62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1655ebd35(param_1,param_2,param_3);
  FUN_165c234e5(param_1);
  return;
}



// FUNCTION 14dd1c6cb FUN_14dd1c6cb body=140 status=ok
// SIG undefined FUN_14dd1c6cb(void)

void FUN_14dd1c6cb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165c234e5(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd1c759 FUN_14dd1c759 body=613 status=ok
// SIG undefined FUN_14dd1c759(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1c92b) */
/* WARNING: Removing unreachable block (ram,0x00014dd1c936) */
/* WARNING: Removing unreachable block (ram,0x00014dd1c931) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1c759(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ushort *puVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  puVar4 = (ushort *)
           ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + unaff_RDI)) &
            (~*(ulonglong *)(unaff_R13 + unaff_RDI) | unaff_R15));
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  uVar5 = ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15);
  uVar5 = (uVar3 - (uVar5 | uVar3)) + uVar5;
  FUN_164890037(uVar5,param_2,uVar5);
  *puVar4 = ~*puVar4;
  uVar1 = *puVar4;
  *puVar4 = ~*puVar4;
  *puVar4 = (~(uVar1 & 0x100) + 0x100) - *puVar4;
  *puVar4 = ~*puVar4;
  *(undefined8 *)(local_res20 + -8) = 0xd93a1b2;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_14d8d1c12;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14d8d1c12;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x28) = 0x14dd1c893;
  uVar3 = FUN_14d8d1bc7();
  uVar5 = *(ulonglong *)(unaff_R12 + ~(uVar5 & uStackX_8));
  uVar2 = uVar5 ^ 0xffffffffffffffff | uVar3;
  uVar2 = uVar2 & 0xffffffffffffffff - (~uVar3 | uVar5) | ~uVar2;
  *(undefined4 *)(local_res20 + -0x28) = 0xde0e7dc1;
  *(undefined4 *)(local_res20 + -0x24) = 0xffffffff;
  uVar5 = *(ulonglong *)(unaff_R12 + *(longlong *)(local_res20 + -0x28) + 0x21f181c7);
  *(ulonglong *)(local_res20 + -0x28) = uVar2;
  FUN_161d67ff3(CONCAT71((int7)(uVar2 >> 8),0xfe),uVar5 & uVar3);
  return;
}



// FUNCTION 14dd1cc19 FUN_14dd1cc19 body=716 status=ok
// SIG undefined FUN_14dd1cc19(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1ccb8) */
/* WARNING: Removing unreachable block (ram,0x00014dd1cd49) */
/* WARNING: Removing unreachable block (ram,0x000164721497) */
/* WARNING: Removing unreachable block (ram,0x00014dd1cd4f) */

void FUN_14dd1cc19(void)

{
  return;
}



// FUNCTION 14dd1cdd0 FUN_14dd1cdd0 body=218 status=ok
// SIG undefined FUN_14dd1cdd0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1ce60) */

void FUN_14dd1cdd0(void)

{
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x48)) {
    FUN_165a620a2();
    return;
  }
  FUN_165a620a2();
  return;
}



// FUNCTION 14dd1ced6 FUN_14dd1ced6 body=183 status=ok
// SIG undefined FUN_14dd1ced6(void)

ulonglong FUN_14dd1ced6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~param_1 | *(ulonglong *)(unaff_RDI + -0xa0);
}



// FUNCTION 14dd1d1c0 FUN_14dd1d1c0 body=14 status=ok
// SIG undefined FUN_14dd1d1c0(void)

void FUN_14dd1d1c0(void)

{
  FUN_14d7bee83();
  return;
}



// FUNCTION 14dd1d2fd thunk_FUN_14dd1d303 body=5 status=ok
// SIG undefined thunk_FUN_14dd1d303(void)

void thunk_FUN_14dd1d303(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong in_R9;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) & unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) = (lVar1 + unaff_R15) - *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~in_R9 | ~*(ulonglong *)(unaff_RBX + 8);
  FUN_157600377();
  return;
}



// FUNCTION 14dd1d303 FUN_14dd1d303 body=126 status=ok
// SIG undefined FUN_14dd1d303(void)

void FUN_14dd1d303(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong in_R9;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) & unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) = (lVar1 + unaff_R15) - *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~in_R9 | ~*(ulonglong *)(unaff_RBX + 8);
  FUN_157600377();
  return;
}



// FUNCTION 14dd1d382 FUN_14dd1d382 body=150 status=ok
// SIG undefined FUN_14dd1d382(void)

undefined8 FUN_14dd1d382(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | unaff_R15;
  *(ulonglong *)(unaff_R12 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_R12 + 8));
  lVar2 = -((0xffffffffffffffff - unaff_R15 | local_res20) & (~local_res20 | unaff_R15));
  *(undefined8 *)(lVar2 + -9) = unaff_RBP;
  *(undefined1 **)(lVar2 + -0x11) = &LAB_1660713e6;
  return uStackX_8;
}



// FUNCTION 14dd1d58b FUN_14dd1d58b body=167 status=ok
// SIG undefined FUN_14dd1d58b(void)

void FUN_14dd1d58b(undefined8 param_1)

{
  FUN_1668c8e2b(param_1,FUN_1668c8e2b);
  return;
}



// FUNCTION 14dd1d7e4 FUN_14dd1d7e4 body=43 status=ok
// SIG undefined FUN_14dd1d7e4(void)

void FUN_14dd1d7e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  thunk_FUN_15b642ca5(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14dd1d99e FUN_14dd1d99e body=188 status=ok
// SIG undefined FUN_14dd1d99e(void)

undefined8 FUN_14dd1d99e(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14dd1da5e FUN_14dd1da5e body=62 status=ok
// SIG undefined FUN_14dd1da5e(void)

void FUN_14dd1da5e(void)

{
  return;
}



// FUNCTION 14dd1dc15 FUN_14dd1dc15 body=299 status=ok
// SIG undefined FUN_14dd1dc15(void)

void FUN_14dd1dc15(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161cad230(FUN_161cad230,*(undefined8 *)(unaff_R13 + -0x38),
                (*(ulonglong *)(unaff_R13 + -0x88) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) * -2 + -2,in_R9 & in_RAX);
  return;
}



// FUNCTION 14dd1df5e FUN_14dd1df5e body=254 status=ok
// SIG undefined FUN_14dd1df5e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1dfec) */

void FUN_14dd1df5e(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  uVar3 = 0xffffffffffffffff - (uVar1 & in_RAX);
  uVar1 = ~((~(uVar1 & in_RAX) + in_RAX) - ~uVar1);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX;
  if (-1 < (longlong)uVar2) {
    FUN_16676395d();
    return;
  }
  FUN_14dfe25a2(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                 (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)),uVar2,
                ~((~(~uVar3 & uVar1) + uVar1) - uVar3));
  return;
}



// FUNCTION 14dd1e118 FUN_14dd1e118 body=115 status=ok
// SIG undefined FUN_14dd1e118(void)

void FUN_14dd1e118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  longlong in_R10;
  undefined8 in_R11;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  lVar1 = local_res18 + in_R10;
  LOCK();
  UNLOCK();
  DAT_14d7abf50 = in_AL;
  *(undefined8 *)(lVar1 + -8) = in_R11;
  *(undefined8 *)(lVar1 + -0x10) = in_R11;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(lVar1 + -0x20) = param_4;
  *(undefined8 *)(lVar1 + -0x28) = local_res8;
  uVar2 = *(undefined8 *)(lVar1 + -0x20);
  uVar3 = *(ulonglong *)(lVar1 + -0x18);
  *(undefined8 *)(lVar1 + -0x18) = unaff_retaddr;
  *(ulonglong *)(lVar1 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar1 + -8) = 0x398c832;
  FUN_165c7153c(*(undefined8 *)(lVar1 + -0x28),param_2,param_3,uVar2);
  return;
}



// FUNCTION 14dd1e248 FUN_14dd1e248 body=526 status=ok
// SIG undefined FUN_14dd1e248(void)

/* WARNING: Removing unreachable block (ram,0x0001660a94da) */
/* WARNING: Removing unreachable block (ram,0x0001660a94e0) */
/* WARNING: Removing unreachable block (ram,0x0001660a957b) */
/* WARNING: Removing unreachable block (ram,0x0001660a9586) */
/* WARNING: Removing unreachable block (ram,0x0001660a9581) */
/* WARNING: Removing unreachable block (ram,0x000164927d90) */
/* WARNING: Removing unreachable block (ram,0x000165c1ac3b) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e2f3) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e2fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e394) */
/* WARNING: Removing unreachable block (ram,0x000165c1ab14) */
/* WARNING: Removing unreachable block (ram,0x000165c1ac30) */
/* WARNING: Removing unreachable block (ram,0x000165c1ac35) */
/* WARNING: Removing unreachable block (ram,0x000165250679) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e39a) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e3a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e3bc) */
/* WARNING: Removing unreachable block (ram,0x000157012c97) */
/* WARNING: Removing unreachable block (ram,0x000157012cca) */
/* WARNING: Removing unreachable block (ram,0x000157012cc5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd1e248(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -8) = 0x6dd68771;
  *(ulonglong *)(unaff_RBP + -8) = *(ulonglong *)(unaff_RBP + -8) ^ 0x6dd68771;
  *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_RBP + -8);
  *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_RBP + -8);
  uVar1 = FUN_1660a9461();
  return uVar1;
}



// FUNCTION 14dd1e45e FUN_14dd1e45e body=141 status=ok
// SIG undefined FUN_14dd1e45e(void)

void FUN_14dd1e45e(void)

{
  (*(code *)0x15b0f6a23)(0x15b0f6a23);
  return;
}



// FUNCTION 14dd1e4ec FUN_14dd1e4ec body=137 status=ok
// SIG undefined FUN_14dd1e4ec(void)

void FUN_14dd1e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165b9146c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd1e60d FUN_14dd1e60d body=5 status=ok
// SIG undefined FUN_14dd1e60d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1e641) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e715) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e71b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1e60d(ulonglong param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  byte in_AF;
  bool bVar5;
  bool bVar6;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  FUN_14dbf8284(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  uStack_28 = 0x1613058a9;
  FUN_14d951db1();
  uVar1 = ~((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100
            | 0x40 | (ushort)(in_AF & 1) * 0x10 | 4) | 0xfeff;
  uVar2 = ~uVar1;
  bVar6 = -1 < (short)uVar1;
  bVar5 = uVar2 == 0;
  bVar3 = POPCOUNT(uVar2 & 0xff);
  puVar4 = (undefined8 *)auStack_30;
  if (bVar5) {
    bVar6 = (longlong)&uStack_28 < 0;
    bVar3 = POPCOUNT((ulonglong)&uStack_28 & 0xff);
    puVar4 = &uStack_28;
  }
  puVar4[-1] = unaff_R12;
  puVar4[-2] = unaff_R12;
  puVar4[-3] = unaff_R12;
  puVar4[-1] = &LAB_161305985;
  puVar4[-4] = -in_R11;
  puVar4[-5] = (ulonglong)(in_NT & 1) * 0x4000 |
               (ulonglong)(bVar5 && SCARRY8((longlong)auStack_30,8)) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar6 * 0x80 |
               (ulonglong)(bVar5 && &uStack_28 == (undefined8 *)0x0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((bVar3 & 1) == 0) * 4 |
               (ulonglong)(bVar5 && &DAT_fffffffffffffff7 < auStack_30) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar4[-2] = 0x1575defdc;
  return;
}



// FUNCTION 14dd1e612 FUN_14dd1e612 body=128 status=ok
// SIG undefined FUN_14dd1e612(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1e641) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e715) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e71b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1e612(ulonglong param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  byte in_AF;
  bool bVar5;
  bool bVar6;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  FUN_14dbf8284(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  uStack_28 = 0x1613058a9;
  FUN_14d951db1();
  uVar1 = ~((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100
            | 0x40 | (ushort)(in_AF & 1) * 0x10 | 4) | 0xfeff;
  uVar2 = ~uVar1;
  bVar6 = -1 < (short)uVar1;
  bVar5 = uVar2 == 0;
  bVar3 = POPCOUNT(uVar2 & 0xff);
  puVar4 = (undefined8 *)auStack_30;
  if (bVar5) {
    bVar6 = (longlong)&uStack_28 < 0;
    bVar3 = POPCOUNT((ulonglong)&uStack_28 & 0xff);
    puVar4 = &uStack_28;
  }
  puVar4[-1] = unaff_R12;
  puVar4[-2] = unaff_R12;
  puVar4[-3] = unaff_R12;
  puVar4[-1] = &LAB_161305985;
  puVar4[-4] = -in_R11;
  puVar4[-5] = (ulonglong)(in_NT & 1) * 0x4000 |
               (ulonglong)(bVar5 && SCARRY8((longlong)auStack_30,8)) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar6 * 0x80 |
               (ulonglong)(bVar5 && &uStack_28 == (undefined8 *)0x0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((bVar3 & 1) == 0) * 4 |
               (ulonglong)(bVar5 && &DAT_fffffffffffffff7 < auStack_30) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar4[-2] = 0x1575defdc;
  return;
}



// FUNCTION 14dd1e692 FUN_14dd1e692 body=280 status=ok
// SIG undefined FUN_14dd1e692(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1e715) */
/* WARNING: Removing unreachable block (ram,0x00014dd1e71b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1e692(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong in_R11;
  undefined8 unaff_R12;
  byte in_AF;
  bool bVar5;
  bool bVar6;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  uStack_20 = 0x1613058a9;
  FUN_14d951db1();
  uVar1 = ~((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100
            | 0x40 | (ushort)(in_AF & 1) * 0x10 | 4) | 0xfeff;
  uVar2 = ~uVar1;
  bVar6 = -1 < (short)uVar1;
  bVar5 = uVar2 == 0;
  bVar3 = POPCOUNT(uVar2 & 0xff);
  puVar4 = (undefined8 *)auStack_28;
  if (bVar5) {
    bVar6 = (longlong)&uStack_20 < 0;
    bVar3 = POPCOUNT((ulonglong)&uStack_20 & 0xff);
    puVar4 = &uStack_20;
  }
  puVar4[-1] = unaff_R12;
  puVar4[-2] = unaff_R12;
  puVar4[-3] = unaff_R12;
  puVar4[-1] = &LAB_161305985;
  puVar4[-4] = -in_R11;
  puVar4[-5] = (ulonglong)(in_NT & 1) * 0x4000 |
               (ulonglong)(bVar5 && SCARRY8((longlong)auStack_28,8)) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar6 * 0x80 |
               (ulonglong)(bVar5 && &uStack_20 == (undefined8 *)0x0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((bVar3 & 1) == 0) * 4 |
               (ulonglong)(bVar5 && &DAT_fffffffffffffff7 < auStack_28) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar4[-2] = 0x1575defdc;
  return;
}



// FUNCTION 14dd1e7ae FUN_14dd1e7ae body=167 status=ok
// SIG undefined FUN_14dd1e7ae(void)

undefined8 FUN_14dd1e7ae(void)

{
  undefined8 uVar1;
  undefined2 in_AX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined2 *unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *unaff_RDI = in_AX;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBX;
  uVar1 = *(undefined8 *)(in_stack_00000028 + -0x10);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x20) = 0x636aedfd;
  *(undefined8 *)(in_stack_00000028 + -0x28) = uVar1;
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x28) = local_res18;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_14dd1e855;
  *(undefined8 *)(in_stack_00000028 + -0x20) = 0x1612f40be;
  return uStackX_8;
}



// FUNCTION 14dd1e98f FUN_14dd1e98f body=188 status=ok
// SIG undefined FUN_14dd1e98f(void)

ulonglong FUN_14dd1e98f(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_R15;
  
  return ~((unaff_R15 - (in_RAX | unaff_R15)) + in_RAX) & unaff_RBX;
}



// FUNCTION 14dd1ea4e FUN_14dd1ea4e body=471 status=ok
// SIG undefined FUN_14dd1ea4e(void)

/* WARNING: Removing unreachable block (ram,0x000164a7d6fa) */
/* WARNING: Removing unreachable block (ram,0x00014dd1eae0) */

void FUN_14dd1ea4e(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if ((unaff_RBP - 1) - ~*(ulonglong *)(unaff_RSI + -0xa0) ==
      (*(ulonglong *)(unaff_RSI + -0xa0) & unaff_RBP) * 2) {
    FUN_14e00eee5();
    return;
  }
  FUN_14e00eee5();
  return;
}



// FUNCTION 14dd1ed41 FUN_14dd1ed41 body=140 status=ok
// SIG undefined FUN_14dd1ed41(void)

void FUN_14dd1ed41(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res18;
  
  FUN_166cabb71(local_res18,param_2,local_res8);
  return;
}



// FUNCTION 14dd1eed4 FUN_14dd1eed4 body=139 status=ok
// SIG undefined FUN_14dd1eed4(void)

void FUN_14dd1eed4(undefined8 param_1)

{
  ushort uVar1;
  ushort *unaff_R15;
  undefined8 in_stack_00000008;
  
  uVar1 = *unaff_R15;
  *unaff_R15 = *unaff_R15;
  *unaff_R15 = *unaff_R15 << 1;
  *unaff_R15 = (uVar1 - 1) - *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  FUN_161482e49(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dd1ef60 FUN_14dd1ef60 body=40 status=ok
// SIG undefined FUN_14dd1ef60(void)

void FUN_14dd1ef60(void)

{
  return;
}



// FUNCTION 14dd1ef88 FUN_14dd1ef88 body=158 status=ok
// SIG undefined FUN_14dd1ef88(void)

void FUN_14dd1ef88(void)

{
  longlong in_R9;
  
  if (in_R9 == 0xca83e) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0xca8bb) {
    FUN_16221c6fa();
    return;
  }
  return;
}



// FUNCTION 14dd1f0df FUN_14dd1f0df body=872 status=ok
// SIG undefined FUN_14dd1f0df(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1f1fb) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f206) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f163) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f169) */
/* WARNING: Removing unreachable block (ram,0x00015ba0117b) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f201) */
/* WARNING: Removing unreachable block (ram,0x00015734d46e) */

ulonglong FUN_14dd1f0df(ulonglong param_1)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong unaff_RBP;
  ulonglong uVar12;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 in_R10;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 in_R11;
  ulonglong uVar19;
  bool bVar20;
  ulonglong unaff_retaddr;
  ulonglong local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  uVar8 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | in_RAX;
  uVar16 = *(ulonglong *)(unaff_RBP + 8);
  *(undefined8 *)(unaff_RBP + 8) = 0;
  *(longlong *)(unaff_RBP + 8) = *(longlong *)(unaff_RBP + 8) + (-1 - ((~in_RAX | uVar8) & uVar16));
  uVar8 = local_res20 ^ in_RAX;
  uVar2 = ~(local_res18 ^ 0xffff);
  bVar20 = (uVar2 & 0x40) != 0;
  *(undefined8 *)(uVar8 - 8) = in_R10;
  *(undefined8 *)(uVar8 - 0x10) = in_R10;
  *(undefined4 *)(uVar8 - 0x18) = 0xf050b52;
  *(undefined4 *)(uVar8 - 0x14) = 0;
  if (!bVar20) {
    lVar13 = *(longlong *)(uVar8 - 0x18);
    *(ulonglong *)(uVar8 - 0x18) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)bVar20 * 0x40 |
         (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
         (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
         (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
    *(longlong *)(uVar8 - 0x20) = lVar13;
    *(longlong *)(uVar8 - 0x20) = *(longlong *)(uVar8 - 0x20) + -0xc4b0926;
    *(undefined8 *)(uVar8 - 0x18) = in_R11;
    *(longlong *)(uVar8 - 8) = lVar13 + -0xc4b0926;
    *(ulonglong *)(uVar8 - 0x10) = param_1;
    *(ulonglong *)(uVar8 - 0x18) = param_1;
    *(code **)(uVar8 - 0x10) = FUN_14d85d504;
    return local_res10;
  }
  if (bVar20) {
    uVar8 = FUN_164eea707();
    return uVar8;
  }
  puVar1 = (ulonglong *)(uVar8 - 0x10);
  *puVar1 = unaff_retaddr;
  uVar16 = *puVar1;
  *(ulonglong **)(uVar8 - 0x18) = puVar1;
  puVar1 = *(ulonglong **)(uVar8 - 0x18);
  *puVar1 = param_1;
  uVar8 = ~uVar16;
  uVar14 = (~*puVar1 | uVar16) & (uVar8 + param_1) - (uVar8 & param_1) ^ 0xffffffffffffffff;
  *puVar1 = local_res10;
  puVar1[-1] = unaff_RSI;
  uVar8 = *(ulonglong *)(unaff_RDI - 0x38);
  uVar5 = puVar1[-1];
  uVar19 = uVar8 | param_1;
  lVar13 = param_1 - (uVar8 | param_1);
  uVar12 = ~param_1 & ~*(ulonglong *)(unaff_RDI - 0x40) | param_1;
  uVar15 = (~param_1 | *(ulonglong *)(unaff_RDI - 0x40)) & uVar12 ^ 0xffffffffffffffff;
  uVar11 = ~((~param_1 | *(ulonglong *)(unaff_RDI - 0x50)) &
            (~*(ulonglong *)(unaff_RDI - 0x50) | param_1));
  uVar16 = *(ulonglong *)(unaff_RDI - 0x30);
  *puVar1 = uVar16 + param_1;
  *puVar1 = *puVar1 + (uVar16 & param_1) * -2;
  uVar16 = *puVar1;
  *puVar1 = (ulonglong)FUN_165fbbc4c;
  uVar17 = uVar16;
  FUN_165657fff();
  uVar6 = puVar1[2];
  *(ulonglong *)(uVar16 + 8) = (param_1 - (uVar12 | param_1)) + *(longlong *)(uVar16 + 8);
  puVar1[6] = -puVar1[6];
  puVar1[6] = puVar1[6] - 1;
  puVar1[4] = uVar17;
  puVar1[3] = uVar5 | 0xc224;
  puVar1[6] = (~uVar15 | puVar1[6]) + uVar15 + 1;
  uVar9 = puVar1[3];
  uVar18 = puVar1[4];
  puVar1[5] = unaff_RDI;
  puVar1[4] = param_1;
  puVar1[3] = uVar6;
  *(undefined4 *)(puVar1 + 3) = 0x2e0dfafb;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  pcVar10 = FUN_1657f3cdf;
  puVar1[3] = (ulonglong)FUN_165fbbcf3;
  FUN_1657f3cdf();
  uVar3 = puVar1[4];
  *(ushort *)(puVar1 + 5) = (ushort)puVar1[5] & 0xfeff;
  puVar7 = (undefined8 *)puVar1[6];
  puVar7[-1] = pcVar10;
  puVar7[-2] = uVar14;
  puVar7[-3] = uVar14;
  puVar7[-4] = uVar9;
  puVar7[-5] = uVar18;
  puVar7[-4] = 0xffffffffffffffff - (lVar13 + uVar8) & uVar19;
  puVar7[-5] = uVar3;
  puVar7[-2] = puVar7[-1];
  uVar3 = puVar7[-4];
  puVar7[-3] = uVar11;
  puVar7[-1] = &DAT_16146deb3;
  uVar9 = puVar7[-3];
  puVar7[-3] = 0x165fbbd7c;
  FUN_16146de7f(FUN_16146de7f,uVar9);
  puVar4 = (undefined8 *)*puVar7;
  pcVar10 = (code *)swi(0x2e);
  uVar9 = (*pcVar10)(puVar7[-2]);
  puVar4[-1] = uVar9;
  *puVar4 = 0x3e3cfc8;
  *(undefined8 *)((longlong)puVar4 + -0x28c7) = uVar3;
  *(undefined8 *)((longlong)puVar4 + -0x28cf) = uVar3;
  *(undefined **)((longlong)puVar4 + -0x28c7) = &DAT_156ef2e4a;
  return puVar4[-1];
}



// FUNCTION 14dd1f169 FUN_14dd1f169 body=157 status=ok
// SIG undefined FUN_14dd1f169(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1f1fb) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f206) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f201) */

void FUN_14dd1f169(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  (*(code *)&LAB_165bcd800)(in_stack_00000008,param_2,param_3,&LAB_165bcd800);
  return;
}



// FUNCTION 14dd1f206 FUN_14dd1f206 body=185 status=ok
// SIG undefined FUN_14dd1f206(void)

void FUN_14dd1f206(void)

{
  return;
}



// FUNCTION 14dd1f2c1 FUN_14dd1f2c1 body=421 status=ok
// SIG undefined FUN_14dd1f2c1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1f341) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f347) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f45c) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f461) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f467) */
/* WARNING: Removing unreachable block (ram,0x00014dd1f46c) */
/* WARNING: Removing unreachable block (ram,0x0001570fffb8) */
/* WARNING: Removing unreachable block (ram,0x0001570ffff7) */
/* WARNING: Removing unreachable block (ram,0x0001570ffffb) */
/* WARNING: Removing unreachable block (ram,0x000157100115) */
/* WARNING: Removing unreachable block (ram,0x000157100122) */
/* WARNING: Removing unreachable block (ram,0x000157100130) */
/* WARNING: Removing unreachable block (ram,0x000157100135) */

undefined8 FUN_14dd1f2c1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1570fffb8();
  return uVar1;
}



// FUNCTION 14dd1f46c FUN_14dd1f46c body=22 status=ok
// SIG undefined FUN_14dd1f46c(void)

void FUN_14dd1f46c(void)

{
  return;
}



// FUNCTION 14dd1f50e FUN_14dd1f50e body=126 status=ok
// SIG undefined FUN_14dd1f50e(void)

void FUN_14dd1f50e(ulonglong param_1)

{
  undefined8 local_res20;
  
  (*(code *)0x1659feb7f)(param_1,~param_1 | local_res20,0x1659feb7f);
  return;
}



// FUNCTION 14dd1f58c FUN_14dd1f58c body=142 status=ok
// SIG undefined FUN_14dd1f58c(void)

void FUN_14dd1f58c(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  (*(code *)0x15b138520)
            (*(undefined8 *)(unaff_RDI + -0x90),*(ulonglong *)(unaff_RDI + -0x68) ^ unaff_retaddr);
  return;
}



// FUNCTION 14dd1f6af FUN_14dd1f6af body=337 status=ok
// SIG undefined FUN_14dd1f6af(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1f730) */

undefined8 FUN_14dd1f6af(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd1f880 FUN_14dd1f880 body=138 status=ok
// SIG undefined FUN_14dd1f880(void)

void FUN_14dd1f880(undefined8 param_1,undefined8 param_2)

{
  FUN_1627c109c(0x10,param_2);
  return;
}



// FUNCTION 14dd1faab FUN_14dd1faab body=156 status=ok
// SIG undefined FUN_14dd1faab(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1faab(undefined8 param_1)

{
  FUN_16646d308(param_1);
  return;
}



// FUNCTION 14dd1fb48 FUN_14dd1fb48 body=144 status=ok
// SIG undefined FUN_14dd1fb48(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1fb71) */

void FUN_14dd1fb48(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_15b062f2b(*(ulonglong *)(param_2 + -0x48) ^ in_R10);
  return;
}



// FUNCTION 14dd1fbda thunk_FUN_14dd1fbe0 body=5 status=ok
// SIG undefined thunk_FUN_14dd1fbe0(void)

void thunk_FUN_14dd1fbe0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161b9f539(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dd1fbe0 FUN_14dd1fbe0 body=130 status=ok
// SIG undefined FUN_14dd1fbe0(void)

void FUN_14dd1fbe0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161b9f539(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dd1fdeb FUN_14dd1fdeb body=154 status=ok
// SIG undefined FUN_14dd1fdeb(void)

void FUN_14dd1fdeb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1667211f2(FUN_1667211f2,param_2,param_3);
  return;
}



// FUNCTION 14dd1ffc2 FUN_14dd1ffc2 body=242 status=ok
// SIG undefined FUN_14dd1ffc2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd20069) */

void FUN_14dd1ffc2(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBP;
  undefined8 unaff_R14;
  byte in_CF;
  
  lVar5 = (param_1 + -0x13dcd5b) - (ulonglong)((in_CF & 1) != 0);
  puVar1 = (ulonglong *)(&stack0xfffffffffec232a5 + lVar5 + 0x13dcd5b);
  *puVar1 = 0x2e12c339;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xffffffffd1ed3cc6;
  *puVar1 = ~(~(uVar2 & 0xffffffffd1ed3cc6) & *puVar1);
  *puVar1 = *puVar1 + unaff_RBP;
  puVar1 = (ulonglong *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b);
  *(undefined4 *)puVar1 = 0x6c7d8fb;
  *(undefined4 *)(&stack0xfffffffffec232a1 + lVar5 + 0x13dcd5b) = 0;
  uVar2 = *puVar1;
  *(undefined4 *)puVar1 = 0x732c3af0;
  *(undefined4 *)(&stack0xfffffffffec232a1 + lVar5 + 0x13dcd5b) = 0;
  uVar3 = *puVar1;
  *(undefined8 *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b) = param_2;
  *(ulonglong *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b) = uVar2;
  *(ulonglong *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b) =
       *(longlong *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b) - (uVar3 ^ 0x75ebe3f3);
  lVar4 = *(longlong *)(&stack0xfffffffffec2329d + lVar5 + 0x13dcd5b);
  *(undefined8 *)(&stack0xfffffffffec232a5 + lVar4 + lVar5 + 0x13dcd5b) = 0;
  *(ulonglong *)(&stack0xfffffffffec232a5 + lVar4 + lVar5 + 0x13dcd5b) =
       *(ulonglong *)(&stack0xfffffffffec232a5 + lVar4 + lVar5 + 0x13dcd5b) ^ param_3;
  *(undefined8 *)(&stack0xfffffffffec2329d + lVar4 + lVar5 + 0x13dcd5b) = unaff_R14;
  *(undefined1 **)(&stack0xfffffffffec23295 + lVar4 + lVar5 + 0x13dcd5b) = &LAB_156e17921;
  return;
}



// FUNCTION 14dd20122 thunk_FUN_14dd2012a body=5 status=ok
// SIG undefined thunk_FUN_14dd2012a(void)

void thunk_FUN_14dd2012a(void)

{
  return;
}



// FUNCTION 14dd2012a FUN_14dd2012a body=125 status=ok
// SIG undefined FUN_14dd2012a(void)

void FUN_14dd2012a(void)

{
  return;
}



// FUNCTION 14dd20267 FUN_14dd20267 body=764 status=ok
// SIG undefined FUN_14dd20267(void)

void FUN_14dd20267(void)

{
  FUN_16499b6b2();
  FUN_1627cd747();
  return;
}



// FUNCTION 14dd2037b FUN_14dd2037b body=182 status=ok
// SIG undefined FUN_14dd2037b(void)

void FUN_14dd2037b(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBP;
  uVar3 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = uVar3;
  puVar1 = (ulonglong *)(uVar2 - 0x20);
  *puVar1 = 0x264082fa;
  *puVar1 = *puVar1 ^ 0x264082fa;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R14;
  *(undefined **)(uVar2 - 0x30) = &DAT_162d578c3;
  *(undefined **)(uVar2 - 0x38) = &DAT_162d578c3;
  *(undefined **)(uVar2 - 0x40) = &DAT_162d578c3;
  *(undefined1 **)(uVar2 - 0x30) = &LAB_14dd20431;
  *(undefined8 *)(uVar2 - 0x38) = 0x15b9f29c2;
  return;
}



// FUNCTION 14dd204ca FUN_14dd204ca body=160 status=ok
// SIG undefined FUN_14dd204ca(void)

void FUN_14dd204ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_1564e882e(param_1,param_2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dd2056a FUN_14dd2056a body=306 status=ok
// SIG undefined FUN_14dd2056a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd205f5) */

void FUN_14dd2056a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong *unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 *puVar3;
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
  byte bVar15;
  byte bVar16;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  ulonglong local_res20;
  
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | param_1;
  *unaff_RBX = ~(unaff_RDI & *unaff_RBX);
  uVar1 = local_res20 ^ param_1;
  puVar3 = (undefined8 *)(param_5 + param_1 + (param_5 & param_1) * -2);
  local_res20._0_2_ = (ushort)uVar1;
  local_res20._0_2_ = (-0x101 - ((ushort)local_res20 | 0xfeff)) + (ushort)local_res20;
  bVar12 = ((ushort)local_res20 & 0x4000) != 0;
  bVar11 = ((ushort)local_res20 & 0x800) != 0;
  bVar10 = ((ushort)local_res20 & 0x200) != 0;
  bVar9 = ((ushort)local_res20 & 0x100) != 0;
  bVar8 = ((ushort)local_res20 & 0x80) != 0;
  bVar7 = ((ushort)local_res20 & 0x40) != 0;
  bVar6 = ((ushort)local_res20 & 0x10) != 0;
  bVar5 = ((ushort)local_res20 & 4) != 0;
  bVar4 = ((ushort)local_res20 & 1) != 0;
  bVar16 = (uVar1 & 0x200000) != 0;
  bVar13 = (uVar1 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(local_res18,param_2,param_3);
  puVar3[-1] = unaff_retaddr;
  puVar3[-2] = param_4;
  puVar3[-3] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)(((ushort)local_res20 & 0x400) != 0) * 0x400 |
               (ulonglong)(bVar10 & 1) * 0x200 | (ulonglong)(bVar9 & 1) * 0x100 |
               (ulonglong)(bVar8 & 1) * 0x80 | (ulonglong)(bVar7 & 1) * 0x40 |
               (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *puVar3 = 0x21ee74c;
  puVar3[-2] = local_res18;
  puVar3[-3] = local_res18;
  puVar3[-4] = local_res18;
  puVar3[-2] = &DAT_1611f6566;
  puVar3[-3] = &LAB_16112d03a;
  return;
}



// FUNCTION 14dd205f5 FUN_14dd205f5 body=141 status=ok
// SIG undefined FUN_14dd205f5(void)

void FUN_14dd205f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  longlong lVar1;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  lVar1 = ((local_res18 | unaff_R15) - (~(local_res18 & unaff_R15) | local_res18 | unaff_R15)) +
          ~(local_res18 & unaff_R15);
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = param_4;
  *(undefined8 *)(lVar1 + -0x18) = param_4;
  *(undefined8 *)(lVar1 + -0x20) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x28) = param_1;
  FUN_1655059ae(FUN_1655059ae,FUN_165505a1d,param_3,*(undefined8 *)(lVar1 + -8));
  return;
}



// FUNCTION 14dd20bf2 FUN_14dd20bf2 body=118 status=ok
// SIG undefined FUN_14dd20bf2(void)

void FUN_14dd20bf2(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16179fbb7(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd20c6a FUN_14dd20c6a body=90 status=ok
// SIG undefined FUN_14dd20c6a(void)

void FUN_14dd20c6a(void)

{
  return;
}



// FUNCTION 14dd20d74 FUN_14dd20d74 body=262 status=ok
// SIG undefined FUN_14dd20d74(void)

/* WARNING: Removing unreachable block (ram,0x00014dd20e1d) */
/* WARNING: Removing unreachable block (ram,0x00014dd20e0d) */

void FUN_14dd20d74(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  uint in_stack_00000008;
  undefined4 local_res20;
  
  uVar1 = *(ulonglong *)
           (unaff_R12 + (param_1 ^ unaff_RSI ^ (ulonglong)in_stack_00000008 ^ 0x4560152a));
  uVar2 = 0xffffffffffffffff - uVar1 | in_RAX;
  if (local_res20 < 0) {
    FUN_15b371d4a();
    return;
  }
  FUN_14e054570(-1 - ((~uVar2 | ~in_RAX | uVar1) + uVar2 + 1),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dd20e1d FUN_14dd20e1d body=134 status=ok
// SIG undefined FUN_14dd20e1d(void)

void FUN_14dd20e1d(void)

{
  FUN_162572626();
  return;
}



// FUNCTION 14dd20fe3 FUN_14dd20fe3 body=78 status=ok
// SIG undefined FUN_14dd20fe3(void)

void FUN_14dd20fe3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  undefined8 local_res10;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd2102f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,local_res8,param_3,local_res10);
  return;
}



// FUNCTION 14dd2112f FUN_14dd2112f body=15 status=ok
// SIG undefined FUN_14dd2112f(void)

void FUN_14dd2112f(void)

{
  return;
}



// FUNCTION 14dd211b8 FUN_14dd211b8 body=133 status=ok
// SIG undefined FUN_14dd211b8(void)

void FUN_14dd211b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort *unaff_RBX;
  undefined8 unaff_RBP;
  longlong local_res20;
  
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | 0x100;
  *unaff_RBX = ~*unaff_RBX;
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  *(undefined1 **)(local_res20 + -8) = &LAB_16592a864;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(code **)(local_res20 + -0x10) = thunk_FUN_15b642ca5;
  FUN_16592a851(uVar2,param_2,uVar1,*(undefined8 *)(local_res20 + -0x20));
  return;
}



// FUNCTION 14dd212c7 FUN_14dd212c7 body=154 status=ok
// SIG undefined FUN_14dd212c7(void)

/* WARNING: Removing unreachable block (ram,0x000162b96804) */
/* WARNING: Removing unreachable block (ram,0x000161ca3943) */
/* WARNING: Removing unreachable block (ram,0x000161ca39bf) */
/* WARNING: Removing unreachable block (ram,0x000161ca39c5) */
/* WARNING: Removing unreachable block (ram,0x000161ca39ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd21363) */
/* WARNING: Removing unreachable block (ram,0x000161ca392b) */
/* WARNING: Removing unreachable block (ram,0x00014dd213f1) */
/* WARNING: Removing unreachable block (ram,0x00014dd213fd) */
/* WARNING: Removing unreachable block (ram,0x00014dd21402) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd212c7(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  FUN_1618e36dc(FUN_1618e36dc,0xffffffffc2d8dede,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                ~((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) + uVar1 + 1));
  return;
}



// FUNCTION 14dd21363 FUN_14dd21363 body=162 status=ok
// SIG undefined FUN_14dd21363(void)

/* WARNING: Removing unreachable block (ram,0x000162b96804) */
/* WARNING: Removing unreachable block (ram,0x000161ca3943) */
/* WARNING: Removing unreachable block (ram,0x000161ca39bf) */
/* WARNING: Removing unreachable block (ram,0x000161ca39c5) */
/* WARNING: Removing unreachable block (ram,0x000161ca39ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd21402) */

void FUN_14dd21363(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_RDI + -0x50) == 0) {
    FUN_161ca392b();
    return;
  }
  FUN_16695a3f9(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  uVar1 = *(ulonglong *)((~param_4 | ~((unaff_R12 | unaff_R13) + param_1 + 1)) + param_4 + -0x9f);
  uVar2 = ~(uVar1 & unaff_R15) & (~unaff_R15 & uVar1 | unaff_R15);
  FUN_160fc6ec8();
  uVar1 = *(ulonglong *)(uVar2 - 0x90);
  FUN_16471d5ac(FUN_16471d5ac,(-~unaff_R15 - (~uVar1 + 2)) + (uVar1 & unaff_R15) * -2,~unaff_R15,
                *(undefined8 *)(uVar2 - 0x60));
  return;
}



// FUNCTION 14dd21408 FUN_14dd21408 body=31 status=ok
// SIG undefined FUN_14dd21408(void)

void FUN_14dd21408(void)

{
  return;
}



// FUNCTION 14dd214a1 FUN_14dd214a1 body=440 status=ok
// SIG undefined FUN_14dd214a1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd21522) */
/* WARNING: Removing unreachable block (ram,0x00014dd21528) */
/* WARNING: Removing unreachable block (ram,0x00014dd215ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd215b9) */
/* WARNING: Removing unreachable block (ram,0x00014dd215bf) */
/* WARNING: Removing unreachable block (ram,0x000161b6dbdb) */
/* WARNING: Removing unreachable block (ram,0x0001620a26b7) */
/* WARNING: Removing unreachable block (ram,0x0001620a26bd) */
/* WARNING: Removing unreachable block (ram,0x0001620a26c2) */
/* WARNING: Removing unreachable block (ram,0x0001620a2745) */
/* WARNING: Removing unreachable block (ram,0x0001620a2749) */

void FUN_14dd214a1(void)

{
  FUN_165ac2f1a();
  return;
}



// FUNCTION 14dd21528 FUN_14dd21528 body=281 status=ok
// SIG undefined FUN_14dd21528(void)

/* WARNING: Removing unreachable block (ram,0x00014dd215bf) */

void FUN_14dd21528(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + param_2) = unaff_RSI;
  uVar1 = *(ulonglong *)(0xdc - (~(unaff_RDI - 0x17bU) + 2));
  uVar2 = ~uVar1 | param_1;
  if (CARRY8(-(~param_1 | uVar1 | uVar2),uVar2)) {
    FUN_161a37e1d(param_1,local_res18,param_3);
    return;
  }
  local_res20 = param_3;
  FUN_161b6dbdb();
  return;
}



// FUNCTION 14dd217d0 FUN_14dd217d0 body=428 status=ok
// SIG undefined FUN_14dd217d0(void)

/* WARNING: Removing unreachable block (ram,0x000166d0f913) */
/* WARNING: Removing unreachable block (ram,0x00014dd218df) */
/* WARNING: Removing unreachable block (ram,0x00014dd218e5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd217d0(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  
  uVar7 = ~(~param_1 & ~*(ulonglong *)(unaff_RDI + -0x60) | param_1);
  FUN_15b6c2a7a();
  uVar2 = ~(param_6 & unaff_R15) & (param_6 | unaff_R15);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = param_3;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBP;
  uVar6 = *(undefined8 *)(uVar2 - 0x10);
  *(ulonglong *)(uVar2 - 0x10) = uVar7;
  *(ulonglong *)(uVar2 - 0x18) = uVar7;
  uVar3 = *puVar1;
  *(undefined8 *)(uVar2 - 0x10) = 0;
  uVar7 = *(ulonglong *)(uVar2 - 0x10);
  *(ulonglong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) + uVar3;
  if (CARRY8(uVar7,uVar3)) {
    uVar4 = *(undefined8 *)(uVar2 - 0x18);
    *puVar1 = 0x1eab27b1;
    *(undefined8 *)(uVar2 - 0x18) = uVar6;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
    uVar7 = *puVar1;
    *puVar1 = *puVar1 | 0xffffffffe154d84e;
    *puVar1 = ~(~(uVar7 & 0xffffffffe154d84e) & *puVar1);
    uVar5 = *(undefined8 *)(uVar2 - 0x18);
    *puVar1 = *puVar1 - 0x156d2bdbe;
    *puVar1 = -*puVar1;
    uVar6 = *(undefined8 *)(uVar2 - 0x10);
    *(undefined8 *)(uVar2 - 0x10) = uVar6;
    *(undefined8 *)(uVar2 - 0x18) = uVar6;
    *(undefined8 *)(uVar2 - 0x20) = uVar5;
    *(code **)(uVar2 - 0x10) = thunk_FUN_15b642ca5;
    FUN_156d2bd98(param_1,uVar4,FUN_156d2bd98);
    return;
  }
  FUN_166721dc2();
  return;
}



// FUNCTION 14dd218e5 thunk_FUN_14dd218eb body=5 status=ok
// SIG undefined thunk_FUN_14dd218eb(void)

void thunk_FUN_14dd218eb(undefined8 param_1)

{
  (*(code *)&LAB_165a7b4ed)(param_1,&LAB_165a7b4ed);
  return;
}



// FUNCTION 14dd218eb FUN_14dd218eb body=153 status=ok
// SIG undefined FUN_14dd218eb(void)

void FUN_14dd218eb(undefined8 param_1)

{
  (*(code *)&LAB_165a7b4ed)(param_1,&LAB_165a7b4ed);
  return;
}



// FUNCTION 14dd21a13 FUN_14dd21a13 body=33 status=ok
// SIG undefined FUN_14dd21a13(void)

undefined8 FUN_14dd21a13(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dd21abb FUN_14dd21abb body=257 status=ok
// SIG undefined FUN_14dd21abb(void)

void FUN_14dd21abb(ulonglong param_1)

{
  FUN_15789659e(param_1,~param_1);
  FUN_16661725f();
  return;
}



// FUNCTION 14dd21c03 FUN_14dd21c03 body=125 status=ok
// SIG undefined FUN_14dd21c03(void)

void FUN_14dd21c03(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_R10;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x00000010 + (in_R10 ^ 0x17a9312e)) = param_3;
  FUN_14e1cf012(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14dd21c81 FUN_14dd21c81 body=544 status=ok
// SIG undefined FUN_14dd21c81(void)

/* WARNING: Removing unreachable block (ram,0x00014dd21d2d) */
/* WARNING: Removing unreachable block (ram,0x00014dd21d70) */
/* WARNING: Removing unreachable block (ram,0x0001662161b0) */
/* WARNING: Removing unreachable block (ram,0x0001662161e0) */
/* WARNING: Removing unreachable block (ram,0x0001662161da) */
/* WARNING: Removing unreachable block (ram,0x0001662161e4) */
/* WARNING: Removing unreachable block (ram,0x0001662161fe) */
/* WARNING: Removing unreachable block (ram,0x000166216214) */
/* WARNING: Removing unreachable block (ram,0x00014df016b2) */
/* WARNING: Removing unreachable block (ram,0x00014df016c4) */
/* WARNING: Removing unreachable block (ram,0x00014df016a6) */

void FUN_14dd21c81(ulonglong param_1)

{
  ulonglong uVar1;
  char in_AL;
  ulonglong unaff_retaddr;
  longlong local_res8;
  char local_res20;
  ulonglong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(local_res8 + 8);
  *(ulonglong *)(local_res8 + 8) = ~*(ulonglong *)(local_res8 + 8);
  *(ulonglong *)(local_res8 + 8) = *(ulonglong *)(local_res8 + 8) | param_1;
  *(ulonglong *)(local_res8 + 8) = ~((~unaff_retaddr | uVar1) & *(ulonglong *)(local_res8 + 8));
  LOCK();
  if (in_AL == DAT_14d7ab957) {
    DAT_14d7ab957 = local_res20;
  }
  UNLOCK();
  *(undefined8 *)(in_stack_00000030 + param_1 + (in_stack_00000030 & param_1) * -2 + -8) = 0x6292f00
  ;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd21eeb FUN_14dd21eeb body=117 status=ok
// SIG undefined FUN_14dd21eeb(void)

void FUN_14dd21eeb(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  lVar3 = unaff_RDI + (local_res20 & unaff_R15) * -2;
  *(undefined8 *)(lVar3 + -8) = uStackX_8;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = param_2;
  *(undefined8 *)(lVar3 + -0x20) = in_RAX;
  *(undefined4 *)(lVar3 + -0x20) = 0x415c3f11;
  *(undefined4 *)(lVar3 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(lVar3 + -0x20) ^ 0x415c3f19;
  *(undefined8 *)(lVar3 + -0x10 + uVar2) = 0;
  puVar1 = (ulonglong *)(lVar3 + -0x10 + uVar2);
  *puVar1 = *puVar1 ^ 0x14dd21f74;
  *(undefined8 *)(lVar3 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14dd2203c FUN_14dd2203c body=173 status=ok
// SIG undefined FUN_14dd2203c(void)

void FUN_14dd2203c(void)

{
  return;
}



// FUNCTION 14dd22358 FUN_14dd22358 body=122 status=ok
// SIG undefined FUN_14dd22358(void)

void FUN_14dd22358(void)

{
  return;
}



// FUNCTION 14dd22519 FUN_14dd22519 body=295 status=ok
// SIG undefined FUN_14dd22519(void)

void FUN_14dd22519(void)

{
  FUN_15691333d();
  FUN_162bd4f02();
  return;
}



// FUNCTION 14dd22643 FUN_14dd22643 body=260 status=ok
// SIG undefined FUN_14dd22643(void)

/* WARNING: Removing unreachable block (ram,0x00014dd226cd) */
/* WARNING: Removing unreachable block (ram,0x000156cafa90) */

void FUN_14dd22643(void)

{
  return;
}



// FUNCTION 14dd22872 FUN_14dd22872 body=166 status=ok
// SIG undefined FUN_14dd22872(void)

/* WARNING: Removing unreachable block (ram,0x000160f4981d) */
/* WARNING: Removing unreachable block (ram,0x00014dd22913) */

void FUN_14dd22872(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  param_3 = param_3 & unaff_RBX;
  uVar1 = *(undefined8 *)(unaff_RDI + -0x28);
  bVar2 = (byte)param_1;
  uVar4 = ~*(ulonglong *)(unaff_RDI + -0x68);
  uVar4 = (uVar4 + ~param_1) - (uVar4 & ~param_1);
  if (-1 < (longlong)uVar4) {
    lVar3 = FUN_15b1aad30(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 + ~uVar4 * -2,param_3)
    ;
    FUN_16224bfc3(FUN_16224bfc3,0xffffffffffffffb8,
                  lVar3 - (param_3 << ((char)param_1 + ((byte)uVar1 ^ bVar2) & 0x3f)),param_4);
    return;
  }
  FUN_160f49792();
  return;
}



// FUNCTION 14dd22919 FUN_14dd22919 body=363 status=ok
// SIG undefined FUN_14dd22919(void)

void FUN_14dd22919(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_14db8bf2e(in_stack_00000008,param_2);
  *(undefined4 *)(&stack0x00000008 + ((ulonglong)param_4 ^ 0x20c33e10)) = 0;
  FUN_162ceb01f(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14dd22d9b FUN_14dd22d9b body=101 status=ok
// SIG undefined FUN_14dd22d9b(void)

void FUN_14dd22d9b(void)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x160d6ec34)(unaff_retaddr);
  return;
}



// FUNCTION 14dd230a4 FUN_14dd230a4 body=303 status=ok
// SIG undefined FUN_14dd230a4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd231c6) */
/* WARNING: Removing unreachable block (ram,0x00014dd231cc) */
/* WARNING: Removing unreachable block (ram,0x00014dd231d1) */

void FUN_14dd230a4(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  FUN_16239acab(param_1,~(uVar1 & param_1) & (~(uVar1 & param_1) + param_1) - ~uVar1);
  uVar1 = CONCAT71((int7)((ulonglong)&stack0x00000004 >> 8),0xa5) ^ 0xa5;
  if ((char)uVar1 == '\0') {
    return;
  }
  FUN_15765381f(param_1,uVar1,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dd231d7 FUN_14dd231d7 body=59 status=ok
// SIG undefined FUN_14dd231d7(void)

void FUN_14dd231d7(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd23261 FUN_14dd23261 body=452 status=ok
// SIG undefined FUN_14dd23261(void)

/* WARNING: Removing unreachable block (ram,0x000162dd825e) */
/* WARNING: Removing unreachable block (ram,0x000162dd8264) */
/* WARNING: Removing unreachable block (ram,0x000162dd81f7) */
/* WARNING: Removing unreachable block (ram,0x000162b7382e) */
/* WARNING: Removing unreachable block (ram,0x000162b73962) */
/* WARNING: Removing unreachable block (ram,0x000162b73968) */
/* WARNING: Removing unreachable block (ram,0x000162b7396d) */
/* WARNING: Removing unreachable block (ram,0x0001662327a5) */

ulonglong FUN_14dd23261(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined8 in_R10;
  uint uVar7;
  undefined8 unaff_R12;
  ulonglong *unaff_R13;
  uint uVar9;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar10;
  byte in_AF;
  byte in_TF;
  bool bVar11;
  byte in_IF;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte in_NT;
  bool bVar16;
  bool bVar17;
  byte in_AC;
  bool bVar18;
  bool bVar19;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar20;
  bool bVar21;
  ulonglong uVar22;
  uint uVar8;
  
  uVar3 = unaff_R13[-5];
  uVar6 = unaff_R15 - 1;
  uVar5 = ~uVar3;
  if ((uVar6 >= uVar5) || (uVar6 < uVar5)) {
    uVar3 = FUN_14def8b22(*(ulonglong *)((longlong)unaff_R13 + unaff_RDI) ^ unaff_R15,
                          (uVar6 - uVar5) + (uVar3 & unaff_R15) * -2);
    return uVar3;
  }
  unaff_R13[-1] = in_RAX;
  *(undefined4 *)(unaff_R13 + -1) = 0;
  *(uint *)((longlong)unaff_R13 + -4) = 0;
  lVar1 = unaff_R13[-1];
  uVar6 = *unaff_R13;
  *unaff_R13 = unaff_RBX;
  uVar9 = (uint)unaff_R14;
  unaff_R13[-1] = (ulonglong)~(uVar9 & 0x3c9450d);
  unaff_R13[-2] = 0;
  *(undefined4 *)(unaff_R13 + -2) = 0xb406a563;
  uVar2 = unaff_R13[-2];
  unaff_R13[-2] = in_R10;
  unaff_R13[-3] = unaff_R12;
  uVar8 = (uint)uVar2;
  uVar7 = uVar8 + 0x4fc29faa;
  bVar10 = (POPCOUNT(uVar7 & 0xff) & 1U) == 0;
  unaff_R13[-2] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar8,0x4fc29faa) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar7 < 0) * 0x80 | (ulonglong)(uVar7 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar10 * 4 | (ulonglong)(0xb03d6055 < uVar8) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  unaff_R13[-3] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar8,0x4fc29faa) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar7 < 0) * 0x80 | (ulonglong)(uVar7 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar10 * 4 | (ulonglong)(0xb03d6055 < uVar8) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)(unaff_R13 + -3) = (int)unaff_R13[-3] << 0x1f;
  *(uint *)(unaff_R13 + -3) = (uint)unaff_R13[-3] >> 0x1f;
  if ((int)unaff_R13[-3] == 0) {
    uVar3 = thunk_FUN_162dd810f();
    return uVar3;
  }
  uVar22 = unaff_R13[-2];
  bVar16 = (uVar22 & 0x4000) != 0;
  bVar13 = (uVar22 & 0x400) != 0;
  bVar12 = (uVar22 & 0x200) != 0;
  bVar11 = (uVar22 & 0x100) != 0;
  bVar10 = (uVar22 & 0x10) != 0;
  bVar20 = (uVar22 & 0x200000) != 0;
  bVar18 = (uVar22 & 0x40000) != 0;
  if ((uVar22 & 1) == 0 && (uVar22 & 0x40) == 0) {
    uVar3 = *(ulonglong *)((longlong)unaff_R13 + uVar3);
    unaff_R13[-2] = unaff_R15;
    unaff_R13[-3] =
         (ulonglong)bVar16 * 0x4000 | (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 |
         (ulonglong)bVar11 * 0x100 | (ulonglong)((longlong)uVar3 < 0) * 0x80 |
         (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)bVar10 * 0x10 |
         (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar20 * 0x200000 |
         (ulonglong)bVar18 * 0x40000;
    uVar3 = unaff_R13[-3];
    unaff_R13[-3] =
         (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
         (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
    unaff_R13[-4] = param_3;
    unaff_R13[-5] = unaff_R14;
    *(ushort *)(unaff_R13 + -3) = ((ushort)unaff_R13[-3] | 0xfeff) + 0x101;
    unaff_R13[-5] = (ulonglong)&DAT_165d18f59;
    return in_RAX;
  }
  unaff_R13[-2] = param_3;
  uVar2 = unaff_R13[-2];
  uVar22 = *unaff_R13;
  *unaff_R13 = in_RAX;
  *(uint *)unaff_R13 = 0x2ad236e8;
  *(uint *)((longlong)unaff_R13 + 4) = 0;
  uVar4 = (uint)*unaff_R13 ^ 0x71d133e6;
  *unaff_R13 = (ulonglong)((uint)unaff_R13[-1] & (uVar9 + uVar7) - (uVar9 & uVar7) ^ 0xffffffff);
  uVar7 = (uint)*unaff_R13;
  *unaff_R13 = uVar5;
  unaff_R13[-1] = uVar3;
  unaff_R13[-2] = unaff_RSI;
  unaff_R13[-3] = uVar22;
  uVar8 = -uVar7;
  unaff_R13[-3] =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)SBORROW4(0,uVar7) * 0x800 | (ulonglong)bVar13 * 0x400
       | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar11 * 0x100 | (ulonglong)((int)uVar8 < 0) * 0x80
       | (ulonglong)(uVar8 == 0) * 0x40 | (ulonglong)bVar10 * 0x10 |
       (ulonglong)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 | (ulonglong)(uVar7 != 0) |
       (ulonglong)bVar20 * 0x200000 | (ulonglong)bVar18 * 0x40000;
  if ((unaff_R13[-3] & 1) == 0) {
    uVar3 = FUN_165cf606a(uVar4,uVar8,uVar2);
    return uVar3;
  }
  uVar3 = unaff_R13[-3];
  bVar17 = (uVar3 & 0x4000) != 0;
  bVar15 = (uVar3 & 0x800) != 0;
  bVar14 = (uVar3 & 0x400) != 0;
  bVar20 = (uVar3 & 0x200) != 0;
  bVar18 = (uVar3 & 0x100) != 0;
  bVar16 = (uVar3 & 0x80) != 0;
  bVar13 = (uVar3 & 0x40) != 0;
  bVar12 = (uVar3 & 0x10) != 0;
  bVar11 = (uVar3 & 4) != 0;
  bVar10 = (uVar3 & 1) != 0;
  bVar21 = (uVar3 & 0x200000) != 0;
  bVar19 = (uVar3 & 0x40000) != 0;
  unaff_R13[-3] =
       (ulonglong)bVar17 * 0x4000 | (ulonglong)bVar15 * 0x800 | (ulonglong)bVar14 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar18 * 0x100 | (ulonglong)bVar16 * 0x80 |
       (ulonglong)bVar13 * 0x40 | (ulonglong)bVar12 * 0x10 | (ulonglong)bVar11 * 4 |
       (ulonglong)bVar10 | (ulonglong)bVar21 * 0x200000 | (ulonglong)bVar19 * 0x40000;
  unaff_R13[-4] = -(lVar1 - uVar6);
  unaff_R13[-5] = (ulonglong)uVar7;
  unaff_R13[-6] =
       (ulonglong)bVar17 * 0x4000 | (ulonglong)bVar15 * 0x800 | (ulonglong)bVar14 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar18 * 0x100 | (ulonglong)bVar16 * 0x80 |
       (ulonglong)bVar13 * 0x40 | (ulonglong)bVar12 * 0x10 | (ulonglong)bVar11 * 4 |
       (ulonglong)bVar10 | (ulonglong)bVar21 * 0x200000 | (ulonglong)bVar19 * 0x40000;
  if ((unaff_R13[-3] & 0x41) != 0) {
    uVar3 = FUN_165cf606a(uVar4,uVar8,uVar2);
    return uVar3;
  }
  uVar3 = FUN_162b7382e();
  return uVar3;
}



// FUNCTION 14dd23400 FUN_14dd23400 body=135 status=ok
// SIG undefined FUN_14dd23400(void)

void FUN_14dd23400(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x162356961)(param_1,param_2);
  return;
}



// FUNCTION 14dd23489 FUN_14dd23489 body=113 status=ok
// SIG undefined FUN_14dd23489(void)

void FUN_14dd23489(undefined1 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char in_AL;
  undefined8 unaff_R13;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  longlong local_res18;
  
                    /* WARNING: Read-only address (ram,0x00014d7a85c5) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a85c5;
  }
  uRam000000014d7a85c5 = uVar1;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x100) != 0) * 0x100 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_retaddr;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x1066d42;
  FUN_14d85d504(param_1,*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14dd23528 FUN_14dd23528 body=167 status=ok
// SIG undefined FUN_14dd23528(void)

void FUN_14dd23528(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R15;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  uVar3 = param_1 - (local_res20 | param_1);
  uVar4 = uVar3 + local_res20;
  if (!CARRY8(uVar3,local_res20)) {
    uVar3 = (uVar4 ^ 0xffffffffffffffff) & (local_res20 | param_1);
    *(undefined8 *)(uVar3 - 8) = param_3;
    *(undefined8 *)(uVar3 - 0x10) = unaff_R15;
    *(undefined8 *)(uVar3 - 0x18) = unaff_R15;
    *(ulonglong *)(uVar3 - 0x20) = uVar2 ^ param_1;
    *(undefined8 *)(uVar3 - 0x28) = in_RAX;
    *(undefined4 *)(uVar3 - 0x28) = 0x177f88c3;
    *(undefined8 *)(uVar3 - 0x30) = unaff_R12;
    *(undefined8 *)(uVar3 - 0x38) = unaff_R12;
    *(code **)(uVar3 - 0x30) = FUN_14e00144e;
    FUN_166ae1fcc(uVar1,param_2,&DAT_166ae201b);
    return;
  }
  if (!CARRY8(uVar3,local_res20) && uVar4 != 0) {
    *(ulonglong *)(param_4 + 8) = ~(unaff_R13 & *(ulonglong *)(param_4 + 8));
    thunk_FUN_15b642ca5(param_3,local_res20 | param_1,uVar4,uVar1);
    return;
  }
  FUN_14e0013ab();
  return;
}



// FUNCTION 14dd235d0 FUN_14dd235d0 body=91 status=ok
// SIG undefined FUN_14dd235d0(void)

void FUN_14dd235d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  *(ulonglong *)(param_4 + 8) = ~(unaff_R13 & *(ulonglong *)(param_4 + 8));
  thunk_FUN_15b642ca5(unaff_retaddr,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dd2366a FUN_14dd2366a body=155 status=ok
// SIG undefined FUN_14dd2366a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd237ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd237b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd23767) */
/* WARNING: Removing unreachable block (ram,0x000162390cef) */
/* WARNING: Removing unreachable block (ram,0x000162390c7f) */
/* WARNING: Removing unreachable block (ram,0x00014dd23706) */

void FUN_14dd2366a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if (-1 < (longlong)
           ((~param_1 | *(ulonglong *)(unaff_RDI + -0x48)) &
            (*(ulonglong *)(unaff_RDI + -0x48) ^ 0xffffffffffffffff | param_1) ^ 0xffffffffffffffff)
     ) {
    FUN_162390b3d();
    return;
  }
  uVar6 = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + -8);
  pcVar5 = FUN_15b926638;
  FUN_15b926638(param_1);
  uVar2 = uVar2 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = param_4;
  *(ulonglong *)(uVar2 - 0x10) = uVar6;
  *(ulonglong *)(uVar2 - 0x18) = uVar6;
  uVar3 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(undefined4 *)(uVar2 - 0x28) = 0x4c2a52b7;
  *(uint *)(uVar2 - 0x28) = *(uint *)(uVar2 - 0x28) ^ 0x2fd3b67;
  *(undefined4 *)(uVar2 - 0x24) = 0;
  uVar6 = *(ulonglong *)(uVar2 - 0x28);
  *(code **)(uVar2 - 0x28) = pcVar5;
  *(undefined8 *)((uVar2 - 0x18) + (uVar6 ^ 0x4ed769d8)) = uVar3;
  lVar4 = *(longlong *)(uVar2 - 0x18);
  *(undefined1 **)(uVar2 - 8) = &LAB_14e10cd92;
  *(ulonglong *)(uVar2 - 0x18) = uVar1 ^ param_1;
  if (lVar4 != 0) {
    FUN_14e10cd37();
    return;
  }
  FUN_14e10cd37();
  return;
}



// FUNCTION 14dd23706 FUN_14dd23706 body=313 status=ok
// SIG undefined FUN_14dd23706(void)

/* WARNING: Removing unreachable block (ram,0x00014dd23767) */
/* WARNING: Removing unreachable block (ram,0x00014dd237ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd237b3) */

void FUN_14dd23706(void)

{
  FUN_1621aec5b(FUN_1621aec5b);
  return;
}



// FUNCTION 14dd2396d FUN_14dd2396d body=215 status=ok
// SIG undefined FUN_14dd2396d(void)

void FUN_14dd2396d(void)

{
  return;
}



// FUNCTION 14dd23a47 FUN_14dd23a47 body=318 status=ok
// SIG undefined FUN_14dd23a47(void)

/* WARNING: Removing unreachable block (ram,0x00014dd23aeb) */
/* WARNING: Removing unreachable block (ram,0x00014dd23af1) */
/* WARNING: Removing unreachable block (ram,0x00016511200a) */

undefined8 FUN_14dd23a47(void)

{
  undefined8 uVar1;
  longlong in_R9;
  longlong unaff_R15;
  
  *(ulonglong *)(in_R9 + 0x10) = ~(unaff_R15 + *(longlong *)(in_R9 + 0x10) + 1U);
  uVar1 = FUN_16511200a();
  return uVar1;
}



// FUNCTION 14dd23cc7 FUN_14dd23cc7 body=323 status=ok
// SIG undefined FUN_14dd23cc7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd23cc7(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = ~(unaff_RBP & (param_2 ^ 0xffffffffffffffff | in_RAX));
  uVar2 = *(ulonglong *)(0x29b9 - (~(unaff_R12 - 0x2a00U) + 2));
  uVar2 = ~((~(~in_RAX & uVar2) + uVar2) - in_RAX) |
          0xffffffffffffffff - (0xffffffffffffffff - uVar2 | in_RAX);
  FUN_15653e6b7();
  *(longlong *)(uVar2 + 8) = unaff_RBX - *(longlong *)(uVar2 + 8);
  *(ulonglong *)(uVar2 + 8) = ~*(ulonglong *)(uVar2 + 8);
  FUN_15672f0ff(param_1,uVar1,param_3,0xffffffffdebe6311);
  return;
}



// FUNCTION 14dd23e0a FUN_14dd23e0a body=154 status=ok
// SIG undefined FUN_14dd23e0a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd23e79) */

void FUN_14dd23e0a(void)

{
  code *pcVar1;
  ushort *in_RAX;
  undefined8 unaff_RDI;
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
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  undefined8 *local_res20;
  
  *in_RAX = (-0x101 - (*in_RAX | 0xfeff)) + *in_RAX;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x200) != 0;
  bVar7 = (uStackX_18 & 0x100) != 0;
  bVar6 = (uStackX_18 & 0x80) != 0;
  bVar5 = (uStackX_18 & 0x40) != 0;
  bVar4 = (uStackX_18 & 0x10) != 0;
  bVar3 = (uStackX_18 & 4) != 0;
  bVar2 = (uStackX_18 & 1) != 0;
  bVar14 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr);
  *local_res20 = uStackX_10;
  local_res20[-1] = uStackX_10;
  local_res20[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *local_res20 = 0x2075450;
  local_res20[-1] = unaff_RDI;
  local_res20[-2] = unaff_RDI;
  local_res20[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14dd23e79 FUN_14dd23e79 body=145 status=ok
// SIG undefined FUN_14dd23e79(void)

void FUN_14dd23e79(void)

{
  FUN_16219bb75();
  return;
}



// FUNCTION 14dd23f0c FUN_14dd23f0c body=140 status=ok
// SIG undefined FUN_14dd23f0c(void)

void FUN_14dd23f0c(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0xfffffffff9ba4767 + unaff_RDI) = param_1;
  uVar1 = *(undefined8 *)(&stack0xfffffffff9ba4767 + unaff_RDI);
  *(undefined8 *)(&stack0xfffffffff9ba4767 + unaff_RDI) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff9ba4767 + unaff_RDI) = 0x10543967;
  *(uint *)(&stack0xfffffffff9ba4767 + unaff_RDI) =
       *(uint *)(&stack0xfffffffff9ba4767 + unaff_RDI) ^ 0x10543967;
  *(undefined4 *)(&stack0xfffffffff9ba476b + unaff_RDI) = 0;
  FUN_162e64914(uVar1,param_2 + unaff_RBX + (-1 - (~param_2 | ~unaff_RBX)) * -2);
  return;
}



// FUNCTION 14dd24176 FUN_14dd24176 body=165 status=ok
// SIG undefined FUN_14dd24176(void)

/* WARNING: Removing unreachable block (ram,0x00014dd24209) */

void FUN_14dd24176(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_15708cbc3(param_1,FUN_15708cbc3,0xf685550,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14dd2421c FUN_14dd2421c body=139 status=ok
// SIG undefined FUN_14dd2421c(void)

void FUN_14dd2421c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R15;
  undefined8 local_res18;
  
  FUN_164be6dab(1,param_2,local_res18 + unaff_R15);
  return;
}



// FUNCTION 14dd242b1 FUN_14dd242b1 body=141 status=ok
// SIG undefined FUN_14dd242b1(void)

void FUN_14dd242b1(void)

{
  FUN_14de7992b();
  return;
}



// FUNCTION 14dd2433e FUN_14dd2433e body=145 status=ok
// SIG undefined FUN_14dd2433e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd243c4) */
/* WARNING: Removing unreachable block (ram,0x00014dd243cf) */
/* WARNING: Removing unreachable block (ram,0x00014dd244c5) */
/* WARNING: Removing unreachable block (ram,0x00014dd244ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd243ca) */

void FUN_14dd2433e(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  
  FUN_15b72a920(param_1,~(((param_1 - 1) - ~-(param_2 | param_1)) + param_2) &
                        (~(unaff_RBP & param_1) + param_1) - ~unaff_RBP,FUN_15b72a920,param_4);
  return;
}



// FUNCTION 14dd243cf FUN_14dd243cf body=308 status=ok
// SIG undefined FUN_14dd243cf(void)

void FUN_14dd243cf(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  ulonglong unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffc0ca2a2 + param_3);
  uVar4 = *puVar1;
  *puVar1 = unaff_RBP;
  uVar5 = *puVar1;
  *puVar1 = unaff_RDI;
  *(undefined8 *)(&stack0xfffffffffc0ca29a + param_3) = param_2;
  *(ulonglong *)(&stack0xfffffffffc0ca292 + param_3) = unaff_retaddr;
  *(undefined1 **)(&stack0xfffffffffc0ca28a + param_3) = &stack0xfffffffffc0ca292 + param_3;
  uVar6 = *(ulonglong *)(&stack0xfffffffffc0ca292 + param_3);
  *(undefined8 *)(&stack0xfffffffffc0ca292 + param_3) = 0x14dd2444e;
  FUN_165d5baeb(param_1,*(longlong *)(&stack0xfffffffffc0ca28a + param_3) + 0x18,uVar4);
  *(ulonglong *)(&stack0xfffffffffc0ca292 + param_3) =
       ~(in_R10 & (~(unaff_R13 + unaff_retaddr + (unaff_R13 & unaff_retaddr) * -2) & uVar6 | uVar5))
  ;
  plVar2 = (longlong *)(&stack0xfffffffffc0ca292 + param_3);
  *(int *)plVar2 = 0;
  *(int *)plVar2 = (int)*plVar2 + -0x4cc7a817;
  *(undefined4 *)(&stack0xfffffffffc0ca296 + param_3) = 0xffffffff;
  if (*plVar2 == -0x143cc69d) {
    FUN_156a9801b();
    return;
  }
  puVar1 = (ulonglong *)(&stack0xfffffffffc0ca292 + param_3);
  lVar3 = *(longlong *)(unaff_RSI + -0x78);
  *puVar1 = 0x4483258e;
  *puVar1 = *puVar1 ^ 0x4483258e;
  *puVar1 = *puVar1 - lVar3;
  FUN_16154c9a3(lVar3,FUN_16154c9a3);
  return;
}



// FUNCTION 14dd247f1 FUN_14dd247f1 body=293 status=ok
// SIG undefined FUN_14dd247f1(void)

void FUN_14dd247f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1621c8f50(FUN_1621c8f50,param_2,param_3);
  return;
}



// FUNCTION 14dd2488f FUN_14dd2488f body=208 status=ok
// SIG undefined FUN_14dd2488f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2494f) */
/* WARNING: Removing unreachable block (ram,0x00014dd24960) */
/* WARNING: Removing unreachable block (ram,0x00014dd24a6d) */
/* WARNING: Removing unreachable block (ram,0x00014dd24a72) */
/* WARNING: Removing unreachable block (ram,0x00014dd24a78) */
/* WARNING: Removing unreachable block (ram,0x00014dd24a7d) */
/* WARNING: Removing unreachable block (ram,0x00014dd24955) */

void FUN_14dd2488f(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  FUN_162d11a16(~(((unaff_RBP ^ 0xffffffffffffffff) + uVar1) -
                  ((unaff_RBP ^ 0xffffffffffffffff) & uVar1) & (~uVar1 | unaff_RBP)),
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,FUN_162d11a16);
  return;
}



// FUNCTION 14dd24960 FUN_14dd24960 body=284 status=ok
// SIG undefined FUN_14dd24960(void)

/* WARNING: Removing unreachable block (ram,0x00014dd24a7d) */

void FUN_14dd24960(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong in_stack_00000008;
  undefined8 uStackX_10;
  undefined8 uStack_10;
  
  uStack_10 = param_3;
  FUN_1618b0a5c(param_1,uStackX_10,&stack0x00000000,param_4,in_stack_00000008 ^ param_1);
  puVar1 = (undefined8 *)((longlong)&uStack_10 + (param_1 - unaff_RSI));
  *puVar1 = *(undefined8 *)(unaff_R13 + -0x78);
  *puVar1 = *puVar1;
  if (-1 < *(longlong *)(unaff_R13 + -0x28)) {
    FUN_14da4551b();
    return;
  }
  FUN_14da4551b();
  return;
}



// FUNCTION 14dd24a7d FUN_14dd24a7d body=136 status=ok
// SIG undefined FUN_14dd24a7d(void)

void FUN_14dd24a7d(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte unaff_BPL;
  
  FUN_162920c0a(FUN_162920c0a,param_2,param_3,
                CONCAT71((int7)((ulonglong)param_4 >> 8),~unaff_BPL & (param_1 | 0x44)) | 0xff);
  return;
}



// FUNCTION 14dd24c4f FUN_14dd24c4f body=172 status=ok
// SIG undefined FUN_14dd24c4f(void)

void FUN_14dd24c4f(void)

{
  FUN_1572a805b();
  FUN_14dd24cfe();
  return;
}



// FUNCTION 14dd24cfe FUN_14dd24cfe body=7 status=ok
// SIG undefined FUN_14dd24cfe(void)

void FUN_14dd24cfe(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd24da9 FUN_14dd24da9 body=123 status=ok
// SIG undefined FUN_14dd24da9(void)

void FUN_14dd24da9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165aec9dc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd24f4a FUN_14dd24f4a body=152 status=ok
// SIG undefined FUN_14dd24f4a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd24fbf) */

void FUN_14dd24f4a(void)

{
  undefined8 local_res8;
  
  FUN_1669842d5(local_res8,0x6bfc9013);
  return;
}



// FUNCTION 14dd24fe3 FUN_14dd24fe3 body=180 status=ok
// SIG undefined FUN_14dd24fe3(void)

void FUN_14dd24fe3(undefined8 param_1,longlong param_2)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_166d8c700(in_stack_00000008,unaff_RDI - param_2);
  FUN_14dd25099();
  return;
}



// FUNCTION 14dd25099 FUN_14dd25099 body=164 status=ok
// SIG undefined FUN_14dd25099(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2513d) */

void FUN_14dd25099(undefined8 param_1)

{
  longlong unaff_RBP;
  longlong lVar1;
  undefined8 uStackX_10;
  
  lVar1 = (unaff_RBP - 1U) - ~uStackX_10;
  if (unaff_RBP - 1U < ~uStackX_10) {
    FUN_164f4ae91(param_1,lVar1);
    return;
  }
  FUN_164f4ae91(param_1,lVar1);
  return;
}



// FUNCTION 14dd2513d FUN_14dd2513d body=109 status=ok
// SIG undefined FUN_14dd2513d(void)

void FUN_14dd2513d(void)

{
  return;
}



// FUNCTION 14dd251dd FUN_14dd251dd body=316 status=ok
// SIG undefined FUN_14dd251dd(void)

void FUN_14dd251dd(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_15b9eb068(param_1,~(0xffffffffffffffff -
                          (0xffffffffffffffff - unaff_RBX & *(ulonglong *)(param_1 + -0x90)) &
                         ~unaff_RBX));
  FUN_1568f70ac();
  return;
}



// FUNCTION 14dd253a6 FUN_14dd253a6 body=144 status=ok
// SIG undefined FUN_14dd253a6(void)

void FUN_14dd253a6(void)

{
  return;
}



// FUNCTION 14dd25448 FUN_14dd25448 body=111 status=ok
// SIG undefined FUN_14dd25448(void)

void FUN_14dd25448(void)

{
  return;
}



// FUNCTION 14dd2554e FUN_14dd2554e body=274 status=ok
// SIG undefined FUN_14dd2554e(void)

void FUN_14dd2554e(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  int unaff_EDI;
  ulonglong unaff_retaddr;
  int in_stack_00000008;
  int local_res18;
  undefined4 local_res1c;
  
  uVar1 = *(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | in_RAX;
  *(ulonglong *)(param_4 + 8) =
       ~((~((unaff_retaddr ^ 0x3f934ce9) + in_RAX) | uVar1) & *(ulonglong *)(param_4 + 8));
  FUN_1654b6ad8();
  *(ulonglong *)
   (CONCAT44(local_res1c,(-1 - (unaff_EDI - (-1 - in_stack_00000008))) + local_res18) &
   0x7fffffffffffffff) = param_2 ^ 0xab9f8da33fe72828;
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dd256fd FUN_14dd256fd body=325 status=ok
// SIG undefined FUN_14dd256fd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd258e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd2587e) */
/* WARNING: Removing unreachable block (ram,0x000166def5f4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd256fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 in_EAX;
  sbyte sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 *unaff_RDI;
  uint uVar5;
  uint unaff_R14D;
  ulonglong unaff_R15;
  byte in_AF;
  longlong local_res18;
  
  *unaff_RDI = in_EAX;
  uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),2) ^ 0x1f;
  sVar2 = (sbyte)uVar3;
  uVar4 = unaff_ESI >> sVar2;
  if ((sVar2 == 0 || -1 < (int)uVar4) && (sVar2 != 0 && -1 >= (int)uVar4)) {
    FUN_15b155b91(uVar3,uVar4,param_1,param_4);
    if (unaff_R15 != (*(ulonglong *)(local_res18 + -0x90) | unaff_R15)) {
      FUN_14d81ded3();
      return;
    }
    FUN_14d81ded3();
    return;
  }
  iVar1 = -((int)((uint)((uint)param_1 < unaff_R14D) << 0x1f) >> 0x1f);
  uVar5 = uVar4;
  if (-1 < (int)(((uint)(iVar1 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                 (uint)(POPCOUNT(iVar1) == '\0') * 4) << 0x19)) {
    uVar5 = uVar4 + 1;
  }
  iVar1 = *(int *)(unaff_RBP + -4);
  *(undefined4 *)(unaff_RBP + -4) = 0;
  *(int *)(unaff_RBP + -4) = *(int *)(unaff_RBP + -4) - (iVar1 + uVar5);
  *(int *)(unaff_RBP + -4) = -*(int *)(unaff_RBP + -4);
  FUN_16632f819(param_1,uVar4,param_3,param_4);
  return;
}



// FUNCTION 14dd258f8 FUN_14dd258f8 body=147 status=ok
// SIG undefined FUN_14dd258f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2598c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd258f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uStackX_8;
  undefined8 in_stack_00000018;
  
  if (param_5 == param_1) {
    FUN_161a0ba55(in_stack_00000018,param_2,uStackX_8,FUN_161a0ba55);
    return;
  }
  FUN_1621dc902();
  return;
}



// FUNCTION 14dd2598c FUN_14dd2598c body=148 status=ok
// SIG undefined FUN_14dd2598c(void)

void FUN_14dd2598c(undefined8 param_1,undefined8 param_2)

{
  FUN_1648682fb(param_1,param_2,FUN_1648682fb);
  return;
}



// FUNCTION 14dd25a20 FUN_14dd25a20 body=176 status=ok
// SIG undefined FUN_14dd25a20(void)

void FUN_14dd25a20(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 in_EAX;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8 [4];
  
  lVar2 = -(unaff_RBX ^ param_3);
  *(undefined4 *)((longlong)local_res8 + lVar2) = in_EAX;
  *(int *)((longlong)local_res8 + lVar2) = *(int *)((longlong)local_res8 + lVar2) + 0x31176b1b;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  *(ulonglong *)((longlong)local_res8 + lVar2) = uVar1;
  lVar3 = *(longlong *)((longlong)local_res8 + lVar2) + unaff_R15 + (uVar1 & unaff_R15) * -2;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar4 = (uVar1 + unaff_R15) - (uVar1 & unaff_R15);
  *(undefined8 *)((longlong)local_res8 + lVar2) = unaff_R14;
  *(undefined8 *)((longlong)local_res8 + lVar2 + -8) = unaff_R14;
  *(undefined1 **)((longlong)local_res8 + lVar2) = &LAB_14dd25ad1;
  (*(code *)0x1612bf33b)(lVar3,uVar4,~(uVar1 & unaff_R15) & uVar4,lVar3);
  return;
}



// FUNCTION 14dd25b6b FUN_14dd25b6b body=3 status=ok
// SIG undefined FUN_14dd25b6b(void)

void FUN_14dd25b6b(void)

{
  return;
}



// FUNCTION 14dd25dd2 FUN_14dd25dd2 body=131 status=ok
// SIG undefined FUN_14dd25dd2(void)

void FUN_14dd25dd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_165329074(unaff_retaddr,FUN_165329074,param_3,param_4);
  return;
}



// FUNCTION 14dd25f08 FUN_14dd25f08 body=114 status=ok
// SIG undefined FUN_14dd25f08(void)

void FUN_14dd25f08(int param_1,undefined8 param_2)

{
  int in_EAX;
  
  FUN_165b6cdfb(FUN_165b6cdfb,param_2,param_1 + in_EAX);
  return;
}



// FUNCTION 14dd2602e FUN_14dd2602e body=565 status=ok
// SIG undefined FUN_14dd2602e(void)

void FUN_14dd2602e(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 unaff_R15;
  ulonglong uVar11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar10 = (uint)*(undefined8 *)(param_1 + -0x90) ^ (uint)unaff_RBX;
  *(longlong *)(&stack0xfffffffffc1093c2 + unaff_RSI) = param_1;
  *(longlong *)(&stack0xfffffffffc1093ba + unaff_RSI) = param_1;
  (&stack0xfffffffffc1093ba)[unaff_RSI] = 0xb0;
  lVar4 = *(longlong *)(&stack0xfffffffffc1093c2 + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffffc1093c2 + unaff_RSI) = *(undefined8 *)(lVar4 + -0x58);
  uVar9 = *(ulonglong *)(&stack0xfffffffffc1093c2 + unaff_RSI) ^ unaff_RBX;
  uVar5 = *(undefined8 *)(lVar4 + -0x88);
  *(undefined8 *)(&stack0xfffffffffc1093c2 + unaff_RSI) = 0x14dd260c2;
  uVar7 = FUN_161bb90a6(lVar4,FUN_161bb90a6,uVar5);
  uVar11 = *(ulonglong *)(&stack0xfffffffffc1093ca + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffffc1093ca + unaff_RSI) = uVar9;
  uVar10 = ~(uint)uVar11 | ~uVar10;
  uVar5 = *(undefined8 *)(&stack0xfffffffffc1093d2 + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffffc1093d2 + unaff_RSI) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffffc1093da + unaff_RSI) = uVar5;
  *(undefined8 *)(&stack0xfffffffffc1093d2 + unaff_RSI) = uVar5;
  puVar6 = (ulonglong *)(&stack0xfffffffffc1093ca + unaff_RSI);
  *puVar6 = (ulonglong)puVar6;
  uVar11 = *puVar6;
  uVar9 = *puVar6;
  *puVar6 = *puVar6 + 8;
  uVar1 = *puVar6;
  uVar2 = *puVar6;
  uVar3 = *puVar6;
  puVar6 = (ulonglong *)*puVar6;
  *puVar6 = (ulonglong)((uVar7 + uVar10) - (uVar7 & uVar10));
  *(ulonglong *)(&stack0xfffffffffc1093ca + unaff_RSI) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8(uVar9,8) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar1 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0xfffffffffffffff7 < uVar11) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  puVar8 = puVar6 + 1;
  if ((*(ushort *)(&stack0xfffffffffc1093ca + unaff_RSI) & 0x400) != 0) {
    puVar8 = puVar6 + -1;
  }
  uVar9 = *(ulonglong *)(&stack0xfffffffffc1093ca + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffffc1093ca + unaff_RSI) = unaff_R15;
  *(ulonglong *)(&stack0xfffffffffc1093c2 + unaff_RSI) = unaff_RBX;
  uVar11 = (longlong)puVar8 - (longlong)(&stack0xfffffffffc1093d2 + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffffc1093ba + unaff_RSI) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 |
       (ulonglong)SBORROW8((longlong)puVar8,(longlong)(&stack0xfffffffffc1093d2 + unaff_RSI)) *
       0x800 | (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200
       | (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar11 < 0) * 0x80 |
       (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(puVar8 < &stack0xfffffffffc1093d2 + unaff_RSI) |
       (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  uVar11 = *(ulonglong *)(&stack0xfffffffffc1093ba + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffffc1093ba + unaff_RSI) =
       (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
       (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
  FUN_161aa343b();
  return;
}



// FUNCTION 14dd26152 FUN_14dd26152 body=111 status=ok
// SIG undefined FUN_14dd26152(void)

void FUN_14dd26152(undefined8 param_1)

{
  FUN_15b269f61(param_1,FUN_15b269f61);
  return;
}



// FUNCTION 14dd261c2 FUN_14dd261c2 body=192 status=ok
// SIG undefined FUN_14dd261c2(void)

void FUN_14dd261c2(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_16598947e(param_1,*(ulonglong *)(param_1 + -0x58) + unaff_RBX,0xffffffffffffffa8,
                (*(ulonglong *)(param_1 + -0x58) & unaff_RBX) << 1);
  return;
}



// FUNCTION 14dd26283 FUN_14dd26283 body=102 status=ok
// SIG undefined FUN_14dd26283(void)

undefined8 FUN_14dd26283(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_R15;
  
  *(ulonglong *)(param_2 + 8) =
       (unaff_R15 - (*(ulonglong *)(param_2 + 8) | unaff_R15)) + *(longlong *)(param_2 + 8);
  return in_RAX;
}



// FUNCTION 14dd265b1 FUN_14dd265b1 body=47 status=ok
// SIG undefined FUN_14dd265b1(void)

ulonglong FUN_14dd265b1(void)

{
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  return unaff_retaddr ^ unaff_R15;
}



// FUNCTION 14dd26633 FUN_14dd26633 body=32 status=ok
// SIG undefined FUN_14dd26633(void)

void FUN_14dd26633(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_10;
  
  (*(code *)&LAB_15b410324)(param_1,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dd2681e FUN_14dd2681e body=192 status=ok
// SIG undefined FUN_14dd2681e(void)

undefined8 FUN_14dd2681e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1647c012e(FUN_1647c012e,param_2,ProcessEnvironmentBlock);
  return uVar1;
}



// FUNCTION 14dd26a32 FUN_14dd26a32 body=388 status=ok
// SIG undefined FUN_14dd26a32(void)

/* WARNING: Removing unreachable block (ram,0x00014dd26b41) */

void FUN_14dd26a32(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x80);
  FUN_156dd0677(param_1,~param_2 & unaff_RDI);
  uVar1 = *(ulonglong *)((uVar1 ^ unaff_RBP) - 0x88);
  if (uVar1 + param_1 < (uVar1 & param_1) * 2) {
    FUN_1618af886();
    return;
  }
  FUN_16155f983(param_1);
  return;
}



// FUNCTION 14dd26c83 FUN_14dd26c83 body=8 status=ok
// SIG undefined FUN_14dd26c83(void)

void FUN_14dd26c83(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd26e4d FUN_14dd26e4d body=151 status=ok
// SIG undefined FUN_14dd26e4d(void)

void FUN_14dd26e4d(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)&LAB_15b036d7f)
            (&LAB_15b036d7f,param_2,~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP,
             -1 - (param_4 & unaff_RBP |
                  0xffffffffffffffff - ((~(param_1 & unaff_RBP) + unaff_RBP) - ~param_1)));
  return;
}



// FUNCTION 14dd26ee4 FUN_14dd26ee4 body=449 status=ok
// SIG undefined FUN_14dd26ee4(void)

/* WARNING: Removing unreachable block (ram,0x00014db18e0f) */
/* WARNING: Removing unreachable block (ram,0x00014dd270aa) */
/* WARNING: Removing unreachable block (ram,0x00014dd270b0) */
/* WARNING: Removing unreachable block (ram,0x00014dd27147) */
/* WARNING: Removing unreachable block (ram,0x00014dd2715f) */
/* WARNING: Removing unreachable block (ram,0x00014dd27158) */
/* WARNING: Removing unreachable block (ram,0x0001566cd0df) */
/* WARNING: Removing unreachable block (ram,0x0001566cd189) */
/* WARNING: Removing unreachable block (ram,0x0001566cd195) */
/* WARNING: Removing unreachable block (ram,0x0001566cd1a8) */
/* WARNING: Removing unreachable block (ram,0x0001566cd1b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd27010) */
/* WARNING: Removing unreachable block (ram,0x00014dd2709f) */
/* WARNING: Removing unreachable block (ram,0x00014dd26ffa) */

undefined8 FUN_14dd26ee4(void)

{
  undefined8 uVar1;
  
  FUN_160cd7a31();
  uVar1 = FUN_157017cd0();
  return uVar1;
}



// FUNCTION 14dd270b0 FUN_14dd270b0 body=242 status=ok
// SIG undefined FUN_14dd270b0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd27147) */
/* WARNING: Removing unreachable block (ram,0x00014dd2715f) */
/* WARNING: Removing unreachable block (ram,0x00014dd27158) */
/* WARNING: Removing unreachable block (ram,0x0001566cd195) */
/* WARNING: Removing unreachable block (ram,0x0001566cd1b4) */
/* WARNING: Removing unreachable block (ram,0x0001566cd1a8) */

void FUN_14dd270b0(void)

{
  longlong unaff_RBP;
  char in_R10B;
  byte unaff_R12B;
  
  *(undefined1 *)(unaff_RBP + 0x108) = 0;
  *(char *)(unaff_RBP + 0x108) = *(char *)(unaff_RBP + 0x108) + in_R10B;
  *(byte *)(unaff_RBP + 0x108) =
       (~*(byte *)(unaff_RBP + 0x108) | unaff_R12B) + *(char *)(unaff_RBP + 0x108) + 1 ^ 0xff;
  FUN_15b39ead1();
  return;
}



// FUNCTION 14dd271fc FUN_14dd271fc body=140 status=ok
// SIG undefined FUN_14dd271fc(void)

void FUN_14dd271fc(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_R11;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  *param_1 = ~*param_1;
  *param_1 = *param_1 & ~unaff_R15;
  *param_1 = ~*param_1;
  *param_1 = ~(in_R11 & *param_1);
  FUN_14e0431f1(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14dd27288 FUN_14dd27288 body=136 status=ok
// SIG undefined FUN_14dd27288(void)

void FUN_14dd27288(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  param_6 = param_6 ^ param_1;
  *(undefined8 *)(param_6 - 0x10) = local_res10;
  *(undefined8 *)(param_6 - 0x18) = param_4;
  *(undefined8 *)(param_6 - 8) = *(undefined8 *)(param_6 - 0x18);
  (*(code *)0x1627aff92)(local_res20,param_2,*(undefined8 *)(param_6 - 0x10),0x1627aff92);
  return;
}



// FUNCTION 14dd2776a FUN_14dd2776a body=216 status=ok
// SIG undefined FUN_14dd2776a(void)

void FUN_14dd2776a(void)

{
  FUN_14e0f1be9();
  return;
}



// FUNCTION 14dd27976 FUN_14dd27976 body=147 status=ok
// SIG undefined FUN_14dd27976(void)

/* WARNING: Removing unreachable block (ram,0x00014dd27a09) */

void FUN_14dd27976(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  ushort local_res8;
  longlong lStackX_10;
  
  if (-1 < (short)((local_res8 | 0x100) - 0x100)) {
    FUN_1667e01bb();
    return;
  }
  *(undefined8 *)(lStackX_10 + -8) = unaff_retaddr;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R13;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R13;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_RBP;
  plVar1 = (longlong *)(lStackX_10 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  lVar2 = *plVar1;
  *(undefined1 **)(lStackX_10 + -0x20) = &LAB_1667e0247;
  *(undefined8 *)(lStackX_10 + -8) = *(undefined8 *)(lStackX_10 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x0001667e022a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lStackX_10 + -0x10))(param_1,lVar2);
  return;
}



// FUNCTION 14dd27a09 FUN_14dd27a09 body=131 status=ok
// SIG undefined FUN_14dd27a09(void)

void FUN_14dd27a09(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_R15;
  
  (*(code *)0x161353a18)
            (param_1,param_2,
             ~((~(~unaff_R15 | param_1) | ~param_1 | unaff_R15) + (~unaff_R15 | param_1) + 1),
             param_4 >> 0x15);
  return;
}



// FUNCTION 14dd27a8d FUN_14dd27a8d body=284 status=ok
// SIG undefined FUN_14dd27a8d(void)

/* WARNING: Removing unreachable block (ram,0x000166a400d3) */
/* WARNING: Removing unreachable block (ram,0x000166a400d9) */
/* WARNING: Removing unreachable block (ram,0x000166a40166) */
/* WARNING: Removing unreachable block (ram,0x000166a4016c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f0e3e) */
/* WARNING: Removing unreachable block (ram,0x00014d8f0ec3) */
/* WARNING: Removing unreachable block (ram,0x00014d8f0ec9) */
/* WARNING: Removing unreachable block (ram,0x000162ea9b17) */
/* WARNING: Removing unreachable block (ram,0x00014dd27b1e) */
/* WARNING: Removing unreachable block (ram,0x0001616519ec) */
/* WARNING: Removing unreachable block (ram,0x00014dd27b24) */

undefined8 FUN_14dd27a8d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166a40042();
  return uVar1;
}



// FUNCTION 14dd27ba9 FUN_14dd27ba9 body=168 status=ok
// SIG undefined FUN_14dd27ba9(void)

void FUN_14dd27ba9(void)

{
  FUN_14dde536f();
  return;
}



// FUNCTION 14dd27ce2 FUN_14dd27ce2 body=329 status=ok
// SIG undefined FUN_14dd27ce2(void)

void FUN_14dd27ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162be082d(FUN_162be082d,&stack0xfffffffffffffff0,param_3);
  return;
}



// FUNCTION 14dd27e31 FUN_14dd27e31 body=80 status=ok
// SIG undefined FUN_14dd27e31(void)

void FUN_14dd27e31(void)

{
  return;
}



// FUNCTION 14dd27f46 FUN_14dd27f46 body=156 status=ok
// SIG undefined FUN_14dd27f46(void)

void FUN_14dd27f46(void)

{
  return;
}



// FUNCTION 14dd27fe4 FUN_14dd27fe4 body=133 status=ok
// SIG undefined FUN_14dd27fe4(void)

undefined8 FUN_14dd27fe4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd2806a FUN_14dd2806a body=384 status=ok
// SIG undefined FUN_14dd2806a(void)

void FUN_14dd2806a(void)

{
  FUN_156b43f18();
  return;
}



// FUNCTION 14dd281eb FUN_14dd281eb body=171 status=ok
// SIG undefined FUN_14dd281eb(void)

undefined8 FUN_14dd281eb(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar3 = *(undefined8 *)(local_res18 + -0x20);
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_retaddr;
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0x339e159a;
  *puVar1 = *puVar1 ^ 0x339e159a;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x28) = uVar3;
  *(undefined8 *)(local_res18 + -0x30) = uVar3;
  *(undefined8 *)(local_res18 + -0x38) = uVar3;
  *(code **)(local_res18 + -0x28) = FUN_14dd28298;
  *(undefined1 **)(local_res18 + -0x30) = &LAB_1565218a1;
  return uVar2;
}



// FUNCTION 14dd28298 FUN_14dd28298 body=160 status=ok
// SIG undefined FUN_14dd28298(void)

void FUN_14dd28298(void)

{
  FUN_165eb8cc1();
  return;
}



// FUNCTION 14dd28339 FUN_14dd28339 body=143 status=ok
// SIG undefined FUN_14dd28339(void)

/* WARNING: Removing unreachable block (ram,0x00014dd283c8) */

void FUN_14dd28339(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-~param_1 - ((~*(ulonglong *)(unaff_RDI + -0x48) & param_1) + 2) <
      *(ulonglong *)(unaff_RDI + -0x48)) {
    FUN_14e0ba81f();
    return;
  }
  FUN_14e0ba81f();
  return;
}



// FUNCTION 14dd283c8 thunk_FUN_14dd283ce body=5 status=ok
// SIG undefined thunk_FUN_14dd283ce(void)

void thunk_FUN_14dd283ce(void)

{
  FUN_160df886e();
  return;
}



// FUNCTION 14dd283ce FUN_14dd283ce body=155 status=ok
// SIG undefined FUN_14dd283ce(void)

void FUN_14dd283ce(void)

{
  FUN_160df886e();
  return;
}



// FUNCTION 14dd2850a FUN_14dd2850a body=349 status=ok
// SIG undefined FUN_14dd2850a(void)

/* WARNING: Removing unreachable block (ram,0x0001616e026d) */
/* WARNING: Removing unreachable block (ram,0x00015711730f) */
/* WARNING: Removing unreachable block (ram,0x000157117315) */
/* WARNING: Removing unreachable block (ram,0x000157117419) */
/* WARNING: Removing unreachable block (ram,0x00015711741e) */
/* WARNING: Removing unreachable block (ram,0x000157117424) */
/* WARNING: Removing unreachable block (ram,0x000161849b1b) */
/* WARNING: Removing unreachable block (ram,0x00014dd285a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd285ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd285b2) */
/* WARNING: Removing unreachable block (ram,0x00014dd28596) */

undefined8 FUN_14dd2850a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1616e026d();
  return uVar1;
}



// FUNCTION 14dd2866d thunk_FUN_14dd28673 body=5 status=ok
// SIG undefined thunk_FUN_14dd28673(void)

char thunk_FUN_14dd28673(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  ulonglong unaff_R15;
  
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = (param_1 - 1) - ~unaff_RSI;
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) =
       *(longlong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) +
       ((0xffffffffffffffff - param_1 | in_R11) + param_1 + 1) * -2;
  uVar2 = *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = 0x14dd286f0;
  cVar1 = FUN_156633354();
  uVar2 = ~((param_1 | uVar2) & ~(uVar2 & ~unaff_R15));
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6c6 + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6be + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6b6 + unaff_RBP) = uVar2;
  *(code **)(&stack0xfffffffff3e5a6c6 + unaff_RBP) = FUN_14dd28797;
  *(undefined1 **)(&stack0xfffffffff3e5a6be + unaff_RBP) = &LAB_1570a42f0;
  return cVar1 >> 0x15;
}



// FUNCTION 14dd28673 FUN_14dd28673 body=290 status=ok
// SIG undefined FUN_14dd28673(void)

char FUN_14dd28673(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R11;
  ulonglong unaff_R15;
  
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = (param_1 - 1) - ~unaff_RSI;
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) =
       *(longlong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) +
       ((0xffffffffffffffff - param_1 | in_R11) + param_1 + 1) * -2;
  uVar2 = *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = 0x14dd286f0;
  cVar1 = FUN_156633354();
  uVar2 = ~((param_1 | uVar2) & ~(uVar2 & ~unaff_R15));
  *(ulonglong *)(&stack0xfffffffff3e5a6ce + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6c6 + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6be + unaff_RBP) = uVar2;
  *(ulonglong *)(&stack0xfffffffff3e5a6b6 + unaff_RBP) = uVar2;
  *(code **)(&stack0xfffffffff3e5a6c6 + unaff_RBP) = FUN_14dd28797;
  *(undefined1 **)(&stack0xfffffffff3e5a6be + unaff_RBP) = &LAB_1570a42f0;
  return cVar1 >> 0x15;
}



// FUNCTION 14dd28797 FUN_14dd28797 body=148 status=ok
// SIG undefined FUN_14dd28797(void)

/* WARNING: Removing unreachable block (ram,0x00014dd288cd) */

undefined8 FUN_14dd28797(ushort param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 in_RAX;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_RBX;
  short unaff_DI;
  undefined8 in_R10;
  ulonglong uVar12;
  undefined8 in_R11;
  code *pcVar13;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ushort unaff_retaddr;
  longlong alStackX_8 [4];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  undefined8 uStack_8;
  
  uVar5 = *(undefined8 *)((longlong)alStackX_8 + unaff_R12);
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12) = in_R10;
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + -8) = in_RAX;
  *(undefined4 *)((longlong)alStackX_8 + unaff_R12 + -8) = 0x1a52d6db;
  *(undefined4 *)((longlong)alStackX_8 + unaff_R12 + -4) = 0;
  uVar12 = *(ulonglong *)((longlong)alStackX_8 + unaff_R12 + -8) ^ 0x1a52d6d3;
  *(undefined8 *)((longlong)alStackX_8 + uVar12 + unaff_R12 + 8) = 0;
  plVar2 = (longlong *)((longlong)alStackX_8 + uVar12 + unaff_R12 + 8);
  *plVar2 = *plVar2 + param_2;
  uVar9 = *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + 8);
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + 8) = param_4;
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12) = param_4;
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + -8) = in_R11;
  *(undefined8 *)((longlong)&uStack_8 + unaff_R12) = in_RAX;
  *(undefined4 *)((longlong)&uStack_8 + unaff_R12) = 0;
  *(undefined8 *)((longlong)&uStack_10 + unaff_R12) = unaff_RBX;
  uVar3 = *(uint *)((longlong)&uStack_8 + unaff_R12);
  *(uint *)((longlong)&uStack_8 + unaff_R12) =
       *(uint *)((longlong)&uStack_8 + unaff_R12) | 0xbb95cabd;
  *(uint *)((longlong)&uStack_8 + unaff_R12) =
       ~(~(uVar3 & 0xbb95cabd) & *(uint *)((longlong)&uStack_8 + unaff_R12));
  *(undefined4 *)((longlong)&uStack_8 + unaff_R12 + 4) = 0;
  pcVar13 = FUN_161be1c09;
  *(code **)((longlong)&uStack_10 + unaff_R12) = FUN_14dd2882d;
  uVar8 = FUN_161be1c09();
  uVar10 = *(undefined8 *)((longlong)&uStack_8 + unaff_R12);
  uVar12 = *(ulonglong *)((longlong)alStackX_8 + unaff_R12 + -8);
  *(ushort *)((longlong)alStackX_8 + unaff_R12 + -2) = ~(param_1 & unaff_retaddr);
  *(short *)((longlong)alStackX_8 + unaff_R12 + -2) =
       *(short *)((longlong)alStackX_8 + unaff_R12 + -2) + unaff_DI;
  if (*(short *)((longlong)alStackX_8 + unaff_R12 + -2) < 0) {
    *(undefined8 *)((longlong)alStackX_8 + unaff_R12) = 0xffffffffffffffff;
  }
  *(undefined2 *)((longlong)alStackX_8 + unaff_R12) = 0;
  *(short *)((longlong)alStackX_8 + unaff_R12) =
       *(short *)((longlong)alStackX_8 + unaff_R12) +
       *(short *)((longlong)alStackX_8 + unaff_R12 + -2);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x68);
  *(code **)((longlong)alStackX_8 + unaff_R12) = pcVar13;
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12) = 0;
  *(longlong *)((longlong)alStackX_8 + unaff_R12) =
       *(longlong *)((longlong)alStackX_8 + unaff_R12) + unaff_R13;
  lVar6 = *(longlong *)((longlong)alStackX_8 + unaff_R12);
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12) = *(undefined8 *)(lVar6 + -0x70);
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + -8) = uVar9;
  *(undefined8 *)((longlong)&uStack_8 + unaff_R12) = uVar9;
  *(undefined8 *)((longlong)alStackX_8 + unaff_R12 + -8) = *(undefined8 *)(lVar6 + -8);
  uVar11 = *(undefined8 *)((longlong)&uStack_8 + unaff_R12);
  *(ulonglong *)((longlong)&uStack_8 + unaff_R12) = unaff_R15;
  *(ulonglong *)((longlong)&uStack_10 + unaff_R12) = unaff_R15;
  *(undefined8 *)((longlong)&uStack_8 + unaff_R12) = *(undefined8 *)(lVar6 + -0x98);
  uVar7 = *(undefined8 *)((longlong)&uStack_10 + unaff_R12);
  *(undefined8 *)((longlong)&uStack_10 + unaff_R12) = *(undefined8 *)(lVar6 + -0xa0);
  uVar9 = *(undefined8 *)((longlong)&uStack_10 + unaff_R12);
  *(undefined8 *)((longlong)&uStack_10 + unaff_R12) = uVar10;
  *(undefined8 *)((longlong)&uStack_18 + unaff_R12) = uVar9;
  *(undefined8 *)((longlong)&uStack_18 + unaff_R12) = uVar8;
  *(code **)((longlong)&uStack_18 + unaff_R12) = FUN_157323450;
  uVar8 = FUN_15b99a6f7();
  uVar9 = *(undefined8 *)((longlong)&uStack_8 + unaff_R12);
  puVar1 = (ulonglong *)((longlong)alStackX_8 + unaff_R12 + 8);
  *puVar1 = *puVar1 & uVar12;
  *(ulonglong *)((longlong)&uStack_8 + unaff_R12) = uVar12;
  plVar2 = (longlong *)((longlong)alStackX_8 + unaff_R12 + 8);
  *plVar2 = *plVar2 << 1;
  uVar10 = *(undefined8 *)((longlong)&uStack_8 + unaff_R12);
  *(undefined8 *)((longlong)&uStack_8 + unaff_R12) = uVar8;
  *(undefined8 *)((longlong)&uStack_10 + unaff_R12) = uVar5;
  *(undefined8 *)((longlong)&uStack_18 + unaff_R12) = 0x671518c0;
  *(undefined4 *)((longlong)&uStack_18 + unaff_R12) = 0x1576a896;
  *(undefined4 *)((longlong)&uStack_18 + unaff_R12 + 4) = 0;
  uVar12 = *(ulonglong *)((longlong)&uStack_18 + unaff_R12);
  *(undefined8 *)((longlong)&uStack_18 + unaff_R12) = uVar7;
  *(undefined8 *)((longlong)&uStack_10 + unaff_R12) = uVar11;
  *(ulonglong *)((longlong)&uStack_18 + unaff_R12) = 0x54c20e70 - ~uVar12 ^ 0x671518c0;
  *(undefined8 *)((longlong)&uStack_20 + unaff_R12) = 0x1573234dc;
  uVar9 = FUN_15676eeb6(uVar10,0x42ddc7f5,uVar9);
  *(undefined8 *)((longlong)&uStack_20 + unaff_R12) = uVar10;
  *(undefined8 *)((longlong)&uStack_20 + unaff_R12) = uVar9;
  *(undefined4 *)((longlong)&uStack_20 + unaff_R12) = 0x85a850b1;
  *(undefined4 *)((longlong)&uStack_20 + unaff_R12 + 4) = 0xffffffff;
  lVar6 = *(longlong *)(~((~unaff_R15 | uVar4) & (~uVar4 | unaff_R15)) - 0x88);
  *(undefined8 *)((longlong)&uStack_20 + unaff_R12) = 0;
  *(longlong *)((longlong)&uStack_20 + unaff_R12) =
       *(longlong *)((longlong)&uStack_20 + unaff_R12) + lVar6;
  *(undefined1 **)((longlong)&uStack_28 + unaff_R12) = &LAB_1563d02c1;
  return *(undefined8 *)((longlong)&uStack_20 + unaff_R12);
}



// FUNCTION 14dd2882d FUN_14dd2882d body=294 status=ok
// SIG undefined FUN_14dd2882d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd288cd) */

undefined8 FUN_14dd2882d(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  undefined8 uVar3;
  ulonglong in_stack_00000018;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar3 = *(undefined8 *)(unaff_R13 + -0x70);
  uVar2 = *(undefined8 *)(unaff_R13 + -0x98);
  FUN_15b99a6f7();
  FUN_15676eeb6(local_res8,0x42ddc7f5,uVar2,in_R9,uVar3,(in_stack_00000018 & local_res8) << 1);
  return *(undefined8 *)(~((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)) - 0x88);
}



// FUNCTION 14dd288d3 FUN_14dd288d3 body=137 status=ok
// SIG undefined FUN_14dd288d3(void)

void FUN_14dd288d3(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 in_R11;
  short unaff_R13W;
  short *unaff_retaddr;
  undefined8 local_res10;
  longlong local_res20;
  
  sVar1 = *unaff_retaddr;
  *unaff_retaddr = 0;
  *unaff_retaddr = *unaff_retaddr + ((sVar1 + -1) - ~(0xfeffU - unaff_R13W));
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = local_res10;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_16246a40e;
  return;
}



// FUNCTION 14dd2895f FUN_14dd2895f body=141 status=ok
// SIG undefined FUN_14dd2895f(void)

void FUN_14dd2895f(void)

{
  FUN_16107b3a1();
  return;
}



// FUNCTION 14dd28ab3 FUN_14dd28ab3 body=305 status=ok
// SIG undefined FUN_14dd28ab3(void)

undefined8 FUN_14dd28ab3(short *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  *(undefined8 *)(unaff_R15 + -8) = unaff_RSI;
  *(undefined8 *)(unaff_R15 + -0x10) = param_2;
  *(undefined8 *)(unaff_R15 + -0x18) = param_2;
  *(undefined8 *)(unaff_R15 + -0x20) = unaff_R13;
  uVar3 = *(undefined8 *)(unaff_R15 + -0x20);
  *(code **)(unaff_R15 + -0x20) = FUN_1655333c4;
  *(undefined8 *)(unaff_R15 + -0x28) = local_res8;
  puVar1 = (undefined8 *)(unaff_R15 + -0x30);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(undefined8 *)(unaff_R15 + -0x10) = *puVar1;
  uVar4 = *(undefined8 *)(unaff_R15 + -0x28);
  *(longlong *)(unaff_R15 + -0x10) =
       *(longlong *)(unaff_R15 + -0x10) - (~*(ulonglong *)(unaff_R15 + -8) + 1);
  *(undefined8 *)(unaff_R15 + -0x20) = 0x14dd28b63;
  FUN_16553335a();
  uVar5 = *(undefined8 *)(unaff_R15 + -0x18);
  *(undefined8 *)(unaff_R15 + -0x18) = unaff_retaddr;
  *param_1 = (*param_1 + -1) - ~(ushort)uVar3;
  uVar3 = *(undefined8 *)(unaff_R15 + -0x10);
  lVar2 = *(longlong *)(unaff_R15 + 8);
  *(undefined8 *)(lVar2 + -8) = uVar4;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x20) = in_R10;
  *(undefined8 *)(lVar2 + -0x28) = uVar3;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined1 **)(lVar2 + -8) = &LAB_14dd28bfe;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + 0xbf8);
  return uVar5;
}



// FUNCTION 14dd28cb0 FUN_14dd28cb0 body=164 status=ok
// SIG undefined FUN_14dd28cb0(void)

undefined8 FUN_14dd28cb0(ulonglong param_1,undefined8 param_2,ushort param_3)

{
  ushort uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  ulonglong in_R10;
  
  uVar2 = CONCAT62(~((uint6)((ulonglong)in_RAX >> 0x10) &
                    (uint6)((~(in_R10 & param_1) + param_1) - ~in_R10 >> 0x10)),0xcb81) &
          0xffffffffffff42d3;
  uVar1 = ~(~(ushort)uVar2 & 0xcbd3);
  return CONCAT62((int6)(uVar2 >> 0x10),(~(param_3 & uVar1) + uVar1) - ~param_3);
}



// FUNCTION 14dd28d54 FUN_14dd28d54 body=323 status=ok
// SIG undefined FUN_14dd28d54(void)

void FUN_14dd28d54(ulonglong param_1)

{
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_R15 + 8) =
       (*(longlong *)(unaff_R15 + 8) + -1) - ~(param_1 - (*(ulonglong *)(unaff_R15 + 8) | param_1));
  FUN_15750ca1d();
  return;
}



// FUNCTION 14dd28e99 FUN_14dd28e99 body=17 status=ok
// SIG undefined FUN_14dd28e99(void)

/* WARNING: Removing unreachable block (ram,0x00014dd28f38) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe967) */
/* WARNING: Removing unreachable block (ram,0x00015b6feb40) */
/* WARNING: Removing unreachable block (ram,0x00015b6feb65) */
/* WARNING: Removing unreachable block (ram,0x00015b6feb6b) */
/* WARNING: Removing unreachable block (ram,0x000165a73b5f) */
/* WARNING: Removing unreachable block (ram,0x00014dd28fc4) */
/* WARNING: Removing unreachable block (ram,0x00014dd28fca) */

void FUN_14dd28e99(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar1 = ~((~unaff_retaddr | uVar1) & (~(~uVar1 & unaff_retaddr) + unaff_retaddr) - uVar1);
  (*(code *)0x162184869)(unaff_retaddr,uVar1,*(undefined8 *)(unaff_RDI + -0x70),uVar1);
  return;
}



// FUNCTION 14dd28f38 FUN_14dd28f38 body=164 status=ok
// SIG undefined FUN_14dd28f38(void)

/* WARNING: Removing unreachable block (ram,0x00014dd28fc4) */
/* WARNING: Removing unreachable block (ram,0x00014dd28fca) */
/* WARNING: Removing unreachable block (ram,0x00015b6feb6b) */

void FUN_14dd28f38(void)

{
  longlong unaff_RDI;
  byte in_R9B;
  
  FUN_15b74ec26(&DAT_ac91427a73ca2b2b,
                CONCAT62((int6)((ulonglong)
                                (&DAT_ac91427a73ca2b2b +
                                (*(ulonglong *)(unaff_RDI + -0x58) & 0xac91427a73ca2b2b) * -2 +
                                *(ulonglong *)(unaff_RDI + -0x58)) >> 0x10),
                         (short)(&DAT_ac91427a73ca2b2b +
                                (*(ulonglong *)(unaff_RDI + -0x58) & 0xac91427a73ca2b2b) * -2 +
                                *(ulonglong *)(unaff_RDI + -0x58)) + 1),0xfffffffffffffff8,
                in_R9B >> 3 | in_R9B << 5);
  FUN_160db3c49();
  FUN_166d718c8();
  return;
}



// FUNCTION 14dd292b5 FUN_14dd292b5 body=427 status=ok
// SIG undefined FUN_14dd292b5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd293cb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd292b5(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_R12;
  char unaff_retaddr;
  int iStackX_20;
  
  FUN_1668cb8ea();
  FUN_15b7f54bc(0x4b46fdf1,
                CONCAT71((uint7)(-1 - (~-(param_2 - unaff_RBP) | unaff_R12) >> 8) |
                         ~(uint7)((~(~unaff_R12 & unaff_RBP) + unaff_RBP) - unaff_R12 >> 8),
                         unaff_retaddr + -0x71),
                ~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x30)) &
                 ~(*(ulonglong *)(unaff_RSI + -0x30) & ~unaff_RBP)),
                *(undefined8 *)(unaff_RSI + -0x28));
  if (iStackX_20 < 0) {
    FUN_14dd4fe11();
    return;
  }
  return;
}



// FUNCTION 14dd2958e FUN_14dd2958e body=153 status=ok
// SIG undefined FUN_14dd2958e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd2958e(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1611bdef7(param_1,(~unaff_R15 + *(ulonglong *)(unaff_R13 + -0x68)) -
                        (~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x68)));
  return;
}



// FUNCTION 14dd29737 FUN_14dd29737 body=174 status=ok
// SIG undefined FUN_14dd29737(void)

/* WARNING: Removing unreachable block (ram,0x00014dd297e0) */

void FUN_14dd29737(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = local_res10;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined **)(uVar1 - 8) = &DAT_16685c926;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_1625e4a8d;
  FUN_16685c8f6();
  return;
}



// FUNCTION 14dd297e6 FUN_14dd297e6 body=263 status=ok
// SIG undefined FUN_14dd297e6(void)

void FUN_14dd297e6(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res8;
  
  FUN_156867668(param_1,*(undefined8 *)(unaff_R12 + -0x40),
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  FUN_161b5e65b(local_res8);
  return;
}



// FUNCTION 14dd298f2 FUN_14dd298f2 body=120 status=ok
// SIG undefined FUN_14dd298f2(void)

void FUN_14dd298f2(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_157641f9c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  FUN_14d9da719();
  return;
}



// FUNCTION 14dd2996b thunk_FUN_14dd29971 body=5 status=ok
// SIG undefined thunk_FUN_14dd29971(void)

void thunk_FUN_14dd29971(undefined8 param_1,undefined8 param_2)

{
  FUN_14d9da719(param_1,param_2,0x627fe01f,FUN_14d9da719);
  return;
}



// FUNCTION 14dd29971 FUN_14dd29971 body=120 status=ok
// SIG undefined FUN_14dd29971(void)

void FUN_14dd29971(undefined8 param_1,undefined8 param_2)

{
  FUN_14d9da719(param_1,param_2,0x627fe01f,FUN_14d9da719);
  return;
}



// FUNCTION 14dd299e9 FUN_14dd299e9 body=171 status=ok
// SIG undefined FUN_14dd299e9(void)

void FUN_14dd299e9(ulonglong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  ulonglong in_stack_00000030;
  
  FUN_16473e14e(FUN_16473e14e,param_2,in_stack_00000030 | param_1,local_res8);
  return;
}



// FUNCTION 14dd29a94 FUN_14dd29a94 body=574 status=ok
// SIG undefined FUN_14dd29a94(void)

void FUN_14dd29a94(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_164f40325(param_1,~param_1,
                *(ulonglong *)(unaff_RDI + -0x40) + param_1 +
                ~(~*(ulonglong *)(unaff_RDI + -0x40) | ~param_1) * -2,param_1);
  FUN_1573bf502();
  return;
}



// FUNCTION 14dd29c76 FUN_14dd29c76 body=141 status=ok
// SIG undefined FUN_14dd29c76(void)

/* WARNING: Removing unreachable block (ram,0x00014dd29dbe) */
/* WARNING: Removing unreachable block (ram,0x00014dd29d98) */
/* WARNING: Removing unreachable block (ram,0x00014dd29e1f) */
/* WARNING: Removing unreachable block (ram,0x000161b9048c) */
/* WARNING: Removing unreachable block (ram,0x000161b9050a) */
/* WARNING: Removing unreachable block (ram,0x000161b90501) */
/* WARNING: Removing unreachable block (ram,0x00014dd29d06) */
/* WARNING: Removing unreachable block (ram,0x00014dd29d92) */
/* WARNING: Removing unreachable block (ram,0x000166524883) */
/* WARNING: Removing unreachable block (ram,0x00014dd29e25) */

void FUN_14dd29c76(void)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  if ((~unaff_R15 | local_res10) == 0xffffffffffffffff &&
      (local_res10 ^ 0xffffffffffffffff | unaff_R15) == 0xffffffffffffffff) {
    FUN_14e242b78();
    return;
  }
  FUN_165f10622();
  return;
}



// FUNCTION 14dd29d06 FUN_14dd29d06 body=145 status=ok
// SIG undefined FUN_14dd29d06(void)

/* WARNING: Removing unreachable block (ram,0x00014dd29dbe) */
/* WARNING: Removing unreachable block (ram,0x000161b90501) */
/* WARNING: Removing unreachable block (ram,0x00014dd29d98) */
/* WARNING: Removing unreachable block (ram,0x00014dd29e1f) */
/* WARNING: Removing unreachable block (ram,0x000161b9048c) */
/* WARNING: Removing unreachable block (ram,0x000161b9050a) */
/* WARNING: Removing unreachable block (ram,0x00014dd29e25) */

void FUN_14dd29d06(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1668adcbb(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14dd29d98 FUN_14dd29d98 body=285 status=ok
// SIG undefined FUN_14dd29d98(void)

/* WARNING: Removing unreachable block (ram,0x00014dd29dbe) */
/* WARNING: Removing unreachable block (ram,0x000161b90501) */
/* WARNING: Removing unreachable block (ram,0x00014dd29e25) */

void FUN_14dd29d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res10 [24];
  
  FUN_165401f83(param_1,local_res10,param_3);
  FUN_161b9053a();
  return;
}



// FUNCTION 14dd2a2f3 FUN_14dd2a2f3 body=54 status=ok
// SIG undefined FUN_14dd2a2f3(void)

void FUN_14dd2a2f3(void)

{
  return;
}



// FUNCTION 14dd2a37a FUN_14dd2a37a body=371 status=ok
// SIG undefined FUN_14dd2a37a(void)

/* WARNING: Removing unreachable block (ram,0x000161584ccb) */
/* WARNING: Removing unreachable block (ram,0x000161584cd1) */
/* WARNING: Removing unreachable block (ram,0x00014dd2a3de) */
/* WARNING: Removing unreachable block (ram,0x00014dd2a3e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd2a493) */
/* WARNING: Removing unreachable block (ram,0x00014dd2a498) */
/* WARNING: Removing unreachable block (ram,0x00014dd2a49e) */
/* WARNING: Removing unreachable block (ram,0x00014e0978ea) */
/* WARNING: Removing unreachable block (ram,0x00014e09797f) */
/* WARNING: Removing unreachable block (ram,0x00014e097984) */
/* WARNING: Removing unreachable block (ram,0x00014e09798a) */
/* WARNING: Removing unreachable block (ram,0x000162b30fa1) */
/* WARNING: Removing unreachable block (ram,0x000162b31032) */
/* WARNING: Removing unreachable block (ram,0x000161584c2b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d305d) */
/* WARNING: Removing unreachable block (ram,0x000162b31038) */
/* WARNING: Removing unreachable block (ram,0x000162b310c1) */
/* WARNING: Removing unreachable block (ram,0x000162b310c7) */
/* WARNING: Removing unreachable block (ram,0x00015b0b88bc) */

undefined8
FUN_14dd2a37a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  undefined8 auStackX_8 [2];
  undefined8 uStackX_18;
  
  lVar7 = unaff_retaddr - ~(unaff_R13 & unaff_RBP);
  *(undefined4 *)((longlong)&uStackX_18 + lVar7) = 0x7fe2e13c;
  *(undefined4 *)((longlong)&uStackX_18 + lVar7 + 4) = 0x53391c25;
  *(undefined8 *)((longlong)auStackX_8 + lVar7 + 8) = param_2;
  *(undefined8 *)((longlong)auStackX_8 + lVar7) = unaff_R14;
  uVar3 = *(uint *)((longlong)&uStackX_18 + lVar7 + 4);
  puVar1 = (uint *)((longlong)&uStackX_18 + lVar7 + 4);
  *puVar1 = *puVar1 | 0xbc5ce134;
  *(uint *)((longlong)&uStackX_18 + lVar7 + 4) =
       ~(~(uVar3 & 0xbc5ce134) & *(uint *)((longlong)&uStackX_18 + lVar7 + 4));
  uVar6 = *(undefined8 *)((longlong)auStackX_8 + lVar7);
  uVar5 = *(undefined8 *)((longlong)auStackX_8 + lVar7 + 8);
  *(undefined8 *)((longlong)auStackX_8 + lVar7 + 8) = unaff_R12;
  uVar3 = *(uint *)((longlong)&uStackX_18 + lVar7 + 4);
  puVar2 = (undefined8 *)((longlong)auStackX_8 + lVar7);
  *puVar2 = unaff_R15;
  *(undefined8 *)(&stack0x00000000 + lVar7) = uVar6;
  puVar1 = (uint *)((longlong)&uStackX_18 + lVar7 + 4);
  *puVar1 = *puVar1 | 0xef65fd11;
  uVar4 = *(uint *)((longlong)&uStackX_18 + lVar7 + 4);
  *puVar2 = uVar5;
  *(undefined8 *)(&stack0x00000000 + lVar7) = param_4;
  uVar6 = *(undefined8 *)(&stack0x00000000 + lVar7);
  *(uint *)((longlong)&uStackX_18 + lVar7 + 4) = ~(~(uVar3 & 0xef65fd11) & uVar4);
  uVar5 = *(undefined8 *)((longlong)&uStackX_18 + lVar7);
  *(undefined8 *)((longlong)&uStackX_18 + lVar7) = in_R11;
  uVar6 = FUN_156d2e37b(uVar5,*puVar2,param_3,uVar6);
  return uVar6;
}



// FUNCTION 14dd2a5e1 FUN_14dd2a5e1 body=64 status=ok
// SIG undefined FUN_14dd2a5e1(void)

void FUN_14dd2a5e1(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd2a7bf FUN_14dd2a7bf body=293 status=ok
// SIG undefined FUN_14dd2a7bf(void)

void FUN_14dd2a7bf(void)

{
  FUN_1664aba9f();
  return;
}



// FUNCTION 14dd2aab2 FUN_14dd2aab2 body=14 status=ok
// SIG undefined FUN_14dd2aab2(void)

void FUN_14dd2aab2(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd2ab4f FUN_14dd2ab4f body=335 status=ok
// SIG undefined FUN_14dd2ab4f(void)

void FUN_14dd2ab4f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(unaff_RDI + ~(unaff_RSI & unaff_RBX));
  uVar2 = ~(uVar2 & param_1) & (uVar2 | param_1);
  uVar1 = *(undefined8 *)(unaff_RDI + -0x68);
  FUN_14e19a9d3();
  (*(code *)0x1564c0fb1)(0x1564c0fb1,uVar1,uVar2,param_4);
  return;
}



// FUNCTION 14dd2ade3 FUN_14dd2ade3 body=629 status=ok
// SIG undefined FUN_14dd2ade3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2ae86) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ae8c) */
/* WARNING: Removing unreachable block (ram,0x00014dd2aee0) */
/* WARNING: Removing unreachable block (ram,0x00014dd2aedb) */
/* WARNING: Removing unreachable block (ram,0x00014dd2aee5) */
/* WARNING: Removing unreachable block (ram,0x00014dd2af11) */
/* WARNING: Removing unreachable block (ram,0x00014dd2af23) */
/* WARNING: Removing unreachable block (ram,0x00014dd2af2e) */
/* WARNING: Removing unreachable block (ram,0x00014dd2af33) */
/* WARNING: Removing unreachable block (ram,0x000162a6dd0f) */

void FUN_14dd2ade3(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1660b2795(param_1,FUN_1660b2795,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14dd2b123 FUN_14dd2b123 body=142 status=ok
// SIG undefined FUN_14dd2b123(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2b1ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b1b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b249) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b24e) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b254) */
/* WARNING: Removing unreachable block (ram,0x000165afe0b6) */

void FUN_14dd2b123(short param_1,undefined8 param_2)

{
  short *unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ushort in_stack_00000008;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  longlong in_stack_00000030;
  
  *unaff_RBP = 0;
  *unaff_RBP = *unaff_RBP - ((param_1 - (~in_stack_00000008 + 2)) + -0x4fe);
  *unaff_RBP = -*unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -8) = param_2;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x10) = 0x65412207;
  *(ulonglong *)(in_stack_00000030 + -0x10) = *(ulonglong *)(in_stack_00000030 + -0x10) ^ 0x65412207
  ;
  *(longlong *)(in_stack_00000030 + -0x10) =
       *(longlong *)(in_stack_00000030 + -0x10) + *(longlong *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -0x20) = uStackX_10;
  *(undefined8 *)(in_stack_00000030 + -8) = 0;
  *(undefined8 *)(in_stack_00000030 + -8) = *(undefined8 *)(in_stack_00000030 + -8);
  *(longlong *)(in_stack_00000030 + -8) =
       (longlong)(&DAT_160cedd37 + *(longlong *)(in_stack_00000030 + -8));
  *(undefined8 *)(in_stack_00000030 + -0x18) = in_R11;
  FUN_14d7c055e(uStackX_20,*(undefined8 *)(in_stack_00000030 + -0x10));
  return;
}



// FUNCTION 14dd2b1b3 FUN_14dd2b1b3 body=160 status=ok
// SIG undefined FUN_14dd2b1b3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2b254) */

void FUN_14dd2b1b3(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) & in_RAX;
  if (-1 < (longlong)uVar1) {
    return;
  }
  FUN_165afe0b6(uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0),0xfffffffffffffffe);
  return;
}



// FUNCTION 14dd2b254 FUN_14dd2b254 body=133 status=ok
// SIG undefined FUN_14dd2b254(void)

void FUN_14dd2b254(ushort *param_1)

{
  ushort unaff_BX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *param_1 = (unaff_BX | *param_1) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
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
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -8) = 0x1896684;
  FUN_15673c439(local_res8,unaff_retaddr);
  return;
}



// FUNCTION 14dd2b36d FUN_14dd2b36d body=301 status=ok
// SIG undefined FUN_14dd2b36d(void)

void FUN_14dd2b36d(undefined8 param_1,ulonglong param_2)

{
  FUN_14e18d74d(param_1,-(~param_2 + 1));
  FUN_166c15e82();
  return;
}



// FUNCTION 14dd2b49e FUN_14dd2b49e body=10 status=ok
// SIG undefined FUN_14dd2b49e(void)

void FUN_14dd2b49e(void)

{
  return;
}



// FUNCTION 14dd2b534 FUN_14dd2b534 body=44 status=ok
// SIG undefined FUN_14dd2b534(void)

undefined8 FUN_14dd2b534(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd2b660 FUN_14dd2b660 body=580 status=ok
// SIG undefined FUN_14dd2b660(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2b6e8) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b6ee) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b771) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b77c) */
/* WARNING: Removing unreachable block (ram,0x00014dd2b782) */
/* WARNING: Removing unreachable block (ram,0x000166ce8ff8) */
/* WARNING: Removing unreachable block (ram,0x000166541b70) */

undefined8 FUN_14dd2b660(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166541b70();
  return uVar1;
}



// FUNCTION 14dd2baf8 FUN_14dd2baf8 body=282 status=ok
// SIG undefined FUN_14dd2baf8(void)

undefined8 FUN_14dd2baf8(void)

{
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  
  FUN_15b95e1ca();
  return *(undefined8 *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x88);
}



// FUNCTION 14dd2bcb2 FUN_14dd2bcb2 body=156 status=ok
// SIG undefined FUN_14dd2bcb2(void)

void FUN_14dd2bcb2(void)

{
  FUN_16517c80e();
  return;
}



// FUNCTION 14dd2bd4f FUN_14dd2bd4f body=168 status=ok
// SIG undefined FUN_14dd2bd4f(void)

void FUN_14dd2bd4f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1663c69db(param_1,0x7a72ef9,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd2bf4c FUN_14dd2bf4c body=188 status=ok
// SIG undefined FUN_14dd2bf4c(void)

void FUN_14dd2bf4c(void)

{
  return;
}



// FUNCTION 14dd2c008 FUN_14dd2c008 body=291 status=ok
// SIG undefined FUN_14dd2c008(void)

void FUN_14dd2c008(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar2 = uVar1 ^ 0xffffffffffffffff | param_1;
  FUN_15b120e5f(param_1,0xffd4,*(undefined8 *)(unaff_RDI + -0x70),
                ~((~uVar2 | (~(~param_1 & uVar1) + uVar1) - param_1) + uVar2 + 1));
  FUN_161b74793(param_1);
  return;
}



// FUNCTION 14dd2c1cb FUN_14dd2c1cb body=14 status=ok
// SIG undefined FUN_14dd2c1cb(void)

void FUN_14dd2c1cb(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd2c31a FUN_14dd2c31a body=114 status=ok
// SIG undefined FUN_14dd2c31a(void)

undefined8 FUN_14dd2c31a(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong in_R9;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(in_R9 + 0x10);
  *(ulonglong *)(in_R9 + 0x10) = *(ulonglong *)(in_R9 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R9 + 0x10) = *(ulonglong *)(in_R9 + 0x10) | in_RAX;
  *(ulonglong *)(in_R9 + 0x10) =
       ~((~*(ulonglong *)(in_R9 + 0x10) | ~in_RAX | uVar1) + *(longlong *)(in_R9 + 0x10) + 1);
  return in_stack_00000010;
}



// FUNCTION 14dd2c39e FUN_14dd2c39e body=133 status=ok
// SIG undefined FUN_14dd2c39e(void)

void FUN_14dd2c39e(undefined8 param_1)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_1651bef22(param_1,unaff_retaddr,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dd2c423 FUN_14dd2c423 body=181 status=ok
// SIG undefined FUN_14dd2c423(void)

void FUN_14dd2c423(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_162e82973(FUN_162e82973,2,
                ~(~((unaff_RBX | unaff_RBP) + unaff_RDI + 1) & (~param_3 | unaff_R15)));
  return;
}



// FUNCTION 14dd2c6b6 thunk_FUN_14dd2c6bc body=5 status=ok
// SIG undefined thunk_FUN_14dd2c6bc(void)

void thunk_FUN_14dd2c6bc(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX;
  FUN_162a84954(~(unaff_RDI & (param_1 | in_RAX)),-1 - ((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14dd2c6bc FUN_14dd2c6bc body=123 status=ok
// SIG undefined FUN_14dd2c6bc(void)

void FUN_14dd2c6bc(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX;
  FUN_162a84954(~(unaff_RDI & (param_1 | in_RAX)),-1 - ((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}


