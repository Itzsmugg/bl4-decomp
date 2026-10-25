// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dcd70e3 FUN_14dcd70e3 body=15 status=ok
// SIG undefined FUN_14dcd70e3(void)

void FUN_14dcd70e3(void)

{
  return;
}



// FUNCTION 14dcd720d FUN_14dcd720d body=158 status=ok
// SIG undefined FUN_14dcd720d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcd720d(void)

{
  FUN_15afaba88(FUN_15afaba88);
  return;
}



// FUNCTION 14dcd73ce FUN_14dcd73ce body=151 status=ok
// SIG undefined FUN_14dcd73ce(void)

void FUN_14dcd73ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined1 **)(local_res10 + -8) = &LAB_15785d9fd;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = uVar1;
  *(code **)(local_res10 + -0x28) = HeapAlloc_exref;
  *(undefined8 *)(local_res10 + -0x30) = 0x14dcd7453;
  FUN_15785d9cd(unaff_retaddr);
  *(undefined8 *)(local_res10 + -0x30) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x38) = unaff_R14;
  *(code **)(local_res10 + -0x30) = FUN_14dcd7467;
  return;
}



// FUNCTION 14dcd7467 FUN_14dcd7467 body=363 status=ok
// SIG undefined FUN_14dcd7467(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd7503) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7509) */

void FUN_14dcd7467(void)

{
  longlong unaff_RSI;
  ulonglong in_stack_00000008;
  
  FUN_160da9969(*(ulonglong *)(unaff_RSI + -0x38) ^ in_stack_00000008,
                *(undefined8 *)(unaff_RSI + -0x58));
  FUN_161ae0470(FUN_161ae0470);
  return;
}



// FUNCTION 14dcd7799 FUN_14dcd7799 body=324 status=ok
// SIG undefined FUN_14dcd7799(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd78d4) */
/* WARNING: Removing unreachable block (ram,0x00014dcd78df) */
/* WARNING: Removing unreachable block (ram,0x00014dcd78da) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7830) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7836) */
/* WARNING: Removing unreachable block (ram,0x00014dcd783b) */

undefined8 FUN_14dcd7799(byte param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  undefined1 local_res8;
  undefined8 local_res10;
  
  uVar1 = FUN_162532bda(local_res10,unaff_RBP - (param_2 << ((local_res8 + -1) - ~param_1 & 0x3f)),
                        param_3,param_4);
  return uVar1;
}



// FUNCTION 14dcd78df FUN_14dcd78df body=41 status=ok
// SIG undefined FUN_14dcd78df(void)

void FUN_14dcd78df(void)

{
  return;
}



// FUNCTION 14dcd7b30 FUN_14dcd7b30 body=129 status=ok
// SIG undefined FUN_14dcd7b30(void)

/* WARNING: Instruction at (ram,0x00014dcd7ba1) overlaps instruction at (ram,0x00014dcd7b9e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcd7ba9) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7bb4) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7baf) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7b94) */

void FUN_14dcd7b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong local_res18;
  
  uVar2 = local_res18 ^ in_RAX;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x2d2c839f;
  *puVar1 = *puVar1 ^ 0x2d2c839f;
  *puVar1 = *puVar1 - unaff_RBX;
  *puVar1 = -*puVar1;
  *(code **)(uVar2 - 0x10) = FUN_162ab24c0;
  FUN_14dda3520(param_1,param_2,param_3);
  *(undefined8 *)(uVar2 - 8) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RDI;
  *(undefined1 **)(uVar2 - 8) = &LAB_162ab24d9;
  return;
}



// FUNCTION 14dcd7bb4 FUN_14dcd7bb4 body=117 status=ok
// SIG undefined FUN_14dcd7bb4(void)

void FUN_14dcd7bb4(undefined8 param_1)

{
  FUN_16600f947(param_1);
  return;
}



// FUNCTION 14dcd7cce FUN_14dcd7cce body=171 status=ok
// SIG undefined FUN_14dcd7cce(void)

/* WARNING: Removing unreachable block (ram,0x000162b58fc8) */
/* WARNING: Removing unreachable block (ram,0x000162b58fce) */
/* WARNING: Removing unreachable block (ram,0x000162b590ea) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7d59) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7d5f) */
/* WARNING: Removing unreachable block (ram,0x000162b58fac) */

void FUN_14dcd7cce(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x162e99cb2)
            (param_1,0x162e99cb2,
             ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
              (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
             *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dcd7d5f FUN_14dcd7d5f body=181 status=ok
// SIG undefined FUN_14dcd7d5f(void)

void FUN_14dcd7d5f(void)

{
  ulonglong uVar1;
  ulonglong *unaff_R12;
  
  uVar1 = *unaff_R12;
  *unaff_R12 = *unaff_R12 | 0xfffffffff5140626;
  *unaff_R12 = ~(~(uVar1 & 0xfffffffff5140626) & *unaff_R12);
  return;
}



// FUNCTION 14dcd7e17 FUN_14dcd7e17 body=333 status=ok
// SIG undefined FUN_14dcd7e17(void)

void FUN_14dcd7e17(void)

{
  code *pcVar1;
  ulonglong unaff_RDI;
  ulonglong local_res8;
  
  pcVar1 = FUN_165a1af6b;
  FUN_165a1af6b(FUN_165a1af6b,0x20,unaff_RDI & local_res8);
  thunk_FUN_161c8ceba(pcVar1);
  return;
}



// FUNCTION 14dcd7f64 FUN_14dcd7f64 body=3 status=ok
// SIG undefined FUN_14dcd7f64(void)

void FUN_14dcd7f64(void)

{
  return;
}



// FUNCTION 14dcd80a1 FUN_14dcd80a1 body=346 status=ok
// SIG undefined FUN_14dcd80a1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd824d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcd80a1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R12;
  undefined8 local_res8;
  
  lVar2 = FUN_1616efff0(param_1,local_res8,param_3,param_4);
  lVar2 = *(longlong *)(unaff_R12 + -0x60) + lVar2;
  uVar3 = FUN_1575c1c28();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  lVar4 = FUN_16644ee1f(~(param_1 & uVar3) & (param_1 | uVar3),
                        *(ulonglong *)(unaff_R12 + -0x78) ^ uVar3);
  *(ulonglong *)(&stack0xfffffffffafcfbac + lVar2) = ~((~uVar3 | uVar1) & (~uVar1 | uVar3));
                    /* WARNING: Could not recover jumptable at 0x00014dcd8309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))();
  return;
}



// FUNCTION 14dcd81fd FUN_14dcd81fd body=271 status=ok
// SIG undefined FUN_14dcd81fd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd824d) */

void FUN_14dcd81fd(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  lVar2 = FUN_16644ee1f(~(param_1 & in_RAX) & (param_1 | in_RAX),
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  *(ulonglong *)(&stack0xfffffffffafcfbb4 + param_4) = ~((~in_RAX | uVar1) & (~uVar1 | in_RAX));
                    /* WARNING: Could not recover jumptable at 0x00014dcd8309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))();
  return;
}



// FUNCTION 14dcd847c FUN_14dcd847c body=166 status=ok
// SIG undefined FUN_14dcd847c(void)

ulonglong FUN_14dcd847c(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return ~((~unaff_RBX | *(ulonglong *)(param_1 + -0x70)) &
          (~*(ulonglong *)(param_1 + -0x70) | unaff_RBX));
}



// FUNCTION 14dcd873d FUN_14dcd873d body=153 status=ok
// SIG undefined FUN_14dcd873d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd87a8) */

void FUN_14dcd873d(longlong param_1)

{
  longlong unaff_RBX;
  
  FUN_165bf8330(param_1,unaff_RBX + param_1);
  return;
}



// FUNCTION 14dcd87d6 FUN_14dcd87d6 body=168 status=ok
// SIG undefined FUN_14dcd87d6(void)

void FUN_14dcd87d6(void)

{
  FUN_15b5fdf01(0x7ffffffffffffffc);
  return;
}



// FUNCTION 14dcd89d7 FUN_14dcd89d7 body=102 status=ok
// SIG undefined FUN_14dcd89d7(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd8a32) */
/* WARNING: Removing unreachable block (ram,0x00014dcd8a38) */

undefined8 FUN_14dcd89d7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcd8a3e FUN_14dcd8a3e body=139 status=ok
// SIG undefined FUN_14dcd8a3e(void)

void FUN_14dcd8a3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_161c750f8(local_res8,param_2,FUN_161c750f8);
  return;
}



// FUNCTION 14dcd8b54 FUN_14dcd8b54 body=117 status=ok
// SIG undefined FUN_14dcd8b54(void)

void FUN_14dcd8b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b8fd3a3(param_1,FUN_15b8fd3a3,param_3);
  return;
}



// FUNCTION 14dcd8c57 FUN_14dcd8c57 body=71 status=ok
// SIG undefined FUN_14dcd8c57(void)

void FUN_14dcd8c57(void)

{
  return;
}



// FUNCTION 14dcd8cfb FUN_14dcd8cfb body=128 status=ok
// SIG undefined FUN_14dcd8cfb(void)

void FUN_14dcd8cfb(void)

{
  FUN_1610b876b();
  return;
}



// FUNCTION 14dcd8d7c FUN_14dcd8d7c body=14 status=ok
// SIG undefined FUN_14dcd8d7c(void)

void FUN_14dcd8d7c(void)

{
  return;
}



// FUNCTION 14dcd9080 thunk_FUN_14dcd9086 body=5 status=ok
// SIG undefined thunk_FUN_14dcd9086(void)

void thunk_FUN_14dcd9086(void)

{
  return;
}



// FUNCTION 14dcd9086 FUN_14dcd9086 body=10 status=ok
// SIG undefined FUN_14dcd9086(void)

void FUN_14dcd9086(void)

{
  return;
}



// FUNCTION 14dcd91a4 FUN_14dcd91a4 body=14 status=ok
// SIG undefined FUN_14dcd91a4(void)

void FUN_14dcd91a4(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcd93f2 FUN_14dcd93f2 body=281 status=ok
// SIG undefined FUN_14dcd93f2(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd9475) */

undefined8 FUN_14dcd93f2(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = (~(0xffffffffffffffffU - param_4 & param_1) + param_1) - ~(0xffffffffffffffffU - param_4);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70);
  lVar4 = ((~param_1 + uVar2) - (~param_1 & uVar2)) + param_1 + 1;
  if (lVar4 < 0) {
    uVar3 = FUN_1619dbac7(param_1,FUN_1619dbac7,((param_1 - 1) - ~uVar2) + lVar4 * -2,
                          ~((uVar1 - (unaff_RSI | uVar1)) + unaff_RSI));
    return uVar3;
  }
  uVar3 = FUN_156519705();
  return uVar3;
}



// FUNCTION 14dcd950f FUN_14dcd950f body=171 status=ok
// SIG undefined FUN_14dcd950f(void)

void FUN_14dcd950f(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R12;
  
  FUN_1616c5821(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,FUN_1616c5821,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,in_R9 ^ in_RAX);
  return;
}



// FUNCTION 14dcd95ba FUN_14dcd95ba body=49 status=ok
// SIG undefined FUN_14dcd95ba(void)

void FUN_14dcd95ba(void)

{
  undefined8 *unaff_RBX;
  undefined8 in_R11;
  
  *unaff_RBX = in_R11;
  return;
}



// FUNCTION 14dcd965d FUN_14dcd965d body=111 status=ok
// SIG undefined FUN_14dcd965d(void)

void FUN_14dcd965d(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x14daf65ac)(param_1,param_2,0x14daf65ac,unaff_retaddr);
  return;
}



// FUNCTION 14dcd9934 FUN_14dcd9934 body=169 status=ok
// SIG undefined FUN_14dcd9934(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd99d3) */
/* WARNING: Removing unreachable block (ram,0x00014dcd99de) */
/* WARNING: Removing unreachable block (ram,0x00014dcd99d9) */

void FUN_14dcd9934(void)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  FUN_1659e8e41(in_stack_00000008,unaff_retaddr);
  return;
}



// FUNCTION 14dcd99de FUN_14dcd99de body=15 status=ok
// SIG undefined FUN_14dcd99de(void)

void FUN_14dcd99de(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d7bda93(param_1,local_res8);
  return;
}



// FUNCTION 14dcd9c7f FUN_14dcd9c7f body=503 status=ok
// SIG undefined FUN_14dcd9c7f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd9e37) */
/* WARNING: Removing unreachable block (ram,0x000165b7801f) */
/* WARNING: Removing unreachable block (ram,0x000165b78025) */
/* WARNING: Removing unreachable block (ram,0x000165b7804d) */
/* WARNING: Removing unreachable block (ram,0x000165b78052) */
/* WARNING: Removing unreachable block (ram,0x000156accd2d) */
/* WARNING: Removing unreachable block (ram,0x000160f41722) */
/* WARNING: Removing unreachable block (ram,0x000160f4182f) */
/* WARNING: Removing unreachable block (ram,0x000156aabff2) */
/* WARNING: Removing unreachable block (ram,0x000156aac04c) */
/* WARNING: Removing unreachable block (ram,0x000156aac054) */
/* WARNING: Removing unreachable block (ram,0x000160f41835) */
/* WARNING: Removing unreachable block (ram,0x000160f418ba) */
/* WARNING: Removing unreachable block (ram,0x000160f418c6) */
/* WARNING: Removing unreachable block (ram,0x0001666327b6) */
/* WARNING: Removing unreachable block (ram,0x00016663281f) */
/* WARNING: Removing unreachable block (ram,0x000165b77f9b) */
/* WARNING: Removing unreachable block (ram,0x000165b7801a) */
/* WARNING: Removing unreachable block (ram,0x000166632825) */
/* WARNING: Removing unreachable block (ram,0x000166632940) */
/* WARNING: Removing unreachable block (ram,0x00016663294c) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000156908c35) */
/* WARNING: Removing unreachable block (ram,0x000156908ccf) */
/* WARNING: Removing unreachable block (ram,0x000156908cd5) */
/* WARNING: Removing unreachable block (ram,0x00015b17e584) */
/* WARNING: Removing unreachable block (ram,0x000156908d65) */
/* WARNING: Removing unreachable block (ram,0x000156908d6b) */
/* WARNING: Removing unreachable block (ram,0x000156908d70) */
/* WARNING: Removing unreachable block (ram,0x0001614674f1) */
/* WARNING: Removing unreachable block (ram,0x000156aac080) */
/* WARNING: Removing unreachable block (ram,0x000156aac083) */

undefined8 FUN_14dcd9c7f(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_15729fe32();
  FUN_1658627ea(param_1);
  uVar1 = FUN_160f41722();
  return uVar1;
}



// FUNCTION 14dcd9e7c FUN_14dcd9e7c body=100 status=ok
// SIG undefined FUN_14dcd9e7c(void)

undefined8
FUN_14dcd9e7c(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  short unaff_BP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  
  *param_2 = unaff_BP + 1;
  *(undefined8 *)(param_5 + -8) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = in_R11;
  *(undefined8 *)(param_5 + -0x20) = unaff_RSI;
  *(undefined **)(param_5 + -8) = &DAT_14dcd9efc;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(unaff_RBX + 0xe0);
  return uVar1;
}



// FUNCTION 14dcd9f12 FUN_14dcd9f12 body=108 status=ok
// SIG undefined FUN_14dcd9f12(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000162c88597) overlaps instruction at (ram,0x000162c88595)
    */
/* WARNING: Removing unreachable block (ram,0x000162c88594) */
/* WARNING: Removing unreachable block (ram,0x00014dcd9fbe) */

void FUN_14dcd9f12(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar1;
  ulonglong in_R10;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)&DAT_16288e9e4)(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP);
  uVar2 = ~in_R10 | unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar2 = FUN_14ded5773((uVar2 - (~uVar2 & (~unaff_R15 | in_R10) | uVar2)) + (~unaff_R15 | in_R10) ^
                        0xffffffffffffffff);
  uVar1 = uVar1 ^ *(ulonglong *)(unaff_R12 + unaff_RSI);
  FUN_14d8f8c6e(*(ulonglong *)(unaff_R12 + -0x58) + uVar2 +
                (*(ulonglong *)(unaff_R12 + -0x58) & uVar2) * -2,FUN_14d8f8c6e,
                *(ulonglong *)(unaff_R12 + -0x80) ^ uVar2,-1 - ((~uVar2 | uVar1) & (~uVar1 | uVar2))
               );
  return;
}



// FUNCTION 14dcd9fbe FUN_14dcd9fbe body=79 status=ok
// SIG undefined FUN_14dcd9fbe(void)

void FUN_14dcd9fbe(void)

{
  longlong unaff_RBP;
  undefined8 unaff_R13;
  
  *(undefined8 *)(&stack0xfffffffff3da4f5e + unaff_RBP) = unaff_R13;
  return;
}



// FUNCTION 14dcda0fd FUN_14dcda0fd body=291 status=ok
// SIG undefined FUN_14dcda0fd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcda18d) */

void FUN_14dcda0fd(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b9cfbef(~((unaff_RDI ^ param_2) & (~param_1 | unaff_R15)),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),param_3,FUN_15b9cfbef);
  return;
}



// FUNCTION 14dcda2cc FUN_14dcda2cc body=138 status=ok
// SIG undefined FUN_14dcda2cc(void)

/* WARNING: Removing unreachable block (ram,0x00014dcda34e) */

void FUN_14dcda2cc(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBP;
  
  *(ulonglong *)(&stack0x00000018 + (param_1 - param_3)) =
       (~(-~unaff_RBP - 1) | *(ulonglong *)(&stack0x00000018 + (param_1 - param_3))) + unaff_RBP + 1
  ;
  return;
}



// FUNCTION 14dcda34e FUN_14dcda34e body=186 status=ok
// SIG undefined FUN_14dcda34e(void)

void FUN_14dcda34e(void)

{
  return;
}



// FUNCTION 14dcda4fe FUN_14dcda4fe body=177 status=ok
// SIG undefined FUN_14dcda4fe(void)

void FUN_14dcda4fe(void)

{
  FUN_1660a33af();
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcda6c4 thunk_FUN_14dcda6ca body=5 status=ok
// SIG undefined thunk_FUN_14dcda6ca(void)

void thunk_FUN_14dcda6ca(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar3 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2;
  lVar1 = *(longlong *)(unaff_R13 + -0x30);
  uVar2 = FUN_161cc0eec(~((unaff_RBP - ~unaff_RDI) - (unaff_RSI ^ 0xffffffffffffffff) &
                         (~param_1 | unaff_R15)));
  uVar4 = uVar2 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x78);
  uVar2 = ~(*(ulonglong *)(unaff_R12 + -0x78) & ~uVar2);
  FUN_16115a6ab(~(ulonglong)(FUN_161cc0eec + (lVar3 - lVar1)),~((uVar2 - (uVar4 | uVar2)) + uVar4));
  return;
}



// FUNCTION 14dcda6ca FUN_14dcda6ca body=107 status=ok
// SIG undefined FUN_14dcda6ca(void)

void FUN_14dcda6ca(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar3 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2;
  lVar1 = *(longlong *)(unaff_R13 + -0x30);
  uVar2 = FUN_161cc0eec(~((unaff_RBP - ~unaff_RDI) - (unaff_RSI ^ 0xffffffffffffffff) &
                         (~param_1 | unaff_R15)));
  uVar4 = uVar2 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x78);
  uVar2 = ~(*(ulonglong *)(unaff_R12 + -0x78) & ~uVar2);
  FUN_16115a6ab(~(ulonglong)(FUN_161cc0eec + (lVar3 - lVar1)),~((uVar2 - (uVar4 | uVar2)) + uVar4));
  return;
}



// FUNCTION 14dcda735 FUN_14dcda735 body=152 status=ok
// SIG undefined FUN_14dcda735(void)

void FUN_14dcda735(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x78);
  uVar1 = ~(*(ulonglong *)(unaff_R12 + -0x78) & ~in_RAX);
  FUN_16115a6ab(~((unaff_RBP - unaff_RSI) + param_2),~((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14dcda7ce FUN_14dcda7ce body=113 status=ok
// SIG undefined FUN_14dcda7ce(void)

void FUN_14dcda7ce(void)

{
  FUN_14dacf0b0();
  return;
}



// FUNCTION 14dcda987 FUN_14dcda987 body=440 status=ok
// SIG undefined FUN_14dcda987(void)

/* WARNING: Removing unreachable block (ram,0x00014dcda9f7) */
/* WARNING: Removing unreachable block (ram,0x00014dcda9fd) */
/* WARNING: Removing unreachable block (ram,0x00014dcdaa4a) */
/* WARNING: Removing unreachable block (ram,0x00014dcdaa4e) */
/* WARNING: Removing unreachable block (ram,0x00014dcdaa8d) */
/* WARNING: Removing unreachable block (ram,0x00014dcdaa90) */
/* WARNING: Removing unreachable block (ram,0x0001567db1c0) */

void FUN_14dcda987(void)

{
  ulonglong unaff_RBP;
  undefined8 local_res20;
  
  if (~local_res20 + ~unaff_RBP < (~local_res20 & ~unaff_RBP)) {
    return;
  }
  FUN_14e16f771();
  return;
}



// FUNCTION 14dcdabe2 FUN_14dcdabe2 body=464 status=ok
// SIG undefined FUN_14dcdabe2(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdac84) */

void FUN_14dcdabe2(void)

{
  FUN_16123dcdb();
  FUN_160ef5c1f();
  return;
}



// FUNCTION 14dcdac8a FUN_14dcdac8a body=158 status=ok
// SIG undefined FUN_14dcdac8a(void)

void FUN_14dcdac8a(undefined8 param_1)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  thunk_FUN_156a271d2(param_1,0xb737);
  return;
}



// FUNCTION 14dcdad29 FUN_14dcdad29 body=391 status=ok
// SIG undefined FUN_14dcdad29(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdadac) */

undefined4 FUN_14dcdad29(void)

{
  int in_EAX;
  undefined4 uVar1;
  uint unaff_R13D;
  uint unaff_R14D;
  
  if (in_EAX == ~(((unaff_R14D | 0xa4bbce2) - (unaff_R13D ^ 0xffffffff | unaff_R14D | 0xa4bbce2)) +
                 (unaff_R13D ^ 0xffffffff)) + 0xa4bbce4) {
    uVar1 = FUN_162d3a47e(FUN_162d3a47e);
    return uVar1;
  }
  return *(undefined4 *)((longlong)ProcessEnvironmentBlock + 0x280);
}



// FUNCTION 14dcdae36 FUN_14dcdae36 body=143 status=ok
// SIG undefined FUN_14dcdae36(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcdae36(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint in_EAX;
  byte bVar2;
  char cVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  short *in_R11;
  undefined8 unaff_R13;
  short unaff_retaddr;
  undefined8 local_res8;
  undefined4 *local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *in_R11 = *in_R11;
  *in_R11 = *in_R11 - unaff_retaddr;
  *(undefined8 *)(local_res20 + -8) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = local_res8;
  *(undefined8 *)(local_res20 + -0x18) = local_res8;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = (longlong)(&LAB_14dcdaeda + *(longlong *)(local_res20 + -8));
  while( true ) {
    uVar4 = (ulonglong)in_EAX;
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    bVar2 = (byte)param_1;
    *(char *)(uVar4 * 2) = *(char *)(uVar4 * 2) + bVar2;
    in_EAX = CONCAT31((int3)(unaff_RDI >> 8),DAT_5353007761b98900) & 0xffffff70;
    cVar3 = cVar3 + bVar2;
    out(*local_res10,CONCAT11(cVar3,(char)param_2));
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2 ^ *(byte *)(unaff_RBX + 0x2a000065));
    pcVar1 = (char *)((uVar4 - 0x1a9b6949) + param_1 * 8);
    *pcVar1 = *pcVar1 + (char)in_EAX;
    local_res10 = local_res10 + (ulonglong)((local_res18 & 0x400) != 0) * -2 + 1;
    unaff_RDI = uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcdaf02 FUN_14dcdaf02 body=139 status=ok
// SIG undefined FUN_14dcdaf02(void)

void FUN_14dcdaf02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dede8ac();
  (*(code *)&LAB_1648e4b76)(param_1,0xa0,param_3,0);
  return;
}



// FUNCTION 14dcdaf8d FUN_14dcdaf8d body=145 status=ok
// SIG undefined FUN_14dcdaf8d(void)

void FUN_14dcdaf8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_1648e4b76)(param_1,0xa0,param_3,0);
  return;
}



// FUNCTION 14dcdb01e FUN_14dcdb01e body=717 status=ok
// SIG undefined FUN_14dcdb01e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dcdb5e8) overlaps instruction at (ram,0x00014dcdb5e7)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcdb0ac) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb0b2) */
/* WARNING: Removing unreachable block (ram,0x00016647af32) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb44f) */
/* WARNING: Removing unreachable block (ram,0x00014dd6cf71) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb455) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb4dd) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb4e2) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb4ee) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb4f3) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb586) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb3a6) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb3ac) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb44a) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb58b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb591) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb596) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb5e7) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb5e8) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb147) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb152) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb25b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb260) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb266) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb26b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb28d) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb300) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb305) */
/* WARNING: Removing unreachable block (ram,0x000165881017) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb30b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb317) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb31b) */
/* WARNING: Removing unreachable block (ram,0x000160d3821c) */
/* WARNING: Removing unreachable block (ram,0x000160d3826d) */
/* WARNING: Removing unreachable block (ram,0x000160d3826c) */
/* WARNING: Removing unreachable block (ram,0x000160d38278) */
/* WARNING: Removing unreachable block (ram,0xec1fe7e2) */
/* WARNING: Removing unreachable block (ram,0x000160d38286) */
/* WARNING: Removing unreachable block (ram,0x00014dcdb14d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcdb01e(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  ulonglong unaff_R12;
  longlong in_stack_00000008;
  
  uVar1 = *(ulonglong *)
           (in_stack_00000008 +
           ~(((param_4 | 0xffffffffcb401939) -
             (~unaff_R12 | 0x34bfe6c6 | param_4 | 0xffffffffcb401939)) + (~unaff_R12 | 0x34bfe6c6)))
  ;
  uVar2 = FUN_1569ef948(param_1,~(uVar1 & in_R10) & (uVar1 | in_R10),param_3);
  return uVar2;
}



// FUNCTION 14dcdb596 FUN_14dcdb596 body=86 status=ok
// SIG undefined FUN_14dcdb596(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dcdb5e8) overlaps instruction at (ram,0x00014dcdb5e7)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcdb5e7) */

void FUN_14dcdb596(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  return;
}



// FUNCTION 14dcdb78b FUN_14dcdb78b body=115 status=ok
// SIG undefined FUN_14dcdb78b(void)

void FUN_14dcdb78b(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (unaff_RDI ^ 0x191ef173));
  FUN_1565e396d(param_1,~((~uVar1 & ~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  FUN_1653eed76();
  return;
}



// FUNCTION 14dcdb7ff FUN_14dcdb7ff body=181 status=ok
// SIG undefined FUN_14dcdb7ff(void)

void FUN_14dcdb7ff(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1653eed76(param_1,param_2,FUN_1653eed76,in_stack_00000008);
  return;
}



// FUNCTION 14dcdb8b5 FUN_14dcdb8b5 body=165 status=ok
// SIG undefined FUN_14dcdb8b5(void)

void FUN_14dcdb8b5(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d9ae45f(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,FUN_14d9ae45f);
  return;
}



// FUNCTION 14dcdbb0f FUN_14dcdbb0f body=709 status=ok
// SIG undefined FUN_14dcdbb0f(void)

void FUN_14dcdbb0f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong in_stack_00000008;
  undefined8 local_res10;
  
  FUN_16632f477();
  uVar1 = *(undefined8 *)(in_stack_00000008 + -0x48);
  local_res10 = 0x14dcdbc05;
  FUN_156fce3c3();
  uVar3 = 0xb07e7ef;
  lVar2 = 0;
  pcVar4 = FUN_16612ae11;
  local_res10 = 0x14dcdbca8;
  FUN_16612ae11();
  local_res10 = *(undefined8 *)(lVar2 + -0x98);
  FUN_1567cdecc(FUN_1567cdecc,*(ulonglong *)(lVar2 + -0xa0) ^ (ulonglong)pcVar4);
  local_res10 = CONCAT62(~(~(uint6)((ulonglong)uVar1 >> 0x10) | ~(uint6)((ulonglong)param_1 >> 0x10)
                          ),(short)&local_res10 + (short)in_stack_00000008);
  FUN_16210dc45(uVar3);
  return;
}



// FUNCTION 14dcdbde1 FUN_14dcdbde1 body=119 status=ok
// SIG undefined FUN_14dcdbde1(void)

void FUN_14dcdbde1(void)

{
  FUN_15b5f8287();
  return;
}



// FUNCTION 14dcdbe5a FUN_14dcdbe5a body=118 status=ok
// SIG undefined FUN_14dcdbe5a(void)

void FUN_14dcdbe5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164a6727b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcdbed0 FUN_14dcdbed0 body=161 status=ok
// SIG undefined FUN_14dcdbed0(void)

void FUN_14dcdbed0(void)

{
  FUN_15645954d();
  FUN_16617af53();
  return;
}



// FUNCTION 14dcdc012 FUN_14dcdc012 body=131 status=ok
// SIG undefined FUN_14dcdc012(void)

/* WARNING: Removing unreachable block (ram,0x00014dfb3aaa) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc1ce) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdc012(undefined8 param_1)

{
  FUN_14da60ce5();
  FUN_15b7ff8f9();
  FUN_1612c32e9(param_1);
  return;
}



// FUNCTION 14dcdc097 FUN_14dcdc097 body=642 status=ok
// SIG undefined FUN_14dcdc097(void)

/* WARNING: Removing unreachable block (ram,0x00014dfb3aaa) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc1ce) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdc097(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_15b7ff8f9(param_1,~(unaff_RDI + 1U));
  FUN_1612c32e9(param_1);
  return;
}



// FUNCTION 14dcdc1ce FUN_14dcdc1ce body=2 status=ok
// SIG undefined FUN_14dcdc1ce(void)

void FUN_14dcdc1ce(void)

{
  return;
}



// FUNCTION 14dcdc1d0 FUN_14dcdc1d0 body=149 status=ok
// SIG undefined FUN_14dcdc1d0(void)

/* WARNING: Instruction at (ram,0x00014db70978) overlaps instruction at (ram,0x00014db70977)
    */
/* WARNING: Removing unreachable block (ram,0x0001659e9a6d) */
/* WARNING: Removing unreachable block (ram,0x000164aab07a) */
/* WARNING: Removing unreachable block (ram,0x000164aab080) */
/* WARNING: Removing unreachable block (ram,0x000164aab0fd) */
/* WARNING: Removing unreachable block (ram,0x000164aab103) */
/* WARNING: Removing unreachable block (ram,0x000156c006cf) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc2c6) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc2d2) */
/* WARNING: Removing unreachable block (ram,0x00014db708e5) */
/* WARNING: Removing unreachable block (ram,0x00014db70959) */
/* WARNING: Removing unreachable block (ram,0x00014db70974) */
/* WARNING: Removing unreachable block (ram,0x00014db7096f) */
/* WARNING: Removing unreachable block (ram,0x00014db70977) */

undefined8 FUN_14dcdc1d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  
  if (unaff_R13 == 0x306c0) {
    uVar2 = FUN_162dc6f43();
    return uVar2;
  }
  uVar1 = FUN_1658454ee();
  if (-1 < (longlong)
           (FUN_1658454ee +
           (*(ulonglong *)(unaff_RSI + -0x80) - (*(ulonglong *)(unaff_RSI + -0x80) | 0x1658454ee)))
           * 2) {
    uVar2 = FUN_164aaafe0();
    return uVar2;
  }
  uVar2 = FUN_1659e9a6d(uVar1,~((*(ulonglong *)(unaff_RSI + -0x58) | 0xfffffffe9a7bab11) &
                               (~*(ulonglong *)(unaff_RSI + -0x58) | 0x1658454ee)),unaff_RBP);
  return uVar2;
}



// FUNCTION 14dcdc267 FUN_14dcdc267 body=249 status=ok
// SIG undefined FUN_14dcdc267(void)

/* WARNING: Instruction at (ram,0x00014db70978) overlaps instruction at (ram,0x00014db70977)
    */
/* WARNING: Removing unreachable block (ram,0x0001659e9a6d) */
/* WARNING: Removing unreachable block (ram,0x000164aab07a) */
/* WARNING: Removing unreachable block (ram,0x000164aab080) */
/* WARNING: Removing unreachable block (ram,0x000164aab0fd) */
/* WARNING: Removing unreachable block (ram,0x000164aab103) */
/* WARNING: Removing unreachable block (ram,0x000156c006cf) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc2c6) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc2d2) */
/* WARNING: Removing unreachable block (ram,0x00014db708e5) */
/* WARNING: Removing unreachable block (ram,0x00014db70959) */
/* WARNING: Removing unreachable block (ram,0x00014db70974) */
/* WARNING: Removing unreachable block (ram,0x00014db7096f) */
/* WARNING: Removing unreachable block (ram,0x00014db70977) */

undefined8 FUN_14dcdc267(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  if (-1 < (longlong)
           (((unaff_RBP - (*(ulonglong *)(unaff_RSI + -0x80) | unaff_RBP)) +
            *(ulonglong *)(unaff_RSI + -0x80)) * 2)) {
    uVar1 = FUN_164aaafe0();
    return uVar1;
  }
  uVar1 = FUN_1659e9a6d(param_3 - unaff_RDI,
                        ~((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x58)) &
                         (~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP)),unaff_retaddr);
  return uVar1;
}



// FUNCTION 14dcdc364 thunk_FUN_14dcdc36a body=5 status=ok
// SIG undefined thunk_FUN_14dcdc36a(void)

/* WARNING: Removing unreachable block (ram,0x000156d03d0d) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc43b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc3fa) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc493) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc499) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc531) */
/* WARNING: Removing unreachable block (ram,0x00016512886c) */
/* WARNING: Removing unreachable block (ram,0x00016179191a) */

void thunk_FUN_14dcdc36a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI) {
    FUN_1657044e6(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4,
                  *(undefined8 *)(unaff_RDI + -0x90));
    return;
  }
  FUN_156d03c7d();
  return;
}



// FUNCTION 14dcdc36a FUN_14dcdc36a body=605 status=ok
// SIG undefined FUN_14dcdc36a(void)

/* WARNING: Removing unreachable block (ram,0x000156d03d0d) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc43b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc3fa) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc493) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc499) */
/* WARNING: Removing unreachable block (ram,0x00014dcdc531) */
/* WARNING: Removing unreachable block (ram,0x00016512886c) */
/* WARNING: Removing unreachable block (ram,0x00016179191a) */

void FUN_14dcdc36a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI) {
    FUN_1657044e6(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4,
                  *(undefined8 *)(unaff_RDI + -0x90));
    return;
  }
  FUN_156d03c7d();
  return;
}



// FUNCTION 14dcdc689 FUN_14dcdc689 body=35 status=ok
// SIG undefined FUN_14dcdc689(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdc6ac) */

undefined8 FUN_14dcdc689(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcdc6ac FUN_14dcdc6ac body=2 status=ok
// SIG undefined FUN_14dcdc6ac(void)

void FUN_14dcdc6ac(void)

{
  return;
}



// FUNCTION 14dcdc7ef FUN_14dcdc7ef body=44 status=ok
// SIG undefined FUN_14dcdc7ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcdc7ef(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + param_2 + (unaff_retaddr ^ 0x3c5eb286)) = unaff_R13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcdc85d FUN_14dcdc85d body=282 status=ok
// SIG undefined FUN_14dcdc85d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdc8e4) */

void FUN_14dcdc85d(void)

{
  FUN_166e077a9();
  return;
}



// FUNCTION 14dcdc8e4 FUN_14dcdc8e4 body=137 status=ok
// SIG undefined FUN_14dcdc8e4(void)

void FUN_14dcdc8e4(void)

{
  return;
}



// FUNCTION 14dcdca0d FUN_14dcdca0d body=21 status=ok
// SIG undefined FUN_14dcdca0d(void)

void FUN_14dcdca0d(void)

{
  return;
}



// FUNCTION 14dcdcaaa FUN_14dcdcaaa body=110 status=ok
// SIG undefined FUN_14dcdcaaa(void)

void FUN_14dcdcaaa(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_166b6107f(FUN_166b6107f,
                -(~(-~uVar1 - (~-(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) | uVar1) + 2)) +
                 2));
  return;
}



// FUNCTION 14dcdcbbb FUN_14dcdcbbb body=446 status=ok
// SIG undefined FUN_14dcdcbbb(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdcc4b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdcbbb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar1;
  longlong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(unaff_RBP + 0x10) =
       (0xffffffffffffffffU - unaff_R14 | *(ulonglong *)(unaff_RBP + 0x10)) + unaff_R14 + 1;
  lVar1 = param_5 + unaff_RBX + (param_5 & unaff_RBX) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_RSI;
  *(undefined8 *)(lVar1 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x18) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = 0;
  *(longlong *)(lVar1 + -8) = (longlong)(&LAB_165af2017 + *(longlong *)(lVar1 + -8));
  FUN_165af1fe5(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dcdcee3 FUN_14dcdcee3 body=134 status=ok
// SIG undefined FUN_14dcdcee3(void)

void FUN_14dcdcee3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_stack_00000008;
  
  if (-1 < (longlong)in_stack_00000008) {
    return;
  }
  FUN_16538a523((undefined4 *)(in_stack_00000008 & 0x7fffffffffffffff),
                *(undefined4 *)(in_stack_00000008 & 0x7fffffffffffffff),param_3,param_4);
  return;
}



// FUNCTION 14dcdd00e FUN_14dcdd00e body=171 status=ok
// SIG undefined FUN_14dcdd00e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdd0ba) */

void FUN_14dcdd00e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_16635c510(param_1,in_stack_00000008,param_3);
  return;
}



// FUNCTION 14dcdd0ba FUN_14dcdd0ba body=14 status=ok
// SIG undefined FUN_14dcdd0ba(void)

void FUN_14dcdd0ba(void)

{
  return;
}



// FUNCTION 14dcdd203 FUN_14dcdd203 body=151 status=ok
// SIG undefined FUN_14dcdd203(void)

void FUN_14dcdd203(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R12;
  lVar2 = *(longlong *)(in_stack_00000028 + -0x10);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res8;
  *(code **)(in_stack_00000028 + -0x28) = FUN_14dcdd29d;
  uVar3 = FUN_15b1c64d3();
  uVar1 = *(ulonglong *)(lVar2 + -0x78);
  FUN_16529465d(~(param_1 & uVar3) & (param_1 | uVar3),uVar1 + uVar3 + (uVar1 & uVar3) * -2);
  return;
}



// FUNCTION 14dcdd29d FUN_14dcdd29d body=153 status=ok
// SIG undefined FUN_14dcdd29d(void)

void FUN_14dcdd29d(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16529465d(~(param_1 & in_RAX) & (param_1 | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2);
  return;
}



// FUNCTION 14dcdd337 thunk_FUN_14dcdd33d body=5 status=ok
// SIG undefined thunk_FUN_14dcdd33d(void)

void thunk_FUN_14dcdd33d(undefined8 param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1616886fb(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  (*(code *)0x16473fc3e)
            (~unaff_R15,0x16473fc3e,*(undefined8 *)(unaff_R13 + -0x88),
             -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                  (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14dcdd33d FUN_14dcdd33d body=215 status=ok
// SIG undefined FUN_14dcdd33d(void)

void FUN_14dcdd33d(undefined8 param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1616886fb(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  (*(code *)0x16473fc3e)
            (~unaff_R15,0x16473fc3e,*(undefined8 *)(unaff_R13 + -0x88),
             -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                  (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14dcdd418 FUN_14dcdd418 body=140 status=ok
// SIG undefined FUN_14dcdd418(void)

void FUN_14dcdd418(void)

{
  FUN_164804615();
  return;
}



// FUNCTION 14dcdd4a7 FUN_14dcdd4a7 body=137 status=ok
// SIG undefined FUN_14dcdd4a7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdd4a7(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)&LAB_1611ed799)(param_1,param_2,param_3,&LAB_1611ed799);
  return;
}



// FUNCTION 14dcdd776 FUN_14dcdd776 body=163 status=ok
// SIG undefined FUN_14dcdd776(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdd776(void)

{
  FUN_161bd979f();
  (*(code *)0x15746cc5e)();
  return;
}



// FUNCTION 14dcdd81c FUN_14dcdd81c body=155 status=ok
// SIG undefined FUN_14dcdd81c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcdd81c(void)

{
  (*(code *)0x15746cc5e)();
  return;
}



// FUNCTION 14dcddefe FUN_14dcddefe body=157 status=ok
// SIG undefined FUN_14dcddefe(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcddefe(undefined8 param_1,undefined8 param_2)

{
  FUN_161d9573b(param_1,param_2);
  return;
}



// FUNCTION 14dcde039 FUN_14dcde039 body=19 status=ok
// SIG undefined FUN_14dcde039(void)

undefined4 FUN_14dcde039(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 14dcde0da FUN_14dcde0da body=156 status=ok
// SIG undefined FUN_14dcde0da(void)

void FUN_14dcde0da(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_166254cfd(~(~*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP));
  return;
}



// FUNCTION 14dcde213 FUN_14dcde213 body=288 status=ok
// SIG undefined FUN_14dcde213(void)

/* WARNING: Removing unreachable block (ram,0x00014dcde299) */
/* WARNING: Removing unreachable block (ram,0x00014dcde2a4) */
/* WARNING: Removing unreachable block (ram,0x00014dcde29f) */

void FUN_14dcde213(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong unaff_R15;
  ulonglong local_res8;
  ulonglong in_stack_00000010;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = 0xffffffffffffffff - (local_res18 & in_RAX) &
          (*(ulonglong *)((longlong)&local_res8 + unaff_R15) | in_RAX);
  uVar2 = local_res20 ^ in_RAX;
                    /* WARNING: Read-only address (ram,0x00014d7c0d49) is written */
  LOCK();
  uRam000000014d7c0d49 = (undefined1)in_stack_00000010;
  UNLOCK();
  *(undefined8 *)(uVar2 - 8) = unaff_R12;
  *(ulonglong *)(uVar2 - 0x18) = local_res8;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R12;
  *(undefined4 *)(uVar2 - 0x18) = 0xe30631a;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  uVar3 = *(undefined8 *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R13;
  *(ulonglong *)(uVar2 - 0x28) = param_3;
  *(ulonglong *)(uVar2 - 0x30) = in_stack_00000010 & 0xffffffffffffff00;
  *(undefined4 *)(uVar2 - 0x30) = 0xc6940d8;
  *(undefined4 *)(uVar2 - 0x2c) = 0;
  *(undefined8 *)(uVar2 - 0x30) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x38) = uVar3;
  local_res8 = param_3;
  FUN_16256e753(param_1,param_2,*(ulonglong *)(uVar2 - 0x28));
  return;
}



// FUNCTION 14dcde338 FUN_14dcde338 body=145 status=ok
// SIG undefined FUN_14dcde338(void)

void FUN_14dcde338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14e18d414(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcde4e9 FUN_14dcde4e9 body=296 status=ok
// SIG undefined FUN_14dcde4e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dcde560) */
/* WARNING: Removing unreachable block (ram,0x00014dcde566) */
/* WARNING: Removing unreachable block (ram,0x000161df91f0) */

void FUN_14dcde4e9(void)

{
  FUN_161df91f0();
  return;
}



// FUNCTION 14dcde77c FUN_14dcde77c body=137 status=ok
// SIG undefined FUN_14dcde77c(void)

void FUN_14dcde77c(undefined8 param_1,undefined8 param_2)

{
  FUN_166baaa97(param_1,param_2);
  return;
}



// FUNCTION 14dcde808 FUN_14dcde808 body=349 status=ok
// SIG undefined FUN_14dcde808(void)

/* WARNING: Removing unreachable block (ram,0x00014dcde89e) */

undefined8 FUN_14dcde808(undefined8 param_1,ulonglong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  if (0x485a < unaff_R13) {
    return in_RAX;
  }
  uVar1 = FUN_1648bdfcd(param_1,unaff_RDI + (param_2 & unaff_R15) * -2);
  return uVar1;
}



// FUNCTION 14dcde965 FUN_14dcde965 body=318 status=ok
// SIG undefined FUN_14dcde965(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdea02) */
/* WARNING: Removing unreachable block (ram,0x000162a0317c) */

void FUN_14dcde965(byte param_1)

{
  longlong unaff_RDI;
  byte unaff_R15B;
  
  param_1 = (byte)*(undefined8 *)(unaff_RDI + -0xa0) ^ param_1;
  FUN_166b2afc2();
  if ((byte)((-~param_1 - (~(param_1 ^ 0xff | 0xff - param_1) + 2)) + 1) < unaff_R15B) {
    FUN_161927ac2();
    return;
  }
  return;
}



// FUNCTION 14dcdeb46 FUN_14dcdeb46 body=153 status=ok
// SIG undefined FUN_14dcdeb46(void)

void FUN_14dcdeb46(void)

{
  longlong lVar1;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong unaff_R15;
  
  lVar1 = 0x24;
  FUN_1615eb0d8(&stack0x000005f8,FUN_1615eb0d8,0xeae3b39);
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15 ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = lVar1 - *(longlong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = -1 - (in_R10 & *(ulonglong *)(in_R11 + 8));
  FUN_16694afdf();
  return;
}



// FUNCTION 14dcdebdf FUN_14dcdebdf body=335 status=ok
// SIG undefined FUN_14dcdebdf(void)

void FUN_14dcdebdf(void)

{
  longlong in_R9;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong unaff_R15;
  
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15 ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = in_R9 - *(longlong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = -1 - (in_R10 & *(ulonglong *)(in_R11 + 8));
  FUN_16694afdf();
  return;
}



// FUNCTION 14dcded2f FUN_14dcded2f body=607 status=ok
// SIG undefined FUN_14dcded2f(void)

/* WARNING: Instruction at (ram,0x00014dcded3d) overlaps instruction at (ram,0x00014dcded3c)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcdedb8) */
/* WARNING: Removing unreachable block (ram,0x00014dcdee2c) */
/* WARNING: Removing unreachable block (ram,0x00014dcdee32) */

void FUN_14dcded2f(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  ulonglong unaff_retaddr;
  
  if ((unaff_retaddr & 0x40) != 0) {
    param_2 = 0xbf8d485f;
    *(char *)(unaff_RSI + -0x72b79e6c) =
         (*(char *)(unaff_RSI + -0x72b79e6c) - (char)((ulonglong)param_1 >> 8)) -
         ((unaff_retaddr & 1) != 0);
  }
  FUN_15757991f(param_1,param_2);
  FUN_166aba437();
  return;
}



// FUNCTION 14dcdf16d FUN_14dcdf16d body=145 status=ok
// SIG undefined FUN_14dcdf16d(void)

void FUN_14dcdf16d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong local_res8;
  ulonglong uStackX_10;
  
  local_res8 = local_res8 ^ in_RAX;
  uStackX_10 = ~((in_RAX ^ 0xffffffffffffffff | uStackX_10) &
                (0xfffffffffffffffe - ~-uStackX_10 | in_RAX));
  FUN_164b9fbd0(param_1,param_2,param_3,&local_res8);
  return;
}



// FUNCTION 14dcdf296 FUN_14dcdf296 body=149 status=ok
// SIG undefined FUN_14dcdf296(void)

void FUN_14dcdf296(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_14e0a9c90(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dcdf517 FUN_14dcdf517 body=144 status=ok
// SIG undefined FUN_14dcdf517(void)

undefined8 FUN_14dcdf517(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  longlong unaff_R14;
  byte in_CF;
  
  FUN_1648d731d(param_1,unaff_R14 + *(longlong *)(unaff_RDI + -0x58) + (ulonglong)in_CF | param_1,
                param_3,~*(ulonglong *)(unaff_RDI + -0x38));
  return 0x18;
}



// FUNCTION 14dcdf5a8 FUN_14dcdf5a8 body=80 status=ok
// SIG undefined FUN_14dcdf5a8(void)

undefined8 FUN_14dcdf5a8(void)

{
  return 0x18;
}



// FUNCTION 14dcdf6c7 FUN_14dcdf6c7 body=102 status=ok
// SIG undefined FUN_14dcdf6c7(void)

void FUN_14dcdf6c7(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x14d9d3d8c)(0x14d9d3d8c,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dcdf72e FUN_14dcdf72e body=462 status=ok
// SIG undefined FUN_14dcdf72e(void)

/* WARNING: Removing unreachable block (ram,0x000156d0cf3b) */
/* WARNING: Removing unreachable block (ram,0x000156d0cfa4) */
/* WARNING: Removing unreachable block (ram,0x000156445955) */
/* WARNING: Removing unreachable block (ram,0x00015644595b) */
/* WARNING: Removing unreachable block (ram,0x00014dcdf7c1) */
/* WARNING: Removing unreachable block (ram,0x00014dcdf84b) */

void FUN_14dcdf72e(void)

{
  FUN_156d0cf3b();
  return;
}



// FUNCTION 14dcdf864 FUN_14dcdf864 body=141 status=ok
// SIG undefined FUN_14dcdf864(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdf8f4) */

undefined8
FUN_14dcdf864(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_R15;
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | in_RAX;
  *(ulonglong *)(param_1 + 8) = -1 - ((~in_stack_00000008 | uVar1) & *(ulonglong *)(param_1 + 8));
  puVar4 = (undefined8 *)(param_6 + in_RAX + (param_6 & in_RAX) * -2);
  if (param_6 + in_RAX < (param_6 & in_RAX) * 2) {
    uVar3 = FUN_1575ba376();
    return uVar3;
  }
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(in_stack_00000010,param_2,param_3);
  *puVar4 = unaff_R15;
  puVar4[-1] = unaff_R15;
  *(undefined4 *)(puVar4 + -2) = 0xa9c1a50;
  *(undefined4 *)((longlong)puVar4 + -0xc) = 0;
  puVar4[-3] = 0x1575ba419;
  uVar3 = FUN_15b57c3e9();
  return uVar3;
}



// FUNCTION 14dcdf8f4 FUN_14dcdf8f4 body=99 status=ok
// SIG undefined FUN_14dcdf8f4(void)

undefined8 FUN_14dcdf8f4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcdf958 FUN_14dcdf958 body=635 status=ok
// SIG undefined FUN_14dcdf958(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdf9f2) */
/* WARNING: Removing unreachable block (ram,0x00014dcdf9f8) */
/* WARNING: Removing unreachable block (ram,0x00014dcdf9fd) */

void FUN_14dcdf958(char param_1)

{
  ulonglong uVar1;
  byte unaff_SIL;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar2 = (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1;
  FUN_15b7cb974(param_1 - ~unaff_SIL,~uVar1,
                ~((~uVar2 | unaff_R15 ^ 0xffffffffffffffff | uVar1) + uVar2 + 1));
  return;
}



// FUNCTION 14dcdfda8 FUN_14dcdfda8 body=165 status=ok
// SIG undefined FUN_14dcdfda8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcdfe38) */
/* WARNING: Removing unreachable block (ram,0x00014dcdfe4f) */
/* WARNING: Removing unreachable block (ram,0x00014dcdfe44) */

undefined8 FUN_14dcdfda8(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar1 = *param_3;
  *param_3 = *param_3 & unaff_R15;
  *param_3 = (uVar1 + unaff_R15) - *param_3;
  *param_3 = ~((*param_3 - (in_RAX | *param_3)) + in_RAX);
  return in_stack_00000010;
}



// FUNCTION 14dcdfe4f FUN_14dcdfe4f body=48 status=ok
// SIG undefined FUN_14dcdfe4f(void)

undefined8 FUN_14dcdfe4f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcdfe80 FUN_14dcdfe80 body=12 status=ok
// SIG undefined FUN_14dcdfe80(void)

void FUN_14dcdfe80(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dcdffb7 FUN_14dcdffb7 body=1052 status=ok
// SIG undefined FUN_14dcdffb7(void)

/* WARNING: Instruction at (ram,0x00014da6bf78) overlaps instruction at (ram,0x00014da6bf76)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016647041c) */
/* WARNING: Removing unreachable block (ram,0x000166470422) */
/* WARNING: Removing unreachable block (ram,0x00014dce00e0) */
/* WARNING: Removing unreachable block (ram,0x00014dce017c) */
/* WARNING: Removing unreachable block (ram,0x00014dce0187) */
/* WARNING: Removing unreachable block (ram,0x000161ddc0eb) */
/* WARNING: Removing unreachable block (ram,0x00014dce035b) */
/* WARNING: Removing unreachable block (ram,0x00014dce0366) */
/* WARNING: Removing unreachable block (ram,0x00014dce03c7) */
/* WARNING: Removing unreachable block (ram,0x00014dce03ca) */
/* WARNING: Removing unreachable block (ram,0x00014dce03f5) */
/* WARNING: Removing unreachable block (ram,0x00014dce0400) */
/* WARNING: Removing unreachable block (ram,0x00014dce03fb) */
/* WARNING: Removing unreachable block (ram,0x00014dce03f0) */
/* WARNING: Removing unreachable block (ram,0x00014dce0361) */
/* WARNING: Removing unreachable block (ram,0x00014dce0182) */
/* WARNING: Removing unreachable block (ram,0x00016234894f) */
/* WARNING: Removing unreachable block (ram,0x0001568a0bf5) */
/* WARNING: Removing unreachable block (ram,0x00016234898c) */
/* WARNING: Removing unreachable block (ram,0x0001646e3ce3) */
/* WARNING: Removing unreachable block (ram,0x000166470229) */
/* WARNING: Removing unreachable block (ram,0x00016647022f) */
/* WARNING: Removing unreachable block (ram,0x000166470232) */
/* WARNING: Removing unreachable block (ram,0x000166470243) */
/* WARNING: Removing unreachable block (ram,0x000166470242) */
/* WARNING: Removing unreachable block (ram,0x00016647029c) */
/* WARNING: Removing unreachable block (ram,0x0001664702c4) */
/* WARNING: Removing unreachable block (ram,0x0001664702cf) */
/* WARNING: Removing unreachable block (ram,0x00016647037e) */
/* WARNING: Removing unreachable block (ram,0x00014da6bea2) */
/* WARNING: Removing unreachable block (ram,0x00014da6bf15) */
/* WARNING: Removing unreachable block (ram,0x00014da6bf14) */
/* WARNING: Removing unreachable block (ram,0x00014da6bf78) */
/* WARNING: Removing unreachable block (ram,0x00014da6bf1b) */
/* WARNING: Removing unreachable block (ram,0x00014da6bf1d) */
/* WARNING: Removing unreachable block (ram,0x0001659f61b5) */
/* WARNING: Removing unreachable block (ram,0x00016647028b) */
/* WARNING: Removing unreachable block (ram,0x0001646e3cef) */
/* WARNING: Removing unreachable block (ram,0x00014dce0058) */
/* WARNING: Removing unreachable block (ram,0x00014dce00da) */
/* WARNING: Removing unreachable block (ram,0x00016107ee34) */
/* WARNING: Removing unreachable block (ram,0x000165a91d48) */

undefined8 FUN_14dcdffb7(void)

{
  undefined8 uVar1;
  
  FUN_166ad2cea();
  uVar1 = FUN_166470229();
  return uVar1;
}



// FUNCTION 14dce0366 FUN_14dce0366 body=152 status=ok
// SIG undefined FUN_14dce0366(void)

/* WARNING: Removing unreachable block (ram,0x00014dce03c7) */
/* WARNING: Removing unreachable block (ram,0x00014dce0400) */

void FUN_14dce0366(void)

{
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -0x78) == 0) {
    FUN_15b1937e7();
    return;
  }
  FUN_15b1937e7();
  return;
}



// FUNCTION 14dce0400 FUN_14dce0400 body=140 status=ok
// SIG undefined FUN_14dce0400(void)

void FUN_14dce0400(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  code *pcVar1;
  longlong unaff_RDI;
  undefined8 uStackX_10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(uStackX_10,param_2,param_3,param_4);
  *(undefined8 *)(unaff_RDI - (param_6 << (param_1 & 0x3f))) = 0x10c58be;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dce05f8 FUN_14dce05f8 body=307 status=ok
// SIG undefined FUN_14dce05f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dce0719) */
/* WARNING: Removing unreachable block (ram,0x00014dce071f) */
/* WARNING: Removing unreachable block (ram,0x0001617648ce) */
/* WARNING: Removing unreachable block (ram,0x0001617648d4) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dce0724) */
/* WARNING: Removing unreachable block (ram,0x00014dce068b) */

void FUN_14dce05f8(void)

{
  return;
}



// FUNCTION 14dce068b FUN_14dce068b body=172 status=ok
// SIG undefined FUN_14dce068b(void)

/* WARNING: Removing unreachable block (ram,0x00014dce0719) */
/* WARNING: Removing unreachable block (ram,0x00014dce071f) */
/* WARNING: Removing unreachable block (ram,0x0001617648ce) */
/* WARNING: Removing unreachable block (ram,0x0001617648d4) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dce0724) */

void FUN_14dce068b(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) ^ 0xffffffffffffffff | unaff_R15;
  FUN_165c4b0ff(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),~((uVar2 - (uVar1 | uVar2)) + uVar1)
               );
  return;
}



// FUNCTION 14dce0876 FUN_14dce0876 body=269 status=ok
// SIG undefined FUN_14dce0876(void)

void FUN_14dce0876(void)

{
  undefined8 local_res10;
  
  FUN_15b627007();
  thunk_FUN_157438286(local_res10);
  return;
}



// FUNCTION 14dce0987 FUN_14dce0987 body=173 status=ok
// SIG undefined FUN_14dce0987(void)

void FUN_14dce0987(void)

{
  return;
}



// FUNCTION 14dce0ae6 FUN_14dce0ae6 body=182 status=ok
// SIG undefined FUN_14dce0ae6(void)

void FUN_14dce0ae6(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  (*(code *)&LAB_1668f4c13)
            (&LAB_1668f4c13,uVar1,(~*(ulonglong *)(unaff_R13 + -0x88) | ~unaff_R15) & uVar1,
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dce0b9d FUN_14dce0b9d body=618 status=ok
// SIG undefined FUN_14dce0b9d(void)

/* WARNING: Removing unreachable block (ram,0x00014dce0d47) */
/* WARNING: Removing unreachable block (ram,0x00014dce0d52) */
/* WARNING: Removing unreachable block (ram,0x00014dce0d4d) */

void FUN_14dce0b9d(void)

{
  FUN_160bec99d();
  FUN_156dc92fe();
  FUN_14d987fda();
  return;
}



// FUNCTION 14dce0e9e FUN_14dce0e9e body=172 status=ok
// SIG undefined FUN_14dce0e9e(void)

ulonglong FUN_14dce0e9e(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  
  return ~(unaff_RDI & in_RAX);
}



// FUNCTION 14dce0f4e FUN_14dce0f4e body=174 status=ok
// SIG undefined FUN_14dce0f4e(void)

void FUN_14dce0f4e(undefined8 param_1,undefined8 param_2)

{
  FUN_156a2dced(param_1,param_2,FUN_156a2dced);
  return;
}



// FUNCTION 14dce0ffc FUN_14dce0ffc body=165 status=ok
// SIG undefined FUN_14dce0ffc(void)

void FUN_14dce0ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res18;
  
  *unaff_RDI = (*unaff_RDI | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = param_1;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(code **)(param_5 + -0x10) = FUN_14dce10a2;
  FUN_1613b73a6(*(undefined8 *)(param_5 + -0x18),param_2,local_res18);
  return;
}



// FUNCTION 14dce10a2 FUN_14dce10a2 body=143 status=ok
// SIG undefined FUN_14dce10a2(void)

void FUN_14dce10a2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ushort local_res18;
  
  local_res18 = local_res18 ^ (ushort)param_1;
  (*(code *)&LAB_14d80d010)
            (local_res10 ^ param_1,in_stack_00000008,param_3,~(~local_res18 & 0xfeff) - 0x101);
  return;
}



// FUNCTION 14dce1132 FUN_14dce1132 body=43 status=ok
// SIG undefined FUN_14dce1132(void)

void FUN_14dce1132(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dce12f3 FUN_14dce12f3 body=302 status=ok
// SIG undefined FUN_14dce12f3(void)

/* WARNING: Removing unreachable block (ram,0x0001624ced66) */
/* WARNING: Removing unreachable block (ram,0x0001624ced6c) */
/* WARNING: Removing unreachable block (ram,0x000162607c35) */
/* WARNING: Removing unreachable block (ram,0x00014dce1412) */
/* WARNING: Removing unreachable block (ram,0x00014dce1423) */
/* WARNING: Removing unreachable block (ram,0x00014dce14a5) */
/* WARNING: Removing unreachable block (ram,0x00014dce14ab) */
/* WARNING: Removing unreachable block (ram,0x00014dce14b0) */
/* WARNING: Removing unreachable block (ram,0x00014dce1518) */
/* WARNING: Removing unreachable block (ram,0x00014dce151e) */
/* WARNING: Removing unreachable block (ram,0x00015b9bac4a) */
/* WARNING: Removing unreachable block (ram,0x0001624cec2c) */
/* WARNING: Removing unreachable block (ram,0x0001624ced61) */
/* WARNING: Removing unreachable block (ram,0x00014dce141e) */

void FUN_14dce12f3(void)

{
  FUN_16296a6c5();
  FUN_164b2490f();
  return;
}



// FUNCTION 14dce1423 FUN_14dce1423 body=394 status=ok
// SIG undefined FUN_14dce1423(void)

/* WARNING: Removing unreachable block (ram,0x0001624ced66) */
/* WARNING: Removing unreachable block (ram,0x0001624ced6c) */
/* WARNING: Removing unreachable block (ram,0x000162607c35) */
/* WARNING: Removing unreachable block (ram,0x00014dce14b0) */
/* WARNING: Removing unreachable block (ram,0x00014dce1518) */
/* WARNING: Removing unreachable block (ram,0x00015b9bac4a) */
/* WARNING: Removing unreachable block (ram,0x00014dce151e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dce1423(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  short *unaff_RBP;
  ulonglong uVar4;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined2 uStackX_8;
  
  uVar3 = -param_4 + param_1;
  uVar4 = -param_4 & param_1;
  if (uVar3 < uVar4 * 2) {
    FUN_1624cec2c();
    return;
  }
  FUN_160e3ef4c(param_1,param_2);
  *unaff_RBP = uStackX_8 + -0x101 + *unaff_RBP;
  plVar1 = (longlong *)(param_7 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (uVar3 + uVar4 * -2);
  *plVar1 = -*plVar1;
  *(undefined8 *)(param_7 + -0x10) = unaff_R14;
  *(undefined8 *)(param_7 + -0x18) = unaff_R14;
  *(undefined8 *)(param_7 + -0x20) = unaff_R12;
  puVar2 = (uint *)(param_7 + -0x28);
  *puVar2 = 0xc0cfbf0e;
  *puVar2 = *puVar2 ^ 0x6215b4ef;
  *(undefined4 *)(param_7 + -0x24) = 0xffffffff;
  *(undefined8 *)(param_7 + -0x28) = in_R11;
  FUN_162607c35();
  return;
}



// FUNCTION 14dce1524 FUN_14dce1524 body=309 status=ok
// SIG undefined FUN_14dce1524(void)

/* WARNING: Removing unreachable block (ram,0x00014dce15bd) */
/* WARNING: Removing unreachable block (ram,0x00014dce15c3) */

void FUN_14dce1524(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d9d7105(-1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                     (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dce165d FUN_14dce165d body=454 status=ok
// SIG undefined FUN_14dce165d(void)

/* WARNING: Removing unreachable block (ram,0x00014dce1726) */

void FUN_14dce165d(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ushort uVar1;
  
  if ((0xffffffffffff9399 < unaff_RDI - 0x6d06U) && (unaff_RDI - 0x6d06U < 0xffffffffffff939a)) {
    uVar1 = -(((ushort)*(undefined8 *)(unaff_RDI + -0x98) ^ 0x77c1) - *param_2);
    FUN_165113dba(param_1,param_2,
                  CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_RDI + -0x98) >> 0x10),
                           (-0x102 - (uVar1 & 0xfeff)) - ~uVar1),FUN_165113dba);
    return;
  }
  FUN_161652415(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -8));
  return;
}



// FUNCTION 14dce1828 FUN_14dce1828 body=140 status=ok
// SIG undefined FUN_14dce1828(void)

/* WARNING: Removing unreachable block (ram,0x00014dce191c) */
/* WARNING: Removing unreachable block (ram,0x00014dce18b4) */
/* WARNING: Removing unreachable block (ram,0x00014dce1920) */
/* WARNING: Removing unreachable block (ram,0x00014dce196b) */
/* WARNING: Removing unreachable block (ram,0x00014dce1966) */
/* WARNING: Removing unreachable block (ram,0x0001616832b1) */
/* WARNING: Removing unreachable block (ram,0x00014dce1971) */

ulonglong FUN_14dce1828(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  if ((longlong)(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) < 0) {
    return in_RAX;
  }
  uVar1 = FUN_165a7d518();
  return uVar1;
}



// FUNCTION 14dce18b4 FUN_14dce18b4 body=347 status=ok
// SIG undefined FUN_14dce18b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dce191c) */
/* WARNING: Removing unreachable block (ram,0x00014dce1971) */

void FUN_14dce18b4(ulonglong param_1)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 local_res10;
  undefined8 in_stack_00000020;
  ulonglong in_stack_00000030;
  
  uVar2 = ~(1U - in_RAX) + (1U - in_RAX) + 1 + *(longlong *)(unaff_RDI + -0x70);
  lVar1 = FUN_1653da765(param_1,*(undefined8 *)(unaff_RDI + -0x80),
                        ~((param_1 ^ 0xffffffffffffffff | uVar2) & (~uVar2 | param_1)),
                        *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  *(ulonglong *)(&stack0xfffffffff1a57d50 + lVar1) =
       (~param_1 | *(ulonglong *)(&stack0xfffffffff1a57d50 + lVar1)) + param_1 + 1;
  in_stack_00000030 = in_stack_00000030 ^ param_1;
  *(undefined8 *)(in_stack_00000030 - 8) = local_res10;
  *(undefined **)(in_stack_00000030 - 0x10) = &DAT_1651326c7;
  *(undefined **)(in_stack_00000030 - 0x18) = &DAT_1651326c7;
  *(undefined8 *)(in_stack_00000030 - 0x10) = *(undefined8 *)(in_stack_00000030 - 8);
  *(undefined8 *)(in_stack_00000030 - 0x20) = 0x1616833c4;
  FUN_165132661(in_stack_00000020);
  thunk_FUN_1616833d0();
  return;
}



// FUNCTION 14dce1ac3 FUN_14dce1ac3 body=134 status=ok
// SIG undefined FUN_14dce1ac3(void)

void FUN_14dce1ac3(void)

{
  FUN_166cdee7a();
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dce1b4b FUN_14dce1b4b body=14 status=ok
// SIG undefined FUN_14dce1b4b(void)

void FUN_14dce1b4b(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dce1ce6 FUN_14dce1ce6 body=290 status=ok
// SIG undefined FUN_14dce1ce6(void)

/* WARNING: Removing unreachable block (ram,0x0001569c8f9c) */
/* WARNING: Removing unreachable block (ram,0x00014dce1d6c) */

void FUN_14dce1ce6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 uStackX_18;
  
  uVar4 = ~param_1 | *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) ^ 0xffffffffffffffff;
  lVar1 = *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) & param_1;
  *(ulonglong *)(unaff_RBX + 8) = (lVar1 + param_1) - *(longlong *)(unaff_RBX + 8);
  uVar3 = *(longlong *)(unaff_RBX + 8) -
          ((~(uVar4 & *(ulonglong *)(unaff_RBX + 8)) + *(longlong *)(unaff_RBX + 8)) - ~uVar4);
  if (CARRY8(uVar3,uVar4)) {
    FUN_1569c8ef7();
    return;
  }
  *(ulonglong *)(unaff_RBX + 8) = ~(uVar3 + uVar4);
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = local_res8;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = local_res10;
  *(undefined8 *)(param_5 - 0x20) = param_3;
  uVar2 = *(undefined8 *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 8) = 0x1d2f4f9;
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ 0x1d2f4f9;
  *(undefined8 *)(param_5 - 0x18) = in_R11;
  *(undefined8 *)(param_5 - 0x20) = unaff_RBP;
  *(ulonglong *)(param_5 - 8) = ~*(ulonglong *)(param_5 - 8);
  uVar3 = *(ulonglong *)(param_5 - 8);
  *(ulonglong *)(param_5 - 8) = 0x164841045 - *(ulonglong *)(param_5 - 8);
  if (uVar3 < 0x164841046) {
    thunk_FUN_15b642ca5(uStackX_18,param_2,uVar2);
    return;
  }
  FUN_16484100e();
  return;
}



// FUNCTION 14dce1e0b FUN_14dce1e0b body=106 status=ok
// SIG undefined FUN_14dce1e0b(void)

void FUN_14dce1e0b(ulonglong param_1)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *(longlong *)(unaff_RBX + 0x10) = -*(longlong *)(unaff_RBX + 0x10);
  *(longlong *)(unaff_RBX + 0x10) = *(longlong *)(unaff_RBX + 0x10) + -1;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | param_1;
  *(ulonglong *)(unaff_RBX + 0x10) = ~(unaff_RSI & *(ulonglong *)(unaff_RBX + 0x10));
  puVar1 = (undefined8 *)(in_stack_00000028 + -8);
  *puVar1 = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *puVar1;
  *puVar1 = &LAB_14dce1e87;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14dce1eb3 FUN_14dce1eb3 body=139 status=ok
// SIG undefined FUN_14dce1eb3(void)

void FUN_14dce1eb3(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16555d4bb(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dce1fd4 FUN_14dce1fd4 body=176 status=ok
// SIG undefined FUN_14dce1fd4(void)

void FUN_14dce1fd4(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong in_RAX;
  longlong unaff_RSI;
  ulonglong uVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lStackX_8;
  undefined1 auStackX_10 [24];
  
  plVar1 = (longlong *)((longlong)&lStackX_8 + unaff_RSI);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_RAX;
  lVar2 = *plVar1;
  *(undefined4 *)plVar1 = 0x929c813;
  *(longlong *)(auStackX_10 + unaff_RSI + -0x10) = lVar2;
  *(undefined4 *)(auStackX_10 + unaff_RSI + -0x10) = 0xa294a91;
  *(undefined4 *)(auStackX_10 + unaff_RSI + -0xc) = 0;
  lVar2 = *(longlong *)(auStackX_10 + unaff_RSI + -0x10);
  *(undefined4 *)(auStackX_10 + unaff_RSI + -0x10) = 0x28195e28;
  *(undefined4 *)(auStackX_10 + unaff_RSI + -0xc) = 0;
  *(undefined4 *)
   ((longlong)&lStackX_8 +
   (lVar2 - ~(~(*(ulonglong *)(auStackX_10 + unaff_RSI + -0x10) & 0xffffffffddcfeb5a) &
             (*(ulonglong *)(auStackX_10 + unaff_RSI + -0x10) | 0xffffffffddcfeb5a))) + unaff_RSI) =
       0;
  uVar4 = *(longlong *)((longlong)&lStackX_8 + unaff_RSI) - 0x929c81b;
  puVar3 = &stack0xfffffffff6d637f5 + uVar4 + unaff_RSI + 0x929c81b;
  *(ulonglong *)(puVar3 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 |
       (ulonglong)SCARRY8((longlong)(auStackX_10 + unaff_RSI),uVar4) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)puVar3 < 0) * 0x80 | (ulonglong)(puVar3 == (undefined1 *)0x0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)puVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)(auStackX_10 + unaff_RSI),uVar4) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  FUN_16127b84c(param_1,FUN_16127b84c);
  return;
}



// FUNCTION 14dce2084 FUN_14dce2084 body=80 status=ok
// SIG undefined FUN_14dce2084(void)

void FUN_14dce2084(void)

{
  return;
}



// FUNCTION 14dce2195 FUN_14dce2195 body=308 status=ok
// SIG undefined FUN_14dce2195(void)

/* WARNING: Removing unreachable block (ram,0x00014dce229a) */
/* WARNING: Removing unreachable block (ram,0x00014dce2217) */

undefined8
FUN_14dce2195(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  FUN_165cda5d9(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  uVar1 = FUN_14db080a1();
  return uVar1;
}



// FUNCTION 14dce23a6 FUN_14dce23a6 body=7 status=ok
// SIG undefined FUN_14dce23a6(void)

void FUN_14dce23a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1567dd3b2(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dce24d4 FUN_14dce24d4 body=125 status=ok
// SIG undefined FUN_14dce24d4(void)

void FUN_14dce24d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  lVar3 = *(longlong *)(unaff_RDI + 0x10);
  *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 0x10);
  *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) << 1;
  *(longlong *)(unaff_RDI + 0x10) = (lVar3 + -1) - *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~((~(in_R10 & uVar1) + lVar2) - ~in_R10) | ~*(ulonglong *)(unaff_RDI + 0x10);
  (*(code *)0x164f9a90a)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dce2552 FUN_14dce2552 body=182 status=ok
// SIG undefined FUN_14dce2552(void)

void FUN_14dce2552(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int unaff_R12D;
  undefined8 in_stack_00000008;
  
  FUN_16162ab45(param_1,0x65ddc8b,unaff_R12D - (param_3 ^ 0xffffffff),param_4,in_stack_00000008);
  return;
}



// FUNCTION 14dce26a7 FUN_14dce26a7 body=147 status=ok
// SIG undefined FUN_14dce26a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dce273b) */
/* WARNING: Removing unreachable block (ram,0x00014dce27d2) */
/* WARNING: Removing unreachable block (ram,0x00014dce27d8) */
/* WARNING: Removing unreachable block (ram,0x000162d41e75) */

undefined8 FUN_14dce26a7(void)

{
  undefined8 uVar1;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_18;
  
  local_18 = unaff_RDI ^ unaff_R15;
  if (-1 < (longlong)&local_18) {
    uVar1 = FUN_162d39cb6();
    return uVar1;
  }
  return unaff_retaddr;
}



// FUNCTION 14dce273b FUN_14dce273b body=169 status=ok
// SIG undefined FUN_14dce273b(void)

/* WARNING: Removing unreachable block (ram,0x00014dce27d8) */

void FUN_14dce273b(void)

{
  return;
}



// FUNCTION 14dce27d8 FUN_14dce27d8 body=59 status=ok
// SIG undefined FUN_14dce27d8(void)

void FUN_14dce27d8(void)

{
  return;
}



// FUNCTION 14dce2856 FUN_14dce2856 body=621 status=ok
// SIG undefined FUN_14dce2856(void)

/* WARNING: Removing unreachable block (ram,0x00014def3c64) */
/* WARNING: Removing unreachable block (ram,0x00014dce2877) */
/* WARNING: Removing unreachable block (ram,0x00014def3c74) */
/* WARNING: Removing unreachable block (ram,0x0001566e612c) */
/* WARNING: Removing unreachable block (ram,0x0001566e6132) */
/* WARNING: Removing unreachable block (ram,0x00014dce28df) */
/* WARNING: Removing unreachable block (ram,0x00014dce2975) */
/* WARNING: Removing unreachable block (ram,0x00014dce297b) */
/* WARNING: Removing unreachable block (ram,0x00014def3bc5) */

undefined8 FUN_14dce2856(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong uStackX_18;
  
  uVar1 = ~((~(~local_res8 & ~unaff_R15) + ~unaff_R15) - local_res8);
  if (-1 < (longlong)(uVar1 * 2)) {
    uVar3 = FUN_1566e608c();
    return uVar3;
  }
  uVar2 = uStackX_18 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = in_RAX;
  *(code **)(uVar2 - 0x18) = FUN_1623dae60;
  FUN_15b78d256(param_1,param_2,param_3,param_4);
  *(ulonglong *)(uVar2 - 0x10) =
       *(ulonglong *)(~unaff_RBX - 0x38) ^ local_res8 + unaff_R15 + uVar1 * -2;
  *(ulonglong *)(uVar2 - 0x18) = (~param_2 | ~param_3) + param_2 + 1;
  uVar3 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined1 **)(uVar2 - 0x10) = &LAB_16134548c;
  return uVar3;
}



// FUNCTION 14dce2a03 FUN_14dce2a03 body=255 status=ok
// SIG undefined FUN_14dce2a03(void)

/* WARNING: Removing unreachable block (ram,0x00014dce2aa9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dce2a03(longlong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000020;
  ulonglong in_stack_00000028;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(&stack0x00000018 + unaff_R15) =
       (in_RAX - (*(ulonglong *)(&stack0x00000018 + unaff_R15) | in_RAX)) +
       *(longlong *)(&stack0x00000018 + unaff_R15);
  in_stack_00000028 = param_1 + in_stack_00000028 * -2;
  if (in_stack_00000030 == in_RAX) {
    _DAT_fffffffffffffff8 = 0x35c583a;
    _DAT_ffffffffffffffe8 = in_stack_00000020;
    _DAT_ffffffffffffffe0 = unaff_retaddr;
    _DAT_ffffffffffffffd8 =
         (ulonglong)((in_stack_00000028 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((in_stack_00000028 & 0x800) != 0) * 0x800 |
         (ulonglong)((in_stack_00000028 & 0x400) != 0) * 0x400 |
         (ulonglong)((in_stack_00000028 & 0x200) != 0) * 0x200 |
         (ulonglong)((in_stack_00000028 & 0x80) != 0) * 0x80 |
         (ulonglong)((in_stack_00000028 & 0x40) != 0) * 0x40 |
         (ulonglong)((in_stack_00000028 & 0x10) != 0) * 0x10 |
         (ulonglong)((in_stack_00000028 & 4) != 0) * 4 | (ulonglong)((in_stack_00000028 & 1) != 0) |
         (ulonglong)((in_stack_00000028 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((in_stack_00000028 & 0x40000) != 0) * 0x40000;
    _DAT_fffffffffffffff0 = &LAB_16193f33d;
    return in_stack_00000020;
  }
  uVar1 = FUN_16193f2e4();
  return uVar1;
}



// FUNCTION 14dce2da8 FUN_14dce2da8 body=136 status=ok
// SIG undefined FUN_14dce2da8(void)

void FUN_14dce2da8(void)

{
  ulonglong unaff_retaddr;
  ulonglong local_res8;
  
  FUN_1647772e7(~(local_res8 & unaff_retaddr) & (local_res8 | unaff_retaddr),FUN_1647772e7);
  return;
}



// FUNCTION 14dce2ed2 FUN_14dce2ed2 body=178 status=ok
// SIG undefined FUN_14dce2ed2(void)

void FUN_14dce2ed2(undefined8 param_1,undefined8 param_2)

{
  FUN_16667f1fc(param_1,param_2);
  return;
}



// FUNCTION 14dce2ff8 thunk_FUN_14dce2ffe body=5 status=ok
// SIG undefined thunk_FUN_14dce2ffe(void)

void thunk_FUN_14dce2ffe(void)

{
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  (*(code *)&LAB_156865c79)
            (unaff_retaddr + unaff_R15 + ~(~unaff_retaddr | ~unaff_R15) * -2,&LAB_156865c79);
  return;
}



// FUNCTION 14dce2ffe FUN_14dce2ffe body=135 status=ok
// SIG undefined FUN_14dce2ffe(void)

void FUN_14dce2ffe(void)

{
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  (*(code *)&LAB_156865c79)
            (unaff_retaddr + unaff_R15 + ~(~unaff_retaddr | ~unaff_R15) * -2,&LAB_156865c79);
  return;
}



// FUNCTION 14dce3118 FUN_14dce3118 body=131 status=ok
// SIG undefined FUN_14dce3118(void)

void FUN_14dce3118(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong in_RAX;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  pvVar3 = ProcessEnvironmentBlock;
  uVar1 = 0xffffffffffffffffU - local_res10 & in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  uVar4 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  uVar4 = *(ulonglong *)(uVar1 - 0x18);
  *(void **)(uVar1 - 0x18) = pvVar3;
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x491581a;
  FUN_165c7153c(unaff_retaddr,uVar2);
  return;
}



// FUNCTION 14dce3245 FUN_14dce3245 body=187 status=ok
// SIG undefined FUN_14dce3245(void)

void FUN_14dce3245(void)

{
  FUN_1610924f2(0x12946295);
  FUN_156c79161();
  return;
}



// FUNCTION 14dce340f FUN_14dce340f body=154 status=ok
// SIG undefined FUN_14dce340f(void)

void FUN_14dce340f(undefined8 param_1)

{
  FUN_162df622b(param_1,FUN_162df622b);
  return;
}



// FUNCTION 14dce34aa FUN_14dce34aa body=229 status=ok
// SIG undefined FUN_14dce34aa(void)

void FUN_14dce34aa(undefined8 param_1,undefined8 param_2)

{
  FUN_14d7f6efe(param_1,param_2);
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dce37ac FUN_14dce37ac body=152 status=ok
// SIG undefined FUN_14dce37ac(void)

void FUN_14dce37ac(void)

{
  FUN_14deb09ce();
  return;
}



// FUNCTION 14dce3aa4 FUN_14dce3aa4 body=159 status=ok
// SIG undefined FUN_14dce3aa4(void)

void FUN_14dce3aa4(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + param_2 + ~(in_RAX & unaff_RBP));
  uVar2 = ~uVar1 | param_1;
  FUN_1659e6b2f(param_1,0xfffffffffffffff8,~((~uVar2 | ~param_1 | uVar1) + uVar2 + 1));
  return;
}



// FUNCTION 14dce3c6c FUN_14dce3c6c body=136 status=ok
// SIG undefined FUN_14dce3c6c(void)

void FUN_14dce3c6c(void)

{
  undefined8 in_R9;
  undefined8 in_R10;
  ulonglong uVar1;
  undefined8 uStackX_8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  _fxrstor(local_res18);
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  uVar1 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = in_R9;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x50ba942;
  *(code **)(local_res18 + -0x18) = FUN_14dce3cf4;
  FUN_165a09b31();
  return;
}



// FUNCTION 14dce3cf4 FUN_14dce3cf4 body=3 status=ok
// SIG undefined FUN_14dce3cf4(void)

void FUN_14dce3cf4(void)

{
  return;
}



// FUNCTION 14dce3d84 FUN_14dce3d84 body=46 status=ok
// SIG undefined FUN_14dce3d84(void)

void FUN_14dce3d84(void)

{
  return;
}



// FUNCTION 14dce3f30 FUN_14dce3f30 body=302 status=ok
// SIG undefined FUN_14dce3f30(void)

/* WARNING: Removing unreachable block (ram,0x00014dce3fdb) */

undefined8 FUN_14dce3f30(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x58) == 0x1fd1839d98de3b3c) {
    uVar1 = FUN_164a5eec9();
    return uVar1;
  }
  uVar1 = FUN_1567eebf8(param_1,param_2 << 0xb,FUN_1567eebf8);
  return uVar1;
}



// FUNCTION 14dce4065 FUN_14dce4065 body=35 status=ok
// SIG undefined FUN_14dce4065(void)

void FUN_14dce4065(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  if ((uStackX_8 & 1) == 0) {
    FUN_14dce40a9();
    return;
  }
  FUN_166a6a589(param_1);
  return;
}



// FUNCTION 14dce4089 FUN_14dce4089 body=25 status=ok
// SIG undefined FUN_14dce4089(void)

void FUN_14dce4089(void)

{
  FUN_166a6a589();
  return;
}



// FUNCTION 14dce40a9 FUN_14dce40a9 body=58 status=ok
// SIG undefined FUN_14dce40a9(void)

void FUN_14dce40a9(void)

{
  FUN_164f298b2();
  return;
}



// FUNCTION 14dce418a FUN_14dce418a body=139 status=ok
// SIG undefined FUN_14dce418a(void)

void FUN_14dce418a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1660b3791(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) << 1);
  return;
}



// FUNCTION 14dce457b FUN_14dce457b body=130 status=ok
// SIG undefined FUN_14dce457b(void)

void FUN_14dce457b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15647eb99(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dce4682 FUN_14dce4682 body=143 status=ok
// SIG undefined FUN_14dce4682(void)

void FUN_14dce4682(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161c85089(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14dce479c FUN_14dce479c body=140 status=ok
// SIG undefined FUN_14dce479c(void)

undefined8 FUN_14dce479c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dce496d FUN_14dce496d body=200 status=ok
// SIG undefined FUN_14dce496d(void)

/* WARNING: Removing unreachable block (ram,0x00014dce4a30) */
/* WARNING: Removing unreachable block (ram,0x00014dce4a36) */
/* WARNING: Removing unreachable block (ram,0x0001669c613b) */
/* WARNING: Removing unreachable block (ram,0x0001669c61cd) */
/* WARNING: Removing unreachable block (ram,0x0001669c61de) */
/* WARNING: Removing unreachable block (ram,0x0001669c61d9) */
/* WARNING: Removing unreachable block (ram,0x0001669c61c8) */

void FUN_14dce496d(void)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 in_RAX;
  longlong lVar5;
  longlong in_R11;
  byte in_AF;
  bool bVar6;
  byte in_TF;
  bool bVar7;
  byte in_IF;
  bool bVar8;
  bool bVar9;
  byte in_NT;
  bool bVar10;
  byte in_AC;
  bool bVar11;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar12;
  ulonglong uVar13;
  
  puVar1 = (ulonglong *)(in_R11 + -8);
  *(undefined4 *)puVar1 = 0x13efd07;
  *(undefined4 *)(in_R11 + -4) = 0;
  pvVar4 = ProcessEnvironmentBlock;
  *(undefined4 *)puVar1 = 0x6423dcd0;
  *(undefined4 *)(in_R11 + -4) = 0;
  uVar13 = *puVar1;
  *(undefined4 *)puVar1 = 0x10f8596a;
  *(undefined4 *)(in_R11 + -4) = 0;
  *puVar1 = *(ulonglong *)((longlong)pvVar4 + (uVar13 ^ *puVar1 ^ 0x74db84a6));
  *(undefined4 *)(in_R11 + -8) = 0x2c89d02d;
  uVar2 = *(uint *)(in_R11 + -8);
  *(uint *)(in_R11 + -8) = *(uint *)(in_R11 + -8) | 0xdc4cd895;
  *(uint *)(in_R11 + -8) = ~(~(uVar2 & 0xdc4cd895) & *(uint *)(in_R11 + -8));
  *(undefined4 *)(in_R11 + -4) = 0;
  *(uint *)(in_R11 + -4) = ~*(uint *)(in_R11 + -4);
  *(undefined4 *)(in_R11 + -4) = *(undefined4 *)(in_R11 + -4);
  *(uint *)(in_R11 + -4) = ~*(uint *)(in_R11 + -4);
  *(undefined2 *)(in_R11 + -10) = *(undefined2 *)((longlong)ProcessEnvironmentBlock + 400);
  *(undefined4 *)(in_R11 + -0x10) = 0;
  *(undefined4 *)(in_R11 + -0xc) = 0;
  lVar5 = ~(*(longlong *)(in_R11 + -0x10) - *(longlong *)(in_R11 + -8)) + 1;
  *(undefined8 *)(in_R11 + -0x10) = in_RAX;
  *(undefined4 *)(in_R11 + -0x10) = 0x2aa86b12;
  *(undefined4 *)(in_R11 + -0xc) = 0;
  uVar3 = *(undefined8 *)(in_R11 + -0x10);
  *(ulonglong *)(in_R11 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | 0x80 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  uVar13 = *(ulonglong *)(in_R11 + -0x10);
  *(longlong *)(in_R11 + -0x10) = lVar5;
  *(undefined8 *)(in_R11 + -0x20) = 0x21b6e7c1;
  *(longlong *)(in_R11 + -0x18) = lVar5;
  *(ulonglong *)(in_R11 + -0x20) =
       (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
       (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  uVar13 = *(ulonglong *)(in_R11 + -0x20);
  *(ulonglong *)(in_R11 + -0x20) =
       (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
       (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  uVar13 = *(ulonglong *)(in_R11 + -0x20);
  bVar10 = (uVar13 & 0x4000) != 0;
  bVar9 = (uVar13 & 0x400) != 0;
  bVar8 = (uVar13 & 0x200) != 0;
  bVar7 = (uVar13 & 0x100) != 0;
  bVar6 = (uVar13 & 0x10) != 0;
  bVar12 = (uVar13 & 0x200000) != 0;
  bVar11 = (uVar13 & 0x40000) != 0;
  *(undefined8 *)(in_R11 + -0x20) = uVar3;
  *(ulonglong *)(in_R11 + -0x28) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
       (ulonglong)((uVar13 & 0x80) != 0) * 0x80 | (ulonglong)((uVar13 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0)
       | (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(in_R11 + -0x30) = 4;
  *(void ***)(in_R11 + -0x30) = &ExceptionList;
  *(undefined1 **)(in_R11 + -0x38) = &LAB_16297060d;
  *(ulonglong *)(in_R11 + -0x40) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 |
       (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x10 | (ulonglong)bVar12 * 0x200000 |
       (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(in_R11 + -0x10) = 0x16512016a;
  *(undefined8 *)(in_R11 + -0x18) = *(undefined8 *)(in_R11 + -0x38);
  return;
}



// FUNCTION 14dce4a36 FUN_14dce4a36 body=64 status=ok
// SIG undefined FUN_14dce4a36(void)

void FUN_14dce4a36(void)

{
  return;
}



// FUNCTION 14dce4ca2 FUN_14dce4ca2 body=366 status=ok
// SIG undefined FUN_14dce4ca2(void)

/* WARNING: Instruction at (ram,0x0001619e5854) overlaps instruction at (ram,0x0001619e5853)
    */
/* WARNING: Removing unreachable block (ram,0x00014ded04d1) */
/* WARNING: Removing unreachable block (ram,0x00014ded04ed) */
/* WARNING: Removing unreachable block (ram,0x00014ded0573) */
/* WARNING: Removing unreachable block (ram,0x000164c1cc28) */
/* WARNING: Removing unreachable block (ram,0x000164c1cc41) */
/* WARNING: Removing unreachable block (ram,0x000164c1cc45) */
/* WARNING: Removing unreachable block (ram,0x000164c1cc91) */
/* WARNING: Removing unreachable block (ram,0x000164c1cc9d) */
/* WARNING: Removing unreachable block (ram,0x000164c1cca8) */
/* WARNING: Removing unreachable block (ram,0x000164c1cca3) */
/* WARNING: Removing unreachable block (ram,0x0001647a8993) */
/* WARNING: Removing unreachable block (ram,0x0001647a8a1b) */
/* WARNING: Removing unreachable block (ram,0x0001647a8a20) */
/* WARNING: Removing unreachable block (ram,0x0001647a8a26) */
/* WARNING: Removing unreachable block (ram,0x00015707c82e) */
/* WARNING: Removing unreachable block (ram,0x00014ded04e5) */
/* WARNING: Removing unreachable block (ram,0x00014dce4d51) */
/* WARNING: Heritage AFTER dead removal. Example location: r0xfffffffffffffff8 : 0x0001619e5821 */
/* WARNING: Removing unreachable block (ram,0x0001619e5853) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_14dce4ca2(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_R15;
  
  if (param_1 == 8) {
    _DAT_00000004 = 0x99b55542;
    _DAT_00000000 = 0x2d7c7a25;
    _DAT_ffffffffffffffe8 = FUN_1619e588c;
    _DAT_fffffffffffffff8 = unaff_R15;
    uVar2 = FUN_15b2c0a0d(0x53eb0c6d,param_2,param_3,param_4);
    _DAT_fffffffffffffff0 = (undefined4)(param_2 >> 6);
    _DAT_fffffffffffffff4 = (uint)(param_2 >> 0x26);
    uVar1 = FUN_14e056a0b(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar2,
                          ~(*(ulonglong *)(unaff_R12 + -0x78) & uVar2),
                          (~unaff_RSI | param_3) & (~param_3 | uVar2) ^ 0xffffffffffffffff);
    return uVar1;
  }
  uVar1 = FUN_14ded044f();
  return uVar1;
}



// FUNCTION 14dce4e27 FUN_14dce4e27 body=311 status=ok
// SIG undefined FUN_14dce4e27(void)

/* WARNING: Removing unreachable block (ram,0x00014dce4ec0) */
/* WARNING: Removing unreachable block (ram,0x00014dce4ec6) */
/* WARNING: Removing unreachable block (ram,0x00014dce4ecb) */
/* WARNING: Removing unreachable block (ram,0x00014dce4f1a) */
/* WARNING: Removing unreachable block (ram,0x00014dce4f0b) */
/* WARNING: Removing unreachable block (ram,0x00014dce4f43) */

void FUN_14dce4e27(void)

{
  FUN_16630e474();
  return;
}



// FUNCTION 14dce54f4 FUN_14dce54f4 body=241 status=ok
// SIG undefined FUN_14dce54f4(void)

ulonglong FUN_14dce54f4(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = -(-1 - *(longlong *)(unaff_RDI + -0x60)) - (~(unaff_RBX - param_3) + 2U);
  uVar1 = FUN_15709a81f(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                        uVar1 + param_1 + (uVar1 & param_1) * -2);
  return uVar1 ^ in_R10;
}



// FUNCTION 14dce55e7 FUN_14dce55e7 body=3 status=ok
// SIG undefined FUN_14dce55e7(void)

void FUN_14dce55e7(void)

{
  return;
}



// FUNCTION 14dce5792 FUN_14dce5792 body=115 status=ok
// SIG undefined FUN_14dce5792(void)

void FUN_14dce5792(byte param_1)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  bool bVar3;
  bool bVar4;
  ulonglong local_res8;
  longlong local_res10;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7be6aa;
  bVar4 = SBORROW1(in_AL,DAT_14d7be6aa);
  cVar1 = in_AL - DAT_14d7be6aa;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7be6aa;
  }
  DAT_14d7be6aa = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -8) = 0x782638e;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_14e15dc59;
  return;
}



// FUNCTION 14dce5813 FUN_14dce5813 body=230 status=ok
// SIG undefined FUN_14dce5813(void)

/* WARNING: Removing unreachable block (ram,0x00014dce5896) */
/* WARNING: Removing unreachable block (ram,0x00014dce58a1) */
/* WARNING: Removing unreachable block (ram,0x00014dce589c) */

void FUN_14dce5813(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_15b220dbc(unaff_retaddr,unaff_RSI + param_2 * -2,param_3,
                0xffffffffffffffffU - in_RAX | *(ulonglong *)(unaff_R12 + -0xa0));
  return;
}



// FUNCTION 14dce58fc FUN_14dce58fc body=152 status=ok
// SIG undefined FUN_14dce58fc(void)

void FUN_14dce58fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_1571a028e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dce5ad3 FUN_14dce5ad3 body=146 status=ok
// SIG undefined FUN_14dce5ad3(void)

/* WARNING: Removing unreachable block (ram,0x00014dce5b65) */

undefined8
FUN_14dce5ad3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  
  if (~in_RAX + *(ulonglong *)(unaff_R12 + -0xa0) < (~in_RAX & *(ulonglong *)(unaff_R12 + -0xa0))) {
    uVar1 = FUN_156d34ff1();
    return uVar1;
  }
  uVar1 = (*(code *)0x165ef6a30)(0x165ef6a30,param_2,param_3,param_4,in_stack_00000008 & in_RAX);
  return uVar1;
}



// FUNCTION 14dce5b65 FUN_14dce5b65 body=335 status=ok
// SIG undefined FUN_14dce5b65(void)

ulonglong FUN_14dce5b65(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  code *pcVar5;
  longlong unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  plVar1 = (longlong *)(local_res18 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  *(undefined4 *)(local_res18 + -0x28) = 0x23a724dc;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(undefined4 *)(local_res18 + -0x24) = *(undefined4 *)(local_res18 + -0x24);
  uVar3 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined1 **)(local_res18 + -0x28) = &LAB_16489045a;
  lVar4 = *(longlong *)(local_res18 + -0x28);
  uVar2 = *(undefined8 *)
           (local_res18 + -0x18 +
           ~(~((uVar3 | 0x23a724cc) - 0x23a724cc) & (uVar3 | 0xffffffffdc58db33)));
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = uVar2;
  pcVar5 = FUN_1648903e3;
  *(undefined8 *)(local_res18 + -0x28) = 0x14dce5c15;
  FUN_1648903e3();
  uVar3 = *(ulonglong *)(lVar4 + -0x80);
  *(ulonglong *)(local_res18 + -0x20) = *(ulonglong *)(lVar4 + -0x68) ^ param_1;
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(lVar4 + -0x88);
  uVar2 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = uVar2;
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(code **)(local_res18 + -0x30) = pcVar5;
  *(undefined **)(local_res18 + -0x38) = &DAT_162d9afca;
  return uVar3 ^ param_1;
}



// FUNCTION 14dce5cb5 FUN_14dce5cb5 body=146 status=ok
// SIG undefined FUN_14dce5cb5(void)

undefined8 FUN_14dce5cb5(void)

{
  undefined8 in_RAX;
  undefined8 local_res8;
  undefined8 *local_res20;
  
  local_res20[-1] = local_res8;
  local_res20[-2] = in_RAX;
  local_res20[-2] = FUN_14dce5d47;
  FUN_16213a635();
  local_res20[1] = FUN_16131bb16;
  return *local_res20;
}



// FUNCTION 14dce5d47 FUN_14dce5d47 body=15 status=ok
// SIG undefined FUN_14dce5d47(void)

undefined8 FUN_14dce5d47(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dce5d56 FUN_14dce5d56 body=104 status=ok
// SIG undefined FUN_14dce5d56(void)

void FUN_14dce5d56(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0x123c0f) {
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14dce5dd3 FUN_14dce5dd3 body=174 status=ok
// SIG undefined FUN_14dce5dd3(void)

ulonglong FUN_14dce5dd3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar2 - 8) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  uVar1 = *(ulonglong *)(uVar2 - 8);
  *(undefined1 **)(uVar2 - 8) = &LAB_15b30496d + *(longlong *)(uVar2 - 8);
  if (uVar1 < 0xfffffffea4cfb693) {
    uVar2 = FUN_15b304911();
    return uVar2;
  }
  *(undefined8 *)(uVar2 - 0x18) = param_3;
  *(undefined8 *)(uVar2 - 0x20) = param_3;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_14dce5e82;
  return local_res10 ^ in_RAX;
}



// FUNCTION 14dce5e88 FUN_14dce5e88 body=139 status=ok
// SIG undefined FUN_14dce5e88(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dce5e88(void)

{
  FUN_1666b80a3();
  FUN_162a7d472();
  return;
}



// FUNCTION 14dce5f14 FUN_14dce5f14 body=190 status=ok
// SIG undefined FUN_14dce5f14(void)

void FUN_14dce5f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  undefined8 in_stack_00000008;
  undefined8 uStackX_18;
  
  FUN_162a7d472(param_1,uStackX_18 + in_RAX,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dce5fd4 FUN_14dce5fd4 body=170 status=ok
// SIG undefined FUN_14dce5fd4(void)

/* WARNING: Removing unreachable block (ram,0x00014dce6084) */

void * FUN_14dce5fd4(void)

{
  void *pvVar1;
  byte in_ZF;
  
  if ((in_ZF & 1) != 0) {
    pvVar1 = (void *)FUN_14db8ba71();
    return pvVar1;
  }
  return ProcessEnvironmentBlock;
}



// FUNCTION 14dce6084 FUN_14dce6084 body=35 status=ok
// SIG undefined FUN_14dce6084(void)

void FUN_14dce6084(void)

{
  return;
}



// FUNCTION 14dce6264 FUN_14dce6264 body=57 status=ok
// SIG undefined FUN_14dce6264(void)

void FUN_14dce6264(void)

{
  return;
}



// FUNCTION 14dce639c FUN_14dce639c body=289 status=ok
// SIG undefined FUN_14dce639c(void)

void FUN_14dce639c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ushort auStackX_8 [4];
  longlong alStackX_10 [3];
  undefined8 auStack_10 [2];
  
  puVar1 = (undefined8 *)((longlong)alStackX_10 + unaff_RBP + -0x10);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  *puVar1 = in_R11;
  uVar4 = -~*(ulonglong *)(unaff_R13 + -0x50) - 1;
  *puVar1 = param_2;
  puVar1[-1] = param_3;
  puVar1[-2] = in_R10;
  puVar1[-2] = 0x14dce642d;
  FUN_166b075fe(param_1,(~((~uVar4 | unaff_R15 ^ 0xffffffffffffffff) + uVar4 + 1) + uVar4) -
                        ~(unaff_R15 ^ 0xffffffffffffffff));
  *(ushort *)(puVar1 + 1) = (*(ushort *)(puVar1 + 1) | 0x100) - 0x100;
  uVar3 = *puVar1;
  lVar2 = puVar1[2];
  *(undefined8 *)(lVar2 + -8) = puVar1[-1];
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x18) = uVar3;
  *(undefined **)(lVar2 + -0x20) = &DAT_14dce64d7;
  *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar2 + -0x20);
  thunk_FUN_15b642ca5(*(undefined8 *)(lVar2 + -0x18));
  return;
}



// FUNCTION 14dce64f9 FUN_14dce64f9 body=188 status=ok
// SIG undefined FUN_14dce64f9(void)

/* WARNING: Removing unreachable block (ram,0x00014dce65ac) */
/* WARNING: Removing unreachable block (ram,0x00014dce65b7) */
/* WARNING: Removing unreachable block (ram,0x00014dce65b2) */

void FUN_14dce64f9(void)

{
  FUN_156c854cb();
  return;
}



// FUNCTION 14dce65b7 FUN_14dce65b7 body=180 status=ok
// SIG undefined FUN_14dce65b7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dce65b7(undefined8 param_1)

{
  (*(code *)0x15760cf71)(param_1);
  return;
}



// FUNCTION 14dce680a FUN_14dce680a body=186 status=ok
// SIG undefined FUN_14dce680a(void)

void FUN_14dce680a(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1622ea218(param_1,FUN_1622ea218,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dce6d69 FUN_14dce6d69 body=138 status=ok
// SIG undefined FUN_14dce6d69(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dce6d69(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint in_EAX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong local_res10;
  
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = param_1;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = param_2;
  *puVar1 = &DAT_165068c8d;
  if (*(longlong *)(local_res10 + -0x10) == 1 || (bool)((char)in_EAX + '\t') != in_EAX < 0x7ef0868d)
  {
    *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dce6e02 FUN_14dce6e02 body=78 status=ok
// SIG undefined FUN_14dce6e02(void)

void FUN_14dce6e02(longlong param_1)

{
  FUN_156e7a0e9(param_1 + 1);
  return;
}



// FUNCTION 14dce6fed FUN_14dce6fed body=144 status=ok
// SIG undefined FUN_14dce6fed(void)

void FUN_14dce6fed(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R15;
  ulonglong local_res18;
  
  (*(code *)&LAB_164b31bac)
            (0xffffffffffffffff - local_res18 & 0xffffffffffffffffU - unaff_R15 | local_res18,
             param_2,param_3,param_4);
  return;
}



// FUNCTION 14dce7127 thunk_FUN_14dce712d body=5 status=ok
// SIG undefined thunk_FUN_14dce712d(void)

void thunk_FUN_14dce712d(ulonglong param_1,longlong param_2)

{
  undefined8 uStackX_8;
  ulonglong auStackX_10 [3];
  
  *(ulonglong *)((longlong)auStackX_10 + param_2) =
       (-~param_1 - (~-(*(ulonglong *)((longlong)auStackX_10 + param_2) | param_1) + 2)) +
       *(longlong *)((longlong)auStackX_10 + param_2);
  FUN_166daf47c(8,uStackX_8);
  return;
}



// FUNCTION 14dce712d FUN_14dce712d body=101 status=ok
// SIG undefined FUN_14dce712d(void)

void FUN_14dce712d(ulonglong param_1,longlong param_2)

{
  undefined8 uStackX_8;
  ulonglong local_res10 [3];
  
  *(ulonglong *)((longlong)local_res10 + param_2) =
       (-~param_1 - (~-(*(ulonglong *)((longlong)local_res10 + param_2) | param_1) + 2)) +
       *(longlong *)((longlong)local_res10 + param_2);
  FUN_166daf47c(8,uStackX_8);
  return;
}



// FUNCTION 14dce72d3 FUN_14dce72d3 body=145 status=ok
// SIG undefined FUN_14dce72d3(void)

void FUN_14dce72d3(void)

{
  return;
}



// FUNCTION 14dce736b FUN_14dce736b body=144 status=ok
// SIG undefined FUN_14dce736b(void)

/* WARNING: Removing unreachable block (ram,0x00014dce73f7) */
/* WARNING: Removing unreachable block (ram,0x00014dce73fd) */

void FUN_14dce736b(void)

{
  return;
}



// FUNCTION 14dce73fd FUN_14dce73fd body=15 status=ok
// SIG undefined FUN_14dce73fd(void)

void FUN_14dce73fd(void)

{
  return;
}



// FUNCTION 14dce7483 FUN_14dce7483 body=185 status=ok
// SIG undefined FUN_14dce7483(void)

undefined8 FUN_14dce7483(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong in_RAX;
  ulonglong in_R10;
  ulonglong unaff_R13;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(in_RAX + 8);
  lVar2 = *(longlong *)(in_RAX + 8);
  *(ulonglong *)(in_RAX + 8) = ~*(ulonglong *)(in_RAX + 8);
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) | in_R10;
  *(ulonglong *)(in_RAX + 8) =
       ~((~(unaff_R13 & uVar1) + lVar2) - (unaff_R13 ^ 0xffffffffffffffff) &
        *(ulonglong *)(in_RAX + 8));
  FUN_1665dabb5();
  return local_res20;
}



// FUNCTION 14dce76b5 FUN_14dce76b5 body=284 status=ok
// SIG undefined FUN_14dce76b5(void)

/* WARNING: Removing unreachable block (ram,0x00014dce77c1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

short FUN_14dce76b5(undefined8 param_1)

{
  ushort uVar1;
  ushort unaff_R14W;
  undefined8 in_stack_00000010;
  short in_stack_00000040;
  
  uVar1 = FUN_1571e6522(param_1,FUN_1571e6522,in_stack_00000010);
  return (uVar1 & unaff_R14W) - in_stack_00000040;
}



// FUNCTION 14dce7894 FUN_14dce7894 body=15 status=ok
// SIG undefined FUN_14dce7894(void)

void FUN_14dce7894(void)

{
  return;
}



// FUNCTION 14dce794a FUN_14dce794a body=7 status=ok
// SIG undefined FUN_14dce794a(void)

void FUN_14dce794a(HMODULE param_1,LPCSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014dce794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14dce79f7 FUN_14dce79f7 body=164 status=ok
// SIG undefined FUN_14dce79f7(void)

/* WARNING: Removing unreachable block (ram,0x00014dce7a90) */
/* WARNING: Removing unreachable block (ram,0x00014dce7a9b) */
/* WARNING: Removing unreachable block (ram,0x00014dce7a96) */

undefined8 FUN_14dce79f7(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = thunk_FUN_165bfbd60(param_1,param_1,*(undefined8 *)(unaff_RDI + -0x70),
                              *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar1;
}



// FUNCTION 14dce7a9b FUN_14dce7a9b body=41 status=ok
// SIG undefined FUN_14dce7a9b(void)

undefined8 FUN_14dce7a9b(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dce7b33 FUN_14dce7b33 body=138 status=ok
// SIG undefined FUN_14dce7b33(void)

void FUN_14dce7b33(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  (*(code *)0x15ba4bd64)
            (param_1,0x15ba4bd64,((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1) * 2,
             ~(unaff_RBX & (param_4 | 0xffffffff88a36130)) ^ 0x69c4f7bf ^
             *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dce7ce9 FUN_14dce7ce9 body=325 status=ok
// SIG undefined FUN_14dce7ce9(void)

/* WARNING: Removing unreachable block (ram,0x00014dce7de5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dce7ce9(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined8 unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  
  uVar4 = ~((~(~(param_2 & 0xffffffff989cafa4) & (param_3 | 0xffffffff989cafa4)) ^ 0x366fc8c0) -
           *(longlong *)(unaff_RDI + -0x70)) + 1 ^ param_1;
  lVar3 = *(ulonglong *)(unaff_RDI + -0x80) + param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x80) & param_1;
  uStack_8 = 0x14dce7d88;
  FUN_165b4de83(param_1);
  *(ulonglong *)(&stack0x00000008 + param_1) = uVar4;
  *(ulonglong *)(&stack0x00000000 + param_1) = lVar3 + uVar2 * -2;
  *(undefined4 *)(&stack0x00000000 + param_1) = 0x7a87779d;
  *(undefined4 *)(&stack0x00000004 + param_1) = 0;
  *(undefined8 *)(&stack0x00000000 + param_1) = 0xffffffffffffff80;
  uVar1 = *(undefined8 *)(&stack0x00000000 + param_1);
  *(undefined8 *)(&stack0x00000000 + param_1) = unaff_R12;
  *(undefined8 *)(&stack0x00000000 + param_1) = uVar1;
  *(ulonglong *)((longlong)&uStack_8 + param_1) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined **)((longlong)&uStack_8 + param_1) = &DAT_1617132e9;
  return;
}



// FUNCTION 14dce7e2f FUN_14dce7e2f body=187 status=ok
// SIG undefined FUN_14dce7e2f(void)

/* WARNING: Removing unreachable block (ram,0x00014dce7ec1) */
/* WARNING: Removing unreachable block (ram,0x00014dce7ecd) */
/* WARNING: Removing unreachable block (ram,0x00014dce7f13) */
/* WARNING: Removing unreachable block (ram,0x00014dce7fbc) */
/* WARNING: Removing unreachable block (ram,0x00014dce7fc1) */

ulonglong FUN_14dce7e2f(void)

{
  longlong unaff_R13;
  
  return ~*(ulonglong *)(unaff_R13 + -0x88);
}



// FUNCTION 14dce7ecd FUN_14dce7ecd body=258 status=ok
// SIG undefined FUN_14dce7ecd(void)

undefined8 FUN_14dce7ecd(undefined8 param_1,undefined8 param_2,short *param_3)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  short unaff_R15W;
  bool bVar7;
  bool bVar8;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  longlong local_res20;
  
  *param_3 = (-0x101 - unaff_R15W) + *param_3;
  LOCK();
  bVar3 = (byte)unaff_retaddr;
  bVar7 = bVar3 < DAT_14d7abf21;
  bVar8 = SBORROW1(bVar3,DAT_14d7abf21);
  cVar2 = bVar3 - DAT_14d7abf21;
  if (cVar2 == '\0') {
    DAT_14d7abf21 = (byte)param_1;
  }
  else {
    unaff_retaddr = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),DAT_14d7abf21);
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar8 * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar7 |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x28) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x28) = 0x14dce7f4b;
  uVar4 = FUN_1564ecb2b(param_1,param_2,uStackX_8);
  *(code **)(local_res20 + -0x20) = FUN_1564ecb2b;
  *(undefined8 *)(local_res20 + -0x28) = param_2;
  uVar6 = *(undefined8 *)(local_res20 + -0x28);
  uVar1 = *(ulonglong *)(unaff_RSI + -0xa0);
  *(undefined8 *)(local_res20 + -0x20) = uVar4;
  lVar5 = *(longlong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) = *(ulonglong *)(local_res20 + -0x18) & unaff_RBP;
  *(undefined8 *)(local_res20 + -0x28) = param_1;
  *(longlong *)(local_res20 + -0x18) = *(longlong *)(local_res20 + -0x18) << 1;
  lVar5 = (lVar5 + unaff_RBP) - *(longlong *)(local_res20 + -0x18);
  *(longlong *)(local_res20 + -0x18) = lVar5;
  uVar4 = *(undefined8 *)(local_res20 + -0x20);
  *(ulonglong *)(local_res20 + -0x20) = uVar1 ^ unaff_RBP;
  *(undefined8 *)(local_res20 + -0x28) = *(undefined8 *)(local_res20 + -0x28);
  if (lVar5 < 0) {
    uVar6 = FUN_164c06d89(local_res20 + -0x18);
    return uVar6;
  }
  *(undefined8 *)(local_res20 + -0x30) = uVar6;
  *(undefined8 *)(local_res20 + -0x38) = uVar6;
  *(undefined1 **)(local_res20 + -0x30) = &LAB_14dce7fd2;
  return uVar4;
}



// FUNCTION 14dce7fd8 FUN_14dce7fd8 body=266 status=ok
// SIG undefined FUN_14dce7fd8(void)

/* WARNING: Removing unreachable block (ram,0x00014dce8070) */
/* WARNING: Removing unreachable block (ram,0x00014dce8076) */

undefined8 FUN_14dce7fd8(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x70) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x70) | unaff_R15);
                    /* WARNING: Read-only address (ram,0x00014d7c3b41) is written */
  LOCK();
  uRam000000014d7c3b41 = (undefined1)in_RAX;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(ulonglong *)(uVar1 - 0x10) = in_RAX & 0xffffffffffffff00;
  *(ulonglong *)(uVar1 - 0x18) = in_RAX & 0xffffffffffffff00;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_166aadb97;
  return *(undefined8 *)(uVar1 - 0x18);
}



// FUNCTION 14dce812f FUN_14dce812f body=162 status=ok
// SIG undefined FUN_14dce812f(void)

/* WARNING: Removing unreachable block (ram,0x00014dce81d2) */

undefined8 FUN_14dce812f(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_R13 + -0x38);
  if (*(longlong *)(unaff_R13 + -0x48) == 0) {
    uVar3 = FUN_162be74bc();
    return uVar3;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  plVar1 = (longlong *)(unaff_RBP + -8);
  *plVar1 = unaff_R13;
  *plVar1 = *plVar1 + -0x78;
  uVar3 = (*(code *)&LAB_162321f9f)(~(uVar2 & unaff_R15) & (uVar2 | unaff_R15),&LAB_162321f9f);
  return uVar3;
}



// FUNCTION 14dce81d2 FUN_14dce81d2 body=73 status=ok
// SIG undefined FUN_14dce81d2(void)

undefined8 FUN_14dce81d2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dce8387 FUN_14dce8387 body=175 status=ok
// SIG undefined FUN_14dce8387(void)

void FUN_14dce8387(void)

{
  return;
}



// FUNCTION 14dce8436 FUN_14dce8436 body=155 status=ok
// SIG undefined FUN_14dce8436(void)

/* WARNING: Removing unreachable block (ram,0x00014dce84cc) */
/* WARNING: Removing unreachable block (ram,0x00014dce84d2) */
/* WARNING: Removing unreachable block (ram,0x00014e0cc32d) */
/* WARNING: Removing unreachable block (ram,0x00014e0cc427) */
/* WARNING: Removing unreachable block (ram,0x00014e0cc42c) */
/* WARNING: Removing unreachable block (ram,0x00014e0cc432) */
/* WARNING: Removing unreachable block (ram,0x00014e0cc437) */

undefined8 FUN_14dce8436(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e0cc32d(&stack0x00000000);
  return uVar1;
}



// FUNCTION 14dce84d2 FUN_14dce84d2 body=158 status=ok
// SIG undefined FUN_14dce84d2(void)

undefined8 FUN_14dce84d2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(undefined8 *)(local_res20 + -0x28) = local_res8;
  *(undefined8 *)(local_res20 + -0x30) = local_res8;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_14dce8571;
  *(undefined8 *)(local_res20 + -0x28) = 0x156e3200d;
  return in_RAX;
}



// FUNCTION 14dce8577 FUN_14dce8577 body=164 status=ok
// SIG undefined FUN_14dce8577(void)

/* WARNING: Removing unreachable block (ram,0x00014dce86ae) */
/* WARNING: Removing unreachable block (ram,0x00014dce86b4) */
/* WARNING: Removing unreachable block (ram,0x00014dce86e2) */
/* WARNING: Removing unreachable block (ram,0x00014dce86d8) */
/* WARNING: Removing unreachable block (ram,0x00014dce86ea) */
/* WARNING: Removing unreachable block (ram,0x00014dce8727) */
/* WARNING: Removing unreachable block (ram,0x00014dce8728) */
/* WARNING: Removing unreachable block (ram,0x00014dce8610) */
/* WARNING: Removing unreachable block (ram,0x00014dce861b) */
/* WARNING: Removing unreachable block (ram,0x000160f961fc) */
/* WARNING: Removing unreachable block (ram,0x00014dce8616) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dce8577(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  
  param_5 = param_5 ^ unaff_RBP;
  *(undefined8 *)(param_5 - 8) = param_1;
  *(undefined8 *)(param_5 - 0x10) = unaff_R12;
  *(undefined8 *)(param_5 - 0x18) = unaff_R12;
  *(undefined8 *)(param_5 - 0x20) = unaff_R13;
  uVar1 = FUN_14e18b50b(&LAB_14d9b6475,param_2,param_3,local_res8);
  return uVar1;
}



// FUNCTION 14dce861b FUN_14dce861b body=346 status=ok
// SIG undefined FUN_14dce861b(void)

/* WARNING: Removing unreachable block (ram,0x00014dce86ae) */
/* WARNING: Removing unreachable block (ram,0x00014dce86b4) */
/* WARNING: Removing unreachable block (ram,0x00014dce86e2) */
/* WARNING: Removing unreachable block (ram,0x00014dce86d8) */
/* WARNING: Removing unreachable block (ram,0x00014dce86ea) */
/* WARNING: Removing unreachable block (ram,0x00014dce8727) */
/* WARNING: Removing unreachable block (ram,0x00014dce8728) */

ulonglong FUN_14dce861b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  return ~in_R10 | *(ulonglong *)(param_3 + -0x48);
}



// FUNCTION 14dce886a FUN_14dce886a body=173 status=ok
// SIG undefined FUN_14dce886a(void)

void FUN_14dce886a(void)

{
  ulonglong in_RAX;
  longlong in_R11;
  
  *(ulonglong *)(in_R11 + 0x10) = (~in_RAX | *(ulonglong *)(in_R11 + 0x10)) + in_RAX + 1;
  FUN_165f90795();
  return;
}



// FUNCTION 14dce8917 FUN_14dce8917 body=200 status=ok
// SIG undefined FUN_14dce8917(void)

void FUN_14dce8917(void)

{
  return;
}



// FUNCTION 14dce89e1 FUN_14dce89e1 body=288 status=ok
// SIG undefined FUN_14dce89e1(void)

/* WARNING: Removing unreachable block (ram,0x00014dce8a73) */
/* WARNING: Removing unreachable block (ram,0x00014dce8a79) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000162e194d7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dce89e1(undefined8 param_1,undefined8 param_2)

{
  FUN_165631f4d(param_1,param_2);
  return;
}



// FUNCTION 14dce8b02 FUN_14dce8b02 body=119 status=ok
// SIG undefined FUN_14dce8b02(void)

void FUN_14dce8b02(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1610d23ad(param_1,param_2,unaff_retaddr,&ExceptionList);
  return;
}



// FUNCTION 14dce8c9f FUN_14dce8c9f body=177 status=ok
// SIG undefined FUN_14dce8c9f(void)

/* WARNING: Instruction at (ram,0x00014dce8cf8) overlaps instruction at (ram,0x00014dce8cf7)
    */
/* WARNING: Removing unreachable block (ram,0x00014dce8cf1) */

void FUN_14dce8c9f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_157466cc3(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14dce8de5 FUN_14dce8de5 body=221 status=ok
// SIG undefined FUN_14dce8de5(void)

/* WARNING: Removing unreachable block (ram,0x00014dce8ead) */

void FUN_14dce8de5(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong uVar1;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_10 [2];
  
  local_10[1] = *(ulonglong *)(unaff_R13 + -0x70);
  local_10[0] = *(ulonglong *)(unaff_R13 + -8);
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  FUN_1654f14be(local_10[0],param_2);
  local_10[1] = (~local_10[1] | 0xffffffffffffffff - unaff_R15) &
                (*(ulonglong *)((longlong)local_10 + uVar1 + (unaff_R14 ^ uVar1 ^ 0x5e2774dc)) |
                unaff_R15);
  (*(code *)0x1652e4e6f)();
  return;
}



// FUNCTION 14dce8ead FUN_14dce8ead body=156 status=ok
// SIG undefined FUN_14dce8ead(void)

void FUN_14dce8ead(void)

{
  FUN_15af782cd();
  return;
}



// FUNCTION 14dce913a FUN_14dce913a body=256 status=ok
// SIG undefined FUN_14dce913a(void)

/* WARNING: Removing unreachable block (ram,0x00014dce91b3) */

void FUN_14dce913a(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  undefined8 unaff_RBP;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + unaff_R14 + 0x7960d0) & unaff_R15) != 0) {
    puVar1 = (undefined8 *)((param_5 ^ unaff_R15) - 8);
    *puVar1 = unaff_RBP;
    *(undefined8 *)((param_5 ^ unaff_R15) - 0x10) = *puVar1;
    *puVar1 = &DAT_15782bdcf;
    FUN_15782bdae(param_1,param_2);
    return;
  }
  FUN_1564d7312();
  return;
}



// FUNCTION 14dce923c FUN_14dce923c body=165 status=ok
// SIG undefined FUN_14dce923c(void)

undefined8 FUN_14dce923c(void)

{
  undefined4 in_stack_00000008;
  longlong lVar1;
  undefined8 in_stack_00000010;
  
  lVar1 = CONCAT44(0xffffffff,in_stack_00000008);
  *(undefined4 *)(&stack0x18cec6d5 + lVar1) = 0x8e102e2d;
  *(uint *)(&stack0x18cec6d5 + lVar1) = *(uint *)(&stack0x18cec6d5 + lVar1) ^ 0x75ea16db;
  *(uint *)(&stack0x18cec6d5 + lVar1) = ~*(uint *)(&stack0x18cec6d5 + lVar1);
  *(int *)(&stack0x18cec6d5 + lVar1) = 0x405c709 - *(int *)(&stack0x18cec6d5 + lVar1);
  return in_stack_00000010;
}



// FUNCTION 14dce9384 FUN_14dce9384 body=305 status=ok
// SIG undefined FUN_14dce9384(void)

void FUN_14dce9384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_14e20d2d2(param_1,param_2,local_res8,8,param_3);
  FUN_166687941(param_1);
  return;
}



// FUNCTION 14dce9529 FUN_14dce9529 body=124 status=ok
// SIG undefined FUN_14dce9529(void)

void FUN_14dce9529(void)

{
  return;
}



// FUNCTION 14dce9787 FUN_14dce9787 body=178 status=ok
// SIG undefined FUN_14dce9787(void)

/* WARNING: Removing unreachable block (ram,0x000162c53fd4) */

undefined8 FUN_14dce9787(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dce9a96 FUN_14dce9a96 body=11 status=ok
// SIG undefined FUN_14dce9a96(void)

void FUN_14dce9a96(void)

{
  longlong unaff_RSI;
  longlong in_R10;
  undefined8 in_R11;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_RSI + in_R10) = in_R11;
  return;
}



// FUNCTION 14dce9b2d FUN_14dce9b2d body=1421 status=ok
// SIG undefined FUN_14dce9b2d(void)

/* WARNING: Removing unreachable block (ram,0x00016222b722) */
/* WARNING: Removing unreachable block (ram,0x000165e04e94) */
/* WARNING: Removing unreachable block (ram,0x00016222b831) */
/* WARNING: Removing unreachable block (ram,0x00016222b862) */
/* WARNING: Removing unreachable block (ram,0x00016222b868) */
/* WARNING: Removing unreachable block (ram,0x0001625c9029) */
/* WARNING: Removing unreachable block (ram,0x00014dce9c45) */
/* WARNING: Removing unreachable block (ram,0x00014dce9c4b) */
/* WARNING: Removing unreachable block (ram,0x00014dce9ce4) */
/* WARNING: Removing unreachable block (ram,0x00014dce9cea) */
/* WARNING: Removing unreachable block (ram,0x00014dce9d7f) */
/* WARNING: Removing unreachable block (ram,0x00014dce9d84) */
/* WARNING: Removing unreachable block (ram,0x00014dce9d8a) */
/* WARNING: Removing unreachable block (ram,0x00014dce9d8f) */
/* WARNING: Removing unreachable block (ram,0x00016222b67b) */
/* WARNING: Removing unreachable block (ram,0x00016222b716) */
/* WARNING: Removing unreachable block (ram,0x00016667436d) */
/* WARNING: Removing unreachable block (ram,0x00016222b85d) */

void FUN_14dce9b2d(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
           (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15;
  lVar3 = uVar2 - (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x30) | uVar2);
  FUN_166aadff5();
  FUN_160b86e2b(uVar1,*(undefined8 *)(lVar3 + -0x80),
                (*(ulonglong *)(lVar3 + -0x70) & uVar1 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(lVar3 + -0x70) | uVar1),*(ulonglong *)(lVar3 + -0x60) ^ uVar1);
  return;
}



// FUNCTION 14dcea4f7 FUN_14dcea4f7 body=144 status=ok
// SIG undefined FUN_14dcea4f7(void)

/* WARNING: Removing unreachable block (ram,0x000156c06d4a) */
/* WARNING: Removing unreachable block (ram,0x00016627e57a) */
/* WARNING: Removing unreachable block (ram,0x00016627e580) */
/* WARNING: Removing unreachable block (ram,0x000156c06b70) */
/* WARNING: Removing unreachable block (ram,0x00016627e4cd) */
/* WARNING: Removing unreachable block (ram,0x000156c06d3f) */
/* WARNING: Removing unreachable block (ram,0x00016627e478) */
/* WARNING: Removing unreachable block (ram,0x00016627e502) */
/* WARNING: Removing unreachable block (ram,0x00016627e507) */
/* WARNING: Removing unreachable block (ram,0x000166246bfe) */
/* WARNING: Removing unreachable block (ram,0x000164aea44c) */
/* WARNING: Removing unreachable block (ram,0x00014dcea587) */
/* WARNING: Removing unreachable block (ram,0x00014dcea606) */
/* WARNING: Removing unreachable block (ram,0x00014dcea60b) */
/* WARNING: Removing unreachable block (ram,0x00014dcea611) */
/* WARNING: Removing unreachable block (ram,0x00014dcea616) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcea4f7(void)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong lStackX_8;
  ulonglong in_stack_00000010;
  undefined8 uStack_10;
  
  uVar7 = ~(in_R9 + in_R10 + 1U);
  uVar6 = 0xffffffffffffffc8;
  uStack_10 = 0x7ee2a0bb;
  FUN_165360583(0xffffffffffffffc8,&stack0x00000000,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  if ((lStackX_8 == -1 && unaff_R15 == 0) && (lStackX_8 != -1 || unaff_R15 != 0)) {
    in_R11 = in_R11 - (*(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15);
    puVar1 = (ulonglong *)((longlong)&uStack_10 + in_R11);
    *(undefined4 *)puVar1 = 0x5869ffff;
    *(undefined4 *)((longlong)&uStack_10 + in_R11 + 4) = 0xa0f58405;
    uVar3 = *(uint *)((longlong)&uStack_10 + in_R11 + 4);
    puVar2 = (uint *)((longlong)&uStack_10 + in_R11 + 4);
    *puVar2 = *puVar2 | 0xe7503661;
    *(uint *)((longlong)&uStack_10 + in_R11 + 4) =
         ~(~(uVar3 & 0xe7503661) & *(uint *)((longlong)&uStack_10 + in_R11 + 4));
    uVar4 = *puVar1;
    *puVar1 = uVar6;
    *puVar1 = *(ulonglong *)(unaff_R12 + -0x38) + uVar4 +
              (*(ulonglong *)(unaff_R12 + -0x38) & uVar4) * -2;
    *puVar1 = *(ulonglong *)(unaff_R12 + -0x60);
    uStack_10 = uVar7;
    if (((~uVar4 | *puVar1) & (*puVar1 ^ 0xffffffffffffffff | uVar4)) != 0) {
      uVar5 = FUN_16551c3a9();
      return uVar5;
    }
    uVar5 = FUN_16551c3a9();
    return uVar5;
  }
  *(longlong *)((in_stack_00000010 ^ unaff_R15) - 8) = in_R11;
  *(longlong *)((in_stack_00000010 ^ unaff_R15) - 0x10) = in_R11;
  uVar5 = FUN_161e25772();
  return uVar5;
}



// FUNCTION 14dcea587 FUN_14dcea587 body=300 status=ok
// SIG undefined FUN_14dcea587(void)

void FUN_14dcea587(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 in_RAX;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar9;
  undefined8 unaff_RSI;
  ulonglong in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  longlong local_res8;
  undefined8 in_stack_00000010;
  
  uVar8 = ~((~unaff_R13 | param_2) + unaff_R13 + 1);
  lVar5 = *(longlong *)(&stack0xfffffffff26f2fbb + uVar8);
  *(undefined8 *)(&stack0xfffffffff26f2fbb + uVar8) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8) = in_stack_00000010;
  uVar6 = *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8);
  uVar9 = ~unaff_RBP | unaff_R15;
  *(ulonglong *)(&stack0xfffffffff26f2fb3 + uVar8) = unaff_R15;
  bVar7 = (unaff_R15 ^ 0xffffffffffffffff | unaff_RBP) != 0xffffffffffffffff;
  if (bVar7 || uVar9 != 0xffffffffffffffff) {
    FUN_156fb05de(param_1,uVar6,param_3,param_4);
    return;
  }
  if (!bVar7 && uVar9 == 0xffffffffffffffff) {
    FUN_156fb05de(param_1,uVar6,param_3,param_4);
    return;
  }
  uVar6 = *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8);
  uVar2 = *(ulonglong *)(lVar5 + 8);
  *(ulonglong *)(lVar5 + 8) = ~*(ulonglong *)(lVar5 + 8);
  *(ulonglong *)(lVar5 + 8) = *(ulonglong *)(lVar5 + 8) | in_R11;
  *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8) = param_1;
  uVar3 = *(ulonglong *)(lVar5 + 8);
  lVar4 = *(longlong *)(lVar5 + 8);
  *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8) = unaff_R12;
  *(ulonglong *)(lVar5 + 8) = ~((~uVar3 | ~uVar9 | uVar2) + lVar4 + 1);
  plVar1 = (longlong *)(&stack0xfffffffff26f2fc3 + uVar8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + local_res8;
  *(undefined8 *)(&stack0xfffffffff26f2fbb + uVar8) = uVar6;
  *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff26f2fb3 + uVar8) = 0x7be0bde;
  *(undefined4 *)(&stack0xfffffffff26f2fb7 + uVar8) = 0;
  *(undefined8 *)(&stack0xfffffffff26f2fb3 + uVar8) = unaff_RSI;
  *(undefined1 **)(&stack0xfffffffff26f2fab + uVar8) = &LAB_1627bf198;
  return;
}



// FUNCTION 14dcea90b FUN_14dcea90b body=161 status=ok
// SIG undefined FUN_14dcea90b(void)

/* WARNING: Removing unreachable block (ram,0x00015b28305d) */
/* WARNING: Removing unreachable block (ram,0x00016608f8a9) */
/* WARNING: Removing unreachable block (ram,0x00016608f962) */
/* WARNING: Removing unreachable block (ram,0x00016608f965) */
/* WARNING: Removing unreachable block (ram,0x00015b283063) */
/* WARNING: Removing unreachable block (ram,0x00015b2830e3) */
/* WARNING: Removing unreachable block (ram,0x000161624405) */
/* WARNING: Removing unreachable block (ram,0x00015b2830e9) */
/* WARNING: Removing unreachable block (ram,0x00015b28317d) */
/* WARNING: Removing unreachable block (ram,0x00015b283189) */
/* WARNING: Removing unreachable block (ram,0x000161c30b55) */
/* WARNING: Removing unreachable block (ram,0x000161c30b8a) */
/* WARNING: Removing unreachable block (ram,0x000161c30bdb) */
/* WARNING: Removing unreachable block (ram,0x000161c30be1) */
/* WARNING: Removing unreachable block (ram,0x000161c30c83) */
/* WARNING: Removing unreachable block (ram,0x000161c30c89) */
/* WARNING: Removing unreachable block (ram,0x00016526b3cc) */
/* WARNING: Removing unreachable block (ram,0x000161c30bd6) */
/* WARNING: Removing unreachable block (ram,0x00015ba5a4a3) */
/* WARNING: Removing unreachable block (ram,0x00016474b0ac) */
/* WARNING: Removing unreachable block (ram,0x00014dceaa43) */
/* WARNING: Removing unreachable block (ram,0x00014dceaa34) */
/* WARNING: Removing unreachable block (ram,0x00014dceaa4e) */
/* WARNING: Removing unreachable block (ram,0x00014dceaace) */
/* WARNING: Removing unreachable block (ram,0x00014dceaad3) */
/* WARNING: Removing unreachable block (ram,0x00014dceaad9) */
/* WARNING: Removing unreachable block (ram,0x00014dceab61) */
/* WARNING: Removing unreachable block (ram,0x00014dceab67) */
/* WARNING: Removing unreachable block (ram,0x00016213f6f2) */
/* WARNING: Removing unreachable block (ram,0x000162e982b8) */
/* WARNING: Removing unreachable block (ram,0x000162e98342) */
/* WARNING: Removing unreachable block (ram,0x000162e98348) */
/* WARNING: Removing unreachable block (ram,0x0001669172e9) */
/* WARNING: Removing unreachable block (ram,0x00016474b0e0) */
/* WARNING: Removing unreachable block (ram,0x00016474b0e6) */
/* WARNING: Removing unreachable block (ram,0x00016474b17d) */
/* WARNING: Removing unreachable block (ram,0x00016474b182) */
/* WARNING: Removing unreachable block (ram,0x00016474b188) */
/* WARNING: Removing unreachable block (ram,0x00016474b18d) */
/* WARNING: Removing unreachable block (ram,0x00014dcea9ad) */
/* WARNING: Removing unreachable block (ram,0x00016630fe7a) */
/* WARNING: Removing unreachable block (ram,0x00016630fe75) */
/* WARNING: Removing unreachable block (ram,0x00016630fed4) */
/* WARNING: Removing unreachable block (ram,0x00016630fecf) */
/* WARNING: Removing unreachable block (ram,0x000157423380) */
/* WARNING: Removing unreachable block (ram,0x0001574233c2) */
/* WARNING: Removing unreachable block (ram,0x000162e48f1d) */
/* WARNING: Removing unreachable block (ram,0x0001574233f0) */
/* WARNING: Removing unreachable block (ram,0x000157423396) */
/* WARNING: Removing unreachable block (ram,0x00016630feda) */

undefined8 FUN_14dcea90b(int param_1)

{
  undefined8 uVar1;
  undefined2 unaff_BP;
  
  if (param_1 == -1) {
    uVar1 = FUN_16474b06a(0,unaff_BP);
    return uVar1;
  }
  uVar1 = FUN_16608f8a9();
  return uVar1;
}



// FUNCTION 14dcea9ad FUN_14dcea9ad body=582 status=ok
// SIG undefined FUN_14dcea9ad(void)

/* WARNING: Removing unreachable block (ram,0x00014dceaa4e) */
/* WARNING: Removing unreachable block (ram,0x00014dceaace) */
/* WARNING: Removing unreachable block (ram,0x00014dceaad3) */
/* WARNING: Removing unreachable block (ram,0x00014dceaad9) */
/* WARNING: Removing unreachable block (ram,0x00014dceab61) */
/* WARNING: Removing unreachable block (ram,0x00014dceab67) */
/* WARNING: Removing unreachable block (ram,0x00016213f6f2) */
/* WARNING: Removing unreachable block (ram,0x000162e982b8) */
/* WARNING: Removing unreachable block (ram,0x000162e98342) */
/* WARNING: Removing unreachable block (ram,0x000162e98348) */
/* WARNING: Removing unreachable block (ram,0x0001669172e9) */
/* WARNING: Removing unreachable block (ram,0x00014dceaa34) */
/* WARNING: Removing unreachable block (ram,0x00014dceaa43) */
/* WARNING: Removing unreachable block (ram,0x00016630feda) */

undefined8 FUN_14dcea9ad(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong in_R9;
  longlong unaff_R12;
  ulonglong unaff_R14;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX;
  uVar1 = FUN_166c95d47();
  if (in_RAX == (in_R9 ^ unaff_R14 ^ 0x5a989ad3)) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (in_RAX != 0xdbf85) {
    if (in_RAX == 0xdbf86) {
      return uVar1;
    }
    return uVar1;
  }
  uVar1 = FUN_1574ba9da(uVar2);
  return uVar1;
}



// FUNCTION 14dceab67 FUN_14dceab67 body=145 status=ok
// SIG undefined FUN_14dceab67(void)

void FUN_14dceab67(void)

{
  FUN_16246a267();
  return;
}



// FUNCTION 14dceabf8 FUN_14dceabf8 body=129 status=ok
// SIG undefined FUN_14dceabf8(void)

void FUN_14dceabf8(void)

{
  return;
}



// FUNCTION 14dceac79 FUN_14dceac79 body=135 status=ok
// SIG undefined FUN_14dceac79(void)

void FUN_14dceac79(void)

{
  FUN_16166e9b2();
  return;
}



// FUNCTION 14dcead9f FUN_14dcead9f body=124 status=ok
// SIG undefined FUN_14dcead9f(void)

void FUN_14dcead9f(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_14dceb4c0(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14dceaec3 FUN_14dceaec3 body=3 status=ok
// SIG undefined FUN_14dceaec3(void)

void FUN_14dceaec3(void)

{
  return;
}



// FUNCTION 14dceaf47 FUN_14dceaf47 body=315 status=ok
// SIG undefined FUN_14dceaf47(void)

/* WARNING: Removing unreachable block (ram,0x00015b905495) */
/* WARNING: Removing unreachable block (ram,0x00015b90549b) */
/* WARNING: Removing unreachable block (ram,0x00015b9055c1) */
/* WARNING: Removing unreachable block (ram,0x00015b90561e) */
/* WARNING: Removing unreachable block (ram,0x00015b905624) */
/* WARNING: Removing unreachable block (ram,0x0001646c013e) */
/* WARNING: Removing unreachable block (ram,0x00016265453b) */
/* WARNING: Removing unreachable block (ram,0x00016618c576) */
/* WARNING: Removing unreachable block (ram,0x00014dceb082) */
/* WARNING: Removing unreachable block (ram,0x00014dceb07c) */
/* WARNING: Removing unreachable block (ram,0x00014dceb087) */
/* WARNING: Removing unreachable block (ram,0x00016618c4fe) */
/* WARNING: Removing unreachable block (ram,0x00016618c504) */
/* WARNING: Removing unreachable block (ram,0x00016618c57a) */
/* WARNING: Removing unreachable block (ram,0x00016140461c) */
/* WARNING: Removing unreachable block (ram,0x00016140469c) */
/* WARNING: Removing unreachable block (ram,0x0001614046a7) */
/* WARNING: Removing unreachable block (ram,0x000156d6459a) */
/* WARNING: Removing unreachable block (ram,0x0001614046ad) */
/* WARNING: Removing unreachable block (ram,0x0001614046c3) */
/* WARNING: Removing unreachable block (ram,0x0001614046c7) */
/* WARNING: Removing unreachable block (ram,0x000161404741) */
/* WARNING: Removing unreachable block (ram,0x000161404747) */
/* WARNING: Removing unreachable block (ram,0x00016140474c) */
/* WARNING: Removing unreachable block (ram,0x000164c74903) */
/* WARNING: Removing unreachable block (ram,0x000164c7499a) */
/* WARNING: Removing unreachable block (ram,0x000164c749a0) */
/* WARNING: Removing unreachable block (ram,0x00015b9053fe) */
/* WARNING: Removing unreachable block (ram,0x00015b905490) */
/* WARNING: Removing unreachable block (ram,0x00016618c588) */
/* WARNING: Removing unreachable block (ram,0x00016618c58e) */
/* WARNING: Removing unreachable block (ram,0x00016618c593) */
/* WARNING: Removing unreachable block (ram,0x00016618c628) */
/* WARNING: Removing unreachable block (ram,0x00014dbc8202) */

longlong FUN_14dceaf47(void)

{
  longlong lVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x30) != 0) {
    return *(longlong *)(unaff_R13 + -8) + unaff_R15;
  }
  lVar1 = FUN_16618c487();
  return lVar1;
}



// FUNCTION 14dceb087 FUN_14dceb087 body=160 status=ok
// SIG undefined FUN_14dceb087(void)

void FUN_14dceb087(undefined8 param_1)

{
  FUN_15667ea4d(param_1,FUN_15667ea4d);
  return;
}



// FUNCTION 14dceb26c FUN_14dceb26c body=137 status=ok
// SIG undefined FUN_14dceb26c(void)

void FUN_14dceb26c(void)

{
  return;
}



// FUNCTION 14dceb4c0 FUN_14dceb4c0 body=10 status=ok
// SIG undefined FUN_14dceb4c0(void)

void FUN_14dceb4c0(void)

{
  return;
}



// FUNCTION 14dceb5fb FUN_14dceb5fb body=122 status=ok
// SIG undefined FUN_14dceb5fb(void)

void FUN_14dceb5fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R15;
  undefined8 local_res10;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = 0x5c4e5517;
  *(ulonglong *)(local_res20 + -0x10) = *(ulonglong *)(local_res20 + -0x10) ^ 0x5c4e5517;
  *(ulonglong *)(local_res20 + -0x10) =
       *(ulonglong *)(local_res20 + -0x10) ^ *(ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = (longlong)(&LAB_14dceb693 + *(longlong *)(local_res20 + -8));
  FUN_14d7be33f(local_res10,param_2,*(undefined8 *)(local_res20 + -0x10));
  return;
}



// FUNCTION 14dceb6bf FUN_14dceb6bf body=168 status=ok
// SIG undefined FUN_14dceb6bf(void)

void FUN_14dceb6bf(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14e145058(0x9e96,0x354c,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dceb76e FUN_14dceb76e body=140 status=ok
// SIG undefined FUN_14dceb76e(void)

/* WARNING: Removing unreachable block (ram,0x00014dceb9ae) */
/* WARNING: Removing unreachable block (ram,0x00014dceb7f6) */
/* WARNING: Removing unreachable block (ram,0x00014dceb7fc) */
/* WARNING: Removing unreachable block (ram,0x00014dceb87c) */
/* WARNING: Removing unreachable block (ram,0x00014dceb881) */
/* WARNING: Removing unreachable block (ram,0x000162b79177) */
/* WARNING: Removing unreachable block (ram,0x00014dceb887) */
/* WARNING: Removing unreachable block (ram,0x00014dceb913) */
/* WARNING: Removing unreachable block (ram,0x00014dceb918) */
/* WARNING: Removing unreachable block (ram,0x00014dc0904a) */
/* WARNING: Removing unreachable block (ram,0x00014dceb91e) */
/* WARNING: Removing unreachable block (ram,0x00014dceb97e) */
/* WARNING: Removing unreachable block (ram,0x000156857d28) */
/* WARNING: Removing unreachable block (ram,0x00014dceb974) */

undefined8 FUN_14dceb76e(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  byte unaff_R12B;
  longlong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = FUN_1668654fd(in_stack_00000010,param_2,
                        -(unaff_RSI -
                         (in_stack_00000008 <<
                         (~(((param_1 | 0x12) - (unaff_R12B ^ 0xff | param_1 | 0x12)) +
                           (unaff_R12B ^ 0xff)) & 0x3f))),param_4);
  return uVar1;
}



// FUNCTION 14dceb7fc thunk_FUN_14dceb802 body=5 status=ok
// SIG undefined thunk_FUN_14dceb802(void)

/* WARNING: Removing unreachable block (ram,0x00014dceb9ae) */
/* WARNING: Removing unreachable block (ram,0x00014dceb974) */
/* WARNING: Removing unreachable block (ram,0x00014dceb91e) */
/* WARNING: Removing unreachable block (ram,0x00014dceb887) */
/* WARNING: Removing unreachable block (ram,0x00014dc0904a) */
/* WARNING: Removing unreachable block (ram,0x00014dceb913) */

undefined8
thunk_FUN_14dceb802(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
  undefined1 in_AL;
  undefined8 uVar1;
  ushort *unaff_RBP;
  undefined8 unaff_R13;
  bool bVar2;
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
  ulonglong uVar14;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = *unaff_RBP | 0x100;
  *unaff_RBP = ~*unaff_RBP;
  LOCK();
  UNLOCK();
  FUN_14d7a7b98 = in_AL;
  *(undefined8 *)(param_5 + -8) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = uStackX_10;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_20 & 4) != 0) * 4 | (ulonglong)((uStackX_20 & 1) != 0) |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  uVar14 = *(ulonglong *)(param_5 + -0x18);
  bVar11 = (uVar14 & 0x4000) != 0;
  bVar10 = (uVar14 & 0x800) != 0;
  bVar9 = (uVar14 & 0x400) != 0;
  bVar8 = (uVar14 & 0x200) != 0;
  bVar7 = (uVar14 & 0x100) != 0;
  bVar6 = (uVar14 & 0x80) != 0;
  bVar5 = (uVar14 & 0x40) != 0;
  bVar4 = (uVar14 & 0x10) != 0;
  bVar3 = (uVar14 & 4) != 0;
  bVar2 = (uVar14 & 1) != 0;
  bVar13 = (uVar14 & 0x200000) != 0;
  bVar12 = (uVar14 & 0x40000) != 0;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(ulonglong *)(param_5 + -0x30) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  if (!bVar6) {
    uVar14 = *(ulonglong *)(param_5 + -0x18);
    *(undefined8 *)(param_5 + -0x18) = uStackX_8;
    *(ulonglong *)(param_5 + -0x20) =
         (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
         (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_5 + -8) = 0xa1494c;
    uVar1 = FUN_15b3d5987(param_1,*(undefined8 *)(param_5 + -0x10),*(undefined8 *)(param_5 + -0x28))
    ;
    return uVar1;
  }
  uVar1 = FUN_162b79177();
  return uVar1;
}



// FUNCTION 14dceb802 FUN_14dceb802 body=439 status=ok
// SIG undefined FUN_14dceb802(void)

/* WARNING: Removing unreachable block (ram,0x00014dceb9ae) */
/* WARNING: Removing unreachable block (ram,0x00014dceb974) */
/* WARNING: Removing unreachable block (ram,0x00014dceb91e) */
/* WARNING: Removing unreachable block (ram,0x00014dceb887) */
/* WARNING: Removing unreachable block (ram,0x00014dc0904a) */
/* WARNING: Removing unreachable block (ram,0x00014dceb913) */

undefined8
FUN_14dceb802(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined1 in_AL;
  undefined8 uVar1;
  ushort *unaff_RBP;
  undefined8 unaff_R13;
  bool bVar2;
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
  ulonglong uVar14;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined8 uStackX_20;
  
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = *unaff_RBP | 0x100;
  *unaff_RBP = ~*unaff_RBP;
  LOCK();
  UNLOCK();
  FUN_14d7a7b98 = in_AL;
  *(undefined8 *)(param_5 + -8) = local_res10;
  *(undefined8 *)(param_5 + -0x10) = local_res10;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_20 & 4) != 0) * 4 | (ulonglong)((uStackX_20 & 1) != 0) |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  uVar14 = *(ulonglong *)(param_5 + -0x18);
  bVar11 = (uVar14 & 0x4000) != 0;
  bVar10 = (uVar14 & 0x800) != 0;
  bVar9 = (uVar14 & 0x400) != 0;
  bVar8 = (uVar14 & 0x200) != 0;
  bVar7 = (uVar14 & 0x100) != 0;
  bVar6 = (uVar14 & 0x80) != 0;
  bVar5 = (uVar14 & 0x40) != 0;
  bVar4 = (uVar14 & 0x10) != 0;
  bVar3 = (uVar14 & 4) != 0;
  bVar2 = (uVar14 & 1) != 0;
  bVar13 = (uVar14 & 0x200000) != 0;
  bVar12 = (uVar14 & 0x40000) != 0;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(ulonglong *)(param_5 + -0x30) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  if (!bVar6) {
    uVar14 = *(ulonglong *)(param_5 + -0x18);
    *(undefined8 *)(param_5 + -0x18) = uStackX_8;
    *(ulonglong *)(param_5 + -0x20) =
         (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
         (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_5 + -8) = 0xa1494c;
    uVar1 = FUN_15b3d5987(param_1,*(undefined8 *)(param_5 + -0x10),*(undefined8 *)(param_5 + -0x28))
    ;
    return uVar1;
  }
  uVar1 = FUN_162b79177();
  return uVar1;
}



// FUNCTION 14dceb9ca FUN_14dceb9ca body=195 status=ok
// SIG undefined FUN_14dceb9ca(void)

void FUN_14dceb9ca(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_162acc245(param_1,param_2 & unaff_RBP);
  return;
}


