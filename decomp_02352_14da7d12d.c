// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da7d12d FUN_14da7d12d body=143 status=ok
// SIG undefined FUN_14da7d12d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da7d1b7) */
/* WARNING: Removing unreachable block (ram,0x00014da7d1bd) */
/* WARNING: Removing unreachable block (ram,0x00014da7d23c) */
/* WARNING: Removing unreachable block (ram,0x00014da7d242) */
/* WARNING: Removing unreachable block (ram,0x00014d7aabe4) */
/* WARNING: Removing unreachable block (ram,0x00014dd3c6d0) */

void FUN_14da7d12d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ushort *in_R10;
  undefined8 local_res8;
  longlong local_res20;
  
  *in_R10 = ~*in_R10;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = param_1;
  *(undefined **)(local_res20 + -8) = &DAT_14dd3c6ff;
  FUN_14dd3c6d0();
  return;
}



// FUNCTION 14da7d1bd FUN_14da7d1bd body=313 status=ok
// SIG undefined FUN_14da7d1bd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da7d242) */

void FUN_14da7d1bd(undefined8 param_1,undefined8 param_2)

{
  FUN_161d9739e(param_1,param_2);
  FUN_15b199e1b();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da7d39b FUN_14da7d39b body=1004 status=ok
// SIG undefined FUN_14da7d39b(void)

/* WARNING: Instruction at (ram,0x00014da7d4ca) overlaps instruction at (ram,0x00014da7d4c9)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7d423) */
/* WARNING: Removing unreachable block (ram,0x00014da7d45a) */
/* WARNING: Removing unreachable block (ram,0x00014da7d45f) */
/* WARNING: Removing unreachable block (ram,0x00014da7d4ca) */
/* WARNING: Removing unreachable block (ram,0x00014da7d4c7) */
/* WARNING: Removing unreachable block (ram,0x00014da7d4c9) */
/* WARNING: Removing unreachable block (ram,0x00014da7d4cf) */

void FUN_14da7d39b(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar3 = (uVar1 | ~unaff_R15) + ~uVar1 + 1;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_161390790(~(param_1 & (~in_R10 | unaff_R15)),0x19b6a813,
                ~((~uVar2 & (unaff_R15 ^ 0xffffffffffffffff) | uVar2) &
                 ((0xffffffffffffffff - uVar2) + unaff_R15) -
                 (0xffffffffffffffff - uVar2 & unaff_R15)),
                ~((~unaff_R15 | uVar1) & (~(uVar3 & unaff_R15) + unaff_R15) - ~uVar3));
  return;
}



// FUNCTION 14da7d786 FUN_14da7d786 body=155 status=ok
// SIG undefined FUN_14da7d786(void)

void FUN_14da7d786(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R10;
  longlong unaff_R14;
  longlong lVar1;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  lVar1 = unaff_R14 + local_res18 * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x10) = in_R10;
  *(undefined8 *)(lVar1 + -0x18) = in_R10;
  *(undefined1 **)(lVar1 + -0x10) = &LAB_14da7d822;
  (*(code *)0x160bef3e1)(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da7d8c1 FUN_14da7d8c1 body=151 status=ok
// SIG undefined FUN_14da7d8c1(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da7d8c1(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1664f5df7(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da7dbba FUN_14da7dbba body=288 status=ok
// SIG undefined FUN_14da7dbba(void)

/* WARNING: Instruction at (ram,0x00014da7dc9f) overlaps instruction at (ram,0x00014da7dc9e)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7dc1b) */
/* WARNING: Removing unreachable block (ram,0x00014da7dc9e) */
/* WARNING: Removing unreachable block (ram,0x00014da7dcd7) */

void FUN_14da7dbba(ushort *param_1,undefined8 param_2,ushort param_3,undefined8 param_4)

{
  int unaff_EBP;
  uint *unaff_RDI;
  uint uVar1;
  uint unaff_R14D;
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  *param_1 = ((*param_1 - ((~*param_1 | ~(param_3 ^ 0xc855)) + *param_1 + 1)) - (param_3 ^ 0xc855))
             - 0x101;
  uVar1 = 0x6193cb55;
  FUN_16193cb55();
  if (((~(~-((~uVar1 + *unaff_RDI) - ~unaff_R14D) + 2) + 1) - ~*unaff_RDI) + unaff_EBP == -1) {
    FUN_16141c651(in_stack_00000008,param_2,local_res18,param_4);
    return;
  }
  FUN_156937c13();
  return;
}



// FUNCTION 14da7dcdd FUN_14da7dcdd body=271 status=ok
// SIG undefined FUN_14da7dcdd(void)

/* WARNING: Removing unreachable block (ram,0x00014da7de65) */
/* WARNING: Removing unreachable block (ram,0x00014dca666a) */
/* WARNING: Removing unreachable block (ram,0x00014da7de70) */
/* WARNING: Removing unreachable block (ram,0x00014dca665f) */
/* WARNING: Removing unreachable block (ram,0x00014da7dd45) */

void FUN_14da7dcdd(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  param_2 = 0xffffffffffffffff - ((~unaff_R15 | param_5) + unaff_R15 + 1) & param_2;
  if ((bool)(((param_1 & 0x3f) != 0) *
            ((1L << ((byte)param_1 & 0x3f) - 1 & (ulonglong)&stack0x00000010) != 0))) {
    *(undefined8 *)(param_2 - 8) = unaff_R12;
    *(undefined8 *)(param_2 - 0x10) = in_R10;
    *(undefined8 *)(param_2 - 0x18) = in_R10;
    uVar1 = *(undefined8 *)(param_2 - 8);
    *(undefined8 *)(param_2 - 0x20) = unaff_R13;
    *(undefined8 *)(param_2 - 0x10) = uVar1;
    *(undefined8 *)(param_2 - 8) = 0x15b70b117;
    FUN_14d7c4297(param_1,in_stack_00000008);
    return;
  }
  FUN_14dca65d3();
  return;
}



// FUNCTION 14da7ddef FUN_14da7ddef body=287 status=ok
// SIG undefined FUN_14da7ddef(void)

/* WARNING: Removing unreachable block (ram,0x00014da7de70) */
/* WARNING: Removing unreachable block (ram,0x00014da7de65) */

void FUN_14da7ddef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_1567c9c27(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -8),
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14da7df10 FUN_14da7df10 body=85 status=ok
// SIG undefined FUN_14da7df10(void)

void FUN_14da7df10(void)

{
  return;
}



// FUNCTION 14da7e282 FUN_14da7e282 body=137 status=ok
// SIG undefined FUN_14da7e282(void)

void FUN_14da7e282(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161c8fd33(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,~*(ulonglong *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14da7e4ee FUN_14da7e4ee body=114 status=ok
// SIG undefined FUN_14da7e4ee(void)

void FUN_14da7e4ee(void)

{
  return;
}



// FUNCTION 14da7e592 FUN_14da7e592 body=453 status=ok
// SIG undefined FUN_14da7e592(void)

/* WARNING: Removing unreachable block (ram,0x00014da7e610) */

void FUN_14da7e592(byte param_1)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_R13;
  bool bVar3;
  bool bVar4;
  ulonglong uStackX_8;
  longlong local_res10;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7bd7f5;
  bVar4 = SBORROW1(in_AL,DAT_14d7bd7f5);
  cVar1 = in_AL - DAT_14d7bd7f5;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7bd7f5;
  }
  DAT_14d7bd7f5 = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200
       | (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = 0x1d84f41;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x215517;
  *(undefined8 *)(local_res10 + -8) = 0x1b6fa2a;
  if ((*(ulonglong *)(local_res10 + -0x18) & 1) != 0) {
    FUN_162ed62ac();
    return;
  }
  FUN_165c7153c();
  return;
}



// FUNCTION 14da7e801 FUN_14da7e801 body=125 status=ok
// SIG undefined FUN_14da7e801(void)

void FUN_14da7e801(longlong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  
  FUN_164bbc85c(~((-~in_stack_00000008 - (~unaff_RSI + 2)) - ~param_2 &
                 (0xffffffffffffffffU - param_1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15);
  return;
}



// FUNCTION 14da7ea47 FUN_14da7ea47 body=172 status=ok
// SIG undefined FUN_14da7ea47(void)

void FUN_14da7ea47(void)

{
  longlong unaff_R13;
  
  FUN_1616e05d7(*(undefined8 *)(unaff_R13 + -0x78),FUN_1616e05d7);
  return;
}



// FUNCTION 14da7eb8e FUN_14da7eb8e body=268 status=ok
// SIG undefined FUN_14da7eb8e(void)

/* WARNING: Instruction at (ram,0x00014da7ebe6) overlaps instruction at (ram,0x00014da7ebe5)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7ec4f) */
/* WARNING: Removing unreachable block (ram,0x00014da7ebe5) */

undefined8 FUN_14da7eb8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  uint in_R11D;
  int unaff_R14D;
  
  *(int *)(unaff_RBP + 0x104) = -*(int *)(unaff_RBP + 0x104);
  *(int *)(unaff_RBP + 0x104) = *(int *)(unaff_RBP + 0x104) + -1;
  *(uint *)(unaff_RBP + 0x104) = (unaff_R14D + ~in_R11D) - *(int *)(unaff_RBP + 0x104);
  uVar1 = FUN_16123f353(FUN_16123f353,param_2,param_3);
  return uVar1;
}



// FUNCTION 14da7ed3d FUN_14da7ed3d body=300 status=ok
// SIG undefined FUN_14da7ed3d(void)

/* WARNING: Removing unreachable block (ram,0x00014da7ee64) */
/* WARNING: Removing unreachable block (ram,0x000166c339a8) */
/* WARNING: Removing unreachable block (ram,0x00014da7ee6a) */
/* WARNING: Removing unreachable block (ram,0x00014da7ef40) */
/* WARNING: Removing unreachable block (ram,0x00014da7edd5) */

void FUN_14da7ed3d(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_R15;
  
  *(ulonglong *)(param_3 + 0x10) = unaff_R15 - ~(~unaff_R15 | *(ulonglong *)(param_3 + 0x10));
  if (-1 < (longlong)(param_5 ^ unaff_R15)) {
    FUN_16281b313();
    return;
  }
  FUN_16281b313();
  return;
}



// FUNCTION 14da7ee6a FUN_14da7ee6a body=402 status=ok
// SIG undefined FUN_14da7ee6a(void)

void FUN_14da7ee6a(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  ulonglong in_stack_00000008;
  
  FUN_166ccb880();
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = ~*(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) | in_stack_00000008;
  *(ulonglong *)(unaff_RSI + 0x10) =
       ~((~in_stack_00000008 | uVar1) & *(ulonglong *)(unaff_RSI + 0x10));
  uVar1 = FUN_165e1b2cd();
  FUN_1661d81f6(~((param_2 ^ 0xffffffffffffffff | param_1) & (~param_1 | uVar1)),
                ~((~uVar1 | *(ulonglong *)(unaff_retaddr + -0x78)) &
                 (~*(ulonglong *)(unaff_retaddr + -0x78) | uVar1)));
  return;
}



// FUNCTION 14da7f125 FUN_14da7f125 body=173 status=ok
// SIG undefined FUN_14da7f125(void)

undefined8 FUN_14da7f125(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -8);
}



// FUNCTION 14da7f1d3 FUN_14da7f1d3 body=138 status=ok
// SIG undefined FUN_14da7f1d3(void)

void FUN_14da7f1d3(void)

{
  FUN_162902fd9();
  FUN_165e93f27();
  return;
}



// FUNCTION 14da7f2f2 FUN_14da7f2f2 body=277 status=ok
// SIG undefined FUN_14da7f2f2(void)

void FUN_14da7f2f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16511df7a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da7f48e FUN_14da7f48e body=182 status=ok
// SIG undefined FUN_14da7f48e(void)

void FUN_14da7f48e(undefined8 param_1)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined4 *)(local_res18 + -0x28) = 0;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(longlong *)(local_res18 + -0x10) =
       *(longlong *)(local_res18 + -0x10) -
       (*(longlong *)(local_res18 + -0x28) - *(longlong *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x165943d42;
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = 0x14da7f534;
  FUN_165943cff(param_1);
  *(code **)(local_res18 + -0x18) = FUN_165943cff;
  *(code **)(local_res18 + -0x20) = FUN_165943cff;
  *(code **)(local_res18 + -0x18) = FUN_14da7f545;
  return;
}



// FUNCTION 14da7f545 FUN_14da7f545 body=87 status=ok
// SIG undefined FUN_14da7f545(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da7f59a) overlaps instruction at (ram,0x00014da7f597)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7f680) */
/* WARNING: Removing unreachable block (ram,0x00014da7f686) */
/* WARNING: Removing unreachable block (ram,0x0001664c7ee8) */
/* WARNING: Removing unreachable block (ram,0x0001664c7f9d) */
/* WARNING: Removing unreachable block (ram,0x0001664c7fa3) */
/* WARNING: Removing unreachable block (ram,0x0001615b7c63) */
/* WARNING: Removing unreachable block (ram,0x0001615b7cdc) */
/* WARNING: Removing unreachable block (ram,0x0001615b7ce2) */
/* WARNING: Removing unreachable block (ram,0x0001615b7d22) */
/* WARNING: Removing unreachable block (ram,0x0001615b7d21) */
/* WARNING: Removing unreachable block (ram,0x00014d876ef9) */
/* WARNING: Removing unreachable block (ram,0x00014da7f58d) */

void FUN_14da7f545(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = param_2 + *(longlong *)(unaff_R12 + -0x78);
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x14e1368d7)(param_1,~(uVar1 & in_RAX) & (uVar1 | in_RAX));
  FUN_1664c7ee8();
  return;
}



// FUNCTION 14da7f5df FUN_14da7f5df body=325 status=ok
// SIG undefined FUN_14da7f5df(void)

/* WARNING: Instruction at (ram,0x0001615b7d22) overlaps instruction at (ram,0x0001615b7d21)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7f680) */
/* WARNING: Removing unreachable block (ram,0x00014da7f686) */
/* WARNING: Removing unreachable block (ram,0x0001664c7ee8) */
/* WARNING: Removing unreachable block (ram,0x0001664c7f9d) */
/* WARNING: Removing unreachable block (ram,0x0001664c7fa3) */
/* WARNING: Removing unreachable block (ram,0x0001615b7c63) */
/* WARNING: Removing unreachable block (ram,0x0001615b7cdc) */
/* WARNING: Removing unreachable block (ram,0x0001615b7ce2) */
/* WARNING: Removing unreachable block (ram,0x0001615b7d22) */
/* WARNING: Removing unreachable block (ram,0x0001615b7d21) */
/* WARNING: Removing unreachable block (ram,0x00014d876ef9) */

void FUN_14da7f5df(void)

{
  FUN_1664c7ee8();
  return;
}



// FUNCTION 14da7f8da FUN_14da7f8da body=155 status=ok
// SIG undefined FUN_14da7f8da(void)

/* WARNING: Removing unreachable block (ram,0x00014da7f975) */

void FUN_14da7f8da(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong unaff_RSI;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar2 = -unaff_RSI;
  *(undefined8 *)(&stack0x00000000 + lVar2) = unaff_RBP;
  *(longlong *)(&stack0x00000000 + lVar2) = *(longlong *)(&stack0x00000000 + lVar2) + 0x6b509a02;
  if (*(longlong *)(&stack0x00000000 + lVar2) != 0) {
    FUN_165cdd3d4();
    return;
  }
  lVar1 = *(longlong *)(unaff_R13 + -0x88);
  *(undefined8 *)(&stack0x00000000 + lVar2) = *(undefined8 *)(unaff_R13 + -0x38);
  *(ulonglong *)(&stack0x00000000 + lVar2) = *(longlong *)(&stack0x00000000 + lVar2) + unaff_R15;
  if (*(ulonglong *)(unaff_R13 + -0x48) == unaff_R15) {
    FUN_156520399();
    return;
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffff;
  uVar4 = ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
           (~(uVar3 & unaff_R15) + unaff_R15) - ~uVar3);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28);
  *(ulonglong *)(&stack0x00000000 + lVar2) = uVar4;
  FUN_162c14fda(CONCAT71((int7)(uVar4 >> 8),0x4c),(~uVar3 - ~(uVar3 & unaff_R15)) + uVar3,
                ~-lVar1 + 1U ^ unaff_R15,in_R9 ^ unaff_R15);
  return;
}



// FUNCTION 14da7f975 thunk_FUN_14da7f97b body=5 status=ok
// SIG undefined thunk_FUN_14da7f97b(void)

void thunk_FUN_14da7f97b(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b7f5f08(~(unaff_RDI & (~param_1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da7f97b FUN_14da7f97b body=124 status=ok
// SIG undefined FUN_14da7f97b(void)

void FUN_14da7f97b(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b7f5f08(~(unaff_RDI & (~param_1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da7faaf FUN_14da7faaf body=26 status=ok
// SIG undefined FUN_14da7faaf(void)

void FUN_14da7faaf(void)

{
  return;
}



// FUNCTION 14da7fbf5 FUN_14da7fbf5 body=564 status=ok
// SIG undefined FUN_14da7fbf5(void)

/* WARNING: Removing unreachable block (ram,0x00016184b238) */
/* WARNING: Removing unreachable block (ram,0x00016184b23e) */
/* WARNING: Removing unreachable block (ram,0x000160eede34) */
/* WARNING: Removing unreachable block (ram,0x000160eede3a) */
/* WARNING: Removing unreachable block (ram,0x000160eedeb1) */
/* WARNING: Removing unreachable block (ram,0x00014da7fc7c) */
/* WARNING: Removing unreachable block (ram,0x00016184b110) */
/* WARNING: Removing unreachable block (ram,0x00014da7fd08) */

void FUN_14da7fbf5(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  if (-1 < *(longlong *)(unaff_R12 + -0x50)) {
    FUN_160eedda7();
    return;
  }
  FUN_165fc8c8c(param_1,~(unaff_RDI & (~param_2 | in_RAX)),param_3,param_4);
  return;
}



// FUNCTION 14da7fdc0 FUN_14da7fdc0 body=104 status=ok
// SIG undefined FUN_14da7fdc0(void)

void FUN_14da7fdc0(void)

{
  return;
}



// FUNCTION 14da7ffa5 FUN_14da7ffa5 body=297 status=ok
// SIG undefined FUN_14da7ffa5(void)

void FUN_14da7ffa5(undefined8 param_1)

{
  undefined8 local_res18;
  undefined8 in_stack_00000030;
  
  FUN_161601221(param_1);
  FUN_164729f8c(local_res18,FUN_164729f8c,in_stack_00000030);
  return;
}



// FUNCTION 14da80344 FUN_14da80344 body=142 status=ok
// SIG undefined FUN_14da80344(void)

void FUN_14da80344(void)

{
  ulonglong unaff_RBX;
  ulonglong *unaff_RDI;
  ulonglong unaff_R13;
  
  *unaff_RDI = (unaff_R13 - (*unaff_RDI | unaff_R13)) + *unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = 0xffffffffffffffff - (unaff_RBX & *unaff_RDI);
  return;
}



// FUNCTION 14da8045b FUN_14da8045b body=291 status=ok
// SIG undefined FUN_14da8045b(void)

/* WARNING: Removing unreachable block (ram,0x00014da80570) */
/* WARNING: Removing unreachable block (ram,0x00014da80581) */
/* WARNING: Removing unreachable block (ram,0x00014da8057c) */

undefined8 FUN_14da8045b(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156723207(param_1,unaff_RBP + unaff_RSI ^ 0xffffffffffffffff);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x40);
  uVar3 = ~uVar1 & ~unaff_R15 | uVar1;
  uVar2 = FUN_165bb5080(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90),FUN_165bb5080,uVar3,
                        (~(~(~uVar1 | unaff_R15) & uVar3) + uVar3) - (~uVar1 | unaff_R15));
  return uVar2;
}



// FUNCTION 14da80581 FUN_14da80581 body=99 status=ok
// SIG undefined FUN_14da80581(void)

undefined8 FUN_14da80581(void)

{
  ushort uVar1;
  ushort unaff_BP;
  ushort in_R11W;
  ushort unaff_R15W;
  ushort *unaff_retaddr;
  undefined8 uStackX_18;
  
  uVar1 = *unaff_retaddr;
  *unaff_retaddr = 0;
  *unaff_retaddr =
       *unaff_retaddr ^ (-0x100 - (~-(unaff_BP | ~(~in_R11W & (unaff_R15W | 0x9c92))) + 2)) + uVar1;
  return uStackX_18;
}



// FUNCTION 14da80685 FUN_14da80685 body=150 status=ok
// SIG undefined FUN_14da80685(void)

/* WARNING: Removing unreachable block (ram,0x00014da80698) */

void FUN_14da80685(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  
  param_1 = param_1 ^ in_RAX;
  FUN_15b0687e8();
  FUN_15b13e132(param_1,unaff_RBX);
  return;
}



// FUNCTION 14da8071d FUN_14da8071d body=161 status=ok
// SIG undefined FUN_14da8071d(void)

void FUN_14da8071d(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  FUN_15b13e132(param_1,uStackX_8);
  return;
}



// FUNCTION 14da80862 FUN_14da80862 body=172 status=ok
// SIG undefined FUN_14da80862(void)

void FUN_14da80862(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R12;
  
  (*(code *)0x1613c0fcf)
            (*(undefined8 *)(unaff_R12 + -0x60),param_2,*(undefined8 *)(unaff_R12 + -0x38));
  return;
}



// FUNCTION 14da80910 FUN_14da80910 body=312 status=ok
// SIG undefined FUN_14da80910(void)

undefined8 FUN_14da80910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14df27f7b();
  return uVar1;
}



// FUNCTION 14da80b83 FUN_14da80b83 body=365 status=ok
// SIG undefined FUN_14da80b83(void)

/* WARNING: Removing unreachable block (ram,0x00014da80c07) */
/* WARNING: Removing unreachable block (ram,0x00014da80c0d) */

undefined1 * FUN_14da80b83(void)

{
  return &LAB_1663bc696;
}



// FUNCTION 14da80c9d FUN_14da80c9d body=139 status=ok
// SIG undefined FUN_14da80c9d(void)

void FUN_14da80c9d(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uStackX_20;
  
  FUN_157816c6d(param_1,FUN_157816c6d,-~*(ulonglong *)(unaff_RDI + -0x70) - (~param_3 + 2) ^ param_1
               );
  FUN_1627782ab(*unaff_RSI ^ 8);
  FUN_15b842e67(uStackX_20,0xf033e65);
  return;
}



// FUNCTION 14da80d28 FUN_14da80d28 body=106 status=ok
// SIG undefined FUN_14da80d28(void)

void FUN_14da80d28(void)

{
  ulonglong unaff_RBP;
  ulonglong *unaff_RSI;
  undefined8 local_res18;
  
  FUN_1627782ab(*unaff_RSI ^ unaff_RBP);
  FUN_15b842e67(local_res18,0xf033e65);
  return;
}



// FUNCTION 14da80d94 FUN_14da80d94 body=154 status=ok
// SIG undefined FUN_14da80d94(void)

void FUN_14da80d94(void)

{
  undefined8 local_res8;
  
  FUN_15b842e67(local_res8,0xf033e65);
  return;
}



// FUNCTION 14da80ff7 FUN_14da80ff7 body=140 status=ok
// SIG undefined FUN_14da80ff7(void)

/* WARNING: Removing unreachable block (ram,0x00014da81039) */
/* WARNING: Removing unreachable block (ram,0x00014da81081) */

void FUN_14da80ff7(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_162f4a45c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~(~unaff_R15 & uVar1) + uVar1) - unaff_R15 & (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14da81087 FUN_14da81087 body=256 status=ok
// SIG undefined FUN_14da81087(void)

/* WARNING: Removing unreachable block (ram,0x00014da8111d) */
/* WARNING: Removing unreachable block (ram,0x00014da81108) */

void FUN_14da81087(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = uVar1 ^ 0xffffffffffffffff;
  if (uVar2 == 0) {
    FUN_15b8459e9();
    return;
  }
  FUN_161d8d83f(param_1,~(((-1 - (0xffffffffffffffff - param_1 & uVar1)) + uVar1) -
                          ~(0xffffffffffffffff - param_1) &
                         ((uVar2 - (~param_1 | uVar2)) + ~param_1 | param_1)));
  FUN_14decf6e4(FUN_14decf6e4,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  (*(code *)0x1620a876c)();
  return;
}



// FUNCTION 14da81219 FUN_14da81219 body=500 status=ok
// SIG undefined FUN_14da81219(void)

/* WARNING: Removing unreachable block (ram,0x000165fe16b9) */
/* WARNING: Removing unreachable block (ram,0x000165fe16b3) */
/* WARNING: Removing unreachable block (ram,0x000165fe16be) */
/* WARNING: Removing unreachable block (ram,0x0001615604cc) */
/* WARNING: Removing unreachable block (ram,0x00014da812aa) */
/* WARNING: Removing unreachable block (ram,0x00014da812b0) */
/* WARNING: Removing unreachable block (ram,0x00014da8130d) */
/* WARNING: Removing unreachable block (ram,0x00014da81311) */
/* WARNING: Removing unreachable block (ram,0x000165fe1622) */

void FUN_14da81219(void)

{
  FUN_165fe1622();
  return;
}



// FUNCTION 14da8137b FUN_14da8137b body=127 status=ok
// SIG undefined FUN_14da8137b(void)

/* WARNING: Removing unreachable block (ram,0x00014da813b4) */

void FUN_14da8137b(void)

{
  FUN_160fcce02();
  return;
}



// FUNCTION 14da81499 FUN_14da81499 body=111 status=ok
// SIG undefined FUN_14da81499(void)

undefined1 FUN_14da81499(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  longlong unaff_R13;
  undefined8 unaff_R15;
  
  LOCK();
  uVar1 = DAT_14d7abdee;
  UNLOCK();
  DAT_14d7abdee = in_AL;
  *(undefined8 *)(unaff_R13 + -8) = 0x431593c;
  *(undefined8 *)(unaff_R13 + -0x10) = unaff_R15;
  *(undefined8 *)(unaff_R13 + -0x18) = unaff_R15;
  *(code **)(unaff_R13 + -0x10) = FUN_165c7153c;
  return uVar1;
}



// FUNCTION 14da8154a FUN_14da8154a body=128 status=ok
// SIG undefined FUN_14da8154a(void)

void FUN_14da8154a(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong in_R9;
  
  FUN_166c40d00(~unaff_RBP,FUN_166c40d00,
                ~(*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP),in_R9 & unaff_RDI);
  return;
}



// FUNCTION 14da815cc FUN_14da815cc body=153 status=ok
// SIG undefined FUN_14da815cc(void)

void FUN_14da815cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166605693(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14da8166d FUN_14da8166d body=272 status=ok
// SIG undefined FUN_14da8166d(void)

void FUN_14da8166d(undefined8 param_1)

{
  longlong unaff_R14;
  undefined8 in_stack_00000008;
  
  if (unaff_R14 == 0xd0104) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xd0105) {
    FUN_165e9c819(&DAT_15fc41e23);
    return;
  }
  if (unaff_R14 == 0xd0678) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 != 0xd0679) {
    FUN_1656b5839();
    return;
  }
  FUN_1656b5823(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14da817c4 FUN_14da817c4 body=282 status=ok
// SIG undefined FUN_14da817c4(void)

/* WARNING: Removing unreachable block (ram,0x00014da8184a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da817c4(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 in_R10;
  undefined8 unaff_R15;
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
  byte bVar17;
  byte bVar18;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar1 = local_res10 ^ param_1;
  puVar2 = (undefined8 *)(local_res18 ^ param_1);
  local_res10._0_2_ = (ushort)uVar1;
  uVar5 = ((ushort)local_res10 - 1) - ~(0xfeff - ((ushort)local_res10 | 0xfeff));
                    /* WARNING: Ignoring partial resolution of indirect */
  bVar14 = (uVar5 & 0x4000) != 0;
  bVar13 = (uVar5 & 0x800) != 0;
  bVar12 = (uVar5 & 0x200) != 0;
  bVar11 = (uVar5 & 0x100) != 0;
  bVar10 = (uVar5 & 0x80) != 0;
  bVar9 = (uVar5 & 0x40) != 0;
  bVar8 = (uVar5 & 0x10) != 0;
  bVar7 = (uVar5 & 4) != 0;
  bVar6 = (uVar5 & 1) != 0;
  bVar18 = (uVar1 & 0x200000) != 0;
  bVar15 = (uVar1 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar3 = (code *)swi(0x2e);
  uVar4 = (*pcVar3)();
  *puVar2 = unaff_R15;
  puVar2[-1] = unaff_R15;
  puVar2[-2] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
               (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
               (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
               (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
               (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
               (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
               (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  puVar2[-3] = uVar4;
  puVar2[-4] = in_R10;
  *puVar2 = 0x3f9857c;
  uVar4 = FUN_1568a7999();
  return uVar4;
}



// FUNCTION 14da818e6 FUN_14da818e6 body=298 status=ok
// SIG undefined FUN_14da818e6(void)

void FUN_14da818e6(void)

{
  FUN_1646ca031();
  FUN_166b8d6da();
  return;
}



// FUNCTION 14da81a13 FUN_14da81a13 body=157 status=ok
// SIG undefined FUN_14da81a13(void)

/* WARNING: Removing unreachable block (ram,0x00014da81aa5) */
/* WARNING: Removing unreachable block (ram,0x00014da81ab1) */
/* WARNING: Removing unreachable block (ram,0x000164c67dba) */
/* WARNING: Removing unreachable block (ram,0x000164c67e45) */
/* WARNING: Removing unreachable block (ram,0x000164c67e4a) */
/* WARNING: Removing unreachable block (ram,0x000164c67e56) */
/* WARNING: Removing unreachable block (ram,0x000156b4b19d) */

undefined8 FUN_14da81a13(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164c67dba();
  return uVar1;
}



// FUNCTION 14da81ab1 FUN_14da81ab1 body=159 status=ok
// SIG undefined FUN_14da81ab1(void)

undefined1 * FUN_14da81ab1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  ushort *unaff_R12;
  longlong local_res20;
  
  *unaff_R12 = *unaff_R12 - (*unaff_R12 & 0x100);
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  *(undefined8 *)(local_res20 + -0x28) = param_3;
  *(undefined8 *)(local_res20 + -0x30) = param_3;
  *(code **)(local_res20 + -0x20) = FUN_14da81b53;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_15b40e933;
  return &LAB_15b40e9d2;
}



// FUNCTION 14da81b53 FUN_14da81b53 body=152 status=ok
// SIG undefined FUN_14da81b53(void)

void FUN_14da81b53(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined8 uStackX_18;
  ulonglong local_res20;
  
  param_4 = param_4 - in_RAX;
  uVar1 = 0xffffffffffffffff - param_1 | *(ulonglong *)((longlong)&local_res20 + param_4);
  *(ulonglong *)((longlong)&local_res20 + param_4) =
       ~*(ulonglong *)((longlong)&local_res20 + param_4);
  *(ulonglong *)((longlong)&local_res20 + param_4) =
       *(ulonglong *)((longlong)&local_res20 + param_4) | param_1;
  *(ulonglong *)((longlong)&local_res20 + param_4) =
       ~((*(longlong *)((longlong)&local_res20 + param_4) -
         (uVar1 | *(ulonglong *)((longlong)&local_res20 + param_4))) + uVar1);
  FUN_1662be890(local_res20,param_2,0x10,uStackX_18);
  return;
}



// FUNCTION 14da81bed FUN_14da81bed body=65 status=ok
// SIG undefined FUN_14da81bed(void)

undefined8 FUN_14da81bed(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14da81c74 FUN_14da81c74 body=104 status=ok
// SIG undefined FUN_14da81c74(void)

void FUN_14da81c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  short in_AX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ushort *unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *unaff_retaddr = (0xffffU - in_AX | *unaff_retaddr) - 0x100;
  pvVar1 = ProcessEnvironmentBlock;
  *(void **)(local_res18 + -8) = ProcessEnvironmentBlock;
  *(void **)(local_res18 + -0x10) = pvVar1;
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
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -8) = 0x750d0fa;
  FUN_165c7153c(param_1,uStackX_8,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14da81d03 FUN_14da81d03 body=95 status=ok
// SIG undefined FUN_14da81d03(void)

void FUN_14da81d03(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined **)(uVar1 - 8) = &DAT_14da81d73;
                    /* WARNING: Could not recover jumptable at 0x00014da81d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_RBP - local_res10))(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14da81f85 FUN_14da81f85 body=350 status=ok
// SIG undefined FUN_14da81f85(void)

void FUN_14da81f85(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_R10;
  longlong unaff_R12;
  
  uVar1 = *(undefined8 *)(unaff_R12 + -8);
  FUN_15783e0da();
  (*(code *)&LAB_16244800b)(uVar1,param_2,in_R10);
  return;
}



// FUNCTION 14da820e4 FUN_14da820e4 body=242 status=ok
// SIG undefined FUN_14da820e4(void)

/* WARNING: Removing unreachable block (ram,0x000164941d9e) */
/* WARNING: Removing unreachable block (ram,0x000164941d98) */
/* WARNING: Removing unreachable block (ram,0x000164941da3) */
/* WARNING: Removing unreachable block (ram,0x00014da82171) */
/* WARNING: Removing unreachable block (ram,0x00014da82166) */
/* WARNING: Removing unreachable block (ram,0x000161a706df) */
/* WARNING: Removing unreachable block (ram,0x000164941d12) */

undefined8 FUN_14da820e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164941d12();
  return uVar1;
}



// FUNCTION 14da82362 FUN_14da82362 body=154 status=ok
// SIG undefined FUN_14da82362(void)

void FUN_14da82362(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_stack_00000018;
  
  FUN_156f2659f(param_1,FUN_156f2659f,param_3,-*(longlong *)(in_stack_00000018 + -0x98),
                *(undefined8 *)(in_stack_00000018 + -0x70));
  return;
}



// FUNCTION 14da82595 FUN_14da82595 body=271 status=ok
// SIG undefined FUN_14da82595(void)

/* WARNING: Removing unreachable block (ram,0x00014da82638) */

void FUN_14da82595(undefined8 param_1)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  FUN_166528a48(param_1,FUN_166528a48,unaff_RBX + in_RAX + 1);
  return;
}



// FUNCTION 14da82787 FUN_14da82787 body=1260 status=ok
// SIG undefined FUN_14da82787(void)

/* WARNING: Removing unreachable block (ram,0x00014da829fd) */
/* WARNING: Removing unreachable block (ram,0x00014da829f7) */
/* WARNING: Removing unreachable block (ram,0x00014da82a02) */
/* WARNING: Removing unreachable block (ram,0x00014da82c2b) */
/* WARNING: Removing unreachable block (ram,0x00014da82c2f) */
/* WARNING: Removing unreachable block (ram,0x0001653d55b6) */
/* WARNING: Removing unreachable block (ram,0x00014da82952) */
/* WARNING: Removing unreachable block (ram,0x00014da82958) */
/* WARNING: Removing unreachable block (ram,0x00014da8298f) */
/* WARNING: Removing unreachable block (ram,0x00014da829e0) */
/* WARNING: Removing unreachable block (ram,0x000156c267cd) */
/* WARNING: Removing unreachable block (ram,0x000156c26832) */
/* WARNING: Removing unreachable block (ram,0x000156c26835) */
/* WARNING: Removing unreachable block (ram,0x000156c268e0) */
/* WARNING: Removing unreachable block (ram,0x000156c268eb) */
/* WARNING: Removing unreachable block (ram,0x000156c268e6) */
/* WARNING: Removing unreachable block (ram,0x000156c268db) */
/* WARNING: Removing unreachable block (ram,0x000161527bcf) */
/* WARNING: Removing unreachable block (ram,0x00014da82c71) */
/* WARNING: Removing unreachable block (ram,0x00014da82c77) */
/* WARNING: Removing unreachable block (ram,0x00014da8280a) */
/* WARNING: Removing unreachable block (ram,0x00014da82810) */
/* WARNING: Removing unreachable block (ram,0x00014da828b3) */
/* WARNING: Removing unreachable block (ram,0x0001653f0651) */
/* WARNING: Removing unreachable block (ram,0x00014da828b9) */
/* WARNING: Removing unreachable block (ram,0x00014da8294d) */
/* WARNING: Removing unreachable block (ram,0x000157052d53) */

undefined8 FUN_14da82787(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da82c77 FUN_14da82c77 body=124 status=ok
// SIG undefined FUN_14da82c77(void)

void FUN_14da82c77(undefined8 param_1)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ushort *unaff_R15;
  bool bVar1;
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
  ushort unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_R15 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15;
  *unaff_R15 = *unaff_R15 | 0xffff - (unaff_retaddr ^ 0xaf88);
  *unaff_R15 = ~*unaff_R15;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x400) != 0;
  bVar7 = (uStackX_18 & 0x200) != 0;
  bVar6 = (uStackX_18 & 0x100) != 0;
  bVar5 = (uStackX_18 & 0x80) != 0;
  bVar4 = (uStackX_18 & 0x40) != 0;
  bVar3 = (uStackX_18 & 0x10) != 0;
  bVar2 = (uStackX_18 & 4) != 0;
  bVar1 = (uStackX_18 & 1) != 0;
  bVar12 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 | (ulonglong)bVar5 * 0x80 |
       (ulonglong)bVar4 * 0x40 | (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = in_R10;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RDI;
  *(ulonglong *)(local_res20 + -0x30) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 | (ulonglong)bVar5 * 0x80 |
       (ulonglong)bVar4 * 0x40 | (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  FUN_1570f3e6e(param_1,uStackX_10);
  return;
}



// FUNCTION 14da82e32 FUN_14da82e32 body=193 status=ok
// SIG undefined FUN_14da82e32(void)

void FUN_14da82e32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_14d99ba9d(param_1,local_res8,param_3,FUN_14d99ba9d);
  return;
}



// FUNCTION 14da82ef5 FUN_14da82ef5 body=150 status=ok
// SIG undefined FUN_14da82ef5(void)

void FUN_14da82ef5(undefined8 param_1,short param_2)

{
  undefined8 unaff_retaddr;
  ushort in_stack_00000040;
  
  FUN_16681ed8c(param_1,(~(param_2 + in_stack_00000040 & in_stack_00000040) + in_stack_00000040) -
                        (param_2 + in_stack_00000040 ^ 0xffff),unaff_retaddr,FUN_16681ed8c);
  return;
}



// FUNCTION 14da83034 FUN_14da83034 body=167 status=ok
// SIG undefined FUN_14da83034(void)

void FUN_14da83034(void)

{
  return;
}



// FUNCTION 14da8321d FUN_14da8321d body=2 status=ok
// SIG undefined FUN_14da8321d(void)

void FUN_14da8321d(void)

{
  return;
}



// FUNCTION 14da833d6 FUN_14da833d6 body=161 status=ok
// SIG undefined FUN_14da833d6(void)

void FUN_14da833d6(void)

{
  undefined8 local_res8;
  
  FUN_15713264b(FUN_15713264b,local_res8);
  return;
}



// FUNCTION 14da8350d FUN_14da8350d body=170 status=ok
// SIG undefined FUN_14da8350d(void)

void FUN_14da8350d(void)

{
  (*(code *)0x165c05531)();
  return;
}



// FUNCTION 14da835b9 FUN_14da835b9 body=106 status=ok
// SIG undefined FUN_14da835b9(void)

longlong FUN_14da835b9(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  return *(longlong *)(unaff_R13 + -0x30) + unaff_R15;
}



// FUNCTION 14da836b3 FUN_14da836b3 body=134 status=ok
// SIG undefined FUN_14da836b3(void)

/* WARNING: Removing unreachable block (ram,0x00014da83729) */
/* WARNING: Removing unreachable block (ram,0x00014da83734) */
/* WARNING: Removing unreachable block (ram,0x00014da8372f) */

void FUN_14da836b3(void)

{
  FUN_157336961();
  return;
}



// FUNCTION 14da8373a FUN_14da8373a body=79 status=ok
// SIG undefined FUN_14da8373a(void)

void FUN_14da8373a(void)

{
  return;
}



// FUNCTION 14da8385d FUN_14da8385d body=31 status=ok
// SIG undefined FUN_14da8385d(void)

void FUN_14da8385d(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da8387c FUN_14da8387c body=144 status=ok
// SIG undefined FUN_14da8387c(void)

void FUN_14da8387c(void)

{
  longlong in_R9;
  
  if (in_R9 != 0xcd0f6) {
    FUN_162808216();
    return;
  }
  return;
}



// FUNCTION 14da83a30 thunk_FUN_14da83a36 body=5 status=ok
// SIG undefined thunk_FUN_14da83a36(void)

void thunk_FUN_14da83a36(int param_1,undefined8 param_2,undefined8 param_3)

{
  int in_R10D;
  undefined8 in_stack_00000008;
  
  FUN_16227ea81(param_1 + in_R10D,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14da83a36 FUN_14da83a36 body=146 status=ok
// SIG undefined FUN_14da83a36(void)

void FUN_14da83a36(int param_1,undefined8 param_2,undefined8 param_3)

{
  int in_R10D;
  undefined8 in_stack_00000008;
  
  FUN_16227ea81(param_1 + in_R10D,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14da83b73 FUN_14da83b73 body=178 status=ok
// SIG undefined FUN_14da83b73(void)

undefined8 FUN_14da83b73(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da83c27 FUN_14da83c27 body=558 status=ok
// SIG undefined FUN_14da83c27(void)

/* WARNING: Removing unreachable block (ram,0x00016198a516) */
/* WARNING: Removing unreachable block (ram,0x00016198a565) */
/* WARNING: Removing unreachable block (ram,0x000156ac1a5d) */
/* WARNING: Removing unreachable block (ram,0x00016198a56b) */

undefined8 FUN_14da83c27(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x1661d1f64)();
  return uVar1;
}



// FUNCTION 14da83ed4 FUN_14da83ed4 body=148 status=ok
// SIG undefined FUN_14da83ed4(void)

void FUN_14da83ed4(void)

{
  undefined8 in_R9;
  longlong unaff_R15;
  
  *(undefined8 *)(&stack0x00000018 + unaff_R15) = in_R9;
  return;
}



// FUNCTION 14da84007 FUN_14da84007 body=151 status=ok
// SIG undefined FUN_14da84007(void)

void FUN_14da84007(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x165d71494)(param_1,param_2,0x165d71494);
  return;
}



// FUNCTION 14da8409f FUN_14da8409f body=155 status=ok
// SIG undefined FUN_14da8409f(void)

void FUN_14da8409f(void)

{
  return;
}



// FUNCTION 14da8413b FUN_14da8413b body=78 status=ok
// SIG undefined FUN_14da8413b(void)

int FUN_14da8413b(void)

{
  int unaff_ESI;
  uint unaff_R13D;
  
  return unaff_ESI - ~unaff_R13D;
}



// FUNCTION 14da841b7 FUN_14da841b7 body=131 status=ok
// SIG undefined FUN_14da841b7(void)

void FUN_14da841b7(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 uStackX_20;
  
  *(ulonglong *)(param_3 + 0x10) = ~in_R10;
  syscall();
  *(undefined8 *)(uStackX_20 + -8) = unaff_R15;
  *(undefined8 *)(uStackX_20 + -0x10) = unaff_R15;
  *(undefined4 *)(uStackX_20 + -0x18) = 0x7e2629e;
  *(undefined4 *)(uStackX_20 + -0x14) = 0;
  lVar1 = *(longlong *)(uStackX_20 + -0x18);
  *(ulonglong *)(uStackX_20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(longlong *)(uStackX_20 + -0x20) = lVar1;
  *(longlong *)(uStackX_20 + -0x20) = *(longlong *)(uStackX_20 + -0x20) + -0x36e2c48;
  *(undefined8 *)(uStackX_20 + -0x18) = unaff_RBX;
  *(longlong *)(uStackX_20 + -8) = lVar1 + -0x36e2c48;
  FUN_165c7153c(0x14da841dd,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da84301 FUN_14da84301 body=153 status=ok
// SIG undefined FUN_14da84301(void)

/* WARNING: Removing unreachable block (ram,0x00014da84436) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da84301(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162bb8445(param_1,param_2,FUN_162bb8445);
  FUN_165655ca3(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da8439a FUN_14da8439a body=160 status=ok
// SIG undefined FUN_14da8439a(void)

/* WARNING: Removing unreachable block (ram,0x00014da84436) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da8439a(void)

{
  longlong unaff_R13;
  undefined4 unaff_R15D;
  undefined4 unaff_000000bc;
  
  FUN_165655ca3(*(ulonglong *)(unaff_R13 + -0x78) ^ CONCAT44(unaff_000000bc,unaff_R15D),
                *(ulonglong *)(unaff_R13 + -0x28) + CONCAT44(unaff_000000bc,unaff_R15D) +
                (*(ulonglong *)(unaff_R13 + -0x28) & CONCAT44(unaff_000000bc,unaff_R15D)) * -2);
  return;
}



// FUNCTION 14da8443c FUN_14da8443c body=40 status=ok
// SIG undefined FUN_14da8443c(void)

void FUN_14da8443c(void)

{
  ulonglong in_RAX;
  ulonglong in_R11;
  ulonglong *unaff_R13;
  
  *unaff_R13 = 0xffffffffffffffff - (in_R11 & in_RAX) & (in_R11 | in_RAX);
  FUN_165168ca2();
  return;
}



// FUNCTION 14da844d4 FUN_14da844d4 body=230 status=ok
// SIG undefined FUN_14da844d4(void)

void FUN_14da844d4(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong unaff_RSI;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar3;
  undefined8 uStackX_10;
  ulonglong auStack_20 [4];
  
  param_1 = param_1 - ~(~(unaff_R13 & 0xffffffffab20ead7) & (unaff_R13 | 0xffffffffab20ead7));
  *(undefined8 *)(&stack0x00000018 + param_1) = param_2;
  puVar1 = (ulonglong *)((longlong)&stack0x00000010 + param_1);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RSI;
  *(undefined8 *)(&stack0x00000008 + param_1) = uStackX_10;
  *(undefined8 *)(&stack0x00000000 + param_1) = unaff_R15;
  puVar2 = (undefined8 *)(&stack0x00000000 + param_1);
  *puVar2 = param_2;
  puVar2[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 5 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  uVar3 = puVar2[-1];
  puVar2[-1] = (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar3 & 0x800) != 0) * 0x800 | (ulonglong)((uVar3 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
               (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = puVar2[-1];
  puVar2[-1] = unaff_R14;
  puVar2[-2] = unaff_R14;
  puVar2[-3] = 0xe46e7f7;
  puVar2[-4] = (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar3 & 0x800) != 0) * 0x800 | (ulonglong)((uVar3 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
               (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  puVar2[-1] = 0x14da845ba;
  FUN_16694e6d1(0xe46e7ff);
  return;
}



// FUNCTION 14da8477e FUN_14da8477e body=294 status=ok
// SIG undefined FUN_14da8477e(void)

void FUN_14da8477e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1659480ce(param_1,param_2,param_3);
  FUN_15ba2b3fd();
  return;
}



// FUNCTION 14da84942 FUN_14da84942 body=134 status=ok
// SIG undefined FUN_14da84942(void)

undefined8 FUN_14da84942(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da849c8 FUN_14da849c8 body=86 status=ok
// SIG undefined FUN_14da849c8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da849c8(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined8 uStackX_8;
  
  *(char *)(CONCAT44(in_register_00000004,in_EAX) + 0x54) = (char)((ulonglong)uStackX_8 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da84b0e FUN_14da84b0e body=345 status=ok
// SIG undefined FUN_14da84b0e(void)

void FUN_14da84b0e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~(~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) |
          ~(~*(ulonglong *)(unaff_RDI + -0x68) | param_1);
  if (-1 < (short)uVar1) {
    (*(code *)0x1669e2855)();
    return;
  }
  (*(code *)0x161b05943)(param_1,uVar1,param_3,param_4);
  return;
}



// FUNCTION 14da84bb5 FUN_14da84bb5 body=37 status=ok
// SIG undefined FUN_14da84bb5(void)

undefined8 FUN_14da84bb5(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da84c48 FUN_14da84c48 body=505 status=ok
// SIG undefined FUN_14da84c48(void)

void FUN_14da84c48(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar3;
  
  *(ulonglong *)(&stack0xfffffffff8be4d57 + unaff_RBP) = *(ulonglong *)(unaff_RDI + -0x48);
  *(ulonglong *)(&stack0xfffffffff8be4d5f + unaff_RBP) =
       *(ulonglong *)(&stack0xfffffffff8be4d57 + unaff_RBP);
  uVar1 = *(ulonglong *)(&stack0xfffffffff8be4d5f + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP) = in_R10;
  *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP) = param_3;
  bVar3 = (longlong)((~param_1 | uVar1) & (~uVar1 | param_1) ^ 0xffffffffffffffff) < 0;
  uVar2 = *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP) = in_RAX;
  if ((!bVar3) && (bVar3)) {
    FUN_1610f6654(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                   (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                  ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                   (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),uVar2);
    return;
  }
  *(undefined8 *)(&stack0xfffffffff8be4d57 + unaff_RBP) = param_4;
  *(undefined8 *)(&stack0xfffffffff8be4d57 + unaff_RBP) =
       *(undefined8 *)(&stack0xfffffffff8be4d57 + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffff8be4d57 + unaff_RBP) = unaff_R14;
  *(longlong *)(&stack0xfffffffff8be4d4f + unaff_RBP) = unaff_R13;
  uVar2 = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(&stack0xfffffffff8be4d4f + unaff_RBP) = in_R11;
  *(undefined8 *)(&stack0xfffffffff8be4d5f + unaff_RBP) = uVar2;
  FUN_1568a37bb();
  return;
}



// FUNCTION 14da84cf6 FUN_14da84cf6 body=163 status=ok
// SIG undefined FUN_14da84cf6(void)

void FUN_14da84cf6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1610f6654(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14da84d9b FUN_14da84d9b body=148 status=ok
// SIG undefined FUN_14da84d9b(void)

/* WARNING: Removing unreachable block (ram,0x00014da84df2) */

ulonglong FUN_14da84d9b(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  uint local_res8;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff93b3117 + local_res8);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = *puVar1;
  *puVar1 = (ulonglong)&LAB_161d8e113;
  return ~((~unaff_R15 | uVar2) & (~uVar2 | unaff_R15));
}



// FUNCTION 14da85011 FUN_14da85011 body=145 status=ok
// SIG undefined FUN_14da85011(void)

undefined8 FUN_14da85011(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 14da850a3 FUN_14da850a3 body=178 status=ok
// SIG undefined FUN_14da850a3(void)

/* WARNING: Removing unreachable block (ram,0x00014da850c6) */

void FUN_14da850a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_165f5ab9f(param_1,param_2,param_3,*(undefined8 *)(*param_4 + 0x11));
  return;
}



// FUNCTION 14da851db FUN_14da851db body=366 status=ok
// SIG undefined FUN_14da851db(void)

/* WARNING: Removing unreachable block (ram,0x00014da8532d) */
/* WARNING: Removing unreachable block (ram,0x00014da85338) */
/* WARNING: Removing unreachable block (ram,0x00014da85282) */
/* WARNING: Removing unreachable block (ram,0x00014da85288) */
/* WARNING: Removing unreachable block (ram,0x000156ae4b42) */
/* WARNING: Removing unreachable block (ram,0x00014da85333) */

void FUN_14da851db(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~(~-*(longlong *)(unaff_RDI + -8) + 1U);
  FUN_1620d36f1(param_1,param_2,FUN_1620d36f1,param_4,(~(uVar1 & param_1) + param_1) - (-1 - uVar1))
  ;
  return;
}



// FUNCTION 14da85436 FUN_14da85436 body=166 status=ok
// SIG undefined FUN_14da85436(void)

void FUN_14da85436(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined1 local_res8 [32];
  
  (*(code *)0x15b927fa9)
            (0xafd167cd,local_res8,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
             param_2 + ~((param_1 + in_RAX) - ~param_4) * -2);
  return;
}



// FUNCTION 14da854dd FUN_14da854dd body=153 status=ok
// SIG undefined FUN_14da854dd(void)

/* WARNING: Removing unreachable block (ram,0x00014da85731) */
/* WARNING: Removing unreachable block (ram,0x00014da85737) */
/* WARNING: Removing unreachable block (ram,0x00016177fe6b) */
/* WARNING: Removing unreachable block (ram,0x00014da85577) */

void FUN_14da854dd(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  ushort local_res10;
  ulonglong local_res18;
  
  local_res10 = local_res10 + (ushort)param_1 + (local_res10 & (ushort)param_1) * -2;
  param_1 = local_res18 ^ param_1;
  if (-1 < (short)((~(local_res10 | 0xfeff) - 0x100) + local_res10)) {
    FUN_166418409();
    return;
  }
  *(undefined8 *)(param_1 - 8) = unaff_R14;
  *(undefined8 *)(param_1 - 0x10) = in_RAX;
  *(undefined8 *)(param_1 - 0x18) = in_RAX;
  uVar1 = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = param_3;
  *(undefined8 *)(param_1 - 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 - 0x20);
  *(undefined8 *)(param_1 - 8) = 0;
  *(longlong *)(param_1 - 8) = (longlong)(&DAT_166418484 + *(longlong *)(param_1 - 8));
                    /* WARNING: Could not recover jumptable at 0x00016641846b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_retaddr + 0xe0))(uStackX_8,param_2,uVar1);
  return;
}



// FUNCTION 14da85577 FUN_14da85577 body=151 status=ok
// SIG undefined FUN_14da85577(void)

/* WARNING: Removing unreachable block (ram,0x00014da85731) */
/* WARNING: Removing unreachable block (ram,0x00014da85737) */
/* WARNING: Removing unreachable block (ram,0x00016177fe6b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da85577(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_156bb550b;
  FUN_156bb550b();
  FUN_15b6fd962(FUN_15b6fd962,pcVar1);
  FUN_16177fe6b();
  return;
}



// FUNCTION 14da8560e FUN_14da8560e body=288 status=ok
// SIG undefined FUN_14da8560e(void)

/* WARNING: Removing unreachable block (ram,0x00014da85731) */
/* WARNING: Removing unreachable block (ram,0x00014da85737) */
/* WARNING: Removing unreachable block (ram,0x00016177fe6b) */

void FUN_14da8560e(undefined8 param_1,undefined8 param_2)

{
  FUN_15b6fd962(FUN_15b6fd962,param_2);
  FUN_16177fe6b();
  return;
}



// FUNCTION 14da85737 FUN_14da85737 body=20 status=ok
// SIG undefined FUN_14da85737(void)

void FUN_14da85737(void)

{
  return;
}



// FUNCTION 14da85a6a FUN_14da85a6a body=154 status=ok
// SIG undefined FUN_14da85a6a(void)

/* WARNING: Removing unreachable block (ram,0x00014da85ab7) */

void FUN_14da85a6a(undefined8 param_1)

{
  (*(code *)0x156545884)(param_1,0x156545884);
  return;
}



// FUNCTION 14da85cd4 FUN_14da85cd4 body=166 status=ok
// SIG undefined FUN_14da85cd4(void)

void FUN_14da85cd4(void)

{
  (*(code *)0x166b357a9)();
  return;
}



// FUNCTION 14da85fe7 FUN_14da85fe7 body=422 status=ok
// SIG undefined FUN_14da85fe7(void)

/* WARNING: Removing unreachable block (ram,0x00014da8607c) */
/* WARNING: Removing unreachable block (ram,0x00014da86082) */

void FUN_14da85fe7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_165ff9eea(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da86193 FUN_14da86193 body=347 status=ok
// SIG undefined FUN_14da86193(void)

void FUN_14da86193(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong in_stack_00000010;
  
  local_res8 = *(ulonglong *)(unaff_R13 + -8) ^ unaff_R15;
  FUN_1658c29e9(param_1,&local_res8,~((ushort)local_res8 & 0x100) + (ushort)local_res8 + 0x101,
                param_4,in_stack_00000010 ^ unaff_R15);
  (*(code *)0x164a524ec)();
  return;
}



// FUNCTION 14da862f7 FUN_14da862f7 body=148 status=ok
// SIG undefined FUN_14da862f7(void)

void FUN_14da862f7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  FUN_156d6d052(unaff_retaddr,param_2,param_3,FUN_156d6d052);
  return;
}



// FUNCTION 14da86429 FUN_14da86429 body=158 status=ok
// SIG undefined FUN_14da86429(void)

void FUN_14da86429(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_157161588(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14da86759 FUN_14da86759 body=121 status=ok
// SIG undefined FUN_14da86759(void)

/* WARNING: Removing unreachable block (ram,0x00014da867ec) */
/* WARNING: Removing unreachable block (ram,0x00014da867f2) */
/* WARNING: Removing unreachable block (ram,0x00014da867f7) */
/* WARNING: Removing unreachable block (ram,0x00014da86889) */
/* WARNING: Removing unreachable block (ram,0x00014da86895) */
/* WARNING: Removing unreachable block (ram,0x00015722c44c) */
/* WARNING: Removing unreachable block (ram,0x00015722c477) */
/* WARNING: Removing unreachable block (ram,0x00015722c47b) */

void FUN_14da86759(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15673e085(~(~(0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX)) |
                 ~(*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,FUN_15673e085);
  return;
}



// FUNCTION 14da867f7 FUN_14da867f7 body=290 status=ok
// SIG undefined FUN_14da867f7(void)

/* WARNING: Removing unreachable block (ram,0x00015722c477) */
/* WARNING: Removing unreachable block (ram,0x00014da86895) */

void FUN_14da867f7(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  FUN_166dbec6f(param_1,~((~param_1 | param_2) & (~param_2 | param_1)),param_3);
  return;
}



// FUNCTION 14da8689b FUN_14da8689b body=298 status=ok
// SIG undefined FUN_14da8689b(void)

/* WARNING: Removing unreachable block (ram,0x00014da86933) */
/* WARNING: Removing unreachable block (ram,0x00014da86939) */
/* WARNING: Removing unreachable block (ram,0x00014da8693e) */

void FUN_14da8689b(void)

{
  undefined8 local_res8;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(local_res8 + -0x90);
  FUN_15b5740dc();
  return;
}



// FUNCTION 14da86aec FUN_14da86aec body=319 status=ok
// SIG undefined FUN_14da86aec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da86aec(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined8 in_R11;
  undefined8 unaff_R14;
  
  uVar5 = *(ulonglong *)(unaff_RSI + unaff_RDI) ^ unaff_RBP;
  uVar1 = *(ulonglong *)(unaff_RSI + -8) ^ unaff_RBP;
  uVar2 = *(ulonglong *)(unaff_RSI + -0x88) & unaff_RBP;
  if (((longlong)uVar2 < 0) && (0 < (longlong)uVar2)) {
    uVar1 = *(ulonglong *)(uVar5 - 0x70);
    uVar4 = FUN_14e1275d9(param_1,FUN_14e1275d9,~((~param_1 | uVar1) & (~uVar1 | param_1)),
                          *(ulonglong *)(uVar5 - 0x60) ^ param_1);
    return uVar4;
  }
  lVar3 = *(ulonglong *)(unaff_RSI + -0x88) + unaff_RBP + uVar2 * -2;
  uVar4 = _CurrentLocale;
  *(undefined8 *)(lVar3 + -0x10) = in_R11;
  *(undefined8 *)(lVar3 + -0x18) = 0xf6be9c;
  *(undefined8 *)(lVar3 + -0x20) = unaff_RBX;
  *(ulonglong *)(lVar3 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x10) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x18) = unaff_R14;
  *(code **)(lVar3 + -0x10) = FUN_15b3d5987;
  return uVar4;
}



// FUNCTION 14da86d5f FUN_14da86d5f body=46 status=ok
// SIG undefined FUN_14da86d5f(void)

void FUN_14da86d5f(void)

{
  return;
}



// FUNCTION 14da870a0 FUN_14da870a0 body=138 status=ok
// SIG undefined FUN_14da870a0(void)

undefined8 FUN_14da870a0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da871c8 FUN_14da871c8 body=127 status=ok
// SIG undefined FUN_14da871c8(void)

/* WARNING: Removing unreachable block (ram,0x00014da872d2) */
/* WARNING: Removing unreachable block (ram,0x00014da87246) */
/* WARNING: Removing unreachable block (ram,0x00014da872cc) */
/* WARNING: Removing unreachable block (ram,0x0001622875b6) */

void FUN_14da871c8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (0x20 < (byte)(param_3 - (param_3 | 0xdf))) {
    FUN_157485cef();
    return;
  }
  return;
}



// FUNCTION 14da87249 FUN_14da87249 body=405 status=ok
// SIG undefined FUN_14da87249(void)

/* WARNING: Removing unreachable block (ram,0x00014da872d2) */

void FUN_14da87249(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  FUN_15712085e(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,(param_3 | ~param_1) & unaff_RSI);
  return;
}



// FUNCTION 14da872d2 FUN_14da872d2 body=118 status=ok
// SIG undefined FUN_14da872d2(void)

void FUN_14da872d2(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = (ulonglong)
          *(uint *)(unaff_RBP +
                   (-1 - (((unaff_retaddr ^ 0xffffffffffffffff) + unaff_R15) -
                          ((unaff_retaddr ^ 0xffffffffffffffff) & unaff_R15) &
                         (~unaff_R15 | param_1))));
  *(undefined8 *)(unaff_RBP + 0xf0) = 0;
  *(longlong *)(unaff_RBP + 0xf0) = *(longlong *)(unaff_RBP + 0xf0) + uVar1;
  FUN_160f3885a(uVar1,param_2,FUN_160f3885a);
  return;
}



// FUNCTION 14da87348 FUN_14da87348 body=48 status=ok
// SIG undefined FUN_14da87348(void)

void FUN_14da87348(void)

{
  FUN_14d7a92e8();
  return;
}



// FUNCTION 14da873da FUN_14da873da body=124 status=ok
// SIG undefined FUN_14da873da(void)

undefined8 FUN_14da873da(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  
  *(ulonglong *)(unaff_R13 + 0x18) = ~*(ulonglong *)(unaff_R13 + 0x18);
  *(ulonglong *)(unaff_R13 + 0x18) = *(ulonglong *)(unaff_R13 + 0x18) | ~unaff_RSI;
  *(ulonglong *)(unaff_R13 + 0x18) = ~*(ulonglong *)(unaff_R13 + 0x18);
  return in_RAX;
}



// FUNCTION 14da8745c FUN_14da8745c body=394 status=ok
// SIG undefined FUN_14da8745c(void)

/* WARNING: Removing unreachable block (ram,0x00014da874ea) */
/* WARNING: Removing unreachable block (ram,0x00014da874f0) */

void * FUN_14da8745c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong unaff_R15;
  longlong local_res20;
  
  uVar4 = ~*(ulonglong *)(unaff_R15 + 0x10) & 0xffffffffffffffff - param_1;
  uVar1 = *(ulonglong *)(unaff_R15 + 0x10);
  lVar2 = *(longlong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | param_1;
  *(ulonglong *)(unaff_R15 + 0x10) =
       ~((~(uVar4 & uVar1) + lVar2) - ~uVar4 & *(ulonglong *)(unaff_R15 + 0x10));
  pvVar3 = ProcessEnvironmentBlock;
  *(undefined8 *)(local_res20 + -8) = 0x75cbec8;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_162f06992;
  return pvVar3;
}



// FUNCTION 14da87595 FUN_14da87595 body=180 status=ok
// SIG undefined FUN_14da87595(void)

void FUN_14da87595(void)

{
  return;
}



// FUNCTION 14da876f3 FUN_14da876f3 body=450 status=ok
// SIG undefined FUN_14da876f3(void)

/* WARNING: Removing unreachable block (ram,0x000166961510) */
/* WARNING: Removing unreachable block (ram,0x000166961516) */
/* WARNING: Removing unreachable block (ram,0x00014da8777d) */
/* WARNING: Removing unreachable block (ram,0x00014da87783) */
/* WARNING: Removing unreachable block (ram,0x000156f1838d) */
/* WARNING: Removing unreachable block (ram,0x000156f183b5) */
/* WARNING: Removing unreachable block (ram,0x000156f18428) */
/* WARNING: Removing unreachable block (ram,0x000156f18423) */
/* WARNING: Removing unreachable block (ram,0x000156f183ba) */

undefined8 FUN_14da876f3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong local_res8;
  
  FUN_15b8520b1(FUN_15b8520b1,param_2);
  uVar1 = FUN_15b24a7e9(local_res8 + unaff_RBX);
  return uVar1;
}



// FUNCTION 14da878a3 FUN_14da878a3 body=125 status=ok
// SIG undefined FUN_14da878a3(void)

void FUN_14da878a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
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
  ulonglong uVar16;
  ulonglong local_res8;
  longlong *plStackX_10;
  
  bVar11 = (local_res8 & 0x4000) != 0;
  bVar10 = (local_res8 & 0x800) != 0;
  bVar9 = (local_res8 & 0x200) != 0;
  bVar8 = (local_res8 & 0x100) != 0;
  bVar7 = (local_res8 & 0x80) != 0;
  bVar6 = (local_res8 & 0x40) != 0;
  bVar5 = (local_res8 & 0x10) != 0;
  bVar4 = (local_res8 & 4) != 0;
  bVar3 = (local_res8 & 1) != 0;
  bVar15 = (local_res8 & 0x200000) != 0;
  bVar12 = (local_res8 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *plStackX_10 = unaff_RSI;
  plStackX_10[-1] = unaff_RSI;
  plStackX_10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  *(undefined4 *)(plStackX_10 + -3) = 0x113b6176;
  *(undefined4 *)((longlong)plStackX_10 + -0x14) = 0;
  uVar2 = plStackX_10[-3];
  uVar16 = plStackX_10[-2];
  plStackX_10[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  plStackX_10[-3] = unaff_RBP;
  *(undefined4 *)(plStackX_10 + -4) = 0xb1c1998;
  *(undefined4 *)((longlong)plStackX_10 + -0x1c) = 0;
  uVar16 = plStackX_10[-4];
  plStackX_10[-4] = param_1;
  plStackX_10[-5] = unaff_RBX;
  plStackX_10[-2] = param_3;
  *plStackX_10 = (uVar2 ^ 0x17fdb0c8) - (uVar16 ^ 0x8bc922a);
  (*(code *)0x165f34852)(plStackX_10[-4],param_2,plStackX_10[-2]);
  return;
}



// FUNCTION 14da87926 FUN_14da87926 body=298 status=ok
// SIG undefined FUN_14da87926(void)

void FUN_14da87926(void)

{
  FUN_1667207eb();
  FUN_164baaf1a();
  return;
}



// FUNCTION 14da87ae2 FUN_14da87ae2 body=175 status=ok
// SIG undefined FUN_14da87ae2(void)

void FUN_14da87ae2(void)

{
  return;
}



// FUNCTION 14da87b92 FUN_14da87b92 body=189 status=ok
// SIG undefined FUN_14da87b92(void)

/* WARNING: Removing unreachable block (ram,0x00014da87cd8) */
/* WARNING: Removing unreachable block (ram,0x00014da87cde) */
/* WARNING: Removing unreachable block (ram,0x00014da87ce9) */
/* WARNING: Removing unreachable block (ram,0x00014da87c40) */
/* WARNING: Removing unreachable block (ram,0x00014da87c51) */
/* WARNING: Removing unreachable block (ram,0x000166b8e54f) */
/* WARNING: Removing unreachable block (ram,0x00014da87c46) */

void FUN_14da87b92(void)

{
  FUN_1614e621e();
  return;
}



// FUNCTION 14da87c51 FUN_14da87c51 body=150 status=ok
// SIG undefined FUN_14da87c51(void)

/* WARNING: Removing unreachable block (ram,0x00014da87cd8) */
/* WARNING: Removing unreachable block (ram,0x00014da87ce9) */
/* WARNING: Removing unreachable block (ram,0x00014da87cde) */

void FUN_14da87c51(undefined8 param_1,undefined8 param_2)

{
  FUN_164a6b0b2(FUN_164a6b0b2,param_2);
  return;
}



// FUNCTION 14da87ce9 FUN_14da87ce9 body=155 status=ok
// SIG undefined FUN_14da87ce9(void)

void FUN_14da87ce9(void)

{
  return;
}



// FUNCTION 14da87d86 FUN_14da87d86 body=438 status=ok
// SIG undefined FUN_14da87d86(void)

/* WARNING: Removing unreachable block (ram,0x00014da87df8) */
/* WARNING: Removing unreachable block (ram,0x00014da87dfe) */
/* WARNING: Removing unreachable block (ram,0x00014da87e88) */
/* WARNING: Removing unreachable block (ram,0x00014da87e8d) */
/* WARNING: Removing unreachable block (ram,0x00014da87e93) */
/* WARNING: Removing unreachable block (ram,0x00014da87e98) */

void FUN_14da87d86(void)

{
  return;
}



// FUNCTION 14da87f41 FUN_14da87f41 body=146 status=ok
// SIG undefined FUN_14da87f41(void)

void FUN_14da87f41(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x16232aa1f)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14da88232 FUN_14da88232 body=197 status=ok
// SIG undefined FUN_14da88232(void)

void FUN_14da88232(void)

{
  return;
}



// FUNCTION 14da882f8 FUN_14da882f8 body=56 status=ok
// SIG undefined FUN_14da882f8(void)

void FUN_14da882f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  undefined3 uVar1;
  undefined4 in_EAX;
  longlong lVar2;
  short *unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  longlong lStackX_20;
  
  *unaff_RBP = (*unaff_RBP + -1) - ~param_4;
  uVar1 = SegmentLimit(in_EAX);
  *(undefined8 *)(lStackX_20 + -8) = in_R11;
  *(undefined8 *)(lStackX_20 + -0x10) = in_R11;
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((byte)((uint3)uVar1 >> 0x10) & 1) * 0x40 |
       (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 | (ulonglong)((uStackX_18 & 4) != 0) * 4 |
       (ulonglong)((uStackX_18 & 1) != 0) | (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(lStackX_20 + -0x18);
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_R14;
  uVar4 = *(ulonglong *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_RSI;
  *(ulonglong *)(lStackX_20 + -0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_20 + -8) = 0x74640a;
  *(undefined8 *)(lStackX_20 + -0x20) = 0x14da88381;
  FUN_16224b8a8(unaff_retaddr,param_2,param_3,uStackX_10);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar3 = uVar4 & unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_retaddr;
  lVar2 = uVar4 + unaff_R15 + uVar3 * -2;
  *(ulonglong *)(lStackX_20 + -0x20) =
       ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x38)) &
        (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15));
  *(longlong *)(lStackX_20 + -0x28) = lVar2;
  FUN_14dfb22d6(uVar3 * 2,FUN_14dfb22d6,lVar2,0xfffffffffffffff7);
  return;
}



// FUNCTION 14da885ba FUN_14da885ba body=158 status=ok
// SIG undefined FUN_14da885ba(void)

/* WARNING: Removing unreachable block (ram,0x00014da886b5) */

void FUN_14da885ba(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1655bbe7f(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  FUN_15b88213e();
  (*(code *)0x14d916617)();
  return;
}



// FUNCTION 14da88659 FUN_14da88659 body=272 status=ok
// SIG undefined FUN_14da88659(void)

/* WARNING: Removing unreachable block (ram,0x00014da886b5) */

void FUN_14da88659(undefined8 param_1,longlong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b88213e(param_1,0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + param_2) & unaff_R15) &
                        ~(~*(ulonglong *)(unaff_R13 + param_2) & ~unaff_R15));
  (*(code *)0x14d916617)();
  return;
}



// FUNCTION 14da8882f FUN_14da8882f body=26 status=ok
// SIG undefined FUN_14da8882f(void)

void FUN_14da8882f(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da88aab FUN_14da88aab body=120 status=ok
// SIG undefined FUN_14da88aab(void)

void FUN_14da88aab(void)

{
  ulonglong *puVar1;
  short *unaff_RBP;
  undefined8 unaff_RDI;
  short in_R10W;
  undefined8 unaff_R15;
  ulonglong uVar2;
  undefined6 local_res8;
  undefined2 uStackX_e;
  undefined8 local_res20;
  longlong in_stack_00000028;
  
  *unaff_RBP = (-0x101 - in_R10W) + *unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RDI;
  *(ulonglong *)(in_stack_00000028 + -0x20) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((local_res20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res20 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(in_stack_00000028 + -0x20);
  puVar1 = (ulonglong *)(in_stack_00000028 + -8);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x211c86b;
  *puVar1 = *puVar1 ^ 0x52f2deb;
  FUN_165c7153c(CONCAT26(uStackX_e,local_res8));
  return;
}



// FUNCTION 14da88bbe FUN_14da88bbe body=10 status=ok
// SIG undefined FUN_14da88bbe(void)

void FUN_14da88bbe(void)

{
  return;
}



// FUNCTION 14da88dc4 FUN_14da88dc4 body=653 status=ok
// SIG undefined FUN_14da88dc4(void)

/* WARNING: Removing unreachable block (ram,0x00014da88f09) */
/* WARNING: Removing unreachable block (ram,0x00014da88f19) */
/* WARNING: Removing unreachable block (ram,0x00014dd23cc7) */
/* WARNING: Removing unreachable block (ram,0x00014da89046) */
/* WARNING: Removing unreachable block (ram,0x00014da8904c) */
/* WARNING: Removing unreachable block (ram,0x00014da89051) */

undefined8 FUN_14da88dc4(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15;
  FUN_161633f7d(uVar2);
  uVar1 = FUN_16190ca64(~(uVar2 & unaff_R15) & 0xfffffffe9e9cc081);
  return uVar1;
}



// FUNCTION 14da89051 FUN_14da89051 body=78 status=ok
// SIG undefined FUN_14da89051(void)

undefined8 FUN_14da89051(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da890c1 FUN_14da890c1 body=2 status=ok
// SIG undefined FUN_14da890c1(void)

void FUN_14da890c1(void)

{
  return;
}



// FUNCTION 14da891ec FUN_14da891ec body=593 status=ok
// SIG undefined FUN_14da891ec(void)

/* WARNING: Removing unreachable block (ram,0x00014da89335) */
/* WARNING: Removing unreachable block (ram,0x00014da893c0) */
/* WARNING: Removing unreachable block (ram,0x00014da893b5) */
/* WARNING: Removing unreachable block (ram,0x0001660863a7) */
/* WARNING: Removing unreachable block (ram,0x00014da8932f) */
/* WARNING: Removing unreachable block (ram,0x00014da893c6) */
/* WARNING: Removing unreachable block (ram,0x000162b884ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da891ec(void)

{
  undefined8 in_stack_00000010;
  int in_stack_00000028;
  
  FUN_160e7b17e(in_stack_00000010);
  FUN_15745ad42((longlong)in_stack_00000028);
  return;
}



// FUNCTION 14da893c6 FUN_14da893c6 body=51 status=ok
// SIG undefined FUN_14da893c6(void)

void FUN_14da893c6(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14da8944a FUN_14da8944a body=138 status=ok
// SIG undefined FUN_14da8944a(void)

void FUN_14da8944a(void)

{
  (*(code *)0x165a8594e)();
  return;
}



// FUNCTION 14da89656 FUN_14da89656 body=123 status=ok
// SIG undefined FUN_14da89656(void)

void FUN_14da89656(void)

{
  FUN_14dfc02fc();
  FUN_165ee2cdc();
  return;
}



// FUNCTION 14da896d2 FUN_14da896d2 body=203 status=ok
// SIG undefined FUN_14da896d2(void)

void FUN_14da896d2(void)

{
  FUN_165ee2cdc();
  return;
}



// FUNCTION 14da8979e FUN_14da8979e body=51 status=ok
// SIG undefined FUN_14da8979e(void)

void FUN_14da8979e(void)

{
  return;
}



// FUNCTION 14da89829 FUN_14da89829 body=122 status=ok
// SIG undefined FUN_14da89829(void)

void FUN_14da89829(undefined8 param_1,undefined8 param_2)

{
  FUN_1565d5f93(param_1,param_2,FUN_1565d5f93);
  return;
}



// FUNCTION 14da898ab FUN_14da898ab body=309 status=ok
// SIG undefined FUN_14da898ab(void)

/* WARNING: Removing unreachable block (ram,0x00014da899e3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000030 : 0x000161510627 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da898ab(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  ulonglong in_stack_00000038;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar3 = FUN_16263c0d8();
  in_stack_00000038 = in_stack_00000038 ^ uVar3;
  *(ulonglong *)(in_stack_00000038 - 8) = uVar1 | unaff_R15;
  *(ulonglong *)(in_stack_00000038 - 0x10) = *(ulonglong *)(in_stack_00000038 - 8);
  *(undefined8 *)(in_stack_00000038 - 0x18) = local_res10;
  uVar2 = *(undefined8 *)(in_stack_00000038 - 0x18);
  *(ulonglong *)(in_stack_00000038 - 0x18) = in_stack_00000028 ^ uVar3;
  *(undefined8 *)(in_stack_00000038 - 0x20) = 0;
  *(undefined8 *)(in_stack_00000038 - 8) = *(undefined8 *)(in_stack_00000038 - 0x20);
  *(longlong *)(in_stack_00000038 - 8) =
       (longlong)(&LAB_156ff43b8 + *(longlong *)(in_stack_00000038 - 8));
  *(undefined8 *)(in_stack_00000038 - 0x18) = uVar2;
  *(undefined8 *)(in_stack_00000038 - 0x20) = uVar2;
  *(undefined1 **)(in_stack_00000038 - 0x18) = &LAB_16151069e;
  FUN_156ff4373(param_1,*(undefined8 *)(in_stack_00000038 - 0x20));
  return;
}



// FUNCTION 14da899e3 FUN_14da899e3 body=4 status=ok
// SIG undefined FUN_14da899e3(void)

void FUN_14da899e3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014da899e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14da89a99 FUN_14da89a99 body=135 status=ok
// SIG undefined FUN_14da89a99(void)

void FUN_14da89a99(undefined8 param_1)

{
  (*(code *)0x1666ab052)(param_1);
  return;
}



// FUNCTION 14da89b20 FUN_14da89b20 body=348 status=ok
// SIG undefined FUN_14da89b20(void)

/* WARNING: Instruction at (ram,0x000160d58026) overlaps instruction at (ram,0x000160d58025)
    */
/* WARNING: Removing unreachable block (ram,0x00014da89ced) */
/* WARNING: Removing unreachable block (ram,0x000160d57f27) */
/* WARNING: Removing unreachable block (ram,0x000160d57f2d) */
/* WARNING: Removing unreachable block (ram,0x000160d58026) */
/* WARNING: Removing unreachable block (ram,0x000160d58025) */
/* WARNING: Removing unreachable block (ram,0x000160d5802d) */
/* WARNING: Removing unreachable block (ram,0x000160d580e2) */
/* WARNING: Removing unreachable block (ram,0x000160d580e8) */
/* WARNING: Removing unreachable block (ram,0x0001571934a8) */
/* WARNING: Removing unreachable block (ram,0x000160d57e46) */
/* WARNING: Removing unreachable block (ram,0x00014da89c43) */
/* WARNING: Removing unreachable block (ram,0x00014da89c4e) */
/* WARNING: Removing unreachable block (ram,0x00014da89cf2) */
/* WARNING: Removing unreachable block (ram,0x000160d57d74) */
/* WARNING: Removing unreachable block (ram,0x000160d57ded) */
/* WARNING: Removing unreachable block (ram,0x000160d57df2) */
/* WARNING: Removing unreachable block (ram,0x000160d57e0d) */
/* WARNING: Removing unreachable block (ram,0x00016131ca4e) */
/* WARNING: Removing unreachable block (ram,0x00016131caa5) */
/* WARNING: Removing unreachable block (ram,0x000160d57e13) */
/* WARNING: Removing unreachable block (ram,0x000160d57e49) */
/* WARNING: Removing unreachable block (ram,0x000160d57e8c) */
/* WARNING: Removing unreachable block (ram,0x0001650ab238) */
/* WARNING: Removing unreachable block (ram,0x000160d57e92) */
/* WARNING: Removing unreachable block (ram,0x00015afeaea7) */
/* WARNING: Removing unreachable block (ram,0x00014da89cf8) */
/* WARNING: Removing unreachable block (ram,0x00014da89d7f) */
/* WARNING: Removing unreachable block (ram,0x00014da89d84) */
/* WARNING: Removing unreachable block (ram,0x00014da89d8a) */
/* WARNING: Removing unreachable block (ram,0x00014da89d94) */
/* WARNING: Removing unreachable block (ram,0x000161dbc836) */
/* WARNING: Removing unreachable block (ram,0x00014da89c49) */
/* WARNING: Removing unreachable block (ram,0x00014da89bbe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14da89b20(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14da89bbe FUN_14da89bbe body=311 status=ok
// SIG undefined FUN_14da89bbe(void)

/* WARNING: Instruction at (ram,0x000160d58026) overlaps instruction at (ram,0x000160d58025)
    */
/* WARNING: Removing unreachable block (ram,0x00014da89ced) */
/* WARNING: Removing unreachable block (ram,0x000160d57f27) */
/* WARNING: Removing unreachable block (ram,0x000160d57f2d) */
/* WARNING: Removing unreachable block (ram,0x000160d58026) */
/* WARNING: Removing unreachable block (ram,0x000160d58025) */
/* WARNING: Removing unreachable block (ram,0x000160d5802d) */
/* WARNING: Removing unreachable block (ram,0x000160d580e2) */
/* WARNING: Removing unreachable block (ram,0x000160d580e8) */
/* WARNING: Removing unreachable block (ram,0x0001571934a8) */
/* WARNING: Removing unreachable block (ram,0x000160d57e46) */
/* WARNING: Removing unreachable block (ram,0x00014da89c43) */
/* WARNING: Removing unreachable block (ram,0x00014da89c4e) */
/* WARNING: Removing unreachable block (ram,0x00014da89cf2) */
/* WARNING: Removing unreachable block (ram,0x000160d57d74) */
/* WARNING: Removing unreachable block (ram,0x000160d57ded) */
/* WARNING: Removing unreachable block (ram,0x000160d57df2) */
/* WARNING: Removing unreachable block (ram,0x000160d57e0d) */
/* WARNING: Removing unreachable block (ram,0x00016131ca4e) */
/* WARNING: Removing unreachable block (ram,0x00016131caa5) */
/* WARNING: Removing unreachable block (ram,0x000160d57e13) */
/* WARNING: Removing unreachable block (ram,0x000160d57e49) */
/* WARNING: Removing unreachable block (ram,0x000160d57e8c) */
/* WARNING: Removing unreachable block (ram,0x0001650ab238) */
/* WARNING: Removing unreachable block (ram,0x000160d57e92) */
/* WARNING: Removing unreachable block (ram,0x00015afeaea7) */
/* WARNING: Removing unreachable block (ram,0x00014da89cf8) */
/* WARNING: Removing unreachable block (ram,0x00014da89d7f) */
/* WARNING: Removing unreachable block (ram,0x00014da89d84) */
/* WARNING: Removing unreachable block (ram,0x00014da89d8a) */
/* WARNING: Removing unreachable block (ram,0x00014da89d94) */
/* WARNING: Removing unreachable block (ram,0x000161dbc836) */
/* WARNING: Removing unreachable block (ram,0x00014da89c49) */

undefined8 FUN_14da89bbe(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161354467(0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  uVar1 = FUN_15753ea1f(*(undefined8 *)(unaff_R13 + -0x50));
  return uVar1;
}



// FUNCTION 14da89cf8 FUN_14da89cf8 body=297 status=ok
// SIG undefined FUN_14da89cf8(void)

void FUN_14da89cf8(void)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar2 = ~(~uVar1 & unaff_R15) + unaff_R15;
  if (uVar1 <= uVar2) {
    FUN_161dbc836(~unaff_R15 | uVar1);
    return;
  }
  if (uVar2 <= uVar1) {
    return;
  }
  FUN_1650d860e(0xffffffffffffffffU - in_RAX | *(ulonglong *)(unaff_R12 + -0x28));
  return;
}



// FUNCTION 14da89fe7 FUN_14da89fe7 body=244 status=ok
// SIG undefined FUN_14da89fe7(void)

/* WARNING: Removing unreachable block (ram,0x0001664e36bd) */
/* WARNING: Removing unreachable block (ram,0x0001664e3648) */
/* WARNING: Removing unreachable block (ram,0x0001664e3659) */
/* WARNING: Removing unreachable block (ram,0x0001664e36c1) */
/* WARNING: Removing unreachable block (ram,0x0001664e364e) */

void FUN_14da89fe7(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong local_res8;
  
  uVar3 = unaff_RDI * 2 + unaff_RBP + 0xb98726b;
  if ((0xffffffffffffea14 < uVar3) && (uVar3 < 0xffffffffffffea15)) {
    return;
  }
  uVar1 = FUN_156b6de65();
  uVar3 = ~((uVar1 - (param_3 | uVar1)) + param_3) & (param_3 | uVar1);
  FUN_161014e43(param_3,param_2);
  pcVar2 = FUN_164f05760;
  FUN_164f05760(FUN_164f05760,uVar3);
  (*(code *)0x160cc17b3)(pcVar2,uVar3 & local_res8 + uVar1 + (local_res8 & uVar1) * -2);
  return;
}



// FUNCTION 14da8a109 FUN_14da8a109 body=119 status=ok
// SIG undefined FUN_14da8a109(void)

void FUN_14da8a109(void)

{
  FUN_15700fa88();
  return;
}



// FUNCTION 14da8a181 FUN_14da8a181 body=193 status=ok
// SIG undefined FUN_14da8a181(void)

void FUN_14da8a181(void)

{
  return;
}



// FUNCTION 14da8a35a FUN_14da8a35a body=148 status=ok
// SIG undefined FUN_14da8a35a(void)

void FUN_14da8a35a(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164bf17aa(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da8a48a FUN_14da8a48a body=102 status=ok
// SIG undefined FUN_14da8a48a(void)

void FUN_14da8a48a(void)

{
  return;
}



// FUNCTION 14da8a8bb FUN_14da8a8bb body=205 status=ok
// SIG undefined FUN_14da8a8bb(void)

undefined8 FUN_14da8a8bb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da8aa1f FUN_14da8aa1f body=297 status=ok
// SIG undefined FUN_14da8aa1f(void)

void FUN_14da8aa1f(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  ulonglong uStack_8;
  
  param_1 = param_1 - unaff_RDI;
  puVar1 = (ulonglong *)(&stack0x00000000 + param_1);
  *(longlong *)(&stack0x00000000 + param_1) = param_1;
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58);
  *puVar1 = uVar2;
  uVar3 = *puVar1;
  puVar1[-1] = in_R10;
  *puVar1 = 0;
  puVar1[-1] = in_RAX;
  (*(code *)0x162cd8d45)(uVar3 + in_RAX + (uVar2 & in_RAX) * -2);
  return;
}



// FUNCTION 14da8aaa8 FUN_14da8aaa8 body=278 status=ok
// SIG undefined FUN_14da8aaa8(void)

void FUN_14da8aaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong in_stack_00000020;
  
  FUN_166bd1751(param_1,param_2,-~unaff_RBP - (~in_stack_00000020 + 2));
  FUN_14daef5b4(param_3,param_2,in_stack_00000020);
  return;
}



// FUNCTION 14da8ac82 FUN_14da8ac82 body=187 status=ok
// SIG undefined FUN_14da8ac82(void)

undefined8 FUN_14da8ac82(void)

{
  return 0xe325cb6;
}



// FUNCTION 14da8ad3d FUN_14da8ad3d body=167 status=ok
// SIG undefined FUN_14da8ad3d(void)

void FUN_14da8ad3d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  FUN_16115168a(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14da8ade4 FUN_14da8ade4 body=162 status=ok
// SIG undefined FUN_14da8ade4(void)

void FUN_14da8ade4(ulonglong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong *unaff_R14;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  uVar2 = 0xffffffffffffffff - param_1 | *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | param_1;
  *unaff_R14 = 0xffffffffffffffff - ((*unaff_R14 - (uVar2 | *unaff_R14)) + uVar2);
  lVar1 = in_stack_00000028 + param_1 + (in_stack_00000028 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x20) = in_R11;
  *(undefined8 *)(lVar1 + -0x28) = in_R11;
  *(undefined8 *)(lVar1 + -0x20) = 0x14da8ae86;
  FUN_1657925f0(local_res18);
  return;
}



// FUNCTION 14da8afa5 FUN_14da8afa5 body=256 status=ok
// SIG undefined FUN_14da8afa5(void)

/* WARNING: Removing unreachable block (ram,0x00014da8b049) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da8afa5(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  ulonglong uVar3;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar3 = local_res18 ^ param_1;
  uVar2 = ~((~param_1 | local_res20) & (~local_res20 | param_1));
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x28) = param_4;
  uVar1 = *(undefined8 *)(uVar2 - 0x28);
  *(undefined8 *)(uVar2 - 8) = 0x4fe0c06;
  FUN_165c7153c(local_res10 ^ param_1,param_2,param_3,uVar1);
  return;
}



// FUNCTION 14da8b29c FUN_14da8b29c body=90 status=ok
// SIG undefined FUN_14da8b29c(void)

void FUN_14da8b29c(void)

{
  return;
}



// FUNCTION 14da8b2fa FUN_14da8b2fa body=315 status=ok
// SIG undefined FUN_14da8b2fa(void)

/* WARNING: Instruction at (ram,0x000161707e2f) overlaps instruction at (ram,0x000161707e2e)
    */
/* WARNING: Removing unreachable block (ram,0x000161707ea5) */
/* WARNING: Removing unreachable block (ram,0x000161707eab) */
/* WARNING: Removing unreachable block (ram,0x00014da8b3aa) */
/* WARNING: Removing unreachable block (ram,0x00014da8b431) */
/* WARNING: Removing unreachable block (ram,0x00014da8b437) */
/* WARNING: Removing unreachable block (ram,0x000161707ced) */
/* WARNING: Removing unreachable block (ram,0x000156f95e0e) */
/* WARNING: Removing unreachable block (ram,0x000161707d69) */
/* WARNING: Removing unreachable block (ram,0x000161707d6f) */
/* WARNING: Removing unreachable block (ram,0x000161707d74) */
/* WARNING: Removing unreachable block (ram,0x000161707e2f) */
/* WARNING: Removing unreachable block (ram,0x000161707e2e) */
/* WARNING: Removing unreachable block (ram,0x000161707e41) */
/* WARNING: Removing unreachable block (ram,0x000161707e45) */
/* WARNING: Removing unreachable block (ram,0x00016677205d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da8b2fa(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  SIZE_T in_stack_00000008;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar3 = ~(local_res20 & param_1) & (local_res20 | param_1);
  *(undefined8 *)(uVar3 - 8) = local_res10;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar3 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 8) = 0;
  puVar1 = (ulonglong *)(uVar3 - 8);
  uVar4 = *puVar1;
  *puVar1 = (ulonglong)(&DAT_166bcc6ec + *puVar1);
  *(undefined8 *)(uVar3 - 0x18) = param_2;
  *(longlong *)(uVar3 - 0x20) = in_RAX;
  *(undefined4 *)(uVar3 - 0x28) = 0x96ea55a9;
  if (uVar4 < 0xfffffffe99433914) {
    FUN_166bcc682();
    return;
  }
  *(undefined4 *)(uVar3 - 0x20) = *(undefined4 *)(uVar3 - 0x28);
  *(undefined4 *)(uVar3 - 0x1c) = 0xffffffff;
  uVar5 = *(undefined8 *)(uVar3 - 0x18);
  plVar2 = (longlong *)(uVar3 - 0x20);
  *plVar2 = in_RAX;
  *(undefined4 *)plVar2 = 0x63ae2ae;
  *(undefined4 *)(uVar3 - 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000166bcc6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(*(HANDLE *)(uVar3 + *plVar2 + -0x63ae2be),(DWORD)uVar5,in_stack_00000008);
  return;
}



// FUNCTION 14da8b437 FUN_14da8b437 body=191 status=ok
// SIG undefined FUN_14da8b437(void)

void FUN_14da8b437(ulonglong param_1,longlong param_2)

{
  ulonglong unaff_R15;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | unaff_R15;
  *(ulonglong *)(param_2 + 8) = ~(param_1 & *(ulonglong *)(param_2 + 8));
  return;
}



// FUNCTION 14da8b6d9 FUN_14da8b6d9 body=161 status=ok
// SIG undefined FUN_14da8b6d9(void)

/* WARNING: Removing unreachable block (ram,0x00014da8b76f) */
/* WARNING: Removing unreachable block (ram,0x00014da8b77a) */
/* WARNING: Removing unreachable block (ram,0x00014da8b775) */

void FUN_14da8b6d9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14db79346(param_1,FUN_14db79346,
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  return;
}



// FUNCTION 14da8b77a FUN_14da8b77a body=20 status=ok
// SIG undefined FUN_14da8b77a(void)

void FUN_14da8b77a(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da8b78e FUN_14da8b78e body=151 status=ok
// SIG undefined FUN_14da8b78e(void)

/* WARNING: Removing unreachable block (ram,0x00014da8b8ad) */
/* WARNING: Removing unreachable block (ram,0x000161656e7e) */
/* WARNING: Removing unreachable block (ram,0x00014da8b93a) */
/* WARNING: Removing unreachable block (ram,0x00014da8b940) */
/* WARNING: Removing unreachable block (ram,0x00014da8b945) */

void FUN_14da8b78e(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ushort in_R10W;
  
  if (param_4 == 0xc5668) {
    FUN_165e93f27();
    return;
  }
  if ((param_4 < 0xc5821) && (0xc5821 < param_4)) {
    if (0x100 < (ushort)-(in_R10W & 0x100 | 0xfeff)) {
      FUN_16682d65d(param_1,param_2);
      return;
    }
    FUN_16682d65d(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14da8b813 FUN_14da8b813 body=356 status=ok
// SIG undefined FUN_14da8b813(void)

/* WARNING: Removing unreachable block (ram,0x00014da8b8ad) */
/* WARNING: Removing unreachable block (ram,0x000161656e7e) */
/* WARNING: Removing unreachable block (ram,0x00014da8b93a) */
/* WARNING: Removing unreachable block (ram,0x00014da8b940) */
/* WARNING: Removing unreachable block (ram,0x00014da8b945) */

void FUN_14da8b813(undefined8 param_1,undefined8 param_2)

{
  ushort in_R10W;
  
  if (0x100 < (ushort)-(in_R10W & 0x100 | 0xfeff)) {
    FUN_16682d65d(param_1,param_2);
    return;
  }
  FUN_16682d65d(param_1,param_2);
  return;
}



// FUNCTION 14da8bafa FUN_14da8bafa body=178 status=ok
// SIG undefined FUN_14da8bafa(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da8bafa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da8be25 FUN_14da8be25 body=153 status=ok
// SIG undefined FUN_14da8be25(void)

void FUN_14da8be25(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  longlong unaff_retaddr;
  
  FUN_165562052(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),0,
                *(ulonglong *)(unaff_R12 + unaff_retaddr + 0x3b03b25f) ^ in_RAX);
  return;
}



// FUNCTION 14da8bebf FUN_14da8bebf body=163 status=ok
// SIG undefined FUN_14da8bebf(void)

undefined8 FUN_14da8bebf(void)

{
  undefined8 local_res18;
  
  return local_res18;
}



// FUNCTION 14da8c109 FUN_14da8c109 body=140 status=ok
// SIG undefined FUN_14da8c109(void)

/* WARNING: Removing unreachable block (ram,0x000161060072) */
/* WARNING: Removing unreachable block (ram,0x00016106006c) */
/* WARNING: Removing unreachable block (ram,0x000161060077) */
/* WARNING: Removing unreachable block (ram,0x00014da8c187) */
/* WARNING: Removing unreachable block (ram,0x00014da8c193) */
/* WARNING: Removing unreachable block (ram,0x00014da8c198) */
/* WARNING: Removing unreachable block (ram,0x00014da8c265) */
/* WARNING: Removing unreachable block (ram,0x00014da8c271) */
/* WARNING: Removing unreachable block (ram,0x00014da8c2b7) */
/* WARNING: Removing unreachable block (ram,0x00014da8c2bc) */

void FUN_14da8c109(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  
  FUN_1614d5fd5(param_1,*(undefined8 *)(unaff_R12 + -0xa0),param_3);
  return;
}



// FUNCTION 14da8c198 FUN_14da8c198 body=319 status=ok
// SIG undefined FUN_14da8c198(void)

void FUN_14da8c198(void)

{
  ulonglong in_R11;
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  undefined4 local_res10;
  undefined4 in_stack_00000018;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(~(~(local_res10 & 0x88834ce3) & (local_res10 | 0x88834ce3)),in_stack_00000018);
  FUN_1657bcfc4(unaff_retaddr);
  uVar1 = ~(~(in_R11 & 0xffffffffe032d1dc) & (in_R11 | 0xffffffffe032d1dc)) ^ 0x403fee0;
  if (uVar2 == uVar1) {
    FUN_16131bb16();
    return;
  }
  if (uVar2 - uVar1 == 1) {
    FUN_160dc54d7();
    return;
  }
  FUN_160dc550e();
  return;
}



// FUNCTION 14da8c2d9 FUN_14da8c2d9 body=105 status=ok
// SIG undefined FUN_14da8c2d9(void)

void FUN_14da8c2d9(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  byte in_ZF;
  
  if ((in_ZF & 1) == 0) {
    param_2 = ~param_2;
  }
  FUN_15b7f62ba(param_1,param_2,param_3,FUN_15b7f62ba);
  return;
}



// FUNCTION 14da8c356 FUN_14da8c356 body=444 status=ok
// SIG undefined FUN_14da8c356(void)

/* WARNING: Instruction at (ram,0x00014da8c372) overlaps instruction at (ram,0x00014da8c371)
    */
/* WARNING: Removing unreachable block (ram,0x00014da8c3dc) */
/* WARNING: Removing unreachable block (ram,0x00014da8c3f8) */
/* WARNING: Removing unreachable block (ram,0x00014da8c371) */
/* WARNING: Removing unreachable block (ram,0x00014da8c3ed) */

void FUN_14da8c356(void)

{
  FUN_161d1446a();
  return;
}



// FUNCTION 14da8c5ae FUN_14da8c5ae body=169 status=ok
// SIG undefined FUN_14da8c5ae(void)

void FUN_14da8c5ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short *in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  short unaff_R15W;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *in_R10 = (*in_R10 + -1) - ~(0xfeffU - unaff_R15W);
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x20) = in_R11;
  *(undefined8 *)(local_res20 + -0x28) = in_R11;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_14da8c657;
  (*(code *)0x1664827a5)(param_1,&LAB_1664827d9,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14da8c65d FUN_14da8c65d body=155 status=ok
// SIG undefined FUN_14da8c65d(void)

/* WARNING: Removing unreachable block (ram,0x00014da8c6d3) */

void FUN_14da8c65d(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_165312141(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14da8ca10 FUN_14da8ca10 body=55 status=ok
// SIG undefined FUN_14da8ca10(void)

undefined8 FUN_14da8ca10(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da8caa1 FUN_14da8caa1 body=421 status=ok
// SIG undefined FUN_14da8caa1(void)

/* WARNING: Removing unreachable block (ram,0x00014da8cb20) */

void FUN_14da8caa1(void)

{
  FUN_1656efb59();
  return;
}



// FUNCTION 14da8cba9 FUN_14da8cba9 body=315 status=ok
// SIG undefined FUN_14da8cba9(void)

/* WARNING: Removing unreachable block (ram,0x000157343ef3) */
/* WARNING: Removing unreachable block (ram,0x000157343ef9) */
/* WARNING: Removing unreachable block (ram,0x000156be7ce4) */
/* WARNING: Removing unreachable block (ram,0x000156be7cef) */
/* WARNING: Removing unreachable block (ram,0x000156be7d84) */
/* WARNING: Removing unreachable block (ram,0x000162669c1a) */
/* WARNING: Removing unreachable block (ram,0x000156be7d8a) */
/* WARNING: Removing unreachable block (ram,0x000156be7e8d) */
/* WARNING: Removing unreachable block (ram,0x000156be7e9a) */
/* WARNING: Removing unreachable block (ram,0x000156be7eba) */
/* WARNING: Removing unreachable block (ram,0x000156be7ec0) */
/* WARNING: Removing unreachable block (ram,0x00015b1ec6c5) */
/* WARNING: Removing unreachable block (ram,0x00015b1ec752) */
/* WARNING: Removing unreachable block (ram,0x00015b1ec758) */
/* WARNING: Removing unreachable block (ram,0x000157343d45) */
/* WARNING: Removing unreachable block (ram,0x000161e352a1) */
/* WARNING: Removing unreachable block (ram,0x000156be7cea) */
/* WARNING: Removing unreachable block (ram,0x00014da8cc47) */

undefined8 FUN_14da8cba9(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164aea1e6();
  return uVar1;
}



// FUNCTION 14da8ccf0 FUN_14da8ccf0 body=473 status=ok
// SIG undefined FUN_14da8ccf0(void)

/* WARNING: Removing unreachable block (ram,0x00014da8ce23) */
/* WARNING: Removing unreachable block (ram,0x00014da8ce29) */
/* WARNING: Removing unreachable block (ram,0x00014da8ce2e) */
/* WARNING: Removing unreachable block (ram,0x00014da8cec4) */
/* WARNING: Removing unreachable block (ram,0x00014da8ceca) */
/* WARNING: Removing unreachable block (ram,0x00014da8ced5) */
/* WARNING: Removing unreachable block (ram,0x00014da8ced8) */
/* WARNING: Removing unreachable block (ram,0x000162b9a525) */
/* WARNING: Removing unreachable block (ram,0x000165eb13aa) */
/* WARNING: Removing unreachable block (ram,0x000165eb1301) */
/* WARNING: Removing unreachable block (ram,0x000165eb13a4) */
/* WARNING: Removing unreachable block (ram,0x000160d36687) */
/* WARNING: Removing unreachable block (ram,0x00014da8cd83) */

void FUN_14da8ccf0(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x50)) != 0xffffffffffffffff ||
      (~*(ulonglong *)(unaff_R12 + -0x50) | in_RAX) != 0xffffffffffffffff) {
    FUN_160c0d14d(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                  0xffffffffffffffff - ~(~*(ulonglong *)(unaff_R12 + -0x78) | ~in_RAX) &
                  (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
    return;
  }
  return;
}



// FUNCTION 14da8ceca FUN_14da8ceca body=197 status=ok
// SIG undefined FUN_14da8ceca(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da8ceca(void)

{
  return;
}



// FUNCTION 14da8cf93 FUN_14da8cf93 body=373 status=ok
// SIG undefined FUN_14da8cf93(void)

/* WARNING: Removing unreachable block (ram,0x00014da8d08e) */
/* WARNING: Removing unreachable block (ram,0x00014da8d0af) */

undefined1 FUN_14da8cf93(byte param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  ulonglong uVar2;
  longlong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined2 local_res18;
  longlong local_res20;
  
  uVar2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),local_res18) | 0xfeff;
  UNRECOVERED_JUMPTABLE = (code *)FUN_16106106e();
  in_R11 = in_R11 - (local_res20 << (param_1 & 0x3f));
  *(undefined8 *)(in_R11 + -8) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x10) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R14;
  *(undefined1 **)(in_R11 + -0x20) = &LAB_1647f87eb;
  *(undefined8 *)(in_R11 + -0x10) = *(undefined8 *)(in_R11 + -8);
  *(ulonglong *)(in_R11 + -0x18) = uVar2;
  *(undefined8 *)(in_R11 + -8) = *(undefined8 *)(in_R11 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x0001647f87d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(local_res8,*(undefined8 *)(in_R11 + -0x18));
  return uVar1;
}



// FUNCTION 14da8d11f FUN_14da8d11f body=432 status=ok
// SIG undefined FUN_14da8d11f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000162719952) */
/* WARNING: Removing unreachable block (ram,0x00016271995d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6783) */
/* WARNING: Removing unreachable block (ram,0x00014d7a678c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6759) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6772) */
/* WARNING: Removing unreachable block (ram,0x00014d7a671d) */
/* WARNING: Removing unreachable block (ram,0x000162719958) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6710) */
/* WARNING: Removing unreachable block (ram,0x00014da8d180) */

void FUN_14da8d11f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  FUN_162a21a3e(0x257b68d4,*(undefined8 *)(param_3 + -0x30),param_3,
                (-*(ulonglong *)(param_3 + -0x78) - in_R10) +
                (~in_R10 & *(ulonglong *)(param_3 + -0x78) | in_R10) * 2);
  return;
}



// FUNCTION 14da8d767 FUN_14da8d767 body=334 status=ok
// SIG undefined FUN_14da8d767(void)

/* WARNING: Removing unreachable block (ram,0x0001575532ce) */
/* WARNING: Removing unreachable block (ram,0x0001575532d4) */
/* WARNING: Removing unreachable block (ram,0x00015755335a) */
/* WARNING: Removing unreachable block (ram,0x000157553360) */
/* WARNING: Removing unreachable block (ram,0x0001575533ed) */
/* WARNING: Removing unreachable block (ram,0x0001575533f3) */
/* WARNING: Removing unreachable block (ram,0x0001626f0f36) */
/* WARNING: Removing unreachable block (ram,0x000162e1d442) */
/* WARNING: Removing unreachable block (ram,0x00016248cb54) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5e7) */
/* WARNING: Removing unreachable block (ram,0x000162e1d597) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5a2) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5eb) */
/* WARNING: Removing unreachable block (ram,0x000162e1d6a1) */
/* WARNING: Removing unreachable block (ram,0x000162e1d6a7) */
/* WARNING: Removing unreachable block (ram,0x0001651fa004) */
/* WARNING: Removing unreachable block (ram,0x0001651fa078) */
/* WARNING: Removing unreachable block (ram,0x0001651fa07f) */
/* WARNING: Removing unreachable block (ram,0x0001651fa08d) */
/* WARNING: Removing unreachable block (ram,0x0001651fa093) */
/* WARNING: Removing unreachable block (ram,0x0001651fa0d2) */
/* WARNING: Removing unreachable block (ram,0x0001651fa0d7) */
/* WARNING: Removing unreachable block (ram,0x000162e1d59d) */
/* WARNING: Removing unreachable block (ram,0x00014da8d934) */
/* WARNING: Removing unreachable block (ram,0x00014da8d9ef) */
/* WARNING: Removing unreachable block (ram,0x00014da8da0c) */
/* WARNING: Removing unreachable block (ram,0x00014da8da07) */
/* WARNING: Removing unreachable block (ram,0x00014da8da47) */
/* WARNING: Removing unreachable block (ram,0x00014da8da4c) */
/* WARNING: Removing unreachable block (ram,0x00014da8d949) */

ulonglong FUN_14da8d767(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong unaff_R12;
  
  if (param_2 == 0x75e05) {
    return in_RAX;
  }
  if (param_2 != 0x75e9f) {
    uVar1 = FUN_16525546e();
    return uVar1;
  }
  FUN_165255456();
  pcVar3 = FUN_156ce5fd5;
  uVar1 = FUN_156ce5fd5();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1;
  uVar2 = FUN_1573feb7b(pcVar3,uVar1);
  return ~(0xffffffffffffffff - ~uVar2 | ~uVar1);
}



// FUNCTION 14da8d8b9 FUN_14da8d8b9 body=625 status=ok
// SIG undefined FUN_14da8d8b9(void)

/* WARNING: Removing unreachable block (ram,0x0001575532ce) */
/* WARNING: Removing unreachable block (ram,0x0001575532d4) */
/* WARNING: Removing unreachable block (ram,0x00015755335a) */
/* WARNING: Removing unreachable block (ram,0x000157553360) */
/* WARNING: Removing unreachable block (ram,0x0001575533ed) */
/* WARNING: Removing unreachable block (ram,0x0001575533f3) */
/* WARNING: Removing unreachable block (ram,0x0001626f0f36) */
/* WARNING: Removing unreachable block (ram,0x000162e1d442) */
/* WARNING: Removing unreachable block (ram,0x00016248cb54) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5e7) */
/* WARNING: Removing unreachable block (ram,0x000162e1d597) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5a2) */
/* WARNING: Removing unreachable block (ram,0x000162e1d5eb) */
/* WARNING: Removing unreachable block (ram,0x000162e1d6a1) */
/* WARNING: Removing unreachable block (ram,0x000162e1d6a7) */
/* WARNING: Removing unreachable block (ram,0x0001651fa004) */
/* WARNING: Removing unreachable block (ram,0x0001651fa078) */
/* WARNING: Removing unreachable block (ram,0x0001651fa07f) */
/* WARNING: Removing unreachable block (ram,0x0001651fa08d) */
/* WARNING: Removing unreachable block (ram,0x0001651fa093) */
/* WARNING: Removing unreachable block (ram,0x0001651fa0d2) */
/* WARNING: Removing unreachable block (ram,0x0001651fa0d7) */
/* WARNING: Removing unreachable block (ram,0x000162e1d59d) */
/* WARNING: Removing unreachable block (ram,0x00014da8d934) */
/* WARNING: Removing unreachable block (ram,0x00014da8d9ef) */
/* WARNING: Removing unreachable block (ram,0x00014da8da0c) */
/* WARNING: Removing unreachable block (ram,0x00014da8da07) */
/* WARNING: Removing unreachable block (ram,0x00014da8da47) */
/* WARNING: Removing unreachable block (ram,0x00014da8da4c) */
/* WARNING: Removing unreachable block (ram,0x00014da8d949) */

ulonglong FUN_14da8d8b9(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  uVar1 = FUN_1573feb7b(param_2,uVar2);
  return ~(0xffffffffffffffff - ~uVar1 | ~uVar2);
}



// FUNCTION 14da8db85 FUN_14da8db85 body=135 status=ok
// SIG undefined FUN_14da8db85(void)

/* WARNING: Removing unreachable block (ram,0x00014da8db99) */

void FUN_14da8db85(undefined8 param_1)

{
  FUN_14e17cca3(param_1);
  return;
}



// FUNCTION 14da8dc0e FUN_14da8dc0e body=184 status=ok
// SIG undefined FUN_14da8dc0e(void)

void FUN_14da8dc0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = 0x14da8dcc8;
  FUN_162ec80b2(param_1,param_2,*(undefined8 *)(local_res18 + -0x20),uVar1);
  return;
}



// FUNCTION 14da8dd4c FUN_14da8dd4c body=494 status=ok
// SIG undefined FUN_14da8dd4c(void)

/* WARNING: Instruction at (ram,0x000156415124) overlaps instruction at (ram,0x000156415123)
    */
/* WARNING: Removing unreachable block (ram,0x00016476f75b) */
/* WARNING: Removing unreachable block (ram,0x00016476f761) */
/* WARNING: Removing unreachable block (ram,0x00014da8de70) */
/* WARNING: Removing unreachable block (ram,0x00014da8de76) */
/* WARNING: Removing unreachable block (ram,0x000156b5dabf) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b03) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b96) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b9c) */
/* WARNING: Removing unreachable block (ram,0x000156415074) */
/* WARNING: Removing unreachable block (ram,0x0001564150e4) */
/* WARNING: Removing unreachable block (ram,0x00016260afa8) */
/* WARNING: Removing unreachable block (ram,0x0001564150ea) */
/* WARNING: Removing unreachable block (ram,0x000156415124) */
/* WARNING: Removing unreachable block (ram,0x00015641511d) */
/* WARNING: Removing unreachable block (ram,0x00015641512b) */
/* WARNING: Removing unreachable block (ram,0x00015641514c) */
/* WARNING: Removing unreachable block (ram,0x00015641515d) */
/* WARNING: Removing unreachable block (ram,0x000156415169) */
/* WARNING: Removing unreachable block (ram,0x00014dfc44de) */
/* WARNING: Removing unreachable block (ram,0x000156b5db4a) */
/* WARNING: Removing unreachable block (ram,0x000156b5db50) */
/* WARNING: Removing unreachable block (ram,0x0001625a35b7) */
/* WARNING: Removing unreachable block (ram,0x00014da8ddce) */

undefined8 FUN_14da8dd4c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1625a35b7();
  return uVar1;
}



// FUNCTION 14da8ddce FUN_14da8ddce body=342 status=ok
// SIG undefined FUN_14da8ddce(void)

/* WARNING: Instruction at (ram,0x000156415124) overlaps instruction at (ram,0x000156415123)
    */
/* WARNING: Removing unreachable block (ram,0x00014da8de70) */
/* WARNING: Removing unreachable block (ram,0x00014da8de76) */
/* WARNING: Removing unreachable block (ram,0x000156b5dabf) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b03) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b96) */
/* WARNING: Removing unreachable block (ram,0x0001628c7b9c) */
/* WARNING: Removing unreachable block (ram,0x000156415074) */
/* WARNING: Removing unreachable block (ram,0x0001564150e4) */
/* WARNING: Removing unreachable block (ram,0x00016260afa8) */
/* WARNING: Removing unreachable block (ram,0x0001564150ea) */
/* WARNING: Removing unreachable block (ram,0x000156415124) */
/* WARNING: Removing unreachable block (ram,0x00015641511d) */
/* WARNING: Removing unreachable block (ram,0x00015641512b) */
/* WARNING: Removing unreachable block (ram,0x00015641514c) */
/* WARNING: Removing unreachable block (ram,0x00015641515d) */
/* WARNING: Removing unreachable block (ram,0x000156415169) */
/* WARNING: Removing unreachable block (ram,0x00014dfc44de) */
/* WARNING: Removing unreachable block (ram,0x000156b5db4a) */
/* WARNING: Removing unreachable block (ram,0x000156b5db50) */

undefined8 FUN_14da8ddce(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156b5dabf();
  return uVar1;
}



// FUNCTION 14da8e064 FUN_14da8e064 body=163 status=ok
// SIG undefined FUN_14da8e064(void)

undefined8 FUN_14da8e064(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  byte bVar24;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  bool bVar29;
  ulonglong uVar30;
  ulonglong uStackX_10;
  longlong *local_res18;
  
  bVar22 = (uStackX_10 & 0x4000) != 0;
  bVar20 = (uStackX_10 & 0x800) != 0;
  bVar17 = (uStackX_10 & 0x200) != 0;
  bVar15 = (uStackX_10 & 0x100) != 0;
  bVar13 = (uStackX_10 & 0x80) != 0;
  bVar11 = (uStackX_10 & 0x40) != 0;
  bVar9 = (uStackX_10 & 0x10) != 0;
  bVar7 = (uStackX_10 & 4) != 0;
  bVar5 = (uStackX_10 & 1) != 0;
  bVar28 = (uStackX_10 & 0x200000) != 0;
  bVar24 = (uStackX_10 & 0x40000) != 0;
  bVar27 = 0;
  bVar26 = 0;
  pcVar2 = (code *)swi(0x2e);
  lVar4 = (*pcVar2)();
  *local_res18 = lVar4;
  local_res18[-1] = lVar4;
  local_res18[-2] = lVar4;
  *(undefined4 *)(local_res18 + -2) = 0x102c76cb;
  local_res18[-3] = unaff_RSI;
  local_res18[-4] =
       (ulonglong)(bVar22 & 1) * 0x4000 | (ulonglong)(bVar20 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar17 & 1) * 0x200 |
       (ulonglong)(bVar15 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
       (ulonglong)(bVar11 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 | (ulonglong)(bVar7 & 1) * 4 |
       (ulonglong)(bVar5 & 1) | (ulonglong)(bVar28 & 1) * 0x200000 |
       (ulonglong)(bVar27 & 1) * 0x100000 | (ulonglong)(bVar26 & 1) * 0x80000 |
       (ulonglong)(bVar24 & 1) * 0x40000;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  uVar30 = local_res18[-4];
  bVar23 = (uVar30 & 0x4000) != 0;
  bVar21 = (uVar30 & 0x800) != 0;
  bVar19 = (uVar30 & 0x400) != 0;
  bVar18 = (uVar30 & 0x200) != 0;
  bVar16 = (uVar30 & 0x100) != 0;
  bVar14 = (uVar30 & 0x80) != 0;
  bVar12 = (uVar30 & 0x40) != 0;
  bVar10 = (uVar30 & 0x10) != 0;
  bVar8 = (uVar30 & 4) != 0;
  bVar6 = (uVar30 & 1) != 0;
  bVar29 = (uVar30 & 0x200000) != 0;
  bVar25 = (uVar30 & 0x40000) != 0;
  lVar4 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar18 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar14 * 0x80 |
       (ulonglong)bVar12 * 0x40 | (ulonglong)bVar10 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar6
       | (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  local_res18[-3] = unaff_R13;
  local_res18[-4] = unaff_R15;
  local_res18[-5] =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar18 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar14 * 0x80 |
       (ulonglong)bVar12 * 0x40 | (ulonglong)bVar10 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar6
       | (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  uVar3 = local_res18[-4];
  *local_res18 = lVar4 + -0xfa8b4e9;
  uVar1 = local_res18[-1];
  local_res18[-1] = local_res18[-3];
  local_res18[-2] = local_res18[-3];
  local_res18[-1] = (longlong)FUN_14d85d504;
  local_res18[-3] = uVar3;
  local_res18[-4] = uVar3;
  local_res18[-5] = uVar3;
  local_res18[-3] = (longlong)FUN_14da8e107;
  local_res18[-4] = 0x14e146452;
  return uVar1;
}



// FUNCTION 14da8e107 FUN_14da8e107 body=456 status=ok
// SIG undefined FUN_14da8e107(void)

void FUN_14da8e107(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong in_R10;
  
  FUN_165bfcc16((in_R10 - (*(ulonglong *)(param_2 + -0x48) | in_R10)) +
                *(ulonglong *)(param_2 + -0x48),param_2);
  pcVar1 = FUN_1568ca95c;
  FUN_1568ca95c();
  thunk_FUN_162814e10(pcVar1);
  return;
}



// FUNCTION 14da8e2d0 FUN_14da8e2d0 body=424 status=ok
// SIG undefined FUN_14da8e2d0(void)

/* WARNING: Removing unreachable block (ram,0x00014da8e36c) */
/* WARNING: Removing unreachable block (ram,0x00014da8e372) */

void FUN_14da8e2d0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  ulonglong *unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong in_stack_00000030;
  
  *unaff_R12 = *unaff_R12 ^ 0xffffffffffffffff;
  *unaff_R12 = *unaff_R12 & (in_R11 ^ 0xffffffffffffffff);
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = ~(unaff_R15 & *unaff_R12);
  uVar1 = ~(in_stack_00000030 & param_1) & (in_stack_00000030 | param_1);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = uStackX_8;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
  *(undefined **)(uVar1 - 8) = &DAT_15b3a9e13;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14da8e408 FUN_14da8e408 body=196 status=ok
// SIG undefined FUN_14da8e408(void)

void FUN_14da8e408(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint *puVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R12;
  longlong unaff_retaddr;
  
  puVar2 = (uint *)(unaff_retaddr + 0x1700);
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ 0xc1057412;
  *(undefined4 *)(unaff_retaddr + 0x1704) = 0xffffffff;
  uVar3 = *(ulonglong *)(unaff_R12 + *(longlong *)puVar2 + 0x3efa8b6e);
  uVar1 = in_RAX ^ 0xffffffffffffffff | uVar3;
  uVar3 = 0xffffffffffffffff - uVar3 | in_RAX;
  uVar3 = ~((uVar3 - (uVar1 | uVar3)) + uVar1);
  *(ulonglong *)(unaff_retaddr + 0x1700) = in_RAX;
  *(undefined8 *)(unaff_retaddr + 0x16f8) = unaff_RSI;
  *(longlong *)(unaff_retaddr + 0x16f8) = unaff_R12;
  *(longlong *)(unaff_retaddr + 0x16f0) = unaff_R12;
  *(undefined1 **)(unaff_retaddr + 0x16f8) = &LAB_14da8e4cc;
  FUN_1662076a8(param_1,uVar3,uVar3);
  return;
}



// FUNCTION 14da8e56c FUN_14da8e56c body=171 status=ok
// SIG undefined FUN_14da8e56c(void)

/* WARNING: Removing unreachable block (ram,0x00014da8e609) */
/* WARNING: Removing unreachable block (ram,0x00014da8e60f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da8e56c(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  char cVar1;
  char in_AL;
  longlong unaff_R13;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) ^ in_stack_00000008;
  param_5 = param_5 ^ in_stack_00000008;
  LOCK();
  cVar1 = param_1;
  if (in_AL != DAT_14d7c4b10) {
    cVar1 = DAT_14d7c4b10;
  }
  DAT_14d7c4b10 = cVar1;
  UNLOCK();
  *(ulonglong *)(param_5 - 8) = uVar2;
  *(ulonglong *)(param_5 - 0x10) = uVar2;
  *(undefined4 *)(param_5 - 0x18) = 0xeb54b5e;
  FUN_156cd050c(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14da8e687 FUN_14da8e687 body=279 status=ok
// SIG undefined FUN_14da8e687(void)

void FUN_14da8e687(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined2 unaff_R12W;
  undefined6 unaff_000000a2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(CONCAT62(unaff_000000a2,unaff_R12W) + -0x78);
  uVar2 = *(ulonglong *)(CONCAT62(unaff_000000a2,unaff_R12W) + -0x48);
  FUN_16500bffc(param_1,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  FUN_161c83af7(param_1 & ~(uVar2 & in_RAX) & (uVar2 | in_RAX),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                (*(ulonglong *)(unaff_R13 + -0x68) + unaff_R15) -
                (*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15),FUN_161c83af7);
  return;
}



// FUNCTION 14da8e7a0 FUN_14da8e7a0 body=44 status=ok
// SIG undefined FUN_14da8e7a0(void)

void FUN_14da8e7a0(void)

{
  return;
}



// FUNCTION 14da8e9b3 FUN_14da8e9b3 body=162 status=ok
// SIG undefined FUN_14da8e9b3(void)

/* WARNING: Removing unreachable block (ram,0x00014da8ea3e) */
/* WARNING: Removing unreachable block (ram,0x00014da8ea49) */
/* WARNING: Removing unreachable block (ram,0x00014da8ea44) */

void FUN_14da8e9b3(void)

{
  FUN_15b43ec03();
  return;
}



// FUNCTION 14da8eae9 FUN_14da8eae9 body=263 status=ok
// SIG undefined FUN_14da8eae9(void)

void FUN_14da8eae9(void)

{
  FUN_165de065b();
  (*(code *)0x166679c49)();
  return;
}



// FUNCTION 14da8ebf0 FUN_14da8ebf0 body=177 status=ok
// SIG undefined FUN_14da8ebf0(void)

void FUN_14da8ebf0(void)

{
  FUN_156a623ed();
  return;
}



// FUNCTION 14da8edc0 FUN_14da8edc0 body=153 status=ok
// SIG undefined FUN_14da8edc0(void)

void FUN_14da8edc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  (*(code *)0x162d90bbc)(param_1,local_res20,param_3,param_4);
  return;
}



// FUNCTION 14da8ee60 FUN_14da8ee60 body=283 status=ok
// SIG undefined FUN_14da8ee60(void)

/* WARNING: Removing unreachable block (ram,0x00014da8f15c) */
/* WARNING: Removing unreachable block (ram,0x000156589606) */
/* WARNING: Removing unreachable block (ram,0x00014da8eefd) */
/* WARNING: Removing unreachable block (ram,0x00014da8f0b8) */
/* WARNING: Removing unreachable block (ram,0x00014da8f0be) */
/* WARNING: Removing unreachable block (ram,0x0001667688f1) */
/* WARNING: Removing unreachable block (ram,0x00016676893d) */
/* WARNING: Removing unreachable block (ram,0x000166768922) */
/* WARNING: Removing unreachable block (ram,0x00015658956c) */
/* WARNING: Removing unreachable block (ram,0x000162747040) */
/* WARNING: Removing unreachable block (ram,0x0001565895f5) */
/* WARNING: Removing unreachable block (ram,0x000156589601) */
/* WARNING: Removing unreachable block (ram,0x00014da8f167) */

undefined8
FUN_14da8ee60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  short unaff_BX;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000018;
  ushort local_res20;
  
  local_res20 = unaff_BX + (ushort)unaff_R15 + (local_res20 & (ushort)unaff_R15) * -2;
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = in_stack_00000018;
  if (((-0x101 - (local_res20 | 0xfeff)) + local_res20 & 0x80) == 0) {
    uVar1 = FUN_15b2288e6();
    return uVar1;
  }
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = unaff_R14;
  *(undefined **)(param_5 - 8) = &DAT_15b228922;
  uVar1 = FUN_14d7a61c5(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14da8ef7f FUN_14da8ef7f body=146 status=ok
// SIG undefined FUN_14da8ef7f(void)

/* WARNING: Removing unreachable block (ram,0x00014da8f167) */
/* WARNING: Removing unreachable block (ram,0x00014da8f15c) */
/* WARNING: Removing unreachable block (ram,0x000156589606) */
/* WARNING: Removing unreachable block (ram,0x00014da8f0be) */
/* WARNING: Removing unreachable block (ram,0x00016676893d) */
/* WARNING: Removing unreachable block (ram,0x000166768922) */

undefined8 FUN_14da8ef7f(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_161c8df3b();
  uVar1 = *(ulonglong *)(unaff_R13 + (uVar1 ^ 0x15d3614c));
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  if (uVar4 < uVar3 * 2) {
    uVar2 = FUN_162747040();
    return uVar2;
  }
  uVar2 = FUN_162320748(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                        (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),uVar4 + uVar3 * -2,
                        *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        uVar1 + unaff_R15 +
                        ((~uVar1 | 0xffffffffffffffff - unaff_R15) ^ 0xffffffffffffffff) * -2);
  return uVar2;
}



// FUNCTION 14da8f012 FUN_14da8f012 body=172 status=ok
// SIG undefined FUN_14da8f012(void)

/* WARNING: Removing unreachable block (ram,0x00014da8f167) */
/* WARNING: Removing unreachable block (ram,0x00014da8f15c) */
/* WARNING: Removing unreachable block (ram,0x000156589606) */
/* WARNING: Removing unreachable block (ram,0x00014da8f0be) */
/* WARNING: Removing unreachable block (ram,0x00016676893d) */
/* WARNING: Removing unreachable block (ram,0x000166768922) */

undefined8 FUN_14da8f012(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (in_RAX ^ 0x15d3614c));
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  if (uVar4 < uVar3 * 2) {
    uVar2 = FUN_162747040();
    return uVar2;
  }
  uVar2 = FUN_162320748(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                        (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),uVar4 + uVar3 * -2,
                        *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        uVar1 + unaff_R15 +
                        ((~uVar1 | 0xffffffffffffffff - unaff_R15) ^ 0xffffffffffffffff) * -2);
  return uVar2;
}



// FUNCTION 14da8f0be FUN_14da8f0be body=374 status=ok
// SIG undefined FUN_14da8f0be(void)

/* WARNING: Removing unreachable block (ram,0x00014da8f167) */
/* WARNING: Removing unreachable block (ram,0x00014da8f15c) */

longlong FUN_14da8f0be(byte param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = (uint)((unaff_RSI & 0xffffffff) >> (param_1 & 0x1f)) |
          (uint)((unaff_RSI & 0xffffffff) << 0x21 - (param_1 & 0x1f));
  if (-1 < (int)uVar2) {
    lVar1 = thunk_FUN_160be2dec(uVar2,thunk_FUN_160be2dec,
                                ~((unaff_R15 ^ 0xffffffffffffffff |
                                  *(ulonglong *)(unaff_R13 + -0x88)) &
                                 (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)));
    return lVar1;
  }
  return (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x38)) +
         (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15) * 2;
}



// FUNCTION 14da8f2a1 FUN_14da8f2a1 body=5 status=ok
// SIG undefined FUN_14da8f2a1(void)

void FUN_14da8f2a1(void)

{
  return;
}



// FUNCTION 14da8f4ff FUN_14da8f4ff body=151 status=ok
// SIG undefined FUN_14da8f4ff(void)

void FUN_14da8f4ff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1660d8597();
  FUN_160e194f2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da8f599 FUN_14da8f599 body=129 status=ok
// SIG undefined FUN_14da8f599(void)

void FUN_14da8f599(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_160e194f2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da8f631 FUN_14da8f631 body=2 status=ok
// SIG undefined FUN_14da8f631(void)

void FUN_14da8f631(void)

{
  return;
}



// FUNCTION 14da8f6d7 FUN_14da8f6d7 body=471 status=ok
// SIG undefined FUN_14da8f6d7(void)

void FUN_14da8f6d7(undefined8 param_1)

{
  undefined8 unaff_RBP;
  longlong unaff_R13;
  
  FUN_1648f1d66(param_1,*(undefined8 *)(unaff_R13 + -0x48));
  FUN_1666600dd();
  FUN_162cba37b(unaff_RBP);
  return;
}



// FUNCTION 14da8f8b1 FUN_14da8f8b1 body=128 status=ok
// SIG undefined FUN_14da8f8b1(void)

ulonglong FUN_14da8f8b1(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_R12;
  longlong unaff_R13;
  undefined8 local_res8;
  ulonglong in_stack_00000038;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  lVar2 = *(longlong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | local_res8;
  *(ulonglong *)(unaff_R13 + 8) =
       ~(((~unaff_R12 | ~uVar1) + lVar2) - ~unaff_RBX & *(ulonglong *)(unaff_R13 + 8));
  return ~local_res8 | in_stack_00000038;
}



// FUNCTION 14da8f9ff FUN_14da8f9ff body=442 status=ok
// SIG undefined FUN_14da8f9ff(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da8f9ff(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  
  uVar2 = in_RAX ^ param_1;
  FUN_162be64e1(param_1,param_2,param_3,FUN_162be64e1);
  iVar1 = FUN_14d980425(param_1,unaff_retaddr);
  uVar2 = *(ulonglong *)(uVar2 - 0x58);
  uVar3 = ~(uVar2 & 0x536ebd858c35d4d4);
  FUN_1654415c3(&DAT_ac91427a73ca2b2b,iVar1 >> 0x1f,uVar3,uVar2 + uVar3 + 0x536ebd858c35d4d5);
  return;
}



// FUNCTION 14da8fbbd FUN_14da8fbbd body=143 status=ok
// SIG undefined FUN_14da8fbbd(void)

void FUN_14da8fbbd(void)

{
  undefined8 in_R10;
  
  FUN_160df7ee5(in_R10);
  return;
}



// FUNCTION 14da8fc53 FUN_14da8fc53 body=169 status=ok
// SIG undefined FUN_14da8fc53(void)

void FUN_14da8fc53(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  param_4 = (param_5 & unaff_R15 ^ 0xffffffffffffffff) & param_4;
  *(undefined8 *)(param_4 - 8) = local_res8;
  *(undefined8 *)(param_4 - 0x10) = uStackX_10;
  *(undefined4 *)(param_4 - 0x18) = 0xcb11034;
  *(undefined4 *)(param_4 - 0x14) = 0;
  uVar2 = *(ulonglong *)(param_4 - 0x18);
  *(undefined1 **)(param_4 - 0x18) = &LAB_164bed794;
  lVar3 = *(longlong *)(param_4 - 0x18);
  uVar1 = *(undefined8 *)(param_4 - 0x10);
  *(undefined8 *)(param_4 - 0x10) = *(undefined8 *)(param_4 - 8);
  *(undefined8 *)(param_4 - 8) = 0x2b778130;
  *(undefined8 *)(param_4 - 0x18) = local_res18;
  *(undefined8 *)(param_4 - 0x20) = uVar1;
  (*(code *)&LAB_164bf30c7)(lVar3 + (uVar2 ^ 0xcb149ff),param_2,param_3,param_4 - 0x10);
  return;
}



// FUNCTION 14da8fd03 FUN_14da8fd03 body=135 status=ok
// SIG undefined FUN_14da8fd03(void)

void FUN_14da8fd03(void)

{
  ulonglong *puVar1;
  short in_R10W;
  ulonglong unaff_R13;
  short *unaff_R14;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_R14 = (-0x101 - in_R10W) + *unaff_R14;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = unaff_R13;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0x42c0b1d6;
  *puVar1 = *puVar1 ^ 0x42c0b1d6;
  *puVar1 = *puVar1 + 0x14da8fda8;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(code **)(local_res20 + -0x10) = thunk_FUN_15b0572f1;
  return;
}



// FUNCTION 14da8fdbf FUN_14da8fdbf body=237 status=ok
// SIG undefined FUN_14da8fdbf(void)

/* WARNING: Removing unreachable block (ram,0x00015b35aa75) */
/* WARNING: Removing unreachable block (ram,0x00014da8fe20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da8fdbf(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar1 = FUN_160f468e4();
  FUN_14e03bd0d(param_1,in_stack_00000010,FUN_14e03bd0d,
                CONCAT62((int6)(-~uVar1 - ((unaff_R15 + -1) - ~param_4) >> 0x10),0xffbf));
  return;
}



// FUNCTION 14da8feaf FUN_14da8feaf body=302 status=ok
// SIG undefined FUN_14da8feaf(void)

/* WARNING: Removing unreachable block (ram,0x00014da8ffd1) */
/* WARNING: Removing unreachable block (ram,0x00014da8ff51) */
/* WARNING: Removing unreachable block (ram,0x00014da8ffd4) */
/* WARNING: Removing unreachable block (ram,0x00014da8ff46) */

void FUN_14da8feaf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x28) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x4ea20f8d;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x4ea20f8d;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x1667e1ea1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  thunk_FUN_15b642ca5(*(undefined8 *)(local_res18 + -0x18),*(undefined8 *)(local_res18 + -0x10),
                      *(undefined8 *)(local_res18 + -0x28));
  return;
}



// FUNCTION 14da8ffe1 FUN_14da8ffe1 body=316 status=ok
// SIG undefined FUN_14da8ffe1(void)

/* WARNING: Removing unreachable block (ram,0x00014da90248) */
/* WARNING: Removing unreachable block (ram,0x00014da9024e) */
/* WARNING: Removing unreachable block (ram,0x00015b8d866e) */
/* WARNING: Removing unreachable block (ram,0x00014da9011d) */
/* WARNING: Removing unreachable block (ram,0x00014da901d1) */
/* WARNING: Removing unreachable block (ram,0x00014da901d7) */
/* WARNING: Removing unreachable block (ram,0x00014d9301df) */

void FUN_14da8ffe1(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + in_R11 + unaff_RDI) = param_2;
  auStackX_18[0] = *(undefined8 *)(unaff_R12 + -0x98);
  FUN_165b1d80a();
  if ((~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_retaddr) &
      (*(ulonglong *)(unaff_R13 + -0x88) | unaff_retaddr)) != 0) {
    FUN_15b8d85d2();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38) ^ 0xffffffffffffffff;
  if ((0xffffffffffffffff - (~unaff_retaddr | *(ulonglong *)(unaff_R13 + -0x38)) |
      ~((uVar1 + unaff_retaddr) - (uVar1 & unaff_retaddr))) != 0xffffffffffffffff) {
    FUN_1615417aa(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_retaddr) &
                  (*(ulonglong *)(unaff_R13 + -0x78) | unaff_retaddr),1,0,
                  *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_retaddr);
    return;
  }
  thunk_FUN_14e06a83d();
  return;
}



// FUNCTION 14da9011d FUN_14da9011d body=186 status=ok
// SIG undefined FUN_14da9011d(void)

/* WARNING: Removing unreachable block (ram,0x00014da90248) */
/* WARNING: Removing unreachable block (ram,0x00014da9024e) */
/* WARNING: Removing unreachable block (ram,0x00014da901d7) */

void FUN_14da9011d(void)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | 0x100;
  *unaff_R12 = ~*unaff_R12;
  *(undefined8 *)(local_res20 + -8) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  puVar1 = (undefined8 *)(local_res20 + -0x18);
  *puVar1 = unaff_R13;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *puVar1 = *puVar1;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x14d93020d;
                    /* WARNING: Could not recover jumptable at 0x00014d9301ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14da901d7 FUN_14da901d7 body=350 status=ok
// SIG undefined FUN_14da901d7(void)

/* WARNING: Removing unreachable block (ram,0x00014da90248) */
/* WARNING: Removing unreachable block (ram,0x00014da9024e) */

void FUN_14da901d7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 *puVar2;
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
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  puVar2 = (undefined8 *)
           ~((~((in_RAX ^ 0xffffffffffffffff) & local_res20) + local_res20) -
             ~(in_RAX ^ 0xffffffffffffffff) & (local_res20 ^ 0xffffffffffffffff | in_RAX));
  bVar11 = (local_res18 & 0x4000) != 0;
  bVar10 = (local_res18 & 0x800) != 0;
  bVar9 = (local_res18 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (local_res18 & 0x80) != 0;
  bVar6 = (local_res18 & 0x40) != 0;
  bVar5 = (local_res18 & 0x10) != 0;
  bVar4 = (local_res18 & 4) != 0;
  bVar3 = (local_res18 & 1) != 0;
  bVar15 = (uStackX_1a & 0x20) != 0;
  bVar12 = (uStackX_1a & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *puVar2 = in_R10;
  puVar2[-1] = in_R10;
  puVar2[-2] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
               (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
               (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
               (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
               (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
               (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
               (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  puVar2[-3] = param_1;
  puVar2[-4] = param_4;
  puVar2[-2] = unaff_RBX;
  *puVar2 = 0x187bbf4;
  FUN_14d85d504(puVar2[-3]);
  return;
}



// FUNCTION 14da902e1 FUN_14da902e1 body=152 status=ok
// SIG undefined FUN_14da902e1(void)

void FUN_14da902e1(undefined8 param_1)

{
  longlong unaff_RDI;
  undefined1 local_res18;
  
  (*(code *)0x157577da5)
            (param_1,0x18,CONCAT71(0xa1e2a,local_res18),-1 - *(longlong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14da9040f FUN_14da9040f body=142 status=ok
// SIG undefined FUN_14da9040f(void)

/* WARNING: Removing unreachable block (ram,0x00015725dba2) */
/* WARNING: Removing unreachable block (ram,0x00014da90499) */
/* WARNING: Removing unreachable block (ram,0x00015725da07) */
/* WARNING: Removing unreachable block (ram,0x00015725db97) */
/* WARNING: Removing unreachable block (ram,0x00015725db9d) */
/* WARNING: Removing unreachable block (ram,0x00015725db92) */
/* WARNING: Removing unreachable block (ram,0x00014da9049f) */

void FUN_14da9040f(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = ~param_2 | ~*param_1;
  FUN_15725da07();
  return;
}



// FUNCTION 14da9049f FUN_14da9049f body=150 status=ok
// SIG undefined FUN_14da9049f(void)

void FUN_14da9049f(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong unaff_RBX;
  longlong unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *(longlong *)(param_3 + 0x10) = unaff_RBX - unaff_R15;
  *(ulonglong *)(param_3 + 0x10) =
       ~(0xffffffffffffffff - (~param_2 | 0xffffffffffffffffU - *(longlong *)(param_3 + 0x10)));
  (*(code *)0x16128127d)(param_1,local_res18,local_res10);
  return;
}



// FUNCTION 14da905c2 FUN_14da905c2 body=129 status=ok
// SIG undefined FUN_14da905c2(void)

void FUN_14da905c2(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R14;
  
  FUN_15b7e1aab((~(in_R10 & unaff_R14) + unaff_R14) - ~in_R10,
                *(longlong *)(unaff_RSI + -0x68) + unaff_RBP);
  FUN_14da90647();
  return;
}



// FUNCTION 14da90647 FUN_14da90647 body=169 status=ok
// SIG undefined FUN_14da90647(void)

/* WARNING: Removing unreachable block (ram,0x00014da906e7) */
/* WARNING: Removing unreachable block (ram,0x00014dae096a) */
/* WARNING: Removing unreachable block (ram,0x00014da906dc) */

void FUN_14da90647(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  undefined8 unaff_retaddr;
  
  FUN_15b5e9352(param_1,unaff_retaddr,
                *(ulonglong *)(param_3 + -0xa0) + in_R10 +
                (*(ulonglong *)(param_3 + -0xa0) & in_R10) * -2);
  FUN_16590926e();
  FUN_156d8127b();
  return;
}



// FUNCTION 14da90768 FUN_14da90768 body=129 status=ok
// SIG undefined FUN_14da90768(void)

/* WARNING: Removing unreachable block (ram,0x00014da907e8) */
/* WARNING: Removing unreachable block (ram,0x000166099d28) */
/* WARNING: Removing unreachable block (ram,0x00014da9087c) */
/* WARNING: Removing unreachable block (ram,0x00014da90882) */
/* WARNING: Removing unreachable block (ram,0x00014da90887) */

void FUN_14da90768(void)

{
  undefined8 in_R9;
  longlong in_stack_00000008;
  
  *(undefined8 *)(in_stack_00000008 + -0x60) = in_R9;
  *(undefined8 *)(in_stack_00000008 + -0x88) = 0;
  return;
}



// FUNCTION 14da907e8 FUN_14da907e8 body=299 status=ok
// SIG undefined FUN_14da907e8(void)

/* WARNING: Removing unreachable block (ram,0x00014da90887) */

void FUN_14da907e8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar3 = (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1;
  if (uVar3 == 0) {
    FUN_166099d28();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88);
  (*(code *)0x1625b5f26)
            (*(undefined8 *)(unaff_R13 + -0x48),0x1625b5f26,
             ~((~unaff_R15 + uVar2) - (~unaff_R15 & uVar2) & (~uVar2 | unaff_R15)),
             ~((~unaff_R15 | uVar1) & uVar3));
  return;
}



// FUNCTION 14da90a88 FUN_14da90a88 body=149 status=ok
// SIG undefined FUN_14da90a88(void)

/* WARNING: Removing unreachable block (ram,0x00014da90b1d) */

void FUN_14da90a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_stack_00000008;
  undefined8 local_res20;
  
  if ((in_stack_00000008 - (local_res20 | in_stack_00000008)) + local_res20 != 0) {
    return;
  }
  FUN_156ab5ff8(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da90b1d FUN_14da90b1d body=27 status=ok
// SIG undefined FUN_14da90b1d(void)

void FUN_14da90b1d(void)

{
  return;
}



// FUNCTION 14da90bd3 FUN_14da90bd3 body=2258 status=ok
// SIG undefined FUN_14da90bd3(void)

/* WARNING: Instruction at (ram,0x000164ef112a) overlaps instruction at (ram,0x000164ef1128)
    */
/* WARNING: Removing unreachable block (ram,0x000156d98b24) */
/* WARNING: Removing unreachable block (ram,0x000156d98b2a) */
/* WARNING: Removing unreachable block (ram,0x000156d98cbf) */
/* WARNING: Removing unreachable block (ram,0x000156d98cca) */
/* WARNING: Removing unreachable block (ram,0x000156d98d0b) */
/* WARNING: Removing unreachable block (ram,0x000156d98d0e) */
/* WARNING: Removing unreachable block (ram,0x000156d98cc5) */
/* WARNING: Removing unreachable block (ram,0x000156d98cba) */
/* WARNING: Removing unreachable block (ram,0x0001563a39c4) */
/* WARNING: Removing unreachable block (ram,0x0001563a3a42) */
/* WARNING: Removing unreachable block (ram,0x0001563a3a47) */
/* WARNING: Removing unreachable block (ram,0x0001563a3a4d) */
/* WARNING: Removing unreachable block (ram,0x000156ac6c00) */
/* WARNING: Removing unreachable block (ram,0x00015680507e) */
/* WARNING: Removing unreachable block (ram,0x00014da90ee7) */
/* WARNING: Removing unreachable block (ram,0x00014da90eed) */
/* WARNING: Removing unreachable block (ram,0x00014da90f71) */
/* WARNING: Removing unreachable block (ram,0x00014da90f77) */
/* WARNING: Removing unreachable block (ram,0x00014dcac99d) */
/* WARNING: Removing unreachable block (ram,0x000156a97429) */
/* WARNING: Removing unreachable block (ram,0x000156a9742f) */
/* WARNING: Removing unreachable block (ram,0x000162d37a2d) */
/* WARNING: Removing unreachable block (ram,0x000162d37ab3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0c39) */
/* WARNING: Removing unreachable block (ram,0x00015740e470) */
/* WARNING: Removing unreachable block (ram,0x00015740e4fc) */
/* WARNING: Removing unreachable block (ram,0x00015740e502) */
/* WARNING: Removing unreachable block (ram,0x00015740e4f7) */
/* WARNING: Removing unreachable block (ram,0x000156a973a7) */
/* WARNING: Removing unreachable block (ram,0x000166d78674) */
/* WARNING: Removing unreachable block (ram,0x000166d786f8) */
/* WARNING: Removing unreachable block (ram,0x000166d786fd) */
/* WARNING: Removing unreachable block (ram,0x000166d78703) */
/* WARNING: Removing unreachable block (ram,0x000165b8d84d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9d3d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9da3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9da9) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e37) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e3c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e42) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e47) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e4d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e50) */
/* WARNING: Removing unreachable block (ram,0x000164ef10d1) */
/* WARNING: Removing unreachable block (ram,0x000164ef1125) */
/* WARNING: Removing unreachable block (ram,0x000164ef1127) */
/* WARNING: Removing unreachable block (ram,0x000164ef1131) */
/* WARNING: Removing unreachable block (ram,0x000164ef1137) */
/* WARNING: Removing unreachable block (ram,0x000164ef1120) */
/* WARNING: Removing unreachable block (ram,0x000164ef112b) */
/* WARNING: Removing unreachable block (ram,0x00015b6d126c) */
/* WARNING: Removing unreachable block (ram,0x00015b6d12d5) */
/* WARNING: Removing unreachable block (ram,0x00014da90dab) */
/* WARNING: Removing unreachable block (ram,0x00014da90e2d) */
/* WARNING: Removing unreachable block (ram,0x00014da90c78) */
/* WARNING: Removing unreachable block (ram,0x00014da90da5) */
/* WARNING: Removing unreachable block (ram,0x000156d98a88) */
/* WARNING: Removing unreachable block (ram,0x00014da90e32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da90bd3(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  local_res18 = local_res18 + param_1 + (local_res18 & param_1) * -2 & 0xfffffffffffffeff;
  syscall();
  *(ulonglong *)(uVar1 - 8) = local_res18;
  *(ulonglong *)(uVar1 - 0x10) = local_res18;
  *(undefined4 *)(uVar1 - 0x18) = 0x961a014;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x30) = unaff_RBX;
  *(undefined **)(uVar1 - 0x20) = &DAT_165d1ff24;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_16239b6e1;
  return in_RAX;
}



// FUNCTION 14da9102b FUN_14da9102b body=163 status=ok
// SIG undefined FUN_14da9102b(void)

undefined * FUN_14da9102b(void)

{
  return &DAT_14dcf77c1;
}



// FUNCTION 14da910d3 FUN_14da910d3 body=137 status=ok
// SIG undefined FUN_14da910d3(void)

undefined8 FUN_14da910d3(void)

{
  ulonglong *puVar1;
  undefined8 in_R9;
  ulonglong unaff_R15;
  undefined8 local_res10;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 ^ unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = in_R9;
  *(undefined8 *)(local_res18 + -0x18) = in_R9;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_16566d823;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_16566d7cb;
  return local_res10;
}



// FUNCTION 14da9115d FUN_14da9115d body=838 status=ok
// SIG undefined FUN_14da9115d(void)

/* WARNING: Removing unreachable block (ram,0x00014da911f0) */

void FUN_14da9115d(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = param_2 + *(longlong *)(unaff_R12 + -0x30) +
          (param_2 & *(ulonglong *)(unaff_R12 + -0x30)) * -2;
  FUN_15b093d0a(param_1,uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2,param_3,FUN_15b093d0a);
  return;
}



// FUNCTION 14da91337 FUN_14da91337 body=36 status=ok
// SIG undefined FUN_14da91337(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da91337(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da91771 FUN_14da91771 body=94 status=ok
// SIG undefined FUN_14da91771(void)

undefined8 FUN_14da91771(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_R9;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x38);
  uVar2 = uVar1 ^ in_R9;
  uVar2 = ~(in_R9 & uVar2) & (in_R9 | uVar2);
  lVar3 = (~(uVar2 & in_RAX) + in_RAX) - (uVar2 ^ 0xffffffffffffffff);
  FUN_1613eb225();
  return *(undefined8 *)((0xffffffffffffffffU - lVar3 | ~(uVar1 & in_RAX)) + lVar3 + -0x77);
}



// FUNCTION 14da917fd FUN_14da917fd body=100 status=ok
// SIG undefined FUN_14da917fd(void)

undefined8 FUN_14da917fd(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x78);
}



// FUNCTION 14da9192f thunk_FUN_14da91939 body=5 status=ok
// SIG undefined thunk_FUN_14da91939(void)

void thunk_FUN_14da91939(void)

{
  return;
}



// FUNCTION 14da91939 FUN_14da91939 body=26 status=ok
// SIG undefined FUN_14da91939(void)

void FUN_14da91939(void)

{
  return;
}



// FUNCTION 14da91953 FUN_14da91953 body=216 status=ok
// SIG undefined FUN_14da91953(void)

/* WARNING: Instruction at (ram,0x00014da919e8) overlaps instruction at (ram,0x00014da919e7)
    */
/* WARNING: Removing unreachable block (ram,0x000165f405f3) */
/* WARNING: Removing unreachable block (ram,0x000165f40556) */
/* WARNING: Removing unreachable block (ram,0x000165f405e8) */
/* WARNING: Removing unreachable block (ram,0x000165f405ed) */
/* WARNING: Removing unreachable block (ram,0x00016141e8ae) */
/* WARNING: Removing unreachable block (ram,0x000165f40540) */
/* WARNING: Removing unreachable block (ram,0x000162c90b16) */
/* WARNING: Removing unreachable block (ram,0x00014da919d2) */
/* WARNING: Removing unreachable block (ram,0x00014da919e8) */
/* WARNING: Removing unreachable block (ram,0x00014da919e5) */
/* WARNING: Removing unreachable block (ram,0x00014da91a47) */
/* WARNING: Removing unreachable block (ram,0x00014da919e7) */
/* WARNING: Removing unreachable block (ram,0x00014da919f0) */

void FUN_14da91953(void)

{
  ulonglong unaff_RSI;
  
  if (unaff_RSI == 0x11a85f) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI < 0x11a85f) {
    FUN_162c90aae();
    return;
  }
  if (unaff_RSI == 0x11a860) {
    FUN_165f40434();
    return;
  }
  if (unaff_RSI == 0x11a861) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x11a862) {
    FUN_1649a63e3();
    return;
  }
  FUN_1649a63cf();
  FUN_157852778(0x38);
  return;
}



// FUNCTION 14da91b27 FUN_14da91b27 body=325 status=ok
// SIG undefined FUN_14da91b27(void)

/* WARNING: Removing unreachable block (ram,0x0001627c64c1) */
/* WARNING: Removing unreachable block (ram,0x0001627c64bb) */
/* WARNING: Removing unreachable block (ram,0x0001627c64c6) */
/* WARNING: Removing unreachable block (ram,0x000156c8bdb2) */
/* WARNING: Removing unreachable block (ram,0x0001627c6523) */
/* WARNING: Removing unreachable block (ram,0x0001627c6537) */
/* WARNING: Removing unreachable block (ram,0x0001627c653f) */
/* WARNING: Removing unreachable block (ram,0x00014da91bc3) */
/* WARNING: Removing unreachable block (ram,0x00014da91bf5) */
/* WARNING: Removing unreachable block (ram,0x00014da91c1e) */

undefined8 FUN_14da91b27(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 local_res8;
  undefined8 uStackX_20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) | param_1;
  *(ulonglong *)(unaff_R12 + 0x10) = -1 - ((~param_1 | uVar1) & *(ulonglong *)(unaff_R12 + 0x10));
  *(undefined8 *)(uStackX_20 + -8) = in_R11;
  *(undefined8 *)(uStackX_20 + -0x10) = local_res8;
  *(undefined8 *)(uStackX_20 + -0x10) = param_3;
  uVar2 = FUN_16676961a();
  return uVar2;
}



// FUNCTION 14da91e18 FUN_14da91e18 body=175 status=ok
// SIG undefined FUN_14da91e18(void)

void FUN_14da91e18(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x58);
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  FUN_156af4056(~((uVar1 - (uVar2 | uVar1)) + uVar2),0xffffffffffffffff,unaff_RBX - unaff_RSI);
  return;
}



// FUNCTION 14da9204b thunk_FUN_14da92051 body=5 status=ok
// SIG undefined thunk_FUN_14da92051(void)

/* WARNING: Removing unreachable block (ram,0x00014da920de) */
/* WARNING: Removing unreachable block (ram,0x00014da920e4) */

void thunk_FUN_14da92051(void)

{
  return;
}



// FUNCTION 14da92051 FUN_14da92051 body=469 status=ok
// SIG undefined FUN_14da92051(void)

/* WARNING: Removing unreachable block (ram,0x00014da920de) */
/* WARNING: Removing unreachable block (ram,0x00014da920e4) */

void FUN_14da92051(void)

{
  return;
}



// FUNCTION 14da9265a FUN_14da9265a body=128 status=ok
// SIG undefined FUN_14da9265a(void)

void FUN_14da9265a(void)

{
  FUN_15b4291be();
  return;
}



// FUNCTION 14da92787 FUN_14da92787 body=12 status=ok
// SIG undefined FUN_14da92787(void)

void FUN_14da92787(void)

{
  return;
}


