// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dc9453e FUN_14dc9453e body=93 status=ok
// SIG undefined FUN_14dc9453e(void)

void FUN_14dc9453e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 in_R10;
  ulonglong unaff_R15;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = in_R10;
  *(undefined8 *)(param_5 - 0x10) = in_RAX;
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined8 *)(param_5 - 0x20) = param_3;
  *(undefined **)(param_5 - 0x28) = &DAT_14dc9459d;
  return;
}



// FUNCTION 14dc945d7 FUN_14dc945d7 body=170 status=ok
// SIG undefined FUN_14dc945d7(void)

void FUN_14dc945d7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1572bed0a(0,FUN_1572bed0a,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15) ^ 0xffffffffffffffff,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dc9485f FUN_14dc9485f body=364 status=ok
// SIG undefined FUN_14dc9485f(void)

/* WARNING: Instruction at (ram,0x000156e1bcad) overlaps instruction at (ram,0x000156e1bcac)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc949c2) */
/* WARNING: Removing unreachable block (ram,0x00014dc949cd) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a11) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a0c) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a14) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a4e) */
/* WARNING: Removing unreachable block (ram,0x00014dc94a5a) */
/* WARNING: Removing unreachable block (ram,0x000156e1bc94) */
/* WARNING: Removing unreachable block (ram,0x000156e1bcad) */
/* WARNING: Removing unreachable block (ram,0x000156e1bcac) */
/* WARNING: Removing unreachable block (ram,0x00014dc949c8) */
/* WARNING: Removing unreachable block (ram,0x00014dc94907) */

void FUN_14dc9485f(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong uStack_8;
  
  uVar1 = *(ulonglong *)(&stack0x00000010 + in_RAX);
  *(undefined8 *)(&stack0x00000010 + in_RAX) = local_res8;
  *(undefined8 *)(&stack0x00000010 + in_RAX) = param_2;
  uVar2 = *(ulonglong *)(&stack0x00000018 + in_RAX);
  *(undefined8 *)((longlong)&stack0x00000008 + in_RAX) = unaff_RBX;
  *(ulonglong *)(&stack0x00000018 + in_RAX) = *(ulonglong *)(&stack0x00000018 + in_RAX) & uVar1;
  *(ulonglong *)(&stack0x00000018 + in_RAX) = ~*(ulonglong *)(&stack0x00000018 + in_RAX);
  *(ulonglong *)(&stack0x00000018 + in_RAX) =
       *(ulonglong *)(&stack0x00000018 + in_RAX) & ((-1 - (uVar2 & uVar1)) + uVar1) - ~uVar2;
  *(undefined8 *)(&stack0x00000010 + in_RAX) = *(undefined8 *)((longlong)&stack0x00000008 + in_RAX);
  *(undefined8 *)((longlong)&stack0x00000008 + in_RAX) = unaff_R15;
  *(ulonglong *)(&stack0x00000000 + in_RAX) = uVar1;
  *(undefined4 *)(&stack0x00000000 + in_RAX) = 0x5682293;
  *(undefined4 *)(&stack0x00000004 + in_RAX) = 0;
  *(undefined8 *)(&stack0x00000000 + in_RAX) = in_R11;
  *(undefined8 *)((longlong)&uStack_8 + in_RAX) = in_R11;
  *(undefined1 **)(&stack0x00000000 + in_RAX) = &LAB_16528df8b;
  return;
}



// FUNCTION 14dc949cd FUN_14dc949cd body=139 status=ok
// SIG undefined FUN_14dc949cd(void)

/* WARNING: Instruction at (ram,0x000156e1bcad) overlaps instruction at (ram,0x000156e1bcac)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc94a5a) */

void FUN_14dc949cd(longlong param_1,undefined8 param_2)

{
  char *in_RAX;
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  longlong lVar1;
  ulonglong in_stack_00000010;
  
  lVar1 = -(unaff_R15 & (~(unaff_RSI & 0xfffffffffb9c521c) - 0x463ade4) - ~unaff_RSI);
  if ((in_stack_00000010 & 1) == 0) {
    lVar1 = lVar1 + -1;
  }
  DAT_1e9f824648d48 = (char)in_RAX;
  *in_RAX = *in_RAX + DAT_1e9f824648d48;
  FUN_14da7622f(param_2,param_1 + lVar1,0);
  FUN_156e1bd1c();
  return;
}



// FUNCTION 14dc94a5a FUN_14dc94a5a body=163 status=ok
// SIG undefined FUN_14dc94a5a(void)

void FUN_14dc94a5a(undefined8 param_1)

{
  undefined8 in_stack_00000018;
  
  FUN_14e0ee28c(param_1,in_stack_00000018,FUN_14e0ee28c);
  return;
}



// FUNCTION 14dc94b7e FUN_14dc94b7e body=159 status=ok
// SIG undefined FUN_14dc94b7e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc94c20) */

undefined8 FUN_14dc94b7e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  longlong local_res10;
  
  if (local_res10 == param_2) {
    return in_RAX;
  }
  if (-1 < local_res10 + -0x11a4e5) {
    uVar1 = FUN_15b736794();
    return uVar1;
  }
  if (local_res10 == 0x11a4e5) {
    uVar1 = FUN_165e93f27(param_1,in_stack_00000008,param_3,0x14d7c1482);
    return uVar1;
  }
  if (local_res10 != 0x11a4e6) {
    uVar1 = (*(code *)&LAB_14e10c49d)(param_1,in_stack_00000008,&LAB_14e10c49d);
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc94c20 FUN_14dc94c20 body=26 status=ok
// SIG undefined FUN_14dc94c20(void)

void FUN_14dc94c20(longlong param_1)

{
  ulonglong in_R11;
  ulonglong unaff_R15;
  longlong alStackX_10 [2];
  ushort uStackX_20;
  ulonglong in_stack_00000028;
  
  uStackX_20 = (uStackX_20 | 0x100) - 0x100;
  *(longlong *)
   (*(longlong *)((longlong)alStackX_10 + ~in_R11) + unaff_R15 +
    (in_stack_00000028 & unaff_R15) * -2 + -8) = alStackX_10[1];
  alStackX_10[0] = param_1;
  (*(code *)0x1662f0e07)(param_1);
  return;
}



// FUNCTION 14dc94cad FUN_14dc94cad body=29 status=ok
// SIG undefined FUN_14dc94cad(void)

void FUN_14dc94cad(void)

{
  ulonglong in_RAX;
  undefined8 unaff_R12;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + ~in_RAX) = unaff_R12;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc94ddc FUN_14dc94ddc body=95 status=ok
// SIG undefined FUN_14dc94ddc(void)

void FUN_14dc94ddc(void)

{
  undefined8 unaff_retaddr;
  
  FUN_156a2939b(unaff_retaddr);
  return;
}



// FUNCTION 14dc94e3d FUN_14dc94e3d body=99 status=ok
// SIG undefined FUN_14dc94e3d(void)

void FUN_14dc94e3d(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc94ed6 FUN_14dc94ed6 body=497 status=ok
// SIG undefined FUN_14dc94ed6(void)

/* WARNING: Removing unreachable block (ram,0x00015ba3a3b9) */
/* WARNING: Removing unreachable block (ram,0x00015ba3a3b3) */
/* WARNING: Removing unreachable block (ram,0x00015ba3a3be) */
/* WARNING: Removing unreachable block (ram,0x000165f91be9) */
/* WARNING: Removing unreachable block (ram,0x000165f91bef) */
/* WARNING: Removing unreachable block (ram,0x000165f91bfa) */
/* WARNING: Removing unreachable block (ram,0x00014dc94f89) */
/* WARNING: Removing unreachable block (ram,0x00014dc94f8f) */
/* WARNING: Removing unreachable block (ram,0x00014dc94fde) */
/* WARNING: Removing unreachable block (ram,0x00014dc94fe1) */
/* WARNING: Removing unreachable block (ram,0x00014dc9502f) */
/* WARNING: Removing unreachable block (ram,0x00014dc9503b) */
/* WARNING: Removing unreachable block (ram,0x00014dd8d286) */
/* WARNING: Removing unreachable block (ram,0x00016519f0b4) */

undefined8 FUN_14dc94ed6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  if (-1 < (longlong)auStackX_8) {
    uVar1 = FUN_166741728((unaff_retaddr - 0xfda65e6) - ~(~unaff_retaddr | 0xfda65e5),
                          -1 - (unaff_retaddr & 0xfffffffff0259a1a),param_3);
    return uVar1;
  }
  uVar1 = FUN_160d1923f();
  return uVar1;
}



// FUNCTION 14dc9517f FUN_14dc9517f body=92 status=ok
// SIG undefined FUN_14dc9517f(void)

void FUN_14dc9517f(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14dc95228 FUN_14dc95228 body=308 status=ok
// SIG undefined FUN_14dc95228(void)

void FUN_14dc95228(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong *unaff_RBP;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 in_R10;
  code *pcVar5;
  undefined8 in_R11;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)
           (unaff_R12 + ~(~(in_RAX & 0xffffffff958808a8) & (in_RAX | 0xffffffff958808a8)));
  uVar1 = local_res20 ^ uStackX_8;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined **)(uVar1 - 0x10) = &DAT_165918ff0;
  *(undefined **)(uVar1 - 0x18) = &DAT_165918ff0;
  pcVar5 = FUN_165918f9c;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dc952d1;
  FUN_165918f9c();
  unaff_RBP[-1] = *(undefined8 *)(unaff_RDI + -0x48);
  *unaff_RBP = unaff_RBP[-1];
  uVar4 = *unaff_RBP ^ unaff_retaddr;
  *unaff_RBP = unaff_R14;
  *(undefined4 *)(unaff_RBP + -1) = 0x9bdf5786;
  *(undefined4 *)((longlong)unaff_RBP + -4) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_RDI + (unaff_RBP[-1] ^ 0x6420a8fe));
  *unaff_RBP = unaff_R13;
  unaff_RBP[-1] = uVar1 + unaff_retaddr + (uVar1 & unaff_retaddr) * -2;
  uVar3 = unaff_RBP[-1];
  *unaff_RBP = *(ulonglong *)(unaff_RDI + -0x90);
  unaff_RBP[-1] = (ulonglong)pcVar5;
  unaff_RBP[-2] = (ulonglong)pcVar5;
  unaff_RBP[-3] = uVar3;
  unaff_RBP[-4] = (ulonglong)FUN_14dc9535e;
  uVar3 = FUN_16614dfd8();
  unaff_RBP[-2] = in_R11;
  unaff_RBP[-2] =
       ~((param_2 | 0xfffffffe99eb2027) &
        (ulonglong)(FUN_16614dfd8 + (~param_2 - (~param_2 & 0x16614dfd8))));
  unaff_RBP[-2] = uVar2 ^ uStackX_8;
  unaff_RBP[-3] = *(ulonglong *)(uVar4 - 0x80);
  uVar1 = unaff_RBP[-3];
  unaff_RBP[-2] = uVar3;
  unaff_RBP[-3] = 0x14dc953e9;
  FUN_1660adf84();
  *(undefined4 *)((longlong)unaff_RBP + (unaff_retaddr - 0x10)) = 0xac91427a;
  uVar3 = unaff_RBP[-2];
  unaff_RBP[-2] = *(undefined8 *)(uVar1 - 0x78);
  unaff_RBP[-2] = *(undefined8 *)(uVar1 - 0x38);
  thunk_FUN_165a6c258(uVar3);
  return;
}



// FUNCTION 14dc9535e FUN_14dc9535e body=279 status=ok
// SIG undefined FUN_14dc9535e(void)

void FUN_14dc9535e(longlong param_1,ulonglong param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  
  FUN_1660adf84(param_1,~((~unaff_RBP | param_2) & (~param_2 + unaff_RBP) - (~param_2 & unaff_RBP)))
  ;
  *(undefined4 *)(&stack0x00000008 + param_1) = 0xac91427a;
  thunk_FUN_165a6c258(in_RAX);
  return;
}



// FUNCTION 14dc95478 FUN_14dc95478 body=159 status=ok
// SIG undefined FUN_14dc95478(void)

void FUN_14dc95478(void)

{
  return;
}



// FUNCTION 14dc956ce FUN_14dc956ce body=179 status=ok
// SIG undefined FUN_14dc956ce(void)

void FUN_14dc956ce(void)

{
  longlong unaff_RBP;
  undefined8 in_R9;
  
  *(undefined8 *)(unaff_RBP + 8) = in_R9;
  FUN_14db7997f();
  return;
}



// FUNCTION 14dc958cd FUN_14dc958cd body=30 status=ok
// SIG undefined FUN_14dc958cd(void)

void FUN_14dc958cd(void)

{
  return;
}



// FUNCTION 14dc9593a FUN_14dc9593a body=169 status=ok
// SIG undefined FUN_14dc9593a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc959c8) */

void FUN_14dc9593a(undefined8 param_1,undefined1 param_2)

{
  longlong unaff_R12;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  (*(code *)0x15ba1bfb8)
            (CONCAT71((int7)(CONCAT44(unaff_retaddr_00,unaff_retaddr) >> 8),param_2) &
             0xffffffffffff00ff,param_2,0x15ba1bfb8,*(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14dc95a7f FUN_14dc95a7f body=155 status=ok
// SIG undefined FUN_14dc95a7f(void)

void FUN_14dc95a7f(longlong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_1668ab9cb(param_1 + local_res8,0xffffffffffffffa0,0xffffffffffffff70,
                (~(~*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) + unaff_R15) -
                (-1 - ~*(ulonglong *)(unaff_R13 + -0x60)));
  return;
}



// FUNCTION 14dc95d8f FUN_14dc95d8f body=63 status=ok
// SIG undefined FUN_14dc95d8f(void)

void FUN_14dc95d8f(void)

{
  return;
}



// FUNCTION 14dc95e2b FUN_14dc95e2b body=3 status=ok
// SIG undefined FUN_14dc95e2b(void)

void FUN_14dc95e2b(void)

{
  return;
}



// FUNCTION 14dc95ecd FUN_14dc95ecd body=120 status=ok
// SIG undefined FUN_14dc95ecd(void)

void FUN_14dc95ecd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160f7fa12(param_1,param_2,param_3,FUN_160f7fa12);
  return;
}



// FUNCTION 14dc95fd7 FUN_14dc95fd7 body=208 status=ok
// SIG undefined FUN_14dc95fd7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9606a) */
/* WARNING: Removing unreachable block (ram,0x00014dc96070) */

void FUN_14dc95fd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ushort *unaff_R15;
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
  undefined8 unaff_retaddr;
  longlong local_res8;
  ulonglong uStackX_18;
  longlong *local_res20;
  
  uVar1 = *unaff_R15;
  uVar2 = *unaff_R15;
  *unaff_R15 = 0;
  *unaff_R15 = *unaff_R15 - (~(uVar1 & 0x100) + uVar2 + 1);
  *unaff_R15 = -*unaff_R15;
  bVar13 = (uStackX_18 & 0x4000) != 0;
  bVar12 = (uStackX_18 & 0x800) != 0;
  bVar11 = (uStackX_18 & 0x200) != 0;
  bVar10 = (uStackX_18 & 0x100) != 0;
  bVar9 = (uStackX_18 & 0x80) != 0;
  bVar8 = (uStackX_18 & 0x40) != 0;
  bVar7 = (uStackX_18 & 0x10) != 0;
  bVar6 = (uStackX_18 & 4) != 0;
  bVar5 = (uStackX_18 & 1) != 0;
  bVar17 = (uStackX_18 & 0x200000) != 0;
  bVar14 = (uStackX_18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(param_1,param_2);
  *local_res20 = local_res8;
  local_res20[-1] = local_res8;
  local_res20[-2] =
       (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
       (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 |
       (ulonglong)(bVar5 & 1) | (ulonglong)(bVar17 & 1) * 0x200000 |
       (ulonglong)(bVar16 & 1) * 0x100000 | (ulonglong)(bVar15 & 1) * 0x80000 |
       (ulonglong)(bVar14 & 1) * 0x40000;
  local_res20[-3] = unaff_retaddr;
  *(undefined4 *)(local_res20 + -4) = 0x505b1fd8;
  *(undefined4 *)((longlong)local_res20 + -0x1c) = 0;
  uVar4 = local_res20[-4];
  local_res20[-4] = unaff_RBP;
  local_res20[-5] = unaff_R13;
  uVar18 = local_res20[-2];
  local_res20[-2] = param_4;
  local_res20[-3] =
       (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar18 & 0x400) != 0) * 0x400 | (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
       (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  *local_res20 = 0x633d6d4 - (uVar4 ^ 0x5657032e);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc96076 FUN_14dc96076 body=553 status=ok
// SIG undefined FUN_14dc96076(void)

/* WARNING: Removing unreachable block (ram,0x000166ba0df9) */
/* WARNING: Removing unreachable block (ram,0x000166ba0e01) */
/* WARNING: Removing unreachable block (ram,0x000166ba0e07) */
/* WARNING: Removing unreachable block (ram,0x000166ba0e0c) */
/* WARNING: Removing unreachable block (ram,0x00014dc96188) */
/* WARNING: Removing unreachable block (ram,0x00014dc96200) */
/* WARNING: Removing unreachable block (ram,0x00014dc96205) */
/* WARNING: Removing unreachable block (ram,0x000162a9b980) */
/* WARNING: Removing unreachable block (ram,0x000162a9ba97) */
/* WARNING: Removing unreachable block (ram,0x000166676259) */
/* WARNING: Removing unreachable block (ram,0x00014dc9620b) */
/* WARNING: Removing unreachable block (ram,0x00014da0e642) */
/* WARNING: Removing unreachable block (ram,0x000162a9ba9d) */

undefined8 FUN_14dc96076(ulonglong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong in_R10;
  undefined8 in_stack_00000008;
  
  *param_3 = ~((*param_3 - (in_R10 | *param_3)) + in_R10);
  FUN_1629886db(param_1,param_2,in_stack_00000008);
  if ((-param_1 - *(ulonglong *)(unaff_RDI + -0x60)) +
      (*(ulonglong *)(unaff_RDI + -0x60) | param_1) * 2 != 0) {
    uVar1 = FUN_166ba0cfd();
    return uVar1;
  }
  FUN_16539c438(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  if (0xffffffffffff90e4 < unaff_RDI - 0x6f83U) {
    uVar1 = (*(code *)0x165433eeb)
                      (param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                               (~*(ulonglong *)(unaff_RDI + -0x68) | param_1) ^ 0xffffffffffffffff,
                       *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                       (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
    return uVar1;
  }
  uVar1 = FUN_16286a6a8();
  return uVar1;
}



// FUNCTION 14dc962a7 FUN_14dc962a7 body=161 status=ok
// SIG undefined FUN_14dc962a7(void)

void FUN_14dc962a7(undefined8 param_1)

{
  FUN_1572dfd9b(param_1,FUN_1572dfd9b);
  return;
}



// FUNCTION 14dc963db FUN_14dc963db body=144 status=ok
// SIG undefined FUN_14dc963db(void)

void FUN_14dc963db(void)

{
  thunk_FUN_14daa586c(0xfffffffffffffff8);
  return;
}



// FUNCTION 14dc9646c FUN_14dc9646c body=158 status=ok
// SIG undefined FUN_14dc9646c(void)

void FUN_14dc9646c(void)

{
  longlong in_R9;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 == 0x12a44d) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0x12a44e) {
    FUN_165e6476f(FUN_165e6476f);
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dc965a9 FUN_14dc965a9 body=170 status=ok
// SIG undefined FUN_14dc965a9(void)

void FUN_14dc965a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_1647d4657(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14dc9665b FUN_14dc9665b body=611 status=ok
// SIG undefined FUN_14dc9665b(void)

/* WARNING: Removing unreachable block (ram,0x000156bd87cd) */
/* WARNING: Removing unreachable block (ram,0x000156bd87d3) */
/* WARNING: Removing unreachable block (ram,0x000165463834) */
/* WARNING: Removing unreachable block (ram,0x000162527530) */
/* WARNING: Removing unreachable block (ram,0x0001625273d4) */
/* WARNING: Removing unreachable block (ram,0x000162527526) */
/* WARNING: Removing unreachable block (ram,0x00016252754b) */
/* WARNING: Removing unreachable block (ram,0x00016252758a) */
/* WARNING: Removing unreachable block (ram,0x000156bd872d) */
/* WARNING: Removing unreachable block (ram,0x000162527585) */
/* WARNING: Removing unreachable block (ram,0x00016502a16e) */
/* WARNING: Removing unreachable block (ram,0x00015781bcb4) */
/* WARNING: Removing unreachable block (ram,0x000165c6fb5d) */
/* WARNING: Removing unreachable block (ram,0x00015781bcba) */
/* WARNING: Removing unreachable block (ram,0x00014dc9676f) */
/* WARNING: Removing unreachable block (ram,0x00014dc967ed) */
/* WARNING: Removing unreachable block (ram,0x00014dc967f8) */
/* WARNING: Removing unreachable block (ram,0x00016502a04d) */
/* WARNING: Removing unreachable block (ram,0x00016502a163) */
/* WARNING: Removing unreachable block (ram,0x00016502a168) */
/* WARNING: Removing unreachable block (ram,0x000161667321) */
/* WARNING: Removing unreachable block (ram,0x000161667440) */
/* WARNING: Removing unreachable block (ram,0x00016166744b) */
/* WARNING: Removing unreachable block (ram,0x000161667446) */
/* WARNING: Removing unreachable block (ram,0x00015781ba7a) */
/* WARNING: Removing unreachable block (ram,0x00015781bcaf) */
/* WARNING: Removing unreachable block (ram,0x00014dc967fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc968b8) */
/* WARNING: Removing unreachable block (ram,0x00014dc968be) */
/* WARNING: Removing unreachable block (ram,0x000166857dd4) */
/* WARNING: Removing unreachable block (ram,0x000166857e59) */
/* WARNING: Removing unreachable block (ram,0x000166857e65) */
/* WARNING: Removing unreachable block (ram,0x000160d11c7c) */
/* WARNING: Removing unreachable block (ram,0x00014dc968c3) */
/* WARNING: Removing unreachable block (ram,0x00014dc9690c) */
/* WARNING: Removing unreachable block (ram,0x00014dc96926) */
/* WARNING: Removing unreachable block (ram,0x000165759ddc) */
/* WARNING: Removing unreachable block (ram,0x000165759de8) */
/* WARNING: Removing unreachable block (ram,0x000162527590) */
/* WARNING: Removing unreachable block (ram,0x00014dc966cd) */
/* WARNING: Removing unreachable block (ram,0x00014dc96769) */
/* WARNING: Removing unreachable block (ram,0x0001626b27b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc9665b(undefined8 param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  
  uVar1 = *param_3;
  *param_3 = *param_3 | 0xffffffffea35d4d5;
  *param_3 = ~(~(uVar1 & 0xffffffffea35d4d5) & *param_3);
  if (param_2 + unaff_retaddr + (param_2 & unaff_retaddr) * -2 == 0) {
    FUN_1625273d4();
    return;
  }
  FUN_165759d36();
  return;
}



// FUNCTION 14dc968c3 FUN_14dc968c3 body=178 status=ok
// SIG undefined FUN_14dc968c3(void)

void FUN_14dc968c3(void)

{
  return;
}



// FUNCTION 14dc96a1d FUN_14dc96a1d body=160 status=ok
// SIG undefined FUN_14dc96a1d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc96aac) */

undefined8 FUN_14dc96a1d(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong local_res20;
  
  uVar4 = ~in_RAX | *(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = ~*(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) | in_RAX;
  uVar1 = *(ulonglong *)(unaff_R14 + 0x10);
  lVar2 = *(longlong *)(unaff_R14 + 0x10);
  *(undefined8 *)(unaff_R14 + 0x10) = 0;
  *(longlong *)(unaff_R14 + 0x10) =
       *(longlong *)(unaff_R14 + 0x10) + (-2 - ~-((~uVar4 & ~uVar1 | uVar4) + lVar2 + 1));
  *(undefined8 *)(local_res20 + -8) = in_R10;
  if (local_res20 != 8) {
    *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
    *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
    *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
    *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
    *(undefined8 *)(local_res20 + -8) = 0;
    *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x6c3907e4;
    *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x6c3907e4;
    *(undefined8 *)(local_res20 + -8) = *(undefined8 *)(local_res20 + -8);
    *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x1568c6c3a;
    *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
    *(undefined8 *)(local_res20 + -0x18) = 0x1568c6bfc;
    return uStackX_10;
  }
  uVar3 = FUN_162ab287c();
  return uVar3;
}



// FUNCTION 14dc96bfb FUN_14dc96bfb body=65 status=ok
// SIG undefined FUN_14dc96bfb(void)

void FUN_14dc96bfb(void)

{
  return;
}



// FUNCTION 14dc96ca3 thunk_FUN_14dc96ca8 body=5 status=ok
// SIG undefined thunk_FUN_14dc96ca8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc96d32) */
/* WARNING: Removing unreachable block (ram,0x00014dc96d3d) */
/* WARNING: Removing unreachable block (ram,0x00014dc96d38) */

undefined8 thunk_FUN_14dc96ca8(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc96ca8 FUN_14dc96ca8 body=149 status=ok
// SIG undefined FUN_14dc96ca8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc96d32) */
/* WARNING: Removing unreachable block (ram,0x00014dc96d3d) */
/* WARNING: Removing unreachable block (ram,0x00014dc96d38) */

undefined8 FUN_14dc96ca8(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc96d3d FUN_14dc96d3d body=161 status=ok
// SIG undefined FUN_14dc96d3d(void)

void FUN_14dc96d3d(void)

{
  return;
}



// FUNCTION 14dc96de0 FUN_14dc96de0 body=124 status=ok
// SIG undefined FUN_14dc96de0(void)

void FUN_14dc96de0(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
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
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  *param_1 = -~*param_1 - (~(0xfeff - ((~(*param_1 & 0xfeff) - 0x101) - ~*param_1)) + 2);
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
  (*pcVar1)(uStackX_10,in_stack_00000008,param_3,uStackX_18);
  *param_5 = unaff_RDI;
  param_5[-1] = unaff_RDI;
  param_5[-2] = (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
                (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
                (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 |
                (ulonglong)(bVar3 & 1) * 4 | (ulonglong)(bVar2 & 1) |
                (ulonglong)(bVar14 & 1) * 0x200000 | (ulonglong)(bVar13 & 1) * 0x100000 |
                (ulonglong)(bVar12 & 1) * 0x80000 | (ulonglong)(bVar11 & 1) * 0x40000;
  FUN_16296c5c8();
  return;
}



// FUNCTION 14dc96fc1 FUN_14dc96fc1 body=169 status=ok
// SIG undefined FUN_14dc96fc1(void)

void FUN_14dc96fc1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161dd8d64((int)param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  FUN_14dc9706c();
  return;
}



// FUNCTION 14dc9706c FUN_14dc9706c body=205 status=ok
// SIG undefined FUN_14dc9706c(void)

void FUN_14dc9706c(void)

{
  return;
}



// FUNCTION 14dc971d1 FUN_14dc971d1 body=134 status=ok
// SIG undefined FUN_14dc971d1(void)

void FUN_14dc971d1(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x166acca70)(param_1,param_2);
  return;
}



// FUNCTION 14dc973a8 FUN_14dc973a8 body=139 status=ok
// SIG undefined FUN_14dc973a8(void)

void FUN_14dc973a8(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  (*(code *)0x16195e119)
            (param_1,~((unaff_R15 - (param_2 | unaff_R15)) + param_2) & (param_2 | unaff_R15));
  return;
}



// FUNCTION 14dc97533 FUN_14dc97533 body=175 status=ok
// SIG undefined FUN_14dc97533(void)

void FUN_14dc97533(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined1 **)(local_res10 + -0x10) = &LAB_166c50a8b;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_166c50a8b;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(ulonglong *)(local_res10 + -0x10) =
       *(ulonglong *)(local_res10 + -0x10) ^ *(ulonglong *)(local_res10 + -8);
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -8) = uVar1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  *(code **)(local_res10 + -0x20) = FUN_14dc975e3;
  FUN_166c50a53(param_1,param_2);
  return;
}



// FUNCTION 14dc975e3 FUN_14dc975e3 body=13 status=ok
// SIG undefined FUN_14dc975e3(void)

void FUN_14dc975e3(void)

{
  return;
}



// FUNCTION 14dc976c1 FUN_14dc976c1 body=143 status=ok
// SIG undefined FUN_14dc976c1(void)

void FUN_14dc976c1(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  FUN_162779c08(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                ~((~(uVar1 & uVar2) + uVar2) - ~uVar1));
  return;
}



// FUNCTION 14dc97750 FUN_14dc97750 body=157 status=ok
// SIG undefined FUN_14dc97750(void)

/* WARNING: Removing unreachable block (ram,0x00014dc977db) */

void FUN_14dc97750(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  (*(code *)0x16654fc95)
            (param_1,-1 - ((unaff_RDI + param_2) - (unaff_RSI & param_2) &
                          (0xffffffffffffffff - param_1 & ~param_2 | param_1)),param_3,param_4);
  return;
}



// FUNCTION 14dc977fa FUN_14dc977fa body=302 status=ok
// SIG undefined FUN_14dc977fa(void)

/* WARNING: Instruction at (ram,0x00014dc978da) overlaps instruction at (ram,0x00014dc978d9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc9788a) */
/* WARNING: Removing unreachable block (ram,0x00014dc97890) */
/* WARNING: Removing unreachable block (ram,0x00014dc978da) */
/* WARNING: Removing unreachable block (ram,0x00014dc978d9) */
/* WARNING: Removing unreachable block (ram,0x00014dc9790a) */
/* WARNING: Removing unreachable block (ram,0x00014dc97920) */
/* WARNING: Removing unreachable block (ram,0x00014dc9792b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9793e) */
/* WARNING: Removing unreachable block (ram,0x00014dc979a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc979ad) */
/* WARNING: Removing unreachable block (ram,0x00015b0a92f4) */
/* WARNING: Removing unreachable block (ram,0x00015b0a9390) */
/* WARNING: Removing unreachable block (ram,0x00015b0a93ab) */
/* WARNING: Removing unreachable block (ram,0x00015b0a93a0) */
/* WARNING: Removing unreachable block (ram,0x0001616e40ba) */
/* WARNING: Removing unreachable block (ram,0x000162a8b45c) */

undefined8 FUN_14dc977fa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc97890 FUN_14dc97890 body=160 status=ok
// SIG undefined FUN_14dc97890(void)

/* WARNING: Instruction at (ram,0x00014dc978da) overlaps instruction at (ram,0x00014dc978d9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc979ad) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000162a8b48d */
/* WARNING: Removing unreachable block (ram,0x00014dc9792b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9793e) */
/* WARNING: Removing unreachable block (ram,0x00014dc979a7) */
/* WARNING: Removing unreachable block (ram,0x00015b0a92f4) */
/* WARNING: Removing unreachable block (ram,0x00015b0a9390) */
/* WARNING: Removing unreachable block (ram,0x00015b0a93ab) */
/* WARNING: Removing unreachable block (ram,0x00015b0a93a0) */
/* WARNING: Removing unreachable block (ram,0x0001616e40ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc97890(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ulonglong unaff_RBX;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  
  piVar1 = (int *)((unaff_RBX & 0xffffffffffffff00) + 0x40);
  *piVar1 = *piVar1 + -0x9be2276;
  puVar2 = (uint *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) << 1,(char)param_2)) + -0x3d +
                   param_1);
  bVar3 = (byte)param_1 & 0x1f;
  *puVar2 = *puVar2 << bVar3 | *puVar2 >> 0x20 - bVar3;
  if (&stack0x00000000 == &DAT_ffffffffffffffe0) {
    _DAT_fffffffffffffff0 =
         (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)((in_IF & 1) != 0) * 0x200 |
         (ulonglong)((in_TF & 1) != 0) * 0x100 | 0x40 | (ulonglong)((in_AF & 1) != 0) * 0x10 | 5 |
         (ulonglong)((in_ID & 1) != 0) * 0x200000 | (ulonglong)((in_AC & 1) != 0) * 0x40000;
    _DAT_ffffffffffffffe8 = 1;
    uVar4 = thunk_FUN_162a8b462();
    return uVar4;
  }
  return in_RAX;
}



// FUNCTION 14dc97931 FUN_14dc97931 body=503 status=ok
// SIG undefined FUN_14dc97931(void)

/* WARNING: Removing unreachable block (ram,0x00015b0a93ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc979ad) */

undefined8
FUN_14dc97931(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156641617(FUN_156641617,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dc97a5c FUN_14dc97a5c body=9 status=ok
// SIG undefined FUN_14dc97a5c(void)

void FUN_14dc97a5c(void)

{
  return;
}



// FUNCTION 14dc97afd FUN_14dc97afd body=60 status=ok
// SIG undefined FUN_14dc97afd(void)

void FUN_14dc97afd(void)

{
  return;
}



// FUNCTION 14dc97c3f FUN_14dc97c3f body=183 status=ok
// SIG undefined FUN_14dc97c3f(void)

void FUN_14dc97c3f(void)

{
  return;
}



// FUNCTION 14dc97d88 FUN_14dc97d88 body=152 status=ok
// SIG undefined FUN_14dc97d88(void)

void FUN_14dc97d88(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_1567615f5(param_1,unaff_RBP + ((unaff_R15 - (param_2 | unaff_R15)) + param_2) * -2);
  return;
}



// FUNCTION 14dc97e21 FUN_14dc97e21 body=122 status=ok
// SIG undefined FUN_14dc97e21(void)

void FUN_14dc97e21(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dad1367(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc97f2c FUN_14dc97f2c body=144 status=ok
// SIG undefined FUN_14dc97f2c(void)

void FUN_14dc97f2c(void)

{
  return;
}



// FUNCTION 14dc9805a FUN_14dc9805a body=60 status=ok
// SIG undefined FUN_14dc9805a(void)

void FUN_14dc9805a(void)

{
  return;
}



// FUNCTION 14dc98106 FUN_14dc98106 body=28 status=ok
// SIG undefined FUN_14dc98106(void)

void FUN_14dc98106(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc9811d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14dc982de FUN_14dc982de body=161 status=ok
// SIG undefined FUN_14dc982de(void)

void FUN_14dc982de(undefined8 param_1)

{
  FUN_162458ae1(param_1);
  return;
}



// FUNCTION 14dc9841a FUN_14dc9841a body=165 status=ok
// SIG undefined FUN_14dc9841a(void)

void FUN_14dc9841a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint unaff_R14D;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(~unaff_R14D | ~(local_res8._4_4_ | 0xa90ddf23),(undefined4)local_res8);
  thunk_FUN_1621fc873(local_res8,param_2,param_3,thunk_FUN_1621fc873);
  return;
}



// FUNCTION 14dc984c2 FUN_14dc984c2 body=155 status=ok
// SIG undefined FUN_14dc984c2(void)

void FUN_14dc984c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1571b7239(param_1,param_2,param_3,0xfffffffff6026e9f);
  return;
}



// FUNCTION 14dc9855d FUN_14dc9855d body=119 status=ok
// SIG undefined FUN_14dc9855d(void)

ulonglong FUN_14dc9855d(void)

{
  short in_AX;
  short unaff_BX;
  undefined8 unaff_RDI;
  short *unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  undefined8 local_res10;
  ulonglong local_res20;
  longlong in_stack_00000028;
  
  *unaff_R14 = unaff_BX + in_AX + -0x76ee;
                    /* WARNING: Read-only address (ram,0x00014d7bfd2f) is written */
  LOCK();
  uRam000000014d7bfd2f = (undefined1)uStackX_8;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res10;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((local_res20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_RDI;
  *(undefined **)(in_stack_00000028 + -0x28) = &DAT_15782c4f1;
  return uStackX_8 & 0xffffffffffffff00;
}



// FUNCTION 14dc98682 FUN_14dc98682 body=318 status=ok
// SIG undefined FUN_14dc98682(void)

void FUN_14dc98682(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong unaff_R12;
  ulonglong local_res18;
  
  uVar2 = *(undefined8 *)(unaff_R12 + -0x98);
  pcVar3 = FUN_14daeb28e;
  FUN_14daeb28e(FUN_14daeb28e,param_2);
  uVar1 = local_res18 ^ 0xffffffff8c828044;
  *(undefined8 *)(uVar1 - 8) = uVar2;
  *(undefined8 *)(uVar1 - 0x10) = 0x14dc987b2;
  FUN_15b974a19(pcVar3);
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(code **)(uVar1 - 0x10) = thunk_FUN_14dc987c9;
  return;
}



// FUNCTION 14dc987c3 thunk_FUN_14dc987c9 body=5 status=ok
// SIG undefined thunk_FUN_14dc987c9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98952) */
/* WARNING: Removing unreachable block (ram,0x00014dc98958) */
/* WARNING: Removing unreachable block (ram,0x00014dc989ac) */
/* WARNING: Removing unreachable block (ram,0x000166aa75e9) */
/* WARNING: Removing unreachable block (ram,0x000160c5460a) */
/* WARNING: Removing unreachable block (ram,0x000162558d27) */
/* WARNING: Removing unreachable block (ram,0x00014dc988d2) */
/* WARNING: Removing unreachable block (ram,0x000160c54604) */
/* WARNING: Removing unreachable block (ram,0x00016197dcf2) */
/* WARNING: Removing unreachable block (ram,0x00014dc98833) */
/* WARNING: Removing unreachable block (ram,0x00014dc988c7) */
/* WARNING: Removing unreachable block (ram,0x00014dc988c2) */
/* WARNING: Removing unreachable block (ram,0x0001667b201c) */

void thunk_FUN_14dc987c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI + -0xa0) {
    FUN_15b6e5845();
    return;
  }
  FUN_156d509bc(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dc987c9 FUN_14dc987c9 body=269 status=ok
// SIG undefined FUN_14dc987c9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98952) */
/* WARNING: Removing unreachable block (ram,0x00014dc98958) */
/* WARNING: Removing unreachable block (ram,0x00014dc989ac) */
/* WARNING: Removing unreachable block (ram,0x000166aa75e9) */
/* WARNING: Removing unreachable block (ram,0x000160c5460a) */
/* WARNING: Removing unreachable block (ram,0x000162558d27) */
/* WARNING: Removing unreachable block (ram,0x00014dc988d2) */
/* WARNING: Removing unreachable block (ram,0x000160c54604) */
/* WARNING: Removing unreachable block (ram,0x00016197dcf2) */
/* WARNING: Removing unreachable block (ram,0x00014dc98833) */
/* WARNING: Removing unreachable block (ram,0x00014dc988c7) */
/* WARNING: Removing unreachable block (ram,0x00014dc988c2) */
/* WARNING: Removing unreachable block (ram,0x0001667b201c) */

void FUN_14dc987c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI + -0xa0) {
    FUN_15b6e5845();
    return;
  }
  FUN_156d509bc(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dc98833 FUN_14dc98833 body=158 status=ok
// SIG undefined FUN_14dc98833(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98952) */
/* WARNING: Removing unreachable block (ram,0x00014dc98958) */
/* WARNING: Removing unreachable block (ram,0x00014dc989ac) */
/* WARNING: Removing unreachable block (ram,0x000166aa75e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc988d2) */
/* WARNING: Removing unreachable block (ram,0x000160c54604) */
/* WARNING: Removing unreachable block (ram,0x00016197dcf2) */
/* WARNING: Removing unreachable block (ram,0x000160c5460a) */

void FUN_14dc98833(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1622469f2)
            (param_1,0x1622469f2,0,
             (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX ^ 0xffffffffffffffff) &
             (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14dc988d2 FUN_14dc988d2 body=340 status=ok
// SIG undefined FUN_14dc988d2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98952) */
/* WARNING: Removing unreachable block (ram,0x00014dc98958) */
/* WARNING: Removing unreachable block (ram,0x00014dc989ac) */
/* WARNING: Removing unreachable block (ram,0x000166aa75e9) */
/* WARNING: Removing unreachable block (ram,0x000160c5460a) */

void FUN_14dc988d2(void)

{
  longlong unaff_R12;
  
  FUN_160fc82d6(FUN_160fc82d6,*(undefined8 *)(unaff_R12 + -0x90));
  return;
}



// FUNCTION 14dc98a8c FUN_14dc98a8c body=202 status=ok
// SIG undefined FUN_14dc98a8c(void)

void FUN_14dc98a8c(void)

{
  FUN_15732cf87();
  return;
}



// FUNCTION 14dc98c30 FUN_14dc98c30 body=503 status=ok
// SIG undefined FUN_14dc98c30(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98d82) */
/* WARNING: Removing unreachable block (ram,0x00014dc98d88) */
/* WARNING: Removing unreachable block (ram,0x00014dc98d8d) */
/* WARNING: Removing unreachable block (ram,0x00014dc98cd2) */
/* WARNING: Removing unreachable block (ram,0x00014dc98cd8) */
/* WARNING: Removing unreachable block (ram,0x00014dc98d7d) */
/* WARNING: Removing unreachable block (ram,0x00015b734034) */
/* WARNING: Removing unreachable block (ram,0x00015b73403e) */
/* WARNING: Removing unreachable block (ram,0x00015b7340cc) */
/* WARNING: Removing unreachable block (ram,0x00015b7340d2) */
/* WARNING: Removing unreachable block (ram,0x000156ce45bd) */
/* WARNING: Removing unreachable block (ram,0x000156ce45f0) */
/* WARNING: Removing unreachable block (ram,0x000156ce45fd) */

undefined8 FUN_14dc98c30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b734034();
  return uVar1;
}



// FUNCTION 14dc98e33 FUN_14dc98e33 body=284 status=ok
// SIG undefined FUN_14dc98e33(void)

/* WARNING: Removing unreachable block (ram,0x00014dc98eba) */

void FUN_14dc98e33(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_165602e36(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x50) | param_1);
  return;
}



// FUNCTION 14dc98ff1 FUN_14dc98ff1 body=162 status=ok
// SIG undefined FUN_14dc98ff1(void)

void FUN_14dc98ff1(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x156d16218)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dc99096 FUN_14dc99096 body=151 status=ok
// SIG undefined FUN_14dc99096(void)

void FUN_14dc99096(undefined8 param_1)

{
  FUN_16634827e(param_1,FUN_16634827e);
  return;
}



// FUNCTION 14dc99134 FUN_14dc99134 body=416 status=ok
// SIG undefined FUN_14dc99134(void)

/* WARNING: Removing unreachable block (ram,0x00014dc99196) */
/* WARNING: Removing unreachable block (ram,0x00014dc9919c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc99134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBP + 0x10) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_RBP + 0x10));
  FUN_161187fb6(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc994e0 FUN_14dc994e0 body=232 status=ok
// SIG undefined FUN_14dc994e0(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9955d) */

void FUN_14dc994e0(undefined8 param_1)

{
  FUN_15b8855cd(param_1);
  return;
}



// FUNCTION 14dc995ca FUN_14dc995ca body=135 status=ok
// SIG undefined FUN_14dc995ca(void)

void FUN_14dc995ca(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  (*(code *)0x15b153b54)(~(param_1 & in_RAX) & unaff_RDI,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX)
  ;
  return;
}



// FUNCTION 14dc99651 FUN_14dc99651 body=129 status=ok
// SIG undefined FUN_14dc99651(void)

void FUN_14dc99651(undefined8 param_1,undefined8 param_2)

{
  FUN_157620d27(param_1,param_2);
  return;
}



// FUNCTION 14dc996d3 FUN_14dc996d3 body=158 status=ok
// SIG undefined FUN_14dc996d3(void)

void FUN_14dc996d3(void)

{
  return;
}



// FUNCTION 14dc99773 FUN_14dc99773 body=95 status=ok
// SIG undefined FUN_14dc99773(void)

void FUN_14dc99773(void)

{
  return;
}



// FUNCTION 14dc997f4 FUN_14dc997f4 body=161 status=ok
// SIG undefined FUN_14dc997f4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9992c) */
/* WARNING: Removing unreachable block (ram,0x00014dc99896) */
/* WARNING: Removing unreachable block (ram,0x00014dc99921) */
/* WARNING: Removing unreachable block (ram,0x00014dc9991c) */

void FUN_14dc997f4(void)

{
  longlong unaff_R12;
  
  if (-1 < *(longlong *)(unaff_R12 + -0x68)) {
    FUN_16602d041(FUN_16602d041);
    return;
  }
  FUN_165368ab6();
  return;
}



// FUNCTION 14dc99896 FUN_14dc99896 body=149 status=ok
// SIG undefined FUN_14dc99896(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9992c) */

void FUN_14dc99896(longlong param_1)

{
  ulonglong in_RAX;
  longlong unaff_R15;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) | in_RAX;
  *(ulonglong *)(param_1 + 0x18) = ~*(ulonglong *)(param_1 + 0x18);
  if (unaff_R15 != 0) {
    FUN_1571db7a3(in_stack_00000008,0x6ee08dad);
    return;
  }
  FUN_1571db7a3(in_stack_00000008,0x6ee08dad);
  return;
}



// FUNCTION 14dc9992c FUN_14dc9992c body=31 status=ok
// SIG undefined FUN_14dc9992c(void)

void FUN_14dc9992c(void)

{
  return;
}



// FUNCTION 14dc99d11 FUN_14dc99d11 body=132 status=ok
// SIG undefined FUN_14dc99d11(void)

void FUN_14dc99d11(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  (*(code *)0x15b3ca80b)
            (~((~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1),~(uVar1 & unaff_R15),
             ~(uVar1 & unaff_R15),*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dc99e3c FUN_14dc99e3c body=152 status=ok
// SIG undefined FUN_14dc99e3c(void)

void FUN_14dc99e3c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14df27051(param_1,FUN_14df27051,*(ulonglong *)(unaff_RDI + -0x70) & param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dc99eda FUN_14dc99eda body=75 status=ok
// SIG undefined FUN_14dc99eda(void)

void FUN_14dc99eda(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc9a206 FUN_14dc9a206 body=201 status=ok
// SIG undefined FUN_14dc9a206(void)

void FUN_14dc9a206(void)

{
  return;
}



// FUNCTION 14dc9a2d0 FUN_14dc9a2d0 body=296 status=ok
// SIG undefined FUN_14dc9a2d0(void)

void FUN_14dc9a2d0(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong in_R11;
  ulonglong unaff_R13;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(param_2 + ~(~(in_RAX & 0xffffffffe368cf5b) & (in_RAX | 0xffffffffe368cf5b))) =
       uStackX_8;
  FUN_15b79dc77(param_1,local_res10);
  piVar1 = (int *)(&stack0x00000020 + -(unaff_R13 ^ 0x779d9bf3));
  *piVar1 = param_3;
  *piVar1 = *piVar1 + -0x213db5e6;
  *(undefined8 *)piVar1 = param_1;
  piVar1[0] = 0x4dc9a3f6;
  piVar1[1] = 1;
  FUN_166a42777(*(undefined8 *)piVar1,FUN_166a42777,(~unaff_RBP | 0x15b79dc77) + unaff_RBP + 1,
                in_R11 & 0xffffffff);
  FUN_14dc9a3fc();
  return;
}



// FUNCTION 14dc9a3fc FUN_14dc9a3fc body=161 status=ok
// SIG undefined FUN_14dc9a3fc(void)

void FUN_14dc9a3fc(undefined8 param_1)

{
  (*(code *)0x1624f10fe)(param_1);
  return;
}



// FUNCTION 14dc9ab2e FUN_14dc9ab2e body=96 status=ok
// SIG undefined FUN_14dc9ab2e(void)

void FUN_14dc9ab2e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc9ab8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc9abeb FUN_14dc9abeb body=156 status=ok
// SIG undefined FUN_14dc9abeb(void)

undefined8 FUN_14dc9abeb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc9ac87 FUN_14dc9ac87 body=119 status=ok
// SIG undefined FUN_14dc9ac87(void)

void FUN_14dc9ac87(void)

{
  return;
}



// FUNCTION 14dc9aeb4 FUN_14dc9aeb4 body=166 status=ok
// SIG undefined FUN_14dc9aeb4(void)

/* WARNING: Instruction at (ram,0x00014dc9af02) overlaps instruction at (ram,0x00014dc9af01)
    */

void FUN_14dc9aeb4(void)

{
  uint *puVar1;
  undefined8 local_res20;
  
  puVar1 = (uint *)(local_res20 * 5 + 0xc);
  *puVar1 = *puVar1 | 0xe48b4824;
  return;
}



// FUNCTION 14dc9af64 FUN_14dc9af64 body=483 status=ok
// SIG undefined FUN_14dc9af64(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b09a) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b0a0) */
/* WARNING: Removing unreachable block (ram,0x00015b878ebb) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b000) */
/* WARNING: Removing unreachable block (ram,0x00015b878e4f) */
/* WARNING: Removing unreachable block (ram,0x00015b878e57) */
/* WARNING: Removing unreachable block (ram,0x00015b878e5b) */
/* WARNING: Removing unreachable block (ram,0x00015b878eb6) */
/* WARNING: Removing unreachable block (ram,0x00015b878ebe) */
/* WARNING: Removing unreachable block (ram,0x00015b878eed) */
/* WARNING: Removing unreachable block (ram,0x00015b878ef2) */
/* WARNING: Removing unreachable block (ram,0x0001651399f4) */
/* WARNING: Removing unreachable block (ram,0x000165139a60) */
/* WARNING: Removing unreachable block (ram,0x000165139a6d) */
/* WARNING: Removing unreachable block (ram,0x00015b878ef8) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b0a5) */

void FUN_14dc9af64(void)

{
  return;
}



// FUNCTION 14dc9b0a5 FUN_14dc9b0a5 body=92 status=ok
// SIG undefined FUN_14dc9b0a5(void)

void FUN_14dc9b0a5(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint unaff_R14D;
  
  FUN_166b0713f(param_3 + unaff_R14D,param_2,
                unaff_R14D - ~((~(~unaff_R14D & param_3) + param_3) - unaff_R14D),param_4);
  return;
}



// FUNCTION 14dc9b103 FUN_14dc9b103 body=114 status=ok
// SIG undefined FUN_14dc9b103(void)

void FUN_14dc9b103(int param_1,undefined8 param_2,int param_3)

{
  int in_R10D;
  
  (*(code *)0x16106e594)(param_1 + param_3,-1 - in_R10D);
  return;
}



// FUNCTION 14dc9b20d thunk_FUN_14dc9b213 body=5 status=ok
// SIG undefined thunk_FUN_14dc9b213(void)

undefined8 thunk_FUN_14dc9b213(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc9b213 FUN_14dc9b213 body=155 status=ok
// SIG undefined FUN_14dc9b213(void)

undefined8 FUN_14dc9b213(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc9b2b1 FUN_14dc9b2b1 body=178 status=ok
// SIG undefined FUN_14dc9b2b1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b2fe) */

void FUN_14dc9b2b1(void)

{
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  FUN_14dc70937(*(ulonglong *)(unaff_retaddr + -0x38) ^ unaff_RBP);
  return;
}



// FUNCTION 14dc9b3eb FUN_14dc9b3eb body=160 status=ok
// SIG undefined FUN_14dc9b3eb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b48b) */

undefined8
FUN_14dc9b3eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong unaff_RSI;
  undefined8 *puVar5;
  ushort uVar6;
  undefined8 unaff_RDI;
  ulonglong unaff_R15;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ushort uStackX_18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  longlong lVar2;
  
  puVar5 = (undefined8 *)((-~unaff_R15 - (~unaff_RSI + 2)) + (local_res20 & unaff_R15) * -2);
  uVar6 = (uStackX_18 | 0x100) - 0x100;
  bVar16 = (uVar6 & 0x4000) != 0;
  bVar15 = (uVar6 & 0x800) != 0;
  bVar14 = (uVar6 & 0x400) != 0;
  bVar13 = (uVar6 & 0x200) != 0;
  bVar12 = (uVar6 & 0x100) != 0;
  bVar11 = (uVar6 & 0x80) != 0;
  bVar10 = (uVar6 & 0x40) != 0;
  bVar9 = (uVar6 & 0x10) != 0;
  bVar8 = (uVar6 & 4) != 0;
  bVar7 = (uVar6 & 1) != 0;
  bVar20 = (uStackX_1a & 0x20) != 0;
  bVar17 = (uStackX_1a & 4) != 0;
  bVar19 = 0;
  bVar18 = 0;
  pcVar3 = (code *)swi(0x2e);
  uVar4 = (*pcVar3)(param_1);
  *puVar5 = uVar4;
  puVar5[-1] = uVar4;
  puVar5[-2] = (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)(bVar15 & 1) * 0x800 |
               (ulonglong)bVar14 * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
               (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
               (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
               (ulonglong)(bVar8 & 1) * 4 | (ulonglong)(bVar7 & 1) |
               (ulonglong)(bVar20 & 1) * 0x200000 | (ulonglong)(bVar19 & 1) * 0x100000 |
               (ulonglong)(bVar18 & 1) * 0x80000 | (ulonglong)(bVar17 & 1) * 0x40000;
  puVar5[-3] = 0xc11a15c;
  uVar1 = puVar5[-3];
  lVar2 = puVar5[-3];
  puVar5[-3] = puVar5[-3] + -0x870aca8;
  puVar5[-3] = (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)SBORROW8(lVar2,0x870aca8) * 0x800 |
               (ulonglong)bVar14 * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
               (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)((longlong)puVar5[-3] < 0) * 0x80 |
               (ulonglong)(puVar5[-3] == 0) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
               (ulonglong)((POPCOUNT(puVar5[-3] & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar1 < 0x870aca8) | (ulonglong)(bVar20 & 1) * 0x200000 |
               (ulonglong)(bVar19 & 1) * 0x100000 | (ulonglong)(bVar18 & 1) * 0x80000 |
               (ulonglong)(bVar17 & 1) * 0x40000;
  puVar5[-2] = unaff_RDI;
  *puVar5 = 0x3a0f4b4;
  puVar5[-3] = param_4;
  puVar5[-4] = param_4;
  puVar5[-3] = &DAT_15692fcd3;
  uVar4 = FUN_1618b43df();
  return uVar4;
}



// FUNCTION 14dc9b48b FUN_14dc9b48b body=141 status=ok
// SIG undefined FUN_14dc9b48b(void)

void FUN_14dc9b48b(void)

{
  return;
}



// FUNCTION 14dc9b51a FUN_14dc9b51a body=292 status=ok
// SIG undefined FUN_14dc9b51a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b5a4) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b5aa) */

void FUN_14dc9b51a(void)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_R9;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  FUN_15781e8db();
  return;
}



// FUNCTION 14dc9b5aa FUN_14dc9b5aa body=122 status=ok
// SIG undefined FUN_14dc9b5aa(void)

void FUN_14dc9b5aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156aac710(param_1,~(~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x28)) &
                         (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3,param_4);
  FUN_14dc9b626();
  return;
}



// FUNCTION 14dc9b626 FUN_14dc9b626 body=165 status=ok
// SIG undefined FUN_14dc9b626(void)

void FUN_14dc9b626(undefined8 param_1)

{
  FUN_162210b4b(param_1);
  return;
}



// FUNCTION 14dc9b75e FUN_14dc9b75e body=191 status=ok
// SIG undefined FUN_14dc9b75e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b794) */

void FUN_14dc9b75e(undefined8 param_1)

{
  FUN_1625915d8(param_1);
  FUN_161955713();
  return;
}



// FUNCTION 14dc9b8a9 FUN_14dc9b8a9 body=145 status=ok
// SIG undefined FUN_14dc9b8a9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b93b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b9d8) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b9dd) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b9e3) */
/* WARNING: Removing unreachable block (ram,0x00014dc9b9e8) */

undefined8 FUN_14dc9b8a9(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  if (&DAT_fffffffffffffff7 < &stack0x00000000) {
    uVar1 = FUN_162f47e8c(param_1 ^ unaff_R15,uVar2);
    return uVar1;
  }
  uVar1 = FUN_162f47e8c(param_1 ^ unaff_R15,uVar2);
  return uVar1;
}



// FUNCTION 14dc9b93b FUN_14dc9b93b body=197 status=ok
// SIG undefined FUN_14dc9b93b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9b9e8) */

undefined8 FUN_14dc9b93b(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(unaff_RDI + -0x40) & param_1;
  lVar1 = uVar4 * 2;
  lVar3 = ((param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x40)) + uVar4 * -2;
  if (CARRY8(param_1 - (*(ulonglong *)(unaff_RDI + -0x50) | param_1),
             *(ulonglong *)(unaff_RDI + -0x50))) {
    uVar2 = FUN_165ff757b(param_1,lVar1,lVar3);
    return uVar2;
  }
  uVar2 = FUN_165ff757b(param_1,lVar1,lVar3);
  return uVar2;
}



// FUNCTION 14dc9ba76 thunk_FUN_14dc9ba7c body=5 status=ok
// SIG undefined thunk_FUN_14dc9ba7c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc9bbae) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb01) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb07) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb2d) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb31) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bba3) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bba9) */
/* WARNING: Removing unreachable block (ram,0x0001621ec67d) */
/* WARNING: Removing unreachable block (ram,0x0001621ec70c) */
/* WARNING: Removing unreachable block (ram,0x0001621ec717) */
/* WARNING: Removing unreachable block (ram,0x0001621ec7a4) */
/* WARNING: Removing unreachable block (ram,0x0001621ec712) */
/* WARNING: Removing unreachable block (ram,0x00014de6e05f) */
/* WARNING: Removing unreachable block (ram,0x00014de6e184) */
/* WARNING: Removing unreachable block (ram,0x00014de6e18a) */
/* WARNING: Removing unreachable block (ram,0x00014de6e29f) */
/* WARNING: Removing unreachable block (ram,0x000166665f71) */
/* WARNING: Removing unreachable block (ram,0x000161b004eb) */
/* WARNING: Removing unreachable block (ram,0x0001626cf05e) */
/* WARNING: Removing unreachable block (ram,0x00015b2f0a26) */
/* WARNING: Removing unreachable block (ram,0x000161b00559) */
/* WARNING: Removing unreachable block (ram,0x000161b0055f) */
/* WARNING: Removing unreachable block (ram,0x000161b00564) */
/* WARNING: Removing unreachable block (ram,0x000161b0060d) */
/* WARNING: Removing unreachable block (ram,0x000161b00613) */
/* WARNING: Removing unreachable block (ram,0x000161b00662) */
/* WARNING: Removing unreachable block (ram,0x000161b0065d) */
/* WARNING: Removing unreachable block (ram,0x000161b006ad) */
/* WARNING: Removing unreachable block (ram,0x000161b006b3) */
/* WARNING: Removing unreachable block (ram,0x000162c3252b) */
/* WARNING: Removing unreachable block (ram,0x000162c3259e) */
/* WARNING: Removing unreachable block (ram,0x000162c325a3) */
/* WARNING: Removing unreachable block (ram,0x000162112c85) */
/* WARNING: Removing unreachable block (ram,0x000162112c91) */
/* WARNING: Removing unreachable block (ram,0x0001626cf0d6) */
/* WARNING: Removing unreachable block (ram,0x0001626cf0dc) */

void thunk_FUN_14dc9ba7c(undefined8 param_1,undefined8 param_2)

{
  FUN_166bec7a1(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc9ba7c FUN_14dc9ba7c body=303 status=ok
// SIG undefined FUN_14dc9ba7c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc9bbae) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb01) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb07) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb2d) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bb31) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bba3) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bba9) */
/* WARNING: Removing unreachable block (ram,0x0001621ec67d) */
/* WARNING: Removing unreachable block (ram,0x0001621ec70c) */
/* WARNING: Removing unreachable block (ram,0x0001621ec717) */
/* WARNING: Removing unreachable block (ram,0x0001621ec7a4) */
/* WARNING: Removing unreachable block (ram,0x0001621ec712) */
/* WARNING: Removing unreachable block (ram,0x00014de6e05f) */
/* WARNING: Removing unreachable block (ram,0x00014de6e184) */
/* WARNING: Removing unreachable block (ram,0x00014de6e18a) */
/* WARNING: Removing unreachable block (ram,0x00014de6e29f) */
/* WARNING: Removing unreachable block (ram,0x000166665f71) */
/* WARNING: Removing unreachable block (ram,0x000161b004eb) */
/* WARNING: Removing unreachable block (ram,0x0001626cf05e) */
/* WARNING: Removing unreachable block (ram,0x00015b2f0a26) */
/* WARNING: Removing unreachable block (ram,0x000161b00559) */
/* WARNING: Removing unreachable block (ram,0x000161b0055f) */
/* WARNING: Removing unreachable block (ram,0x000161b00564) */
/* WARNING: Removing unreachable block (ram,0x000161b0060d) */
/* WARNING: Removing unreachable block (ram,0x000161b00613) */
/* WARNING: Removing unreachable block (ram,0x000161b00662) */
/* WARNING: Removing unreachable block (ram,0x000161b0065d) */
/* WARNING: Removing unreachable block (ram,0x000161b006ad) */
/* WARNING: Removing unreachable block (ram,0x000161b006b3) */
/* WARNING: Removing unreachable block (ram,0x000162c3252b) */
/* WARNING: Removing unreachable block (ram,0x000162c3259e) */
/* WARNING: Removing unreachable block (ram,0x000162c325a3) */
/* WARNING: Removing unreachable block (ram,0x000162112c85) */
/* WARNING: Removing unreachable block (ram,0x000162112c91) */
/* WARNING: Removing unreachable block (ram,0x0001626cf0d6) */
/* WARNING: Removing unreachable block (ram,0x0001626cf0dc) */

void FUN_14dc9ba7c(undefined8 param_1,undefined8 param_2)

{
  FUN_166bec7a1(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc9bbae FUN_14dc9bbae body=109 status=ok
// SIG undefined FUN_14dc9bbae(void)

void FUN_14dc9bbae(undefined8 param_1,byte param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  undefined8 unaff_retaddr;
  
  *(byte *)(param_4 + in_RAX) = *(byte *)(param_4 + in_RAX) ^ param_2;
  *(byte *)(param_4 + in_RAX) = *(byte *)(param_4 + in_RAX) ^ 0xff;
  (*(code *)0x156c9fd96)(0x56,2,unaff_retaddr);
  return;
}



// FUNCTION 14dc9bca9 FUN_14dc9bca9 body=164 status=ok
// SIG undefined FUN_14dc9bca9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9bd53) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bde3) */
/* WARNING: Removing unreachable block (ram,0x00014dc9bde9) */
/* WARNING: Removing unreachable block (ram,0x000156a91113) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc9bca9(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0) {
    return;
  }
  FUN_1620dc904();
  return;
}



// FUNCTION 14dc9bd53 FUN_14dc9bd53 body=290 status=ok
// SIG undefined FUN_14dc9bd53(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9bde9) */

void FUN_14dc9bd53(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_1574e3f60(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,~param_4 & unaff_RBP);
  return;
}



// FUNCTION 14dc9be68 FUN_14dc9be68 body=10 status=ok
// SIG undefined FUN_14dc9be68(void)

void FUN_14dc9be68(void)

{
  return;
}



// FUNCTION 14dc9bfb5 FUN_14dc9bfb5 body=147 status=ok
// SIG undefined FUN_14dc9bfb5(void)

void FUN_14dc9bfb5(void)

{
  (*(code *)0x162c9a7bd)();
  return;
}



// FUNCTION 14dc9c049 FUN_14dc9c049 body=152 status=ok
// SIG undefined FUN_14dc9c049(void)

/* WARNING: Removing unreachable block (ram,0x000156c4e802) */
/* WARNING: Removing unreachable block (ram,0x000156c4e808) */
/* WARNING: Removing unreachable block (ram,0x000156c4e879) */
/* WARNING: Removing unreachable block (ram,0x00015b24dc50) */
/* WARNING: Removing unreachable block (ram,0x00014dc9c0e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc9c049(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98);
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0);
  if (-1 < (longlong)
           ((~(~uVar2 | unaff_R15) | ~uVar2 & ~unaff_R15 | uVar2) + (~uVar2 | unaff_R15) + 1)) {
    FUN_15b24dbc7();
    return;
  }
  if ((~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15)) != 0) {
    FUN_156c4e76c();
    return;
  }
  FUN_166a4a2e1(FUN_166a4a2e1,param_2,param_3);
  FUN_166d79497();
  return;
}



// FUNCTION 14dc9c0e8 FUN_14dc9c0e8 body=159 status=ok
// SIG undefined FUN_14dc9c0e8(void)

void FUN_14dc9c0e8(void)

{
  undefined1 in_AL;
  uint7 in_register_00000001;
  ushort uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong uVar2;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar1 = (local_res10 | 0x100) - 0x100;
                    /* WARNING: Read-only address (ram,0x00014d7be8f4) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7be8f4 = in_AL;
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(ulonglong *)(local_res18 + -0x20) = (ulonglong)in_register_00000001 << 8;
  *(undefined4 *)(local_res18 + -0x20) = 0x2ca72379;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x30) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x38) = unaff_RSI;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_14dc9c18b;
  *(undefined **)(local_res18 + -0x30) = &DAT_1625b6529;
  return;
}



// FUNCTION 14dc9c2af FUN_14dc9c2af body=141 status=ok
// SIG undefined FUN_14dc9c2af(void)

void FUN_14dc9c2af(undefined8 param_1,undefined8 param_2)

{
  FUN_166d214bf(param_1,param_2,0x1e42a149);
  return;
}



// FUNCTION 14dc9c9a3 FUN_14dc9c9a3 body=122 status=ok
// SIG undefined FUN_14dc9c9a3(void)

void FUN_14dc9c9a3(void)

{
  FUN_15b0c1ff9(FUN_15b0c1ff9);
  return;
}



// FUNCTION 14dc9cac4 FUN_14dc9cac4 body=110 status=ok
// SIG undefined FUN_14dc9cac4(void)

void FUN_14dc9cac4(void)

{
  return;
}



// FUNCTION 14dc9cca7 FUN_14dc9cca7 body=187 status=ok
// SIG undefined FUN_14dc9cca7(void)

void FUN_14dc9cca7(void)

{
  return;
}



// FUNCTION 14dc9ceb3 FUN_14dc9ceb3 body=751 status=ok
// SIG undefined FUN_14dc9ceb3(void)

/* WARNING: Removing unreachable block (ram,0x000165679d1f) */
/* WARNING: Removing unreachable block (ram,0x000165679d25) */
/* WARNING: Removing unreachable block (ram,0x00014dc9cf46) */
/* WARNING: Removing unreachable block (ram,0x00014dc9cf4c) */
/* WARNING: Removing unreachable block (ram,0x000164aa87fd) */
/* WARNING: Removing unreachable block (ram,0x000164aa86b1) */
/* WARNING: Removing unreachable block (ram,0x000164aa8737) */
/* WARNING: Removing unreachable block (ram,0x000165a0dde2) */
/* WARNING: Removing unreachable block (ram,0x000164aa873d) */
/* WARNING: Removing unreachable block (ram,0x000164aa8749) */
/* WARNING: Removing unreachable block (ram,0x000164aa8759) */
/* WARNING: Removing unreachable block (ram,0x000164aa8754) */
/* WARNING: Removing unreachable block (ram,0x000164aa87e3) */
/* WARNING: Removing unreachable block (ram,0x000164aa87f7) */
/* WARNING: Removing unreachable block (ram,0x000165679ca5) */
/* WARNING: Removing unreachable block (ram,0x00015753a5a3) */
/* WARNING: Removing unreachable block (ram,0x000164aa87f2) */
/* WARNING: Removing unreachable block (ram,0x00015764d607) */

void FUN_14dc9ceb3(void)

{
  FUN_164a3a854();
  FUN_15764d607();
  return;
}



// FUNCTION 14dc9cff1 FUN_14dc9cff1 body=297 status=ok
// SIG undefined FUN_14dc9cff1(void)

void FUN_14dc9cff1(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x156b171b1)(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dc9d1da FUN_14dc9d1da body=88 status=ok
// SIG undefined FUN_14dc9d1da(void)

void FUN_14dc9d1da(void)

{
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_14dc9d251;
  thunk_FUN_15b642ca5(unaff_retaddr);
  return;
}



// FUNCTION 14dc9d28e FUN_14dc9d28e body=118 status=ok
// SIG undefined FUN_14dc9d28e(void)

void FUN_14dc9d28e(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  FUN_166120c86(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14dc9d62f FUN_14dc9d62f body=835 status=ok
// SIG undefined FUN_14dc9d62f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9d885) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d88b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d900) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d905) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d90b) */
/* WARNING: Removing unreachable block (ram,0x0001624f8f69) */
/* WARNING: Removing unreachable block (ram,0x0001624f8feb) */
/* WARNING: Removing unreachable block (ram,0x0001624f8ff0) */
/* WARNING: Removing unreachable block (ram,0x0001624f8ff6) */
/* WARNING: Removing unreachable block (ram,0x0001619ef9c2) */
/* WARNING: Removing unreachable block (ram,0x0001568cfda0) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d6d2) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d74b) */
/* WARNING: Removing unreachable block (ram,0x00015b947e12) */
/* WARNING: Removing unreachable block (ram,0x00015b947ea1) */
/* WARNING: Removing unreachable block (ram,0x00015b947ea9) */
/* WARNING: Removing unreachable block (ram,0x00015b947ecd) */
/* WARNING: Removing unreachable block (ram,0x00015b947ec2) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d757) */
/* WARNING: Removing unreachable block (ram,0x00014dc9d835) */

void FUN_14dc9d62f(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res20;
  
  puVar1 = (ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *puVar1 = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(local_res20 + -0x18) = uVar2;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *puVar1 = ~*puVar1;
  uVar3 = *puVar1;
  *puVar1 = 0x1650b4b6b - *puVar1;
  if (0x1650b4b6b < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001650b4b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1650b4b45();
  return;
}



// FUNCTION 14dc9d911 FUN_14dc9d911 body=302 status=ok
// SIG undefined FUN_14dc9d911(void)

void FUN_14dc9d911(void)

{
  FUN_16618a038();
  return;
}



// FUNCTION 14dc9dcc9 FUN_14dc9dcc9 body=150 status=ok
// SIG undefined FUN_14dc9dcc9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9de07) */
/* WARNING: Removing unreachable block (ram,0x00014dc9dd55) */
/* WARNING: Removing unreachable block (ram,0x000156358ac9) */
/* WARNING: Removing unreachable block (ram,0x00014dc9de0d) */

undefined8 FUN_14dc9dcc9(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14dc9dd5f FUN_14dc9dd5f body=323 status=ok
// SIG undefined FUN_14dc9dd5f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9de07) */
/* WARNING: Removing unreachable block (ram,0x00014dc9de0d) */

void FUN_14dc9dd5f(void)

{
  return;
}



// FUNCTION 14dc9de0d FUN_14dc9de0d body=190 status=ok
// SIG undefined FUN_14dc9de0d(void)

void FUN_14dc9de0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166449a05(param_1,param_2,8,param_4);
  return;
}



// FUNCTION 14dc9df65 FUN_14dc9df65 body=7 status=ok
// SIG undefined FUN_14dc9df65(void)

void FUN_14dc9df65(void)

{
  FUN_14d7c3f9e();
  return;
}



// FUNCTION 14dc9e0c5 FUN_14dc9e0c5 body=303 status=ok
// SIG undefined FUN_14dc9e0c5(void)

ulonglong FUN_14dc9e0c5(undefined8 param_1,undefined8 param_2,short *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  short unaff_BX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R15;
  ulonglong uStackX_8;
  undefined8 uStackX_10;
  longlong local_res20;
  
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  uVar5 = (undefined1)param_1;
  *param_3 = unaff_BX + -0x100;
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = 0xfffffffe9f12425f;
  puVar1 = (ulonglong *)(local_res20 + -8);
  lVar4 = *(longlong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(ulonglong *)(local_res20 + -0x28) = 0x21bf4a6;
  *puVar1 = *(ulonglong *)(local_res20 + -0x28);
  *puVar1 = *puVar1 ^ 0x26308cdf;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x242b7879;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) - lVar4;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x20) = 0x14dc9e163;
  lVar4 = FUN_160c92c48();
  *(ulonglong *)(local_res20 + -0x20) =
       lVar4 + CONCAT71(uVar6,uVar5) + (uStackX_8 & CONCAT71(uVar6,uVar5)) * -2;
  *(undefined4 *)(local_res20 + -0x20) = 0xc039f06a;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  uVar2 = *(ulonglong *)(unaff_RDI + (*(ulonglong *)(local_res20 + -0x20) ^ 0x3fc60fea));
  *(undefined8 *)(local_res20 + -0x20) = *(undefined8 *)(unaff_RDI + -0x88);
  *(undefined8 *)(local_res20 + -0x20) = in_R10;
  uVar3 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = uVar3;
  *(undefined8 *)(local_res20 + -0x28) = uVar3;
  *(undefined1 **)(local_res20 + -0x30) = &LAB_160f27f31;
  return uVar2 ^ CONCAT71(uVar6,uVar5);
}



// FUNCTION 14dc9e323 FUN_14dc9e323 body=56 status=ok
// SIG undefined FUN_14dc9e323(void)

void FUN_14dc9e323(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d85d504(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc9e3c2 FUN_14dc9e3c2 body=182 status=ok
// SIG undefined FUN_14dc9e3c2(void)

void FUN_14dc9e3c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar2;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98);
  bVar2 = CARRY8(unaff_R15 - (uVar1 | unaff_R15),uVar1);
  if (!bVar2) {
    FUN_1620ca3e2(param_1,param_2,param_3,param_4);
    return;
  }
  if (bVar2) {
    FUN_165eb53d3();
    return;
  }
  return;
}



// FUNCTION 14dc9e479 FUN_14dc9e479 body=345 status=ok
// SIG undefined FUN_14dc9e479(void)

void FUN_14dc9e479(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  FUN_165e5d575(in_stack_00000008,unaff_RSI + param_2 * -2);
  return;
}



// FUNCTION 14dc9e735 FUN_14dc9e735 body=156 status=ok
// SIG undefined FUN_14dc9e735(void)

void FUN_14dc9e735(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = ~*(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) | param_1;
  *(ulonglong *)(unaff_RSI + 0x10) =
       -1 - ((param_1 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(unaff_RSI + 0x10));
  FUN_15afd3107(local_res10);
  return;
}



// FUNCTION 14dc9e7d7 FUN_14dc9e7d7 body=60 status=ok
// SIG undefined FUN_14dc9e7d7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dc9e80f) overlaps instruction at (ram,0x00014dc9e80e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc9e80e) */

void FUN_14dc9e7d7(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint unaff_R15D;
  int unaff_retaddr;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x14df82c61)
            (param_1,param_2 - ~((~(unaff_retaddr + 0x588f09ffU) | unaff_R15D) &
                                (~unaff_R15D | unaff_retaddr + 0x588f09ffU)),param_3);
  return;
}



// FUNCTION 14dc9e84d FUN_14dc9e84d body=28 status=ok
// SIG undefined FUN_14dc9e84d(void)

void FUN_14dc9e84d(void)

{
  return;
}



// FUNCTION 14dc9e8f6 FUN_14dc9e8f6 body=136 status=ok
// SIG undefined FUN_14dc9e8f6(void)

void FUN_14dc9e8f6(void)

{
  FUN_1564c0c26();
  return;
}



// FUNCTION 14dc9e97e FUN_14dc9e97e body=128 status=ok
// SIG undefined FUN_14dc9e97e(void)

void FUN_14dc9e97e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_162ce1384(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc9e9ff FUN_14dc9e9ff body=180 status=ok
// SIG undefined FUN_14dc9e9ff(void)

void FUN_14dc9e9ff(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | unaff_R15;
  *(ulonglong *)(unaff_R13 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_R13 + 8));
  return;
}



// FUNCTION 14dc9eab4 FUN_14dc9eab4 body=63 status=ok
// SIG undefined FUN_14dc9eab4(void)

void FUN_14dc9eab4(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc9ebe1 FUN_14dc9ebe1 body=162 status=ok
// SIG undefined FUN_14dc9ebe1(void)

void FUN_14dc9ebe1(void)

{
  (*(code *)&LAB_1667a2893)(0x1351ae73);
  return;
}



// FUNCTION 14dc9ed97 FUN_14dc9ed97 body=146 status=ok
// SIG undefined FUN_14dc9ed97(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9ee36) */

void FUN_14dc9ed97(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x88) == 0) {
    FUN_160f4409d();
    return;
  }
  FUN_160f4409d();
  return;
}



// FUNCTION 14dc9ee36 FUN_14dc9ee36 body=166 status=ok
// SIG undefined FUN_14dc9ee36(void)

void FUN_14dc9ee36(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort *unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | 0x100;
  *unaff_RSI = ~*unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  uVar1 = *(undefined8 *)(in_stack_00000028 + -0x20);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res8;
  *(undefined8 *)(in_stack_00000028 + -0x28) = uVar1;
  (*(code *)0x1623c87f4)();
  return;
}



// FUNCTION 14dc9f289 FUN_14dc9f289 body=124 status=ok
// SIG undefined FUN_14dc9f289(void)

undefined8 FUN_14dc9f289(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc9f30a FUN_14dc9f30a body=612 status=ok
// SIG undefined FUN_14dc9f30a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9f3a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f3ae) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f43f) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f444) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f44a) */
/* WARNING: Removing unreachable block (ram,0x0001627e1d9b) */
/* WARNING: Removing unreachable block (ram,0x0001627e1da7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc9f30a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x15755a85d)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc9f76e FUN_14dc9f76e body=913 status=ok
// SIG undefined FUN_14dc9f76e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da9e4e3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c5363) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f8aa) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f8b0) */
/* WARNING: Removing unreachable block (ram,0x000164a6d48b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f936) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f941) */
/* WARNING: Removing unreachable block (ram,0x00014dc9f93c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc9f76e(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_162cc8f06(param_1,param_2,local_res8);
  (*(code *)0x157854e41)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dc9f9dc FUN_14dc9f9dc body=141 status=ok
// SIG undefined FUN_14dc9f9dc(void)

void FUN_14dc9f9dc(void)

{
  (*(code *)&LAB_164f2b0da)();
  return;
}



// FUNCTION 14dc9fa6a FUN_14dc9fa6a body=121 status=ok
// SIG undefined FUN_14dc9fa6a(void)

void FUN_14dc9fa6a(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  (*(code *)0x14dd9c2bc)
            (param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + param_1,param_3,0x14dd9c2bc);
  return;
}



// FUNCTION 14dc9fc06 FUN_14dc9fc06 body=679 status=ok
// SIG undefined FUN_14dc9fc06(void)

/* WARNING: Removing unreachable block (ram,0x00015b694853) */
/* WARNING: Removing unreachable block (ram,0x00015b6948f2) */
/* WARNING: Removing unreachable block (ram,0x00014dc75b5f) */
/* WARNING: Removing unreachable block (ram,0x00016250cc1e) */
/* WARNING: Removing unreachable block (ram,0x00016250cccc) */
/* WARNING: Removing unreachable block (ram,0x00016250ccd2) */
/* WARNING: Removing unreachable block (ram,0x00016250ccd7) */
/* WARNING: Removing unreachable block (ram,0x00015b694712) */
/* WARNING: Removing unreachable block (ram,0x00015b694745) */
/* WARNING: Removing unreachable block (ram,0x00015b694749) */
/* WARNING: Removing unreachable block (ram,0x00015b6947a4) */
/* WARNING: Removing unreachable block (ram,0x00015b6947f8) */
/* WARNING: Removing unreachable block (ram,0x00015b7830b4) */
/* WARNING: Removing unreachable block (ram,0x00015b694848) */
/* WARNING: Removing unreachable block (ram,0x00015b69484e) */
/* WARNING: Removing unreachable block (ram,0x00014dc75bd6) */
/* WARNING: Removing unreachable block (ram,0x00014dc75bd9) */
/* WARNING: Removing unreachable block (ram,0x000164bfc46a) */
/* WARNING: Removing unreachable block (ram,0x000164bfc470) */
/* WARNING: Removing unreachable block (ram,0x000165be878b) */
/* WARNING: Removing unreachable block (ram,0x000165be881f) */
/* WARNING: Removing unreachable block (ram,0x000165be8824) */
/* WARNING: Removing unreachable block (ram,0x000165be882a) */
/* WARNING: Removing unreachable block (ram,0x00014da7c2c7) */
/* WARNING: Removing unreachable block (ram,0x00015b69479f) */
/* WARNING: Removing unreachable block (ram,0x00014dc9fe01) */
/* WARNING: Removing unreachable block (ram,0x00014dc9fd5b) */
/* WARNING: Removing unreachable block (ram,0x00014dc9fdf6) */
/* WARNING: Removing unreachable block (ram,0x00016250cb84) */

undefined8 FUN_14dc9fc06(byte param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R14;
  ulonglong uVar6;
  uint unaff_R15D;
  ulonglong unaff_retaddr;
  ulonglong local_res20;
  
  puVar2 = (undefined8 *)
           (0xffffffffffffffff - (local_res20 & unaff_retaddr) & (param_4 | unaff_retaddr));
  puVar2[-1] = unaff_RSI;
  puVar2[-2] = unaff_R12;
  puVar2[-3] = unaff_R12;
  puVar2[-4] = 0x14dc9fc95;
  FUN_1565a4af2();
  puVar1 = puVar2 + -2;
  *(uint *)puVar1 = (uint)*puVar1 | 0xed221fbe;
  *(uint *)puVar1 = 0xffffffff - (~((param_2 | unaff_R15D) + 0xed221fbf) & (uint)*puVar1);
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
  *(uint *)((longlong)puVar2 - 0xcU) = *(uint *)((longlong)puVar2 - 0xcU) ^ 0xf1b3c6ae;
  uVar3 = *puVar1;
  puVar2[-2] = 0x24648d485a41f28b;
  uVar6 = unaff_R14 >> (param_1 & 0x3f);
  puVar2[-2] = uVar6 >> 2 | uVar6 << 0x3e;
  *(undefined4 *)(puVar2 + -2) = *(undefined4 *)(puVar2 + -2);
  *(uint *)((longlong)puVar2 - 0xc) = (*(uint *)((longlong)puVar2 - 0xc) | 0xc0000000) + 0x40000000;
  puVar2[-2] = 0x41665a4166241400;
  puVar2[-2] = puVar2[-2] + 1;
  uVar4 = puVar2[-2];
  puVar2[-2] = 0x161db305f;
  uVar5 = FUN_14e002d22(~uVar3);
  *puVar2 = uVar4;
  puVar2[-1] = uVar4;
  *puVar2 = thunk_FUN_15b642ca5;
  return uVar5;
}



// FUNCTION 14dca007a FUN_14dca007a body=144 status=ok
// SIG undefined FUN_14dca007a(void)

/* WARNING: Removing unreachable block (ram,0x00014dca010b) */

void FUN_14dca007a(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  if (*(ulonglong *)(unaff_R12 + -0x50) + in_RAX < (*(ulonglong *)(unaff_R12 + -0x50) & in_RAX) * 2)
  {
    FUN_161df0714();
    return;
  }
  FUN_15761c061(param_1,(~param_2 | ~in_RAX) & unaff_RBP - unaff_RSI,unaff_retaddr);
  return;
}



// FUNCTION 14dca010b FUN_14dca010b body=150 status=ok
// SIG undefined FUN_14dca010b(void)

void FUN_14dca010b(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) ^ 0xffffffffffffffff;
  FUN_162242153(param_1,*(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,0,
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                (uVar1 + param_1) - (uVar1 & param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dca02e1 FUN_14dca02e1 body=156 status=ok
// SIG undefined FUN_14dca02e1(void)

void FUN_14dca02e1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_16480234d)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,(~param_3 | ~unaff_RDI) & in_RAX);
  return;
}



// FUNCTION 14dca040f FUN_14dca040f body=148 status=ok
// SIG undefined FUN_14dca040f(void)

void FUN_14dca040f(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161b213bb(param_1,~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                         (~unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dca05ea FUN_14dca05ea body=116 status=ok
// SIG undefined FUN_14dca05ea(void)

void FUN_14dca05ea(void)

{
  longlong in_R9;
  longlong in_R11;
  byte in_TF;
  undefined1 local_res8 [32];
  
  if ((in_TF & 1) == 0) {
    register0x00000020 = (BADSPACEBASE *)local_res8;
  }
  *(undefined8 *)((longlong)register0x00000020 + in_R9 + 0x10) = 0x164cc152;
  *(ulonglong *)((longlong)register0x00000020 + in_R9 + 0x10) =
       *(ulonglong *)((longlong)register0x00000020 + in_R9 + 0x10) ^ 0x164cc152;
  *(longlong *)((longlong)register0x00000020 + 0x20) =
       *(longlong *)((longlong)register0x00000020 + 0x20) - in_R11;
  *(undefined **)((longlong)register0x00000020 + 8) = &DAT_14dca0660;
  return;
}



// FUNCTION 14dca07c8 FUN_14dca07c8 body=145 status=ok
// SIG undefined FUN_14dca07c8(void)

void FUN_14dca07c8(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000020;
  
  uVar1 = *(ulonglong *)(unaff_R13 + param_2);
  lVar2 = FUN_156456c20(param_1,unaff_retaddr,param_3,param_4,
                        ~(in_stack_00000020 ^ 0xffffffffffffffff | ~unaff_R15));
  FUN_165569470(*(undefined8 *)((uVar1 ^ unaff_R15) - 0x78),FUN_165569470,lVar2 - param_3);
  return;
}



// FUNCTION 14dca085a FUN_14dca085a body=142 status=ok
// SIG undefined FUN_14dca085a(void)

void FUN_14dca085a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_R13;
  
  FUN_165569470(*(undefined8 *)(unaff_R13 + -0x78),FUN_165569470,in_RAX - param_3);
  return;
}



// FUNCTION 14dca09aa FUN_14dca09aa body=262 status=ok
// SIG undefined FUN_14dca09aa(void)

/* WARNING: Removing unreachable block (ram,0x00014dca0a1d) */

void FUN_14dca09aa(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  (*(code *)&LAB_166b6be1a)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dca0a23 FUN_14dca0a23 body=60 status=ok
// SIG undefined FUN_14dca0a23(void)

void FUN_14dca0a23(void)

{
  return;
}



// FUNCTION 14dca0aa8 FUN_14dca0aa8 body=166 status=ok
// SIG undefined FUN_14dca0aa8(void)

/* WARNING: Removing unreachable block (ram,0x00014dca0b50) */

void FUN_14dca0aa8(void)

{
  return;
}



// FUNCTION 14dca0b50 FUN_14dca0b50 body=124 status=ok
// SIG undefined FUN_14dca0b50(void)

void FUN_14dca0b50(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + param_2 + 0x4b1b4cf);
  uVar2 = uVar1 ^ 0xffffffffffffffff;
  uVar2 = ((~uVar2 | ~param_1) + param_1) - (-1 - uVar2);
  uVar1 = ~((~uVar2 | ~param_1 | uVar1) + uVar2 + 1);
  FUN_156938ed2(param_1,uVar1,uVar1);
  return;
}



// FUNCTION 14dca0c73 FUN_14dca0c73 body=144 status=ok
// SIG undefined FUN_14dca0c73(void)

void FUN_14dca0c73(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | unaff_R15;
  *(ulonglong *)(param_4 + 8) =
       ~((0xffffffffffffffff - unaff_R15 | uVar1) & *(ulonglong *)(param_4 + 8));
  FUN_15640dab8(param_1,param_2,~(local_res20 | unaff_R15) | local_res20,unaff_retaddr);
  return;
}



// FUNCTION 14dca0eac FUN_14dca0eac body=283 status=ok
// SIG undefined FUN_14dca0eac(void)

void FUN_14dca0eac(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x48);
  FUN_15b148a52(param_1,~(param_2 & in_RAX) & unaff_retaddr);
  if ((uVar1 ^ in_RAX) !=
      0xffffffffffffffff -
      (~((-0x70fc1085 - (in_R10 | 0xffffffff8f03ef7b)) + in_R10) & (in_R10 | 0xffffffff8f03ef7b))) {
    FUN_1623d7381();
    return;
  }
  return;
}



// FUNCTION 14dca1031 FUN_14dca1031 body=250 status=ok
// SIG undefined FUN_14dca1031(void)

/* WARNING: Removing unreachable block (ram,0x00014dca11f5) */
/* WARNING: Removing unreachable block (ram,0x00014dca11fb) */
/* WARNING: Removing unreachable block (ram,0x00014dca1167) */
/* WARNING: Removing unreachable block (ram,0x00014d8b83e4) */
/* WARNING: Removing unreachable block (ram,0x00014dca1157) */

void FUN_14dca1031(int param_1)

{
  longlong unaff_R12;
  
  FUN_1665bb5ad(param_1 << 0x1b,*(undefined8 *)(unaff_R12 + -0x40));
  FUN_164f823da();
  return;
}



// FUNCTION 14dca10bc FUN_14dca10bc body=169 status=ok
// SIG undefined FUN_14dca10bc(void)

/* WARNING: Removing unreachable block (ram,0x00014dca11f5) */
/* WARNING: Removing unreachable block (ram,0x00014dca11fb) */
/* WARNING: Removing unreachable block (ram,0x00014dca1167) */
/* WARNING: Removing unreachable block (ram,0x00014d8b83e4) */
/* WARNING: Removing unreachable block (ram,0x00014dca1157) */

void FUN_14dca10bc(void)

{
  FUN_164f823da();
  return;
}



// FUNCTION 14dca1167 FUN_14dca1167 body=152 status=ok
// SIG undefined FUN_14dca1167(void)

/* WARNING: Removing unreachable block (ram,0x00014dca11f5) */
/* WARNING: Removing unreachable block (ram,0x00014dca11fb) */

void FUN_14dca1167(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  FUN_166c3e9fa((unaff_RDI - in_RAX) + (~in_RAX | param_1) * -2 + -2,
                ~(~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                 (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)) ^ 0xffffffffffffffff,param_3,param_4)
  ;
  FUN_165e93f27();
  return;
}



// FUNCTION 14dca1201 FUN_14dca1201 body=182 status=ok
// SIG undefined FUN_14dca1201(void)

/* WARNING: Removing unreachable block (ram,0x0001661afa6c) */
/* WARNING: Removing unreachable block (ram,0x00014dca12b1) */
/* WARNING: Removing unreachable block (ram,0x000157005852) */
/* WARNING: Removing unreachable block (ram,0x0001570058ea) */
/* WARNING: Removing unreachable block (ram,0x0001570058f0) */
/* WARNING: Removing unreachable block (ram,0x0001661af9e4) */
/* WARNING: Removing unreachable block (ram,0x0001661afa5b) */
/* WARNING: Removing unreachable block (ram,0x0001661afa66) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dca12b7) */

void FUN_14dca1201(void)

{
  FUN_157005852();
  return;
}



// FUNCTION 14dca12b7 FUN_14dca12b7 body=153 status=ok
// SIG undefined FUN_14dca12b7(void)

void FUN_14dca12b7(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  undefined1 auStackX_20 [8];
  
  FUN_161015c53(FUN_161015c53,
                auStackX_20 + (unaff_R13 - ~((param_2 - (unaff_RBX | param_2)) + unaff_RBX)),param_3
                ,param_4);
  return;
}



// FUNCTION 14dca148c FUN_14dca148c body=24 status=ok
// SIG undefined FUN_14dca148c(void)

void FUN_14dca148c(void)

{
  return;
}



// FUNCTION 14dca15ba FUN_14dca15ba body=138 status=ok
// SIG undefined FUN_14dca15ba(void)

longlong FUN_14dca15ba(undefined8 param_1,longlong param_2)

{
  return -1 - param_2;
}



// FUNCTION 14dca1826 FUN_14dca1826 body=357 status=ok
// SIG undefined FUN_14dca1826(void)

void FUN_14dca1826(undefined8 param_1)

{
  FUN_1569116f0(param_1);
  thunk_FUN_166d526c2(thunk_FUN_166d526c2);
  return;
}



// FUNCTION 14dca198e FUN_14dca198e body=148 status=ok
// SIG undefined FUN_14dca198e(void)

void FUN_14dca198e(longlong param_1)

{
  ulonglong unaff_RBX;
  
  (*(code *)0x162c006dc)(param_1,*(ulonglong *)(param_1 + -0x78) ^ unaff_RBX);
  return;
}



// FUNCTION 14dca1a23 FUN_14dca1a23 body=136 status=ok
// SIG undefined FUN_14dca1a23(void)

void FUN_14dca1a23(void)

{
  FUN_16296a82d();
  return;
}



// FUNCTION 14dca1b34 FUN_14dca1b34 body=356 status=ok
// SIG undefined FUN_14dca1b34(void)

/* WARNING: Removing unreachable block (ram,0x00014dca1bd4) */

void FUN_14dca1b34(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x40) ^ param_1)) {
    FUN_157023b0c(1,unaff_R15 + unaff_RBP * 2,param_2,*(ulonglong *)(unaff_RDI + -0x60) & param_1);
    return;
  }
  FUN_1573aa60c();
  return;
}



// FUNCTION 14dca1c99 FUN_14dca1c99 body=198 status=ok
// SIG undefined FUN_14dca1c99(void)

void FUN_14dca1c99(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_156801e70();
  *(ulonglong *)(uVar1 & 0x7fffffffffffffff) = param_3 ^ 0xab9f8da33fe72828;
  thunk_FUN_156b249bc(param_1);
  return;
}



// FUNCTION 14dca1dbd FUN_14dca1dbd body=429 status=ok
// SIG undefined FUN_14dca1dbd(void)

/* WARNING: Removing unreachable block (ram,0x00014dca1e41) */
/* WARNING: Removing unreachable block (ram,0x00014dca1ec3) */
/* WARNING: Removing unreachable block (ram,0x00014dca1ec9) */
/* WARNING: Removing unreachable block (ram,0x00016230e184) */

undefined8 FUN_14dca1dbd(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_16273b011(param_1);
  uVar2 = *(undefined8 *)(unaff_R14 + -0x98);
  lVar1 = FUN_156421435();
  *(ulonglong *)(lVar1 + -8) = in_RAX + unaff_R15 + (in_RAX & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = in_R10;
  *(undefined **)(lVar1 + -8) = &DAT_1613422ff;
  uVar2 = thunk_FUN_15b642ca5(uVar2);
  return uVar2;
}



// FUNCTION 14dca2021 FUN_14dca2021 body=49 status=ok
// SIG undefined FUN_14dca2021(void)

void FUN_14dca2021(void)

{
  return;
}



// FUNCTION 14dca2094 FUN_14dca2094 body=118 status=ok
// SIG undefined FUN_14dca2094(void)

/* WARNING: Removing unreachable block (ram,0x00014dca2118) */
/* WARNING: Removing unreachable block (ram,0x00014dca2123) */
/* WARNING: Removing unreachable block (ram,0x000160d5f2fc) */
/* WARNING: Removing unreachable block (ram,0x00014dca211e) */
/* WARNING: Removing unreachable block (ram,0x000160d5f265) */

void FUN_14dca2094(void)

{
  FUN_15afb8986();
  FUN_1621857d7();
  return;
}



// FUNCTION 14dca2123 FUN_14dca2123 body=145 status=ok
// SIG undefined FUN_14dca2123(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dca2123(undefined8 param_1)

{
  FUN_16641b5f2(param_1);
  FUN_14dca21b5();
  return;
}



// FUNCTION 14dca21b5 FUN_14dca21b5 body=188 status=ok
// SIG undefined FUN_14dca21b5(void)

/* WARNING: Removing unreachable block (ram,0x000166b489ef) */
/* WARNING: Removing unreachable block (ram,0x000166b489fa) */
/* WARNING: Removing unreachable block (ram,0x000166b489f5) */
/* WARNING: Removing unreachable block (ram,0x0001656291aa) */
/* WARNING: Removing unreachable block (ram,0x0001656291b0) */
/* WARNING: Removing unreachable block (ram,0x00015b390cb7) */
/* WARNING: Removing unreachable block (ram,0x00015b390cbd) */
/* WARNING: Removing unreachable block (ram,0x000162c9a913) */
/* WARNING: Removing unreachable block (ram,0x000162c9a919) */
/* WARNING: Removing unreachable block (ram,0x0001617bcbda) */
/* WARNING: Removing unreachable block (ram,0x0001617bcc55) */
/* WARNING: Removing unreachable block (ram,0x00015b390b99) */
/* WARNING: Removing unreachable block (ram,0x00015b773e41) */
/* WARNING: Removing unreachable block (ram,0x0001617bcc5b) */
/* WARNING: Removing unreachable block (ram,0x00014dca22f1) */
/* WARNING: Removing unreachable block (ram,0x00014dca230c) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e82) */
/* WARNING: Removing unreachable block (ram,0x00014dca2307) */
/* WARNING: Removing unreachable block (ram,0x00014dca234c) */
/* WARNING: Removing unreachable block (ram,0x00014dca237d) */
/* WARNING: Removing unreachable block (ram,0x00014dca2394) */
/* WARNING: Removing unreachable block (ram,0x00014dca239a) */
/* WARNING: Removing unreachable block (ram,0x000166b488c7) */
/* WARNING: Removing unreachable block (ram,0x000166b488cc) */
/* WARNING: Removing unreachable block (ram,0x000166b48918) */
/* WARNING: Removing unreachable block (ram,0x000166b48913) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eaf5) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb07) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb02) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb4f) */
/* WARNING: Removing unreachable block (ram,0x0001621752d5) */
/* WARNING: Removing unreachable block (ram,0x000162175345) */
/* WARNING: Removing unreachable block (ram,0x00016217534b) */
/* WARNING: Removing unreachable block (ram,0x000164bb6df5) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e01) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e1f) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e2b) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e64) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e7c) */
/* WARNING: Removing unreachable block (ram,0x00016271bb42) */
/* WARNING: Removing unreachable block (ram,0x00016271bbb6) */
/* WARNING: Removing unreachable block (ram,0x00016271bbb1) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e69) */
/* WARNING: Removing unreachable block (ram,0x000164bb6dfc) */
/* WARNING: Removing unreachable block (ram,0x0001572176b2) */
/* WARNING: Removing unreachable block (ram,0x000162175350) */
/* WARNING: Removing unreachable block (ram,0x00014dca23a0) */

undefined8 FUN_14dca21b5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong lVar8;
  undefined8 unaff_R14;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined1 local_res8 [32];
  
  uVar16 = *(ulonglong *)(param_1 + 0x9c82);
  *(ulonglong *)(param_1 + 0x9c82) =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  uVar16 = *(ulonglong *)(param_1 + 0x9c82);
  bVar13 = (uVar16 & 0x4000) != 0;
  bVar12 = (uVar16 & 0x400) != 0;
  bVar11 = (uVar16 & 0x200) != 0;
  bVar10 = (uVar16 & 0x100) != 0;
  bVar9 = (uVar16 & 0x10) != 0;
  bVar15 = (uVar16 & 0x200000) != 0;
  bVar14 = (uVar16 & 0x40000) != 0;
  *(ulonglong *)(param_1 + 0x9c82) =
       (ulonglong)bVar13 * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar12 * 0x400 | (ulonglong)bVar11 * 0x200 | (ulonglong)bVar10 * 0x100 |
       (ulonglong)((uVar16 & 0x80) != 0) * 0x80 | (ulonglong)((uVar16 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar9 * 0x10 | (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0)
       | (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
  *(int *)(param_1 + 0x9c82) = *(int *)(param_1 + 0x9c82) << 0x19;
  *(uint *)(param_1 + 0x9c82) = *(uint *)(param_1 + 0x9c82) >> 0x1f;
  if (*(int *)(param_1 + 0x9c82) != 0) {
    uVar5 = FUN_156d29700();
    return uVar5;
  }
  *(undefined4 *)(param_1 + 0x9c82) = 0x6d036622;
  uVar6 = *(uint *)(param_1 + 0x9c82);
  *(uint *)(param_1 + 0x9c82) = *(uint *)(param_1 + 0x9c82) | 0xeb03425f;
  *(uint *)(param_1 + 0x9c82) = ~(~(uVar6 & 0xeb03425f) & *(uint *)(param_1 + 0x9c82));
  uVar6 = *(uint *)(param_1 + 0x9c82);
  *(uint *)(param_1 + 0x9c82) = *(uint *)(param_1 + 0x9c82) | 0xc169600d;
  uVar6 = ~(uVar6 & 0xc169600d) & *(uint *)(param_1 + 0x9c82);
  *(ulonglong *)(param_1 + 0x9c7a) =
       (ulonglong)bVar13 * 0x4000 | (ulonglong)bVar12 * 0x400 | (ulonglong)bVar11 * 0x200 |
       (ulonglong)bVar10 * 0x100 | (ulonglong)((int)uVar6 < 0) * 0x80 |
       (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)bVar9 * 0x10 |
       (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar15 * 0x200000 |
       (ulonglong)bVar14 * 0x40000;
  *(ulonglong *)(param_1 + 0x9c72) = (ulonglong)~uVar6;
  if ((*(ushort *)(param_1 + 0x9c7a) & 1) != 0) {
    if ((*(ulonglong *)(param_1 + 0x9c7a) & 1) == 0 &&
        (*(ulonglong *)(param_1 + 0x9c7a) & 0x40) == 0) {
      *(undefined8 *)(param_1 + 0x9c8a) = param_4;
      *(undefined1 **)(param_1 + 0x9c8a) = local_res8;
      uVar16 = *(ulonglong *)(param_1 + 0x9c8a);
      *(undefined8 *)(param_1 + 0x9c8a) = in_R10;
      uVar5 = *(undefined8 *)(param_1 + 0x9c8a);
      *(undefined8 *)(param_1 + 0x9c8a) = unaff_R14;
      puVar1 = (ulonglong *)(param_1 + 0x9c82);
      *puVar1 = *(ulonglong *)(unaff_RDI + -0x88);
      *(ulonglong *)(param_1 + 0x9c7a) = *puVar1;
      uVar4 = *(undefined8 *)(param_1 + 0x9c8a);
      uVar7 = *(ulonglong *)(param_1 + 0x9c7a) ^ uVar16;
      *(ulonglong *)(param_1 + 0x9c8a) = unaff_RBX;
      *puVar1 = unaff_RBX;
      *(undefined8 *)(param_1 + 0x9c8a) = *(undefined8 *)(unaff_RDI + -0x90);
      *puVar1 = uVar7;
      *(ulonglong *)(param_1 + 0x9c7a) = uVar7;
      *(undefined8 *)(param_1 + 0x9c72) = uVar5;
      lVar3 = *(longlong *)(unaff_RDI + -8);
      *(longlong *)(param_1 + 0x9c72) = unaff_R12 + 0x6fb5;
      *(undefined4 *)(param_1 + 0x9c6a) = 0xd643fb91;
      *(undefined4 *)(param_1 + 0x9c6e) = 0xffffffff;
      lVar8 = *(longlong *)(param_1 + 0x9c6a) + 0x29bc0477;
      *(undefined8 *)(param_1 + 0x9c7a + lVar8) = 0;
      plVar2 = (longlong *)(param_1 + 0x9c7a + lVar8);
      *plVar2 = *plVar2 - lVar3;
      plVar2 = (longlong *)(param_1 + 0x9c7a + lVar8);
      *plVar2 = -*plVar2;
      *(ulonglong *)(param_1 + 0x9c7a) = uVar16;
      *(ulonglong *)(param_1 + 0x9c72) = uVar16;
      uVar16 = *(ulonglong *)(unaff_RDI + -0x98);
      *(undefined8 *)(param_1 + 0x9c7a) = 0;
      *(ulonglong *)(param_1 + 0x9c7a) = *(ulonglong *)(param_1 + 0x9c7a) ^ uVar16;
      *(undefined8 *)(param_1 + 0x9c6a) = param_3;
      *(undefined8 *)(param_1 + 0x9c72) = uVar4;
      uVar5 = FUN_1617bcbda();
      return uVar5;
    }
    uVar5 = FUN_164b4d331();
    return uVar5;
  }
  uVar5 = FUN_164b4d331();
  return uVar5;
}



// FUNCTION 14dca2273 FUN_14dca2273 body=856 status=ok
// SIG undefined FUN_14dca2273(void)

/* WARNING: Removing unreachable block (ram,0x000166b489ef) */
/* WARNING: Removing unreachable block (ram,0x000166b489fa) */
/* WARNING: Removing unreachable block (ram,0x000166b489f5) */
/* WARNING: Removing unreachable block (ram,0x0001656291aa) */
/* WARNING: Removing unreachable block (ram,0x0001656291b0) */
/* WARNING: Removing unreachable block (ram,0x00015b390cb7) */
/* WARNING: Removing unreachable block (ram,0x00015b390cbd) */
/* WARNING: Removing unreachable block (ram,0x000162c9a913) */
/* WARNING: Removing unreachable block (ram,0x000162c9a919) */
/* WARNING: Removing unreachable block (ram,0x0001617bcbda) */
/* WARNING: Removing unreachable block (ram,0x0001617bcc55) */
/* WARNING: Removing unreachable block (ram,0x00015b390b99) */
/* WARNING: Removing unreachable block (ram,0x00015b773e41) */
/* WARNING: Removing unreachable block (ram,0x0001617bcc5b) */
/* WARNING: Removing unreachable block (ram,0x00014dca22f1) */
/* WARNING: Removing unreachable block (ram,0x00014dca230c) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e82) */
/* WARNING: Removing unreachable block (ram,0x00014dca2307) */
/* WARNING: Removing unreachable block (ram,0x00014dca234c) */
/* WARNING: Removing unreachable block (ram,0x00014dca237d) */
/* WARNING: Removing unreachable block (ram,0x00014dca2394) */
/* WARNING: Removing unreachable block (ram,0x00014dca239a) */
/* WARNING: Removing unreachable block (ram,0x000166b488c7) */
/* WARNING: Removing unreachable block (ram,0x000166b488cc) */
/* WARNING: Removing unreachable block (ram,0x000166b48918) */
/* WARNING: Removing unreachable block (ram,0x000166b48913) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eaf5) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb07) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb02) */
/* WARNING: Removing unreachable block (ram,0x00014dd9eb4f) */
/* WARNING: Removing unreachable block (ram,0x0001621752d5) */
/* WARNING: Removing unreachable block (ram,0x000162175345) */
/* WARNING: Removing unreachable block (ram,0x00016217534b) */
/* WARNING: Removing unreachable block (ram,0x000164bb6df5) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e01) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e1f) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e2b) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e64) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e7c) */
/* WARNING: Removing unreachable block (ram,0x00016271bb42) */
/* WARNING: Removing unreachable block (ram,0x00016271bbb6) */
/* WARNING: Removing unreachable block (ram,0x00016271bbb1) */
/* WARNING: Removing unreachable block (ram,0x000164bb6e69) */
/* WARNING: Removing unreachable block (ram,0x000164bb6dfc) */
/* WARNING: Removing unreachable block (ram,0x0001572176b2) */
/* WARNING: Removing unreachable block (ram,0x000162175350) */
/* WARNING: Removing unreachable block (ram,0x00014dca23a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dca2273(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1617bcbda();
  return uVar1;
}



// FUNCTION 14dca24d6 FUN_14dca24d6 body=289 status=ok
// SIG undefined FUN_14dca24d6(void)

void FUN_14dca24d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong *puVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  undefined8 in_R11;
  ushort uVar6;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  bool bVar7;
  byte in_AF;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte in_TF;
  byte in_IF;
  bool bVar11;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  uVar5 = unaff_retaddr ^ 0x9e42e69 - ~unaff_R12;
  uVar6 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          (ushort)((longlong)uVar5 < 0) * 0x80 | (ushort)(uVar5 == 0) * 0x40 |
          (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4;
  uVar6 = (0x100 - (uVar6 | 0x100)) + uVar6;
  bVar10 = (short)uVar6 < 0;
  bVar8 = uVar6 == 0;
  bVar1 = POPCOUNT(uVar6 & 0xff);
  puVar4 = (ulonglong *)register0x00000020;
  if (bVar8) {
    puVar4 = (ulonglong *)auStackX_8;
    bVar10 = (longlong)auStackX_8 < 0;
    bVar1 = POPCOUNT((ulonglong)auStackX_8 & 0xff);
  }
  bVar9 = bVar8 && &stack0x00000000 == &DAT_fffffffffffffff8;
  bVar11 = bVar8 && SCARRY8((longlong)&stack0x00000000,8);
  bVar7 = (bVar1 & 1) == 0;
  bVar8 = bVar8 && &DAT_fffffffffffffff7 < &stack0x00000000;
  puVar4[-1] = unaff_R15;
  puVar4[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar11 * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar10 * 0x80 | (ulonglong)bVar9 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)bVar7 * 4 | (ulonglong)bVar8 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar4[-3] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar11 * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar10 * 0x80 | (ulonglong)bVar9 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)bVar7 * 4 | (ulonglong)bVar8 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)(puVar4 + -3) = (int)puVar4[-3] << 0x1f;
  *(uint *)(puVar4 + -3) = (uint)puVar4[-3] >> 0x1f;
  if ((int)puVar4[-3] == 0) {
    FUN_166413266();
    return;
  }
  if ((puVar4[-2] & 1) == 0) {
    puVar4[-1] = in_R11;
    *puVar4 = *puVar4;
    uVar2 = *puVar4;
    *puVar4 = in_RAX;
    puVar4[-1] = ~((~(~unaff_RSI | in_RAX) | ~in_RAX | unaff_RSI) + (~unaff_RSI | in_RAX) + 1);
    puVar4[-2] = param_2;
    puVar4[-3] = param_2;
    puVar4[-2] = (ulonglong)&LAB_14dca25fa;
    FUN_162f3331e(param_1,puVar4[-3],param_3,uVar2);
    return;
  }
  *(undefined4 *)(puVar4 + -2) = 0x3ded71cc;
  uVar3 = puVar4[-2];
  *(uint *)(puVar4 + -2) = (uint)puVar4[-2] | 0xc70180a0;
  *(uint *)(puVar4 + -2) = ~(~((uint)uVar3 & 0xc70180a0) & (uint)puVar4[-2]);
  *(undefined4 *)((longlong)puVar4 + -0xc) = 0xb8de1d38;
  *(int *)((longlong)puVar4 + -0xc) = *(int *)((longlong)puVar4 + -0xc) + 0xc783834;
  *(int *)((longlong)puVar4 + -0xc) = *(int *)((longlong)puVar4 + -0xc) + 0x3aa9aa94;
  puVar4[-2] = uVar5;
  puVar4[-2] = unaff_RSI;
  puVar4[-1] = param_3;
  puVar4[-2] = param_3;
  puVar4[-1] = (ulonglong)&LAB_166413321;
  FUN_14d962aa1(param_1,param_2,puVar4[-2]);
  return;
}



// FUNCTION 14dca27ea FUN_14dca27ea body=138 status=ok
// SIG undefined FUN_14dca27ea(void)

void FUN_14dca27ea(void)

{
  return;
}



// FUNCTION 14dca289e thunk_FUN_14dca28a4 body=5 status=ok
// SIG undefined thunk_FUN_14dca28a4(void)

/* WARNING: Removing unreachable block (ram,0x0001614ca951) */
/* WARNING: Removing unreachable block (ram,0x0001614ca957) */
/* WARNING: Removing unreachable block (ram,0x0001614ca96e) */
/* WARNING: Removing unreachable block (ram,0x00014dca2adf) */
/* WARNING: Removing unreachable block (ram,0x00014dca2af0) */
/* WARNING: Removing unreachable block (ram,0x00014dca29c0) */
/* WARNING: Removing unreachable block (ram,0x00014dca29c6) */
/* WARNING: Removing unreachable block (ram,0x00014dca2a57) */
/* WARNING: Removing unreachable block (ram,0x0001623335f6) */
/* WARNING: Removing unreachable block (ram,0x00016233365d) */
/* WARNING: Removing unreachable block (ram,0x00014dca2a5d) */
/* WARNING: Removing unreachable block (ram,0x000164b6cb40) */
/* WARNING: Removing unreachable block (ram,0x00014dca2aeb) */
/* WARNING: Removing unreachable block (ram,0x00014dca2929) */
/* WARNING: Removing unreachable block (ram,0x00014dca292f) */
/* WARNING: Removing unreachable block (ram,0x0001614ca8b9) */
/* WARNING: Removing unreachable block (ram,0x00015b27282c) */
/* WARNING: Removing unreachable block (ram,0x0001614ca96b) */

undefined8 thunk_FUN_14dca28a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_157567e0c(param_1);
  uVar1 = FUN_164a532fb();
  return uVar1;
}



// FUNCTION 14dca28a4 FUN_14dca28a4 body=876 status=ok
// SIG undefined FUN_14dca28a4(void)

/* WARNING: Removing unreachable block (ram,0x0001614ca951) */
/* WARNING: Removing unreachable block (ram,0x0001614ca957) */
/* WARNING: Removing unreachable block (ram,0x0001614ca96e) */
/* WARNING: Removing unreachable block (ram,0x00014dca2adf) */
/* WARNING: Removing unreachable block (ram,0x00014dca2af0) */
/* WARNING: Removing unreachable block (ram,0x00014dca29c0) */
/* WARNING: Removing unreachable block (ram,0x00014dca29c6) */
/* WARNING: Removing unreachable block (ram,0x00014dca2a57) */
/* WARNING: Removing unreachable block (ram,0x0001623335f6) */
/* WARNING: Removing unreachable block (ram,0x00016233365d) */
/* WARNING: Removing unreachable block (ram,0x00014dca2a5d) */
/* WARNING: Removing unreachable block (ram,0x000164b6cb40) */
/* WARNING: Removing unreachable block (ram,0x00014dca2aeb) */
/* WARNING: Removing unreachable block (ram,0x00014dca2929) */
/* WARNING: Removing unreachable block (ram,0x00014dca292f) */
/* WARNING: Removing unreachable block (ram,0x0001614ca8b9) */
/* WARNING: Removing unreachable block (ram,0x00015b27282c) */
/* WARNING: Removing unreachable block (ram,0x0001614ca96b) */

undefined8 FUN_14dca28a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_157567e0c(param_1);
  uVar1 = FUN_164a532fb();
  return uVar1;
}



// FUNCTION 14dca2a5d FUN_14dca2a5d body=162 status=ok
// SIG undefined FUN_14dca2a5d(void)

/* WARNING: Removing unreachable block (ram,0x00014dca2adf) */
/* WARNING: Removing unreachable block (ram,0x00014dca2af0) */
/* WARNING: Removing unreachable block (ram,0x00014dca2aeb) */

undefined8 FUN_14dca2a5d(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14dca2b04 FUN_14dca2b04 body=7 status=ok
// SIG undefined FUN_14dca2b04(void)

void FUN_14dca2b04(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dca2cd6 FUN_14dca2cd6 body=175 status=ok
// SIG undefined FUN_14dca2cd6(void)

void FUN_14dca2cd6(void)

{
  FUN_157512c2b();
  return;
}



// FUNCTION 14dca2d85 FUN_14dca2d85 body=122 status=ok
// SIG undefined FUN_14dca2d85(void)

void FUN_14dca2d85(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong in_R10;
  undefined8 in_R11;
  undefined8 unaff_R15;
  ulonglong in_stack_00000008;
  undefined8 local_res10;
  undefined8 in_stack_00000020;
  
  uVar1 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | param_1;
  *(ulonglong *)(in_R10 + 0x10) =
       ~((in_stack_00000008 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(in_R10 + 0x10));
  FUN_161978845();
  *(undefined8 *)(param_5 + -8) = param_3;
  *(undefined8 *)(param_5 + -0x10) = in_stack_00000020;
  uVar3 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = local_res10;
  *(undefined8 *)(param_5 + -0x18) = in_R11;
  uVar2 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined1 **)(param_5 + -0x20) = &LAB_162a92aaf;
  FUN_162a92a14(uVar3,uVar2,FUN_162a92a14);
  return;
}



// FUNCTION 14dca2dff FUN_14dca2dff body=138 status=ok
// SIG undefined FUN_14dca2dff(void)

void FUN_14dca2dff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_162a92aaf;
  FUN_162a92a14(uVar2,uVar1,FUN_162a92a14);
  return;
}



// FUNCTION 14dca2e91 FUN_14dca2e91 body=267 status=ok
// SIG undefined FUN_14dca2e91(void)

/* WARNING: Removing unreachable block (ram,0x00014dca2f8c) */
/* WARNING: Removing unreachable block (ram,0x00014dca2f22) */

undefined8 FUN_14dca2e91(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x78)) {
    uVar1 = FUN_161d3ecd2();
    return uVar1;
  }
  uVar1 = (*(code *)&LAB_161d01647)();
  return uVar1;
}



// FUNCTION 14dca2f9e thunk_FUN_14dca2fa4 body=5 status=ok
// SIG undefined thunk_FUN_14dca2fa4(void)

undefined8 thunk_FUN_14dca2fa4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dca2fa4 FUN_14dca2fa4 body=63 status=ok
// SIG undefined FUN_14dca2fa4(void)

undefined8 FUN_14dca2fa4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dca3026 FUN_14dca3026 body=155 status=ok
// SIG undefined FUN_14dca3026(void)

/* WARNING: Removing unreachable block (ram,0x00014dca30a9) */
/* WARNING: Removing unreachable block (ram,0x00014dca30b4) */
/* WARNING: Removing unreachable block (ram,0x000162933be0) */
/* WARNING: Removing unreachable block (ram,0x000162933bd0) */
/* WARNING: Removing unreachable block (ram,0x00014dca30af) */
/* WARNING: Removing unreachable block (ram,0x00015b3e1d9e) */
/* WARNING: Removing unreachable block (ram,0x000160e13ed6) */
/* WARNING: Removing unreachable block (ram,0x000160e13f1e) */
/* WARNING: Removing unreachable block (ram,0x000160e13f24) */
/* WARNING: Removing unreachable block (ram,0x000160e13f19) */
/* WARNING: Removing unreachable block (ram,0x000165d6eff2) */
/* WARNING: Removing unreachable block (ram,0x00015b3e1db5) */
/* WARNING: Removing unreachable block (ram,0x00014d8695c6) */
/* WARNING: Removing unreachable block (ram,0x000160e13f29) */
/* WARNING: Removing unreachable block (ram,0x00014d8695b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dca3026(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  if (uVar1 == 0) {
    uVar2 = FUN_162933b3e();
    return uVar2;
  }
  uVar2 = FUN_1621b54a8(((unaff_RBP - (uVar1 | unaff_RBP)) + uVar1 ^ 0xffffffffffffffff) &
                        (~uVar1 & ~unaff_RBP ^ 0xffffffffffffffff),
                        *(longlong *)(unaff_RSI + -8) + unaff_RBP,
                        *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP);
  return uVar2;
}



// FUNCTION 14dca31b4 FUN_14dca31b4 body=289 status=ok
// SIG undefined FUN_14dca31b4(void)

void FUN_14dca31b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  (*(code *)0x160d6b305)(param_1,&LAB_164918e54,param_3,0x160d6b305);
  return;
}



// FUNCTION 14dca32d0 FUN_14dca32d0 body=59 status=ok
// SIG undefined FUN_14dca32d0(void)

ulonglong FUN_14dca32d0(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return ~((0xffffffffffffffff - unaff_RBX | *(ulonglong *)(param_1 + -0x60)) &
          (~*(ulonglong *)(param_1 + -0x60) | unaff_RBX));
}



// FUNCTION 14dca34f8 FUN_14dca34f8 body=414 status=ok
// SIG undefined FUN_14dca34f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dca359c) */
/* WARNING: Removing unreachable block (ram,0x00014dca35a2) */
/* WARNING: Removing unreachable block (ram,0x000162626621) */

void FUN_14dca34f8(void)

{
  FUN_162626621();
  return;
}



// FUNCTION 14dca369c FUN_14dca369c body=202 status=ok
// SIG undefined FUN_14dca369c(void)

void FUN_14dca369c(void)

{
  return;
}



// FUNCTION 14dca3766 FUN_14dca3766 body=167 status=ok
// SIG undefined FUN_14dca3766(void)

/* WARNING: Removing unreachable block (ram,0x00014dca3802) */
/* WARNING: Removing unreachable block (ram,0x00014dca380d) */
/* WARNING: Removing unreachable block (ram,0x00014dca3808) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dca3766(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  longlong local_res8;
  undefined8 local_res10;
  
  FUN_1617a8219(param_1,param_2,param_3,local_res10);
  uVar2 = ~*(ulonglong *)(local_res8 + -0x78) | unaff_R15;
  uVar1 = thunk_FUN_1569bbca4(~((~uVar2 | unaff_R15 ^ 0xffffffffffffffff |
                                          *(ulonglong *)(local_res8 + -0x78)) + uVar2 + 1),
                              *(undefined8 *)(local_res8 + -0x28));
  return uVar1;
}



// FUNCTION 14dca380d FUN_14dca380d body=59 status=ok
// SIG undefined FUN_14dca380d(void)

undefined8 FUN_14dca380d(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dca3a18 FUN_14dca3a18 body=162 status=ok
// SIG undefined FUN_14dca3a18(void)

void FUN_14dca3a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b6e61bb(FUN_15b6e61bb,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dca3aba FUN_14dca3aba body=263 status=ok
// SIG undefined FUN_14dca3aba(void)

void FUN_14dca3aba(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  uVar2 = ~(~(in_RAX & 0xfffffffff982fd68) & (in_RAX | 0xfffffffff982fd68));
  *(ulonglong *)(&stack0xfffffffff3967c8b + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffff3967c8b + uVar2);
  uVar1 = *(ulonglong *)(&stack0xfffffffff3967c8b + uVar2);
  *(longlong *)(&stack0xfffffffff3967c8b + uVar2) = -*(longlong *)(&stack0xfffffffff3967c8b + uVar2)
  ;
  *(longlong *)(&stack0xfffffffff3967c8b + uVar2) =
       *(longlong *)(&stack0xfffffffff3967c8b + uVar2) + -1;
  *(ulonglong *)(&stack0xfffffffff3967c8b + uVar2) =
       (~(uVar1 & param_1) + param_1) - *(longlong *)(&stack0xfffffffff3967c8b + uVar2);
  FUN_1661d2623();
  return;
}



// FUNCTION 14dca3c9c FUN_14dca3c9c body=5 status=ok
// SIG undefined FUN_14dca3c9c(void)

void FUN_14dca3c9c(void)

{
  return;
}



// FUNCTION 14dca3dbf FUN_14dca3dbf body=131 status=ok
// SIG undefined FUN_14dca3dbf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014e1df732) overlaps instruction at (ram,0x00014e1df731)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9227ba) */
/* WARNING: Removing unreachable block (ram,0x00014d9227c0) */
/* WARNING: Removing unreachable block (ram,0x00014d9226a0) */
/* WARNING: Removing unreachable block (ram,0x00014d9226a6) */
/* WARNING: Removing unreachable block (ram,0x00014d922728) */
/* WARNING: Removing unreachable block (ram,0x00014d92272e) */
/* WARNING: Removing unreachable block (ram,0x000162740ffc) */
/* WARNING: Removing unreachable block (ram,0x000162741024) */
/* WARNING: Removing unreachable block (ram,0x00016274103e) */
/* WARNING: Removing unreachable block (ram,0x00014d92278b) */
/* WARNING: Removing unreachable block (ram,0x000162740fb7) */
/* WARNING: Removing unreachable block (ram,0x000156bd9d50) */
/* WARNING: Removing unreachable block (ram,0x000156bd9de9) */
/* WARNING: Removing unreachable block (ram,0x000156bd9df4) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e0a) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e0d) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e42) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e4a) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e50) */
/* WARNING: Removing unreachable block (ram,0x000156bd9e55) */
/* WARNING: Removing unreachable block (ram,0x000156bd9ea9) */
/* WARNING: Removing unreachable block (ram,0x000156bd9ead) */
/* WARNING: Removing unreachable block (ram,0x00016145258a) */
/* WARNING: Removing unreachable block (ram,0x0001619b44fa) */
/* WARNING: Removing unreachable block (ram,0x0001619b4511) */
/* WARNING: Removing unreachable block (ram,0x0001619b4583) */
/* WARNING: Removing unreachable block (ram,0x0001668be21c) */
/* WARNING: Removing unreachable block (ram,0x0001619b4589) */
/* WARNING: Removing unreachable block (ram,0x0001619b45ff) */
/* WARNING: Removing unreachable block (ram,0x0001619b460a) */
/* WARNING: Removing unreachable block (ram,0x0001619b4610) */
/* WARNING: Removing unreachable block (ram,0x00014e1df637) */
/* WARNING: Removing unreachable block (ram,0x000165c6af3e) */
/* WARNING: Removing unreachable block (ram,0x00014e1df6c9) */
/* WARNING: Removing unreachable block (ram,0x00014e1df6cf) */
/* WARNING: Removing unreachable block (ram,0x00014e1df6d4) */
/* WARNING: Removing unreachable block (ram,0x00014e1df731) */
/* WARNING: Removing unreachable block (ram,0x00014e1df732) */
/* WARNING: Removing unreachable block (ram,0x00014e1df738) */
/* WARNING: Removing unreachable block (ram,0x00014e1df73c) */
/* WARNING: Removing unreachable block (ram,0x00014e1df774) */
/* WARNING: Removing unreachable block (ram,0x00014e1df786) */
/* WARNING: Removing unreachable block (ram,0x00014e1df75d) */
/* WARNING: Removing unreachable block (ram,0x0001668a55ab) */
/* WARNING: Removing unreachable block (ram,0x0001668a5606) */
/* WARNING: Removing unreachable block (ram,0x0001668a5607) */
/* WARNING: Removing unreachable block (ram,0x00014e1df7a9) */
/* WARNING: Removing unreachable block (ram,0x00014e1df7b2) */
/* WARNING: Removing unreachable block (ram,0x000156bd9def) */
/* WARNING: Removing unreachable block (ram,0x0001653e35c4) */
/* WARNING: Removing unreachable block (ram,0x0001653e35ca) */
/* WARNING: Removing unreachable block (ram,0x0001653e3656) */
/* WARNING: Removing unreachable block (ram,0x0001653e3661) */
/* WARNING: Removing unreachable block (ram,0x0001653e3667) */
/* WARNING: Removing unreachable block (ram,0x0001653e379c) */
/* WARNING: Removing unreachable block (ram,0x00014d922621) */
/* WARNING: Removing unreachable block (ram,0x00015664ea8c) */
/* WARNING: Removing unreachable block (ram,0x0001653e37a1) */
/* WARNING: Removing unreachable block (ram,0x0001653e37ac) */
/* WARNING: Removing unreachable block (ram,0x0001653e37f1) */
/* WARNING: Removing unreachable block (ram,0x0001653e37f3) */
/* WARNING: Removing unreachable block (ram,0x0001653e37a7) */
/* WARNING: Removing unreachable block (ram,0x0001572466f0) */
/* WARNING: Removing unreachable block (ram,0x000157246795) */
/* WARNING: Removing unreachable block (ram,0x0001572467a1) */
/* WARNING: Removing unreachable block (ram,0x00016174e735) */
/* WARNING: Removing unreachable block (ram,0x00014dca3e44) */

undefined8 FUN_14dca3dbf(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1572466f0();
  return uVar1;
}



// FUNCTION 14dca3e44 FUN_14dca3e44 body=114 status=ok
// SIG undefined FUN_14dca3e44(void)

void FUN_14dca3e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R10;
  undefined8 local_res8;
  longlong local_res18;
  
  *(longlong *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(longlong *)(local_res18 + -0x10) =
       *(longlong *)(local_res18 + -0x10) - *(longlong *)(local_res18 + -8);
  *(longlong *)(local_res18 + -0x10) = -*(longlong *)(local_res18 + -0x10);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined1 **)(local_res18 + -8) = &LAB_14dca3ec9;
  thunk_FUN_15b642ca5(param_1,local_res8,uVar1);
  return;
}



// FUNCTION 14dca4146 FUN_14dca4146 body=157 status=ok
// SIG undefined FUN_14dca4146(void)

void FUN_14dca4146(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_16532d33c(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dca41e3 FUN_14dca41e3 body=161 status=ok
// SIG undefined FUN_14dca41e3(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dca41e3(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x28);
}



// FUNCTION 14dca4312 FUN_14dca4312 body=126 status=ok
// SIG undefined FUN_14dca4312(void)

/* WARNING: Instruction at (ram,0x00014dca4343) overlaps instruction at (ram,0x00014dca4342)
    */
/* WARNING: Removing unreachable block (ram,0x00014dca4342) */

void FUN_14dca4312(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint in_R11D;
  
  FUN_165697863(param_1,param_2,~param_3,(param_3 + (in_R11D >> 0x11)) - (param_3 & in_R11D >> 0x11)
               );
  return;
}



// FUNCTION 14dca4392 FUN_14dca4392 body=138 status=ok
// SIG undefined FUN_14dca4392(void)

void FUN_14dca4392(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  
  FUN_156e7247e(~unaff_R15,param_2,param_3);
  return;
}



// FUNCTION 14dca441e FUN_14dca441e body=86 status=ok
// SIG undefined FUN_14dca441e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dca441e(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  
  XACQUIRE();
  LOCK();
  puVar1 = (undefined4 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
  uVar3 = *puVar1;
  *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  UNLOCK();
  pcVar2 = (char *)(unaff_RSI + param_2 * 4);
  *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dca4554 FUN_14dca4554 body=303 status=ok
// SIG undefined FUN_14dca4554(void)

/* WARNING: Removing unreachable block (ram,0x000156f7a4a3) */
/* WARNING: Removing unreachable block (ram,0x000156f7a4a9) */
/* WARNING: Removing unreachable block (ram,0x00014dca45d7) */
/* WARNING: Removing unreachable block (ram,0x00014dca45dd) */
/* WARNING: Removing unreachable block (ram,0x00014db65ca5) */
/* WARNING: Removing unreachable block (ram,0x00014db65cab) */
/* WARNING: Removing unreachable block (ram,0x00014db65cb0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00015683f1e2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dca4554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161cfdc26(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3,
                param_4);
  return;
}



// FUNCTION 14dca45e5 FUN_14dca45e5 body=42 status=ok
// SIG undefined FUN_14dca45e5(void)

void FUN_14dca45e5(void)

{
  return;
}



// FUNCTION 14dca484f FUN_14dca484f body=112 status=ok
// SIG undefined FUN_14dca484f(void)

void FUN_14dca484f(void)

{
  return;
}



// FUNCTION 14dca48f7 FUN_14dca48f7 body=443 status=ok
// SIG undefined FUN_14dca48f7(void)

/* WARNING: Removing unreachable block (ram,0x00014dca4999) */
/* WARNING: Removing unreachable block (ram,0x00014dca4a1a) */
/* WARNING: Removing unreachable block (ram,0x00014dca4a20) */
/* WARNING: Removing unreachable block (ram,0x000156cfb21b) */
/* WARNING: Removing unreachable block (ram,0x000156cfb22c) */
/* WARNING: Removing unreachable block (ram,0x00014dca498e) */

void FUN_14dca48f7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined1 in_AL;
  undefined8 in_R10;
  undefined8 unaff_R15;
  ulonglong uVar2;
  undefined8 in_stack_00000008;
  undefined8 uStackX_18;
  undefined2 uStackX_20;
  undefined6 uStackX_22;
  
  uVar1 = ~((~(~uStackX_20 & 0x100) + 0x100) - uStackX_20);
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a58b2) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a58b2) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a58b2 = in_AL;
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(ulonglong *)(param_5 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -8) = 0x439cce2;
  (*(code *)0x15640f12a)(param_1,param_2,uStackX_18,in_stack_00000008);
  return;
}



// FUNCTION 14dca4a20 FUN_14dca4a20 body=158 status=ok
// SIG undefined FUN_14dca4a20(void)

void FUN_14dca4a20(undefined8 param_1)

{
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  thunk_FUN_164f632e8(param_1,*(longlong *)(unaff_R13 + -0xa0) + unaff_R15,in_stack_00000010,
                      local_res18);
  return;
}



// FUNCTION 14dca4b3b FUN_14dca4b3b body=154 status=ok
// SIG undefined FUN_14dca4b3b(void)

/* WARNING: Removing unreachable block (ram,0x00014dca4b4e) */

void FUN_14dca4b3b(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  FUN_1655a66c6(*(ulonglong *)(unaff_RSI + -0x60) + unaff_R14 +
                (*(ulonglong *)(unaff_RSI + -0x60) & unaff_R14) * -2,FUN_1655a66c6,
                param_3 ^ unaff_R14);
  return;
}



// FUNCTION 14dca4c67 FUN_14dca4c67 body=10 status=ok
// SIG undefined FUN_14dca4c67(void)

void FUN_14dca4c67(void)

{
  return;
}



// FUNCTION 14dca4e15 FUN_14dca4e15 body=293 status=ok
// SIG undefined FUN_14dca4e15(void)

/* WARNING: Removing unreachable block (ram,0x0001629d6edc) */
/* WARNING: Removing unreachable block (ram,0x00014dca4eb7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dca4e15(undefined8 param_1)

{
  uint uVar1;
  longlong in_stack_00000008;
  
  uVar1 = ~(uint)param_1;
  FUN_16653c2de();
  *(undefined4 *)(&stack0x64956642 + in_stack_00000008) = 0;
  *(uint *)(&stack0x64956642 + in_stack_00000008) =
       *(uint *)(&stack0x64956642 + in_stack_00000008) ^ uVar1;
  FUN_165725b4a(param_1);
  return;
}



// FUNCTION 14dca5080 FUN_14dca5080 body=163 status=ok
// SIG undefined FUN_14dca5080(void)

void FUN_14dca5080(void)

{
  FUN_15667c676();
  return;
}



// FUNCTION 14dca543f FUN_14dca543f body=574 status=ok
// SIG undefined FUN_14dca543f(void)

void FUN_14dca543f(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_16576e1ae(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70));
  FUN_16673e353();
  FUN_1611ffb4a();
  return;
}



// FUNCTION 14dca5733 FUN_14dca5733 body=295 status=ok
// SIG undefined FUN_14dca5733(void)

/* WARNING: Removing unreachable block (ram,0x00014dca5862) */
/* WARNING: Removing unreachable block (ram,0x00014dca58e5) */
/* WARNING: Removing unreachable block (ram,0x00014dda76a6) */
/* WARNING: Removing unreachable block (ram,0x00014dda76ef) */
/* WARNING: Removing unreachable block (ram,0x00014dda76fc) */
/* WARNING: Removing unreachable block (ram,0x00015b04edcf) */
/* WARNING: Removing unreachable block (ram,0x00014dca58eb) */
/* WARNING: Removing unreachable block (ram,0x00014dca5849) */

undefined8 FUN_14dca5733(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = (~(uVar2 & unaff_R15) + unaff_R15) - *(longlong *)(unaff_RSI + 8);
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  *(undefined8 *)(unaff_RSI + 8) = 0;
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) =
       (~((~unaff_R15 | uVar1) & uVar2) - 1) - *(longlong *)(unaff_RSI + 8);
  FUN_156cd6b87();
  uVar3 = FUN_14ddab29b(param_1);
  return uVar3;
}



// FUNCTION 14dca5862 FUN_14dca5862 body=298 status=ok
// SIG undefined FUN_14dca5862(void)

/* WARNING: Removing unreachable block (ram,0x00014dca58eb) */

undefined8 FUN_14dca5862(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = ~(param_2 & unaff_RDI) & (param_2 | unaff_RDI) ^ *(ulonglong *)(unaff_R12 + -0x78);
  uVar1 = thunk_FUN_156f94c36(param_1,uVar2 + in_RAX + (uVar2 & in_RAX) * -2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dca58ff FUN_14dca58ff body=381 status=ok
// SIG undefined FUN_14dca58ff(void)

/* WARNING: Removing unreachable block (ram,0x00014dca5985) */

void FUN_14dca58ff(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong lVar2;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong local_res20;
  
  lVar2 = local_res20 + param_1 + (local_res20 & param_1) * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x10) = param_4;
  *(undefined8 *)(lVar2 + -0x18) = param_4;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  uVar1 = *(undefined8 *)(lVar2 + -0x18);
  *(undefined8 *)(lVar2 + -8) = 0;
  *(longlong *)(lVar2 + -8) = *(longlong *)(lVar2 + -8) + -0x1618dd92f;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RBP;
  FUN_1618dd8e4(in_R11,param_2,param_3,uVar1);
  return;
}



// FUNCTION 14dca5a12 FUN_14dca5a12 body=259 status=ok
// SIG undefined FUN_14dca5a12(void)

/* WARNING: Removing unreachable block (ram,0x00014dca5a97) */

void FUN_14dca5a12(undefined8 param_1,byte param_2,ulonglong param_3)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  byte unaff_BPL;
  ulonglong unaff_R15;
  
  lVar1 = in_RAX + unaff_RBX + unaff_R15 + (param_3 & unaff_R15) * -2;
  FUN_165053a61(CONCAT71((int7)((ulonglong)lVar1 >> 8),param_2 | unaff_BPL),param_2 & unaff_BPL,
                lVar1);
  return;
}



// FUNCTION 14dca5b28 FUN_14dca5b28 body=52 status=ok
// SIG undefined FUN_14dca5b28(void)

void FUN_14dca5b28(void)

{
  return;
}



// FUNCTION 14dca5bff FUN_14dca5bff body=24 status=ok
// SIG undefined FUN_14dca5bff(void)

void FUN_14dca5bff(void)

{
  return;
}



// FUNCTION 14dca5d2b FUN_14dca5d2b body=86 status=ok
// SIG undefined FUN_14dca5d2b(void)

void FUN_14dca5d2b(undefined8 param_1,uint param_2)

{
  int *piVar1;
  uint unaff_retaddr;
  
  piVar1 = (int *)(&stack0xfffffffff090497a +
                  ~(~(param_2 & 0xe6590a1a) & (unaff_retaddr | 0xe6590a1a)));
  *piVar1 = -0x27833ef8;
  *piVar1 = *piVar1 + 0x7a261939;
  *piVar1 = *piVar1 + 0x411e48a0;
  *piVar1 = *piVar1 + 0x73b2b050;
  *(undefined1 **)(piVar1 + -2) = &LAB_14dca5d82;
  return;
}



// FUNCTION 14dca5ed4 FUN_14dca5ed4 body=283 status=ok
// SIG undefined FUN_14dca5ed4(void)

/* WARNING: Removing unreachable block (ram,0x00014dca5f5b) */
/* WARNING: Removing unreachable block (ram,0x00014dca5f61) */
/* WARNING: Removing unreachable block (ram,0x00016539746f) */

undefined8 FUN_14dca5ed4(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  uVar1 = FUN_16539746f(~((~unaff_RBP | local_res20) &
                         (0xffffffffffffffff - local_res20 | unaff_RBP)),unaff_retaddr);
  return uVar1;
}



// FUNCTION 14dca607e FUN_14dca607e body=148 status=ok
// SIG undefined FUN_14dca607e(void)

void FUN_14dca607e(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)
           (unaff_R13 + ~(~(unaff_RBP & 0xffffffffda9e4600) & (unaff_RDI | 0xffffffffda9e4600)));
  uVar2 = (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1;
  (*(code *)0x160f3fa37)
            (param_1,(~uVar2 | 0xffffffffffffffff - (unaff_R15 & 0xffffffffffffffff - uVar1)) +
                     uVar2 + 1);
  return;
}



// FUNCTION 14dca6357 FUN_14dca6357 body=146 status=ok
// SIG undefined FUN_14dca6357(void)

undefined8 FUN_14dca6357(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dca63ed FUN_14dca63ed body=152 status=ok
// SIG undefined FUN_14dca63ed(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dca63ed(ulonglong param_1,undefined8 param_2)

{
  longlong in_R11;
  ulonglong local_res8 [4];
  
  local_res8[1] =
       ~((param_1 - (local_res8[1] | param_1)) + local_res8[1]) &
       (*(ulonglong *)((longlong)local_res8 + in_R11) | param_1);
  FUN_165a60ce3(param_1,param_2);
  return;
}



// FUNCTION 14dca65d3 FUN_14dca65d3 body=275 status=ok
// SIG undefined FUN_14dca65d3(void)

/* WARNING: Removing unreachable block (ram,0x00014dca666a) */
/* WARNING: Removing unreachable block (ram,0x00014dca665f) */

void FUN_14dca65d3(void)

{
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x15b70b117;
  FUN_14d7c4297();
  return;
}



// FUNCTION 14dca6bfa thunk_FUN_14dca6bff body=5 status=ok
// SIG undefined thunk_FUN_14dca6bff(void)

/* WARNING: Removing unreachable block (ram,0x00014dca6ced) */
/* WARNING: Removing unreachable block (ram,0x00014dca6cf3) */
/* WARNING: Removing unreachable block (ram,0x00014e0fdca4) */

void thunk_FUN_14dca6bff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  FUN_1612a4230(FUN_1612a4230,param_2,param_3,param_4);
  FUN_14e0fdca4();
  return;
}



// FUNCTION 14dca6bff FUN_14dca6bff body=115 status=ok
// SIG undefined FUN_14dca6bff(void)

/* WARNING: Removing unreachable block (ram,0x00014dca6ced) */
/* WARNING: Removing unreachable block (ram,0x00014dca6cf3) */
/* WARNING: Removing unreachable block (ram,0x00014e0fdca4) */

void FUN_14dca6bff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1612a4230(FUN_1612a4230,param_2,param_3,param_4);
  FUN_14e0fdca4();
  return;
}



// FUNCTION 14dca6c73 FUN_14dca6c73 body=146 status=ok
// SIG undefined FUN_14dca6c73(void)

/* WARNING: Removing unreachable block (ram,0x00014dca6ced) */
/* WARNING: Removing unreachable block (ram,0x00014dca6cf3) */
/* WARNING: Removing unreachable block (ram,0x00014e0fdca4) */

void FUN_14dca6c73(void)

{
  FUN_14e0fdca4();
  return;
}



// FUNCTION 14dca6e53 FUN_14dca6e53 body=253 status=ok
// SIG undefined FUN_14dca6e53(void)

void FUN_14dca6e53(void)

{
  undefined4 unaff_ESI;
  uint unaff_R14D;
  
  FUN_1617915ef((ulonglong)(uint3)~(uint3)((uint)unaff_ESI >> 8) << 8,~unaff_R14D);
  return;
}



// FUNCTION 14dca7077 FUN_14dca7077 body=155 status=ok
// SIG undefined FUN_14dca7077(void)

/* WARNING: Removing unreachable block (ram,0x00014dca71b7) */
/* WARNING: Removing unreachable block (ram,0x00014dca71bd) */
/* WARNING: Removing unreachable block (ram,0x00014dca7240) */
/* WARNING: Removing unreachable block (ram,0x00014dca7246) */
/* WARNING: Removing unreachable block (ram,0x000162506d04) */
/* WARNING: Removing unreachable block (ram,0x000162506d15) */
/* WARNING: Removing unreachable block (ram,0x000162506d19) */

short FUN_14dca7077(void)

{
  ushort uVar1;
  ushort in_R11W;
  
  uVar1 = FUN_16560b7ed();
  return (in_R11W - (uVar1 | in_R11W)) + uVar1;
}



// FUNCTION 14dca7112 FUN_14dca7112 body=536 status=ok
// SIG undefined FUN_14dca7112(void)

/* WARNING: Removing unreachable block (ram,0x00014dca71b7) */
/* WARNING: Removing unreachable block (ram,0x00014dca71bd) */
/* WARNING: Removing unreachable block (ram,0x00014dca7240) */
/* WARNING: Removing unreachable block (ram,0x00014dca7246) */
/* WARNING: Removing unreachable block (ram,0x000162506d04) */
/* WARNING: Removing unreachable block (ram,0x000162506d15) */
/* WARNING: Removing unreachable block (ram,0x000162506d19) */

short FUN_14dca7112(void)

{
  ushort in_AX;
  undefined2 uStackX_10;
  
  return (uStackX_10 - (in_AX | uStackX_10)) + in_AX;
}



// FUNCTION 14dca73e6 FUN_14dca73e6 body=146 status=ok
// SIG undefined FUN_14dca73e6(void)

void FUN_14dca73e6(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1620ce041(0xffffffffffffffff - (param_1 & unaff_R15) &
                (~(param_1 & unaff_R15) + unaff_R15) - ~param_1,*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dca773f thunk_FUN_14dca7745 body=5 status=ok
// SIG undefined thunk_FUN_14dca7745(void)

void thunk_FUN_14dca7745(void)

{
  return;
}



// FUNCTION 14dca7745 FUN_14dca7745 body=75 status=ok
// SIG undefined FUN_14dca7745(void)

void FUN_14dca7745(void)

{
  return;
}



// FUNCTION 14dca79c9 FUN_14dca79c9 body=123 status=ok
// SIG undefined FUN_14dca79c9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dca79c9(void)

{
  undefined8 in_RAX;
  ulonglong *puVar1;
  undefined8 unaff_RBP;
  short unaff_R13W;
  short *unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  *unaff_R14 = (-0x101 - unaff_R13W) + *unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_RAX;
  puVar1 = (ulonglong *)(in_stack_00000028 + -8);
  *puVar1 = 0x852a5a;
  *puVar1 = *puVar1 ^ 0x852a5a;
  *puVar1 = (ulonglong)(&LAB_14dca7a5c + *puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dca7a70 FUN_14dca7a70 body=28 status=ok
// SIG undefined FUN_14dca7a70(void)

undefined8 FUN_14dca7a70(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dca7b01 FUN_14dca7b01 body=143 status=ok
// SIG undefined FUN_14dca7b01(void)

void FUN_14dca7b01(void)

{
  return;
}



// FUNCTION 14dca7f13 FUN_14dca7f13 body=10 status=ok
// SIG undefined FUN_14dca7f13(void)

void FUN_14dca7f13(void)

{
  return;
}



// FUNCTION 14dca82c9 FUN_14dca82c9 body=439 status=ok
// SIG undefined FUN_14dca82c9(void)

/* WARNING: Removing unreachable block (ram,0x00014dca8352) */
/* WARNING: Removing unreachable block (ram,0x00014dca8358) */
/* WARNING: Removing unreachable block (ram,0x00014dca83bb) */
/* WARNING: Removing unreachable block (ram,0x00014dca83cf) */

void FUN_14dca82c9(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x16541cc76)
            (param_1,param_2,*(longlong *)(unaff_RDI + -0x98) + param_1,param_4,
             *(undefined8 *)(unaff_RDI + -8),*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dca83f3 FUN_14dca83f3 body=312 status=ok
// SIG undefined FUN_14dca83f3(void)

/* WARNING: Removing unreachable block (ram,0x00014dca8480) */
/* WARNING: Removing unreachable block (ram,0x00014dca8486) */
/* WARNING: Removing unreachable block (ram,0x00014df75497) */

undefined8 FUN_14dca83f3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14df75497();
  return uVar1;
}



// FUNCTION 14dca86f0 FUN_14dca86f0 body=528 status=ok
// SIG undefined FUN_14dca86f0(void)

/* WARNING: Removing unreachable block (ram,0x00014dca8855) */
/* WARNING: Removing unreachable block (ram,0x00014dca8761) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dca86f0(longlong param_1)

{
  longlong unaff_RDI;
  char in_stack_00000038;
  
  FUN_14d9f0a53(param_1,*(longlong *)(unaff_RDI + -0x30) + param_1,0xff,FUN_14d9f0a53);
  if (in_stack_00000038 != '\0') {
    FUN_14e0cc4c8();
    return;
  }
  return;
}



// FUNCTION 14dca8901 FUN_14dca8901 body=318 status=ok
// SIG undefined FUN_14dca8901(void)

/* WARNING: Removing unreachable block (ram,0x00014dca8a41) */

void FUN_14dca8901(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  ushort *unaff_R15;
  undefined8 local_res10;
  longlong local_res20;
  
  uVar4 = *unaff_R15;
  *unaff_R15 = 0;
  *unaff_R15 = *unaff_R15 + ((uVar4 | 0x100) - 0x100);
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar7 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = 0x14dca899e;
  FUN_156accc69(param_1,local_res10,param_3,uVar7);
  puVar1 = (ulonglong *)(local_res20 + -0x20);
  uVar5 = *(ulonglong *)(unaff_RDI + -0x40);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar5;
  *(undefined8 *)(local_res20 + -0x28) = 0xffffffffffffffc8;
  *(undefined4 *)(local_res20 + -0x28) = 0x75bc7545;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(ulonglong *)(local_res20 + -0x28) = *(ulonglong *)(local_res20 + -0x28) ^ 0x7d65225a;
  lVar6 = *(longlong *)(local_res20 + -0x28);
  puVar2 = (uint *)((longlong)puVar1 + lVar6 + -0x8d9571f);
  *puVar2 = 0xe0b87477;
  *puVar2 = *puVar2 ^ 0x4fb8d94e;
  *(undefined4 *)((longlong)puVar1 + lVar6 + -0x8d9571b) = 0;
  puVar3 = (uint *)((longlong)puVar1 + lVar6 + -0x8d9571b);
  *puVar3 = *puVar3 ^ 0xffffffff;
  *puVar2 = 0x62891fb3;
  *(undefined4 *)((longlong)puVar1 + lVar6 + -0x8d9571b) = 0x92a56d3c;
  FUN_156e72cbc();
  return;
}



// FUNCTION 14dca8a41 FUN_14dca8a41 body=35 status=ok
// SIG undefined FUN_14dca8a41(void)

void FUN_14dca8a41(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dca8a6a FUN_14dca8a6a body=123 status=ok
// SIG undefined FUN_14dca8a6a(void)

void FUN_14dca8a6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0xbe6fc) {
    FUN_165e93f27(param_1,param_2,param_3,&LAB_14d7b8fbc);
    return;
  }
  if (param_4 != 0xbe6fd) {
    FUN_166b86a08();
    return;
  }
  return;
}



// FUNCTION 14dca8c9c FUN_14dca8c9c body=596 status=ok
// SIG undefined FUN_14dca8c9c(void)

/* WARNING: Removing unreachable block (ram,0x00014dca8d26) */
/* WARNING: Removing unreachable block (ram,0x00014dca8d2c) */
/* WARNING: Removing unreachable block (ram,0x00014dca8da6) */
/* WARNING: Removing unreachable block (ram,0x00014dca8d9b) */
/* WARNING: Removing unreachable block (ram,0x00014dca8db8) */
/* WARNING: Removing unreachable block (ram,0x0001617c0bbc) */
/* WARNING: Removing unreachable block (ram,0x0001617c0bdf) */
/* WARNING: Removing unreachable block (ram,0x0001617c0bcc) */

void FUN_14dca8c9c(undefined8 param_1,longlong param_2,ushort param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 in_R10;
  undefined8 uVar16;
  undefined8 in_R11;
  undefined *puVar17;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  byte in_CF;
  ulonglong uVar18;
  
  lVar12 = (param_2 + -0xe99fcc3) - (ulonglong)in_CF;
  puVar1 = (ulonglong *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3);
  lVar2 = *(longlong *)(unaff_RSI + -0x40);
  *puVar1 = 0;
  *puVar1 = *puVar1 + lVar2;
  uVar13 = *puVar1;
  *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3) = in_R10;
  *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3) = param_1;
  uVar9 = *(ulonglong *)(unaff_RSI + -0x70);
  *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3) =
       *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3);
  uVar11 = ~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) &
           (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP);
  *(ulonglong *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3) =
       uVar13 + unaff_RBP + ~(unaff_RBP & ~uVar13 | ~unaff_RBP) * -2;
  *(longlong *)(&stack0xfffffffff1660335 + lVar12 + 0xe99fcc3) = unaff_RSI;
  uVar13 = *(ulonglong *)(unaff_RSI + -0x58);
  uVar16 = *(undefined8 *)(&stack0xfffffffff1660335 + lVar12 + 0xe99fcc3);
  *(ulonglong *)(&stack0xfffffffff1660335 + lVar12 + 0xe99fcc3) =
       (ulonglong)(uint)(unaff_EDI << 0x12);
  uVar13 = uVar13 ^ unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3) = unaff_R15;
  *(ulonglong *)(&stack0xfffffffff1660335 + lVar12 + 0xe99fcc3) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff166032d + lVar12 + 0xe99fcc3) = param_4;
  *(undefined4 *)(&stack0xfffffffff1660325 + lVar12 + 0xe99fcc3) = 0x65f5deb;
  *(undefined4 *)(&stack0xfffffffff1660329 + lVar12 + 0xe99fcc3) = 0;
  lVar15 = *(longlong *)(&stack0xfffffffff1660325 + lVar12 + 0xe99fcc3) + -0x65f5ddb;
  *(undefined8 *)(&stack0xfffffffff1660325 + lVar12 + 0xe99fcc3) = 0x1617c0b2b;
  uVar8 = FUN_157002e70();
  uVar3 = *(undefined8 *)(&stack0xfffffffff166032d + lVar12 + 0xe99fcc3);
  *(undefined8 *)(&stack0xfffffffff166032d + lVar12 + 0xe99fcc3) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffff1660325 + lVar12 + 0xe99fcc3) = unaff_R15;
  uVar4 = *(undefined8 *)(&stack0xfffffffff166032d + lVar12 + 0xe99fcc3);
  **(short **)(&stack0xfffffffff1660325 + lVar12 + 0xe99fcc3) =
       -0xff - (3 - (~(param_3 ^ 0xffff) + 2));
  uVar5 = *(undefined8 *)(&stack0xfffffffff1660335 + lVar12 + 0xe99fcc3);
  uVar14 = *(undefined8 *)(&stack0xfffffffff166033d + lVar12 + 0xe99fcc3);
  uVar18 = *(ulonglong *)(&stack0xfffffffff1660345 + lVar12 + 0xe99fcc3);
  lVar2 = *(longlong *)(&stack0xfffffffff166034d + lVar12 + 0xe99fcc3);
  *(undefined8 *)(lVar2 + -8) = in_R11;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R12;
  *(undefined4 *)(lVar2 + -0x18) = 0x68fcf3c;
  *(undefined4 *)(lVar2 + -0x14) = 0;
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  *(code **)(lVar2 + -0x20) = FUN_157002e70;
  if ((uVar18 & 1) == 0) {
    FUN_162cf394f();
    return;
  }
  uVar5 = *(undefined8 *)(lVar2 + -0x20);
  *(ulonglong *)(lVar2 + -0x10) = uVar9 ^ unaff_RBP;
  uVar6 = *(undefined8 *)(lVar2 + -0x10);
  puVar17 = &DAT_164949f24;
  *(ulonglong *)(lVar2 + -0x10) = uVar13;
  *(ulonglong *)(lVar2 + -0x18) = uVar13;
  *(undefined8 *)(lVar2 + -0x20) = uVar16;
  *(ulonglong *)(lVar2 + -0x20) = uVar11;
  *(undefined8 *)(lVar2 + -0x28) = uVar8;
  uVar10 = 0x66b87da8;
  *(undefined8 *)(lVar2 + -0x30) = 0x162cf39e0;
  uVar7 = FUN_166b87da8(FUN_166b87da8,*(undefined8 *)(lVar2 + -8));
  uVar16 = *(undefined8 *)(lVar2 + -0x28);
  *(undefined8 *)(lVar2 + -0x28) = uVar14;
  uVar13 = (ulonglong)((~uVar7 | uVar10 ^ 0xffffffff) + uVar7 + 1);
  *(undefined8 *)(lVar2 + -0x20) = uVar6;
  *(undefined **)(lVar2 + -0x20) = puVar17;
  *(undefined8 *)(lVar2 + -0x28) = uVar5;
  uVar5 = *(undefined8 *)(lVar2 + -0x28);
  *(undefined8 *)(lVar2 + -0x28) = uVar3;
  *(ulonglong *)(lVar2 + -0x30) = uVar13 + lVar15;
  uVar9 = (ulonglong)*(uint *)(lVar2 + -0x30);
  *(code **)(lVar2 + -0x28) = FUN_162cf3a55;
  FUN_161bf845f(uVar13);
  uVar3 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined8 *)(lVar2 + -0x10) = uVar5;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R14;
  uVar5 = *(undefined8 *)(lVar2 + -0x18);
  uVar14 = *(undefined8 *)(lVar2 + -0x10);
  *(ulonglong *)(lVar2 + -0x10) = uVar9;
  *(undefined8 *)(lVar2 + -0x18) = uVar3;
  *(undefined4 *)(lVar2 + -0x20) = 0x668725c;
  *(undefined4 *)(lVar2 + -0x1c) = 0;
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  *(undefined8 *)(lVar2 + -0x20) = uVar14;
  *(code **)(lVar2 + -0x28) = FUN_162cf3aed;
  uVar9 = FUN_1569bb178();
  *(undefined4 *)(lVar2 + -0x1c) = 0;
  uVar13 = (~((*(ulonglong *)(lVar2 + -0x20) & 0xffffffff98eaaf06 ^ 0xffffffffffffffff) &
             (*(ulonglong *)(lVar2 + -0x20) | 0xffffffff98eaaf06)) ^ 0x5006fb7) +
           *(longlong *)((ulonglong)((uint)lVar15 & (uint)uVar4) - 0x48);
  *(ulonglong *)(lVar2 + -0x20) = uVar13 + uVar9 + (uVar13 & uVar9) * -2;
  *(undefined8 *)(lVar2 + -0x20) = uVar16;
  FUN_15b92c72e();
  return;
}



// FUNCTION 14dca8dcf FUN_14dca8dcf body=288 status=ok
// SIG undefined FUN_14dca8dcf(void)

void FUN_14dca8dcf(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBP;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  longlong local_res18;
  
  FUN_1629f581e(param_1,param_2,param_3);
  FUN_14d90a6c6(param_1,FUN_14d90a6c6,*(ulonglong *)(unaff_retaddr + -0x88) ^ unaff_R15,
                local_res18 + (unaff_RBP + param_4) * -2);
  return;
}



// FUNCTION 14dca8ef7 FUN_14dca8ef7 body=324 status=ok
// SIG undefined FUN_14dca8ef7(void)

void FUN_14dca8ef7(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_166156b6c(param_1,-1 - *(longlong *)(unaff_RDI + -0x68));
  FUN_164ba4e65();
  return;
}



// FUNCTION 14dca90da FUN_14dca90da body=294 status=ok
// SIG undefined FUN_14dca90da(void)

/* WARNING: Removing unreachable block (ram,0x00014dca9185) */
/* WARNING: Removing unreachable block (ram,0x00014dca9175) */

void FUN_14dca90da(void)

{
  FUN_164bc25a6();
  return;
}


