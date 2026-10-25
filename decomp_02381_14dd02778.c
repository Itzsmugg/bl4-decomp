// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd02778 FUN_14dd02778 body=136 status=ok
// SIG undefined FUN_14dd02778(void)

void FUN_14dd02778(void)

{
  return;
}



// FUNCTION 14dd02b1d FUN_14dd02b1d body=335 status=ok
// SIG undefined FUN_14dd02b1d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd02b5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd02ba1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014dd02b8d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd02b1d(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  byte in_AF;
  
  if ((int)(((uint)(param_3 == 0) * 0x40 | (uint)((in_AF & 1) != 0) * 0x10 |
            (uint)((POPCOUNT(param_3 & 0xff) & 1U) == 0) * 4) << 0x19) < 0) {
    FUN_16697b127(param_1,param_2,&stack0x00000000);
    return;
  }
  FUN_16697b0b9(param_1,param_2,FUN_16697b0b9);
  return;
}



// FUNCTION 14dd02cb0 thunk_FUN_14dd02cb6 body=5 status=ok
// SIG undefined thunk_FUN_14dd02cb6(void)

void thunk_FUN_14dd02cb6(void)

{
  return;
}



// FUNCTION 14dd02cb6 FUN_14dd02cb6 body=107 status=ok
// SIG undefined FUN_14dd02cb6(void)

void FUN_14dd02cb6(void)

{
  return;
}



// FUNCTION 14dd02d21 FUN_14dd02d21 body=153 status=ok
// SIG undefined FUN_14dd02d21(void)

/* WARNING: Removing unreachable block (ram,0x00014dd02db7) */
/* WARNING: Removing unreachable block (ram,0x00014dd02dbd) */
/* WARNING: Removing unreachable block (ram,0x0001650b31d0) */
/* WARNING: Removing unreachable block (ram,0x0001650b325e) */
/* WARNING: Removing unreachable block (ram,0x0001650b3264) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

undefined8 FUN_14dd02d21(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1650b31d0();
  return uVar1;
}



// FUNCTION 14dd02dbd FUN_14dd02dbd body=175 status=ok
// SIG undefined FUN_14dd02dbd(void)

void FUN_14dd02dbd(void)

{
  (*(code *)0x15b3d0d1a)();
  return;
}



// FUNCTION 14dd02f28 FUN_14dd02f28 body=153 status=ok
// SIG undefined FUN_14dd02f28(void)

/* WARNING: Removing unreachable block (ram,0x0001620b01fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd03173) */
/* WARNING: Removing unreachable block (ram,0x00014dd03179) */
/* WARNING: Removing unreachable block (ram,0x00014dd03250) */
/* WARNING: Removing unreachable block (ram,0x00014dd03255) */
/* WARNING: Removing unreachable block (ram,0x0001620b01f8) */
/* WARNING: Removing unreachable block (ram,0x0001620b028c) */
/* WARNING: Removing unreachable block (ram,0x0001620b0287) */
/* WARNING: Removing unreachable block (ram,0x000162e3f153) */
/* WARNING: Removing unreachable block (ram,0x0001620b0292) */

void FUN_14dd02f28(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *unaff_RBX;
  uint uVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  undefined8 unaff_RDI;
  ushort *in_R10;
  undefined8 unaff_R12;
  ushort unaff_R14W;
  longlong lStackX_10;
  undefined8 uStackX_18;
  longlong in_stack_00000030;
  
  *in_R10 = *in_R10 ^ unaff_R14W;
  *(undefined8 *)(in_stack_00000030 + -8) = in_RAX;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x20) = param_2;
  uVar9 = *(undefined8 *)(in_stack_00000030 + -0x20);
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  lVar3 = *(longlong *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x20) = uStackX_18;
  *(undefined **)(in_stack_00000030 + -8) = &DAT_15736f17c;
  uVar5 = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x18) = 0x14dd02fae;
  FUN_15736f15b();
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(lVar3 + -8);
  plVar2 = (longlong *)(in_stack_00000030 + -0x18);
  *plVar2 = lStackX_10;
  *(undefined8 *)(in_stack_00000030 + -0x20) = 0;
  *(longlong *)(in_stack_00000030 + -0x20) = *(longlong *)(in_stack_00000030 + -0x20) + lStackX_10;
  lVar4 = *(longlong *)(lVar3 + -0x98);
  *plVar2 = 0;
  *plVar2 = *plVar2 + lVar4;
  *(undefined8 *)(in_stack_00000030 + -0x20) = uVar9;
  *(undefined8 *)(in_stack_00000030 + -0x30) = unaff_RBP;
  *(undefined4 *)(in_stack_00000030 + -0x38) = 0x8602b993;
  *(undefined4 *)(in_stack_00000030 + -0x34) = 0xffffffff;
  lVar4 = *(longlong *)(in_stack_00000030 + -0x38);
  plVar2 = (longlong *)(in_stack_00000030 + -0x38);
  *(int *)plVar2 = -0x5bb4ed79;
  *(int *)plVar2 = *(int *)plVar2 + 0x6750fb22;
  *(undefined4 *)(in_stack_00000030 + -0x34) = 0;
  uVar8 = (uint)*(undefined8 *)(lVar3 + lVar4 + *plVar2 + 0x6e613824);
  uVar9 = *(undefined8 *)(in_stack_00000030 + -0x30);
  *(code **)(in_stack_00000030 + -0x38) = FUN_14dd03066;
  (*(code *)0x15762b997)();
  *unaff_RBX = param_1;
  puVar1 = (ulonglong *)(in_stack_00000030 + -0x20);
  uVar10 = (uint)uVar9;
  *(ulonglong *)(in_stack_00000030 + -0x28) = (ulonglong)~((uVar10 - (uVar8 | uVar10)) + uVar8);
  uVar11 = (ulonglong)
           ((~(*(uint *)(in_stack_00000030 + -0x28) & (uVar8 | uVar10)) + (uVar8 | uVar10)) -
           ~*(uint *)(in_stack_00000030 + -0x28));
  *(undefined8 *)(in_stack_00000030 + -0x28) = 0x14dd030e2;
  uVar7 = uVar11;
  uVar6 = FUN_15693fddf();
  *(uint *)puVar1 = ~*(uint *)puVar1;
  *(uint *)puVar1 = (int)uVar5 - *(uint *)puVar1;
  *(undefined4 *)(in_stack_00000030 + -0x1c) = 0;
  *(undefined4 *)(in_stack_00000030 + -0x1c) = *(undefined4 *)(in_stack_00000030 + -0x1c);
  *puVar1 = *(ulonglong *)(uVar11 - 0x50);
  *(undefined4 *)(in_stack_00000030 + -0x28) = 0x76af02bb;
  *(undefined4 *)(in_stack_00000030 + -0x24) = 0;
  *puVar1 = uVar7;
  uVar7 = *puVar1;
  *puVar1 = uVar6;
  *(ulonglong *)(in_stack_00000030 + -0x28) = uVar11;
  FUN_1613147b2(uVar7);
  return;
}



// FUNCTION 14dd03066 FUN_14dd03066 body=550 status=ok
// SIG undefined FUN_14dd03066(void)

/* WARNING: Removing unreachable block (ram,0x0001620b01fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd03173) */
/* WARNING: Removing unreachable block (ram,0x00014dd03179) */
/* WARNING: Removing unreachable block (ram,0x00014dd03250) */
/* WARNING: Removing unreachable block (ram,0x00014dd03255) */
/* WARNING: Removing unreachable block (ram,0x0001620b01f8) */
/* WARNING: Removing unreachable block (ram,0x0001620b028c) */
/* WARNING: Removing unreachable block (ram,0x0001620b0287) */
/* WARNING: Removing unreachable block (ram,0x000162e3f153) */
/* WARNING: Removing unreachable block (ram,0x0001620b0292) */

void FUN_14dd03066(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  uint unaff_EBP;
  
  *unaff_RBX = param_1;
  uVar1 = (unaff_EBP - (param_2 | unaff_EBP)) + param_2;
  uVar2 = (ulonglong)((~(~uVar1 & (param_2 | unaff_EBP)) + (param_2 | unaff_EBP)) - uVar1);
  FUN_15693fddf();
  FUN_1613147b2(uVar2);
  return;
}



// FUNCTION 14dd0328f FUN_14dd0328f body=14 status=ok
// SIG undefined FUN_14dd0328f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd0328f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd033d2 FUN_14dd033d2 body=285 status=ok
// SIG undefined FUN_14dd033d2(void)

void FUN_14dd033d2(void)

{
  FUN_162df5cb3();
  return;
}



// FUNCTION 14dd034e9 FUN_14dd034e9 body=174 status=ok
// SIG undefined FUN_14dd034e9(void)

longlong FUN_14dd034e9(ulonglong param_1)

{
  ulonglong in_RAX;
  
  return ((param_1 - 1) - ~in_RAX) + (in_RAX & param_1) * -2;
}



// FUNCTION 14dd0362a FUN_14dd0362a body=301 status=ok
// SIG undefined FUN_14dd0362a(void)

/* WARNING: Removing unreachable block (ram,0x00015afec7b1) */
/* WARNING: Removing unreachable block (ram,0x00015afec7b7) */
/* WARNING: Removing unreachable block (ram,0x00015afec7bc) */
/* WARNING: Removing unreachable block (ram,0x00015afec7cf) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c10) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001563d4b69) */
/* WARNING: Removing unreachable block (ram,0x00015b0aaf10) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafa6) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafb1) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafac) */
/* WARNING: Removing unreachable block (ram,0x00015afec608) */
/* WARNING: Removing unreachable block (ram,0x00015afec7ac) */
/* WARNING: Removing unreachable block (ram,0x00014dd037c1) */
/* WARNING: Removing unreachable block (ram,0x00014dd0374b) */
/* WARNING: Removing unreachable block (ram,0x00014dd036b5) */
/* WARNING: Removing unreachable block (ram,0x00014dd03745) */
/* WARNING: Removing unreachable block (ram,0x00015b198035) */
/* WARNING: Removing unreachable block (ram,0x00014dd03740) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd0362a(void)

{
  (*(code *)0x1623525de)();
  return;
}



// FUNCTION 14dd036b5 FUN_14dd036b5 body=148 status=ok
// SIG undefined FUN_14dd036b5(void)

/* WARNING: Removing unreachable block (ram,0x00015afec7b1) */
/* WARNING: Removing unreachable block (ram,0x00015afec7b7) */
/* WARNING: Removing unreachable block (ram,0x00015afec7bc) */
/* WARNING: Removing unreachable block (ram,0x00015afec7cf) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c10) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001563d4b69) */
/* WARNING: Removing unreachable block (ram,0x00015b0aaf10) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafa6) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafb1) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafac) */
/* WARNING: Removing unreachable block (ram,0x00015afec608) */
/* WARNING: Removing unreachable block (ram,0x00015afec7ac) */
/* WARNING: Removing unreachable block (ram,0x00014dd037c1) */
/* WARNING: Removing unreachable block (ram,0x00014dd0374b) */
/* WARNING: Removing unreachable block (ram,0x00014dd03740) */

void FUN_14dd036b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_15af44ff4)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd0374b FUN_14dd0374b body=682 status=ok
// SIG undefined FUN_14dd0374b(void)

/* WARNING: Removing unreachable block (ram,0x00015afec7b1) */
/* WARNING: Removing unreachable block (ram,0x00015afec7b7) */
/* WARNING: Removing unreachable block (ram,0x00015afec7bc) */
/* WARNING: Removing unreachable block (ram,0x00015afec7cf) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c10) */
/* WARNING: Removing unreachable block (ram,0x0001563d4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001563d4b69) */
/* WARNING: Removing unreachable block (ram,0x00015b0aaf10) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafa6) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafb1) */
/* WARNING: Removing unreachable block (ram,0x00015b0aafac) */
/* WARNING: Removing unreachable block (ram,0x00015afec608) */
/* WARNING: Removing unreachable block (ram,0x00015afec7ac) */
/* WARNING: Removing unreachable block (ram,0x00014dd037c1) */

void FUN_14dd0374b(void)

{
  return;
}



// FUNCTION 14dd038c9 FUN_14dd038c9 body=133 status=ok
// SIG undefined FUN_14dd038c9(void)

void FUN_14dd038c9(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  ulonglong *unaff_R15;
  undefined1 local_5a0b [23043];
  
  uVar1 = *unaff_R15;
  *unaff_R15 = *unaff_R15 | 0xffffffffc1baac0d;
  *unaff_R15 = ~(~(uVar1 & 0xffffffffc1baac0d) & *unaff_R15);
  lVar2 = -~(ulonglong)local_5a0b;
  *(undefined8 *)(lVar2 + 0x5a02) = in_RAX;
  *(undefined4 *)(lVar2 + 0x5a02) = 0x64152e33;
  *(undefined4 *)(lVar2 + 0x5a06) = 0;
  *(undefined **)(lVar2 + 0x59fa) = &DAT_1616f50ee;
  return;
}



// FUNCTION 14dd0394e FUN_14dd0394e body=142 status=ok
// SIG undefined FUN_14dd0394e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd03a5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd039dd) */

void FUN_14dd0394e(void)

{
  ulonglong unaff_RSI;
  ulonglong in_R10;
  
  if (~(in_R10 & unaff_RSI) + unaff_RSI == ~in_R10) {
    FUN_1615dfb5a();
    return;
  }
  return;
}



// FUNCTION 14dd039dd FUN_14dd039dd body=157 status=ok
// SIG undefined FUN_14dd039dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd03a5c) */

void FUN_14dd039dd(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RDI;
  
  FUN_165c73f16(param_1,~((~param_2 | unaff_RDI) + param_2 + 1));
  return;
}



// FUNCTION 14dd03a7b FUN_14dd03a7b body=90 status=ok
// SIG undefined FUN_14dd03a7b(void)

void FUN_14dd03a7b(undefined8 param_1)

{
  undefined8 unaff_RBP;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x1533c367;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x1533c367;
  *(undefined **)(local_res10 + -8) = &DAT_14dd03aee + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = 0x14d7bf45a;
  return;
}



// FUNCTION 14dd03b2f FUN_14dd03b2f body=12 status=ok
// SIG undefined FUN_14dd03b2f(void)

void FUN_14dd03b2f(void)

{
  return;
}



// FUNCTION 14dd03bcf FUN_14dd03bcf body=317 status=ok
// SIG undefined FUN_14dd03bcf(void)

/* WARNING: Removing unreachable block (ram,0x00014dd03c72) */
/* WARNING: Removing unreachable block (ram,0x00014dd03c78) */
/* WARNING: Removing unreachable block (ram,0x00014dd03d08) */
/* WARNING: Removing unreachable block (ram,0x0001563ba99f) */
/* WARNING: Removing unreachable block (ram,0x00014dd03d0e) */

undefined8 FUN_14dd03bcf(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_15667ad09(param_1);
  uVar1 = FUN_1576667e8();
  return uVar1;
}



// FUNCTION 14dd03d0e FUN_14dd03d0e body=154 status=ok
// SIG undefined FUN_14dd03d0e(void)

void FUN_14dd03d0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(FUN_1664c76d6 + *(longlong *)(local_res18 + -8));
  FUN_1664c76b3(param_1,uVar2,uVar1);
  return;
}



// FUNCTION 14dd03daa FUN_14dd03daa body=98 status=ok
// SIG undefined FUN_14dd03daa(void)

void FUN_14dd03daa(void)

{
  FUN_1661a8b91();
  return;
}



// FUNCTION 14dd03e14 FUN_14dd03e14 body=163 status=ok
// SIG undefined FUN_14dd03e14(void)

/* WARNING: Removing unreachable block (ram,0x00014dd03eb1) */
/* WARNING: Removing unreachable block (ram,0x00014dd03eb7) */
/* WARNING: Removing unreachable block (ram,0x000156a0ba51) */

void FUN_14dd03e14(void)

{
  FUN_156a0ba51();
  return;
}



// FUNCTION 14dd03eb7 FUN_14dd03eb7 body=308 status=ok
// SIG undefined FUN_14dd03eb7(void)

void FUN_14dd03eb7(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15687df32(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  FUN_16655ea9b(uVar1,FUN_16655ea9b,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd04067 FUN_14dd04067 body=87 status=ok
// SIG undefined FUN_14dd04067(void)

ulonglong FUN_14dd04067(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return in_RAX ^ unaff_R15;
}



// FUNCTION 14dd040f2 FUN_14dd040f2 body=139 status=ok
// SIG undefined FUN_14dd040f2(void)

void FUN_14dd040f2(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  
  uVar1 = *unaff_RDI;
  *unaff_RDI = 0;
  *unaff_RDI = *unaff_RDI - uVar1;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = -*unaff_RDI;
  *unaff_RDI = *unaff_RDI - 1;
  *unaff_RDI = *unaff_RDI - 1;
  *unaff_RDI = *unaff_RDI | param_1;
  *unaff_RDI = 0xffffffffffffffff - (unaff_R13 & *unaff_RDI);
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = unaff_R12;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = in_stack_00000010;
  FUN_166cbf5fa(uStackX_18,param_2,param_3);
  return;
}



// FUNCTION 14dd0421a FUN_14dd0421a body=123 status=ok
// SIG undefined FUN_14dd0421a(void)

/* WARNING: Removing unreachable block (ram,0x00014e0beaae) */
/* WARNING: Removing unreachable block (ram,0x0001656e69c3) */
/* WARNING: Removing unreachable block (ram,0x000156b655c3) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a54) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a5f) */
/* WARNING: Removing unreachable block (ram,0x000162e3cdc5) */
/* WARNING: Removing unreachable block (ram,0x000162e3cdcb) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a5a) */
/* WARNING: Removing unreachable block (ram,0x000165f0d450) */
/* WARNING: Removing unreachable block (ram,0x00014dd0443d) */
/* WARNING: Removing unreachable block (ram,0x000161d36779) */
/* WARNING: Removing unreachable block (ram,0x000161d36773) */
/* WARNING: Removing unreachable block (ram,0x000161d3677e) */
/* WARNING: Removing unreachable block (ram,0x000165f0d45b) */
/* WARNING: Removing unreachable block (ram,0x00015b3d2490) */
/* WARNING: Removing unreachable block (ram,0x00014e0beaa8) */
/* WARNING: Removing unreachable block (ram,0x00014e0beab3) */
/* WARNING: Removing unreachable block (ram,0x000165f3e1cf) */
/* WARNING: Removing unreachable block (ram,0x000165f3e201) */
/* WARNING: Removing unreachable block (ram,0x000165f3e208) */
/* WARNING: Removing unreachable block (ram,0x00014dd043a9) */
/* WARNING: Removing unreachable block (ram,0x000164b3f41e) */
/* WARNING: Removing unreachable block (ram,0x000164b3f424) */
/* WARNING: Removing unreachable block (ram,0x000165925397) */
/* WARNING: Removing unreachable block (ram,0x000161885496) */
/* WARNING: Removing unreachable block (ram,0x00014dd0429b) */
/* WARNING: Removing unreachable block (ram,0x00014dd0434b) */
/* WARNING: Removing unreachable block (ram,0x00015b3d23ee) */
/* WARNING: Removing unreachable block (ram,0x00014dd0439e) */
/* WARNING: Removing unreachable block (ram,0x00014dd043a4) */
/* WARNING: Removing unreachable block (ram,0x000164b3f429) */
/* WARNING: Removing unreachable block (ram,0x0001614ea51b) */
/* WARNING: Removing unreachable block (ram,0x0001614ea577) */
/* WARNING: Removing unreachable block (ram,0x0001614ea480) */
/* WARNING: Removing unreachable block (ram,0x0001614ea515) */
/* WARNING: Removing unreachable block (ram,0x00015ba1fd09) */

undefined8 FUN_14dd0421a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 uStackX_8;
  ushort uStackX_e;
  ulonglong auStackX_10 [2];
  ulonglong uStackX_20;
  longlong lStack_8;
  
  lVar5 = *(longlong *)((longlong)auStackX_10 + param_1);
  *(undefined8 *)((longlong)auStackX_10 + param_1) = in_R11;
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = in_RAX;
  *(undefined4 *)(&stack0x00000000 + param_1) = 0xbdf881f;
  *(undefined4 *)(&stack0x00000004 + param_1) = 0;
  puVar1 = (ulonglong *)
           (&stack0xfffffffff42077f9 + *(longlong *)(&stack0x00000000 + param_1) + param_1);
  uVar11 = *puVar1;
  *puVar1 = ~*puVar1;
  *(ulonglong *)(&stack0x00000000 + param_1) = 0xffffffffffffffff - unaff_retaddr | uVar11;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & ~unaff_retaddr;
  *puVar1 = ~*puVar1;
  uVar6 = *(ulonglong *)(&stack0x00000000 + param_1);
  uVar11 = *puVar1;
  *puVar1 = ~(uVar6 & uVar11);
  uVar9 = *(undefined8 *)((longlong)auStackX_10 + param_1 + -8);
  uVar7 = *(undefined8 *)((longlong)auStackX_10 + param_1);
  *(undefined8 *)((longlong)auStackX_10 + param_1) = uStackX_8;
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = unaff_R15;
  if ((longlong)(uVar6 & uVar11) < 0) {
    uVar9 = FUN_1618853ea();
    return uVar9;
  }
  uVar11 = *(ulonglong *)((longlong)&uStackX_20 + param_1);
  *(ulonglong *)((longlong)&uStackX_20 + param_1) = ~*(ulonglong *)((longlong)&uStackX_20 + param_1)
  ;
  *(ulonglong *)((longlong)&uStackX_20 + param_1) =
       *(ulonglong *)((longlong)&uStackX_20 + param_1) | unaff_retaddr;
  *(ulonglong *)((longlong)&uStackX_20 + param_1) =
       ~((~unaff_retaddr | uVar11) & *(ulonglong *)((longlong)&uStackX_20 + param_1));
  lVar10 = *(longlong *)((longlong)auStackX_10 + param_1 + -8);
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = param_3;
  *(undefined8 *)(&stack0x00000000 + param_1) = 0;
  *(undefined8 *)((longlong)auStackX_10 + param_1) = *(undefined8 *)(&stack0x00000000 + param_1);
  *(longlong *)((longlong)auStackX_10 + param_1) =
       *(longlong *)((longlong)auStackX_10 + param_1) + lVar10;
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = unaff_R13;
  uVar11 = *(ulonglong *)(&stack0x00000028 + param_1);
  *(ulonglong *)(&stack0x00000028 + param_1) =
       *(ulonglong *)(&stack0x00000028 + param_1) & unaff_retaddr;
  *(ulonglong *)(&stack0x00000028 + param_1) = ~*(ulonglong *)(&stack0x00000028 + param_1);
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = unaff_RBX;
  *(undefined4 *)(&stack0x00000000 + param_1) = 0x4fb126f;
  *(undefined4 *)(&stack0x00000004 + param_1) = 0;
  lVar10 = *(longlong *)(&stack0x00000000 + param_1) + -0x4fb1267;
  if (lVar10 == 0) {
    uVar9 = FUN_14e0bea2a();
    return uVar9;
  }
  lVar10 = lVar10 + param_1 + 8;
  *(ulonglong *)(&stack0xfffffffffb04edb9 + lVar10 + 0x4fb125f) =
       ((uVar11 | unaff_retaddr) -
       (*(ulonglong *)(&stack0xfffffffffb04edb9 + lVar10 + 0x4fb125f) | uVar11 | unaff_retaddr)) +
       *(longlong *)(&stack0xfffffffffb04edb9 + lVar10 + 0x4fb125f);
  uVar8 = *(undefined8 *)((longlong)auStackX_10 + param_1 + -8);
  *(ulonglong *)((longlong)auStackX_10 + param_1) = unaff_RDI ^ unaff_retaddr;
  uVar4 = *(undefined8 *)((longlong)auStackX_10 + param_1 + 8);
  *(undefined8 *)((longlong)auStackX_10 + param_1 + 8) = uVar9;
  *(undefined8 *)((longlong)auStackX_10 + param_1) = unaff_RBP;
  uVar3 = *(ushort *)((longlong)&uStackX_20 + param_1);
  *(undefined8 *)((longlong)auStackX_10 + param_1 + -8) = param_2;
  *(undefined8 *)(&stack0x00000000 + param_1) = uVar7;
  *(undefined8 *)((longlong)&lStack_8 + param_1) = uVar4;
  uVar9 = *(undefined8 *)((longlong)&lStack_8 + param_1);
  *(ushort *)((longlong)auStackX_10 + param_1 + -2) = (uVar3 | 0x100) - 0x100;
  *(ushort *)((longlong)&uStackX_20 + param_1) = *(ushort *)((longlong)auStackX_10 + param_1 + -2);
  lVar10 = *(longlong *)(&stack0x00000028 + param_1);
  *(longlong *)(lVar10 + -8) = lVar10;
  lVar10 = *(longlong *)(lVar10 + -8);
  *(undefined8 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = unaff_RSI;
  *(longlong *)(lVar10 + -8) = lVar5 + *(longlong *)(lVar10 + -8);
  *(undefined8 *)(lVar10 + -0x10) = *(undefined8 *)(lVar10 + -8);
  *(undefined8 *)(lVar10 + -0x18) = uVar8;
  *(undefined4 *)(lVar10 + -0x20) = 0x351b946b;
  *(undefined4 *)(lVar10 + -0x1c) = 0;
  uVar11 = *(ulonglong *)(lVar10 + -0x20) ^ 0x351b9463;
  *(undefined8 *)(lVar10 + -0x10 + uVar11) = 0;
  plVar2 = (longlong *)(lVar10 + -0x10 + uVar11);
  *plVar2 = (longlong)(&LAB_15b5919e5 + *plVar2);
  uVar9 = thunk_FUN_15b0572f1(uVar9);
  return uVar9;
}



// FUNCTION 14dd0429b FUN_14dd0429b body=174 status=ok
// SIG undefined FUN_14dd0429b(void)

/* WARNING: Removing unreachable block (ram,0x000161d36773) */
/* WARNING: Removing unreachable block (ram,0x000161d3677e) */
/* WARNING: Removing unreachable block (ram,0x00015b3d2490) */
/* WARNING: Removing unreachable block (ram,0x000165f0d45b) */
/* WARNING: Removing unreachable block (ram,0x000165f0d450) */
/* WARNING: Removing unreachable block (ram,0x000162e3cdc5) */
/* WARNING: Removing unreachable block (ram,0x000162e3cdcb) */
/* WARNING: Removing unreachable block (ram,0x0001656e69c3) */
/* WARNING: Removing unreachable block (ram,0x000156b655c3) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a54) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a5a) */
/* WARNING: Removing unreachable block (ram,0x0001656e6a5f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0443d) */
/* WARNING: Removing unreachable block (ram,0x000161d36779) */
/* WARNING: Removing unreachable block (ram,0x00014dd043a9) */
/* WARNING: Removing unreachable block (ram,0x000164b3f41e) */
/* WARNING: Removing unreachable block (ram,0x000164b3f424) */
/* WARNING: Removing unreachable block (ram,0x000165925397) */
/* WARNING: Removing unreachable block (ram,0x000164b3f429) */

undefined8 FUN_14dd0429b(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~-*(longlong *)(unaff_R13 + -0x68) + 1;
  FUN_15738ff76();
  uVar2 = *(ulonglong *)(uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2 + -0x88);
  if (((~param_1 | uVar2) & (~(~uVar2 & param_1) + param_1) - uVar2) != 0) {
    FUN_164bec40d();
    FUN_161485695();
    FUN_14dd08958();
    FUN_162a3136e();
    uVar1 = FUN_1656e69c3();
    return uVar1;
  }
  uVar1 = FUN_161d36626();
  return uVar1;
}



// FUNCTION 14dd045ed FUN_14dd045ed body=286 status=ok
// SIG undefined FUN_14dd045ed(void)

void FUN_14dd045ed(void)

{
  ulonglong in_RAX;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  FUN_15b416e6b((local_res10 + in_RAX) - (local_res10 & in_RAX));
  if (uStackX_8 != 0xbeb27) {
    return;
  }
  return;
}



// FUNCTION 14dd0470c FUN_14dd0470c body=194 status=ok
// SIG undefined FUN_14dd0470c(void)

void FUN_14dd0470c(undefined8 param_1,ulonglong param_2)

{
  longlong in_R11;
  undefined8 uStackX_10;
  
  *(undefined8 *)(&stack0x17ec275f + ~(~param_2 + 2)) = 0;
  *(longlong *)(&stack0x17ec275f + ~(~param_2 + 2)) =
       *(longlong *)(&stack0x17ec275f + ~(~param_2 + 2)) + in_R11;
  FUN_1610c064e(param_1,uStackX_10);
  return;
}



// FUNCTION 14dd047d0 FUN_14dd047d0 body=152 status=ok
// SIG undefined FUN_14dd047d0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0486a) */
/* WARNING: Removing unreachable block (ram,0x00014dd0485a) */

void FUN_14dd047d0(void)

{
  ushort *in_R11;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *in_R11 = (*in_R11 | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  FUN_162399442();
  return;
}



// FUNCTION 14dd0486a FUN_14dd0486a body=184 status=ok
// SIG undefined FUN_14dd0486a(void)

void FUN_14dd0486a(void)

{
  FUN_16133aa9b();
  return;
}



// FUNCTION 14dd04903 FUN_14dd04903 body=258 status=ok
// SIG undefined FUN_14dd04903(void)

undefined8 FUN_14dd04903(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15640b24b(param_1,param_2);
  return uVar1;
}



// FUNCTION 14dd04b16 FUN_14dd04b16 body=132 status=ok
// SIG undefined FUN_14dd04b16(void)

void FUN_14dd04b16(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  undefined8 uStackX_18;
  
  (*(code *)0x1628160f5)(uStackX_18 + unaff_RBX,param_2);
  return;
}



// FUNCTION 14dd04d6b FUN_14dd04d6b body=139 status=ok
// SIG undefined FUN_14dd04d6b(void)

void FUN_14dd04d6b(void)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = ~unaff_R15 | *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | unaff_R15;
  *(ulonglong *)(unaff_RSI + 8) =
       ~((*(longlong *)(unaff_RSI + 8) -
         (~*(ulonglong *)(unaff_RSI + 8) & uVar1 | *(ulonglong *)(unaff_RSI + 8))) + uVar1);
  FUN_160d235c3();
  return;
}



// FUNCTION 14dd05165 FUN_14dd05165 body=303 status=ok
// SIG undefined FUN_14dd05165(void)

/* WARNING: Removing unreachable block (ram,0x00014dd052b1) */
/* WARNING: Removing unreachable block (ram,0x00014dd0521e) */
/* WARNING: Removing unreachable block (ram,0x00014dd052ab) */
/* WARNING: Removing unreachable block (ram,0x00014dd052a6) */

void FUN_14dd05165(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & unaff_R15) & (local_res20 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0x52492bb9;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x52492bb9;
  *(undefined1 **)(uVar1 - 8) = &LAB_165dd2c5d + *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  *(undefined8 *)(uVar1 - 0x18) = local_res10;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined4 *)(uVar1 - 0x28) = 0xc920c085;
  *(undefined4 *)(uVar1 - 0x24) = 0x86b1b249;
  *(int *)(uVar1 - 0x24) = *(int *)(uVar1 - 0x24) + 0x794e4db6;
  lVar2 = *(longlong *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x28) = unaff_R13;
  *(undefined **)(uVar1 + lVar2 + 0x36df3f6b) = &DAT_14d7acb12;
  *(undefined8 *)(uVar1 - 0x28) = unaff_retaddr;
  return;
}



// FUNCTION 14dd0521e FUN_14dd0521e body=311 status=ok
// SIG undefined FUN_14dd0521e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd052b1) */

void FUN_14dd0521e(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R12 + -0x50) + in_RAX +
           (*(ulonglong *)(unaff_R12 + -0x50) & in_RAX) * -2)) {
    return;
  }
  FUN_1569d641b(param_1,0xffffffffffffffff - (param_2 & in_RAX) &
                        (~(param_2 & in_RAX) + in_RAX) - ~param_2);
  return;
}



// FUNCTION 14dd053e9 FUN_14dd053e9 body=142 status=ok
// SIG undefined FUN_14dd053e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd05423) */

void FUN_14dd053e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15757c80f(FUN_15757c80f,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd05477 FUN_14dd05477 body=176 status=ok
// SIG undefined FUN_14dd05477(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0548e) */

void FUN_14dd05477(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164f63ad9(param_1 ^ unaff_R15,
                ~(~(0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15)) |
                 ~(*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3,param_4);
  return;
}



// FUNCTION 14dd05528 FUN_14dd05528 body=150 status=ok
// SIG undefined FUN_14dd05528(void)

void FUN_14dd05528(void)

{
  FUN_16295eb08();
  return;
}



// FUNCTION 14dd055be FUN_14dd055be body=324 status=ok
// SIG undefined FUN_14dd055be(void)

/* WARNING: Removing unreachable block (ram,0x00014dd05672) */

void FUN_14dd055be(void)

{
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -8) == 0) {
    FUN_1610a2ecb();
    return;
  }
  FUN_1610a2ecb();
  return;
}



// FUNCTION 14dd05826 FUN_14dd05826 body=126 status=ok
// SIG undefined FUN_14dd05826(void)

void FUN_14dd05826(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  uVar1 = (param_1 + unaff_R14 + (param_1 & unaff_R14) * -2) * param_2;
  FUN_165064b2e((~in_RAX | uVar1) & (~in_RAX & ~uVar1 | in_RAX) ^ 0xffffffffffffffff,param_2,
                unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dd058a5 FUN_14dd058a5 body=34 status=ok
// SIG undefined FUN_14dd058a5(void)

void FUN_14dd058a5(void)

{
  return;
}



// FUNCTION 14dd05bd2 FUN_14dd05bd2 body=231 status=ok
// SIG undefined FUN_14dd05bd2(void)

/* WARNING: Instruction at (ram,0x000162a91cbc) overlaps instruction at (ram,0x000162a91cbb)
    */
/* WARNING: Removing unreachable block (ram,0x000162a91cbb) */
/* WARNING: Removing unreachable block (ram,0x00014dd05cb8) */

undefined8 FUN_14dd05bd2(void)

{
  undefined8 in_stack_00000010;
  
  FUN_162791c61();
  return in_stack_00000010;
}



// FUNCTION 14dd05cbe FUN_14dd05cbe body=139 status=ok
// SIG undefined FUN_14dd05cbe(void)

void FUN_14dd05cbe(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16298848c(0,FUN_16298848c,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2);
  return;
}



// FUNCTION 14dd05d49 FUN_14dd05d49 body=159 status=ok
// SIG undefined FUN_14dd05d49(void)

void FUN_14dd05d49(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined4 *)(local_res18 + -0x18) = 0x2d2593dd;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  uVar3 = *(undefined8 *)(local_res18 + -0x18);
  uVar4 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  (*(code *)&LAB_14db19885)
            (uVar4,param_2,
             ~(~(uVar2 & 0xffffffffd2da28fa) & (uVar2 | 0xffffffffd2da28fa)) + 0x1658347f8,uVar3);
  return;
}



// FUNCTION 14dd05e76 FUN_14dd05e76 body=696 status=ok
// SIG undefined FUN_14dd05e76(void)

/* WARNING: Instruction at (ram,0x00014dd05f81) overlaps instruction at (ram,0x00014dd05f80)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd05f06) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f0c) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f51) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f50) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f70) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f81) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f80) */
/* WARNING: Removing unreachable block (ram,0x00014dd05f8d) */
/* WARNING: Removing unreachable block (ram,0x00014dd06012) */
/* WARNING: Removing unreachable block (ram,0x000160c1bf5e) */
/* WARNING: Removing unreachable block (ram,0x000160c1c060) */
/* WARNING: Removing unreachable block (ram,0x000160c1c066) */
/* WARNING: Removing unreachable block (ram,0x000160c1c05b) */
/* WARNING: Removing unreachable block (ram,0x00014d7bffad) */
/* WARNING: Removing unreachable block (ram,0x00014d7bffc9) */
/* WARNING: Removing unreachable block (ram,0xb8dea3d4) */
/* WARNING: Removing unreachable block (ram,0x00014d7c003a) */
/* WARNING: Removing unreachable block (ram,0x00014d7bff6f) */
/* WARNING: Removing unreachable block (ram,0x00014dd06017) */
/* WARNING: Removing unreachable block (ram,0x00014dd0601d) */
/* WARNING: Removing unreachable block (ram,0x00014dd06022) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd05e76(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x68);
  FUN_1569570e4(param_1,unaff_RDI + ((in_RAX - (unaff_RBP | in_RAX)) + param_2) * -2,param_3);
  FUN_1650131ca();
  *(undefined8 *)((uVar1 ^ unaff_R15) - 8) = in_R10;
  uVar2 = FUN_1568fcbc9(param_1);
  return uVar2;
}



// FUNCTION 14dd061cf FUN_14dd061cf body=133 status=ok
// SIG undefined FUN_14dd061cf(void)

void FUN_14dd061cf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(in_RAX + 0x10) = param_2;
  FUN_1617607be(param_1,in_stack_00000010,param_3,param_4);
  return;
}



// FUNCTION 14dd063b3 FUN_14dd063b3 body=316 status=ok
// SIG undefined FUN_14dd063b3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd06447) */
/* WARNING: Removing unreachable block (ram,0x00014dd0644d) */
/* WARNING: Removing unreachable block (ram,0x000160e49a21) */

void FUN_14dd063b3(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R15;
  undefined8 uStack0000000000000028;
  
  uVar1 = ~((unaff_RDI ^ 0xffffffffffffffff) & param_2) | *(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15;
  *(ulonglong *)(in_R11 + 8) =
       ~((*(longlong *)(in_R11 + 8) - (uVar1 | *(ulonglong *)(in_R11 + 8))) + uVar1);
  uStack0000000000000028 = param_3;
  FUN_160e49a21();
  return;
}



// FUNCTION 14dd06579 FUN_14dd06579 body=485 status=ok
// SIG undefined FUN_14dd06579(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0664f) */
/* WARNING: Removing unreachable block (ram,0x00014dd06671) */
/* WARNING: Removing unreachable block (ram,0x00014dd066b2) */

void FUN_14dd06579(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = FUN_14de628d3(param_1,param_2);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  FUN_156e3a08b(*(ulonglong *)(unaff_R12 + -0x60) + uVar2 +
                ~(~*(ulonglong *)(unaff_R12 + -0x60) | ~uVar2) * -2,8,uVar1,
                (~uVar1 | 0xffffffffffffffff - uVar2) & (uVar1 | uVar2));
  return;
}



// FUNCTION 14dd06765 FUN_14dd06765 body=144 status=ok
// SIG undefined FUN_14dd06765(void)

void FUN_14dd06765(void)

{
  return;
}



// FUNCTION 14dd067f8 FUN_14dd067f8 body=300 status=ok
// SIG undefined FUN_14dd067f8(void)

/* WARNING: Instruction at (ram,0x000156e1bcad) overlaps instruction at (ram,0x000156e1bcac)
    */
/* WARNING: Removing unreachable block (ram,0x00015b621f4b) */
/* WARNING: Removing unreachable block (ram,0x00015b621f51) */
/* WARNING: Removing unreachable block (ram,0x00014dd06a53) */
/* WARNING: Removing unreachable block (ram,0x00014dd06abc) */
/* WARNING: Removing unreachable block (ram,0x00014dd06ac2) */
/* WARNING: Removing unreachable block (ram,0x00016575e12a) */
/* WARNING: Removing unreachable block (ram,0x00016575e130) */
/* WARNING: Removing unreachable block (ram,0x00016575e1b1) */
/* WARNING: Removing unreachable block (ram,0x00016575e1b6) */
/* WARNING: Removing unreachable block (ram,0x00016575e1bc) */
/* WARNING: Removing unreachable block (ram,0x00014dc949cd) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a11) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a0c) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a14) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a4e) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a5a) */
/* WARNING: Removing unreachable block (ram,0x000156e1bc94) */
/* WARNING: Removing unreachable block (ram,0x000156e1bcad) */
/* WARNING: Removing unreachable block (ram,0x000156e1bcac) */
/* WARNING: Removing unreachable block (ram,0x000156f83234) */
/* WARNING: Removing unreachable block (ram,0x00014dd06926) */

void FUN_14dd067f8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined1 auStack_22fc [8876];
  ulonglong uStack_50;
  
  FUN_156837354(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x70) & param_1) < 0) {
    FUN_16575e099();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uStack_50 = *(ulonglong *)(unaff_RDI + -0x48) ^ param_1;
  if ((undefined1 *)0xffffffffffffdd43 < auStack_22fc) {
    FUN_1571511ea(param_1,uVar1);
    return;
  }
  FUN_1571511ea(param_1,uVar1);
  return;
}



// FUNCTION 14dd06926 FUN_14dd06926 body=561 status=ok
// SIG undefined FUN_14dd06926(void)

/* WARNING: Removing unreachable block (ram,0x00014dd06a53) */
/* WARNING: Removing unreachable block (ram,0x00014dd06abc) */
/* WARNING: Removing unreachable block (ram,0x00014dd06ac2) */
/* WARNING: Removing unreachable block (ram,0x00015b621f4b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd06926(void)

{
  longlong unaff_R13;
  
  FUN_156d3c837();
  FUN_165c480f6();
  FUN_1626b1cbd(*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14dd06dee FUN_14dd06dee body=119 status=ok
// SIG undefined FUN_14dd06dee(void)

void FUN_14dd06dee(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong *unaff_R13;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = (~(uVar1 & param_1) + param_1) - *unaff_R13;
  *unaff_R13 = (~(~unaff_RBX & ~*unaff_R13) + ~*unaff_R13) - unaff_RBX;
  return;
}



// FUNCTION 14dd06e67 FUN_14dd06e67 body=22 status=ok
// SIG undefined FUN_14dd06e67(void)

void FUN_14dd06e67(void)

{
  return;
}



// FUNCTION 14dd06ff8 FUN_14dd06ff8 body=129 status=ok
// SIG undefined FUN_14dd06ff8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0707b) */

void FUN_14dd06ff8(void)

{
  longlong in_R9;
  
  if (in_R9 != 0) {
    FUN_164940ef8();
    return;
  }
  FUN_164940ef8();
  return;
}



// FUNCTION 14dd0707b FUN_14dd0707b body=174 status=ok
// SIG undefined FUN_14dd0707b(void)

void FUN_14dd0707b(undefined8 param_1)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  FUN_14d8dd091(param_1,0xfffffffffffffff8,*(undefined8 *)(unaff_R12 + -0x60),
                (in_RAX + -1) - ~*(ulonglong *)(unaff_R12 + -0x38));
  return;
}



// FUNCTION 14dd0730f FUN_14dd0730f body=117 status=ok
// SIG undefined FUN_14dd0730f(void)

void FUN_14dd0730f(void)

{
  return;
}



// FUNCTION 14dd07384 FUN_14dd07384 body=942 status=ok
// SIG undefined FUN_14dd07384(void)

/* WARNING: Removing unreachable block (ram,0x00014dd074d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd074dc) */
/* WARNING: Removing unreachable block (ram,0x00014dd07573) */
/* WARNING: Removing unreachable block (ram,0x00014dd07579) */
/* WARNING: Removing unreachable block (ram,0x00014dd075fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd07602) */
/* WARNING: Removing unreachable block (ram,0x0001617fd6f5) */
/* WARNING: Removing unreachable block (ram,0x00016104e5b1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd07384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort unaff_BP;
  longlong unaff_R13;
  ushort uVar2;
  ulonglong unaff_R15;
  byte in_AF;
  
  uVar2 = unaff_BP ^ 0xffff;
  if ((int)(((uint)((short)uVar2 < 0) * 0x80 | (uint)(uVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10
            | (uint)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4) << 0x18) < 0) {
    FUN_16186aeb3();
    return;
  }
  if ((short)uVar2 < 0) {
    if (-1 < (longlong)
             (0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15))) {
      return;
    }
    return;
  }
  uVar1 = ~(ushort)param_3;
  uVar2 = ~(~((uVar2 - (uVar1 | uVar2)) + uVar1) & ~(ushort)param_3);
  if (!CARRY2(uVar2,unaff_BP)) {
    FUN_14dd785e0();
    return;
  }
  if (!CARRY2(uVar2,unaff_BP) && (ushort)(uVar2 + unaff_BP) != 0) {
    return;
  }
  FUN_15b07f203(param_1,param_2,param_3,FUN_15b07f203);
  return;
}



// FUNCTION 14dd07602 FUN_14dd07602 body=137 status=ok
// SIG undefined FUN_14dd07602(void)

void FUN_14dd07602(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  
  FUN_162d968a7(param_1,param_2,unaff_RSI | param_2);
  return;
}



// FUNCTION 14dd0768b FUN_14dd0768b body=182 status=ok
// SIG undefined FUN_14dd0768b(void)

void FUN_14dd0768b(void)

{
  return;
}



// FUNCTION 14dd0784d FUN_14dd0784d body=123 status=ok
// SIG undefined FUN_14dd0784d(void)

void FUN_14dd0784d(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1665063a7(param_1,param_2,unaff_retaddr,&stack0xfffffffffffffff0);
  return;
}



// FUNCTION 14dd078c8 FUN_14dd078c8 body=206 status=ok
// SIG undefined FUN_14dd078c8(void)

void FUN_14dd078c8(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_16494ccc0(param_1,~param_1,
                (-~param_1 - (~param_3 + 2)) + ((param_1 - (param_3 | param_1)) + param_3) * -2);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd079f3 FUN_14dd079f3 body=15 status=ok
// SIG undefined FUN_14dd079f3(void)

void FUN_14dd079f3(void)

{
  return;
}



// FUNCTION 14dd07a8e FUN_14dd07a8e body=758 status=ok
// SIG undefined FUN_14dd07a8e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001617d6ef0) */
/* WARNING: Removing unreachable block (ram,0x0001617d6efb) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2fca) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2fbe) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2fcc) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2fd1) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2fd3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2ffb) */
/* WARNING: Removing unreachable block (ram,0x00014d7c304c) */
/* WARNING: Removing unreachable block (ram,0x0001617d6e50) */
/* WARNING: Removing unreachable block (ram,0x0001617d6e56) */
/* WARNING: Removing unreachable block (ram,0x0001617d6e5b) */
/* WARNING: Removing unreachable block (ram,0x000162d8b37f) */
/* WARNING: Removing unreachable block (ram,0x0001617d6ef6) */
/* WARNING: Removing unreachable block (ram,0x00014dacb310) */
/* WARNING: Removing unreachable block (ram,0x00014dacb316) */
/* WARNING: Removing unreachable block (ram,0x00014dd07b2f) */
/* WARNING: Removing unreachable block (ram,0x00014dd07b46) */
/* WARNING: Removing unreachable block (ram,0x00014dd07b4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd07b9d) */
/* WARNING: Removing unreachable block (ram,0x00016683fe73) */
/* WARNING: Removing unreachable block (ram,0x00016683fe87) */
/* WARNING: Removing unreachable block (ram,0x00016683fe92) */
/* WARNING: Removing unreachable block (ram,0x00016683fec8) */
/* WARNING: Removing unreachable block (ram,0x000160b60af7) */
/* WARNING: Removing unreachable block (ram,0x000160b60b2c) */
/* WARNING: Removing unreachable block (ram,0x000160b60b32) */
/* WARNING: Removing unreachable block (ram,0x00014dacb1fe) */
/* WARNING: Removing unreachable block (ram,0x00014dacb211) */
/* WARNING: Removing unreachable block (ram,0x00014dacb23f) */
/* WARNING: Removing unreachable block (ram,0x00014dacb23a) */
/* WARNING: Removing unreachable block (ram,0x00014dacb26b) */
/* WARNING: Removing unreachable block (ram,0x00015b3e89a8) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8a35) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8a3b) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8ad4) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8ad9) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8ae4) */
/* WARNING: Removing unreachable block (ram,0x00015b3e8adf) */
/* WARNING: Removing unreachable block (ram,0x0001617d6db1) */
/* WARNING: Removing unreachable block (ram,0x00014dacb266) */
/* WARNING: Removing unreachable block (ram,0x000160b60b38) */

undefined8 FUN_14dd07a8e(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_R14;
  ulonglong uVar4;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar4 = 0xffffffffffffffff - (local_res10 & param_1) & (local_res10 | param_1);
  param_1 = local_res20 ^ param_1;
  *(ulonglong *)(param_1 - 8) = ~param_3;
  *(ulonglong *)(param_1 - 0x10) = uVar4;
  *(ulonglong *)(param_1 - 0x18) = uVar4;
  lVar2 = *(longlong *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = unaff_R14;
  *(undefined4 *)(param_1 - 0x28) = 0x2ace4eae;
  *(undefined4 *)(param_1 - 0x24) = 0;
  uVar4 = *(longlong *)(param_1 - 0x28) + 0x59a28edU ^ 0x30687793;
  *(undefined8 *)((param_1 - 0x18) + uVar4) = 0;
  plVar1 = (longlong *)((param_1 - 0x18) + uVar4);
  *plVar1 = *plVar1 + lVar2;
  uVar3 = FUN_166c191c3(FUN_166c191c3,param_2,local_res8);
  return uVar3;
}



// FUNCTION 14dd07bda FUN_14dd07bda body=304 status=ok
// SIG undefined FUN_14dd07bda(void)

void FUN_14dd07bda(void)

{
  FUN_16235b1bc();
  FUN_16133b0be();
  return;
}



// FUNCTION 14dd07da1 FUN_14dd07da1 body=5 status=ok
// SIG undefined FUN_14dd07da1(void)

void FUN_14dd07da1(void)

{
  return;
}



// FUNCTION 14dd07e88 FUN_14dd07e88 body=169 status=ok
// SIG undefined FUN_14dd07e88(void)

void FUN_14dd07e88(void)

{
  int in_stack_00000040;
  
  if (in_stack_00000040 < 0) {
    return;
  }
  FUN_1610026c0();
  return;
}



// FUNCTION 14dd07f33 FUN_14dd07f33 body=142 status=ok
// SIG undefined FUN_14dd07f33(void)

void FUN_14dd07f33(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  ushort in_AX;
  ushort *unaff_RBX;
  undefined8 unaff_RBP;
  short unaff_R14W;
  longlong in_stack_00000008;
  undefined8 uStackX_18;
  longlong in_stack_00000038;
  
  *unaff_RBX = -~*unaff_RBX - (~(unaff_R14W + (~in_AX | ~param_3)) + 2);
  *(undefined8 *)(in_stack_00000038 + -8) = 0;
  *(longlong *)(in_stack_00000038 + -8) = *(longlong *)(in_stack_00000038 + -8) + in_stack_00000008;
  *(undefined8 *)(in_stack_00000038 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000038 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000038 + -0x20) = uStackX_18;
  FUN_14d8ba4f1(param_1,param_2,0x34fb325);
  return;
}



// FUNCTION 14dd07fc2 FUN_14dd07fc2 body=15 status=ok
// SIG undefined FUN_14dd07fc2(void)

void FUN_14dd07fc2(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd07fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd08179 FUN_14dd08179 body=143 status=ok
// SIG undefined FUN_14dd08179(void)

void FUN_14dd08179(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  (*(code *)&LAB_1627e0a76)(local_res10,param_2,param_3);
  return;
}



// FUNCTION 14dd08297 thunk_FUN_14dd0829d body=5 status=ok
// SIG undefined thunk_FUN_14dd0829d(void)

void thunk_FUN_14dd0829d(void)

{
  FUN_15b4c951b();
  return;
}



// FUNCTION 14dd0829d FUN_14dd0829d body=162 status=ok
// SIG undefined FUN_14dd0829d(void)

void FUN_14dd0829d(void)

{
  FUN_15b4c951b();
  return;
}



// FUNCTION 14dd083c0 FUN_14dd083c0 body=153 status=ok
// SIG undefined FUN_14dd083c0(void)

/* WARNING: Removing unreachable block (ram,0x0001623c5467) */
/* WARNING: Removing unreachable block (ram,0x0001623c546d) */
/* WARNING: Removing unreachable block (ram,0x00014dd08434) */
/* WARNING: Removing unreachable block (ram,0x000160d75438) */
/* WARNING: Removing unreachable block (ram,0x00014dd08501) */
/* WARNING: Removing unreachable block (ram,0x00014dd08507) */
/* WARNING: Removing unreachable block (ram,0x00015b8b9ef2) */
/* WARNING: Removing unreachable block (ram,0x00014dd08581) */
/* WARNING: Removing unreachable block (ram,0x00014dd08587) */
/* WARNING: Removing unreachable block (ram,0x00014dd0858c) */
/* WARNING: Removing unreachable block (ram,0x00014dd085fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd08604) */
/* WARNING: Removing unreachable block (ram,0x00014dd086a4) */
/* WARNING: Removing unreachable block (ram,0x00014dd086a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd086af) */
/* WARNING: Removing unreachable block (ram,0x00014dd086ba) */
/* WARNING: Removing unreachable block (ram,0x000160d753d6) */
/* WARNING: Removing unreachable block (ram,0x00016122b145) */
/* WARNING: Removing unreachable block (ram,0x000160d7542d) */
/* WARNING: Removing unreachable block (ram,0x000160d75433) */
/* WARNING: Removing unreachable block (ram,0x000161d26755) */
/* WARNING: Removing unreachable block (ram,0x000161d2670a) */
/* WARNING: Removing unreachable block (ram,0x00014dd0845a) */

undefined8 FUN_14dd083c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  short unaff_retaddr;
  undefined8 uStackX_10;
  
  if (*(ulonglong *)(unaff_R13 + -0x60) != 0) {
    uVar1 = FUN_161d26670((short)param_3 +
                          (unaff_retaddr + (short)*(undefined8 *)(unaff_R13 + -0x80) ^
                          (ushort)unaff_R15) + -0x339f,param_2,param_3 - uStackX_10);
    return uVar1;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  if (-1 < (longlong)uVar2) {
    uVar1 = FUN_1623c53d6(0xffffffffffffff78);
    return uVar1;
  }
  uVar1 = FUN_156d6d417((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                        (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15) ^ 0xffffffffffffffff,
                        *(undefined8 *)(unaff_R13 + -0x28),
                        *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 + uVar2 * -2,
                        (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) & ~unaff_R15 + unaff_R15 ^
                        0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14dd0845a FUN_14dd0845a body=609 status=ok
// SIG undefined FUN_14dd0845a(void)

/* WARNING: Removing unreachable block (ram,0x000160d75438) */
/* WARNING: Removing unreachable block (ram,0x00014dd08501) */
/* WARNING: Removing unreachable block (ram,0x00014dd08507) */
/* WARNING: Removing unreachable block (ram,0x00015b8b9ef2) */
/* WARNING: Removing unreachable block (ram,0x00014dd08581) */
/* WARNING: Removing unreachable block (ram,0x00014dd08587) */
/* WARNING: Removing unreachable block (ram,0x00014dd0858c) */
/* WARNING: Removing unreachable block (ram,0x000160d753d6) */
/* WARNING: Removing unreachable block (ram,0x00016122b145) */
/* WARNING: Removing unreachable block (ram,0x000160d7542d) */
/* WARNING: Removing unreachable block (ram,0x000160d75433) */
/* WARNING: Removing unreachable block (ram,0x00014dd085fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd08604) */
/* WARNING: Removing unreachable block (ram,0x00014dd086a4) */
/* WARNING: Removing unreachable block (ram,0x00014dd086a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd086af) */
/* WARNING: Removing unreachable block (ram,0x00014dd086ba) */

undefined8 FUN_14dd0845a(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  uVar1 = FUN_162944cdf(local_res8,~(*(ulonglong *)(unaff_RDI + -0x50) ^ local_res8),
                        *(ulonglong *)(unaff_RDI + -0x70) + local_res8 +
                        (*(ulonglong *)(unaff_RDI + -0x70) & local_res8) * -2,
                        -1 - ((local_res8 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x60))
                             & (~*(ulonglong *)(unaff_RDI + -0x60) | local_res8)));
  return uVar1;
}



// FUNCTION 14dd0885a FUN_14dd0885a body=254 status=ok
// SIG undefined FUN_14dd0885a(void)

/* WARNING: Instruction at (ram,0x000162d71976) overlaps instruction at (ram,0x000162d71975)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000162f63021) */
/* WARNING: Removing unreachable block (ram,0x000162f63027) */
/* WARNING: Removing unreachable block (ram,0x000162f6302e) */
/* WARNING: Removing unreachable block (ram,0x000162f6302f) */
/* WARNING: Removing unreachable block (ram,0x00014dd089ef) */
/* WARNING: Removing unreachable block (ram,0x00014dd089f5) */
/* WARNING: Removing unreachable block (ram,0x000162eed8a2) */
/* WARNING: Removing unreachable block (ram,0x000162eed8a8) */
/* WARNING: Removing unreachable block (ram,0x000160ee4e3e) */
/* WARNING: Removing unreachable block (ram,0x000160ee4e52) */
/* WARNING: Removing unreachable block (ram,0x000160ee4e5a) */
/* WARNING: Removing unreachable block (ram,0x00014dd0894d) */
/* WARNING: Removing unreachable block (ram,0x00014dd08958) */
/* WARNING: Removing unreachable block (ram,0x000160f87231) */
/* WARNING: Removing unreachable block (ram,0x000162d7195f) */
/* WARNING: Removing unreachable block (ram,0x000162d71975) */
/* WARNING: Removing unreachable block (ram,0x000162d71976) */
/* WARNING: Removing unreachable block (ram,0x000162d71a33) */
/* WARNING: Removing unreachable block (ram,0x000162d71a47) */
/* WARNING: Removing unreachable block (ram,0x000162d71a50) */
/* WARNING: Removing unreachable block (ram,0x000162d71a54) */
/* WARNING: Removing unreachable block (ram,0x000162d71aec) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d7e942f) */
/* WARNING: Removing unreachable block (ram,0x000162d71a41) */
/* WARNING: Removing unreachable block (ram,0x000162d71a20) */
/* WARNING: Removing unreachable block (ram,0x00014dd763f6) */
/* WARNING: Removing unreachable block (ram,0x00014dfd2bde) */
/* WARNING: Removing unreachable block (ram,0x00014dd764a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd764b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd764ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd08953) */
/* WARNING: Removing unreachable block (ram,0x00014dd088b6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000160ee4dd4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd0885a(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ushort in_R9W;
  
  if ((in_R9W & 0x100) == 0) {
    uVar1 = FUN_162f62f80();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dd08958 FUN_14dd08958 body=465 status=ok
// SIG undefined FUN_14dd08958(void)

/* WARNING: Removing unreachable block (ram,0x00014dd089ef) */
/* WARNING: Removing unreachable block (ram,0x00014dd089f5) */

void FUN_14dd08958(undefined8 param_1,undefined8 param_2)

{
  FUN_166db875f(param_1,param_2);
  FUN_166cb269a();
  FUN_166011c0d();
  return;
}



// FUNCTION 14dd08cf5 FUN_14dd08cf5 body=152 status=ok
// SIG undefined FUN_14dd08cf5(void)

void FUN_14dd08cf5(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_15708e93f(*(longlong *)(unaff_R13 + -0x48) + unaff_R15,*(longlong *)(unaff_R13 + -0x48),
                unaff_RSI + ~param_3 * -2);
  return;
}



// FUNCTION 14dd08d8e FUN_14dd08d8e body=147 status=ok
// SIG undefined FUN_14dd08d8e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd08e21) */
/* WARNING: Removing unreachable block (ram,0x0001621236dc) */

void FUN_14dd08d8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort *unaff_RBX;
  ushort unaff_BP;
  undefined8 local_res18;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX + (-~uVar1 - ((unaff_BP ^ 0xffff) + 2));
  *(undefined8 *)(param_5 + -8) = local_res18;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_4;
  *(undefined8 *)(param_5 + -0x10) = param_1;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  FUN_1621236dc();
  return;
}



// FUNCTION 14dd08e21 FUN_14dd08e21 body=148 status=ok
// SIG undefined FUN_14dd08e21(void)

void FUN_14dd08e21(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_RBP;
  undefined8 in_R10;
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
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  bVar10 = (local_res8 & 0x4000) != 0;
  bVar9 = (local_res8 & 0x800) != 0;
  bVar8 = (local_res8 & 0x200) != 0;
  bVar7 = 0;
  bVar6 = (local_res8 & 0x80) != 0;
  bVar5 = (local_res8 & 0x40) != 0;
  bVar4 = (local_res8 & 0x10) != 0;
  bVar3 = (local_res8 & 4) != 0;
  bVar2 = (local_res8 & 1) != 0;
  bVar14 = (uStackX_a & 0x20) != 0;
  bVar11 = (uStackX_a & 4) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr,param_2);
  *local_res10 = param_3;
  local_res10[-1] = param_3;
  local_res10[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  local_res10[-3] = 0x111b281c;
  local_res10[-3] = local_res10[-3] + -0xc780326;
  uVar15 = local_res10[-2];
  local_res10[-2] = unaff_RBP;
  local_res10[-3] = in_R10;
  local_res10[-4] =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  FUN_161cd4d16();
  return;
}



// FUNCTION 14dd08eb5 FUN_14dd08eb5 body=143 status=ok
// SIG undefined FUN_14dd08eb5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd08fd9) */

void FUN_14dd08eb5(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_15b279422();
  if (~(*(ulonglong *)(unaff_R12 + -0x90) & uVar1) + uVar1 < ~*(ulonglong *)(unaff_R12 + -0x90)) {
    FUN_162481245();
    return;
  }
  return;
}



// FUNCTION 14dd08f46 FUN_14dd08f46 body=293 status=ok
// SIG undefined FUN_14dd08f46(void)

/* WARNING: Removing unreachable block (ram,0x00014dd08fd9) */

void FUN_14dd08f46(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (~(*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) + in_RAX < ~*(ulonglong *)(unaff_R12 + -0x90)) {
    FUN_162481245();
    return;
  }
  return;
}



// FUNCTION 14dd09266 FUN_14dd09266 body=172 status=ok
// SIG undefined FUN_14dd09266(void)

/* WARNING: Removing unreachable block (ram,0x00014dd09303) */

void FUN_14dd09266(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = -(param_2 - *(longlong *)(unaff_R13 + unaff_RDI));
  uVar2 = ~uVar1;
  if (&DAT_00000007 < &stack0x00000000) {
    FUN_161e3fe18();
    return;
  }
  FUN_166ccc813(param_1,(~unaff_R15 | uVar1) & (uVar2 + unaff_R15) - (uVar2 & unaff_R15) ^
                        0xffffffffffffffff,param_3);
  return;
}



// FUNCTION 14dd09589 FUN_14dd09589 body=162 status=ok
// SIG undefined FUN_14dd09589(void)

void FUN_14dd09589(void)

{
  return;
}



// FUNCTION 14dd09a99 FUN_14dd09a99 body=105 status=ok
// SIG undefined FUN_14dd09a99(void)

void FUN_14dd09a99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd09b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14dd09b25 FUN_14dd09b25 body=444 status=ok
// SIG undefined FUN_14dd09b25(void)

/* WARNING: Removing unreachable block (ram,0x00014dd09c83) */
/* WARNING: Removing unreachable block (ram,0x00014dd09b9b) */
/* WARNING: Removing unreachable block (ram,0x00014dd09bab) */
/* WARNING: Removing unreachable block (ram,0x00014dd09bb7) */

undefined8 FUN_14dd09b25(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd09d72 FUN_14dd09d72 body=110 status=ok
// SIG undefined FUN_14dd09d72(void)

void FUN_14dd09d72(undefined8 param_1,undefined8 param_2)

{
  FUN_15b3df340(param_1,param_2,0x1dab5145);
  return;
}



// FUNCTION 14dd09e76 FUN_14dd09e76 body=132 status=ok
// SIG undefined FUN_14dd09e76(void)

void FUN_14dd09e76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  FUN_162d9214e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd09f03 FUN_14dd09f03 body=465 status=ok
// SIG undefined FUN_14dd09f03(void)

/* WARNING: Removing unreachable block (ram,0x00014dd09f90) */

void FUN_14dd09f03(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  longlong in_stack_00000008;
  
  *(undefined4 *)(&stack0x00000008 + (unaff_RBP ^ 0x2a3958c8)) = 0;
  uVar1 = -(in_stack_00000008 - *(longlong *)(unaff_R12 + -0x90));
  if (uVar1 + in_RAX < ~(~uVar1 | ~in_RAX) << 1) {
    thunk_FUN_164f259e5();
    return;
  }
  thunk_FUN_164f259e5();
  return;
}



// FUNCTION 14dd0a0ec FUN_14dd0a0ec body=142 status=ok
// SIG undefined FUN_14dd0a0ec(void)

void FUN_14dd0a0ec(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_1660f239d)(&LAB_1660f239d,~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dd0a29c FUN_14dd0a29c body=185 status=ok
// SIG undefined FUN_14dd0a29c(void)

void FUN_14dd0a29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166a8d568(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd0a65b FUN_14dd0a65b body=134 status=ok
// SIG undefined FUN_14dd0a65b(void)

void FUN_14dd0a65b(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R15;
  undefined8 uStackX_8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | uStackX_8;
  *(ulonglong *)(unaff_R15 + 8) =
       ~((~*(ulonglong *)(unaff_R15 + 8) | param_4) + *(longlong *)(unaff_R15 + 8) + 1);
  FUN_166704c95(in_stack_00000020,param_2,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14dd0a76f FUN_14dd0a76f body=664 status=ok
// SIG undefined FUN_14dd0a76f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0a89b) */

void FUN_14dd0a76f(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0);
  pcVar3 = FUN_1565b6f15;
  FUN_1565b6f15();
  uVar1 = 0xffffffffffffffff - ((~unaff_R15 | local_res18) + unaff_R15 + 1) &
          ((local_res18 - 1) - ~unaff_retaddr | unaff_R15);
  *(code **)(uVar1 - 8) = pcVar3;
  *(ulonglong *)(uVar1 - 0x10) = uVar2 ^ unaff_R15;
  FUN_1668b0a97();
  return;
}



// FUNCTION 14dd0a9c6 FUN_14dd0a9c6 body=173 status=ok
// SIG undefined FUN_14dd0a9c6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0aa69) */
/* WARNING: Removing unreachable block (ram,0x00014dd0aa74) */
/* WARNING: Removing unreachable block (ram,0x00014dd0aa5b) */
/* WARNING: Removing unreachable block (ram,0x00014dd0aa6f) */

void FUN_14dd0a9c6(void)

{
  FUN_15b227c71();
  return;
}



// FUNCTION 14dd0aa74 FUN_14dd0aa74 body=140 status=ok
// SIG undefined FUN_14dd0aa74(void)

void FUN_14dd0aa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  short *in_RAX;
  short unaff_BX;
  undefined8 unaff_RDI;
  short unaff_R13W;
  undefined8 local_res18;
  
  *in_RAX = 0;
  *in_RAX = *in_RAX - (unaff_BX - (-1 - unaff_R13W));
  *in_RAX = -*in_RAX;
  *(undefined8 *)(param_6 + -8) = unaff_RDI;
  *(undefined8 *)(param_6 + -0x10) = local_res18;
  *(undefined8 *)(param_6 + -0x18) = local_res18;
  *(undefined8 *)(param_6 + -0x20) = param_3;
  (*(code *)0x15b336c82)(param_1,param_2,0x15b336c82);
  return;
}



// FUNCTION 14dd0acc2 FUN_14dd0acc2 body=164 status=ok
// SIG undefined FUN_14dd0acc2(void)

void FUN_14dd0acc2(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_162d51a97(FUN_162d51a97,8,0xffffffffffffffd0,~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX));
  return;
}



// FUNCTION 14dd0ad68 FUN_14dd0ad68 body=153 status=ok
// SIG undefined FUN_14dd0ad68(void)

int FUN_14dd0ad68(void)

{
  int in_EAX;
  uint in_R10D;
  
  return -~in_R10D - (1 - ~(0xfffffffeU - (-1 - in_EAX)));
}



// FUNCTION 14dd0af3b FUN_14dd0af3b body=164 status=ok
// SIG undefined FUN_14dd0af3b(void)

void FUN_14dd0af3b(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68);
  FUN_160c8e2a3(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (uVar1 + param_1) - (uVar1 & param_1)));
  return;
}



// FUNCTION 14dd0afe6 FUN_14dd0afe6 body=497 status=ok
// SIG undefined FUN_14dd0afe6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0b07c) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b082) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b183) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b189) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b1d5) */
/* WARNING: Removing unreachable block (ram,0x000161e49627) */
/* WARNING: Removing unreachable block (ram,0x0001629b1af6) */

undefined8 FUN_14dd0afe6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1629b1af6();
  return uVar1;
}



// FUNCTION 14dd0b189 FUN_14dd0b189 body=134 status=ok
// SIG undefined FUN_14dd0b189(void)

void FUN_14dd0b189(ulonglong param_1)

{
  ulonglong uVar1;
  char cVar2;
  byte in_AL;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  bool bVar3;
  bool bVar4;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  ulonglong uStackX_18;
  
  uVar1 = 0xffffffffffffffff - (uStackX_18 & param_1) & (uStackX_18 | param_1);
  LOCK();
  bVar3 = in_AL < DAT_14d7abc31;
  bVar4 = SBORROW1(in_AL,DAT_14d7abc31);
  cVar2 = in_AL - DAT_14d7abc31;
  if (cVar2 == '\0') {
    DAT_14d7abc31 = (byte)local_res8;
  }
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R13;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RSI;
  thunk_FUN_1665f995f(thunk_FUN_1665f995f);
  return;
}



// FUNCTION 14dd0b2af thunk_FUN_14dd0b2b5 body=5 status=ok
// SIG undefined thunk_FUN_14dd0b2b5(void)

void thunk_FUN_14dd0b2b5(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  undefined2 uStackX_10;
  undefined6 uStackX_12;
  undefined8 uStackX_18;
  
  uVar2 = ~((~param_1 | uStackX_18) & (~uStackX_18 | param_1));
  uVar1 = CONCAT62(uStackX_12,uStackX_10) & 0xfffffffffffffeff;
  syscall();
  *(ulonglong *)(uVar2 - 8) = uVar1;
  *(ulonglong *)(uVar2 - 0x10) = uVar1;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 8) = 0x5f090ec;
  FUN_165c7153c(0x14dd0b2ef,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd0b2b5 FUN_14dd0b2b5 body=89 status=ok
// SIG undefined FUN_14dd0b2b5(void)

void FUN_14dd0b2b5(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  uVar2 = ~((~param_1 | local_res18) & (~local_res18 | param_1));
  uVar1 = CONCAT62(uStackX_12,local_res10) & 0xfffffffffffffeff;
  syscall();
  *(ulonglong *)(uVar2 - 8) = uVar1;
  *(ulonglong *)(uVar2 - 0x10) = uVar1;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 8) = 0x5f090ec;
  FUN_165c7153c(0x14dd0b2ef,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd0b3c0 FUN_14dd0b3c0 body=292 status=ok
// SIG undefined FUN_14dd0b3c0(void)

void FUN_14dd0b3c0(undefined8 param_1)

{
  (*(code *)0x1620ce88c)(param_1,0x1620ce88c);
  return;
}



// FUNCTION 14dd0b6d4 FUN_14dd0b6d4 body=161 status=ok
// SIG undefined FUN_14dd0b6d4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc80ff3) */
/* WARNING: Removing unreachable block (ram,0x00014dd0b775) */

void FUN_14dd0b6d4(void)

{
  ulonglong in_RAX;
  ushort unaff_DI;
  longlong unaff_R12;
  ushort in_stack_00000048;
  
  if ((longlong)
      ((~(~*(ulonglong *)(unaff_R12 + -0x70) & ~in_RAX) + ~in_RAX) -
      *(ulonglong *)(unaff_R12 + -0x70)) < 0) {
    FUN_1620945b6(CONCAT62(0xffffffffffff,
                           ((~in_stack_00000048 & unaff_DI ^ 0xffff) + unaff_DI) - in_stack_00000048
                          ),0xffffffffffffff80,
                  -1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                       (*(ulonglong *)(unaff_R12 + -0x80) ^ 0xffffffffffffffff | in_RAX)),
                  *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
    FUN_16183db08();
    return;
  }
  FUN_14dc80f40();
  return;
}



// FUNCTION 14dd0b775 FUN_14dd0b775 body=153 status=ok
// SIG undefined FUN_14dd0b775(void)

void FUN_14dd0b775(ulonglong param_1,longlong param_2)

{
  longlong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_16697764d(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + param_1 + 1,
                *(ulonglong *)
                 (unaff_RDI +
                 ~(0xffffffffffffffffU - (param_2 + -0x412e068e + in_RAX) &
                  (unaff_RSI | 0xffffffffbed1f972))) ^ param_1);
  return;
}



// FUNCTION 14dd0b816 FUN_14dd0b816 body=183 status=ok
// SIG undefined FUN_14dd0b816(void)

void FUN_14dd0b816(void)

{
  return;
}



// FUNCTION 14dd0b8d1 FUN_14dd0b8d1 body=150 status=ok
// SIG undefined FUN_14dd0b8d1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0b958) */

void FUN_14dd0b8d1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_157436c3f(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1 |
                         ~(*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14dd0ba70 FUN_14dd0ba70 body=627 status=ok
// SIG undefined FUN_14dd0ba70(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0bb53) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bb07) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bb56) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bba1) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bba6) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bbac) */
/* WARNING: Removing unreachable block (ram,0x00016249a1be) */
/* WARNING: Removing unreachable block (ram,0x00014dd0baf7) */

void FUN_14dd0ba70(void)

{
  longlong unaff_RDI;
  undefined8 in_R9;
  
  *(undefined8 *)(&stack0x00000010 + unaff_RDI) = in_R9;
  FUN_1660c94d8();
  return;
}



// FUNCTION 14dd0bd8c FUN_14dd0bd8c body=317 status=ok
// SIG undefined FUN_14dd0bd8c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0bdbe) */
/* WARNING: Removing unreachable block (ram,0x00014dd0be39) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bf7d) */
/* WARNING: Removing unreachable block (ram,0x000156ced7b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bf89) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c024) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c029) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c02f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c034) */

void FUN_14dd0bd8c(short param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162f6baa6(param_1 + 1,*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14dd0be39 FUN_14dd0be39 body=548 status=ok
// SIG undefined FUN_14dd0be39(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0c034) */
/* WARNING: Removing unreachable block (ram,0x00014dd0bf89) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c029) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c024) */

void FUN_14dd0be39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar10;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  lVar8 = (~(local_res20 | in_RAX) | ~(local_res20 & in_RAX)) + (local_res20 | in_RAX);
  plVar1 = (longlong *)(lVar8 + -7);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBP;
  *plVar1 = -*plVar1;
  *(undefined8 *)(lVar8 + -0xf) = unaff_R15;
  *(undefined8 *)(lVar8 + -0x17) = unaff_R15;
  *(undefined8 *)(lVar8 + -0x1f) = unaff_RSI;
  puVar2 = (ulonglong *)(lVar8 + -0x27);
  *puVar2 = local_res10;
  *(undefined4 *)puVar2 = 0x3ba7a270;
  *(undefined4 *)(lVar8 + -0x23) = 0;
  *(uint *)(lVar8 + -0x23) = *(uint *)(lVar8 + -0x23) ^ 0xc616c51a;
  *(int *)(lVar8 + -0x23) = *(int *)(lVar8 + -0x23) + 0x39e93ae6;
  uVar5 = *puVar2;
  *(undefined8 *)(lVar8 + -0x27) = 0x14dd0bf01;
  uVar9 = FUN_1578a826c();
  uVar3 = *(ulonglong *)(unaff_R12 + -0x50);
  *(undefined8 *)(lVar8 + -0x27) = param_1;
  *(undefined8 *)(lVar8 + -0x2f) = param_4;
  *(undefined8 *)(lVar8 + -0x27) = *(undefined8 *)(unaff_R12 + -0x90);
  uVar10 = *(ulonglong *)(lVar8 + -0x27);
  *(undefined8 *)(lVar8 + -0x27) = unaff_R13;
  *(ulonglong *)(lVar8 + -0x2f) = ~(unaff_RDI & (uVar5 ^ 0x61f138fb) - 0x5a569a7b);
  uVar10 = ~((~(~uVar9 & uVar10) + uVar10) - (~uVar9 ^ 0xffffffffffffffff) &
            (uVar10 ^ 0xffffffffffffffff | uVar9));
  uVar6 = *(undefined8 *)(lVar8 + -0x27);
  *(undefined8 *)(lVar8 + -0x27) = param_3;
  *(undefined8 *)(lVar8 + -0x2f) = param_3;
  lVar4 = *(longlong *)(unaff_R12 + -0x68);
  *(undefined8 *)(lVar8 + -0x27) = 0;
  *(longlong *)(lVar8 + -0x27) = *(longlong *)(lVar8 + -0x27) + lVar4;
  *(undefined8 *)(lVar8 + -0x2f) = local_res8;
  *(undefined8 *)(lVar8 + -0x37) = local_res8;
  uVar5 = *(ulonglong *)(unaff_R12 + -8);
  *(undefined8 *)(lVar8 + -0x2f) = 0;
  *(ulonglong *)(lVar8 + -0x3f) = uVar3 + uVar9 + (uVar3 & uVar9) * -2;
  lVar4 = *(longlong *)(lVar8 + -0x2f);
  *(ulonglong *)(lVar8 + -0x2f) = *(ulonglong *)(lVar8 + -0x2f) & uVar5;
  *(longlong *)(lVar8 + -0x2f) = *(longlong *)(lVar8 + -0x2f) << 1;
  *(ulonglong *)(lVar8 + -0x2f) = (lVar4 + uVar5) - *(longlong *)(lVar8 + -0x2f);
  uVar7 = *(undefined8 *)(lVar8 + -0x3f);
  *(undefined8 *)(lVar8 + -0x37) = uVar6;
  *(undefined8 *)(lVar8 + -0x3f) = uVar6;
  lVar4 = *(longlong *)(unaff_R12 + -0x98);
  *(undefined8 *)(lVar8 + -0x47) = uVar7;
  *(undefined8 *)(lVar8 + -0x37) = 0x44478957;
  *(ulonglong *)(lVar8 + -0x37) = *(ulonglong *)(lVar8 + -0x37) ^ 0x44478957;
  *(longlong *)(lVar8 + -0x37) = *(longlong *)(lVar8 + -0x37) + lVar4;
  *(ulonglong *)(lVar8 + -0x4f) = uVar10;
  *(ulonglong *)(lVar8 + -0x57) = uVar10;
  *(ulonglong *)(lVar8 + -0x5f) = uVar10;
  *(code **)(lVar8 + -0x4f) = FUN_156ced876;
  *(undefined1 **)(lVar8 + -0x57) = &LAB_15b87ffd6;
  return;
}



// FUNCTION 14dd0c14d FUN_14dd0c14d body=257 status=ok
// SIG undefined FUN_14dd0c14d(void)

void FUN_14dd0c14d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1659cb394(param_1,param_2,0xffffffffe031e884,param_4);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd0c25a FUN_14dd0c25a body=53 status=ok
// SIG undefined FUN_14dd0c25a(void)

void FUN_14dd0c25a(void)

{
  return;
}



// FUNCTION 14dd0c4b7 FUN_14dd0c4b7 body=860 status=ok
// SIG undefined FUN_14dd0c4b7(void)

/* WARNING: Removing unreachable block (ram,0x00015723e656) */
/* WARNING: Removing unreachable block (ram,0x00015723e65c) */
/* WARNING: Removing unreachable block (ram,0x00014db59053) */
/* WARNING: Removing unreachable block (ram,0x00015723e6eb) */
/* WARNING: Removing unreachable block (ram,0x00015723e6f1) */
/* WARNING: Removing unreachable block (ram,0x00015723e75a) */
/* WARNING: Removing unreachable block (ram,0x00015723e75f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0c544) */

undefined8 FUN_14dd0c4b7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd0c828 FUN_14dd0c828 body=56 status=ok
// SIG undefined FUN_14dd0c828(void)

void FUN_14dd0c828(void)

{
  return;
}



// FUNCTION 14dd0c8e9 FUN_14dd0c8e9 body=14 status=ok
// SIG undefined FUN_14dd0c8e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd0c8e9(void)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x54);
  (*pcVar1)(unaff_retaddr);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd0c981 FUN_14dd0c981 body=142 status=ok
// SIG undefined FUN_14dd0c981(void)

void FUN_14dd0c981(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 in_RAX;
  longlong local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = 0x6b631a6d;
  *puVar1 = *puVar1 ^ 0x6b631a6d;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) - param_2;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  FUN_1669441e8(*(undefined8 *)(local_res10 + -0x10),FUN_1669441e8);
  return;
}



// FUNCTION 14dd0caa2 FUN_14dd0caa2 body=150 status=ok
// SIG undefined FUN_14dd0caa2(void)

void FUN_14dd0caa2(ulonglong param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  FUN_161d47a43(&DAT_0000feff,param_2,local_res18,unaff_retaddr,in_stack_00000020 ^ param_1);
  return;
}



// FUNCTION 14dd0cbc0 FUN_14dd0cbc0 body=268 status=ok
// SIG undefined FUN_14dd0cbc0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0cc46) */

undefined8 FUN_14dd0cbc0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  undefined8 uStackX_8;
  
  uVar3 = ~*(ulonglong *)(unaff_R12 + -0x80);
  lVar2 = -1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) & (uVar3 + in_RAX) - (uVar3 & in_RAX))
  ;
  if (lVar2 == 0) {
    uVar1 = FUN_1625a32c9();
    return uVar1;
  }
  FUN_15b0967bc(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX,FUN_15b0967bc,lVar2,
                ~(~(~param_4 | ~in_RAX) | 0xffffffffffffffffU - param_1));
  return uStackX_8;
}



// FUNCTION 14dd0cd70 FUN_14dd0cd70 body=154 status=ok
// SIG undefined FUN_14dd0cd70(void)

void FUN_14dd0cd70(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_162f491c4(8,(*(longlong *)(unaff_RSI + -0x58) + -1) - ~param_2 ^ unaff_RBP);
  return;
}



// FUNCTION 14dd0d07d FUN_14dd0d07d body=122 status=ok
// SIG undefined FUN_14dd0d07d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0d0c7) */

void FUN_14dd0d07d(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_stack_00000008;
  
  *(undefined4 *)(&stack0x00000008 + param_1) = 0xffffffff;
  FUN_156c303f0(0x7fdbe2fe - (~in_stack_00000008 + 2),param_2,param_3);
  return;
}



// FUNCTION 14dd0d19c FUN_14dd0d19c body=153 status=ok
// SIG undefined FUN_14dd0d19c(void)

void FUN_14dd0d19c(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res18;
  
  FUN_1575957d2(param_1,unaff_retaddr,~(~local_res18 & ~unaff_R15),local_res8);
  return;
}



// FUNCTION 14dd0d36e FUN_14dd0d36e body=324 status=ok
// SIG undefined FUN_14dd0d36e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0d40a) */
/* WARNING: Removing unreachable block (ram,0x00015689ae4d) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d410) */

void FUN_14dd0d36e(void)

{
  FUN_15689ae4d();
  return;
}



// FUNCTION 14dd0d68d FUN_14dd0d68d body=765 status=ok
// SIG undefined FUN_14dd0d68d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9c94f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9c94f6) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d737) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d73d) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d861) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d86d) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d872) */
/* WARNING: Removing unreachable block (ram,0x00014d90fd99) */
/* WARNING: Removing unreachable block (ram,0x00014d90fd9f) */
/* WARNING: Removing unreachable block (ram,0x00014d90fda4) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d7bf) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d7c5) */
/* WARNING: Removing unreachable block (ram,0x00014e24f4b5) */
/* WARNING: Removing unreachable block (ram,0x00014e0bb612) */
/* WARNING: Removing unreachable block (ram,0x00014e24f535) */
/* WARNING: Removing unreachable block (ram,0x00014e24f53b) */
/* WARNING: Removing unreachable block (ram,0x00014e24f540) */
/* WARNING: Removing unreachable block (ram,0x00014e24f5eb) */
/* WARNING: Removing unreachable block (ram,0x00014e24f5f0) */
/* WARNING: Removing unreachable block (ram,0x00014e24f5f6) */
/* WARNING: Removing unreachable block (ram,0x00014e24f5fb) */
/* WARNING: Removing unreachable block (ram,0x000162d049ab) */
/* WARNING: Removing unreachable block (ram,0x00014e24f688) */
/* WARNING: Removing unreachable block (ram,0x00014e24f68e) */
/* WARNING: Removing unreachable block (ram,0x00014e24f693) */
/* WARNING: Removing unreachable block (ram,0x00014d9c93c4) */
/* WARNING: Removing unreachable block (ram,0x00014d9c943a) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9440) */
/* WARNING: Removing unreachable block (ram,0x00014d9c94eb) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7129) */
/* WARNING: Removing unreachable block (ram,0x000165cfa74a) */
/* WARNING: Removing unreachable block (ram,0x000165cfa7ed) */
/* WARNING: Removing unreachable block (ram,0x000165cfa7f3) */
/* WARNING: Removing unreachable block (ram,0x000156425c43) */
/* WARNING: Removing unreachable block (ram,0x000156425cc5) */
/* WARNING: Removing unreachable block (ram,0x000156425ccb) */
/* WARNING: Removing unreachable block (ram,0x0001651eebef) */
/* WARNING: Removing unreachable block (ram,0x00014e24f720) */
/* WARNING: Removing unreachable block (ram,0x00014e24f726) */
/* WARNING: Removing unreachable block (ram,0x00014e24f72b) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d851) */
/* WARNING: Removing unreachable block (ram,0x00014dd0d855) */
/* WARNING: Removing unreachable block (ram,0x0001618a6b46) */
/* WARNING: Removing unreachable block (ram,0x0001618a6bcf) */
/* WARNING: Removing unreachable block (ram,0x0001618a6bd5) */
/* WARNING: Removing unreachable block (ram,0x0001618a6bda) */
/* WARNING: Removing unreachable block (ram,0x00014d90fd02) */
/* WARNING: Removing unreachable block (ram,0x00014d90fd94) */
/* WARNING: Removing unreachable block (ram,0x000165ddf0d4) */

undefined8 FUN_14dd0d68d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165ddf0d4();
  return uVar1;
}



// FUNCTION 14dd0d904 thunk_FUN_14dd0d90a body=5 status=ok
// SIG undefined thunk_FUN_14dd0d90a(void)

/* WARNING: Removing unreachable block (ram,0x0001628bb01a) */
/* WARNING: Removing unreachable block (ram,0x0001628bafff) */
/* WARNING: Removing unreachable block (ram,0x000164ee894f) */
/* WARNING: Removing unreachable block (ram,0x0001628bb036) */

longlong thunk_FUN_14dd0d90a(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 unaff_retaddr;
  longlong lStackX_10;
  
  param_2 = param_2 | 0xfffffff8;
  if (param_2 == 0xfffffff8) {
    lVar1 = FUN_1628bafe4();
    return lVar1;
  }
  if (param_2 == 0xfffffff9) {
    lVar1 = FUN_156ead624(unaff_retaddr);
    return lVar1;
  }
  if (param_2 == 0xfffffffa) {
    return lStackX_10 << 1;
  }
  if (param_2 == 0xfffffffb) {
    lVar1 = FUN_1614bf912();
    return lVar1;
  }
  if (param_2 == 0xfffffffc) {
    lVar1 = thunk_FUN_16163474d();
    return lVar1;
  }
  lVar1 = FUN_1619ab390();
  return lVar1;
}



// FUNCTION 14dd0d90a FUN_14dd0d90a body=296 status=ok
// SIG undefined FUN_14dd0d90a(void)

/* WARNING: Removing unreachable block (ram,0x0001628bb01a) */
/* WARNING: Removing unreachable block (ram,0x0001628bafff) */
/* WARNING: Removing unreachable block (ram,0x000164ee894f) */
/* WARNING: Removing unreachable block (ram,0x0001628bb036) */

longlong FUN_14dd0d90a(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  param_2 = param_2 | 0xfffffff8;
  if (param_2 == 0xfffffff8) {
    lVar1 = FUN_1628bafe4();
    return lVar1;
  }
  if (param_2 == 0xfffffff9) {
    lVar1 = FUN_156ead624(unaff_retaddr);
    return lVar1;
  }
  if (param_2 == 0xfffffffa) {
    return local_res10 << 1;
  }
  if (param_2 == 0xfffffffb) {
    lVar1 = FUN_1614bf912();
    return lVar1;
  }
  if (param_2 == 0xfffffffc) {
    lVar1 = thunk_FUN_16163474d();
    return lVar1;
  }
  lVar1 = FUN_1619ab390();
  return lVar1;
}



// FUNCTION 14dd0d975 FUN_14dd0d975 body=155 status=ok
// SIG undefined FUN_14dd0d975(void)

void FUN_14dd0d975(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15781a02b)(0x15781a02b,param_2,param_3);
  return;
}



// FUNCTION 14dd0da90 FUN_14dd0da90 body=316 status=ok
// SIG undefined FUN_14dd0da90(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0db2b) */
/* WARNING: Removing unreachable block (ram,0x00014dd0db31) */

void FUN_14dd0da90(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_156d0eb3b(*(ulonglong *)(param_2 + -0x48) + in_R10 +
                (*(ulonglong *)(param_2 + -0x48) & in_R10) * -2,param_2,
                ~((~in_R10 | *(ulonglong *)(param_2 + -0x88)) &
                 (~*(ulonglong *)(param_2 + -0x88) | in_R10)));
  return;
}



// FUNCTION 14dd0dcff FUN_14dd0dcff body=122 status=ok
// SIG undefined FUN_14dd0dcff(void)

void FUN_14dd0dcff(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_res8;
  
  (*(code *)0x1623cc56a)(0xe8,param_2,param_3,*(longlong *)(local_res8 + -0x88) + param_1);
  return;
}



// FUNCTION 14dd0de0f thunk_FUN_14dd0de15 body=5 status=ok
// SIG undefined thunk_FUN_14dd0de15(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0de7c) */

void thunk_FUN_14dd0de15(undefined8 param_1,longlong param_2)

{
  short *unaff_RBP;
  undefined8 unaff_RDI;
  longlong lStackX_18;
  
  *unaff_RBP = -*unaff_RBP;
  *(undefined8 *)(lStackX_18 + -8) = 0;
  *(longlong *)(lStackX_18 + -8) = *(longlong *)(lStackX_18 + -8) + param_2;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -8) = 0x69ccbf49;
  *(ulonglong *)(lStackX_18 + -8) = *(ulonglong *)(lStackX_18 + -8) ^ 0x69ccbf49;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RDI;
  *(longlong *)(lStackX_18 + -8) = *(longlong *)(lStackX_18 + -8) + -0x162ec6b92;
  *(longlong *)(lStackX_18 + -8) = -*(longlong *)(lStackX_18 + -8);
  FUN_162ec6b6d(param_1,FUN_162ec6b6d);
  return;
}



// FUNCTION 14dd0de15 FUN_14dd0de15 body=128 status=ok
// SIG undefined FUN_14dd0de15(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0de7c) */

void FUN_14dd0de15(undefined8 param_1,longlong param_2)

{
  short *unaff_RBP;
  undefined8 unaff_RDI;
  longlong local_res18;
  
  *unaff_RBP = -*unaff_RBP;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x69ccbf49;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x69ccbf49;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x162ec6b92;
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
  FUN_162ec6b6d(param_1,FUN_162ec6b6d);
  return;
}



// FUNCTION 14dd0e059 FUN_14dd0e059 body=372 status=ok
// SIG undefined FUN_14dd0e059(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd0e232) overlaps instruction at (ram,0x00014dd0e22f)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd0e14e) */
/* WARNING: Removing unreachable block (ram,0x00014dd0e154) */
/* WARNING: Removing unreachable block (ram,0x00014dd0e22f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0e232) */

undefined8 FUN_14dd0e059(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  FUN_161779895(0,param_2,param_3,local_res8);
  FUN_161556992(0x19441325,0x52b32bc1,param_3);
  uVar1 = FUN_15b90c807();
  return uVar1;
}



// FUNCTION 14dd0e154 FUN_14dd0e154 body=225 status=ok
// SIG undefined FUN_14dd0e154(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd0e232) overlaps instruction at (ram,0x00014dd0e22f)
    */

undefined1 * FUN_14dd0e154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 unaff_EDI;
  undefined8 unaff_retaddr;
  
  FUN_14d977f5e(param_1,param_2,param_3,unaff_retaddr);
  if (CONCAT44(0xffffffff,unaff_EDI) == 0x3051cd2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return &DAT_b85a4d9b5869ffff;
}



// FUNCTION 14dd0e333 FUN_14dd0e333 body=119 status=ok
// SIG undefined FUN_14dd0e333(void)

void FUN_14dd0e333(ulonglong param_1)

{
  ulonglong in_stack_00000008;
  
  FUN_165618796(in_stack_00000008 ^ param_1);
  return;
}



// FUNCTION 14dd0e573 FUN_14dd0e573 body=168 status=ok
// SIG undefined FUN_14dd0e573(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0e5b1) */

void FUN_14dd0e573(undefined8 param_1)

{
  undefined4 local_res8;
  undefined8 local_8;
  
  local_8 = (ulonglong)local_res8;
  if ((int)local_res8 < 0) {
    local_8 = CONCAT44(0xffffffff,local_res8);
  }
  FUN_166b4ee83(param_1,0x655e6c88,local_8);
  return;
}



// FUNCTION 14dd0e61c FUN_14dd0e61c body=163 status=ok
// SIG undefined FUN_14dd0e61c(void)

void FUN_14dd0e61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b374db3(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd0e7d9 FUN_14dd0e7d9 body=170 status=ok
// SIG undefined FUN_14dd0e7d9(void)

/* WARNING: Removing unreachable block (ram,0x00014db36b4d) */
/* WARNING: Removing unreachable block (ram,0x00014db36b53) */
/* WARNING: Removing unreachable block (ram,0x00014dd0e884) */
/* WARNING: Removing unreachable block (ram,0x00014dd0e879) */
/* WARNING: Removing unreachable block (ram,0x000165b29e87) */

void FUN_14dd0e7d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack000000000000011c;
  
  uStack000000000000011c = 0x6761726f;
  uVar1 = 4;
  FUN_15b0c6281();
  FUN_1669652f8(FUN_1669652f8,uVar1,param_3,param_4);
  return;
}



// FUNCTION 14dd0e884 FUN_14dd0e884 body=292 status=ok
// SIG undefined FUN_14dd0e884(void)

void FUN_14dd0e884(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  plVar2 = (longlong *)(param_5 ^ unaff_R15);
  plVar1 = plVar2 + -1;
  plVar2[-2] = unaff_R13;
  plVar2[-3] = 0;
  *plVar1 = plVar2[-3];
  lVar5 = plVar2[-2];
  *plVar1 = *plVar1 - unaff_RDI;
  *plVar1 = -*plVar1;
  plVar2[-2] = 0x14dd0e915;
  FUN_1567f0fcb();
  lVar3 = *(longlong *)(unaff_R12 + (param_1 ^ 0xbb4662d));
  lVar4 = *plVar1;
  *plVar1 = lVar5;
  plVar2[-2] = unaff_R14;
  plVar2[1] = lVar3;
  lVar5 = *plVar2;
  *plVar2 = param_2;
  lVar3 = *plVar2;
  *plVar2 = lVar4;
  lVar4 = *plVar2;
  *plVar2 = lVar5;
  (*(code *)0x156ffa14b)(lVar4,lVar3);
  return;
}



// FUNCTION 14dd0ea61 FUN_14dd0ea61 body=434 status=ok
// SIG undefined FUN_14dd0ea61(void)

void FUN_14dd0ea61(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  bool bVar3;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x60);
  FUN_15b9e8ff7(uVar1,0xffffffffffffff90,uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2,
                ~param_4 & param_3);
  uVar2 = 8;
  bVar3 = false;
  FUN_165e8ae04();
  if (bVar3) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 != 0xfdb4f) {
    FUN_16577865f();
    return;
  }
  FUN_16577865c(uVar2);
  return;
}



// FUNCTION 14dd0ecad FUN_14dd0ecad body=152 status=ok
// SIG undefined FUN_14dd0ecad(void)

void FUN_14dd0ecad(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  FUN_160b819e7(param_1,param_2,*(undefined8 *)(unaff_R13 + -0x98));
  return;
}



// FUNCTION 14dd0edd6 FUN_14dd0edd6 body=30 status=ok
// SIG undefined FUN_14dd0edd6(void)

void FUN_14dd0edd6(void)

{
  return;
}



// FUNCTION 14dd0efe0 FUN_14dd0efe0 body=53 status=ok
// SIG undefined FUN_14dd0efe0(void)

void FUN_14dd0efe0(void)

{
  return;
}



// FUNCTION 14dd0f1f2 FUN_14dd0f1f2 body=152 status=ok
// SIG undefined FUN_14dd0f1f2(void)

void FUN_14dd0f1f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_1567d4702)(&LAB_1567d4702,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd0f3a7 FUN_14dd0f3a7 body=157 status=ok
// SIG undefined FUN_14dd0f3a7(void)

/* WARNING: Removing unreachable block (ram,0x0001614eaadf) */
/* WARNING: Removing unreachable block (ram,0x00014dd0f437) */
/* WARNING: Removing unreachable block (ram,0x00014dd0f43d) */
/* WARNING: Removing unreachable block (ram,0x0001614eac1d) */
/* WARNING: Removing unreachable block (ram,0x0001614eac23) */
/* WARNING: Removing unreachable block (ram,0x0001660d9f85) */

void FUN_14dd0f3a7(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x90);
  FUN_1614eaadf(~((~(~in_RAX & uVar1) + uVar1) - in_RAX & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14dd0f4ee FUN_14dd0f4ee body=150 status=ok
// SIG undefined FUN_14dd0f4ee(void)

void FUN_14dd0f4ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b70abe7(param_1,FUN_15b70abe7,param_3,param_4);
  return;
}



// FUNCTION 14dd0f815 thunk_FUN_14dd0f81b body=5 status=ok
// SIG undefined thunk_FUN_14dd0f81b(void)

undefined8 thunk_FUN_14dd0f81b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd0f81b FUN_14dd0f81b body=105 status=ok
// SIG undefined FUN_14dd0f81b(void)

undefined8 FUN_14dd0f81b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd0f931 FUN_14dd0f931 body=156 status=ok
// SIG undefined FUN_14dd0f931(void)

void FUN_14dd0f931(void)

{
  return;
}



// FUNCTION 14dd0f9cd FUN_14dd0f9cd body=132 status=ok
// SIG undefined FUN_14dd0f9cd(void)

void FUN_14dd0f9cd(byte param_1,undefined8 param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar2 = in_RAX & ~*(ulonglong *)(unaff_R12 + -0x60);
  uVar3 = ~*(ulonglong *)(unaff_R12 + -0x60) | in_RAX;
  uVar2 = (uVar3 - ~(uVar2 & ~uVar3)) + ~uVar2 ^ 0xffffffffffffffff;
  bVar1 = param_1 & 0x3f;
  (*(code *)0x156f65cd9)
            (param_1,param_2,*(undefined8 *)(unaff_R12 + -0x30),
             uVar2 >> bVar1 | uVar2 << 0x41 - bVar1 | 0L << 0x40 - bVar1);
  return;
}



// FUNCTION 14dd0fa51 FUN_14dd0fa51 body=173 status=ok
// SIG undefined FUN_14dd0fa51(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0fab8) */

void FUN_14dd0fa51(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  undefined8 unaff_R14;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff9f60467 + unaff_RDI);
  *puVar1 = unaff_R12;
  *puVar1 = *puVar1 + 0xb8b0c2d;
  *(undefined8 *)(&stack0xfffffffff9f6045f + unaff_RDI) = unaff_R14;
  uVar2 = *(ulonglong *)(param_1 + -0x78);
  *puVar1 = uVar2;
  uVar3 = *puVar1;
  *puVar1 = (ulonglong)FUN_14dd0fafe;
  FUN_161ca942f(param_1,~(uVar2 & unaff_RBX) & (uVar3 | unaff_RBX));
  *(undefined1 **)(&stack0xfffffffff9f6046f + unaff_RDI) = &LAB_14dd0fb18;
  return;
}



// FUNCTION 14dd0fafe FUN_14dd0fafe body=24 status=ok
// SIG undefined FUN_14dd0fafe(void)

void FUN_14dd0fafe(void)

{
  return;
}



// FUNCTION 14dd0fb93 FUN_14dd0fb93 body=439 status=ok
// SIG undefined FUN_14dd0fb93(void)

/* WARNING: Removing unreachable block (ram,0x00014dd0fc20) */
/* WARNING: Removing unreachable block (ram,0x00014dd0fca0) */

void FUN_14dd0fb93(void)

{
  return;
}



// FUNCTION 14dd0fdf4 FUN_14dd0fdf4 body=136 status=ok
// SIG undefined FUN_14dd0fdf4(void)

void FUN_14dd0fdf4(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_15af4be9d(0xf2,0x1d,param_3 >> 0x10 & 0xffff);
  return;
}



// FUNCTION 14dd0ff22 FUN_14dd0ff22 body=120 status=ok
// SIG undefined FUN_14dd0ff22(void)

void FUN_14dd0ff22(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x161c2394e)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dd0ff9e FUN_14dd0ff9e body=3 status=ok
// SIG undefined FUN_14dd0ff9e(void)

void FUN_14dd0ff9e(void)

{
  return;
}



// FUNCTION 14dd103c4 FUN_14dd103c4 body=187 status=ok
// SIG undefined FUN_14dd103c4(void)

void FUN_14dd103c4(void)

{
  FUN_160d07ad7();
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd105a6 FUN_14dd105a6 body=457 status=ok
// SIG undefined FUN_14dd105a6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1076d) */
/* WARNING: Removing unreachable block (ram,0x00014dd10767) */
/* WARNING: Removing unreachable block (ram,0x00014dd10772) */
/* WARNING: Removing unreachable block (ram,0x00014dd10922) */
/* WARNING: Removing unreachable block (ram,0x00014dd10927) */
/* WARNING: Removing unreachable block (ram,0x00014dd10933) */
/* WARNING: Removing unreachable block (ram,0x00014dd10938) */
/* WARNING: Removing unreachable block (ram,0x0001661da887) */
/* WARNING: Removing unreachable block (ram,0x0001661da892) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000156e1e704 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dd105a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  ushort unaff_retaddr;
  
  pcVar2 = FUN_165fcb643;
  FUN_165fcb643();
  FUN_166533ba7();
  uVar1 = thunk_FUN_166670bd0(param_1,pcVar2,-(unaff_retaddr | 0xfeff),param_4);
  return uVar1;
}



// FUNCTION 14dd10772 FUN_14dd10772 body=451 status=ok
// SIG undefined FUN_14dd10772(void)

/* WARNING: Removing unreachable block (ram,0x00014dd10938) */

undefined8 FUN_14dd10772(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong in_R10;
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  FUN_14daadb15();
  FUN_1624c614d();
  uVar1 = *(ulonglong *)(CONCAT44(uVar4,uVar3) + -0x60);
  if (uVar1 + in_R10 < (uVar1 & in_R10) * 2) {
    uVar2 = FUN_1661dc27e();
    return uVar2;
  }
  uVar2 = FUN_1661dc27e();
  return uVar2;
}



// FUNCTION 14dd109a0 FUN_14dd109a0 body=124 status=ok
// SIG undefined FUN_14dd109a0(void)

void FUN_14dd109a0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined8 local_res10 [3];
  
  local_res10[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014dd10a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)CONCAT44(unaff_retaddr_00,unaff_retaddr))
            (param_1,local_res10[0],
             *(undefined8 *)
              ((longlong)local_res10 +
              unaff_RDI + ~(~(param_2 & 0xffffffffe1d1b172) & (param_2 | 0xffffffffe1d1b172))));
  return;
}



// FUNCTION 14dd10a69 FUN_14dd10a69 body=104 status=ok
// SIG undefined FUN_14dd10a69(void)

void FUN_14dd10a69(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 0x10);
  *(longlong *)(unaff_R14 + 0x10) = -*(longlong *)(unaff_R14 + 0x10);
  *(longlong *)(unaff_R14 + 0x10) = *(longlong *)(unaff_R14 + 0x10) + -1;
  lVar2 = *(longlong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) & param_1;
  *(ulonglong *)(unaff_R14 + 0x10) = (lVar2 + param_1) - *(longlong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_R14 + 0x10));
  return;
}



// FUNCTION 14dd10b21 FUN_14dd10b21 body=23 status=ok
// SIG undefined FUN_14dd10b21(void)

void FUN_14dd10b21(void)

{
  return;
}



// FUNCTION 14dd10c5e FUN_14dd10c5e body=149 status=ok
// SIG undefined FUN_14dd10c5e(void)

void FUN_14dd10c5e(void)

{
  return;
}



// FUNCTION 14dd10cf3 FUN_14dd10cf3 body=21 status=ok
// SIG undefined FUN_14dd10cf3(void)

ulonglong FUN_14dd10cf3(void)

{
  ulonglong in_R9;
  
  return ~in_R9;
}



// FUNCTION 14dd10ece FUN_14dd10ece body=24 status=ok
// SIG undefined FUN_14dd10ece(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd10ece(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd11137 FUN_14dd11137 body=311 status=ok
// SIG undefined FUN_14dd11137(void)

/* WARNING: Removing unreachable block (ram,0x00014dd111c1) */
/* WARNING: Removing unreachable block (ram,0x00014dd111c7) */
/* WARNING: Removing unreachable block (ram,0x000164a33f0c) */

undefined8 FUN_14dd11137(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164a33f0c();
  return uVar1;
}



// FUNCTION 14dd11273 FUN_14dd11273 body=178 status=ok
// SIG undefined FUN_14dd11273(void)

/* WARNING: Removing unreachable block (ram,0x00014dd11299) */

ulonglong FUN_14dd11273(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14dd113a1 FUN_14dd113a1 body=117 status=ok
// SIG undefined FUN_14dd113a1(void)

void FUN_14dd113a1(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong unaff_R12;
  
  *(undefined1 *)(param_1 + 6 + param_2) = param_3;
  bVar3 = *(byte *)(unaff_R12 + 7 + param_2);
  *(undefined1 *)(param_1 + 7 + param_2) = 0;
  puVar1 = (undefined1 *)(param_1 + 7 + param_2);
  *puVar1 = *puVar1;
  pbVar2 = (byte *)(param_1 + 7 + param_2);
  *pbVar2 = *pbVar2 ^ bVar3;
  return;
}



// FUNCTION 14dd11438 FUN_14dd11438 body=154 status=ok
// SIG undefined FUN_14dd11438(void)

void FUN_14dd11438(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  
  uVar1 = *(undefined8 *)(&stack0xfffffffff0faebe4 + param_2);
  *(undefined8 *)(&stack0xfffffffff0faebe4 + param_2) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff0faebdc + param_2) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff0faebd4 + param_2) = param_3;
  uVar2 = *(undefined8 *)(&stack0xfffffffff0faebd4 + param_2);
  *(undefined8 *)(&stack0xfffffffff0faebe4 + param_2) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffff0faebdc + param_2) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff0faebdc + param_2) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffff0faebd4 + param_2) = param_4;
  *(undefined8 *)(&stack0xfffffffff0faebcc + param_2) = param_4;
  *(code **)(&stack0xfffffffff0faebd4 + param_2) = FUN_14dd114d2;
  FUN_1656d7f59(param_1,uVar1,uVar2,*(undefined8 *)(&stack0xfffffffff0faebcc + param_2));
  return;
}



// FUNCTION 14dd114d2 FUN_14dd114d2 body=140 status=ok
// SIG undefined FUN_14dd114d2(void)

void FUN_14dd114d2(char param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  byte unaff_BL;
  byte unaff_DIL;
  ulonglong uVar2;
  
  if ((byte)(param_1 + ~(unaff_BL & unaff_DIL)) != '\0') {
    FUN_15755986c();
    return;
  }
  uVar1 = ~((~in_RAX + param_4) - (~in_RAX & param_4));
  uVar2 = ~(~param_4 | in_RAX);
  FUN_161c9a5d4(0xffffffffb110be88,0xffffffffb110be88,uVar2,(uVar1 + uVar2) - (uVar1 & uVar2));
  FUN_14dd1155f();
  return;
}



// FUNCTION 14dd1155f FUN_14dd1155f body=152 status=ok
// SIG undefined FUN_14dd1155f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015afdeaa0) */

void FUN_14dd1155f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15afdeaa3(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd11724 FUN_14dd11724 body=42 status=ok
// SIG undefined FUN_14dd11724(void)

void FUN_14dd11724(void)

{
  return;
}



// FUNCTION 14dd117af FUN_14dd117af body=160 status=ok
// SIG undefined FUN_14dd117af(void)

void FUN_14dd117af(void)

{
  (*(code *)0x14e14810b)();
  return;
}



// FUNCTION 14dd118e6 FUN_14dd118e6 body=270 status=ok
// SIG undefined FUN_14dd118e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd11959) */
/* WARNING: Removing unreachable block (ram,0x00014dd1195f) */

void FUN_14dd118e6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar6 = local_res18 ^ param_1;
  puVar1 = (ulonglong *)(param_5 ^ param_1);
  puVar1[-1] = unaff_R13;
  puVar1[-2] = local_res10;
  puVar1[-3] = local_res10;
  puVar1[-4] = in_R11;
  puVar1[-2] = puVar1[-1];
  puVar1[-4] = (ulonglong)FUN_161001b0b;
  uVar5 = FUN_14dd54e63();
  puVar1[-2] = (ulonglong)&DAT_14dd54ea8;
  puVar1[-3] = in_R10;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & unaff_R15;
  puVar1[-3] = uVar6;
  *puVar1 = *puVar1 << 1;
  uVar4 = puVar1[-3];
  puVar1[-3] = ~(uVar2 & param_1) & (uVar2 | param_1);
  *puVar1 = (uVar3 + unaff_R15) - *puVar1;
  puVar1[-2] = uVar5;
  puVar1[-3] = uVar4;
  uVar6 = puVar1[1];
  puVar1[1] = ~puVar1[1];
  puVar1[1] = puVar1[1] | unaff_R15;
  puVar1[1] = ~((~unaff_R15 | uVar6) & puVar1[1]);
  uVar4 = puVar1[-3];
  puVar1[-2] = param_3;
  puVar1[-3] = param_3;
  puVar1[-2] = (ulonglong)&DAT_161001bb7;
  FUN_15b1ae446(uVar4);
  return;
}



// FUNCTION 14dd119f4 FUN_14dd119f4 body=128 status=ok
// SIG undefined FUN_14dd119f4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd119f4(void)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  longlong alStackX_8 [4];
  
  *(undefined8 *)((longlong)alStackX_8 + (0x3ca8b18e - (~unaff_R15 + 2) ^ 0x7d131737)) = unaff_R12;
  plVar1 = (longlong *)(alStackX_8[3] + -8);
  *plVar1 = unaff_RBP;
  *(longlong *)(alStackX_8[3] + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = (longlong)(&DAT_14dd11a91 + *plVar1);
  *(undefined8 *)(alStackX_8[3] + -0x18) = unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd11aae FUN_14dd11aae body=62 status=ok
// SIG undefined FUN_14dd11aae(void)

void FUN_14dd11aae(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14dd11bd5 FUN_14dd11bd5 body=127 status=ok
// SIG undefined FUN_14dd11bd5(void)

void FUN_14dd11bd5(void)

{
  (*(code *)0x15b35def8)();
  return;
}



// FUNCTION 14dd11c5b FUN_14dd11c5b body=142 status=ok
// SIG undefined FUN_14dd11c5b(void)

void FUN_14dd11c5b(void)

{
  (*(code *)0x161e1170f)();
  return;
}



// FUNCTION 14dd11e26 FUN_14dd11e26 body=175 status=ok
// SIG undefined FUN_14dd11e26(void)

void FUN_14dd11e26(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  bool in_CF;
  
  if (in_CF) {
    param_3 = param_3 + 1;
  }
  FUN_1573d32dc(param_1,(unaff_RBX - (*(ulonglong *)(param_1 + -0x70) | unaff_RBX)) +
                        *(ulonglong *)(param_1 + -0x70),unaff_RSI - param_3);
  return;
}



// FUNCTION 14dd11f7e FUN_14dd11f7e body=35 status=ok
// SIG undefined FUN_14dd11f7e(void)

void FUN_14dd11f7e(void)

{
  undefined8 unaff_RBP;
  undefined8 *in_R11;
  
  *in_R11 = unaff_RBP;
  return;
}



// FUNCTION 14dd12004 FUN_14dd12004 body=326 status=ok
// SIG undefined FUN_14dd12004(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1213c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd12004(short param_1)

{
  longlong unaff_RDI;
  undefined1 uVar1;
  
  uVar1 = 0;
  FUN_15b2ad14a(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  FUN_16594ab39((ushort)(CONCAT12(uVar1,param_1) >> 6) | param_1 << 0xb,FUN_16594ab39);
  return;
}



// FUNCTION 14dd1214a FUN_14dd1214a body=33 status=ok
// SIG undefined FUN_14dd1214a(void)

undefined8 FUN_14dd1214a(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd121d6 FUN_14dd121d6 body=186 status=ok
// SIG undefined FUN_14dd121d6(void)

void FUN_14dd121d6(void)

{
  return;
}



// FUNCTION 14dd12291 FUN_14dd12291 body=85 status=ok
// SIG undefined FUN_14dd12291(void)

void FUN_14dd12291(void)

{
  return;
}



// FUNCTION 14dd1247a FUN_14dd1247a body=15 status=ok
// SIG undefined FUN_14dd1247a(void)

void FUN_14dd1247a(void)

{
  return;
}



// FUNCTION 14dd1250d FUN_14dd1250d body=159 status=ok
// SIG undefined FUN_14dd1250d(void)

/* WARNING: Instruction at (ram,0x000166bd12a9) overlaps instruction at (ram,0x000166bd12a8)
    */
/* WARNING: Removing unreachable block (ram,0x000166bd12a8) */
/* WARNING: Removing unreachable block (ram,0x00014dd125cf) */
/* WARNING: Removing unreachable block (ram,0x00015b65fca4) */
/* WARNING: Removing unreachable block (ram,0x000166bd12bd) */
/* WARNING: Removing unreachable block (ram,0x000166bd12f0) */
/* WARNING: Removing unreachable block (ram,0x000166bd12e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd125fd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000030 : 0x000166460fce */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd1250d(char param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,int param_8)

{
  byte in_AL;
  longlong lVar1;
  char cVar2;
  byte bVar3;
  char unaff_SIL;
  longlong unaff_R12;
  char cStackX_18;
  
  cVar2 = unaff_SIL - (char)(param_4 << (param_1 - 0x1aU & 0x3f));
  bVar3 = (byte)*(undefined8 *)(unaff_R12 + -0x80);
  bVar3 = ~((~in_AL | bVar3) & (~in_AL & ~bVar3 | in_AL));
  lVar1 = FUN_16580cd6b();
  if (-1 < param_8 << (~((byte)unaff_R12 & (bVar3 + cVar2 + 'A') - (-1 - cStackX_18)) & 0x1f)) {
    bVar3 = *(byte *)(param_6 + param_5);
    *(undefined1 *)(lVar1 + param_5) = 0;
    FUN_15b6894bf(param_7,(bVar3 ^ 0xff) + 1);
    return;
  }
  FUN_15b15baf2(4);
  FUN_166461046();
  return;
}



// FUNCTION 14dd125ac FUN_14dd125ac body=249 status=ok
// SIG undefined FUN_14dd125ac(void)

/* WARNING: Instruction at (ram,0x000166bd12a9) overlaps instruction at (ram,0x000166bd12a8)
    */
/* WARNING: Removing unreachable block (ram,0x000166bd12a8) */
/* WARNING: Removing unreachable block (ram,0x00014dd125cf) */
/* WARNING: Removing unreachable block (ram,0x00015b65fca4) */
/* WARNING: Removing unreachable block (ram,0x000166bd12bd) */
/* WARNING: Removing unreachable block (ram,0x000166bd12f0) */
/* WARNING: Removing unreachable block (ram,0x000166bd12e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd125fd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000020 : 0x000166460fce */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd125ac(undefined8 param_1,undefined8 param_2,char param_3,char param_4,
                  undefined8 param_5,int param_6)

{
  byte bVar1;
  longlong in_RAX;
  byte unaff_R12B;
  char in_stack_00000008;
  undefined8 in_stack_00000010;
  longlong in_stack_00000018;
  longlong in_stack_00000020;
  
  if (-1 < param_6 << (~(unaff_R12B & (param_3 + param_4 + 'A') - (-1 - in_stack_00000008)) & 0x1f))
  {
    bVar1 = *(byte *)(in_stack_00000020 + in_stack_00000018);
    *(undefined1 *)(in_RAX + in_stack_00000018) = 0;
    FUN_15b6894bf(param_5,(bVar1 ^ 0xff) + 1);
    return;
  }
  FUN_15b15baf2(4,param_2,in_stack_00000018,in_stack_00000010);
  FUN_166461046();
  return;
}



// FUNCTION 14dd125fd FUN_14dd125fd body=111 status=ok
// SIG undefined FUN_14dd125fd(void)

void FUN_14dd125fd(void)

{
  return;
}



// FUNCTION 14dd12679 FUN_14dd12679 body=169 status=ok
// SIG undefined FUN_14dd12679(void)

void FUN_14dd12679(void)

{
  return;
}



// FUNCTION 14dd12843 FUN_14dd12843 body=150 status=ok
// SIG undefined FUN_14dd12843(void)

void FUN_14dd12843(void)

{
  undefined8 in_stack_00000008;
  
  FUN_161b3c586(in_stack_00000008);
  return;
}



// FUNCTION 14dd128db FUN_14dd128db body=189 status=ok
// SIG undefined FUN_14dd128db(void)

void FUN_14dd128db(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_R14;
  
  FUN_16117ad95(param_1,param_2,param_3 + (unaff_R14 & param_1) * -2);
  return;
}



// FUNCTION 14dd12a4e FUN_14dd12a4e body=833 status=ok
// SIG undefined FUN_14dd12a4e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd12bc0) */
/* WARNING: Removing unreachable block (ram,0x00014dd12ade) */
/* WARNING: Removing unreachable block (ram,0x00014dd12b26) */
/* WARNING: Removing unreachable block (ram,0x00014dd12b33) */
/* WARNING: Removing unreachable block (ram,0x00014dd12b8d) */
/* WARNING: Removing unreachable block (ram,0x00014dd12b93) */
/* WARNING: Removing unreachable block (ram,0x00016659fa49) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dd12a4e(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  longlong local_res18;
  
  param_5 = param_5 ^ unaff_R15;
  *(longlong *)(param_5 - 8) = local_res18 << (param_1 & 0x3f);
  plVar1 = (longlong *)(param_5 - 0x10);
  *plVar1 = 0x166895118;
  *plVar1 = *plVar1 + -0x166820f;
  lVar2 = *plVar1;
  *(undefined8 *)(param_5 - 0x10) = unaff_R13;
  *(undefined8 *)(param_5 - 0x18) = local_res10;
  *(undefined8 *)(param_5 - 0x20) = in_RAX;
  *(undefined4 *)(param_5 - 0x20) = 0x392ef763;
  *(undefined4 *)(param_5 - 0x1c) = 0;
  uVar3 = *(ulonglong *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = unaff_RDI;
  *(ulonglong *)(param_5 - 0x20) = lVar2 + (uVar3 ^ 0x392e8184);
  *(undefined8 *)(param_5 - 8) = *(undefined8 *)(param_5 - 0x20);
  uVar4 = FUN_1652345c8(in_stack_00000008,param_2);
  return uVar4;
}



// FUNCTION 14dd12cdf FUN_14dd12cdf body=182 status=ok
// SIG undefined FUN_14dd12cdf(void)

void FUN_14dd12cdf(void)

{
  return;
}



// FUNCTION 14dd12d96 FUN_14dd12d96 body=150 status=ok
// SIG undefined FUN_14dd12d96(void)

ulonglong FUN_14dd12d96(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return (~unaff_RBX | *(ulonglong *)(param_1 + -0x50)) &
         (*(ulonglong *)(param_1 + -0x50) ^ 0xffffffffffffffff | unaff_RBX) ^ 0xffffffffffffffff;
}



// FUNCTION 14dd12e2d FUN_14dd12e2d body=352 status=ok
// SIG undefined FUN_14dd12e2d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd12ed2) */
/* WARNING: Removing unreachable block (ram,0x00014dd12ec7) */

void FUN_14dd12e2d(void)

{
  return;
}



// FUNCTION 14dd13029 FUN_14dd13029 body=126 status=ok
// SIG undefined FUN_14dd13029(void)

void FUN_14dd13029(undefined8 param_1)

{
  FUN_15b1241ef(param_1,FUN_15b1241ef);
  return;
}



// FUNCTION 14dd131e3 FUN_14dd131e3 body=627 status=ok
// SIG undefined FUN_14dd131e3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd13323) */

undefined8 FUN_14dd131e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  short unaff_BP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  
  uVar3 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),unaff_BP);
  if (in_CF) {
    unaff_BP = unaff_BP + 1;
  }
  uVar4 = 0xfed0b21;
  FUN_16485f71c();
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x90) & uVar4) & (*(ulonglong *)(unaff_RDI + -0x90) | uVar4)
  ;
  *(ulonglong *)(uVar1 - 0x10) = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),unaff_BP);
  *(undefined8 *)(uVar1 - 8) = uVar3;
  uVar3 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(code **)(uVar1 - 0x28) = FUN_161d597f8;
  uVar3 = FUN_14e075502((uVar2 & uVar4) * 2);
  return uVar3;
}



// FUNCTION 14dd134f6 FUN_14dd134f6 body=169 status=ok
// SIG undefined FUN_14dd134f6(void)

void FUN_14dd134f6(void)

{
  FUN_166b148ae();
  return;
}



// FUNCTION 14dd13822 FUN_14dd13822 body=515 status=ok
// SIG undefined FUN_14dd13822(void)

/* WARNING: Removing unreachable block (ram,0x000166c366d8) */
/* WARNING: Removing unreachable block (ram,0x000166c366de) */
/* WARNING: Removing unreachable block (ram,0x000166c3676c) */
/* WARNING: Removing unreachable block (ram,0x000164a946de) */
/* WARNING: Removing unreachable block (ram,0x00014dd13899) */
/* WARNING: Removing unreachable block (ram,0x00014dd1389f) */
/* WARNING: Removing unreachable block (ram,0x00014dd13925) */
/* WARNING: Removing unreachable block (ram,0x00014dd13929) */
/* WARNING: Removing unreachable block (ram,0x00014dd13933) */
/* WARNING: Removing unreachable block (ram,0x00014dd13939) */
/* WARNING: Removing unreachable block (ram,0x000166c3665b) */
/* WARNING: Removing unreachable block (ram,0x0001570027b8) */
/* WARNING: Removing unreachable block (ram,0x000166c36694) */
/* WARNING: Removing unreachable block (ram,0x000166c36698) */
/* WARNING: Removing unreachable block (ram,0x00014da95074) */
/* WARNING: Removing unreachable block (ram,0x000166c36778) */
/* WARNING: Removing unreachable block (ram,0x000166c367a5) */
/* WARNING: Removing unreachable block (ram,0x0001570027b2) */

undefined8
FUN_14dd13822(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar2 = *(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = ~*(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) | in_RAX;
  *(ulonglong *)(param_4 + 0x10) =
       -1 - ((~in_RAX + lVar1) - (~in_RAX & uVar2) & *(ulonglong *)(param_4 + 0x10));
  uVar2 = FUN_14d87d402(param_1,param_2,param_3);
  uVar2 = 0xffffffffffffffff - (~(uVar2 & ~param_7) + uVar2 + 1) & unaff_R14;
  *(undefined8 *)(uVar2 - 8) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  uVar3 = (*(code *)0x1564ced08)(&LAB_165feaf49);
  return uVar3;
}



// FUNCTION 14dd1393f FUN_14dd1393f body=106 status=ok
// SIG undefined FUN_14dd1393f(void)

void FUN_14dd1393f(void)

{
  FUN_1567161ae(0x401c4bb7);
  return;
}



// FUNCTION 14dd139cc FUN_14dd139cc body=226 status=ok
// SIG undefined FUN_14dd139cc(void)

/* WARNING: Removing unreachable block (ram,0x000161bfa7b0) */
/* WARNING: Removing unreachable block (ram,0x00014dd13a61) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd139cc(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = FUN_1614952ae(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,param_2,param_3,unaff_retaddr);
  uVar3 = unaff_R15 | 0xb7d8adc61dcab7cf;
  uVar4 = -(~unaff_R15 | 0x48275239e2354830 | uVar3);
  FUN_165872343(~(unaff_R15 & 0x4166000003c74166) & (unaff_R15 | 0x4166000003c74166),uVar3,
                ~param_3 & uVar2);
  uVar3 = ~((uVar3 | unaff_R12) & (~unaff_R12 | uVar4));
  uVar5 = (DAT_165872313 & uVar4) << 1 | (DAT_165872313 & uVar4) >> 0x3f;
  uVar2 = uVar3 & 0xffffffffffff0000;
  if (((-2 - (uVar5 | 0xfffffffffffffffe)) + uVar5 & 0x8000) != 0) {
    uVar2 = CONCAT62((int6)(uVar3 >> 0x10),0xffff);
  }
  uVar1 = FUN_166c1a1b4(0xffffffffc61e529f,uVar2,0xfffffffffffffff8,uVar4);
  return uVar1;
}



// FUNCTION 14dd13e87 FUN_14dd13e87 body=290 status=ok
// SIG undefined FUN_14dd13e87(void)

void FUN_14dd13e87(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14db0c112(param_1,param_2,param_3);
  FUN_1612d4d2b();
  return;
}



// FUNCTION 14dd1410e FUN_14dd1410e body=74 status=ok
// SIG undefined FUN_14dd1410e(void)

void FUN_14dd1410e(void)

{
  return;
}



// FUNCTION 14dd14184 FUN_14dd14184 body=305 status=ok
// SIG undefined FUN_14dd14184(void)

/* WARNING: Removing unreachable block (ram,0x00014dd14368) */
/* WARNING: Removing unreachable block (ram,0x00014dd14373) */
/* WARNING: Removing unreachable block (ram,0x00014dd1436e) */
/* WARNING: Removing unreachable block (ram,0x00014dd142c2) */
/* WARNING: Removing unreachable block (ram,0x00014dd14328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd14184(void)

{
  longlong unaff_R12;
  
  FUN_15677a05a();
  if (unaff_R12 == 0xa0) {
    FUN_15698e38b();
    return;
  }
  FUN_15698e38b();
  return;
}



// FUNCTION 14dd142c2 FUN_14dd142c2 body=175 status=ok
// SIG undefined FUN_14dd142c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd14373) */

void FUN_14dd142c2(undefined8 param_1)

{
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  if (unaff_R13 != 0xa0) {
    FUN_16224ef40(param_1,unaff_retaddr);
    return;
  }
  FUN_16224ef40(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd14373 FUN_14dd14373 body=161 status=ok
// SIG undefined FUN_14dd14373(void)

void FUN_14dd14373(void)

{
  return;
}



// FUNCTION 14dd1454b FUN_14dd1454b body=172 status=ok
// SIG undefined FUN_14dd1454b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd145e8) */
/* WARNING: Removing unreachable block (ram,0x00014dd145ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd145f4) */

void FUN_14dd1454b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  uVar4 = ~((~in_RAX | param_7) & (~param_7 | in_RAX));
  *(undefined8 *)(uVar4 - 8) = local_res10;
  *(undefined8 *)(uVar4 - 0x10) = param_1;
  *(undefined8 *)(uVar4 - 0x18) = param_1;
  uVar1 = *(undefined8 *)(uVar4 - 8);
  *(undefined8 *)(uVar4 - 0x20) = param_4;
  *(undefined8 *)(uVar4 - 0x28) = unaff_R14;
  *(undefined8 *)(uVar4 - 0x10) = uVar1;
  uVar1 = *(undefined8 *)(uVar4 - 0x20);
  uVar2 = *(undefined8 *)(uVar4 - 0x18);
  *(undefined8 *)(uVar4 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar4 - 0x20) = unaff_RBP;
  *(undefined1 **)(uVar4 - 8) = &LAB_16227ff6e;
  uVar3 = *(undefined8 *)(uVar4 - 0x20);
  *(undefined8 *)(uVar4 - 0x20) = uVar3;
  *(undefined8 *)(uVar4 - 0x28) = uVar3;
  *(code **)(uVar4 - 0x20) = FUN_15b4c5c96;
  FUN_16227ff43(uVar2,param_2,param_3,uVar1);
  return;
}



// FUNCTION 14dd145ff FUN_14dd145ff body=163 status=ok
// SIG undefined FUN_14dd145ff(void)

void FUN_14dd145ff(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  FUN_165fcb790(param_1,param_2,FUN_165fcb790,*(undefined8 *)(unaff_RSI + -0x28));
  return;
}



// FUNCTION 14dd147c5 FUN_14dd147c5 body=24 status=ok
// SIG undefined FUN_14dd147c5(void)

void FUN_14dd147c5(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd14900 FUN_14dd14900 body=320 status=ok
// SIG undefined FUN_14dd14900(void)

undefined8
FUN_14dd14900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char in_AL;
  byte bVar4;
  undefined8 uVar5;
  undefined8 unaff_RDI;
  byte bVar6;
  undefined8 in_R10;
  undefined8 uVar7;
  ulonglong in_R11;
  longlong *plVar8;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  ushort local_res20;
  uint6 uStackX_22;
  
  plVar8 = (longlong *)((-~unaff_R15 - (~in_R11 + 2)) + (param_5 & unaff_R15) * -2);
                    /* WARNING: Read-only address (ram,0x00014d7be8f4) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7be8f4 = (undefined1)param_1;
  }
  UNLOCK();
  plVar8[-1] = param_1;
  plVar8[-2] = param_1;
  *(undefined4 *)(plVar8 + -3) = 0x119e1c9f;
  *(undefined4 *)((longlong)plVar8 + -0x14) = 0;
  lVar1 = plVar8[-3];
  plVar8[-3] = (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
               (ulonglong)((local_res20 & 0x200) != 0) * 0x200 | (ulonglong)(in_AL < '\0') * 0x80 |
               (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
               (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
               (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  plVar8[-4] = unaff_R12;
  plVar8[-5] = in_R10;
  bVar6 = (char)lVar1 + 0x77;
  uVar7 = plVar8[-5];
  plVar8[-5] = 0x14dd14994;
  uVar5 = FUN_164f0a797();
  plVar8[-4] = unaff_RDI;
  *(ushort *)(plVar8 + -1) = (*(ushort *)(plVar8 + -1) | 0x100) - 0x100;
  lVar2 = plVar8[-3];
  uVar21 = plVar8[-1];
  lVar1 = *plVar8;
  LOCK();
  bVar4 = (byte)uVar5;
  bVar9 = bVar4 < LAB_14d7a901a;
  bVar16 = SBORROW1(bVar4,LAB_14d7a901a);
  cVar3 = bVar4 - LAB_14d7a901a;
  if (cVar3 != '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),LAB_14d7a901a);
    bVar6 = LAB_14d7a901a;
  }
  LAB_14d7a901a = bVar6;
  UNLOCK();
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar7;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar16 * 0x800 |
       (ulonglong)((uVar21 & 0x400) != 0) * 0x400 | (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar9 |
       (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  uVar21 = *(ulonglong *)(lVar1 + -0x18);
  bVar18 = (uVar21 & 0x4000) != 0;
  bVar17 = (uVar21 & 0x800) != 0;
  bVar15 = (uVar21 & 0x400) != 0;
  bVar14 = (uVar21 & 0x200) != 0;
  bVar13 = (uVar21 & 0x100) != 0;
  bVar12 = (uVar21 & 0x80) != 0;
  bVar11 = (uVar21 & 0x40) != 0;
  bVar10 = (uVar21 & 0x10) != 0;
  bVar16 = (uVar21 & 4) != 0;
  bVar9 = (uVar21 & 1) != 0;
  bVar20 = (uVar21 & 0x200000) != 0;
  bVar19 = (uVar21 & 0x40000) != 0;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar15 * 0x400 |
       (ulonglong)bVar14 * 0x200 | (ulonglong)bVar13 * 0x100 | (ulonglong)bVar12 * 0x80 |
       (ulonglong)bVar11 * 0x40 | (ulonglong)bVar10 * 0x10 | (ulonglong)bVar16 * 4 |
       (ulonglong)bVar9 | (ulonglong)bVar20 * 0x200000 | (ulonglong)bVar19 * 0x40000;
  *(undefined8 *)(lVar1 + -0x20) = param_2;
  *(longlong *)(lVar1 + -0x28) = lVar2;
  *(ulonglong *)(lVar1 + -0x30) =
       (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar15 * 0x400 |
       (ulonglong)bVar14 * 0x200 | (ulonglong)bVar13 * 0x100 | (ulonglong)bVar12 * 0x80 |
       (ulonglong)bVar11 * 0x40 | (ulonglong)bVar10 * 0x10 | (ulonglong)bVar16 * 4 |
       (ulonglong)bVar9 | (ulonglong)bVar20 * 0x200000 | (ulonglong)bVar19 * 0x40000;
  *(undefined8 *)(lVar1 + -0x30) = uVar5;
  *(undefined8 *)(lVar1 + -0x38) = uVar5;
  *(undefined8 *)(lVar1 + -0x40) = uVar5;
  *(undefined **)(lVar1 + -0x30) = &DAT_14dd14a43;
  *(undefined8 *)(lVar1 + -0x38) = 0x1625f1686;
  return *(undefined8 *)(lVar1 + -0x40);
}



// FUNCTION 14dd14c78 FUN_14dd14c78 body=5 status=ok
// SIG undefined FUN_14dd14c78(void)

/* WARNING: Removing unreachable block (ram,0x00014dd14d08) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d0e) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d13) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d9f) */
/* WARNING: Removing unreachable block (ram,0x00014dd14da5) */
/* WARNING: Removing unreachable block (ram,0x0001566f8924) */

ulonglong FUN_14dd14c78(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dd14c7d FUN_14dd14c7d body=149 status=ok
// SIG undefined FUN_14dd14c7d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd14d08) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d0e) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d13) */
/* WARNING: Removing unreachable block (ram,0x00014dd14d9f) */
/* WARNING: Removing unreachable block (ram,0x00014dd14da5) */
/* WARNING: Removing unreachable block (ram,0x0001566f8924) */

ulonglong FUN_14dd14c7d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dd14d13 FUN_14dd14d13 body=230 status=ok
// SIG undefined FUN_14dd14d13(void)

/* WARNING: Removing unreachable block (ram,0x00014dd14da5) */

undefined8 FUN_14dd14d13(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *(ulonglong *)(in_R11 + 0x10) =
       ~unaff_RDI |
       ~*(ulonglong *)(in_R11 + ~(~(in_R10 & 0xffffffffe82d9d00) & (in_R10 | 0xffffffffe82d9d00)));
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_RAX;
  *(undefined **)(in_stack_00000028 + -0x18) = &DAT_15c0630e1;
  lVar1 = *(longlong *)(in_stack_00000028 + -0x18);
  uVar2 = *(undefined8 *)(in_stack_00000028 + -0x10);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(ulonglong *)(in_stack_00000028 + -8) =
       *(ulonglong *)(in_stack_00000028 + -8) ^ lVar1 - 0x596a74cU;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = 0x14d7c3af1;
  return uVar2;
}



// FUNCTION 14dd14da5 FUN_14dd14da5 body=119 status=ok
// SIG undefined FUN_14dd14da5(void)

void FUN_14dd14da5(undefined8 param_1)

{
  ushort in_R10W;
  ushort *unaff_R14;
  undefined8 in_stack_00000008;
  
  *unaff_R14 = ((~(in_R10W & *unaff_R14) + *unaff_R14) - ~in_R10W) - 0x100;
  (*(code *)&LAB_166a7227e)(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dd14e1d FUN_14dd14e1d body=82 status=ok
// SIG undefined FUN_14dd14e1d(void)

undefined8 FUN_14dd14e1d(void)

{
  undefined8 in_RAX;
  undefined1 *puVar1;
  byte in_TF;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined1 *)register0x00000020;
  if ((in_TF & 1) == 0) {
    puVar1 = local_res8;
  }
  *(undefined **)(puVar1 + -8) = &DAT_14dd14e72;
  return in_RAX;
}



// FUNCTION 14dd14f81 FUN_14dd14f81 body=320 status=ok
// SIG undefined FUN_14dd14f81(void)

/* WARNING: Removing unreachable block (ram,0x00014dd150a4) */
/* WARNING: Removing unreachable block (ram,0x00014dd150aa) */
/* WARNING: Removing unreachable block (ram,0x00014dd1501b) */
/* WARNING: Removing unreachable block (ram,0x00015683f54d) */
/* WARNING: Removing unreachable block (ram,0x00015784e902) */
/* WARNING: Removing unreachable block (ram,0x00015683f5c6) */
/* WARNING: Removing unreachable block (ram,0x00015683f5cc) */
/* WARNING: Removing unreachable block (ram,0x00015683f5d1) */
/* WARNING: Removing unreachable block (ram,0x00016158afbb) */
/* WARNING: Removing unreachable block (ram,0x00014dd150af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd14f81(ulonglong param_1)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong in_stack_00000020;
  ulonglong in_stack_00000028;
  
  if ((in_stack_00000028 & param_1) != 0xffffffffffffffff) {
    FUN_16158af3c();
    return;
  }
  syscall();
  _DAT_ffffffffffffffe8 = 0x15ddebd8;
  if ((in_stack_00000020 & 1) != 0) {
    _DAT_fffffffffffffff8 = 0x69beff8;
    _DAT_ffffffffffffffe8 = in_stack_00000020 & 0xfffffffffffffeff;
    _DAT_ffffffffffffffe0 = unaff_R14;
    _DAT_fffffffffffffff0 = FUN_165c7153c;
    return;
  }
  _DAT_fffffffffffffff0 = (code *)unaff_RDI;
  _DAT_fffffffffffffff8 = unaff_RDI;
  FUN_16484710f();
  return;
}



// FUNCTION 14dd1513d FUN_14dd1513d body=143 status=ok
// SIG undefined FUN_14dd1513d(void)

/* WARNING: Removing unreachable block (ram,0x000165699b7d) */
/* WARNING: Removing unreachable block (ram,0x00014dd15258) */
/* WARNING: Removing unreachable block (ram,0x00014dd152d3) */
/* WARNING: Removing unreachable block (ram,0x000165699b68) */
/* WARNING: Removing unreachable block (ram,0x000166600e1e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea5d3) */
/* WARNING: Removing unreachable block (ram,0x00014dd152d9) */

undefined8 FUN_14dd1513d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = ~((unaff_R15 - (in_RAX | unaff_R15)) + in_RAX);
  uVar4 = (uVar3 - 1) - ~(unaff_RBX - (uVar3 | unaff_RBX));
  FUN_166bda452();
  uVar3 = *(ulonglong *)(uVar4 - 0x68);
  if ((*(ulonglong *)(uVar4 - 0x88) & uVar4) * 2 <= *(ulonglong *)(uVar4 - 0x88) + uVar4) {
    uVar2 = FUN_166600c3f();
    return uVar2;
  }
  uVar2 = *(undefined8 *)(uVar4 - 0x90);
  uVar1 = FUN_162d0434f(uVar4,~((~((uVar4 ^ 0xffffffffffffffff) & uVar3) + uVar3) -
                                ~(uVar4 ^ 0xffffffffffffffff) & ~(uVar3 & ~uVar4)),param_3);
  FUN_166d7c840();
  if (*(longlong *)(unaff_R13 + -0x60) == 0 &&
      CONCAT62((int6)(unaff_R15 >> 0x10),-0x101 - ((ushort)uVar2 ^ uVar1 | 0xfeff)) == 0) {
    uVar2 = thunk_FUN_1660a1e01();
    return uVar2;
  }
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dd151cc FUN_14dd151cc body=423 status=ok
// SIG undefined FUN_14dd151cc(void)

/* WARNING: Removing unreachable block (ram,0x000165699b7d) */
/* WARNING: Removing unreachable block (ram,0x00014dd15258) */
/* WARNING: Removing unreachable block (ram,0x00014dd152d3) */
/* WARNING: Removing unreachable block (ram,0x000165699b68) */
/* WARNING: Removing unreachable block (ram,0x000166600e1e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea5d3) */
/* WARNING: Removing unreachable block (ram,0x00014dd152d9) */

undefined8 FUN_14dd151cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R15;
  ulonglong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if ((*(ulonglong *)(unaff_RDI + -0x88) & in_stack_00000008) * 2 <=
      *(ulonglong *)(unaff_RDI + -0x88) + in_stack_00000008) {
    uVar3 = FUN_166600c3f();
    return uVar3;
  }
  uVar3 = *(undefined8 *)(unaff_RDI + -0x90);
  uVar2 = FUN_162d0434f(in_stack_00000008,
                        ~((~((in_stack_00000008 ^ 0xffffffffffffffff) & uVar1) + uVar1) -
                          ~(in_stack_00000008 ^ 0xffffffffffffffff) & ~(uVar1 & ~in_stack_00000008))
                        ,param_3);
  FUN_166d7c840();
  if (*(longlong *)(unaff_R13 + -0x60) == 0 &&
      CONCAT62((int6)((ulonglong)unaff_R15 >> 0x10),-0x101 - ((ushort)uVar3 ^ uVar2 | 0xfeff)) == 0)
  {
    uVar3 = thunk_FUN_1660a1e01();
    return uVar3;
  }
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dd15495 FUN_14dd15495 body=161 status=ok
// SIG undefined FUN_14dd15495(void)

void FUN_14dd15495(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15722e2f1(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd155c8 FUN_14dd155c8 body=116 status=ok
// SIG undefined FUN_14dd155c8(void)

void FUN_14dd155c8(void)

{
  FUN_156471647();
  return;
}



// FUNCTION 14dd156d9 FUN_14dd156d9 body=234 status=ok
// SIG undefined FUN_14dd156d9(void)

void FUN_14dd156d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_166937358(*(undefined8 *)(unaff_RDI + -0x98),unaff_retaddr,param_3,param_4,
                *(undefined8 *)(unaff_RDI + -8));
  return;
}



// FUNCTION 14dd15826 FUN_14dd15826 body=148 status=ok
// SIG undefined FUN_14dd15826(void)

void FUN_14dd15826(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBP;
  ulonglong unaff_R13;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)
   (&stack0x00000020 +
   param_2 + ~(~(unaff_R13 & 0xffffffffe2c51e38) & (unaff_R13 | 0xffffffffe2c51e38))) = unaff_RBP;
  FUN_16664b453(param_1,in_stack_00000018,FUN_16664b453);
  return;
}



// FUNCTION 14dd1591f FUN_14dd1591f body=241 status=ok
// SIG undefined FUN_14dd1591f(void)

void FUN_14dd1591f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b15dc46();
  FUN_1647ce33d(0xacfcf56,8,
                ~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) |
                ~(~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  FUN_166485e23();
  return;
}



// FUNCTION 14dd15b90 FUN_14dd15b90 body=171 status=ok
// SIG undefined FUN_14dd15b90(void)

void FUN_14dd15b90(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_15b3bb3a7(param_1,unaff_retaddr,0x4bab);
  return;
}



// FUNCTION 14dd15c41 FUN_14dd15c41 body=277 status=ok
// SIG undefined FUN_14dd15c41(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166006ad8) */
/* WARNING: Removing unreachable block (ram,0x000166006ade) */
/* WARNING: Removing unreachable block (ram,0x000156be437b) */
/* WARNING: Removing unreachable block (ram,0x000166006947) */
/* WARNING: Removing unreachable block (ram,0x00016600696d) */
/* WARNING: Removing unreachable block (ram,0x000166006974) */
/* WARNING: Removing unreachable block (ram,0x000165d79c32) */
/* WARNING: Removing unreachable block (ram,0x000166006a21) */
/* WARNING: Removing unreachable block (ram,0x000166006a33) */
/* WARNING: Removing unreachable block (ram,0x000166006a39) */
/* WARNING: Removing unreachable block (ram,0x000166006ad3) */
/* WARNING: Removing unreachable block (ram,0x00014d7a97d2) */
/* WARNING: Removing unreachable block (ram,0x00014dd15d59) */

void FUN_14dd15c41(void)

{
  FUN_1648978a4();
  return;
}



// FUNCTION 14dd15d59 FUN_14dd15d59 body=139 status=ok
// SIG undefined FUN_14dd15d59(void)

void FUN_14dd15d59(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  uVar1 = *(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = (~(uVar1 & param_1) + param_1) - *(longlong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) =
       ~((~*(ulonglong *)(param_4 + 8) | param_2) + *(longlong *)(param_4 + 8) + 1);
  FUN_16279bab6(FUN_16279bab6,local_res10,unaff_retaddr,local_res8);
  FUN_14dd15de6();
  return;
}



// FUNCTION 14dd15de6 FUN_14dd15de6 body=149 status=ok
// SIG undefined FUN_14dd15de6(void)

void FUN_14dd15de6(void)

{
  int *piVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  int local_res8 [8];
  
  uVar2 = ~((unaff_RDI - (unaff_RBP | unaff_RDI)) + unaff_RBP);
  *(undefined4 *)((longlong)local_res8 + uVar2) = 0xfea79f43;
  piVar1 = (int *)((longlong)local_res8 + uVar2);
  *piVar1 = *piVar1 + 0x15860bd;
  return;
}



// FUNCTION 14dd15e7f FUN_14dd15e7f body=149 status=ok
// SIG undefined FUN_14dd15e7f(void)

void FUN_14dd15e7f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14db17a44(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd15f14 FUN_14dd15f14 body=294 status=ok
// SIG undefined FUN_14dd15f14(void)

/* WARNING: Removing unreachable block (ram,0x00014dd15fc0) */
/* WARNING: Removing unreachable block (ram,0x00014dd15fc6) */
/* WARNING: Removing unreachable block (ram,0x000166b8f03f) */
/* WARNING: Removing unreachable block (ram,0x00015b4e2b71) */
/* WARNING: Removing unreachable block (ram,0x000166b8f0cf) */
/* WARNING: Removing unreachable block (ram,0x000166b8f0d5) */

void FUN_14dd15f14(void)

{
  FUN_166b8f03f();
  return;
}



// FUNCTION 14dd16179 FUN_14dd16179 body=131 status=ok
// SIG undefined FUN_14dd16179(void)

void FUN_14dd16179(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~-*(longlong *)(unaff_R13 + -0x28) + 1;
  FUN_157283315(unaff_RBP ^ unaff_R15,
                ~((~unaff_R15 | uVar1) & (uVar1 ^ 0xffffffffffffffff | unaff_R15)));
  FUN_16225be05();
  return;
}



// FUNCTION 14dd161fe FUN_14dd161fe body=114 status=ok
// SIG undefined FUN_14dd161fe(void)

void FUN_14dd161fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16225be05(param_1,FUN_16225be05,param_3,
                ((in_RAX - 1) - (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX)) -
                ~*(ulonglong *)(unaff_R12 + -0x90));
  return;
}



// FUNCTION 14dd16314 FUN_14dd16314 body=493 status=ok
// SIG undefined FUN_14dd16314(void)

/* WARNING: Removing unreachable block (ram,0x00014dd163b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd163b9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd16314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R10;
  ulonglong in_stack_00000020;
  
  FUN_16113d985(param_1,FUN_16113d985,param_3,param_4,
                ~((~in_R10 | in_stack_00000020) & (~in_stack_00000020 | in_R10)));
  return;
}



// FUNCTION 14dd1659c FUN_14dd1659c body=246 status=ok
// SIG undefined FUN_14dd1659c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1662e) */

void FUN_14dd1659c(void)

{
  if (&stack0x00000000 == &DAT_ffffffffffffffe8) {
    FUN_160bc7c7f();
    return;
  }
  FUN_160bc7c7f();
  return;
}



// FUNCTION 14dd16869 FUN_14dd16869 body=158 status=ok
// SIG undefined FUN_14dd16869(void)

void FUN_14dd16869(ulonglong param_1)

{
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong local_res8;
  
  *(undefined8 *)
   (&stack0x00000000 + ~(~(unaff_RDI & 0xffffffffaf5d9698) & (unaff_RDI | 0xffffffffaf5d9698))) =
       unaff_RSI;
  param_1 = ~(~(local_res8 & 0xffffffffd2340bd5) & (local_res8 | 0xffffffffd2340bd5)) ^ param_1;
  FUN_1569e2e26(~(unaff_R15 & ~param_1),~((~unaff_R15 | ~param_1) + unaff_R15 + 1) + unaff_R15,
                param_1);
  return;
}



// FUNCTION 14dd16994 FUN_14dd16994 body=174 status=ok
// SIG undefined FUN_14dd16994(void)

void FUN_14dd16994(void)

{
  return;
}



// FUNCTION 14dd16ad5 FUN_14dd16ad5 body=155 status=ok
// SIG undefined FUN_14dd16ad5(void)

void FUN_14dd16ad5(void)

{
  return;
}



// FUNCTION 14dd170d0 FUN_14dd170d0 body=294 status=ok
// SIG undefined FUN_14dd170d0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd17162) */
/* WARNING: Removing unreachable block (ram,0x00014dd17168) */

void FUN_14dd170d0(undefined8 param_1,undefined8 param_2)

{
  FUN_15b345cf1(FUN_15b345cf1,param_2);
  return;
}



// FUNCTION 14dd17457 FUN_14dd17457 body=133 status=ok
// SIG undefined FUN_14dd17457(void)

/* WARNING: Removing unreachable block (ram,0x00014dd174d2) */
/* WARNING: Removing unreachable block (ram,0x00014dd174d8) */
/* WARNING: Removing unreachable block (ram,0x00014dd174dd) */
/* WARNING: Removing unreachable block (ram,0x00014dd1751b) */
/* WARNING: Removing unreachable block (ram,0x00014dd17501) */
/* WARNING: Removing unreachable block (ram,0x00014dd1752d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd17457(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  FUN_1653b42cb(unaff_retaddr,*(ulonglong *)(unaff_RDI + -0x68) ^ unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dd174dd FUN_14dd174dd body=147 status=ok
// SIG undefined FUN_14dd174dd(void)

void FUN_14dd174dd(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_15b127ffb(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dd17570 FUN_14dd17570 body=175 status=ok
// SIG undefined FUN_14dd17570(void)

void FUN_14dd17570(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~-*(longlong *)(unaff_R13 + -0x88) + 1;
  FUN_160e7a218(0xffffffffffffffb8,FUN_160e7a218,
                ~(uVar1 & unaff_R15) & ((unaff_R15 - 1) - ~uVar1) - (uVar1 & unaff_R15));
  FUN_15b176ae5();
  return;
}



// FUNCTION 14dd17620 FUN_14dd17620 body=146 status=ok
// SIG undefined FUN_14dd17620(void)

void FUN_14dd17620(void)

{
  FUN_15b176ae5();
  return;
}



// FUNCTION 14dd176b9 FUN_14dd176b9 body=137 status=ok
// SIG undefined FUN_14dd176b9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1775f) */

void FUN_14dd176b9(void)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  uVar1 = ~((~(~local_res8 & 0x100) + 0x100) - local_res8);
  bVar12 = (uVar1 & 0x4000) != 0;
  bVar11 = (uVar1 & 0x800) != 0;
  bVar10 = (uVar1 & 0x400) != 0;
  bVar9 = (uVar1 & 0x200) != 0;
  bVar8 = (uVar1 & 0x100) != 0;
  bVar7 = (uVar1 & 0x80) != 0;
  bVar6 = (uVar1 & 0x40) != 0;
  bVar5 = (uVar1 & 0x10) != 0;
  bVar4 = (uVar1 & 4) != 0;
  bVar3 = (uVar1 & 1) != 0;
  bVar16 = (uStackX_a & 0x20) != 0;
  bVar13 = (uStackX_a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *local_res10 = unaff_RSI;
  local_res10[-1] = unaff_RSI;
  local_res10[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)bVar10 * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 | (ulonglong)(bVar8 & 1) * 0x100 |
       (ulonglong)(bVar7 & 1) * 0x80 | (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10
       | (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res10[-3] = unaff_R13;
  local_res10[-4] = unaff_RDI;
  local_res10[-5] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)bVar10 * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 | (ulonglong)(bVar8 & 1) * 0x100 |
       (ulonglong)(bVar7 & 1) * 0x80 | (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10
       | (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res10[-5] = FUN_14dd17743;
  FUN_161bcc309();
  local_res10[-5] = 0x8a89c52;
  local_res10[-6] = 0x8a89c52;
  local_res10[-4] = DAT_161bcc2e1;
  (*(code *)0x1612e9832)();
  return;
}



// FUNCTION 14dd17743 FUN_14dd17743 body=148 status=ok
// SIG undefined FUN_14dd17743(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1775f) */

void FUN_14dd17743(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1612e9832)
            (param_1,~((~(~-param_1 + 1) | *(ulonglong *)(unaff_RDI + -0x28)) &
                      (*(ulonglong *)(unaff_RDI + -0x28) ^ 0xffffffffffffffff | param_1)));
  return;
}



// FUNCTION 14dd17b7d FUN_14dd17b7d body=160 status=ok
// SIG undefined FUN_14dd17b7d(void)

void FUN_14dd17b7d(void)

{
  return;
}



// FUNCTION 14dd17c1f FUN_14dd17c1f body=194 status=ok
// SIG undefined FUN_14dd17c1f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd17c1f(void)

{
  FUN_165e98db5(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14dd17ce1 FUN_14dd17ce1 body=283 status=ok
// SIG undefined FUN_14dd17ce1(void)

/* WARNING: Removing unreachable block (ram,0x0001628b0679) */
/* WARNING: Removing unreachable block (ram,0x0001628b0673) */
/* WARNING: Removing unreachable block (ram,0x0001628b067e) */
/* WARNING: Removing unreachable block (ram,0x00014d828a1b) */
/* WARNING: Removing unreachable block (ram,0x00014d828a15) */
/* WARNING: Removing unreachable block (ram,0x00014d828a20) */
/* WARNING: Removing unreachable block (ram,0x00014dd17df3) */
/* WARNING: Removing unreachable block (ram,0x00014dd17dfe) */
/* WARNING: Removing unreachable block (ram,0x00014dd17e17) */
/* WARNING: Removing unreachable block (ram,0x00014dd17df9) */
/* WARNING: Removing unreachable block (ram,0x00014d828900) */
/* WARNING: Removing unreachable block (ram,0x00014d828929) */
/* WARNING: Removing unreachable block (ram,0x00014d828924) */

void FUN_14dd17ce1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1568fc119();
    return;
  }
  FUN_14d7c2b48(param_1,param_2);
  return;
}



// FUNCTION 14dd17dfe FUN_14dd17dfe body=95 status=ok
// SIG undefined FUN_14dd17dfe(void)

void FUN_14dd17dfe(undefined8 param_1)

{
  char in_AL;
  undefined8 unaff_RSI;
  undefined8 local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7a6424) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7a6424 = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = 0x3b81acc;
  *(undefined8 *)(local_res10 + -8) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14dd17f08 FUN_14dd17f08 body=178 status=ok
// SIG undefined FUN_14dd17f08(void)

undefined8 FUN_14dd17f08(void)

{
  return 0x57e3b338;
}



// FUNCTION 14dd17fba FUN_14dd17fba body=262 status=ok
// SIG undefined FUN_14dd17fba(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd18043) */
/* WARNING: Removing unreachable block (ram,0x00014dd18049) */
/* WARNING: Removing unreachable block (ram,0x00014dd1808e) */
/* WARNING: Removing unreachable block (ram,0x00014dd1808f) */

void FUN_14dd17fba(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  ulonglong in_stack_00000038;
  
  *(undefined8 *)(param_3 + unaff_R15) = unaff_RBX;
  lVar1 = in_stack_00000038 + uStackX_8 + (in_stack_00000038 & uStackX_8) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined1 **)(lVar1 + -8) = &LAB_15705311a;
  *(undefined8 *)(lVar1 + -0x18) = in_RAX;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd18192 FUN_14dd18192 body=150 status=ok
// SIG undefined FUN_14dd18192(void)

void FUN_14dd18192(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd18226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd182fb FUN_14dd182fb body=351 status=ok
// SIG undefined FUN_14dd182fb(void)

/* WARNING: Removing unreachable block (ram,0x00014dd1839a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd182fb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd1839a FUN_14dd1839a body=368 status=ok
// SIG undefined FUN_14dd1839a(void)

void FUN_14dd1839a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R14;
  longlong local_res18 [2];
  
  FUN_14df9ff39();
  *(longlong *)((longlong)local_res18 + unaff_R14) =
       *(longlong *)((longlong)local_res18 + unaff_R14) << 1;
  *(longlong *)((longlong)local_res18 + unaff_R14) =
       param_3 - *(longlong *)((longlong)local_res18 + unaff_R14);
  return;
}


