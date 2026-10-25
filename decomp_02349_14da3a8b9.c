// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da3a8b9 FUN_14da3a8b9 body=218 status=ok
// SIG undefined FUN_14da3a8b9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001620d9834) */
/* WARNING: Removing unreachable block (ram,0x0001625cae00) */
/* WARNING: Removing unreachable block (ram,0x00014d930305) */
/* WARNING: Removing unreachable block (ram,0x0001625cad7a) */
/* WARNING: Removing unreachable block (ram,0x0001620d97f6) */
/* WARNING: Removing unreachable block (ram,0x0001620d9837) */
/* WARNING: Removing unreachable block (ram,0x0001620d991d) */
/* WARNING: Removing unreachable block (ram,0x0001620d9928) */
/* WARNING: Removing unreachable block (ram,0x00014d7a56c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7a56cf) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5721) */
/* WARNING: Removing unreachable block (ram,0x00015659b9cd) */
/* WARNING: Removing unreachable block (ram,0x00015659ba19) */
/* WARNING: Removing unreachable block (ram,0x00015659ba14) */
/* WARNING: Removing unreachable block (ram,0x00015659ba1c) */
/* WARNING: Removing unreachable block (ram,0x00015659ba74) */
/* WARNING: Removing unreachable block (ram,0x00015b210014) */
/* WARNING: Removing unreachable block (ram,0x00014d930383) */
/* WARNING: Removing unreachable block (ram,0x00014d930389) */
/* WARNING: Removing unreachable block (ram,0x00014da3a94f) */
/* WARNING: Removing unreachable block (ram,0x00014da3a9b4) */
/* WARNING: Removing unreachable block (ram,0x00014da3a9ae) */

void FUN_14da3a8b9(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char in_AL;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ushort uVar3;
  ulonglong uVar4;
  undefined1 in_stack_00000020;
  
  *(ulonglong *)(unaff_RBX + 0x10) = ~*(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | ~param_3;
  *(ulonglong *)(unaff_RBX + 0x10) = ~*(ulonglong *)(unaff_RBX + 0x10);
  param_6 = param_6 ^ param_1;
  uVar3 = (-0x101 - ((ushort)param_5 | 0xfeff)) + (ushort)param_5;
                    /* WARNING: Read-only address (ram,0x00014d7ac6f3) is written */
  LOCK();
  uVar2 = in_stack_00000020;
  if (in_AL != '\0') {
    uVar2 = uRam000000014d7ac6f3;
  }
  uRam000000014d7ac6f3 = uVar2;
  UNLOCK();
  *(undefined8 *)(param_6 - 8) = unaff_RSI;
  *(undefined8 *)(param_6 - 0x10) = unaff_RSI;
  *(ulonglong *)(param_6 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar3 & 0x200) != 0) * 0x200 | (ulonglong)((uVar3 & 0x100) != 0) * 0x100 |
       (ulonglong)(in_AL < '\0') * 0x80 | (ulonglong)(in_AL == '\0') * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(param_6 - 0x18);
  *(ulonglong *)(param_6 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 - 0x20) = param_4;
  uVar4 = *(ulonglong *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x18) = in_R11;
  *(ulonglong *)(param_6 - 0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 - 8) = 0xccc160;
  uVar1 = *(undefined8 *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x10) = uVar1;
  *(undefined8 *)(param_6 - 0x18) = uVar1;
  *(code **)(param_6 - 0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14da3a94f FUN_14da3a94f body=250 status=ok
// SIG undefined FUN_14da3a94f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001620d9834) */
/* WARNING: Removing unreachable block (ram,0x0001625cae00) */
/* WARNING: Removing unreachable block (ram,0x00014d930305) */
/* WARNING: Removing unreachable block (ram,0x0001625cad7a) */
/* WARNING: Removing unreachable block (ram,0x0001620d97f6) */
/* WARNING: Removing unreachable block (ram,0x0001620d9837) */
/* WARNING: Removing unreachable block (ram,0x0001620d991d) */
/* WARNING: Removing unreachable block (ram,0x0001620d9928) */
/* WARNING: Removing unreachable block (ram,0x00014d7a56c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7a56cf) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5721) */
/* WARNING: Removing unreachable block (ram,0x00015659b9cd) */
/* WARNING: Removing unreachable block (ram,0x00015659ba19) */
/* WARNING: Removing unreachable block (ram,0x00015659ba14) */
/* WARNING: Removing unreachable block (ram,0x00015659ba1c) */
/* WARNING: Removing unreachable block (ram,0x00015659ba74) */
/* WARNING: Removing unreachable block (ram,0x00015b210014) */
/* WARNING: Removing unreachable block (ram,0x00014d930383) */
/* WARNING: Removing unreachable block (ram,0x00014d930389) */
/* WARNING: Removing unreachable block (ram,0x00014da3a9b4) */

void FUN_14da3a94f(void)

{
  FUN_14d930305();
  return;
}



// FUNCTION 14da3aad8 FUN_14da3aad8 body=604 status=ok
// SIG undefined FUN_14da3aad8(void)

/* WARNING: Removing unreachable block (ram,0x00014da3ac11) */
/* WARNING: Removing unreachable block (ram,0x00014da3ac17) */
/* WARNING: Removing unreachable block (ram,0x00014da3aca3) */
/* WARNING: Removing unreachable block (ram,0x00014da3aca8) */
/* WARNING: Removing unreachable block (ram,0x00014da3acb4) */
/* WARNING: Removing unreachable block (ram,0x000164ad32e1) */
/* WARNING: Removing unreachable block (ram,0x0001575fee84) */
/* WARNING: Removing unreachable block (ram,0x00014da3ab7f) */

undefined8
FUN_14da3aad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  uVar1 = FUN_15757cc62(local_res8,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14da3acba FUN_14da3acba body=860 status=ok
// SIG undefined FUN_14da3acba(void)

/* WARNING: Removing unreachable block (ram,0x000162efa33c) */
/* WARNING: Removing unreachable block (ram,0x000166c0415d) */
/* WARNING: Removing unreachable block (ram,0x000166c041ee) */
/* WARNING: Removing unreachable block (ram,0x000166c041f9) */
/* WARNING: Removing unreachable block (ram,0x000166c041ff) */
/* WARNING: Removing unreachable block (ram,0x000166c04204) */
/* WARNING: Removing unreachable block (ram,0x000166c04324) */
/* WARNING: Removing unreachable block (ram,0x000166c04329) */
/* WARNING: Removing unreachable block (ram,0x000166c0432f) */
/* WARNING: Removing unreachable block (ram,0x000162efa26f) */
/* WARNING: Removing unreachable block (ram,0x000162efa2a4) */
/* WARNING: Removing unreachable block (ram,0x0001650ced04) */
/* WARNING: Removing unreachable block (ram,0x000162efa2ef) */
/* WARNING: Removing unreachable block (ram,0x000162efa2f5) */
/* WARNING: Removing unreachable block (ram,0x000162efa2fa) */
/* WARNING: Removing unreachable block (ram,0x000162efa33f) */
/* WARNING: Removing unreachable block (ram,0x000162efa378) */
/* WARNING: Removing unreachable block (ram,0x000162efa37e) */
/* WARNING: Removing unreachable block (ram,0x000162efa383) */
/* WARNING: Removing unreachable block (ram,0x00015b187e28) */
/* WARNING: Removing unreachable block (ram,0x000166c0414c) */
/* WARNING: Removing unreachable block (ram,0x00014da3ad5b) */
/* WARNING: Removing unreachable block (ram,0x00014da3ad61) */
/* WARNING: Removing unreachable block (ram,0x00015b38d300) */
/* WARNING: Removing unreachable block (ram,0x00015b38d262) */
/* WARNING: Removing unreachable block (ram,0x00015b38d2fa) */
/* WARNING: Removing unreachable block (ram,0x00014dd944c8) */
/* WARNING: Removing unreachable block (ram,0x00015b38d2f5) */
/* WARNING: Removing unreachable block (ram,0x000166975f47) */
/* WARNING: Removing unreachable block (ram,0x00014e0fb1de) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da3acba(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  FUN_160e23e8e();
  uVar3 = (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) ^ 0xffffffffffffffff |
          ~(~*(ulonglong *)(unaff_RDI + -0x68) | param_1);
  if ((~(*(ulonglong *)(unaff_RDI + -0x98) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x98) | param_1)) != 0) {
    uVar2 = FUN_15b38d1cd();
    return uVar2;
  }
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x90) & param_1) &
          (~param_1 & (~uVar3 & (~uVar3 + uVar3) - ~uVar3) + *(ulonglong *)(unaff_RDI + -0x90) |
          param_1);
  if ((longlong)uVar1 < 0) {
    uVar2 = FUN_166c040ba();
    return uVar2;
  }
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 0x20) = uVar3;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined1 **)(uVar1 - 8) = &LAB_1629ec0ac;
                    /* WARNING: Could not recover jumptable at 0x0001629ec087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(unaff_R12 + 0xe0))(0,uVar2,param_3);
  return uVar2;
}



// FUNCTION 14da3b017 FUN_14da3b017 body=114 status=ok
// SIG undefined FUN_14da3b017(void)

void FUN_14da3b017(void)

{
  return;
}



// FUNCTION 14da3b63e FUN_14da3b63e body=272 status=ok
// SIG undefined FUN_14da3b63e(void)

void FUN_14da3b63e(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
  FUN_1624b78c2();
  FUN_1621ee668(*(undefined8 *)(unaff_R13 + -0x48),
                CONCAT62((uint6)((ulonglong)*(undefined8 *)(unaff_R13 + -0x38) >> 0x10) |
                         (uint6)(unaff_R15 >> 0x10),(short)param_1),
                (unaff_RDI - uVar1) + (param_3 & unaff_R15) * -2);
  return;
}



// FUNCTION 14da3bdac FUN_14da3bdac body=47 status=ok
// SIG undefined FUN_14da3bdac(void)

void FUN_14da3bdac(void)

{
  return;
}



// FUNCTION 14da3bed6 FUN_14da3bed6 body=433 status=ok
// SIG undefined FUN_14da3bed6(void)

/* WARNING: Removing unreachable block (ram,0x00014da3bf59) */
/* WARNING: Removing unreachable block (ram,0x00014da3bf5f) */

void FUN_14da3bed6(undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar6 = *param_3;
  *param_3 = ~*param_3;
  *param_3 = (~(uVar6 & unaff_R15) + unaff_R15) - *param_3;
  *param_3 = ~(unaff_RBP & *param_3);
  uVar6 = ~((~unaff_R15 | param_5) & (0xffffffffffffffff - param_5 | unaff_R15));
  *(undefined8 *)(uVar6 - 8) = unaff_R13;
  *(undefined8 *)(uVar6 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar6 - 0x18) = unaff_R12;
  uVar5 = *(undefined8 *)(uVar6 - 8);
  *(undefined8 *)(uVar6 - 0x20) = param_2;
  *(undefined8 *)(uVar6 - 0x28) = in_RAX;
  *(undefined4 *)(uVar6 - 0x28) = 0xc2adf25c;
  *(undefined4 *)(uVar6 - 0x24) = 0xffffffff;
  *(undefined8 *)(uVar6 + *(longlong *)(uVar6 - 0x28) + 0x3d520d94) = uVar5;
  uVar5 = *(undefined8 *)(uVar6 - 0x20);
  *(undefined8 *)(uVar6 - 0x20) = 0x161a49c41;
  uVar3 = FUN_156cea099(param_1,uVar5,in_stack_00000008,param_4);
  *(undefined8 *)(uVar6 - 0x18) = DAT_160d5cd3f;
  uVar2 = DAT_160d5cd1f;
  *(undefined8 *)(uVar6 - 0x18) = uVar3;
  puVar1 = (undefined8 *)(uVar6 - 0x20);
  *(undefined4 *)puVar1 = 0xf3a0525f;
  *(undefined4 *)(uVar6 - 0x18) = *(undefined4 *)puVar1;
  uVar3 = *puVar1;
  *(undefined4 *)(uVar6 - 0x14) = 0xffffffff;
  uVar4 = *(undefined8 *)(uVar6 - 0x18);
  *(undefined8 *)(uVar6 - 0x18) = 0x161a49cda;
  uVar3 = FUN_1625a1a14(uVar4,uVar3,FUN_1625a1a14,uVar2);
  *(undefined4 *)(uVar6 - 0x18) = 0xa26d8f50;
  *(undefined4 *)(uVar6 - 0x14) = 0xd4fcbc41;
  *(uint *)(uVar6 - 0x14) = *(uint *)(uVar6 - 0x14) ^ 0x2b0343be;
  *(undefined8 *)(uVar6 - 0x18) = uVar4;
  *(undefined8 *)(uVar6 - 0x18) = uVar3;
  *(undefined4 *)(uVar6 - 0x18) = 0;
  *(undefined4 *)(uVar6 - 0x14) = 0;
  *(ulonglong *)(uVar6 - 0x18) = CONCAT71((int7)((ulonglong)in_stack_00000010 >> 8),(char)uVar5);
  *(undefined8 *)(uVar6 - 0x18) = 0x161a49d88;
  FUN_162cc66a1();
  FUN_16131bb16();
  return;
}



// FUNCTION 14da3c08a FUN_14da3c08a body=1256 status=ok
// SIG undefined FUN_14da3c08a(void)

/* WARNING: Instruction at (ram,0x000165196fe4) overlaps instruction at (ram,0x000165196fe2)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016127640d) */
/* WARNING: Removing unreachable block (ram,0x000161276413) */
/* WARNING: Removing unreachable block (ram,0x000161276354) */
/* WARNING: Removing unreachable block (ram,0x0001612763f6) */
/* WARNING: Removing unreachable block (ram,0x0001612763f1) */
/* WARNING: Removing unreachable block (ram,0x0001656f26a0) */
/* WARNING: Removing unreachable block (ram,0x0001656f2725) */
/* WARNING: Removing unreachable block (ram,0x0001656f272a) */
/* WARNING: Removing unreachable block (ram,0x0001656f2730) */
/* WARNING: Removing unreachable block (ram,0x00014d83a785) */
/* WARNING: Removing unreachable block (ram,0x00014d83a812) */
/* WARNING: Removing unreachable block (ram,0x00014d83a81e) */
/* WARNING: Removing unreachable block (ram,0x00016697801e) */
/* WARNING: Removing unreachable block (ram,0x00014da3c2c4) */
/* WARNING: Removing unreachable block (ram,0x00014da3c2be) */
/* WARNING: Removing unreachable block (ram,0x00014da3c2c9) */
/* WARNING: Removing unreachable block (ram,0x00014da3c188) */
/* WARNING: Removing unreachable block (ram,0x00014da3c193) */
/* WARNING: Removing unreachable block (ram,0x00014da3c22e) */
/* WARNING: Removing unreachable block (ram,0x00015673d765) */
/* WARNING: Removing unreachable block (ram,0x00015673d7e7) */
/* WARNING: Removing unreachable block (ram,0x00015673d7ed) */
/* WARNING: Removing unreachable block (ram,0x00015673d822) */
/* WARNING: Removing unreachable block (ram,0x00014d7aaebe) */
/* WARNING: Removing unreachable block (ram,0x00014da3c234) */
/* WARNING: Removing unreachable block (ram,0x000162e9ee47) */
/* WARNING: Removing unreachable block (ram,0x00014da3c18e) */
/* WARNING: Removing unreachable block (ram,0x00016519702a) */
/* WARNING: Removing unreachable block (ram,0x000166629d49) */
/* WARNING: Removing unreachable block (ram,0x000166629d4f) */
/* WARNING: Removing unreachable block (ram,0x000166629dec) */
/* WARNING: Removing unreachable block (ram,0x000166629df2) */
/* WARNING: Removing unreachable block (ram,0x0001612762a0) */
/* WARNING: Removing unreachable block (ram,0x00016127634e) */
/* WARNING: Removing unreachable block (ram,0x000160f79d47) */
/* WARNING: Removing unreachable block (ram,0x000161276487) */
/* WARNING: Removing unreachable block (ram,0x00016127648b) */
/* WARNING: Removing unreachable block (ram,0x000164ba8d7d) */
/* WARNING: Removing unreachable block (ram,0x000164ba8d83) */
/* WARNING: Removing unreachable block (ram,0x00014da3c117) */
/* WARNING: Removing unreachable block (ram,0x000165196fda) */
/* WARNING: Removing unreachable block (ram,0x00016519700a) */
/* WARNING: Removing unreachable block (ram,0x000165196fe6) */
/* WARNING: Removing unreachable block (ram,0x000165196fd5) */
/* WARNING: Removing unreachable block (ram,0x000165196fdd) */
/* WARNING: Removing unreachable block (ram,0x000165197016) */

void FUN_14da3c08a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong local_8;
  
  local_8 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -8)) &
             (~*(ulonglong *)(unaff_RDI + -8) | param_1));
  FUN_160d3f401(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x68) | param_1),&local_8,param_4);
  return;
}



// FUNCTION 14da3c434 FUN_14da3c434 body=143 status=ok
// SIG undefined FUN_14da3c434(void)

void FUN_14da3c434(void)

{
  return;
}



// FUNCTION 14da3c751 FUN_14da3c751 body=104 status=ok
// SIG undefined FUN_14da3c751(void)

/* WARNING: Removing unreachable block (ram,0x00014da3c7b9) */

void FUN_14da3c751(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong in_stack_00000020;
  
  if (-1 < (longlong)(param_6 ^ in_stack_00000020)) {
    FUN_1619399ac();
    return;
  }
  FUN_14d94566f(param_6 ^ in_stack_00000020,param_2,param_3,FUN_14d94566f);
  return;
}



// FUNCTION 14da3c7b9 FUN_14da3c7b9 body=143 status=ok
// SIG undefined FUN_14da3c7b9(void)

void FUN_14da3c7b9(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_15b6cee4e(FUN_15b6cee4e,*(longlong *)(unaff_RDI + -0x88) + param_1,param_3);
  return;
}



// FUNCTION 14da3c90d FUN_14da3c90d body=191 status=ok
// SIG undefined FUN_14da3c90d(void)

/* WARNING: Removing unreachable block (ram,0x00014da3c991) */

void FUN_14da3c90d(void)

{
  FUN_16168431b();
  return;
}



// FUNCTION 14da3c9cc FUN_14da3c9cc body=17 status=ok
// SIG undefined FUN_14da3c9cc(void)

void FUN_14da3c9cc(void)

{
  FUN_14d7a5fa1();
  return;
}



// FUNCTION 14da3cb06 FUN_14da3cb06 body=201 status=ok
// SIG undefined FUN_14da3cb06(void)

void FUN_14da3cb06(void)

{
  return;
}



// FUNCTION 14da3cdab FUN_14da3cdab body=255 status=ok
// SIG undefined FUN_14da3cdab(void)

/* WARNING: Removing unreachable block (ram,0x00014da3ce0e) */

undefined8 FUN_14da3cdab(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong in_R10;
  
  uVar1 = FUN_1652be0f0(*(ulonglong *)(param_2 + -0x48),param_2,
                        -1 - ((in_R10 ^ 0xffffffffffffffff | param_3) &
                             (~param_3 + in_R10) - (~param_3 & in_R10)),
                        (in_R10 - 1) - ~*(ulonglong *)(param_2 + -0x48));
  return uVar1;
}



// FUNCTION 14da3d2db FUN_14da3d2db body=531 status=ok
// SIG undefined FUN_14da3d2db(void)

/* WARNING: Removing unreachable block (ram,0x00014da3d397) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da3d2db(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  uVar1 = FUN_165407183(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15 |
                         ~(*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                        (~uVar2 | ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15)) + uVar2 + 1);
  return uVar1;
}



// FUNCTION 14da3d5f6 FUN_14da3d5f6 body=85 status=ok
// SIG undefined FUN_14da3d5f6(void)

ulonglong FUN_14da3d5f6(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + param_2 + 0x9205efe) ^ unaff_RBP;
}



// FUNCTION 14da3d827 FUN_14da3d827 body=128 status=ok
// SIG undefined FUN_14da3d827(void)

void FUN_14da3d827(undefined8 param_1)

{
  (*(code *)&LAB_16145bd8f)(param_1,&LAB_16145bd8f);
  return;
}



// FUNCTION 14da3d8a8 FUN_14da3d8a8 body=435 status=ok
// SIG undefined FUN_14da3d8a8(void)

/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */
/* WARNING: Removing unreachable block (ram,0x0001628e8af3) */
/* WARNING: Removing unreachable block (ram,0x0001628e8bbf) */
/* WARNING: Removing unreachable block (ram,0x0001628e8bf5) */
/* WARNING: Removing unreachable block (ram,0x0001628e8be8) */
/* WARNING: Removing unreachable block (ram,0x0001628e8bf7) */
/* WARNING: Removing unreachable block (ram,0x0001628e8c09) */
/* WARNING: Removing unreachable block (ram,0x0001628e8cd1) */
/* WARNING: Removing unreachable block (ram,0x0001628e8cd7) */
/* WARNING: Removing unreachable block (ram,0x000160cf0421) */
/* WARNING: Removing unreachable block (ram,0x0001628e8c03) */
/* WARNING: Removing unreachable block (ram,0x0001628e8ba5) */
/* WARNING: Removing unreachable block (ram,0x00014da3d946) */
/* WARNING: Removing unreachable block (ram,0x00014da3da91) */
/* WARNING: Removing unreachable block (ram,0x00014da3da95) */
/* WARNING: Removing unreachable block (ram,0x00015b3e9e4b) */

undefined8
FUN_14da3d8a8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_res18;
  
  uVar3 = (~in_RAX | param_5) & (~param_5 | in_RAX);
  uVar4 = ~uVar3;
  if (uVar3 == 0) {
    uVar1 = FUN_1628e8a59();
    return uVar1;
  }
  *(undefined8 *)(uVar4 - 8) = unaff_RBP;
  *(undefined8 *)(uVar4 - 0x10) = param_1;
  *(undefined8 *)(uVar4 - 0x18) = param_1;
  *(ulonglong *)(uVar4 - 0x20) = local_res18 ^ in_RAX;
  *(undefined4 *)(uVar4 - 0x20) = 0xd3139f4;
  *(undefined4 *)(uVar4 - 0x1c) = 0;
  lVar2 = *(longlong *)(uVar4 - 0x20) + -0xd3139fc;
  *(undefined8 *)((uVar4 - 0x18) + lVar2) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_160cf0bf3(lVar2,-param_2,param_3);
    return uVar1;
  }
  uVar1 = FUN_160cf0bf3(lVar2,0,param_3);
  return uVar1;
}



// FUNCTION 14da3da5c FUN_14da3da5c body=399 status=ok
// SIG undefined FUN_14da3da5c(void)

/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */

undefined8 FUN_14da3da5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1663e2cb6(FUN_1663e2cb6,param_2,param_3);
  return uVar1;
}



// FUNCTION 14da3dbf7 FUN_14da3dbf7 body=278 status=ok
// SIG undefined FUN_14da3dbf7(void)

void FUN_14da3dbf7(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined8 local_res10;
  
  uVar1 = ~((unaff_RBP | param_2) + ~unaff_RBP + 1);
  FUN_1611cb9af(~(((~param_1 | in_RAX) - (uVar1 | ~param_1 | in_RAX)) + uVar1),
                ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = 0x14da3dd0b;
  FUN_1668fb7ac();
  FUN_14da3dd11();
  return;
}



// FUNCTION 14da3dd11 FUN_14da3dd11 body=150 status=ok
// SIG undefined FUN_14da3dd11(void)

void FUN_14da3dd11(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_14de8f4db(0xff,param_2,param_3,(param_1 + -1) - ~*(ulonglong *)(unaff_RDI + -0x38));
  return;
}



// FUNCTION 14da3de4b thunk_FUN_14da3de51 body=5 status=ok
// SIG undefined thunk_FUN_14da3de51(void)

/* WARNING: Removing unreachable block (ram,0x00014da3df71) */

void thunk_FUN_14da3de51(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong auStackX_8 [2];
  ulonglong auStackX_18 [2];
  
  lVar8 = 0x18 - ~(((in_R10 | 0xffffffffca736b07) -
                   (~(in_R10 & 0xffffffffca736b07) | in_R10 | 0xffffffffca736b07)) +
                  ~(in_R10 & 0xffffffffca736b07));
  lVar5 = -(ulonglong)((auStackX_8[1] & 1) != 0);
  *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18) = unaff_R13;
  if ((&DAT_00000007 < (undefined1 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18)) &&
     ((undefined1 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) < &DAT_00000008)) {
    uVar3 = *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = param_4;
    uVar6 = *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = *puVar1 & auStackX_8[0];
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = ~*puVar1;
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = *puVar1 & (~(uVar3 & auStackX_8[0]) + auStackX_8[0]) - ~uVar3;
    *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) =
         *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) ^ auStackX_8[0];
    *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18) = param_1;
    *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = 0x4cb11174;
    lVar4 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *puVar1 = *puVar1 & auStackX_8[0];
    *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = lVar4 + auStackX_8[0];
    plVar2 = (longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *plVar2 = *plVar2 << 1;
    lVar4 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    *(undefined4 *)puVar1 = 0x5b798125;
    *(undefined4 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x2c) = 0;
    uVar3 = *puVar1;
    *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) =
         lVar4 - *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *(undefined8 *)
     ((longlong)auStackX_8 +
     ~(~(uVar3 & 0xffffffffa4867ec2) & (uVar3 | 0xffffffffa4867ec2)) + lVar5 + lVar8 + -0x18) =
         *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    uVar7 = *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18);
    *(ushort *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) =
         *(ushort *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) & 0xfeff;
    lVar5 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *(undefined8 *)(lVar5 + -8) = unaff_RBX;
    *(undefined8 *)(lVar5 + -0x10) = unaff_R12;
    *(undefined8 *)(lVar5 + -0x18) = unaff_R12;
    *(undefined8 *)(lVar5 + -0x20) = unaff_RDI;
    *(undefined8 *)(lVar5 + -0x28) = in_RAX;
    *(undefined4 *)(lVar5 + -0x28) = 0x62178c24;
    *(undefined4 *)(lVar5 + -0x24) = 0;
    thunk_FUN_1657628b6(uVar7,param_2,param_3,uVar6);
    return;
  }
  uVar6 = *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18);
  *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) = 0;
  *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18) = param_4;
  *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = uVar6;
  *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) =
       *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) + in_R11;
  uVar6 = *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18);
  *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18) = unaff_RDI;
  *(undefined8 *)((longlong)auStackX_8 + lVar5 + lVar8 + -0x18) = uVar6;
  FUN_165f2295d();
  return;
}



// FUNCTION 14da3de51 FUN_14da3de51 body=288 status=ok
// SIG undefined FUN_14da3de51(void)

/* WARNING: Removing unreachable block (ram,0x00014da3df71) */

void FUN_14da3de51(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong local_res8 [2];
  ulonglong auStackX_18 [2];
  
  lVar8 = 0x18 - ~(((in_R10 | 0xffffffffca736b07) -
                   (~(in_R10 & 0xffffffffca736b07) | in_R10 | 0xffffffffca736b07)) +
                  ~(in_R10 & 0xffffffffca736b07));
  lVar5 = -(ulonglong)((local_res8[1] & 1) != 0);
  *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18) = unaff_R13;
  if ((&DAT_00000007 < (undefined1 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18)) &&
     ((undefined1 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) < &DAT_00000008)) {
    uVar3 = *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = param_4;
    uVar6 = *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = *puVar1 & local_res8[0];
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = ~*puVar1;
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20);
    *puVar1 = *puVar1 & (~(uVar3 & local_res8[0]) + local_res8[0]) - ~uVar3;
    *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) =
         *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) ^ local_res8[0];
    *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18) = param_1;
    *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = 0x4cb11174;
    lVar4 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *puVar1 = *puVar1 & local_res8[0];
    *(ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = lVar4 + local_res8[0];
    plVar2 = (longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *plVar2 = *plVar2 << 1;
    lVar4 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    puVar1 = (ulonglong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    *(undefined4 *)puVar1 = 0x5b798125;
    *(undefined4 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x2c) = 0;
    uVar3 = *puVar1;
    *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) =
         lVar4 - *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *(undefined8 *)
     ((longlong)local_res8 +
     ~(~(uVar3 & 0xffffffffa4867ec2) & (uVar3 | 0xffffffffa4867ec2)) + lVar5 + lVar8 + -0x18) =
         *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30);
    uVar7 = *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18);
    *(ushort *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) =
         *(ushort *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x18) & 0xfeff;
    lVar5 = *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x10);
    *(undefined8 *)(lVar5 + -8) = unaff_RBX;
    *(undefined8 *)(lVar5 + -0x10) = unaff_R12;
    *(undefined8 *)(lVar5 + -0x18) = unaff_R12;
    *(undefined8 *)(lVar5 + -0x20) = unaff_RDI;
    *(undefined8 *)(lVar5 + -0x28) = in_RAX;
    *(undefined4 *)(lVar5 + -0x28) = 0x62178c24;
    *(undefined4 *)(lVar5 + -0x24) = 0;
    thunk_FUN_1657628b6(uVar7,param_2,param_3,uVar6);
    return;
  }
  uVar6 = *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18);
  *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) = 0;
  *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18) = param_4;
  *(undefined8 *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x30) = uVar6;
  *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) =
       *(longlong *)((longlong)auStackX_18 + lVar5 + lVar8 + -0x20) + in_R11;
  uVar6 = *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18);
  *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18) = unaff_RDI;
  *(undefined8 *)((longlong)local_res8 + lVar5 + lVar8 + -0x18) = uVar6;
  FUN_165f2295d();
  return;
}



// FUNCTION 14da3e121 FUN_14da3e121 body=330 status=ok
// SIG undefined FUN_14da3e121(void)

/* WARNING: Removing unreachable block (ram,0x00014da3e1b7) */
/* WARNING: Removing unreachable block (ram,0x00014da3e1c7) */
/* WARNING: Removing unreachable block (ram,0x00014da3e1cb) */

void FUN_14da3e121(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
      (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15)) == 0xffffffffffffffff) {
    FUN_164a832b5(param_1);
    return;
  }
  FUN_164a832b5(param_1);
  return;
}



// FUNCTION 14da3e261 FUN_14da3e261 body=175 status=ok
// SIG undefined FUN_14da3e261(void)

void FUN_14da3e261(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  if (unaff_RSI != 0x16bb9924) {
    FUN_1651fa676(param_1,FUN_1651fa676,*(undefined8 *)(unaff_R12 + -0x80),
                  param_4 + in_RAX + ~((~param_4 + ~in_RAX) - (~param_4 & ~in_RAX)) * -2);
    return;
  }
  FUN_15763cc81();
  return;
}



// FUNCTION 14da3e2fd FUN_14da3e2fd body=90 status=ok
// SIG undefined FUN_14da3e2fd(void)

void FUN_14da3e2fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ushort *unaff_RBX;
  undefined8 local_res20;
  
  *unaff_RBX = (*unaff_RBX | 0x100) - 0x100;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,param_3);
  *local_res20 = 0x14acc58;
  FUN_165c7153c();
  return;
}



// FUNCTION 14da3e491 FUN_14da3e491 body=15 status=ok
// SIG undefined FUN_14da3e491(void)

void FUN_14da3e491(void)

{
  return;
}



// FUNCTION 14da3e53c FUN_14da3e53c body=288 status=ok
// SIG undefined FUN_14da3e53c(void)

/* WARNING: Removing unreachable block (ram,0x00014da3e660) */
/* WARNING: Removing unreachable block (ram,0x00014da3e7a3) */
/* WARNING: Removing unreachable block (ram,0x000165e23938) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da3e53c(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  ushort local_res18;
  ulonglong local_res20;
  
  lVar2 = *(ulonglong *)(unaff_R12 + -0xa0) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0xa0) & in_RAX) * -2;
  uVar3 = FUN_161dfb97c();
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = in_R10;
  if ((local_res18 & 0x40) != 0) {
    FUN_15742948a();
    return;
  }
  *(longlong *)(param_1 - 0x10) = lVar2;
  uVar1 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = uVar3;
  *(undefined8 *)(param_1 - 0x18) = uVar3;
  *(undefined8 *)(param_1 - 0x20) = uVar1;
  lVar2 = *(longlong *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x10) = 0x17b38400;
  *(ulonglong *)(param_1 - 0x10) = *(ulonglong *)(param_1 - 0x10) ^ 0x17b38400;
  *(longlong *)(param_1 - 0x10) = *(longlong *)(param_1 - 0x10) + lVar2;
  *(undefined8 *)(param_1 - 0x18) = unaff_R15;
  *(undefined8 *)(param_1 - 0x20) = param_2;
  uVar3 = *(undefined8 *)(param_1 - 0x20);
  *(undefined1 **)(param_1 - 8) = &LAB_156996a4e;
  FUN_156996a27(in_stack_00000010,uVar3);
  return;
}



// FUNCTION 14da3e660 FUN_14da3e660 body=338 status=ok
// SIG undefined FUN_14da3e660(void)

/* WARNING: Removing unreachable block (ram,0x000165e23938) */

void FUN_14da3e660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dab6e55(param_1,FUN_14dab6e55,param_3);
  FUN_1655e112f();
  return;
}



// FUNCTION 14da3e7b5 FUN_14da3e7b5 body=17 status=ok
// SIG undefined FUN_14da3e7b5(void)

void FUN_14da3e7b5(undefined8 param_1)

{
  longlong unaff_RSI;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + unaff_RSI) = param_1;
  return;
}



// FUNCTION 14da3ecaa FUN_14da3ecaa body=156 status=ok
// SIG undefined FUN_14da3ecaa(void)

/* WARNING: Removing unreachable block (ram,0x00014da3ed23) */

void FUN_14da3ecaa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint in_EAX;
  uint local_res20;
  
  (*(code *)&LAB_165fcfdb0)
            (param_1,param_2,~(local_res20 & in_EAX | ~(local_res20 | in_EAX)),param_4);
  return;
}



// FUNCTION 14da3ed47 FUN_14da3ed47 body=299 status=ok
// SIG undefined FUN_14da3ed47(void)

void FUN_14da3ed47(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R13;
  longlong lVar5;
  ulonglong local_res8;
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  *(undefined8 *)((longlong)&stack0x00000008 + unaff_RBP) = in_RAX;
  *(undefined8 *)(&stack0x00000000 + unaff_RBP) = unaff_RSI;
  uVar1 = *(ulonglong *)(in_R11 + -0x38);
  uVar2 = *(undefined8 *)(&stack0x00000000 + unaff_RBP);
  uVar4 = *(undefined8 *)((longlong)&stack0x00000008 + unaff_RBP);
  *(undefined8 *)((longlong)&stack0x00000008 + unaff_RBP) = 0;
  *(longlong *)((longlong)&stack0x00000008 + unaff_RBP) =
       *(longlong *)((longlong)&stack0x00000008 + unaff_RBP) - unaff_R13;
  *(longlong *)((longlong)&stack0x00000008 + unaff_RBP) =
       -*(longlong *)((longlong)&stack0x00000008 + unaff_RBP);
  *(longlong *)(&stack0x00000000 + unaff_RBP) = in_R10;
  uVar3 = *(ulonglong *)(&stack0x00000000 + unaff_RBP);
  *(undefined8 *)(&stack0x00000000 + unaff_RBP) = param_1;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RBP) = uVar4;
  *(undefined8 *)((longlong)&uStack_10 + unaff_RBP) = 0x14da3edc9;
  FUN_166134570((~uVar1 | ~uVar3) + uVar1 + 1);
  *(undefined4 *)((longlong)&uStack_10 + unaff_RBP) = 0x93383b79;
  *(int *)((longlong)&uStack_10 + unaff_RBP) =
       *(int *)((longlong)&uStack_10 + unaff_RBP) + 0x60159385;
  *(undefined4 *)((longlong)&uStack_10 + unaff_RBP + 4) = 0xffffffff;
  lVar5 = *(longlong *)((longlong)&uStack_10 + unaff_RBP) + 0xcb2310a;
  *(undefined8 *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) = 0;
  *(longlong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) =
       *(longlong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) - in_R10;
  *(ulonglong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) =
       ~*(ulonglong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a);
  *(longlong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) =
       *(longlong *)(&stack0x0cb2310a + lVar5 + unaff_RBP + -0xcb2310a) + 1;
  *(ulonglong *)(&stack0x00000010 + unaff_RBP) =
       *(ulonglong *)(&stack0x00000010 + unaff_RBP) ^ local_res8;
  *(undefined8 *)(&stack0x00000000 + unaff_RBP) = uVar2;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RBP) = param_4;
  *(undefined8 *)((longlong)&uStack_10 + unaff_RBP) = param_3;
  *(ulonglong *)(&stack0x00000018 + unaff_RBP) = ~*(ulonglong *)(&stack0x00000018 + unaff_RBP);
  *(ulonglong *)((longlong)&uStack_10 + unaff_RBP) = uVar1;
  lVar5 = *(longlong *)(&stack0x00000018 + unaff_RBP);
  *(ulonglong *)(&stack0x00000018 + unaff_RBP) =
       *(ulonglong *)(&stack0x00000018 + unaff_RBP) & local_res8;
  *(ulonglong *)(&stack0x00000018 + unaff_RBP) =
       (lVar5 + local_res8) - *(longlong *)(&stack0x00000018 + unaff_RBP);
  FUN_161831db2();
  return;
}



// FUNCTION 14da3ee72 FUN_14da3ee72 body=135 status=ok
// SIG undefined FUN_14da3ee72(void)

void FUN_14da3ee72(void)

{
  return;
}



// FUNCTION 14da3ef8f FUN_14da3ef8f body=179 status=ok
// SIG undefined FUN_14da3ef8f(void)

/* WARNING: Removing unreachable block (ram,0x00014da3f02b) */

longlong FUN_14da3ef8f(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + ~(unaff_RSI & (unaff_RDI | 0xfffffffff7d82abe)));
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15)) {
    return (unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x50);
  }
  lVar2 = FUN_165053c2f(param_1,~(uVar1 & unaff_R15) & (uVar1 | unaff_R15));
  return lVar2;
}



// FUNCTION 14da3f22c FUN_14da3f22c body=190 status=ok
// SIG undefined FUN_14da3f22c(void)

ulonglong FUN_14da3f22c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~((unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15)) +
          *(ulonglong *)(unaff_R13 + -0x38));
}



// FUNCTION 14da3f2ee FUN_14da3f2ee body=311 status=ok
// SIG undefined FUN_14da3f2ee(void)

/* WARNING: Removing unreachable block (ram,0x00014da3f4ca) */
/* WARNING: Removing unreachable block (ram,0x00014da3f503) */
/* WARNING: Removing unreachable block (ram,0x00014da3f516) */
/* WARNING: Removing unreachable block (ram,0x00014da3f545) */
/* WARNING: Removing unreachable block (ram,0x00014da3f54a) */
/* WARNING: Removing unreachable block (ram,0x00014da3f563) */
/* WARNING: Removing unreachable block (ram,0x00014da3f569) */
/* WARNING: Removing unreachable block (ram,0x000162511d88) */
/* WARNING: Removing unreachable block (ram,0x000162511da0) */
/* WARNING: Removing unreachable block (ram,0x000162511dcf) */
/* WARNING: Removing unreachable block (ram,0x000162511df6) */
/* WARNING: Removing unreachable block (ram,0x000162511e14) */
/* WARNING: Removing unreachable block (ram,0x000162201a0e) */
/* WARNING: Removing unreachable block (ram,0x000162201a49) */
/* WARNING: Removing unreachable block (ram,0x000162201a4e) */
/* WARNING: Removing unreachable block (ram,0x000162201a7b) */
/* WARNING: Removing unreachable block (ram,0x000162201a80) */
/* WARNING: Removing unreachable block (ram,0x000162201a86) */
/* WARNING: Removing unreachable block (ram,0x000162201a8c) */
/* WARNING: Removing unreachable block (ram,0x000162201b3e) */
/* WARNING: Removing unreachable block (ram,0x0001656a8714) */
/* WARNING: Removing unreachable block (ram,0x000162511e1b) */
/* WARNING: Removing unreachable block (ram,0x000162511e21) */
/* WARNING: Removing unreachable block (ram,0x000162511e26) */
/* WARNING: Removing unreachable block (ram,0x000162511ea4) */
/* WARNING: Removing unreachable block (ram,0x000162511eaa) */
/* WARNING: Removing unreachable block (ram,0x000162511eaf) */
/* WARNING: Removing unreachable block (ram,0x00015b3883ac) */
/* WARNING: Removing unreachable block (ram,0x00014da3f4bf) */
/* WARNING: Removing unreachable block (ram,0x00014da3f425) */
/* WARNING: Removing unreachable block (ram,0x00014da3f382) */
/* WARNING: Removing unreachable block (ram,0x00014da3f41f) */
/* WARNING: Removing unreachable block (ram,0x00015b7d1654) */

void FUN_14da3f2ee(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  plVar1 = (longlong *)
           (&stack0xfffffffff692febc +
           ~(~(unaff_RDI & 0xffffffffc53d7524) & (unaff_RDI | 0xffffffffc53d7524)));
  *plVar1 = in_RAX;
  plVar1[-1] = unaff_RSI;
  uVar3 = plVar1[-1];
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  plVar1[-1] = param_1;
  uVar4 = plVar1[-1];
  plVar1[-1] = unaff_R12;
  uVar5 = plVar1[-1];
  lVar7 = (-~unaff_R15 - ((uVar2 ^ 0xffffffffffffffff) + 2)) + (uVar2 & unaff_R15) * -2;
  plVar1[-1] = param_2;
  uVar6 = plVar1[-1];
  *plVar1 = *(longlong *)(unaff_R13 + -0x70);
  plVar1[-1] = lVar7;
  plVar1[-2] = lVar7;
  uVar2 = *(ulonglong *)(unaff_R13 + -8);
  plVar1[-1] = 0;
  plVar1[-1] = plVar1[-1] ^ uVar2;
  plVar1[-2] = uVar5;
  plVar1[-3] = uVar5;
  plVar1[-4] = in_R11;
  plVar1[-5] = uVar3;
  plVar1[-5] = unaff_R14;
  FUN_14d900807(uVar4,uVar6);
  return;
}



// FUNCTION 14da3f425 FUN_14da3f425 body=508 status=ok
// SIG undefined FUN_14da3f425(void)

/* WARNING: Removing unreachable block (ram,0x00014da3f4ca) */
/* WARNING: Removing unreachable block (ram,0x00014da3f503) */
/* WARNING: Removing unreachable block (ram,0x00014da3f516) */
/* WARNING: Removing unreachable block (ram,0x00014da3f545) */
/* WARNING: Removing unreachable block (ram,0x00014da3f54a) */
/* WARNING: Removing unreachable block (ram,0x00014da3f563) */
/* WARNING: Removing unreachable block (ram,0x00014da3f569) */
/* WARNING: Removing unreachable block (ram,0x000162511d88) */
/* WARNING: Removing unreachable block (ram,0x000162511da0) */
/* WARNING: Removing unreachable block (ram,0x000162511dcf) */
/* WARNING: Removing unreachable block (ram,0x000162511df6) */
/* WARNING: Removing unreachable block (ram,0x000162511e14) */
/* WARNING: Removing unreachable block (ram,0x000162201a0e) */
/* WARNING: Removing unreachable block (ram,0x000162201a49) */
/* WARNING: Removing unreachable block (ram,0x000162201a4e) */
/* WARNING: Removing unreachable block (ram,0x000162201a7b) */
/* WARNING: Removing unreachable block (ram,0x000162201a80) */
/* WARNING: Removing unreachable block (ram,0x000162201a86) */
/* WARNING: Removing unreachable block (ram,0x000162201a8c) */
/* WARNING: Removing unreachable block (ram,0x000162201b3e) */
/* WARNING: Removing unreachable block (ram,0x0001656a8714) */
/* WARNING: Removing unreachable block (ram,0x000162511e1b) */
/* WARNING: Removing unreachable block (ram,0x000162511e21) */
/* WARNING: Removing unreachable block (ram,0x000162511e26) */
/* WARNING: Removing unreachable block (ram,0x000162511ea4) */
/* WARNING: Removing unreachable block (ram,0x000162511eaa) */
/* WARNING: Removing unreachable block (ram,0x000162511eaf) */
/* WARNING: Removing unreachable block (ram,0x00015b3883ac) */
/* WARNING: Removing unreachable block (ram,0x00014da3f4bf) */

void FUN_14da3f425(void)

{
  FUN_15b25749d();
  return;
}



// FUNCTION 14da3f626 FUN_14da3f626 body=139 status=ok
// SIG undefined FUN_14da3f626(void)

/* WARNING: Removing unreachable block (ram,0x00014da3f731) */

longlong FUN_14da3f626(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  param_1 = param_1 ^ unaff_R15;
  FUN_165ac43c4(param_1,(*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
                        (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2,param_3);
  if ((longlong)(*(ulonglong *)(unaff_RBX + -0x88) ^ param_1) < 0) {
    return unaff_R13;
  }
  lVar1 = FUN_166db3e93();
  return lVar1;
}



// FUNCTION 14da3f6b2 FUN_14da3f6b2 body=126 status=ok
// SIG undefined FUN_14da3f6b2(void)

/* WARNING: Removing unreachable block (ram,0x00014da3f731) */

undefined8 FUN_14da3f6b2(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x88) ^ param_1) < 0) {
    return unaff_retaddr;
  }
  uVar1 = FUN_166db3e93();
  return uVar1;
}



// FUNCTION 14da3f731 FUN_14da3f731 body=81 status=ok
// SIG undefined FUN_14da3f731(void)

undefined8 FUN_14da3f731(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da3f7e3 FUN_14da3f7e3 body=155 status=ok
// SIG undefined FUN_14da3f7e3(void)

void FUN_14da3f7e3(void)

{
  return;
}



// FUNCTION 14da3fa50 FUN_14da3fa50 body=159 status=ok
// SIG undefined FUN_14da3fa50(void)

void FUN_14da3fa50(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong in_RAX;
  code *pcVar7;
  longlong in_R10;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong lStackX_8;
  ulonglong local_res10 [3];
  
  puVar2 = (ulonglong *)(param_5 ^ in_RAX);
  local_res10[2] =
       ~(local_res10[2] & in_RAX) &
       (*(ulonglong *)((longlong)local_res10 + (unaff_R13 ^ in_R10 + 0x42d3bab7U)) | in_RAX) &
       0xfffffffffffffeff;
  pcVar7 = (code *)swi(0x2e);
  (*pcVar7)();
  *puVar2 = param_4;
  puVar2[-1] = param_4;
  *(undefined4 *)(puVar2 + -2) = 0xd42601d;
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
  pcVar7 = FUN_161a6c213;
  puVar2[-3] = (ulonglong)thunk_FUN_14da3faf5;
  FUN_161a6c213();
  *puVar2 = param_2;
  uVar5 = puVar2[-1];
  puVar1 = puVar2 + -1;
  *puVar1 = (ulonglong)pcVar7;
  puVar2[-2] = *(ulonglong *)(lStackX_8 + -0xa0);
  uVar6 = *puVar1;
  *puVar1 = param_3;
  puVar2[-2] = unaff_retaddr;
  uVar3 = *puVar1;
  *puVar2 = *puVar2 ^ unaff_R15;
  *puVar1 = param_1;
  uVar4 = puVar2[1];
  puVar2[1] = puVar2[1] & unaff_R15;
  puVar2[1] = puVar2[1] ^ 0xffffffffffffffff;
  puVar2[1] = puVar2[1] & (uVar4 | unaff_R15);
  (*(code *)0x162b3983d)(0x162b3983d,uVar5,uVar3,uVar6);
  return;
}



// FUNCTION 14da3faef thunk_FUN_14da3faf5 body=5 status=ok
// SIG undefined thunk_FUN_14da3faf5(void)

void thunk_FUN_14da3faf5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 uStackX_8;
  
  (*(code *)0x162b3983d)(0x162b3983d,uStackX_8,param_3,param_4);
  return;
}



// FUNCTION 14da3faf5 FUN_14da3faf5 body=144 status=ok
// SIG undefined FUN_14da3faf5(void)

void FUN_14da3faf5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  (*(code *)0x162b3983d)(0x162b3983d,local_res8,param_3,param_4);
  return;
}



// FUNCTION 14da3fc13 FUN_14da3fc13 body=44 status=ok
// SIG undefined FUN_14da3fc13(void)

undefined1 FUN_14da3fc13(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 uStackX_8;
  longlong local_res18;
  
  LOCK();
  uVar1 = FUN_14d7a8082;
  UNLOCK();
  FUN_14d7a8082 = in_AL;
  *(undefined8 *)(local_res18 + -8) = 0x339ca;
  *(undefined8 *)(local_res18 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(code **)(local_res18 + -0x10) = FUN_15b3d5987;
  return uVar1;
}



// FUNCTION 14da3fc9f FUN_14da3fc9f body=103 status=ok
// SIG undefined FUN_14da3fc9f(void)

void FUN_14da3fc9f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  ulonglong uStackX_18;
  
  uVar2 = uStackX_18 ^ unaff_RBP;
  *(undefined8 *)(uVar2 - 8) = param_3;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x4b8398bc;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_1573c3e27;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_1573c3e27;
  *(undefined **)(uVar2 - 0x18) = &DAT_14da3fd07;
  return;
}



// FUNCTION 14da3fd36 FUN_14da3fd36 body=93 status=ok
// SIG undefined FUN_14da3fd36(void)

void FUN_14da3fd36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16251f96b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da3fed5 FUN_14da3fed5 body=321 status=ok
// SIG undefined FUN_14da3fed5(void)

/* WARNING: Removing unreachable block (ram,0x00014da3ff5b) */

void FUN_14da3fed5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined **)(local_res18 + -8) = &DAT_160da8887;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7a7aa5;
  return;
}



// FUNCTION 14da40113 FUN_14da40113 body=150 status=ok
// SIG undefined FUN_14da40113(void)

void FUN_14da40113(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  (*(code *)0x1623c3278)(param_1,unaff_RSI + param_2 * -2);
  return;
}



// FUNCTION 14da401ab FUN_14da401ab body=164 status=ok
// SIG undefined FUN_14da401ab(void)

void FUN_14da401ab(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint unaff_R12D;
  
  (*(code *)&LAB_1565a0b46)(param_1,param_2,param_3 & unaff_R12D | param_4,&LAB_1565a0b46);
  return;
}



// FUNCTION 14da40250 FUN_14da40250 body=121 status=ok
// SIG undefined FUN_14da40250(void)

void FUN_14da40250(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong *unaff_R15;
  
  uVar1 = *unaff_R15;
  uVar2 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | in_RAX;
  *unaff_R15 = (~*unaff_R15 | ((-1 - (~in_RAX & uVar1)) + uVar2) - in_RAX) + *unaff_R15 + 1 ^
               0xffffffffffffffff;
  (*(code *)&LAB_14df7a671)(param_1,param_2);
  return;
}



// FUNCTION 14da40347 thunk_FUN_14da4034d body=5 status=ok
// SIG undefined thunk_FUN_14da4034d(void)

void thunk_FUN_14da4034d(void)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dae92d5(*(ulonglong *)(unaff_R13 + unaff_RDI) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + unaff_RDI) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da4034d FUN_14da4034d body=143 status=ok
// SIG undefined FUN_14da4034d(void)

void FUN_14da4034d(void)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dae92d5(*(ulonglong *)(unaff_R13 + unaff_RDI) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + unaff_RDI) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da40453 FUN_14da40453 body=148 status=ok
// SIG undefined FUN_14da40453(void)

void FUN_14da40453(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x165a0107b)(in_stack_00000010,param_2,param_3);
  return;
}



// FUNCTION 14da4055b FUN_14da4055b body=65 status=ok
// SIG undefined FUN_14da4055b(void)

void FUN_14da4055b(void)

{
  return;
}



// FUNCTION 14da40621 FUN_14da40621 body=142 status=ok
// SIG undefined FUN_14da40621(void)

void FUN_14da40621(void)

{
  return;
}



// FUNCTION 14da40733 FUN_14da40733 body=36 status=ok
// SIG undefined FUN_14da40733(void)

void FUN_14da40733(void)

{
  return;
}



// FUNCTION 14da407cb FUN_14da407cb body=149 status=ok
// SIG undefined FUN_14da407cb(void)

/* WARNING: Removing unreachable block (ram,0x00014da4084b) */

void FUN_14da407cb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16224b5de(*(undefined8 *)(unaff_RSI + param_1),~unaff_RBP,param_3,FUN_16224b5de);
  return;
}



// FUNCTION 14da40983 FUN_14da40983 body=133 status=ok
// SIG undefined FUN_14da40983(void)

void FUN_14da40983(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 in_R11;
  ushort unaff_R14W;
  short unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *param_1 = ~*param_1;
  *param_1 = *param_1 | ~((unaff_retaddr + -1) - ~unaff_R14W);
  *param_1 = ~*param_1;
  *(undefined8 *)(param_5 + -0x10) = uStackX_18;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  *(undefined8 *)(param_5 + -0x20) = uStackX_8;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(undefined4 *)(param_5 + -0x30) = 0x4d45ea09;
  *(undefined4 *)(param_5 + -0x2c) = 0;
  uVar1 = *(undefined8 *)(param_5 + -0x28);
  *(undefined8 *)(param_5 + -0x18 + (*(ulonglong *)(param_5 + -0x30) ^ 0x4d45ea01)) =
       *(undefined8 *)(param_5 + -8);
  FUN_1655ebabf(uStackX_10,param_2,uVar1);
  return;
}



// FUNCTION 14da40a09 thunk_FUN_14da40a0f body=5 status=ok
// SIG undefined thunk_FUN_14da40a0f(void)

undefined8 thunk_FUN_14da40a0f(void)

{
  short sVar1;
  short in_AX;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  short unaff_R14W;
  undefined8 unaff_retaddr;
  short *psStackX_8;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  sVar1 = *psStackX_8;
  *psStackX_8 = -0x5254;
  *psStackX_8 = *psStackX_8 + 0x5254;
  *psStackX_8 = *psStackX_8 + (in_AX - unaff_R14W) + sVar1;
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x28) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x30) = in_R10;
  *(code **)(in_stack_00000028 + -0x20) = FUN_14da40ab6;
  *(undefined1 **)(in_stack_00000028 + -0x28) = &LAB_14d8ef64d;
  return unaff_retaddr;
}



// FUNCTION 14da40a0f FUN_14da40a0f body=165 status=ok
// SIG undefined FUN_14da40a0f(void)

undefined8 FUN_14da40a0f(void)

{
  short sVar1;
  short in_AX;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  short unaff_R14W;
  undefined8 unaff_retaddr;
  short *psStackX_8;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  sVar1 = *psStackX_8;
  *psStackX_8 = -0x5254;
  *psStackX_8 = *psStackX_8 + 0x5254;
  *psStackX_8 = *psStackX_8 + (in_AX - unaff_R14W) + sVar1;
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x28) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x30) = in_R10;
  *(code **)(in_stack_00000028 + -0x20) = FUN_14da40ab6;
  *(undefined1 **)(in_stack_00000028 + -0x28) = &LAB_14d8ef64d;
  return unaff_retaddr;
}



// FUNCTION 14da40ab6 FUN_14da40ab6 body=207 status=ok
// SIG undefined FUN_14da40ab6(void)

undefined8 FUN_14da40ab6(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  
  FUN_1624713d1(param_1,unaff_RDI + *(longlong *)(unaff_R12 + unaff_RSI) ^ in_RAX);
  return unaff_R13;
}



// FUNCTION 14da40c04 FUN_14da40c04 body=200 status=ok
// SIG undefined FUN_14da40c04(void)

/* WARNING: Removing unreachable block (ram,0x00014da40c8d) */

void FUN_14da40c04(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_156f26a10(param_1,*(undefined8 *)(unaff_RDI + -0x28),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                (~(~param_1 & uVar1) + uVar1) - param_1 & (~uVar1 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14da40c93 FUN_14da40c93 body=546 status=ok
// SIG undefined FUN_14da40c93(void)

/* WARNING: Removing unreachable block (ram,0x000165b9cba7) */
/* WARNING: Removing unreachable block (ram,0x00014da3ec0f) */

undefined8 FUN_14da40c93(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  lVar2 = unaff_RBP - (unaff_RDI & 0xfffffffffffffffe);
  uVar1 = *(ulonglong *)(unaff_retaddr + -0x70) ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(longlong *)(uVar1 - 0x10) = lVar2;
  *(longlong *)(uVar1 - 0x18) = lVar2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined **)(uVar1 - 8) = &DAT_162d1e909;
  uVar3 = FUN_14d7aa151(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 14da40dad FUN_14da40dad body=171 status=ok
// SIG undefined FUN_14da40dad(void)

/* WARNING: Removing unreachable block (ram,0x00014da40e53) */
/* WARNING: Removing unreachable block (ram,0x00014da40e59) */

void FUN_14da40dad(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar8;
  longlong unaff_RDI;
  ulonglong uVar9;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong auStack_30 [6];
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x88);
  *(undefined8 *)(&stack0x00000000 + unaff_RBP) = *(undefined8 *)(unaff_RDI + -0x90);
  *(longlong *)((longlong)auStack_30 + unaff_RBP + 0x28) = unaff_RBX;
  plVar1 = (longlong *)((longlong)auStack_30 + unaff_RBP + 0x20);
  *plVar1 = unaff_RBX;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18) = unaff_retaddr;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x28) = *(undefined8 *)(unaff_RDI + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + (unaff_RSI ^ param_1);
  *(longlong *)((longlong)auStack_30 + unaff_RBP + 0x18) = *plVar1;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x10) = in_R10;
  *plVar1 = *(longlong *)(unaff_RDI + -0x98);
  uVar3 = *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18);
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18) = unaff_R14;
  uVar8 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar4 = *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18);
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18) = param_4;
  uVar9 = 0xffffffffffffffff - param_1 | uVar8;
  *(ulonglong *)((longlong)auStack_30 + unaff_RBP + 0x10) = param_1;
  uVar5 = *(ulonglong *)((longlong)auStack_30 + unaff_RBP + 0x10);
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x10) = uVar3;
  uVar8 = ~uVar5 & ~uVar8 | uVar5;
  uVar3 = *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x10);
  *(ulonglong *)((longlong)auStack_30 + unaff_RBP + 0x10) = uVar5;
  uVar6 = *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x10);
  *(ulonglong *)((longlong)auStack_30 + unaff_RBP + 0x10) = ~((uVar8 - (uVar9 | uVar8)) + uVar9);
  uVar7 = *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x18);
  *(ulonglong *)((longlong)auStack_30 + unaff_RBP + 0x18) = uVar2 ^ param_1;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 0x10) = uVar4;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP + 8) = uVar3;
  *(undefined8 *)((longlong)auStack_30 + unaff_RBP) = uVar3;
  *(undefined **)((longlong)auStack_30 + unaff_RBP + 8) = &DAT_162eabbfa;
  FUN_161558e01(uVar6,param_2,param_3,uVar7);
  return;
}



// FUNCTION 14da40e59 FUN_14da40e59 body=59 status=ok
// SIG undefined FUN_14da40e59(void)

void FUN_14da40e59(void)

{
  return;
}



// FUNCTION 14da4117d FUN_14da4117d body=47 status=ok
// SIG undefined FUN_14da4117d(void)

void FUN_14da4117d(void)

{
  return;
}



// FUNCTION 14da41217 FUN_14da41217 body=10 status=ok
// SIG undefined FUN_14da41217(void)

void FUN_14da41217(void)

{
  return;
}



// FUNCTION 14da41347 FUN_14da41347 body=169 status=ok
// SIG undefined FUN_14da41347(void)

void FUN_14da41347(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  uVar1 = unaff_R15 ^ 0x2e6714c0;
  *(undefined8 *)(param_3 + uVar1) = 0x12538a3b;
  *(ulonglong *)(param_3 + uVar1) = *(ulonglong *)(param_3 + uVar1) ^ 0x12538a3b;
  *(longlong *)(param_3 + uVar1) = *(longlong *)(param_3 + uVar1) + unaff_RDI;
  *(undefined8 *)(param_5 + -8) = uStackX_18;
  *(undefined8 *)(param_5 + -0x10) = param_1;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(undefined8 *)(param_5 + -0x20) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x20) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
  FUN_16578aae3(FUN_16578aae3,param_2,uStackX_8);
  return;
}



// FUNCTION 14da41861 FUN_14da41861 body=457 status=ok
// SIG undefined FUN_14da41861(void)

/* WARNING: Removing unreachable block (ram,0x00014da418f2) */
/* WARNING: Removing unreachable block (ram,0x00014da41909) */

undefined8 FUN_14da41861(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1668580d4(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14da419ab FUN_14da419ab body=153 status=ok
// SIG undefined FUN_14da419ab(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da419ab(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d855490(param_1,0xfffffffffffffff8,(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) << 1,
                unaff_RBP & (~((~unaff_R15 | param_4) + unaff_R15 + 1) + unaff_R15) - ~param_4 ^
                0xffffffffffffffff);
  return;
}



// FUNCTION 14da41ac8 FUN_14da41ac8 body=692 status=ok
// SIG undefined FUN_14da41ac8(void)

/* WARNING: Removing unreachable block (ram,0x000161b11054) */
/* WARNING: Removing unreachable block (ram,0x000161b1105f) */
/* WARNING: Removing unreachable block (ram,0x000161b1105a) */
/* WARNING: Removing unreachable block (ram,0x00014da41b5d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da41ac8(void)

{
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  FUN_161ce6193(*(ulonglong *)(unaff_retaddr + -0x38) ^ unaff_RBP,
                -~unaff_RBP - (~*(ulonglong *)(unaff_retaddr + -0x80) + 2),
                *(ulonglong *)(unaff_retaddr + -0x60) ^ unaff_RBP);
  FUN_156a0f7c3();
  return;
}



// FUNCTION 14da41b5d FUN_14da41b5d body=14 status=ok
// SIG undefined FUN_14da41b5d(void)

void FUN_14da41b5d(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da41dbc FUN_14da41dbc body=297 status=ok
// SIG undefined FUN_14da41dbc(void)

/* WARNING: Removing unreachable block (ram,0x00014da41e52) */
/* WARNING: Removing unreachable block (ram,0x00014da41e63) */
/* WARNING: Removing unreachable block (ram,0x00014da41e84) */
/* WARNING: Removing unreachable block (ram,0x00014da41e7f) */
/* WARNING: Removing unreachable block (ram,0x00014da41eab) */
/* WARNING: Removing unreachable block (ram,0x00014da41ebb) */
/* WARNING: Removing unreachable block (ram,0x00014da41e5e) */

undefined8 FUN_14da41dbc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14dd620dd();
  return uVar1;
}



// FUNCTION 14da41f06 FUN_14da41f06 body=891 status=ok
// SIG undefined FUN_14da41f06(void)

/* WARNING: Removing unreachable block (ram,0x00016641e08c) */
/* WARNING: Removing unreachable block (ram,0x00016641e097) */
/* WARNING: Removing unreachable block (ram,0x00016641e0a0) */
/* WARNING: Removing unreachable block (ram,0x00016641e0a2) */
/* WARNING: Removing unreachable block (ram,0x00015724c953) */
/* WARNING: Removing unreachable block (ram,0x00016641dfeb) */
/* WARNING: Removing unreachable block (ram,0x000160dcb7ef) */
/* WARNING: Removing unreachable block (ram,0x00015b8bf579) */
/* WARNING: Removing unreachable block (ram,0x000165743d96) */
/* WARNING: Removing unreachable block (ram,0x000165743d9c) */
/* WARNING: Removing unreachable block (ram,0x000165743da2) */
/* WARNING: Removing unreachable block (ram,0x00015b8bf570) */
/* WARNING: Removing unreachable block (ram,0x00016641e092) */
/* WARNING: Removing unreachable block (ram,0x000166c0b9f6) */
/* WARNING: Removing unreachable block (ram,0x00014da41f94) */
/* WARNING: Removing unreachable block (ram,0x00014da41ffd) */
/* WARNING: Removing unreachable block (ram,0x00014da41feb) */
/* WARNING: Removing unreachable block (ram,0x00014da42025) */
/* WARNING: Removing unreachable block (ram,0x00014da4204d) */
/* WARNING: Removing unreachable block (ram,0x00014da4204f) */
/* WARNING: Removing unreachable block (ram,0x00014da421a9) */
/* WARNING: Removing unreachable block (ram,0x000166c0b836) */
/* WARNING: Removing unreachable block (ram,0x000166c0b8ba) */
/* WARNING: Removing unreachable block (ram,0x000166c0b8bf) */
/* WARNING: Removing unreachable block (ram,0x000166c0b8c5) */
/* WARNING: Removing unreachable block (ram,0x000166c0b8ca) */
/* WARNING: Removing unreachable block (ram,0x000166c0b9eb) */
/* WARNING: Removing unreachable block (ram,0x0001651ba1c6) */
/* WARNING: Removing unreachable block (ram,0x0001651ba232) */
/* WARNING: Removing unreachable block (ram,0x0001651ba238) */
/* WARNING: Removing unreachable block (ram,0x0001654094ed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da41f06(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16641dfeb();
  return uVar1;
}



// FUNCTION 14da421b3 FUN_14da421b3 body=5 status=ok
// SIG undefined FUN_14da421b3(void)

void FUN_14da421b3(void)

{
  return;
}



// FUNCTION 14da425b6 FUN_14da425b6 body=3 status=ok
// SIG undefined FUN_14da425b6(void)

void FUN_14da425b6(void)

{
  return;
}



// FUNCTION 14da42810 FUN_14da42810 body=136 status=ok
// SIG undefined FUN_14da42810(void)

void FUN_14da42810(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161356392(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da42bb6 FUN_14da42bb6 body=200 status=ok
// SIG undefined FUN_14da42bb6(void)

undefined8 FUN_14da42bb6(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uStackX_8;
  undefined4 auStackX_10 [6];
  ulonglong auStack_18 [3];
  
  lVar2 = unaff_RSI + ~(~((unaff_RBP | 0x6e4a2b9f) - 0x6e4a2b9f) & (unaff_RDI | 0xffffffff91b5d460))
  ;
  if ((uStackX_8 & 1) != 0) {
    lVar2 = lVar2 + 1;
  }
  uVar1 = param_2 - lVar2;
  *(undefined4 *)((longlong)auStackX_10 + uVar1) = 0x49e695f2;
  *(undefined4 *)((longlong)auStackX_10 + uVar1 + 4) = 0;
  *(longlong *)((longlong)auStackX_10 + (uVar1 - 8)) = lVar2;
  *(longlong *)((longlong)auStackX_10 + (uVar1 - 0x10)) = lVar2;
  *(longlong *)((longlong)auStack_18 + uVar1 + 0x10) = lVar2;
  *(code **)((longlong)auStackX_10 + (uVar1 - 8)) = FUN_14da42c82;
  *(undefined8 *)((longlong)auStack_18 + uVar1 + 8) = in_RAX;
  *(ulonglong *)((longlong)auStack_18 + uVar1) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)SCARRY8((longlong)auStackX_10,uVar1) * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200
       | (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 |
       (ulonglong)((longlong)((longlong)auStackX_10 + uVar1) < 0) * 0x80 |
       (ulonglong)((undefined1 *)((longlong)auStackX_10 + uVar1) == (undefined1 *)0x0) * 0x40 |
       (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT((longlong)auStackX_10 + uVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)auStackX_10,uVar1) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)((longlong)auStackX_10 + (uVar1 - 0x10)) = 0x16690e842;
  return *(undefined8 *)((longlong)auStack_18 + uVar1 + 8);
}



// FUNCTION 14da42c82 FUN_14da42c82 body=238 status=ok
// SIG undefined FUN_14da42c82(void)

/* WARNING: Removing unreachable block (ram,0x00014da42d21) */

undefined1 * FUN_14da42c82(void)

{
  undefined1 local_res20 [8];
  
  return local_res20;
}



// FUNCTION 14da42e3b FUN_14da42e3b body=163 status=ok
// SIG undefined FUN_14da42e3b(void)

void FUN_14da42e3b(undefined8 param_1)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_15b1975f1(param_1,unaff_RBP ^ unaff_R15);
  FUN_14da42edf();
  return;
}



// FUNCTION 14da42edf FUN_14da42edf body=291 status=ok
// SIG undefined FUN_14da42edf(void)

/* WARNING: Removing unreachable block (ram,0x00014da42f5f) */
/* WARNING: Removing unreachable block (ram,0x00014da42f76) */
/* WARNING: Removing unreachable block (ram,0x00014da42f7d) */
/* WARNING: Removing unreachable block (ram,0x00014da42ff8) */
/* WARNING: Removing unreachable block (ram,0x00014da42ffd) */
/* WARNING: Removing unreachable block (ram,0x00014da43003) */
/* WARNING: Removing unreachable block (ram,0x000156e3fdfd) */

void FUN_14da42edf(void)

{
  return;
}



// FUNCTION 14da43003 FUN_14da43003 body=129 status=ok
// SIG undefined FUN_14da43003(void)

void FUN_14da43003(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_15b0ab224(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14da43379 FUN_14da43379 body=144 status=ok
// SIG undefined FUN_14da43379(void)

/* WARNING: Removing unreachable block (ram,0x000162f16b94) */
/* WARNING: Removing unreachable block (ram,0x000162f16ba5) */
/* WARNING: Removing unreachable block (ram,0x000162f16ba0) */
/* WARNING: Removing unreachable block (ram,0x00014da4340a) */

void FUN_14da43379(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  ulonglong *unaff_R13;
  undefined8 in_stack_00000010;
  
  uVar2 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = ~param_1 & *unaff_R13 | param_1;
  *unaff_R13 = ~((~param_1 | uVar2) & *unaff_R13);
  param_5 = param_5 ^ param_1;
  if (-1 < (char)(-2 - ~(byte)param_1)) {
    FUN_162f16af5();
    return;
  }
  plVar1 = (longlong *)(param_5 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R12;
  *(undefined8 *)(param_5 - 0x10) = param_2;
  *(undefined8 *)(param_5 - 0x18) = param_2;
  uVar3 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = param_4;
  *(undefined8 *)(param_5 - 0x28) = in_stack_00000010;
  *(undefined8 *)(param_5 - 0x10) = uVar3;
  uVar3 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 8) = 0x7e43c9ec;
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ 0x7e43c9ec;
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ 0x1669bcdbb;
  *(undefined8 *)(param_5 - 0x10) = uVar3;
  *(undefined8 *)(param_5 - 0x18) = uVar3;
  *(undefined8 *)(param_5 - 0x20) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x10) = 0x14d7bd370;
  return;
}



// FUNCTION 14da4340a FUN_14da4340a body=123 status=ok
// SIG undefined FUN_14da4340a(void)

void FUN_14da4340a(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  ulonglong unaff_R13;
  
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | in_RAX;
  *(ulonglong *)(unaff_RSI + 8) =
       ~((*(longlong *)(unaff_RSI + 8) - (unaff_R13 | *(ulonglong *)(unaff_RSI + 8))) + unaff_R13);
  FUN_156af94e6(param_1,param_2);
  return;
}



// FUNCTION 14da43488 FUN_14da43488 body=260 status=ok
// SIG undefined FUN_14da43488(void)

void FUN_14da43488(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_R15;
  
  FUN_164b70c31(CONCAT62((int6)((ulonglong)param_1 >> 0x10),0x2a38) ^ 0xd4c7,param_2);
  FUN_1660dde15(unaff_R15);
  return;
}



// FUNCTION 14da43744 FUN_14da43744 body=137 status=ok
// SIG undefined FUN_14da43744(void)

void FUN_14da43744(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  uVar2 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + unaff_R15 + 1;
  (*(code *)&LAB_1613c5d27)(~param_2,(uVar2 & ~uVar1 | ~uVar2) + uVar1 + 1);
  return;
}



// FUNCTION 14da437ce FUN_14da437ce body=152 status=ok
// SIG undefined FUN_14da437ce(void)

/* WARNING: Removing unreachable block (ram,0x00014da43863) */
/* WARNING: Removing unreachable block (ram,0x00014da43858) */

undefined8 FUN_14da437ce(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da43867 FUN_14da43867 body=282 status=ok
// SIG undefined FUN_14da43867(void)

undefined8 FUN_14da43867(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 == 0x3c322) {
    return in_RAX;
  }
  if (param_2 == 0x3c323) {
    return 0x1565b2878;
  }
  if (param_2 == 0x3c483) {
    return in_RAX;
  }
  uVar1 = FUN_166db5b58(param_1,param_2,param_2);
  return uVar1;
}



// FUNCTION 14da43981 thunk_FUN_14da43987 body=5 status=ok
// SIG undefined thunk_FUN_14da43987(void)

/* WARNING: Removing unreachable block (ram,0x00016676a6a7) */
/* WARNING: Removing unreachable block (ram,0x00016676a6a1) */
/* WARNING: Removing unreachable block (ram,0x00016676a6ac) */
/* WARNING: Removing unreachable block (ram,0x00016676a6c4) */
/* WARNING: Removing unreachable block (ram,0x00016676a6c7) */
/* WARNING: Removing unreachable block (ram,0x00016676a603) */
/* WARNING: Removing unreachable block (ram,0x00016676a60e) */
/* WARNING: Removing unreachable block (ram,0x0001619dd621) */
/* WARNING: Removing unreachable block (ram,0x00016676a609) */
/* WARNING: Removing unreachable block (ram,0x00014da43a18) */

undefined8 thunk_FUN_14da43987(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  int unaff_retaddr;
  
  if (unaff_R15 - 1U <
      ~(CONCAT44(0x71704143,unaff_retaddr + param_2 + 0x2a5d26c9) ^ 0x7170414300000000 ^
       *(ulonglong *)(unaff_R13 + -0x68))) {
    uVar1 = FUN_16676a56e();
    return uVar1;
  }
  uVar1 = FUN_16678c834();
  return uVar1;
}



// FUNCTION 14da43987 FUN_14da43987 body=280 status=ok
// SIG undefined FUN_14da43987(void)

/* WARNING: Removing unreachable block (ram,0x00016676a6a7) */
/* WARNING: Removing unreachable block (ram,0x00016676a6a1) */
/* WARNING: Removing unreachable block (ram,0x00016676a6ac) */
/* WARNING: Removing unreachable block (ram,0x00016676a6c4) */
/* WARNING: Removing unreachable block (ram,0x00016676a6c7) */
/* WARNING: Removing unreachable block (ram,0x00016676a603) */
/* WARNING: Removing unreachable block (ram,0x00016676a60e) */
/* WARNING: Removing unreachable block (ram,0x0001619dd621) */
/* WARNING: Removing unreachable block (ram,0x00016676a609) */
/* WARNING: Removing unreachable block (ram,0x00014da43a18) */

undefined8 FUN_14da43987(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  int unaff_retaddr;
  
  if (unaff_R15 - 1U <
      ~(CONCAT44(0x71704143,unaff_retaddr + param_2 + 0x2a5d26c9) ^ 0x7170414300000000 ^
       *(ulonglong *)(unaff_R13 + -0x68))) {
    uVar1 = FUN_16676a56e();
    return uVar1;
  }
  uVar1 = FUN_16678c834();
  return uVar1;
}



// FUNCTION 14da43be0 FUN_14da43be0 body=63 status=ok
// SIG undefined FUN_14da43be0(void)

void FUN_14da43be0(void)

{
  return;
}



// FUNCTION 14da43d11 FUN_14da43d11 body=132 status=ok
// SIG undefined FUN_14da43d11(void)

void FUN_14da43d11(undefined8 param_1)

{
  FUN_1664cb145(param_1);
  return;
}



// FUNCTION 14da43e3e FUN_14da43e3e body=438 status=ok
// SIG undefined FUN_14da43e3e(void)

/* WARNING: Removing unreachable block (ram,0x00014db503d4) */
/* WARNING: Removing unreachable block (ram,0x00014db5033b) */
/* WARNING: Removing unreachable block (ram,0x00014da43f70) */
/* WARNING: Removing unreachable block (ram,0x00014da43ec3) */
/* WARNING: Removing unreachable block (ram,0x00014da43eda) */
/* WARNING: Removing unreachable block (ram,0x00014da43ed5) */
/* WARNING: Removing unreachable block (ram,0x00014da43ee1) */
/* WARNING: Removing unreachable block (ram,0x00014da43f65) */
/* WARNING: Removing unreachable block (ram,0x00014da43f60) */
/* WARNING: Removing unreachable block (ram,0x00014db50229) */
/* WARNING: Removing unreachable block (ram,0x00014db50335) */
/* WARNING: Removing unreachable block (ram,0x000160ca922b) */

void FUN_14da43e3e(void)

{
  ulonglong unaff_R15;
  undefined8 in_stack_00000018;
  undefined8 local_res20;
  
  if (-1 < (longlong)(local_res20 ^ unaff_R15)) {
    FUN_161bb3bf3(in_stack_00000018);
    return;
  }
  FUN_161bb3bf3(in_stack_00000018);
  return;
}



// FUNCTION 14da4407f FUN_14da4407f body=287 status=ok
// SIG undefined FUN_14da4407f(void)

/* WARNING: Removing unreachable block (ram,0x00014da44116) */
/* WARNING: Removing unreachable block (ram,0x00014da4411c) */

void FUN_14da4407f(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc8b94) {
    return;
  }
  FUN_166bea3e2();
  return;
}



// FUNCTION 14da442d7 FUN_14da442d7 body=169 status=ok
// SIG undefined FUN_14da442d7(void)

void FUN_14da442d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_RBP;
  *(undefined8 *)(param_1 - 0x10) = param_4;
  *(undefined8 *)(param_1 - 0x18) = param_4;
  *(undefined8 *)(param_1 - 0x20) = unaff_RDI;
  *(undefined8 *)(param_1 - 0x28) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x30) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x38) = unaff_RBX;
  *(code **)(param_1 - 0x28) = FUN_14da44382;
  *(undefined8 *)(param_1 - 0x30) = 0x16245c1ea;
  return;
}



// FUNCTION 14da44382 FUN_14da44382 body=437 status=ok
// SIG undefined FUN_14da44382(void)

ulonglong FUN_14da44382(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  
  uVar2 = (~param_1 | local_res8) & (0xffffffffffffffff - local_res8 | param_1) ^ 0xffffffffffffffff
  ;
  param_1 = local_res10 ^ param_1;
  *(undefined8 *)(param_1 - 8) = param_4;
  *(undefined8 *)(param_1 - 0x10) = param_4;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(param_1 - 0x20) = 0x6b4c608;
  *(undefined4 *)(param_1 - 0x1c) = 0;
  *(undefined8 *)(param_1 - 0x28) = 0x14da44409;
  uVar3 = FUN_1660fa3df();
  uVar3 = ~*(ulonglong *)(unaff_R12 + -0x38) & uVar3;
  *(undefined8 *)(param_1 - 0x20) = 0x14da444b0;
  FUN_14da7c4c1();
  uVar2 = *(ulonglong *)(uVar3 - 0x58);
  *(ulonglong *)(param_1 - 0x20) = unaff_retaddr;
  uVar1 = *(ulonglong *)(param_1 - 0x20);
  *(ulonglong *)(param_1 - 0x20) = -~unaff_retaddr - (~uVar2 + 2);
  *(ulonglong *)(param_1 - 0x20) = *(longlong *)(param_1 - 0x20) + (uVar2 & unaff_retaddr) * -2;
  uVar2 = *(ulonglong *)(uVar3 - 0x38);
  *(undefined8 *)(param_1 - 0x20) = 0x162c1ddb7;
  return ~((~uVar1 | uVar2) & (~uVar2 | uVar1));
}



// FUNCTION 14da445ce FUN_14da445ce body=317 status=ok
// SIG undefined FUN_14da445ce(void)

void FUN_14da445ce(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  puVar3 = (ushort *)FUN_15b7487c5();
  uVar1 = *puVar3;
  uVar2 = *puVar3;
  *puVar3 = 0;
  *puVar3 = *puVar3 + (-0x101 - (uVar1 | 0xfeff)) + uVar2;
  syscall();
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = unaff_retaddr;
  *(undefined4 *)(local_res18 + -0x18) = 0x123cd652;
  *(undefined4 *)(local_res18 + -0x14) = 0;
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
  *(undefined4 *)(local_res18 + -0x28) = 0x2917c53f;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  FUN_157277337(0x14da446c5);
  return;
}



// FUNCTION 14da449b6 FUN_14da449b6 body=309 status=ok
// SIG undefined FUN_14da449b6(void)

/* WARNING: Removing unreachable block (ram,0x00014da449f6) */

void FUN_14da449b6(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  FUN_15767836d(param_1,param_2,uStackX_8);
  FUN_16255be88(0xd9acdec,0,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da44bf8 FUN_14da44bf8 body=164 status=ok
// SIG undefined FUN_14da44bf8(void)

void FUN_14da44bf8(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong in_RAX;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(in_RAX + -0x10) = param_4;
  uVar1 = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(in_RAX + -8) = uVar1;
  *(undefined8 *)(in_RAX + -0x10) = *(undefined8 *)(unaff_RDI + -0x98);
  *(ulonglong *)(in_RAX + -0x18) =
       CONCAT62((int6)((ulonglong)uVar1 >> 0x10),
                -1 - (short)CONCAT71((int7)((ulonglong)uVar1 >> 8),
                                     (byte)uVar1 << (param_1 & 7) | (byte)uVar1 >> 8 - (param_1 & 7)
                                    ));
  *(undefined4 *)(in_RAX + -0x18) = 0x49d56486;
  *(uint *)(in_RAX + -0x18) = *(uint *)(in_RAX + -0x18) ^ 0x1a5ba4b1;
  *(undefined8 *)(in_RAX + -0x20) = unaff_retaddr;
  *(uint *)(in_RAX + -0x18) = ~*(uint *)(in_RAX + -0x18);
  *(int *)(in_RAX + -0x18) = 0x7fc2f9fe - *(int *)(in_RAX + -0x18);
  *(undefined4 *)(in_RAX + -0x14) = 0xffffffff;
  (*(code *)0x1667876ff)();
  return;
}



// FUNCTION 14da44c9c FUN_14da44c9c body=178 status=ok
// SIG undefined FUN_14da44c9c(void)

void FUN_14da44c9c(undefined8 param_1,undefined8 param_2)

{
  FUN_161de1913(param_1,param_2);
  return;
}



// FUNCTION 14da44d50 FUN_14da44d50 body=331 status=ok
// SIG undefined FUN_14da44d50(void)

/* WARNING: Removing unreachable block (ram,0x00014da44df8) */
/* WARNING: Removing unreachable block (ram,0x00014da44dfe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da44d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x14d921480)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da45122 FUN_14da45122 body=188 status=ok
// SIG undefined FUN_14da45122(void)

/* WARNING: Removing unreachable block (ram,0x00014da451de) */

undefined8 FUN_14da45122(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + (param_2 - param_3));
  *(undefined4 *)puVar1 = 0x321c3a74;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  lVar3 = (-0x321c3a75 - (*puVar1 | 0xffffffffcde3c58b)) + *puVar1;
  uVar4 = param_2 - param_3 & 0xffffffffffff0000;
  uVar7 = *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  uVar5 = *puVar1 & *(ulonglong *)(unaff_RSI + -0x60);
  lVar6 = uVar5 << 1;
  if ((longlong)uVar5 < 0) {
    uVar2 = FUN_14e16eb5d(lVar3,uVar4,lVar6,uVar7);
    return uVar2;
  }
  uVar2 = FUN_14e16eb5d(lVar3,uVar4,lVar6,uVar7);
  return uVar2;
}



// FUNCTION 14da451de FUN_14da451de body=11 status=ok
// SIG undefined FUN_14da451de(void)

void FUN_14da451de(void)

{
  return;
}



// FUNCTION 14da453ca FUN_14da453ca body=158 status=ok
// SIG undefined FUN_14da453ca(void)

void FUN_14da453ca(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14df1e61b(param_1,(*(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  return;
}



// FUNCTION 14da45468 FUN_14da45468 body=170 status=ok
// SIG undefined FUN_14da45468(void)

void FUN_14da45468(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x40) + unaff_R15 != 0) {
    lVar2 = (~(*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) + unaff_R15) -
            ~*(ulonglong *)(unaff_R13 + -0x90);
    bVar1 = (byte)lVar2 & 0x1f;
    (*(code *)0x16207cc90)
              (lVar2,(uint)((param_2 & 0xffffffff) >> bVar1) |
                     (uint)((param_2 & 0xffffffff) << 0x21 - bVar1),lVar2,
               *(ulonglong *)(unaff_R13 + -0x60) & unaff_R15);
    return;
  }
  return;
}



// FUNCTION 14da4551b FUN_14da4551b body=127 status=ok
// SIG undefined FUN_14da4551b(void)

/* WARNING: Removing unreachable block (ram,0x000165603a22) */
/* WARNING: Removing unreachable block (ram,0x00014da4563f) */

void FUN_14da4551b(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_156bf4db8(param_1,~((~(~param_2 | unaff_R15) | unaff_RBP | param_2) + (~param_2 | unaff_R15) +
                         1));
  FUN_162a9f13f();
  return;
}



// FUNCTION 14da4559a FUN_14da4559a body=312 status=ok
// SIG undefined FUN_14da4559a(void)

/* WARNING: Removing unreachable block (ram,0x000165603a22) */
/* WARNING: Removing unreachable block (ram,0x00014da4563f) */

void FUN_14da4559a(void)

{
  FUN_162a9f13f();
  return;
}



// FUNCTION 14da456db FUN_14da456db body=164 status=ok
// SIG undefined FUN_14da456db(void)

/* WARNING: Removing unreachable block (ram,0x00014da45884) */
/* WARNING: Removing unreachable block (ram,0x00014da458a1) */

ulonglong FUN_14da456db(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong unaff_RDI;
  longlong lVar3;
  
  if (param_4 == 0xc92a1) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  FUN_14d851367();
  param_2 = param_2 | param_1;
  lVar3 = param_1 - (unaff_RDI | param_1);
  uVar2 = 0x970a;
  FUN_1663a970a();
  if (uVar2 < 0xb22) {
    uVar1 = FUN_162c36f38();
    return uVar1;
  }
  uVar1 = *(ulonglong *)((~(lVar3 + unaff_RDI) & param_2) - 0x80);
  return ~((param_1 - (uVar1 | param_1)) + uVar1) & (uVar1 | param_1);
}



// FUNCTION 14da45786 FUN_14da45786 body=118 status=ok
// SIG undefined FUN_14da45786(void)

/* WARNING: Removing unreachable block (ram,0x00014da45884) */
/* WARNING: Removing unreachable block (ram,0x00014da458a1) */

ulonglong FUN_14da45786(ulonglong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  longlong lVar3;
  ulonglong in_stack_00000008;
  
  uVar2 = in_stack_00000008 | param_1;
  lVar3 = param_1 - (unaff_RDI | param_1);
  uVar1 = 0x970a;
  FUN_1663a970a();
  if (uVar1 < 0xb22) {
    uVar2 = FUN_162c36f38();
    return uVar2;
  }
  uVar2 = *(ulonglong *)((~(lVar3 + unaff_RDI) & uVar2) - 0x80);
  return ~((param_1 - (uVar2 | param_1)) + uVar2) & (uVar2 | param_1);
}



// FUNCTION 14da457fd FUN_14da457fd body=162 status=ok
// SIG undefined FUN_14da457fd(void)

/* WARNING: Removing unreachable block (ram,0x00014da45884) */
/* WARNING: Removing unreachable block (ram,0x00014da458a1) */

ulonglong FUN_14da457fd(ulonglong param_1,ushort param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if (param_2 < 0xb22) {
    uVar1 = FUN_162c36f38();
    return uVar1;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~((param_1 - (uVar1 | param_1)) + uVar1) & (uVar1 | param_1);
}



// FUNCTION 14da458a1 FUN_14da458a1 body=155 status=ok
// SIG undefined FUN_14da458a1(void)

void FUN_14da458a1(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_1668f302b(param_1 ^ unaff_R15,
                (~(uVar1 | unaff_R15) | ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1)) +
                (uVar1 | unaff_R15) + 1);
  return;
}



// FUNCTION 14da4593e FUN_14da4593e body=161 status=ok
// SIG undefined FUN_14da4593e(void)

void FUN_14da4593e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b155a1c(0xffffffffffffffc0,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40)) &
                 (~*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15)),FUN_15b155a1c);
  return;
}



// FUNCTION 14da45de0 FUN_14da45de0 body=173 status=ok
// SIG undefined FUN_14da45de0(void)

void FUN_14da45de0(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b2dce1e(0xffffffffffffffc0,0xffffffffffffffd0,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14da45f20 FUN_14da45f20 body=101 status=ok
// SIG undefined FUN_14da45f20(void)

void FUN_14da45f20(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong unaff_RBX;
  undefined8 uStackX_8;
  undefined8 local_res10 [3];
  
  local_res10[1] =
       *(undefined8 *)
        ((longlong)local_res10 +
        (param_2 ^ ~(~(unaff_RBX & 0xffffffffcc01b4a7) & (unaff_RBX | 0xffffffffcc01b4a7))));
  local_res10[0] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014da45f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uStackX_8,param_3);
  return;
}



// FUNCTION 14da46155 FUN_14da46155 body=158 status=ok
// SIG undefined FUN_14da46155(void)

void FUN_14da46155(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res10;
  
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_162359a25;
  uVar2 = *(ulonglong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x30) = unaff_R13;
  *(undefined8 *)(local_res10 + -8) = 0xffffffffffffffff;
  *(ulonglong *)(local_res10 + -8) = ~(~uVar2 & *(ulonglong *)(local_res10 + -8));
  *(longlong *)(local_res10 + -8) =
       *(longlong *)(local_res10 + -8) + *(longlong *)(local_res10 + -0x20);
  FUN_1623599f7();
  return;
}



// FUNCTION 14da46448 FUN_14da46448 body=122 status=ok
// SIG undefined FUN_14da46448(void)

void FUN_14da46448(void)

{
  undefined8 in_R11;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined4 *)(local_res18 + -0x20) = 0x7fb63fca;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_14da464c4;
  return;
}



// FUNCTION 14da466af FUN_14da466af body=285 status=ok
// SIG undefined FUN_14da466af(void)

/* WARNING: Removing unreachable block (ram,0x00014da467b9) */
/* WARNING: Removing unreachable block (ram,0x00014da467bf) */
/* WARNING: Removing unreachable block (ram,0x00014da4673b) */

undefined8
FUN_14da466af(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ulonglong *in_R11;
  undefined6 local_res18;
  undefined2 uStackX_1e;
  ulonglong local_res20;
  
  *in_R11 = (in_RAX - (*in_R11 | in_RAX)) + *in_R11;
  uVar1 = local_res20 ^ param_1;
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = param_4;
  *(undefined8 *)(param_5 - 0x10) = param_4;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = in_R10;
  *(undefined8 *)(param_5 - 0x28) = unaff_RBX;
  *(undefined8 *)(param_5 - 8) = 0x4896bbc;
  uVar2 = FUN_165c7153c(CONCAT26(uStackX_1e,local_res18),param_2,param_3,
                        *(undefined8 *)(param_5 - 0x10));
  return uVar2;
}



// FUNCTION 14da4684d FUN_14da4684d body=303 status=ok
// SIG undefined FUN_14da4684d(void)

/* WARNING: Removing unreachable block (ram,0x00014da468dd) */

void FUN_14da4684d(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  DAT_1c894cf824648d48 =
       FUN_160beb774(FUN_160beb774,
                     *(ulonglong *)
                      (unaff_R13 +
                      ~(~((param_2 | 0xf764d7c) - 0xf764d7c) & (param_2 | 0xfffffffff089b283))) ^
                     unaff_R15,param_3,0xfffffffffffffff8);
  FUN_1569ad408();
  return;
}



// FUNCTION 14da4696c FUN_14da4696c body=82 status=ok
// SIG undefined FUN_14da4696c(void)

ushort FUN_14da4696c(void)

{
  ushort in_R11W;
  ushort unaff_retaddr;
  
  return ~(unaff_retaddr & ~in_R11W);
}



// FUNCTION 14da46aa0 FUN_14da46aa0 body=91 status=ok
// SIG undefined FUN_14da46aa0(void)

void FUN_14da46aa0(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da46b44 FUN_14da46b44 body=299 status=ok
// SIG undefined FUN_14da46b44(void)

/* WARNING: Removing unreachable block (ram,0x00014da46be1) */

void FUN_14da46b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  
  FUN_162833af2(FUN_162833af2,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -8),
                *(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14da46c74 FUN_14da46c74 body=748 status=ok
// SIG undefined FUN_14da46c74(void)

/* WARNING: Instruction at (ram,0x000156b33181) overlaps instruction at (ram,0x000156b33180)
    */
/* WARNING: Removing unreachable block (ram,0x00014da46d00) */
/* WARNING: Removing unreachable block (ram,0x00014da46d06) */
/* WARNING: Removing unreachable block (ram,0x00014da46d80) */
/* WARNING: Removing unreachable block (ram,0x00014da46d86) */
/* WARNING: Removing unreachable block (ram,0x00014da54767) */
/* WARNING: Removing unreachable block (ram,0x00014da547ec) */
/* WARNING: Removing unreachable block (ram,0x00014da547f2) */
/* WARNING: Removing unreachable block (ram,0x000162b0d47a) */
/* WARNING: Removing unreachable block (ram,0x0001661035a0) */
/* WARNING: Removing unreachable block (ram,0x000162b0d50f) */
/* WARNING: Removing unreachable block (ram,0x000162b0d515) */
/* WARNING: Removing unreachable block (ram,0x000162b0d51a) */
/* WARNING: Removing unreachable block (ram,0x000162ef0df1) */
/* WARNING: Removing unreachable block (ram,0x000162ef0df7) */
/* WARNING: Removing unreachable block (ram,0x000162ef0e02) */
/* WARNING: Removing unreachable block (ram,0x000162ef0d41) */
/* WARNING: Removing unreachable block (ram,0x000162ef0d47) */
/* WARNING: Removing unreachable block (ram,0x000162ef0dec) */
/* WARNING: Removing unreachable block (ram,0x0001612a12ba) */
/* WARNING: Removing unreachable block (ram,0x0001612a12c5) */
/* WARNING: Removing unreachable block (ram,0x0001612a12c0) */
/* WARNING: Removing unreachable block (ram,0x00014da5484a) */
/* WARNING: Removing unreachable block (ram,0x00014da5484c) */
/* WARNING: Removing unreachable block (ram,0x000156b3306f) */
/* WARNING: Removing unreachable block (ram,0x000165410e7d) */
/* WARNING: Removing unreachable block (ram,0x000156b32fbb) */
/* WARNING: Removing unreachable block (ram,0x000156b3306a) */
/* WARNING: Removing unreachable block (ram,0x000156b33075) */
/* WARNING: Removing unreachable block (ram,0x000156b33181) */
/* WARNING: Removing unreachable block (ram,0x000156b33180) */
/* WARNING: Removing unreachable block (ram,0x000156b33186) */
/* WARNING: Removing unreachable block (ram,0x000156b32f24) */
/* WARNING: Removing unreachable block (ram,0x000156b32fb5) */
/* WARNING: Removing unreachable block (ram,0x000156b32fb0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da46c74(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  ulonglong uStackX_18;
  
  uVar1 = uStackX_18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(longlong *)(uVar1 - 8) = unaff_RDI;
  *(code **)(uVar1 - 0x18) = FUN_14e23da96;
  FUN_165b47f9f(param_1,param_2,param_3,in_stack_00000008);
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = *(undefined8 *)(unaff_RDI + -0x98);
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(unaff_RDI + -0xa0);
  uVar4 = *(ulonglong *)(uVar1 - 0x20);
  *(ulonglong *)(uVar1 - 0x18) = *(ulonglong *)(uVar1 - 0x18) ^ param_1;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(ulonglong *)(uVar1 - 0x28) = *(longlong *)(uVar1 - 0x10) + param_1;
  *(undefined8 *)(uVar1 - 0x30) = uVar3;
  *(ulonglong *)(uVar1 - 0x10) = (~param_1 | *(ulonglong *)(uVar1 - 0x10)) + param_1 + 1;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) << 1;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R12;
  *(ulonglong *)(uVar1 - 0x30) = uVar4 ^ param_1;
  *(undefined8 *)(uVar1 - 0x30) = 0x166af8d83;
  return uVar2;
}



// FUNCTION 14da46d86 FUN_14da46d86 body=160 status=ok
// SIG undefined FUN_14da46d86(void)

void FUN_14da46d86(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164a8aa11(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_164a8aa11);
  return;
}



// FUNCTION 14da46eb9 FUN_14da46eb9 body=167 status=ok
// SIG undefined FUN_14da46eb9(void)

void FUN_14da46eb9(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1566b6e35(param_1,param_2,
                *(ulonglong *)(unaff_RDI + -0x50) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x50) & param_1) * -2);
  return;
}



// FUNCTION 14da470aa FUN_14da470aa body=159 status=ok
// SIG undefined FUN_14da470aa(void)

/* WARNING: Removing unreachable block (ram,0x00014da4714a) */
/* WARNING: Removing unreachable block (ram,0x00014da471c3) */
/* WARNING: Removing unreachable block (ram,0x00014da471c9) */
/* WARNING: Removing unreachable block (ram,0x00016168c6a1) */
/* WARNING: Removing unreachable block (ram,0x00014da4713a) */

void FUN_14da470aa(void)

{
  FUN_16576ae78();
  return;
}



// FUNCTION 14da4714a FUN_14da4714a body=151 status=ok
// SIG undefined FUN_14da4714a(void)

/* WARNING: Removing unreachable block (ram,0x00014da471c9) */

void FUN_14da4714a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b3706fb(param_1,*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4);
  return;
}



// FUNCTION 14da47269 FUN_14da47269 body=443 status=ok
// SIG undefined FUN_14da47269(void)

void FUN_14da47269(undefined8 param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  longlong unaff_R13;
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
  ulonglong uVar7;
  
  param_2[-1] = unaff_RSI;
  *param_2 = ~((~unaff_RBP | *(ulonglong *)(unaff_RSI - 0x28)) &
              (~*(ulonglong *)(unaff_RSI - 0x28) | unaff_RBP));
  uVar7 = *param_2;
  *(undefined4 *)param_2 = 0xb5b8da7f;
  *(int *)param_2 = (int)*param_2 + 0x46c01de5;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
  uVar6 = ~(~(*param_2 & 0xfffffffffc78f83b) & (*param_2 | 0xfffffffffc78f83b));
  uVar3 = *(undefined8 *)(param_2[-1] + uVar6);
  *param_2 = 0x14da472f9;
  uVar5 = FUN_15655028e(param_1,uVar6,uVar3,uVar7);
  puVar1 = param_2 + -1;
  *(undefined4 *)puVar1 = 0x425348f8;
  *(int *)param_2 = (int)*puVar1;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  uVar6 = *param_2;
  uVar7 = uVar6 - 0x425348f8;
  if (uVar7 == 0) {
    uVar7 = *(ulonglong *)(unaff_R13 + -0x40);
    *param_2 = uVar7 + unaff_R15;
    *param_2 = *param_2 + (uVar7 & unaff_R15) * -2;
    *param_2 = uVar5;
    *(undefined4 *)(param_2 + -1) = 0xd48996c0;
    *(uint *)(param_2 + -1) = (uint)param_2[-1] ^ 0x32db7368;
    param_2[-3] = in_R10;
    param_2[-4] = in_R10;
    param_2[-5] = in_R10;
    param_2[-3] = (ulonglong)&LAB_14da473c5;
    param_2[-4] = (ulonglong)&DAT_161172e65;
    return;
  }
  *param_2 = in_R10;
  *puVar1 = in_R10;
  param_2[-2] = uVar5;
  *(undefined4 *)(param_2 + -2) = 0xbc48154;
  *(undefined4 *)((longlong)param_2 + -0xc) = 0;
  lVar4 = param_2[-2];
  param_2[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar6,0x425348f8) * 0x800 |
                (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                (ulonglong)((longlong)uVar7 < 0) * 0x80 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(uVar6 < 0x425348f8) | (ulonglong)(in_ID & 1) * 0x200000 |
                (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                (ulonglong)(in_AC & 1) * 0x40000;
  param_2[-3] = lVar4;
  uVar7 = param_2[-3];
  lVar2 = param_2[-3];
  param_2[-3] = param_2[-3] + -0x6d10bc2;
  param_2[-3] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(lVar2,0x6d10bc2) * 0x800 |
                (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                (ulonglong)((longlong)param_2[-3] < 0) * 0x80 | (ulonglong)(param_2[-3] == 0) * 0x40
                | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(param_2[-3] & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(uVar7 < 0x6d10bc2) | (ulonglong)(in_ID & 1) * 0x200000 |
                (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                (ulonglong)(in_AC & 1) * 0x40000;
  uVar7 = param_2[-2];
  param_2[-2] = unaff_R14;
  param_2[-3] = unaff_RBP;
  param_2[-4] = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar7 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80
                | (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10
                | (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
                (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *param_2 = lVar4 - 0x6d10bc2;
  *(longlong *)((longlong)param_2 + -0x28c7) = unaff_R13;
  *(longlong *)((longlong)param_2 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)param_2 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14da475ad FUN_14da475ad body=164 status=ok
// SIG undefined FUN_14da475ad(void)

/* WARNING: Removing unreachable block (ram,0x00014da4764d) */
/* WARNING: Removing unreachable block (ram,0x00014da47653) */
/* WARNING: Removing unreachable block (ram,0x00016609a2ed) */
/* WARNING: Removing unreachable block (ram,0x00014da47693) */
/* WARNING: Removing unreachable block (ram,0x00014da47697) */

void FUN_14da475ad(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16609a2ed(param_1,~param_1 & *(ulonglong *)(unaff_RDI + -0x30) | param_1);
  return;
}



// FUNCTION 14da47653 FUN_14da47653 body=189 status=ok
// SIG undefined FUN_14da47653(void)

/* WARNING: Removing unreachable block (ram,0x00014da47693) */

void FUN_14da47653(void)

{
  return;
}



// FUNCTION 14da4784a FUN_14da4784a body=165 status=ok
// SIG undefined FUN_14da4784a(void)

void FUN_14da4784a(void)

{
  thunk_FUN_1664b0097();
  return;
}



// FUNCTION 14da47acf FUN_14da47acf body=127 status=ok
// SIG undefined FUN_14da47acf(void)

void FUN_14da47acf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_RDI + 8) = (~unaff_RBX | *(ulonglong *)(unaff_RDI + 8)) + unaff_RBX + 1;
  FUN_16489c91f(local_res20 + unaff_RBX,param_2,param_3);
  return;
}



// FUNCTION 14da47b4f FUN_14da47b4f body=553 status=ok
// SIG undefined FUN_14da47b4f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da47bdc) */
/* WARNING: Removing unreachable block (ram,0x00014da47c67) */
/* WARNING: Removing unreachable block (ram,0x00014da47c6c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9487) */
/* WARNING: Removing unreachable block (ram,0x00014da47c72) */
/* WARNING: Removing unreachable block (ram,0x0001570f1e79) */

void FUN_14da47b4f(undefined8 param_1)

{
  FUN_165e1b0fa(param_1);
  return;
}



// FUNCTION 14da47d0c FUN_14da47d0c body=176 status=ok
// SIG undefined FUN_14da47d0c(void)

void FUN_14da47d0c(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong in_stack_00000020;
  
  FUN_165cb05b1(local_res8,unaff_retaddr,param_3,param_4,
                ~(in_stack_00000020 & unaff_R15) & (in_stack_00000020 | unaff_R15));
  *(undefined8 *)((unaff_R14 - (unaff_R13 << (param_1 & 0x3f))) + 8) = param_4;
  return;
}



// FUNCTION 14da47e3e FUN_14da47e3e body=139 status=ok
// SIG undefined FUN_14da47e3e(void)

void FUN_14da47e3e(ushort param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 in_AL;
  undefined8 unaff_RBP;
  ushort unaff_SI;
  ushort *unaff_R12;
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
  ulonglong uVar13;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 uStackX_20;
  
  *unaff_R12 = *unaff_R12 ^ param_1;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 & unaff_SI;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  LOCK();
  UNLOCK();
  DAT_14d7be89c = in_AL;
  *(undefined8 *)(param_5 + -8) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x10) = unaff_retaddr;
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
  uVar13 = *(ulonglong *)(param_5 + -0x18);
  bVar10 = (uVar13 & 0x4000) != 0;
  bVar9 = (uVar13 & 0x800) != 0;
  bVar8 = (uVar13 & 0x400) != 0;
  bVar7 = (uVar13 & 0x200) != 0;
  bVar6 = (uVar13 & 0x100) != 0;
  bVar5 = (uVar13 & 0x80) != 0;
  bVar4 = (uVar13 & 0x40) != 0;
  bVar3 = (uVar13 & 0x10) != 0;
  bVar2 = (uVar13 & 4) != 0;
  bVar1 = (uVar13 & 1) != 0;
  bVar12 = (uVar13 & 0x200000) != 0;
  bVar11 = (uVar13 & 0x40000) != 0;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 | (ulonglong)bVar5 * 0x80 |
       (ulonglong)bVar4 * 0x40 | (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(ulonglong *)(param_5 + -0x30) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 | (ulonglong)bVar5 * 0x80 |
       (ulonglong)bVar4 * 0x40 | (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  FUN_14dec286d(in_stack_00000008,param_2,0x1b6abce);
  return;
}



// FUNCTION 14da47f8e FUN_14da47f8e body=164 status=ok
// SIG undefined FUN_14da47f8e(void)

void FUN_14da47f8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  thunk_FUN_165ac5d85(param_1,param_2,param_3,*(undefined8 *)(unaff_RDI + -0x50));
  return;
}



// FUNCTION 14da480d8 FUN_14da480d8 body=574 status=ok
// SIG undefined FUN_14da480d8(void)

/* WARNING: Removing unreachable block (ram,0x00014da481ec) */
/* WARNING: Removing unreachable block (ram,0x000165fd4aac) */
/* WARNING: Removing unreachable block (ram,0x00014da48312) */
/* WARNING: Removing unreachable block (ram,0x00014da48318) */
/* WARNING: Removing unreachable block (ram,0x00014da4831d) */

void FUN_14da480d8(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  FUN_156851321(param_1,param_2);
  uVar1 = local_res20 ^ 0x156851321;
  *(undefined8 *)(uVar1 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_165f3e832;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x30) = 0x3ebdec3a;
  *(undefined **)((uVar1 - 0x18) + (*(ulonglong *)(uVar1 - 0x30) & 0xffffffffc14213cd)) =
       &DAT_14d7c2811;
  *(undefined8 *)(uVar1 - 0x28) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x30) = unaff_R14;
  return;
}



// FUNCTION 14da4831d thunk_FUN_14da48323 body=5 status=ok
// SIG undefined thunk_FUN_14da48323(void)

void thunk_FUN_14da48323(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R15;
  
  FUN_16526b1c9(param_1,unaff_R15 + 0x62a9ddbf,FUN_16526b1c9,
                ~*(ulonglong *)(unaff_RDI + -0x60) | param_1);
  return;
}



// FUNCTION 14da48323 FUN_14da48323 body=123 status=ok
// SIG undefined FUN_14da48323(void)

void FUN_14da48323(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R15;
  
  FUN_16526b1c9(param_1,unaff_R15 + 0x62a9ddbf,FUN_16526b1c9,
                ~*(ulonglong *)(unaff_RDI + -0x60) | param_1);
  return;
}



// FUNCTION 14da48423 FUN_14da48423 body=18 status=ok
// SIG undefined FUN_14da48423(void)

void FUN_14da48423(void)

{
  return;
}



// FUNCTION 14da4865f FUN_14da4865f body=339 status=ok
// SIG undefined FUN_14da4865f(void)

/* WARNING: Removing unreachable block (ram,0x00014da48715) */

void FUN_14da4865f(void)

{
  ulonglong unaff_R13;
  
  if (-1 < (longlong)(-0x39 - ~unaff_R13)) {
    FUN_166c4d90d();
    return;
  }
  FUN_166c4d90d();
  return;
}



// FUNCTION 14da487b4 FUN_14da487b4 body=300 status=ok
// SIG undefined FUN_14da487b4(void)

undefined8 FUN_14da487b4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  
  FUN_161dedf8c(*(ulonglong *)(param_1 + -0xa0) ^ unaff_RBX,param_2);
  uVar1 = FUN_157270f04();
  return uVar1;
}



// FUNCTION 14da488e2 FUN_14da488e2 body=136 status=ok
// SIG undefined FUN_14da488e2(void)

undefined8 FUN_14da488e2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da48a04 FUN_14da48a04 body=149 status=ok
// SIG undefined FUN_14da48a04(void)

void FUN_14da48a04(undefined8 param_1)

{
  FUN_156f7e3c0(param_1,0x31ba44a3,0xffffffffce45bb35,FUN_156f7e3c0);
  return;
}



// FUNCTION 14da48a9b FUN_14da48a9b body=117 status=ok
// SIG undefined FUN_14da48a9b(void)

void FUN_14da48a9b(ulonglong param_1,undefined8 param_2)

{
  HMODULE hModule;
  LPCSTR lpProcName;
  undefined8 local_res10;
  undefined2 local_res18;
  
  hModule = (HMODULE)(local_res10 ^ param_1);
  local_res18 = local_res18 ^ (ushort)param_1;
  lpProcName = (LPCSTR)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),~local_res18) &
                       0xfffffffffffffeff);
  FUN_156874dab();
                    /* WARNING: Could not recover jumptable at 0x00014da48b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(hModule,lpProcName);
  return;
}



// FUNCTION 14da48b11 FUN_14da48b11 body=48 status=ok
// SIG undefined FUN_14da48b11(void)

void FUN_14da48b11(HMODULE param_1,LPCSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014da48b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14da48bc9 FUN_14da48bc9 body=118 status=ok
// SIG undefined FUN_14da48bc9(void)

void FUN_14da48bc9(void)

{
  return;
}



// FUNCTION 14da48ecb FUN_14da48ecb body=184 status=ok
// SIG undefined FUN_14da48ecb(void)

void FUN_14da48ecb(void)

{
  return;
}



// FUNCTION 14da48f83 FUN_14da48f83 body=182 status=ok
// SIG undefined FUN_14da48f83(void)

/* WARNING: Removing unreachable block (ram,0x0001568a78ec) */
/* WARNING: Removing unreachable block (ram,0x0001568a78f2) */
/* WARNING: Removing unreachable block (ram,0x00014da4903a) */
/* WARNING: Removing unreachable block (ram,0x00014da49029) */

undefined8 FUN_14da48f83(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong unaff_R12;
  undefined8 uStackX_10;
  
  pcVar3 = FUN_1628eb8b6;
  FUN_1628eb8b6();
  *(code **)(param_2 + 8) = pcVar3 + (~(ulonglong)pcVar3 | *(ulonglong *)(param_2 + 8)) + 1;
  FUN_1651e83c5(uStackX_10);
  uVar2 = 0xffffffff;
  uVar1 = *(undefined8 *)(unaff_R12 + -0x60);
  FUN_160e1ca66();
  uVar1 = FUN_1621e7ff4(uVar1,uVar2);
  return uVar1;
}



// FUNCTION 14da4903a FUN_14da4903a body=140 status=ok
// SIG undefined FUN_14da4903a(void)

void FUN_14da4903a(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  
  FUN_14dac2dd0(FUN_14dac2dd0,~param_2 + 1,param_3 ^ unaff_R15);
  return;
}



// FUNCTION 14da490c7 FUN_14da490c7 body=53 status=ok
// SIG undefined FUN_14da490c7(void)

void FUN_14da490c7(void)

{
  return;
}



// FUNCTION 14da49298 FUN_14da49298 body=190 status=ok
// SIG undefined FUN_14da49298(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da4934b) */
/* WARNING: Removing unreachable block (ram,0x00014da49351) */
/* WARNING: Removing unreachable block (ram,0x00014da49356) */
/* WARNING: Removing unreachable block (ram,0x00014da493da) */
/* WARNING: Removing unreachable block (ram,0x00014da493e0) */
/* WARNING: Removing unreachable block (ram,0x00015b4acdf7) */

void FUN_14da49298(void)

{
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) + *(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined4 *)(local_res20 + -0x20) = 0x764fe7d9;
  *(undefined4 *)(local_res20 + -0x28) = 0;
  *(undefined4 *)(local_res20 + -0x1c) = *(undefined4 *)(local_res20 + -0x28);
  *(undefined1 **)(local_res20 + -0x10 + (*(ulonglong *)(local_res20 + -0x20) ^ 0x764fe7d1)) =
       &LAB_162995b41;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da49356 FUN_14da49356 body=340 status=ok
// SIG undefined FUN_14da49356(void)

/* WARNING: Removing unreachable block (ram,0x00014da493da) */
/* WARNING: Removing unreachable block (ram,0x00014da493e0) */

undefined8 FUN_14da49356(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uStackX_8;
  longlong local_res10;
  
  uVar1 = *(ulonglong *)(local_res10 + -0x98);
  uVar2 = (*(code *)&LAB_15b7ca03f)
                    (~(uVar1 & uStackX_8) & (uVar1 + uStackX_8) - (uVar1 & uStackX_8));
  return uVar2;
}



// FUNCTION 14da49570 FUN_14da49570 body=115 status=ok
// SIG undefined FUN_14da49570(void)

void FUN_14da49570(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int in_EAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  ulonglong uVar6;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  if (in_EAX == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
  }
  else if (in_EAX == 1) {
    puVar1 = (uint *)cpuid_Version_info(1);
  }
  else if (in_EAX == 2) {
    puVar1 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (in_EAX == 3) {
    puVar1 = (uint *)cpuid_serial_info(3);
  }
  else if (in_EAX == 4) {
    puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_EAX == 5) {
    puVar1 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_EAX == 6) {
    puVar1 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_EAX == 7) {
    puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_EAX == 9) {
    puVar1 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_EAX == 10) {
    puVar1 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_EAX == 0xb) {
    puVar1 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (in_EAX == 0xd) {
    puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_EAX == 0xf) {
    puVar1 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_EAX == -0x7ffffffe) {
    puVar1 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (in_EAX == -0x7ffffffd) {
    puVar1 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (in_EAX == -0x7ffffffc) {
    puVar1 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (uint *)cpuid(in_EAX);
  }
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(ulonglong *)(local_res18 + -0x20) = (ulonglong)uVar2;
  *(undefined4 *)(local_res18 + -0x20) = 0x787de30a;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar5 = *(ulonglong *)(local_res18 + -0x20);
  uVar6 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RBP;
  *(ulonglong *)(local_res18 + -8) = (uVar5 ^ 0x71b8cc01) - 0x7b0eb8d;
  FUN_165c7153c(uVar4,uVar3);
  return;
}



// FUNCTION 14da495fa FUN_14da495fa body=275 status=ok
// SIG undefined FUN_14da495fa(void)

/* WARNING: Removing unreachable block (ram,0x00014da498d8) */
/* WARNING: Removing unreachable block (ram,0x00014da498de) */
/* WARNING: Removing unreachable block (ram,0x00014da497ac) */
/* WARNING: Removing unreachable block (ram,0x00014da497b7) */
/* WARNING: Removing unreachable block (ram,0x00014da498c5) */
/* WARNING: Removing unreachable block (ram,0x00015780cc95) */
/* WARNING: Removing unreachable block (ram,0x00014da49710) */
/* WARNING: Removing unreachable block (ram,0x00014da49716) */
/* WARNING: Removing unreachable block (ram,0x0001624daeda) */
/* WARNING: Removing unreachable block (ram,0x00014da497b2) */
/* WARNING: Removing unreachable block (ram,0x00014da49685) */
/* WARNING: Removing unreachable block (ram,0x00014da49690) */
/* WARNING: Removing unreachable block (ram,0x000164a454be) */
/* WARNING: Removing unreachable block (ram,0x00014da4968b) */

undefined8 FUN_14da495fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1654c9bf1();
  return uVar1;
}



// FUNCTION 14da49716 FUN_14da49716 body=160 status=ok
// SIG undefined FUN_14da49716(void)

/* WARNING: Removing unreachable block (ram,0x00014da498d8) */
/* WARNING: Removing unreachable block (ram,0x00014da498de) */
/* WARNING: Removing unreachable block (ram,0x00014da497ac) */
/* WARNING: Removing unreachable block (ram,0x00014da497b7) */
/* WARNING: Removing unreachable block (ram,0x00014da498c5) */
/* WARNING: Removing unreachable block (ram,0x00015780cc95) */
/* WARNING: Removing unreachable block (ram,0x00014da497b2) */

undefined8 FUN_14da49716(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(&stack0x00000020 + unaff_RBP + (uStackX_8 ^ 0x71617c3b)) = unaff_RBX;
  uVar1 = thunk_FUN_15b642ca5(param_1,param_2,local_res10);
  return uVar1;
}



// FUNCTION 14da497b7 FUN_14da497b7 body=468 status=ok
// SIG undefined FUN_14da497b7(void)

/* WARNING: Removing unreachable block (ram,0x00014da498d8) */
/* WARNING: Removing unreachable block (ram,0x00014da498de) */

undefined8 FUN_14da497b7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  code *pcVar4;
  longlong in_R10;
  ushort uVar5;
  undefined8 unaff_R12;
  ulonglong uVar6;
  undefined8 unaff_R13;
  ulonglong uVar7;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar5 = ~(local_res10 & 0x100) + local_res10 + 1;
  LOCK();
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7ab792);
  UNLOCK();
  DAT_14d7ab792 = (char)in_RAX;
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = uVar3;
  *(undefined4 *)(local_res18 + -0x20) = 0x108016ca;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar6 = *(ulonglong *)(local_res18 + -0x20) ^ 0x1bb55180;
  uVar7 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  plVar2 = (longlong *)(local_res18 + -0x28);
  pcVar4 = FUN_1568336a2;
  *(undefined8 *)(local_res18 + -0x30) = 0x14da4984f;
  FUN_1568336a2();
  *plVar2 = in_R10;
  *(undefined8 *)(local_res18 + -0x30) = param_1;
  *plVar2 = *plVar2 << 1;
  *plVar2 = *plVar2 + uVar6;
  *(undefined4 *)(local_res18 + -0x30) = 0x97aec18e;
  *(int *)(local_res18 + -0x30) = *(int *)(local_res18 + -0x30) + 0x6a2683a4;
  *(undefined4 *)(local_res18 + -0x2c) = 0xe1f260b0;
  *(int *)(local_res18 + -0x2c) = *(int *)(local_res18 + -0x2c) + 0x1e0d9f50;
  lVar1 = local_res18 + *(longlong *)(local_res18 + -0x30) + -0x1d54552;
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(pcVar4 + -0x58);
  *(undefined8 *)(lVar1 + -8) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x10) = uStackX_8;
  *(ulonglong *)(lVar1 + -0x18) = uVar6;
  *(undefined8 *)(lVar1 + -8) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x10) = param_3;
  *(undefined8 *)(lVar1 + -0x18) = param_3;
  *(code **)(lVar1 + -0x10) = FUN_15780cd29;
  uVar3 = FUN_157337c22();
  return uVar3;
}



// FUNCTION 14da49a8e FUN_14da49a8e body=50 status=ok
// SIG undefined FUN_14da49a8e(void)

void FUN_14da49a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d7bfd87(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da49bec FUN_14da49bec body=548 status=ok
// SIG undefined FUN_14da49bec(void)

/* WARNING: Removing unreachable block (ram,0x00014de66d84) */
/* WARNING: Removing unreachable block (ram,0x00014de66e51) */
/* WARNING: Removing unreachable block (ram,0x00014de66e7c) */
/* WARNING: Removing unreachable block (ram,0x00014de66eaf) */
/* WARNING: Removing unreachable block (ram,0x00016597d710) */
/* WARNING: Removing unreachable block (ram,0x0001650e92d3) */
/* WARNING: Removing unreachable block (ram,0x0001650e92d9) */
/* WARNING: Removing unreachable block (ram,0x0001650e9302) */
/* WARNING: Removing unreachable block (ram,0x0001650e92f7) */
/* WARNING: Removing unreachable block (ram,0x0001650e9326) */
/* WARNING: Removing unreachable block (ram,0x00014de66eb5) */
/* WARNING: Removing unreachable block (ram,0x00014da49e0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da49bec(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  undefined8 unaff_R13;
  ulonglong local_res10;
  ulonglong local_res18;
  
  FUN_156b43614();
  if (-1 < (int)local_res18) {
    FUN_14de66d84();
    return;
  }
  uVar2 = CONCAT44(0x8e58000,(int)local_res18);
  FUN_1650e9230();
  uVar1 = local_res10 ^ unaff_RBP;
  if (local_res18 != unaff_RBP) {
    FUN_166bee545();
    return;
  }
  local_res10._0_2_ = (ushort)uVar1 ^ 0xffff;
  local_res10._0_2_ = ~(ushort)local_res10;
  _DAT_ffffffffffffffe8 =
       (ulonglong)(((ushort)local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res10 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)local_res10 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)local_res10 & 4) != 0) * 4 | (ulonglong)(((ushort)local_res10 & 1) != 0)
       | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  _DAT_ffffffffffffffe0 = FUN_156b43614;
  _DAT_ffffffffffffffd8 = 0x58e83526;
  _DAT_ffffffffffffffdc = 0;
  _DAT_ffffffffffffffd0 = 0x166bee5d9;
  _DAT_fffffffffffffff0 = unaff_R13;
  _DAT_fffffffffffffff8 = unaff_R13;
  FUN_1618f76fe(uVar2 + unaff_RBP + (uVar2 & unaff_RBP) * -2);
  _DAT_ffffffffffffffe0 = (code *)_DAT_0ce2d6be;
  FUN_1625407b1(~(_DAT_0ce2d676 & 0x1fd1839d98de3b3b) + _DAT_0ce2d676 + 0x1fd1839d98de3b3c,
                FUN_1625407b1,~_DAT_0ce2d676 | 0xe02e7c626721c4c4,_DAT_0ce2d69e ^ 0xe02e7c626721c4c4
               );
  return;
}



// FUNCTION 14da49e13 FUN_14da49e13 body=290 status=ok
// SIG undefined FUN_14da49e13(void)

/* WARNING: Removing unreachable block (ram,0x00014da49ec4) */
/* WARNING: Removing unreachable block (ram,0x00014da49eb5) */
/* WARNING: Removing unreachable block (ram,0x00014da49ec7) */
/* WARNING: Removing unreachable block (ram,0x00014da49ef6) */
/* WARNING: Removing unreachable block (ram,0x00014da49f05) */
/* WARNING: Removing unreachable block (ram,0x000162c7daa7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da49e13(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98) ^ 0xffffffffffffffff | unaff_R15;
  if (-1 < (longlong)((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x98)) + uVar1 + 1)) {
    FUN_14df69f16();
    return;
  }
  FUN_161c4c5c7();
  return;
}



// FUNCTION 14da49f3a FUN_14da49f3a body=390 status=ok
// SIG undefined FUN_14da49f3a(void)

/* WARNING: Removing unreachable block (ram,0x00015691b0e6) */
/* WARNING: Removing unreachable block (ram,0x00014da49fcf) */

void FUN_14da49f3a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = FUN_164f7fa1c(param_1,FUN_164f7fa1c,~param_1 | *(ulonglong *)(unaff_RDI + -0xa0),param_4,
                        *(undefined8 *)(unaff_RDI + -0x90));
  FUN_166b68fdc(FUN_166b68fdc,~(~*(ulonglong *)(unaff_R12 + -0x28) & ~uVar2) + ~uVar2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ uVar2,uVar1 & 0xffff);
  return;
}



// FUNCTION 14da4a050 FUN_14da4a050 body=192 status=ok
// SIG undefined FUN_14da4a050(void)

void FUN_14da4a050(undefined8 param_1,undefined8 param_2)

{
  FUN_1665e669e(&stack0x00000018,param_2);
  return;
}



// FUNCTION 14da4a19c FUN_14da4a19c body=73 status=ok
// SIG undefined FUN_14da4a19c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf615) */

undefined1 FUN_14da4a19c(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  
  uVar2 = uRamf8d299c4fb2306b6;
  if (-1 < param_2 - unaff_ESI) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = in((short)param_2);
  *(undefined4 *)(unaff_RDI + -4) = uVar1;
  return uVar2;
}



// FUNCTION 14da4a653 FUN_14da4a653 body=420 status=ok
// SIG undefined FUN_14da4a653(void)

/* WARNING: Removing unreachable block (ram,0x00014da4a7cb) */
/* WARNING: Removing unreachable block (ram,0x00014da4a6d1) */
/* WARNING: Removing unreachable block (ram,0x00014da4a7bb) */
/* WARNING: Removing unreachable block (ram,0x00014da4a7b6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da4a653(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b2cf7e6(*(undefined8 *)
                 **(undefined8 **)
                   **(undefined8 **)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20)
                ,param_2,param_3);
  return;
}



// FUNCTION 14da4a7fc FUN_14da4a7fc body=80 status=ok
// SIG undefined FUN_14da4a7fc(void)

void FUN_14da4a7fc(void)

{
  return;
}



// FUNCTION 14da4a9ca FUN_14da4a9ca body=293 status=ok
// SIG undefined FUN_14da4a9ca(void)

void FUN_14da4a9ca(void)

{
  longlong unaff_RBP;
  longlong unaff_R14;
  
  FUN_157378495();
  *(longlong *)(unaff_RBP + 8) = unaff_R14 + *(longlong *)(unaff_RBP + 8);
  return;
}



// FUNCTION 14da4ab80 FUN_14da4ab80 body=186 status=ok
// SIG undefined FUN_14da4ab80(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da4abc7) overlaps instruction at (ram,0x00014da4abc6)
    */
/* WARNING: Removing unreachable block (ram,0x00014da4ac0f) */
/* WARNING: Removing unreachable block (ram,0x00014da4ac11) */
/* WARNING: Removing unreachable block (ram,0x00014da4abc7) */

void FUN_14da4ab80(longlong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1627d60ec(0xfffffffff39b6100,FUN_1627d60ec,
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                *(ulonglong *)(unaff_R13 + param_1) ^ unaff_R15);
  return;
}



// FUNCTION 14da4ac3b FUN_14da4ac3b body=120 status=ok
// SIG undefined FUN_14da4ac3b(void)

void FUN_14da4ac3b(void)

{
  longlong unaff_R15;
  undefined8 local_res18;
  
  FUN_160df5b79(1,local_res18 + unaff_R15);
  return;
}



// FUNCTION 14da4ad60 FUN_14da4ad60 body=293 status=ok
// SIG undefined FUN_14da4ad60(void)

/* WARNING: Removing unreachable block (ram,0x00014da4add6) */
/* WARNING: Removing unreachable block (ram,0x00014da4adf2) */
/* WARNING: Removing unreachable block (ram,0x00014da4ade7) */

void FUN_14da4ad60(void)

{
  return;
}



// FUNCTION 14da4afb9 FUN_14da4afb9 body=142 status=ok
// SIG undefined FUN_14da4afb9(void)

void FUN_14da4afb9(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  undefined8 local_res8;
  
  uVar1 = ~((~local_res8 | *(ulonglong *)(unaff_R12 + -0x30)) &
           (~*(ulonglong *)(unaff_R12 + -0x30) | local_res8));
  FUN_166713731(local_res8,uVar1,*(undefined8 *)(unaff_R12 + -0x80),uVar1);
  return;
}



// FUNCTION 14da4b059 FUN_14da4b059 body=171 status=ok
// SIG undefined FUN_14da4b059(void)

void FUN_14da4b059(ulonglong param_1,short param_2,undefined8 param_3,undefined8 param_4,
                  short param_5)

{
  longlong unaff_RDI;
  
  FUN_1615fc3ed((char)param_1,param_2,param_2 + param_5,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1)
  ;
  return;
}



// FUNCTION 14da4b1c4 FUN_14da4b1c4 body=84 status=ok
// SIG undefined FUN_14da4b1c4(void)

void FUN_14da4b1c4(void)

{
  return;
}



// FUNCTION 14da4b3ad FUN_14da4b3ad body=141 status=ok
// SIG undefined FUN_14da4b3ad(void)

void FUN_14da4b3ad(void)

{
  return;
}



// FUNCTION 14da4b4ec FUN_14da4b4ec body=141 status=ok
// SIG undefined FUN_14da4b4ec(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da4b4ec(void)

{
  FUN_162d3536a();
  FUN_157577f89();
  return;
}



// FUNCTION 14da4b57b FUN_14da4b57b body=153 status=ok
// SIG undefined FUN_14da4b57b(void)

void FUN_14da4b57b(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  
  FUN_157577f89(param_1,FUN_157577f89,(-~unaff_R15 - (~param_3 + 2)) + (param_3 & unaff_R15) * -2);
  return;
}



// FUNCTION 14da4b61b FUN_14da4b61b body=183 status=ok
// SIG undefined FUN_14da4b61b(void)

void FUN_14da4b61b(void)

{
  return;
}



// FUNCTION 14da4b6d2 FUN_14da4b6d2 body=110 status=ok
// SIG undefined FUN_14da4b6d2(void)

ulonglong FUN_14da4b6d2(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14da4b7d9 FUN_14da4b7d9 body=127 status=ok
// SIG undefined FUN_14da4b7d9(void)

undefined1 * FUN_14da4b7d9(void)

{
  undefined1 local_res8 [32];
  
  return local_res8;
}



// FUNCTION 14da4b858 FUN_14da4b858 body=28 status=ok
// SIG undefined FUN_14da4b858(void)

void FUN_14da4b858(void)

{
  ushort unaff_BP;
  ushort *unaff_retaddr;
  
  *unaff_retaddr = unaff_BP ^ 0xc4c4;
  return;
}



// FUNCTION 14da4b874 FUN_14da4b874 body=109 status=ok
// SIG undefined FUN_14da4b874(void)

void FUN_14da4b874(void)

{
  undefined2 unaff_retaddr;
  undefined2 *local_res8;
  
  if (((ulonglong)local_res8 & 0x8000000000000000) != 0) {
    FUN_1565e8926(FUN_1565e8926);
    return;
  }
  *local_res8 = unaff_retaddr;
  FUN_166cba660();
  return;
}



// FUNCTION 14da4b8e1 FUN_14da4b8e1 body=340 status=ok
// SIG undefined FUN_14da4b8e1(void)

longlong FUN_14da4b8e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uStackX_8;
  
  uVar1 = FUN_16223c817(param_1,param_2,param_3,param_4);
  return uStackX_8 - (uVar1 & 0xfffffffffffffffe);
}



// FUNCTION 14da4bad6 FUN_14da4bad6 body=153 status=ok
// SIG undefined FUN_14da4bad6(void)

void FUN_14da4bad6(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_R10;
  
  *(undefined4 *)(&stack0x00000000 + ~(param_3 & in_R10)) = 0xffffffff;
  return;
}



// FUNCTION 14da4bb70 FUN_14da4bb70 body=130 status=ok
// SIG undefined FUN_14da4bb70(void)

void FUN_14da4bb70(void)

{
  return;
}



// FUNCTION 14da4bcb9 FUN_14da4bcb9 body=174 status=ok
// SIG undefined FUN_14da4bcb9(void)

/* WARNING: Removing unreachable block (ram,0x0001616d719c) */
/* WARNING: Removing unreachable block (ram,0x0001616d71a2) */
/* WARNING: Removing unreachable block (ram,0x0001616d7248) */
/* WARNING: Removing unreachable block (ram,0x0001616d724e) */
/* WARNING: Removing unreachable block (ram,0x00014db14e19) */

void FUN_14da4bcb9(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18 [2];
  
  lVar5 = local_res8;
  uVar8 = -param_1 - 1;
  local_res8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(-param_1,1) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((longlong)uVar8 < 0) * 0x80 | (ulonglong)(uVar8 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  lVar5 = lVar5 - uVar8;
  plVar2 = (longlong *)((longlong)&local_res10 + lVar5);
  *(undefined4 *)plVar2 = 0x2474064a;
  *(undefined4 *)((longlong)local_res18 + lVar5 + -4) = 0;
  lVar6 = *plVar2;
  *plVar2 = in_R11;
  uVar8 = ~(0xffffffffffffffff - (lVar6 + 0x1a680986U & 0xffffffffc123f02f) &
           (lVar6 + 0x1a680986U | 0xffffffffc123f02f));
  *(undefined8 *)((longlong)local_res18 + lVar5) = 0;
  *(undefined8 *)((longlong)local_res18 + lVar5) = *(undefined8 *)((longlong)local_res18 + lVar5);
  *(undefined8 *)((longlong)&local_res10 + lVar5) = unaff_RSI;
  *(undefined8 *)((longlong)&local_res8 + lVar5) = param_2;
  *(ulonglong *)((longlong)local_res18 + lVar5) =
       *(longlong *)((longlong)local_res18 + lVar5) - uVar8;
  uVar7 = *(undefined8 *)((longlong)&local_res10 + lVar5);
  lVar6 = *(longlong *)((longlong)local_res18 + lVar5);
  lVar3 = *(longlong *)((longlong)local_res18 + lVar5);
  *(longlong *)((longlong)local_res18 + lVar5) = -*(longlong *)((longlong)local_res18 + lVar5);
  if (lVar6 == 0) {
    *(undefined8 *)((longlong)&local_res10 + lVar5) = in_R10;
    uVar4 = *(undefined8 *)((longlong)&local_res10 + lVar5);
    puVar1 = (uint *)((longlong)local_res18 + lVar5);
    *(undefined8 *)((longlong)&local_res10 + lVar5) = uVar7;
    *(undefined2 *)((longlong)&local_res8 + lVar5 + 6) =
         *(undefined2 *)((longlong)ProcessEnvironmentBlock + 0x220);
    *(undefined8 *)((longlong)&local_res10 + lVar5) =
         *(undefined8 *)((longlong)&local_res10 + lVar5);
    *puVar1 = 0;
    *puVar1 = *puVar1 + 0xbe6b658f;
    *puVar1 = -*puVar1;
    *(undefined8 *)((longlong)&local_res10 + lVar5) = uVar4;
    *(undefined8 *)((longlong)&local_res8 + lVar5) = unaff_R14;
    *puVar1 = ~*puVar1;
    *puVar1 = 0x2415dc1b - *puVar1;
    uVar7 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = unaff_RDI;
    *(undefined8 *)((longlong)&local_res10 + lVar5) = unaff_R12;
    *(undefined8 *)((longlong)&local_res8 + lVar5) = param_4;
    *(ulonglong *)((longlong)local_res18 + lVar5 + -0x18) = (ulonglong)~((int)uVar7 + 0xfc9eee6U);
    (*(code *)0x1620c6efd)();
    return;
  }
  *(ulonglong *)((longlong)&local_res10 + lVar5) =
       (ulonglong)((ulonglong)(in_NT & 1) != 0) * 0x4000 | (ulonglong)SBORROW8(0,lVar3) * 0x800 |
       (ulonglong)((ulonglong)(in_IF & 1) != 0) * 0x200 |
       (ulonglong)((ulonglong)(in_TF & 1) != 0) * 0x100 |
       (ulonglong)(*(longlong *)((longlong)local_res18 + lVar5) < 0) * 0x80 |
       (ulonglong)(*(longlong *)((longlong)local_res18 + lVar5) == 0) * 0x40 |
       (ulonglong)((ulonglong)(in_AF & 1) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)((longlong)local_res18 + lVar5) & 0xff) & 1U) == 0) * 4 |
       1 | (ulonglong)((ulonglong)(in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((ulonglong)(in_AC & 1) != 0) * 0x40000;
  *(undefined8 *)((longlong)&local_res8 + lVar5) = *(undefined8 *)((longlong)&local_res8 + lVar5);
  if ((*(ushort *)((longlong)&local_res10 + lVar5) & 1) == 0) {
    uVar9 = *(ulonglong *)((longlong)&local_res10 + lVar5);
    plVar2 = (longlong *)(&stack0x00000028 + lVar5);
    *plVar2 = 0;
    *(ulonglong *)((longlong)&local_res10 + lVar5) =
         (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
         (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
    *plVar2 = *plVar2 + unaff_RBX;
    FUN_165c7153c(uVar8,*(undefined8 *)((longlong)&local_res8 + lVar5));
    return;
  }
  FUN_1616d70f9(uVar8,*(undefined8 *)((longlong)&local_res8 + lVar5));
  return;
}



// FUNCTION 14da4bd67 FUN_14da4bd67 body=45 status=ok
// SIG undefined FUN_14da4bd67(void)

void FUN_14da4bd67(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da4bf08 FUN_14da4bf08 body=173 status=ok
// SIG undefined FUN_14da4bf08(void)

void FUN_14da4bf08(void)

{
  return;
}



// FUNCTION 14da4c17e FUN_14da4c17e body=123 status=ok
// SIG undefined FUN_14da4c17e(void)

void FUN_14da4c17e(void)

{
  return;
}



// FUNCTION 14da4c21d FUN_14da4c21d body=2 status=ok
// SIG undefined FUN_14da4c21d(void)

void FUN_14da4c21d(void)

{
  return;
}



// FUNCTION 14da4c33c FUN_14da4c33c body=446 status=ok
// SIG undefined FUN_14da4c33c(void)

/* WARNING: Removing unreachable block (ram,0x00014da4c3b8) */
/* WARNING: Removing unreachable block (ram,0x00014da4c3be) */

void FUN_14da4c33c(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_RSI + -0x88);
  FUN_165f366dc(param_1,(-unaff_RBP - in_RAX) + (in_RAX | unaff_RBP) * 2);
  uVar2 = *(ulonglong *)(lVar1 + -0x78);
  (*(code *)0x16589d499)
            (uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2,*(ulonglong *)(lVar1 + -0x28) ^ unaff_R15)
  ;
  return;
}



// FUNCTION 14da4c45b FUN_14da4c45b body=121 status=ok
// SIG undefined FUN_14da4c45b(void)

void FUN_14da4c45b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RBX;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(unaff_RBX + 0x10) = param_4;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined1 **)(local_res20 + -8) = &LAB_14da4c4f4;
  thunk_FUN_15b0572f1(param_1,*(undefined8 *)(local_res20 + -0x18),param_3,local_res8);
  return;
}



// FUNCTION 14da4c761 FUN_14da4c761 body=97 status=ok
// SIG undefined FUN_14da4c761(void)

void FUN_14da4c761(undefined8 param_1,undefined8 param_2)

{
  FUN_164a6727b(param_1,param_2);
  return;
}



// FUNCTION 14da4c7c3 FUN_14da4c7c3 body=28 status=ok
// SIG undefined FUN_14da4c7c3(void)

void FUN_14da4c7c3(void)

{
  FUN_14dcdbe5a();
  return;
}



// FUNCTION 14da4c871 FUN_14da4c871 body=165 status=ok
// SIG undefined FUN_14da4c871(void)

undefined8 FUN_14da4c871(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14da4ca58 FUN_14da4ca58 body=174 status=ok
// SIG undefined FUN_14da4ca58(void)

void FUN_14da4ca58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  FUN_16135fb9a(in_RAX - unaff_RSI,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da4cb07 FUN_14da4cb07 body=147 status=ok
// SIG undefined FUN_14da4cb07(void)

void FUN_14da4cb07(void)

{
  FUN_156698df0();
  return;
}



// FUNCTION 14da4cba3 FUN_14da4cba3 body=150 status=ok
// SIG undefined FUN_14da4cba3(void)

void FUN_14da4cba3(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong in_R11;
  undefined8 uStackX_10;
  uint local_res18 [4];
  
  param_1 = param_1 + param_3 + ~(~(in_R11 & 0xffffffffbd2ba10b) & (in_R11 | 0xffffffffbd2ba10b));
  *(undefined4 *)((longlong)local_res18 + param_1) = 0;
  *(uint *)((longlong)local_res18 + param_1) =
       *(uint *)((longlong)local_res18 + param_1) ^ 0x3827a2f7;
  uVar1 = *(uint *)((longlong)local_res18 + param_1);
  *(uint *)((longlong)local_res18 + param_1) =
       *(uint *)((longlong)local_res18 + param_1) | 0xc7d85d08;
  *(uint *)((longlong)local_res18 + param_1) =
       ~(~(uVar1 & 0xc7d85d08) & *(uint *)((longlong)local_res18 + param_1));
  uVar1 = *(uint *)((longlong)local_res18 + param_1);
  *(undefined4 *)((longlong)local_res18 + param_1) = 0xffffffff;
  *(uint *)((longlong)local_res18 + param_1) =
       ~(~uVar1 & *(uint *)((longlong)local_res18 + param_1));
  FUN_160f04855(FUN_160f04855,param_2,uStackX_10,param_4);
  return;
}



// FUNCTION 14da4ccc9 FUN_14da4ccc9 body=171 status=ok
// SIG undefined FUN_14da4ccc9(void)

/* WARNING: Instruction at (ram,0x00014da4ccfa) overlaps instruction at (ram,0x00014da4ccf9)
    */

void FUN_14da4ccc9(void)

{
  char in_AL;
  
  DAT_24048b4824040148 = in_AL + '@';
  FUN_165e97530(8,FUN_165e97530);
  return;
}



// FUNCTION 14da4cd75 FUN_14da4cd75 body=141 status=ok
// SIG undefined FUN_14da4cd75(void)

void FUN_14da4cd75(void)

{
  FUN_1610aa103();
  return;
}



// FUNCTION 14da4ce71 FUN_14da4ce71 body=34 status=ok
// SIG undefined FUN_14da4ce71(void)

/* WARNING: Removing unreachable block (ram,0x00014da4cf35) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf3b) */
/* WARNING: Removing unreachable block (ram,0x00014da4ce93) */
/* WARNING: Removing unreachable block (ram,0x000160cfdbc9) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf40) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da4ce71(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulonglong unaff_R15;
  
  uVar1 = 0x38;
  if (0xfffffffffffffffd < unaff_R15) {
    uVar1 = 0x39;
  }
  FUN_16639f724(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14da4ce93 FUN_14da4ce93 body=173 status=ok
// SIG undefined FUN_14da4ce93(void)

/* WARNING: Removing unreachable block (ram,0x00014da4cf35) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf3b) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf40) */

void FUN_14da4ce93(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1572e10e4(param_1,~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),FUN_1572e10e4);
  return;
}



// FUNCTION 14da4cf40 FUN_14da4cf40 body=159 status=ok
// SIG undefined FUN_14da4cf40(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da4cf40(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x58);
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  FUN_16280223e(~((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14da4d244 FUN_14da4d244 body=131 status=ok
// SIG undefined FUN_14da4d244(void)

void FUN_14da4d244(void)

{
  return;
}



// FUNCTION 14da4d2d0 FUN_14da4d2d0 body=158 status=ok
// SIG undefined FUN_14da4d2d0(void)

void FUN_14da4d2d0(undefined8 param_1)

{
  FUN_15af35c6e(param_1);
  return;
}



// FUNCTION 14da4d36f FUN_14da4d36f body=87 status=ok
// SIG undefined FUN_14da4d36f(void)

void FUN_14da4d36f(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da4d3fc FUN_14da4d3fc body=135 status=ok
// SIG undefined FUN_14da4d3fc(void)

void FUN_14da4d3fc(undefined8 param_1)

{
  FUN_15af37901(param_1);
  return;
}



// FUNCTION 14da4d483 FUN_14da4d483 body=13 status=ok
// SIG undefined FUN_14da4d483(void)

void FUN_14da4d483(void)

{
  return;
}



// FUNCTION 14da4d5c0 FUN_14da4d5c0 body=426 status=ok
// SIG undefined FUN_14da4d5c0(void)

/* WARNING: Removing unreachable block (ram,0x00014da4d63b) */
/* WARNING: Removing unreachable block (ram,0x000161215740) */

undefined8 FUN_14da4d5c0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong unaff_retaddr;
  
  uVar1 = FUN_16219762f(param_1,param_2 ^ unaff_retaddr,param_3,FUN_16219762f);
  return uVar1;
}



// FUNCTION 14da4d77c FUN_14da4d77c body=10 status=ok
// SIG undefined FUN_14da4d77c(void)

void FUN_14da4d77c(void)

{
  FUN_15b1c5431();
  return;
}



// FUNCTION 14da4d786 FUN_14da4d786 body=184 status=ok
// SIG undefined FUN_14da4d786(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166b224b2) */
/* WARNING: Removing unreachable block (ram,0x00014da4d7f4) */

void FUN_14da4d786(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  longlong unaff_retaddr;
  
  if (unaff_R12 == 1) {
    FUN_165f423f1(param_1,param_2,param_3);
    return;
  }
  if (unaff_R12 == 2) {
    FUN_164a825e9();
    return;
  }
  if (unaff_R12 == 3) {
    FUN_16157fd21();
    return;
  }
  if (unaff_R12 == 4) {
    if (unaff_retaddr < 0) {
      (*(code *)&LAB_1614cd012)();
      return;
    }
    FUN_1614cd093();
    return;
  }
  return;
}



// FUNCTION 14da4daa5 FUN_14da4daa5 body=285 status=ok
// SIG undefined FUN_14da4daa5(void)

undefined8 FUN_14da4daa5(undefined1 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1569b4712(param_1,param_2);
  return *(undefined8 *)(unaff_RDI + -0x30);
}



// FUNCTION 14da4dcf7 FUN_14da4dcf7 body=151 status=ok
// SIG undefined FUN_14da4dcf7(void)

/* WARNING: Removing unreachable block (ram,0x00014da4dd7e) */
/* WARNING: Removing unreachable block (ram,0x00014da4dd84) */
/* WARNING: Removing unreachable block (ram,0x000160dcd6b4) */
/* WARNING: Removing unreachable block (ram,0x00016642b765) */
/* WARNING: Removing unreachable block (ram,0x0001565320e9) */

undefined8 FUN_14da4dcf7(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  longlong lStackX_10;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  if (*(longlong *)(unaff_RDI + -0x28) != 0) {
    uVar2 = FUN_156531fac();
    return uVar2;
  }
  uVar2 = FUN_165ff3464(FUN_165ff3464,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                        *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        (~uVar3 | *(ulonglong *)(unaff_RDI + -0x60) & param_1 ^ 0xffffffffffffffff)
                        + uVar3 + 1);
  *(undefined8 *)(lStackX_10 + -8) = unaff_retaddr;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lStackX_10 + -0x18) = uVar2;
  *(undefined4 *)(lStackX_10 + -0x18) = 0x57018ac;
  *(undefined4 *)(lStackX_10 + -0x14) = 0;
  lVar1 = *(longlong *)(lStackX_10 + -0x18);
  *(ulonglong *)(lStackX_10 + -0x18) =
       (ulonglong)((in_stack_00000008 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((in_stack_00000008 & 0x800) != 0) * 0x800 |
       (ulonglong)((in_stack_00000008 & 0x400) != 0) * 0x400 |
       (ulonglong)((in_stack_00000008 & 0x200) != 0) * 0x200 |
       (ulonglong)((in_stack_00000008 & 0x100) != 0) * 0x100 |
       (ulonglong)((in_stack_00000008 & 0x80) != 0) * 0x80 |
       (ulonglong)((in_stack_00000008 & 0x40) != 0) * 0x40 |
       (ulonglong)((in_stack_00000008 & 0x10) != 0) * 0x10 |
       (ulonglong)((in_stack_00000008 & 4) != 0) * 4 | (ulonglong)((in_stack_00000008 & 1) != 0) |
       (ulonglong)((in_stack_00000008 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((in_stack_00000008 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lStackX_10 + -0x20) = lVar1;
  *(longlong *)(lStackX_10 + -0x20) = *(longlong *)(lStackX_10 + -0x20) + -0x1d777b2;
  *(longlong *)(lStackX_10 + -8) = lVar1 + -0x1d777b2;
  uVar2 = FUN_165c7153c();
  return uVar2;
}



// FUNCTION 14da4e04c FUN_14da4e04c body=339 status=ok
// SIG undefined FUN_14da4e04c(void)

/* WARNING: Removing unreachable block (ram,0x00014da4e1a6) */

void FUN_14da4e04c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)in_stack_00000010 >> 0x20);
  *(undefined8 *)
   (&stack0x0000b2b9 +
   -~(CONCAT44(~(~(uVar1 & 0xe884c076) & (uVar1 | 0xe884c076)),(int)in_stack_00000010) + 0x4a784da9U
     )) = 0x30949c45;
  FUN_1668254d6(param_1,param_2,in_stack_00000008);
  if ((*(ulonglong *)(unaff_RDI + -0x78) & 0x2c91427a73ca2b2b) == 0) {
    FUN_1565e3e4d(&DAT_ac91427a73ca2b2b);
    return;
  }
  FUN_1565e3e4d(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14da4e1a6 FUN_14da4e1a6 body=157 status=ok
// SIG undefined FUN_14da4e1a6(void)

void FUN_14da4e1a6(void)

{
  return;
}



// FUNCTION 14da4e247 FUN_14da4e247 body=317 status=ok
// SIG undefined FUN_14da4e247(void)

/* WARNING: Removing unreachable block (ram,0x00014da4e2de) */
/* WARNING: Removing unreachable block (ram,0x00014da4e2e4) */

void FUN_14da4e247(void)

{
  return;
}



// FUNCTION 14da4e41b FUN_14da4e41b body=293 status=ok
// SIG undefined FUN_14da4e41b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14da4e41b(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_R12;
  uint unaff_retaddr;
  ulonglong local_res10;
  uint in_stack_00000038;
  
  FUN_161abc0dc(FUN_161abc0dc);
  FUN_16226499a(in_stack_00000038 & unaff_retaddr,param_2,0x3fb2885c,
                ~(~-*(longlong *)(unaff_R12 + -0x60) + 1U));
  return -1 - ((param_1 ^ 0xffffffffffffffff | local_res10) &
              (0xffffffffffffffff - local_res10 | param_1));
}



// FUNCTION 14da4e543 FUN_14da4e543 body=7 status=ok
// SIG undefined FUN_14da4e543(void)

undefined8 FUN_14da4e543(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14da4e5da FUN_14da4e5da body=164 status=ok
// SIG undefined FUN_14da4e5da(void)

/* WARNING: Removing unreachable block (ram,0x00014da4e679) */

void FUN_14da4e5da(undefined8 param_1)

{
  undefined8 unaff_R12;
  undefined2 local_res10;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  if ((local_res10 & 0x80) == 0) {
    FUN_14e1cc8b9(param_1);
    return;
  }
  FUN_14e1cc8b9(param_1);
  return;
}



// FUNCTION 14da4e727 FUN_14da4e727 body=3 status=ok
// SIG undefined FUN_14da4e727(void)

void FUN_14da4e727(void)

{
  return;
}



// FUNCTION 14da4e858 FUN_14da4e858 body=157 status=ok
// SIG undefined FUN_14da4e858(void)

void FUN_14da4e858(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1657bfea7(param_1,*(ulonglong *)(unaff_R13 + -0x60),FUN_1657bfea7,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da4e8f7 FUN_14da4e8f7 body=284 status=ok
// SIG undefined FUN_14da4e8f7(void)

void FUN_14da4e8f7(longlong param_1)

{
  undefined8 in_RAX;
  longlong unaff_R15;
  
  FUN_1660c3e92();
  FUN_14d7be36e(in_RAX,*(undefined8 *)(&stack0x00000010 + unaff_R15 + param_1));
  return;
}



// FUNCTION 14da4ea2c FUN_14da4ea2c body=39 status=ok
// SIG undefined FUN_14da4ea2c(void)

void FUN_14da4ea2c(undefined8 param_1)

{
  FUN_162e88e20(param_1,FUN_162e88e20);
  return;
}



// FUNCTION 14da4ea59 FUN_14da4ea59 body=193 status=ok
// SIG undefined FUN_14da4ea59(void)

/* WARNING: Removing unreachable block (ram,0x00014da4ead6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da4ea59(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165ef4b0f(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0x19d020b4);
  return;
}



// FUNCTION 14da4ed06 FUN_14da4ed06 body=162 status=ok
// SIG undefined FUN_14da4ed06(void)

void FUN_14da4ed06(void)

{
  FUN_1650397dc();
  return;
}



// FUNCTION 14da4eec3 FUN_14da4eec3 body=153 status=ok
// SIG undefined FUN_14da4eec3(void)

/* WARNING: Removing unreachable block (ram,0x00014da4efe6) */
/* WARNING: Removing unreachable block (ram,0x00014da4efec) */
/* WARNING: Removing unreachable block (ram,0x00014da4ef56) */
/* WARNING: Removing unreachable block (ram,0x000162e9a230) */
/* WARNING: Removing unreachable block (ram,0x00014da4ef5c) */

void FUN_14da4eec3(undefined8 param_1)

{
  longlong in_R11;
  undefined8 unaff_R12;
  
  *(undefined8 *)(&stack0x22b85f5a + in_R11) = unaff_R12;
  FUN_162e9a230(param_1);
  return;
}



// FUNCTION 14da4ef5c FUN_14da4ef5c body=302 status=ok
// SIG undefined FUN_14da4ef5c(void)

/* WARNING: Removing unreachable block (ram,0x00014da4efe6) */
/* WARNING: Removing unreachable block (ram,0x00014da4efec) */

void FUN_14da4ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  undefined8 uStackX_10;
  
  FUN_161747ecd(uStackX_10,param_2,param_3,*(undefined8 *)(unaff_R12 + -0xa0),
                *(undefined8 *)(unaff_R12 + -0x68));
  FUN_164ba82d0(uStackX_10);
  return;
}



// FUNCTION 14da4f3b8 FUN_14da4f3b8 body=157 status=ok
// SIG undefined FUN_14da4f3b8(void)

undefined8 FUN_14da4f3b8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  if (param_1 == in_RAX) {
    return in_stack_00000008;
  }
  if (param_4 != 0xbea2d) {
    uVar1 = FUN_1616a292b();
    return uVar1;
  }
  uVar1 = FUN_1616a2902(unaff_retaddr,FUN_1616a2902,param_3,0xbea2d);
  return uVar1;
}



// FUNCTION 14da4f4e9 FUN_14da4f4e9 body=147 status=ok
// SIG undefined FUN_14da4f4e9(void)

void FUN_14da4f4e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_retaddr;
  undefined8 local_res8;
  
  FUN_1575dda9a(-(unaff_retaddr - local_res8) ^ 0x75,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da4f752 FUN_14da4f752 body=136 status=ok
// SIG undefined FUN_14da4f752(void)

/* WARNING: Removing unreachable block (ram,0x00014da4f7dc) */

void FUN_14da4f752(void)

{
  FUN_14e07d9cf();
  return;
}



// FUNCTION 14da4f7dc FUN_14da4f7dc body=131 status=ok
// SIG undefined FUN_14da4f7dc(void)

void FUN_14da4f7dc(int param_1,undefined8 param_2)

{
  uint unaff_R15D;
  
  FUN_14def45ac(param_1 - (unaff_R15D ^ 0x77835a25),param_2);
  FUN_14e116b82();
  FUN_14da4f90c();
  return;
}



// FUNCTION 14da4f85f FUN_14da4f85f body=170 status=ok
// SIG undefined FUN_14da4f85f(void)

void FUN_14da4f85f(void)

{
  FUN_14e116b82();
  FUN_14da4f90c();
  return;
}



// FUNCTION 14da4f90c FUN_14da4f90c body=286 status=ok
// SIG undefined FUN_14da4f90c(void)

/* WARNING: Removing unreachable block (ram,0x00014da4fa29) */

void FUN_14da4f90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165417739();
  FUN_16506150a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da4fa2f FUN_14da4fa2f body=143 status=ok
// SIG undefined FUN_14da4fa2f(void)

void FUN_14da4fa2f(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R14;
  undefined8 local_res8;
  longlong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + param_4) = 0;
  *(longlong *)((longlong)local_res10 + param_4) =
       *(longlong *)((longlong)local_res10 + param_4) - unaff_R14;
  *(longlong *)((longlong)local_res10 + param_4) = -*(longlong *)((longlong)local_res10 + param_4);
  uVar1 = local_res10[2] | unaff_RBP;
  local_res10[2] = (unaff_RBP - (local_res10[2] | unaff_RBP)) + local_res10[2];
  local_res10[0] = param_1;
  FUN_1649e93df(uVar1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14da4fac7 FUN_14da4fac7 body=385 status=ok
// SIG undefined FUN_14da4fac7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015673b6fe) overlaps instruction at (ram,0x00015673b6fd)
    */
/* WARNING: Removing unreachable block (ram,0x00016657b617) */
/* WARNING: Removing unreachable block (ram,0x00016657b622) */
/* WARNING: Removing unreachable block (ram,0x00016657b61d) */
/* WARNING: Removing unreachable block (ram,0x00015673b6fd) */
/* WARNING: Removing unreachable block (ram,0x00014da4fb67) */
/* WARNING: Removing unreachable block (ram,0x00016267a40e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da4fac7(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  longlong lVar4;
  uint uVar5;
  ulonglong local_res8;
  ulonglong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  lVar4 = (~param_1 | *(ulonglong *)(unaff_RDI + -0x98)) + param_1 + 1;
  if (-1 < lVar4) {
    uVar3 = FUN_16657b5a1();
    return uVar3;
  }
  lVar4 = *(ulonglong *)(unaff_RDI + -0x98) + param_1 + lVar4 * -2;
  local_res8 = local_res8 ^ param_1;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res8._0_2_ = ((ushort)local_res8 | 0x100) - 0x100;
  FUN_1665e31b4();
  uVar1 = ~((local_res8 - (in_stack_00000028 | local_res8)) + in_stack_00000028) &
          (in_stack_00000028 | local_res8);
  uVar3 = FUN_156a4e564();
  in_stack_00000028._4_4_ = (uint)(uVar1 >> 0x20);
  uVar5 = in_stack_00000028._4_4_ & 0xfcbfcfbd;
  in_stack_00000028._4_4_ = in_stack_00000028._4_4_ | 0xfcbfcfbd;
  in_stack_00000028 = CONCAT44(~(~uVar5 & in_stack_00000028._4_4_),(int)uVar1);
  if ((longlong)
      (~((in_stack_00000028 ^ 0x6e475d9e) & 0x356278a5) &
      (in_stack_00000028 ^ 0x6e475d9e | 0x356278a5)) < 0) {
    uVar3 = FUN_15673b6e3(lVar4);
    return uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  _FUN_156a4e564 = 0x2d7cb24e;
  uRam0000000156a4e54c = uVar2 ^ param_1;
  puRam0000000156a4e55c = &LAB_15673b7b7;
  uRam0000000156a4e554 = 0x1628c5de4;
  return uVar3;
}



// FUNCTION 14da4fec5 FUN_14da4fec5 body=195 status=ok
// SIG undefined FUN_14da4fec5(void)

void FUN_14da4fec5(void)

{
  FUN_15675aa6c();
  return;
}



// FUNCTION 14da4ffec FUN_14da4ffec body=157 status=ok
// SIG undefined FUN_14da4ffec(void)

void FUN_14da4ffec(undefined8 param_1,undefined8 param_2)

{
  FUN_14da3fd36(param_1,param_2);
  return;
}



// FUNCTION 14da50089 FUN_14da50089 body=185 status=ok
// SIG undefined FUN_14da50089(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da500f2) */

void FUN_14da50089(void)

{
  return;
}



// FUNCTION 14da504a7 FUN_14da504a7 body=953 status=ok
// SIG undefined FUN_14da504a7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da50661) overlaps instruction at (ram,0x00014da5065e)
    */
/* WARNING: Removing unreachable block (ram,0x00014da50682) */
/* WARNING: Removing unreachable block (ram,0x00014da50693) */
/* WARNING: Removing unreachable block (ram,0x000162931ca6) */
/* WARNING: Removing unreachable block (ram,0x00014da506a9) */
/* WARNING: Removing unreachable block (ram,0x00014da5071a) */
/* WARNING: Removing unreachable block (ram,0x00014da50720) */
/* WARNING: Removing unreachable block (ram,0x0001666184ac) */
/* WARNING: Removing unreachable block (ram,0x000166618537) */
/* WARNING: Removing unreachable block (ram,0x0001625f39ad) */
/* WARNING: Removing unreachable block (ram,0x0001625f3a54) */
/* WARNING: Removing unreachable block (ram,0x0001625f3a5a) */
/* WARNING: Removing unreachable block (ram,0x0001625f3a82) */
/* WARNING: Removing unreachable block (ram,0x000161187f15) */
/* WARNING: Removing unreachable block (ram,0x00016661853d) */
/* WARNING: Removing unreachable block (ram,0x000166618580) */
/* WARNING: Removing unreachable block (ram,0x000166618584) */
/* WARNING: Removing unreachable block (ram,0x0001666185fc) */
/* WARNING: Removing unreachable block (ram,0x000166618601) */
/* WARNING: Removing unreachable block (ram,0x000166618607) */
/* WARNING: Removing unreachable block (ram,0x00016661860c) */
/* WARNING: Removing unreachable block (ram,0x0001666186a2) */
/* WARNING: Removing unreachable block (ram,0x0001666186a8) */
/* WARNING: Removing unreachable block (ram,0x00014d7be901) */
/* WARNING: Removing unreachable block (ram,0x00014da50537) */
/* WARNING: Removing unreachable block (ram,0x00014da50543) */
/* WARNING: Removing unreachable block (ram,0x00014da50661) */
/* WARNING: Removing unreachable block (ram,0x00014da5065e) */
/* WARNING: Removing unreachable block (ram,0x00014da50667) */
/* WARNING: Removing unreachable block (ram,0x000156552f5f) */
/* WARNING: Removing unreachable block (ram,0x00014da5068e) */
/* WARNING: Removing unreachable block (ram,0x00014da50506) */

undefined8 FUN_14da504a7(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  
  FUN_14d91c771(FUN_14d91c771,param_2 & unaff_RSI,param_3,param_4);
  uVar1 = FUN_14d7a9fee();
  return uVar1;
}



// FUNCTION 14da50720 FUN_14da50720 body=143 status=ok
// SIG undefined FUN_14da50720(void)

undefined8 FUN_14da50720(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da507b6 FUN_14da507b6 body=151 status=ok
// SIG undefined FUN_14da507b6(void)

void FUN_14da507b6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15664776c(*(undefined8 *)(unaff_R13 + -0x78),
                (~(*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15) + unaff_R15) -
                ~*(ulonglong *)(unaff_R13 + -0x48));
  return;
}



// FUNCTION 14da5084f FUN_14da5084f body=131 status=ok
// SIG undefined FUN_14da5084f(void)

void FUN_14da5084f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (*(code *)&LAB_160dc3e7a)(in_stack_00000018,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14da509e9 FUN_14da509e9 body=171 status=ok
// SIG undefined FUN_14da509e9(void)

void FUN_14da509e9(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = local_res18 ^ unaff_R15;
  FUN_1669f5603(unaff_retaddr,param_2,~(ushort)local_res18,&local_res18,
                in_stack_00000020 ^ unaff_R15);
  return;
}



// FUNCTION 14da50bec FUN_14da50bec body=157 status=ok
// SIG undefined FUN_14da50bec(void)

/* WARNING: Removing unreachable block (ram,0x00014da50c8b) */

undefined8 FUN_14da50bec(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  lVar2 = *(ulonglong *)(unaff_RDI + -0x68) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2;
  if (*(longlong *)(unaff_RDI + -0x48) != 0) {
    uVar1 = FUN_14dd77c79(param_1,lVar2);
    return uVar1;
  }
  uVar1 = FUN_14dd77c79(param_1,lVar2);
  return uVar1;
}



// FUNCTION 14da50c8b FUN_14da50c8b body=34 status=ok
// SIG undefined FUN_14da50c8b(void)

void FUN_14da50c8b(void)

{
  return;
}



// FUNCTION 14da50d1c FUN_14da50d1c body=157 status=ok
// SIG undefined FUN_14da50d1c(void)

undefined8 FUN_14da50d1c(void)

{
  undefined8 local_res18;
  
  return local_res18;
}



// FUNCTION 14da50dba FUN_14da50dba body=280 status=ok
// SIG undefined FUN_14da50dba(void)

/* WARNING: Removing unreachable block (ram,0x00014da50f0a) */
/* WARNING: Removing unreachable block (ram,0x00014da50ed5) */
/* WARNING: Removing unreachable block (ram,0x00014da50f0e) */
/* WARNING: Removing unreachable block (ram,0x0001569d6ad0) */
/* WARNING: Removing unreachable block (ram,0x0001569d6b5c) */
/* WARNING: Removing unreachable block (ram,0x0001569d6b61) */
/* WARNING: Removing unreachable block (ram,0x0001569d6b67) */
/* WARNING: Removing unreachable block (ram,0x0001569d6b6c) */

undefined8 FUN_14da50dba(void)

{
  undefined8 uVar1;
  
  FUN_1663a51b1();
  uVar1 = FUN_1569d6ad0();
  return uVar1;
}



// FUNCTION 14da50ed5 FUN_14da50ed5 body=77 status=ok
// SIG undefined FUN_14da50ed5(void)

undefined8 FUN_14da50ed5(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da50f53 FUN_14da50f53 body=142 status=ok
// SIG undefined FUN_14da50f53(void)

void FUN_14da50f53(void)

{
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_165b2e6ff;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_165b2e6ff;
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RDI;
  FUN_165b2e6b2();
  return;
}



// FUNCTION 14da50fe4 FUN_14da50fe4 body=322 status=ok
// SIG undefined FUN_14da50fe4(void)

/* WARNING: Removing unreachable block (ram,0x00014da51091) */
/* WARNING: Removing unreachable block (ram,0x00014da51097) */

void FUN_14da50fe4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15b05ffdf(param_1,*(ulonglong *)(unaff_RDI + -0x80) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}


