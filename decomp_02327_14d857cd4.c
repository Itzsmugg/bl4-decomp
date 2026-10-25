// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d857cd4 FUN_14d857cd4 body=116 status=ok
// SIG undefined FUN_14d857cd4(void)

void FUN_14d857cd4(void)

{
  return;
}



// FUNCTION 14d857eb1 FUN_14d857eb1 body=168 status=ok
// SIG undefined FUN_14d857eb1(void)

ulonglong FUN_14d857eb1(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + param_2);
  return 0xffffffffffffffff - (uVar1 & param_1) & ((~uVar1 | ~param_1) + uVar1 + 1 | param_1);
}



// FUNCTION 14d857f5a FUN_14d857f5a body=52 status=ok
// SIG undefined FUN_14d857f5a(void)

void FUN_14d857f5a(undefined8 param_1)

{
  FUN_15751fa1b(param_1,&LAB_14d7ba577);
  return;
}



// FUNCTION 14d858016 FUN_14d858016 body=186 status=ok
// SIG undefined FUN_14d858016(void)

/* WARNING: Instruction at (ram,0x00014d858084) overlaps instruction at (ram,0x00014d858082)
    */
/* WARNING: Removing unreachable block (ram,0x00014d858081) */

void FUN_14d858016(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1620af058(param_1,param_2,param_3,FUN_1620af058);
  return;
}



// FUNCTION 14d85817c FUN_14d85817c body=279 status=ok
// SIG undefined FUN_14d85817c(void)

void FUN_14d85817c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  ushort uVar4;
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
  byte bVar17;
  ulonglong uVar18;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar18 = *(ulonglong *)(in_R11 + 0x10);
  lVar2 = *(longlong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = ~*(ulonglong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = *(ulonglong *)(in_R11 + 0x10) | param_1;
  *(ulonglong *)(in_R11 + 0x10) =
       ~((~(in_R10 & uVar18) + lVar2) - ~in_R10 & *(ulonglong *)(in_R11 + 0x10));
  uVar4 = ~(~local_res20 & 0x100) + 0x100;
  uVar1 = ~(uVar4 - local_res20);
  if (uVar4 < local_res20) {
    return;
  }
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar12 = (uVar1 & 0x800) != 0;
  bVar11 = (uVar1 & 0x200) != 0;
  bVar10 = (uVar1 & 0x100) != 0;
  bVar9 = (uVar1 & 0x80) != 0;
  bVar8 = (uVar1 & 0x40) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar6 = (uVar1 & 4) != 0;
  bVar5 = (uVar1 & 1) != 0;
  bVar17 = (uStackX_22 & 0x20) != 0;
  bVar14 = (uStackX_22 & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(local_res18);
  *param_5 = unaff_RDI;
  param_5[-1] = unaff_RDI;
  param_5[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
                (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  uVar18 = param_5[-2];
  param_5[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar18 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar18 & 0x80) != 0) * 0x80 | (ulonglong)((uVar18 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 | (ulonglong)((uVar18 & 4) != 0) * 4 |
                (ulonglong)((uVar18 & 1) != 0) | (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  param_5[-3] = param_4;
  uVar18 = param_5[-2];
  param_5[-2] = in_stack_00000010;
  param_5[-3] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar18 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar18 & 0x80) != 0) * 0x80 | (ulonglong)((uVar18 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 | (ulonglong)((uVar18 & 4) != 0) * 4 |
                (ulonglong)((uVar18 & 1) != 0) | (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  *param_5 = 0x14d9d34;
  param_5[-1] = param_5[-2];
  param_5[-2] = param_5[-2];
  param_5[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14d8582d2 FUN_14d8582d2 body=608 status=ok
// SIG undefined FUN_14d8582d2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8583df) */
/* WARNING: Removing unreachable block (ram,0x00014d8583e5) */
/* WARNING: Removing unreachable block (ram,0x00014d8583ea) */
/* WARNING: Removing unreachable block (ram,0x00014d858355) */

void FUN_14d8582d2(undefined8 param_1)

{
  (*(code *)0x156f0edbf)(param_1);
  return;
}



// FUNCTION 14d85848e FUN_14d85848e body=303 status=ok
// SIG undefined FUN_14d85848e(void)

/* WARNING: Removing unreachable block (ram,0x00014d858537) */

void FUN_14d85848e(void)

{
  return;
}



// FUNCTION 14d8585c1 FUN_14d8585c1 body=134 status=ok
// SIG undefined FUN_14d8585c1(void)

void FUN_14d8585c1(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x164a97333)(param_1,param_2);
  return;
}



// FUNCTION 14d85864d FUN_14d85864d body=199 status=ok
// SIG undefined FUN_14d85864d(void)

longlong FUN_14d85864d(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  return param_2 + ~(in_RAX | unaff_RSI) * -2;
}



// FUNCTION 14d8587cb FUN_14d8587cb body=509 status=ok
// SIG undefined FUN_14d8587cb(void)

/* WARNING: Instruction at (ram,0x000161af3552) overlaps instruction at (ram,0x000161af354f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d858866) */
/* WARNING: Removing unreachable block (ram,0x00014d858871) */
/* WARNING: Removing unreachable block (ram,0x00014d85890b) */
/* WARNING: Removing unreachable block (ram,0x00014d858910) */
/* WARNING: Removing unreachable block (ram,0x00014dfd8384) */
/* WARNING: Removing unreachable block (ram,0x00014dfd8424) */
/* WARNING: Removing unreachable block (ram,0x00014dfd8435) */
/* WARNING: Removing unreachable block (ram,0x00014dfd842a) */
/* WARNING: Removing unreachable block (ram,0x000157184e43) */
/* WARNING: Removing unreachable block (ram,0x00014d858916) */
/* WARNING: Removing unreachable block (ram,0x00014d85899f) */
/* WARNING: Removing unreachable block (ram,0x000164f4f3a1) */
/* WARNING: Removing unreachable block (ram,0x0001659153ba) */
/* WARNING: Removing unreachable block (ram,0x000161a5e748) */
/* WARNING: Removing unreachable block (ram,0x00016484b747) */
/* WARNING: Removing unreachable block (ram,0x00016484b74d) */
/* WARNING: Removing unreachable block (ram,0x00014e228725) */
/* WARNING: Removing unreachable block (ram,0x00014e228771) */
/* WARNING: Removing unreachable block (ram,0x00014e2287a5) */
/* WARNING: Removing unreachable block (ram,0x00014d85886c) */
/* WARNING: Removing unreachable block (ram,0x00016484b5f6) */
/* WARNING: Removing unreachable block (ram,0x00016484b68f) */
/* WARNING: Removing unreachable block (ram,0x00016484b694) */
/* WARNING: Removing unreachable block (ram,0x00016484b69f) */
/* WARNING: Removing unreachable block (ram,0x00016484b69a) */
/* WARNING: Removing unreachable block (ram,0x000164fec38a) */
/* WARNING: Removing unreachable block (ram,0x000164fec395) */
/* WARNING: Removing unreachable block (ram,0x000164fec390) */
/* WARNING: Removing unreachable block (ram,0x000161af3549) */
/* WARNING: Removing unreachable block (ram,0x000161af3566) */
/* WARNING: Removing unreachable block (ram,0x000161af360e) */
/* WARNING: Removing unreachable block (ram,0x000161af3614) */
/* WARNING: Removing unreachable block (ram,0x00016565fc9c) */
/* WARNING: Removing unreachable block (ram,0x00016565fcf1) */
/* WARNING: Removing unreachable block (ram,0x00016565fcf5) */
/* WARNING: Removing unreachable block (ram,0x000161a5e798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8587cb(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  undefined8 unaff_R13;
  longlong lVar6;
  longlong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar1 = *(ulonglong *)(in_stack_00000008 + in_RAX + param_2);
  uVar5 = ~((~(~uVar1 | param_1) | (~(~param_1 & uVar1) + uVar1) - param_1) + (~uVar1 | param_1) + 1
           );
  uVar2 = FUN_1613f39a5(param_1,in_stack_00000018);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  if ((~uVar2 | uVar1) == 0xffffffffffffffff && (~(~uVar1 & uVar2) + uVar2) - uVar1 == -1) {
    uVar3 = FUN_16484b561();
    return uVar3;
  }
  if ((int)CONCAT71((int7)(*(longlong *)(unaff_R12 + -0x80) + uVar2 >> 8),0xb6) !=
      _DAT_ffffffff926b88a1) {
    uVar3 = FUN_164fec300();
    return uVar3;
  }
  lVar6 = (~((uVar2 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R12 + -0x90)) +
          *(ulonglong *)(unaff_R12 + -0x90)) - ~(uVar2 ^ 0xffffffffffffffff);
  lVar4 = FUN_164ac7cc7(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar2,
                        ~((~uVar2 | *(ulonglong *)(unaff_R12 + -0x78)) &
                         (~*(ulonglong *)(unaff_R12 + -0x78) | uVar2)));
  lVar4 = (uVar5 & 0x164ac7cc7) * -2 + *(longlong *)(&stack0x00000008 + lVar4);
  *(undefined8 *)(FUN_164ac7cc7 + lVar4 + -8) = 0x3acaf64;
  *(longlong *)(FUN_164ac7cc7 + lVar4 + -0x28cf) = lVar6;
  *(longlong *)(FUN_164ac7cc7 + lVar4 + -0x28d7) = lVar6;
  *(undefined **)(FUN_164ac7cc7 + lVar4 + -0x28cf) = &DAT_156ef2e4a;
  return unaff_R13;
}



// FUNCTION 14d858ae1 FUN_14d858ae1 body=41 status=ok
// SIG undefined FUN_14d858ae1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d858ae1(void)

{
  byte in_R11B;
  bool in_ZF;
  
  if (in_ZF) {
    in_R11B = in_R11B | 1;
  }
  if (in_R11B != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d858eb4 FUN_14d858eb4 body=331 status=ok
// SIG undefined FUN_14d858eb4(void)

/* WARNING: Removing unreachable block (ram,0x00014d858f4f) */

void FUN_14d858eb4(undefined8 param_1)

{
  byte unaff_DIL;
  byte bVar1;
  undefined1 auStackX_8 [32];
  
  bVar1 = ~(~((-0x12 - (unaff_DIL | 0xee)) + unaff_DIL) & (unaff_DIL & 0x11 | 0xee));
  if (auStackX_8 < &DAT_00000008) {
    FUN_1668cd65a(param_1,8,bVar1);
    return;
  }
  FUN_1668cd65a(param_1,8,bVar1);
  return;
}



// FUNCTION 14d859003 FUN_14d859003 body=14 status=ok
// SIG undefined FUN_14d859003(void)

void FUN_14d859003(void)

{
  return;
}



// FUNCTION 14d859084 FUN_14d859084 body=326 status=ok
// SIG undefined FUN_14d859084(void)

/* WARNING: Removing unreachable block (ram,0x00014d85911c) */
/* WARNING: Removing unreachable block (ram,0x00014d859122) */
/* WARNING: Removing unreachable block (ram,0x00014d859127) */

void FUN_14d859084(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1563ec0c0(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8591ca FUN_14d8591ca body=168 status=ok
// SIG undefined FUN_14d8591ca(void)

void FUN_14d8591ca(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165f540bb(0x1c,FUN_165f540bb,0xfffffffffffffff8,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14d859305 FUN_14d859305 body=128 status=ok
// SIG undefined FUN_14d859305(void)

void FUN_14d859305(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_165b1d3d1(0xffffffffffffff70,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14d859607 FUN_14d859607 body=249 status=ok
// SIG undefined FUN_14d859607(void)

/* WARNING: Removing unreachable block (ram,0x00015b5a440d) */
/* WARNING: Removing unreachable block (ram,0x00015b5a4413) */
/* WARNING: Removing unreachable block (ram,0x000164fa4e26) */
/* WARNING: Removing unreachable block (ram,0x00015b5a44a1) */
/* WARNING: Removing unreachable block (ram,0x00015b5a44ad) */
/* WARNING: Removing unreachable block (ram,0x00015b5a44b2) */
/* WARNING: Removing unreachable block (ram,0x000157271577) */
/* WARNING: Removing unreachable block (ram,0x00015727157d) */
/* WARNING: Removing unreachable block (ram,0x0001572715b8) */
/* WARNING: Removing unreachable block (ram,0x0001572715bd) */
/* WARNING: Removing unreachable block (ram,0x000162770c38) */
/* WARNING: Removing unreachable block (ram,0x00015b5a4364) */
/* WARNING: Removing unreachable block (ram,0x00014d859687) */

undefined8 FUN_14d859607(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  uVar3 = (unaff_R15 - (*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15)) +
          *(ulonglong *)(unaff_R13 + -0xa0) ^ 0xffffffffffffffff;
  FUN_16692babe(param_1,param_2);
  uVar1 = *(ulonglong *)(uVar3 - 0x78);
  uVar3 = *(ulonglong *)(uVar3 - 0x28);
  if (uVar3 == 0) {
    uVar2 = FUN_1614de53d();
    return uVar2;
  }
  uVar2 = (*(code *)0x162eaadbd)
                    (-1 - (((0xffffffffffffffff - unaff_R15) + uVar1) -
                           (0xffffffffffffffff - unaff_R15 & uVar1) &
                          ((-1 - (~uVar1 & unaff_R15)) + unaff_R15) - uVar1),uVar3 ^ unaff_R15);
  return uVar2;
}



// FUNCTION 14d8597af FUN_14d8597af body=29 status=ok
// SIG undefined FUN_14d8597af(void)

void FUN_14d8597af(void)

{
  return;
}



// FUNCTION 14d859836 FUN_14d859836 body=30 status=ok
// SIG undefined FUN_14d859836(void)

void FUN_14d859836(void)

{
  undefined8 uStackX_10;
  
  FUN_165c7153c(uStackX_10);
  return;
}



// FUNCTION 14d859ae9 FUN_14d859ae9 body=142 status=ok
// SIG undefined FUN_14d859ae9(void)

void FUN_14d859ae9(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 local_res8;
  
  FUN_1621cd92d(local_res8,FUN_1621cd92d,param_3 - in_R11,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d859cb7 FUN_14d859cb7 body=156 status=ok
// SIG undefined FUN_14d859cb7(void)

/* WARNING: Removing unreachable block (ram,0x00014d859d54) */
/* WARNING: Removing unreachable block (ram,0x00014d859d44) */

void FUN_14d859cb7(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_2 + -8) = unaff_RSI;
  *(undefined8 *)(param_2 + -0x10) = in_R10;
  *(undefined8 *)(param_2 + -0x18) = in_R10;
  *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -0x18) = param_4;
  *(undefined1 **)(param_2 + -8) = &LAB_166d038be;
  FUN_166d03897(in_stack_00000008,unaff_retaddr,param_3,*(undefined8 *)(param_2 + -0x18));
  return;
}



// FUNCTION 14d859d54 FUN_14d859d54 body=6 status=ok
// SIG undefined FUN_14d859d54(void)

void FUN_14d859d54(void)

{
  return;
}



// FUNCTION 14d859ea7 FUN_14d859ea7 body=691 status=ok
// SIG undefined FUN_14d859ea7(void)

/* WARNING: Removing unreachable block (ram,0x0001563bec18) */
/* WARNING: Removing unreachable block (ram,0x0001563bec1e) */
/* WARNING: Removing unreachable block (ram,0x00014d859f32) */
/* WARNING: Removing unreachable block (ram,0x00014d859fd4) */
/* WARNING: Removing unreachable block (ram,0x00014d859fe0) */
/* WARNING: Removing unreachable block (ram,0x0001563beb7d) */

void FUN_14d859ea7(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  undefined2 local_res10;
  
  if ((~local_res10 & 0x100 | local_res10) == 0x100) {
    FUN_1666cd48c(param_1,unaff_retaddr);
    return;
  }
  FUN_1666cd48c(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d85a061 FUN_14d85a061 body=530 status=ok
// SIG undefined FUN_14d85a061(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015b86b789) overlaps instruction at (ram,0x00015b86b788)
    */
/* WARNING: Removing unreachable block (ram,0x00015b86b7c7) */
/* WARNING: Removing unreachable block (ram,0x00014d85a107) */
/* WARNING: Removing unreachable block (ram,0x00015b86b774) */
/* WARNING: Removing unreachable block (ram,0x00015b86b789) */
/* WARNING: Removing unreachable block (ram,0xd6f38149) */

void FUN_14d85a061(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R15;
  ulonglong local_res18;
  
  *(undefined8 *)(&stack0x79bd2d1d + unaff_R15) = unaff_RSI;
  uVar2 = ~(local_res18 | param_1);
  FUN_1664571d7(uVar2,param_2,param_3,param_4);
  uVar1 = (uint)*(undefined8 *)(unaff_R13 + -0x80);
  FUN_16126f5cc(0xfffffffffffffff8,
                (uint)uVar2 &
                ~((uVar1 | 0x99ba8e28) & (~(~uVar1 & 0x664571d7) + 0x664571d7) - uVar1),
                FUN_16126f5cc);
  return;
}



// FUNCTION 14d85a333 FUN_14d85a333 body=638 status=ok
// SIG undefined FUN_14d85a333(void)

/* WARNING: Removing unreachable block (ram,0x00014d85a5a9) */
/* WARNING: Removing unreachable block (ram,0x00014d85a5b4) */
/* WARNING: Removing unreachable block (ram,0x00014d85a627) */
/* WARNING: Removing unreachable block (ram,0x00014d85a62c) */
/* WARNING: Removing unreachable block (ram,0x00014d85a632) */
/* WARNING: Removing unreachable block (ram,0x0001566879ab) */
/* WARNING: Removing unreachable block (ram,0x00014d85a493) */
/* WARNING: Removing unreachable block (ram,0x00014d85a499) */
/* WARNING: Removing unreachable block (ram,0x00014d85a5a4) */
/* WARNING: Removing unreachable block (ram,0x00014d85a5af) */
/* WARNING: Removing unreachable block (ram,0x000161b7b0f0) */

void FUN_14d85a333(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  longlong lVar1;
  undefined8 local_res8;
  
  lVar1 = in_RAX >> 0x3f;
  FUN_164743a79();
  FUN_166d01ff6(local_res8,lVar1,param_3);
  return;
}



// FUNCTION 14d85a5b4 FUN_14d85a5b4 body=274 status=ok
// SIG undefined FUN_14d85a5b4(void)

/* WARNING: Removing unreachable block (ram,0x00014d85a632) */

void FUN_14d85a5b4(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50);
  if (-1 < (longlong)
           (~((uVar1 - 1) - ~(unaff_R15 - (uVar1 | unaff_R15))) &
           (~uVar1 & ~unaff_R15 ^ 0xffffffffffffffff))) {
    uStack_20 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
    uStack_18 = *(ulonglong *)(unaff_R13 + -0x98) ^ unaff_R15;
    uVar2 = ~(0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -8) & ~unaff_R15);
    uVar1 = ~(*(ulonglong *)(unaff_R13 + -8) & unaff_R15);
    FUN_164abbf5f(param_1,&uStack_20,param_3,(uVar2 - (uVar1 | uVar2)) + uVar1);
    return;
  }
  FUN_1566879ab();
  return;
}



// FUNCTION 14d85a6cf FUN_14d85a6cf body=384 status=ok
// SIG undefined FUN_14d85a6cf(void)

/* WARNING: Removing unreachable block (ram,0x00014d85a76b) */
/* WARNING: Removing unreachable block (ram,0x00014d85a776) */
/* WARNING: Removing unreachable block (ram,0x00014d85a837) */
/* WARNING: Removing unreachable block (ram,0x00014d85a831) */
/* WARNING: Removing unreachable block (ram,0x00014d85a841) */
/* WARNING: Removing unreachable block (ram,0x00014d85a771) */

undefined8 FUN_14d85a6cf(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_15750805f(param_1,param_3 | param_1,~(in_RAX & (param_3 | param_1)));
  return uVar1;
}



// FUNCTION 14d85ab50 FUN_14d85ab50 body=160 status=ok
// SIG undefined FUN_14d85ab50(void)

void FUN_14d85ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_15754c569(in_stack_00000010,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d85abf0 FUN_14d85abf0 body=44 status=ok
// SIG undefined FUN_14d85abf0(void)

void FUN_14d85abf0(void)

{
  return;
}



// FUNCTION 14d85adbc FUN_14d85adbc body=63 status=ok
// SIG undefined FUN_14d85adbc(void)

void FUN_14d85adbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c7153c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d85ae46 FUN_14d85ae46 body=156 status=ok
// SIG undefined FUN_14d85ae46(void)

void FUN_14d85ae46(void)

{
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *(undefined8 *)(unaff_RBX + 0x10) = unaff_RDI;
  FUN_160f95799(local_res20,FUN_160f95799,unaff_retaddr);
  return;
}



// FUNCTION 14d85b002 FUN_14d85b002 body=367 status=ok
// SIG undefined FUN_14d85b002(void)

/* WARNING: Removing unreachable block (ram,0x0001653aae64) */
/* WARNING: Removing unreachable block (ram,0x0001653aae6f) */
/* WARNING: Removing unreachable block (ram,0x0001667f0288) */
/* WARNING: Removing unreachable block (ram,0x0001667f028e) */
/* WARNING: Removing unreachable block (ram,0x0001653aae6a) */
/* WARNING: Removing unreachable block (ram,0x000156aed1c0) */
/* WARNING: Removing unreachable block (ram,0x00016108c598) */
/* WARNING: Removing unreachable block (ram,0x00016108c59f) */
/* WARNING: Removing unreachable block (ram,0x00016108c5a3) */
/* WARNING: Removing unreachable block (ram,0x00016108c62b) */
/* WARNING: Removing unreachable block (ram,0x00016108c631) */
/* WARNING: Removing unreachable block (ram,0x000161cda13d) */
/* WARNING: Removing unreachable block (ram,0x000161cda20a) */
/* WARNING: Removing unreachable block (ram,0x000161cda200) */
/* WARNING: Removing unreachable block (ram,0x00014d85b0e9) */
/* WARNING: Removing unreachable block (ram,0x00014d85b137) */

undefined8 FUN_14d85b002(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  longlong local_res20;
  
  uVar2 = *param_1;
  uVar3 = *param_1;
  *param_1 = 0;
  *param_1 = *param_1 - ((-0x101 - (uVar2 | 0xfeff)) + uVar3);
  *param_1 = -*param_1;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
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
  uVar15 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(ulonglong *)(local_res20 + -0x20) =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x28) = 0x14d85b06d;
  uVar13 = FUN_166c20c35(uStackX_8,uStackX_10);
  uVar15 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  uVar8 = *(undefined8 *)(local_res20 + -0x20);
  *(ulonglong *)(local_res20 + -0x20) = uStackX_8;
  *(ulonglong *)(local_res20 + -0x28) = CONCAT71((int7)(uStackX_8 >> 8),0x16);
  uVar9 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined4 *)(local_res20 + -0x20) = 0;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  uVar6 = *(ulonglong *)(unaff_RDI + -0x48);
  *(ulonglong *)(local_res20 + -0x20) = uVar15 + uStackX_8 + (uVar15 & uStackX_8) * -2;
  uVar12 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = uVar13;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  plVar1 = (longlong *)(local_res20 + -0x28);
  lVar7 = *(longlong *)(unaff_RDI + -0x88);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar7;
  uVar13 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(local_res20 + -0x28) = in_R11;
  *(undefined8 *)(local_res20 + -0x30) = in_R11;
  uVar14 = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(local_res20 + -0x38) = uVar13;
  *(undefined4 *)(local_res20 + -0x40) = 0xe22a60ed;
  *(undefined4 *)(local_res20 + -0x3c) = 0xffffffff;
  *(undefined8 *)(local_res20 + *(longlong *)(local_res20 + -0x40) + 0x1dd59eeb) = uVar14;
  uVar13 = *(undefined8 *)(local_res20 + -0x38);
  uVar14 = *(undefined8 *)(local_res20 + -0x30);
  *(undefined8 *)(local_res20 + -0x30) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x38) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x40) = uVar13;
  uVar13 = *(undefined8 *)(unaff_RDI + -0x98);
  *(undefined8 *)(local_res20 + -0x40) = uVar12;
  *(undefined8 *)(local_res20 + -0x48) = uVar8;
  uVar10 = *(ulonglong *)(local_res20 + -0x48);
  *(undefined8 *)(local_res20 + -0x48) = uVar14;
  *(undefined8 *)(local_res20 + -0x30) = uVar13;
  uVar11 = *(ulonglong *)(local_res20 + -0x40);
  uVar13 = *(undefined8 *)(local_res20 + -0x38);
  *(undefined8 *)(local_res20 + -0x38) = *(undefined8 *)(unaff_RDI + -0xa0);
  *(undefined8 *)(local_res20 + -0x38) = unaff_R13;
  lVar7 = *(longlong *)(local_res20 + -0x38);
  *(ulonglong *)(local_res20 + -0x38) = ((uVar9 - 1) - ~uVar6) + (uVar6 & uVar9) * -2;
  plVar1 = (longlong *)(local_res20 + -0x40);
  *plVar1 = local_res20 + -0x38;
  *plVar1 = *plVar1 + -8;
  puVar4 = (ulonglong *)*plVar1;
  puVar4[-1] = (ulonglong)FUN_156aed12e;
  uVar14 = FUN_156b26546();
  uVar15 = *(ulonglong *)(lVar7 + -0x78);
  *puVar4 = *(ulonglong *)(lVar7 + -0x30);
  uVar6 = *puVar4;
  *puVar4 = uVar11;
  puVar4[-1] = uVar15 ^ 0x166c20c35;
  if ((uVar6 & 0x166c20c35) != 0) {
    uVar13 = FUN_16108c512();
    return uVar13;
  }
  uVar15 = *puVar4;
  *puVar4 = uVar10;
  *puVar4 = unaff_R12;
  lVar5 = *(longlong *)(lVar7 + -0x50);
  *puVar4 = puVar4[-1];
  if (-1 < lVar5) {
    uVar13 = FUN_1666efb69();
    return uVar13;
  }
  *puVar4 = *(ulonglong *)(lVar7 + -0x70);
  puVar4[-1] = *(undefined8 *)(lVar7 + -8);
  puVar4[-2] = uVar13;
  puVar4[-3] = uVar13;
  puVar4[-4] = (ulonglong)(FUN_166c20c35 + uVar6);
  uVar13 = *(undefined8 *)(lVar7 + -0x98);
  puVar4[-4] = uVar15;
  puVar4[-5] = (ulonglong)FUN_166c20c35;
  puVar4[-6] = uVar13;
  puVar4[-2] = puVar4[-6];
  puVar4[-4] = (ulonglong)&LAB_156462080;
  return uVar14;
}



// FUNCTION 14d85b2be FUN_14d85b2be body=120 status=ok
// SIG undefined FUN_14d85b2be(void)

void FUN_14d85b2be(ulonglong param_1,ulonglong param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  code *pcVar4;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  undefined8 uStackX_10;
  char acStackX_18 [16];
  
  uVar3 = ~(param_2 & (unaff_RSI ^ 0x4b4f8eb0)) & (param_2 | unaff_RSI ^ 0x4b4f8eb0);
  uVar3 = ~(uVar3 & *(ulonglong *)(unaff_RDI + -0x68)) & (uVar3 | *(ulonglong *)(unaff_RDI + -0x68))
  ;
  uVar3 = ~((~param_1 | uVar3) & ~(uVar3 & ~param_1));
  pcVar4 = FUN_1628e80f2;
  lVar2 = FUN_1628e80f2();
  lVar2 = (uVar3 - lVar2) - (ulonglong)((uStackX_8 & 1) != 0);
  pcVar1 = acStackX_18 + lVar2;
  *pcVar1 = -0x6b;
  *pcVar1 = *pcVar1 + 'k';
  *(undefined8 *)(acStackX_18 + lVar2 + -8) = unaff_retaddr;
  *(code **)((longlong)&uStackX_8 + lVar2) = pcVar4;
  acStackX_18[lVar2] = acStackX_18[lVar2];
  acStackX_18[lVar2] = acStackX_18[lVar2] + 't';
  *(undefined8 *)((longlong)&uStackX_8 + lVar2) = uStackX_10;
  *(undefined8 *)(acStackX_18 + lVar2 + -8) = unaff_R14;
  *(ulonglong *)((longlong)&uStackX_8 + lVar2) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200
       | (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | 0x40 |
       (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 | 4 |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  FUN_156bd5ac4();
  return;
}



// FUNCTION 14d85b338 FUN_14d85b338 body=111 status=ok
// SIG undefined FUN_14d85b338(void)

void FUN_14d85b338(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong in_RAX;
  longlong lVar3;
  undefined8 unaff_R14;
  undefined8 local_res8;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  char acStackX_20 [8];
  
  lVar3 = (param_2 - in_RAX) - (ulonglong)((uStackX_10 & 1) != 0);
  pcVar1 = acStackX_20 + lVar3;
  *pcVar1 = -0x6b;
  *pcVar1 = *pcVar1 + 'k';
  *(undefined8 *)(acStackX_20 + lVar3 + -8) = local_res8;
  *(undefined8 *)((longlong)&uStackX_10 + lVar3) = param_3;
  acStackX_20[lVar3] = acStackX_20[lVar3];
  uVar2 = *(undefined8 *)((longlong)&uStackX_10 + lVar3);
  acStackX_20[lVar3] = acStackX_20[lVar3] + 't';
  *(undefined8 *)((longlong)&uStackX_10 + lVar3) = uStackX_18;
  *(undefined8 *)(acStackX_20 + lVar3 + -8) = unaff_R14;
  *(ulonglong *)((longlong)&uStackX_10 + lVar3) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | 0x40 |
       (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10 | 4 |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  FUN_156bd5ac4(param_1,lVar3,uVar2);
  return;
}



// FUNCTION 14d85b3a8 FUN_14d85b3a8 body=139 status=ok
// SIG undefined FUN_14d85b3a8(void)

void FUN_14d85b3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = ~((unaff_RBP - (local_res18 | unaff_RBP)) + local_res18) & (local_res18 | unaff_RBP)
  ;
  FUN_162456eee(param_1,&local_res18,param_3,FUN_162456eee,in_stack_00000020 ^ unaff_RBP);
  return;
}



// FUNCTION 14d85b68f FUN_14d85b68f body=236 status=ok
// SIG undefined FUN_14d85b68f(void)

void FUN_14d85b68f(void)

{
  FUN_162d2ad32();
  return;
}



// FUNCTION 14d85b85f FUN_14d85b85f body=306 status=ok
// SIG undefined FUN_14d85b85f(void)

/* WARNING: Removing unreachable block (ram,0x00014d85b906) */

void FUN_14d85b85f(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  if (-1 < (longlong)uVar1) {
    FUN_14dae1874(param_1,FUN_14dae1874,
                  ~((0xffffffffffffffff - param_1 | uVar1) & (~(~uVar1 & param_1) + param_1) - uVar1
                   ),*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
    return;
  }
  FUN_1648f8d2c();
  return;
}



// FUNCTION 14d85bb3a FUN_14d85bb3a body=126 status=ok
// SIG undefined FUN_14d85bb3a(void)

void FUN_14d85bb3a(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_166a3dd06(param_1,in_stack_00000008);
  FUN_161e0d017();
  return;
}



// FUNCTION 14d85bbbb FUN_14d85bbbb body=151 status=ok
// SIG undefined FUN_14d85bbbb(void)

void FUN_14d85bbbb(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_161e0d017(param_1,*(undefined8 *)(unaff_RDI + -0x60),FUN_161e0d017,
                *(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d85bc52 FUN_14d85bc52 body=106 status=ok
// SIG undefined FUN_14d85bc52(void)

void FUN_14d85bc52(void)

{
  thunk_FUN_16481eda2();
  return;
}



// FUNCTION 14d85be04 FUN_14d85be04 body=145 status=ok
// SIG undefined FUN_14d85be04(void)

void FUN_14d85be04(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_RBP;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  *(ulonglong *)(param_4 + 0x10) =
       ~(((~(~param_1 & unaff_RBP) + unaff_RBP) - param_1) + *(longlong *)(param_4 + 0x10) + 1);
  (*(code *)&LAB_157096963)(local_res20,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14d85bf23 FUN_14d85bf23 body=547 status=ok
// SIG undefined FUN_14d85bf23(void)

/* WARNING: Removing unreachable block (ram,0x00014d85bfbc) */

void FUN_14d85bf23(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 0x15b7f70b8;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = in_R9;
  puVar1 = (undefined8 *)(local_res18 + -0x10);
  uVar2 = *puVar1;
  *puVar1 = uVar2;
  *(undefined8 *)(local_res18 + -0x18) = uVar2;
  *puVar1 = 0x14d7a49e0;
  return;
}



// FUNCTION 14d85c199 FUN_14d85c199 body=20 status=ok
// SIG undefined FUN_14d85c199(void)

void FUN_14d85c199(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d85c38b FUN_14d85c38b body=161 status=ok
// SIG undefined FUN_14d85c38b(void)

void FUN_14d85c38b(ulonglong param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_1655dde3a(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        ~(~*(ulonglong *)(unaff_RDI + -0x68) & (param_1 ^ 0xffffffffffffffff)),
                param_2 - ~unaff_RBP);
  return;
}



// FUNCTION 14d85c4d9 FUN_14d85c4d9 body=27 status=ok
// SIG undefined FUN_14d85c4d9(void)

void FUN_14d85c4d9(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d85c506 FUN_14d85c506 body=40 status=ok
// SIG undefined FUN_14d85c506(void)

void FUN_14d85c506(void)

{
  return;
}



// FUNCTION 14d85c57c FUN_14d85c57c body=63 status=ok
// SIG undefined FUN_14d85c57c(void)

void FUN_14d85c57c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d85c618 FUN_14d85c618 body=148 status=ok
// SIG undefined FUN_14d85c618(void)

void FUN_14d85c618(undefined8 param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong in_R10;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  longlong lStackX_18;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  
  if (param_2 == ~(~(in_R10 & 0xffffffffdecaa2c3) & (in_R10 | 0xffffffffdecaa2c3))) {
    FUN_16131bb16();
    return;
  }
  uVar4 = FUN_14d80389c();
  puVar1 = (ulonglong *)(&stack0xfffffffff39ec200 + unaff_retaddr);
  uVar3 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | uVar4;
  *puVar1 = 0xffffffffffffffff - ((~uVar4 | uVar3) & *puVar1);
  puVar2 = (undefined8 *)(in_stack_00000030 ^ uVar4);
  puVar2[-1] = in_stack_00000008;
  puVar2[-2] = uStackX_20;
  puVar2[-3] = 0x14d85c734;
  uVar5 = FUN_16586a332();
  puVar2[1] = puVar2[-2] + *(longlong *)((longlong)puVar2 + lStackX_18);
  *puVar2 = unaff_R15;
  puVar2[-1] = in_stack_00000010;
  puVar2[2] = uVar5;
  FUN_14d7bf7f9(param_1,puVar2[-1]);
  return;
}



// FUNCTION 14d85c6ad FUN_14d85c6ad body=181 status=ok
// SIG undefined FUN_14d85c6ad(void)

void FUN_14d85c6ad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R15;
  longlong lStackX_10;
  undefined8 local_res18;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff39ec1f8 + unaff_RBP);
  uVar3 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | in_RAX;
  *puVar1 = 0xffffffffffffffff - ((~in_RAX | uVar3) & *puVar1);
  puVar2 = (undefined8 *)(param_5 ^ in_RAX);
  puVar2[-1] = in_R10;
  puVar2[-2] = local_res18;
  puVar2[-3] = 0x14d85c734;
  uVar4 = FUN_16586a332();
  puVar2[1] = puVar2[-2] + *(longlong *)((longlong)puVar2 + lStackX_10);
  *puVar2 = unaff_R15;
  puVar2[-1] = param_2;
  puVar2[2] = uVar4;
  FUN_14d7bf7f9(param_1,puVar2[-1]);
  return;
}



// FUNCTION 14d85c7cb FUN_14d85c7cb body=136 status=ok
// SIG undefined FUN_14d85c7cb(void)

void FUN_14d85c7cb(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  (*(code *)0x166adbc55)
            (~(unaff_RSI & (~in_RAX & 0xffffffffffffffffU - param_1 | in_RAX)),
             *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14d85c8fe FUN_14d85c8fe body=229 status=ok
// SIG undefined FUN_14d85c8fe(void)

/* WARNING: Removing unreachable block (ram,0x0001658997f8) */
/* WARNING: Removing unreachable block (ram,0x00014d85c9b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d85c8fe(void)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar1 = ~((~unaff_RBP | local_res20) & ~(local_res20 & ~unaff_RBP));
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(ulonglong *)(uVar1 - 0x10) = local_res10 ^ unaff_RBP;
  *(ulonglong *)(uVar1 - 0x18) = local_res10 ^ unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = (longlong)(&LAB_1575b15b2 + *(longlong *)(uVar1 - 8));
  FUN_1575b1597();
  return;
}



// FUNCTION 14d85ca60 FUN_14d85ca60 body=317 status=ok
// SIG undefined FUN_14d85ca60(void)

/* WARNING: Removing unreachable block (ram,0x000161295a1d) */
/* WARNING: Removing unreachable block (ram,0x000161295a23) */
/* WARNING: Removing unreachable block (ram,0x000164fc5672) */
/* WARNING: Removing unreachable block (ram,0x000164fc571f) */
/* WARNING: Removing unreachable block (ram,0x000164fc5725) */
/* WARNING: Removing unreachable block (ram,0x00015b8256c1) */
/* WARNING: Removing unreachable block (ram,0x00015b8256f8) */
/* WARNING: Removing unreachable block (ram,0x00015b8256fd) */
/* WARNING: Removing unreachable block (ram,0x00015b825754) */
/* WARNING: Removing unreachable block (ram,0x000164fc566c) */
/* WARNING: Removing unreachable block (ram,0x000164fc5683) */
/* WARNING: Removing unreachable block (ram,0x000164fc571a) */
/* WARNING: Removing unreachable block (ram,0x000165a38297) */
/* WARNING: Removing unreachable block (ram,0x000165a382a3) */
/* WARNING: Removing unreachable block (ram,0x000165a382bf) */
/* WARNING: Removing unreachable block (ram,0x000165a382b4) */
/* WARNING: Removing unreachable block (ram,0x000165a38346) */
/* WARNING: Removing unreachable block (ram,0x000165a3834c) */
/* WARNING: Removing unreachable block (ram,0x0001648dabac) */
/* WARNING: Removing unreachable block (ram,0x0001660e2287) */
/* WARNING: Removing unreachable block (ram,0x0001660e2293) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bab) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bb1) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bea) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1be5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bed) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c57) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c5c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c62) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c6d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1cfc) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1d02) */
/* WARNING: Removing unreachable block (ram,0x00015b883a95) */
/* WARNING: Removing unreachable block (ram,0x00015b883aa0) */
/* WARNING: Removing unreachable block (ram,0x0001658e643b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b2b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b0b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b2e) */
/* WARNING: Removing unreachable block (ram,0x0001660e216a) */
/* WARNING: Removing unreachable block (ram,0x0001660e21fd) */
/* WARNING: Removing unreachable block (ram,0x0001660e2203) */
/* WARNING: Removing unreachable block (ram,0x0001611aad01) */
/* WARNING: Removing unreachable block (ram,0x000156c9cc8e) */
/* WARNING: Removing unreachable block (ram,0x000156c9cc9c) */
/* WARNING: Removing unreachable block (ram,0x000156c9ccfa) */
/* WARNING: Removing unreachable block (ram,0x000156c9ccf3) */
/* WARNING: Removing unreachable block (ram,0x00014d85cb08) */
/* WARNING: Removing unreachable block (ram,0x00014d85cb10) */
/* WARNING: Removing unreachable block (ram,0x00014d85cb9e) */
/* WARNING: Removing unreachable block (ram,0x00014d85cb99) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1a6a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b05) */
/* WARNING: Removing unreachable block (ram,0x00014de42d1d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b00) */
/* WARNING: Removing unreachable block (ram,0x0001612958e3) */
/* WARNING: Removing unreachable block (ram,0x000156680f90) */
/* WARNING: Removing unreachable block (ram,0x00014d85cba4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d85ca60(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_RBP;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  bool bVar7;
  byte in_AF;
  byte bVar8;
  undefined8 unaff_retaddr;
  uint in_stack_00000008;
  ulonglong in_stack_00000018;
  
  bVar8 = (in_AF & 1) != 0;
  uVar6 = (ulonglong)
          -((~(in_stack_00000008 & 0xc7875adf) &
            (in_stack_00000008 + 0xc7875adf) - (in_stack_00000008 & 0xc7875adf)) + 2);
  uVar1 = param_3 - 1;
  bVar7 = uVar1 < (uint)(param_3 * 2);
  uVar1 = uVar1 + param_3 * -2;
  uVar2 = (ulonglong)uVar1;
  if (!bVar7) {
    return uVar6;
  }
  if (uVar1 == 0 || bVar7) {
    uVar2 = FUN_156c44776(unaff_retaddr);
    return uVar2;
  }
  uVar4 = 0xf4;
  FUN_162be705c(FUN_162be705c);
  *(ulonglong *)(unaff_RBP + 0x110) = ~*(ulonglong *)(unaff_RBP + 0x110);
  *(longlong *)(unaff_RBP + 0x110) = *(longlong *)(unaff_RBP + 0x110) + 2;
  *(longlong *)(unaff_RBP + 0x110) = -*(longlong *)(unaff_RBP + 0x110);
  *(longlong *)(unaff_RBP + 0x110) = *(longlong *)(unaff_RBP + 0x110) - ~uVar2;
  iVar5 = (int)uVar2 + (int)uVar6;
  uVar1 = param_4 + iVar5;
                    /* WARNING: Ignoring partial resolution of indirect */
  if (-1 < (int)uVar1) {
    uVar2 = FUN_166565b6d();
    return uVar2;
  }
  if (!SCARRY4(param_4,iVar5)) {
    if (&stack0x00000010 < &stack0x00000008) {
      pcVar3 = FUN_161943194;
      FUN_161943194(FUN_161943194,uVar4,uVar2,uVar1 + 0xc1bdceee);
      uVar2 = FUN_1571ff1d4(pcVar3,~(*(ulonglong *)(unaff_R13 + -0x98) | in_stack_00000018));
      return uVar2;
    }
    uVar2 = FUN_1612958d3();
    return uVar2;
  }
  return (ulonglong)
         (byte)((uVar1 == 0) << 6 | 0x80U | ((bVar8 & 1) != 0) << 4 |
                ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) << 2 | 2);
}



// FUNCTION 14d85cba4 FUN_14d85cba4 body=103 status=ok
// SIG undefined FUN_14d85cba4(void)

void FUN_14d85cba4(undefined8 param_1)

{
  (*(code *)0x1657e280c)(param_1);
  return;
}



// FUNCTION 14d85cc33 FUN_14d85cc33 body=44 status=ok
// SIG undefined FUN_14d85cc33(void)

void FUN_14d85cc33(void)

{
  return;
}



// FUNCTION 14d85cd5a FUN_14d85cd5a body=205 status=ok
// SIG undefined FUN_14d85cd5a(void)

void FUN_14d85cd5a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong unaff_RBP;
  
  FUN_1661d7d79(0x18,param_2,param_3,param_6 + unaff_RBP,param_4);
  return;
}



// FUNCTION 14d85d00c FUN_14d85d00c body=282 status=ok
// SIG undefined FUN_14d85d00c(void)

/* WARNING: Removing unreachable block (ram,0x0001574b103c) */
/* WARNING: Removing unreachable block (ram,0x00014d85d086) */
/* WARNING: Removing unreachable block (ram,0x00014d85d08c) */
/* WARNING: Removing unreachable block (ram,0x00014d85d0bb) */
/* WARNING: Removing unreachable block (ram,0x0001574b102c) */

void FUN_14d85d00c(void)

{
  FUN_156790225();
  return;
}



// FUNCTION 14d85d1d0 FUN_14d85d1d0 body=432 status=ok
// SIG undefined FUN_14d85d1d0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d85d25e) */
/* WARNING: Removing unreachable block (ram,0x00014d85d264) */
/* WARNING: Removing unreachable block (ram,0x00014d85d303) */
/* WARNING: Removing unreachable block (ram,0x00014d85d308) */
/* WARNING: Removing unreachable block (ram,0x00014d85d30e) */
/* WARNING: Removing unreachable block (ram,0x000165f803c0) */
/* WARNING: Removing unreachable block (ram,0x000165f803e4) */
/* WARNING: Removing unreachable block (ram,0x000165f803e8) */
/* WARNING: Removing unreachable block (ram,0x00014d85d23b) */
/* WARNING: Removing unreachable block (ram,0x000165658768) */
/* WARNING: Removing unreachable block (ram,0x00015b79a982) */

void FUN_14d85d1d0(void)

{
  longlong unaff_RDI;
  
  if (0xffffffffffffd824 < unaff_RDI - 0x284bU) {
    FUN_165658734();
    return;
  }
  return;
}



// FUNCTION 14d85d314 FUN_14d85d314 body=159 status=ok
// SIG undefined FUN_14d85d314(void)

void FUN_14d85d314(void)

{
  FUN_14df0e72f();
  return;
}



// FUNCTION 14d85d504 FUN_14d85d504 body=394 status=ok
// SIG undefined FUN_14d85d504(void)

/* WARNING: Removing unreachable block (ram,0x00014d85d600) */
/* WARNING: Removing unreachable block (ram,0x00014d85d606) */

void FUN_14d85d504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164f74ad7(param_1,param_2,param_3);
  FUN_165ef545c();
  return;
}



// FUNCTION 14d85d698 FUN_14d85d698 body=146 status=ok
// SIG undefined FUN_14d85d698(void)

void FUN_14d85d698(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)
   (&stack0x00000010 + ~(~(unaff_R13 & 0xffffffff9f009a21) & (unaff_R13 | 0xffffffff9f009a21))) =
       unaff_retaddr;
  FUN_161c6454e(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14d85dacc FUN_14d85dacc body=10 status=ok
// SIG undefined FUN_14d85dacc(void)

void FUN_14d85dacc(void)

{
  return;
}



// FUNCTION 14d85dfe8 FUN_14d85dfe8 body=192 status=ok
// SIG undefined FUN_14d85dfe8(void)

void FUN_14d85dfe8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160e0805c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d85e1ed FUN_14d85e1ed body=176 status=ok
// SIG undefined FUN_14d85e1ed(void)

/* WARNING: Removing unreachable block (ram,0x00014d85e288) */

undefined8 FUN_14d85e1ed(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  if (-1 < (longlong)uVar2) {
    uVar1 = FUN_15676b54d(param_1,uVar2,~unaff_RBP);
    return uVar1;
  }
  uVar1 = FUN_15676b54d(param_1,uVar2,~unaff_RBP);
  return uVar1;
}



// FUNCTION 14d85e79c FUN_14d85e79c body=144 status=ok
// SIG undefined FUN_14d85e79c(void)

/* WARNING: Removing unreachable block (ram,0x00014d85e8a2) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8a8) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8ad) */

void FUN_14d85e79c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar1;
  undefined8 unaff_retaddr;
  longlong local_res8;
  
  FUN_160ed3c8d(unaff_retaddr);
  lVar1 = *(ulonglong *)(unaff_RSI + -0x38) + (unaff_RBX - unaff_RBP) +
          (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBX - unaff_RBP) * -2;
  if (lVar1 != 0) {
    FUN_14dfaee5a(lVar1,FUN_14dfaee5a,local_res8 + param_3 * -2);
    return;
  }
  return;
}



// FUNCTION 14d85e82c thunk_FUN_14d85e832 body=5 status=ok
// SIG undefined thunk_FUN_14d85e832(void)

/* WARNING: Removing unreachable block (ram,0x00014d85e8a2) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8a8) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8ad) */

void thunk_FUN_14d85e832(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar1;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2;
  if (lVar1 != 0) {
    FUN_14dfaee5a(lVar1,FUN_14dfaee5a,unaff_RBX + param_3 * -2);
    return;
  }
  return;
}



// FUNCTION 14d85e832 FUN_14d85e832 body=123 status=ok
// SIG undefined FUN_14d85e832(void)

/* WARNING: Removing unreachable block (ram,0x00014d85e8a2) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8a8) */
/* WARNING: Removing unreachable block (ram,0x00014d85e8ad) */

void FUN_14d85e832(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar1;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2;
  if (lVar1 != 0) {
    FUN_14dfaee5a(lVar1,FUN_14dfaee5a,unaff_RBX + param_3 * -2);
    return;
  }
  return;
}



// FUNCTION 14d85e8ad FUN_14d85e8ad body=128 status=ok
// SIG undefined FUN_14d85e8ad(void)

void FUN_14d85e8ad(void)

{
  FUN_14e14ffe8();
  return;
}



// FUNCTION 14d85ea54 FUN_14d85ea54 body=151 status=ok
// SIG undefined FUN_14d85ea54(void)

void FUN_14d85ea54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165ac3e34(param_1,param_2,param_3);
  FUN_14d85eaed();
  return;
}



// FUNCTION 14d85eaed FUN_14d85eaed body=58 status=ok
// SIG undefined FUN_14d85eaed(void)

void FUN_14d85eaed(void)

{
  ulonglong *puVar1;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  ulonglong uVar2;
  ulonglong unaff_R12;
  ulonglong uStackX_20;
  
  uVar2 = ~((~unaff_RSI | in_R10) + unaff_RSI + 1);
  *(undefined8 *)((longlong)&uStackX_20 + uVar2) = 0;
  puVar1 = (ulonglong *)((longlong)&uStackX_20 + uVar2);
  *puVar1 = *puVar1 ^ unaff_R12;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d85ec2e FUN_14d85ec2e body=270 status=ok
// SIG undefined FUN_14d85ec2e(void)

/* WARNING: Removing unreachable block (ram,0x00014d85ecb2) */
/* WARNING: Removing unreachable block (ram,0x00014d85ece5) */

void FUN_14d85ec2e(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R10;
  ulonglong in_stack_00000020;
  
  FUN_16495768b(param_1,param_2 + in_R10 + (param_2 & in_R10) * -2,param_3,param_4,
                in_stack_00000020 ^ in_R10);
  return;
}



// FUNCTION 14d85ecb2 FUN_14d85ecb2 body=151 status=ok
// SIG undefined FUN_14d85ecb2(void)

void FUN_14d85ecb2(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  longlong in_stack_00000038;
  
  *(undefined8 *)
   (unaff_R13 + unaff_R15 + ~(~(unaff_RBX & 0xffffffffcfc92c55) & (unaff_RBX | 0xffffffffcfc92c55)))
       = in_R9;
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7c2ac6);
  UNLOCK();
  DAT_14d7c2ac6 = (char)in_RAX;
  *(undefined8 *)(in_stack_00000038 + -8) = unaff_RDI;
  *(undefined8 *)(in_stack_00000038 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000038 + -0x18) = uVar1;
  *(undefined4 *)(in_stack_00000038 + -0x18) = 0xf531f21;
  *(undefined8 *)(in_stack_00000038 + -0x20) = uVar1;
  *(undefined8 *)(in_stack_00000038 + -0x28) = unaff_R14;
  *(undefined8 *)(in_stack_00000038 + -0x30) = unaff_R14;
  *(undefined8 *)(in_stack_00000038 + -0x38) = unaff_R14;
  *(undefined8 *)(in_stack_00000038 + -0x28) = 0x14d85ed4b;
  *(undefined8 *)(in_stack_00000038 + -0x30) = 0x1620b9878;
  return;
}



// FUNCTION 14d85f083 FUN_14d85f083 body=120 status=ok
// SIG undefined FUN_14d85f083(void)

void FUN_14d85f083(void)

{
  return;
}



// FUNCTION 14d85f244 FUN_14d85f244 body=347 status=FAIL
// SIG undefined FUN_14d85f244(void)
/* DECOMPILE FAILED */

// FUNCTION 14d85f39f FUN_14d85f39f body=153 status=ok
// SIG undefined FUN_14d85f39f(void)

void FUN_14d85f39f(void)

{
  FUN_1573fa9f9();
  return;
}



// FUNCTION 14d85f43f FUN_14d85f43f body=98 status=ok
// SIG undefined FUN_14d85f43f(void)

void FUN_14d85f43f(undefined8 param_1,undefined8 param_2)

{
  FUN_166bede61(param_1,param_2,FUN_166bede61);
  return;
}



// FUNCTION 14d85f6c8 FUN_14d85f6c8 body=268 status=ok
// SIG undefined FUN_14d85f6c8(void)

void FUN_14d85f6c8(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(longlong *)(unaff_R13 + 8) = -*(longlong *)(unaff_R13 + 8);
  *(longlong *)(unaff_R13 + 8) = *(longlong *)(unaff_R13 + 8) + -1;
  *(ulonglong *)(unaff_R13 + 8) = ~param_1 & *(ulonglong *)(unaff_R13 + 8) | param_1;
  *(ulonglong *)(unaff_R13 + 8) =
       (0xffffffffffffffff - param_1 | uVar1) & *(ulonglong *)(unaff_R13 + 8) ^ 0xffffffffffffffff;
  FUN_1657e1f58(param_1,param_2,in_stack_00000008);
  FUN_1568ed7ab();
  return;
}



// FUNCTION 14d85f984 FUN_14d85f984 body=169 status=ok
// SIG undefined FUN_14d85f984(void)

undefined8 FUN_14d85f984(void)

{
  return 0x3fb3d2ff;
}



// FUNCTION 14d85fac7 FUN_14d85fac7 body=189 status=ok
// SIG undefined FUN_14d85fac7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d85fac7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d85fb86 FUN_14d85fb86 body=179 status=ok
// SIG undefined FUN_14d85fb86(void)

void FUN_14d85fb86(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x1662c44d8)(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d85fc3a FUN_14d85fc3a body=153 status=ok
// SIG undefined FUN_14d85fc3a(void)

undefined8 FUN_14d85fc3a(void)

{
  uint *puVar1;
  undefined8 in_RAX;
  uint unaff_EBX;
  longlong in_R9;
  undefined8 local_res8;
  
  *(undefined4 *)(in_R9 + local_res8 + 0x337235ff) = 0;
  puVar1 = (uint *)(in_R9 + local_res8 + 0x337235ff);
  *puVar1 = *puVar1 ^ unaff_EBX;
  return in_RAX;
}



// FUNCTION 14d85fe3f FUN_14d85fe3f body=52 status=ok
// SIG undefined FUN_14d85fe3f(void)

undefined1 * FUN_14d85fe3f(void)

{
  undefined1 local_8 [8];
  
  return local_8;
}



// FUNCTION 14d85ff75 FUN_14d85ff75 body=160 status=ok
// SIG undefined FUN_14d85ff75(void)

void FUN_14d85ff75(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1657b7aa2(param_1,FUN_1657b7aa2,~param_1 | *(ulonglong *)(unaff_RDI + -0x60),
                ~*(ulonglong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d86015b FUN_14d86015b body=178 status=ok
// SIG undefined FUN_14d86015b(void)

undefined8 FUN_14d86015b(void)

{
  return 0x63b5a1a0;
}



// FUNCTION 14d860297 FUN_14d860297 body=175 status=ok
// SIG undefined FUN_14d860297(void)

/* WARNING: Removing unreachable block (ram,0x00014d8603d7) */
/* WARNING: Removing unreachable block (ram,0x00014d8603e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8603ee) */
/* WARNING: Removing unreachable block (ram,0x00014d860347) */
/* WARNING: Removing unreachable block (ram,0x00014e213a81) */
/* WARNING: Removing unreachable block (ram,0x00014e213ab1) */
/* WARNING: Removing unreachable block (ram,0x00014e213ac5) */
/* WARNING: Removing unreachable block (ram,0x00014d8603f3) */

void FUN_14d860297(undefined1 param_1,undefined8 param_2)

{
  FUN_15b14b465(param_1,param_2);
  return;
}



// FUNCTION 14d860347 FUN_14d860347 body=250 status=ok
// SIG undefined FUN_14d860347(void)

/* WARNING: Removing unreachable block (ram,0x00014d8603d7) */
/* WARNING: Removing unreachable block (ram,0x00014d8603e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8603ee) */
/* WARNING: Removing unreachable block (ram,0x00014d8603f3) */

void FUN_14d860347(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  ushort *in_RAX;
  short in_stack_00000008;
  char local_res10;
  
  uVar1 = *in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = 0;
  *in_RAX = *in_RAX;
  *in_RAX = *in_RAX + (-0x101 - ~(~uVar1 & 0xffffU - in_stack_00000008 | uVar2));
  LOCK();
  cVar3 = param_1;
  if (local_res10 != DAT_14d7be1e2) {
    cVar3 = DAT_14d7be1e2;
  }
  DAT_14d7be1e2 = cVar3;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = 0x59b5be2;
  FUN_165c7153c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d86063e FUN_14d86063e body=76 status=ok
// SIG undefined FUN_14d86063e(void)

void FUN_14d86063e(void)

{
  return;
}



// FUNCTION 14d8606be FUN_14d8606be body=696 status=ok
// SIG undefined FUN_14d8606be(void)

/* WARNING: Removing unreachable block (ram,0x00014d86073a) */

undefined8
FUN_14d8606be(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  ushort uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  longlong unaff_R14;
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
  byte bVar17;
  undefined8 uStackX_10;
  ulonglong uStackX_20;
  
  *param_2 = ~*param_2;
  uVar1 = *param_2;
  *param_2 = *param_2 & 0x100;
  *param_2 = (uVar1 + 0x100) - *param_2;
  *param_2 = ~*param_2;
  bVar13 = (uStackX_20 & 0x4000) != 0;
  bVar12 = (uStackX_20 & 0x800) != 0;
  bVar11 = (uStackX_20 & 0x200) != 0;
  bVar10 = (uStackX_20 & 0x100) != 0;
  bVar9 = (uStackX_20 & 0x80) != 0;
  bVar8 = (uStackX_20 & 0x40) != 0;
  bVar7 = (uStackX_20 & 0x10) != 0;
  bVar6 = (uStackX_20 & 4) != 0;
  bVar5 = (uStackX_20 & 1) != 0;
  bVar17 = (uStackX_20 & 0x200000) != 0;
  bVar14 = (uStackX_20 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)(param_1,uStackX_10);
  *param_5 = unaff_R14;
  param_5[-1] = unaff_R14;
  *(undefined4 *)(param_5 + -2) = 0xb233cb5;
  *(undefined4 *)((longlong)param_5 + -0xc) = 0;
  lVar3 = param_5[-2];
  param_5[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
                (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  param_5[-3] = lVar3;
  param_5[-3] = param_5[-3] + -0x947b41d;
  *param_5 = lVar3 + -0x947b41d;
  param_5[-1] = unaff_RSI;
  param_5[-2] = unaff_RSI;
  param_5[-1] = (longlong)FUN_165c7153c;
  return uVar4;
}



// FUNCTION 14d860b16 FUN_14d860b16 body=156 status=ok
// SIG undefined FUN_14d860b16(void)

void FUN_14d860b16(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_156e6b078(param_1,param_2,(ushort)*(undefined8 *)(unaff_RDI + -0x30) | (ushort)param_1,
                FUN_156e6b078);
  return;
}



// FUNCTION 14d860bb3 FUN_14d860bb3 body=275 status=ok
// SIG undefined FUN_14d860bb3(void)

void FUN_14d860bb3(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16298814c(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  FUN_15b72bef2();
  return;
}



// FUNCTION 14d860ccf FUN_14d860ccf body=130 status=ok
// SIG undefined FUN_14d860ccf(void)

void FUN_14d860ccf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dac578c(param_1,param_2,param_3,FUN_14dac578c);
  return;
}



// FUNCTION 14d860d51 FUN_14d860d51 body=146 status=ok
// SIG undefined FUN_14d860d51(void)

/* WARNING: Removing unreachable block (ram,0x00014d860d89) */

void FUN_14d860d51(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1655e0e96(param_1,(~(~*(ulonglong *)(unaff_RDI + -0x80) & param_1) + param_1) -
                        *(ulonglong *)(unaff_RDI + -0x80));
  return;
}



// FUNCTION 14d860dea FUN_14d860dea body=173 status=ok
// SIG undefined FUN_14d860dea(void)

void FUN_14d860dea(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_14e1e302b(param_1,8,FUN_14e1e302b,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d860e97 FUN_14d860e97 body=3 status=ok
// SIG undefined FUN_14d860e97(void)

void FUN_14d860e97(void)

{
  return;
}



// FUNCTION 14d861288 FUN_14d861288 body=448 status=ok
// SIG undefined FUN_14d861288(void)

void FUN_14d861288(void)

{
  ulonglong unaff_RSI;
  
  *(undefined4 *)
   (&stack0x00000008 + ~(~(unaff_RSI & 0xffffffffecdbf134) & (unaff_RSI | 0xffffffffecdbf134))) =
       0xc17ffb82;
  (*(code *)0x16568e831)();
  return;
}



// FUNCTION 14d86167b FUN_14d86167b body=130 status=ok
// SIG undefined FUN_14d86167b(void)

void FUN_14d86167b(void)

{
  return;
}



// FUNCTION 14d861761 FUN_14d861761 body=293 status=ok
// SIG undefined FUN_14d861761(void)

void FUN_14d861761(void)

{
  undefined1 local_res8 [32];
  
  FUN_16592bc4d(local_res8);
  return;
}



// FUNCTION 14d8617ea FUN_14d8617ea body=544 status=ok
// SIG undefined FUN_14d8617ea(void)

/* WARNING: Removing unreachable block (ram,0x00014d861970) */
/* WARNING: Removing unreachable block (ram,0x00014d861976) */
/* WARNING: Removing unreachable block (ram,0x00014d86197b) */
/* WARNING: Removing unreachable block (ram,0x00014d8618e9) */

void FUN_14d8617ea(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  longlong unaff_RSI;
  longlong lVar10;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong lStackX_20;
  ulonglong uStack_8;
  
  lVar10 = unaff_RSI - ~(~(param_2 & 0xffffffff88bb0e52) & (param_2 | 0xffffffff88bb0e52));
  *(undefined4 *)((longlong)&uStackX_18 + lVar10) = 0x1a1ed5d5;
  *(undefined4 *)((longlong)&lStackX_20 + lVar10) = *(undefined4 *)((longlong)&uStackX_18 + lVar10);
  uVar6 = *(undefined8 *)((longlong)&lStackX_20 + lVar10);
  *(undefined8 *)((longlong)&lStackX_20 + lVar10) = in_RAX;
  *(undefined8 *)((longlong)&uStackX_18 + lVar10) = in_RAX;
  *(undefined4 *)((longlong)&uStackX_18 + lVar10) = 0xceee2ff0;
  *(undefined4 *)((longlong)&uStackX_18 + lVar10 + 4) = 0;
  uVar1 = *(undefined8 *)((longlong)&lStackX_20 + lVar10);
  if (SCARRY4((int)uVar6,(int)*(undefined8 *)((longlong)&uStackX_18 + lVar10))) {
    unaff_RDI = uStackX_10;
  }
  *(ulonglong *)((longlong)&lStackX_20 + lVar10) = param_1 + unaff_R15 + (param_1 & unaff_R15) * -2;
  uVar7 = *(undefined8 *)((longlong)&lStackX_20 + lVar10);
  *(undefined8 *)((longlong)&lStackX_20 + lVar10) = uVar1;
  *(undefined8 *)((longlong)&uStackX_18 + lVar10) = *(undefined8 *)((longlong)&uStackX_18 + lVar10);
  pcVar8 = FUN_16564fd40;
  *(undefined8 *)((longlong)&stack0x00000010 + lVar10) = 0x14d86186d;
  uVar6 = FUN_16564fd40();
  uVar2 = *(undefined8 *)((longlong)&uStackX_18 + lVar10);
  *(undefined8 *)((longlong)&uStackX_18 + lVar10) = param_4;
  *(undefined8 *)((longlong)&stack0x00000010 + lVar10) = uVar6;
  *(longlong *)(&stack0x00000008 + lVar10) = unaff_R13 + -0x28;
  uVar9 = *(ulonglong *)(unaff_R12 + -0x90);
  lVar3 = *(longlong *)(&stack0x00000008 + lVar10);
  uVar4 = *(ulonglong *)((longlong)&stack0x00000010 + lVar10);
  uVar5 = *(undefined8 *)((longlong)&uStackX_18 + lVar10);
  *(code **)((longlong)&uStackX_18 + lVar10) = pcVar8;
  uVar9 = (uVar9 & uVar4 ^ 0xffffffffffffffff) & (uVar9 | uVar4);
  uVar1 = *(undefined8 *)((longlong)&uStackX_18 + lVar10);
  *(ulonglong *)((longlong)&uStackX_18 + lVar10) = uVar9;
  *(ulonglong *)((longlong)&stack0x00000010 + lVar10) = uVar9;
  *(ulonglong *)(&stack0x00000008 + lVar10) = uVar4;
  *(longlong *)(&stack0x00000000 + lVar10) = lVar3;
  uVar6 = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)(&stack0x00000008 + lVar10) = uVar5;
  if ((undefined1 *)((longlong)&uStackX_18 + lVar10) < &DAT_fffffffffffffff8) {
    FUN_162a445b0();
    return;
  }
  *(undefined8 *)(&stack0x00000000 + lVar10) = uVar7;
  *(undefined8 *)((longlong)&uStack_8 + lVar10) = 0xffffffffd90de88e;
  uVar7 = *(undefined8 *)(&stack0x00000000 + lVar10);
  *(undefined8 *)(&stack0x26f21789 + (lVar10 - ~*(ulonglong *)((longlong)&uStack_8 + lVar10))) =
       uVar6;
  uVar6 = *(undefined8 *)(&stack0x00000008 + lVar10);
  *(undefined8 *)((longlong)&stack0x00000010 + lVar10) = unaff_RBX;
  *(undefined8 *)(&stack0x00000008 + lVar10) = unaff_RBX;
  *(undefined8 *)(&stack0x00000000 + lVar10) = uVar2;
  *(undefined8 *)((longlong)&uStack_8 + lVar10) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)(&stack0x00000000 + lVar10) = unaff_RDI;
  *(undefined8 *)((longlong)&stack0x00000010 + lVar10) =
       *(undefined8 *)((longlong)&uStack_8 + lVar10);
  FUN_15b3e3784(uVar7,uVar1,param_3,uVar6);
  return;
}



// FUNCTION 14d861b40 FUN_14d861b40 body=197 status=ok
// SIG undefined FUN_14d861b40(void)

void FUN_14d861b40(void)

{
  FUN_166cf9bd4();
  return;
}



// FUNCTION 14d861d0e FUN_14d861d0e body=147 status=ok
// SIG undefined FUN_14d861d0e(void)

void FUN_14d861d0e(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_R13;
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
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar1 = ~(local_res10 & unaff_RBP) & (local_res10 + unaff_RBP) - (local_res10 & unaff_RBP);
  puVar2 = (undefined8 *)(local_res18 ^ unaff_RBP);
  bVar12 = (uVar1 & 0x4000) != 0;
  bVar11 = (uVar1 & 0x800) != 0;
  bVar10 = (uVar1 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar1 & 0x80) != 0;
  bVar7 = (uVar1 & 0x40) != 0;
  bVar6 = (uVar1 & 0x10) != 0;
  bVar5 = (uVar1 & 4) != 0;
  bVar4 = (uVar1 & 1) != 0;
  bVar16 = (uVar1 & 0x200000) != 0;
  bVar13 = (uVar1 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar2 = unaff_RBX;
  puVar2[-1] = unaff_RBX;
  *(undefined4 *)(puVar2 + -2) = 0xb37be38;
  puVar2[-3] = unaff_R13;
  puVar2[-4] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
  FUN_156c09aaf();
  return;
}



// FUNCTION 14d862245 FUN_14d862245 body=254 status=ok
// SIG undefined FUN_14d862245(void)

/* WARNING: Removing unreachable block (ram,0x00014d8622d7) */
/* WARNING: Removing unreachable block (ram,0x00014d8622dd) */

void FUN_14d862245(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_1658e1930(0xed,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14d8622dd FUN_14d8622dd body=67 status=ok
// SIG undefined FUN_14d8622dd(void)

void FUN_14d8622dd(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d862391 FUN_14d862391 body=259 status=ok
// SIG undefined FUN_14d862391(void)

void FUN_14d862391(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong local_8;
  
  local_8 = 0xffffffffabc1aed3;
  FUN_165f3deb4(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x38),0xffffffffabc1aed3);
  uVar1 = (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) + unaff_RBP + 1;
  (*(code *)0x162ae1944)
            (uVar1,*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP,~uVar1,local_8 ^ unaff_RBP);
  return;
}



// FUNCTION 14d862779 FUN_14d862779 body=149 status=ok
// SIG undefined FUN_14d862779(void)

void FUN_14d862779(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_165e013a1(param_1,param_2,param_3,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d862a60 FUN_14d862a60 body=150 status=ok
// SIG undefined FUN_14d862a60(void)

void FUN_14d862a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  *(undefined8 *)(local_res10 + -0x28) = *(undefined8 *)(local_res10 + -0x10);
  puVar1 = (ulonglong *)(local_res10 + -8);
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x15b926d8b;
  FUN_15b926d4a(unaff_retaddr,FUN_15b926d4a,*(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14d862b91 thunk_FUN_14d862bab body=19 status=ok
// SIG undefined thunk_FUN_14d862bab(void)

void thunk_FUN_14d862bab(void)

{
  FUN_14d862bab();
  return;
}



// FUNCTION 14d862bab FUN_14d862bab body=144 status=ok
// SIG undefined FUN_14d862bab(void)

void FUN_14d862bab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15682db2d(param_1,param_2,param_3);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d862cb1 FUN_14d862cb1 body=141 status=ok
// SIG undefined FUN_14d862cb1(void)

void FUN_14d862cb1(void)

{
  FUN_1569ea804();
  return;
}



// FUNCTION 14d863174 FUN_14d863174 body=122 status=ok
// SIG undefined FUN_14d863174(void)

void FUN_14d863174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8631ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d86321b FUN_14d86321b body=143 status=ok
// SIG undefined FUN_14d86321b(void)

void FUN_14d86321b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161712694(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8632aa FUN_14d8632aa body=178 status=ok
// SIG undefined FUN_14d8632aa(void)

void FUN_14d8632aa(void)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong in_R10;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff47fe4a7 + (in_RAX ^ 0x737784ef));
  *puVar1 = unaff_RSI;
  puVar1[1] = unaff_RBP;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + 1);
  if (*(int *)(puVar1 + 1) < 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xcc153be4;
    *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) ^ 0x284854ed;
    *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) ^ 0x1ba290f6;
    *puVar1 = 0x14d863308;
                    /* WARNING: Could not recover jumptable at 0x00014d863306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)();
    return;
  }
  puVar1[1] = 0;
  puVar1[1] = puVar1[1] - in_R10;
  puVar1[1] = -puVar1[1];
  FUN_160cfcb33();
  return;
}



// FUNCTION 14d863363 FUN_14d863363 body=156 status=ok
// SIG undefined FUN_14d863363(void)

void FUN_14d863363(void)

{
  return;
}



// FUNCTION 14d863402 FUN_14d863402 body=121 status=ok
// SIG undefined FUN_14d863402(void)

void FUN_14d863402(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte in_AL;
  undefined8 unaff_R14;
  bool bVar4;
  bool bVar5;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  LOCK();
  bVar4 = in_AL < DAT_14d7abe7f;
  bVar5 = SBORROW1(in_AL,DAT_14d7abe7f);
  cVar3 = in_AL - DAT_14d7abe7f;
  if (cVar3 == '\0') {
    DAT_14d7abe7f = (byte)uStackX_10;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_8;
  *(undefined4 *)(local_res20 + -0x18) = 0x5c9ae49;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(longlong *)(local_res20 + -8) = lVar1 + -0x1d5b03f;
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = 0x14d863476;
  FUN_1653a3455(*(undefined8 *)(local_res20 + -0x20),FUN_1653a3455,param_3,uVar2);
  FUN_14d86347c();
  return;
}



// FUNCTION 14d86347c FUN_14d86347c body=308 status=ok
// SIG undefined FUN_14d86347c(void)

void FUN_14d86347c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong unaff_retaddr;
  
  uVar1 = FUN_1658773da();
  lVar2 = -(~(unaff_retaddr - 0x3ab5U) + 2);
  puVar3 = (uint *)(lVar2 + 0x3aae);
  *puVar3 = 0xe1d00c1f;
  *puVar3 = *puVar3 + 0x2736deca;
  *puVar3 = *puVar3 ^ 0x22d1da6;
  *(undefined4 *)(lVar2 + 0x3ab6) = 0;
  *(ulonglong *)(lVar2 + 0x3aa6) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar3 < 0) * 0x80 |
       (ulonglong)(*puVar3 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*puVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(lVar2 + 0x3aa6) = *(ushort *)(lVar2 + 0x3aa6) & 0x100;
  puVar4 = (uint *)(lVar2 + 0x3aa6);
  if (*(short *)(lVar2 + 0x3aa6) == 0) {
    puVar4 = puVar3;
  }
  *(undefined8 *)(puVar4 + -2) = unaff_R12;
  *(undefined8 *)(puVar4 + -4) = uVar1;
  puVar4[-4] = 0xbace8852;
  puVar4[-3] = 0xffffffff;
  thunk_FUN_165d6ef65();
  return;
}



// FUNCTION 14d863838 FUN_14d863838 body=265 status=ok
// SIG undefined FUN_14d863838(void)

/* WARNING: Instruction at (ram,0x000160fba140) overlaps instruction at (ram,0x000160fba13f)
    */
/* WARNING: Removing unreachable block (ram,0x0001618a7337) */
/* WARNING: Removing unreachable block (ram,0x0001618a7343) */
/* WARNING: Removing unreachable block (ram,0x000160fba13f) */
/* WARNING: Removing unreachable block (ram,0x00014d8638e4) */

void FUN_14d863838(void)

{
  undefined8 in_RAX;
  char in_stack_00000008;
  char cStack0000000000000122;
  undefined1 uStack0000000000000123;
  
  cStack0000000000000122 =
       in_stack_00000008 -
       (&stack0xfffffffffd76d5d2)[CONCAT44((int)((ulonglong)in_RAX >> 0x20),0x2892b50)];
  uStack0000000000000123 = 0;
  FUN_14d975e79();
  return;
}



// FUNCTION 14d863a25 FUN_14d863a25 body=468 status=ok
// SIG undefined FUN_14d863a25(void)

/* WARNING: Removing unreachable block (ram,0x00014d863a93) */
/* WARNING: Removing unreachable block (ram,0x00014d863acc) */

void FUN_14d863a25(longlong param_1)

{
  longlong unaff_RDI;
  
  FUN_162a0e99d(0xc5,0x548a6700,FUN_162a0e99d,*(longlong *)(unaff_RDI + -0x30) + param_1);
  return;
}



// FUNCTION 14d863b66 FUN_14d863b66 body=270 status=ok
// SIG undefined FUN_14d863b66(void)

void FUN_14d863b66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  (*(code *)0x15afb5129)(unaff_retaddr,uStackX_8,param_3,param_4);
  return;
}



// FUNCTION 14d863e75 FUN_14d863e75 body=26 status=ok
// SIG undefined FUN_14d863e75(void)

void FUN_14d863e75(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x30) | param_1;
  (*(code *)0x16139fab4)
            (param_1,*(undefined8 *)(unaff_RDI + -0x60),param_3 | ~unaff_RBX,
             (~uVar1 | 0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x30)) + uVar1 + 1
            );
  return;
}



// FUNCTION 14d863f05 FUN_14d863f05 body=75 status=ok
// SIG undefined FUN_14d863f05(void)

void FUN_14d863f05(void)

{
  FUN_1616cb8da(&stack0x0000000c,FUN_1616cb8da,4,0x6bbc3a5);
  return;
}



// FUNCTION 14d864064 FUN_14d864064 body=326 status=ok
// SIG undefined FUN_14d864064(void)

/* WARNING: Removing unreachable block (ram,0x00014d864146) */
/* WARNING: Removing unreachable block (ram,0x00014d86410e) */
/* WARNING: Removing unreachable block (ram,0x00014d864119) */
/* WARNING: Removing unreachable block (ram,0x00014d86414d) */
/* WARNING: Removing unreachable block (ram,0x00014d864114) */

void FUN_14d864064(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1656aaad3(~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                 (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  FUN_14d7a8e75();
  return;
}



// FUNCTION 14d8642df FUN_14d8642df body=282 status=ok
// SIG undefined FUN_14d8642df(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8642df(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined1 in_stack_00000040;
  
  FUN_1629cc096(param_1,in_stack_00000040,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  FUN_1668175b0(param_1);
  return;
}



// FUNCTION 14d864514 FUN_14d864514 body=163 status=ok
// SIG undefined FUN_14d864514(void)

/* WARNING: Removing unreachable block (ram,0x000156d871a6) */
/* WARNING: Removing unreachable block (ram,0x00014d8645b4) */

void FUN_14d864514(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX;
  FUN_1663eb618(~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                 (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),*(undefined8 *)(unaff_R12 + -0x78));
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30) | unaff_R15;
  FUN_165a67820(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),
                (~uVar1 | *(ulonglong *)(unaff_R13 + -0x30) & unaff_R15 ^ 0xffffffffffffffff) +
                uVar1 + 1,uVar2);
  return;
}



// FUNCTION 14d864636 FUN_14d864636 body=166 status=ok
// SIG undefined FUN_14d864636(void)

undefined8 FUN_14d864636(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d864a5a FUN_14d864a5a body=324 status=ok
// SIG undefined FUN_14d864a5a(void)

/* WARNING: Removing unreachable block (ram,0x00014d864b00) */
/* WARNING: Removing unreachable block (ram,0x00014d864b06) */
/* WARNING: Removing unreachable block (ram,0x00014d864b96) */
/* WARNING: Removing unreachable block (ram,0x00014d864ba2) */
/* WARNING: Removing unreachable block (ram,0x00014d89867b) */
/* WARNING: Removing unreachable block (ram,0x00014d8987a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8987b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8987ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8987a2) */
/* WARNING: Removing unreachable block (ram,0x000161a478b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8987f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8987f5) */
/* WARNING: Removing unreachable block (ram,0x00016542747e) */

ulonglong FUN_14d864a5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined1 **)(local_res10 + -0x10) = &LAB_16155c51f;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_16155c51f;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  uVar2 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBP;
  *(undefined4 *)(local_res10 + -0x28) = 0x3c8a990;
  *(undefined4 *)(local_res10 + -0x24) = 0;
  puVar1 = (ulonglong *)(local_res10 + *(longlong *)(local_res10 + -0x28) + -0x3c8a9b8);
  *(undefined4 *)puVar1 = 0xc25718e;
  *(undefined4 *)((longlong)puVar1 + 4) = 0x63befa4e;
  *(uint *)((longlong)puVar1 + 4) = *(uint *)((longlong)puVar1 + 4) ^ 0x63befa4e;
  uVar3 = *puVar1;
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0x3531afec;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  *(undefined8 *)((longlong)puVar1 + (uVar3 - (*puVar1 ^ 0x3914de92)) + 0x10) = uVar2;
  uVar2 = puVar1[3];
  puVar1[3] = uVar2;
  puVar1[2] = uVar2;
  puVar1[1] = unaff_RBX;
  *(undefined4 *)puVar1 = 0xfee19e;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xd44b2d5b;
  *(int *)((longlong)puVar1 + 4) = *(int *)((longlong)puVar1 + 4) + 0x2bb4d2a5;
  uVar3 = *puVar1;
  *puVar1 = unaff_RSI;
  *(code **)((longlong)puVar1 + (uVar3 ^ 0xfee196) + 0x10) = thunk_FUN_15b642ca5;
  return in_RAX;
}



// FUNCTION 14d864ba2 FUN_14d864ba2 body=130 status=ok
// SIG undefined FUN_14d864ba2(void)

void FUN_14d864ba2(undefined8 param_1,undefined8 param_2)

{
  FUN_14e0a7567(param_1,param_2);
  return;
}



// FUNCTION 14d864d3f FUN_14d864d3f body=138 status=ok
// SIG undefined FUN_14d864d3f(void)

void FUN_14d864d3f(void)

{
  FUN_160d819c0();
  return;
}



// FUNCTION 14d864dda FUN_14d864dda body=151 status=ok
// SIG undefined FUN_14d864dda(void)

void FUN_14d864dda(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_15b67d0e0(param_1,param_2,local_res10);
  FUN_14d864e75();
  return;
}



// FUNCTION 14d864e75 FUN_14d864e75 body=590 status=ok
// SIG undefined FUN_14d864e75(void)

/* WARNING: Removing unreachable block (ram,0x00014d864f7f) */
/* WARNING: Removing unreachable block (ram,0x00014d86500b) */
/* WARNING: Removing unreachable block (ram,0x000165d8a4ce) */
/* WARNING: Removing unreachable block (ram,0x00014d865011) */

undefined8 FUN_14d864e75(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 unaff_retaddr;
  longlong local_20;
  
  local_20 = -0x7b3930f8;
  pcVar2 = FUN_162455e43;
  FUN_162455e43(unaff_retaddr);
  uVar1 = FUN_165bed19b(0x7b393100,*(undefined8 *)(local_20 + -0xa0),FUN_165bed19b,pcVar2,param_2);
  return uVar1;
}



// FUNCTION 14d8650c5 FUN_14d8650c5 body=181 status=ok
// SIG undefined FUN_14d8650c5(void)

undefined8 FUN_14d8650c5(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8652c7 FUN_14d8652c7 body=588 status=ok
// SIG undefined FUN_14d8652c7(void)

/* WARNING: Removing unreachable block (ram,0x00014d86533b) */
/* WARNING: Removing unreachable block (ram,0x00014d865341) */
/* WARNING: Removing unreachable block (ram,0x00014d8653a2) */

void FUN_14d8652c7(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_160df4456(~(uVar2 | uVar1) + 1 + uVar1 + uVar2 ^ 0xffffffffffffffff,
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14d8653e5 FUN_14d8653e5 body=141 status=ok
// SIG undefined FUN_14d8653e5(void)

/* WARNING: Removing unreachable block (ram,0x00014d865443) */

void FUN_14d8653e5(undefined1 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_162a20628(param_1,param_2 + unaff_RBP + (param_2 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14d865473 FUN_14d865473 body=155 status=ok
// SIG undefined FUN_14d865473(void)

void FUN_14d865473(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_156dff688(param_1,FUN_156dff688,param_3,~(param_1 & ~*(ulonglong *)(unaff_RDI + -0xa0)));
  return;
}



// FUNCTION 14d865516 FUN_14d865516 body=118 status=ok
// SIG undefined FUN_14d865516(void)

undefined8 FUN_14d865516(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d865621 FUN_14d865621 body=179 status=ok
// SIG undefined FUN_14d865621(void)

/* WARNING: Removing unreachable block (ram,0x00014d8656c9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d865621(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBP;
  
  if (&stack0x00000000 == &DAT_ffffffffffffffe0) {
    _DAT_00000000 = -1 - (~_DAT_00000000 | 0x100);
    FUN_156d402c4(unaff_RBP,param_2,param_3);
    return;
  }
  FUN_160b5ef9d();
  return;
}



// FUNCTION 14d865783 FUN_14d865783 body=140 status=ok
// SIG undefined FUN_14d865783(void)

void FUN_14d865783(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_162a5745e(param_1,unaff_RDI + unaff_RSI + (param_2 & param_1) * -2,param_3,param_4);
  return;
}



// FUNCTION 14d865815 FUN_14d865815 body=144 status=ok
// SIG undefined FUN_14d865815(void)

/* WARNING: Removing unreachable block (ram,0x000165fb78ae) */
/* WARNING: Removing unreachable block (ram,0x000165fb7a22) */
/* WARNING: Removing unreachable block (ram,0x000166563dd7) */
/* WARNING: Removing unreachable block (ram,0x000166563e35) */
/* WARNING: Removing unreachable block (ram,0x000165fb7a39) */
/* WARNING: Removing unreachable block (ram,0x00014d8658a6) */
/* WARNING: Removing unreachable block (ram,0x00014d86594c) */
/* WARNING: Removing unreachable block (ram,0x00014d865947) */
/* WARNING: Removing unreachable block (ram,0x00014dc054d3) */
/* WARNING: Removing unreachable block (ram,0x00014d865952) */
/* WARNING: Removing unreachable block (ram,0x00014d8659f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8659f9) */
/* WARNING: Removing unreachable block (ram,0x000161c67bbf) */
/* WARNING: Removing unreachable block (ram,0x00014d865a00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d865815(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong lVar3;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  if ((ulonglong *)(unaff_R12 + -0x78) == (ulonglong *)0x0) {
    FUN_165fb7813();
    return;
  }
  lVar3 = uVar1 + in_RAX + (uVar1 & in_RAX) * -2;
  uVar1 = FUN_16667c1eb(uVar2,lVar3,unaff_RBX + param_3);
  FUN_16601dac0(uVar1 ^ 0x4c53415f41003d44,uVar1 ^ 0x4824148b4c082454,lVar3 + uVar2 + 1);
  return;
}



// FUNCTION 14d8658a6 FUN_14d8658a6 body=172 status=ok
// SIG undefined FUN_14d8658a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d865952) */
/* WARNING: Removing unreachable block (ram,0x00014d8659f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8659f9) */
/* WARNING: Removing unreachable block (ram,0x00014d865a00) */
/* WARNING: Removing unreachable block (ram,0x000161c67bbf) */

void FUN_14d8658a6(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong *unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_R14;
  ulonglong uVar2;
  
  _fxrstor(&stack0x00000028);
  uVar2 = unaff_RBP[1];
  unaff_RBP[1] = unaff_RSI;
  *unaff_RBP = in_RAX;
  unaff_RBP[-1] = unaff_R14;
  unaff_RBP[1] = in_RAX;
  *unaff_RBP = in_RAX;
  *(undefined4 *)unaff_RBP = 0x7e9def84;
  *(undefined4 *)((longlong)unaff_RBP + 4) = 0;
  uVar1 = *unaff_RBP ^ 0x24d7bcf1;
  *unaff_RBP = param_3;
  unaff_RBP[-1] =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar2 & 0x200) != 0) * 0x200 | (ulonglong)((uVar2 & 0x100) != 0) * 0x100 |
       (ulonglong)((longlong)uVar1 < 0) * 0x80 | (ulonglong)(uVar1 == 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(uVar1 & 0xff) & 1U) == 0) * 4
       | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  FUN_16111be1e(param_1,param_2,FUN_16111be1e);
  return;
}



// FUNCTION 14d865952 FUN_14d865952 body=176 status=ok
// SIG undefined FUN_14d865952(void)

/* WARNING: Removing unreachable block (ram,0x00014d865a00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d865952(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_R15;
  
  if (unaff_R15 == -1 && (param_2 | 0xffffffff81958ae6) == 0xffffffffffffffff) {
    return;
  }
  FUN_161c67bbf();
  return;
}



// FUNCTION 14d865a06 FUN_14d865a06 body=87 status=ok
// SIG undefined FUN_14d865a06(void)

void FUN_14d865a06(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBX;
  undefined8 local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = (longlong)plVar1;
  *plVar1 = *plVar1 + 8;
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + -8) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -8) = 0;
  *(longlong *)(lVar2 + -8) = *(longlong *)(lVar2 + -8) + -0x14d865a73;
  *(longlong *)(lVar2 + -8) = -*(longlong *)(lVar2 + -8);
                    /* WARNING: Could not recover jumptable at 0x00014d865a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d865ab1 FUN_14d865ab1 body=963 status=ok
// SIG undefined FUN_14d865ab1(void)

/* WARNING: Removing unreachable block (ram,0x00014d865b36) */
/* WARNING: Removing unreachable block (ram,0x00014d865b3c) */
/* WARNING: Removing unreachable block (ram,0x0001570bd255) */
/* WARNING: Removing unreachable block (ram,0x00014d865bc4) */
/* WARNING: Removing unreachable block (ram,0x00014d865bd0) */
/* WARNING: Removing unreachable block (ram,0x000161b932f8) */
/* WARNING: Removing unreachable block (ram,0x00014d865c71) */
/* WARNING: Removing unreachable block (ram,0x00014d865c77) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ac48) */

undefined8 FUN_14d865ab1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d865d98 FUN_14d865d98 body=109 status=ok
// SIG undefined FUN_14d865d98(void)

void FUN_14d865d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7a73ea(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d865e58 FUN_14d865e58 body=146 status=ok
// SIG undefined FUN_14d865e58(void)

void FUN_14d865e58(undefined8 param_1)

{
  FUN_161db75cf(param_1);
  return;
}



// FUNCTION 14d865ef2 FUN_14d865ef2 body=15 status=ok
// SIG undefined FUN_14d865ef2(void)

void FUN_14d865ef2(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14d865f96 FUN_14d865f96 body=4 status=ok
// SIG undefined FUN_14d865f96(void)

void FUN_14d865f96(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
                    /* WARNING: Could not recover jumptable at 0x00014d865f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8660d5 FUN_14d8660d5 body=283 status=ok
// SIG undefined FUN_14d8660d5(void)

void FUN_14d8660d5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1667f6f8b(param_1,~(~(*(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff) |
                         ~*(ulonglong *)(unaff_RDI + -0x68) & ~param_1));
  FUN_16692a216(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14d8661f2 FUN_14d8661f2 body=145 status=ok
// SIG undefined FUN_14d8661f2(void)

/* WARNING: Removing unreachable block (ram,0x00014d86623d) */

void FUN_14d8661f2(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  FUN_16195bee2(*(undefined8 *)(unaff_R12 + -0x58),FUN_16195bee2,~(unaff_RBX & (~param_3 | in_RAX)))
  ;
  return;
}



// FUNCTION 14d866324 FUN_14d866324 body=107 status=ok
// SIG undefined FUN_14d866324(void)

void FUN_14d866324(undefined8 param_1,ushort param_2)

{
  ushort uVar1;
  ushort *unaff_retaddr;
  
  uVar1 = param_2 & 0xc4c4 | 0x3b3b;
  *unaff_retaddr = ~((uVar1 - (~(param_2 & 0x3b3b) | uVar1)) + ~(param_2 & 0x3b3b));
  return;
}



// FUNCTION 14d86638f FUN_14d86638f body=27 status=ok
// SIG undefined FUN_14d86638f(void)

void FUN_14d86638f(void)

{
  FUN_15752a706(FUN_15752a706);
  return;
}



// FUNCTION 14d8666b7 FUN_14d8666b7 body=298 status=ok
// SIG undefined FUN_14d8666b7(void)

/* WARNING: Removing unreachable block (ram,0x00014d86675b) */
/* WARNING: Removing unreachable block (ram,0x00014d866761) */

void FUN_14d8666b7(void)

{
  return;
}



// FUNCTION 14d8667e1 FUN_14d8667e1 body=141 status=ok
// SIG undefined FUN_14d8667e1(void)

void FUN_14d8667e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x15af2b032)(1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d866870 FUN_14d866870 body=304 status=ok
// SIG undefined FUN_14d866870(void)

/* WARNING: Removing unreachable block (ram,0x00014d866902) */

undefined8 FUN_14d866870(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    param_3 = param_3 + 1;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = FUN_15af3221d((char)param_1,
                        ~(((0xffffffffffffffff - param_1) + uVar1) -
                          (0xffffffffffffffff - param_1 & uVar1) & (~uVar1 | param_1)),
                        unaff_RSI - param_3);
  return uVar2;
}



// FUNCTION 14d8669a7 FUN_14d8669a7 body=347 status=ok
// SIG undefined FUN_14d8669a7(void)

/* WARNING: Removing unreachable block (ram,0x00014d866a3d) */

void FUN_14d8669a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  ulonglong in_R10;
  undefined8 in_R11;
  ushort local_res10;
  ulonglong local_res18;
  
  uVar1 = ~(local_res18 & in_R10) & (local_res18 | in_R10);
  if ((ushort)(~(~local_res10 & 0x100) + 0x100) == local_res10) {
    *(undefined8 *)(uVar1 - 8) = in_R11;
    *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
    *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    *(undefined8 *)(uVar1 - 0x18) = param_2;
    *(undefined1 **)(uVar1 - 8) = &LAB_15b30fcaf;
    thunk_FUN_15b642ca5(param_1,*(undefined8 *)(uVar1 - 0x18),param_3);
    return;
  }
  FUN_15b30fc3a();
  return;
}



// FUNCTION 14d866b06 FUN_14d866b06 body=416 status=ok
// SIG undefined FUN_14d866b06(void)

void FUN_14d866b06(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R12;
  ulonglong in_stack_00000010;
  
  FUN_16619c7df((~(unaff_R12 & in_stack_00000010) & (unaff_R12 | in_stack_00000010)) + param_1 +
                (in_stack_00000010 & param_1) * -2,param_2,param_3,param_4);
  FUN_165cc1a50();
  return;
}



// FUNCTION 14d866d06 FUN_14d866d06 body=769 status=ok
// SIG undefined FUN_14d866d06(void)

/* WARNING: Removing unreachable block (ram,0x00014d866e09) */
/* WARNING: Removing unreachable block (ram,0x000165a1ed73) */
/* WARNING: Removing unreachable block (ram,0x000156db952d) */
/* WARNING: Removing unreachable block (ram,0x000156db9622) */
/* WARNING: Removing unreachable block (ram,0x00014d866d84) */
/* WARNING: Removing unreachable block (ram,0x000156db959c) */
/* WARNING: Removing unreachable block (ram,0x000165a1ecf0) */
/* WARNING: Removing unreachable block (ram,0x000165a1ecf4) */
/* WARNING: Removing unreachable block (ram,0x00014d866ddf) */
/* WARNING: Removing unreachable block (ram,0x00014d866de4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d866d06(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 in_R10;
  ushort uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  local_res20 = 0xffffffffffffffff -
                ((0xffffffffffffffff - unaff_R15 | local_res20) &
                (~local_res20 + unaff_R15) - (~local_res20 & unaff_R15));
  uVar1 = ~(in_stack_00000028 & unaff_R15) & (in_stack_00000028 | unaff_R15);
  uVar2 = (ushort)local_res20 | 0x100;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res20._0_2_ = 0;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res20._0_2_ = -0x101 - ~uVar2;
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  if ((local_res20 & 1) != 0) {
    FUN_165f8b53e();
    return;
  }
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_165f8b573;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 0x10);
  return;
}



// FUNCTION 14d866eb1 FUN_14d866eb1 body=10 status=ok
// SIG undefined FUN_14d866eb1(void)

void FUN_14d866eb1(void)

{
  return;
}



// FUNCTION 14d866fd5 FUN_14d866fd5 body=114 status=ok
// SIG undefined FUN_14d866fd5(void)

void FUN_14d866fd5(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_165d63b07(param_1,~((0xffffffffffffffff - unaff_RBP | param_2) & (~param_2 | unaff_RBP)));
  return;
}



// FUNCTION 14d8670c5 FUN_14d8670c5 body=158 status=ok
// SIG undefined FUN_14d8670c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8671f7) */
/* WARNING: Removing unreachable block (ram,0x00014d86729d) */
/* WARNING: Removing unreachable block (ram,0x00014d8671f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8671fc) */
/* WARNING: Removing unreachable block (ram,0x00014d867297) */
/* WARNING: Removing unreachable block (ram,0x00014ded2d5b) */
/* WARNING: Removing unreachable block (ram,0x00014d867292) */
/* WARNING: Removing unreachable block (ram,0x00016274684d) */
/* WARNING: Removing unreachable block (ram,0x000162746859) */
/* WARNING: Removing unreachable block (ram,0x0001627468ce) */
/* WARNING: Removing unreachable block (ram,0x0001627468d4) */
/* WARNING: Removing unreachable block (ram,0x000162746903) */
/* WARNING: Removing unreachable block (ram,0x000162746907) */
/* WARNING: Removing unreachable block (ram,0x000160c77cd2) */
/* WARNING: Removing unreachable block (ram,0x000160c77e1c) */
/* WARNING: Removing unreachable block (ram,0x000160c77e1f) */
/* WARNING: Removing unreachable block (ram,0x0001657e6876) */
/* WARNING: Removing unreachable block (ram,0x0001657e68a1) */
/* WARNING: Removing unreachable block (ram,0x0001657e68a5) */
/* WARNING: Removing unreachable block (ram,0x0001657e68b6) */
/* WARNING: Removing unreachable block (ram,0x0001657e68ba) */

void FUN_14d8670c5(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  ushort unaff_R13W;
  ushort uVar9;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined6 unaff_retaddr;
  undefined2 unaff_retaddr_00;
  ulonglong local_8;
  
  uVar5 = CONCAT26(unaff_retaddr_00,unaff_retaddr);
  uVar7 = unaff_RBX | 0xaed4;
  local_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  puVar8 = &local_8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar8 = (ulonglong *)register0x00000020;
  }
  *puVar8 = uVar7;
  uVar6 = *puVar8;
  puVar1 = puVar8 + 1;
  *puVar8 = in_RAX;
  uVar3 = *puVar8;
  sVar2 = (~(ushort)uVar6 | ~unaff_R13W) + (short)uVar7;
  uVar9 = sVar2 + 1;
  *(ushort *)((longlong)puVar8 + 6) = uVar9;
  *puVar8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW2(sVar2,-1) * 0x800 |
            (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
            (ulonglong)((short)uVar9 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
            (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)(sVar2 != -1) | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  if (((uint)*puVar8 >> 6 & 1) != 0) {
    if ((*puVar8 & 0x40) == 0) {
      uVar6 = *(ulonglong *)(unaff_RDI + -0x28);
      *puVar1 = 0xffffffffffffffff - ~(~uVar3 | ~uVar5) & (uVar7 | uVar5);
      *puVar8 = unaff_RSI;
      uVar7 = *(ulonglong *)(unaff_RDI + -0x68);
      uVar3 = *puVar1;
      *puVar1 = uVar5;
      uVar4 = *puVar1;
      *(uint *)puVar1 = 0x1dfd9423;
      *(uint *)((longlong)puVar8 + 0xc) = 0;
      *puVar1 = uVar3;
      *puVar1 = param_3;
      uVar3 = *puVar1;
      *puVar1 = uVar6 ^ uVar5;
      *puVar8 = CONCAT62((int6)((ulonglong)unaff_R15 >> 0x10),uVar9);
      puVar8[-1] = param_4;
      FUN_161944aea(uVar4,~(uVar7 & uVar4) & (uVar7 | uVar4),uVar3,FUN_161944aea);
      return;
    }
    puVar8[2] = unaff_R12;
    *puVar1 = CONCAT62((int6)(unaff_R12 >> 0x10),*(ushort *)((longlong)puVar8 + 6));
    *(ushort *)puVar1 = 0xfac5;
    FUN_1657e6876();
    return;
  }
  FUN_1627467c6();
  return;
}



// FUNCTION 14d867164 FUN_14d867164 body=151 status=ok
// SIG undefined FUN_14d867164(void)

/* WARNING: Removing unreachable block (ram,0x00014d86729d) */
/* WARNING: Removing unreachable block (ram,0x00014d8671f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8671fc) */
/* WARNING: Removing unreachable block (ram,0x00014d867297) */
/* WARNING: Removing unreachable block (ram,0x00014ded2d5b) */
/* WARNING: Removing unreachable block (ram,0x00014d867292) */
/* WARNING: Removing unreachable block (ram,0x00014d8671f7) */

void FUN_14d867164(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_161944aea(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3,FUN_161944aea);
  return;
}



// FUNCTION 14d8671fc FUN_14d8671fc body=160 status=ok
// SIG undefined FUN_14d8671fc(void)

/* WARNING: Removing unreachable block (ram,0x00014d86729d) */
/* WARNING: Removing unreachable block (ram,0x00014d867292) */

void FUN_14d8671fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ushort *in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ushort unaff_R14W;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  
  *in_RAX = (*in_RAX - (~unaff_R14W | *in_RAX)) + ~unaff_R14W | unaff_R14W;
  *in_RAX = *in_RAX ^ 0xffff;
  *(undefined8 *)(param_5 + -8) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(undefined8 *)(param_5 + -0x18) = in_R10;
  *(undefined8 *)(param_5 + -0x20) = uStackX_8;
  *(undefined8 *)(param_5 + -0x20) = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x28) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = 0;
  uVar1 = *(undefined8 *)(param_5 + -0x20);
  *(longlong *)(param_5 + -0x10) =
       *(longlong *)(param_5 + -0x10) - ((*(ulonglong *)(param_5 + -8) ^ 0xffffffffffffffff) + 1);
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined1 **)(param_5 + -0x20) = &LAB_14da2f7cf;
  *(undefined8 *)(param_5 + -0x28) = uVar1;
  *(undefined8 *)(param_5 + -0x30) = uVar1;
  *(undefined1 **)(param_5 + -0x28) = &LAB_14ded2e1a;
  FUN_14da2f793(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d86729d thunk_FUN_15b42d44e body=5 status=ok
// SIG undefined thunk_FUN_15b42d44e(void)

void thunk_FUN_15b42d44e(void)

{
  FUN_15b42d44e();
  return;
}



// FUNCTION 14d867606 FUN_14d867606 body=177 status=ok
// SIG undefined FUN_14d867606(void)

void FUN_14d867606(void)

{
  return;
}



// FUNCTION 14d86775b FUN_14d86775b body=652 status=ok
// SIG undefined FUN_14d86775b(void)

/* WARNING: Removing unreachable block (ram,0x00014d867880) */
/* WARNING: Removing unreachable block (ram,0x00014d867886) */
/* WARNING: Removing unreachable block (ram,0x00014d86799d) */
/* WARNING: Removing unreachable block (ram,0x00014d8679a3) */
/* WARNING: Removing unreachable block (ram,0x00014d8679c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8679c0) */
/* WARNING: Removing unreachable block (ram,0x00014d8679ca) */
/* WARNING: Removing unreachable block (ram,0x0001611fd090) */
/* WARNING: Removing unreachable block (ram,0x0001611fd0f5) */
/* WARNING: Removing unreachable block (ram,0x0001611fd0fb) */
/* WARNING: Removing unreachable block (ram,0x0001621913cb) */

void FUN_14d86775b(void)

{
  FUN_16224c24f();
  FUN_1662e5bd3();
  return;
}



// FUNCTION 14d867a25 FUN_14d867a25 body=186 status=ok
// SIG undefined FUN_14d867a25(void)

/* WARNING: Instruction at (ram,0x00014dc64017) overlaps instruction at (ram,0x00014dc64016)
    */
/* WARNING: Removing unreachable block (ram,0x00014d867add) */
/* WARNING: Removing unreachable block (ram,0x00014dc64013) */
/* WARNING: Removing unreachable block (ram,0x00014d867ad2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d867a25(void)

{
  return;
}



// FUNCTION 14d867b0d FUN_14d867b0d body=128 status=ok
// SIG undefined FUN_14d867b0d(void)

void FUN_14d867b0d(void)

{
  return;
}



// FUNCTION 14d867b8d FUN_14d867b8d body=296 status=ok
// SIG undefined FUN_14d867b8d(void)

void FUN_14d867b8d(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  short unaff_R13W;
  undefined8 uStackX_8;
  
  FUN_160f55b2e(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x80),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  uStackX_8 = CONCAT44(0xb85a4d9b,(undefined4)uStackX_8);
  FUN_1669a426a((int)unaff_R13W,
                (~uStackX_8 | *(ulonglong *)(unaff_R12 + -0x38)) &
                (~*(ulonglong *)(unaff_R12 + -0x38) | uStackX_8),FUN_1669a426a);
  return;
}



// FUNCTION 14d867f44 FUN_14d867f44 body=115 status=ok
// SIG undefined FUN_14d867f44(void)

void FUN_14d867f44(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *unaff_RBX;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  *unaff_RBX = *unaff_RBX ^ 0xffffffffffffffff;
  *unaff_RBX = *unaff_RBX | unaff_R15;
  *unaff_RBX = ~param_3 | ~*unaff_RBX;
  FUN_162574532(param_1,~unaff_R15,local_res10,param_4);
  return;
}



// FUNCTION 14d868104 FUN_14d868104 body=134 status=ok
// SIG undefined FUN_14d868104(void)

void FUN_14d868104(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  (*(code *)0x1563da3e0)
            (param_1,~(-~param_2 - (~(-~unaff_RBP - (~-(param_2 | unaff_RBP) + 2)) + 2)) &
                     (param_2 | unaff_RBP));
  return;
}



// FUNCTION 14d86818a FUN_14d86818a body=142 status=ok
// SIG undefined FUN_14d86818a(void)

void FUN_14d86818a(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_166d512ed(param_1,FUN_166d512ed,*(undefined8 *)(unaff_RSI + -0x60),
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d86821a FUN_14d86821a body=460 status=ok
// SIG undefined FUN_14d86821a(void)

/* WARNING: Removing unreachable block (ram,0x000165d527b1) */
/* WARNING: Removing unreachable block (ram,0x00014d868362) */
/* WARNING: Removing unreachable block (ram,0x0001620eb7e0) */

void FUN_14d86821a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R14;
  ushort uStackX_20;
  
  uVar2 = *(ulonglong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = -*(longlong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = *(longlong *)(in_R10 + 0x10) + -1;
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | in_RAX;
  *(ulonglong *)(in_R10 + 0x10) = ~((~in_RAX | uVar2) & *(ulonglong *)(in_R10 + 0x10));
  if (&stack0x00000010 < &DAT_00000008) {
    *(undefined8 *)(param_5 + -8) = unaff_RSI;
    if ((~(~uStackX_20 + 0x100) & 1) != 0) {
      FUN_15b179d7b(param_1,param_2,param_3);
      return;
    }
    *(undefined8 *)(param_5 + -0x10) = param_1;
    *(undefined8 *)(param_5 + -0x18) = param_1;
    *(undefined8 *)(param_5 + -0x20) = param_4;
    *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
    *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
    puVar1 = (ulonglong *)(param_5 + -0x20);
    *puVar1 = 0x56506068;
    *(undefined8 *)(param_5 + -0x28) = unaff_R14;
    *puVar1 = *puVar1 ^ 0x56506068;
    *(ulonglong *)(param_5 + -8) = *puVar1;
    *(undefined8 *)(param_5 + -0x20) = 0x14dcb4eb3;
    return;
  }
  if (&stack0x00000010 < &DAT_00000008) {
    FUN_165d527b1();
    return;
  }
  FUN_1620eb73d();
  return;
}



// FUNCTION 14d868496 FUN_14d868496 body=278 status=ok
// SIG undefined FUN_14d868496(void)

void FUN_14d868496(ulonglong param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  
  FUN_165499a62(in_stack_00000008 + param_1 + (in_stack_00000008 & param_1) * -2,param_2,
                unaff_retaddr);
  return;
}



// FUNCTION 14d868bc6 FUN_14d868bc6 body=477 status=ok
// SIG undefined FUN_14d868bc6(void)

/* WARNING: Removing unreachable block (ram,0x00014d868cfa) */
/* WARNING: Removing unreachable block (ram,0x00014d868d00) */
/* WARNING: Removing unreachable block (ram,0x00014d868e2c) */
/* WARNING: Removing unreachable block (ram,0x0001649ee068) */
/* WARNING: Removing unreachable block (ram,0x0001649ee185) */
/* WARNING: Removing unreachable block (ram,0x0001649ee18b) */
/* WARNING: Removing unreachable block (ram,0x00015741d886) */
/* WARNING: Removing unreachable block (ram,0x00014d868e32) */
/* WARNING: Removing unreachable block (ram,0x00014d868ca6) */

undefined8 FUN_14d868bc6(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_1573e1993(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14d868d00 FUN_14d868d00 body=475 status=ok
// SIG undefined FUN_14d868d00(void)

/* WARNING: Removing unreachable block (ram,0x00014d868e32) */
/* WARNING: Removing unreachable block (ram,0x0001649ee18b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d868d00(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ushort uVar4;
  longlong in_R9;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ushort unaff_R13W;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  pcVar3 = FUN_165e5a811;
  FUN_165e5a811();
  uVar1 = *(ulonglong *)(in_R9 + -0xa0);
  uVar4 = 0x1c36;
  FUN_15b9d1c36();
  *(ushort *)pcVar3 = (~unaff_R13W - (uVar4 ^ 0xffff)) + -0x100;
  *(ulonglong *)(unaff_R14 + -8) =
       ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
  *(undefined8 *)(unaff_R14 + -0x10) = *(undefined8 *)(unaff_R14 + -8);
  *(undefined8 *)(unaff_R14 + -0x18) = in_R10;
  *(undefined8 *)(unaff_R14 + -8) = 0;
  *(longlong *)(unaff_R14 + -8) = (longlong)(&LAB_14db355f8 + *(longlong *)(unaff_R14 + -8));
  *(undefined1 **)(unaff_R14 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined1 **)(unaff_R14 + -0x18) = &stack0xfffffffffffffff0;
  *(undefined8 *)(unaff_R14 + -0x20) = unaff_R12;
  *(undefined8 *)(unaff_R14 + -0x28) = 0x15741d921;
  FUN_14db355a6();
  uVar2 = *(undefined8 *)(unaff_R14 + -0x10);
  *(ulonglong *)(unaff_R14 + -0x10) = unaff_R15;
  *(ulonglong *)(unaff_R14 + -0x18) = unaff_R15;
  *(code **)(unaff_R14 + -0x10) = FUN_165c7153c;
  return uVar2;
}



// FUNCTION 14d868f74 FUN_14d868f74 body=171 status=ok
// SIG undefined FUN_14d868f74(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d868f74(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_R12;
  undefined8 local_res8;
  
  FUN_1576585c5(*(ulonglong *)(unaff_R12 + -0x58) +
                CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                (*(ulonglong *)(unaff_R12 + -0x58) &
                CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) * -2,
                ~(*(ulonglong *)(unaff_R12 + -0x78) &
                 CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                (*(ulonglong *)(unaff_R12 + -0x78) |
                CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))));
  if (-1 < local_res8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d869158 FUN_14d869158 body=404 status=ok
// SIG undefined FUN_14d869158(void)

void FUN_14d869158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R13;
  ulonglong uVar1;
  
  FUN_1663fd227(param_1,param_2,param_3);
  uVar1 = ~unaff_R13;
  *(undefined4 *)(&stack0x00000008 + uVar1) = 0;
  *(int *)(&stack0x00000008 + uVar1) = *(int *)(&stack0x00000008 + uVar1) + 0x536ebd86;
  *(int *)(&stack0x00000008 + uVar1) = -*(int *)(&stack0x00000008 + uVar1);
  FUN_160f2c39a();
  return;
}



// FUNCTION 14d869318 FUN_14d869318 body=272 status=ok
// SIG undefined FUN_14d869318(void)

/* WARNING: Removing unreachable block (ram,0x00014d869343) */

void FUN_14d869318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((&DAT_00000007 < &stack0x00000000) && (&stack0x00000000 < &DAT_00000008)) {
    FUN_14d8693a8();
    return;
  }
  FUN_1668eadb5(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,FUN_1668eadb5);
  return;
}



// FUNCTION 14d8693a8 FUN_14d8693a8 body=179 status=ok
// SIG undefined FUN_14d8693a8(void)

ulonglong FUN_14d8693a8(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14d86945e FUN_14d86945e body=356 status=ok
// SIG undefined FUN_14d86945e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8695b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8695bb) */
/* WARNING: Removing unreachable block (ram,0x00014d8695c6) */

undefined8 FUN_14d86945e(ulonglong param_1,short param_2)

{
  undefined8 unaff_RBP;
  undefined8 uVar1;
  longlong unaff_RDI;
  bool in_CF;
  bool bVar2;
  char in_stack_00000048;
  
  if (in_CF) {
    param_2 = param_2 + 1;
  }
  uVar1 = 0;
  bVar2 = in_stack_00000048 < '\0';
  if (bVar2) {
    uVar1 = 0xffffffff;
  }
  if ((!bVar2) && (bVar2)) {
    uVar1 = FUN_1621b54a8(param_1,*(longlong *)
                                   (CONCAT71((int7)((ulonglong)uVar1 >> 8),in_stack_00000048) + -8)
                                  + CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),
                                             (param_2 + -1) - ~(ushort)unaff_RBP),
                          *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                          (*(ulonglong *)(unaff_RDI + -0x60) & param_1 ^ 0xffffffffffffffff) &
                          (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
    return uVar1;
  }
  uVar1 = FUN_162194178(param_1,FUN_162194178);
  return uVar1;
}



// FUNCTION 14d8695c6 FUN_14d8695c6 body=162 status=ok
// SIG undefined FUN_14d8695c6(void)

undefined8 FUN_14d8695c6(void)

{
  return 0xffffffffd13e639a;
}



// FUNCTION 14d869668 FUN_14d869668 body=366 status=ok
// SIG undefined FUN_14d869668(void)

void FUN_14d869668(void)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(longlong *)(unaff_RSI + 0x10) = -*(longlong *)(unaff_RSI + 0x10);
  *(longlong *)(unaff_RSI + 0x10) = *(longlong *)(unaff_RSI + 0x10) + -1;
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RSI + 0x10) =
       ~((~*(ulonglong *)(unaff_RSI + 0x10) | ~unaff_R15 | uVar1) + *(longlong *)(unaff_RSI + 0x10)
        + 1);
  FUN_14e19eecb();
  return;
}



// FUNCTION 14d869884 FUN_14d869884 body=96 status=ok
// SIG undefined FUN_14d869884(void)

undefined8 FUN_14d869884(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d869a71 FUN_14d869a71 body=977 status=ok
// SIG undefined FUN_14d869a71(void)

/* WARNING: Removing unreachable block (ram,0x00014d869b03) */
/* WARNING: Removing unreachable block (ram,0x00014d869b09) */
/* WARNING: Removing unreachable block (ram,0x00014d869ba0) */
/* WARNING: Removing unreachable block (ram,0x00014d869ba5) */
/* WARNING: Removing unreachable block (ram,0x00014d869bab) */
/* WARNING: Removing unreachable block (ram,0x00014d869bb0) */

undefined8 FUN_14d869a71(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  uVar3 = 0xffffffffffffffff - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + param_1 + 1);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  FUN_164a2771c(param_1,(param_1 - (uVar1 | param_1)) + uVar1,uVar1,
                (uVar2 - (uVar3 | uVar2)) + uVar3);
  return *(undefined8 *)(unaff_RSI + -0x40);
}



// FUNCTION 14d869da2 FUN_14d869da2 body=148 status=ok
// SIG undefined FUN_14d869da2(void)

void FUN_14d869da2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16668baf2(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d869ee8 FUN_14d869ee8 body=294 status=ok
// SIG undefined FUN_14d869ee8(void)

/* WARNING: Removing unreachable block (ram,0x0001661f00b6) */
/* WARNING: Removing unreachable block (ram,0x0001661f00c2) */
/* WARNING: Removing unreachable block (ram,0x0001661f00c8) */
/* WARNING: Removing unreachable block (ram,0x0001646edc2c) */
/* WARNING: Removing unreachable block (ram,0x000164fe4f8d) */
/* WARNING: Removing unreachable block (ram,0x0001646edcb8) */
/* WARNING: Removing unreachable block (ram,0x0001661effd6) */
/* WARNING: Removing unreachable block (ram,0x0001661f0009) */

void FUN_14d869ee8(void)

{
  longlong in_R9;
  
  if (in_R9 == 0xc4574) {
    return;
  }
  if (in_R9 != 0xc4575) {
    if (in_R9 == 0xc4576) {
      FUN_165e93f27();
      return;
    }
    FUN_1615e01f9();
    return;
  }
  FUN_1661eff88();
  return;
}



// FUNCTION 14d869f74 FUN_14d869f74 body=98 status=ok
// SIG undefined FUN_14d869f74(void)

ulonglong FUN_14d869f74(ulonglong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff7af8d9a + (param_2 ^ 0x69197a6c));
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  *puVar1 = *puVar1 ^ param_1;
  puVar1[-1] = unaff_RSI;
  uVar2 = *puVar1;
  *puVar1 = param_1;
  *puVar1 = (ulonglong)&DAT_14d869fd8;
  return uVar2;
}



// FUNCTION 14d869ff4 FUN_14d869ff4 body=168 status=ok
// SIG undefined FUN_14d869ff4(void)

void FUN_14d869ff4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_164f37167(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) & in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14d86a158 FUN_14d86a158 body=99 status=ok
// SIG undefined FUN_14d86a158(void)

void FUN_14d86a158(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_166236fa6(param_1,local_res8);
  return;
}



// FUNCTION 14d86a422 FUN_14d86a422 body=283 status=ok
// SIG undefined FUN_14d86a422(void)

/* WARNING: Removing unreachable block (ram,0x00014d86a4e2) */

void FUN_14d86a422(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res10 [2];
  ushort local_res20;
  
  lVar2 = *(longlong *)
           ((longlong)local_res10 +
           ~(~(param_2 & 0xffffffffab93cff5) & (param_2 | 0xffffffffab93cff5))) + param_1 +
          (param_5 & param_1) * -2;
  local_res20 = local_res20 & 0xfeff;
  *(undefined8 *)(lVar2 + -8) = unaff_R15;
  *(undefined8 *)(lVar2 + -0x10) = 0x14d86a4ac;
  uVar1 = FUN_164845066(local_res10[1],local_res8,param_3);
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(unaff_R12 + -0x60);
  uVar3 = ~*(ulonglong *)(lVar2 + -0x10) | uVar1;
  FUN_156cd6933(8,FUN_156cd6933,
                (-~uVar3 -
                (~(~uVar3 | 0xffffffffffffffff - uVar1 | *(ulonglong *)(lVar2 + -0x10)) + 2)) + 1);
  return;
}



// FUNCTION 14d86a547 FUN_14d86a547 body=162 status=ok
// SIG undefined FUN_14d86a547(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d86a547(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint unaff_EBP;
  longlong unaff_RDI;
  bool bVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -8) & param_1;
  if (-1 < (longlong)uVar1) {
    FUN_15703966c();
    return;
  }
  if ((longlong)uVar1 < 1) {
    FUN_15703966c();
    return;
  }
  bVar2 = -1 < (int)((0xffffffff - (uint)param_1 | unaff_EBP) & (~unaff_EBP | (uint)param_1));
  if ((bVar2 && &stack0xffffffffffffffe0 >= &DAT_00000008) &&
     (!bVar2 || &stack0xffffffffffffffe0 < &DAT_00000008)) {
    return;
  }
  FUN_161c9792a(1,param_2,param_3,*(ulonglong *)(unaff_RDI + -8) + param_1);
  return;
}



// FUNCTION 14d86a5e9 FUN_14d86a5e9 body=334 status=ok
// SIG undefined FUN_14d86a5e9(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d86a5e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_EBP;
  
  if ((unaff_EBP < 0 && &stack0x00000000 >= &DAT_00000008) &&
     (unaff_EBP >= 0 || &stack0x00000000 < &DAT_00000008)) {
    return;
  }
  FUN_161c9792a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d86a714 FUN_14d86a714 body=182 status=ok
// SIG undefined FUN_14d86a714(void)

void FUN_14d86a714(void)

{
  return;
}



// FUNCTION 14d86a86a FUN_14d86a86a body=321 status=ok
// SIG undefined FUN_14d86a86a(void)

/* WARNING: Removing unreachable block (ram,0x00014d86a933) */
/* WARNING: Removing unreachable block (ram,0x00014d86a8fd) */

void FUN_14d86a86a(char param_1)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x80) == unaff_R15) {
    FUN_160d93fd4(param_1 + -1);
    return;
  }
  FUN_160d93fd4(param_1 + -1);
  return;
}



// FUNCTION 14d86a9b5 FUN_14d86a9b5 body=386 status=ok
// SIG undefined FUN_14d86a9b5(void)

/* WARNING: Removing unreachable block (ram,0x00014d86aae6) */
/* WARNING: Removing unreachable block (ram,0x00014d86aaec) */
/* WARNING: Removing unreachable block (ram,0x000164a3abd9) */

undefined8 FUN_14d86a9b5(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_2 + -8);
  FUN_161b36909();
  uVar3 = uVar1 | param_1;
  if (-1 < (longlong)((~uVar3 | ~(uVar1 & param_1)) + uVar3 + 1)) {
    uVar2 = FUN_16217a71c();
    return uVar2;
  }
  uVar2 = FUN_16217a71c();
  return uVar2;
}



// FUNCTION 14d86ac22 FUN_14d86ac22 body=179 status=ok
// SIG undefined FUN_14d86ac22(void)

undefined8 FUN_14d86ac22(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d86ad82 FUN_14d86ad82 body=21 status=ok
// SIG undefined FUN_14d86ad82(void)

void FUN_14d86ad82(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d86ad95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d86af68 FUN_14d86af68 body=405 status=ok
// SIG undefined FUN_14d86af68(void)

/* WARNING: Removing unreachable block (ram,0x000160f0b068) */
/* WARNING: Removing unreachable block (ram,0x000160f0b06e) */
/* WARNING: Removing unreachable block (ram,0x00014dba09e2) */
/* WARNING: Removing unreachable block (ram,0x00014dba0a51) */
/* WARNING: Removing unreachable block (ram,0x00014dba0a57) */
/* WARNING: Removing unreachable block (ram,0x000164a411db) */
/* WARNING: Removing unreachable block (ram,0x00014d86b09b) */

undefined8 FUN_14d86af68(void)

{
  undefined8 uVar1;
  
  FUN_165c79522();
  uVar1 = FUN_14dba09e2();
  return uVar1;
}



// FUNCTION 14d86b3df FUN_14d86b3df body=90 status=ok
// SIG undefined FUN_14d86b3df(void)

void FUN_14d86b3df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  uint in_stack_00000008;
  undefined8 local_res10;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = unaff_RDI - ((ulonglong)in_stack_00000008 ^ 0x6a7ca2ec);
  FUN_165c7153c(local_res10,param_2,param_3);
  return;
}



// FUNCTION 14d86b492 thunk_FUN_14d86b498 body=5 status=ok
// SIG undefined thunk_FUN_14d86b498(void)

void thunk_FUN_14d86b498(void)

{
  return;
}



// FUNCTION 14d86b498 FUN_14d86b498 body=145 status=ok
// SIG undefined FUN_14d86b498(void)

void FUN_14d86b498(void)

{
  return;
}



// FUNCTION 14d86b5d8 FUN_14d86b5d8 body=168 status=ok
// SIG undefined FUN_14d86b5d8(void)

void FUN_14d86b5d8(undefined8 param_1)

{
  longlong unaff_RBP;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(unaff_RBP + 0xf0) = *(ulonglong *)(unaff_RBP + 0xf0) ^ 0x3b8c6500;
  *(undefined8 *)(unaff_RBP + 0xf0) = *(undefined8 *)(unaff_RBP + 0xf0);
  FUN_161cc48d1(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d86b741 FUN_14d86b741 body=160 status=ok
// SIG undefined FUN_14d86b741(void)

void FUN_14d86b741(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x166460e96)(param_1,param_2);
  return;
}



// FUNCTION 14d86b881 FUN_14d86b881 body=138 status=ok
// SIG undefined FUN_14d86b881(void)

void FUN_14d86b881(void)

{
  ulonglong in_stack_00000010;
  
  if (-1 < (int)((uint)((in_stack_00000010 & 0x40) != 0) << 0x1f)) {
    FUN_15b5b3b85();
    thunk_FUN_15b642ca5(0x161da332a);
    return;
  }
  FUN_15b5b3b91();
  return;
}



// FUNCTION 14d86b90c FUN_14d86b90c body=32 status=ok
// SIG undefined FUN_14d86b90c(void)

void FUN_14d86b90c(void)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(local_res8);
  return;
}



// FUNCTION 14d86b9b2 FUN_14d86b9b2 body=142 status=ok
// SIG undefined FUN_14d86b9b2(void)

/* WARNING: Removing unreachable block (ram,0x00015746756f) */
/* WARNING: Removing unreachable block (ram,0x000157467575) */
/* WARNING: Removing unreachable block (ram,0x0001626ae168) */
/* WARNING: Removing unreachable block (ram,0x00014d86ba40) */

void FUN_14d86b9b2(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_retaddr;
  
  uVar3 = ~-*(longlong *)(unaff_retaddr + -0x88) + 1;
  uVar2 = ~param_1 | uVar3;
  uVar3 = ~uVar3 | param_1;
  if ((uVar3 - (uVar2 | uVar3)) + uVar2 != -1) {
    lVar1 = -~(ulonglong)&stack0xffffffffffffffe0;
    uVar2 = *(ulonglong *)(lVar1 + 0x1f);
    *(ulonglong *)(lVar1 + 0x1f) = ~*(ulonglong *)(lVar1 + 0x1f);
    *(ulonglong *)(lVar1 + 0x1f) = *(ulonglong *)(lVar1 + 0x1f) | param_1;
    *(ulonglong *)(lVar1 + 0x1f) =
         ~((0xffffffffffffffff - param_1 | uVar2) & *(ulonglong *)(lVar1 + 0x1f));
    return;
  }
  thunk_FUN_1574674e7();
  return;
}



// FUNCTION 14d86ba40 FUN_14d86ba40 body=12 status=ok
// SIG undefined FUN_14d86ba40(void)

void FUN_14d86ba40(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d86bcb1 FUN_14d86bcb1 body=130 status=ok
// SIG undefined FUN_14d86bcb1(void)

/* WARNING: Removing unreachable block (ram,0x00014d86bd10) */
/* WARNING: Removing unreachable block (ram,0x00014d86bd27) */
/* WARNING: Removing unreachable block (ram,0x00014d86bd34) */

void FUN_14d86bcb1(void)

{
  return;
}



// FUNCTION 14d86bd3c FUN_14d86bd3c body=159 status=ok
// SIG undefined FUN_14d86bd3c(void)

void FUN_14d86bd3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1611e2e51(in_stack_00000008,param_2,FUN_1611e2e51);
  return;
}



// FUNCTION 14d86c025 FUN_14d86c025 body=183 status=ok
// SIG undefined FUN_14d86c025(void)

void FUN_14d86c025(void)

{
  FUN_14db2e10b();
  return;
}



// FUNCTION 14d86c0dd FUN_14d86c0dd body=243 status=ok
// SIG undefined FUN_14d86c0dd(void)

/* WARNING: Removing unreachable block (ram,0x00014d86c186) */
/* WARNING: Removing unreachable block (ram,0x00014d86c17b) */

void FUN_14d86c0dd(undefined8 param_1,undefined8 param_2)

{
  FUN_15b7f6514(param_1,param_2);
  return;
}



// FUNCTION 14d86c1e8 FUN_14d86c1e8 body=157 status=ok
// SIG undefined FUN_14d86c1e8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156be14ab) */
/* WARNING: Removing unreachable block (ram,0x000156be14b1) */
/* WARNING: Removing unreachable block (ram,0x000156be1528) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0fcf) */
/* WARNING: Removing unreachable block (ram,0x000156be140d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a5eea) */
/* WARNING: Removing unreachable block (ram,0x00014d86c2ff) */
/* WARNING: Removing unreachable block (ram,0x00014d86c305) */
/* WARNING: Removing unreachable block (ram,0x00014d86c394) */
/* WARNING: Removing unreachable block (ram,0x00014d86c399) */
/* WARNING: Removing unreachable block (ram,0x00014d86c39f) */
/* WARNING: Removing unreachable block (ram,0x00016685789c) */
/* WARNING: Removing unreachable block (ram,0x000156be152e) */

undefined8 FUN_14d86c1e8(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong in_R9;
  
  uVar1 = *(ulonglong *)(in_R9 + 0x10);
  *(ulonglong *)(in_R9 + 0x10) = ~*(ulonglong *)(in_R9 + 0x10);
  *(ulonglong *)(in_R9 + 0x10) = *(ulonglong *)(in_R9 + 0x10) | in_RAX;
  *(ulonglong *)(in_R9 + 0x10) =
       ~((0xffffffffffffffff - in_RAX | uVar1) & *(ulonglong *)(in_R9 + 0x10));
  FUN_162e49baf();
  uVar2 = FUN_156be140d();
  return uVar2;
}



// FUNCTION 14d86c288 FUN_14d86c288 body=331 status=ok
// SIG undefined FUN_14d86c288(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156be14ab) */
/* WARNING: Removing unreachable block (ram,0x000156be14b1) */
/* WARNING: Removing unreachable block (ram,0x000156be1528) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0fcf) */
/* WARNING: Removing unreachable block (ram,0x000156be140d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a5eea) */
/* WARNING: Removing unreachable block (ram,0x00014d86c2ff) */
/* WARNING: Removing unreachable block (ram,0x00014d86c305) */
/* WARNING: Removing unreachable block (ram,0x00014d86c394) */
/* WARNING: Removing unreachable block (ram,0x00014d86c399) */
/* WARNING: Removing unreachable block (ram,0x00014d86c39f) */
/* WARNING: Removing unreachable block (ram,0x00016685789c) */
/* WARNING: Removing unreachable block (ram,0x000156be152e) */

undefined8 FUN_14d86c288(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156be140d();
  return uVar1;
}



// FUNCTION 14d86c438 FUN_14d86c438 body=290 status=ok
// SIG undefined FUN_14d86c438(void)

void FUN_14d86c438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  (*(code *)0x14dc09ef8)(unaff_retaddr,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14d86c58b FUN_14d86c58b body=143 status=ok
// SIG undefined FUN_14d86c58b(void)

/* WARNING: Removing unreachable block (ram,0x00014d86c5c6) */
/* WARNING: Removing unreachable block (ram,0x00014d86c883) */
/* WARNING: Removing unreachable block (ram,0x00016130c023) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9c8) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9ce) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9d3) */

void FUN_14d86c58b(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong unaff_RDI;
  byte bVar12;
  ulonglong uVar13;
  ulonglong in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  longlong alStackX_8 [4];
  undefined8 uStack_20;
  ulonglong auStack_18 [2];
  code *pcStack_8;
  
  uVar10 = (unaff_R15 - (in_R10 | unaff_R15)) + in_R10;
  uVar13 = (-~unaff_RDI - (param_4 + ~(in_RAX & param_3))) + uVar10 * -2;
  uVar9 = 0xffffffffffffffa0;
  bVar12 = (byte)*(undefined8 *)(unaff_R13 + -0x60) ^ (byte)unaff_R15;
  pcStack_8 = FUN_14d86c61b;
  lVar8 = FUN_156f195ad(0xffffffffffffffa0,*(undefined8 *)(unaff_R13 + -0x60),
                        *(undefined8 *)(unaff_R13 + -0x88));
  plVar4 = (longlong *)((longlong)alStackX_8 + lVar8 + -8);
  *plVar4 = (longlong)FUN_156f195ad;
  lVar8 = *plVar4;
  plVar4[1] = *(undefined8 *)(unaff_R13 + -0x70);
  *plVar4 = *(longlong *)(unaff_R13 + -8);
  plVar4[-1] = *(longlong *)(unaff_R13 + -0x98);
  plVar4[-3] = unaff_R15;
  plVar4[-4] = (longlong)(plVar4 + -1);
  *(undefined4 *)(plVar4 + -4) = 0xa7fc6704;
  *(undefined4 *)((longlong)plVar4 + -0x1c) = 0xffffffff;
  uVar5 = plVar4[-3];
  plVar4[-2] = *(undefined8 *)(unaff_R13 + (plVar4[-4] ^ 0x58039864U));
  plVar4[-3] = 0x14d86c6c3;
  FUN_16143ab4e();
  plVar4[-3] = uVar10 | unaff_retaddr;
  plVar4[-3] = *(undefined8 *)(lVar8 + -0x28);
  uVar10 = plVar4[-3];
  plVar4[-3] = uVar9;
  uVar6 = plVar4[-3];
  plVar4[-3] = *(undefined8 *)(lVar8 + -0x68);
  uVar2 = plVar4[-3];
  *(undefined4 *)(plVar4 + -4) = 0x7801fd7;
  *(undefined4 *)((longlong)plVar4 + -0x1c) = 0;
  lVar8 = plVar4[-4];
  *(code **)((longlong)plVar4 + lVar8 + -0x7801fef) = FUN_14d86c756;
  FUN_15ba3fce1(uVar6,0xffffffffffffffff - (uVar2 & uVar6) & (uVar2 | uVar6));
  *(ulonglong *)((longlong)plVar4 + lVar8 + -0x7801fef) =
       ~(((uVar10 + uVar9 + (uVar10 & uVar9) * -2) - 1 | uVar5) & 0x15ba3fce1);
  puVar1 = (ulonglong *)((longlong)plVar4 + lVar8 + -0x7801fef);
  *(uint *)puVar1 = 0x22c9758d;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x55712f1a;
  *(undefined4 *)((longlong)plVar4 + lVar8 + -0x7801feb) = 0;
  uVar10 = *puVar1;
  *puVar1 = uVar13;
  uVar10 = (uVar10 ^ 0x77b85a97) + 0x485353a200000001 ^ uVar5;
  *puVar1 = 0x4025048b486524;
  *(ulonglong *)((longlong)plVar4 + lVar8 + -0x7801ff7) = uVar10;
  *(ulonglong *)((longlong)plVar4 + lVar8 + -0x7801fff) = uVar10;
  *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7802007) = 0x14d86c7e9;
  UNRECOVERED_JUMPTABLE = (code *)FUN_14e190823();
  *(longlong *)((longlong)plVar4 + lVar8 + -0x7801ff7) =
       *(longlong *)((longlong)plVar4 + lVar8 + -0x7801ff7) + -0xdbb1703;
  uVar7 = *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801fff);
  uVar3 = *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801ff7);
  *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801ff7) = uVar7;
  *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801fff) = uVar7;
  *(code **)((longlong)plVar4 + lVar8 + -0x7802007) = FUN_16143ab4e;
  *(code **)((longlong)plVar4 + lVar8 + -0x780200f) = UNRECOVERED_JUMPTABLE;
  *(undefined4 *)((longlong)plVar4 + lVar8 + -0x780200f) = 0x2343759;
  *(undefined4 *)((longlong)plVar4 + lVar8 + -0x780200b) = 0;
  *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801ff7) =
       *(undefined8 *)
        ((longlong)plVar4 +
        *(longlong *)((longlong)plVar4 + lVar8 + -0x780200f) + lVar8 + -0x9b45748);
  *(undefined8 *)((longlong)plVar4 + lVar8 + -0x7801fff) = unaff_R12;
  puVar1 = (ulonglong *)((longlong)plVar4 + lVar8 + -0x7802007);
  *(undefined4 *)puVar1 = 0x24e5dc1d;
  *(undefined4 *)((longlong)plVar4 + lVar8 + -0x7802003) = 0;
  *(undefined8 *)((longlong)plVar4 + (*puVar1 ^ 0x24e5dc15) + lVar8 + -0x7801ff7) = uVar3;
  *(ulonglong *)((longlong)plVar4 + lVar8 + -0x7801fff) =
       ((uVar5 | 0x15eaf7b850500000) - (~(uVar5 & 0x15eaf7b850500000) | uVar5 | 0x15eaf7b850500000))
       + ~(uVar5 & 0x15eaf7b850500000);
  bVar11 = (byte)uVar3;
  if (-1 < (char)(~(bVar11 & bVar12) & (bVar11 | bVar12))) {
                    /* WARNING: Could not recover jumptable at 0x000162d88fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_162d88fc6();
  return;
}



// FUNCTION 14d86c61b FUN_14d86c61b body=314 status=ok
// SIG undefined FUN_14d86c61b(void)

/* WARNING: Removing unreachable block (ram,0x00014d86c883) */
/* WARNING: Removing unreachable block (ram,0x00016130c023) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9c8) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9ce) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9d3) */

void FUN_14d86c61b(ulonglong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong unaff_RBX;
  byte bVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 uStack_20;
  ulonglong auStack_18 [3];
  
  plVar4 = (longlong *)(&stack0x00000000 + in_RAX);
  *plVar4 = unaff_RDI;
  lVar5 = *plVar4;
  plVar4[1] = *(undefined8 *)(unaff_R13 + -0x70);
  *plVar4 = *(longlong *)(unaff_R13 + -8);
  plVar4[-1] = *(longlong *)(unaff_R13 + -0x98);
  plVar4[-3] = unaff_R15;
  plVar4[-4] = (longlong)(plVar4 + -1);
  *(undefined4 *)(plVar4 + -4) = 0xa7fc6704;
  *(undefined4 *)((longlong)plVar4 + -0x1c) = 0xffffffff;
  uVar6 = plVar4[-3];
  plVar4[-2] = *(undefined8 *)(unaff_R13 + (plVar4[-4] ^ 0x58039864U));
  plVar4[-3] = 0x14d86c6c3;
  FUN_16143ab4e();
  plVar4[-3] = unaff_RBX | unaff_retaddr;
  plVar4[-3] = *(undefined8 *)(lVar5 + -0x28);
  uVar10 = plVar4[-3];
  plVar4[-3] = param_1;
  uVar7 = plVar4[-3];
  plVar4[-3] = *(undefined8 *)(lVar5 + -0x68);
  uVar2 = plVar4[-3];
  *(undefined4 *)(plVar4 + -4) = 0x7801fd7;
  *(undefined4 *)((longlong)plVar4 + -0x1c) = 0;
  lVar5 = plVar4[-4];
  *(code **)((longlong)plVar4 + lVar5 + -0x7801fef) = FUN_14d86c756;
  FUN_15ba3fce1(uVar7,0xffffffffffffffff - (uVar2 & uVar7) & (uVar2 | uVar7));
  *(ulonglong *)((longlong)plVar4 + lVar5 + -0x7801fef) =
       ~(((uVar10 + param_1 + (uVar10 & param_1) * -2) - 1 | uVar6) & 0x15ba3fce1);
  puVar1 = (ulonglong *)((longlong)plVar4 + lVar5 + -0x7801fef);
  *(uint *)puVar1 = 0x22c9758d;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x55712f1a;
  *(undefined4 *)((longlong)plVar4 + lVar5 + -0x7801feb) = 0;
  uVar10 = *puVar1;
  *puVar1 = in_R10;
  uVar10 = (uVar10 ^ 0x77b85a97) + 0x485353a200000001 ^ uVar6;
  *puVar1 = 0x4025048b486524;
  *(ulonglong *)((longlong)plVar4 + lVar5 + -0x7801ff7) = uVar10;
  *(ulonglong *)((longlong)plVar4 + lVar5 + -0x7801fff) = uVar10;
  *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7802007) = 0x14d86c7e9;
  UNRECOVERED_JUMPTABLE = (code *)FUN_14e190823();
  *(longlong *)((longlong)plVar4 + lVar5 + -0x7801ff7) =
       *(longlong *)((longlong)plVar4 + lVar5 + -0x7801ff7) + -0xdbb1703;
  uVar8 = *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801fff);
  uVar3 = *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801ff7);
  *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801ff7) = uVar8;
  *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801fff) = uVar8;
  *(code **)((longlong)plVar4 + lVar5 + -0x7802007) = FUN_16143ab4e;
  *(code **)((longlong)plVar4 + lVar5 + -0x780200f) = UNRECOVERED_JUMPTABLE;
  *(undefined4 *)((longlong)plVar4 + lVar5 + -0x780200f) = 0x2343759;
  *(undefined4 *)((longlong)plVar4 + lVar5 + -0x780200b) = 0;
  *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801ff7) =
       *(undefined8 *)
        ((longlong)plVar4 +
        *(longlong *)((longlong)plVar4 + lVar5 + -0x780200f) + lVar5 + -0x9b45748);
  *(undefined8 *)((longlong)plVar4 + lVar5 + -0x7801fff) = unaff_R12;
  puVar1 = (ulonglong *)((longlong)plVar4 + lVar5 + -0x7802007);
  *(undefined4 *)puVar1 = 0x24e5dc1d;
  *(undefined4 *)((longlong)plVar4 + lVar5 + -0x7802003) = 0;
  *(undefined8 *)((longlong)plVar4 + (*puVar1 ^ 0x24e5dc15) + lVar5 + -0x7801ff7) = uVar3;
  *(ulonglong *)((longlong)plVar4 + lVar5 + -0x7801fff) =
       ((uVar6 | 0x15eaf7b850500000) - (~(uVar6 & 0x15eaf7b850500000) | uVar6 | 0x15eaf7b850500000))
       + ~(uVar6 & 0x15eaf7b850500000);
  bVar9 = (byte)uVar3;
  if (-1 < (char)(~(bVar9 & param_4) & (bVar9 | param_4))) {
                    /* WARNING: Could not recover jumptable at 0x000162d88fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_162d88fc6();
  return;
}



// FUNCTION 14d86c756 FUN_14d86c756 body=300 status=ok
// SIG undefined FUN_14d86c756(void)

/* WARNING: Removing unreachable block (ram,0x00014d86c883) */
/* WARNING: Removing unreachable block (ram,0x00016130c023) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9c8) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9ce) */
/* WARNING: Removing unreachable block (ram,0x00014d86c9d3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d86c756(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar2;
  byte in_R9B;
  longlong unaff_R13;
  byte unaff_R15B;
  
  uVar1 = *(undefined8 *)(unaff_R13 + -0x50);
  UNRECOVERED_JUMPTABLE = (code *)FUN_14e190823();
  bVar2 = ((byte)uVar1 ^ unaff_R15B) - 3;
  if (-1 < (char)(~(bVar2 & in_R9B) & (bVar2 | in_R9B))) {
                    /* WARNING: Could not recover jumptable at 0x000162d88fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_162d88fc6();
  return;
}



// FUNCTION 14d86c883 FUN_14d86c883 body=487 status=ok
// SIG undefined FUN_14d86c883(void)

/* WARNING: Removing unreachable block (ram,0x00014d86c9d3) */

void FUN_14d86c883(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_R9;
  ulonglong uVar3;
  undefined8 in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = ~(in_R9 & in_RAX) & (in_R9 | in_RAX);
  uVar2 = (in_RAX | ~*(ulonglong *)(unaff_R12 + -0x28)) + ~in_RAX + 1;
  lVar1 = FUN_166b1f35d(~uVar2,uVar2,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,uVar3);
  if (*(longlong *)(unaff_R13 + -0x48) != 0) {
    FUN_16130c023();
    return;
  }
  FUN_162a9436b(*(undefined8 *)(unaff_R13 + -0x78),
                CONCAT62(~(uint6)((ulonglong)in_R11 >> 0x10),~(ushort)uVar3 & 0xf35d | (ushort)uVar3
                        ),
                ~(*(ulonglong *)(unaff_R13 + lVar1) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + lVar1) | unaff_R15));
  return;
}



// FUNCTION 14d86ca6e FUN_14d86ca6e body=569 status=ok
// SIG undefined FUN_14d86ca6e(void)

/* WARNING: Removing unreachable block (ram,0x000165aeaeff) */
/* WARNING: Removing unreachable block (ram,0x000165aeaf10) */
/* WARNING: Removing unreachable block (ram,0x000165aeaf0b) */
/* WARNING: Removing unreachable block (ram,0x00014d86cb81) */
/* WARNING: Removing unreachable block (ram,0x00014d86cb9e) */
/* WARNING: Removing unreachable block (ram,0x0001629410d2) */
/* WARNING: Removing unreachable block (ram,0x00016294115c) */
/* WARNING: Removing unreachable block (ram,0x000165aeadae) */
/* WARNING: Removing unreachable block (ram,0x000165aeae67) */
/* WARNING: Removing unreachable block (ram,0x000165aeae7b) */
/* WARNING: Removing unreachable block (ram,0x000165aeae75) */
/* WARNING: Removing unreachable block (ram,0x000165aeae60) */
/* WARNING: Removing unreachable block (ram,0x000162941157) */
/* WARNING: Removing unreachable block (ram,0x000162941162) */

void FUN_14d86ca6e(void)

{
  return;
}



// FUNCTION 14d86cc4a FUN_14d86cc4a body=596 status=ok
// SIG undefined FUN_14d86cc4a(void)

/* WARNING: Removing unreachable block (ram,0x00014d86ce9b) */
/* WARNING: Removing unreachable block (ram,0x00014d86cea6) */
/* WARNING: Removing unreachable block (ram,0x00014d86cea1) */
/* WARNING: Removing unreachable block (ram,0x00014d86cdfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d86cc4a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong lVar3;
  ulonglong unaff_RDI;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  lVar3 = unaff_RBX + (unaff_R13 & unaff_R15) * -2;
  FUN_157153d91();
  FUN_164fc6b7a(unaff_RDI,_DAT_0640c374 ^ unaff_RDI,_DAT_0640c36c ^ unaff_RDI,param_2 + param_4 * -2
               );
  uVar2 = *(ulonglong *)(lVar3 + -0x60);
  uVar2 = ~((~unaff_R15 | uVar2) & ~(uVar2 & ~unaff_R15));
  uVar1 = FUN_15b35d192(uVar2,uVar2,*(undefined8 *)(lVar3 + -0x88),uVar2);
  return uVar1;
}



// FUNCTION 14d86cea6 FUN_14d86cea6 body=139 status=ok
// SIG undefined FUN_14d86cea6(void)

void FUN_14d86cea6(undefined8 param_1)

{
  FUN_1665db525(param_1,FUN_1665db525);
  return;
}



// FUNCTION 14d86d066 FUN_14d86d066 body=154 status=ok
// SIG undefined FUN_14d86d066(void)

void FUN_14d86d066(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(code **)(local_res18 + -0x10) = FUN_14d86d102;
  FUN_15652a62f(param_1,*(undefined8 *)(local_res18 + -0x18),param_3,FUN_15652a62f);
  return;
}



// FUNCTION 14d86d102 FUN_14d86d102 body=117 status=ok
// SIG undefined FUN_14d86d102(void)

/* WARNING: Removing unreachable block (ram,0x00014d86d178) */
/* WARNING: Removing unreachable block (ram,0x00014d86d224) */
/* WARNING: Removing unreachable block (ram,0x00014d86d229) */
/* WARNING: Removing unreachable block (ram,0x00014d908833) */
/* WARNING: Removing unreachable block (ram,0x00014d86d22f) */

undefined8 FUN_14d86d102(void)

{
  undefined8 uVar1;
  byte *unaff_RSI;
  ulonglong unaff_R13;
  byte bStackX_8;
  
  if (unaff_RSI +
      (~(ulonglong)unaff_RSI - ~((ulonglong)unaff_RSI & (unaff_R13 >> 1 ^ unaff_R13 << 0x3f))) !=
      (byte *)0x0) {
    unaff_RSI = (byte *)((ulonglong)unaff_RSI & 0x7fffffffffffffff);
    bStackX_8 = ~(~(bStackX_8 & 0x7c) & (bStackX_8 | 0x7c));
  }
  *unaff_RSI = bStackX_8;
  uVar1 = thunk_FUN_156e7a0e9();
  return uVar1;
}



// FUNCTION 14d86d178 FUN_14d86d178 body=188 status=ok
// SIG undefined FUN_14d86d178(void)

/* WARNING: Removing unreachable block (ram,0x00014d86d22f) */

undefined8 FUN_14d86d178(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  if (-1 < (longlong)uVar3) {
    uVar4 = ~(*(ulonglong *)(unaff_RDI + -0x88) & param_1) &
            (*(ulonglong *)(unaff_RDI + -0x88) | param_1);
    FUN_164f2baf5(param_1,uVar3,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                  (~(~*(ulonglong *)(unaff_RDI + -0x60) | ~param_1) ^ 0xffffffffffffffff) &
                  (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
    uVar2 = FUN_1669a25cc(((~uVar4 | *(ulonglong *)((uVar1 ^ param_1) - 0x40)) + uVar4 + 1) * 2);
    return uVar2;
  }
  uVar2 = FUN_14d908833();
  return uVar2;
}



// FUNCTION 14d86d235 FUN_14d86d235 body=158 status=ok
// SIG undefined FUN_14d86d235(void)

void FUN_14d86d235(undefined8 param_1,undefined8 param_2)

{
  FUN_162579cf6();
  FUN_1620d223a(param_1,param_2);
  return;
}



// FUNCTION 14d86d2d3 FUN_14d86d2d3 body=137 status=ok
// SIG undefined FUN_14d86d2d3(void)

void FUN_14d86d2d3(undefined8 param_1,undefined8 param_2)

{
  FUN_1620d223a(param_1,param_2);
  return;
}



// FUNCTION 14d86d35c FUN_14d86d35c body=162 status=ok
// SIG undefined FUN_14d86d35c(void)

void FUN_14d86d35c(undefined8 param_1)

{
  FUN_1565e28c7(param_1,0x1851bc4b);
  return;
}



// FUNCTION 14d86d4b6 FUN_14d86d4b6 body=140 status=ok
// SIG undefined FUN_14d86d4b6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d86d542) */

void FUN_14d86d4b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  if (*(longlong *)(local_res10 + -8) == 0) {
    *(undefined8 *)(local_res10 + -0x10) = 0;
    *(undefined8 *)(local_res10 + -8) = 0;
    *(longlong *)(local_res10 + -8) = (longlong)(&DAT_161b4e9fb + *(longlong *)(local_res10 + -8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_161b4e9c5();
  return;
}



// FUNCTION 14d86d542 FUN_14d86d542 body=158 status=ok
// SIG undefined FUN_14d86d542(void)

void FUN_14d86d542(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *in_RAX;
  undefined8 in_stack_00000010;
  
  *in_RAX = ~param_4;
  FUN_15b3aef7f(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14d86d5e1 FUN_14d86d5e1 body=166 status=ok
// SIG undefined FUN_14d86d5e1(void)

void FUN_14d86d5e1(undefined1 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  uVar3 = ~((unaff_R15 - param_3) + param_4);
  uVar2 = 0;
  if ((in_RAX & 0x80000000) != 0) {
    uVar2 = 0xffffffff;
  }
  FUN_160d0bc44(param_1,uVar2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                (unaff_RBX - (uVar3 | unaff_RBX)) + uVar3);
  uVar3 = ~(uStackX_18 & unaff_R15) & (uStackX_18 | unaff_R15);
  puVar1 = (undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 0x10) = in_R11;
  *puVar1 = uVar2;
  *(undefined8 *)(uVar3 - 0x10) = *puVar1;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RBP;
  *puVar1 = &DAT_14d86d71a;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d86d688 FUN_14d86d688 body=117 status=ok
// SIG undefined FUN_14d86d688(void)

void FUN_14d86d688(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  puVar1 = (undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = in_R11;
  *puVar1 = param_2;
  *(undefined8 *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBP;
  *puVar1 = &DAT_14d86d71a;
  thunk_FUN_15b642ca5(param_1,*(undefined8 *)(uVar2 - 0x10));
  return;
}



// FUNCTION 14d86d876 FUN_14d86d876 body=159 status=ok
// SIG undefined FUN_14d86d876(void)

void FUN_14d86d876(void)

{
  return;
}



// FUNCTION 14d86da3c FUN_14d86da3c body=80 status=ok
// SIG undefined FUN_14d86da3c(void)

void FUN_14d86da3c(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
  *(uint *)(unaff_RSI + -0x70) = *(uint *)(unaff_RSI + -0x70) >> 1;
  return;
}



// FUNCTION 14d86daee FUN_14d86daee body=342 status=ok
// SIG undefined FUN_14d86daee(void)

undefined8 FUN_14d86daee(void)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0x68);
  FUN_156e1093d(FUN_156e1093d,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return *(undefined8 *)(lVar1 + -0x80);
}



// FUNCTION 14d86dec0 FUN_14d86dec0 body=616 status=ok
// SIG undefined FUN_14d86dec0(void)

/* WARNING: Removing unreachable block (ram,0x000161c268d5) */
/* WARNING: Removing unreachable block (ram,0x000161c268db) */
/* WARNING: Removing unreachable block (ram,0x000161c2696e) */
/* WARNING: Removing unreachable block (ram,0x000161c26974) */
/* WARNING: Removing unreachable block (ram,0x000160e57d4f) */
/* WARNING: Removing unreachable block (ram,0x00016634c8cd) */
/* WARNING: Removing unreachable block (ram,0x00014d86defc) */
/* WARNING: Removing unreachable block (ram,0x00016634c8e9) */
/* WARNING: Removing unreachable block (ram,0x00014d86df0d) */
/* WARNING: Removing unreachable block (ram,0x000162c1b3c6) */
/* WARNING: Removing unreachable block (ram,0x00016634c909) */
/* WARNING: Removing unreachable block (ram,0x00016634c90f) */
/* WARNING: Removing unreachable block (ram,0x00014e02cf9c) */
/* WARNING: Removing unreachable block (ram,0x00014e02cf69) */
/* WARNING: Removing unreachable block (ram,0x0001658d5490) */
/* WARNING: Removing unreachable block (ram,0x0001658d5516) */
/* WARNING: Removing unreachable block (ram,0x00014d7a95e2) */
/* WARNING: Removing unreachable block (ram,0x000161120ef7) */

undefined1 *
FUN_14d86dec0(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
             undefined8 *param_6,ulonglong param_7,undefined8 *param_8)

{
  longlong *plVar1;
  code *pcVar2;
  uint in_EAX;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_EBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  byte bVar19;
  bool bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  bool bVar24;
  byte bVar25;
  ulonglong uVar26;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000018;
  ushort *in_stack_00000020;
  
  uVar26 = (ulonglong)(unaff_EBX + ~(in_EAX & param_1) + param_2);
  if (uVar26 == 0) {
    puVar3 = (undefined1 *)FUN_165f42fff(in_stack_00000008,0,0x89dbdc);
    return puVar3;
  }
  if (uVar26 == 1) {
    return in_stack_00000018;
  }
  if (uVar26 == 2) {
    puVar3 = (undefined1 *)FUN_16484997e(in_stack_00000008);
    return puVar3;
  }
  if (uVar26 == 3) {
    FUN_16634c8b0();
    *in_stack_00000020 = -~*in_stack_00000020 - (~(ushort)unaff_RSI + 2);
    bVar19 = (param_7 & 0x4000) != 0;
    bVar17 = (param_7 & 0x800) != 0;
    bVar15 = (param_7 & 0x200) != 0;
    bVar13 = (param_7 & 0x100) != 0;
    bVar11 = (param_7 & 0x80) != 0;
    bVar10 = (param_7 & 0x40) != 0;
    bVar9 = (param_7 & 0x10) != 0;
    bVar7 = (param_7 & 4) != 0;
    bVar6 = (param_7 & 1) != 0;
    bVar25 = (param_7 & 0x200000) != 0;
    bVar21 = (param_7 & 0x40000) != 0;
    bVar23 = 0;
    bVar22 = 0;
    pcVar2 = (code *)swi(0x2e);
    (*pcVar2)(in_stack_00000008);
    *param_8 = unaff_RBP;
    param_8[-1] = unaff_RBP;
    param_8[-2] = (ulonglong)(bVar19 & 1) * 0x4000 | (ulonglong)(bVar17 & 1) * 0x800 |
                  (ulonglong)((param_7 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
                  (ulonglong)(bVar13 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
                  (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
                  (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
                  (ulonglong)(bVar25 & 1) * 0x200000 | (ulonglong)(bVar23 & 1) * 0x100000 |
                  (ulonglong)(bVar22 & 1) * 0x80000 | (ulonglong)(bVar21 & 1) * 0x40000;
    uVar26 = param_8[-2];
    param_8[-2] = (ulonglong)((uVar26 & 0x4000) != 0) * 0x4000 |
                  (ulonglong)((uVar26 & 0x800) != 0) * 0x800 |
                  (ulonglong)((uVar26 & 0x400) != 0) * 0x400 |
                  (ulonglong)((uVar26 & 0x200) != 0) * 0x200 |
                  (ulonglong)((uVar26 & 0x100) != 0) * 0x100 |
                  (ulonglong)((uVar26 & 0x80) != 0) * 0x80 |
                  (ulonglong)((uVar26 & 0x40) != 0) * 0x40 |
                  (ulonglong)((uVar26 & 0x10) != 0) * 0x10 | (ulonglong)((uVar26 & 4) != 0) * 4 |
                  (ulonglong)((uVar26 & 1) != 0) | (ulonglong)((uVar26 & 0x200000) != 0) * 0x200000
                  | (ulonglong)((uVar26 & 0x40000) != 0) * 0x40000;
    param_8[-3] = param_5;
    param_8[-4] = unaff_R12;
    puVar3 = (undefined1 *)FUN_156bc6ae7();
    return puVar3;
  }
  if (uVar26 == 4) {
    puVar3 = (undefined1 *)FUN_14da4c7c3();
    return puVar3;
  }
  if (uVar26 == 5) {
    puVar3 = (undefined1 *)FUN_14dcdbed0();
    return puVar3;
  }
  if (uVar26 == 6) {
    return in_stack_00000018;
  }
  if (uVar26 != 7) {
    if (uVar26 == 8) {
      uVar26 = FUN_1614a940d();
      puVar3 = (undefined1 *)FUN_16113f04d(~(~(~-*(longlong *)(unaff_R12 + -0x60) + 1U) & ~uVar26));
      return puVar3;
    }
    if (uVar26 == 9) {
      FUN_14db9fbc5();
      bVar19 = (param_5 & 0x4000) != 0;
      bVar17 = (param_5 & 0x800) != 0;
      bVar15 = (param_5 & 0x200) != 0;
      bVar13 = (param_5 & 0x100) != 0;
      bVar11 = (param_5 & 0x80) != 0;
      bVar10 = (param_5 & 0x40) != 0;
      bVar9 = (param_5 & 0x10) != 0;
      bVar7 = (param_5 & 4) != 0;
      bVar6 = (param_5 & 1) != 0;
      bVar25 = (param_5 & 0x200000) != 0;
      bVar21 = (param_5 & 0x40000) != 0;
      bVar23 = 0;
      bVar22 = 0;
      pcVar2 = (code *)swi(0x2e);
      (*pcVar2)();
      param_6[-1] = unaff_RSI;
      *param_6 = param_3;
      param_6[-1] = param_3;
      param_6[-2] = (ulonglong)(bVar19 & 1) * 0x4000 | (ulonglong)(bVar17 & 1) * 0x800 |
                    (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
                    (ulonglong)(bVar13 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
                    (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
                    (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
                    (ulonglong)(bVar25 & 1) * 0x200000 | (ulonglong)(bVar23 & 1) * 0x100000 |
                    (ulonglong)(bVar22 & 1) * 0x80000 | (ulonglong)(bVar21 & 1) * 0x40000;
      uVar26 = param_6[-2];
      bVar18 = (uVar26 & 0x4000) != 0;
      bVar16 = (uVar26 & 0x400) != 0;
      bVar14 = (uVar26 & 0x200) != 0;
      bVar12 = (uVar26 & 0x100) != 0;
      bVar8 = (uVar26 & 0x10) != 0;
      bVar24 = (uVar26 & 0x200000) != 0;
      bVar20 = (uVar26 & 0x40000) != 0;
      param_6[-2] = (ulonglong)bVar18 * 0x4000 | (ulonglong)((uVar26 & 0x800) != 0) * 0x800 |
                    (ulonglong)bVar16 * 0x400 | (ulonglong)bVar14 * 0x200 |
                    (ulonglong)bVar12 * 0x100 | (ulonglong)((uVar26 & 0x80) != 0) * 0x80 |
                    (ulonglong)((uVar26 & 0x40) != 0) * 0x40 | (ulonglong)bVar8 * 0x10 |
                    (ulonglong)((uVar26 & 4) != 0) * 4 | (ulonglong)((uVar26 & 1) != 0) |
                    (ulonglong)bVar24 * 0x200000 | (ulonglong)bVar20 * 0x40000;
      param_6[-3] = 0xe596538;
      param_6[-4] = unaff_R12;
      param_6[-5] = in_stack_00000008;
      uVar26 = param_6[-3];
      uVar4 = uVar26 - 0xbd12366;
      param_6[-3] = uVar4;
      param_6[-3] = (ulonglong)bVar18 * 0x4000 | (ulonglong)SBORROW8(uVar26,0xbd12366) * 0x800 |
                    (ulonglong)bVar16 * 0x400 | (ulonglong)bVar14 * 0x200 |
                    (ulonglong)bVar12 * 0x100 | (ulonglong)((longlong)uVar4 < 0) * 0x80 |
                    (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)bVar8 * 0x10 |
                    (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
                    (ulonglong)(uVar26 < 0xbd12366) | (ulonglong)bVar24 * 0x200000 |
                    (ulonglong)bVar20 * 0x40000;
      plVar1 = param_6 + -4;
      *plVar1 = 0xe596538;
      *plVar1 = *plVar1 + -0xbd12b01;
      puVar3 = (undefined1 *)FUN_16292fc64(param_6[-5]);
      return puVar3;
    }
    if (uVar26 == 10) {
      puVar3 = (undefined1 *)FUN_165481f07();
      return puVar3;
    }
    if (uVar26 != 0xb) {
      if (uVar26 == 0xc) {
        puVar3 = (undefined1 *)FUN_1612b98ee();
        return puVar3;
      }
      lVar5 = -~(uVar26 - 0xc);
      if (lVar5 != 2) {
        if (lVar5 != 3) {
          puVar3 = (undefined1 *)FUN_162c1b36c(in_stack_00000008,lVar5 + -4);
          return puVar3;
        }
        return in_stack_00000018;
      }
      puVar3 = (undefined1 *)FUN_164a6727b();
      return puVar3;
    }
    puVar3 = (undefined1 *)FUN_1612f39d7();
    return puVar3;
  }
  return &LAB_16141cc3c;
}



// FUNCTION 14d86e2d2 FUN_14d86e2d2 body=423 status=ok
// SIG undefined FUN_14d86e2d2(void)

/* WARNING: Removing unreachable block (ram,0x000156c8333f) */
/* WARNING: Removing unreachable block (ram,0x000156c8334a) */
/* WARNING: Removing unreachable block (ram,0x000156c833e3) */
/* WARNING: Removing unreachable block (ram,0x000156c833ee) */
/* WARNING: Removing unreachable block (ram,0x000156c833f4) */
/* WARNING: Removing unreachable block (ram,0x000156c833f9) */
/* WARNING: Removing unreachable block (ram,0x000156c83328) */
/* WARNING: Removing unreachable block (ram,0x000156c83345) */
/* WARNING: Removing unreachable block (ram,0x00014d86e382) */
/* WARNING: Removing unreachable block (ram,0x00014d86e446) */
/* WARNING: Removing unreachable block (ram,0x00014d86e43b) */

void FUN_14d86e2d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)unaff_retaddr >> 0x20) ^ 0x23fa1fcb;
  if (CONCAT44(uVar1 & 0xfd629096 | ~(uVar1 | 0xfd629096),(int)unaff_retaddr) == 0x16032ed5) {
    FUN_1623a5405(0x16032ed5,0x16032ed5,0xffffffffffffff70,
                  ~(*(ulonglong *)(unaff_RSI + -0x50) & 0xf1b3c6aedb4dc9c9));
    return;
  }
  if (unaff_RSI == 0x80) {
    FUN_164efc86c();
    return;
  }
  FUN_15b16ab95(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,
                *(undefined8 *)(unaff_RSI + -0x88));
  return;
}



// FUNCTION 14d86e382 FUN_14d86e382 body=267 status=ok
// SIG undefined FUN_14d86e382(void)

void FUN_14d86e382(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R11;
  
  uVar1 = ~(0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x68) | param_1);
  FUN_15b9044ef(param_1,FUN_15b9044ef,~(unaff_RSI & (~param_1 & param_3 | param_1)));
  if ((in_R11 - (uVar1 | in_R11)) + uVar1 == 0) {
    FUN_156799689();
    return;
  }
  return;
}



// FUNCTION 14d86e52d FUN_14d86e52d body=167 status=ok
// SIG undefined FUN_14d86e52d(void)

void FUN_14d86e52d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
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
  ulonglong uVar17;
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  bVar12 = (local_res10 & 0x4000) != 0;
  bVar11 = (local_res10 & 0x800) != 0;
  bVar10 = (local_res10 & 0x400) != 0;
  bVar9 = (local_res10 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (local_res10 & 0x80) != 0;
  bVar6 = (local_res10 & 0x40) != 0;
  bVar5 = (local_res10 & 0x10) != 0;
  bVar4 = (local_res10 & 4) != 0;
  bVar3 = (local_res10 & 1) != 0;
  bVar16 = (uStackX_12 & 0x20) != 0;
  bVar13 = (uStackX_12 & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *local_res18 = unaff_RDI;
  local_res18[-1] = unaff_RDI;
  local_res18[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)bVar10 * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 | (ulonglong)(bVar8 & 1) * 0x100 |
       (ulonglong)(bVar7 & 1) * 0x80 | (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10
       | (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res18[-3] = 0xcf00170;
  uVar17 = local_res18[-3];
  lVar1 = local_res18[-3];
  local_res18[-3] = local_res18[-3] + -0x9cb5808;
  local_res18[-3] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)SBORROW8(lVar1,0x9cb5808) * 0x800 |
       (ulonglong)bVar10 * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 | (ulonglong)(bVar8 & 1) * 0x100 |
       (ulonglong)((longlong)local_res18[-3] < 0) * 0x80 | (ulonglong)(local_res18[-3] == 0) * 0x40
       | (ulonglong)(bVar5 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(local_res18[-3] & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar17 < 0x9cb5808) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = local_res18[-2];
  local_res18[-2] = param_4;
  local_res18[-3] = unaff_RBX;
  local_res18[-4] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  local_res18[-4] = param_2;
  local_res18[-5] = param_2;
  local_res18[-4] = &LAB_14d86e5d5;
  return;
}



// FUNCTION 14d86e5e6 FUN_14d86e5e6 body=589 status=ok
// SIG undefined FUN_14d86e5e6(void)

void FUN_14d86e5e6(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res10;
  ushort local_res18;
  ulonglong local_res20;
  
  lVar4 = unaff_retaddr + unaff_R15 + ~(~unaff_retaddr | ~unaff_R15) * -2;
  FUN_1662e2a29(param_1,0);
  uVar1 = (local_res10 & unaff_R15 ^ 0xffffffffffffffff) & (local_res10 | unaff_R15);
  local_res18 = local_res18 ^ (ushort)unaff_R15;
  uVar2 = (local_res20 & unaff_R15 ^ 0xffffffffffffffff) & (local_res20 | unaff_R15);
  if ((0x100 < (local_res18 | 0x100)) && ((local_res18 | 0x100) < 0x100)) {
    FUN_1654f605e(FUN_1654f605e,0xffffffffffffffc8,*(ulonglong *)(unaff_R13 + -0x88) ^ uVar1,
                  ~(*(ulonglong *)(unaff_R13 + -0x60) & uVar1) &
                  (*(ulonglong *)(unaff_R13 + -0x60) | uVar1));
    (*(code *)0x1572e22b8)(0x2ffed40f);
    return;
  }
  *(undefined8 *)(uVar2 - 8) = local_res8;
  *(longlong *)(uVar2 - 0x10) = lVar4;
  *(longlong *)(uVar2 - 0x18) = lVar4;
  uVar3 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = param_1;
  *(longlong *)(uVar2 - 0x28) = unaff_R13;
  *(code **)(uVar2 - 0x30) = FUN_1662e2a29;
  *(undefined8 *)(uVar2 - 0x10) = uVar3;
  uVar3 = *(undefined8 *)(uVar2 - 0x20);
  *(BADSPACEBASE **)(uVar2 - 0x18) = register0x00000020;
  *(undefined8 *)(uVar2 - 8) = 0;
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x162885152;
  FUN_162885136(uVar3);
  return;
}



// FUNCTION 14d86e838 FUN_14d86e838 body=171 status=ok
// SIG undefined FUN_14d86e838(void)

undefined8 FUN_14d86e838(void)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 in_R11;
  undefined1 local_res10;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
                    /* WARNING: Read-only address (ram,0x00014d7bdeaf) is written */
  LOCK();
  cVar3 = (char)in_RAX;
  if (cVar3 == '\0') {
    uRam000000014d7bdeaf = local_res10;
  }
  else {
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined4 *)(local_res20 + -0x18) = 0x10b66c69;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(longlong *)(local_res20 + -0x20) = lVar1;
  *(longlong *)(local_res20 + -0x20) = *(longlong *)(local_res20 + -0x20) + -0xc6c37a9;
  *(ulonglong *)(local_res20 + -0x18) = in_RAX;
  *(longlong *)(local_res20 + -8) = lVar1 + -0xc6c37a9;
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = 0x14de0e974;
  return uVar2;
}



// FUNCTION 14d86eb5b FUN_14d86eb5b body=580 status=ok
// SIG undefined FUN_14d86eb5b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d86ec8a) */
/* WARNING: Removing unreachable block (ram,0x00014d86ec90) */
/* WARNING: Removing unreachable block (ram,0x00014d86ed10) */
/* WARNING: Removing unreachable block (ram,0x00014d86ed16) */
/* WARNING: Removing unreachable block (ram,0x00014d86ed93) */
/* WARNING: Removing unreachable block (ram,0x000161092a21) */
/* WARNING: Removing unreachable block (ram,0x0001573182c3) */
/* WARNING: Removing unreachable block (ram,0x00014d86ed98) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7ab9) */
/* WARNING: Removing unreachable block (ram,0x00014d86ed9e) */
/* WARNING: Removing unreachable block (ram,0x000165abebf7) */
/* WARNING: Removing unreachable block (ram,0x000157318317) */
/* WARNING: Removing unreachable block (ram,0x00014d86ebe5) */

void FUN_14d86eb5b(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R12;
  
  *param_2 = unaff_RSI;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  *param_2 = param_1;
  uVar4 = *param_2;
  *param_2 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = *param_2;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x48);
  *param_2 = uVar1 + param_1 + (uVar1 & param_1) * -2;
  if ((uVar3 & uVar4) == 0) {
    FUN_16292cb78();
    return;
  }
  *param_2 = ~(uVar2 & uVar4) & (~(uVar2 & uVar4) + uVar4) - ~uVar2;
  param_2[-1] = *(ulonglong *)(unaff_RDI + -0x88);
  uVar1 = *param_2;
  *param_2 = in_R10;
  param_2[-1] = unaff_RDI;
  param_2[-1] = unaff_R12;
  FUN_161d66bf1(uVar4,uVar1);
  return;
}



// FUNCTION 14d86eda3 FUN_14d86eda3 body=99 status=ok
// SIG undefined FUN_14d86eda3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d86eda3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d86ef7f FUN_14d86ef7f body=277 status=ok
// SIG undefined FUN_14d86ef7f(void)

/* WARNING: Removing unreachable block (ram,0x00014d86f084) */

void FUN_14d86ef7f(undefined8 param_1)

{
  longlong in_R10;
  
  FUN_162d76f17();
  if (in_R10 != 0) {
    FUN_1665e725b();
    return;
  }
  FUN_162975f1c(param_1);
  return;
}



// FUNCTION 14d86f1a8 FUN_14d86f1a8 body=126 status=ok
// SIG undefined FUN_14d86f1a8(void)

void FUN_14d86f1a8(void)

{
  FUN_160c64813();
  return;
}



// FUNCTION 14d86f2ad FUN_14d86f2ad body=279 status=ok
// SIG undefined FUN_14d86f2ad(void)

void FUN_14d86f2ad(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  longlong in_stack_00000008;
  longlong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_R12) = param_1;
  lVar3 = local_res10[0];
  local_res10[0] = param_3;
  FUN_156731be5(lVar3,8);
  puVar2 = (ushort *)(&stack0xfffffffff17b0656 + in_stack_00000008);
  *puVar2 = (-0x100 - (~((~*puVar2 & 0x100) + 1) + 2)) + *puVar2;
  plVar1 = (longlong *)(param_5 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar3;
  *(undefined8 *)(param_5 + -0x10) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x18) = unaff_retaddr;
  *(undefined1 **)(param_5 + -0x10) = &LAB_14d86f3c7;
  (*(code *)0x16274fc22)(0x16274fc22,local_res10[1]);
  return;
}



// FUNCTION 14d86f500 FUN_14d86f500 body=154 status=ok
// SIG undefined FUN_14d86f500(void)

/* WARNING: Removing unreachable block (ram,0x00014d86f595) */
/* WARNING: Removing unreachable block (ram,0x00014d86f59b) */

void FUN_14d86f500(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_162dd56ee(param_1,*(undefined8 *)(unaff_RDI + -0x98),FUN_162dd56ee);
  return;
}



// FUNCTION 14d86f59b FUN_14d86f59b body=114 status=ok
// SIG undefined FUN_14d86f59b(void)

void FUN_14d86f59b(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d86f708 FUN_14d86f708 body=164 status=ok
// SIG undefined FUN_14d86f708(void)

void FUN_14d86f708(void)

{
  return;
}



// FUNCTION 14d86f904 FUN_14d86f904 body=117 status=ok
// SIG undefined FUN_14d86f904(void)

/* WARNING: Instruction at (ram,0x00014d86f937) overlaps instruction at (ram,0x00014d86f936)
    */
/* WARNING: Removing unreachable block (ram,0x00014d86f930) */

void FUN_14d86f904(undefined8 param_1,undefined8 param_2)

{
  int in_R11D;
  uint unaff_R12D;
  
  FUN_16495285c(in_R11D - ~unaff_R12D,param_2,FUN_16495285c);
  return;
}



// FUNCTION 14d86f97c FUN_14d86f97c body=499 status=ok
// SIG undefined FUN_14d86f97c(void)

/* WARNING: Removing unreachable block (ram,0x00014df1babd) */
/* WARNING: Removing unreachable block (ram,0x00015b6eba69) */
/* WARNING: Removing unreachable block (ram,0x00014d86fa1b) */

void FUN_14d86f97c(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_retaddr;
  ulonglong uStackX_18;
  
  if ((longlong)
      (~((~(0xffffffffffffffff - unaff_retaddr & uStackX_18) + uStackX_18) -
        ~(0xffffffffffffffff - unaff_retaddr)) | ~(~uStackX_18 | unaff_retaddr)) < 0) {
    FUN_160f116a1(param_1,param_2);
    return;
  }
  FUN_14dde1953();
  return;
}



// FUNCTION 14d86fa1b FUN_14d86fa1b body=140 status=ok
// SIG undefined FUN_14d86fa1b(void)

void FUN_14d86fa1b(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_1569833cd)
            (param_1,(~((~param_1 | ~*(ulonglong *)(unaff_RDI + -0x30)) + param_1 + 1) + param_1) -
                     *(ulonglong *)(unaff_RDI + -0x30),param_3,2);
  return;
}



// FUNCTION 14d86faa8 FUN_14d86faa8 body=47 status=ok
// SIG undefined FUN_14d86faa8(void)

void FUN_14d86faa8(void)

{
  return;
}



// FUNCTION 14d86fd0e FUN_14d86fd0e body=176 status=ok
// SIG undefined FUN_14d86fd0e(void)

void FUN_14d86fd0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 uStack0000000000000028;
  
  local_res18[1] =
       *(undefined8 *)
        ((longlong)local_res18 +
        (unaff_R14 ^
        ~(~(unaff_R15 & 0xffffffffc15eee7f) & (unaff_R15 | 0xffffffffc15eee7f)) ^ 0x63b85f48));
  uStack0000000000000028 = 0;
  local_res18[0] = param_3;
  (*(code *)0x15b9bd4cb)(0x15b9bd4cb,param_2,local_res8);
  return;
}



// FUNCTION 14d86fee1 FUN_14d86fee1 body=12 status=ok
// SIG undefined FUN_14d86fee1(void)

void FUN_14d86fee1(void)

{
  FUN_14d7c2efa();
  return;
}


