// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d904492 FUN_14d904492 body=177 status=ok
// SIG undefined FUN_14d904492(void)

/* WARNING: Removing unreachable block (ram,0x00014d9044cb) */

void FUN_14d904492(void)

{
  return;
}



// FUNCTION 14d9047a4 FUN_14d9047a4 body=34 status=ok
// SIG undefined FUN_14d9047a4(void)

void FUN_14d9047a4(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d90485d FUN_14d90485d body=128 status=ok
// SIG undefined FUN_14d90485d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9048a3) */

void FUN_14d90485d(undefined8 param_1,undefined8 param_2)

{
  FUN_165c5ee72(param_1,param_2,param_1);
  FUN_14d9048de();
  return;
}



// FUNCTION 14d9048de FUN_14d9048de body=178 status=ok
// SIG undefined FUN_14d9048de(void)

void FUN_14d9048de(void)

{
  return;
}



// FUNCTION 14d904b12 FUN_14d904b12 body=3 status=ok
// SIG undefined FUN_14d904b12(void)

void FUN_14d904b12(void)

{
  return;
}



// FUNCTION 14d904c2e FUN_14d904c2e body=2 status=ok
// SIG undefined FUN_14d904c2e(void)

void FUN_14d904c2e(void)

{
  return;
}



// FUNCTION 14d904fea FUN_14d904fea body=146 status=ok
// SIG undefined FUN_14d904fea(void)

void FUN_14d904fea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156345492(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d90507c FUN_14d90507c body=144 status=ok
// SIG undefined FUN_14d90507c(void)

void FUN_14d90507c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar1 = (local_res8 | 0x100) - 0x100;
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  FUN_165769772(unaff_retaddr,param_2,param_3,FUN_165769772);
  return;
}



// FUNCTION 14d905250 FUN_14d905250 body=165 status=ok
// SIG undefined FUN_14d905250(void)

/* WARNING: Removing unreachable block (ram,0x00014d905278) */

void FUN_14d905250(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = local_res18 ^ unaff_R15;
  FUN_160ee4031(param_1,&local_res18,FUN_160ee4031,local_res8,in_stack_00000020 ^ unaff_R15);
  return;
}



// FUNCTION 14d90538d FUN_14d90538d body=195 status=ok
// SIG undefined FUN_14d90538d(void)

/* WARNING: Removing unreachable block (ram,0x0001574db676) */
/* WARNING: Removing unreachable block (ram,0x00014d905439) */
/* WARNING: Removing unreachable block (ram,0x00016566d0a6) */
/* WARNING: Removing unreachable block (ram,0x00014d90542e) */
/* WARNING: Removing unreachable block (ram,0x00016566cf6a) */
/* WARNING: Removing unreachable block (ram,0x00016566cffd) */
/* WARNING: Removing unreachable block (ram,0x00016566d002) */
/* WARNING: Removing unreachable block (ram,0x0001647d6307) */
/* WARNING: Removing unreachable block (ram,0x0001657fa5da) */
/* WARNING: Removing unreachable block (ram,0x00016566cee2) */
/* WARNING: Removing unreachable block (ram,0x00016566cf64) */
/* WARNING: Removing unreachable block (ram,0x00016582f3ab) */
/* WARNING: Removing unreachable block (ram,0x00016582f403) */
/* WARNING: Removing unreachable block (ram,0x00016582f408) */
/* WARNING: Removing unreachable block (ram,0x00016566d008) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d90538d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16566cee2();
  return uVar1;
}



// FUNCTION 14d905640 FUN_14d905640 body=172 status=ok
// SIG undefined FUN_14d905640(void)

void FUN_14d905640(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  ulonglong unaff_R14;
  undefined8 uStackX_8;
  undefined *local_res10;
  undefined8 local_res18;
  undefined8 in_stack_00000020;
  longlong lStack0000000000000028;
  
  *(undefined4 *)
   ((longlong)&uStackX_8 + ~(~(unaff_R14 & 0xffffffffdd25a8a6) & (unaff_R14 | 0xffffffffdd25a8a6)))
       = param_3;
  lStack0000000000000028 = param_4 - *(longlong *)(&stack0xfffffffffb123df9 + (longlong)local_res10)
  ;
  local_res18 = uStackX_8;
  local_res10 = &DAT_14d9056ec;
  (*(code *)0x162664f72)(param_1,param_2,&stack0x00000028,in_stack_00000020);
  return;
}



// FUNCTION 14d905779 FUN_14d905779 body=176 status=ok
// SIG undefined FUN_14d905779(void)

undefined8 FUN_14d905779(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x98);
}



// FUNCTION 14d905829 FUN_14d905829 body=234 status=ok
// SIG undefined FUN_14d905829(void)

void FUN_14d905829(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_15707b579(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3 ^ param_1);
  return;
}



// FUNCTION 14d905945 FUN_14d905945 body=137 status=ok
// SIG undefined FUN_14d905945(void)

/* WARNING: Removing unreachable block (ram,0x00014d905c0d) */
/* WARNING: Removing unreachable block (ram,0x00014d905c18) */
/* WARNING: Removing unreachable block (ram,0x00014d905a64) */
/* WARNING: Removing unreachable block (ram,0x00014d905a6a) */
/* WARNING: Removing unreachable block (ram,0x00014dd02778) */
/* WARNING: Removing unreachable block (ram,0x00014d905c13) */

void FUN_14d905945(undefined8 param_1)

{
  FUN_161992666();
  FUN_15b9d0430(param_1);
  return;
}



// FUNCTION 14d9059cf FUN_14d9059cf body=297 status=ok
// SIG undefined FUN_14d9059cf(void)

/* WARNING: Removing unreachable block (ram,0x00014d905c0d) */
/* WARNING: Removing unreachable block (ram,0x00014d905c18) */
/* WARNING: Removing unreachable block (ram,0x00014d905a64) */
/* WARNING: Removing unreachable block (ram,0x00014d905a6a) */
/* WARNING: Removing unreachable block (ram,0x00014dd02778) */
/* WARNING: Removing unreachable block (ram,0x00014d905c13) */

void FUN_14d9059cf(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_15b9d0430(param_1,param_2,((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1) * 2,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 ~(*(ulonglong *)(unaff_RDI + -0x60) & ~param_1)));
  return;
}



// FUNCTION 14d905a6a FUN_14d905a6a body=428 status=ok
// SIG undefined FUN_14d905a6a(void)

/* WARNING: Removing unreachable block (ram,0x00014d905c0d) */
/* WARNING: Removing unreachable block (ram,0x00014d905c18) */
/* WARNING: Removing unreachable block (ram,0x00014d905c13) */

void FUN_14d905a6a(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ushort *puVar4;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
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
  ulonglong local_res8;
  
  uVar3 = ~unaff_R15 & ~local_res8 | unaff_R15;
  puVar4 = (ushort *)~((uVar3 - (~unaff_R15 | local_res8 | uVar3)) + (~unaff_R15 | local_res8));
  FUN_16665f9ac();
  *puVar4 = ~*puVar4;
  *puVar4 = *puVar4 | 0x100;
  *puVar4 = ~*puVar4;
  bVar13 = (param_5 & 0x4000) != 0;
  bVar12 = (param_5 & 0x800) != 0;
  bVar11 = (param_5 & 0x200) != 0;
  bVar10 = (param_5 & 0x100) != 0;
  bVar9 = (param_5 & 0x80) != 0;
  bVar8 = (param_5 & 0x40) != 0;
  bVar7 = (param_5 & 0x10) != 0;
  bVar6 = (param_5 & 4) != 0;
  bVar5 = (param_5 & 1) != 0;
  bVar17 = (param_5 & 0x200000) != 0;
  bVar14 = (param_5 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *param_6 = unaff_RBX;
  param_6[-1] = unaff_RBX;
  param_6[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
                (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  param_6[-3] = uVar2;
  *(undefined4 *)(param_6 + -3) = 0x447e46d1;
  *(undefined4 *)((longlong)param_6 + -0x14) = 0;
  uVar3 = param_6[-3];
  uVar18 = param_6[-2];
  param_6[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar18 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar18 & 0x80) != 0) * 0x80 | (ulonglong)((uVar18 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 | (ulonglong)((uVar18 & 4) != 0) * 4 |
                (ulonglong)((uVar18 & 1) != 0) | (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  param_6[-3] = uVar3 ^ 0x4c44d141;
  param_6[-3] = param_6[-3] + -0x1daf182;
  param_6[-2] = param_4;
  *param_6 = (uVar3 ^ 0x4c44d141) - 0x1daf182;
  uVar2 = param_6[-1];
  param_6[-1] = uVar2;
  param_6[-2] = uVar2;
  param_6[-3] = unaff_R14;
  param_6[-4] = 0x14d905b79;
  FUN_161c576b7();
  param_6[-1] = param_6[-2];
  *param_6 = 0;
  *param_6 = ~*param_6;
  *param_6 = (param_6[-1] + -1) - *param_6;
  *param_6 = *(ulonglong *)(unaff_R13 + -0x48);
  *param_6 = param_2 & 0xffffffff;
  *param_6 = *(ulonglong *)(unaff_R13 + -0x28);
  *param_6 = 0x161708e92;
  return;
}



// FUNCTION 14d905c18 FUN_14d905c18 body=148 status=ok
// SIG undefined FUN_14d905c18(void)

void FUN_14d905c18(void)

{
  FUN_165323b80();
  return;
}



// FUNCTION 14d9061b4 FUN_14d9061b4 body=180 status=ok
// SIG undefined FUN_14d9061b4(void)

void FUN_14d9061b4(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164ba3469(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,FUN_164ba3469);
  return;
}



// FUNCTION 14d906407 FUN_14d906407 body=163 status=ok
// SIG undefined FUN_14d906407(void)

void * FUN_14d906407(void)

{
  longlong lVar1;
  short in_AX;
  void *pvVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  short unaff_R14W;
  short *unaff_R15;
  ulonglong uStackX_20;
  longlong in_stack_00000028;
  
  *unaff_R15 = in_AX + unaff_R14W + 1;
  pvVar2 = ProcessEnvironmentBlock;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBX;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0xaf7928e;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  lVar1 = *(longlong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_20 & 4) != 0) * 4 | (ulonglong)((uStackX_20 & 1) != 0) |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000028 + -0x20) = lVar1;
  *(longlong *)(in_stack_00000028 + -0x20) = *(longlong *)(in_stack_00000028 + -0x20) + -0x39e44d8;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *(longlong *)(in_stack_00000028 + -8) = lVar1 + -0x39e44d8;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_RSI;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_14d9064ae;
  *(undefined1 **)(in_stack_00000028 + -0x20) = &LAB_1615567e5;
  return pvVar2;
}



// FUNCTION 14d90654e FUN_14d90654e body=392 status=ok
// SIG undefined FUN_14d90654e(void)

void FUN_14d90654e(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar4 = uVar2 ^ 0xffffffffffffffff;
  FUN_166468114();
  *(longlong *)(unaff_R13 + 0x18) = param_1 + 1;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(ulonglong *)(local_res20 + -0x18) = unaff_R15;
  uVar5 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x156b752de;
  *(undefined8 *)(local_res20 + -0x18) = 0x14d90664b;
  FUN_156b752b5(local_res10,local_res8);
  puVar1 = (ulonglong *)(local_res20 + -8);
  uVar3 = *puVar1;
  *(undefined4 *)puVar1 = 0x5130d1bd;
  *(undefined4 *)(local_res20 + -4) = 0;
  uVar2 = *(ulonglong *)
           (~((~unaff_R15 | uVar2) & (uVar4 + unaff_R15) - (uVar4 & unaff_R15)) +
           ((*puVar1 - 1) - ~uVar3));
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -8) = uVar5;
  *(ulonglong *)(local_res20 + -8) =
       ~((0xffffffffffffffff - local_res10 | uVar2) & (~uVar2 | local_res10));
  FUN_162475c1b();
  return;
}



// FUNCTION 14d9066ed FUN_14d9066ed body=280 status=ok
// SIG undefined FUN_14d9066ed(void)

/* WARNING: Removing unreachable block (ram,0x00014d906802) */
/* WARNING: Removing unreachable block (ram,0x00014d906808) */
/* WARNING: Removing unreachable block (ram,0x000161b75b26) */
/* WARNING: Removing unreachable block (ram,0x000161b75b52) */
/* WARNING: Removing unreachable block (ram,0x000161b75b70) */
/* WARNING: Removing unreachable block (ram,0x000161b75b73) */

undefined8 FUN_14d9066ed(void)

{
  undefined8 uVar1;
  
  FUN_161af938d();
  uVar1 = FUN_161b75b26();
  return uVar1;
}



// FUNCTION 14d906808 FUN_14d906808 body=127 status=ok
// SIG undefined FUN_14d906808(void)

undefined8 FUN_14d906808(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d906888 FUN_14d906888 body=21 status=ok
// SIG undefined FUN_14d906888(void)

void FUN_14d906888(void)

{
  return;
}



// FUNCTION 14d906904 FUN_14d906904 body=10 status=ok
// SIG undefined FUN_14d906904(void)

void FUN_14d906904(void)

{
  return;
}



// FUNCTION 14d906996 FUN_14d906996 body=163 status=ok
// SIG undefined FUN_14d906996(void)

/* WARNING: Removing unreachable block (ram,0x00014d906a30) */
/* WARNING: Removing unreachable block (ram,0x00014d906a3b) */
/* WARNING: Removing unreachable block (ram,0x000166a38ebe) */
/* WARNING: Removing unreachable block (ram,0x000166a38f33) */
/* WARNING: Removing unreachable block (ram,0x000166a38f39) */
/* WARNING: Removing unreachable block (ram,0x0001652dc817) */
/* WARNING: Removing unreachable block (ram,0x000156b7b8f0) */
/* WARNING: Removing unreachable block (ram,0x000156b7b996) */
/* WARNING: Removing unreachable block (ram,0x0001625a958c) */
/* WARNING: Removing unreachable block (ram,0x000156b7b99c) */
/* WARNING: Removing unreachable block (ram,0x000156b7b9e6) */
/* WARNING: Removing unreachable block (ram,0x000156b7b9f6) */
/* WARNING: Removing unreachable block (ram,0x000156b7baa1) */
/* WARNING: Removing unreachable block (ram,0x000156b7baa6) */
/* WARNING: Removing unreachable block (ram,0x000156b7baac) */
/* WARNING: Removing unreachable block (ram,0x0001566b379f) */
/* WARNING: Removing unreachable block (ram,0x0001566b3822) */
/* WARNING: Removing unreachable block (ram,0x0001566b3833) */
/* WARNING: Removing unreachable block (ram,0x0001566b382e) */
/* WARNING: Removing unreachable block (ram,0x000156be68aa) */
/* WARNING: Removing unreachable block (ram,0x00014d906a36) */

undefined8
FUN_14d906996(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  longlong in_R11;
  ulonglong uVar2;
  ulonglong unaff_R15;
  undefined8 uStackX_20;
  
  *(undefined8 *)(param_4 + 8) = 0x7815d8c8;
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) ^ 0x7815d8c8;
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) - (in_R11 + 1);
  uVar2 = ~((unaff_R15 ^ 0xffffffffffffffff | param_6) & (param_6 ^ 0xffffffffffffffff | unaff_R15))
  ;
  *(undefined8 *)(uVar2 - 8) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = uStackX_20;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  uVar1 = FUN_156b7b8f0();
  return uVar1;
}



// FUNCTION 14d906a3b FUN_14d906a3b body=139 status=ok
// SIG undefined FUN_14d906a3b(void)

void FUN_14d906a3b(void)

{
  return;
}



// FUNCTION 14d906bc8 FUN_14d906bc8 body=1 status=ok
// SIG undefined FUN_14d906bc8(void)

void FUN_14d906bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14df561e4(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d906c67 FUN_14d906c67 body=328 status=ok
// SIG undefined FUN_14d906c67(void)

/* WARNING: Removing unreachable block (ram,0x00014d906cde) */
/* WARNING: Removing unreachable block (ram,0x00014d906ce4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d906c67(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_15ba032ae(FUN_15ba032ae,param_2,param_3,param_4);
  uVar1 = FUN_16697ddc6();
  return uVar1;
}



// FUNCTION 14d906d86 FUN_14d906d86 body=854 status=ok
// SIG undefined FUN_14d906d86(void)

/* WARNING: Removing unreachable block (ram,0x0001668de15c) */
/* WARNING: Removing unreachable block (ram,0x0001668de162) */
/* WARNING: Removing unreachable block (ram,0x0001614e5825) */
/* WARNING: Removing unreachable block (ram,0x0001668de04c) */
/* WARNING: Removing unreachable block (ram,0x000157104a49) */
/* WARNING: Removing unreachable block (ram,0x000157104a54) */
/* WARNING: Removing unreachable block (ram,0x0001564587b1) */
/* WARNING: Removing unreachable block (ram,0x0001668de004) */
/* WARNING: Removing unreachable block (ram,0x000156458736) */
/* WARNING: Removing unreachable block (ram,0x0001564587ab) */
/* WARNING: Removing unreachable block (ram,0x000165b89ded) */
/* WARNING: Removing unreachable block (ram,0x000165b89e28) */
/* WARNING: Removing unreachable block (ram,0x000165b89e2c) */
/* WARNING: Removing unreachable block (ram,0x000156925dd8) */
/* WARNING: Removing unreachable block (ram,0x0001614e586a) */
/* WARNING: Removing unreachable block (ram,0x0001614e58b9) */
/* WARNING: Removing unreachable block (ram,0x00014d906e0f) */

undefined8 FUN_14d906d86(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_157104a49(0x95);
  return uVar1;
}



// FUNCTION 14d906e0f FUN_14d906e0f body=19 status=ok
// SIG undefined FUN_14d906e0f(void)

void FUN_14d906e0f(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d906ea9 FUN_14d906ea9 body=122 status=ok
// SIG undefined FUN_14d906ea9(void)

void FUN_14d906ea9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  (*(code *)0x14e0b9dc9)
            (0x185d659a,
             unaff_retaddr + *(longlong *)(unaff_RSI + unaff_RDI) +
             (unaff_retaddr & *(ulonglong *)(unaff_RSI + unaff_RDI)) * -2 ^ unaff_RBP,param_3);
  return;
}



// FUNCTION 14d906fc1 FUN_14d906fc1 body=761 status=ok
// SIG undefined FUN_14d906fc1(void)

/* WARNING: Removing unreachable block (ram,0x00014d907217) */
/* WARNING: Removing unreachable block (ram,0x00014d907222) */
/* WARNING: Removing unreachable block (ram,0x00014d9070db) */
/* WARNING: Removing unreachable block (ram,0x00014d90705b) */
/* WARNING: Removing unreachable block (ram,0x0001621d0e07) */
/* WARNING: Removing unreachable block (ram,0x00014d907061) */
/* WARNING: Removing unreachable block (ram,0x00014d9070de) */
/* WARNING: Removing unreachable block (ram,0x00014d9070ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9070f2) */
/* WARNING: Removing unreachable block (ram,0x00014d9070fd) */
/* WARNING: Removing unreachable block (ram,0x000157266dcd) */
/* WARNING: Removing unreachable block (ram,0x00014d9070f8) */
/* WARNING: Removing unreachable block (ram,0x000156ec841f) */
/* WARNING: Removing unreachable block (ram,0x000156ec846e) */
/* WARNING: Removing unreachable block (ram,0x000156ec8491) */
/* WARNING: Removing unreachable block (ram,0x00014d90721d) */

void FUN_14d906fc1(void)

{
  FUN_1621d0e07();
  return;
}



// FUNCTION 14d907504 FUN_14d907504 body=553 status=ok
// SIG undefined FUN_14d907504(void)

/* WARNING: Removing unreachable block (ram,0x00014d90756a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d907504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  
  FUN_15af48bd0();
  uVar1 = *(undefined8 *)(unaff_R13 + -0x98);
  uVar2 = FUN_14e07859c();
  FUN_166309664(param_1,uVar2,FUN_166309664);
  return uVar1;
}



// FUNCTION 14d907732 FUN_14d907732 body=290 status=ok
// SIG undefined FUN_14d907732(void)

/* WARNING: Removing unreachable block (ram,0x00016225a646) */
/* WARNING: Removing unreachable block (ram,0x000166d4cad3) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb5b) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb66) */
/* WARNING: Removing unreachable block (ram,0x0001565d0e4e) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb6c) */
/* WARNING: Removing unreachable block (ram,0x000166d4cce4) */
/* WARNING: Removing unreachable block (ram,0x00014d9077d0) */
/* WARNING: Removing unreachable block (ram,0x0001660ac741) */
/* WARNING: Removing unreachable block (ram,0x0001660ac877) */
/* WARNING: Removing unreachable block (ram,0x00014d90784f) */
/* WARNING: Removing unreachable block (ram,0x00014d907855) */
/* WARNING: Removing unreachable block (ram,0x00014d90785a) */
/* WARNING: Removing unreachable block (ram,0x00014d9078d4) */
/* WARNING: Removing unreachable block (ram,0x00014d9078d9) */
/* WARNING: Removing unreachable block (ram,0x00016225a50e) */
/* WARNING: Removing unreachable block (ram,0x00016225a59e) */
/* WARNING: Removing unreachable block (ram,0x00016225a5a4) */
/* WARNING: Removing unreachable block (ram,0x00016225a651) */
/* WARNING: Removing unreachable block (ram,0x000166d4ca59) */
/* WARNING: Removing unreachable block (ram,0x000166d4cacd) */
/* WARNING: Removing unreachable block (ram,0x00015643d530) */
/* WARNING: Removing unreachable block (ram,0x00016225a656) */
/* WARNING: Removing unreachable block (ram,0x00014d8a0e60) */
/* WARNING: Removing unreachable block (ram,0x00014d9078df) */

void FUN_14d907732(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong in_stack_00000008;
  ushort in_stack_00000018;
  ushort uVar3;
  ulonglong local_res20;
  
  uVar3 = ~(in_stack_00000018 & (ushort)unaff_R15) & (in_stack_00000018 | (ushort)unaff_R15);
  lVar2 = local_res20 + unaff_R15 + (local_res20 & unaff_R15) * -2;
  if ((ushort)((~uVar3 | 0xfeff) + uVar3) < 0xfeff) {
    FUN_1621a2154();
    return;
  }
  puVar1 = (ulonglong *)(lVar2 + -8);
  *puVar1 = 0xeaca6b0;
  *puVar1 = *puVar1 ^ 0xeaca6b0;
  *puVar1 = *puVar1 + in_stack_00000008;
  *(ulonglong *)(lVar2 + -0x10) = *puVar1;
  *puVar1 = 0x6ebd8520;
  *puVar1 = *puVar1 ^ 0x6ebd8520;
  *puVar1 = (ulonglong)(&LAB_1621a21e9 + *puVar1);
  FUN_14d7c58a6(param_1,param_2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14d9077d0 FUN_14d9077d0 body=137 status=ok
// SIG undefined FUN_14d9077d0(void)

/* WARNING: Removing unreachable block (ram,0x00016225a646) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb6c) */
/* WARNING: Removing unreachable block (ram,0x000166d4cce4) */
/* WARNING: Removing unreachable block (ram,0x000166d4cad3) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb5b) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb66) */
/* WARNING: Removing unreachable block (ram,0x0001565d0e4e) */
/* WARNING: Removing unreachable block (ram,0x00016225a656) */
/* WARNING: Removing unreachable block (ram,0x00014d9078df) */
/* WARNING: Removing unreachable block (ram,0x00016225a5a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9077d0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  ushort uVar7;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000020;
  
  lVar5 = ~(~CONCAT44(0xffffffff,in_stack_00000008) + 2) + 0x6bc5ec0b;
  *(undefined8 *)(in_R10 + lVar5) = 0;
  puVar1 = (ulonglong *)(in_R10 + lVar5);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  if (!CARRY8(uVar8,param_2)) {
    uVar7 = ((ushort)param_5 | 0x100) - 0x100;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a977b) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a977b) is written */
    LOCK();
    uRam000000014d7a977b = (undefined1)in_stack_00000020;
    UNLOCK();
    param_6[-1] = in_stack_00000020 & 0xffffffffffffff00;
    puVar1 = param_6 + -2;
    *puVar1 = in_stack_00000020 & 0xffffffffffffff00;
    param_6[-3] = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
                  (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
                  (ulonglong)((uVar7 & 0x400) != 0) * 0x400 |
                  (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
                  (ulonglong)((uVar7 & 0x100) != 0) * 0x100 |
                  (ulonglong)((uVar7 & 0x80) != 0) * 0x80 | (ulonglong)((uVar7 & 0x40) != 0) * 0x40
                  | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 | (ulonglong)((uVar7 & 4) != 0) * 4 |
                  (ulonglong)((uVar7 & 1) != 0) | (ulonglong)((param_5 & 0x200000) != 0) * 0x200000
                  | (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
    uVar8 = param_6[-3];
    param_6[-3] = (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 |
                  (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
                  (ulonglong)((uVar8 & 0x400) != 0) * 0x400 |
                  (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
                  (ulonglong)((uVar8 & 0x100) != 0) * 0x100 |
                  (ulonglong)((uVar8 & 0x80) != 0) * 0x80 | (ulonglong)((uVar8 & 0x40) != 0) * 0x40
                  | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 | (ulonglong)((uVar8 & 4) != 0) * 4 |
                  (ulonglong)((uVar8 & 1) != 0) | (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
                  (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
    param_6[-4] = unaff_R12;
    uVar8 = param_6[-3];
    param_6[-3] = unaff_RBX;
    param_6[-4] = in_stack_00000018;
    param_6[-5] = (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 |
                  (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
                  (ulonglong)((uVar8 & 0x400) != 0) * 0x400 |
                  (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
                  (ulonglong)((uVar8 & 0x100) != 0) * 0x100 |
                  (ulonglong)((uVar8 & 0x80) != 0) * 0x80 | (ulonglong)((uVar8 & 0x40) != 0) * 0x40
                  | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 | (ulonglong)((uVar8 & 4) != 0) * 4 |
                  (ulonglong)((uVar8 & 1) != 0) | (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
                  (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
    uVar2 = param_6[-4];
    param_6[-1] = 0x2f956a6;
    uVar3 = param_6[-3];
    *puVar1 = unaff_RDI;
    param_6[-3] = unaff_RDI;
    param_6[-4] = FUN_1660ac7c1;
    FUN_156c4cf56(param_1,uVar2);
    *(undefined4 *)puVar1 = 0x6451424b;
    *(undefined4 *)((longlong)param_6 + -0xc) = 0xe33c3b23;
    *(int *)((longlong)param_6 + -0xc) = *(int *)((longlong)param_6 + -0xc) + 0x1cc3c4dd;
    uVar4 = *puVar1;
    *puVar1 = (ulonglong)FUN_156c4cf56;
    param_6[-3] = param_1;
    cVar6 = (char)param_6[-3];
    uVar8 = *puVar1;
    *(undefined8 *)(unaff_RBP + ~((uVar4 | 0xffffffff9baebdbc) & (~uVar4 | 0x64514243))) = param_3;
    param_6[1] = in_stack_00000010;
    *param_6 = param_6[-1];
    param_6[-1] = param_4;
    param_6[3] = param_6[3] - in_R11;
    *param_6 = 0x1660ac84e;
    lVar5 = FUN_16589e5fc();
    uVar4 = param_6[1];
    param_6[1] = uVar3;
    param_6[1] = param_6[1] - (lVar5 << (cVar6 + 0x39U & 0x3f));
    param_6[1] = *(undefined8 *)(uVar8 - 0x28);
    FUN_1648cc404(uVar4,*(ulonglong *)(uVar8 - 0x68) ^ uVar4);
    return;
  }
  if (!CARRY8(uVar8,param_2) && *puVar1 != 0) {
    uVar8 = ~(((unaff_R15 - 1) - (~(unaff_RBP | unaff_R15) + 1 ^ 0xffffffffffffffff)) + unaff_RBP);
    if ((unaff_RDI - (uVar8 | unaff_RDI)) + uVar8 == 0) {
      FUN_161600835();
      return;
    }
    FUN_16225a50e();
    return;
  }
  FUN_1660ac741();
  return;
}



// FUNCTION 14d90785a FUN_14d90785a body=169 status=ok
// SIG undefined FUN_14d90785a(void)

/* WARNING: Removing unreachable block (ram,0x00016225a646) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb6c) */
/* WARNING: Removing unreachable block (ram,0x000166d4cce4) */
/* WARNING: Removing unreachable block (ram,0x000166d4cad3) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb5b) */
/* WARNING: Removing unreachable block (ram,0x000166d4cb66) */
/* WARNING: Removing unreachable block (ram,0x0001565d0e4e) */
/* WARNING: Removing unreachable block (ram,0x00016225a656) */
/* WARNING: Removing unreachable block (ram,0x00014d9078df) */
/* WARNING: Removing unreachable block (ram,0x00016225a5a4) */

void FUN_14d90785a(void)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = ~(((unaff_R15 - 1) - (~(unaff_RBP | unaff_R15) + 1 ^ 0xffffffffffffffff)) + unaff_RBP);
  if ((unaff_RDI - (uVar1 | unaff_RDI)) + uVar1 == 0) {
    FUN_161600835();
    return;
  }
  FUN_16225a50e();
  return;
}



// FUNCTION 14d907a92 FUN_14d907a92 body=170 status=ok
// SIG undefined FUN_14d907a92(void)

void FUN_14d907a92(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166a20855(0xdd,FUN_166a20855,*(ulonglong *)(unaff_RDI + -0x40) | param_1);
  return;
}



// FUNCTION 14d907b3c FUN_14d907b3c body=152 status=ok
// SIG undefined FUN_14d907b3c(void)

void FUN_14d907b3c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d873a28(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)));
  (*(code *)&LAB_161da92f0)();
  return;
}



// FUNCTION 14d907bd4 FUN_14d907bd4 body=136 status=ok
// SIG undefined FUN_14d907bd4(void)

void FUN_14d907bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *unaff_R13;
  
  (*(code *)&LAB_161da92f0)(param_1,-(*unaff_R13 | 0xde1da7ee),param_3,param_4);
  return;
}



// FUNCTION 14d907c5e FUN_14d907c5e body=141 status=ok
// SIG undefined FUN_14d907c5e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d907c5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  
  FUN_161893e69(param_1,param_2);
  *unaff_R14 = unaff_R13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d907ceb FUN_14d907ceb body=16 status=ok
// SIG undefined FUN_14d907ceb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d907ceb(void)

{
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  
  *unaff_R14 = unaff_R13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d907d9c FUN_14d907d9c body=274 status=ok
// SIG undefined FUN_14d907d9c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016496217f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2f3d) */
/* WARNING: Removing unreachable block (ram,0x00016472b5b7) */
/* WARNING: Removing unreachable block (ram,0x00014d907e46) */
/* WARNING: Removing unreachable block (ram,0x00014d907ed1) */
/* WARNING: Removing unreachable block (ram,0x00016472b538) */
/* WARNING: Removing unreachable block (ram,0x00016472b5b1) */
/* WARNING: Removing unreachable block (ram,0x00014d8242f5) */
/* WARNING: Removing unreachable block (ram,0x00014d907ed7) */
/* WARNING: Removing unreachable block (ram,0x00014d907f42) */
/* WARNING: Removing unreachable block (ram,0x00014d907f58) */

ulonglong FUN_14d907d9c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if ((*(ulonglong *)(unaff_RDI + -0x38) & param_1) == 0) {
    return param_1;
  }
  uVar1 = FUN_162187481();
  return uVar1;
}



// FUNCTION 14d907e46 FUN_14d907e46 body=327 status=ok
// SIG undefined FUN_14d907e46(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016496217f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2f3d) */
/* WARNING: Removing unreachable block (ram,0x00016472b5b7) */
/* WARNING: Removing unreachable block (ram,0x00014d907ed7) */
/* WARNING: Removing unreachable block (ram,0x00014d907f42) */
/* WARNING: Removing unreachable block (ram,0x00014d907f58) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d907e46(ulonglong param_1,undefined8 param_2,LPVOID param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  DWORD in_stack_00000008;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar3 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar1 = ~(local_res20 & param_1) & ((~local_res20 | ~param_1) + param_1) - ~local_res20;
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 0x18) = uVar3 ^ param_1;
  *(undefined4 *)(uVar1 - 0x20) = 0xae1fdf91;
  *(undefined4 *)(uVar1 - 0x1c) = 0xffffffff;
  *(undefined1 **)(uVar1 + *(longlong *)(uVar1 - 0x20) + 0x51e02067) = &LAB_14d824376;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(undefined4 *)(uVar1 - 0x18) = 0x47f7c46e;
  *(undefined4 *)(uVar1 - 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014d824358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree((HANDLE)(uVar2 ^ param_1),in_stack_00000008,param_3);
  return;
}



// FUNCTION 14d907f91 FUN_14d907f91 body=121 status=ok
// SIG undefined FUN_14d907f91(void)

void FUN_14d907f91(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x161076a92)(0x161076a92,*(ulonglong *)(unaff_R12 + -0x78) & in_RAX);
  return;
}



// FUNCTION 14d90800d FUN_14d90800d body=287 status=ok
// SIG undefined FUN_14d90800d(void)

/* WARNING: Removing unreachable block (ram,0x00014d908099) */
/* WARNING: Removing unreachable block (ram,0x00014d908093) */
/* WARNING: Removing unreachable block (ram,0x00014d90809e) */
/* WARNING: Removing unreachable block (ram,0x000161305eb8) */

void FUN_14d90800d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  
  FUN_1660891f2(in_stack_00000010);
  (*(code *)0x1669ceb25)(uStackX_18,param_2,param_3);
  return;
}



// FUNCTION 14d90812e FUN_14d90812e body=17 status=ok
// SIG undefined FUN_14d90812e(void)

void FUN_14d90812e(void)

{
  return;
}



// FUNCTION 14d90824b FUN_14d90824b body=152 status=ok
// SIG undefined FUN_14d90824b(void)

void FUN_14d90824b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBX;
  ulonglong unaff_R14;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(unaff_RBX + 8) =
       (-~unaff_R14 - (~(~unaff_R14 | *(ulonglong *)(unaff_RBX + 8)) + 2)) + 1;
  (*(code *)0x14ddc7eb7)(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14d908377 FUN_14d908377 body=853 status=ok
// SIG undefined FUN_14d908377(void)

/* WARNING: Instruction at (ram,0x000161601a6c) overlaps instruction at (ram,0x000161601a6b)
    */
/* WARNING: Removing unreachable block (ram,0x000156a738bd) */
/* WARNING: Removing unreachable block (ram,0x000156a738c8) */
/* WARNING: Removing unreachable block (ram,0x000161601a19) */
/* WARNING: Removing unreachable block (ram,0x000161601a13) */
/* WARNING: Removing unreachable block (ram,0x000161601a1e) */
/* WARNING: Removing unreachable block (ram,0x000161601a6c) */
/* WARNING: Removing unreachable block (ram,0x000161601a6b) */
/* WARNING: Removing unreachable block (ram,0x000161601a72) */
/* WARNING: Removing unreachable block (ram,0x000161e01ea5) */
/* WARNING: Removing unreachable block (ram,0x0001610ca726) */
/* WARNING: Removing unreachable block (ram,0x0001610ca72c) */
/* WARNING: Removing unreachable block (ram,0x0001610ca731) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5f0) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5f6) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5fb) */
/* WARNING: Removing unreachable block (ram,0x000156a15cdd) */
/* WARNING: Removing unreachable block (ram,0x0001610ca689) */
/* WARNING: Removing unreachable block (ram,0x0001610ca68f) */
/* WARNING: Removing unreachable block (ram,0x0001610ca694) */
/* WARNING: Removing unreachable block (ram,0x0001610ca721) */
/* WARNING: Removing unreachable block (ram,0x00014d90840b) */
/* WARNING: Removing unreachable block (ram,0x00014d908417) */
/* WARNING: Removing unreachable block (ram,0x00014d9084af) */
/* WARNING: Removing unreachable block (ram,0x000166273771) */
/* WARNING: Removing unreachable block (ram,0x00014d9084bb) */
/* WARNING: Removing unreachable block (ram,0x00014d908549) */
/* WARNING: Removing unreachable block (ram,0x00014d90854e) */
/* WARNING: Removing unreachable block (ram,0x00014d908554) */
/* WARNING: Removing unreachable block (ram,0x0001610ca390) */
/* WARNING: Removing unreachable block (ram,0x0001610ca549) */
/* WARNING: Removing unreachable block (ram,0x0001610ca54e) */
/* WARNING: Removing unreachable block (ram,0x000156a73777) */
/* WARNING: Removing unreachable block (ram,0x00016626e885) */
/* WARNING: Removing unreachable block (ram,0x0001610ca554) */
/* WARNING: Removing unreachable block (ram,0x00015643481d) */
/* WARNING: Removing unreachable block (ram,0x000156434892) */
/* WARNING: Removing unreachable block (ram,0x000156434897) */
/* WARNING: Removing unreachable block (ram,0x00015b1eff54) */
/* WARNING: Removing unreachable block (ram,0x00015b1eff58) */
/* WARNING: Removing unreachable block (ram,0x00016626e893) */
/* WARNING: Removing unreachable block (ram,0x00016626e8a0) */
/* WARNING: Removing unreachable block (ram,0x00016626e902) */
/* WARNING: Removing unreachable block (ram,0x00016626e907) */
/* WARNING: Removing unreachable block (ram,0x00016626e90d) */
/* WARNING: Removing unreachable block (ram,0x0001610f8858) */
/* WARNING: Removing unreachable block (ram,0x000156a738c3) */

void FUN_14d908377(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_R14;
  ushort unaff_retaddr;
  uint6 unaff_retaddr_00;
  longlong local_res8;
  ulonglong uStack_10;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x38) | param_1;
  uVar12 = *(ulonglong *)(unaff_RDI + -0x38) & param_1;
  lVar5 = *(ulonglong *)(unaff_RDI + -0x40) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x40) & param_1) * -2;
  uVar10 = ~(*(ulonglong *)(unaff_RDI + -0x30) & param_1) &
           (*(ulonglong *)(unaff_RDI + -0x30) | param_1);
  lVar6 = (-param_1 - *(ulonglong *)(unaff_RDI + -0x70)) +
          (*(ulonglong *)(unaff_RDI + -0x70) | param_1) * 2;
  uStack_10 = uStack_10 & 0xffffffff00000000;
  pcVar4 = FUN_166c352dc;
  FUN_166c352dc();
  uVar8 = *(ulonglong *)(unaff_RDI + -0x48) ^ param_1;
  FUN_1649e6d41(param_1,pcVar4 + ((ulonglong)pcVar4 & param_1) * -2 + param_1);
  *(ulonglong *)(uVar8 + 0x18) =
       (param_1 - (*(ulonglong *)(uVar8 + 0x18) | param_1)) + *(longlong *)(uVar8 + 0x18);
  lVar1 = local_res8 * -2;
  uVar9 = (-0x101 - ~(~unaff_retaddr & 0x100)) + unaff_retaddr;
  uVar3 = 0x161601948;
  syscall();
  *(longlong *)(lVar1 + -8) = lVar5;
  *(longlong *)(lVar1 + -0x10) = lVar5;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
       (ulonglong)((unaff_retaddr_00 & 0x20) != 0) * 0x200000 |
       (ulonglong)((unaff_retaddr_00 & 4) != 0) * 0x40000;
  *(undefined4 *)(lVar1 + -0x20) = 0x76a7bf21;
  *(undefined4 *)(lVar1 + -0x1c) = 0;
  uVar11 = *(ulonglong *)(lVar1 + -0x20) ^ 0x7ac673df;
  uVar8 = *(ulonglong *)(lVar1 + -0x18);
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lVar1 + -0x20) = -unaff_R14;
  *(undefined4 *)(lVar1 + -0x28) = 0x2cbce2db;
  *(undefined4 *)(lVar1 + -0x24) = 0;
  uVar8 = *(ulonglong *)(lVar1 + -0x28);
  *(code **)(lVar1 + -0x28) = FUN_1649e6d41;
  *(ulonglong *)(lVar1 + -0x30) = uVar10;
  lVar5 = uVar11 - (uVar8 ^ 0x2aa9434f);
  *(undefined8 *)(lVar1 + -0x38) = 0x1616019a7;
  uVar2 = FUN_165aeb9c7();
  *(undefined8 *)(lVar1 + -0x38) = uVar3;
  uVar3 = *(undefined8 *)(lVar1 + -0x38);
  *(undefined8 *)(lVar1 + -0x38) = uVar2;
  *(undefined8 *)(lVar1 + -0x38) = uVar3;
  *(ulonglong *)(lVar1 + -0x40) = uStack_10;
  uVar3 = *(undefined8 *)(lVar1 + -0x38);
  *(longlong *)(lVar1 + -0x38) = lVar5;
  *(ulonglong *)(lVar1 + -0x40) = uVar11;
  *(ulonglong *)(lVar1 + -0x38) = ~uVar12 & uVar7;
  *(longlong *)(lVar1 + -0x40) = lVar6;
  (*(code *)0x14e192e50)(uVar3);
  return;
}



// FUNCTION 14d9084bb FUN_14d9084bb body=152 status=ok
// SIG undefined FUN_14d9084bb(void)

/* WARNING: Removing unreachable block (ram,0x000156a738bd) */
/* WARNING: Removing unreachable block (ram,0x000156a738c8) */
/* WARNING: Removing unreachable block (ram,0x00015b1eff54) */
/* WARNING: Removing unreachable block (ram,0x00016626e893) */
/* WARNING: Removing unreachable block (ram,0x00016626e907) */
/* WARNING: Removing unreachable block (ram,0x00016626e90d) */
/* WARNING: Removing unreachable block (ram,0x0001610f8858) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5f6) */
/* WARNING: Removing unreachable block (ram,0x0001610ca726) */
/* WARNING: Removing unreachable block (ram,0x0001610ca731) */
/* WARNING: Removing unreachable block (ram,0x0001610ca72c) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5f0) */
/* WARNING: Removing unreachable block (ram,0x0001610ca5fb) */
/* WARNING: Removing unreachable block (ram,0x000156a15cdd) */
/* WARNING: Removing unreachable block (ram,0x0001610ca689) */
/* WARNING: Removing unreachable block (ram,0x0001610ca68f) */
/* WARNING: Removing unreachable block (ram,0x0001610ca694) */
/* WARNING: Removing unreachable block (ram,0x0001610ca721) */
/* WARNING: Removing unreachable block (ram,0x000156a738c3) */
/* WARNING: Removing unreachable block (ram,0x00015643481d) */
/* WARNING: Removing unreachable block (ram,0x000156434897) */
/* WARNING: Removing unreachable block (ram,0x000156434892) */
/* WARNING: Removing unreachable block (ram,0x00014d908554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9084bb(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6)

{
  uint *puVar1;
  ulonglong *puVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  undefined8 uStackX_20;
  
  *(ulonglong *)(in_R11 + 0x10) = ((param_3 & param_1) - param_3) + *(longlong *)(in_R11 + 0x10);
  if (~-(0xffffffffffffffffU - param_5 | unaff_RDI) <= unaff_RDI - 1) {
    FUN_1610ca390();
    return;
  }
  uVar4 = ~(param_6 & param_1) & (param_6 | param_1);
  puVar2 = (ulonglong *)(uVar4 - 8);
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ unaff_RBX;
  *(undefined8 *)(uVar4 - 0x10) = in_RAX;
  *(undefined8 *)(uVar4 - 0x18) = in_RAX;
  *(undefined8 *)(uVar4 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar4 - 0x28) = 0x1610ca42c;
  FUN_1621ec39d();
  uVar10 = *(undefined8 *)(uVar4 - 0x20);
  *(undefined8 *)(uVar4 - 0x20) = uStackX_20;
  *(undefined8 *)(uVar4 - 0x28) = local_res10;
  *(undefined8 *)(uVar4 - 0x30) = unaff_R12;
  puVar3 = (ushort *)(uVar4 - 0x18);
  lVar7 = *(longlong *)(uVar4 - 0x30);
  uVar5 = *puVar3;
  *puVar3 = 0;
  *puVar3 = *puVar3 + ((uVar5 | 0x100) - 0x100);
  uVar8 = *(undefined8 *)(uVar4 - 0x20);
  lVar6 = *(longlong *)(uVar4 - 0x10);
  *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(uVar4 - 0x28);
  *(undefined8 *)(lVar6 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar6 + -0x18) = unaff_RBP;
  *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(lVar6 + -8);
  *(undefined8 *)(lVar6 + -0x18) = uVar8;
  *(undefined8 *)(lVar6 + -0x20) = uVar10;
  *(undefined8 *)(lVar6 + -8) = 0x14ddc1827;
  *(undefined8 *)(lVar6 + -0x18) = 0x1610ca4b2;
  uVar10 = FUN_14ddc17f3();
  *(undefined8 *)(lVar6 + -0x18) = uVar10;
  *(undefined4 *)(lVar6 + -0x18) = 0;
  *(undefined4 *)(lVar6 + -0x14) = 0;
  *(undefined4 *)(lVar6 + -0x18) = 0xc9f454ce;
  *(undefined4 *)(lVar6 + -0x14) = 0xffffffff;
  uVar4 = *(ulonglong *)(*(longlong *)(lVar6 + -0x18) + 0x360baaba);
  *(undefined8 *)(lVar6 + -0x18) = uVar10;
  *(undefined4 *)(lVar6 + -0x18) = 0x5c9fd26;
  *(undefined4 *)(lVar6 + -0x14) = 0;
  if (uVar4 + unaff_R15 < ~(~uVar4 | ~unaff_R15) * 2) {
    *(undefined8 *)(lVar6 + -0x18) = uVar10;
    *(undefined4 *)(lVar6 + -0x20) = 0x143380ac;
    *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(lVar6 + -0x20);
    *(undefined4 *)(lVar6 + -0x14) = 0;
    *(undefined8 *)(lVar6 + -0x18) = _DAT_ffffffffffffffd8;
    puVar1 = (uint *)(lVar6 + -0x18);
    *puVar1 = 0xe2596163;
    *puVar1 = *puVar1 ^ 0x1024a7f6;
    *(undefined4 *)(lVar6 + -0x14) = 0xffffffff;
    *(undefined8 *)(lVar6 + -0x20) = 0x156a73825;
    uVar9 = FUN_1660e865e();
    *(ulonglong *)(lVar6 + -0x20) = uVar9;
    *(undefined4 *)(lVar6 + -0x20) = 0;
    *(undefined4 *)(lVar6 + -0x1c) = 0;
    uVar4 = *(ulonglong *)(lVar7 + -0x80);
    *(ulonglong *)(lVar6 + -0x20) = uVar9;
    *(undefined8 *)(lVar6 + -0x28) = unaff_RSI;
    *(ulonglong *)(lVar6 + -0x20) = uVar4 ^ uVar9;
    FUN_1610f8858();
    return;
  }
  FUN_156a73777();
  return;
}



// FUNCTION 14d908554 FUN_14d908554 body=229 status=ok
// SIG undefined FUN_14d908554(void)

void FUN_14d908554(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_166858647(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d90866b FUN_14d90866b body=295 status=ok
// SIG undefined FUN_14d90866b(void)

void FUN_14d90866b(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15;
  uVar1 = FUN_15b3bc0e7(uVar2,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_14d974ab0(uVar2,*(ulonglong *)(unaff_R12 + -0x40) | uVar1);
  return;
}



// FUNCTION 14d908833 FUN_14d908833 body=296 status=ok
// SIG undefined FUN_14d908833(void)

undefined8 FUN_14d908833(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = ~(*(ulonglong *)(unaff_RDI + -0x88) & param_1) &
          (*(ulonglong *)(unaff_RDI + -0x88) | param_1);
  FUN_164f2baf5();
  uVar1 = FUN_1669a25cc(((~uVar2 | *(ulonglong *)((in_RAX ^ param_1) - 0x40)) + uVar2 + 1) * 2);
  return uVar1;
}



// FUNCTION 14d90895e FUN_14d90895e body=122 status=ok
// SIG undefined FUN_14d90895e(void)

undefined8 FUN_14d90895e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d908bc2 FUN_14d908bc2 body=302 status=ok
// SIG undefined FUN_14d908bc2(void)

/* WARNING: Removing unreachable block (ram,0x00014d908c57) */
/* WARNING: Removing unreachable block (ram,0x00014d908cf2) */
/* WARNING: Removing unreachable block (ram,0x000162e51cc5) */
/* WARNING: Removing unreachable block (ram,0x000162e51d55) */
/* WARNING: Removing unreachable block (ram,0x000162e51d59) */
/* WARNING: Removing unreachable block (ram,0x00014d908cf8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d908bc2(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(ulonglong *)(uVar1 - 8) =
       ~((unaff_R15 - (local_res10 | unaff_R15)) + local_res10) &
       (~unaff_R15 & local_res10 | unaff_R15);
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  *(undefined8 *)(uVar1 - 0x30) = uVar2;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 0x30);
  *(undefined **)(uVar1 - 8) = &DAT_1624b0ab5;
  uVar2 = FUN_1624b0a87(param_1,param_2,local_res8);
  return uVar2;
}



// FUNCTION 14d908c57 FUN_14d908c57 body=456 status=ok
// SIG undefined FUN_14d908c57(void)

/* WARNING: Removing unreachable block (ram,0x00014d908cf8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d908c57(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  uVar1 = FUN_1570c3f0e(param_1,param_2,local_res8,param_4);
  return uVar1;
}



// FUNCTION 14d908e30 FUN_14d908e30 body=155 status=ok
// SIG undefined FUN_14d908e30(void)

void FUN_14d908e30(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  longlong local_res18;
  
  (*(code *)&LAB_1566140d0)(param_2 + local_res18 * -2,local_res10);
  return;
}



// FUNCTION 14d908f7b FUN_14d908f7b body=305 status=ok
// SIG undefined FUN_14d908f7b(void)

/* WARNING: Removing unreachable block (ram,0x00014d909025) */
/* WARNING: Removing unreachable block (ram,0x00014d909030) */
/* WARNING: Removing unreachable block (ram,0x000166839b25) */
/* WARNING: Removing unreachable block (ram,0x000166839b2b) */
/* WARNING: Removing unreachable block (ram,0x000166c5751a) */
/* WARNING: Removing unreachable block (ram,0x000166c573ed) */
/* WARNING: Removing unreachable block (ram,0x000166c5747d) */
/* WARNING: Removing unreachable block (ram,0x000166c57482) */
/* WARNING: Removing unreachable block (ram,0x000157195258) */
/* WARNING: Removing unreachable block (ram,0x000166c57488) */
/* WARNING: Removing unreachable block (ram,0x000166c5751f) */
/* WARNING: Removing unreachable block (ram,0x000166c57525) */
/* WARNING: Removing unreachable block (ram,0x000166c5752a) */
/* WARNING: Removing unreachable block (ram,0x0001564bf7e1) */
/* WARNING: Removing unreachable block (ram,0x000166c575ac) */
/* WARNING: Removing unreachable block (ram,0x000166c575b8) */
/* WARNING: Removing unreachable block (ram,0x000166c575bd) */
/* WARNING: Removing unreachable block (ram,0x000166c57656) */
/* WARNING: Removing unreachable block (ram,0x000166c5765b) */
/* WARNING: Removing unreachable block (ram,0x000162109891) */
/* WARNING: Removing unreachable block (ram,0x000162109936) */
/* WARNING: Removing unreachable block (ram,0x00016210993c) */
/* WARNING: Removing unreachable block (ram,0x0001652cd68f) */
/* WARNING: Removing unreachable block (ram,0x000166c57661) */
/* WARNING: Removing unreachable block (ram,0x000156c1fc57) */
/* WARNING: Removing unreachable block (ram,0x000166c576e7) */
/* WARNING: Removing unreachable block (ram,0x000166c576ed) */
/* WARNING: Removing unreachable block (ram,0x000166c576f2) */
/* WARNING: Removing unreachable block (ram,0x000166c57750) */
/* WARNING: Removing unreachable block (ram,0x000166c57754) */
/* WARNING: Removing unreachable block (ram,0x000165d728af) */
/* WARNING: Removing unreachable block (ram,0x000166c578be) */
/* WARNING: Removing unreachable block (ram,0x000166c578c4) */
/* WARNING: Removing unreachable block (ram,0x000166c578c9) */
/* WARNING: Removing unreachable block (ram,0x000166c57965) */
/* WARNING: Removing unreachable block (ram,0x000166befbec) */
/* WARNING: Removing unreachable block (ram,0x000166befca0) */
/* WARNING: Removing unreachable block (ram,0x000166befca6) */
/* WARNING: Removing unreachable block (ram,0x000166d008c2) */
/* WARNING: Removing unreachable block (ram,0x000166c5796b) */
/* WARNING: Removing unreachable block (ram,0x00014d90902b) */
/* WARNING: Removing unreachable block (ram,0x000166839ab2) */

void FUN_14d908f7b(void)

{
  FUN_14da8745c();
  FUN_166c573ed();
  return;
}



// FUNCTION 14d9090ae FUN_14d9090ae body=403 status=ok
// SIG undefined FUN_14d9090ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d909157) */
/* WARNING: Removing unreachable block (ram,0x00014d909165) */
/* WARNING: Removing unreachable block (ram,0x00014d90916a) */
/* WARNING: Removing unreachable block (ram,0x00014d9091b1) */
/* WARNING: Removing unreachable block (ram,0x00014d9091c4) */
/* WARNING: Removing unreachable block (ram,0x00014d9091e3) */
/* WARNING: Removing unreachable block (ram,0x00014d9091e8) */

void FUN_14d9090ae(void)

{
  undefined8 unaff_RDI;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined1 **)(local_res20 + -8) = &LAB_166488c94;
  FUN_14d7bd7a6();
  return;
}



// FUNCTION 14d9092a0 FUN_14d9092a0 body=158 status=ok
// SIG undefined FUN_14d9092a0(void)

/* WARNING: Removing unreachable block (ram,0x00014d909333) */
/* WARNING: Removing unreachable block (ram,0x00014d909339) */
/* WARNING: Removing unreachable block (ram,0x00014d90933e) */

void FUN_14d9092a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x1614358cd)(param_1,param_2,0x1614358cd,unaff_retaddr);
  return;
}



// FUNCTION 14d90933e FUN_14d90933e body=75 status=ok
// SIG undefined FUN_14d90933e(void)

void FUN_14d90933e(void)

{
  return;
}



// FUNCTION 14d90940a FUN_14d90940a body=156 status=ok
// SIG undefined FUN_14d90940a(void)

void FUN_14d90940a(undefined8 param_1)

{
  undefined8 local_res10;
  
  (*(code *)0x166785589)(param_1,local_res10);
  return;
}



// FUNCTION 14d909533 FUN_14d909533 body=160 status=ok
// SIG undefined FUN_14d909533(void)

void FUN_14d909533(void)

{
  FUN_166702a69();
  return;
}



// FUNCTION 14d9095d3 FUN_14d9095d3 body=254 status=ok
// SIG undefined FUN_14d9095d3(void)

/* WARNING: Removing unreachable block (ram,0x00014d909672) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9095d3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined8 local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res8 + param_1 + (local_res8 & param_1) * -2,param_2,param_3,param_4);
  *(undefined8 *)(local_res18 ^ param_1) = 0x7daa87c;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d909672 FUN_14d909672 body=152 status=ok
// SIG undefined FUN_14d909672(void)

void FUN_14d909672(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  (*(code *)&LAB_164c00b0e)(param_1,~((~in_RAX | unaff_RBP) + in_RAX + 1) & (unaff_RBP | in_RAX));
  return;
}



// FUNCTION 14d90984e FUN_14d90984e body=127 status=ok
// SIG undefined FUN_14d90984e(void)

void FUN_14d90984e(void)

{
  FUN_15b6e90fe();
  FUN_14d9098cf();
  return;
}



// FUNCTION 14d9098cf FUN_14d9098cf body=179 status=ok
// SIG undefined FUN_14d9098cf(void)

/* WARNING: Removing unreachable block (ram,0x00014d909972) */

undefined8
FUN_14d9098cf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1564b361e(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d909cfb FUN_14d909cfb body=461 status=ok
// SIG undefined FUN_14d909cfb(void)

/* WARNING: Removing unreachable block (ram,0x00014d909d93) */
/* WARNING: Removing unreachable block (ram,0x00014d909d9f) */
/* WARNING: Removing unreachable block (ram,0x0001622bc00a) */
/* WARNING: Removing unreachable block (ram,0x0001622bbfff) */

void FUN_14d909cfb(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160db429e(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d909ed4 FUN_14d909ed4 body=166 status=ok
// SIG undefined FUN_14d909ed4(void)

code * FUN_14d909ed4(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  code *pcVar2;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong in_R9;
  longlong unaff_R12;
  ulonglong uStackX_10;
  
  uVar1 = 0;
  FUN_15b93c6fa(0,-*(longlong *)(unaff_R12 + -0x28),*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~(unaff_RBP & unaff_RDI | ~(~in_R9 | in_RAX)) ^ 0xffffffffffffffff);
  pcVar2 = FUN_164fa21a8;
  FUN_164fa21a8();
  return pcVar2 + (*(ulonglong *)
                    (&stack0x00001941 + ((~(uStackX_10 & uVar1) + uVar1) - ~uStackX_10)) &
                  (ulonglong)pcVar2) * -2 +
                  *(ulonglong *)(&stack0x00001941 + ((~(uStackX_10 & uVar1) + uVar1) - ~uStackX_10))
  ;
}



// FUNCTION 14d909f7a FUN_14d909f7a body=284 status=ok
// SIG undefined FUN_14d909f7a(void)

code * FUN_14d909f7a(ulonglong param_1)

{
  code *pcVar1;
  ulonglong uStackX_8;
  
  pcVar1 = FUN_164fa21a8;
  FUN_164fa21a8();
  return pcVar1 + (*(ulonglong *)
                    (&stack0x00001939 + ((~(uStackX_8 & param_1) + param_1) - ~uStackX_8)) &
                  (ulonglong)pcVar1) * -2 +
                  *(ulonglong *)
                   (&stack0x00001939 + ((~(uStackX_8 & param_1) + param_1) - ~uStackX_8));
}



// FUNCTION 14d90a09c FUN_14d90a09c body=158 status=ok
// SIG undefined FUN_14d90a09c(void)

void FUN_14d90a09c(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1574a28e3(param_1 + unaff_R15 + (param_1 & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d90a13b FUN_14d90a13b body=418 status=ok
// SIG undefined FUN_14d90a13b(void)

void FUN_14d90a13b(void)

{
  FUN_1646e9ac8();
  FUN_161231d1d();
  FUN_15b10faf7();
  return;
}



// FUNCTION 14d90a401 FUN_14d90a401 body=74 status=ok
// SIG undefined FUN_14d90a401(void)

void FUN_14d90a401(void)

{
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0xfffffffff3f75730 + unaff_R14) = unaff_R15;
  return;
}



// FUNCTION 14d90a49e FUN_14d90a49e body=141 status=ok
// SIG undefined FUN_14d90a49e(void)

void FUN_14d90a49e(void)

{
  undefined1 *puVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = &stack0xfffffffffa4c6ae6 + unaff_RBX;
  *(ulonglong *)(puVar1 + -8) =
       ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48)) &
        (~*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15));
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(unaff_R13 + -0x78);
  (*(code *)&LAB_16235beab)(*(undefined8 *)(puVar1 + -8),puVar1);
  return;
}



// FUNCTION 14d90a52e FUN_14d90a52e body=178 status=ok
// SIG undefined FUN_14d90a52e(void)

void FUN_14d90a52e(void)

{
  return;
}



// FUNCTION 14d90a5e1 FUN_14d90a5e1 body=225 status=ok
// SIG undefined FUN_14d90a5e1(void)

void FUN_14d90a5e1(undefined8 param_1,short *param_2)

{
  code *pcVar1;
  ushort unaff_SI;
  undefined8 in_R10;
  undefined8 unaff_R14;
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
  undefined8 local_res18;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  FUN_16227ab51(param_1,param_2,unaff_retaddr);
  *param_2 = (~unaff_SI - 0x100) + *param_2;
  bVar10 = (in_stack_00000030 & 0x4000) != 0;
  bVar9 = (in_stack_00000030 & 0x800) != 0;
  bVar8 = (in_stack_00000030 & 0x200) != 0;
  bVar7 = (in_stack_00000030 & 0x100) != 0;
  bVar6 = (in_stack_00000030 & 0x80) != 0;
  bVar5 = (in_stack_00000030 & 0x40) != 0;
  bVar4 = (in_stack_00000030 & 0x10) != 0;
  bVar3 = (in_stack_00000030 & 4) != 0;
  bVar2 = (in_stack_00000030 & 1) != 0;
  bVar14 = (in_stack_00000030 & 0x200000) != 0;
  bVar11 = (in_stack_00000030 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res18,uStackX_20);
  *in_stack_00000038 = in_R10;
  in_stack_00000038[-1] = in_R10;
  in_stack_00000038[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((in_stack_00000030 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  in_stack_00000038[-3] = unaff_R14;
  in_stack_00000038[-4] = unaff_R14;
  in_stack_00000038[-3] = FUN_14d90a6c6;
  FUN_15b0d081c();
  return;
}



// FUNCTION 14d90a6c6 FUN_14d90a6c6 body=315 status=ok
// SIG undefined FUN_14d90a6c6(void)

/* WARNING: Removing unreachable block (ram,0x00014d90a7f9) */
/* WARNING: Removing unreachable block (ram,0x00014d90a804) */
/* WARNING: Removing unreachable block (ram,0x00014d90a7ff) */
/* WARNING: Removing unreachable block (ram,0x0001622b3118) */
/* WARNING: Removing unreachable block (ram,0x0001622b3145) */
/* WARNING: Removing unreachable block (ram,0x0001622b31be) */
/* WARNING: Removing unreachable block (ram,0x0001622b31b9) */
/* WARNING: Removing unreachable block (ram,0x00014d90a74e) */
/* WARNING: Removing unreachable block (ram,0x00014d90a783) */
/* WARNING: Removing unreachable block (ram,0x00015b7afebb) */
/* WARNING: Removing unreachable block (ram,0x00015b7afec5) */
/* WARNING: Removing unreachable block (ram,0x00015b7afeef) */
/* WARNING: Removing unreachable block (ram,0x00014d90a77a) */

void FUN_14d90a6c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1666be646(-1 - ~(~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) |
                      ~(~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3);
  (*(code *)0x1669dd80e)();
  return;
}



// FUNCTION 14d90a804 FUN_14d90a804 body=151 status=ok
// SIG undefined FUN_14d90a804(void)

void FUN_14d90a804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  ulonglong in_R11;
  
  *(undefined8 *)(in_RAX + 0x10) = 0;
  *(longlong *)(in_RAX + 0x10) = *(longlong *)(in_RAX + 0x10) - (in_R11 ^ 0xffffffffffffffff);
  *(longlong *)(in_RAX + 0x10) = -*(longlong *)(in_RAX + 0x10);
  FUN_164a7457e(param_1,param_2,param_3,FUN_164a7457e);
  return;
}



// FUNCTION 14d90a89b FUN_14d90a89b body=159 status=ok
// SIG undefined FUN_14d90a89b(void)

void FUN_14d90a89b(void)

{
  FUN_14dacb97f(FUN_14dacb97f);
  return;
}



// FUNCTION 14d90a93a FUN_14d90a93a body=121 status=ok
// SIG undefined FUN_14d90a93a(void)

void FUN_14d90a93a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16667fdf3(FUN_16667fdf3,param_2,param_3);
  return;
}



// FUNCTION 14d90ab7d FUN_14d90ab7d body=14 status=ok
// SIG undefined FUN_14d90ab7d(void)

void FUN_14d90ab7d(void)

{
  return;
}



// FUNCTION 14d90ac13 FUN_14d90ac13 body=98 status=ok
// SIG undefined FUN_14d90ac13(void)

void FUN_14d90ac13(HANDLE param_1,DWORD param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong lVar2;
  ulonglong in_R10;
  SIZE_T SStackX_8;
  longlong local_res20;
  
  lVar2 = in_RAX + ~(~(in_R10 & 0xffffffff9a27747a) & (in_R10 | 0xffffffff9a27747a));
  *(undefined8 *)((longlong)&local_res20 + lVar2) = 0;
  plVar1 = (longlong *)((longlong)&local_res20 + lVar2);
  *plVar1 = *plVar1 + param_4;
                    /* WARNING: Could not recover jumptable at 0x00014d90ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,SStackX_8);
  return;
}



// FUNCTION 14d90acc9 FUN_14d90acc9 body=131 status=ok
// SIG undefined FUN_14d90acc9(void)

void FUN_14d90acc9(void)

{
  undefined8 in_RAX;
  longlong in_R9;
  ulonglong unaff_R14;
  
  *(undefined8 *)(&stack0x00000017 + (in_R9 - ~unaff_R14)) = in_RAX;
  FUN_157821eff();
  return;
}



// FUNCTION 14d90ad50 FUN_14d90ad50 body=175 status=ok
// SIG undefined FUN_14d90ad50(void)

void FUN_14d90ad50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  
  *(undefined8 *)(&stack0x27fdabbc + -~unaff_RSI) = 0;
  *(ulonglong *)(&stack0x27fdabbc + -~unaff_RSI) =
       *(ulonglong *)(&stack0x27fdabbc + -~unaff_RSI) ^ unaff_RDI;
  FUN_161c4a9d9(param_1,param_2,param_3,FUN_161c4a9d9);
  return;
}



// FUNCTION 14d90ae01 FUN_14d90ae01 body=153 status=ok
// SIG undefined FUN_14d90ae01(void)

void FUN_14d90ae01(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_161d369b1(0xffffffffffffff98,*(longlong *)(unaff_RSI + -0x30) + unaff_RBP,FUN_161d369b1);
  return;
}



// FUNCTION 14d90af1c FUN_14d90af1c body=126 status=ok
// SIG undefined FUN_14d90af1c(void)

void FUN_14d90af1c(undefined8 param_1)

{
  FUN_156393600(param_1);
  return;
}



// FUNCTION 14d90b539 FUN_14d90b539 body=158 status=ok
// SIG undefined FUN_14d90b539(void)

void FUN_14d90b539(void)

{
  return;
}



// FUNCTION 14d90b5d9 FUN_14d90b5d9 body=10 status=ok
// SIG undefined FUN_14d90b5d9(void)

void FUN_14d90b5d9(void)

{
  return;
}



// FUNCTION 14d90b5e3 FUN_14d90b5e3 body=142 status=ok
// SIG undefined FUN_14d90b5e3(void)

void FUN_14d90b5e3(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x115d7f) {
    FUN_165dc09fc();
    return;
  }
  if (unaff_RBX == 0x1160da) {
    FUN_165dc09fc();
    return;
  }
  FUN_1656ff81f(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d90b677 FUN_14d90b677 body=441 status=ok
// SIG undefined FUN_14d90b677(void)

/* WARNING: Removing unreachable block (ram,0x00014d90b7a0) */
/* WARNING: Removing unreachable block (ram,0x00015b683cda) */
/* WARNING: Removing unreachable block (ram,0x00014d90b7a6) */
/* WARNING: Removing unreachable block (ram,0x00014d90b833) */
/* WARNING: Removing unreachable block (ram,0x00014d90b844) */
/* WARNING: Removing unreachable block (ram,0x00014d90b8d0) */
/* WARNING: Removing unreachable block (ram,0x00014d90b8f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d90b677(void)

{
  FUN_166bcf3b4();
  FUN_15b683cda();
  return;
}



// FUNCTION 14d90b914 FUN_14d90b914 body=138 status=ok
// SIG undefined FUN_14d90b914(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d90ba15) overlaps instruction at (ram,0x00014d90ba14)
    */
/* WARNING: Removing unreachable block (ram,0x00016695efd3) */

void FUN_14d90b914(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  undefined4 local_res8;
  undefined4 local_resc;
  ushort local_res10 [12];
  
  puVar1 = (ushort *)((longlong)local_res10 + param_4);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  param_5[-1] = unaff_RBP;
  param_5[-2] = param_2;
  uVar3 = param_5[-2];
  if (((int)unaff_RBP != 0) && ((int)unaff_RBP == 0)) {
    *(undefined4 *)(param_5 + -1) = 0x3432f8d0;
    *(int *)param_5 = (int)param_5[-1];
    *(int *)param_5 = (int)*param_5 + 0x2fbac46;
    *(int *)((longlong)param_5 + 4) = 0;
    if (*param_5 != 0x372ea516) {
      in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),0x49);
    }
    *param_5 = in_RAX;
    *(int *)param_5 = -0x77ab1b02;
    *(int *)((longlong)param_5 + 4) = -1;
    *param_5 = (longlong)FUN_14d90ba43;
    FUN_164a2f3b0(0);
    *(ushort *)(param_5 + 2) = *(ushort *)(param_5 + 2) & 0xfeff;
    lVar2 = param_5[3];
    *(undefined8 *)(lVar2 + -8) = unaff_retaddr;
    *(undefined8 *)(lVar2 + -0x10) = unaff_retaddr;
    *(undefined **)(lVar2 + -8) = &DAT_14d90ba73;
    return;
  }
  param_5[-2] = in_RAX;
  uVar4 = param_5[-2];
  param_5[-2] = in_R10;
  param_5[-3] = uVar4;
  UNRECOVERED_JUMPTABLE = (code *)param_5[-3];
  param_5[-3] = unaff_RSI;
  uVar4 = param_5[-2];
  param_5[-2] = param_5[-1];
  param_5[-1] = 0x5d2874fb;
  param_5[-1] = param_5[-1] ^ 0x5d2874fb;
  param_5[-1] = param_5[-1] ^ 0x1657e1194;
  param_5[-3] = uVar4;
  param_5[-4] = unaff_RDI;
                    /* WARNING: Could not recover jumptable at 0x0001657e1174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,param_3,CONCAT44(local_resc,local_res8));
  return;
}



// FUNCTION 14d90b99f FUN_14d90b99f body=164 status=ok
// SIG undefined FUN_14d90b99f(void)

/* WARNING: Instruction at (ram,0x00014d90ba15) overlaps instruction at (ram,0x00014d90ba14)
    */
/* WARNING: Removing unreachable block (ram,0x00014d90ba00) */
/* WARNING: Removing unreachable block (ram,0x00014d90ba12) */

void FUN_14d90b99f(void)

{
  undefined8 unaff_R13;
  longlong lStackX_20;
  
  FUN_164a2f3b0(0);
  *(undefined8 *)(lStackX_20 + -8) = unaff_R13;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_R13;
  *(undefined **)(lStackX_20 + -8) = &DAT_14d90ba73;
  return;
}



// FUNCTION 14d90ba43 FUN_14d90ba43 body=47 status=ok
// SIG undefined FUN_14d90ba43(void)

void FUN_14d90ba43(void)

{
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined **)(local_res10 + -8) = &DAT_14d90ba73;
  return;
}



// FUNCTION 14d90baf4 FUN_14d90baf4 body=188 status=ok
// SIG undefined FUN_14d90baf4(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d90baf4(void)

{
  longlong unaff_RSI;
  
  return *(undefined8 *)(unaff_RSI + -0x30);
}



// FUNCTION 14d90bc6d FUN_14d90bc6d body=268 status=ok
// SIG undefined FUN_14d90bc6d(void)

void FUN_14d90bc6d(void)

{
  undefined8 uVar1;
  ulonglong in_R10;
  longlong lVar2;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  uVar1 = CONCAT44(unaff_retaddr_00,unaff_retaddr);
  lVar2 = 4;
  FUN_1651d973a();
  FUN_14da26616(uVar1,(~(*(ulonglong *)(lVar2 + -0x50) & in_R10) + in_R10) -
                      ~*(ulonglong *)(lVar2 + -0x50));
  return;
}



// FUNCTION 14d90bd7e FUN_14d90bd7e body=191 status=ok
// SIG undefined FUN_14d90bd7e(void)

void FUN_14d90bd7e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x14d956bc7)
            (param_1,0x3aef9509,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d90c13b FUN_14d90c13b body=411 status=ok
// SIG undefined FUN_14d90c13b(void)

void FUN_14d90c13b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong *plVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong unaff_RBP;
  undefined8 uVar10;
  longlong unaff_RDI;
  undefined8 uVar11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  longlong local_res20;
  
  puVar2 = (ushort *)(&stack0xffffffffff3f94a1 + ~unaff_RBP);
  uVar4 = *puVar2;
  uVar5 = *puVar2;
  *puVar2 = 0;
  *puVar2 = *puVar2 - ((-0x100 - (~-(uVar4 | 0xfeff) + 2)) + uVar5);
  *puVar2 = -*puVar2;
  *(undefined8 *)(local_res20 + -8) = param_1;
  pcVar9 = FUN_16654c1de;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d90c1c3;
  FUN_16654c1de();
  *(ulonglong *)(local_res20 + -0x10) =
       (-~unaff_R12 - (longlong)pcVar9) + (~(ulonglong)pcVar9 | unaff_R13) * -2 + -3;
  uVar10 = 0x5be7b85c;
  uVar11 = 0xffffffffffffffc0;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d90c24c;
  uVar7 = FUN_156a88be1();
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(local_res20 + -0x18) = uVar11;
  puVar1 = (undefined8 *)(local_res20 + -0x20);
  *puVar1 = uVar11;
  *(undefined8 *)(local_res20 + -0x28) = uVar10;
  lVar6 = *(longlong *)(unaff_RDI + -8);
  *(undefined8 *)(local_res20 + -0x28) = uVar7;
  *(undefined4 *)(local_res20 + -0x30) = 0xdd059412;
  *(undefined4 *)(local_res20 + -0x2c) = 0xffffffff;
  lVar8 = *(longlong *)(local_res20 + -0x30) + 0x22fa6bf6;
  *(undefined8 *)((longlong)puVar1 + lVar8) = 0;
  plVar3 = (longlong *)((longlong)puVar1 + lVar8);
  *plVar3 = *plVar3 + lVar6;
  *puVar1 = pcVar9;
  *(code **)(local_res20 + -0x28) = pcVar9;
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x98);
  uVar7 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = param_4;
  *(undefined8 *)(local_res20 + -0x30) = 0x5be7b85c;
  *(undefined8 *)(local_res20 + -0x38) = 0xffffffffac22a79e;
  FUN_165aae9b8(uVar7);
  return;
}



// FUNCTION 14d90c381 FUN_14d90c381 body=428 status=ok
// SIG undefined FUN_14d90c381(void)

/* WARNING: Removing unreachable block (ram,0x00014d90c49a) */
/* WARNING: Removing unreachable block (ram,0x00014d90c4a0) */
/* WARNING: Removing unreachable block (ram,0x00014d90c3e7) */
/* WARNING: Removing unreachable block (ram,0x00014d90c3f8) */
/* WARNING: Removing unreachable block (ram,0x000160f326d8) */
/* WARNING: Removing unreachable block (ram,0x00014d90c3ed) */

void FUN_14d90c381(void)

{
  return;
}



// FUNCTION 14d90c533 FUN_14d90c533 body=339 status=ok
// SIG undefined FUN_14d90c533(void)

/* WARNING: Removing unreachable block (ram,0x00014d90c5dc) */
/* WARNING: Removing unreachable block (ram,0x00014d90c5e2) */

void FUN_14d90c533(void)

{
  FUN_162407928(0xa9c99c4);
  return;
}



// FUNCTION 14d90c687 FUN_14d90c687 body=187 status=ok
// SIG undefined FUN_14d90c687(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d90c70a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d90c687(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong in_R11;
  
  FUN_16672a919(-in_RAX - (in_R11 - param_2),0x5e0083d2);
  return;
}



// FUNCTION 14d90c742 FUN_14d90c742 body=268 status=ok
// SIG undefined FUN_14d90c742(void)

/* WARNING: Removing unreachable block (ram,0x00014d90c7d8) */
/* WARNING: Removing unreachable block (ram,0x00014d90c7e4) */
/* WARNING: Removing unreachable block (ram,0x00014d90c7e9) */

void FUN_14d90c742(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156e0ae23(param_1,0x6d30b5b7,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                 (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
  return;
}



// FUNCTION 14d90c881 FUN_14d90c881 body=60 status=ok
// SIG undefined FUN_14d90c881(void)

undefined8 FUN_14d90c881(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d90c929 FUN_14d90c929 body=157 status=ok
// SIG undefined FUN_14d90c929(void)

void FUN_14d90c929(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164aad268(0xfffffffffffffff8,FUN_164aad268,
                (*(ulonglong *)(unaff_R13 + -0x88) - unaff_R15) +
                (0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) * -2 + -2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d90c9c7 FUN_14d90c9c7 body=152 status=ok
// SIG undefined FUN_14d90c9c7(void)

void FUN_14d90c9c7(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x16179a81e)
            (param_1,&stack0xfffffffffffffff8,
             (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) &
             (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP) ^ 0xffffffffffffffff,
             ~((~unaff_RBP | *(ulonglong *)(unaff_RSI + param_2)) &
              (~*(ulonglong *)(unaff_RSI + param_2) | unaff_RBP)));
  return;
}



// FUNCTION 14d90ca5f FUN_14d90ca5f body=785 status=ok
// SIG undefined FUN_14d90ca5f(void)

/* WARNING: Removing unreachable block (ram,0x00014d90cb09) */
/* WARNING: Removing unreachable block (ram,0x00014d90cb40) */
/* WARNING: Removing unreachable block (ram,0x00014d90cb5a) */
/* WARNING: Removing unreachable block (ram,0x00014d90cc4a) */
/* WARNING: Removing unreachable block (ram,0x00014d90cc50) */
/* WARNING: Removing unreachable block (ram,0x000165e8d61d) */
/* WARNING: Removing unreachable block (ram,0x00016170214b) */
/* WARNING: Removing unreachable block (ram,0x000161702176) */
/* WARNING: Removing unreachable block (ram,0x00016170217a) */

void FUN_14d90ca5f(void)

{
  FUN_16170214b();
  return;
}



// FUNCTION 14d90cdba FUN_14d90cdba body=139 status=ok
// SIG undefined FUN_14d90cdba(void)

void FUN_14d90cdba(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_165b71ff5(param_1,param_2,-~param_1 - (~*(ulonglong *)(unaff_RDI + -0xa0) + 2));
  (*(code *)0x1610c4574)();
  return;
}



// FUNCTION 14d90ce46 FUN_14d90ce46 body=313 status=ok
// SIG undefined FUN_14d90ce46(void)

void FUN_14d90ce46(void)

{
  (*(code *)0x1610c4574)();
  return;
}



// FUNCTION 14d90d011 FUN_14d90d011 body=457 status=ok
// SIG undefined FUN_14d90d011(void)

/* WARNING: Removing unreachable block (ram,0x00014d90d0b9) */
/* WARNING: Removing unreachable block (ram,0x00014d90d0bf) */
/* WARNING: Removing unreachable block (ram,0x00015b2dbd79) */
/* WARNING: Removing unreachable block (ram,0x00015b2dbe06) */
/* WARNING: Removing unreachable block (ram,0x00015b2dbe0c) */
/* WARNING: Removing unreachable block (ram,0x00016242cee5) */

undefined8 FUN_14d90d011(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_15b2dbd79(CONCAT71((int7)((ulonglong)param_1 >> 8),0xba) ^ 0xbb,param_2,
                        *(ulonglong *)(unaff_RDI + -0x50) & 0xffff);
  return uVar1;
}



// FUNCTION 14d90d2b9 FUN_14d90d2b9 body=146 status=ok
// SIG undefined FUN_14d90d2b9(void)

void FUN_14d90d2b9(void)

{
  return;
}



// FUNCTION 14d90d34e FUN_14d90d34e body=140 status=ok
// SIG undefined FUN_14d90d34e(void)

void FUN_14d90d34e(void)

{
  return;
}



// FUNCTION 14d90d3e2 FUN_14d90d3e2 body=154 status=ok
// SIG undefined FUN_14d90d3e2(void)

void FUN_14d90d3e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166a05587(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d90d47d FUN_14d90d47d body=117 status=ok
// SIG undefined FUN_14d90d47d(void)

void FUN_14d90d47d(void)

{
  return;
}



// FUNCTION 14d90d621 FUN_14d90d621 body=485 status=ok
// SIG undefined FUN_14d90d621(void)

/* WARNING: Removing unreachable block (ram,0x00014d90d6ad) */
/* WARNING: Removing unreachable block (ram,0x00014d90d6b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6ee381) */

void FUN_14d90d621(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 unaff_R15;
  ulonglong uVar4;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_RDI + 8) =
       (unaff_RBP - (*(ulonglong *)(unaff_RDI + 8) | unaff_RBP)) + *(longlong *)(unaff_RDI + 8);
  uVar4 = local_res20 ^ unaff_RBP;
  uVar3 = ~(~(unaff_RBP & ~param_5) & (~param_5 | unaff_RBP));
  local_res20._0_2_ = (ushort)uVar4;
  uVar2 = ((ushort)local_res20 | 0x100) - 0x100;
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7a7b8f);
  UNLOCK();
  DAT_14d7a7b8f = (char)in_RAX;
  *(undefined8 *)(uVar3 - 8) = uVar1;
  *(undefined8 *)(uVar3 - 0x10) = uVar1;
  if ((uVar2 & 1) != 0) {
    *(ulonglong *)(uVar3 - 0x18) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar2 & 4) != 0) * 4 | 1 | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(uVar3 - 0x20) = 0x4793e3e;
    *(longlong *)(uVar3 - 0x20) = *(longlong *)(uVar3 - 0x20) + -0x3d79982;
    uVar4 = *(ulonglong *)(uVar3 - 0x18);
    *(undefined8 *)(uVar3 - 0x18) = param_2;
    *(ulonglong *)(uVar3 - 0x20) =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(uVar3 - 0x28) = unaff_R15;
    *(undefined8 *)(uVar3 - 8) = 0xa1a4bc;
    FUN_15b3d5987(uStackX_8,*(undefined8 *)(uVar3 - 0x18));
    return;
  }
  FUN_1611ce561();
  return;
}



// FUNCTION 14d90d73f FUN_14d90d73f body=62 status=ok
// SIG undefined FUN_14d90d73f(void)

void FUN_14d90d73f(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong *plVar2;
  
  plVar2 = (longlong *)(*(ulonglong *)(unaff_RDI + -0x50) ^ param_1);
  lVar1 = *(longlong *)(unaff_RDI + -0x30);
  FUN_15b8ce859();
  *plVar2 = lVar1 + param_1;
  return;
}



// FUNCTION 14d90d84e FUN_14d90d84e body=148 status=ok
// SIG undefined FUN_14d90d84e(void)

void FUN_14d90d84e(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_1610a395f(thunk_FUN_1610a395f,param_2,*(undefined8 *)(unaff_R13 + -0x88),
                      ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                       (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14d90da2a FUN_14d90da2a body=328 status=ok
// SIG undefined FUN_14d90da2a(void)

/* WARNING: Removing unreachable block (ram,0x00016499f018) */
/* WARNING: Removing unreachable block (ram,0x00016499f01e) */
/* WARNING: Removing unreachable block (ram,0x00016499f04e) */
/* WARNING: Removing unreachable block (ram,0x00016499f05b) */
/* WARNING: Removing unreachable block (ram,0x0001612e4d64) */
/* WARNING: Removing unreachable block (ram,0x00016499ee1b) */
/* WARNING: Removing unreachable block (ram,0x00016499ee26) */
/* WARNING: Removing unreachable block (ram,0x00016499eec0) */
/* WARNING: Removing unreachable block (ram,0x00016499eec6) */
/* WARNING: Removing unreachable block (ram,0x0001628de96f) */
/* WARNING: Removing unreachable block (ram,0x0001628de9f5) */
/* WARNING: Removing unreachable block (ram,0x0001628de9fb) */
/* WARNING: Removing unreachable block (ram,0x0001628dea59) */
/* WARNING: Removing unreachable block (ram,0x00014e203802) */
/* WARNING: Removing unreachable block (ram,0x00016499ef6c) */
/* WARNING: Removing unreachable block (ram,0x00016499ef72) */
/* WARNING: Removing unreachable block (ram,0x00016499ef77) */
/* WARNING: Removing unreachable block (ram,0x00016499ef94) */
/* WARNING: Removing unreachable block (ram,0x00016499f00d) */
/* WARNING: Removing unreachable block (ram,0x000166677d4f) */
/* WARNING: Removing unreachable block (ram,0x00014d90db6c) */
/* WARNING: Removing unreachable block (ram,0x00014d90db72) */
/* WARNING: Removing unreachable block (ram,0x00014d90dbfe) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc03) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc0e) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc8b) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc91) */
/* WARNING: Removing unreachable block (ram,0x00015752818a) */
/* WARNING: Removing unreachable block (ram,0x0001575281d4) */
/* WARNING: Removing unreachable block (ram,0x0001575281b4) */
/* WARNING: Removing unreachable block (ram,0x0001575281e9) */
/* WARNING: Removing unreachable block (ram,0x000157528225) */
/* WARNING: Removing unreachable block (ram,0x00015752822b) */
/* WARNING: Removing unreachable block (ram,0x000165bc703c) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc09) */
/* WARNING: Removing unreachable block (ram,0x00016499ee21) */
/* WARNING: Removing unreachable block (ram,0x0001650392ac) */

void FUN_14d90da2a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1665fe030();
  if ((*(ulonglong *)(unaff_RDI + -0xa0) & param_1) <= *(ulonglong *)(unaff_RDI + -0xa0) + param_1)
  {
    FUN_1563b9d64();
    return;
  }
  FUN_1563b9d64();
  return;
}



// FUNCTION 14d90db72 FUN_14d90db72 body=286 status=ok
// SIG undefined FUN_14d90db72(void)

/* WARNING: Removing unreachable block (ram,0x00014d90dc8b) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc91) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc03) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc0e) */
/* WARNING: Removing unreachable block (ram,0x00015752818a) */
/* WARNING: Removing unreachable block (ram,0x0001575281d4) */
/* WARNING: Removing unreachable block (ram,0x0001575281b4) */
/* WARNING: Removing unreachable block (ram,0x0001575281e9) */
/* WARNING: Removing unreachable block (ram,0x000157528225) */
/* WARNING: Removing unreachable block (ram,0x00015752822b) */
/* WARNING: Removing unreachable block (ram,0x000165bc703c) */
/* WARNING: Removing unreachable block (ram,0x00014d90dc09) */

void FUN_14d90db72(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RBP;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  uVar2 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP & unaff_R15;
  *unaff_RBP = (uVar2 + unaff_R15) - *unaff_RBP;
  *unaff_RBP = ~(~unaff_R15 | uVar1) | ~*unaff_RBP;
  FUN_1668dca77();
  return;
}



// FUNCTION 14d90dc91 FUN_14d90dc91 body=175 status=ok
// SIG undefined FUN_14d90dc91(void)

void FUN_14d90dc91(void)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0x00000020 + (unaff_RDI ^ unaff_RBX ^ 0x2ae5cdb1)) = unaff_R15;
  return;
}



// FUNCTION 14d90dd40 FUN_14d90dd40 body=481 status=ok
// SIG undefined FUN_14d90dd40(void)

/* WARNING: Removing unreachable block (ram,0x00014d90ddcf) */
/* WARNING: Removing unreachable block (ram,0x00014d90ddd5) */

void FUN_14d90dd40(undefined8 param_1)

{
  FUN_1565ae9cd(param_1);
  return;
}



// FUNCTION 14d90df03 FUN_14d90df03 body=317 status=ok
// SIG undefined FUN_14d90df03(void)

void FUN_14d90df03(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_161b014f1(param_1,param_2,param_3,param_4);
  FUN_1570c5343((-~uVar1 - (~*(ulonglong *)(unaff_R12 + -0x58) + 2)) +
                (*(ulonglong *)(unaff_R12 + -0x58) & uVar1) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1,param_3 ^ uVar1);
  return;
}



// FUNCTION 14d90e042 FUN_14d90e042 body=323 status=ok
// SIG undefined FUN_14d90e042(void)

/* WARNING: Removing unreachable block (ram,0x00014d90e0d9) */
/* WARNING: Removing unreachable block (ram,0x00014d90e0df) */
/* WARNING: Removing unreachable block (ram,0x00014d90e221) */
/* WARNING: Removing unreachable block (ram,0x00014d90e226) */
/* WARNING: Removing unreachable block (ram,0x00014d90e232) */
/* WARNING: Removing unreachable block (ram,0x00014d90e237) */

void FUN_14d90e042(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) ^ 0xffffffffffffffff;
  FUN_161b1d241(param_1,param_2,
                ((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1 ^ 0xffffffffffffffff)
                & (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~(uVar1 & param_1) + param_1) - ~uVar1));
  return;
}



// FUNCTION 14d90e185 FUN_14d90e185 body=175 status=ok
// SIG undefined FUN_14d90e185(void)

/* WARNING: Removing unreachable block (ram,0x00014d90e237) */

void FUN_14d90e185(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           (((unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)) +
            *(ulonglong *)(unaff_R13 + -0x28)) * 2)) {
    FUN_166b33e45();
    return;
  }
  FUN_166b33e45();
  return;
}



// FUNCTION 14d90e237 FUN_14d90e237 body=115 status=ok
// SIG undefined FUN_14d90e237(void)

void FUN_14d90e237(void)

{
  FUN_16616a75c(FUN_16616a75c);
  return;
}



// FUNCTION 14d90e3e0 FUN_14d90e3e0 body=137 status=ok
// SIG undefined FUN_14d90e3e0(void)

/* WARNING: Removing unreachable block (ram,0x00014d90e43a) */

void FUN_14d90e3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161a70e9b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d90e470 FUN_14d90e470 body=150 status=ok
// SIG undefined FUN_14d90e470(void)

void FUN_14d90e470(void)

{
  (*(code *)0x16172f9d3)();
  return;
}



// FUNCTION 14d90e506 FUN_14d90e506 body=275 status=ok
// SIG undefined FUN_14d90e506(void)

undefined8 FUN_14d90e506(void)

{
  FUN_1663d6cfb();
  return 0xf75ee9;
}



// FUNCTION 14d90e61d FUN_14d90e61d body=137 status=ok
// SIG undefined FUN_14d90e61d(void)

void FUN_14d90e61d(undefined8 param_1,undefined8 param_2)

{
  FUN_156642863(param_1,param_2);
  return;
}



// FUNCTION 14d90e7e4 FUN_14d90e7e4 body=153 status=ok
// SIG undefined FUN_14d90e7e4(void)

/* WARNING: Removing unreachable block (ram,0x00014d90e86d) */
/* WARNING: Removing unreachable block (ram,0x00014d90e873) */

void FUN_14d90e7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  ulonglong unaff_R12;
  ulonglong uVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  ushort uVar7;
  undefined8 unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  uVar6 = -in_RAX - 1;
  uVar7 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SBORROW8(-in_RAX,1) * 0x800 |
          (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          (ushort)((longlong)uVar6 < 0) * 0x80 | (ushort)(uVar6 == 0) * 0x40 |
          (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
          (ushort)(in_RAX != 0);
  if ((ushort)((0x100 - (uVar7 | 0x100)) + uVar7) == 0) {
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  uVar3 = *(undefined8 *)register0x00000020;
  *(undefined8 *)register0x00000020 = param_3;
  uVar4 = *(undefined8 *)register0x00000020;
  *(undefined8 *)register0x00000020 = param_1;
  lVar2 = *(longlong *)((longlong)register0x00000020 + 8);
  *(undefined8 *)((longlong)register0x00000020 + 8) = *(undefined8 *)register0x00000020;
  *(undefined4 *)
   ((longlong)register0x00000020 + ~(uVar6 & (unaff_R12 & 0x1011d562 | 0xffffffffefee2a9d)) + 0x10)
       = 0x7e5925;
  uVar5 = *(undefined8 *)((longlong)register0x00000020 + 8);
  *(undefined8 *)((longlong)register0x00000020 + 8) = 0;
  *(longlong *)((longlong)register0x00000020 + 8) =
       *(longlong *)((longlong)register0x00000020 + 8) + lVar2;
  *(undefined8 *)register0x00000020 = unaff_RBP;
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_retaddr;
  *(undefined4 *)((longlong)register0x00000020 + -8) = 0xcdb3fda;
  *(undefined4 *)((longlong)register0x00000020 + -4) = 0;
  puVar1 = (ulonglong *)((longlong)register0x00000020 + -8);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = uVar3;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = 0x7ab9681e;
  *puVar1 = *(ulonglong *)((longlong)register0x00000020 + -0x18);
  *puVar1 = *puVar1 ^ 0x24931efc;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = in_R11;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = param_4;
  FUN_15757a706(uVar5,param_2,uVar4,puVar1);
  return;
}



// FUNCTION 14d90eafd FUN_14d90eafd body=932 status=ok
// SIG undefined FUN_14d90eafd(void)

/* WARNING: Removing unreachable block (ram,0x00014d90eb89) */

void FUN_14d90eafd(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  longlong unaff_R15;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  short local_res20;
  
  lVar2 = unaff_R15 + param_1 + (param_5 & param_1) * -2;
  *(undefined8 *)(lVar2 + -8) = param_4;
  if ((local_res20 - 0x100U & 0x40) != 0) {
    FUN_166aac207();
    return;
  }
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -8) = 0;
  *(longlong *)(lVar2 + -8) = *(longlong *)(lVar2 + -8) + -0x16231db28;
  *(longlong *)(lVar2 + -8) = -*(longlong *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar2 + 0x30);
  *(undefined4 *)(lVar2 + -0x20) = 0x20a1153a;
  *(undefined4 *)(lVar2 + -0x14) = *(undefined4 *)(lVar2 + -0x20);
  *(undefined8 *)(lVar2 + -0x20) = param_3;
  uVar1 = *(uint *)(lVar2 + -0x14);
  *(uint *)(lVar2 + -0x14) = *(uint *)(lVar2 + -0x14) | 0xdf5eeac5;
  *(uint *)(lVar2 + -0x14) = ~(~(uVar1 & 0xdf5eeac5) & *(uint *)(lVar2 + -0x14));
  *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar2 + -0x18);
  if (*(int *)(lVar2 + -0x18) < 0) {
    *(undefined4 *)(lVar2 + -0x14) = 0x7c6689af;
    *(int *)(lVar2 + -0x14) = *(int *)(lVar2 + -0x14) + 0x5acd22e1;
    *(int *)(lVar2 + -0x14) = *(int *)(lVar2 + -0x14) + 0x28cc536f;
  }
  FUN_16231db01(in_stack_00000018,local_res8,*(undefined8 *)(lVar2 + -0x20),FUN_16231db01);
  return;
}



// FUNCTION 14d90ec9b FUN_14d90ec9b body=183 status=ok
// SIG undefined FUN_14d90ec9b(void)

undefined8 FUN_14d90ec9b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong local_res10;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined4 *)(local_res18 + -0x18) = 0x9cd11c5;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  *(code **)(local_res18 + -0x28) = FUN_14d90ed53;
  uVar3 = FUN_14dfa053c(&ExceptionList);
  *(longlong *)(local_res18 + -0x28) = param_3;
  uVar1 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = uVar3;
  *(undefined4 *)(local_res18 + -0x28) = 0;
  *(uint *)(local_res18 + -0x28) = *(uint *)(local_res18 + -0x28) ^ 0x245165aa;
  *(uint *)(local_res18 + -0x28) = *(uint *)(local_res18 + -0x28) ^ 0x6f166aad;
  *(undefined4 *)(local_res18 + -0x24) = 0x8d70cde7;
  *(int *)(local_res18 + -0x24) = *(int *)(local_res18 + -0x24) + 0x52528bf3;
  *(int *)(local_res18 + -0x24) = *(int *)(local_res18 + -0x24) + 0x203ca626;
  lVar2 = *(longlong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = uVar3;
  uVar3 = *(undefined8 *)(local_res18 + -0x28);
  if (lVar2 == 0x4b470f07) {
    *(undefined8 *)(local_res18 + -0x28) = 0x4b470f07;
    *(undefined8 *)(local_res18 + -0x30) = 0x4b470f07;
    *(undefined1 *)(local_res18 + -0x30) = 0x22;
    uVar3 = FUN_165a2cc76(FUN_165a2cc76,param_2,
                          (param_3 << 1 ^ uVar1 >> 0x3f) >>
                          (((byte)*(undefined8 *)(local_res18 + -0x30) ^ 0x23) & 0x3f));
    return uVar3;
  }
  *(longlong *)(local_res18 + -0x28) = lVar2;
  *(longlong *)(local_res18 + -0x30) = lVar2;
  *(code **)(local_res18 + -0x28) = thunk_FUN_165306916;
  return uVar3;
}



// FUNCTION 14d90ed53 FUN_14d90ed53 body=161 status=ok
// SIG undefined FUN_14d90ed53(void)

/* WARNING: Removing unreachable block (ram,0x000165c5b205) */

undefined8 FUN_14d90ed53(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165a2cc76(FUN_165a2cc76,param_2,param_3 & 0x7fffffffffffffff);
  return uVar1;
}



// FUNCTION 14d90edf5 FUN_14d90edf5 body=452 status=ok
// SIG undefined FUN_14d90edf5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d90ef2d) */
/* WARNING: Removing unreachable block (ram,0x00014d90ef97) */
/* WARNING: Removing unreachable block (ram,0x00014d90ef9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d90edf5(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_16609581b(param_1,FUN_16609581b);
  (*(code *)0x1623b29ad)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d90ef2d FUN_14d90ef2d body=187 status=ok
// SIG undefined FUN_14d90ef2d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d90ef9c) */

void FUN_14d90ef2d(void)

{
  return;
}



// FUNCTION 14d90f4f2 FUN_14d90f4f2 body=122 status=ok
// SIG undefined FUN_14d90f4f2(void)

void FUN_14d90f4f2(undefined8 param_1)

{
  FUN_16296919c(param_1);
  return;
}



// FUNCTION 14d90f607 FUN_14d90f607 body=298 status=ok
// SIG undefined FUN_14d90f607(void)

void FUN_14d90f607(void)

{
  FUN_1658efc12();
  FUN_166c8ba74();
  return;
}



// FUNCTION 14d90f7d0 FUN_14d90f7d0 body=160 status=ok
// SIG undefined FUN_14d90f7d0(void)

void FUN_14d90f7d0(void)

{
  undefined4 unaff_R12D;
  undefined4 *unaff_retaddr;
  
  if (((ulonglong)unaff_retaddr &
      (CONCAT44((int)((ulonglong)unaff_retaddr >> 0x20),1) >> 1 | 0x8000000000000000)) == 0) {
    *unaff_retaddr = unaff_R12D;
    return;
  }
  return;
}



// FUNCTION 14d90f871 FUN_14d90f871 body=167 status=ok
// SIG undefined FUN_14d90f871(void)

void FUN_14d90f871(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  ulonglong in_stack_00000020;
  
  (*(code *)0x1661b61e4)(param_1,in_stack_00000010,param_3,param_4,in_stack_00000020 ^ unaff_R15);
  return;
}



// FUNCTION 14d90f9be FUN_14d90f9be body=152 status=ok
// SIG undefined FUN_14d90f9be(void)

void FUN_14d90f9be(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 local_res8;
  
  FUN_1567c3708(param_1,param_2,param_3,
                ~((~(0x44cdab7a - ~local_res8) | param_4) & (~param_4 | 0x44cdab7a - ~local_res8)) ^
                0x75ee88db);
  return;
}



// FUNCTION 14d90fa5e FUN_14d90fa5e body=322 status=ok
// SIG undefined FUN_14d90fa5e(void)

/* WARNING: Removing unreachable block (ram,0x00014d90fb01) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x000161d23a02 */
/* WARNING: Removing unreachable block (ram,0x000161d23a55) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d90fa5e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  code *pcVar4;
  undefined8 unaff_R13;
  ulonglong uStackX_18;
  longlong lStackX_20;
  
  uVar3 = ~unaff_RBP & ~*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP;
  pcVar4 = FUN_157587c6c;
  uVar2 = FUN_157587c6c();
  _fxsave(lStackX_20);
  *(undefined8 *)(lStackX_20 + -8) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x10) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x18) = uVar2;
  *(undefined4 *)(lStackX_20 + -0x18) = 0x4c093bb;
  *(undefined4 *)(lStackX_20 + -0x14) = 0;
  if ((uStackX_18 & 0x40) == 0) {
    lVar1 = *(longlong *)(lStackX_20 + -0x18);
    *(ulonglong *)(lStackX_20 + -0x18) =
         (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
         (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
         (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
         (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 |
         (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
         | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
         (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
    *(code **)(lStackX_20 + -0x20) = pcVar4;
    *(ulonglong *)(lStackX_20 + -0x18) = uVar3;
    *(longlong *)(lStackX_20 + -8) = lVar1 + -0x4bed09b;
    *(undefined8 *)(lStackX_20 + -0x28cf) = unaff_R13;
    *(undefined8 *)(lStackX_20 + -0x28d7) = unaff_R13;
    *(undefined **)(lStackX_20 + -0x28cf) = &DAT_156ef2e4a;
    return *(undefined8 *)(lStackX_20 + -0x10);
  }
  uVar2 = FUN_160ddfd5a();
  return uVar2;
}



// FUNCTION 14d90fd02 FUN_14d90fd02 body=268 status=ok
// SIG undefined FUN_14d90fd02(void)

/* WARNING: Removing unreachable block (ram,0x00014d90fd99) */
/* WARNING: Removing unreachable block (ram,0x00014d90fda4) */
/* WARNING: Removing unreachable block (ram,0x00014d90fd9f) */

void FUN_14d90fd02(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15780279a(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14d90ff3d FUN_14d90ff3d body=643 status=ok
// SIG undefined FUN_14d90ff3d(void)

/* WARNING: Removing unreachable block (ram,0x0001619a831d) */
/* WARNING: Removing unreachable block (ram,0x00015765fd1d) */
/* WARNING: Removing unreachable block (ram,0x00015765fda3) */
/* WARNING: Removing unreachable block (ram,0x00015765fda9) */
/* WARNING: Removing unreachable block (ram,0x0001628671f3) */
/* WARNING: Removing unreachable block (ram,0x00014d90ffe1) */
/* WARNING: Removing unreachable block (ram,0x00014d91007c) */
/* WARNING: Removing unreachable block (ram,0x00014d910082) */
/* WARNING: Removing unreachable block (ram,0x00014d9101a4) */
/* WARNING: Removing unreachable block (ram,0x000166d910a9) */

undefined8 FUN_14d90ff3d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15765fd1d();
  return uVar1;
}



// FUNCTION 14d910133 FUN_14d910133 body=130 status=ok
// SIG undefined FUN_14d910133(void)

ulonglong FUN_14d910133(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
          (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15));
}



// FUNCTION 14d91026e FUN_14d91026e body=164 status=ok
// SIG undefined FUN_14d91026e(void)

/* WARNING: Removing unreachable block (ram,0x00014d91030d) */

void FUN_14d91026e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  FUN_15720f8e7(~(~param_1 | ~unaff_RDI),
                (0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | in_RAX) ^
                0xffffffffffffffff,param_3);
  return;
}



// FUNCTION 14d910313 FUN_14d910313 body=140 status=ok
// SIG undefined FUN_14d910313(void)

void FUN_14d910313(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dc6616e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9103a1 FUN_14d9103a1 body=186 status=ok
// SIG undefined FUN_14d9103a1(void)

void FUN_14d9103a1(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  (*(code *)&LAB_1661a74eb)(param_1,param_2 + in_RAX + (param_2 & in_RAX) * -2);
  return;
}



// FUNCTION 14d91045c FUN_14d91045c body=171 status=ok
// SIG undefined FUN_14d91045c(void)

/* WARNING: Removing unreachable block (ram,0x0001626216eb) */
/* WARNING: Removing unreachable block (ram,0x00014d910507) */
/* WARNING: Removing unreachable block (ram,0x000157209f5e) */
/* WARNING: Removing unreachable block (ram,0x00014d910596) */
/* WARNING: Removing unreachable block (ram,0x00014d91059c) */
/* WARNING: Removing unreachable block (ram,0x00014d9105a1) */

undefined8 FUN_14d91045c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d910507 FUN_14d910507 body=290 status=ok
// SIG undefined FUN_14d910507(void)

/* WARNING: Removing unreachable block (ram,0x00014d9105a1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d910507(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  undefined8 local_res18;
  
  if (-1 < (longlong)((local_res18 & in_RAX) * 2)) {
    uVar1 = FUN_157209f5e();
    return uVar1;
  }
  uVar1 = FUN_1572b6caf(param_1);
  return uVar1;
}



// FUNCTION 14d910816 FUN_14d910816 body=173 status=ok
// SIG undefined FUN_14d910816(void)

void FUN_14d910816(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  undefined2 unaff_R12W;
  undefined6 unaff_000000a2;
  
  uVar1 = *(ulonglong *)(CONCAT62(unaff_000000a2,unaff_R12W) + unaff_RBP);
  uVar2 = *(ulonglong *)(CONCAT62(unaff_000000a2,unaff_R12W) + -0x78);
  FUN_14df3bf89(uVar1 + in_RAX + ~(~uVar1 | ~in_RAX) * -2,uVar2 + in_RAX + (uVar2 & in_RAX) * -2);
  return;
}



// FUNCTION 14d9108c5 FUN_14d9108c5 body=326 status=ok
// SIG undefined FUN_14d9108c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d9109aa) */
/* WARNING: Removing unreachable block (ram,0x00014d91095f) */

void FUN_14d9108c5(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong unaff_RBP;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  
  *param_4 = ~*param_4;
  *param_4 = *param_4 | unaff_retaddr;
  *param_4 = 0xffffffffffffffff - (unaff_RBP & *param_4);
  if (local_res20 + unaff_retaddr < ~(~local_res20 | ~unaff_retaddr) * 2) {
    FUN_162ce1406();
    return;
  }
  FUN_161e4b8d3(param_1,param_2,param_3,in_stack_00000008);
  FUN_166c2e75e();
  return;
}



// FUNCTION 14d910b6e FUN_14d910b6e body=160 status=ok
// SIG undefined FUN_14d910b6e(void)

ulonglong FUN_14d910b6e(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RSI;
  
  uVar1 = in_RAX & unaff_RSI;
  return ~((~param_1 + uVar1) - (~param_1 & uVar1) & ~(uVar1 & ~param_1));
}



// FUNCTION 14d910cb2 FUN_14d910cb2 body=228 status=ok
// SIG undefined FUN_14d910cb2(void)

/* WARNING: Removing unreachable block (ram,0x00014d910d3e) */

undefined8 FUN_14d910cb2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar2 = (local_res20 + param_1) - (local_res20 & param_1);
  lVar4 = (~uVar2 | ~(local_res20 & param_1)) + uVar2;
  if (-1 < lVar4 + 1) {
    plVar1 = (longlong *)(lVar4 + -7);
    *plVar1 = 0;
    *plVar1 = *plVar1 + unaff_R12;
    *(undefined8 *)(lVar4 + -0xf) = param_2;
    uVar3 = *(undefined8 *)(lVar4 + -0xf);
    *(undefined8 *)(lVar4 + -0xf) = unaff_R15;
    *(undefined8 *)(lVar4 + -0x17) = unaff_R15;
    *(undefined8 *)(lVar4 + -0x1f) = local_res10;
    *(undefined8 *)(lVar4 + -0x27) = in_R11;
    *(undefined4 *)(lVar4 + -0x2f) = 0x550212bf;
    *(undefined4 *)(lVar4 + -0x2b) = 0;
    uVar3 = thunk_FUN_15b766504((*(ulonglong *)(lVar4 + -0x2f) ^ 0x65eae268) - 0x30e8f0cf,uVar3,
                                param_3);
    return uVar3;
  }
  uVar3 = FUN_166b4d4a2();
  return uVar3;
}



// FUNCTION 14d910dd3 FUN_14d910dd3 body=137 status=ok
// SIG undefined FUN_14d910dd3(void)

void FUN_14d910dd3(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x14dd60b0f)(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) + param_1 + 1);
  return;
}



// FUNCTION 14d910f87 FUN_14d910f87 body=156 status=ok
// SIG undefined FUN_14d910f87(void)

/* WARNING: Removing unreachable block (ram,0x00014d911019) */
/* WARNING: Removing unreachable block (ram,0x00014d91101f) */
/* WARNING: Removing unreachable block (ram,0x00016145f3cb) */
/* WARNING: Removing unreachable block (ram,0x00016145f452) */
/* WARNING: Removing unreachable block (ram,0x00015720bf4e) */

void FUN_14d910f87(void)

{
  FUN_16145f3cb();
  return;
}



// FUNCTION 14d911025 FUN_14d911025 body=288 status=ok
// SIG undefined FUN_14d911025(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d911025(void)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 in_R10;
  longlong unaff_R12;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar2 = (-0x100 - (~-(local_res8 | 0xfeff) + 2)) + local_res8;
  *(undefined8 *)(local_res10 + -8) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined8 *)(local_res10 + -0x28) = 0x14d9110b4;
  FUN_1653a9a4f();
  uVar1 = ~*(ulonglong *)(local_res10 + -0x10) | *(ulonglong *)(unaff_RBX + -0x80);
  uVar3 = ~*(ulonglong *)(unaff_RBX + -0x80) | *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(unaff_R12 + -0x58);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x10);
  FUN_156476c5b(FUN_156476c5b,0x66d8d13,-1 - ((uVar3 - (uVar1 | uVar3)) + uVar1));
  return;
}



// FUNCTION 14d9111bd FUN_14d9111bd body=163 status=ok
// SIG undefined FUN_14d9111bd(void)

void FUN_14d9111bd(void)

{
  FUN_14e0bf07e();
  return;
}



// FUNCTION 14d911384 FUN_14d911384 body=167 status=ok
// SIG undefined FUN_14d911384(void)

void FUN_14d911384(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) & ~unaff_R15;
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(param_1 + 8));
  (*(code *)0x15ba38740)(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9114d9 FUN_14d9114d9 body=250 status=ok
// SIG undefined FUN_14d9114d9(void)

void FUN_14d9114d9(void)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156d189a0((in_RAX + unaff_R15) - (in_RAX & unaff_R15),
                (*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15 ^ 0xffffffffffffffff) + unaff_R15);
  return;
}



// FUNCTION 14d9116c3 FUN_14d9116c3 body=164 status=ok
// SIG undefined FUN_14d9116c3(void)

/* WARNING: Removing unreachable block (ram,0x00014d911757) */
/* WARNING: Removing unreachable block (ram,0x000157400718) */
/* WARNING: Removing unreachable block (ram,0x00014d911763) */

void FUN_14d9116c3(void)

{
  FUN_157400718();
  return;
}



// FUNCTION 14d911769 FUN_14d911769 body=151 status=ok
// SIG undefined FUN_14d911769(void)

void FUN_14d911769(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  FUN_16504ab94(param_1,*(longlong *)(unaff_RDI + -0x28) + param_1,
                (~in_RAX | param_3 ^ 0xffffffffffffffff) + in_RAX + 1);
  return;
}



// FUNCTION 14d911802 FUN_14d911802 body=48 status=ok
// SIG undefined FUN_14d911802(void)

undefined8 FUN_14d911802(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + (unaff_RBP ^ 0x82b1286)) = in_RAX;
  return auStackX_10[0];
}



// FUNCTION 14d9118ab FUN_14d9118ab body=319 status=ok
// SIG undefined FUN_14d9118ab(void)

/* WARNING: Removing unreachable block (ram,0x00014d91195a) */

undefined8 FUN_14d9118ab(void)

{
  undefined8 unaff_R14;
  
  FUN_160d822fe();
  return unaff_R14;
}



// FUNCTION 14d9119f4 FUN_14d9119f4 body=150 status=ok
// SIG undefined FUN_14d9119f4(void)

void FUN_14d9119f4(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = param_2 + param_1 + 1;
  FUN_15b953f87(param_1,uVar1,*(undefined8 *)(unaff_RDI + -0x30),~uVar1);
  return;
}



// FUNCTION 14d911b08 FUN_14d911b08 body=165 status=ok
// SIG undefined FUN_14d911b08(void)

/* WARNING: Removing unreachable block (ram,0x00014d911bab) */
/* WARNING: Removing unreachable block (ram,0x00014d911bb1) */

void FUN_14d911b08(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14ded79fe(param_2 - ~(unaff_RBP | param_1),*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                param_3,param_4);
  FUN_15b6a3450();
  return;
}



// FUNCTION 14d911bb1 FUN_14d911bb1 body=32 status=ok
// SIG undefined FUN_14d911bb1(void)

void FUN_14d911bb1(void)

{
  return;
}



// FUNCTION 14d911cfe thunk_FUN_14d911d18 body=19 status=ok
// SIG undefined thunk_FUN_14d911d18(void)

void thunk_FUN_14d911d18(void)

{
  FUN_14d911d18();
  return;
}



// FUNCTION 14d911d18 FUN_14d911d18 body=247 status=ok
// SIG undefined FUN_14d911d18(void)

/* WARNING: Removing unreachable block (ram,0x00014d911d74) */

void FUN_14d911d18(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + in_R11);
  uVar2 = uVar1 ^ 0xffffffffffffffff | unaff_R15;
  if ((~uVar2 | ((0xffffffffffffffff - unaff_R15) + uVar1) -
                (0xffffffffffffffff - unaff_R15 & uVar1)) + uVar2 == -1) {
    return;
  }
  FUN_157240f2b();
  return;
}



// FUNCTION 14d911e11 FUN_14d911e11 body=166 status=ok
// SIG undefined FUN_14d911e11(void)

void FUN_14d911e11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16552892e(FUN_16552892e,param_2,param_3);
  return;
}



// FUNCTION 14d911eb7 FUN_14d911eb7 body=221 status=ok
// SIG undefined FUN_14d911eb7(void)

void FUN_14d911eb7(void)

{
  return;
}



// FUNCTION 14d911f9a FUN_14d911f9a body=284 status=ok
// SIG undefined FUN_14d911f9a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d911f9a(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_164946589;
  FUN_164946589(param_1,FUN_164946589);
  FUN_160f72f81((ulonglong)pcVar1 & 0xffffffff);
  return;
}



// FUNCTION 14d9120bd FUN_14d9120bd body=119 status=ok
// SIG undefined FUN_14d9120bd(void)

void FUN_14d9120bd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_1667b7e53(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d912135 FUN_14d912135 body=150 status=ok
// SIG undefined FUN_14d912135(void)

ulonglong FUN_14d912135(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + param_1 + 1);
}



// FUNCTION 14d91226f FUN_14d91226f body=476 status=ok
// SIG undefined FUN_14d91226f(void)

void FUN_14d91226f(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_18;
  
  FUN_165858f3e();
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  puVar4 = (undefined8 *)(uStackX_18 + unaff_R15 + (uStackX_18 & unaff_R15) * -2);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *puVar4 = unaff_retaddr;
  puVar4[-1] = unaff_retaddr;
  puVar4[-2] = 0x14d912398;
  uVar3 = FUN_165aaaa3b();
  puVar4[-1] = uVar3;
  *(undefined4 *)(puVar4 + -1) = 0x6721c4c4;
  *(undefined4 *)((longlong)puVar4 + -4) = 0xc8016519;
  *(uint *)((longlong)puVar4 + -4) = *(uint *)((longlong)puVar4 + -4) ^ 0x282f197b;
  uVar3 = *(undefined8 *)((uVar1 ^ unaff_R15) - 0x58);
  puVar4[-1] = uVar3;
  puVar4[-1] = uVar3;
  puVar4[-2] = uVar3;
  puVar4[-3] = uVar3;
  puVar4[-1] = FUN_14d912452;
  puVar4[-2] = &DAT_1565b4239;
  return;
}



// FUNCTION 14d912452 FUN_14d912452 body=450 status=ok
// SIG undefined FUN_14d912452(void)

/* WARNING: Removing unreachable block (ram,0x00014d9124c3) */

void FUN_14d912452(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP;
  uVar3 = ~(*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP);
  uVar1 = 0x3725ea82;
  uVar3 = FUN_15b2fedba(0x3725ea82,param_2,(uVar2 - (uVar3 | uVar2)) + uVar3,
                        ~((~(~param_4 | unaff_RBP) | ~unaff_RBX | param_4) + (~param_4 | unaff_RBP)
                         + 1));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x50);
  FUN_156ec0c7c();
  FUN_1610fe90a(uVar1,~*(ulonglong *)(uVar2 + uVar3 + (uVar2 & uVar3) * -2 + -0x68) | uVar1);
  return;
}



// FUNCTION 14d9126ca FUN_14d9126ca body=141 status=ok
// SIG undefined FUN_14d9126ca(void)

/* WARNING: Removing unreachable block (ram,0x00014d9127d9) */
/* WARNING: Removing unreachable block (ram,0x00014d9127e4) */
/* WARNING: Removing unreachable block (ram,0x00015727004a) */
/* WARNING: Removing unreachable block (ram,0x000157270050) */
/* WARNING: Removing unreachable block (ram,0x000165ccf3d5) */
/* WARNING: Removing unreachable block (ram,0x00014e082b99) */
/* WARNING: Removing unreachable block (ram,0x00014e082be1) */
/* WARNING: Removing unreachable block (ram,0x00014e082bfb) */
/* WARNING: Removing unreachable block (ram,0x000165ccf459) */
/* WARNING: Removing unreachable block (ram,0x000165ccf45f) */
/* WARNING: Removing unreachable block (ram,0x000165ccf4ea) */
/* WARNING: Removing unreachable block (ram,0x000165ccf4f5) */
/* WARNING: Removing unreachable block (ram,0x000165ccf4fb) */
/* WARNING: Removing unreachable block (ram,0x000165ccf577) */
/* WARNING: Removing unreachable block (ram,0x000165ccf57d) */
/* WARNING: Removing unreachable block (ram,0x000165ccf572) */
/* WARNING: Removing unreachable block (ram,0x000164fbb554) */
/* WARNING: Removing unreachable block (ram,0x00015666c963) */
/* WARNING: Removing unreachable block (ram,0x00014d9127df) */
/* WARNING: Removing unreachable block (ram,0x00014d912758) */

undefined8 FUN_14d9126ca(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort unaff_BX;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff87b3894 + unaff_RDI);
  *puVar1 = *(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x38);
  puVar1[-1] = *puVar1;
  *(undefined4 *)(puVar1 + -1) = 0xba16612;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar2 = puVar1[-1];
  puVar1[-1] = in_R11;
  *(undefined8 *)((longlong)puVar1 + lVar2 + -0xba16612) = param_1;
  *(undefined4 *)((longlong)puVar1 + lVar2 + -0xba16612) = 0;
  *(undefined4 *)((longlong)puVar1 + lVar2 + -0xba1660e) = 0;
  *(undefined8 *)((longlong)puVar1 + lVar2 + -0xba16612) =
       *(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x78);
  uVar3 = FUN_165ccf3d5(*(undefined8 *)((longlong)puVar1 + lVar2 + -0xba16612),
                        CONCAT62((int6)((ulonglong)(lVar2 + -0xba1660a) >> 0x10),
                                 unaff_BX * 0x10 + (unaff_BX >> 0xc) +
                                 ~(~(unaff_BX * 0x10) | ~(unaff_BX >> 0xc)) * -2));
  return uVar3;
}



// FUNCTION 14d912758 FUN_14d912758 body=315 status=ok
// SIG undefined FUN_14d912758(void)

/* WARNING: Removing unreachable block (ram,0x00014d9127d9) */
/* WARNING: Removing unreachable block (ram,0x00014d9127e4) */
/* WARNING: Removing unreachable block (ram,0x00014d9127df) */

void FUN_14d912758(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16553e7fa(param_1,param_2,0x128,param_4);
  return;
}



// FUNCTION 14d912893 FUN_14d912893 body=143 status=ok
// SIG undefined FUN_14d912893(void)

longlong FUN_14d912893(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~(~*(ulonglong *)(unaff_RDI + -0x80) | ~param_1) << 1;
}



// FUNCTION 14d912928 FUN_14d912928 body=20 status=ok
// SIG undefined FUN_14d912928(void)

void FUN_14d912928(void)

{
  return;
}



// FUNCTION 14d9129f8 FUN_14d9129f8 body=195 status=ok
// SIG undefined FUN_14d9129f8(void)

/* WARNING: Removing unreachable block (ram,0x00014d912a5d) */

void FUN_14d9129f8(void)

{
  return;
}



// FUNCTION 14d912abd FUN_14d912abd body=254 status=ok
// SIG undefined FUN_14d912abd(void)

void FUN_14d912abd(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_stack_00000018;
  longlong local_res20;
  
  uVar2 = ~((~param_1 | in_stack_00000018) & (~in_stack_00000018 | param_1));
  param_1 = 0xffffffffffffffffU - local_res20 | param_1;
  FUN_162990de0();
  uVar1 = ~param_1 | *(ulonglong *)(unaff_RSI + -0x38);
  param_1 = ~*(ulonglong *)(unaff_RSI + -0x38) | param_1;
  FUN_1625798cb(param_1,(~(~param_1 & uVar1) + uVar1) - param_1,param_3,param_4,uVar2);
  FUN_14d912bbd();
  return;
}



// FUNCTION 14d912bbd FUN_14d912bbd body=129 status=ok
// SIG undefined FUN_14d912bbd(void)

void FUN_14d912bbd(undefined8 param_1,undefined8 param_2)

{
  longlong in_R10;
  longlong in_R11;
  undefined8 in_stack_00000018;
  
  *(longlong *)(in_R10 + 0x18) = -*(longlong *)(in_R10 + 0x18);
  *(longlong *)(in_R10 + 0x18) = *(longlong *)(in_R10 + 0x18) + -1;
  *(ulonglong *)(in_R10 + 0x18) = *(ulonglong *)(in_R10 + 0x18) | 0xffffffffffffffffU - in_R11;
  *(ulonglong *)(in_R10 + 0x18) = *(ulonglong *)(in_R10 + 0x18) ^ 0xffffffffffffffff;
  FUN_160f1269e(in_stack_00000018,param_2);
  FUN_14d912c3f();
  return;
}



// FUNCTION 14d912c3f FUN_14d912c3f body=160 status=ok
// SIG undefined FUN_14d912c3f(void)

void FUN_14d912c3f(void)

{
  ulonglong uVar1;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2;
  FUN_165cbc837();
  *(undefined8 *)
   (&stack0x00000018 +
   in_stack_00000008 + ~(~(uVar1 & 0xffffffffecba65ee) & (uVar1 | 0xffffffffecba65ee))) = unaff_R12;
  return;
}



// FUNCTION 14d912cdf FUN_14d912cdf body=151 status=ok
// SIG undefined FUN_14d912cdf(void)

void FUN_14d912cdf(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 unaff_R12;
  longlong in_stack_00000008;
  
  *(undefined8 *)
   (&stack0x00000018 +
   in_stack_00000008 + ~(~(param_3 & 0xffffffffecba65ee) & (param_3 | 0xffffffffecba65ee))) =
       unaff_R12;
  return;
}



// FUNCTION 14d912e01 FUN_14d912e01 body=149 status=ok
// SIG undefined FUN_14d912e01(void)

undefined8 FUN_14d912e01(void)

{
  undefined8 in_stack_00000018;
  
  return in_stack_00000018;
}



// FUNCTION 14d912e99 FUN_14d912e99 body=192 status=ok
// SIG undefined FUN_14d912e99(void)

/* WARNING: Removing unreachable block (ram,0x00014d912f24) */
/* WARNING: Removing unreachable block (ram,0x00014d912f2a) */

void FUN_14d912e99(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14e1350a0(FUN_14e1350a0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d912fd8 FUN_14d912fd8 body=176 status=ok
// SIG undefined FUN_14d912fd8(void)

/* WARNING: Removing unreachable block (ram,0x00014d913062) */
/* WARNING: Removing unreachable block (ram,0x00014d913074) */
/* WARNING: Removing unreachable block (ram,0x00014d91307a) */

void FUN_14d912fd8(undefined8 param_1,longlong param_2)

{
  uint unaff_R15D;
  undefined8 in_stack_00000008;
  
  *(uint *)(param_2 + 4) = ~(unaff_R15D & *(uint *)(param_2 + 4));
  FUN_14d921936(param_1,in_stack_00000008,FUN_14d921936);
  return;
}



// FUNCTION 14d913472 FUN_14d913472 body=162 status=ok
// SIG undefined FUN_14d913472(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d913472(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_162ca723d(local_res8,FUN_162ca723d,param_3,param_4);
  return;
}



// FUNCTION 14d9138df FUN_14d9138df body=570 status=ok
// SIG undefined FUN_14d9138df(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d913b09) overlaps instruction at (ram,0x00014d913b08)
    */
/* WARNING: Removing unreachable block (ram,0x00016221375d) */
/* WARNING: Removing unreachable block (ram,0x00014d913a24) */
/* WARNING: Removing unreachable block (ram,0x00014d913a2a) */
/* WARNING: Removing unreachable block (ram,0x00014d913b08) */
/* WARNING: Removing unreachable block (ram,0x00014d913b09) */
/* WARNING: Removing unreachable block (ram,0x000162213847) */
/* WARNING: Removing unreachable block (ram,0x00016221384a) */
/* WARNING: Removing unreachable block (ram,0x00014d913996) */

void FUN_14d9138df(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  ushort in_R10W;
  short *unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  *unaff_R13 = (-0x101 - ~in_R10W) + *unaff_R13;
  puVar2 = (ulonglong *)(param_5 + -8);
  *puVar2 = 0x2c8f24e4;
  *puVar2 = *puVar2 ^ 0x2c8f24e4;
  *puVar2 = *puVar2 ^ unaff_R15;
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x10) = param_2;
  *(undefined1 **)(param_5 + -0x10) = &LAB_15713be5a;
  *(undefined1 **)(param_5 + -0x18) = &LAB_15713be5a;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = 0;
  puVar2 = (ulonglong *)(param_5 + -0x10);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + *(ulonglong *)(param_5 + -8);
  if (CARRY8(uVar3,*(ulonglong *)(param_5 + -8))) {
    *(undefined8 *)(param_5 + -8) = 0;
    *(longlong *)(param_5 + -8) =
         *(longlong *)(param_5 + -8) - (~*(ulonglong *)(param_5 + -0x18) + 1);
    *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
    *(undefined4 *)(param_5 + -0x20) = 0xaef3f63;
    *(undefined4 *)(param_5 + -0x1c) = 0;
    lVar1 = param_5 + -0x10 + *(longlong *)(param_5 + -0x20);
    *(undefined4 *)(lVar1 + -0xaef3f7b) = 0x56c04457;
    *(undefined4 *)(lVar1 + -0xaef3f73) = *(undefined4 *)(lVar1 + -0xaef3f7b);
    *(undefined4 *)(lVar1 + -0xaef3f6f) = 0;
    *(undefined8 *)(lVar1 + -0xaef3f73) = param_1;
    *(undefined8 *)(lVar1 + -0xaef3f63) = *(undefined8 *)(lVar1 + -0xaef3f73);
    *(undefined8 *)(lVar1 + -0xaef3f6b) = *(undefined8 *)(lVar1 + -0xaef3f73);
    *(code **)(lVar1 + -0xaef3f63) = thunk_FUN_15b642ca5;
    *(undefined8 *)(lVar1 + -0xaef3f73) = param_4;
    *(undefined8 *)(lVar1 + -0xaef3f7b) = param_4;
    *(undefined8 *)(lVar1 + -0xaef3f83) = param_4;
    *(undefined1 **)(lVar1 + -0xaef3f73) = &LAB_1574a210b;
    *(undefined8 *)(lVar1 + -0xaef3f7b) = 0x15713be30;
    return;
  }
  FUN_1574a2041();
  return;
}



// FUNCTION 14d913bec thunk_FUN_14d913bf2 body=5 status=ok
// SIG undefined thunk_FUN_14d913bf2(void)

longlong thunk_FUN_14d913bf2(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return *(ulonglong *)(param_1 + -0x70) + unaff_RBX +
         (*(ulonglong *)(param_1 + -0x70) & unaff_RBX) * -2;
}



// FUNCTION 14d913bf2 FUN_14d913bf2 body=150 status=ok
// SIG undefined FUN_14d913bf2(void)

longlong FUN_14d913bf2(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return *(ulonglong *)(param_1 + -0x70) + unaff_RBX +
         (*(ulonglong *)(param_1 + -0x70) & unaff_RBX) * -2;
}



// FUNCTION 14d913c8d FUN_14d913c8d body=280 status=ok
// SIG undefined FUN_14d913c8d(void)

/* WARNING: Removing unreachable block (ram,0x000162acbebc) */
/* WARNING: Removing unreachable block (ram,0x000162acbec2) */
/* WARNING: Removing unreachable block (ram,0x000156e8f786) */
/* WARNING: Removing unreachable block (ram,0x00014d913d03) */

void FUN_14d913c8d(uint param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R12;
  uint unaff_R15D;
  ulonglong local_res18 [2];
  undefined8 in_stack_00000118;
  
  uVar1 = FUN_1647cc2aa();
  local_res18[1] =
       (~local_res18[1] | ~uVar1) &
       (*(ulonglong *)
         ((longlong)local_res18 +
         (~(~(ulonglong)
             ((~((-~param_1 - (~(~param_1 | unaff_R15D) + 2)) + 1) - 1) - ~in_stack_00000118._4_4_)
           & (~(unaff_R12 & 0xffffffffef763604) - 0x1089c9fc) - ~unaff_R12) ^ 0x4e16a542)) | uVar1);
  FUN_156e8f786();
  return;
}



// FUNCTION 14d91430d FUN_14d91430d body=111 status=ok
// SIG undefined FUN_14d91430d(void)

/* WARNING: Removing unreachable block (ram,0x00014d914344) */

void FUN_14d91430d(ulonglong param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined1 unaff_SIL;
  undefined7 unaff_00000031;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong auStack_10 [2];
  
  *(undefined8 *)(&stack0x00000008 + unaff_RBX) = in_RAX;
  *(ulonglong *)(&stack0x00000010 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000010 + unaff_RBX) ^ param_1;
  *(undefined8 *)(&stack0x00000008 + unaff_RBX) = unaff_R12;
  *(undefined8 *)(&stack0x00000000 + unaff_RBX) = unaff_RBP;
  *(ulonglong *)(&stack0x00000018 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000018 + unaff_RBX) & param_1;
  *(ulonglong *)(&stack0x00000000 + unaff_RBX) = param_1;
  *(ulonglong *)((longlong)auStack_10 + unaff_RBX + 8) = CONCAT71(unaff_00000031,unaff_SIL);
  *(undefined8 *)((longlong)auStack_10 + unaff_RBX) = in_R10;
  FUN_165856dd8(0x20);
  return;
}



// FUNCTION 14d91440a FUN_14d91440a body=116 status=ok
// SIG undefined FUN_14d91440a(void)

/* WARNING: Instruction at (ram,0x00014d914430) overlaps instruction at (ram,0x00014d91442f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d91442f) */

void FUN_14d91440a(undefined4 param_1,undefined8 param_2)

{
  FUN_166ce50d4(param_1,param_2);
  return;
}



// FUNCTION 14d91482c FUN_14d91482c body=54 status=ok
// SIG undefined FUN_14d91482c(void)

void FUN_14d91482c(void)

{
  return;
}



// FUNCTION 14d9148c3 FUN_14d9148c3 body=67 status=ok
// SIG undefined FUN_14d9148c3(void)

undefined8 FUN_14d9148c3(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  bool in_ZF;
  
  if (!in_ZF) {
    return in_RAX;
  }
  uVar1 = FUN_1574ba9da();
  return uVar1;
}



// FUNCTION 14d914c49 FUN_14d914c49 body=142 status=ok
// SIG undefined FUN_14d914c49(void)

/* WARNING: Removing unreachable block (ram,0x00014d9150d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9150de) */
/* WARNING: Removing unreachable block (ram,0x00014d914d72) */
/* WARNING: Removing unreachable block (ram,0x00014d914d94) */
/* WARNING: Removing unreachable block (ram,0x00014d914e13) */
/* WARNING: Removing unreachable block (ram,0x00014d914e49) */
/* WARNING: Removing unreachable block (ram,0x00014d914e5e) */
/* WARNING: Removing unreachable block (ram,0x00014d914e75) */
/* WARNING: Removing unreachable block (ram,0x00014d914e7b) */
/* WARNING: Removing unreachable block (ram,0x000165e7e358) */
/* WARNING: Removing unreachable block (ram,0x00014d914e80) */
/* WARNING: Removing unreachable block (ram,0x00014d914f7a) */
/* WARNING: Removing unreachable block (ram,0x00014d914fad) */
/* WARNING: Removing unreachable block (ram,0x00014d914fb3) */
/* WARNING: Removing unreachable block (ram,0x00015af4db16) */
/* WARNING: Removing unreachable block (ram,0x00014d914f75) */
/* WARNING: Removing unreachable block (ram,0x00014d914cd8) */
/* WARNING: Removing unreachable block (ram,0x00014d914d6c) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc64f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d914c49(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RSI + -0x98) ^ unaff_RBP)) {
    uVar1 = FUN_14d861d0e();
    return uVar1;
  }
  uVar1 = FUN_14d861d0e();
  return uVar1;
}



// FUNCTION 14d914cd8 FUN_14d914cd8 body=261 status=ok
// SIG undefined FUN_14d914cd8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9150d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9150de) */
/* WARNING: Removing unreachable block (ram,0x00014d914d72) */
/* WARNING: Removing unreachable block (ram,0x00014d914d94) */
/* WARNING: Removing unreachable block (ram,0x00014d914e13) */
/* WARNING: Removing unreachable block (ram,0x00014d914e49) */
/* WARNING: Removing unreachable block (ram,0x00014d914e5e) */
/* WARNING: Removing unreachable block (ram,0x00014d914e75) */
/* WARNING: Removing unreachable block (ram,0x00014d914e7b) */
/* WARNING: Removing unreachable block (ram,0x000165e7e358) */
/* WARNING: Removing unreachable block (ram,0x00014d914e80) */
/* WARNING: Removing unreachable block (ram,0x00014d914f7a) */
/* WARNING: Removing unreachable block (ram,0x00014d914fad) */
/* WARNING: Removing unreachable block (ram,0x00014d914fb3) */
/* WARNING: Removing unreachable block (ram,0x00015af4db16) */
/* WARNING: Removing unreachable block (ram,0x00014d914f75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d914cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_162d32db7(param_1,param_2,param_3);
  uVar1 = FUN_14dc463d8();
  return uVar1;
}



// FUNCTION 14d914de7 FUN_14d914de7 body=149 status=ok
// SIG undefined FUN_14d914de7(void)

/* WARNING: Removing unreachable block (ram,0x00014d9150d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9150de) */
/* WARNING: Removing unreachable block (ram,0x00014d914e80) */
/* WARNING: Removing unreachable block (ram,0x00014d914f7a) */
/* WARNING: Removing unreachable block (ram,0x00014d914fad) */
/* WARNING: Removing unreachable block (ram,0x00014d914fb3) */
/* WARNING: Removing unreachable block (ram,0x00015af4db16) */
/* WARNING: Removing unreachable block (ram,0x00014d914f75) */

undefined8 FUN_14d914de7(void)

{
  undefined8 uVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  
  if (unaff_EBX < 0) {
    unaff_EBX = -1;
  }
  if (unaff_EBX != 0) {
    return *(undefined8 *)(unaff_RDI + -0x80);
  }
  uVar1 = FUN_165e7e358();
  return uVar1;
}



// FUNCTION 14d914e80 FUN_14d914e80 body=607 status=ok
// SIG undefined FUN_14d914e80(void)

/* WARNING: Removing unreachable block (ram,0x00014d9150d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9150de) */
/* WARNING: Removing unreachable block (ram,0x00014d914fb3) */

void FUN_14d914e80(void)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong local_res10;
  
  LOCK();
  UNLOCK();
  DAT_14d7c4b72 = in_AL;
  *(undefined8 *)(local_res10 + -8) = 0x468bc60;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined **)(local_res10 + -0x10) = &DAT_1666d84a2;
  *(undefined8 *)(local_res10 + -0x20) = 0x14d914f1a;
  FUN_1666d8491();
  *(undefined4 *)(local_res10 + -0x10 + unaff_RBP) = 0x22a10c3d;
  puVar1 = (uint *)(local_res10 + -0x10 + unaff_RBP);
  *puVar1 = *puVar1 ^ 0x22a10c3d;
  uVar2 = *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = in_R9;
  uVar3 = *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  if (uVar3 == (uVar2 ^ 0x19aa49fe)) {
    *(undefined8 *)(local_res10 + -8) = unaff_R12;
    *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
    *(undefined8 *)(local_res10 + -8) = 0;
    *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x165e93f27;
    *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
    return;
  }
  FUN_15af4db19();
  return;
}



// FUNCTION 14d9150de FUN_14d9150de body=341 status=ok
// SIG undefined FUN_14d9150de(void)

void FUN_14d9150de(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar5 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar4 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_16262c493(uVar4,FUN_16262c493,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15) ^ 0xffffffffffffffff);
  puVar1 = (ulonglong *)(&stack0xfffffffffa9c5798 + uVar5);
  *(uint *)puVar1 = 0;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0xa9ae52da;
  *(undefined4 *)(&stack0xfffffffffa9c579c + uVar5) = 0xffffffff;
  uVar5 = *(ulonglong *)(unaff_RDI + *puVar1 + 0x5651acc6);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70);
  *puVar1 = uVar4;
  uVar3 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  FUN_156607710(uVar3,FUN_156607710,uVar2 + uVar4 + (uVar2 & uVar4) * -2,
                uVar5 + uVar4 + (uVar5 & uVar4) * -2);
  return;
}



// FUNCTION 14d9152e9 FUN_14d9152e9 body=150 status=ok
// SIG undefined FUN_14d9152e9(void)

void FUN_14d9152e9(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  FUN_1663b43d4(param_1,param_2,local_res8,uStackX_10);
  return;
}



// FUNCTION 14d915388 FUN_14d915388 body=309 status=ok
// SIG undefined FUN_14d915388(void)

/* WARNING: Removing unreachable block (ram,0x00014d91541e) */
/* WARNING: Removing unreachable block (ram,0x00014d915452) */
/* WARNING: Removing unreachable block (ram,0x00014d915457) */
/* WARNING: Removing unreachable block (ram,0x00014d915483) */
/* WARNING: Removing unreachable block (ram,0x00014d915488) */

undefined8 FUN_14d915388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  if (*(longlong *)(unaff_R13 + -8) != 0) {
    FUN_156562928(FUN_156562928,unaff_retaddr,param_3);
    uVar1 = FUN_1662b46a0();
    return uVar1;
  }
  uVar1 = FUN_165205f82();
  return uVar1;
}



// FUNCTION 14d915550 FUN_14d915550 body=181 status=ok
// SIG undefined FUN_14d915550(void)

void FUN_14d915550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  
  (*(code *)0x156d20e51)(param_1,0x156d20e51,param_3,param_4,in_stack_00000010 ^ unaff_R15);
  return;
}



// FUNCTION 14d915607 FUN_14d915607 body=93 status=ok
// SIG undefined FUN_14d915607(void)

void FUN_14d915607(void)

{
  ulonglong in_RAX;
  undefined1 uStackX_18;
  ulonglong in_stack_00000028;
  
  LOCK();
  DAT_14d7c086f = uStackX_18;
  UNLOCK();
  *(undefined8 *)((in_stack_00000028 ^ in_RAX) - 8) = 0x336fb68;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d91574a FUN_14d91574a body=131 status=ok
// SIG undefined FUN_14d91574a(void)

void FUN_14d91574a(void)

{
  longlong in_RAX;
  ulonglong unaff_R15;
  
  FUN_160e2377c(FUN_160e2377c,
                ~(*(ulonglong *)(in_RAX + -0x28) & unaff_R15) &
                (*(ulonglong *)(in_RAX + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14d9157ce FUN_14d9157ce body=172 status=ok
// SIG undefined FUN_14d9157ce(void)

void FUN_14d9157ce(void)

{
  return;
}



// FUNCTION 14d915aa1 FUN_14d915aa1 body=582 status=ok
// SIG undefined FUN_14d915aa1(void)

/* WARNING: Removing unreachable block (ram,0x00014d915b4d) */
/* WARNING: Removing unreachable block (ram,0x00014d915b53) */
/* WARNING: Removing unreachable block (ram,0x00014d915bf2) */
/* WARNING: Removing unreachable block (ram,0x00014d915bf8) */
/* WARNING: Removing unreachable block (ram,0x00014d915bfe) */
/* WARNING: Removing unreachable block (ram,0x00015b816cdd) */
/* WARNING: Removing unreachable block (ram,0x00015b816cf2) */
/* WARNING: Removing unreachable block (ram,0x000164851388) */
/* WARNING: Removing unreachable block (ram,0x00015b74a1f5) */

void FUN_14d915aa1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16164d04c(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                (~*(ulonglong *)(unaff_RDI + -0x70) | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d915b53 FUN_14d915b53 body=1054 status=ok
// SIG undefined FUN_14d915b53(void)

/* WARNING: Removing unreachable block (ram,0x00014d915bfe) */
/* WARNING: Removing unreachable block (ram,0x00014d915bf8) */

void FUN_14d915b53(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_164764fa2(param_1,param_2,FUN_164764fa2,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d915d1e FUN_14d915d1e body=828 status=ok
// SIG undefined FUN_14d915d1e(void)

/* WARNING: Removing unreachable block (ram,0x000166650fee) */
/* WARNING: Removing unreachable block (ram,0x000166650ff4) */
/* WARNING: Removing unreachable block (ram,0x000166650ff9) */
/* WARNING: Removing unreachable block (ram,0x00016665109d) */
/* WARNING: Removing unreachable block (ram,0x0001666510a3) */
/* WARNING: Removing unreachable block (ram,0x0001666510da) */
/* WARNING: Removing unreachable block (ram,0x0001666510dd) */
/* WARNING: Removing unreachable block (ram,0x0001627954f0) */
/* WARNING: Removing unreachable block (ram,0x0001627954fe) */
/* WARNING: Removing unreachable block (ram,0x000162795501) */
/* WARNING: Removing unreachable block (ram,0x00014d915d55) */
/* WARNING: Removing unreachable block (ram,0x00014d915d5b) */
/* WARNING: Removing unreachable block (ram,0x00014d915dce) */
/* WARNING: Removing unreachable block (ram,0x00014d915dd3) */
/* WARNING: Removing unreachable block (ram,0x00014d915dd9) */
/* WARNING: Removing unreachable block (ram,0x0001658f5446) */
/* WARNING: Removing unreachable block (ram,0x00014d915e29) */
/* WARNING: Removing unreachable block (ram,0x00014d915e7d) */
/* WARNING: Removing unreachable block (ram,0x00014d915e83) */
/* WARNING: Removing unreachable block (ram,0x0001563ad965) */
/* WARNING: Removing unreachable block (ram,0x000166650f4e) */
/* WARNING: Removing unreachable block (ram,0x000166650f62) */
/* WARNING: Removing unreachable block (ram,0x000166650f93) */
/* WARNING: Removing unreachable block (ram,0x000166650f8e) */
/* WARNING: Removing unreachable block (ram,0x000166650fc7) */
/* WARNING: Removing unreachable block (ram,0x000166650fe8) */
/* WARNING: Removing unreachable block (ram,0x0001618ea4ff) */
/* WARNING: Removing unreachable block (ram,0x0001618ea506) */
/* WARNING: Removing unreachable block (ram,0x000166650f5d) */
/* WARNING: Removing unreachable block (ram,0x0001618ea559) */
/* WARNING: Removing unreachable block (ram,0x00014d915e9a) */
/* WARNING: Removing unreachable block (ram,0x00014d915e9d) */

void FUN_14d915d1e(void)

{
  return;
}



// FUNCTION 14d915f13 FUN_14d915f13 body=167 status=ok
// SIG undefined FUN_14d915f13(void)

void FUN_14d915f13(void)

{
  return;
}



// FUNCTION 14d916030 FUN_14d916030 body=183 status=ok
// SIG undefined FUN_14d916030(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d916030(void)

{
  FUN_165ac9770();
  return;
}



// FUNCTION 14d91622a FUN_14d91622a body=149 status=ok
// SIG undefined FUN_14d91622a(void)

/* WARNING: Removing unreachable block (ram,0x00014d91626d) */

void FUN_14d91622a(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14e0587c3(*(undefined8 *)(unaff_R12 + -0x58),0,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14d9162c0 FUN_14d9162c0 body=135 status=ok
// SIG undefined FUN_14d9162c0(void)

void FUN_14d9162c0(undefined8 param_1,short param_2,undefined8 param_3,short *param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined8 unaff_RDI;
  undefined1 in_R10B;
  undefined7 in_register_00000091;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *param_4 = param_2 + -0x101 + *param_4;
  *(ulonglong *)(param_5 + -8) = CONCAT71(in_register_00000091,in_R10B);
  *(undefined8 *)(param_5 + -0x10) = unaff_RDI;
  piVar1 = (int *)(param_5 + -0x18);
  *(undefined8 *)piVar1 = local_res8;
  *piVar1 = -0x40e9b5d1;
  *piVar1 = *piVar1 + 0x7ddcf263;
  *(undefined4 *)(param_5 + -0x14) = 0;
  *(undefined8 *)piVar1 = unaff_R12;
  *(undefined8 *)(param_5 + -0x20) = in_R11;
  (*(code *)0x16545b8c7)(param_1,local_res18,param_3,local_res10);
  return;
}



// FUNCTION 14d9164d9 FUN_14d9164d9 body=156 status=ok
// SIG undefined FUN_14d9164d9(void)

void FUN_14d9164d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x14de22b66)(param_1,0xffffffffffffffa0,param_3,0x14de22b66);
  return;
}



// FUNCTION 14d916576 FUN_14d916576 body=3 status=ok
// SIG undefined FUN_14d916576(void)

void FUN_14d916576(void)

{
  return;
}



// FUNCTION 14d9167f1 FUN_14d9167f1 body=143 status=ok
// SIG undefined FUN_14d9167f1(void)

void FUN_14d9167f1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165cd5061(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9169a7 FUN_14d9169a7 body=201 status=ok
// SIG undefined FUN_14d9169a7(void)

void FUN_14d9169a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_stack_00000008;
  
  if (param_4 == 0xc84fd) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0xc84fe) {
    if (param_4 != 0xc857d) {
      return;
    }
    FUN_165e93f27(in_stack_00000008,param_2,param_3,&DAT_14d7a4b5d);
    return;
  }
  FUN_165e93f27(in_stack_00000008,param_2,param_3,&DAT_14d7b1586);
  return;
}



// FUNCTION 14d916b11 FUN_14d916b11 body=200 status=ok
// SIG undefined FUN_14d916b11(void)

longlong FUN_14d916b11(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) + unaff_R15 + 1;
}



// FUNCTION 14d916bd9 FUN_14d916bd9 body=167 status=ok
// SIG undefined FUN_14d916bd9(void)

/* WARNING: Removing unreachable block (ram,0x00014d916c7b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d916bd9(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  undefined8 unaff_R15;
  ulonglong local_res10;
  ulonglong local_res20;
  
  if ((~(local_res20 & unaff_RBP) & (local_res20 | unaff_RBP)) == 0) {
    _DAT_fffffffffffffff8 = &LAB_15ba14239;
    _DAT_ffffffffffffffe8 = local_res10 ^ unaff_RBP;
    _DAT_fffffffffffffff0 = unaff_R15;
    thunk_FUN_15b642ca5(param_1,param_2,param_3);
    return;
  }
  FUN_15ba14197();
  return;
}



// FUNCTION 14d916c81 FUN_14d916c81 body=131 status=ok
// SIG undefined FUN_14d916c81(void)

void FUN_14d916c81(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  
  *(ulonglong *)(unaff_RSI + 0x10) = ~*(ulonglong *)(unaff_RSI + 0x10);
  lVar1 = *(longlong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) & param_1;
  lVar2 = *(longlong *)(unaff_RSI + 0x10);
  *(undefined8 *)(unaff_RSI + 0x10) = 0;
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) ^ (lVar1 + param_1) - lVar2;
  FUN_14e00cef1(FUN_14e00cef1);
  return;
}



// FUNCTION 14d916d05 FUN_14d916d05 body=312 status=ok
// SIG undefined FUN_14d916d05(void)

/* WARNING: Removing unreachable block (ram,0x000161e15842) */
/* WARNING: Removing unreachable block (ram,0x000161e15848) */
/* WARNING: Removing unreachable block (ram,0x000161e158e9) */
/* WARNING: Removing unreachable block (ram,0x00015637873b) */
/* WARNING: Removing unreachable block (ram,0x00014d916da6) */
/* WARNING: Removing unreachable block (ram,0x000161a7ab59) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d916d05(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000028;
  
  lVar4 = (-in_stack_00000028 - in_RAX) + (in_stack_00000028 | in_RAX) * 2;
  *(undefined8 *)(lVar4 + -8) = unaff_RDI;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = in_R11;
  *(undefined **)(lVar4 + -8) = &DAT_162a046b1;
  uVar3 = *(undefined8 *)(lVar4 + -0x18);
  uVar1 = *(undefined8 *)(lVar4 + -0x10);
  *(undefined8 *)(lVar4 + -0x10) = uVar1;
  *(undefined8 *)(lVar4 + -0x18) = uVar1;
  *(undefined8 *)(lVar4 + -0x20) = uVar3;
  *(undefined8 *)(lVar4 + -0x28) = in_R9;
  *(undefined8 *)(lVar4 + -0x30) = 0x14d7c0d67;
  *(undefined8 *)(lVar4 + -0x10) = 0x71b666f3;
  *(ulonglong *)(lVar4 + -0x10) = *(ulonglong *)(lVar4 + -0x10) ^ 0x71b666f3;
  *(undefined8 *)(lVar4 + -0x28) = in_stack_00000008;
  lVar2 = *(longlong *)(lVar4 + -0x10);
  *(ulonglong *)(lVar4 + -0x10) = *(ulonglong *)(lVar4 + -0x10) & *(ulonglong *)(lVar4 + -0x30);
  *(longlong *)(lVar4 + -0x10) = *(longlong *)(lVar4 + -0x10) << 1;
  *(ulonglong *)(lVar4 + -0x10) =
       (lVar2 + *(ulonglong *)(lVar4 + -0x30)) - *(longlong *)(lVar4 + -0x10);
  return in_stack_00000018;
}



// FUNCTION 14d916e42 FUN_14d916e42 body=143 status=ok
// SIG undefined FUN_14d916e42(void)

void FUN_14d916e42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x1567d101f)(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d916f55 FUN_14d916f55 body=270 status=ok
// SIG undefined FUN_14d916f55(void)

/* WARNING: Removing unreachable block (ram,0x00014d917064) */
/* WARNING: Removing unreachable block (ram,0x00014d9170e7) */
/* WARNING: Removing unreachable block (ram,0x00014d9170ed) */
/* WARNING: Removing unreachable block (ram,0x000164a75bc6) */
/* WARNING: Removing unreachable block (ram,0x000164a75c3f) */
/* WARNING: Removing unreachable block (ram,0x00014db3e9cb) */

undefined8
FUN_14d916f55(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  bool bVar27;
  byte bVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  ulonglong *local_res10;
  
  local_res10[-1] = in_R11;
  local_res10[-2] = in_R11;
  local_res10[-3] = unaff_retaddr;
  *(undefined4 *)(local_res10 + -3) = 0x39d8dab;
  local_res10[-4] = unaff_R12;
  local_res10[-5] =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)((longlong)local_res10 + -0x14) = 0;
  uVar29 = local_res10[-5];
  bVar21 = (uVar29 & 0x4000) != 0;
  bVar20 = (uVar29 & 0x800) != 0;
  bVar19 = (uVar29 & 0x400) != 0;
  bVar17 = (uVar29 & 0x200) != 0;
  bVar15 = (uVar29 & 0x100) != 0;
  bVar14 = (uVar29 & 0x80) != 0;
  bVar13 = (uVar29 & 0x40) != 0;
  bVar11 = (uVar29 & 0x10) != 0;
  bVar10 = (uVar29 & 4) != 0;
  bVar9 = (uVar29 & 1) != 0;
  bVar27 = (uVar29 & 0x200000) != 0;
  bVar23 = (uVar29 & 0x40000) != 0;
  lVar2 = local_res10[-3];
  local_res10[-3] =
       (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar20 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar15 * 0x100 | (ulonglong)bVar14 * 0x80 |
       (ulonglong)bVar13 * 0x40 | (ulonglong)bVar11 * 0x10 | (ulonglong)bVar10 * 4 |
       (ulonglong)bVar9 | (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar23 * 0x40000;
  local_res10[-4] = unaff_R13;
  local_res10[-5] = unaff_RDI;
  local_res10[-6] =
       (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar20 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar15 * 0x100 | (ulonglong)bVar14 * 0x80 |
       (ulonglong)bVar13 * 0x40 | (ulonglong)bVar11 * 0x10 | (ulonglong)bVar10 * 4 |
       (ulonglong)bVar9 | (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar23 * 0x40000;
  uVar30 = local_res10[-6];
  bVar22 = (uVar30 & 0x4000) != 0;
  bVar18 = (uVar30 & 0x200) != 0;
  bVar16 = (uVar30 & 0x100) != 0;
  bVar12 = (uVar30 & 0x10) != 0;
  bVar28 = (uVar30 & 0x200000) != 0;
  bVar24 = (uVar30 & 0x40000) != 0;
  bVar26 = 0;
  bVar25 = 0;
  uVar8 = lVar2 - 0x28ee0c3;
  uVar3 = local_res10[-5];
  local_res10[-5] = 0x14d916fd8;
  FUN_165db34b4();
  puVar1 = local_res10 + -2;
  local_res10[-5] = param_2;
  uVar29 = *puVar1;
  uVar4 = local_res10[-5];
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | unaff_R15;
  *puVar1 = ~(~(unaff_R15 & ~uVar29) & *puVar1);
  uVar7 = local_res10[-4];
  uVar29 = local_res10[-3];
  local_res10[-3] = in_R10;
  local_res10[-4] = uVar29;
  uVar29 = local_res10[-1];
  local_res10[-4] = unaff_RBX;
  local_res10[-5] = param_4;
  if (-1 < (longlong)(uVar29 + unaff_R15)) {
    uVar7 = FUN_1663c8210();
    return uVar7;
  }
  local_res10[-1] = (unaff_R15 - (local_res10[-1] | unaff_R15)) + local_res10[-1];
  uVar5 = local_res10[-4];
  local_res10[-4] = param_1;
  local_res10[-1] = local_res10[-1] << 1;
  uVar6 = local_res10[-4];
  local_res10[-4] = uVar7;
  local_res10[-1] = (uVar29 + unaff_R15) - local_res10[-1];
  local_res10[-3] = local_res10[-5];
  local_res10[-4] = uVar4;
  *local_res10 = ~*local_res10;
  *local_res10 = *local_res10 | unaff_R15;
  local_res10[-5] = 0x1663c82a7;
  uVar7 = FUN_166604e65(uVar6);
  local_res10[-4] = uVar3;
  local_res10[-3] = uVar8;
  local_res10[-4] = param_3;
  puVar1 = local_res10 + -5;
  *puVar1 = uVar8;
  *(byte *)puVar1 = 0xb9;
  local_res10[-6] = uVar5;
  *(byte *)puVar1 = ~(byte)*puVar1;
  *(byte *)puVar1 = 0x46 - (byte)*puVar1;
  *(byte *)puVar1 = (byte)*puVar1 ^ 0x6f;
  *(byte *)puVar1 = (byte)*puVar1 ^ 99;
  uVar29 = *puVar1;
  local_res10[-5] = uVar7;
  uVar8 = local_res10[-4];
  local_res10[-5] =
       (ulonglong)(bVar22 & 1) * 0x4000 | (ulonglong)((uVar30 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar18 & 1) * 0x200 | (ulonglong)(bVar16 & 1) * 0x100 |
       (ulonglong)((longlong)uVar8 < 0) * 0x80 | (ulonglong)(uVar8 == 0) * 0x40 |
       (ulonglong)(bVar12 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar28 & 1) * 0x200000 | (ulonglong)(bVar26 & 1) * 0x100000 |
       (ulonglong)(bVar25 & 1) * 0x80000 | (ulonglong)(bVar24 & 1) * 0x40000;
  uVar7 = FUN_165f2f92a((char)uVar29 + '\b');
  return uVar7;
}



// FUNCTION 14d917064 FUN_14d917064 body=407 status=ok
// SIG undefined FUN_14d917064(void)

/* WARNING: Removing unreachable block (ram,0x00014d9170ed) */

ulonglong FUN_14d917064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  void *pvVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  uint uVar9;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong uVar10;
  undefined8 unaff_R14;
  uint uVar11;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  
  pvVar5 = ProcessEnvironmentBlock;
  uVar10 = ~((~unaff_R15 | unaff_retaddr) & (~unaff_retaddr | unaff_R15));
  uVar8 = uStackX_8 ^ unaff_R15;
  uVar9 = (uint)in_R11;
  uVar11 = (uint)unaff_R15;
  iVar7 = -1 - ((~uVar9 | uVar11) & (~(~uVar11 & uVar9) + uVar9) - uVar11);
  bVar4 = ((byte)param_1 & 0x1f) % 0x11;
  uVar6 = (ushort)iVar7;
  if ((uVar10 & 1) == 0) {
    *(undefined8 *)(uVar8 - 8) = unaff_R14;
    *(undefined8 *)(uVar8 - 0x10) = unaff_R14;
    *(void **)(uVar8 - 0x18) = pvVar5;
    *(undefined4 *)(uVar8 - 0x18) = 0x1bd86c4;
    *(undefined8 *)(uVar8 - 0x20) = unaff_R12;
    *(ulonglong *)(uVar8 - 0x28) =
         (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar10 & 0x400) != 0) * 0x400 | (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar10 & 0x80) != 0) * 0x80 | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 |
         (ulonglong)((uVar10 & 0x10) != 0) * 0x10 | (ulonglong)((uVar10 & 4) != 0) * 4 |
         (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
    *(undefined4 *)(uVar8 - 0x14) = 0;
    uVar10 = *(ulonglong *)(uVar8 - 0x28);
    lVar2 = *(longlong *)(uVar8 - 0x18);
    *(ulonglong *)(uVar8 - 0x18) =
         (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar10 & 0x400) != 0) * 0x400 | (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
         (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
    *(longlong *)(uVar8 - 8) = lVar2 + -0x176b97a;
    uVar1 = *(undefined8 *)(uVar8 - 0x10);
    *(undefined8 *)(uVar8 - 0x10) = in_R11;
    *(undefined8 *)(uVar8 - 0x20) = param_1;
    *(undefined8 *)(uVar8 - 0x28) = in_R11;
    *(undefined8 *)(uVar8 - 0x18) = *(undefined8 *)(uVar8 - 0x28);
    uVar3 = *(undefined8 *)(uVar8 - 0x20);
    *(undefined8 *)(uVar8 - 0x20) = param_4;
    *(undefined8 *)(uVar8 - 0x28) = uVar1;
    uVar8 = FUN_162ceecf2(uVar3);
    return uVar8;
  }
  *(undefined8 *)(uVar8 - 8) = unaff_RDI;
  *(undefined8 *)(uVar8 - 0x10) = unaff_RDI;
  *(undefined **)(uVar8 - 8) = &DAT_164a75c50;
  return (ulonglong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6 >> bVar4 | uVar6 << 0x11 - bVar4);
}



// FUNCTION 14d917210 FUN_14d917210 body=315 status=ok
// SIG undefined FUN_14d917210(void)

/* WARNING: Removing unreachable block (ram,0x00014d9172af) */
/* WARNING: Removing unreachable block (ram,0x00014d9172b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9172ba) */

void FUN_14d917210(void)

{
  return;
}



// FUNCTION 14d9175c7 FUN_14d9175c7 body=273 status=ok
// SIG undefined FUN_14d9175c7(void)

void FUN_14d9175c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ushort *unaff_RBP;
  short unaff_DI;
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
  undefined8 local_res8;
  ulonglong uStackX_20;
  
  *unaff_RBP = -~*unaff_RBP - (1 - (unaff_DI + -0x101));
  bVar11 = (uStackX_20 & 0x4000) != 0;
  bVar10 = (uStackX_20 & 0x800) != 0;
  bVar9 = (uStackX_20 & 0x200) != 0;
  bVar8 = (uStackX_20 & 0x100) != 0;
  bVar7 = (uStackX_20 & 0x80) != 0;
  bVar6 = (uStackX_20 & 0x40) != 0;
  bVar5 = (uStackX_20 & 0x10) != 0;
  bVar4 = (uStackX_20 & 4) != 0;
  bVar3 = (uStackX_20 & 1) != 0;
  bVar15 = (uStackX_20 & 0x200000) != 0;
  bVar12 = (uStackX_20 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(local_res8,param_2,param_3,param_4);
  *param_5 = uVar2;
  param_5[-1] = uVar2;
  param_5[-2] = uVar2;
  *(undefined4 *)(param_5 + -2) = 0xeace60e;
  *(undefined4 *)((longlong)param_5 + -0xc) = 0;
  param_5[-2] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
                (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
                (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
                (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
                (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
                (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  param_5[-3] = unaff_RBX;
  param_5[-4] = 0x14d91765c;
  FUN_160d9a410();
  FUN_14db537a4();
  return;
}



// FUNCTION 14d917928 FUN_14d917928 body=153 status=ok
// SIG undefined FUN_14d917928(void)

void FUN_14d917928(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  int local_res20;
  
  thunk_FUN_14d95b7e0(0,param_2,*(undefined8 *)(unaff_R13 + -0x80),(int)param_2 + local_res20);
  return;
}



// FUNCTION 14d9179c4 FUN_14d9179c4 body=120 status=ok
// SIG undefined FUN_14d9179c4(void)

/* WARNING: Removing unreachable block (ram,0x00014d917a3d) */

void FUN_14d9179c4(undefined8 param_1,ushort param_2,ushort param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  undefined8 in_R11;
  short *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  *unaff_R12 = (-0x101 - ~(~param_3 & ~param_2)) + *unaff_R12;
  puVar1 = (ulonglong *)(param_5 + -8);
  *puVar1 = 0x778fbf6b;
  *puVar1 = *puVar1 ^ 0x778fbf6b;
  *puVar1 = *puVar1 - unaff_RSI;
  *puVar1 = -*puVar1;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(undefined8 *)(param_5 + -0x20) = in_R11;
  *(undefined1 **)(param_5 + -0x28) = &LAB_15728b159;
  *(undefined8 *)(param_5 + -0x30) = param_1;
  uVar2 = *(undefined8 *)(param_5 + -0x30);
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) - *(longlong *)(param_5 + -8);
  *(ulonglong *)(param_5 + -0x10) = ~*(ulonglong *)(param_5 + -0x10);
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + 1;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined4 *)(param_5 + -0x20) = 0xd2f2780a;
  *(undefined4 *)(param_5 + -0x1c) = 0xffffffff;
  *(undefined8 *)(param_5 + *(longlong *)(param_5 + -0x20) + 0x2d0d87ee) =
       *(undefined8 *)(param_5 + -0x28);
  thunk_FUN_15728b11c(uVar2,local_res8,uStackX_18,unaff_retaddr);
  return;
}



// FUNCTION 14d917a3d FUN_14d917a3d body=40 status=ok
// SIG undefined FUN_14d917a3d(void)

void FUN_14d917a3d(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d917ba2 FUN_14d917ba2 body=164 status=ok
// SIG undefined FUN_14d917ba2(void)

void FUN_14d917ba2(void)

{
  undefined8 in_stack_00000008;
  
  FUN_165be8075(in_stack_00000008);
  return;
}



// FUNCTION 14d917ce3 FUN_14d917ce3 body=179 status=ok
// SIG undefined FUN_14d917ce3(void)

void FUN_14d917ce3(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (ulonglong *)(&stack0xffffffffffaca43a + param_4);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x50);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar2;
  uVar2 = *puVar1;
  uVar3 = ~((~(~param_1 & uVar2) + uVar2) - param_1 & (~uVar2 | param_1));
  *puVar1 = uVar3;
  uVar2 = *puVar1;
  *puVar1 = uVar3;
  puVar1[-1] = unaff_RSI;
  puVar1[-2] = uVar2;
  puVar1[-3] = uVar2;
  puVar1[-2] = (ulonglong)&LAB_14d917d97;
  FUN_1646c2ca2(param_1,FUN_1646c2ca2);
  return;
}



// FUNCTION 14d917ed0 FUN_14d917ed0 body=332 status=ok
// SIG undefined FUN_14d917ed0(void)

/* WARNING: Removing unreachable block (ram,0x00014d917f87) */

longlong FUN_14d917ed0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + param_2 + 0x11a14698);
  lVar2 = uVar1 + in_RAX + (uVar1 & in_RAX) * -2;
  FUN_16490c4c2(param_1);
  FUN_1628e17ec(unaff_retaddr);
  return lVar2;
}



// FUNCTION 14d91826e FUN_14d91826e body=300 status=ok
// SIG undefined FUN_14d91826e(void)

void FUN_14d91826e(void)

{
  FUN_164f19602();
  FUN_1669c954f();
  return;
}



// FUNCTION 14d91839c FUN_14d91839c body=163 status=ok
// SIG undefined FUN_14d91839c(void)

void FUN_14d91839c(void)

{
  return;
}



// FUNCTION 14d918575 FUN_14d918575 body=59 status=ok
// SIG undefined FUN_14d918575(void)

void FUN_14d918575(void)

{
  FUN_16493979e();
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9185b0 thunk_FUN_14d9185b6 body=5 status=ok
// SIG undefined thunk_FUN_14d9185b6(void)

void thunk_FUN_14d9185b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  
  thunk_FUN_15b642ca5(param_1,param_2,uStackX_10);
  return;
}



// FUNCTION 14d9185b6 FUN_14d9185b6 body=74 status=ok
// SIG undefined FUN_14d9185b6(void)

void FUN_14d9185b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  
  thunk_FUN_15b642ca5(param_1,param_2,uStackX_10);
  return;
}



// FUNCTION 14d91864f FUN_14d91864f body=44 status=ok
// SIG undefined FUN_14d91864f(void)

void FUN_14d91864f(void)

{
  return;
}



// FUNCTION 14d91875e FUN_14d91875e body=155 status=ok
// SIG undefined FUN_14d91875e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9187fb) */
/* WARNING: Removing unreachable block (ram,0x00016152cbb4) */
/* WARNING: Removing unreachable block (ram,0x00016152cc43) */
/* WARNING: Removing unreachable block (ram,0x00016152cc49) */
/* WARNING: Removing unreachable block (ram,0x00016186a5bd) */

void FUN_14d91875e(void)

{
  FUN_16152cbb4();
  return;
}



// FUNCTION 14d9187fb FUN_14d9187fb body=203 status=ok
// SIG undefined FUN_14d9187fb(void)

void FUN_14d9187fb(longlong param_1)

{
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       -*(longlong *)(&stack0xfffffffff5adf788 + param_1);
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       *(longlong *)(&stack0xfffffffff5adf788 + param_1) + -1;
  *(ulonglong *)(&stack0xfffffffff5adf788 + param_1) =
       *(ulonglong *)(&stack0xfffffffff5adf788 + param_1) | unaff_RBP ^ 0xffffffffffffffff;
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       -*(longlong *)(&stack0xfffffffff5adf788 + param_1);
  *(ulonglong *)(&stack0xfffffffff5adf788 + param_1) =
       ~*(ulonglong *)(&stack0xfffffffff5adf788 + param_1);
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       -*(longlong *)(&stack0xfffffffff5adf788 + param_1);
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       *(longlong *)(&stack0xfffffffff5adf788 + param_1) + -1;
  *(longlong *)(&stack0xfffffffff5adf788 + param_1) =
       *(longlong *)(&stack0xfffffffff5adf788 + param_1) + -1;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(undefined8 *)(in_stack_00000028 + -8) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined1 **)(in_stack_00000028 + -8) = &LAB_16560e896 + *(longlong *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res8;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x30) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x38) = unaff_R12;
  *(undefined1 **)(in_stack_00000028 + -0x28) = &LAB_14d9188c8;
  *(undefined1 **)(in_stack_00000028 + -0x30) = &LAB_16560e82f;
  return;
}



// FUNCTION 14d918957 FUN_14d918957 body=155 status=ok
// SIG undefined FUN_14d918957(void)

void FUN_14d918957(void)

{
  (*(code *)0x1624e62e8)();
  return;
}



// FUNCTION 14d9189f3 FUN_14d9189f3 body=167 status=ok
// SIG undefined FUN_14d9189f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d918a96) */

void FUN_14d9189f3(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & param_1) + param_1;
  if (uVar1 < ~local_res20) {
    local_res20 = ~((param_1 - (uVar1 - ~local_res20)) + local_res20) & (local_res20 | param_1);
    (*(code *)0x1652c2cd1)(&local_res20,0x1652c2cd1,param_3,0xc45c);
    return;
  }
  FUN_16650f6e9();
  return;
}



// FUNCTION 14d918a9c FUN_14d918a9c body=165 status=ok
// SIG undefined FUN_14d918a9c(void)

void FUN_14d918a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15687877d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d918d39 FUN_14d918d39 body=166 status=ok
// SIG undefined FUN_14d918d39(void)

/* WARNING: Removing unreachable block (ram,0x00014d918f98) */
/* WARNING: Removing unreachable block (ram,0x00014d918f9e) */
/* WARNING: Removing unreachable block (ram,0x00015b0ebda0) */
/* WARNING: Removing unreachable block (ram,0x000164964b8c) */
/* WARNING: Removing unreachable block (ram,0x00015b0ebd17) */
/* WARNING: Removing unreachable block (ram,0x00015b0ebd95) */
/* WARNING: Removing unreachable block (ram,0x00015b0ebd9a) */
/* WARNING: Removing unreachable block (ram,0x000164964a7f) */
/* WARNING: Removing unreachable block (ram,0x000164964b53) */
/* WARNING: Removing unreachable block (ram,0x000164964b4c) */
/* WARNING: Removing unreachable block (ram,0x000164964b55) */
/* WARNING: Removing unreachable block (ram,0x000165d1a44c) */
/* WARNING: Removing unreachable block (ram,0x000165d1a486) */
/* WARNING: Removing unreachable block (ram,0x00015b0ebcee) */
/* WARNING: Removing unreachable block (ram,0x0001616e1d58) */

void FUN_14d918d39(void)

{
  byte bVar1;
  longlong in_RAX;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong unaff_R12;
  
  FUN_164f7bc88(*(longlong *)(unaff_R12 + -0x80),*(longlong *)(unaff_R12 + -0x80) + in_RAX);
  FUN_1571ee9c8();
  uVar4 = (-*(longlong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffffU) + 1;
  pcVar3 = FUN_1669e8194;
  uVar2 = FUN_1669e8194();
  uVar2 = 0xffffffffffffffff -
          ((~uVar2 | (ulonglong)pcVar3) & (~uVar2 & ~(ulonglong)pcVar3 | uVar2)) ^ 0x2b3e1e8f;
  bVar1 = (byte)uVar2 & 0x3f;
  FUN_15b9080aa(uVar2,uVar4 << bVar1 | uVar4 >> 0x40 - bVar1);
  return;
}



// FUNCTION 14d91903a FUN_14d91903a body=140 status=ok
// SIG undefined FUN_14d91903a(void)

void FUN_14d91903a(void)

{
  FUN_1613eb92b();
  return;
}



// FUNCTION 14d9190c9 FUN_14d9190c9 body=281 status=ok
// SIG undefined FUN_14d9190c9(void)

void FUN_14d9190c9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_CF;
  ushort in_stack_00000048;
  
  cVar1 = -0x44;
  if (in_CF) {
    cVar1 = -0x43;
  }
  FUN_166d19514(((-1 - (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15)) + unaff_R15) -
                ~*(ulonglong *)(unaff_R13 + -0x60),param_2,
                (ushort)CONCAT71((int7)((ulonglong)param_3 >> 8),(char)param_3 + cVar1) &
                in_stack_00000048);
  (*(code *)0x156e53679)();
  return;
}



// FUNCTION 14d9191e7 FUN_14d9191e7 body=130 status=ok
// SIG undefined FUN_14d9191e7(void)

void FUN_14d9191e7(void)

{
  undefined8 uVar1;
  ulonglong unaff_RDI;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(undefined8 *)(unaff_R13 + -0xa0);
  FUN_164ef75dc();
  (*(code *)&LAB_15b0884ce)
            (in_R11,*(ulonglong *)(-0x59 - ((~unaff_R15 | unaff_RDI) & (~unaff_RDI | unaff_R15))) |
                    in_R11,(ushort)uVar1 ^ (ushort)unaff_R15);
  return;
}



// FUNCTION 14d91926a FUN_14d91926a body=143 status=ok
// SIG undefined FUN_14d91926a(void)

void FUN_14d91926a(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  (*(code *)&LAB_15b0884ce)(unaff_retaddr,*(ulonglong *)(unaff_RDI + -0x58) | unaff_retaddr);
  return;
}



// FUNCTION 14d9194b8 FUN_14d9194b8 body=243 status=ok
// SIG undefined FUN_14d9194b8(void)

undefined8 FUN_14d9194b8(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  longlong local_res20;
  
  param_2 = param_2 - local_res20;
  *(undefined8 *)(param_2 + -8) = unaff_R12;
  *(undefined8 *)(param_2 + -0x10) = unaff_R13;
  *(undefined8 *)(param_2 + -0x10) = local_res8;
  *(undefined8 *)(param_2 + -0x18) = local_res8;
  *(undefined8 *)(param_2 + -0x20) = 0x14d919554;
  uVar2 = FUN_162066fd2(param_1,FUN_162066fd2,param_3);
  *(ulonglong *)(param_2 + -0x10) = unaff_RSI - ((param_1 | 0x62e28cf1) - 0x62e28cf1);
  uVar1 = *(undefined8 *)(param_2 + -0x10);
  *(undefined8 *)(param_2 + -8) = uVar2;
  *(undefined **)(param_2 + -0x10) = &DAT_14d9195b4;
  return uVar1;
}



// FUNCTION 14d9195d8 FUN_14d9195d8 body=107 status=ok
// SIG undefined FUN_14d9195d8(void)

void FUN_14d9195d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  short in_AX;
  short *in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  *in_R10 = in_AX + (param_4 ^ 0xf919) + 1;
  FUN_166924065(param_1,unaff_retaddr,param_3,local_res8);
  return;
}



// FUNCTION 14d919855 FUN_14d919855 body=135 status=ok
// SIG undefined FUN_14d919855(void)

void FUN_14d919855(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = -~*(ulonglong *)(unaff_R13 + -0x88) - 1;
  FUN_165cadcf4(0xcdf7,FUN_165cadcf4,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,param_2 - param_4)
  ;
  return;
}



// FUNCTION 14d919e71 FUN_14d919e71 body=140 status=ok
// SIG undefined FUN_14d919e71(void)

void FUN_14d919e71(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_R12;
  
  lVar3 = ~(~*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) + in_RAX;
  uVar2 = lVar3 - *(ulonglong *)(unaff_R12 + -0x80);
  uVar1 = uVar2 >> 0x12 | uVar2 << 0x2f;
  FUN_1570a7e31();
  uVar2 = *(ulonglong *)(lVar3 + -0x38);
  FUN_15ba3726b(~(uVar2 & uVar1) & (uVar2 + uVar1) - (uVar2 & uVar1),
                *(ulonglong *)(lVar3 + -0x58) ^ uVar1,FUN_15ba3726b);
  return;
}


