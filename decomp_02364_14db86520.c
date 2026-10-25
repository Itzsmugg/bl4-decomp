// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db86520 FUN_14db86520 body=280 status=ok
// SIG undefined FUN_14db86520(void)

/* WARNING: Removing unreachable block (ram,0x00014db866e7) */
/* WARNING: Removing unreachable block (ram,0x00014db866e1) */
/* WARNING: Removing unreachable block (ram,0x00014db866ec) */
/* WARNING: Removing unreachable block (ram,0x00014db8666b) */
/* WARNING: Removing unreachable block (ram,0x00014db8663d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db86520(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  undefined6 uVar3;
  undefined1 *puVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar6;
  undefined1 local_res8 [32];
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  puVar4 = (undefined1 *)register0x00000020;
  if ((in_TF & 1) == 0) {
    puVar4 = local_res8;
  }
  puVar1 = (ulonglong *)(puVar4 + param_4 + -0xc9921bb);
  uVar6 = *puVar1;
  uVar5 = uVar6 + 0x77274be4;
  *puVar1 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar6,-0x77274be4) * 0x800 |
            (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
            (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
            (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)(uVar6 < 0xffffffff88d8b41c) | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  uVar6 = *puVar1;
  *puVar1 = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
            (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *puVar1;
  *puVar1 = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
            (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *puVar1;
  *puVar1 = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
            (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *puVar1;
  *puVar1 = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
            (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  puVar1[-1] = 0x14db865a5;
  FUN_1622ee944(uVar2,param_2,uVar5);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 2;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - ~uVar5;
  if (-1 < (longlong)
           -(~CONCAT62(uVar3,uVar2) | *(ulonglong *)(unaff_RDI + -0x50) |
            0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x50) | CONCAT62(uVar3,uVar2))) {
    FUN_14df10181();
    return;
  }
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x30);
  (*(code *)0x15b6c8f6c)();
  return;
}



// FUNCTION 14db8663d FUN_14db8663d body=174 status=ok
// SIG undefined FUN_14db8663d(void)

/* WARNING: Removing unreachable block (ram,0x00014db866e7) */
/* WARNING: Removing unreachable block (ram,0x00014db866e1) */
/* WARNING: Removing unreachable block (ram,0x00014db866ec) */
/* WARNING: Removing unreachable block (ram,0x00014db8666b) */

void FUN_14db8663d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1573cb09e)(param_1,param_2,param_3,~in_RAX | *(ulonglong *)(unaff_R12 + -0xa0));
  return;
}



// FUNCTION 14db866ec FUN_14db866ec body=21 status=ok
// SIG undefined FUN_14db866ec(void)

void FUN_14db866ec(void)

{
  return;
}



// FUNCTION 14db86796 FUN_14db86796 body=83 status=ok
// SIG undefined FUN_14db86796(void)

void FUN_14db86796(void)

{
  (*(code *)&LAB_15b1f4b88)();
  return;
}



// FUNCTION 14db868c5 FUN_14db868c5 body=56 status=ok
// SIG undefined FUN_14db868c5(void)

void FUN_14db868c5(void)

{
  return;
}



// FUNCTION 14db86d52 FUN_14db86d52 body=12 status=ok
// SIG undefined FUN_14db86d52(void)

void FUN_14db86d52(void)

{
  return;
}



// FUNCTION 14db86e14 FUN_14db86e14 body=281 status=ok
// SIG undefined FUN_14db86e14(void)

void FUN_14db86e14(undefined8 param_1)

{
  longlong unaff_RSI;
  
  FUN_166bdc5cf(param_1,unaff_RSI + -1);
  thunk_FUN_161527396();
  return;
}



// FUNCTION 14db86f2f FUN_14db86f2f body=694 status=ok
// SIG undefined FUN_14db86f2f(void)

/* WARNING: Removing unreachable block (ram,0x000161681aea) */
/* WARNING: Removing unreachable block (ram,0x000161681af0) */
/* WARNING: Removing unreachable block (ram,0x000161681b9a) */
/* WARNING: Removing unreachable block (ram,0x000161681ba5) */
/* WARNING: Removing unreachable block (ram,0x000161681ba0) */
/* WARNING: Removing unreachable block (ram,0x0001646f4869) */
/* WARNING: Removing unreachable block (ram,0x0001646f487f) */
/* WARNING: Removing unreachable block (ram,0x000161681adb) */
/* WARNING: Removing unreachable block (ram,0x00014db86fbe) */
/* WARNING: Removing unreachable block (ram,0x00014db86fc4) */
/* WARNING: Removing unreachable block (ram,0x000157049a06) */
/* WARNING: Removing unreachable block (ram,0x0001569c359a) */
/* WARNING: Removing unreachable block (ram,0x0001569c34e2) */
/* WARNING: Removing unreachable block (ram,0x0001569c3583) */
/* WARNING: Removing unreachable block (ram,0x0001569c358f) */
/* WARNING: Removing unreachable block (ram,0x00015b7a7f77) */
/* WARNING: Removing unreachable block (ram,0x0001571d4674) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_14db86f2f(ulonglong param_1,undefined8 param_2)

{
  undefined *in_RAX;
  undefined *puVar1;
  longlong unaff_RDI;
  undefined8 local_res8;
  int local_res10;
  
  if (local_res10 < 0) {
    return in_RAX;
  }
  if (-1 < (longlong)
           ((*(ulonglong *)(unaff_RDI + -8) + param_1) - (*(ulonglong *)(unaff_RDI + -8) & param_1))
     ) {
    puVar1 = (undefined *)FUN_164b474fc(param_1,param_2,local_res8);
    return puVar1;
  }
  return &DAT_14dab4fb5;
}



// FUNCTION 14db871ab FUN_14db871ab body=526 status=ok
// SIG undefined FUN_14db871ab(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db87264) */
/* WARNING: Removing unreachable block (ram,0x00014db8727a) */
/* WARNING: Removing unreachable block (ram,0x00014db872d7) */
/* WARNING: Removing unreachable block (ram,0x00014db872e7) */
/* WARNING: Removing unreachable block (ram,0x00014db87310) */
/* WARNING: Removing unreachable block (ram,0x00014db87316) */
/* WARNING: Removing unreachable block (ram,0x00014db8731b) */
/* WARNING: Removing unreachable block (ram,0x00014da9c2c5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db871ab(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  bool in_ZF;
  undefined8 local_res10;
  undefined8 local_res18;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(longlong *)(unaff_RDI + -0x28) != 1) {
    param_1 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
    FUN_16183d43b();
    (*(code *)0x162303501)(local_res18,param_1,param_3,local_res10);
    return;
  }
  FUN_1620a04e3();
  return;
}



// FUNCTION 14db873c7 FUN_14db873c7 body=280 status=ok
// SIG undefined FUN_14db873c7(void)

/* WARNING: Removing unreachable block (ram,0x00014db8743e) */
/* WARNING: Removing unreachable block (ram,0x00014db87444) */
/* WARNING: Removing unreachable block (ram,0x00014db87449) */

undefined1 FUN_14db873c7(undefined8 param_1)

{
  longlong lVar1;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong lStackX_20;
  
  *(undefined8 *)((longlong)&uStackX_8 + (~in_R10 ^ 0x48cfc923)) = unaff_retaddr;
                    /* WARNING: Read-only address (ram,0x00014d7a5038) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a5038 = in_AL;
  *(undefined8 *)(lStackX_20 + -8) = unaff_RBX;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_RBX;
  *(undefined4 *)(lStackX_20 + -0x18) = 0x93fb9d5;
  *(undefined4 *)(lStackX_20 + -0x14) = 0;
  lVar1 = *(longlong *)(lStackX_20 + -0x18);
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_RDI;
  *(undefined8 *)(lStackX_20 + -0x28) = param_1;
  *(longlong *)(lStackX_20 + -8) = lVar1 + -0x4a55f39;
  *(undefined8 *)(lStackX_20 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lStackX_20 + -0x28d7) = unaff_R13;
  *(undefined **)(lStackX_20 + -0x28cf) = &DAT_156ef2e4a;
  return 0;
}



// FUNCTION 14db874e1 FUN_14db874e1 body=129 status=ok
// SIG undefined FUN_14db874e1(void)

undefined8 FUN_14db874e1(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14db877a8 FUN_14db877a8 body=464 status=ok
// SIG undefined FUN_14db877a8(void)

/* WARNING: Removing unreachable block (ram,0x00014db878c2) */
/* WARNING: Removing unreachable block (ram,0x00014db87839) */
/* WARNING: Removing unreachable block (ram,0x00014db8783f) */
/* WARNING: Removing unreachable block (ram,0x00014db878b7) */
/* WARNING: Removing unreachable block (ram,0x00014db878bd) */
/* WARNING: Removing unreachable block (ram,0x0001563cd677) */
/* WARNING: Removing unreachable block (ram,0x000164c7308b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db877a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b491933(param_1,param_2,FUN_15b491933);
  return uVar1;
}



// FUNCTION 14db8797c FUN_14db8797c body=772 status=ok
// SIG undefined FUN_14db8797c(void)

/* WARNING: Removing unreachable block (ram,0x000164bb7e07) */
/* WARNING: Removing unreachable block (ram,0x000164bb7e0d) */
/* WARNING: Removing unreachable block (ram,0x00014db87aa5) */
/* WARNING: Removing unreachable block (ram,0x00014db87aab) */
/* WARNING: Removing unreachable block (ram,0x00014db87b4d) */
/* WARNING: Removing unreachable block (ram,0x00014db87b59) */
/* WARNING: Removing unreachable block (ram,0x000164bb7d71) */
/* WARNING: Removing unreachable block (ram,0x000164bb7e02) */
/* WARNING: Removing unreachable block (ram,0x00014ddd67dc) */
/* WARNING: Removing unreachable block (ram,0x00014db87a13) */

void FUN_14db8797c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar4 = (~(~unaff_R15 & uVar3) + uVar3) - unaff_R15;
  uVar3 = 0xffffffffffffffff - uVar3 | unaff_R15;
  if (CARRY8(uVar3 - ~(~uVar4 & ~uVar3),uVar4)) {
    FUN_1573e12cd(uVar1,uVar2,param_3);
    return;
  }
  FUN_1573e12cd(uVar1,uVar2,param_3);
  return;
}



// FUNCTION 14db87d08 FUN_14db87d08 body=282 status=ok
// SIG undefined FUN_14db87d08(void)

/* WARNING: Removing unreachable block (ram,0x00014db87d93) */
/* WARNING: Removing unreachable block (ram,0x00014db87d99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db87d08(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  uVar1 = *(ulonglong *)(unaff_R12 + (unaff_RDI ^ 0x7c566665));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78);
  uVar3 = ~((in_RAX - (uVar2 | in_RAX)) + uVar2);
  FUN_1652ab7a3(~((~in_RAX | uVar1) + in_RAX + 1) & (uVar1 | in_RAX),
                ((uVar2 | in_RAX) - (uVar3 | uVar2 | in_RAX)) + uVar3);
  FUN_165d8e33d();
  (*(code *)&LAB_15ba5d6cc)(uStackX_18 ^ unaff_R15);
  return;
}



// FUNCTION 14db87d99 FUN_14db87d99 body=154 status=ok
// SIG undefined FUN_14db87d99(void)

void FUN_14db87d99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  FUN_1619a34ba(param_1,param_2,param_3,
                (-~unaff_R15 - (~local_res10 + 2)) + (local_res10 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db87e36 FUN_14db87e36 body=117 status=ok
// SIG undefined FUN_14db87e36(void)

/* WARNING: Removing unreachable block (ram,0x00014db87ea5) */
/* WARNING: Removing unreachable block (ram,0x00014db87eab) */
/* WARNING: Removing unreachable block (ram,0x000162594cb2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db87e36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1625c2c9c(FUN_1625c2c9c,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db87eab FUN_14db87eab body=161 status=ok
// SIG undefined FUN_14db87eab(void)

void FUN_14db87eab(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar2 = local_res18 ^ unaff_R15;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  *(longlong *)(uVar2 - 0x10) = *plVar1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined4 *)(uVar2 - 0x28) = 0x44f43e0e;
  *(undefined **)(uVar2 - 0x30) = &DAT_1654a1ffd;
  return;
}



// FUNCTION 14db88099 FUN_14db88099 body=291 status=ok
// SIG undefined FUN_14db88099(void)

/* WARNING: Instruction at (ram,0x00014d7a4975) overlaps instruction at (ram,0x00014d7a4972)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156d21b09) */
/* WARNING: Removing unreachable block (ram,0x00014db8812c) */

void FUN_14db88099(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  uint unaff_EBX;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 unaff_RDI;
  longlong lVar8;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  bool bVar9;
  longlong unaff_retaddr;
  longlong in_stack_00000008;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x10) = unaff_R13;
  *(undefined8 *)(param_5 - 0x18) = unaff_R13;
  uVar3 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = param_4;
  *(undefined8 *)(param_5 - 0x28) = uVar3;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 0x28);
  *(undefined8 *)(param_5 - 8) = 0x53c610ca;
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ 0x53c610ca;
  plVar6 = (longlong *)(param_5 - 8);
  *plVar6 = (longlong)(&DAT_15755f750 + *plVar6);
  if (*plVar6 != 0) {
    FUN_15755f723();
    return;
  }
  lVar8 = ~-*(longlong *)(param_5 - 0x10) + 1;
  plVar6 = (longlong *)(param_5 - 8);
  do {
    *(undefined1 *)(unaff_retaddr + 0x5f5b6ae7) = 0;
    plVar7 = (longlong *)(ulonglong)((uint)plVar6 ^ unaff_EBX);
    LOCK();
    uVar2 = *(undefined1 *)((longlong)plVar7 + -0x31e7dd6e);
    *(undefined1 *)((longlong)plVar7 + -0x31e7dd6e) = (char)((ulonglong)unaff_retaddr >> 8);
    unaff_retaddr =
         CONCAT62((int6)((ulonglong)unaff_retaddr >> 0x10),CONCAT11(uVar2,(char)unaff_retaddr));
    UNLOCK();
    puVar1 = (uint *)(in_stack_00000008 + -0x591efddd);
    *puVar1 = *puVar1 | (uint)lVar8;
    bVar9 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
    do {
      puVar1 = (uint *)(param_1 + 0x45c39ed3);
      *puVar1 = *puVar1 << ((byte)param_1 & 0x1f);
      bVar4 = (param_1 & 0x1f) != 0;
      bVar5 = !bVar4 & bVar9;
      bVar9 = true;
    } while ((bool)(bVar5 | (bVar4 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0)));
    plVar6 = plVar7 + 1;
    *plVar7 = 0x5b;
    lVar8 = *plVar7;
    param_1 = CONCAT62((int6)(param_1 >> 0x10),
                       CONCAT11((byte)(param_1 >> 8) ^ *(byte *)(param_1 + 0x6e),(byte)param_1));
    unaff_EBX = unaff_EBX + iRam00000001812f49f1;
  } while (param_1 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db88132 FUN_14db88132 body=129 status=ok
// SIG undefined FUN_14db88132(void)

void FUN_14db88132(ulonglong param_1,char param_2)

{
  longlong unaff_RDI;
  
  FUN_166037413(param_1,param_2 * '\x02',*(ulonglong *)(unaff_RDI + -0x30) | param_1);
  return;
}



// FUNCTION 14db88312 FUN_14db88312 body=326 status=ok
// SIG undefined FUN_14db88312(void)

void FUN_14db88312(ulonglong param_1)

{
  uint uVar1;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff2354b3a + (param_1 ^ 0x20079865)) = unaff_R12;
  FUN_14dcf8dbb();
  unaff_retaddr = unaff_retaddr + -0xa3ce79b;
  uVar1 = *(uint *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b);
  *(uint *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b) =
       *(uint *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b) | 0xfffffeff;
  *(uint *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b) =
       ~((*(int *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b) -
         (~uVar1 | 0x100 | *(uint *)(&stack0xfffffffff5c31865 + in_R11 + unaff_retaddr + 0xa3ce79b))
         ) + (~uVar1 | 0x100));
  return;
}



// FUNCTION 14db88458 FUN_14db88458 body=439 status=ok
// SIG undefined FUN_14db88458(void)

/* WARNING: Removing unreachable block (ram,0x00014db8857c) */

void FUN_14db88458(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined8 *)(&stack0x00000010 + in_R9) = 0;
  *(longlong *)(&stack0x00000010 + in_R9) = *(longlong *)(&stack0x00000010 + in_R9) + unaff_RBP;
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  FUN_162ab874f();
  uVar1 = *(ulonglong *)((uVar1 ^ unaff_R15) - 0x50);
  if ((~(uVar1 & unaff_R15) & (uVar1 | unaff_R15)) != 0) {
    FUN_162791ac6();
    return;
  }
  FUN_16473b770();
  FUN_14dc5ec66();
  return;
}



// FUNCTION 14db88618 FUN_14db88618 body=141 status=ok
// SIG undefined FUN_14db88618(void)

undefined8 FUN_14db88618(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_15b43e2c4(~(~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15) |
                        ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0));
  return uVar1;
}



// FUNCTION 14db886a6 FUN_14db886a6 body=124 status=ok
// SIG undefined FUN_14db886a6(void)

undefined8 FUN_14db886a6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db887ca FUN_14db887ca body=513 status=ok
// SIG undefined FUN_14db887ca(void)

/* WARNING: Removing unreachable block (ram,0x00014db8891d) */
/* WARNING: Removing unreachable block (ram,0x00014db88923) */

undefined8
FUN_14db887ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  lVar5 = param_6 + unaff_R15 + (param_6 & unaff_R15) * -2;
  *(undefined8 *)(lVar5 + -8) = unaff_R14;
  *(undefined8 *)(lVar5 + -0x10) = *(undefined8 *)(lVar5 + -8);
  *(undefined8 *)(lVar5 + -0x18) = in_R11;
  *(undefined8 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -0x20) = 0x14db8886e;
  lVar3 = FUN_156f25f80(uStackX_10,param_2,param_3,uStackX_18);
  plVar1 = (longlong *)(lVar5 + -0x10);
  *(undefined4 *)(lVar5 + -0xc) = 0xac91427a;
  lVar2 = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar3;
  *(undefined8 *)(lVar5 + -0x18) = local_res8;
  *(undefined4 *)(lVar5 + -0x18) = 0x3646abb;
  *(undefined4 *)(lVar5 + -0x14) = 0;
  uVar4 = *(undefined8 *)(unaff_RDI + -0x50);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  *(undefined8 *)(lVar5 + -0x18) = uVar4;
  *(undefined8 *)(lVar5 + -0x10) = 0x156f3dcd2;
  uVar4 = FUN_166aa0f06(lVar2,0xffffffffffffffc0,FUN_166aa0f06,*(undefined8 *)(lVar5 + -0x18));
  return uVar4;
}



// FUNCTION 14db88a61 FUN_14db88a61 body=354 status=ok
// SIG undefined FUN_14db88a61(void)

void FUN_14db88a61(void)

{
  FUN_162ca1b00();
  return;
}



// FUNCTION 14db88daf FUN_14db88daf body=14 status=ok
// SIG undefined FUN_14db88daf(void)

void FUN_14db88daf(void)

{
  return;
}



// FUNCTION 14db892b6 FUN_14db892b6 body=329 status=ok
// SIG undefined FUN_14db892b6(void)

/* WARNING: Removing unreachable block (ram,0x00014db8938e) */
/* WARNING: Removing unreachable block (ram,0x00016159a3b7) */
/* WARNING: Removing unreachable block (ram,0x00014db89307) */
/* WARNING: Removing unreachable block (ram,0x00014db89402) */

void FUN_14db892b6(void)

{
  longlong unaff_RSI;
  longlong in_R10;
  
  FUN_1612876e7();
  *(undefined4 *)(&stack0xffffffffffffffe8 + unaff_RSI) = 0xffffffff;
  if (in_R10 != 0x2b3e6ba1) {
    return;
  }
  FUN_1660b013d();
  return;
}



// FUNCTION 14db89402 FUN_14db89402 body=121 status=ok
// SIG undefined FUN_14db89402(void)

void FUN_14db89402(void)

{
  FUN_1625d65ff();
  return;
}



// FUNCTION 14db895fe FUN_14db895fe body=262 status=ok
// SIG undefined FUN_14db895fe(void)

/* WARNING: Removing unreachable block (ram,0x00014db8962e) */

void FUN_14db895fe(void)

{
  return;
}



// FUNCTION 14db897f5 FUN_14db897f5 body=155 status=ok
// SIG undefined FUN_14db897f5(void)

void FUN_14db897f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_165bff4dc(param_1,param_2,param_3,in_stack_00000008,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14db89923 FUN_14db89923 body=182 status=ok
// SIG undefined FUN_14db89923(void)

/* WARNING: Removing unreachable block (ram,0x00014db899da) */
/* WARNING: Removing unreachable block (ram,0x00014db899cf) */

longlong FUN_14db89923(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return -(*(ulonglong *)(unaff_RDI + -0x80) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x80) | param_1) * -2);
}



// FUNCTION 14db899da FUN_14db899da body=40 status=ok
// SIG undefined FUN_14db899da(void)

int FUN_14db899da(void)

{
  int unaff_EBX;
  int unaff_ESI;
  longlong unaff_retaddr;
  
  *(code **)(&stack0xffffffffff059ed5 + unaff_retaddr) = FUN_15ba543b1;
  return unaff_EBX - unaff_ESI;
}



// FUNCTION 14db89a85 FUN_14db89a85 body=135 status=ok
// SIG undefined FUN_14db89a85(void)

void FUN_14db89a85(undefined8 param_1,longlong param_2)

{
  (*(code *)0x16256ca16)(param_1,*(undefined8 *)(param_2 + -0xa0));
  return;
}



// FUNCTION 14db89b1f FUN_14db89b1f body=86 status=ok
// SIG undefined FUN_14db89b1f(void)

void FUN_14db89b1f(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db89bd0 FUN_14db89bd0 body=285 status=ok
// SIG undefined FUN_14db89bd0(void)

/* WARNING: Removing unreachable block (ram,0x00014db89c52) */

void FUN_14db89bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_R11;
  ulonglong unaff_R15;
  longlong local_res8;
  ulonglong uStackX_18;
  
  if (local_res8 == 0 && unaff_R15 == 0) {
    uVar1 = ~((~unaff_R15 | uStackX_18) & (~uStackX_18 | unaff_R15));
    *(undefined8 *)(uVar1 - 8) = in_R11;
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    *(undefined **)(uVar1 - 8) = &DAT_14dc98138;
    *(undefined8 *)(uVar1 - 0x18) = param_3;
    *(undefined8 *)(uVar1 - 0x20) = param_3;
    *(undefined1 **)(uVar1 - 0x18) = &LAB_1629e1e0b;
    FUN_14dc98106(param_1,param_2,*(undefined8 *)(uVar1 - 0x20),param_4);
    return;
  }
  FUN_1629e1d78();
  return;
}



// FUNCTION 14db89cf0 FUN_14db89cf0 body=235 status=ok
// SIG undefined FUN_14db89cf0(void)

void FUN_14db89cf0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  FUN_16244cda1();
  if (bVar1) {
    FUN_15751fa1b();
    return;
  }
  if (param_2 != 0x328d4) {
    return;
  }
  return;
}



// FUNCTION 14db8a0ed FUN_14db8a0ed body=55 status=ok
// SIG undefined FUN_14db8a0ed(void)

void FUN_14db8a0ed(void)

{
  undefined8 in_R10;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = in_R10;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined **)(lStackX_18 + -8) = &DAT_14db8a13b;
  FUN_14d7a56b3();
  return;
}



// FUNCTION 14db8a23d FUN_14db8a23d body=144 status=ok
// SIG undefined FUN_14db8a23d(void)

void FUN_14db8a23d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R10;
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0x00000010 + in_R10) = unaff_R15;
  FUN_16538c2fc(param_1,param_2,param_3,0x68363be6);
  return;
}



// FUNCTION 14db8a2cd FUN_14db8a2cd body=29 status=ok
// SIG undefined FUN_14db8a2cd(void)

void FUN_14db8a2cd(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7bee73(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14db8a4bd FUN_14db8a4bd body=12 status=ok
// SIG undefined FUN_14db8a4bd(void)

void FUN_14db8a4bd(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14db8a4c9 FUN_14db8a4c9 body=153 status=ok
// SIG undefined FUN_14db8a4c9(void)

void FUN_14db8a4c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x11d751) {
    FUN_165e93f27();
    return;
  }
  FUN_156a21455(param_1,param_2,FUN_156a21455,param_4);
  FUN_14db8a564();
  return;
}



// FUNCTION 14db8a564 FUN_14db8a564 body=87 status=ok
// SIG undefined FUN_14db8a564(void)

void FUN_14db8a564(void)

{
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  
  FUN_15b309ab0(0xffffffffffffffffU - unaff_R15 | unaff_retaddr);
  return;
}



// FUNCTION 14db8a653 FUN_14db8a653 body=221 status=ok
// SIG undefined FUN_14db8a653(void)

/* WARNING: Removing unreachable block (ram,0x00014db8a6ea) */
/* WARNING: Removing unreachable block (ram,0x000166459924) */
/* WARNING: Removing unreachable block (ram,0x00014db8a6f0) */

void FUN_14db8a653(void)

{
  FUN_166459924();
  return;
}



// FUNCTION 14db8a792 FUN_14db8a792 body=142 status=ok
// SIG undefined FUN_14db8a792(void)

/* WARNING: Removing unreachable block (ram,0x00014db8a7ec) */
/* WARNING: Removing unreachable block (ram,0x00014db8a820) */

void FUN_14db8a792(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165780efd(param_1,*(undefined8 *)(unaff_RDI + -0x28),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14db8a820 FUN_14db8a820 body=140 status=ok
// SIG undefined FUN_14db8a820(void)

void FUN_14db8a820(void)

{
  return;
}



// FUNCTION 14db8a8b3 FUN_14db8a8b3 body=151 status=ok
// SIG undefined FUN_14db8a8b3(void)

void FUN_14db8a8b3(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  FUN_1564d76a8(lVar1,param_2,FUN_1564d76a8,lVar1);
  return;
}



// FUNCTION 14db8a9e9 FUN_14db8a9e9 body=179 status=ok
// SIG undefined FUN_14db8a9e9(void)

/* WARNING: Removing unreachable block (ram,0x00014db8aa62) */

undefined8 FUN_14db8a9e9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db8aa9e FUN_14db8aa9e body=302 status=ok
// SIG undefined FUN_14db8aa9e(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ad71) */
/* WARNING: Removing unreachable block (ram,0x000166178455) */
/* WARNING: Removing unreachable block (ram,0x00014db8ac40) */
/* WARNING: Removing unreachable block (ram,0x00014db8ad6b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d8c91) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14db8aa9e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = param_3 + (local_res18 & unaff_R15) * -2;
  local_res20 = 0xffffffffffffffff - local_res20;
  FUN_166dc14c5();
  FUN_14daf1c1c();
  uVar1 = ~(local_res20 & unaff_R15) & (local_res20 | unaff_R15);
  lVar2 = param_5 + unaff_R15 + (param_5 & unaff_R15) * -2;
  local_res20._0_2_ = (ushort)uVar1;
  local_res20._0_2_ = (-0x101 - ((ushort)local_res20 | 0xfeff)) + (ushort)local_res20;
  *(undefined8 *)(lVar2 + -8) = unaff_R14;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R14;
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)(((ushort)local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)(((ushort)local_res20 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)local_res20 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)local_res20 & 4) != 0) * 4 | (ulonglong)(((ushort)local_res20 & 1) != 0)
       | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar2 + -0x20) = 0x3b2975b;
  *(undefined4 *)(lVar2 + -0x1c) = 0;
  *(ulonglong **)(lVar2 + -0x28) = &local_res18;
  *(ulonglong **)(lVar2 + -0x30) = &local_res18;
  *(ulonglong **)(lVar2 + -0x38) = &local_res18;
  *(code **)(lVar2 + -0x28) = FUN_14e236315;
  *(undefined8 *)(lVar2 + -0x30) = 0x162ed8551;
  return param_1;
}



// FUNCTION 14db8abcf FUN_14db8abcf body=112 status=ok
// SIG undefined FUN_14db8abcf(void)

/* WARNING: Removing unreachable block (ram,0x000166178455) */
/* WARNING: Removing unreachable block (ram,0x00014db8ac40) */
/* WARNING: Removing unreachable block (ram,0x00014db8ad6b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d8c91) */
/* WARNING: Removing unreachable block (ram,0x00014db8ad71) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db8abcf(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_20;
  ulonglong in_stack_00000028;
  
  uVar1 = ~(uStackX_20 & unaff_R15) & (uStackX_20 | unaff_R15);
  lVar2 = in_stack_00000028 + unaff_R15 + (in_stack_00000028 & unaff_R15) * -2;
  uStackX_20._0_2_ = (ushort)uVar1;
  uStackX_20._0_2_ = (-0x101 - ((ushort)uStackX_20 | 0xfeff)) + (ushort)uStackX_20;
  *(undefined8 *)(lVar2 + -8) = unaff_R14;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R14;
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)(((ushort)uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)uStackX_20 & 0x100) != 0) * 0x100 |
       (ulonglong)(((ushort)uStackX_20 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)uStackX_20 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)uStackX_20 & 4) != 0) * 4 | (ulonglong)(((ushort)uStackX_20 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar2 + -0x20) = 0x3b2975b;
  *(undefined4 *)(lVar2 + -0x1c) = 0;
  *(undefined8 *)(lVar2 + -0x28) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x30) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x38) = unaff_R12;
  *(code **)(lVar2 + -0x28) = FUN_14e236315;
  *(undefined8 *)(lVar2 + -0x30) = 0x162ed8551;
  return unaff_retaddr;
}



// FUNCTION 14db8ac40 FUN_14db8ac40 body=383 status=ok
// SIG undefined FUN_14db8ac40(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ad71) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db8ac40(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  longlong unaff_R13;
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
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar2 = *(undefined8 *)(unaff_R13 + -0x98);
  uVar1 = *(undefined8 *)(unaff_R13 + -0xa0);
  uVar3 = FUN_157187684();
  *(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2) =
       ~*(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2);
  *(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2) =
       *(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2) | ~uVar3;
  *(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2) =
       ~*(ulonglong *)(&stack0xfffffffff2c93eb5 + param_2);
  param_3 = param_3 + local_res20 * -2;
  bVar12 = (local_res18 & 0x4000) != 0;
  bVar11 = (local_res18 & 0x800) != 0;
  bVar10 = (local_res18 & 0x400) != 0;
  bVar9 = (local_res18 & 0x200) != 0;
  bVar8 = (local_res18 & 0x80) != 0;
  bVar7 = (local_res18 & 0x40) != 0;
  bVar6 = (local_res18 & 0x10) != 0;
  bVar5 = (local_res18 & 4) != 0;
  bVar4 = (local_res18 & 1) != 0;
  bVar14 = (uStackX_1a & 0x20) != 0;
  bVar13 = (uStackX_1a & 4) != 0;
  *(undefined8 *)(param_3 + -8) = in_stack_00000008;
  *(undefined8 *)(param_3 + -0x10) = in_stack_00000008;
  *(ulonglong *)(param_3 + -0x18) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
       (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x80 | (ulonglong)bVar7 * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar4 |
       (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined8 *)(param_3 + -0x20) = local_res10;
  *(undefined8 *)(param_3 + -0x28) = uVar2;
  *(ulonglong *)(param_3 + -0x30) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
       (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x80 | (ulonglong)bVar7 * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar4 |
       (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined8 *)(param_3 + -0x18) = uVar1;
  *(undefined8 *)(param_3 + -8) = 0x9be25c;
  uVar2 = FUN_14d85d504(*(undefined8 *)(param_3 + -0x20),unaff_RBP);
  return uVar2;
}



// FUNCTION 14db8ae14 FUN_14db8ae14 body=246 status=ok
// SIG undefined FUN_14db8ae14(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db8ae14(void)

{
  FUN_166a75bef(FUN_166a75bef);
  FUN_165268768();
  return;
}



// FUNCTION 14db8af0b FUN_14db8af0b body=143 status=ok
// SIG undefined FUN_14db8af0b(void)

/* WARNING: Removing unreachable block (ram,0x00014db8af9a) */
/* WARNING: Removing unreachable block (ram,0x00014db8af8a) */

undefined8
FUN_14db8af0b(short param_1,undefined8 param_2,short param_3,undefined8 param_4,undefined8 param_5,
             longlong param_6)

{
  undefined8 uVar1;
  short *unaff_RDI;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 uStackX_20;
  
  *unaff_RDI = (param_3 - param_1) + 1;
  *(undefined8 *)(param_6 + -8) = uStackX_20;
  *(undefined8 *)(param_6 + -0x10) = unaff_R14;
  *(undefined8 *)(param_6 + -0x10) = param_4;
  uVar1 = FUN_1569b0a11(&DAT_1569b0ab3,param_2,in_stack_00000008);
  return uVar1;
}



// FUNCTION 14db8af9a FUN_14db8af9a body=81 status=ok
// SIG undefined FUN_14db8af9a(void)

void FUN_14db8af9a(undefined8 param_1)

{
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  ulonglong uVar1;
  ulonglong local_res8;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x28) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x20) = *(undefined8 *)(local_res10 + -0x28);
  *(undefined1 **)(local_res10 + -0x18) = &LAB_14db8afee;
  return;
}



// FUNCTION 14db8b120 FUN_14db8b120 body=133 status=ok
// SIG undefined FUN_14db8b120(void)

/* WARNING: Removing unreachable block (ram,0x000166daefe9) */
/* WARNING: Removing unreachable block (ram,0x000162212289) */
/* WARNING: Removing unreachable block (ram,0x00014db8b237) */
/* WARNING: Removing unreachable block (ram,0x00014db8b349) */
/* WARNING: Removing unreachable block (ram,0x0001622121ef) */
/* WARNING: Removing unreachable block (ram,0x000162212283) */
/* WARNING: Removing unreachable block (ram,0x00016101b41a) */
/* WARNING: Removing unreachable block (ram,0x00014db8b355) */

undefined8 FUN_14db8b120(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  code *pcVar10;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  ulonglong *local_res10;
  
  local_res10[-2] = in_R10;
  local_res10[-1] = param_4;
  pcVar10 = FUN_15afba6ff;
  local_res10[-3] = (ulonglong)FUN_14db8b1a8;
  uVar9 = FUN_15afba6ff(unaff_retaddr,param_2);
  uVar4 = *local_res10;
  local_res10[1] = unaff_RBX;
  uVar5 = local_res10[1];
  local_res10[1] = uVar9;
  *(undefined4 *)(local_res10 + 1) = 0;
  ((ushort *)((longlong)local_res10 + 0xc))[0] = 0;
  ((ushort *)((longlong)local_res10 + 0xc))[1] = 0;
  lVar6 = local_res10[1];
  local_res10[1] = unaff_retaddr;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x90);
  local_res10[1] = *(undefined8 *)(unaff_R12 + -0x68);
  *local_res10 = (ulonglong)pcVar10;
  local_res10[-1] = (ulonglong)pcVar10;
  local_res10[-2] = uVar5;
  uVar5 = *(ulonglong *)(unaff_R12 + -8);
  uVar3 = local_res10[-2];
  *local_res10 = 0;
  *local_res10 = *local_res10 ^ uVar5;
  uVar5 = local_res10[-1];
  local_res10[-1] = *(undefined8 *)(unaff_R12 + -0x98);
  local_res10[-2] = uVar4;
  uVar8 = local_res10[-2];
  local_res10[-2] = uVar1 ^ uVar9;
  local_res10[-3] = uVar3;
  uVar1 = local_res10[-1];
  local_res10[-1] = ~local_res10[-1];
  local_res10[-1] = local_res10[-1] | uVar9;
  local_res10[-1] = ~((~uVar9 | uVar1) & local_res10[-1]);
  *local_res10 = *local_res10 ^ uVar9;
  local_res10[-2] = param_4;
  uVar1 = local_res10[1];
  local_res10[1] = local_res10[1] & uVar9;
  local_res10[1] = ~local_res10[1];
  local_res10[1] = local_res10[1] & (uVar1 | uVar9);
  uVar7 = local_res10[-2];
  uVar2 = local_res10[-1];
  local_res10[-1] = uVar8;
  local_res10[-2] = lVar6 + (unaff_RSI - uVar9) + (~uVar9 | unaff_RSI) * -2 + -2;
  local_res10[-3] = uVar5;
  *(ushort *)local_res10 = ~(ushort)*local_res10;
  *(ushort *)local_res10 = (ushort)*local_res10 | 0x100;
  *(ushort *)local_res10 = ~(ushort)*local_res10;
  uVar8 = local_res10[-1];
  lVar6 = local_res10[1];
  *(undefined8 *)(lVar6 + -8) = param_3;
  *(undefined8 *)(lVar6 + -0x10) = uVar8;
  *(undefined8 *)(lVar6 + -0x18) = uVar7;
  *(undefined8 *)(lVar6 + -0x20) = uVar7;
  *(undefined8 *)(lVar6 + -0x28) = uVar7;
  *(code **)(lVar6 + -0x18) = FUN_162e5812a;
  *(undefined **)(lVar6 + -0x20) = &DAT_1648063eb;
  return uVar2;
}



// FUNCTION 14db8b1a8 FUN_14db8b1a8 body=758 status=ok
// SIG undefined FUN_14db8b1a8(void)

/* WARNING: Removing unreachable block (ram,0x000166daefe9) */
/* WARNING: Removing unreachable block (ram,0x000162212289) */
/* WARNING: Removing unreachable block (ram,0x00014db8b237) */
/* WARNING: Removing unreachable block (ram,0x00014db8b349) */
/* WARNING: Removing unreachable block (ram,0x0001622121ef) */
/* WARNING: Removing unreachable block (ram,0x000162212283) */
/* WARNING: Removing unreachable block (ram,0x00016101b41a) */
/* WARNING: Removing unreachable block (ram,0x00014db8b355) */

ulonglong FUN_14db8b1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res10;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x98);
  uVar1 = ~(*(ulonglong *)(unaff_R12 + -0x68) & in_RAX) &
          (*(ulonglong *)(unaff_R12 + -0x68) | in_RAX);
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined8 *)(uVar1 - 0x28) = param_4;
  *(code **)(uVar1 - 0x18) = FUN_162e5812a;
  *(undefined **)(uVar1 - 0x20) = &DAT_1648063eb;
  return ~((~in_RAX | uVar2) & (~uVar2 | in_RAX));
}



// FUNCTION 14db8b411 FUN_14db8b411 body=144 status=ok
// SIG undefined FUN_14db8b411(void)

void FUN_14db8b411(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xfc39e) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 != 0xfc494) {
    FUN_161963417(FUN_161963417);
    return;
  }
  FUN_1574ba9da();
  return;
}



// FUNCTION 14db8b548 FUN_14db8b548 body=149 status=ok
// SIG undefined FUN_14db8b548(void)

void FUN_14db8b548(undefined8 param_1)

{
  (*(code *)0x1574bf007)(param_1);
  return;
}



// FUNCTION 14db8b679 FUN_14db8b679 body=123 status=ok
// SIG undefined FUN_14db8b679(void)

void FUN_14db8b679(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_1572c6172(param_1,param_2,local_res8,param_4,param_3);
  FUN_166c5a6f6();
  return;
}



// FUNCTION 14db8b6f6 FUN_14db8b6f6 body=128 status=ok
// SIG undefined FUN_14db8b6f6(void)

void FUN_14db8b6f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166c5a6f6(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db8b803 FUN_14db8b803 body=189 status=ok
// SIG undefined FUN_14db8b803(void)

/* WARNING: Instruction at (ram,0x00014db8b817) overlaps instruction at (ram,0x00014db8b814)
    */

undefined8 FUN_14db8b803(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  longlong unaff_R13;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  puVar5 = local_res8;
  if (unaff_RDI == unaff_RBP) {
    bVar6 = false;
  }
  else {
    uVar4 = ((int)in_RAX + -0xbbeae1) - (uint)(unaff_RDI < unaff_RBP);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    pbVar1 = (byte *)(param_1 + 3);
    bVar6 = CARRY1(*pbVar1,(byte)param_1);
    *pbVar1 = *pbVar1 + (byte)param_1;
    puVar5 = local_res10;
    in_RAX = 0x49df3349;
    in_R11 = unaff_RBX & 0xffffffff;
  }
  if (bVar6) {
    in_R11 = in_R11 + 1;
  }
  *(longlong *)(puVar5 + -8) = param_1;
  *(ulonglong *)(puVar5 + -8) = *(longlong *)(puVar5 + -8) - in_R11;
  *(undefined8 *)(puVar5 + -8) = in_RAX;
  *(undefined8 *)(puVar5 + -0x10) = unaff_RSI;
  plVar2 = (longlong *)(puVar5 + -0x18);
  *plVar2 = unaff_R13;
  *plVar2 = *plVar2 + -0x28;
  uVar3 = *(undefined8 *)*plVar2;
  *(longlong *)(puVar5 + -0x10) = unaff_R13;
  *(longlong *)(puVar5 + -0x18) = unaff_R13;
  *(longlong *)(puVar5 + -0x20) = unaff_R13;
  *(code **)(puVar5 + -0x10) = FUN_14db8b8c6;
  *(undefined1 **)(puVar5 + -0x18) = &LAB_15b819576;
  return uVar3;
}



// FUNCTION 14db8b8c6 FUN_14db8b8c6 body=286 status=ok
// SIG undefined FUN_14db8b8c6(void)

void FUN_14db8b8c6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  FUN_165a52c55(param_1,(~(*(ulonglong *)(unaff_RDI - 0x88) & param_1) + param_1) -
                        ~*(ulonglong *)(unaff_RDI - 0x88));
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) & unaff_RBX;
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(undefined8 *)(unaff_R12 + 0x10) = 0;
  *(longlong *)(unaff_R12 + 0x10) =
       *(longlong *)(unaff_R12 + 0x10) - (unaff_RDI & uVar1 ^ 0xffffffffffffffff);
  *(longlong *)(unaff_R12 + 0x10) = -*(longlong *)(unaff_R12 + 0x10);
  FUN_15b901454(param_1);
  return;
}



// FUNCTION 14db8b9e7 FUN_14db8b9e7 body=181 status=ok
// SIG undefined FUN_14db8b9e7(void)

void FUN_14db8b9e7(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  
  param_2 = param_2 ^ *(ulonglong *)(unaff_RDI + -0x68);
  (*(code *)0x14e1ac578)
            (param_1,(~(~param_1 & param_2) + param_2) - param_1 &
                     (~param_2 + param_1) - (~param_2 & param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14db8ba71 FUN_14db8ba71 body=15 status=ok
// SIG undefined FUN_14db8ba71(void)

void FUN_14db8ba71(void)

{
  return;
}



// FUNCTION 14db8ba80 FUN_14db8ba80 body=742 status=ok
// SIG undefined FUN_14db8ba80(void)

/* WARNING: Removing unreachable block (ram,0x00014db8bc22) */
/* WARNING: Removing unreachable block (ram,0x00014db8bc5c) */
/* WARNING: Removing unreachable block (ram,0x00014db8bc63) */
/* WARNING: Removing unreachable block (ram,0x00014db8bc17) */

void FUN_14db8ba80(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong unaff_RDI;
  undefined8 uVar7;
  longlong unaff_retaddr;
  longlong lStackX_10;
  
  uVar7 = 0x97bd5bbe;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x78);
  FUN_161dfbe1b();
  lVar3 = *(longlong *)(unaff_RDI + -0x90);
  FUN_165120824();
  uVar4 = *(ulonglong *)(unaff_retaddr + 0x10);
  lVar5 = *(longlong *)(unaff_retaddr + 0x10);
  *(longlong *)(unaff_retaddr + 0x10) = -*(longlong *)(unaff_retaddr + 0x10);
  *(longlong *)(unaff_retaddr + 0x10) = *(longlong *)(unaff_retaddr + 0x10) + -1;
  *(ulonglong *)(unaff_retaddr + 0x10) = *(ulonglong *)(unaff_retaddr + 0x10) | uVar2;
  *(ulonglong *)(unaff_retaddr + 0x10) =
       ~((~(~uVar2 & uVar4) + lVar5) - uVar2 & *(ulonglong *)(unaff_retaddr + 0x10));
  plVar1 = (longlong *)(lStackX_10 + -8);
  *plVar1 = lVar3;
  *(longlong *)(lStackX_10 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x16172a6db;
  *plVar1 = -*plVar1;
  uVar6 = *(undefined8 *)(lStackX_10 + -0x10);
  *(undefined8 *)(lStackX_10 + -0x10) = uVar7;
  *(undefined8 *)(lStackX_10 + -0x18) = uVar7;
  *(undefined8 *)(lStackX_10 + -0x20) = uVar6;
  *(undefined **)(lStackX_10 + -0x10) = &DAT_14d7c3045;
  *(undefined1 **)(lStackX_10 + -0x20) = &LAB_16172a6b9;
  return;
}



// FUNCTION 14db8bdfc FUN_14db8bdfc body=302 status=ok
// SIG undefined FUN_14db8bdfc(void)

/* WARNING: Instruction at (ram,0x00014db8bf1b) overlaps instruction at (ram,0x00014db8bf18)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db8becf) */
/* WARNING: Removing unreachable block (ram,0x00014db8bed1) */
/* WARNING: Removing unreachable block (ram,0x00014db8bf1b) */
/* WARNING: Removing unreachable block (ram,0x00014db8bed3) */
/* WARNING: Removing unreachable block (ram,0x00014db8be84) */
/* WARNING: Removing unreachable block (ram,0x00014db8bed2) */
/* WARNING: Removing unreachable block (ram,0x00014db8bed9) */
/* WARNING: Removing unreachable block (ram,0x00014db8be5a) */

void FUN_14db8bdfc(longlong param_1)

{
  longlong local_res20;
  
  local_res20 = param_1 - local_res20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (-1 < (longlong)&local_res20) {
    return;
  }
  FUN_162f0d0e7();
  return;
}



// FUNCTION 14db8bf2e FUN_14db8bf2e body=135 status=ok
// SIG undefined FUN_14db8bf2e(void)

void FUN_14db8bf2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_16533dce0(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14db8c1bf FUN_14db8c1bf body=344 status=ok
// SIG undefined FUN_14db8c1bf(void)

/* WARNING: Removing unreachable block (ram,0x00014db8c252) */
/* WARNING: Removing unreachable block (ram,0x00014db8c2db) */
/* WARNING: Removing unreachable block (ram,0x00014db8c2e1) */
/* WARNING: Removing unreachable block (ram,0x000165de192f) */
/* WARNING: Removing unreachable block (ram,0x000165de19bd) */
/* WARNING: Removing unreachable block (ram,0x000165de19c3) */
/* WARNING: Removing unreachable block (ram,0x000164eef388) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db8c1bf(void)

{
  return;
}



// FUNCTION 14db8c252 FUN_14db8c252 body=866 status=ok
// SIG undefined FUN_14db8c252(void)

/* WARNING: Removing unreachable block (ram,0x000165de19c3) */
/* WARNING: Removing unreachable block (ram,0x00014db8c2e1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db8c252(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14dd96c44(param_1,param_2,local_res10,param_4);
  return;
}



// FUNCTION 14db8c41a FUN_14db8c41a body=238 status=ok
// SIG undefined FUN_14db8c41a(void)

/* WARNING: Removing unreachable block (ram,0x00014db8c49b) */

void FUN_14db8c41a(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined8 in_R10;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & unaff_RBX) & (local_res20 | unaff_RBX);
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined1 **)(uVar1 - 8) = &LAB_162126cf7;
  FUN_162126cc6((~(param_1 | unaff_RBX) |
                (~unaff_RBX | param_1) + unaff_RBX + 1 ^ 0xffffffffffffffff) + (param_1 | unaff_RBX)
                + 1,uVar2);
  return;
}



// FUNCTION 14db8c49b FUN_14db8c49b body=15 status=ok
// SIG undefined FUN_14db8c49b(void)

void FUN_14db8c49b(void)

{
  return;
}



// FUNCTION 14db8c54e FUN_14db8c54e body=463 status=ok
// SIG undefined FUN_14db8c54e(void)

/* WARNING: Removing unreachable block (ram,0x00014db8c5d5) */
/* WARNING: Removing unreachable block (ram,0x00014db8c5db) */

void FUN_14db8c54e(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_R13;
  undefined8 in_stack_00000020;
  ulonglong in_stack_00000038;
  
  uVar1 = ~(in_stack_00000038 & param_1) &
          ((-1 - (in_stack_00000038 & param_1)) + param_1) - ~in_stack_00000038;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000020;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000020;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 0x165f9261e;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_165f925f8;
  return;
}



// FUNCTION 14db8c71f FUN_14db8c71f body=122 status=ok
// SIG undefined FUN_14db8c71f(void)

/* WARNING: Removing unreachable block (ram,0x00014db8c776) */

void FUN_14db8c71f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x161385dbc)(in_stack_00000010,param_2,param_3);
  return;
}



// FUNCTION 14db8c79a FUN_14db8c79a body=141 status=ok
// SIG undefined FUN_14db8c79a(void)

void FUN_14db8c79a(undefined8 param_1,undefined8 param_2)

{
  FUN_164fb83b5(param_1,param_2,FUN_164fb83b5);
  return;
}



// FUNCTION 14db8c8a6 FUN_14db8c8a6 body=280 status=ok
// SIG undefined FUN_14db8c8a6(void)

/* WARNING: Removing unreachable block (ram,0x00014db8c9be) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 FUN_14db8c8a6(void)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar2 = FUN_1615b5684();
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58) ^ uVar2;
  if (*(longlong *)(unaff_R12 + -0x78) + uVar2 == 0) {
    uVar1 = FUN_1625cff41(uVar3);
    return uVar1;
  }
  uVar1 = FUN_1625cff41(uVar3);
  return uVar1;
}



// FUNCTION 14db8c9be FUN_14db8c9be body=164 status=ok
// SIG undefined FUN_14db8c9be(void)

ushort FUN_14db8c9be(void)

{
  undefined2 local_res18;
  
  return ~(~local_res18 & 0xfeff);
}



// FUNCTION 14db8ca65 FUN_14db8ca65 body=263 status=ok
// SIG undefined FUN_14db8ca65(void)

/* WARNING: Removing unreachable block (ram,0x00014db8caf4) */

void FUN_14db8ca65(undefined8 param_1)

{
  undefined8 *unaff_RBX;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  if (((ulonglong)unaff_RBX & ((unaff_retaddr ^ 0x7c95c6ac) >> 1 ^ unaff_retaddr << 0x3f)) == 0) {
    *unaff_RBX = in_stack_00000008;
    thunk_FUN_156b249bc(param_1);
    return;
  }
  FUN_1563a1c8f();
  (*(code *)0x16578ee58)();
  return;
}



// FUNCTION 14db8cc17 FUN_14db8cc17 body=147 status=ok
// SIG undefined FUN_14db8cc17(void)

longlong FUN_14db8cc17(void)

{
  longlong in_R9;
  longlong unaff_R12;
  
  return in_R9 - unaff_R12;
}



// FUNCTION 14db8cd55 FUN_14db8cd55 body=126 status=ok
// SIG undefined FUN_14db8cd55(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ce7e) */

void FUN_14db8cd55(void)

{
  FUN_1627d9264();
  return;
}



// FUNCTION 14db8cdd4 FUN_14db8cdd4 body=173 status=ok
// SIG undefined FUN_14db8cdd4(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ce7e) */

void FUN_14db8cdd4(void)

{
  return;
}



// FUNCTION 14db8ce84 FUN_14db8ce84 body=168 status=ok
// SIG undefined FUN_14db8ce84(void)

/* WARNING: Removing unreachable block (ram,0x00014db8cf21) */
/* WARNING: Removing unreachable block (ram,0x00014db8cf27) */
/* WARNING: Removing unreachable block (ram,0x00014db8cf2c) */

void FUN_14db8ce84(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  FUN_165b56ab8(param_1,in_RAX & (~param_2 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14db8cf2c thunk_FUN_14db8cf32 body=5 status=ok
// SIG undefined thunk_FUN_14db8cf32(void)

void thunk_FUN_14db8cf32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = unaff_retaddr;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -0x18) = uStackX_8;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_RBX;
  *(undefined1 **)(lStackX_18 + -0x28) = &LAB_166d32a63;
  *(undefined4 *)(lStackX_18 + -0x28) = 0x53289931;
  *(undefined4 *)(lStackX_18 + -0x24) = 0;
  uVar3 = *(ulonglong *)(lStackX_18 + -0x28) ^ 0x778435f7;
  *(undefined8 *)(lStackX_18 + -0x28) = param_1;
  uVar3 = ~((~uVar3 | 0x24acacce) & (uVar3 | 0xffffffffdb535331));
  uVar2 = *(undefined8 *)(lStackX_18 + -0x28);
  *(undefined8 *)(lStackX_18 + -0x10 + uVar3) = 0;
  plVar1 = (longlong *)(lStackX_18 + -0x10 + uVar3);
  *plVar1 = *plVar1 + -0x166d32a63;
  plVar1 = (longlong *)(lStackX_18 + -0x10 + uVar3);
  *plVar1 = -*plVar1;
  FUN_166d32a09(uVar2,param_2,param_3,*(undefined8 *)(lStackX_18 + -0x18));
  return;
}



// FUNCTION 14db8cf32 FUN_14db8cf32 body=141 status=ok
// SIG undefined FUN_14db8cf32(void)

void FUN_14db8cf32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_166d32a63;
  *(undefined4 *)(local_res18 + -0x28) = 0x53289931;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar3 = *(ulonglong *)(local_res18 + -0x28) ^ 0x778435f7;
  *(undefined8 *)(local_res18 + -0x28) = param_1;
  uVar3 = ~((~uVar3 | 0x24acacce) & (uVar3 | 0xffffffffdb535331));
  uVar2 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x10 + uVar3) = 0;
  plVar1 = (longlong *)(local_res18 + -0x10 + uVar3);
  *plVar1 = *plVar1 + -0x166d32a63;
  plVar1 = (longlong *)(local_res18 + -0x10 + uVar3);
  *plVar1 = -*plVar1;
  FUN_166d32a09(uVar2,param_2,param_3,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14db8d0e5 FUN_14db8d0e5 body=21 status=ok
// SIG undefined FUN_14db8d0e5(void)

void FUN_14db8d0e5(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14db8d17a FUN_14db8d17a body=146 status=ok
// SIG undefined FUN_14db8d17a(void)

void FUN_14db8d17a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1647d3901)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14db8d20d FUN_14db8d20d body=142 status=ok
// SIG undefined FUN_14db8d20d(void)

void FUN_14db8d20d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_1617fbf02(1,FUN_1617fbf02,param_3,local_res10);
  return;
}



// FUNCTION 14db8d396 FUN_14db8d396 body=109 status=ok
// SIG undefined FUN_14db8d396(void)

void FUN_14db8d396(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R14;
  longlong lVar2;
  ulonglong in_stack_00000008;
  undefined8 uStackX_10;
  longlong lStackX_20;
  
  if (-1 < (longlong)in_stack_00000008) {
    FUN_1649baf8e();
    return;
  }
  lVar2 = unaff_R14 >> ((byte)param_1 & 0x3f);
  uVar1 = in_stack_00000008 & 0x7fffffffffffffff;
  FUN_1649baf0d();
  *(longlong *)(&stack0x00000008 + lVar2) = *(longlong *)(&stack0x00000008 + lVar2) - param_4;
  *(longlong *)(&stack0x00000008 + lVar2) = -*(longlong *)(&stack0x00000008 + lVar2);
  *(undefined8 *)(lStackX_20 + -8) = unaff_RBP;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_RBX;
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_RBX;
  *(undefined8 *)(lStackX_20 + -0x20) = uStackX_10;
  *(undefined8 *)(lStackX_20 + -0x28) = param_1;
  *(undefined4 *)(lStackX_20 + -0x28) = 0xaa742faf;
  *(undefined4 *)(lStackX_20 + -0x24) = 0xffffffff;
  *(undefined8 *)(lStackX_20 + -0x10) =
       *(undefined8 *)(lStackX_20 + *(longlong *)(lStackX_20 + -0x28) + 0x558bd049);
  *(undefined8 *)(lStackX_20 + -8) = 0;
  *(undefined8 *)(lStackX_20 + -8) = *(undefined8 *)(lStackX_20 + -8);
  *(ulonglong *)(lStackX_20 + -8) = *(ulonglong *)(lStackX_20 + -8) ^ 0x1572e8869;
  *(ulonglong *)(lStackX_20 + -0x10) = uVar1;
  *(ulonglong *)(lStackX_20 + -0x18) = uVar1;
  *(code **)(lStackX_20 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(lStackX_20 + -0x20) = param_3;
  *(undefined8 *)(lStackX_20 + -0x28) = param_3;
  *(code **)(lStackX_20 + -0x20) = FUN_14db8d4c2;
  FUN_1572e8841();
  return;
}



// FUNCTION 14db8d405 FUN_14db8d405 body=188 status=ok
// SIG undefined FUN_14db8d405(void)

void FUN_14db8d405(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong alStackX_10 [2];
  ushort local_res20;
  
  *(longlong *)((longlong)alStackX_10 + unaff_RBP) =
       *(longlong *)((longlong)alStackX_10 + unaff_RBP) - param_4;
  *(longlong *)((longlong)alStackX_10 + unaff_RBP) =
       -*(longlong *)((longlong)alStackX_10 + unaff_RBP);
  local_res20 = local_res20 & 0xfeff;
  *(longlong *)(param_5 + -8) = alStackX_10[0];
  *(undefined8 *)(param_5 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x18) = unaff_RBX;
  *(longlong *)(param_5 + -0x20) = alStackX_10[1];
  *(undefined8 *)(param_5 + -0x28) = local_res8;
  *(undefined4 *)(param_5 + -0x28) = 0xaa742faf;
  *(undefined4 *)(param_5 + -0x24) = 0xffffffff;
  *(undefined8 *)(param_5 + -0x10) =
       *(undefined8 *)(param_5 + *(longlong *)(param_5 + -0x28) + 0x558bd049);
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -8);
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x1572e8869;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = in_R11;
  *(undefined8 *)(param_5 + -0x18) = in_R11;
  *(code **)(param_5 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(code **)(param_5 + -0x20) = FUN_14db8d4c2;
  FUN_1572e8841(param_1,param_2,*(undefined8 *)(param_5 + -0x28),uVar1);
  return;
}



// FUNCTION 14db8d4c2 FUN_14db8d4c2 body=162 status=ok
// SIG undefined FUN_14db8d4c2(void)

void FUN_14db8d4c2(void)

{
  return;
}



// FUNCTION 14db8d566 FUN_14db8d566 body=347 status=ok
// SIG undefined FUN_14db8d566(void)

/* WARNING: Removing unreachable block (ram,0x00014db8d60a) */
/* WARNING: Removing unreachable block (ram,0x00014db8d610) */
/* WARNING: Removing unreachable block (ram,0x00014db8d615) */

undefined8 FUN_14db8d566(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = FUN_165f6f82e(unaff_RDI ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return uVar1;
}



// FUNCTION 14db8d742 FUN_14db8d742 body=31 status=ok
// SIG undefined FUN_14db8d742(void)

void FUN_14db8d742(void)

{
  return;
}



// FUNCTION 14db8d8b2 FUN_14db8d8b2 body=125 status=ok
// SIG undefined FUN_14db8d8b2(void)

void FUN_14db8d8b2(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  uVar1 = param_2 + unaff_RDI;
  FUN_16206c7f9(param_1,-1 - ((~in_RAX | uVar1) & (~(~uVar1 & in_RAX) + in_RAX) - uVar1));
  return;
}



// FUNCTION 14db8dc30 FUN_14db8dc30 body=140 status=ok
// SIG undefined FUN_14db8dc30(void)

void FUN_14db8dc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong in_RAX;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffa618a24 + in_RAX);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x88);
  puVar1[1] = puVar1[1];
  *puVar1 = unaff_R14;
  puVar1[-1] = unaff_R15;
  uVar2 = *puVar1;
  puVar1[1] = *(undefined8 *)(unaff_RDI + -0x90);
  *puVar1 = in_R11;
  puVar1[-1] = in_R11;
  puVar1[-2] = uVar2;
  puVar1[-3] = param_3;
  puVar1[-4] = param_3;
  puVar1[-3] = &DAT_14db8dcbe;
  FUN_160d57898(param_1,param_2,puVar1[-4]);
  return;
}



// FUNCTION 14db8dd4f FUN_14db8dd4f body=178 status=ok
// SIG undefined FUN_14db8dd4f(void)

void FUN_14db8dd4f(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + 0x10);
  *(undefined8 *)(unaff_RDI + 0x10) = 0x7a8247a2;
  uVar3 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | 0xffffffff857db85d;
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~(~(uVar3 & 0xffffffff857db85d) & *(ulonglong *)(unaff_RDI + 0x10));
  *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) - ~((~param_1 | uVar1) & uVar2);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) + 1;
  FUN_166d205b1();
  return;
}



// FUNCTION 14db8de02 FUN_14db8de02 body=173 status=ok
// SIG undefined FUN_14db8de02(void)

void FUN_14db8de02(void)

{
  return;
}



// FUNCTION 14db8df35 FUN_14db8df35 body=652 status=ok
// SIG undefined FUN_14db8df35(void)

/* WARNING: Removing unreachable block (ram,0x00014db8dfd0) */
/* WARNING: Removing unreachable block (ram,0x00014db8e05f) */
/* WARNING: Removing unreachable block (ram,0x00014db8e065) */
/* WARNING: Removing unreachable block (ram,0x00015725e059) */
/* WARNING: Removing unreachable block (ram,0x0001666c6b3a) */
/* WARNING: Removing unreachable block (ram,0x00014db8dfc5) */

void FUN_14db8df35(char param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  byte unaff_DIL;
  byte in_R10B;
  longlong in_R11;
  int unaff_retaddr;
  
  FUN_15725d719(unaff_retaddr + 1,
                param_2 - (in_R11 <<
                          ((param_1 - ~(~(in_R10B & (param_4 ^ 0x10)) & (unaff_DIL & 0x44 | 0xbb)) ^
                           0x10) & 0x3f)),0x5af313de,
                ~(*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP |
                 ~(*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP)));
  return;
}



// FUNCTION 14db8e19f FUN_14db8e19f body=400 status=ok
// SIG undefined FUN_14db8e19f(void)

/* WARNING: Removing unreachable block (ram,0x00014db8e23b) */

void FUN_14db8e19f(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  ulonglong local_res20;
  
  *(longlong *)(unaff_R13 + 8) = -*(longlong *)(unaff_R13 + 8);
  uVar2 = ~(local_res20 & param_1) & (local_res20 | param_1);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_retaddr;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 - 0x156c58dfb;
  *(undefined8 *)(uVar2 - 0x18) = param_3;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x30) = unaff_RBP;
  lVar3 = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x28) = in_RAX;
  *(undefined8 *)(uVar2 - 0x30) = unaff_RDI;
  *(longlong *)(uVar2 - 8) = -lVar3;
  *(undefined8 *)(uVar2 - 0x30) = 0x156c58d97;
  return;
}



// FUNCTION 14db8e3c0 FUN_14db8e3c0 body=153 status=ok
// SIG undefined FUN_14db8e3c0(void)

undefined8 FUN_14db8e3c0(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14db8e45c FUN_14db8e45c body=950 status=ok
// SIG undefined FUN_14db8e45c(void)

/* WARNING: Removing unreachable block (ram,0x00014db8e631) */
/* WARNING: Removing unreachable block (ram,0x00014db8e637) */
/* WARNING: Removing unreachable block (ram,0x00014db8e649) */
/* WARNING: Removing unreachable block (ram,0x00014db8e656) */
/* WARNING: Removing unreachable block (ram,0x00014db8e4d7) */
/* WARNING: Removing unreachable block (ram,0x00014db8e4dd) */
/* WARNING: Removing unreachable block (ram,0x00014db8e4f3) */
/* WARNING: Removing unreachable block (ram,0x00016503f906) */
/* WARNING: Removing unreachable block (ram,0x000162dfe3fd) */
/* WARNING: Removing unreachable block (ram,0x00016503f98a) */
/* WARNING: Removing unreachable block (ram,0x00016503f990) */
/* WARNING: Removing unreachable block (ram,0x00016503f99b) */
/* WARNING: Removing unreachable block (ram,0x0001612b709d) */
/* WARNING: Removing unreachable block (ram,0x00016503fa39) */
/* WARNING: Removing unreachable block (ram,0x00016503fa3f) */
/* WARNING: Removing unreachable block (ram,0x00016503fa4a) */
/* WARNING: Removing unreachable block (ram,0x00016503faef) */
/* WARNING: Removing unreachable block (ram,0x00016503faf5) */
/* WARNING: Removing unreachable block (ram,0x00016483eec1) */
/* WARNING: Removing unreachable block (ram,0x00016483ef49) */
/* WARNING: Removing unreachable block (ram,0x000165562e19) */
/* WARNING: Removing unreachable block (ram,0x000165562e9f) */
/* WARNING: Removing unreachable block (ram,0x000165562ea5) */
/* WARNING: Removing unreachable block (ram,0x000156ac874a) */
/* WARNING: Removing unreachable block (ram,0x00015b58c12b) */

void FUN_14db8e45c(void)

{
  FUN_15b58c12b();
  return;
}



// FUNCTION 14db8e823 FUN_14db8e823 body=192 status=ok
// SIG undefined FUN_14db8e823(void)

void FUN_14db8e823(void)

{
  (*(code *)&LAB_161829fb9)();
  return;
}



// FUNCTION 14db8e8e4 FUN_14db8e8e4 body=128 status=ok
// SIG undefined FUN_14db8e8e4(void)

void FUN_14db8e8e4(void)

{
  FUN_1624dcb05(0);
  return;
}



// FUNCTION 14db8e9fd FUN_14db8e9fd body=12 status=ok
// SIG undefined FUN_14db8e9fd(void)

void FUN_14db8e9fd(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14db8ea09 FUN_14db8ea09 body=200 status=ok
// SIG undefined FUN_14db8ea09(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ea97) */
/* WARNING: Removing unreachable block (ram,0x000162d697a6) */
/* WARNING: Removing unreachable block (ram,0x00014db8ea9d) */

undefined8 FUN_14db8ea09(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong in_R9;
  
  if (in_R9 == 0x2a48d) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (in_R9 != 0x2a48e) {
    if (in_R9 == 0x2a48f) {
      uVar1 = FUN_162d697a6();
      return uVar1;
    }
    uVar1 = FUN_162d697ee();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14db8ebd2 FUN_14db8ebd2 body=141 status=ok
// SIG undefined FUN_14db8ebd2(void)

/* WARNING: Removing unreachable block (ram,0x00014db8ec56) */
/* WARNING: Removing unreachable block (ram,0x00014db8ec61) */
/* WARNING: Removing unreachable block (ram,0x00014db8ec5c) */

void FUN_14db8ebd2(void)

{
  FUN_164af7801();
  return;
}



// FUNCTION 14db8ec61 FUN_14db8ec61 body=143 status=ok
// SIG undefined FUN_14db8ec61(void)

void FUN_14db8ec61(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_162f442eb(param_1,param_2,param_3 + 0x1f7ab436 + (param_3 & 0x1f7ab436) * -2);
  return;
}



// FUNCTION 14db8ecf0 FUN_14db8ecf0 body=172 status=ok
// SIG undefined FUN_14db8ecf0(void)

void FUN_14db8ecf0(undefined8 param_1,undefined8 param_2)

{
  FUN_162623ade(param_1,param_2,FUN_162623ade);
  return;
}



// FUNCTION 14db8ed9f FUN_14db8ed9f body=178 status=ok
// SIG undefined FUN_14db8ed9f(void)

void FUN_14db8ed9f(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1651b48a0(param_1,FUN_1651b48a0,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db8ee54 FUN_14db8ee54 body=107 status=ok
// SIG undefined FUN_14db8ee54(void)

undefined8 FUN_14db8ee54(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14db8efae FUN_14db8efae body=300 status=ok
// SIG undefined FUN_14db8efae(void)

/* WARNING: Removing unreachable block (ram,0x000162799b2f) */
/* WARNING: Removing unreachable block (ram,0x00014db8f034) */

void FUN_14db8efae(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if (*(longlong *)(unaff_RDI + -0x90) != 0) {
    FUN_16688df68();
    return;
  }
  FUN_165ff4a72(param_1,~(~uVar1 & ~param_1 | uVar1) | ~(0xffffffffffffffff - uVar1 | param_1),
                param_3);
  return;
}



// FUNCTION 14db8f0db FUN_14db8f0db body=63 status=ok
// SIG undefined FUN_14db8f0db(void)

void FUN_14db8f0db(void)

{
  return;
}



// FUNCTION 14db8f184 FUN_14db8f184 body=162 status=ok
// SIG undefined FUN_14db8f184(void)

void FUN_14db8f184(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161aa5faf(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14db8f409 FUN_14db8f409 body=156 status=ok
// SIG undefined FUN_14db8f409(void)

/* WARNING: Removing unreachable block (ram,0x00014db8f54a) */
/* WARNING: Removing unreachable block (ram,0x00014db8f550) */
/* WARNING: Removing unreachable block (ram,0x00014db8f555) */
/* WARNING: Removing unreachable block (ram,0x00014db8f49b) */
/* WARNING: Removing unreachable block (ram,0x00014db8f4a6) */
/* WARNING: Removing unreachable block (ram,0x0001616c5191) */
/* WARNING: Removing unreachable block (ram,0x00014db8f4a1) */

void FUN_14db8f409(void)

{
  FUN_156a587b6();
  return;
}



// FUNCTION 14db8f4a6 FUN_14db8f4a6 body=326 status=ok
// SIG undefined FUN_14db8f4a6(void)

/* WARNING: Removing unreachable block (ram,0x00014db8f54a) */
/* WARNING: Removing unreachable block (ram,0x00014db8f555) */
/* WARNING: Removing unreachable block (ram,0x00014db8f550) */

void FUN_14db8f4a6(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x15b5a73e5)
            (0xffffffffe9a89f3f,0x15b5a73e5,~-*(longlong *)(unaff_RSI + -0x60) + 1U ^ unaff_RBP,
             ~(*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP |
              ~(*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP)));
  return;
}



// FUNCTION 14db8f5ef FUN_14db8f5ef body=584 status=ok
// SIG undefined FUN_14db8f5ef(void)

/* WARNING: Removing unreachable block (ram,0x00014db8f67c) */
/* WARNING: Removing unreachable block (ram,0x00014db8f7ab) */
/* WARNING: Removing unreachable block (ram,0x000165f29909) */
/* WARNING: Removing unreachable block (ram,0x00014db8f7b1) */

void FUN_14db8f5ef(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db8f966 FUN_14db8f966 body=30 status=ok
// SIG undefined FUN_14db8f966(void)

void FUN_14db8f966(void)

{
  return;
}



// FUNCTION 14db8f9ea FUN_14db8f9ea body=183 status=ok
// SIG undefined FUN_14db8f9ea(void)

void FUN_14db8f9ea(void)

{
  return;
}



// FUNCTION 14db8faa9 FUN_14db8faa9 body=17 status=ok
// SIG undefined FUN_14db8faa9(void)

void FUN_14db8faa9(void)

{
  byte *unaff_R14;
  byte unaff_R15B;
  
  *unaff_R14 = ~unaff_R15B;
  FUN_15736cb9e();
  return;
}



// FUNCTION 14db8fb25 FUN_14db8fb25 body=156 status=ok
// SIG undefined FUN_14db8fb25(void)

void FUN_14db8fb25(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R12;
  
  (*(code *)0x16151e2f7)
            (2,*(undefined8 *)(unaff_R12 + -0x60),param_3 << 2,*(undefined8 *)(unaff_R12 + -0x60));
  return;
}



// FUNCTION 14db8fbc2 FUN_14db8fbc2 body=137 status=ok
// SIG undefined FUN_14db8fbc2(void)

void FUN_14db8fbc2(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RDI;
  ulonglong in_R11;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_15b2b8c55(unaff_RDI | ~param_2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_15b381839(unaff_R14 + unaff_R15 + (in_R11 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db8fc4d FUN_14db8fc4d body=163 status=ok
// SIG undefined FUN_14db8fc4d(void)

void FUN_14db8fc4d(void)

{
  ulonglong in_R11;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_15b381839(unaff_R14 + unaff_R15 + (in_R11 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db8fcf2 FUN_14db8fcf2 body=2 status=ok
// SIG undefined FUN_14db8fcf2(void)

void FUN_14db8fcf2(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = (~param_1 + uVar1) - (~param_1 & uVar1);
  (*(code *)&LAB_164a4bf7e)(param_1,uVar2,-1 - (uVar2 & (~uVar1 | param_1)),param_4 ^ param_1);
  return;
}



// FUNCTION 14db8fcf4 FUN_14db8fcf4 body=161 status=ok
// SIG undefined FUN_14db8fcf4(void)

void FUN_14db8fcf4(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = (~param_1 + uVar1) - (~param_1 & uVar1);
  (*(code *)&LAB_164a4bf7e)(param_1,uVar2,-1 - (uVar2 & (~uVar1 | param_1)),param_4 ^ param_1);
  return;
}



// FUNCTION 14db903d9 FUN_14db903d9 body=185 status=ok
// SIG undefined FUN_14db903d9(void)

void FUN_14db903d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_EBX;
  longlong in_R10;
  int local_res10 [6];
  undefined4 uStack0000000000000124;
  
  uStack0000000000000124 = 0x495d7a6c;
  (*(code *)&LAB_15b4ddc35)
            (param_1,unaff_EBX,param_3,*(int *)((longlong)local_res10 + in_R10) - unaff_EBX);
  return;
}



// FUNCTION 14db90493 FUN_14db90493 body=10 status=ok
// SIG undefined FUN_14db90493(void)

void FUN_14db90493(void)

{
  return;
}



// FUNCTION 14db90543 FUN_14db90543 body=269 status=ok
// SIG undefined FUN_14db90543(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db90648) overlaps instruction at (ram,0x00014db90647)
    */
/* WARNING: Removing unreachable block (ram,0x00014db90702) */
/* WARNING: Removing unreachable block (ram,0x00014db9065b) */
/* WARNING: Removing unreachable block (ram,0x00014db90667) */
/* WARNING: Removing unreachable block (ram,0x00014db906fc) */
/* WARNING: Removing unreachable block (ram,0x00014db906f1) */
/* WARNING: Removing unreachable block (ram,0x00015b4a4c8c) */
/* WARNING: Removing unreachable block (ram,0x00014db90662) */
/* WARNING: Removing unreachable block (ram,0x00014db90647) */

void FUN_14db90543(uint param_1)

{
  longlong lVar1;
  ulonglong unaff_R15;
  
  lVar1 = FUN_1565b800a();
  *(undefined4 *)
   (lVar1 + ((unaff_R15 | 0xffffffff8addb3ed) & (unaff_R15 ^ 0xffffffffffffffff | 0x75224c12) ^
            0xffffffffffffffff)) = 0;
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) ^ param_1;
  (*(code *)0x156ab335b)();
  return;
}



// FUNCTION 14db90791 FUN_14db90791 body=306 status=ok
// SIG undefined FUN_14db90791(void)

/* WARNING: Removing unreachable block (ram,0x00014db90827) */
/* WARNING: Removing unreachable block (ram,0x00014db90832) */
/* WARNING: Removing unreachable block (ram,0x00014db907b1) */
/* WARNING: Removing unreachable block (ram,0x00014db9082d) */

void FUN_14db90791(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1623fa1cb(param_1,*(undefined8 *)(unaff_RDI + -0x80),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  return;
}



// FUNCTION 14db909f2 FUN_14db909f2 body=297 status=ok
// SIG undefined FUN_14db909f2(void)

void FUN_14db909f2(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ushort uVar1;
  ushort unaff_BP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong in_stack_00000008;
  ulonglong local_res20;
  
  if (param_4 == 0x12b495) {
    return;
  }
  if ((param_4 < 0x12b495) && (0x12b495 < param_4)) {
    uVar1 = (ushort)*(undefined8 *)(unaff_RDI + -0xa0);
    uVar1 = (~(ushort)param_1 | uVar1) & (0xffff - uVar1 | (ushort)param_1);
    param_5 = param_5 ^ param_1;
    FUN_162984fe1(param_1,param_2,param_3,&param_5);
    uVar2 = ~(~(~local_res20 | *(ulonglong *)(in_stack_00000008 + -0x60)) |
             0xffffffffffffffff - (~*(ulonglong *)(in_stack_00000008 + -0x60) | local_res20)) ^
            0xffffffffffffffff;
    FUN_165079f75(~unaff_BP & uVar1,FUN_165079f75,CONCAT62((int6)(uVar2 >> 0x10),~unaff_BP | ~uVar1)
                  ,uVar2);
    return;
  }
  if (unaff_RSI == 0x12b502) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x12b503) {
    FUN_160dc550e();
    return;
  }
  FUN_160dc54d7();
  return;
}



// FUNCTION 14db90b1e FUN_14db90b1e body=156 status=ok
// SIG undefined FUN_14db90b1e(void)

void FUN_14db90b1e(void)

{
  ushort unaff_BP;
  ushort unaff_DI;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) |
           0xffffffffffffffff - (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)) ^
          0xffffffffffffffff;
  FUN_165079f75(~unaff_BP & ~unaff_DI,FUN_165079f75,
                CONCAT62((int6)(uVar1 >> 0x10),~unaff_BP | unaff_DI),uVar1);
  return;
}



// FUNCTION 14db90bbb FUN_14db90bbb body=128 status=ok
// SIG undefined FUN_14db90bbb(void)

void FUN_14db90bbb(void)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x1574d156d)(in_stack_00000010);
  return;
}



// FUNCTION 14db90ce1 FUN_14db90ce1 body=152 status=ok
// SIG undefined FUN_14db90ce1(void)

void FUN_14db90ce1(void)

{
  FUN_1568e58dc();
  return;
}



// FUNCTION 14db90e17 FUN_14db90e17 body=343 status=ok
// SIG undefined FUN_14db90e17(void)

/* WARNING: Removing unreachable block (ram,0x00014db90eb4) */
/* WARNING: Removing unreachable block (ram,0x00014db90eba) */

undefined8 FUN_14db90e17(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc1c77) {
    return in_RAX;
  }
  if (unaff_RSI == 0xc1c78) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14db912b0 FUN_14db912b0 body=127 status=ok
// SIG undefined FUN_14db912b0(void)

void FUN_14db912b0(void)

{
  return;
}



// FUNCTION 14db91330 FUN_14db91330 body=178 status=ok
// SIG undefined FUN_14db91330(void)

void FUN_14db91330(void)

{
  undefined8 unaff_retaddr;
  
  FUN_14df6f263(unaff_retaddr);
  return;
}



// FUNCTION 14db914f0 FUN_14db914f0 body=11 status=ok
// SIG undefined FUN_14db914f0(void)

void FUN_14db914f0(undefined8 param_1,undefined8 param_2)

{
  longlong in_R11;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + in_R11) = param_2;
  return;
}



// FUNCTION 14db9160d FUN_14db9160d body=59 status=ok
// SIG undefined FUN_14db9160d(void)

void FUN_14db9160d(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  FUN_14d85d504(param_1,uStackX_8);
  return;
}



// FUNCTION 14db9174a FUN_14db9174a body=199 status=ok
// SIG undefined FUN_14db9174a(void)

undefined8 FUN_14db9174a(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong in_R11;
  ulonglong uVar3;
  
  uVar3 = ~(~(unaff_RBX & 0xffffffffa60908ec) & (unaff_RBX | 0xffffffffa60908ec));
  lVar2 = *(longlong *)(unaff_RSI + 8 + in_R11);
  puVar1 = (ulonglong *)(unaff_RSI + 8 + in_R11);
  *puVar1 = *puVar1 | 0xffffffffae6f9bf2;
  *(ulonglong *)(unaff_RSI + 8 + in_R11) =
       -1 - ((~(~(uVar3 & 0xffffffffe62228de) & (uVar3 | 0xffffffffe62228de)) + lVar2 &
              0xffffffffae6f9bf2 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_RSI + 8 + in_R11));
  return in_RAX;
}



// FUNCTION 14db9199f FUN_14db9199f body=15 status=ok
// SIG undefined FUN_14db9199f(void)

void FUN_14db9199f(void)

{
  return;
}



// FUNCTION 14db91a6c FUN_14db91a6c body=165 status=ok
// SIG undefined FUN_14db91a6c(void)

void FUN_14db91a6c(undefined8 param_1)

{
  FUN_15749f862(param_1);
  return;
}



// FUNCTION 14db91cdb FUN_14db91cdb body=156 status=ok
// SIG undefined FUN_14db91cdb(void)

void FUN_14db91cdb(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R14 + (-~param_1 - param_3));
  *(undefined8 *)(unaff_R14 + 0x10) = 0;
  *(ulonglong *)(unaff_R14 + 0x10) = (~unaff_RBP | ~uVar1) + *(longlong *)(unaff_R14 + 0x10);
  *(undefined8 *)(param_6 + -8) = local_res20;
  *(undefined8 *)(param_6 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x20) = unaff_retaddr;
  FUN_16602a425(&DAT_16602a4a6,param_2,uStackX_8);
  return;
}



// FUNCTION 14db91d78 FUN_14db91d78 body=135 status=ok
// SIG undefined FUN_14db91d78(void)

void FUN_14db91d78(void)

{
  FUN_15698abab(0xff,FUN_15698abab);
  return;
}



// FUNCTION 14db91dff FUN_14db91dff body=280 status=ok
// SIG undefined FUN_14db91dff(void)

void FUN_14db91dff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R10;
  
  FUN_15767ac46();
  (*(code *)&LAB_16210a278)(in_R10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db91f18 FUN_14db91f18 body=12 status=ok
// SIG undefined FUN_14db91f18(void)

void FUN_14db91f18(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14db920ef FUN_14db920ef body=141 status=ok
// SIG undefined FUN_14db920ef(void)

void FUN_14db920ef(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16554e265(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14db922e0 FUN_14db922e0 body=443 status=ok
// SIG undefined FUN_14db922e0(void)

/* WARNING: Removing unreachable block (ram,0x00014db9235e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db922e0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db926b5 FUN_14db926b5 body=317 status=ok
// SIG undefined FUN_14db926b5(void)

void FUN_14db926b5(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x42af0) {
    return;
  }
  if (param_2 != 0x42b59) {
    FUN_15b6991ad(param_1,param_2);
    return;
  }
  FUN_15b69919b(param_1,&DAT_14d7b0a78);
  FUN_16274f6b2();
  return;
}



// FUNCTION 14db927f3 FUN_14db927f3 body=107 status=ok
// SIG undefined FUN_14db927f3(void)

void FUN_14db927f3(void)

{
  return;
}



// FUNCTION 14db92888 FUN_14db92888 body=116 status=ok
// SIG undefined FUN_14db92888(void)

/* WARNING: Removing unreachable block (ram,0x00014db9297c) */

void FUN_14db92888(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong unaff_RDI;
  undefined8 *puStackX_20;
  
  FUN_14e0797a7(param_1,(param_1 - (*(ulonglong *)(unaff_RDI + -0x68) | param_1)) +
                        *(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff);
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *puStackX_20 = FUN_14e0797a7;
  puStackX_20[-2] = param_4;
  puStackX_20[-3] = param_4;
  puStackX_20[-2] = &LAB_161a57353;
  return;
}



// FUNCTION 14db928fc FUN_14db928fc body=323 status=ok
// SIG undefined FUN_14db928fc(void)

/* WARNING: Removing unreachable block (ram,0x00014db9297c) */

void FUN_14db928fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  undefined8 uStackX_10;
  undefined8 *local_res20;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,uStackX_10);
  *local_res20 = unaff_RSI;
  local_res20[-2] = param_4;
  local_res20[-3] = param_4;
  local_res20[-2] = &LAB_161a57353;
  return;
}



// FUNCTION 14db92da2 FUN_14db92da2 body=318 status=ok
// SIG undefined FUN_14db92da2(void)

/* WARNING: Instruction at (ram,0x00014db92e0e) overlaps instruction at (ram,0x00014db92e0c)
    */
/* WARNING: Removing unreachable block (ram,0x000162d83ea5) */
/* WARNING: Removing unreachable block (ram,0x000162d83efd) */
/* WARNING: Removing unreachable block (ram,0x00014db92edf) */
/* WARNING: Removing unreachable block (ram,0x00014db92ecf) */
/* WARNING: Removing unreachable block (ram,0x00014db92ed9) */
/* WARNING: Removing unreachable block (ram,0x00014db92eea) */
/* WARNING: Removing unreachable block (ram,0x00015b83089c) */
/* WARNING: Removing unreachable block (ram,0x000162d83e9a) */
/* WARNING: Removing unreachable block (ram,0x00015b8308c5) */
/* WARNING: Removing unreachable block (ram,0x00015b8308cb) */
/* WARNING: Removing unreachable block (ram,0x00014db92e37) */
/* WARNING: Removing unreachable block (ram,0x00014db92e3d) */
/* WARNING: Removing unreachable block (ram,0x00016505478a) */
/* WARNING: Removing unreachable block (ram,0x00016505478f) */
/* WARNING: Removing unreachable block (ram,0x0001666f784f) */
/* WARNING: Removing unreachable block (ram,0x00014db92e0b) */
/* WARNING: Removing unreachable block (ram,0x000165054795) */
/* WARNING: Removing unreachable block (ram,0x000165054815) */
/* WARNING: Removing unreachable block (ram,0x000165054820) */
/* WARNING: Removing unreachable block (ram,0x00016505481b) */
/* WARNING: Removing unreachable block (ram,0x000162d83e05) */
/* WARNING: Removing unreachable block (ram,0x000166379b7a) */
/* WARNING: Removing unreachable block (ram,0x000166379b85) */
/* WARNING: Removing unreachable block (ram,0x000166379bf0) */
/* WARNING: Removing unreachable block (ram,0x000166379b80) */
/* WARNING: Removing unreachable block (ram,0x000166379b75) */

void FUN_14db92da2(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  (*(code *)0x1566ac0eb)(*(ulonglong *)(param_2 + -0x48) ^ in_R10);
  return;
}



// FUNCTION 14db92eea FUN_14db92eea body=154 status=ok
// SIG undefined FUN_14db92eea(void)

void FUN_14db92eea(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014db92f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res8,param_2);
  return;
}



// FUNCTION 14db93241 FUN_14db93241 body=116 status=ok
// SIG undefined FUN_14db93241(void)

/* WARNING: Removing unreachable block (ram,0x00014db93357) */
/* WARNING: Removing unreachable block (ram,0x00014db933c1) */
/* WARNING: Removing unreachable block (ram,0x00014db933c3) */
/* WARNING: Removing unreachable block (ram,0x00014db932cd) */
/* WARNING: Removing unreachable block (ram,0x000161202a7b) */
/* WARNING: Removing unreachable block (ram,0x000161202a80) */
/* WARNING: Removing unreachable block (ram,0x000166d37f33) */
/* WARNING: Removing unreachable block (ram,0x000161202a86) */

undefined8 FUN_14db93241(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db93357 FUN_14db93357 body=144 status=ok
// SIG undefined FUN_14db93357(void)

/* WARNING: Removing unreachable block (ram,0x00014db933c1) */

int FUN_14db93357(undefined8 param_1,uint param_2)

{
  uint in_EAX;
  
  return (param_2 - (in_EAX | param_2)) + in_EAX;
}



// FUNCTION 14db93492 FUN_14db93492 body=37 status=ok
// SIG undefined FUN_14db93492(void)

void FUN_14db93492(void)

{
  return;
}



// FUNCTION 14db935a6 FUN_14db935a6 body=144 status=ok
// SIG undefined FUN_14db935a6(void)

undefined8 FUN_14db935a6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db936d6 FUN_14db936d6 body=590 status=ok
// SIG undefined FUN_14db936d6(void)

/* WARNING: Removing unreachable block (ram,0x00014db9377d) */
/* WARNING: Removing unreachable block (ram,0x00014db93783) */
/* WARNING: Removing unreachable block (ram,0x00014db937f5) */
/* WARNING: Removing unreachable block (ram,0x00015b7f45e1) */
/* WARNING: Removing unreachable block (ram,0x00014db937fb) */

void FUN_14db936d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15afbc460(param_1,~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                         (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3);
  return;
}



// FUNCTION 14db938a2 FUN_14db938a2 body=289 status=ok
// SIG undefined FUN_14db938a2(void)

/* WARNING: Removing unreachable block (ram,0x00014db93942) */

void FUN_14db938a2(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x68) & param_1)) {
    FUN_15698bf9a();
    return;
  }
  FUN_15698bf9a();
  return;
}



// FUNCTION 14db93be3 FUN_14db93be3 body=274 status=ok
// SIG undefined FUN_14db93be3(void)

ulonglong FUN_14db93be3(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15691dc0f();
  return ~(*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15);
}



// FUNCTION 14db93cf6 FUN_14db93cf6 body=140 status=ok
// SIG undefined FUN_14db93cf6(void)

undefined8 FUN_14db93cf6(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14db93e1a FUN_14db93e1a body=756 status=ok
// SIG undefined FUN_14db93e1a(void)

/* WARNING: Removing unreachable block (ram,0x00014db93fd4) */

undefined8 FUN_14db93e1a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  lVar3 = -0x88;
  FUN_166d04f52();
  lVar1 = FUN_165499e1c(local_res10);
  uVar2 = (*(code *)0x16269e80a)(lVar3 + lVar1);
  return uVar2;
}



// FUNCTION 14db9430d FUN_14db9430d body=129 status=ok
// SIG undefined FUN_14db9430d(void)

void FUN_14db9430d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)
   ((~((unaff_R15 - (param_5 | unaff_R15)) + param_5) &
    (~(param_5 & unaff_R15) + unaff_R15) - ~param_5) - 8) = in_R11;
  (*(code *)&LAB_1624bad2c)(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14db9438e FUN_14db9438e body=160 status=ok
// SIG undefined FUN_14db9438e(void)

void FUN_14db9438e(void)

{
  FUN_161054291();
  return;
}



// FUNCTION 14db94753 FUN_14db94753 body=165 status=ok
// SIG undefined FUN_14db94753(void)

void FUN_14db94753(ulonglong param_1)

{
  longlong *plVar1;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  plVar1 = (longlong *)(in_stack_00000028 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  *(longlong *)(in_stack_00000028 - 0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = (longlong)(&LAB_15af9b6bc + *plVar1);
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RDI;
  FUN_15af9b690(in_stack_00000018);
  return;
}



// FUNCTION 14db94941 FUN_14db94941 body=294 status=ok
// SIG undefined FUN_14db94941(void)

/* WARNING: Removing unreachable block (ram,0x00014db94968) */
/* WARNING: Removing unreachable block (ram,0x00014db949ca) */

void FUN_14db94941(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  if (~*(ulonglong *)(unaff_RDI + -0x48) + unaff_retaddr <
      (~*(ulonglong *)(unaff_RDI + -0x48) & unaff_retaddr)) {
    FUN_156940309(unaff_retaddr,*(ulonglong *)(unaff_RDI + -0x68) ^ unaff_retaddr,param_3,param_4);
    return;
  }
  FUN_161a996ca();
  return;
}



// FUNCTION 14db94a6c thunk_FUN_14db94a72 body=5 status=ok
// SIG undefined thunk_FUN_14db94a72(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015ba4d076) overlaps instruction at (ram,0x00015ba4d073)
    */
/* WARNING: Removing unreachable block (ram,0x000160f0800f) */
/* WARNING: Removing unreachable block (ram,0x00014db94b93) */
/* WARNING: Removing unreachable block (ram,0x00014db94b99) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d111) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d117) */
/* WARNING: Removing unreachable block (ram,0x000161632d68) */
/* WARNING: Removing unreachable block (ram,0x000161632df9) */
/* WARNING: Removing unreachable block (ram,0x000161632dfe) */
/* WARNING: Removing unreachable block (ram,0x000161632e04) */
/* WARNING: Removing unreachable block (ram,0x000161632e09) */
/* WARNING: Removing unreachable block (ram,0x000161632f19) */
/* WARNING: Removing unreachable block (ram,0x000161632f1e) */
/* WARNING: Removing unreachable block (ram,0x000161632f24) */
/* WARNING: Removing unreachable block (ram,0x00014e226487) */
/* WARNING: Removing unreachable block (ram,0x0001669a2df3) */
/* WARNING: Removing unreachable block (ram,0x000160f07f8c) */
/* WARNING: Removing unreachable block (ram,0x0001669a2e97) */
/* WARNING: Removing unreachable block (ram,0x00014db94aa1) */
/* WARNING: Removing unreachable block (ram,0x0001563bed5a) */
/* WARNING: Removing unreachable block (ram,0x0001613a952e) */
/* WARNING: Removing unreachable block (ram,0x00014db94b0f) */
/* WARNING: Removing unreachable block (ram,0x00014db94b15) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d06d) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d078) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d076) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d099) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d0b0) */
/* WARNING: Removing unreachable block (ram,0x0001563bed31) */
/* WARNING: Removing unreachable block (ram,0x0001563bed5e) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d073) */
/* WARNING: Removing unreachable block (ram,0x0001613a94a3) */
/* WARNING: Removing unreachable block (ram,0x0001613a951d) */
/* WARNING: Removing unreachable block (ram,0x0001613a9529) */
/* WARNING: Removing unreachable block (ram,0x00015b067a40) */
/* WARNING: Removing unreachable block (ram,0x00015b067ac2) */
/* WARNING: Removing unreachable block (ram,0x00015b6647f4) */
/* WARNING: Removing unreachable block (ram,0x00015b067ac8) */
/* WARNING: Removing unreachable block (ram,0x0001563bedc3) */
/* WARNING: Removing unreachable block (ram,0x0001563bedce) */
/* WARNING: Removing unreachable block (ram,0x0001563bee74) */
/* WARNING: Removing unreachable block (ram,0x0001563bee7a) */
/* WARNING: Removing unreachable block (ram,0x0001563beee5) */
/* WARNING: Removing unreachable block (ram,0x0001563beeeb) */
/* WARNING: Removing unreachable block (ram,0x000161d2d111) */
/* WARNING: Removing unreachable block (ram,0x00016653aac0) */
/* WARNING: Removing unreachable block (ram,0x00016653ab3b) */
/* WARNING: Removing unreachable block (ram,0x00016653ab40) */
/* WARNING: Removing unreachable block (ram,0x00016653ab51) */
/* WARNING: Removing unreachable block (ram,0x0001563bedc9) */
/* WARNING: Removing unreachable block (ram,0x0001666ca6c7) */
/* WARNING: Removing unreachable block (ram,0x00016653ab56) */
/* WARNING: Removing unreachable block (ram,0x00014db94b06) */

undefined8 thunk_FUN_14db94a72(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R14;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = unaff_RBP | param_1;
  uVar3 = unaff_RBP & param_1;
  uVar2 = *(undefined8 *)(unaff_RDI + -0x98);
  uVar1 = FUN_1613e7e2d(param_1,param_2);
  uVar6 = ~((~uVar1 | *(ulonglong *)(unaff_R12 + -0x48)) &
           (*(ulonglong *)(unaff_R12 + -0x48) ^ 0xffffffffffffffff | uVar1));
  uVar7 = ~(*(ulonglong *)(unaff_R12 + -0x50) & uVar1) & (*(ulonglong *)(unaff_R12 + -0x50) | uVar1)
  ;
  if ((longlong)uVar7 < 0) {
    uVar2 = FUN_1669a2d68();
    return uVar2;
  }
  uVar4 = *(ulonglong *)(unaff_R12 + -0x90) ^ uVar1;
  uVar10 = *(undefined8 *)(unaff_R12 + -0x68);
  uVar9 = *(undefined8 *)(unaff_R12 + -8);
  lVar8 = (*(ulonglong *)(unaff_R12 + -0x98) & uVar1) << 1;
  uVar3 = FUN_1668a3af6(param_1,~(~uVar3 & uVar5));
  uVar1 = *(ulonglong *)(uVar6 - 0x38);
  uVar5 = uVar4 ^ 0xffffffffffffffff | uVar1;
  if (-1 < (longlong)uVar5) {
    uVar2 = FUN_166a56af4();
    return uVar2;
  }
  uVar2 = FUN_162727c58(~(uVar5 & (~(~uVar1 & uVar4) + uVar4) - uVar1),
                        *(ulonglong *)(uVar6 - 0x58) ^ uVar4,
                        (param_1 - ~(~uVar7 & ~uVar3)) + param_3,FUN_162727c58,in_R10,lVar8,uVar9,
                        uVar10,unaff_R14,uVar2);
  return uVar2;
}



// FUNCTION 14db94a72 FUN_14db94a72 body=869 status=ok
// SIG undefined FUN_14db94a72(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015ba4d076) overlaps instruction at (ram,0x00015ba4d073)
    */
/* WARNING: Removing unreachable block (ram,0x000160f0800f) */
/* WARNING: Removing unreachable block (ram,0x00014db94b93) */
/* WARNING: Removing unreachable block (ram,0x00014db94b99) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d111) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d117) */
/* WARNING: Removing unreachable block (ram,0x000161632d68) */
/* WARNING: Removing unreachable block (ram,0x000161632df9) */
/* WARNING: Removing unreachable block (ram,0x000161632dfe) */
/* WARNING: Removing unreachable block (ram,0x000161632e04) */
/* WARNING: Removing unreachable block (ram,0x000161632e09) */
/* WARNING: Removing unreachable block (ram,0x000161632f19) */
/* WARNING: Removing unreachable block (ram,0x000161632f1e) */
/* WARNING: Removing unreachable block (ram,0x000161632f24) */
/* WARNING: Removing unreachable block (ram,0x00014e226487) */
/* WARNING: Removing unreachable block (ram,0x0001669a2df3) */
/* WARNING: Removing unreachable block (ram,0x000160f07f8c) */
/* WARNING: Removing unreachable block (ram,0x0001669a2e97) */
/* WARNING: Removing unreachable block (ram,0x00014db94aa1) */
/* WARNING: Removing unreachable block (ram,0x0001563bed5a) */
/* WARNING: Removing unreachable block (ram,0x0001613a952e) */
/* WARNING: Removing unreachable block (ram,0x00014db94b0f) */
/* WARNING: Removing unreachable block (ram,0x00014db94b15) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d06d) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d078) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d076) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d099) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d0b0) */
/* WARNING: Removing unreachable block (ram,0x0001563bed31) */
/* WARNING: Removing unreachable block (ram,0x0001563bed5e) */
/* WARNING: Removing unreachable block (ram,0x00015ba4d073) */
/* WARNING: Removing unreachable block (ram,0x0001613a94a3) */
/* WARNING: Removing unreachable block (ram,0x0001613a951d) */
/* WARNING: Removing unreachable block (ram,0x0001613a9529) */
/* WARNING: Removing unreachable block (ram,0x00015b067a40) */
/* WARNING: Removing unreachable block (ram,0x00015b067ac2) */
/* WARNING: Removing unreachable block (ram,0x00015b6647f4) */
/* WARNING: Removing unreachable block (ram,0x00015b067ac8) */
/* WARNING: Removing unreachable block (ram,0x0001563bedc3) */
/* WARNING: Removing unreachable block (ram,0x0001563bedce) */
/* WARNING: Removing unreachable block (ram,0x0001563bee74) */
/* WARNING: Removing unreachable block (ram,0x0001563bee7a) */
/* WARNING: Removing unreachable block (ram,0x0001563beee5) */
/* WARNING: Removing unreachable block (ram,0x0001563beeeb) */
/* WARNING: Removing unreachable block (ram,0x000161d2d111) */
/* WARNING: Removing unreachable block (ram,0x00016653aac0) */
/* WARNING: Removing unreachable block (ram,0x00016653ab3b) */
/* WARNING: Removing unreachable block (ram,0x00016653ab40) */
/* WARNING: Removing unreachable block (ram,0x00016653ab51) */
/* WARNING: Removing unreachable block (ram,0x0001563bedc9) */
/* WARNING: Removing unreachable block (ram,0x0001666ca6c7) */
/* WARNING: Removing unreachable block (ram,0x00016653ab56) */
/* WARNING: Removing unreachable block (ram,0x00014db94b06) */

undefined8 FUN_14db94a72(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R14;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = unaff_RBP | param_1;
  uVar3 = unaff_RBP & param_1;
  uVar2 = *(undefined8 *)(unaff_RDI + -0x98);
  uVar1 = FUN_1613e7e2d(param_1,param_2);
  uVar6 = ~((~uVar1 | *(ulonglong *)(unaff_R12 + -0x48)) &
           (*(ulonglong *)(unaff_R12 + -0x48) ^ 0xffffffffffffffff | uVar1));
  uVar7 = ~(*(ulonglong *)(unaff_R12 + -0x50) & uVar1) & (*(ulonglong *)(unaff_R12 + -0x50) | uVar1)
  ;
  if ((longlong)uVar7 < 0) {
    uVar2 = FUN_1669a2d68();
    return uVar2;
  }
  uVar4 = *(ulonglong *)(unaff_R12 + -0x90) ^ uVar1;
  uVar10 = *(undefined8 *)(unaff_R12 + -0x68);
  uVar9 = *(undefined8 *)(unaff_R12 + -8);
  lVar8 = (*(ulonglong *)(unaff_R12 + -0x98) & uVar1) << 1;
  uVar3 = FUN_1668a3af6(param_1,~(~uVar3 & uVar5));
  uVar1 = *(ulonglong *)(uVar6 - 0x38);
  uVar5 = uVar4 ^ 0xffffffffffffffff | uVar1;
  if (-1 < (longlong)uVar5) {
    uVar2 = FUN_166a56af4();
    return uVar2;
  }
  uVar2 = FUN_162727c58(~(uVar5 & (~(~uVar1 & uVar4) + uVar4) - uVar1),
                        *(ulonglong *)(uVar6 - 0x58) ^ uVar4,
                        (param_1 - ~(~uVar7 & ~uVar3)) + param_3,FUN_162727c58,in_R10,lVar8,uVar9,
                        uVar10,unaff_R14,uVar2);
  return uVar2;
}



// FUNCTION 14db94cd2 FUN_14db94cd2 body=439 status=ok
// SIG undefined FUN_14db94cd2(void)

/* WARNING: Removing unreachable block (ram,0x00015b2d36a5) */
/* WARNING: Removing unreachable block (ram,0x00015b2d36ab) */
/* WARNING: Removing unreachable block (ram,0x00014db94d58) */
/* WARNING: Removing unreachable block (ram,0x00014db94dd5) */
/* WARNING: Removing unreachable block (ram,0x00016168915c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5473) */
/* WARNING: Removing unreachable block (ram,0x0001610c5479) */
/* WARNING: Removing unreachable block (ram,0x00014db94de1) */
/* WARNING: Removing unreachable block (ram,0x00015b0a5ead) */
/* WARNING: Removing unreachable block (ram,0x00014db94e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db94cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  ulonglong in_stack_00000008;
  ulonglong uStackX_18;
  
  lVar4 = uStackX_18 + in_RAX + (uStackX_18 & in_RAX) * -2;
  *(undefined8 *)(lVar4 + -8) = unaff_R13;
  *(ulonglong *)(lVar4 + -0x10) = unaff_R12 ^ in_RAX;
  *(undefined **)(lVar4 + -0x18) = &DAT_15433d866;
  lVar2 = *(longlong *)(lVar4 + -0x18);
  uVar3 = *(undefined8 *)(lVar4 + -0x10);
  *(ulonglong *)(lVar4 + -0x10) =
       ~((0xffffffffffffffff - in_RAX | in_stack_00000008) & (~in_stack_00000008 | in_RAX));
  *(undefined8 *)(lVar4 + -0x18) = in_R11;
  uVar1 = *(undefined8 *)(lVar4 + -0x10);
  *(undefined8 *)(lVar4 + -0x10) = uVar3;
  *(undefined8 *)(lVar4 + -0x18) = uVar3;
  *(longlong *)(lVar4 + -0x20) = lVar2 + -0x62656eb;
  *(undefined8 *)(lVar4 + -0x28) = uVar1;
  *(undefined4 *)(lVar4 + -0x28) = 0x9752f636;
  *(undefined4 *)(lVar4 + -0x24) = 0xffffffff;
  *(undefined8 *)(lVar4 + -0x28) = param_4;
  *(undefined8 *)(lVar4 + -0x30) = param_4;
  *(undefined1 **)(lVar4 + -0x28) = &LAB_1669c48c1;
  uVar3 = FUN_1628b2497(param_1,param_2,param_3,*(undefined8 *)(lVar4 + -0x30));
  return uVar3;
}



// FUNCTION 14db94ea7 FUN_14db94ea7 body=80 status=ok
// SIG undefined FUN_14db94ea7(void)

void FUN_14db94ea7(void)

{
  return;
}



// FUNCTION 14db9527d FUN_14db9527d body=159 status=ok
// SIG undefined FUN_14db9527d(void)

/* WARNING: Removing unreachable block (ram,0x00014db95500) */
/* WARNING: Removing unreachable block (ram,0x00014db95506) */
/* WARNING: Removing unreachable block (ram,0x000161890458) */
/* WARNING: Removing unreachable block (ram,0x000161890464) */
/* WARNING: Removing unreachable block (ram,0x00016189046b) */
/* WARNING: Removing unreachable block (ram,0x00014db955a0) */
/* WARNING: Removing unreachable block (ram,0x00014db955ac) */
/* WARNING: Removing unreachable block (ram,0x00014db955b1) */
/* WARNING: Removing unreachable block (ram,0x00014db95312) */
/* WARNING: Removing unreachable block (ram,0x00014db95318) */
/* WARNING: Removing unreachable block (ram,0x00014db9531d) */
/* WARNING: Removing unreachable block (ram,0x0001621f2eb8) */
/* WARNING: Removing unreachable block (ram,0x0001621f2f4f) */
/* WARNING: Removing unreachable block (ram,0x0001657cb1cb) */
/* WARNING: Removing unreachable block (ram,0x0001621f2f55) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fd7) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fdd) */
/* WARNING: Removing unreachable block (ram,0x0001621f2ffb) */
/* WARNING: Removing unreachable block (ram,0x0001621f3002) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba117) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba13c) */
/* WARNING: Removing unreachable block (ram,0x00014db9544d) */
/* WARNING: Removing unreachable block (ram,0x00014db95453) */
/* WARNING: Removing unreachable block (ram,0x00014db9545e) */
/* WARNING: Removing unreachable block (ram,0x00016554a877) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba141) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba144) */

undefined8 FUN_14db9527d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db9531d FUN_14db9531d body=311 status=ok
// SIG undefined FUN_14db9531d(void)

/* WARNING: Removing unreachable block (ram,0x00014db955a0) */
/* WARNING: Removing unreachable block (ram,0x00014db955ac) */
/* WARNING: Removing unreachable block (ram,0x00014db955b1) */
/* WARNING: Removing unreachable block (ram,0x00014db95500) */
/* WARNING: Removing unreachable block (ram,0x00014db95506) */
/* WARNING: Removing unreachable block (ram,0x000161890458) */
/* WARNING: Removing unreachable block (ram,0x000161890464) */
/* WARNING: Removing unreachable block (ram,0x00016189046b) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba141) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fdd) */
/* WARNING: Removing unreachable block (ram,0x0001621f2ffb) */
/* WARNING: Removing unreachable block (ram,0x0001621f3002) */
/* WARNING: Removing unreachable block (ram,0x00014db9545e) */
/* WARNING: Removing unreachable block (ram,0x0001621f2f55) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fd7) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba117) */

undefined8 FUN_14db9531d(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  longlong in_stack_00000020;
  
  *(longlong *)(unaff_RBP + 0xc0) = -*(longlong *)(unaff_RBP + 0xc0);
  *(longlong *)(unaff_RBP + 0xc0) = *(longlong *)(unaff_RBP + 0xc0) + -1;
  lVar1 = *(longlong *)(unaff_RBP + 0xc0);
  *(undefined8 *)(unaff_RBP + 0xc0) = 0;
  *(longlong *)(unaff_RBP + 0xc0) =
       *(longlong *)(unaff_RBP + 0xc0) - ((-~in_RAX - (param_1 + 2)) - lVar1);
  *(longlong *)(unaff_RBP + 0xc0) = -*(longlong *)(unaff_RBP + 0xc0);
  uVar2 = *(ulonglong *)(unaff_RBP + 0xc0);
  *(undefined8 *)(unaff_RBP + 0xc0) = 0;
  *(longlong *)(unaff_RBP + 0xc0) =
       *(longlong *)(unaff_RBP + 0xc0) + (unaff_R13 ^ 0xffffffffffffffff | ~uVar2);
  FUN_165bd7a5b();
  if (*(longlong *)(in_stack_00000020 + -0x50) != 0) {
    uVar3 = FUN_16475e72c(FUN_16475e72c,param_2);
    return uVar3;
  }
  uVar3 = FUN_1621f2eb8();
  return uVar3;
}



// FUNCTION 14db9545e FUN_14db9545e body=463 status=ok
// SIG undefined FUN_14db9545e(void)

/* WARNING: Removing unreachable block (ram,0x00014db955a0) */
/* WARNING: Removing unreachable block (ram,0x00014db955ac) */
/* WARNING: Removing unreachable block (ram,0x00014db95500) */
/* WARNING: Removing unreachable block (ram,0x00014db95506) */
/* WARNING: Removing unreachable block (ram,0x000161890458) */
/* WARNING: Removing unreachable block (ram,0x000161890464) */
/* WARNING: Removing unreachable block (ram,0x00016189046b) */
/* WARNING: Removing unreachable block (ram,0x00014db955b1) */

void FUN_14db9545e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16190c96c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db956c9 FUN_14db956c9 body=138 status=ok
// SIG undefined FUN_14db956c9(void)

undefined8 FUN_14db956c9(void)

{
  return 0x621e;
}



// FUNCTION 14db95754 FUN_14db95754 body=109 status=ok
// SIG undefined FUN_14db95754(void)

/* WARNING: Removing unreachable block (ram,0x00014db95781) */

undefined8 FUN_14db95754(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db957de FUN_14db957de body=115 status=ok
// SIG undefined FUN_14db957de(void)

void FUN_14db957de(void)

{
  return;
}



// FUNCTION 14db95865 FUN_14db95865 body=164 status=ok
// SIG undefined FUN_14db95865(void)

void FUN_14db95865(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b21920d(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db9598c FUN_14db9598c body=670 status=ok
// SIG undefined FUN_14db9598c(void)

/* WARNING: Instruction at (ram,0x00015b152347) overlaps instruction at (ram,0x00015b152346)
    */
/* WARNING: Removing unreachable block (ram,0x00015b15230e) */
/* WARNING: Removing unreachable block (ram,0x00015b152314) */
/* WARNING: Removing unreachable block (ram,0x00015b152347) */
/* WARNING: Removing unreachable block (ram,0x00015b152346) */
/* WARNING: Removing unreachable block (ram,0x00015b15234d) */
/* WARNING: Removing unreachable block (ram,0x00014db95b5d) */
/* WARNING: Removing unreachable block (ram,0x00014db95b63) */
/* WARNING: Removing unreachable block (ram,0x00014db95a36) */
/* WARNING: Removing unreachable block (ram,0x000165f96403) */
/* WARNING: Removing unreachable block (ram,0x000165f9646b) */
/* WARNING: Removing unreachable block (ram,0x00015b152264) */
/* WARNING: Removing unreachable block (ram,0x00015b152309) */
/* WARNING: Removing unreachable block (ram,0x000165f96471) */
/* WARNING: Removing unreachable block (ram,0x000165f96506) */
/* WARNING: Removing unreachable block (ram,0x000165f96517) */
/* WARNING: Removing unreachable block (ram,0x000165f9651d) */
/* WARNING: Removing unreachable block (ram,0x000162b124b7) */
/* WARNING: Removing unreachable block (ram,0x000166157d7b) */

void FUN_14db9598c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_15b642ca5(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db95be4 FUN_14db95be4 body=139 status=ok
// SIG undefined FUN_14db95be4(void)

void FUN_14db95be4(ulonglong param_1)

{
  ulonglong in_RAX;
  
  FUN_14dd5ff5a(param_1 ^ in_RAX);
  FUN_16699d9fb();
  return;
}



// FUNCTION 14db95c70 FUN_14db95c70 body=138 status=ok
// SIG undefined FUN_14db95c70(void)

void FUN_14db95c70(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_16699d9fb(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + param_1 + 1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~(param_2 & param_4) + param_4) - ~unaff_RBP & (~param_4 | param_1)));
  return;
}



// FUNCTION 14db95cfa FUN_14db95cfa body=125 status=ok
// SIG undefined FUN_14db95cfa(void)

void FUN_14db95cfa(void)

{
  ulonglong uVar1;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  *unaff_R13 = 0xffffffffffffffff - ~(~(~unaff_R15 | uVar1) | ~*unaff_R13);
  FUN_16646fe03();
  return;
}



// FUNCTION 14db95d79 FUN_14db95d79 body=146 status=ok
// SIG undefined FUN_14db95d79(void)

void FUN_14db95d79(void)

{
  FUN_1566a118f();
  return;
}



// FUNCTION 14db95e0c FUN_14db95e0c body=353 status=ok
// SIG undefined FUN_14db95e0c(void)

void FUN_14db95e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar5;
  uint unaff_R15D;
  bool bVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff12ca7a3 + unaff_R15D);
  *puVar1 = in_RAX;
  puVar1[-1] = unaff_RSI;
  uVar3 = puVar1[-1];
  bVar6 = (POPCOUNT(DAT_7ffe0190) & 1U) == 0;
  uVar2 = *puVar1;
  *puVar1 = uVar2;
  *(undefined4 *)puVar1 = 0x59885cb6;
  puVar1[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(DAT_7ffe0190 < '\0') * 0x80 |
               (ulonglong)(DAT_7ffe0190 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)bVar6 * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[-2] = CONCAT71(0x7ffe00,DAT_7ffe0190);
  puVar1[-3] = unaff_RDI;
  puVar1[-4] = uVar2;
  *(undefined4 *)(puVar1 + -4) = 0xf5bfcc68;
  *(undefined4 *)((longlong)puVar1 + -0x1c) = 0xffffffff;
  uVar8 = puVar1[-4];
  puVar1[-4] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(DAT_7ffe0190 < '\0') * 0x80 |
               (ulonglong)(DAT_7ffe0190 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)bVar6 * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[-5] = 0;
  puVar1[-5] = puVar1[-5] + -0x157ddbcaa;
  uVar4 = -puVar1[-5];
  uVar7 = puVar1[-4];
  puVar1[-4] = unaff_RBX;
  puVar1[-5] = (ulonglong)unaff_R15D - 0xed3585d;
  puVar1[-6] = unaff_R13;
  puVar1[-7] = unaff_R14;
  uVar5 = uVar4 + uVar8;
  puVar1[-6] = param_3;
  puVar1[-4] = in_R11;
  puVar1[-5] = uVar3;
  puVar1[-6] = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY8(uVar4,uVar8) * 0x800
               | (ulonglong)((uVar7 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar7 & 0x200) != 0) * 0x200 | (ulonglong)((uVar7 & 0x100) != 0) * 0x100
               | (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
               (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 | (ulonglong)CARRY8(uVar4,uVar8)
               | (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  uVar8 = puVar1[-6];
  puVar1[-5] = (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar8 & 0x800) != 0) * 0x800 | (ulonglong)((uVar8 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
               (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  puVar1[-1] = uVar5;
  return;
}



// FUNCTION 14db96140 FUN_14db96140 body=160 status=ok
// SIG undefined FUN_14db96140(void)

undefined8 FUN_14db96140(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R13;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = unaff_retaddr;
  lVar3 = *(longlong *)(uVar2 - 8);
  uVar4 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x10) = 0x43dcf4b8;
  *(ulonglong *)(uVar2 - 0x10) = *(ulonglong *)(uVar2 - 0x10) ^ 0x43dcf4b8;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) + lVar3;
  *(undefined **)(uVar2 - 0x20) = &DAT_14db961e1;
  return uVar4;
}



// FUNCTION 14db962a2 FUN_14db962a2 body=160 status=ok
// SIG undefined FUN_14db962a2(void)

void FUN_14db962a2(void)

{
  longlong unaff_R13;
  
  FUN_1614dd822(~*(ulonglong *)(unaff_R13 + -0xa0));
  return;
}



// FUNCTION 14db96342 FUN_14db96342 body=54 status=ok
// SIG undefined FUN_14db96342(void)

void FUN_14db96342(void)

{
  return;
}



// FUNCTION 14db963e3 FUN_14db963e3 body=99 status=ok
// SIG undefined FUN_14db963e3(void)

undefined8 FUN_14db963e3(void)

{
  undefined8 in_RAX;
  byte in_R10B;
  ulonglong in_stack_00000008;
  
  if (((in_stack_00000008 & 1) != 0) && (0xfe < in_R10B)) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14db96455 thunk_FUN_14db9645b body=5 status=ok
// SIG undefined thunk_FUN_14db9645b(void)

undefined8 thunk_FUN_14db9645b(void)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong in_R10;
  undefined8 unaff_retaddr;
  undefined8 uStackX_18;
  
  plVar1 = (longlong *)(uStackX_18 + -8);
  *(undefined8 *)(uStackX_18 + -0x10) = unaff_RBX;
  *(longlong *)(uStackX_18 + -0x18) = 0;
  *plVar1 = *(longlong *)(uStackX_18 + -0x18);
  *plVar1 = *plVar1 + in_R10;
  *(undefined8 *)(uStackX_18 + -0x10) = 0x14de392da;
  return unaff_retaddr;
}



// FUNCTION 14db9645b FUN_14db9645b body=122 status=ok
// SIG undefined FUN_14db9645b(void)

undefined8 FUN_14db9645b(void)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(longlong *)(local_res18 + -0x18) = 0;
  *plVar1 = *(longlong *)(local_res18 + -0x18);
  *plVar1 = *plVar1 + in_R10;
  *(undefined8 *)(local_res18 + -0x10) = 0x14de392da;
  return unaff_retaddr;
}



// FUNCTION 14db964d7 FUN_14db964d7 body=239 status=ok
// SIG undefined FUN_14db964d7(void)

/* WARNING: Instruction at (ram,0x00015b8695dd) overlaps instruction at (ram,0x00015b8695dc)
    */
/* WARNING: Removing unreachable block (ram,0x00015b8696c9) */
/* WARNING: Removing unreachable block (ram,0x00015b869668) */
/* WARNING: Removing unreachable block (ram,0x00015b8696b6) */
/* WARNING: Removing unreachable block (ram,0x00015b8696cb) */
/* WARNING: Removing unreachable block (ram,0x00014db96586) */
/* WARNING: Removing unreachable block (ram,0x0001665723ea) */
/* WARNING: Removing unreachable block (ram,0x00015af91118) */
/* WARNING: Removing unreachable block (ram,0x000166572476) */
/* WARNING: Removing unreachable block (ram,0x00016657247c) */
/* WARNING: Removing unreachable block (ram,0x00015b8695dc) */
/* WARNING: Removing unreachable block (ram,0x000166572481) */

undefined8 FUN_14db964d7(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong local_res20;
  
  if ((0xffffffffffffffff - (local_res20 & in_RAX) & (local_res20 | in_RAX)) != 0) {
    uVar1 = FUN_15b86953c();
    return uVar1;
  }
  FUN_156746ca2();
  uVar1 = (*(code *)0x165fadcfc)();
  return uVar1;
}



// FUNCTION 14db965d2 FUN_14db965d2 body=24 status=ok
// SIG undefined FUN_14db965d2(void)

void FUN_14db965d2(void)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 auStackX_8 [4];
  
  *(undefined8 *)((longlong)auStackX_8 + unaff_RSI) = unaff_retaddr;
  return;
}



// FUNCTION 14db96682 FUN_14db96682 body=134 status=ok
// SIG undefined FUN_14db96682(void)

void FUN_14db96682(void)

{
  FUN_165840588();
  return;
}



// FUNCTION 14db967a9 FUN_14db967a9 body=209 status=ok
// SIG undefined FUN_14db967a9(void)

/* WARNING: Removing unreachable block (ram,0x00014db967f5) */

undefined8 FUN_14db967a9(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x16052) {
    return in_RAX;
  }
  if (unaff_RSI != 0x16053) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14db969db FUN_14db969db body=148 status=ok
// SIG undefined FUN_14db969db(void)

/* WARNING: Removing unreachable block (ram,0x00014db96af1) */
/* WARNING: Removing unreachable block (ram,0x00014db96af7) */
/* WARNING: Removing unreachable block (ram,0x00015741fe67) */
/* WARNING: Removing unreachable block (ram,0x00015741fe6d) */
/* WARNING: Removing unreachable block (ram,0x00015741fed0) */
/* WARNING: Removing unreachable block (ram,0x00015741febe) */
/* WARNING: Removing unreachable block (ram,0x00015741fef2) */
/* WARNING: Removing unreachable block (ram,0x00015741ff04) */
/* WARNING: Removing unreachable block (ram,0x00015741ff0a) */
/* WARNING: Removing unreachable block (ram,0x00015741ff15) */
/* WARNING: Removing unreachable block (ram,0x00015b98cedc) */
/* WARNING: Removing unreachable block (ram,0x00014db96afc) */
/* WARNING: Removing unreachable block (ram,0x00014db96b3f) */
/* WARNING: Removing unreachable block (ram,0x00014db96b46) */
/* WARNING: Removing unreachable block (ram,0x00014db96a6f) */
/* WARNING: Removing unreachable block (ram,0x00014db96aa3) */
/* WARNING: Removing unreachable block (ram,0x00014db96aa6) */

void FUN_14db969db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(ulonglong *)(&stack0xfffffffff15d98a2 + unaff_RSI) = in_RAX + unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  *(ulonglong *)(&stack0xfffffffff15d989a + unaff_RSI) =
       *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
       (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2;
  lVar3 = *(longlong *)(&stack0xfffffffff15d989a + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff15d98a2 + unaff_RSI) = *(undefined8 *)(unaff_R13 + -0x50);
  uVar4 = *(ulonglong *)(&stack0xfffffffff15d98a2 + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff15d98a2 + unaff_RSI) = param_4;
  *(ulonglong *)(&stack0xfffffffff15d989a + unaff_RSI) = uVar2 ^ unaff_R15;
  uVar5 = *(undefined8 *)(&stack0xfffffffff15d989a + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffff15d989a + unaff_RSI) =
       uVar4 + unaff_R15 + (uVar4 & unaff_R15) * -2;
  uVar6 = *(undefined8 *)(&stack0xfffffffff15d98a2 + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff15d98a2 + unaff_RSI) = *(undefined8 *)(unaff_R13 + -0x70);
  *(undefined8 *)(&stack0xfffffffff15d989a + unaff_RSI) = *(undefined8 *)(unaff_R13 + -8);
  *(undefined8 *)(&stack0xfffffffff15d9892 + unaff_RSI) = uVar5;
  *(undefined8 *)(&stack0xfffffffff15d988a + unaff_RSI) = uVar5;
  uVar5 = *(undefined8 *)(unaff_R13 + -0x98);
  *(longlong *)(&stack0xfffffffff15d9882 + unaff_RSI) = lVar3;
  *(undefined8 *)(&stack0xfffffffff15d9892 + unaff_RSI) = uVar5;
  lVar3 = *(longlong *)(&stack0xfffffffff15d9882 + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff15d9882 + unaff_RSI) = 0x162e10e6e;
  FUN_16681bcfe(FUN_16681bcfe,lVar3,param_3,uVar6);
  *(undefined8 *)(&stack0xfffffffff15d9892 + unaff_RSI) = *(undefined8 *)(unaff_R13 + -0x38);
  *(ulonglong *)(&stack0xfffffffff15d9892 + unaff_RSI) =
       (~uVar1 | ~unaff_R15) & ((unaff_R15 ^ 0xffffffffffffffff) & uVar1 | unaff_R15);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  *(ulonglong *)(&stack0xfffffffff15d9892 + unaff_RSI) = uVar1;
  *(ulonglong *)(&stack0xfffffffff15d9892 + unaff_RSI) =
       *(longlong *)(&stack0xfffffffff15d9892 + unaff_RSI) + unaff_R15;
  *(ulonglong *)(&stack0xfffffffff15d9892 + unaff_RSI) =
       *(longlong *)(&stack0xfffffffff15d9892 + unaff_RSI) + (uVar1 & unaff_R15) * -2;
  FUN_166bdd963(*(undefined8 *)(unaff_R13 + -0x78),
                *(undefined8 *)(&stack0xfffffffff15d9892 + unaff_RSI));
  return;
}



// FUNCTION 14db96a6f FUN_14db96a6f body=141 status=ok
// SIG undefined FUN_14db96a6f(void)

/* WARNING: Removing unreachable block (ram,0x00014db96af1) */
/* WARNING: Removing unreachable block (ram,0x00014db96af7) */
/* WARNING: Removing unreachable block (ram,0x00014db96afc) */
/* WARNING: Removing unreachable block (ram,0x00014db96b3f) */
/* WARNING: Removing unreachable block (ram,0x00014db96b46) */

void FUN_14db96a6f(void)

{
  FUN_14ddaecd3();
  return;
}



// FUNCTION 14db96afc thunk_FUN_14db96b02 body=5 status=ok
// SIG undefined thunk_FUN_14db96b02(void)

void thunk_FUN_14db96b02(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1566ab77e(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14db96b02 FUN_14db96b02 body=158 status=ok
// SIG undefined FUN_14db96b02(void)

void FUN_14db96b02(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1566ab77e(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14db96e1a FUN_14db96e1a body=146 status=ok
// SIG undefined FUN_14db96e1a(void)

void FUN_14db96e1a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161923b6f(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14db96f55 FUN_14db96f55 body=152 status=ok
// SIG undefined FUN_14db96f55(void)

void FUN_14db96f55(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  ushort in_AX;
  ushort uVar1;
  
  uVar1 = in_AX + 0xa38 + (in_AX & 0xa38) * -2;
  if ((ushort)((~uVar1 | param_3) + uVar1) != -1) {
    FUN_16687f787();
    return;
  }
  FUN_16687f777(param_1,param_2,FUN_16687f777);
  return;
}



// FUNCTION 14db96fef FUN_14db96fef body=143 status=ok
// SIG undefined FUN_14db96fef(void)

void FUN_14db96fef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x43961dbf + unaff_retaddr) = unaff_RDI;
  FUN_15656c0a1(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db97130 FUN_14db97130 body=232 status=ok
// SIG undefined FUN_14db97130(void)

void FUN_14db97130(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_1610d7069(param_1,FUN_1610d7069,in_stack_00000008);
  return;
}



// FUNCTION 14db97377 FUN_14db97377 body=159 status=ok
// SIG undefined FUN_14db97377(void)

/* WARNING: Removing unreachable block (ram,0x00014db97417) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db97377(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong local_res10;
  
  if ((~local_res10 | param_1) - 1 <
      ~(~(~local_res10 | param_1) |
       ~(~(local_res10 ^ 0xffffffffffffffff) | ~(0xffffffffffffffff - param_1)) | local_res10)) {
    FUN_161335b7f(FUN_161335b7f,param_2,param_3);
    FUN_1611b805a();
    return;
  }
  FUN_1611b7fc0();
  return;
}



// FUNCTION 14db97417 FUN_14db97417 body=160 status=ok
// SIG undefined FUN_14db97417(void)

void FUN_14db97417(void)

{
  FUN_15716dfcf();
  FUN_14db974b9();
  return;
}



// FUNCTION 14db974b9 FUN_14db974b9 body=168 status=ok
// SIG undefined FUN_14db974b9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db9755c) */
/* WARNING: Removing unreachable block (ram,0x00014db97562) */
/* WARNING: Removing unreachable block (ram,0x00014db9758d) */
/* WARNING: Removing unreachable block (ram,0x00014db97591) */
/* WARNING: Removing unreachable block (ram,0x00014db975f3) */
/* WARNING: Removing unreachable block (ram,0x00014db975f5) */
/* WARNING: Removing unreachable block (ram,0x00014db97601) */
/* WARNING: Removing unreachable block (ram,0x00016103bb40) */
/* WARNING: Removing unreachable block (ram,0x00016103bb46) */
/* WARNING: Removing unreachable block (ram,0x00014db97612) */
/* WARNING: Removing unreachable block (ram,0x00014db97618) */
/* WARNING: Removing unreachable block (ram,0x00014db976bb) */
/* WARNING: Removing unreachable block (ram,0x00014db976c1) */
/* WARNING: Removing unreachable block (ram,0x000165bef142) */
/* WARNING: Removing unreachable block (ram,0x000165bef1c3) */
/* WARNING: Removing unreachable block (ram,0x000165bef1c8) */
/* WARNING: Removing unreachable block (ram,0x000165bef1ce) */
/* WARNING: Removing unreachable block (ram,0x000165bef1d3) */
/* WARNING: Removing unreachable block (ram,0x00014dfa731a) */
/* WARNING: Removing unreachable block (ram,0x000165bef267) */
/* WARNING: Removing unreachable block (ram,0x000165bef26d) */
/* WARNING: Removing unreachable block (ram,0x000165bef272) */
/* WARNING: Removing unreachable block (ram,0x000166670022) */
/* WARNING: Removing unreachable block (ram,0x0001666700b0) */
/* WARNING: Removing unreachable block (ram,0x0001666700b6) */
/* WARNING: Removing unreachable block (ram,0x00015b0512e3) */
/* WARNING: Removing unreachable block (ram,0x000166d75fb2) */
/* WARNING: Removing unreachable block (ram,0x00015b051354) */
/* WARNING: Removing unreachable block (ram,0x00015b05135a) */
/* WARNING: Removing unreachable block (ram,0x00015b05135f) */
/* WARNING: Removing unreachable block (ram,0x00015b0513f8) */
/* WARNING: Removing unreachable block (ram,0x00015b0513fd) */
/* WARNING: Removing unreachable block (ram,0x00015b051403) */
/* WARNING: Removing unreachable block (ram,0x00016103bab6) */
/* WARNING: Removing unreachable block (ram,0x00015af250fd) */
/* WARNING: Removing unreachable block (ram,0x00015af2517e) */
/* WARNING: Removing unreachable block (ram,0x00015af25184) */
/* WARNING: Removing unreachable block (ram,0x0001665fb27d) */
/* WARNING: Removing unreachable block (ram,0x0001665fb2d6) */
/* WARNING: Removing unreachable block (ram,0x0001665fb2dc) */
/* WARNING: Removing unreachable block (ram,0x0001628db31e) */
/* WARNING: Removing unreachable block (ram,0x0001654549ab) */
/* WARNING: Removing unreachable block (ram,0x000165454abb) */

undefined8 FUN_14db974b9(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1654549ab();
  return uVar1;
}



// FUNCTION 14db97562 FUN_14db97562 body=528 status=ok
// SIG undefined FUN_14db97562(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db97612) */
/* WARNING: Removing unreachable block (ram,0x00014db97618) */
/* WARNING: Removing unreachable block (ram,0x000165bef142) */
/* WARNING: Removing unreachable block (ram,0x000165bef1c3) */
/* WARNING: Removing unreachable block (ram,0x000165bef1c8) */
/* WARNING: Removing unreachable block (ram,0x000165bef1ce) */
/* WARNING: Removing unreachable block (ram,0x000165bef1d3) */
/* WARNING: Removing unreachable block (ram,0x00014dfa731a) */
/* WARNING: Removing unreachable block (ram,0x000165bef267) */
/* WARNING: Removing unreachable block (ram,0x000165bef26d) */
/* WARNING: Removing unreachable block (ram,0x000165bef272) */
/* WARNING: Removing unreachable block (ram,0x000166670022) */
/* WARNING: Removing unreachable block (ram,0x0001666700b0) */
/* WARNING: Removing unreachable block (ram,0x0001666700b6) */
/* WARNING: Removing unreachable block (ram,0x00015b0512e3) */
/* WARNING: Removing unreachable block (ram,0x000166d75fb2) */
/* WARNING: Removing unreachable block (ram,0x00015b051354) */
/* WARNING: Removing unreachable block (ram,0x00015b05135a) */
/* WARNING: Removing unreachable block (ram,0x00015b05135f) */
/* WARNING: Removing unreachable block (ram,0x00015b0513f8) */
/* WARNING: Removing unreachable block (ram,0x00015b0513fd) */
/* WARNING: Removing unreachable block (ram,0x00015b051403) */
/* WARNING: Removing unreachable block (ram,0x00016103bab6) */
/* WARNING: Removing unreachable block (ram,0x00016103bb40) */
/* WARNING: Removing unreachable block (ram,0x00016103bb46) */
/* WARNING: Removing unreachable block (ram,0x00015af250fd) */
/* WARNING: Removing unreachable block (ram,0x00015af2517e) */
/* WARNING: Removing unreachable block (ram,0x00015af25184) */
/* WARNING: Removing unreachable block (ram,0x0001665fb27d) */
/* WARNING: Removing unreachable block (ram,0x0001665fb2d6) */
/* WARNING: Removing unreachable block (ram,0x0001665fb2dc) */
/* WARNING: Removing unreachable block (ram,0x0001628db31e) */
/* WARNING: Removing unreachable block (ram,0x00014db976bb) */
/* WARNING: Removing unreachable block (ram,0x00014db976c1) */

void FUN_14db97562(void)

{
  FUN_166670022();
  return;
}



// FUNCTION 14db977f9 FUN_14db977f9 body=153 status=ok
// SIG undefined FUN_14db977f9(void)

/* WARNING: Removing unreachable block (ram,0x00014db9784e) */

void FUN_14db977f9(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int in_R11D;
  uint unaff_R14D;
  uint unaff_retaddr;
  
  FUN_16622590b(param_1,param_2,
                (-~unaff_R14D - (-~(unaff_retaddr ^ 0x5708c8c) - (~param_3 + 2))) + in_R11D,param_4)
  ;
  return;
}



// FUNCTION 14db97892 FUN_14db97892 body=147 status=ok
// SIG undefined FUN_14db97892(void)

void FUN_14db97892(undefined8 param_1,undefined8 param_2)

{
  FUN_1669e12eb(param_1,param_2,FUN_1669e12eb);
  return;
}



// FUNCTION 14db97926 FUN_14db97926 body=141 status=ok
// SIG undefined FUN_14db97926(void)

void FUN_14db97926(ulonglong param_1,ulonglong param_2)

{
  (*(code *)&LAB_15b7f46fb)(param_1,~(param_2 & param_1) & (param_2 | param_1));
  return;
}



// FUNCTION 14db979b3 FUN_14db979b3 body=140 status=ok
// SIG undefined FUN_14db979b3(void)

void FUN_14db979b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16673d42c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db97f06 FUN_14db97f06 body=169 status=ok
// SIG undefined FUN_14db97f06(void)

/* WARNING: Removing unreachable block (ram,0x00014db98047) */
/* WARNING: Removing unreachable block (ram,0x00014db9804d) */
/* WARNING: Removing unreachable block (ram,0x00014db97f5e) */
/* WARNING: Removing unreachable block (ram,0x00014db97fc1) */

void FUN_14db97f06(void)

{
  longlong unaff_RBX;
  
  if (-1 < unaff_RBX + 0x20) {
    FUN_15b369a21();
    return;
  }
  FUN_15b369a21();
  return;
}



// FUNCTION 14db97fc1 FUN_14db97fc1 body=423 status=ok
// SIG undefined FUN_14db97fc1(void)

/* WARNING: Removing unreachable block (ram,0x00014db98047) */
/* WARNING: Removing unreachable block (ram,0x00014db9804d) */

void FUN_14db97fc1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d88aa3a(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db9816d FUN_14db9816d body=86 status=ok
// SIG undefined FUN_14db9816d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db9816d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db98232 FUN_14db98232 body=132 status=ok
// SIG undefined FUN_14db98232(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db98232(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_retaddr;
  undefined8 local_res8;
  
  FUN_16678b2de(local_res8,*(undefined8 *)(unaff_retaddr + -0x98),param_3);
  return;
}



// FUNCTION 14db984f5 FUN_14db984f5 body=386 status=ok
// SIG undefined FUN_14db984f5(void)

/* WARNING: Removing unreachable block (ram,0x00014db98609) */
/* WARNING: Removing unreachable block (ram,0x00014db9860f) */

void FUN_14db984f5(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong local_res20;
  
  pcVar2 = FUN_1566f9548;
  FUN_1566f9548();
  uVar1 = ~(local_res20 & param_1) & (~(local_res20 & param_1) + param_1) - ~local_res20;
  *(code **)(uVar1 - 8) = pcVar2;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_15b287759;
  return;
}



// FUNCTION 14db9860f FUN_14db9860f body=60 status=ok
// SIG undefined FUN_14db9860f(void)

void FUN_14db9860f(void)

{
  return;
}



// FUNCTION 14db98690 FUN_14db98690 body=267 status=ok
// SIG undefined FUN_14db98690(void)

/* WARNING: Removing unreachable block (ram,0x00016471e00c) */
/* WARNING: Removing unreachable block (ram,0x00014e087f9f) */
/* WARNING: Removing unreachable block (ram,0x00014db98715) */

ulonglong FUN_14db98690(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  longlong local_res18;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | ~in_RAX;
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  lVar2 = (~(in_stack_00000028 | in_RAX) |
          0xffffffffffffffff - ((in_RAX - (in_stack_00000028 | in_RAX)) + in_stack_00000028)) +
          (in_stack_00000028 | in_RAX);
  puVar1 = (ulonglong *)(lVar2 + -7);
  *puVar1 = in_R10;
  *(ulonglong *)(lVar2 + -0xf) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 - 0x165a002f5;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 1;
  if ((longlong)*puVar1 < 0) {
    *(undefined8 *)(lVar2 + -0xf) = unaff_RSI;
    *(undefined8 *)(lVar2 + -0x17) = unaff_RSI;
    *(undefined **)(lVar2 + -0xf) = &DAT_14d7a9d30;
    return 0xfffffffffffffffeU - ~-local_res18 & unaff_R13;
  }
  uVar3 = FUN_165a002b7();
  return uVar3;
}



// FUNCTION 14db98993 FUN_14db98993 body=163 status=ok
// SIG undefined FUN_14db98993(void)

void FUN_14db98993(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160d95b17(param_1,param_2,param_3,FUN_160d95b17);
  return;
}



// FUNCTION 14db98a38 FUN_14db98a38 body=155 status=ok
// SIG undefined FUN_14db98a38(void)

void FUN_14db98a38(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(&stack0x2e861778 + unaff_RBP) = 0;
  return;
}



// FUNCTION 14db98ad3 FUN_14db98ad3 body=73 status=ok
// SIG undefined FUN_14db98ad3(void)

void FUN_14db98ad3(undefined8 param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)
   (&stack0x00000018 + ~(~(unaff_R15 & 0xffffffff9d3e77ae) & (unaff_R15 | 0xffffffff9d3e77ae))) =
       param_1;
                    /* WARNING: Could not recover jumptable at 0x00014db98b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RDI + 0xe0))(in_stack_00000018);
  return;
}



// FUNCTION 14db98b32 FUN_14db98b32 body=365 status=ok
// SIG undefined FUN_14db98b32(void)

/* WARNING: Removing unreachable block (ram,0x00014db98c08) */
/* WARNING: Removing unreachable block (ram,0x00014db98c0e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x07e00e6e : 0x00016222f9d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14db98b32(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  undefined3 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  code *pcVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong unaff_R15;
  
  pcVar7 = FUN_156edf0a8;
  uVar5 = FUN_156edf0a8();
  uVar8 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar6 = *(ulonglong *)(unaff_R13 + -8) ^ unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  bVar2 = (param_1 & 0x1f) == 0;
  bVar3 = ((char)unaff_R15 >> ((byte)param_1 & 0x1f) - 1 & 1U) == 0;
  if ((!bVar2 && !bVar3) && (bVar2 || bVar3)) {
    uVar6 = FUN_14dbcfe9e();
    return uVar6;
  }
  uVar4 = SegmentLimit(uVar5);
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((byte)((uint3)uVar4 >> 0x10) & 1) * 0x40 |
       (ulonglong)((uVar6 & 0x10) != 0) * 0x10 | (ulonglong)((uVar6 & 4) != 0) * 4 |
       (ulonglong)((uVar6 & 1) != 0) | (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(code **)(uVar1 - 0x20) = pcVar7;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RDI;
  uVar6 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) = param_1;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x40766e0;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar8;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar8;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return (ulonglong)(ushort)uVar4;
}



// FUNCTION 14db98ca8 FUN_14db98ca8 body=149 status=ok
// SIG undefined FUN_14db98ca8(void)

void FUN_14db98ca8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162448c26((~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14db98d3e FUN_14db98d3e body=490 status=ok
// SIG undefined FUN_14db98d3e(void)

/* WARNING: Removing unreachable block (ram,0x00014db98f17) */
/* WARNING: Removing unreachable block (ram,0x00016596fd15) */
/* WARNING: Removing unreachable block (ram,0x00014db98e81) */
/* WARNING: Removing unreachable block (ram,0x00014db98f11) */
/* WARNING: Removing unreachable block (ram,0x000162a27410) */
/* WARNING: Removing unreachable block (ram,0x000162a274a4) */
/* WARNING: Removing unreachable block (ram,0x0001619d18d4) */
/* WARNING: Removing unreachable block (ram,0x00014db98e76) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db98d3e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_RBX ^ 0x6f757962)) = param_2;
  uVar1 = FUN_16155ee87(param_1,in_stack_00000010);
  if (unaff_EBP < 0) {
    FUN_16596fc7c();
    return;
  }
  if (0xffffffffffff96a0 < unaff_R12 - 0x69a7U) {
    FUN_162761479();
    return;
  }
  FUN_16117a02f(*(undefined8 *)(unaff_R12 + -0x98),
                ((uVar1 - 1) - ~*(ulonglong *)(unaff_R12 + -0x78)) +
                (*(ulonglong *)(unaff_R12 + -0x78) & uVar1) * -2,unaff_RSI - param_3);
  return;
}



// FUNCTION 14db98fb7 FUN_14db98fb7 body=136 status=ok
// SIG undefined FUN_14db98fb7(void)

ulonglong FUN_14db98fb7(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  code *pcStack0000000000000028;
  undefined8 in_stack_00000038;
  
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(longlong *)(unaff_RDI + 0x10) = (unaff_RSI + unaff_RBP) - *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~unaff_RBX | ~*(ulonglong *)(unaff_RDI + 0x10);
  pcStack0000000000000028 = FUN_14db99040;
  uVar1 = FUN_15783d820();
  if ((uVar1 & 0x8000) != 0) {
    return (ulonglong)((~(uVar1 & 0xffff0000) - 0x10000) - ~uVar1);
  }
  uVar2 = FUN_164ba9c30(in_stack_00000038);
  return uVar2;
}



// FUNCTION 14db99040 FUN_14db99040 body=155 status=ok
// SIG undefined FUN_14db99040(void)

ulonglong FUN_14db99040(void)

{
  uint in_EAX;
  ulonglong uVar1;
  undefined8 local_res8;
  
  if ((in_EAX & 0x8000) != 0) {
    return (ulonglong)((~(in_EAX & 0xffff0000) - 0x10000) - ~in_EAX);
  }
  uVar1 = FUN_164ba9c30(local_res8);
  return uVar1;
}



// FUNCTION 14db990dc FUN_14db990dc body=122 status=ok
// SIG undefined FUN_14db990dc(void)

/* WARNING: Removing unreachable block (ram,0x00014db991bf) */
/* WARNING: Removing unreachable block (ram,0x00014db991c5) */
/* WARNING: Removing unreachable block (ram,0x0001647df38a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db990dc(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  undefined8 unaff_R15;
  longlong lStackX_8;
  ulonglong uStackX_18;
  
  uVar2 = FUN_16484ed18();
  uVar2 = ~(~(0xffffffffffffffff - ~uVar2 & ~uStackX_18) & (~uStackX_18 | uVar2));
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x3b30fbd5;
  *puVar1 = *puVar1 ^ 0x3b30fbd5;
  *puVar1 = *puVar1 + lStackX_8;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = in_R9;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  if (uVar2 == 8) {
    _DAT_ffffffffffffffe8 = &LAB_156413d3d;
    _DAT_00000000 = &LAB_156413d3d;
    _DAT_ffffffffffffffe0 = unaff_R15;
    FUN_14d7c165a();
    return;
  }
  FUN_156413cee();
  return;
}



// FUNCTION 14db99157 FUN_14db99157 body=254 status=ok
// SIG undefined FUN_14db99157(void)

/* WARNING: Removing unreachable block (ram,0x00014db991bf) */
/* WARNING: Removing unreachable block (ram,0x00014db991c5) */
/* WARNING: Removing unreachable block (ram,0x0001647df38a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db99157(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined8 unaff_R15;
  longlong local_res10;
  ulonglong local_res20;
  
  uVar2 = ~(~(0xffffffffffffffff - ~in_RAX & ~local_res20) & (~local_res20 | in_RAX));
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x3b30fbd5;
  *puVar1 = *puVar1 ^ 0x3b30fbd5;
  *puVar1 = *puVar1 + local_res10;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  if (uVar2 == 8) {
    _DAT_ffffffffffffffe8 = &LAB_156413d3d;
    _DAT_00000000 = &LAB_156413d3d;
    _DAT_ffffffffffffffe0 = unaff_R15;
    FUN_14d7c165a(param_1,param_2,param_3,_DAT_fffffffffffffff0);
    return;
  }
  FUN_156413cee();
  return;
}



// FUNCTION 14db99257 FUN_14db99257 body=115 status=ok
// SIG undefined FUN_14db99257(void)

void FUN_14db99257(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 != 0xdb508) {
    return;
  }
  return;
}



// FUNCTION 14db99380 FUN_14db99380 body=156 status=ok
// SIG undefined FUN_14db99380(void)

undefined8 FUN_14db99380(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db9941f FUN_14db9941f body=148 status=ok
// SIG undefined FUN_14db9941f(void)

void FUN_14db9941f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R10;
  longlong unaff_R13;
  
  FUN_166b8101a(param_1,param_2,0xffffffffc8c3deaa,param_4,*(undefined8 *)(unaff_R13 + in_R10));
  return;
}



// FUNCTION 14db9953a FUN_14db9953a body=599 status=ok
// SIG undefined FUN_14db9953a(void)

/* WARNING: Removing unreachable block (ram,0x00015700c037) */
/* WARNING: Removing unreachable block (ram,0x00015700c03d) */
/* WARNING: Removing unreachable block (ram,0x00015700c048) */
/* WARNING: Removing unreachable block (ram,0x000160fd7ca0) */
/* WARNING: Removing unreachable block (ram,0x0001624fa64c) */
/* WARNING: Removing unreachable block (ram,0x000160fd7d2f) */
/* WARNING: Removing unreachable block (ram,0x000160fd7d45) */
/* WARNING: Removing unreachable block (ram,0x000160fd7d50) */
/* WARNING: Removing unreachable block (ram,0x000160fd7d56) */
/* WARNING: Removing unreachable block (ram,0x0001624fa643) */
/* WARNING: Removing unreachable block (ram,0x00015700c0e4) */
/* WARNING: Removing unreachable block (ram,0x00015700c0ea) */
/* WARNING: Removing unreachable block (ram,0x00015700bfbc) */
/* WARNING: Removing unreachable block (ram,0x00014db995e4) */

void FUN_14db9953a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong in_RAX;
  ulonglong in_R11;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(in_RAX + 8);
  uVar2 = *(ulonglong *)(in_RAX + 8);
  *(longlong *)(in_RAX + 8) = -*(longlong *)(in_RAX + 8);
  *(longlong *)(in_RAX + 8) = *(longlong *)(in_RAX + 8) + -1;
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) | unaff_R15;
  *(ulonglong *)(in_RAX + 8) = ~((in_R11 + lVar1) - (in_R11 & uVar2) & *(ulonglong *)(in_RAX + 8));
  FUN_160f6305d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db995e4 FUN_14db995e4 body=158 status=ok
// SIG undefined FUN_14db995e4(void)

void FUN_14db995e4(void)

{
  return;
}



// FUNCTION 14db99682 FUN_14db99682 body=88 status=ok
// SIG undefined FUN_14db99682(void)

void FUN_14db99682(undefined8 param_1)

{
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x31bbcea;
  FUN_14d85d504(*(undefined8 *)(local_res18 + -0x18),local_res8);
  return;
}



// FUNCTION 14db996ff FUN_14db996ff body=149 status=ok
// SIG undefined FUN_14db996ff(void)

void FUN_14db996ff(undefined8 param_1)

{
  FUN_1612346b3(param_1,0xffffffff,0xffffffff);
  return;
}



// FUNCTION 14db99868 FUN_14db99868 body=15 status=ok
// SIG undefined FUN_14db99868(void)

void FUN_14db99868(void)

{
  FUN_15751fa1b();
  return;
}



// FUNCTION 14db99877 FUN_14db99877 body=305 status=ok
// SIG undefined FUN_14db99877(void)

/* WARNING: Removing unreachable block (ram,0x000166ce0ca3) */
/* WARNING: Removing unreachable block (ram,0x000166ce0cb4) */
/* WARNING: Removing unreachable block (ram,0x0001623158e2) */
/* WARNING: Removing unreachable block (ram,0x00016231598f) */
/* WARNING: Removing unreachable block (ram,0x000162315993) */
/* WARNING: Removing unreachable block (ram,0x000162315854) */
/* WARNING: Removing unreachable block (ram,0x00014db99abe) */
/* WARNING: Removing unreachable block (ram,0x00014db99ac4) */
/* WARNING: Removing unreachable block (ram,0x000162110bd1) */
/* WARNING: Removing unreachable block (ram,0x000162110bdc) */
/* WARNING: Removing unreachable block (ram,0x000162110c04) */
/* WARNING: Removing unreachable block (ram,0x000162110c2a) */
/* WARNING: Removing unreachable block (ram,0x0001619320c5) */
/* WARNING: Removing unreachable block (ram,0x000166ce0caf) */
/* WARNING: Removing unreachable block (ram,0x00016231584e) */
/* WARNING: Removing unreachable block (ram,0x00015670da1c) */
/* WARNING: Removing unreachable block (ram,0x00015670da22) */
/* WARNING: Removing unreachable block (ram,0x00014e2388c6) */
/* WARNING: Removing unreachable block (ram,0x00014db99a3f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db99877(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_EDI;
  ulonglong unaff_R15;
  
  if (param_2 == 0x37e8b) {
    uVar2 = FUN_15751fa1b(param_1,&DAT_14d7b43c9);
    return uVar2;
  }
  FUN_16103bc82();
  FUN_156587a15();
  if (~(unaff_EDI & 0xb73ac28c) < 0x48c53d73) {
    uVar1 = *(ulonglong *)(~param_3 - 0x78);
    uVar4 = ~unaff_R15 | uVar1;
    uVar3 = ~uVar1 | unaff_R15;
    uVar1 = *(ulonglong *)(~param_3 - 0x28);
    uVar2 = FUN_165cc6706(-1 - ((uVar3 - (uVar4 | uVar3)) + uVar4),
                          uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2);
    return uVar2;
  }
  uVar2 = FUN_162110ab7();
  return uVar2;
}



// FUNCTION 14db999a9 FUN_14db999a9 body=570 status=ok
// SIG undefined FUN_14db999a9(void)

/* WARNING: Removing unreachable block (ram,0x000166ce0ca3) */
/* WARNING: Removing unreachable block (ram,0x000166ce0cb4) */
/* WARNING: Removing unreachable block (ram,0x0001623158e2) */
/* WARNING: Removing unreachable block (ram,0x00016231598f) */
/* WARNING: Removing unreachable block (ram,0x000162315993) */
/* WARNING: Removing unreachable block (ram,0x000162315854) */
/* WARNING: Removing unreachable block (ram,0x00014db99abe) */
/* WARNING: Removing unreachable block (ram,0x00014db99ac4) */
/* WARNING: Removing unreachable block (ram,0x000162110bd1) */
/* WARNING: Removing unreachable block (ram,0x000162110bdc) */
/* WARNING: Removing unreachable block (ram,0x000162110c04) */
/* WARNING: Removing unreachable block (ram,0x000162110c2a) */
/* WARNING: Removing unreachable block (ram,0x0001619320c5) */
/* WARNING: Removing unreachable block (ram,0x000166ce0caf) */
/* WARNING: Removing unreachable block (ram,0x00016231584e) */
/* WARNING: Removing unreachable block (ram,0x00015670da1c) */
/* WARNING: Removing unreachable block (ram,0x00015670da22) */
/* WARNING: Removing unreachable block (ram,0x00014e2388c6) */
/* WARNING: Removing unreachable block (ram,0x00014db99a3f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db999a9(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_EDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (0x48c53d72 < ~(unaff_EDI & 0xb73ac28c)) {
    uVar1 = FUN_162110ab7();
    return uVar1;
  }
  uVar3 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = FUN_165cc6706(-1 - ((uVar2 - (uVar3 | uVar2)) + uVar3),
                        *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return uVar1;
}



// FUNCTION 14db99cc1 FUN_14db99cc1 body=145 status=ok
// SIG undefined FUN_14db99cc1(void)

void FUN_14db99cc1(ulonglong param_1)

{
  longlong in_RAX;
  longlong unaff_RDI;
  
  *(ulonglong *)(&stack0xfffffffff543b391 + in_RAX) =
       *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
       (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  FUN_15b7d2815((char)param_1,*(ulonglong *)(unaff_RDI + -0x70) + param_1,
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) << 1,
                *(undefined8 *)(&stack0xfffffffff543b391 + in_RAX));
  return;
}



// FUNCTION 14db99ea0 FUN_14db99ea0 body=7 status=ok
// SIG undefined FUN_14db99ea0(void)

void FUN_14db99ea0(void)

{
  return;
}



// FUNCTION 14db99f38 FUN_14db99f38 body=159 status=ok
// SIG undefined FUN_14db99f38(void)

void FUN_14db99f38(void)

{
  FUN_15b66c6ff(FUN_15b66c6ff);
  return;
}



// FUNCTION 14db99fd8 FUN_14db99fd8 body=27 status=ok
// SIG undefined FUN_14db99fd8(void)

void FUN_14db99fd8(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14db9a30a thunk_FUN_14db9a31b body=5 status=ok
// SIG undefined thunk_FUN_14db9a31b(void)

/* WARNING: Removing unreachable block (ram,0x00015b2fdfcd) */
/* WARNING: Removing unreachable block (ram,0x00014db9a4ed) */

void thunk_FUN_14db9a31b(void)

{
  ushort unaff_BP;
  undefined8 unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_1667a985d(in_stack_00000008,unaff_retaddr,0xffffffffa1ab2a3e);
  FUN_15760d534(&stack0x00000008,unaff_RSI);
  if (-1 < (short)((unaff_BP ^ 0xc4be) - 1)) {
    FUN_165ca4b34();
    return;
  }
  FUN_15b2fdf69();
  return;
}



// FUNCTION 14db9a31b FUN_14db9a31b body=463 status=ok
// SIG undefined FUN_14db9a31b(void)

/* WARNING: Removing unreachable block (ram,0x00015b2fdfcd) */
/* WARNING: Removing unreachable block (ram,0x00014db9a4ed) */

void FUN_14db9a31b(void)

{
  ushort unaff_BP;
  undefined8 unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_1667a985d(in_stack_00000008,unaff_retaddr,0xffffffffa1ab2a3e);
  FUN_15760d534(&stack0x00000008,unaff_RSI);
  if (-1 < (short)((unaff_BP ^ 0xc4be) - 1)) {
    FUN_165ca4b34();
    return;
  }
  FUN_15b2fdf69();
  return;
}



// FUNCTION 14db9a4ed FUN_14db9a4ed body=215 status=ok
// SIG undefined FUN_14db9a4ed(void)

void FUN_14db9a4ed(void)

{
  longlong unaff_RBX;
  ulonglong in_R9;
  
  *(ulonglong *)(unaff_RBX + 8) = (~in_R9 | *(ulonglong *)(unaff_RBX + 8)) + in_R9 + 1;
  FUN_162cf7c78();
  return;
}



// FUNCTION 14db9a610 FUN_14db9a610 body=484 status=ok
// SIG undefined FUN_14db9a610(void)

/* WARNING: Removing unreachable block (ram,0x00014db9a69b) */
/* WARNING: Removing unreachable block (ram,0x00014db9a6ac) */
/* WARNING: Removing unreachable block (ram,0x00014db9a74a) */
/* WARNING: Removing unreachable block (ram,0x00014db9a750) */
/* WARNING: Removing unreachable block (ram,0x00014db9a755) */
/* WARNING: Removing unreachable block (ram,0x00015656fe1e) */
/* WARNING: Removing unreachable block (ram,0x000161d417a2) */
/* WARNING: Removing unreachable block (ram,0x000157477328) */
/* WARNING: Removing unreachable block (ram,0x00014db9a6a1) */

void FUN_14db9a610(void)

{
  FUN_157477328();
  return;
}



// FUNCTION 14db9a890 FUN_14db9a890 body=135 status=ok
// SIG undefined FUN_14db9a890(void)

void FUN_14db9a890(void)

{
  undefined8 in_RAX;
  undefined8 *unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  
  unaff_RDI[-1] = *(undefined8 *)(unaff_R13 + -0x30);
  *unaff_RDI = unaff_RDI[-1];
  *unaff_RDI = *unaff_RDI;
  *unaff_RDI = in_RAX;
  *unaff_RDI = unaff_R14;
  FUN_165c125ae();
  return;
}



// FUNCTION 14db9a918 FUN_14db9a918 body=280 status=ok
// SIG undefined FUN_14db9a918(void)

/* WARNING: Removing unreachable block (ram,0x00014db9a9d0) */
/* WARNING: Removing unreachable block (ram,0x00014db9a9a5) */

void FUN_14db9a918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar6 = ~(~(unaff_RBP & 0xffffffff8519909f) & (unaff_RBP | 0xffffffff8519909f));
  *(undefined8 *)(&stack0xfffffffffab969ca + uVar6) = param_3;
  *(ulonglong *)(&stack0xfffffffffab969c2 + uVar6) = unaff_RSI + unaff_R15;
  *(ulonglong *)(&stack0xfffffffffab969c2 + uVar6) =
       *(longlong *)(&stack0xfffffffffab969c2 + uVar6) + (unaff_RSI & unaff_R15) * -2;
  uVar3 = *(undefined8 *)(&stack0xfffffffffab969ca + uVar6);
  *(undefined8 *)(&stack0xfffffffffab969ca + uVar6) =
       *(undefined8 *)(&stack0xfffffffffab969c2 + uVar6);
  uVar1 = *(undefined8 *)(&stack0xfffffffffab969ca + uVar6);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  *(undefined8 *)(&stack0xfffffffffab969ca + uVar6) = in_RAX;
  *(undefined8 *)(&stack0xfffffffffab969c2 + uVar6) = uVar1;
  uVar4 = *(undefined8 *)(&stack0xfffffffffab969ca + uVar6);
  *(ulonglong *)(&stack0xfffffffffab969ca + uVar6) = uVar2 ^ unaff_R15;
  *(longlong *)(&stack0xfffffffffab969c2 + uVar6) = unaff_R13;
  lVar5 = *(longlong *)(&stack0xfffffffffab969c2 + uVar6);
  *(undefined8 *)(&stack0xfffffffffab969ca + uVar6) = param_2;
  *(undefined8 *)(&stack0xfffffffffab969c2 + uVar6) = param_2;
  *(undefined8 *)(&stack0xfffffffffab969ba + uVar6) = unaff_RBX;
  uVar1 = *(undefined8 *)(lVar5 + -0x70);
  *(undefined8 *)(&stack0xfffffffffab969ba + uVar6) = param_4;
  *(undefined8 *)(&stack0xfffffffffab969b2 + uVar6) = uVar4;
  *(undefined4 *)(&stack0xfffffffffab969b2 + uVar6) = 0x5b78881a;
  *(undefined4 *)(&stack0xfffffffffab969b6 + uVar6) = 0;
  (*(code *)0x1666ec4dd)(param_1,uVar1,uVar3,0x1666ec4dd);
  return;
}



// FUNCTION 14db9aa31 FUN_14db9aa31 body=472 status=ok
// SIG undefined FUN_14db9aa31(void)

/* WARNING: Removing unreachable block (ram,0x00014e02c804) */
/* WARNING: Removing unreachable block (ram,0x000161bce7e1) */
/* WARNING: Removing unreachable block (ram,0x00014e02c870) */
/* WARNING: Removing unreachable block (ram,0x00014e02c876) */
/* WARNING: Removing unreachable block (ram,0x00014db9ab92) */
/* WARNING: Removing unreachable block (ram,0x00015b8b5b1f) */
/* WARNING: Removing unreachable block (ram,0x00014db9aaba) */

void FUN_14db9aa31(void)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 4) = *(uint *)(unaff_RDI + 4) | 0xf4a92dfd;
  FUN_14e02c804();
  return;
}



// FUNCTION 14db9aaba thunk_FUN_14db9aac0 body=5 status=ok
// SIG undefined thunk_FUN_14db9aac0(void)

/* WARNING: Removing unreachable block (ram,0x00014db9ab92) */

void thunk_FUN_14db9aac0(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_15afb1c64(uVar1,(~(~unaff_R15 & uVar1) + uVar1) - (-1 - ~unaff_R15));
  FUN_156d0afe9();
  FUN_14d85d504();
  return;
}



// FUNCTION 14db9aac0 FUN_14db9aac0 body=374 status=ok
// SIG undefined FUN_14db9aac0(void)

/* WARNING: Removing unreachable block (ram,0x00014db9ab92) */

void FUN_14db9aac0(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_15afb1c64(uVar1,(~(~unaff_R15 & uVar1) + uVar1) - (-1 - ~unaff_R15));
  FUN_156d0afe9();
  FUN_14d85d504();
  return;
}



// FUNCTION 14db9ad14 FUN_14db9ad14 body=315 status=ok
// SIG undefined FUN_14db9ad14(void)

/* WARNING: Removing unreachable block (ram,0x00014db9adc4) */
/* WARNING: Removing unreachable block (ram,0x00014db9ae44) */
/* WARNING: Removing unreachable block (ram,0x00014db9ae4a) */
/* WARNING: Removing unreachable block (ram,0x0001659102e8) */
/* WARNING: Removing unreachable block (ram,0x00014db9adb9) */
/* WARNING: Removing unreachable block (ram,0x00014db9adbf) */
/* WARNING: Removing unreachable block (ram,0x00014db9ae4f) */

void FUN_14db9ad14(void)

{
  FUN_15b3ff0c4();
  return;
}



// FUNCTION 14db9ae4f FUN_14db9ae4f body=167 status=ok
// SIG undefined FUN_14db9ae4f(void)

void FUN_14db9ae4f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15af6e6f4(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db9af9d FUN_14db9af9d body=149 status=ok
// SIG undefined FUN_14db9af9d(void)

void FUN_14db9af9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x38) | in_RAX;
  FUN_14de5da90((~uVar1 | ~(*(ulonglong *)(unaff_R12 + -0x38) & in_RAX)) + uVar1 + 1,param_2,param_3
                ,0x22debc54);
  return;
}



// FUNCTION 14db9b033 FUN_14db9b033 body=290 status=ok
// SIG undefined FUN_14db9b033(void)

/* WARNING: Removing unreachable block (ram,0x00014db9b0cb) */
/* WARNING: Removing unreachable block (ram,0x00014db9b0d1) */
/* WARNING: Removing unreachable block (ram,0x000161977ed9) */
/* WARNING: Removing unreachable block (ram,0x000161977f68) */
/* WARNING: Removing unreachable block (ram,0x00015b954c16) */
/* WARNING: Removing unreachable block (ram,0x00015b954c40) */
/* WARNING: Removing unreachable block (ram,0x000161977f78) */
/* WARNING: Removing unreachable block (ram,0x000161977f7e) */
/* WARNING: Removing unreachable block (ram,0x000161978024) */
/* WARNING: Removing unreachable block (ram,0x00016197802f) */
/* WARNING: Removing unreachable block (ram,0x00016197802a) */
/* WARNING: Removing unreachable block (ram,0x0001657c4435) */

void FUN_14db9b033(void)

{
  FUN_161977ed9();
  return;
}



// FUNCTION 14db9b283 FUN_14db9b283 body=104 status=ok
// SIG undefined FUN_14db9b283(void)

void FUN_14db9b283(void)

{
  return;
}


