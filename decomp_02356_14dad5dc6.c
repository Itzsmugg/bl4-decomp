// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dad5dc6 FUN_14dad5dc6 body=200 status=ok
// SIG undefined FUN_14dad5dc6(void)

/* WARNING: Instruction at (ram,0x00014dad5df0) overlaps instruction at (ram,0x00014dad5def)
    */
/* WARNING: Removing unreachable block (ram,0x00014dad5dfc) */
/* WARNING: Removing unreachable block (ram,0x00014dad5e17) */
/* WARNING: Removing unreachable block (ram,0x00014dad5e0c) */

void FUN_14dad5dc6(void)

{
  uint in_EAX;
  uint unaff_R13D;
  uint uVar1;
  
  uVar1 = unaff_R13D ^ 0xffffffff;
  (*(code *)0x162e4995c)(uVar1,(~((~in_EAX | uVar1) + in_EAX + 1) + in_EAX) - ~uVar1);
  return;
}



// FUNCTION 14dad607b FUN_14dad607b body=206 status=ok
// SIG undefined FUN_14dad607b(void)

void FUN_14dad607b(void)

{
  return;
}



// FUNCTION 14dad61f6 FUN_14dad61f6 body=137 status=ok
// SIG undefined FUN_14dad61f6(void)

void FUN_14dad61f6(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  puVar1 = (undefined8 *)(local_res20 ^ unaff_R15);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  puVar1[-1] = in_stack_00000008;
  puVar1[-2] = 0x3b9c8e2;
  *puVar1 = puVar1[-2];
  *(undefined8 *)((longlong)puVar1 - 0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)puVar1 - 0x28cf) = unaff_R13;
  *(undefined **)((longlong)puVar1 - 0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dad6294 FUN_14dad6294 body=83 status=ok
// SIG undefined FUN_14dad6294(void)

void FUN_14dad6294(void)

{
  short *unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  short unaff_R15W;
  longlong local_res20;
  
  *unaff_RBX = unaff_R15W + *unaff_RBX;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined1 **)(local_res20 + -8) = &LAB_14dad62f9;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dad646b FUN_14dad646b body=293 status=ok
// SIG undefined FUN_14dad646b(void)

void FUN_14dad646b(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RDI;
  ulonglong local_res10;
  
  uVar1 = ~*unaff_RDI | local_res10;
  FUN_162794614();
  if (uVar1 == 0x381aa) {
    FUN_166a62797(param_1,&DAT_14d7ae034);
    return;
  }
  if (uVar1 != 0x381ab) {
    if (uVar1 != 0x38261) {
      FUN_1649ccae6();
      return;
    }
    FUN_166a62797(param_1,&DAT_14d7af5ae);
    return;
  }
  FUN_166a62797(param_1,&DAT_14d7b5ce6);
  return;
}



// FUNCTION 14dad68a0 FUN_14dad68a0 body=171 status=ok
// SIG undefined FUN_14dad68a0(void)

/* WARNING: Removing unreachable block (ram,0x00014dad68cf) */

ulonglong FUN_14dad68a0(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dad6a1c FUN_14dad6a1c body=14 status=ok
// SIG undefined FUN_14dad6a1c(void)

void FUN_14dad6a1c(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dad6ab9 FUN_14dad6ab9 body=158 status=ok
// SIG undefined FUN_14dad6ab9(void)

void FUN_14dad6ab9(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong unaff_retaddr;
  undefined1 local_res10 [16];
  ulonglong local_res20;
  
  puVar2 = (ulonglong *)(&stack0xfffffffffc3dcdde + param_1);
  uVar1 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 & ~unaff_retaddr;
  *puVar2 = ~*puVar2;
  *puVar2 = ~((~unaff_retaddr | uVar1) & *puVar2);
  local_res20 = ~(local_res20 & unaff_retaddr);
  FUN_161442960(local_res10,param_2);
  return;
}



// FUNCTION 14dad6b58 FUN_14dad6b58 body=274 status=ok
// SIG undefined FUN_14dad6b58(void)

void FUN_14dad6b58(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R13;
  longlong unaff_R14;
  
  *(ulonglong *)(unaff_R14 + 0x10) = ~param_1 & *(ulonglong *)(unaff_R14 + 0x10) | param_1;
  *(ulonglong *)(unaff_R14 + 0x10) =
       ~((*(longlong *)(unaff_R14 + 0x10) - (unaff_R13 | *(ulonglong *)(unaff_R14 + 0x10))) +
        unaff_R13);
  FUN_1574af593(FUN_1574af593,param_2,param_3);
  return;
}



// FUNCTION 14dad6dcf FUN_14dad6dcf body=160 status=ok
// SIG undefined FUN_14dad6dcf(void)

void FUN_14dad6dcf(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166430a3b(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dad70c6 FUN_14dad70c6 body=151 status=ok
// SIG undefined FUN_14dad70c6(void)

void FUN_14dad70c6(void)

{
  return;
}



// FUNCTION 14dad71dd FUN_14dad71dd body=355 status=ok
// SIG undefined FUN_14dad71dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dad7281) */
/* WARNING: Removing unreachable block (ram,0x00014dad7287) */
/* WARNING: Removing unreachable block (ram,0x00014dad728c) */

undefined8 FUN_14dad71dd(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  
  uVar2 = *(ulonglong *)(param_2 + -0xa0);
  uVar1 = ~uStackX_10 & (uStackX_10 | in_R10);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x28) = unaff_retaddr;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14d80b66b;
  uVar3 = FUN_15b9f15bf(param_1,uVar2 ^ in_R10,param_3,param_4);
  return uVar3;
}



// FUNCTION 14dad7473 FUN_14dad7473 body=124 status=ok
// SIG undefined FUN_14dad7473(void)

void FUN_14dad7473(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = (~param_1 + param_1) - ~param_1;
  FUN_161a2e759((uVar1 - (0xffffffffffffffff - param_1 | uVar1)) + (0xffffffffffffffff - param_1),
                in_stack_00000008);
  return;
}



// FUNCTION 14dad75a7 FUN_14dad75a7 body=115 status=ok
// SIG undefined FUN_14dad75a7(void)

void FUN_14dad75a7(undefined8 param_1)

{
  FUN_15b161768(param_1,0x20400);
  return;
}



// FUNCTION 14dad77f2 FUN_14dad77f2 body=586 status=ok
// SIG undefined FUN_14dad77f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001668256ae) */
/* WARNING: Removing unreachable block (ram,0x0001668256b9) */
/* WARNING: Removing unreachable block (ram,0x000162759600) */
/* WARNING: Removing unreachable block (ram,0x000162759606) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3f4c) */
/* WARNING: Removing unreachable block (ram,0x000166825615) */
/* WARNING: Removing unreachable block (ram,0x00014dad787e) */

undefined8 FUN_14dad77f2(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong unaff_R12;
  bool bVar4;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  uVar3 = ~uVar1 & 0xffffffffffffffff - param_1 | uVar1;
  bVar4 = CARRY8((~uVar1 | param_1) - (uVar3 | ~uVar1 | param_1),uVar3);
  if (!bVar4) {
    uVar2 = (*(code *)0x161773b0f)
                      (param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                       ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                        (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
    return uVar2;
  }
  if (bVar4) {
    uVar2 = FUN_162bf4d28();
    return uVar2;
  }
  if (-1 < *(longlong *)(unaff_R12 + -0x40)) {
    uVar2 = FUN_165b05716();
    return uVar2;
  }
  uVar2 = FUN_165b05716();
  return uVar2;
}



// FUNCTION 14dad7917 FUN_14dad7917 body=275 status=ok
// SIG undefined FUN_14dad7917(void)

/* WARNING: Removing unreachable block (ram,0x00014dad79c9) */

void FUN_14dad7917(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar6 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar7 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  uVar2 = ~(local_res18 & param_1) & (local_res18 | param_1);
  *(undefined8 *)(uVar2 - 8) = 0x25481797;
  *(ulonglong *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBP;
  puVar1 = (ulonglong *)(uVar2 - 8);
  if ((~(local_res10 & param_1) & (local_res10 | param_1) & 0x40) != 0) {
    uVar3 = *puVar1;
    *puVar1 = *puVar1 | 0xffffffffdab7e868;
    *puVar1 = ~(~(uVar3 & 0xffffffffdab7e868) & *puVar1);
    uVar3 = *(ulonglong *)(uVar2 - 0x10);
    *(ulonglong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + (uVar6 ^ param_1);
    *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
    *(undefined8 *)(uVar2 - 0x10) = in_R10;
    puVar1 = (ulonglong *)(uVar2 - 0x18);
    *puVar1 = uVar3;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R15;
    uVar3 = *(ulonglong *)(uVar2 - 0x20);
    *(undefined8 *)(uVar2 - 0x20) = 0x61f3;
    lVar4 = *(longlong *)(uVar2 - 0x20);
    uVar6 = *puVar1;
    *puVar1 = 0x16592a7ad;
    uVar5 = FUN_164c65330(lVar4 + 0x1618aa79a,uVar6,param_3);
    puVar1 = (ulonglong *)((longlong)(uVar2 - 0x10) + *(longlong *)(uVar2 - 0x10) + -0xe5adf92);
    *(uint *)puVar1 = 0;
    *(uint *)puVar1 = (uint)*puVar1 ^ 0x4619dacd;
    *(uint *)((longlong)puVar1 + 4) = 0;
    *(undefined8 *)((longlong)puVar1 + (*puVar1 ^ 0x4619dac5) + 0x10) = unaff_retaddr;
    puVar1[2] = uVar5;
    puVar1[1] = uVar5;
    puVar1[2] = *(ulonglong *)(uVar7 - 8);
    uVar5 = puVar1[1];
    puVar1[1] = *(undefined8 *)(uVar7 - 0x98);
    *puVar1 = uVar6;
    puVar1[-1] = *(undefined8 *)(uVar7 - 0xa0);
    uVar2 = *puVar1;
    *puVar1 = uVar5;
    puVar1[-1] = uVar2;
    puVar1[-2] = uVar3;
    FUN_14e2090be();
    return;
  }
  FUN_16592a709();
  return;
}



// FUNCTION 14dad7b03 FUN_14dad7b03 body=222 status=ok
// SIG undefined FUN_14dad7b03(void)

/* WARNING: Removing unreachable block (ram,0x00014d827855) */
/* WARNING: Removing unreachable block (ram,0x00014dad7b8f) */
/* WARNING: Removing unreachable block (ram,0x00014dad7b9b) */

void FUN_14dad7b03(ulonglong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined8 in_R11;
  longlong unaff_R14;
  undefined8 unaff_R15;
  longlong lStackX_10;
  
  uVar5 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar4 = (ulonglong)((uint)((uVar5 & 0xffffffff) >> 0x19) | (uint)((uVar5 & 0xffffffff) << 8));
  uVar5 = ~(uVar5 & param_1) & (uVar5 | param_1);
  FUN_14db7f93b();
  puVar1 = (ulonglong *)(lStackX_10 + -8);
  *puVar1 = 0x650b6dba;
  *puVar1 = *puVar1 ^ 0x650b6dba;
  *puVar1 = *puVar1 - unaff_R14;
  *puVar1 = -*puVar1;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R15;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R15;
  *(undefined8 *)(lStackX_10 + -0x20) = 0xffffffffffffff90;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(ulonglong *)(lStackX_10 + -0x18) = uVar5;
  *(undefined8 *)(lStackX_10 + -8) = 0;
  uVar3 = *(undefined8 *)(lStackX_10 + -0x18);
  *(undefined8 *)(lStackX_10 + -0x18) = in_R11;
  lVar2 = *(longlong *)(lStackX_10 + -8);
  *(ulonglong *)(lStackX_10 + -8) = *(ulonglong *)(lStackX_10 + -8) & 0x15b0eb8d8;
  *(ulonglong *)(lStackX_10 + -0x20) = param_1;
  *(longlong *)(lStackX_10 + -8) = *(longlong *)(lStackX_10 + -8) << 1;
  *(undefined1 **)(lStackX_10 + -8) = &LAB_15b0eb8d8 + (lVar2 - *(longlong *)(lStackX_10 + -8));
  *(ulonglong *)(lStackX_10 + -0x10) = uVar4;
  *(ulonglong *)(lStackX_10 + -0x18) = uVar4;
  *(undefined8 *)(lStackX_10 + -0x20) = uVar3;
  *(ulonglong *)(lStackX_10 + -0x10) = (ulonglong)thunk_FUN_15b0572f1;
  return;
}



// FUNCTION 14dad7ba1 FUN_14dad7ba1 body=51 status=ok
// SIG undefined FUN_14dad7ba1(void)

void FUN_14dad7ba1(void)

{
  return;
}



// FUNCTION 14dad7e15 FUN_14dad7e15 body=135 status=ok
// SIG undefined FUN_14dad7e15(void)

void FUN_14dad7e15(void)

{
  (*(code *)0x157841a6d)();
  return;
}



// FUNCTION 14dad7e9d FUN_14dad7e9d body=148 status=ok
// SIG undefined FUN_14dad7e9d(void)

void FUN_14dad7e9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int unaff_EBP;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_14defb725(0,param_2,in_stack_00000010,param_4 + unaff_EBP + in_stack_00000008);
  return;
}



// FUNCTION 14dad7f31 FUN_14dad7f31 body=156 status=ok
// SIG undefined FUN_14dad7f31(void)

/* WARNING: Removing unreachable block (ram,0x00014dad80ba) */
/* WARNING: Removing unreachable block (ram,0x00014dad7fbe) */
/* WARNING: Removing unreachable block (ram,0x00014dad7fcf) */
/* WARNING: Removing unreachable block (ram,0x00014dad7fdc) */
/* WARNING: Removing unreachable block (ram,0x00014dad7fdf) */
/* WARNING: Removing unreachable block (ram,0x00014dad8052) */
/* WARNING: Removing unreachable block (ram,0x00014dad8058) */
/* WARNING: Removing unreachable block (ram,0x00014dad80bf) */
/* WARNING: Removing unreachable block (ram,0x000157075957) */
/* WARNING: Removing unreachable block (ram,0x00014dad7fc4) */

void FUN_14dad7f31(void)

{
  return;
}



// FUNCTION 14dad7fcf FUN_14dad7fcf body=568 status=ok
// SIG undefined FUN_14dad7fcf(void)

/* WARNING: Removing unreachable block (ram,0x00014dad7fdc) */
/* WARNING: Removing unreachable block (ram,0x00014dad80ba) */
/* WARNING: Removing unreachable block (ram,0x00014dad8058) */

void FUN_14dad7fcf(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16238ab6f(FUN_16238ab6f,
                (~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x80)) +
                *(ulonglong *)(unaff_R13 + -0x80)) - unaff_R15,0x355a5d7f,0);
  return;
}



// FUNCTION 14dad8193 FUN_14dad8193 body=182 status=ok
// SIG undefined FUN_14dad8193(void)

undefined8 FUN_14dad8193(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  ulonglong auStackX_8 [4];
  
  uVar2 = FUN_161699fcb(~unaff_R13);
  *(undefined8 *)((longlong)auStackX_8 + (unaff_R15 ^ 0x2c9a1692)) = param_3;
  uVar3 = uRamffffffffffff8415 ^ 0x161699fcb;
  uVar1 = ~(auStackX_8[2] & 0x161699fcb) & (auStackX_8[2] | 0x161699fcb);
  _fxsave(uVar1);
  *(undefined8 *)(uVar1 - 8) = 0x2eca9d6;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar3;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar3;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return uVar2;
}



// FUNCTION 14dad824a FUN_14dad824a body=146 status=ok
// SIG undefined FUN_14dad824a(void)

undefined8 FUN_14dad824a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (unaff_retaddr ^ 0x2c9a1692)) = param_3;
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar1 = ~(local_res10[2] & unaff_R15) & (local_res10[2] | unaff_R15);
  _fxsave(uVar1);
  *(undefined8 *)(uVar1 - 8) = 0x2eca9d6;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar2;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar2;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return in_RAX;
}



// FUNCTION 14dad8360 FUN_14dad8360 body=202 status=ok
// SIG undefined FUN_14dad8360(void)

void FUN_14dad8360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_156d21106(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dad881b FUN_14dad881b body=285 status=ok
// SIG undefined FUN_14dad881b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dad88a2) */

void FUN_14dad881b(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  undefined8 in_R9;
  undefined8 in_R10;
  ulonglong in_stack_00000028;
  
  uVar1 = ~(~(~in_RAX & in_stack_00000028) + in_stack_00000028 + 1) & (unaff_RBX | in_RAX);
  *(undefined8 *)(uVar1 - 8) = in_R9;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined1 **)(uVar1 - 8) = &LAB_16299bb44;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dad8966 FUN_14dad8966 body=865 status=ok
// SIG undefined FUN_14dad8966(void)

/* WARNING: Removing unreachable block (ram,0x00014dad8a19) */
/* WARNING: Removing unreachable block (ram,0x00014dad8a1f) */
/* WARNING: Removing unreachable block (ram,0x00014dad8a80) */
/* WARNING: Removing unreachable block (ram,0x00014dad8a85) */
/* WARNING: Removing unreachable block (ram,0x000160f4ae8e) */
/* WARNING: Removing unreachable block (ram,0x000160f4ae93) */
/* WARNING: Removing unreachable block (ram,0x000160f4ae99) */
/* WARNING: Removing unreachable block (ram,0x00016199490b) */
/* WARNING: Removing unreachable block (ram,0x000161994a01) */
/* WARNING: Removing unreachable block (ram,0x000161994a0c) */
/* WARNING: Removing unreachable block (ram,0x000161994a12) */
/* WARNING: Removing unreachable block (ram,0x00014dfff699) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dad8966(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
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
  byte bVar19;
  byte bVar20;
  undefined8 *local_res10;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = ~(in_RAX & param_1);
  FUN_1661f53d7();
  *unaff_RBX = (*unaff_RBX | 0x100) - 0x100;
  bVar16 = (uVar2 & 0x4000) != 0;
  bVar15 = (uVar2 & 0x800) != 0;
  bVar14 = (uVar2 & 0x200) != 0;
  bVar13 = (uVar2 & 0x100) != 0;
  bVar12 = (uVar2 & 0x80) != 0;
  bVar11 = (uVar2 & 0x40) != 0;
  bVar10 = (uVar2 & 0x10) != 0;
  bVar9 = (uVar2 & 4) != 0;
  bVar8 = (uVar2 & 1) != 0;
  bVar20 = (uVar2 & 0x200000) != 0;
  bVar17 = (uVar2 & 0x40000) != 0;
  bVar19 = 0;
  bVar18 = 0;
  pcVar5 = (code *)swi(0x2e);
  uVar6 = (*pcVar5)();
  *local_res10 = unaff_RBP;
  local_res10[-1] = unaff_RBP;
  local_res10[-2] = uVar6;
  *(undefined4 *)(local_res10 + -2) = 0x218cfb1;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  uVar6 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)(bVar15 & 1) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)(bVar14 & 1) * 0x200 |
       (ulonglong)(bVar13 & 1) * 0x100 | (ulonglong)(bVar12 & 1) * 0x80 |
       (ulonglong)(bVar11 & 1) * 0x40 | (ulonglong)(bVar10 & 1) * 0x10 | (ulonglong)(bVar9 & 1) * 4
       | (ulonglong)(bVar8 & 1) | (ulonglong)(bVar20 & 1) * 0x200000 |
       (ulonglong)(bVar19 & 1) * 0x100000 | (ulonglong)(bVar18 & 1) * 0x80000 |
       (ulonglong)(bVar17 & 1) * 0x40000;
  local_res10[-3] = uVar6;
  local_res10[-3] = local_res10[-3] + -0x5b722b;
  local_res10[-2] = unaff_R14;
  local_res10[-3] = 0x15b033fd8;
  uVar6 = (*(code *)0x15676cf1b)();
  puVar1 = local_res10 + -3;
  *puVar1 = *(ulonglong *)(~(uVar3 & param_1 | ~(uVar3 | param_1)) - 0x30);
  local_res10[-4] = uVar6;
  *(undefined4 *)(local_res10 + -4) = 0;
  *(undefined4 *)((longlong)local_res10 + -0x1c) = 0;
  uVar3 = local_res10[-4];
  uVar2 = *puVar1;
  *puVar1 = uVar3 ^ uVar2 | 0x1661f53d7;
  local_res10[-3] = FUN_15b034069;
  uVar7 = (*(code *)0x165007265)();
  lVar4 = local_res10[-1];
  local_res10[-1] = *(undefined8 *)(lVar4 + -0x90);
  local_res10[-2] = *(undefined8 *)(lVar4 + -8);
  local_res10[-3] = unaff_R12;
  local_res10[-4] = unaff_R12;
  uVar6 = *(undefined8 *)(lVar4 + -0x98);
  local_res10[-5] = 0x165007265;
  local_res10[-3] = uVar6;
  local_res10[-4] = uVar7;
  local_res10[-5] = ~(~(uVar3 ^ uVar2) | 0xfffffffe99e0ac28);
  local_res10[-6] = &LAB_15b0340de;
  return;
}



// FUNCTION 14dad8c79 FUN_14dad8c79 body=128 status=ok
// SIG undefined FUN_14dad8c79(void)

/* WARNING: Removing unreachable block (ram,0x00014dad8cf9) */

void FUN_14dad8c79(undefined8 param_1,longlong param_2)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_15751fa1b(param_1,&DAT_14d7b6410);
    return;
  }
  if (param_2 == 0x710c9) {
    FUN_15751fa1b(param_1,0x14d7ad59b);
    return;
  }
  FUN_14e21233c();
  return;
}



// FUNCTION 14dad8cf9 FUN_14dad8cf9 body=138 status=ok
// SIG undefined FUN_14dad8cf9(void)

void FUN_14dad8cf9(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  ulonglong local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + (unaff_RBP ^ unaff_RDI)) = local_res8;
  uVar2 = ~local_res20;
  uVar1 = ~*(ulonglong *)(param_2 + -0xa0) | local_res20;
  uVar3 = ~local_res20;
  local_res20 = param_4;
  FUN_14dea55f5(param_1,~((uVar2 | *(ulonglong *)(param_2 + -0xa0)) & uVar1),param_3,
                ~(~param_5 & uVar3));
  return;
}



// FUNCTION 14dad8d84 FUN_14dad8d84 body=170 status=ok
// SIG undefined FUN_14dad8d84(void)

undefined8 FUN_14dad8d84(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dad8e2f FUN_14dad8e2f body=119 status=ok
// SIG undefined FUN_14dad8e2f(void)

void FUN_14dad8e2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_14e02d873(param_1,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14dad90f3 FUN_14dad90f3 body=483 status=ok
// SIG undefined FUN_14dad90f3(void)

/* WARNING: Removing unreachable block (ram,0x00016520d860) */
/* WARNING: Removing unreachable block (ram,0x00014dad923b) */
/* WARNING: Removing unreachable block (ram,0x00014dad92b4) */

void FUN_14dad90f3(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong in_stack_00000008;
  
  lVar3 = (~(~*(ulonglong *)(in_stack_00000008 + -0xa0) & param_1) + param_1) -
          (-1 - ~*(ulonglong *)(in_stack_00000008 + -0xa0));
  FUN_162325c80(param_1,FUN_162325c80,param_3);
  uVar1 = *(ulonglong *)(lVar3 + unaff_RBX + 0xf45b34c);
  uVar2 = *(ulonglong *)(lVar3 + -0x68);
  FUN_1613a8e78(param_1,~((~(0xffffffffffffffff - param_1 & uVar2) + uVar2) -
                          ~(0xffffffffffffffff - param_1) & (~(~uVar2 & param_1) + param_1) - uVar2)
                ,~(uVar1 & param_1) & (uVar1 | param_1));
  return;
}



// FUNCTION 14dad9365 FUN_14dad9365 body=284 status=ok
// SIG undefined FUN_14dad9365(void)

void FUN_14dad9365(void)

{
  FUN_156a03237();
  return;
}



// FUNCTION 14dad9486 FUN_14dad9486 body=164 status=ok
// SIG undefined FUN_14dad9486(void)

void FUN_14dad9486(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15afa7d95(0x4b,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dad964f FUN_14dad964f body=127 status=ok
// SIG undefined FUN_14dad964f(void)

void FUN_14dad964f(byte param_1,undefined8 param_2)

{
  byte bVar1;
  byte *unaff_RBX;
  undefined8 in_stack_00000010;
  
  *unaff_RBX = ~(param_1 & *unaff_RBX);
  bVar1 = (byte)in_stack_00000010;
  FUN_156caf85a(CONCAT71((int7)((ulonglong)in_stack_00000010 >> 8),
                         (~(bVar1 | 2) | 0xff - (bVar1 & 2)) + (bVar1 | 2) + '\x01') ^ 0xff,param_2)
  ;
  FUN_14dad96d0();
  return;
}



// FUNCTION 14dad96d0 FUN_14dad96d0 body=136 status=ok
// SIG undefined FUN_14dad96d0(void)

void FUN_14dad96d0(void)

{
  return;
}



// FUNCTION 14dad9761 FUN_14dad9761 body=122 status=ok
// SIG undefined FUN_14dad9761(void)

void FUN_14dad9761(undefined8 param_1)

{
  ulonglong in_R11;
  ulonglong unaff_R15;
  
  FUN_15728c4a5(param_1,in_R11 + unaff_R15 + ((-~unaff_R15 - (~(~unaff_R15 | in_R11) + 2)) + 1) * -2
                ,~unaff_R15,0x4d86dc6c);
  return;
}



// FUNCTION 14dad97dc FUN_14dad97dc body=48 status=ok
// SIG undefined FUN_14dad97dc(void)

void FUN_14dad97dc(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dad9871 FUN_14dad9871 body=149 status=ok
// SIG undefined FUN_14dad9871(void)

void FUN_14dad9871(byte param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  longlong local_res10;
  
  LOCK();
  bVar4 = in_AL < DAT_14d7c2340;
  bVar5 = SBORROW1(in_AL,DAT_14d7c2340);
  cVar1 = in_AL - DAT_14d7c2340;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7c2340;
  }
  DAT_14d7c2340 = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res10 + -0x20) = 0x234c3a3c;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(local_res10 + -0x20) ^ 0x285697c1;
  uVar6 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(local_res10 + -0x20) = uVar3;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0xa6f5cd9;
  uVar6 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x30) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28) = param_3;
  *(ulonglong *)(local_res10 + -8) = uVar3 - 0xa6f5cd9;
  FUN_165b065dc(param_1,param_2,*(undefined8 *)(local_res10 + -0x28),FUN_165b065dc);
  return;
}



// FUNCTION 14dad9a2f FUN_14dad9a2f body=189 status=ok
// SIG undefined FUN_14dad9a2f(void)

void FUN_14dad9a2f(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong in_stack_00000008;
  
  FUN_14e1b8451(param_1,in_stack_00000008 + unaff_RBP + (param_2 & unaff_RBP) * -2,param_3,param_4,
                *(undefined8 *)(unaff_RSI + -0x88));
  return;
}



// FUNCTION 14dad9c0c FUN_14dad9c0c body=166 status=ok
// SIG undefined FUN_14dad9c0c(void)

void FUN_14dad9c0c(void)

{
  return;
}



// FUNCTION 14dad9ef9 FUN_14dad9ef9 body=185 status=ok
// SIG undefined FUN_14dad9ef9(void)

void FUN_14dad9ef9(void)

{
  longlong lVar1;
  undefined8 in_R11;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  lVar1 = local_res20 + unaff_retaddr + (local_res20 & unaff_retaddr) * -2;
  *(undefined8 *)(lVar1 + -8) = in_stack_00000008;
  *(undefined8 *)(lVar1 + -0x10) = in_R11;
  *(undefined8 *)(lVar1 + -0x18) = in_R11;
  *(undefined8 *)(lVar1 + -0x20) = in_R11;
  *(code **)(lVar1 + -0x10) = FUN_14dad9fb2;
  *(undefined1 **)(lVar1 + -0x18) = &LAB_166223df4;
  return;
}



// FUNCTION 14dad9fb2 FUN_14dad9fb2 body=22 status=ok
// SIG undefined FUN_14dad9fb2(void)

void FUN_14dad9fb2(undefined1 param_1)

{
  undefined1 *unaff_R15;
  
  *unaff_R15 = param_1;
  thunk_FUN_157842fff();
  return;
}



// FUNCTION 14dad9fc9 thunk_FUN_157842fff body=5 status=ok
// SIG undefined thunk_FUN_157842fff(void)

void thunk_FUN_157842fff(void)

{
  FUN_157842fff();
  return;
}



// FUNCTION 14dada0c3 FUN_14dada0c3 body=225 status=ok
// SIG undefined FUN_14dada0c3(void)

void FUN_14dada0c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  longlong local_res10;
  ulonglong in_stack_00000018;
  
  uVar2 = FUN_15b582b4a(param_1,param_2,param_3,param_4,~in_R10 & ~in_stack_00000018 | in_R10);
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined1 **)(local_res10 + -8) = &LAB_14dada1c6;
  *(undefined8 *)(local_res10 + -0x18) = uVar2;
  FUN_14d7c1888(*(undefined8 *)(local_res10 + -0x10),uVar1);
  return;
}



// FUNCTION 14dada397 FUN_14dada397 body=126 status=ok
// SIG undefined FUN_14dada397(void)

void FUN_14dada397(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_157875687(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dada415 FUN_14dada415 body=137 status=ok
// SIG undefined FUN_14dada415(void)

void FUN_14dada415(undefined8 param_1)

{
  FUN_160c477ee(param_1,0xf - ~(ulonglong)&stack0xfffffffffffffff8);
  FUN_15b458c7d();
  return;
}



// FUNCTION 14dada4a0 FUN_14dada4a0 body=182 status=ok
// SIG undefined FUN_14dada4a0(void)

void FUN_14dada4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b458c7d(param_1,param_2,FUN_15b458c7d,param_4);
  return;
}



// FUNCTION 14dada69b FUN_14dada69b body=155 status=ok
// SIG undefined FUN_14dada69b(void)

/* WARNING: Removing unreachable block (ram,0x00014dada72b) */
/* WARNING: Removing unreachable block (ram,0x00014dada736) */
/* WARNING: Removing unreachable block (ram,0x0001629811b8) */
/* WARNING: Removing unreachable block (ram,0x0001629811be) */
/* WARNING: Removing unreachable block (ram,0x00014e17cb53) */
/* WARNING: Removing unreachable block (ram,0x00014e17cc06) */
/* WARNING: Removing unreachable block (ram,0x00014e17cc0a) */
/* WARNING: Removing unreachable block (ram,0x00014dada731) */

undefined8 FUN_14dada69b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e17cb53();
  return uVar1;
}



// FUNCTION 14dada736 FUN_14dada736 body=176 status=ok
// SIG undefined FUN_14dada736(void)

undefined8 FUN_14dada736(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dada7e6 FUN_14dada7e6 body=147 status=ok
// SIG undefined FUN_14dada7e6(void)

void FUN_14dada7e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_15641f1ce(FUN_15641f1ce,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dada879 FUN_14dada879 body=390 status=ok
// SIG undefined FUN_14dada879(void)

/* WARNING: Removing unreachable block (ram,0x000160bbd166) */
/* WARNING: Removing unreachable block (ram,0x000160bbd171) */
/* WARNING: Removing unreachable block (ram,0x000160bbd1f5) */
/* WARNING: Removing unreachable block (ram,0x000160bbd1fb) */
/* WARNING: Removing unreachable block (ram,0x000162b03c48) */
/* WARNING: Removing unreachable block (ram,0x000162b03cd5) */
/* WARNING: Removing unreachable block (ram,0x000162b03cdb) */
/* WARNING: Removing unreachable block (ram,0x00014db9254e) */
/* WARNING: Removing unreachable block (ram,0x00014db925a4) */
/* WARNING: Removing unreachable block (ram,0x00014db925ea) */
/* WARNING: Removing unreachable block (ram,0x00014db925f0) */
/* WARNING: Removing unreachable block (ram,0x00014db92609) */
/* WARNING: Removing unreachable block (ram,0x00014db9268e) */
/* WARNING: Removing unreachable block (ram,0x00014db92699) */
/* WARNING: Removing unreachable block (ram,0x00014db92694) */
/* WARNING: Removing unreachable block (ram,0x00014db92689) */
/* WARNING: Removing unreachable block (ram,0x000156a3838f) */
/* WARNING: Removing unreachable block (ram,0x000166d895b8) */
/* WARNING: Removing unreachable block (ram,0x000166d895ee) */
/* WARNING: Removing unreachable block (ram,0x000166d895f4) */
/* WARNING: Removing unreachable block (ram,0x000166d89635) */
/* WARNING: Removing unreachable block (ram,0x000166d8963b) */
/* WARNING: Removing unreachable block (ram,0x00016610bb9e) */
/* WARNING: Removing unreachable block (ram,0x0001575c1edb) */
/* WARNING: Removing unreachable block (ram,0x00016610bc17) */
/* WARNING: Removing unreachable block (ram,0x00016610bc1d) */
/* WARNING: Removing unreachable block (ram,0x00016610bc22) */
/* WARNING: Removing unreachable block (ram,0x000161308b61) */
/* WARNING: Removing unreachable block (ram,0x000160bbd16c) */
/* WARNING: Removing unreachable block (ram,0x00014dadaa00) */
/* WARNING: Removing unreachable block (ram,0x00014dada986) */
/* WARNING: Removing unreachable block (ram,0x000160bbd0db) */
/* WARNING: Removing unreachable block (ram,0x00014dada9f5) */
/* WARNING: Removing unreachable block (ram,0x00014dada9fb) */
/* WARNING: Removing unreachable block (ram,0x0001575c6cf6) */
/* WARNING: Removing unreachable block (ram,0x0001575c6ceb) */

undefined8 FUN_14dada879(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  uVar1 = FUN_1570fb762();
  if (-1 < *(longlong *)(unaff_R13 + -0x50)) {
    uVar1 = FUN_1575c6c63();
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14dadaa00 FUN_14dadaa00 body=160 status=ok
// SIG undefined FUN_14dadaa00(void)

undefined8 FUN_14dadaa00(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong unaff_RBP;
  longlong in_R11;
  undefined1 *puVar5;
  longlong unaff_R12;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong lStackX_20;
  
  *(ulonglong *)(unaff_R12 + 0x10) = ~(unaff_RBP & *(ulonglong *)(unaff_R12 + 0x10));
  bVar9 = (local_res18 & 0x4000) != 0;
  bVar8 = (local_res18 & 0x200) != 0;
  bVar7 = 0;
  bVar6 = (local_res18 & 0x10) != 0;
  bVar13 = (uStackX_1a & 0x20) != 0;
  bVar10 = (uStackX_1a & 4) != 0;
  bVar12 = 0;
  bVar11 = 0;
  plVar1 = (longlong *)(lStackX_20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_R11;
  puVar5 = &LAB_1564de043;
  *(undefined8 *)(lStackX_20 + -0x10) = param_2;
  *(undefined8 *)(lStackX_20 + -0x18) = param_2;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(code **)(lStackX_20 + -0x20) = thunk_FUN_14dadaaa6;
  uVar4 = FUN_1564de014();
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_retaddr;
  puVar2 = (uint *)(lStackX_20 + -8);
  *puVar2 = 0x44479fdb;
  *puVar2 = *puVar2 ^ 0x44479fdb;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -0x20);
  iVar3 = *(int *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -0x10) = uStackX_10;
  *(undefined4 *)(lStackX_20 + -0x18) = 0;
  *(undefined4 *)(lStackX_20 + -8) = *(undefined4 *)(lStackX_20 + -0x18);
  *(uint *)(lStackX_20 + -8) = *(uint *)(lStackX_20 + -8) ^ iVar3 + 0x10U;
  *(undefined4 *)(lStackX_20 + -4) = 0x5914e55b;
  *(undefined8 *)(lStackX_20 + -0x10) = 0xfffffff0;
  *(undefined1 **)(lStackX_20 + -0x18) = puVar5;
  *(ulonglong *)(lStackX_20 + -0x20) =
       (ulonglong)(bVar9 & 1) * 0x4000 | (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar8 & 1) * 0x200 | (ulonglong)(bVar7 & 1) * 0x100 |
       (ulonglong)(*(int *)(lStackX_20 + -8) < 0) * 0x80 |
       (ulonglong)(*(int *)(lStackX_20 + -8) == 0) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*(uint *)(lStackX_20 + -8) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar13 & 1) * 0x200000 | (ulonglong)(bVar12 & 1) * 0x100000 |
       (ulonglong)(bVar11 & 1) * 0x80000 | (ulonglong)(bVar10 & 1) * 0x40000;
  *(undefined8 *)(lStackX_20 + -0x20) = uVar4;
  *(undefined8 *)(lStackX_20 + -0x28) = uVar4;
  *(undefined8 *)(lStackX_20 + -0x30) = uVar4;
  *(undefined8 *)(lStackX_20 + -0x20) = 0x14dadab76;
  *(undefined1 **)(lStackX_20 + -0x28) = &LAB_165c594f1;
  return *(undefined8 *)(lStackX_20 + -0x30);
}



// FUNCTION 14dadaaa0 thunk_FUN_14dadaaa6 body=5 status=ok
// SIG undefined thunk_FUN_14dadaaa6(void)

undefined8 thunk_FUN_14dadaaa6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dadaaa6 FUN_14dadaaa6 body=199 status=ok
// SIG undefined FUN_14dadaaa6(void)

undefined8 FUN_14dadaaa6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dadaed0 FUN_14dadaed0 body=148 status=ok
// SIG undefined FUN_14dadaed0(void)

void FUN_14dadaed0(void)

{
  FUN_156990e2c();
  FUN_14dadaf6d();
  return;
}



// FUNCTION 14dadaf6d FUN_14dadaf6d body=161 status=ok
// SIG undefined FUN_14dadaf6d(void)

void FUN_14dadaf6d(void)

{
  undefined8 local_res10;
  
  FUN_1651affbf(local_res10);
  FUN_14dadb010();
  return;
}



// FUNCTION 14dadb010 FUN_14dadb010 body=475 status=ok
// SIG undefined FUN_14dadb010(void)

/* WARNING: Removing unreachable block (ram,0x00014dadb158) */
/* WARNING: Removing unreachable block (ram,0x00014dadb152) */
/* WARNING: Removing unreachable block (ram,0x00014dadb15d) */
/* WARNING: Removing unreachable block (ram,0x00014dadb0cb) */
/* WARNING: Removing unreachable block (ram,0x000165fc7ffe) */
/* WARNING: Removing unreachable block (ram,0x000165aaec13) */
/* WARNING: Removing unreachable block (ram,0x000165aaec1f) */
/* WARNING: Removing unreachable block (ram,0x000165fc82e7) */
/* WARNING: Removing unreachable block (ram,0x000165fc8086) */
/* WARNING: Removing unreachable block (ram,0x0001650aa0e8) */
/* WARNING: Removing unreachable block (ram,0x0001650aa191) */
/* WARNING: Removing unreachable block (ram,0x0001650aa197) */
/* WARNING: Removing unreachable block (ram,0x0001662e25bb) */
/* WARNING: Removing unreachable block (ram,0x0001662e2615) */
/* WARNING: Removing unreachable block (ram,0x0001662e2625) */
/* WARNING: Removing unreachable block (ram,0x000165fc808c) */
/* WARNING: Removing unreachable block (ram,0x000165fc8119) */
/* WARNING: Removing unreachable block (ram,0x000165fc811e) */
/* WARNING: Removing unreachable block (ram,0x000165aaeb00) */
/* WARNING: Removing unreachable block (ram,0x000165fc8124) */
/* WARNING: Removing unreachable block (ram,0x000165fc81ec) */
/* WARNING: Removing unreachable block (ram,0x000165fc8236) */
/* WARNING: Removing unreachable block (ram,0x000165fc823b) */
/* WARNING: Removing unreachable block (ram,0x0001619c8959) */
/* WARNING: Removing unreachable block (ram,0x0001619c8967) */
/* WARNING: Removing unreachable block (ram,0x000165fc8241) */
/* WARNING: Removing unreachable block (ram,0x0001659cbc2f) */
/* WARNING: Removing unreachable block (ram,0x000165fc82e1) */
/* WARNING: Removing unreachable block (ram,0x000165fc82ec) */
/* WARNING: Removing unreachable block (ram,0x000165fc8326) */
/* WARNING: Removing unreachable block (ram,0x000156926495) */
/* WARNING: Removing unreachable block (ram,0x000165aaeb09) */
/* WARNING: Removing unreachable block (ram,0x000165aaeb0c) */
/* WARNING: Removing unreachable block (ram,0x000165aaeb7e) */
/* WARNING: Removing unreachable block (ram,0x000165aaeb84) */
/* WARNING: Removing unreachable block (ram,0x000165348c9a) */
/* WARNING: Removing unreachable block (ram,0x000161c331ce) */
/* WARNING: Removing unreachable block (ram,0x00014dadb0bb) */

undefined8 FUN_14dadb010(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14def5546();
  return uVar1;
}



// FUNCTION 14dadb1f0 FUN_14dadb1f0 body=97 status=ok
// SIG undefined FUN_14dadb1f0(void)

undefined1
FUN_14dadb1f0(undefined8 param_1,undefined8 param_2,ushort *param_3,undefined8 param_4,
             longlong param_5)

{
  ushort uVar1;
  undefined1 in_AL;
  undefined8 unaff_R12;
  
  uVar1 = *param_3;
  *param_3 = ~*param_3;
  *param_3 = 0xffff;
  *param_3 = ~(uVar1 & *param_3);
                    /* WARNING: Read-only address (ram,0x00014d7a893b) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a893b = in_AL;
  *(undefined8 *)(param_5 + -8) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(undefined1 **)(param_5 + -0x18) = &LAB_14dadb253;
  return 0;
}



// FUNCTION 14dadb2ff FUN_14dadb2ff body=129 status=ok
// SIG undefined FUN_14dadb2ff(void)

void FUN_14dadb2ff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_162e021ba)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dadb4a0 FUN_14dadb4a0 body=133 status=ok
// SIG undefined FUN_14dadb4a0(void)

void FUN_14dadb4a0(void)

{
  longlong in_R9;
  undefined4 local_res8 [8];
  
  *(undefined4 *)((longlong)local_res8 + in_R9) = 0;
  return;
}



// FUNCTION 14dadb527 FUN_14dadb527 body=160 status=ok
// SIG undefined FUN_14dadb527(void)

/* WARNING: Removing unreachable block (ram,0x00014dadb5c8) */
/* WARNING: Removing unreachable block (ram,0x0001571560a6) */

undefined8 FUN_14dadb527(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong lVar2;
  ulonglong unaff_R15;
  byte in_CF;
  
  lVar2 = (unaff_RBP + -0xa090f7c) - (ulonglong)in_CF;
  *(ulonglong *)(&stack0xfffffffff5f6f09c + lVar2 + 0xa090f7c) =
       ~*(ulonglong *)(&stack0xfffffffff5f6f09c + lVar2 + 0xa090f7c);
  *(ulonglong *)(&stack0xfffffffff5f6f09c + lVar2 + 0xa090f7c) =
       *(ulonglong *)(&stack0xfffffffff5f6f09c + lVar2 + 0xa090f7c) | unaff_R15;
  uVar1 = FUN_1571560a6();
  return uVar1;
}



// FUNCTION 14dadb5c8 FUN_14dadb5c8 body=92 status=ok
// SIG undefined FUN_14dadb5c8(void)

undefined8 FUN_14dadb5c8(void)

{
  return 0xffffffffffffffb0;
}



// FUNCTION 14dadb664 FUN_14dadb664 body=314 status=ok
// SIG undefined FUN_14dadb664(void)

/* WARNING: Removing unreachable block (ram,0x00014dadb6f5) */
/* WARNING: Removing unreachable block (ram,0x00014dadb808) */
/* WARNING: Removing unreachable block (ram,0x000166c7c9a5) */
/* WARNING: Removing unreachable block (ram,0x00014dadb814) */

void FUN_14dadb664(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1620b0c79(param_1,(*(ulonglong *)(unaff_RDI + -0x68) - param_1) +
                        (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) * -2 + -2);
  FUN_166966118();
  return;
}



// FUNCTION 14dadb79e FUN_14dadb79e body=259 status=ok
// SIG undefined FUN_14dadb79e(void)

/* WARNING: Removing unreachable block (ram,0x00014dadb814) */

void FUN_14dadb79e(void)

{
  FUN_16527657b();
  return;
}



// FUNCTION 14dadb81a FUN_14dadb81a body=153 status=ok
// SIG undefined FUN_14dadb81a(void)

void FUN_14dadb81a(void)

{
  FUN_166c2355c();
  return;
}



// FUNCTION 14dadbc6e FUN_14dadbc6e body=366 status=ok
// SIG undefined FUN_14dadbc6e(void)

/* WARNING: Removing unreachable block (ram,0x000156ac3d54) */
/* WARNING: Removing unreachable block (ram,0x000156ac3d5f) */
/* WARNING: Removing unreachable block (ram,0x000165290144) */
/* WARNING: Removing unreachable block (ram,0x00016529014a) */
/* WARNING: Removing unreachable block (ram,0x00015b6869dd) */
/* WARNING: Removing unreachable block (ram,0x00015b686a6f) */
/* WARNING: Removing unreachable block (ram,0x00015b686a75) */
/* WARNING: Removing unreachable block (ram,0x000156ac3bb4) */
/* WARNING: Removing unreachable block (ram,0x000156ac3c35) */
/* WARNING: Removing unreachable block (ram,0x000156ac3c3a) */
/* WARNING: Removing unreachable block (ram,0x000156ac3c40) */
/* WARNING: Removing unreachable block (ram,0x000156ac3c45) */
/* WARNING: Removing unreachable block (ram,0x000160de70dd) */
/* WARNING: Removing unreachable block (ram,0x000156ac3cc8) */
/* WARNING: Removing unreachable block (ram,0x000156ac3cce) */
/* WARNING: Removing unreachable block (ram,0x000156ac3cd3) */
/* WARNING: Removing unreachable block (ram,0x000156ac3d4f) */
/* WARNING: Removing unreachable block (ram,0x000156ac3d5a) */
/* WARNING: Removing unreachable block (ram,0x00014dadbd03) */
/* WARNING: Removing unreachable block (ram,0x00014dadbd09) */

undefined8 FUN_14dadbc6e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b6869dd();
  return uVar1;
}



// FUNCTION 14dadbd99 FUN_14dadbd99 body=248 status=ok
// SIG undefined FUN_14dadbd99(void)

void FUN_14dadbd99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong uVar1;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar2;
  ushort unaff_retaddr;
  uint6 unaff_retaddr_00;
  longlong local_res8;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50) + unaff_R15;
  uVar2 = ~(~*(ulonglong *)(unaff_R13 + -0x50) | ~unaff_R15) << 1;
  if ((uVar1 < uVar2) && (uVar2 < uVar1)) {
    *(undefined8 *)(local_res8 + -8) = unaff_RSI;
    *(undefined8 *)(local_res8 + -0x10) = unaff_RSI;
    *(ulonglong *)(local_res8 + -0x18) =
         (ulonglong)((unaff_retaddr & 0x4000) != 0) * 0x4000 |
         (ulonglong)((unaff_retaddr & 0x800) != 0) * 0x800 |
         (ulonglong)((unaff_retaddr & 0x400) != 0) * 0x400 |
         (ulonglong)((unaff_retaddr & 0x200) != 0) * 0x200 |
         (ulonglong)((unaff_retaddr & 0x80) != 0) * 0x80 |
         (ulonglong)((unaff_retaddr & 0x40) != 0) * 0x40 |
         (ulonglong)((unaff_retaddr & 0x10) != 0) * 0x10 | (ulonglong)((unaff_retaddr & 4) != 0) * 4
         | (ulonglong)((unaff_retaddr & 1) != 0) |
         (ulonglong)((unaff_retaddr_00 & 0x20) != 0) * 0x200000 |
         (ulonglong)((unaff_retaddr_00 & 4) != 0) * 0x40000;
    *(undefined8 *)(local_res8 + -0x20) = unaff_R14;
    uVar2 = *(ulonglong *)(local_res8 + -0x18);
    *(undefined8 *)(local_res8 + -0x18) = unaff_RBX;
    *(ulonglong *)(local_res8 + -0x20) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
         (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(local_res8 + -8) = 0x3ff66e8;
    (*(code *)0x1649079f3)();
    return;
  }
  FUN_162d8c234(FUN_162d8c234,param_2,param_3);
  return;
}



// FUNCTION 14dadbf26 FUN_14dadbf26 body=193 status=ok
// SIG undefined FUN_14dadbf26(void)

void FUN_14dadbf26(void)

{
  return;
}



// FUNCTION 14dadc07d FUN_14dadc07d body=145 status=ok
// SIG undefined FUN_14dadc07d(void)

void FUN_14dadc07d(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *(undefined8 *)(in_R10 + param_1 + 0x71bfc89d) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -8) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uStackX_8;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R14;
  *(undefined4 *)(in_stack_00000028 + -0x28) = 0x503afaf0;
  FUN_162f61a1a(&LAB_15b5fac4f);
  return;
}



// FUNCTION 14dadc21e FUN_14dadc21e body=166 status=ok
// SIG undefined FUN_14dadc21e(void)

/* WARNING: Removing unreachable block (ram,0x0001613a3b32) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b38) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b46) */
/* WARNING: Removing unreachable block (ram,0x00014dadc2b9) */
/* WARNING: Removing unreachable block (ram,0x00014dadc2bf) */
/* WARNING: Removing unreachable block (ram,0x00014dadc2c4) */
/* WARNING: Removing unreachable block (ram,0x00014dadc334) */
/* WARNING: Removing unreachable block (ram,0x00014dadc33a) */
/* WARNING: Removing unreachable block (ram,0x00014dadc33e) */
/* WARNING: Removing unreachable block (ram,0x00014dadc34a) */
/* WARNING: Removing unreachable block (ram,0x00014dadc34f) */
/* WARNING: Removing unreachable block (ram,0x00014dadc355) */
/* WARNING: Removing unreachable block (ram,0x000156ef98ff) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a49) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a4e) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a54) */
/* WARNING: Removing unreachable block (ram,0x0001613a3aaa) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b2d) */
/* WARNING: Removing unreachable block (ram,0x000161765823) */

undefined8 FUN_14dadc21e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162e725da(*(ulonglong *)((param_2 + -1) - ~unaff_RSI) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4,
                *(undefined8 *)(unaff_R13 + -0x70));
  uVar1 = FUN_161654358();
  return uVar1;
}



// FUNCTION 14dadc2c4 FUN_14dadc2c4 body=264 status=ok
// SIG undefined FUN_14dadc2c4(void)

/* WARNING: Removing unreachable block (ram,0x0001613a3b32) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b38) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b46) */
/* WARNING: Removing unreachable block (ram,0x00014dadc34f) */
/* WARNING: Removing unreachable block (ram,0x00014dadc355) */
/* WARNING: Removing unreachable block (ram,0x000156ef98ff) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a49) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a4e) */
/* WARNING: Removing unreachable block (ram,0x000156ef9a54) */
/* WARNING: Removing unreachable block (ram,0x0001613a3aaa) */
/* WARNING: Removing unreachable block (ram,0x0001613a3b2d) */
/* WARNING: Removing unreachable block (ram,0x000161765823) */

undefined8 FUN_14dadc2c4(void)

{
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_156ef98ff(0x14dadc334,*(undefined8 *)(unaff_R12 + -0x28));
  return uVar1;
}



// FUNCTION 14dadc3cf FUN_14dadc3cf body=458 status=ok
// SIG undefined FUN_14dadc3cf(void)

void FUN_14dadc3cf(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *unaff_RBP;
  ulonglong *puVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = unaff_RBP + 1;
  uVar6 = *(ulonglong *)(unaff_RDI + (unaff_RSI ^ 0x29ab5ae7));
  *puVar1 = 0x7e3123e4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xffffffff81cedc1b;
  *puVar1 = ~(~(uVar2 & 0xffffffff81cedc1b) & *puVar1);
  *puVar1 = *puVar1 ^ uVar6;
  uVar6 = *puVar1;
  *unaff_RBP = uVar6;
  *(undefined4 *)unaff_RBP = 0x36b29230;
  *(undefined4 *)((longlong)unaff_RBP + 4) = 0;
  puVar1 = (ulonglong *)((longlong)puVar1 + (0x815505 - (*unaff_RBP ^ 0x3633c6cd)));
  puVar1[-1] = param_1;
  uVar6 = ~uVar6;
  uVar7 = uVar6 & param_1;
  puVar8 = (ulonglong *)~((uVar6 + param_1) - uVar7);
  puVar1[-1] = 0x14dadc478;
  FUN_165138c6c();
  uVar6 = *puVar1;
  uVar2 = *puVar1;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar9 = 0x20c51c8;
  *puVar1 = 0x14dadc50b;
  FUN_162e733fd((~unaff_R15 | uVar2) + unaff_R15 + 1,uVar7 + uVar6,0x20c51c8,
                ~((~unaff_R15 | uVar3) & (~uVar3 | unaff_R15)));
  lVar4 = *(longlong *)(unaff_R13 + -0x50);
  *puVar8 = 0;
  *puVar8 = *puVar8 + lVar4;
  puVar8[-1] = (ulonglong)FUN_162e733fd;
  uVar5 = puVar8[1];
  puVar8[1] = uVar9;
  *puVar8 = ~(~uVar2 & ~unaff_R15);
  *(undefined4 *)(puVar8 + -1) = 0x286fbdb6;
  *(undefined4 *)((longlong)puVar8 + -4) = 0;
  puVar8[-1] = unaff_R12;
  FUN_14dcef9ed(uVar5);
  return;
}



// FUNCTION 14dadc59b FUN_14dadc59b body=282 status=ok
// SIG undefined FUN_14dadc59b(void)

/* WARNING: Instruction at (ram,0x00014dadc66d) overlaps instruction at (ram,0x00014dadc66c)
    */
/* WARNING: Removing unreachable block (ram,0x00014dadc66c) */

undefined8 FUN_14dadc59b(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  bool in_ZF;
  
  if (!in_ZF) {
    return in_RAX;
  }
  uVar2 = FUN_164898678();
  uVar1 = *param_1;
  *param_1 = *param_1 | 0xffffffff9da1519c;
  *param_1 = ~(~(uVar1 & 0xffffffff9da1519c) & *param_1);
  return uVar2;
}



// FUNCTION 14dadc75a FUN_14dadc75a body=147 status=ok
// SIG undefined FUN_14dadc75a(void)

void FUN_14dadc75a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_20;
  
  (*(code *)&LAB_161943e2f)(param_1,param_2,uStackX_20);
  return;
}



// FUNCTION 14dadc9d4 FUN_14dadc9d4 body=181 status=ok
// SIG undefined FUN_14dadc9d4(void)

undefined8 FUN_14dadc9d4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dadcd2a FUN_14dadcd2a body=347 status=ok
// SIG undefined FUN_14dadcd2a(void)

void FUN_14dadcd2a(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  
  FUN_1618c69fa(param_1,param_2,param_3);
  FUN_165fb31dc(param_1,~param_2 & unaff_RSI);
  return;
}



// FUNCTION 14dadcfb5 FUN_14dadcfb5 body=284 status=ok
// SIG undefined FUN_14dadcfb5(void)

void FUN_14dadcfb5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164ae6bee();
  thunk_FUN_15b642ca5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dadd2c6 FUN_14dadd2c6 body=153 status=ok
// SIG undefined FUN_14dadd2c6(void)

/* WARNING: Removing unreachable block (ram,0x0001652effc2) */
/* WARNING: Removing unreachable block (ram,0x0001652effcd) */
/* WARNING: Removing unreachable block (ram,0x0001652f0030) */
/* WARNING: Removing unreachable block (ram,0x00014dadd355) */
/* WARNING: Removing unreachable block (ram,0x00014dadd35b) */
/* WARNING: Removing unreachable block (ram,0x00014dadd2d4) */
/* WARNING: Removing unreachable block (ram,0x0001652efe9c) */
/* WARNING: Removing unreachable block (ram,0x0001652eff33) */
/* WARNING: Removing unreachable block (ram,0x0001652eff3e) */
/* WARNING: Removing unreachable block (ram,0x0001652eff42) */
/* WARNING: Removing unreachable block (ram,0x0001652effbd) */
/* WARNING: Removing unreachable block (ram,0x0001652eff39) */
/* WARNING: Removing unreachable block (ram,0x000156a3e2f7) */
/* WARNING: Removing unreachable block (ram,0x0001652effc8) */

void FUN_14dadd2c6(void)

{
  FUN_1652efe9c();
  return;
}



// FUNCTION 14dadd361 FUN_14dadd361 body=159 status=ok
// SIG undefined FUN_14dadd361(void)

/* WARNING: Removing unreachable block (ram,0x00014dadd484) */
/* WARNING: Removing unreachable block (ram,0x00014dadd48a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dadd361(int param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_stack_00000020;
  
  *(int *)(unaff_RBP + 0x140) =
       *(int *)(unaff_RBP +
               (~(~(in_RAX & 0xffffffffa15ef836) & (unaff_RSI | 0xffffffffa15ef836)) ^ 0x3c6fb91e))
       - param_1;
  FUN_16155fbdb();
  uVar1 = FUN_166718f50(in_stack_00000020,
                        _DAT_ffffffffffffff98 + in_stack_00000020 +
                        (_DAT_ffffffffffffff98 & in_stack_00000020) * -2,
                        _DAT_ffffffffffffff90 ^ in_stack_00000020,
                        _DAT_ffffffffffffffa0 ^ in_stack_00000020);
  return uVar1;
}



// FUNCTION 14dadd402 FUN_14dadd402 body=152 status=ok
// SIG undefined FUN_14dadd402(void)

/* WARNING: Removing unreachable block (ram,0x00014dadd484) */
/* WARNING: Removing unreachable block (ram,0x00014dadd48a) */

undefined8 FUN_14dadd402(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_166718f50(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,
                        *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar1;
}



// FUNCTION 14dadd617 FUN_14dadd617 body=154 status=ok
// SIG undefined FUN_14dadd617(void)

/* WARNING: Removing unreachable block (ram,0x00014dadd690) */
/* WARNING: Removing unreachable block (ram,0x00014dadd69c) */
/* WARNING: Removing unreachable block (ram,0x00014dadd6a7) */
/* WARNING: Removing unreachable block (ram,0x00014dadd6ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dadd617(void)

{
  undefined4 local_res18;
  
  FUN_16634cd30(0x373c35aa,local_res18 << 6 | local_res18 >> 0x1a);
  return;
}



// FUNCTION 14dadd6b3 FUN_14dadd6b3 body=143 status=ok
// SIG undefined FUN_14dadd6b3(void)

void FUN_14dadd6b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_1657c4e4a)(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dadd74a FUN_14dadd74a body=59 status=ok
// SIG undefined FUN_14dadd74a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dadd74a(void)

{
  return;
}



// FUNCTION 14dadd7cc FUN_14dadd7cc body=126 status=ok
// SIG undefined FUN_14dadd7cc(void)

void FUN_14dadd7cc(char param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong in_stack_00000008;
  undefined8 uStackX_10;
  char cStackX_20;
  longlong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(in_stack_00000008 + 0x20);
  *(ulonglong *)(in_stack_00000008 + 0x20) =
       *(ulonglong *)(in_stack_00000008 + 0x20) ^ 0xffffffffffffffff;
  uVar2 = *(ulonglong *)(in_stack_00000008 + 0x20);
  *(ulonglong *)(in_stack_00000008 + 0x20) = ~*(ulonglong *)(in_stack_00000008 + 0x20);
  *(ulonglong *)(in_stack_00000008 + 0x20) =
       (~(uVar2 & in_RAX) + in_RAX) - *(longlong *)(in_stack_00000008 + 0x20);
  *(ulonglong *)(in_stack_00000008 + 0x20) =
       ~(~(in_RAX & ~uVar1) & *(ulonglong *)(in_stack_00000008 + 0x20));
  LOCK();
  cVar3 = param_1;
  if (cStackX_20 != DAT_14d7a92de) {
    cVar3 = DAT_14d7a92de;
  }
  DAT_14d7a92de = cVar3;
  UNLOCK();
  *(undefined8 *)(in_stack_00000030 + -8) = 0x183f22a;
  FUN_14d85d504(param_1,param_2,uStackX_10);
  return;
}



// FUNCTION 14dadd866 FUN_14dadd866 body=184 status=ok
// SIG undefined FUN_14dadd866(void)

undefined8 FUN_14dadd866(void)

{
  return 0x506930dc;
}



// FUNCTION 14dadd91f FUN_14dadd91f body=96 status=ok
// SIG undefined FUN_14dadd91f(void)

void FUN_14dadd91f(void)

{
  code *pcVar1;
  undefined8 unaff_RBP;
  short *unaff_RSI;
  undefined8 in_R9;
  short unaff_R12W;
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
  ulonglong uStackX_20;
  undefined8 *in_stack_00000028;
  
  *unaff_RSI = unaff_R12W + 1;
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
  (*pcVar1)();
  *in_stack_00000028 = in_R9;
  in_stack_00000028[-1] = in_R9;
  in_stack_00000028[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *in_stack_00000028 = 0xb18492;
  in_stack_00000028[-1] = unaff_RBP;
  in_stack_00000028[-2] = unaff_RBP;
  in_stack_00000028[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14dadd9b6 FUN_14dadd9b6 body=123 status=ok
// SIG undefined FUN_14dadd9b6(void)

void FUN_14dadd9b6(void)

{
  return;
}



// FUNCTION 14dadda55 FUN_14dadda55 body=295 status=ok
// SIG undefined FUN_14dadda55(void)

/* WARNING: Removing unreachable block (ram,0x000160bdc362) */
/* WARNING: Removing unreachable block (ram,0x00014daddc06) */
/* WARNING: Removing unreachable block (ram,0x00014daddc0c) */
/* WARNING: Removing unreachable block (ram,0x000160bdc35c) */

void FUN_14dadda55(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  code *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  short unaff_R14W;
  
  uVar16 = CONCAT62(0xffffffffffff,(short)unaff_RDI + 0x3c8b + unaff_R14W);
  puVar11 = &DAT_ac91427a73ca2b2b;
  puVar14 = &DAT_ac91427a73ca2b2b +
            (*(ulonglong *)(unaff_RDI + -0x78) & 0xac91427a73ca2b2b) * -2 +
            *(ulonglong *)(unaff_RDI + -0x78);
  uVar3 = *(ulonglong *)(unaff_RDI + -0x58);
  puVar15 = &DAT_ac91427a73ca2b2b + uVar3;
  pcVar13 = FUN_156d6a4dc;
  lVar10 = FUN_156d6a4dc();
  lVar12 = (~(param_2 | (ulonglong)puVar11) | param_2 & (ulonglong)puVar11 ^ 0xffffffffffffffff) +
           (param_2 | (ulonglong)puVar11) + 1;
  plVar1 = unaff_RSI + -1;
  *plVar1 = lVar10;
  *(undefined4 *)plVar1 = 0xcb5262e8;
  *(undefined4 *)((longlong)unaff_RSI + -4) = 0xffffffff;
  uVar4 = *(ulonglong *)(unaff_RDI + *plVar1 + 0x34ad9cd0);
  unaff_RSI[-1] = uVar3;
  unaff_RSI[-2] = unaff_RDI;
  lVar10 = unaff_RSI[-1];
  unaff_RSI[-1] =
       ~(((uVar4 - 1) - (longlong)puVar11) - (~(ulonglong)puVar11 & uVar4) &
        (uVar4 ^ 0xffffffffffffffff | (ulonglong)puVar11));
  unaff_RSI[-2] = FUN_14daddb7c;
  FUN_1657162e8();
  uVar4 = *(ulonglong *)(lVar10 + -0x68);
  uVar7 = unaff_RSI[-1];
  uVar8 = *unaff_RSI;
  *unaff_RSI = puVar11;
  uVar9 = *unaff_RSI;
  *unaff_RSI = pcVar13;
  uVar5 = *unaff_RSI;
  *unaff_RSI = uVar16;
  unaff_RSI[-1] = uVar16;
  unaff_RSI[-2] = ~(uVar4 & (ulonglong)puVar14) & (uVar4 | (ulonglong)puVar14);
  uVar16 = *(undefined8 *)(lVar10 + -0x70);
  uVar6 = unaff_RSI[-2];
  unaff_RSI[-2] = lVar10;
  *unaff_RSI = uVar16;
  unaff_RSI[-1] = *(undefined8 *)(unaff_RSI[-2] + -8);
  unaff_RSI[-2] = *(undefined8 *)(unaff_RSI[-2] + -0x98);
  unaff_RSI[-3] = uVar8;
  unaff_RSI[-4] = uVar7;
  uVar16 = unaff_RSI[-3];
  unaff_RSI[-3] = uVar5;
  unaff_RSI[-4] = unaff_RSI[-4];
  puVar2 = unaff_RSI + -2;
  unaff_RSI[-5] = param_3;
  uVar4 = *puVar2;
  uVar7 = unaff_RSI[-5];
  *puVar2 = -*puVar2;
  *puVar2 = *puVar2 - 1;
  *puVar2 = *puVar2 | (ulonglong)puVar14;
  *puVar2 = ~(~(0xffffffffffffffff - ~(ulonglong)puVar14 & ~uVar4) & *puVar2);
  uVar5 = unaff_RSI[-3];
  unaff_RSI[-3] = puVar15;
  uVar4 = unaff_RSI[-1];
  unaff_RSI[-1] = unaff_RSI[-1] & (ulonglong)puVar14;
  unaff_RSI[-1] = ~unaff_RSI[-1];
  unaff_RSI[-1] = unaff_RSI[-1] & (uVar4 | (ulonglong)puVar14);
  unaff_RSI[-3] = uVar3 & 0xac91427a73ca2b2b;
  unaff_RSI[-4] = uVar6;
  unaff_RSI[-5] = uVar16;
  unaff_RSI[-4] = lVar12;
  uVar16 = unaff_RSI[-4];
  unaff_RSI[-4] = unaff_RSI[-5];
  unaff_RSI[-5] = uVar9;
  FUN_14dbd6a5c(FUN_14dbd6a5c,uVar16,uVar7,uVar5);
  return;
}



// FUNCTION 14daddb7c FUN_14daddb7c body=296 status=ok
// SIG undefined FUN_14daddb7c(void)

/* WARNING: Removing unreachable block (ram,0x000160bdc362) */
/* WARNING: Removing unreachable block (ram,0x00014daddc06) */
/* WARNING: Removing unreachable block (ram,0x00014daddc0c) */
/* WARNING: Removing unreachable block (ram,0x000160bdc35c) */

void FUN_14daddb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_14dbd6a5c(FUN_14dbd6a5c,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14daddc0c FUN_14daddc0c body=3 status=ok
// SIG undefined FUN_14daddc0c(void)

void FUN_14daddc0c(void)

{
  return;
}



// FUNCTION 14daddcb7 FUN_14daddcb7 body=162 status=ok
// SIG undefined FUN_14daddcb7(void)

/* WARNING: Removing unreachable block (ram,0x000156b9bd7e) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd89) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd84) */
/* WARNING: Removing unreachable block (ram,0x00014dadde74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daddcb7(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RSI + -0x80);
  FUN_156600ec0(param_1,param_2,unaff_retaddr);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15;
  FUN_161306bd0((uVar2 ^ unaff_RBP) + unaff_RSI + (param_1 & unaff_R15) * -2,
                ~((~uVar1 & ~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  if (0xffffffffffffefa1 < uVar3 - 0x1086) {
    FUN_162668f7b(*(ulonglong *)(uVar3 - 0x38) ^ 0x40,FUN_162668f7b);
    *(undefined8 *)(unaff_R12 + -8) = 0x15c76e;
    FUN_156c79161();
    return;
  }
  FUN_156b9bceb();
  return;
}



// FUNCTION 14daddd59 FUN_14daddd59 body=281 status=ok
// SIG undefined FUN_14daddd59(void)

/* WARNING: Removing unreachable block (ram,0x000156b9bd7e) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd89) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd84) */
/* WARNING: Removing unreachable block (ram,0x00014dadde74) */

void FUN_14daddd59(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15;
  FUN_161306bd0(unaff_RDI + unaff_RSI + (param_1 & unaff_R15) * -2,
                ~((~uVar1 & ~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  if (0xffffffffffffefa1 < uVar2 - 0x1086) {
    FUN_162668f7b(*(ulonglong *)(uVar2 - 0x38) ^ 0x40);
    *(undefined8 *)(in_stack_00000010 + -8) = 0x15c76e;
    FUN_156c79161();
    return;
  }
  FUN_156b9bceb();
  return;
}



// FUNCTION 14dadde74 FUN_14dadde74 body=162 status=ok
// SIG undefined FUN_14dadde74(void)

void FUN_14dadde74(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R13;
  undefined8 unaff_R15;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(unaff_R13 + 8) = (~in_R10 | *(ulonglong *)(unaff_R13 + 8)) + in_R10 + 1;
  uVar1 = ~((~param_1 | in_stack_00000030) & (~in_stack_00000030 | param_1));
  *(undefined8 *)(uVar1 - 8) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined8 *)(uVar1 - 0x28) = param_2;
  *(undefined8 *)(uVar1 - 0x30) = param_2;
  *(undefined **)(uVar1 - 0x20) = &DAT_14daddf18;
  *(undefined8 *)(uVar1 - 0x28) = 0x161861c55;
  return;
}



// FUNCTION 14daddf8b FUN_14daddf8b body=434 status=ok
// SIG undefined FUN_14daddf8b(void)

/* WARNING: Removing unreachable block (ram,0x00014dade038) */
/* WARNING: Removing unreachable block (ram,0x00014dade0da) */
/* WARNING: Removing unreachable block (ram,0x000156a4e262) */
/* WARNING: Removing unreachable block (ram,0x00014dade0e6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daddf8b(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
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
  ulonglong local_res10;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar18 = local_res8 ^ param_1;
  puVar1 = (undefined8 *)(local_res10 ^ param_1);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_16494ed14();
    return;
  }
  local_res8._0_2_ = (ushort)uVar18;
  local_res8._0_2_ = (-0x101 - ((ushort)local_res8 | 0xfeff)) + (ushort)local_res8;
  bVar13 = ((ushort)local_res8 & 0x4000) != 0;
  bVar12 = ((ushort)local_res8 & 0x800) != 0;
  bVar11 = ((ushort)local_res8 & 0x200) != 0;
  bVar10 = ((ushort)local_res8 & 0x100) != 0;
  bVar9 = ((ushort)local_res8 & 0x80) != 0;
  bVar8 = ((ushort)local_res8 & 0x40) != 0;
  bVar7 = ((ushort)local_res8 & 0x10) != 0;
  bVar6 = ((ushort)local_res8 & 4) != 0;
  bVar5 = ((ushort)local_res8 & 1) != 0;
  bVar17 = (uVar18 & 0x200000) != 0;
  bVar14 = (uVar18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  uVar4 = (*pcVar3)(~(*(ulonglong *)(unaff_RDI + -0x98) & param_1) &
                    (*(ulonglong *)(unaff_RDI + -0x98) | param_1));
  *puVar1 = param_2;
  puVar1[-1] = param_2;
  puVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)(((ushort)local_res8 & 0x400) != 0) * 0x400 |
               (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100 |
               (ulonglong)(bVar9 & 1) * 0x80 | (ulonglong)(bVar8 & 1) * 0x40 |
               (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  uVar18 = puVar1[-2];
  puVar1[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  uVar18 = puVar1[-2];
  puVar1[-2] = uVar2 ^ param_1;
  puVar1[-3] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  puVar1[-4] = uVar4;
  *(undefined4 *)(puVar1 + -4) = 0xbee36c8b;
  *(undefined4 *)((longlong)puVar1 - 0x1c) = 0xffffffff;
  FUN_15723ed4a();
  return;
}



// FUNCTION 14dade18b FUN_14dade18b body=155 status=ok
// SIG undefined FUN_14dade18b(void)

void FUN_14dade18b(ulonglong param_1,ulonglong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  undefined8 in_R10;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8 [4];
  
  lVar1 = in_RAX - (unaff_R14 ^ 0x2bb44f4e);
  *(undefined8 *)((longlong)local_res8 + lVar1) = in_R10;
  *(undefined8 *)((longlong)local_res8 + lVar1) = unaff_R15;
  *(undefined8 *)((longlong)local_res8 + lVar1 + -8) = unaff_R15;
  *(code **)((longlong)local_res8 + lVar1) = FUN_14dade226;
  FUN_16690dba5(param_1,~((~param_1 | param_2) & (~param_2 + param_1) - (~param_2 & param_1)));
  return;
}



// FUNCTION 14dade226 FUN_14dade226 body=122 status=ok
// SIG undefined FUN_14dade226(void)

void FUN_14dade226(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = *(ulonglong *)(param_3 + 0x10) | ~in_RAX;
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  FUN_14dde204b(param_1,param_2,unaff_retaddr,local_res8);
  return;
}



// FUNCTION 14dade2a0 thunk_FUN_14dade2a6 body=5 status=ok
// SIG undefined thunk_FUN_14dade2a6(void)

void thunk_FUN_14dade2a6(void)

{
  FUN_15b6ae857();
  return;
}



// FUNCTION 14dade2a6 FUN_14dade2a6 body=264 status=ok
// SIG undefined FUN_14dade2a6(void)

void FUN_14dade2a6(void)

{
  FUN_15b6ae857();
  return;
}



// FUNCTION 14dade3b3 FUN_14dade3b3 body=155 status=ok
// SIG undefined FUN_14dade3b3(void)

void FUN_14dade3b3(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  FUN_165e321a3(~((~(~unaff_R14 | unaff_RBP) | param_1) + (~unaff_R14 | unaff_RBP) + 1),
                unaff_retaddr,param_3,unaff_R12);
  return;
}



// FUNCTION 14dade44e FUN_14dade44e body=139 status=ok
// SIG undefined FUN_14dade44e(void)

void FUN_14dade44e(undefined8 param_1)

{
  FUN_15b4c3479(param_1,0x68198002);
  return;
}



// FUNCTION 14dade556 FUN_14dade556 body=165 status=ok
// SIG undefined FUN_14dade556(void)

/* WARNING: Removing unreachable block (ram,0x00014dade5f5) */
/* WARNING: Removing unreachable block (ram,0x00014dade5fb) */
/* WARNING: Removing unreachable block (ram,0x000161261ad4) */

void FUN_14dade556(void)

{
  FUN_161261ad4();
  return;
}



// FUNCTION 14dade5fb FUN_14dade5fb body=117 status=ok
// SIG undefined FUN_14dade5fb(void)

void FUN_14dade5fb(undefined8 param_1)

{
  FUN_162e08980(param_1);
  return;
}



// FUNCTION 14dade709 FUN_14dade709 body=93 status=ok
// SIG undefined FUN_14dade709(void)

void FUN_14dade709(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14dade8da FUN_14dade8da body=167 status=ok
// SIG undefined FUN_14dade8da(void)

/* WARNING: Removing unreachable block (ram,0x00014dade947) */

undefined8 FUN_14dade8da(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dadea34 FUN_14dadea34 body=141 status=ok
// SIG undefined FUN_14dadea34(void)

ulonglong FUN_14dadea34(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  return in_RAX & unaff_RSI;
}



// FUNCTION 14dadeb61 FUN_14dadeb61 body=308 status=ok
// SIG undefined FUN_14dadeb61(void)

/* WARNING: Removing unreachable block (ram,0x00014dadec03) */

undefined8
FUN_14dadeb61(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b88abd1(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dadec03 FUN_14dadec03 body=83 status=ok
// SIG undefined FUN_14dadec03(void)

undefined1 FUN_14dadec03(void)

{
  ulonglong uVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar1 = local_res18 & unaff_R13;
  LOCK();
  uVar2 = FUN_14d7bc960;
  UNLOCK();
  FUN_14d7bc960 = in_AL;
  *(undefined8 *)(uVar1 - 8) = 0x12352;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(undefined8 *)(uVar1 - 0x10) = FUN_1629c9909;
  return uVar2;
}



// FUNCTION 14dadecaf FUN_14dadecaf body=505 status=ok
// SIG undefined FUN_14dadecaf(void)

/* WARNING: Removing unreachable block (ram,0x00014daded5c) */
/* WARNING: Removing unreachable block (ram,0x00014dadedeb) */
/* WARNING: Removing unreachable block (ram,0x00014dadedf6) */
/* WARNING: Removing unreachable block (ram,0x00014dadedfc) */
/* WARNING: Removing unreachable block (ram,0x00014dadee01) */

void FUN_14dadecaf(undefined8 param_1,undefined8 param_2)

{
  FUN_1574be68a(param_1,param_2);
  FUN_15667c8d8();
  return;
}



// FUNCTION 14dadeeb2 FUN_14dadeeb2 body=161 status=ok
// SIG undefined FUN_14dadeeb2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dadef2d) */
/* WARNING: Removing unreachable block (ram,0x00014dadef3e) */
/* WARNING: Removing unreachable block (ram,0x00014dadef49) */
/* WARNING: Removing unreachable block (ram,0x00014dadeee7) */

undefined8 FUN_14dadeeb2(undefined8 param_1)

{
  undefined8 in_RAX;
  longlong lVar1;
  uint unaff_R12D;
  undefined8 unaff_R14;
  uint unaff_R15D;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((unaff_R15D & unaff_R12D) != 0) {
    lVar1 = FUN_165f65e93(param_1,0xe0de41c);
    *(undefined8 *)((longlong)&stack0x00000030 + lVar1) = unaff_R14;
    return in_stack_00000028;
  }
  return in_RAX;
}



// FUNCTION 14dadef55 FUN_14dadef55 body=139 status=ok
// SIG undefined FUN_14dadef55(void)

undefined8 FUN_14dadef55(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16643caa9();
  return uVar1;
}



// FUNCTION 14dadefe1 FUN_14dadefe1 body=109 status=ok
// SIG undefined FUN_14dadefe1(void)

undefined8 FUN_14dadefe1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dadf07b FUN_14dadf07b body=64 status=ok
// SIG undefined FUN_14dadf07b(void)

void FUN_14dadf07b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool in_CF;
  
  lVar1 = 0x13a4;
  if (in_CF) {
    lVar1 = 0x13a5;
  }
  UNRECOVERED_JUMPTABLE = (code *)(param_3 + lVar1 + -0xf1137e2);
                    /* WARNING: Could not recover jumptable at 0x00014dadf0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0xabc,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 14dadf0bb FUN_14dadf0bb body=108 status=ok
// SIG undefined FUN_14dadf0bb(void)

/* WARNING: Removing unreachable block (ram,0x00014dadf11c) */
/* WARNING: Removing unreachable block (ram,0x00014dadf122) */
/* WARNING: Removing unreachable block (ram,0x00014dadf127) */
/* WARNING: Removing unreachable block (ram,0x000165dcee9a) */
/* WARNING: Removing unreachable block (ram,0x00014dadf1c4) */
/* WARNING: Removing unreachable block (ram,0x00014dadf1ca) */
/* WARNING: Removing unreachable block (ram,0x00014dadf1cf) */
/* WARNING: Removing unreachable block (ram,0x00014dadf258) */
/* WARNING: Removing unreachable block (ram,0x00014dadf25a) */
/* WARNING: Removing unreachable block (ram,0x00014d833ddf) */
/* WARNING: Removing unreachable block (ram,0x000156d9a5a4) */
/* WARNING: Removing unreachable block (ram,0x000165cb7fa1) */

void FUN_14dadf0bb(void)

{
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong uStackX_10;
  
  if (&DAT_fffffffffffffff7 >= &stack0xffffffffffffffe8) {
    FUN_156d9a55d(&DAT_15a3d44a2,
                  CONCAT71((int7)((ulonglong)ProcessEnvironmentBlock >> 8),
                           *(undefined1 *)((longlong)ProcessEnvironmentBlock + 0x5c)));
    return;
  }
  if (&DAT_fffffffffffffff7 < &stack0xffffffffffffffe8 || &stack0x00000000 == &DAT_00000010) {
    return;
  }
  if (CONCAT62((int6)((ulonglong)in_R10 >> 0x10),(short)in_R10 + 0x4143) == 0) {
    FUN_165cb7ef7();
    return;
  }
  if (-1 < *(longlong *)(unaff_R13 + -0x60)) {
    FUN_156e07bad(uStackX_10 & 0x15a3d44a2,*(undefined8 *)(unaff_R13 + -0x90));
    return;
  }
  FUN_156e07bad(uStackX_10 & 0x15a3d44a2,*(undefined8 *)(unaff_R13 + -0x90));
  return;
}



// FUNCTION 14dadf127 FUN_14dadf127 body=334 status=ok
// SIG undefined FUN_14dadf127(void)

/* WARNING: Removing unreachable block (ram,0x00014dadf1c4) */
/* WARNING: Removing unreachable block (ram,0x00014dadf1ca) */
/* WARNING: Removing unreachable block (ram,0x00014dadf1cf) */
/* WARNING: Removing unreachable block (ram,0x00014dadf258) */
/* WARNING: Removing unreachable block (ram,0x00014dadf25a) */

void FUN_14dadf127(void)

{
  (*(code *)0x15b9a2bcb)();
  return;
}



// FUNCTION 14dadf431 FUN_14dadf431 body=426 status=ok
// SIG undefined FUN_14dadf431(void)

/* WARNING: Removing unreachable block (ram,0x00014dadf4cd) */
/* WARNING: Removing unreachable block (ram,0x00014dadf4d8) */
/* WARNING: Removing unreachable block (ram,0x00014dadf4c7) */
/* WARNING: Removing unreachable block (ram,0x00014db07dd5) */
/* WARNING: Removing unreachable block (ram,0x00014dadf4d3) */

void FUN_14dadf431(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x14daf7466)
            (~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
             ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX
             ,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dadf56f FUN_14dadf56f body=142 status=ok
// SIG undefined FUN_14dadf56f(void)

void FUN_14dadf56f(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  FUN_14dc4a398(param_1,param_2,0x7798 - (~(0x7b65U - (1 - (param_3 + -0x5cffafe7))) + 2),param_4);
  FUN_14d7a54ec();
  return;
}



// FUNCTION 14dadf5ff thunk_FUN_14dadf605 body=5 status=ok
// SIG undefined thunk_FUN_14dadf605(void)

void thunk_FUN_14dadf605(void)

{
  FUN_14d7a54ec();
  return;
}



// FUNCTION 14dadf605 FUN_14dadf605 body=22 status=ok
// SIG undefined FUN_14dadf605(void)

void FUN_14dadf605(void)

{
  FUN_14d7a54ec();
  return;
}



// FUNCTION 14dadf7d4 FUN_14dadf7d4 body=228 status=ok
// SIG undefined FUN_14dadf7d4(void)

void FUN_14dadf7d4(void)

{
  FUN_157278118();
  FUN_165c7153c();
  return;
}



// FUNCTION 14dadf8c2 FUN_14dadf8c2 body=46 status=ok
// SIG undefined FUN_14dadf8c2(void)

void FUN_14dadf8c2(longlong param_1)

{
  FUN_162f63994(param_1 + 2);
  FUN_14dadf8f1();
  return;
}



// FUNCTION 14dadf8f1 FUN_14dadf8f1 body=129 status=ok
// SIG undefined FUN_14dadf8f1(void)

void FUN_14dadf8f1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  
  FUN_164a6fcc2(FUN_164a6fcc2,unaff_RSI + 1,param_3,param_4);
  return;
}



// FUNCTION 14dadf974 FUN_14dadf974 body=511 status=ok
// SIG undefined FUN_14dadf974(void)

/* WARNING: Removing unreachable block (ram,0x00014dadf9c8) */

void FUN_14dadf974(void)

{
  FUN_14de72675(0xf5f0000);
  FUN_165f395a5();
  return;
}



// FUNCTION 14dadfc0c FUN_14dadfc0c body=183 status=ok
// SIG undefined FUN_14dadfc0c(void)

/* WARNING: Removing unreachable block (ram,0x00014dadfcb0) */

void FUN_14dadfc0c(void)

{
  return;
}



// FUNCTION 14dadfd5e thunk_FUN_14dadfd64 body=5 status=ok
// SIG undefined thunk_FUN_14dadfd64(void)

void thunk_FUN_14dadfd64(void)

{
  ulonglong in_RAX;
  ulonglong in_R11;
  longlong unaff_R12;
  
  (*(code *)0x165d20cac)
            (0x165d20cac,0xffffffffca3a58ff,
             ~((~(~in_RAX & in_R11) + in_R11) - in_RAX & (~in_R11 | in_RAX)),
             ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
              (~in_RAX & ~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14dadfd64 FUN_14dadfd64 body=140 status=ok
// SIG undefined FUN_14dadfd64(void)

void FUN_14dadfd64(void)

{
  ulonglong in_RAX;
  ulonglong in_R11;
  longlong unaff_R12;
  
  (*(code *)0x165d20cac)
            (0x165d20cac,0xffffffffca3a58ff,
             ~((~(~in_RAX & in_R11) + in_R11) - in_RAX & (~in_R11 | in_RAX)),
             ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
              (~in_RAX & ~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14dadffdf FUN_14dadffdf body=158 status=ok
// SIG undefined FUN_14dadffdf(void)

/* WARNING: Removing unreachable block (ram,0x00014dae0075) */

void FUN_14dadffdf(void)

{
  return;
}



// FUNCTION 14dae0075 FUN_14dae0075 body=159 status=ok
// SIG undefined FUN_14dae0075(void)

void FUN_14dae0075(void)

{
  FUN_160c3b987();
  return;
}



// FUNCTION 14dae0117 FUN_14dae0117 body=497 status=ok
// SIG undefined FUN_14dae0117(void)

/* WARNING: Removing unreachable block (ram,0x00014dae01b0) */
/* WARNING: Removing unreachable block (ram,0x00014dae0227) */
/* WARNING: Removing unreachable block (ram,0x00014dae022c) */
/* WARNING: Removing unreachable block (ram,0x00014dae0232) */
/* WARNING: Removing unreachable block (ram,0x00014dae0237) */

void FUN_14dae0117(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 unaff_RDI;
  longlong unaff_retaddr;
  undefined8 in_stack_00000008;
  longlong lStackX_20;
  
  puVar2 = (undefined8 *)(unaff_retaddr - lStackX_20);
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(in_stack_00000008,param_2,param_3);
  *puVar2 = 0x3622a46;
  puVar2[-1] = unaff_RDI;
  puVar2[-2] = unaff_RDI;
  puVar2[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14dae02cf FUN_14dae02cf body=82 status=ok
// SIG undefined FUN_14dae02cf(void)

void FUN_14dae02cf(void)

{
  char in_R9B;
  char unaff_R15B;
  
  if ((char)(in_R9B + unaff_R15B) != '\0') {
    return;
  }
  FUN_166477e3a();
  return;
}



// FUNCTION 14dae046d FUN_14dae046d body=133 status=ok
// SIG undefined FUN_14dae046d(void)

void FUN_14dae046d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R15;
  
  FUN_1648c3fd1(param_1,param_2,
                ~((unaff_RBX + param_3) - (unaff_RBX & param_3) & (~param_3 | unaff_R15)));
  return;
}



// FUNCTION 14dae04f6 FUN_14dae04f6 body=24 status=ok
// SIG undefined FUN_14dae04f6(void)

void FUN_14dae04f6(void)

{
  return;
}



// FUNCTION 14dae05c4 FUN_14dae05c4 body=123 status=ok
// SIG undefined FUN_14dae05c4(void)

void FUN_14dae05c4(undefined8 param_1,uint param_2)

{
  uint unaff_R14D;
  int in_stack_00000008;
  
  FUN_14e14bd9d(param_1,~(in_stack_00000008 - ~(param_2 | unaff_R14D)));
  return;
}



// FUNCTION 14dae0640 FUN_14dae0640 body=190 status=ok
// SIG undefined FUN_14dae0640(void)

void FUN_14dae0640(void)

{
  return;
}



// FUNCTION 14dae06ff FUN_14dae06ff body=291 status=ok
// SIG undefined FUN_14dae06ff(void)

undefined8 FUN_14dae06ff(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1565662ed(param_1,param_2,in_stack_00000008);
  return 8;
}



// FUNCTION 14dae08e6 FUN_14dae08e6 body=130 status=ok
// SIG undefined FUN_14dae08e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dae096a) */

void FUN_14dae08e6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  FUN_15b5e9352(param_1,param_2,
                *(ulonglong *)(param_3 + -0xa0) + in_R10 +
                (*(ulonglong *)(param_3 + -0xa0) & in_R10) * -2);
  FUN_16590926e();
  FUN_156d8127b();
  return;
}



// FUNCTION 14dae096a FUN_14dae096a body=143 status=ok
// SIG undefined FUN_14dae096a(void)

void FUN_14dae096a(undefined8 param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0xfffffffffd02d624 + param_2) = *(undefined8 *)(unaff_RDI + -0x40);
  *(undefined1 **)(&stack0xfffffffffd02d624 + param_2) = &LAB_16642cfa7;
  return;
}



// FUNCTION 14dae0bcb FUN_14dae0bcb body=146 status=ok
// SIG undefined FUN_14dae0bcb(void)

void FUN_14dae0bcb(void)

{
  FUN_16557b271();
  return;
}



// FUNCTION 14dae0c5d FUN_14dae0c5d body=163 status=ok
// SIG undefined FUN_14dae0c5d(void)

undefined8
FUN_14dae0c5d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong uVar1;
  undefined8 local_res8;
  undefined8 local_res18;
  ushort local_res20;
  uint6 uStackX_22;
  
  *(undefined8 *)(unaff_R13 + 0x10) = param_3;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = in_R11;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -8) = 0x32a2c1c;
  *(undefined8 *)(param_5 + -0x20) = local_res8;
  *(undefined8 *)(param_5 + -0x28) = local_res8;
  *(undefined8 *)(param_5 + -0x30) = local_res8;
  *(code **)(param_5 + -0x20) = FUN_14dae0d03;
  *(undefined1 **)(param_5 + -0x28) = &LAB_157497420;
  return local_res18;
}



// FUNCTION 14dae0d03 FUN_14dae0d03 body=307 status=ok
// SIG undefined FUN_14dae0d03(void)

/* WARNING: Instruction at (ram,0x00014dae0d13) overlaps instruction at (ram,0x00014dae0d12)
    */
/* WARNING: Removing unreachable block (ram,0x00014dae0d9c) */
/* WARNING: Removing unreachable block (ram,0x00014dae0d12) */

void FUN_14dae0d03(void)

{
  FUN_1567daf71();
  return;
}



// FUNCTION 14dae1003 FUN_14dae1003 body=434 status=ok
// SIG undefined FUN_14dae1003(void)

/* WARNING: Removing unreachable block (ram,0x00014dae10ac) */
/* WARNING: Removing unreachable block (ram,0x0001576419a9) */

void FUN_14dae1003(void)

{
  FUN_1576419a9();
  return;
}



// FUNCTION 14dae113d FUN_14dae113d body=297 status=ok
// SIG undefined FUN_14dae113d(void)

/* WARNING: Removing unreachable block (ram,0x00014dae1263) */
/* WARNING: Removing unreachable block (ram,0x000162063f08) */

void FUN_14dae113d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_R10;
  code *pcVar8;
  longlong unaff_R12;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  pcVar8 = FUN_14d98701f;
  *(undefined8 *)(local_res10 + -0x18) = 0x14dae11d4;
  uVar7 = FUN_14d98701f(param_1,param_2,param_3,param_4);
  *(code **)(local_res10 + -0x10) = pcVar8 + uVar7;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  *(ulonglong *)(local_res10 + -0x10) = uVar1 + uVar7;
  *(ulonglong *)(local_res10 + -0x10) = *(longlong *)(local_res10 + -0x10) + (uVar1 & uVar7) * -2;
  uVar5 = *(undefined8 *)(local_res10 + -0x10);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80);
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58);
  *(ulonglong *)(local_res10 + -0x10) = uVar7;
  *(ulonglong *)(local_res10 + -0x18) = (ulonglong)*(byte *)(local_res10 + 0x28);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  uVar6 = *(ulonglong *)(local_res10 + -0x10);
  uVar4 = *(ulonglong *)(unaff_R12 + -0x48);
  *(ulonglong *)(local_res10 + -0x10) = uVar6;
  *(ulonglong *)(local_res10 + -0x18) = ~(uVar4 & uVar6) & ((-1 - (uVar4 & uVar6)) + uVar6) - ~uVar4
  ;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_1621b05b1;
  FUN_165df8793(uVar3 + uVar7 + (uVar3 & uVar7) * -2,uVar1 ^ uVar6,uVar2 ^ uVar7,uVar5);
  return;
}



// FUNCTION 14dae1269 FUN_14dae1269 body=278 status=ok
// SIG undefined FUN_14dae1269(void)

/* WARNING: Removing unreachable block (ram,0x00014dae137d) */
/* WARNING: Removing unreachable block (ram,0x00014dae1383) */

void FUN_14dae1269(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161908a6b(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14dae1383 FUN_14dae1383 body=142 status=ok
// SIG undefined FUN_14dae1383(void)

void FUN_14dae1383(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - (param_1 & in_RAX);
  FUN_165cf6b19(((param_1 | in_RAX) - (uVar1 | param_1 | in_RAX)) + uVar1,
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2);
  return;
}



// FUNCTION 14dae1412 FUN_14dae1412 body=160 status=ok
// SIG undefined FUN_14dae1412(void)

void FUN_14dae1412(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong lStackX_18;
  
  puVar3 = &stack0xfffffffffffffff8;
  uVar2 = 8;
  uVar1 = FUN_162ce67cb(8,param_2,~unaff_R15);
  *(undefined8 *)(lStackX_18 + -8) = uVar1;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined1 **)(lStackX_18 + -0x18) = puVar3;
  FUN_1575e3714(uVar2,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dae14b2 FUN_14dae14b2 body=115 status=ok
// SIG undefined FUN_14dae14b2(void)

void FUN_14dae14b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  FUN_1575e3714(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dae154f FUN_14dae154f body=148 status=ok
// SIG undefined FUN_14dae154f(void)

void FUN_14dae154f(void)

{
  undefined8 in_stack_00000008;
  
  FUN_161706fe2(in_stack_00000008);
  return;
}



// FUNCTION 14dae15e9 FUN_14dae15e9 body=750 status=ok
// SIG undefined FUN_14dae15e9(void)

void FUN_14dae15e9(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  uint unaff_EDI;
  
  FUN_1624552cc(param_1,(~(unaff_EDI & param_6) + param_6) - ~unaff_EDI,param_3,
                *(undefined8 *)(param_1 + -0x58));
  return;
}



// FUNCTION 14dae1731 FUN_14dae1731 body=351 status=ok
// SIG undefined FUN_14dae1731(void)

/* WARNING: Removing unreachable block (ram,0x00014dae1874) */
/* WARNING: Removing unreachable block (ram,0x00014dae17c3) */
/* WARNING: Removing unreachable block (ram,0x00014dae1869) */
/* WARNING: Removing unreachable block (ram,0x000160c8f1f2) */

void FUN_14dae1731(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *unaff_RDI;
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
  ulonglong uVar17;
  ushort local_res10;
  uint6 uStackX_12;
  
  bVar12 = (local_res10 & 0x4000) != 0;
  bVar11 = (local_res10 & 0x800) != 0;
  bVar10 = (local_res10 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (local_res10 & 0x80) != 0;
  bVar7 = (local_res10 & 0x40) != 0;
  bVar6 = (local_res10 & 0x10) != 0;
  bVar5 = (local_res10 & 4) != 0;
  bVar4 = (local_res10 & 1) != 0;
  bVar16 = (uStackX_12 & 0x20) != 0;
  bVar13 = (uStackX_12 & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)();
  *unaff_RDI = param_4;
  unaff_RDI[-1] = param_4;
  *(undefined4 *)(unaff_RDI + -2) = 0x89aacb1;
  *(undefined4 *)((longlong)unaff_RDI + -0xc) = 0;
  lVar2 = unaff_RDI[-2];
  unaff_RDI[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  unaff_RDI[-3] = lVar2;
  unaff_RDI[-4] = param_3;
  unaff_RDI[-5] = uVar3;
  unaff_RDI[-3] = unaff_RDI[-3] + -0x74fda0b;
  uVar17 = unaff_RDI[-2];
  unaff_RDI[-2] = param_2;
  unaff_RDI[-3] = unaff_R13;
  unaff_RDI[-4] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *unaff_RDI = lVar2 + -0x74fda0b;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dae1874 FUN_14dae1874 body=262 status=ok
// SIG undefined FUN_14dae1874(void)

void FUN_14dae1874(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_156aa5042(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dae19a2 FUN_14dae19a2 body=160 status=ok
// SIG undefined FUN_14dae19a2(void)

undefined8 FUN_14dae19a2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dae1a42 FUN_14dae1a42 body=124 status=ok
// SIG undefined FUN_14dae1a42(void)

void FUN_14dae1a42(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  short *in_R10;
  undefined8 in_R11;
  short unaff_R14W;
  undefined8 unaff_R15;
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
  ulonglong local_res20;
  longlong in_stack_00000028;
  
  *in_R10 = unaff_R14W + 1;
  bVar11 = (local_res20 & 0x4000) != 0;
  bVar10 = (local_res20 & 0x800) != 0;
  bVar9 = (local_res20 & 0x400) != 0;
  bVar8 = (local_res20 & 0x200) != 0;
  bVar7 = (local_res20 & 0x100) != 0;
  bVar6 = (local_res20 & 0x80) != 0;
  bVar5 = (local_res20 & 0x40) != 0;
  bVar4 = (local_res20 & 0x10) != 0;
  bVar3 = (local_res20 & 4) != 0;
  bVar2 = (local_res20 & 1) != 0;
  bVar13 = (local_res20 & 0x200000) != 0;
  bVar12 = (local_res20 & 0x40000) != 0;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_RAX;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0xd179938;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  lVar1 = *(longlong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_R15;
  *(ulonglong *)(in_stack_00000028 + -0x30) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  uVar14 = *(ulonglong *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *(ulonglong *)(in_stack_00000028 + -0x20) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000028 + -8) = lVar1 + -0xc93f010;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_166397c58;
  return;
}



// FUNCTION 14dae1abf FUN_14dae1abf body=180 status=ok
// SIG undefined FUN_14dae1abf(void)

/* WARNING: Removing unreachable block (ram,0x00014dae1b23) */

void FUN_14dae1abf(void)

{
  return;
}



// FUNCTION 14dae1bdc thunk_FUN_14dae1be2 body=5 status=ok
// SIG undefined thunk_FUN_14dae1be2(void)

void thunk_FUN_14dae1be2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char unaff_BPL;
  
  uVar1 = FUN_165c7a7f8(param_1,FUN_165c7a7f8,param_3);
  FUN_15b797722(CONCAT31((uint3)(uVar1 >> 0x12),unaff_BPL + -0x7b),uVar1 << 0x16 | uVar1 >> 10);
  return;
}



// FUNCTION 14dae1be2 FUN_14dae1be2 body=256 status=ok
// SIG undefined FUN_14dae1be2(void)

void FUN_14dae1be2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char unaff_BPL;
  
  uVar1 = FUN_165c7a7f8(param_1,FUN_165c7a7f8,param_3);
  FUN_15b797722(CONCAT31((uint3)(uVar1 >> 0x12),unaff_BPL + -0x7b),uVar1 << 0x16 | uVar1 >> 10);
  return;
}



// FUNCTION 14dae1d84 FUN_14dae1d84 body=140 status=ok
// SIG undefined FUN_14dae1d84(void)

void FUN_14dae1d84(undefined8 param_1,undefined8 param_2)

{
  FUN_1656b8334(param_1,param_2,FUN_1656b8334);
  return;
}



// FUNCTION 14dae20a7 FUN_14dae20a7 body=177 status=ok
// SIG undefined FUN_14dae20a7(void)

void FUN_14dae20a7(void)

{
  longlong unaff_RBP;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16543a33a();
    return;
  }
  if (unaff_RBP != 0xbbf) {
    FUN_16543a33a();
    return;
  }
  return;
}



// FUNCTION 14dae2274 FUN_14dae2274 body=311 status=ok
// SIG undefined FUN_14dae2274(void)

/* WARNING: Removing unreachable block (ram,0x000162dddb58) */
/* WARNING: Removing unreachable block (ram,0x000162dddb47) */
/* WARNING: Removing unreachable block (ram,0x0001649109b8) */
/* WARNING: Removing unreachable block (ram,0x0001649109c4) */
/* WARNING: Removing unreachable block (ram,0x0001649109c9) */
/* WARNING: Removing unreachable block (ram,0x00014dae23ac) */

void FUN_14dae2274(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 uStackX_20;
  
  pcVar3 = FUN_1626a0b22;
  uVar2 = FUN_1626a0b22();
  uVar1 = *(ulonglong *)(unaff_R12 + -0xa0);
  FUN_161425403();
  *(undefined8 *)
   ((longlong)&uStackX_20 +
   ((-(uVar2 ^ 0xffffffffffffffff) - (~uVar1 + 2)) + (uVar1 & uVar2) * -2 ^
   (ulonglong)(pcVar3 + 0x8f60394))) = 0;
  thunk_FUN_15b642ca5(unaff_R14);
  return;
}



// FUNCTION 14dae23ac FUN_14dae23ac body=265 status=ok
// SIG undefined FUN_14dae23ac(void)

void FUN_14dae23ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RBP;
  ulonglong in_R10;
  
  FUN_15782b0cc(param_1,param_2,0x40b57e2e,param_4,param_3);
  *(ulonglong *)(unaff_RBP + 8) =
       ~((~*(ulonglong *)(FUN_15782b0cc + unaff_RBP) | in_R10) + *(longlong *)(unaff_RBP + 8) + 1);
  return;
}



// FUNCTION 14dae24e8 FUN_14dae24e8 body=146 status=ok
// SIG undefined FUN_14dae24e8(void)

/* WARNING: Removing unreachable block (ram,0x00014dae263f) */
/* WARNING: Removing unreachable block (ram,0x00014dae25f7) */

void FUN_14dae24e8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  
  pcVar2 = FUN_16615266b;
  uVar1 = FUN_16615266b(param_1,FUN_16615266b,0xfffe);
  *(code **)(unaff_RDI + -8) = pcVar2;
  *(code **)(unaff_RDI + -0x10) = pcVar2;
  *(ulonglong *)(unaff_RDI + -0x18) =
       (ulonglong)((param_2 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_2 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_2 & 0x400) != 0) * 0x400 | (ulonglong)((param_2 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_2 & 0x80) != 0) * 0x80 | (ulonglong)((param_2 & 0x40) != 0) * 0x40 |
       (ulonglong)((param_2 & 0x10) != 0) * 0x10 | (ulonglong)((param_2 & 4) != 0) * 4 |
       (ulonglong)((param_2 & 1) != 0) | (ulonglong)((param_2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_2 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x18);
  *(ulonglong *)(unaff_RDI + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(unaff_RDI + -0x20) = unaff_retaddr;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x18);
  *(undefined8 *)(unaff_RDI + -0x18) = uVar1;
  *(ulonglong *)(unaff_RDI + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(unaff_RDI + -8) = 0x2775acc;
  FUN_165c7153c(param_3,*(undefined8 *)(unaff_RDI + -0x10));
  return;
}



// FUNCTION 14dae257c FUN_14dae257c body=283 status=ok
// SIG undefined FUN_14dae257c(void)

/* WARNING: Removing unreachable block (ram,0x00014dae263f) */
/* WARNING: Removing unreachable block (ram,0x00014dae25f7) */

void FUN_14dae257c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x2775acc;
  FUN_165c7153c(unaff_retaddr,*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dae27b6 FUN_14dae27b6 body=245 status=ok
// SIG undefined FUN_14dae27b6(void)

void FUN_14dae27b6(void)

{
  undefined8 unaff_R13;
  ulonglong uVar1;
  undefined1 local_res10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  longlong in_stack_00000028;
  
  FUN_1660695df();
  LOCK();
  DAT_14d7bd507 = local_res10;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R13;
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
  uVar1 = *(ulonglong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = 0xefc112f;
  *(longlong *)(in_stack_00000028 + -0x20) = *(longlong *)(in_stack_00000028 + -0x20) + -0xe4324a5;
  *(undefined8 *)(in_stack_00000028 + -8) = 0xb8ec8a;
  FUN_165c7153c(uStackX_18);
  return;
}



// FUNCTION 14dae28c3 FUN_14dae28c3 body=131 status=ok
// SIG undefined FUN_14dae28c3(void)

void FUN_14dae28c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_15b4b3215)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dae2a07 thunk_FUN_14dae2a0d body=5 status=ok
// SIG undefined thunk_FUN_14dae2a0d(void)

void thunk_FUN_14dae2a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  bool bVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_15b77d004(param_1,param_2,in_stack_00000008,param_4);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x40) | 0x15b77d004;
  bVar1 = (*(ulonglong *)(unaff_R13 + -0x40) & 0x15b77d004) != 0;
  if (bVar1 || uVar2 != 0xffffffffffffffff) {
    FUN_161a59578();
    return;
  }
  if (!bVar1 && uVar2 == 0xffffffffffffffff) {
    FUN_157099c81();
    return;
  }
  FUN_166675455(uVar2,0x57,FUN_166675455);
  return;
}



// FUNCTION 14dae2a0d FUN_14dae2a0d body=283 status=ok
// SIG undefined FUN_14dae2a0d(void)

void FUN_14dae2a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_15b77d004(param_1,param_2,in_stack_00000008,param_4);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x40) | 0x15b77d004;
  bVar1 = (*(ulonglong *)(unaff_R13 + -0x40) & 0x15b77d004) != 0;
  if (bVar1 || uVar2 != 0xffffffffffffffff) {
    FUN_161a59578();
    return;
  }
  if (!bVar1 && uVar2 == 0xffffffffffffffff) {
    FUN_157099c81();
    return;
  }
  FUN_166675455(uVar2,0x57,FUN_166675455);
  return;
}



// FUNCTION 14dae2b2a FUN_14dae2b2a body=130 status=ok
// SIG undefined FUN_14dae2b2a(void)

void FUN_14dae2b2a(undefined8 param_1,undefined8 param_2)

{
  FUN_166675455(param_1,param_2,FUN_166675455);
  return;
}



// FUNCTION 14dae2db1 FUN_14dae2db1 body=323 status=ok
// SIG undefined FUN_14dae2db1(void)

void FUN_14dae2db1(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar3;
  longlong unaff_R14;
  undefined8 local_res10;
  
  uVar1 = ~local_res10;
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0xa0) + uVar1;
  uVar3 = ~*(ulonglong *)(unaff_R13 + -0xa0) & uVar1;
  if ((uVar2 < uVar3) && (uVar3 < uVar2)) {
    uVar2 = *(ulonglong *)(unaff_R12 + unaff_RDI + param_2 + 0x3d3bb356);
    uVar3 = uVar2 ^ 0xffffffffffffffff | uVar1;
    FUN_16135c3b2((0xffffffffffffffff - uVar3 | local_res10 | uVar2) + uVar3 + 1 ^
                  0xffffffffffffffff,
                  *(ulonglong *)(unaff_R12 + -0x78) + uVar1 +
                  (*(ulonglong *)(unaff_R12 + -0x78) & uVar1) * -2,param_3,param_4);
    return;
  }
  FUN_1617a83e5(param_1,*(longlong *)(unaff_R13 + unaff_R14) + local_res10);
  return;
}



// FUNCTION 14dae2ef7 FUN_14dae2ef7 body=792 status=ok
// SIG undefined FUN_14dae2ef7(void)

/* WARNING: Removing unreachable block (ram,0x00014d9150d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9150de) */
/* WARNING: Removing unreachable block (ram,0x00014d914d72) */
/* WARNING: Removing unreachable block (ram,0x00014d914d94) */
/* WARNING: Removing unreachable block (ram,0x00014d914e13) */
/* WARNING: Removing unreachable block (ram,0x00014d914e49) */
/* WARNING: Removing unreachable block (ram,0x00014d914e5e) */
/* WARNING: Removing unreachable block (ram,0x000165e7e358) */
/* WARNING: Removing unreachable block (ram,0x00014d914e75) */
/* WARNING: Removing unreachable block (ram,0x00014d914e7b) */
/* WARNING: Removing unreachable block (ram,0x00014d914e80) */
/* WARNING: Removing unreachable block (ram,0x00014d914f7a) */
/* WARNING: Removing unreachable block (ram,0x00014d914fad) */
/* WARNING: Removing unreachable block (ram,0x00014d914fb3) */
/* WARNING: Removing unreachable block (ram,0x00015af4db16) */
/* WARNING: Removing unreachable block (ram,0x00014d914f75) */
/* WARNING: Removing unreachable block (ram,0x00014dae3047) */
/* WARNING: Removing unreachable block (ram,0x00014dae30c4) */
/* WARNING: Removing unreachable block (ram,0x00014dae2f89) */
/* WARNING: Removing unreachable block (ram,0x00014dae303c) */
/* WARNING: Removing unreachable block (ram,0x00014dae3041) */
/* WARNING: Removing unreachable block (ram,0x0001611106f3) */
/* WARNING: Removing unreachable block (ram,0x00014dae30bf) */
/* WARNING: Removing unreachable block (ram,0x00014dae30cc) */
/* WARNING: Removing unreachable block (ram,0x00014dae30d2) */
/* WARNING: Removing unreachable block (ram,0x00014dae30d7) */
/* WARNING: Removing unreachable block (ram,0x00014d914cd8) */
/* WARNING: Removing unreachable block (ram,0x00014d914d6c) */
/* WARNING: Removing unreachable block (ram,0x00014dbcc64f) */
/* WARNING: Removing unreachable block (ram,0x00014dae30dd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dae2ef7(void)

{
  undefined8 in_stack_00000008;
  
  uRam000000014d7bd36f = 0;
  return in_stack_00000008;
}



// FUNCTION 14dae3212 FUN_14dae3212 body=305 status=ok
// SIG undefined FUN_14dae3212(void)

void FUN_14dae3212(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffbc300e9 + param_3);
  *puVar1 = *(undefined8 *)(unaff_R13 + -0x40);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x60);
  *puVar1 = param_1;
  puVar2 = puVar1 + -1;
  *puVar2 = 0x43cff17;
  *(undefined1 *)puVar2 = 0x99;
  lVar4 = ((unaff_R15 - 1) - ~uVar3) - ((uVar3 & unaff_R15) << ((char)*puVar2 + 0x68U & 0x3f));
  FUN_1669571a9(*puVar1,lVar4,0x2ab0a132,lVar4);
  return;
}



// FUNCTION 14dae32b4 FUN_14dae32b4 body=151 status=ok
// SIG undefined FUN_14dae32b4(void)

void FUN_14dae32b4(void)

{
  longlong unaff_RSI;
  undefined1 unaff_retaddr;
  
  FUN_16475eabe(CONCAT71(~(uint7)((ulonglong)*(undefined8 *)(unaff_RSI + 0x3284) >> 8),unaff_retaddr
                        ),FUN_16475eabe);
  return;
}



// FUNCTION 14dae35e4 FUN_14dae35e4 body=584 status=ok
// SIG undefined FUN_14dae35e4(void)

/* WARNING: Removing unreachable block (ram,0x00014dae377e) */
/* WARNING: Removing unreachable block (ram,0x00014dae37a8) */
/* WARNING: Removing unreachable block (ram,0x000166018b0d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dae35e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined1 *puVar3;
  ulonglong unaff_RBP;
  ushort unaff_SI;
  longlong unaff_R12;
  ushort uVar4;
  
  lVar1 = *(longlong *)(unaff_R12 + -0x68);
  FUN_1614a038a(param_1,param_2,param_3,param_4);
  uVar2 = *(ulonglong *)(lVar1 + -0x78);
  puVar3 = &DAT_ac91427a73ca2b2b;
  FUN_1564ddbf5();
  uVar4 = unaff_SI + (ushort)(&DAT_ac91427a73ca2b2b + (uVar2 & 0xac91427a73ca2b2b) * -2 + uVar2) +
          (unaff_SI & (ushort)(&DAT_ac91427a73ca2b2b + (uVar2 & 0xac91427a73ca2b2b) * -2 + uVar2)) *
          -2;
  FUN_166c767f3(puVar3,~(uVar4 & 0x100) + uVar4 + 0x101,FUN_166c767f3,
                ~(unaff_RBP & in_RAX) & (unaff_RBP | in_RAX));
  return;
}



// FUNCTION 14dae37a8 FUN_14dae37a8 body=149 status=ok
// SIG undefined FUN_14dae37a8(void)

void FUN_14dae37a8(void)

{
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 local_res8;
  ulonglong in_stack_00000030;
  
  in_stack_00000030 = in_stack_00000030 ^ local_res8;
  *(undefined8 *)(in_stack_00000030 - 8) = unaff_RSI;
  *(undefined8 *)(in_stack_00000030 - 0x10) = *(undefined8 *)(in_stack_00000030 - 8);
  *(undefined8 *)(in_stack_00000030 - 0x18) = in_R9;
  FUN_157819a76();
  return;
}



// FUNCTION 14dae383e FUN_14dae383e body=157 status=ok
// SIG undefined FUN_14dae383e(void)

void FUN_14dae383e(void)

{
  longlong in_RAX;
  longlong local_res20;
  
  local_res20 = in_RAX + local_res20 * -2;
  FUN_15b3a8888(&local_res20,FUN_15b3a8888);
  return;
}



// FUNCTION 14dae3988 FUN_14dae3988 body=320 status=ok
// SIG undefined FUN_14dae3988(void)

/* WARNING: Instruction at (ram,0x00014dae3a92) overlaps instruction at (ram,0x00014dae3a8f)
    */

void FUN_14dae3988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_18;
  
  lVar7 = -0x1282aae3;
  local_18 = (code *)0x60ec9c56;
  pcVar5 = local_18;
  local_18 = (code *)param_3;
  uVar8 = 0x726e36bd;
  puVar6 = &local_18;
  do {
    uVar3 = *puVar6;
    lVar7 = lVar7 + ((ulonglong)pcVar5 ^ uVar8);
    pcVar5 = FUN_166697b5f;
    *puVar6 = 0x14dae3a26;
    uVar8 = FUN_166697b5f(FUN_166697b5f,param_2,uVar3);
    *puVar6 = uVar8;
    *(undefined4 *)puVar6 = 0;
    *(uint *)puVar6 = (uint)*puVar6 ^ 0x7763766d;
    *(uint *)puVar6 = (uint)*puVar6 ^ 0x30107fce;
    *(uint *)((longlong)puVar6 + 4) = 0;
    lVar4 = *puVar6;
    *puVar6 = lVar4;
    *puVar6 = *puVar6 + -0x7b27fd28;
    puVar1 = puVar6 + 1;
    if (*puVar6 != 0) {
      *puVar6 = *(undefined8 *)(lVar7 + -0x80);
      break;
    }
    puVar2 = (uint *)(lVar4 + -0x7b27fd29);
    *puVar2 = *puVar2 & (uint)lVar7;
    puVar6 = puVar1;
  } while (*puVar2 != 0);
  *puVar6 = *puVar6;
  *puVar6 = (ulonglong)pcVar5;
  FUN_14dc93a23(*puVar6);
  return;
}



// FUNCTION 14dae3ad0 FUN_14dae3ad0 body=157 status=ok
// SIG undefined FUN_14dae3ad0(void)

/* WARNING: Removing unreachable block (ram,0x00014da8d578) */
/* WARNING: Removing unreachable block (ram,0x000156b87a28) */
/* WARNING: Removing unreachable block (ram,0x000156b87a7c) */
/* WARNING: Removing unreachable block (ram,0x000156b87a82) */
/* WARNING: Removing unreachable block (ram,0x00014dae3b6d) */
/* WARNING: Removing unreachable block (ram,0x00014dae3d20) */
/* WARNING: Removing unreachable block (ram,0x00014dd2e941) */
/* WARNING: Removing unreachable block (ram,0x00014dd2e9b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd2e9ba) */
/* WARNING: Removing unreachable block (ram,0x00014da8d421) */
/* WARNING: Removing unreachable block (ram,0x00015685e83a) */
/* WARNING: Removing unreachable block (ram,0x00015685e835) */
/* WARNING: Removing unreachable block (ram,0x00015b05e8c5) */
/* WARNING: Removing unreachable block (ram,0x00015b05e93e) */
/* WARNING: Removing unreachable block (ram,0x00015b05e949) */
/* WARNING: Removing unreachable block (ram,0x00015b05e944) */
/* WARNING: Removing unreachable block (ram,0x00015b05e939) */
/* WARNING: Removing unreachable block (ram,0x00015685e840) */
/* WARNING: Removing unreachable block (ram,0x00014dae3d26) */
/* WARNING: Removing unreachable block (ram,0x00015b677537) */
/* WARNING: Removing unreachable block (ram,0x00015b312c56) */
/* WARNING: Removing unreachable block (ram,0x00015b67753d) */
/* WARNING: Removing unreachable block (ram,0x00015b6774f1) */
/* WARNING: Removing unreachable block (ram,0x00015b677532) */
/* WARNING: Removing unreachable block (ram,0x000166ddb8e6) */
/* WARNING: Removing unreachable block (ram,0x000166ddb978) */
/* WARNING: Removing unreachable block (ram,0x000156b87a87) */

undefined8 FUN_14dae3ad0(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  uint unaff_EBP;
  longlong unaff_R12;
  uint in_stack_00000028;
  
  if ((~in_RAX & (in_RAX ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R12 + -0x40)) == 0 &&
      in_RAX == 0) {
    uVar1 = FUN_166ddb835();
    return uVar1;
  }
  if (unaff_EBP < in_stack_00000028) {
    uVar1 = FUN_156b879ea();
    return uVar1;
  }
  uVar1 = FUN_1568e7aa6();
  return uVar1;
}



// FUNCTION 14dae3b6d FUN_14dae3b6d body=1465 status=ok
// SIG undefined FUN_14dae3b6d(void)

/* WARNING: Removing unreachable block (ram,0x00014da8d578) */
/* WARNING: Removing unreachable block (ram,0x00015685e840) */
/* WARNING: Removing unreachable block (ram,0x00014dae3d26) */
/* WARNING: Removing unreachable block (ram,0x00015b05e949) */
/* WARNING: Removing unreachable block (ram,0x00014dd2e9ba) */

undefined8
FUN_14dae3b6d(undefined8 param_1,ulonglong param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  short unaff_BX;
  ulonglong uVar10;
  longlong unaff_RDI;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 in_R10;
  code *pcVar13;
  undefined8 in_R11;
  short *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8;
  longlong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 local_res20;
  
  *param_3 = ~(param_2 & *param_3);
  uVar8 = FUN_160d2239e(local_res8,in_stack_00000018);
  *unaff_R12 = (-0x100 - (~-unaff_BX + 2U)) + *unaff_R12;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7c1490) is written */
                    /* WARNING: Read-only address (ram,0x00014d7c1490) is written */
  LOCK();
  uRam000000014d7c1490 = (undefined1)uVar8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  UNLOCK();
  *(ulonglong *)(param_7 + -8) = uVar8;
  *(ulonglong *)(param_7 + -0x10) = uVar8;
  *(ulonglong *)(param_7 + -0x18) = uVar8;
  *(code **)(param_7 + -0x20) = FUN_160d2239e;
  *(undefined4 *)(param_7 + -0x28) = 0xb459bf4;
  *(undefined8 *)(param_7 + -0x30) = 0x14dae3c8a;
  FUN_166482cb9();
  uVar8 = *(ulonglong *)(unaff_RDI + -0x28);
  *(undefined8 *)(param_7 + -0x30) = *(undefined8 *)(unaff_RDI + -0x68);
  uVar2 = *(ulonglong *)(param_7 + -0x30);
  *(ulonglong *)(param_7 + -0x30) = ~param_5 | unaff_R15;
  *(undefined4 *)(param_7 + -0x30) = 0x7314f7b6;
  *(undefined4 *)(param_7 + -0x2c) = 0;
  uVar10 = *(ulonglong *)(param_7 + -0x30) ^ 0x719debfd;
  *(ulonglong *)(param_7 + -0x30) =
       0xfffffffffffffffe - ~-(uVar8 & local_res8) & (uVar8 | local_res8);
  uVar9 = *(undefined8 *)(param_7 + -0x30);
  uVar4 = (~(uVar10 & 0x2891c4b) & (uVar10 | 0x2891c4b)) + *(longlong *)(unaff_RDI + -0x48);
  lVar3 = -local_res8;
  *(undefined8 *)(param_7 + -0x30) = unaff_R13;
  uVar12 = uVar4 | local_res8;
  *(undefined8 *)(param_7 + -0x38) = uVar9;
  uVar5 = *(undefined8 *)(param_7 + -0x38);
  uVar11 = *(undefined8 *)(param_7 + -0x30);
  *(ulonglong *)(param_7 + -0x30) = unaff_R15;
  uVar6 = *(undefined8 *)(param_7 + -0x30);
  uVar10 = *(ulonglong *)(unaff_RDI + -0x88);
  *(ulonglong *)(param_7 + -0x30) = ~param_5 | unaff_R15;
  *(undefined8 *)(param_7 + -0x38) = in_R10;
  *(undefined8 *)(param_7 + -0x38) = *(undefined8 *)(param_7 + -0x38);
  *(undefined8 *)(param_7 + -0x30) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(param_7 + -0x38) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(param_7 + -0x40) = in_R11;
  *(undefined8 *)(param_7 + -0x48) = in_R11;
  *(undefined8 *)(param_7 + -0x50) = unaff_R14;
  uVar8 = *(ulonglong *)(unaff_RDI + -0x98);
  *(ulonglong *)(param_7 + -0x50) =
       ~((~(~local_res8 & uVar10) + uVar10) - local_res8 & (~uVar10 | local_res8));
  *(undefined8 *)(param_7 + -0x40) = 0xe30b04;
  *(ulonglong *)(param_7 + -0x40) = *(ulonglong *)(param_7 + -0x40) ^ 0xe30b04;
  *(undefined8 *)(param_7 + -0x40) = *(undefined8 *)(param_7 + -0x40);
  *(ulonglong *)(param_7 + -0x40) = *(ulonglong *)(param_7 + -0x40) ^ uVar8;
  pcVar13 = FUN_14e1aeb17;
  *(undefined8 *)(param_7 + -0x50) = 0x14da8d4d7;
  uVar7 = FUN_14e1aeb17(local_res8,
                        ~((0xffffffffffffffff - local_res8 | uVar2) & ~(uVar2 & ~local_res8)));
  *(ulonglong *)(param_7 + -0x48) = (lVar3 - uVar4) + uVar12 * 2;
  uVar8 = *(ulonglong *)(param_7 + -0x48);
  *(undefined8 *)(param_7 + -0x48) = uVar7;
  *(undefined4 *)(param_7 + -0x48) = 0xe0bff696;
  *(undefined4 *)(param_7 + -0x44) = 0xffffffff;
  *(undefined8 *)(param_7 + -0x48) =
       *(undefined8 *)(unaff_RDI + *(longlong *)(param_7 + -0x48) + 0x1f400922);
  uVar2 = *(ulonglong *)(param_7 + -0x48);
  *(undefined8 *)(param_7 + -0x48) = *(undefined8 *)(unaff_RDI + -0x88);
  *(longlong *)(param_7 + -0x48) = in_stack_00000010;
  *(undefined8 *)(param_7 + -0x50) = 0;
  *(longlong *)(param_7 + -0x50) = *(longlong *)(param_7 + -0x50) + in_stack_00000010;
  uVar9 = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(param_7 + -0x58) = uVar6;
  *(ulonglong *)(param_7 + -0x60) = uVar2 ^ local_res8;
  *(undefined8 *)(param_7 + -0x48) = uVar9;
  uVar6 = *(undefined8 *)(param_7 + -0x58);
  uVar9 = *(undefined8 *)(param_7 + -0x50);
  *(code **)(param_7 + -0x50) = pcVar13;
  *(code **)(param_7 + -0x58) = pcVar13;
  *(undefined8 *)(param_7 + -0x50) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(param_7 + -0x58) = *(undefined8 *)(unaff_RDI + -0x98);
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  *(undefined8 *)(param_7 + -0x60) = uVar11;
  *(ulonglong *)(param_7 + -0x68) = local_res8;
  uVar10 = *(ulonglong *)(param_7 + -0x68);
  *(undefined8 *)(param_7 + -0x68) = uVar9;
  *(undefined8 *)(param_7 + -0x70) = uVar6;
  uVar11 = *(undefined8 *)(param_7 + -0x68);
  *(ulonglong *)(param_7 + -0x60) = uVar8 ^ local_res8;
  *(undefined8 *)(param_7 + -0x68) = *(undefined8 *)(param_7 + -0x70);
  puVar1 = (ulonglong *)(param_7 + -0x58);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 ^ 0xffffffffffffffff;
  *puVar1 = *puVar1 | uVar10;
  *(undefined8 *)(param_7 + -0x70) = uVar7;
  *(ulonglong *)(param_7 + -0x78) = uVar2 + local_res8 + (uVar2 & local_res8) * -2;
  *puVar1 = ~((0xffffffffffffffff - uVar10 | uVar8) & *puVar1);
  uVar9 = *(undefined8 *)(param_7 + -0x60);
  *(ulonglong *)(param_7 + -0x50) = *(ulonglong *)(param_7 + -0x50) ^ uVar10;
  *(ulonglong *)(param_7 + -0x48) = *(ulonglong *)(param_7 + -0x48) ^ uVar10;
  lVar3 = *(longlong *)(param_7 + -0x58);
  *(code **)(param_7 + -0x58) = FUN_160d2239e;
  *(undefined8 *)(param_7 + -0x60) = uVar11;
  *(undefined8 *)(param_7 + -0x68) = uVar5;
  *(undefined8 *)(param_7 + -0x70) = local_res20;
  if (-1 < lVar3) {
    uVar9 = FUN_156830120(lVar3,uVar9);
    return uVar9;
  }
  uVar9 = FUN_156830120(lVar3,uVar9);
  return uVar9;
}



// FUNCTION 14dae3f17 FUN_14dae3f17 body=426 status=ok
// SIG undefined FUN_14dae3f17(void)

/* WARNING: Removing unreachable block (ram,0x00014dae3faf) */
/* WARNING: Removing unreachable block (ram,0x00014dae3fb5) */

undefined8 FUN_14dae3f17(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  
  lVar2 = FUN_15b163e28((char)param_1,
                        -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                             (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1)));
  uVar1 = *(ulonglong *)(lVar2 + 0x10);
  *(ulonglong *)(lVar2 + 0x10) = ~*(ulonglong *)(lVar2 + 0x10);
  *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) | 0x15b163e28;
  *(ulonglong *)(lVar2 + 0x10) = ~(uVar1 | 0xfffffffea4e9c1d7) | ~*(ulonglong *)(lVar2 + 0x10);
  return unaff_R15;
}



// FUNCTION 14dae3fb5 FUN_14dae3fb5 body=124 status=ok
// SIG undefined FUN_14dae3fb5(void)

void FUN_14dae3fb5(undefined1 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16640339e(param_1,~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38),
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                ~(unaff_RBX - ~unaff_RDI & (~(~param_4 & unaff_R15) + unaff_R15) - param_4));
  return;
}



// FUNCTION 14dae4038 FUN_14dae4038 body=10 status=ok
// SIG undefined FUN_14dae4038(void)

void FUN_14dae4038(void)

{
  return;
}



// FUNCTION 14dae40e9 FUN_14dae40e9 body=304 status=ok
// SIG undefined FUN_14dae40e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dae4174) */

void FUN_14dae40e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  byte in_stack_00000008;
  ulonglong local_res18;
  
  DAT_14d7c0109 = (-in_stack_00000008 - (byte)in_RAX) + (in_stack_00000008 | (byte)in_RAX) * '\x02';
  uVar1 = local_res18 ^ in_RAX;
  LOCK();
  UNLOCK();
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = 0x1657d6e1b;
  FUN_14d8a4475(param_1,param_2,param_3);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x28) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x30) = unaff_R14;
  *(code **)(uVar1 - 0x30) = FUN_1657d6ea8;
  FUN_1571fbe41();
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RSI;
  uVar2 = *(ulonglong *)(uVar1 - 0x10);
  *(longlong *)(uVar1 - 0x10) = -*(longlong *)(uVar1 - 0x10);
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) + -1;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) | 0x1571fbe41;
  *(ulonglong *)(uVar1 - 0x10) = -1 - ((uVar2 | 0xfffffffea8e041be) & *(ulonglong *)(uVar1 - 0x10));
  uVar4 = *(undefined8 *)(uVar1 - 0x20);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x1571fbe41;
  FUN_16228d6b9(uVar3,uVar4);
  return;
}



// FUNCTION 14dae42c0 FUN_14dae42c0 body=162 status=ok
// SIG undefined FUN_14dae42c0(void)

void FUN_14dae42c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = param_2;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x26adbd1;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 0x40d583ac;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x43405f7d;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x156b2a1cb;
  FUN_156b2a1a2(param_1,*(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14dae440e FUN_14dae440e body=56 status=ok
// SIG undefined FUN_14dae440e(void)

void FUN_14dae440e(void)

{
  return;
}



// FUNCTION 14dae4496 FUN_14dae4496 body=968 status=ok
// SIG undefined FUN_14dae4496(void)

/* WARNING: Instruction at (ram,0x000156db4751) overlaps instruction at (ram,0x000156db474f)
    */
/* WARNING: Removing unreachable block (ram,0x000165cbb7bd) */
/* WARNING: Removing unreachable block (ram,0x000165cbb715) */
/* WARNING: Removing unreachable block (ram,0x000165cbb720) */
/* WARNING: Removing unreachable block (ram,0x0001621aa2b5) */
/* WARNING: Removing unreachable block (ram,0x0001621aa345) */
/* WARNING: Removing unreachable block (ram,0x000156db46c6) */
/* WARNING: Removing unreachable block (ram,0x000156db4751) */
/* WARNING: Removing unreachable block (ram,0x000156db474e) */
/* WARNING: Removing unreachable block (ram,0x000156db47ec) */
/* WARNING: Removing unreachable block (ram,0x000156db47f1) */
/* WARNING: Removing unreachable block (ram,0x000156db47f7) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0f4d) */
/* WARNING: Removing unreachable block (ram,0x0001621aa34b) */
/* WARNING: Removing unreachable block (ram,0x0001621aa48b) */
/* WARNING: Removing unreachable block (ram,0x0001621aa490) */
/* WARNING: Removing unreachable block (ram,0x0001621aa496) */
/* WARNING: Removing unreachable block (ram,0x00015b030144) */
/* WARNING: Removing unreachable block (ram,0x000165cbb71b) */
/* WARNING: Removing unreachable block (ram,0x00014dae453a) */

void FUN_14dae4496(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar1 = ~uVar2 & ~unaff_R15 | uVar2;
  uVar2 = 0xffffffffffffffff - uVar2 | unaff_R15;
  FUN_162e196b4(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                -1 - (~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x28)) &
                     (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)),
                ~((uVar2 - (uVar1 | uVar2)) + uVar1),in_R9 ^ unaff_R15);
  return;
}



// FUNCTION 14dae45ea FUN_14dae45ea body=152 status=ok
// SIG undefined FUN_14dae45ea(void)

void FUN_14dae45ea(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_162f3682b(param_1,FUN_162f3682b,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~param_1 | param_4) + param_1 + 1) & unaff_RBX);
  return;
}



// FUNCTION 14dae4a35 FUN_14dae4a35 body=188 status=ok
// SIG undefined FUN_14dae4a35(void)

void FUN_14dae4a35(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166178eff(param_1,param_2,0xfffffffe9e5b072e,param_4);
  FUN_166212fb2();
  return;
}



// FUNCTION 14dae4b45 FUN_14dae4b45 body=476 status=ok
// SIG undefined FUN_14dae4b45(void)

void FUN_14dae4b45(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e11efc8(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0x62,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  FUN_165e15649();
  FUN_1611fb67e(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
  FUN_1627a2d12(0xffffffffffffff78);
  FUN_165f9b56a();
  return;
}



// FUNCTION 14dae4d24 FUN_14dae4d24 body=305 status=ok
// SIG undefined FUN_14dae4d24(void)

void FUN_14dae4d24(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1627a2d12(0xffffffffffffff78,param_2,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2);
  FUN_165f9b56a();
  return;
}



// FUNCTION 14dae4e58 FUN_14dae4e58 body=142 status=ok
// SIG undefined FUN_14dae4e58(void)

void FUN_14dae4e58(void)

{
  (*(code *)0x162c73d82)();
  return;
}



// FUNCTION 14dae4fea FUN_14dae4fea body=57 status=ok
// SIG undefined FUN_14dae4fea(void)

/* WARNING: Instruction at (ram,0x00014dae5003) overlaps instruction at (ram,0x00014dae5002)
    */
/* WARNING: Removing unreachable block (ram,0x00014dae5002) */

void FUN_14dae4fea(void)

{
  return;
}



// FUNCTION 14dae5071 FUN_14dae5071 body=175 status=ok
// SIG undefined FUN_14dae5071(void)

void FUN_14dae5071(void)

{
  return;
}



// FUNCTION 14dae5248 FUN_14dae5248 body=294 status=ok
// SIG undefined FUN_14dae5248(void)

/* WARNING: Instruction at (ram,0x000156fdeeeb) overlaps instruction at (ram,0x000156fdeeea)
    */
/* WARNING: Removing unreachable block (ram,0x0001651a88ee) */
/* WARNING: Removing unreachable block (ram,0x0001651a88f4) */
/* WARNING: Removing unreachable block (ram,0x000156fded4e) */
/* WARNING: Removing unreachable block (ram,0x000156fdeded) */
/* WARNING: Removing unreachable block (ram,0x0001625278a6) */
/* WARNING: Removing unreachable block (ram,0x000156fdedf3) */
/* WARNING: Removing unreachable block (ram,0x000156fdee9c) */
/* WARNING: Removing unreachable block (ram,0x000156fdeea2) */
/* WARNING: Removing unreachable block (ram,0x000156fdeead) */
/* WARNING: Removing unreachable block (ram,0x000156fdeeeb) */
/* WARNING: Removing unreachable block (ram,0x000156fdeeea) */
/* WARNING: Removing unreachable block (ram,0x00014dbb39ea) */
/* WARNING: Removing unreachable block (ram,0x00014dbb3a83) */
/* WARNING: Removing unreachable block (ram,0x00014dbb3a88) */
/* WARNING: Removing unreachable block (ram,0x00014dbb3a8e) */
/* WARNING: Removing unreachable block (ram,0x000165fa102c) */
/* WARNING: Removing unreachable block (ram,0x00014dae536f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dae5248(longlong param_1)

{
  undefined8 local_res10;
  
  FUN_15b22bda1();
  if (*(longlong *)((local_res10 - param_1) + -0x69) < 0) {
    FUN_1651a8883();
    return;
  }
  FUN_156fded4e();
  return;
}



// FUNCTION 14dae536f FUN_14dae536f body=172 status=ok
// SIG undefined FUN_14dae536f(void)

void FUN_14dae536f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_1622ad102(local_res10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dae541b FUN_14dae541b body=147 status=ok
// SIG undefined FUN_14dae541b(void)

void FUN_14dae541b(void)

{
  return;
}



// FUNCTION 14dae56a9 FUN_14dae56a9 body=175 status=ok
// SIG undefined FUN_14dae56a9(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dae56a9(undefined8 param_1,undefined8 param_2)

{
  FUN_165c8494c(&stack0x00000010,param_2,FUN_165c8494c);
  return;
}



// FUNCTION 14dae575a FUN_14dae575a body=169 status=ok
// SIG undefined FUN_14dae575a(void)

void FUN_14dae575a(void)

{
  FUN_164f2e85b();
  return;
}



// FUNCTION 14dae5803 FUN_14dae5803 body=124 status=ok
// SIG undefined FUN_14dae5803(void)

void FUN_14dae5803(undefined8 param_1)

{
  FUN_1577f7ed4(param_1,0);
  return;
}



// FUNCTION 14dae5967 FUN_14dae5967 body=116 status=ok
// SIG undefined FUN_14dae5967(void)

void FUN_14dae5967(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  thunk_FUN_165a7b1d0(param_1,thunk_FUN_165a7b1d0,0x173b176a3);
  return;
}



// FUNCTION 14dae5a79 FUN_14dae5a79 body=167 status=ok
// SIG undefined FUN_14dae5a79(void)

/* WARNING: Removing unreachable block (ram,0x00014dae5b22) */
/* WARNING: Removing unreachable block (ram,0x00014dae5b44) */
/* WARNING: Removing unreachable block (ram,0x00014dae5b48) */

undefined8 FUN_14dae5a79(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) &
      (~*(ulonglong *)(unaff_RDI + -0x28) | param_1)) == 0xffffffffffffffff) {
    uVar1 = FUN_1653e340b();
    return uVar1;
  }
  FUN_156906597(param_1,FUN_156906597,in_RAX ^ param_1,param_4);
  uVar1 = FUN_15af6f17e();
  return uVar1;
}



// FUNCTION 14dae5b22 FUN_14dae5b22 body=68 status=ok
// SIG undefined FUN_14dae5b22(void)

undefined4 FUN_14dae5b22(void)

{
  char cVar1;
  int in_EAX;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar2 = 0;
  cVar1 = (char)(in_EAX - *(int *)(&stack0xfffffffff40a70e9 + unaff_RDI));
  if (cVar1 < '\0') {
    uVar2 = 0xffff;
  }
  return CONCAT22((short)((uint)(in_EAX - *(int *)(&stack0xfffffffff40a70e9 + unaff_RDI)) >> 0x10),
                  (short)CONCAT71((int7)((ulonglong)uVar2 >> 8),cVar1));
}



// FUNCTION 14dae5c5b FUN_14dae5c5b body=306 status=ok
// SIG undefined FUN_14dae5c5b(void)

void FUN_14dae5c5b(ulonglong param_1)

{
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  
  FUN_1612c3751();
  *(undefined4 *)(unaff_RBX + 0x1109) = 0x73ca2b2b;
  *(undefined4 *)(unaff_RBX + 0x110d) = 0xac91427a;
  *(ulonglong *)(unaff_RBX + 0x1109) =
       ~(~*(ulonglong *)((unaff_RDI ^ param_1) - 0x78) & ~*(ulonglong *)(unaff_RBX + 0x1109));
  *(undefined8 *)(unaff_RBX + 0x1101) = unaff_RSI;
  FUN_161e3dfa4();
  return;
}



// FUNCTION 14dae5d96 FUN_14dae5d96 body=142 status=ok
// SIG undefined FUN_14dae5d96(void)

void FUN_14dae5d96(void)

{
  return;
}



// FUNCTION 14dae5ec5 FUN_14dae5ec5 body=7 status=ok
// SIG undefined FUN_14dae5ec5(void)

void FUN_14dae5ec5(void)

{
  return;
}



// FUNCTION 14dae6007 FUN_14dae6007 body=181 status=ok
// SIG undefined FUN_14dae6007(void)

void FUN_14dae6007(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_1621e0603(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dae616e FUN_14dae616e body=142 status=ok
// SIG undefined FUN_14dae616e(void)

void FUN_14dae616e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_16637066f(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14dae6357 FUN_14dae6357 body=39 status=ok
// SIG undefined FUN_14dae6357(void)

void FUN_14dae6357(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  thunk_FUN_15748c548(param_1 | param_4,*(undefined8 *)(unaff_R12 + -0x80),
                      *(undefined8 *)(unaff_R12 + -0x80),
                      ~(uVar1 & in_RAX) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1);
  return;
}



// FUNCTION 14dae63db FUN_14dae63db body=167 status=ok
// SIG undefined FUN_14dae63db(void)

void FUN_14dae63db(void)

{
  return;
}



// FUNCTION 14dae6486 FUN_14dae6486 body=321 status=ok
// SIG undefined FUN_14dae6486(void)

void FUN_14dae6486(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_161401f91(*(ulonglong *)(unaff_RSI + unaff_RDI + 0x60766ce) ^ unaff_RBP,
                (0xffffffffffffffff - unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58)) &
                (~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP) ^ 0xffffffffffffffff);
  FUN_166cb2feb();
  return;
}



// FUNCTION 14dae6646 FUN_14dae6646 body=88 status=ok
// SIG undefined FUN_14dae6646(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dae6646(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint unaff_EBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  float10 in_ST0;
  longlong local_res8;
  undefined1 local_res10 [24];
  
  *(undefined8 *)(&stack0x60e5772e + local_res8) = unaff_R14;
  *(float *)((ulonglong)unaff_EBP + 0x14) = (float)in_ST0;
  uVar4 = in((short)unaff_EBP);
  if (0x3e192a77 < (longlong)unaff_R15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x3e192a76 < unaff_R15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = uVar4 ^ 0xad225f81;
  uVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + uVar4;
  pbVar1 = (byte *)((longlong)unaff_RSI + param_1 * 4 + 0x4fec0737);
  bVar3 = (byte)unaff_EBP - *pbVar1;
  LOCK();
  *(int *)(unaff_RDI + -0x36f862d6) =
       *(int *)(unaff_RDI + -0x36f862d6) + (int)local_res10 + 0x18 +
       (uint)((byte)unaff_EBP < *pbVar1 || bVar3 < CARRY4(uVar2,uVar4));
  UNLOCK();
  _DAT_f23ca8b4 = _DAT_f23ca8b4 >> 1;
  out(*(undefined4 *)(ulonglong)((uint)unaff_RSI ^ _DAT_1a56e79bf),
      (short)CONCAT31((int3)(unaff_EBP >> 8),bVar3 - CARRY4(uVar2,uVar4)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dae6798 FUN_14dae6798 body=93 status=ok
// SIG undefined FUN_14dae6798(void)

undefined8 FUN_14dae6798(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_R13;
  undefined8 uStackX_8;
  
  *uStackX_8 = *uStackX_8 + ~unaff_R13;
  *uStackX_8 = -*uStackX_8;
  *uStackX_8 = *uStackX_8 - ~unaff_RBX;
  return in_RAX;
}



// FUNCTION 14dae6a1c FUN_14dae6a1c body=151 status=ok
// SIG undefined FUN_14dae6a1c(void)

void FUN_14dae6a1c(void)

{
  return;
}



// FUNCTION 14dae6bc5 FUN_14dae6bc5 body=344 status=ok
// SIG undefined FUN_14dae6bc5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dae6c4b) */
/* WARNING: Removing unreachable block (ram,0x000109d17ee3) */
/* WARNING: Removing unreachable block (ram,0x00014dae6ce4) */
/* WARNING: Removing unreachable block (ram,0x00014dae6cea) */
/* WARNING: Removing unreachable block (ram,0x00014dae6cef) */

void FUN_14dae6bc5(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_R11;
  undefined8 local_res8;
  ushort local_res10;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = in_R11;
  *(undefined8 *)(lStackX_18 + -0x10) = local_res8;
  *(undefined8 *)(lStackX_18 + -0x18) = local_res8;
  if ((local_res10 & 1) != 0) {
    FUN_16282d3e8();
    return;
  }
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined1 **)(lStackX_18 + -8) = &LAB_16282d41c;
  thunk_EXT_FUN_1831f0dd0(param_1,param_2);
  return;
}



// FUNCTION 14dae6e2e FUN_14dae6e2e body=57 status=ok
// SIG undefined FUN_14dae6e2e(void)

void FUN_14dae6e2e(void)

{
  return;
}



// FUNCTION 14dae6f47 FUN_14dae6f47 body=342 status=ok
// SIG undefined FUN_14dae6f47(void)

/* WARNING: Removing unreachable block (ram,0x00014dae7091) */
/* WARNING: Removing unreachable block (ram,0x00014dae709c) */
/* WARNING: Removing unreachable block (ram,0x00014dae7097) */

ulonglong FUN_14dae6f47(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar6;
  ulonglong local_res10;
  longlong local_res20;
  
  uVar6 = ~(~(unaff_R15 & 0xffffffff96c6d1eb) & (unaff_R15 | 0xffffffff96c6d1eb)) ^ local_res10;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar3 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -8) = 0;
  lVar4 = *(longlong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(undefined8 *)(local_res20 + -0x20) = uVar3;
  *(undefined8 *)(local_res20 + -0x28) = 0x14dae6fe5;
  FUN_15748618d(&LAB_1574861de + *(longlong *)(local_res20 + -8));
  *(ulonglong *)(local_res20 + -0x18) = (ulonglong)FUN_15748618d;
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  uVar5 = uVar2 + uVar6 + (uVar2 & uVar6) * -2;
  puVar1 = (ulonglong *)(local_res20 + -0x18);
  *puVar1 = *(ulonglong *)(lVar4 + -0x38);
  uVar2 = *puVar1;
  *puVar1 = uVar5;
  *(ulonglong *)(local_res20 + -0x20) = uVar5;
  *(ulonglong *)(local_res20 + -0x28) = uVar5;
  *puVar1 = (ulonglong)&LAB_14e22582b;
  *(undefined **)(local_res20 + -0x20) = &DAT_161d028b9;
  return uVar2 ^ uVar6;
}



// FUNCTION 14dae70a2 FUN_14dae70a2 body=140 status=ok
// SIG undefined FUN_14dae70a2(void)

undefined8 FUN_14dae70a2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dae71c6 FUN_14dae71c6 body=136 status=ok
// SIG undefined FUN_14dae71c6(void)

void FUN_14dae71c6(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong local_res8 [4];
  
  *(longlong *)((longlong)local_res8 + param_1) = unaff_RSI;
  uVar1 = *(undefined8 *)(*(longlong *)((longlong)local_res8 + param_1) + -0x60);
  *(undefined8 *)((longlong)local_res8 + param_1) = uVar1;
  FUN_166c9ff9b(uVar1,FUN_166c9ff9b);
  return;
}



// FUNCTION 14dae739c FUN_14dae739c body=128 status=ok
// SIG undefined FUN_14dae739c(void)

/* WARNING: Removing unreachable block (ram,0x000160c0872f) */
/* WARNING: Removing unreachable block (ram,0x000160c0873a) */
/* WARNING: Removing unreachable block (ram,0x00014dae7408) */
/* WARNING: Removing unreachable block (ram,0x00014dae740e) */
/* WARNING: Removing unreachable block (ram,0x000166a4d8b8) */
/* WARNING: Removing unreachable block (ram,0x000160c0861a) */
/* WARNING: Removing unreachable block (ram,0x000160c08703) */
/* WARNING: Removing unreachable block (ram,0x000160c086fe) */
/* WARNING: Removing unreachable block (ram,0x00014e033f33) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dae739c(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong in_stack_00000008;
  ushort uStackX_10;
  ulonglong uStackX_18;
  
  uStackX_10 = uStackX_10 + (ushort)unaff_RBP + (uStackX_10 & (ushort)unaff_RBP) * -2;
  uVar2 = ~(uStackX_18 & unaff_RBP) & (uStackX_18 | unaff_RBP);
  if (in_stack_00000008 == unaff_RBP) {
    uVar4 = FUN_166a4d809();
    return uVar4;
  }
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = param_1;
  *(undefined8 *)(uVar2 - 0x10) = in_RAX;
  *(undefined8 *)(uVar2 - 0x18) = in_RAX;
  if ((0xff01 - (3 - (uStackX_10 + 2)) & 0x80) != 0) {
    uVar3 = *puVar1;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
    *(ulonglong *)(uVar2 - 0x10) = uVar3;
    uVar4 = *(undefined8 *)(uVar2 - 0x18);
    *puVar1 = 0x1bc8c247;
    *puVar1 = *puVar1 ^ 0x1bc8c247;
    *(undefined8 *)(uVar2 - 0x18) = in_R11;
    *(undefined8 *)(uVar2 - 0x20) = in_R11;
    *(undefined1 **)(uVar2 - 0x18) = &LAB_162710d84;
    return uVar4;
  }
  uVar4 = FUN_162710d38();
  return uVar4;
}



// FUNCTION 14dae7788 FUN_14dae7788 body=363 status=ok
// SIG undefined FUN_14dae7788(void)

/* WARNING: Removing unreachable block (ram,0x00014dae781b) */
/* WARNING: Removing unreachable block (ram,0x00014dae7821) */
/* WARNING: Removing unreachable block (ram,0x00016164bd79) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dae7788(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dae7db2 FUN_14dae7db2 body=129 status=ok
// SIG undefined FUN_14dae7db2(void)

undefined8 FUN_14dae7db2(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  ulonglong in_R11;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | unaff_RBP;
  *(ulonglong *)(param_2 + 0x10) =
       ~(((~in_R11 | ~uVar1) + in_R11 + 1 | uVar2) & *(ulonglong *)(param_2 + 0x10));
  return in_RAX;
}



// FUNCTION 14dae809a FUN_14dae809a body=133 status=ok
// SIG undefined FUN_14dae809a(void)

longlong FUN_14dae809a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dae8122 FUN_14dae8122 body=56 status=ok
// SIG undefined FUN_14dae8122(void)

undefined8 FUN_14dae8122(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 + ~(~(in_RAX & 0xffffffffe8fc4f02) & (unaff_RBX | 0xffffffffe8fc4f02))) =
       unaff_R13;
  return uStackX_8;
}



// FUNCTION 14dae815b FUN_14dae815b body=93 status=ok
// SIG undefined FUN_14dae815b(void)

/* WARNING: Removing unreachable block (ram,0x00014dae81ae) */
/* WARNING: Removing unreachable block (ram,0x00014dae81b9) */
/* WARNING: Removing unreachable block (ram,0x00014dae81b4) */

void FUN_14dae815b(void)

{
  FUN_161c028b8(0xffffffffffff7fef);
  return;
}



// FUNCTION 14dae81b9 FUN_14dae81b9 body=191 status=ok
// SIG undefined FUN_14dae81b9(void)

void FUN_14dae81b9(void)

{
  return;
}



// FUNCTION 14dae83bf FUN_14dae83bf body=338 status=ok
// SIG undefined FUN_14dae83bf(void)

void FUN_14dae83bf(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_15b224de0();
  FUN_1648b6c51(0xffffffff906e5557,FUN_1648b6c51,DAT_15b224d60 ^ uVar1,DAT_15b224db0 ^ uVar1);
  return;
}



// FUNCTION 14dae8645 FUN_14dae8645 body=786 status=ok
// SIG undefined FUN_14dae8645(void)

/* WARNING: Instruction at (ram,0x00014dae868e) overlaps instruction at (ram,0x00014dae868d)
    */
/* WARNING: Removing unreachable block (ram,0x00014dae8762) */
/* WARNING: Removing unreachable block (ram,0x00014dae8886) */
/* WARNING: Removing unreachable block (ram,0x00016186359f) */
/* WARNING: Removing unreachable block (ram,0x00014dae868d) */
/* WARNING: Removing unreachable block (ram,0x000162e40dde) */
/* WARNING: Removing unreachable block (ram,0x00014dae888c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dae8645(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  FUN_16641c065(param_1,local_res10);
  if (((~param_1 | _LAB_16641bfe1_4) + param_1 + 1) * 2 <= _LAB_16641bfe1_4 + param_1) {
    uVar1 = FUN_162e40d2a();
    return uVar1;
  }
  if (_LAB_16641bfdb_2 != 0) {
    uVar1 = FUN_165c6b3af();
    return uVar1;
  }
  uVar1 = FUN_165c6b3af();
  return uVar1;
}



// FUNCTION 14dae8961 FUN_14dae8961 body=136 status=ok
// SIG undefined FUN_14dae8961(void)

/* WARNING: Removing unreachable block (ram,0x000156df6369) */
/* WARNING: Removing unreachable block (ram,0x000156df636f) */
/* WARNING: Removing unreachable block (ram,0x000156df6374) */
/* WARNING: Removing unreachable block (ram,0x000156df62c7) */
/* WARNING: Removing unreachable block (ram,0x000156df62cd) */
/* WARNING: Removing unreachable block (ram,0x000156c226d4) */
/* WARNING: Removing unreachable block (ram,0x000156c22741) */
/* WARNING: Removing unreachable block (ram,0x000162068567) */
/* WARNING: Removing unreachable block (ram,0x00016206856d) */
/* WARNING: Removing unreachable block (ram,0x00016206859a) */
/* WARNING: Removing unreachable block (ram,0x000162068604) */
/* WARNING: Removing unreachable block (ram,0x00016206860a) */
/* WARNING: Removing unreachable block (ram,0x00016206860f) */
/* WARNING: Removing unreachable block (ram,0x000166135ea6) */
/* WARNING: Removing unreachable block (ram,0x000162068213) */
/* WARNING: Removing unreachable block (ram,0x0001657a4da6) */
/* WARNING: Removing unreachable block (ram,0x0001657a4e1d) */
/* WARNING: Removing unreachable block (ram,0x0001657a4e23) */
/* WARNING: Removing unreachable block (ram,0x0001662932f7) */
/* WARNING: Removing unreachable block (ram,0x0001620682ae) */
/* WARNING: Removing unreachable block (ram,0x0001620682ba) */
/* WARNING: Removing unreachable block (ram,0x0001620682bf) */
/* WARNING: Removing unreachable block (ram,0x0001620683f3) */
/* WARNING: Removing unreachable block (ram,0x0001620683f9) */
/* WARNING: Removing unreachable block (ram,0x0001620683fe) */
/* WARNING: Removing unreachable block (ram,0x000162068497) */
/* WARNING: Removing unreachable block (ram,0x00016206849f) */
/* WARNING: Removing unreachable block (ram,0x0001620684b3) */
/* WARNING: Removing unreachable block (ram,0x0001620684ba) */
/* WARNING: Removing unreachable block (ram,0x0001572cc182) */
/* WARNING: Removing unreachable block (ram,0x0001572cc28e) */
/* WARNING: Removing unreachable block (ram,0x0001619089b4) */
/* WARNING: Removing unreachable block (ram,0x0001572cc29a) */
/* WARNING: Removing unreachable block (ram,0x0001572cc32f) */
/* WARNING: Removing unreachable block (ram,0x0001572cc335) */
/* WARNING: Removing unreachable block (ram,0x000160c41b1e) */
/* WARNING: Removing unreachable block (ram,0x000160c41b60) */
/* WARNING: Removing unreachable block (ram,0x000160c41ba6) */
/* WARNING: Removing unreachable block (ram,0x000160c41bac) */
/* WARNING: Removing unreachable block (ram,0x000157606cf5) */
/* WARNING: Removing unreachable block (ram,0x000166862d32) */
/* WARNING: Removing unreachable block (ram,0x00014dae89e0) */
/* WARNING: Removing unreachable block (ram,0x00014dae89e6) */
/* WARNING: Removing unreachable block (ram,0x00014dae89eb) */

undefined8 FUN_14dae8961(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162068213();
  return uVar1;
}



// FUNCTION 14dae89eb FUN_14dae89eb body=190 status=ok
// SIG undefined FUN_14dae89eb(void)

void FUN_14dae89eb(void)

{
  return;
}



// FUNCTION 14dae8dcd FUN_14dae8dcd body=138 status=ok
// SIG undefined FUN_14dae8dcd(void)

/* WARNING: Removing unreachable block (ram,0x00014dae8ef6) */
/* WARNING: Removing unreachable block (ram,0x00014dae8f01) */
/* WARNING: Removing unreachable block (ram,0x00014dae8efc) */
/* WARNING: Removing unreachable block (ram,0x00014dae8e57) */

void FUN_14dae8dcd(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  int iVar4;
  ulonglong unaff_R15;
  
  lVar1 = unaff_RSI + unaff_R15 + (param_2 & unaff_R15) * -2;
  bVar2 = (byte)param_1 & 0x1f;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x30) & 0xffffffff;
  iVar4 = (int)lVar1;
  if (((uVar3 << bVar2 | uVar3 >> 0x21 - bVar2) & 0x100000000) != 0) {
    iVar4 = iVar4 + 1;
  }
  if (unaff_EBP + iVar4 < 0) {
    FUN_14e0cf92a(param_1,lVar1);
    return;
  }
  FUN_1627e0e45();
  return;
}



// FUNCTION 14dae8e57 FUN_14dae8e57 body=189 status=ok
// SIG undefined FUN_14dae8e57(void)

/* WARNING: Removing unreachable block (ram,0x00014dae8ef6) */
/* WARNING: Removing unreachable block (ram,0x00014dae8f01) */
/* WARNING: Removing unreachable block (ram,0x00014dae8efc) */

void FUN_14dae8e57(undefined8 param_1)

{
  FUN_1658cefff(param_1);
  return;
}



// FUNCTION 14dae8f15 FUN_14dae8f15 body=150 status=ok
// SIG undefined FUN_14dae8f15(void)

void FUN_14dae8f15(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30) | in_RAX;
  uVar2 = ~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX);
  FUN_156fb34c8(local_res8,FUN_156fb34c8,0,(uVar1 - (uVar2 | uVar1)) + uVar2);
  FUN_14dc686a2(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dae8fad FUN_14dae8fad body=104 status=ok
// SIG undefined FUN_14dae8fad(void)

void FUN_14dae8fad(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dc686a2(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dae9016 FUN_14dae9016 body=117 status=ok
// SIG undefined FUN_14dae9016(void)

void FUN_14dae9016(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161dbe61c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dae908c FUN_14dae908c body=136 status=ok
// SIG undefined FUN_14dae908c(void)

void FUN_14dae908c(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_R11;
  longlong unaff_R13;
  
  *(undefined8 *)(in_R11 + -8) = *(undefined8 *)(unaff_R13 + -0x40);
  *(undefined8 *)(in_R11 + -8) = param_1;
  plVar1 = (longlong *)(in_R11 + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBX;
  *plVar1 = -*plVar1;
  *(char *)plVar1 = '\x04';
  *(char *)plVar1 = *(char *)plVar1 + -0x47;
  *(undefined8 *)(in_R11 + -8) = in_RAX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RSI;
  *(undefined **)(in_R11 + -0x18) = &DAT_15b620210;
  return;
}



// FUNCTION 14dae9115 FUN_14dae9115 body=29 status=ok
// SIG undefined FUN_14dae9115(void)

/* WARNING: Instruction at (ram,0x00014dae912f) overlaps instruction at (ram,0x00014dae912e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dae9172) */
/* WARNING: Removing unreachable block (ram,0x00014dae9183) */
/* WARNING: Removing unreachable block (ram,0x00014dae917e) */
/* WARNING: Removing unreachable block (ram,0x00015783ea45) */
/* WARNING: Removing unreachable block (ram,0x00015783ea4b) */
/* WARNING: Removing unreachable block (ram,0x00015783eac9) */
/* WARNING: Removing unreachable block (ram,0x00015783eacf) */
/* WARNING: Removing unreachable block (ram,0x00015783eae1) */
/* WARNING: Removing unreachable block (ram,0x00015783eb99) */
/* WARNING: Removing unreachable block (ram,0x0001624231ea) */
/* WARNING: Removing unreachable block (ram,0x00016242327f) */
/* WARNING: Removing unreachable block (ram,0x000162423284) */
/* WARNING: Removing unreachable block (ram,0x00016242328a) */
/* WARNING: Removing unreachable block (ram,0x000165cad377) */
/* WARNING: Removing unreachable block (ram,0x0001610b0726) */
/* WARNING: Removing unreachable block (ram,0x0001610b072c) */
/* WARNING: Removing unreachable block (ram,0x0001655a2990) */
/* WARNING: Removing unreachable block (ram,0x0001655a2a39) */
/* WARNING: Removing unreachable block (ram,0x0001655a2a8f) */
/* WARNING: Removing unreachable block (ram,0x0001655a2a91) */
/* WARNING: Removing unreachable block (ram,0x00014dae912e) */
/* WARNING: Removing unreachable block (ram,0x0001655c3980) */
/* WARNING: Removing unreachable block (ram,0x0001655a295c) */
/* WARNING: Removing unreachable block (ram,0x0001655a2978) */
/* WARNING: Removing unreachable block (ram,0x0001655a2a33) */
/* WARNING: Removing unreachable block (ram,0x00015783e922) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dae9115(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong in_R9;
  longlong unaff_R15;
  
  uVar2 = 0xfffffffff1166720;
  (*(code *)0x1570f42da)();
  uVar2 = -~uVar2 - (~(*(longlong *)(unaff_R15 + 8) -
                      (((uVar2 & *(ulonglong *)(unaff_R15 + 8) ^ 0xffffffffffffffff) +
                       *(longlong *)(unaff_R15 + 8)) - (-1 - uVar2))) + 2) ^ 0xffffffffffffffff;
  uVar1 = FUN_15b461faa((in_R9 - (uVar2 | in_R9)) + uVar2);
  return uVar1;
}



// FUNCTION 14dae9183 FUN_14dae9183 body=335 status=ok
// SIG undefined FUN_14dae9183(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dae9183(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res10;
  ulonglong local_res18;
  
  *param_4 = -*param_4;
  *param_4 = *param_4 - 1;
  uVar2 = *param_4;
  *param_4 = *param_4 & 0x100;
  *param_4 = (uVar2 + 0x100) - *param_4;
  *param_4 = ~*param_4;
  *(undefined8 *)(param_5 + -8) = unaff_R14;
  *(undefined8 *)(param_5 + -0x10) = local_res10;
  *(undefined8 *)(param_5 + -0x18) = local_res10;
  *(undefined **)(param_5 + -0x20) = &DAT_160d9f7c3;
  uVar5 = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28) = param_1;
  uVar6 = 0x560a7df2;
  *(undefined8 *)(param_5 + -0x30) = uVar5;
  *(undefined8 *)(param_5 + -0x38) = in_RAX;
  *(undefined8 *)(param_5 + -0x40) = 0x14dae9238;
  FUN_160d9f73f();
  uVar3 = *(ulonglong *)(*(longlong *)(param_5 + -0x30) + 0x3a3f24e3);
  *(undefined8 *)(param_5 + -0x30) = _DAT_ffffffffcd1cf1a0;
  puVar1 = (ulonglong *)(param_5 + -0x30);
  *(undefined8 *)(param_5 + -0x38) = _DAT_ffffffffcd1cf168;
  *puVar1 = *(ulonglong *)(param_5 + -0x38);
  uVar4 = *puVar1;
  *puVar1 = uVar6;
  uVar6 = *puVar1;
  *puVar1 = uVar4 + local_res18;
  *puVar1 = *puVar1 + (uVar4 & local_res18) * -2;
  uVar4 = *puVar1;
  *puVar1 = 0x14dae92cf;
  FUN_165fe3b4c(uVar6,~((~local_res18 | uVar3) & (~uVar3 | local_res18)),uVar4);
  FUN_14dae92d5();
  return;
}



// FUNCTION 14dae92d5 FUN_14dae92d5 body=714 status=ok
// SIG undefined FUN_14dae92d5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dae92ed) */
/* WARNING: Removing unreachable block (ram,0x00014dae9355) */
/* WARNING: Removing unreachable block (ram,0x00014dae9361) */
/* WARNING: Removing unreachable block (ram,0x000161696dc6) */
/* WARNING: Removing unreachable block (ram,0x00014d7bdf63) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dae92d5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong uStackX_10;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * -2;
  uVar1 = *(undefined8 *)(unaff_R13 + -0x98);
  uVar2 = FUN_156b9c8ba();
  uVar3 = ~(uStackX_10 & uVar3) & (uStackX_10 | uVar3);
  *(undefined8 *)(uVar3 - 8) = uVar2;
  *(undefined8 *)(uVar3 - 0x10) = param_1;
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 0x18) = uVar1;
  *(undefined8 *)(uVar3 - 0x20) = in_stack_00000008;
  *(undefined1 **)(uVar3 - 8) = &LAB_15b2a392e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dae9553 FUN_14dae9553 body=302 status=ok
// SIG undefined FUN_14dae9553(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165ffcd6b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dae9553(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  lVar1 = *(longlong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) & unaff_RBP;
  *(ulonglong *)(unaff_R15 + 8) = (lVar1 + unaff_RBP) - *(longlong *)(unaff_R15 + 8);
  FUN_156a098ac(param_1,param_2,param_3);
  FUN_165ffcd62();
  return;
}



// FUNCTION 14dae97c2 FUN_14dae97c2 body=335 status=ok
// SIG undefined FUN_14dae97c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dae98e3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bfaf3) */
/* WARNING: Removing unreachable block (ram,0x00014dae9855) */
/* WARNING: Removing unreachable block (ram,0x00014dae98de) */
/* WARNING: Removing unreachable block (ram,0x00014dae98e9) */

void FUN_14dae97c2(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  if (((~(~(0xffffffffffffffff - uVar1) | param_1) | uVar1) &
      (~uVar1 + param_1) - (~uVar1 & param_1)) == 0) {
    FUN_164ad7214(param_1,((~*(ulonglong *)(unaff_RDI + -0x80) & ~param_1 |
                           *(ulonglong *)(unaff_RDI + -0x80)) + param_1 + 1) * 2,0xffffffffffffffff,
                  ~(param_4 & param_1) & unaff_RSI - (param_3 & param_1));
    return;
  }
  FUN_162a2c07b();
  return;
}



// FUNCTION 14dae9962 FUN_14dae9962 body=170 status=ok
// SIG undefined FUN_14dae9962(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dae9962(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1628b5772(param_1,param_2,FUN_1628b5772,param_4);
  FUN_1620ef2e7(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  (*(code *)0x161bb6f56)();
  return;
}



// FUNCTION 14dae9a0d FUN_14dae9a0d body=220 status=ok
// SIG undefined FUN_14dae9a0d(void)

void FUN_14dae9a0d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1620ef2e7(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  (*(code *)0x161bb6f56)();
  return;
}



// FUNCTION 14dae9aeb FUN_14dae9aeb body=230 status=ok
// SIG undefined FUN_14dae9aeb(void)

/* WARNING: Removing unreachable block (ram,0x00015b2c3ce9) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3cef) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3d0c) */
/* WARNING: Removing unreachable block (ram,0x00016686425f) */
/* WARNING: Removing unreachable block (ram,0x00016686426b) */
/* WARNING: Removing unreachable block (ram,0x000166864270) */
/* WARNING: Removing unreachable block (ram,0x0001668642bb) */
/* WARNING: Removing unreachable block (ram,0x0001668642bd) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3bb1) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3bb7) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3c51) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3c57) */
/* WARNING: Removing unreachable block (ram,0x00016627edaf) */
/* WARNING: Removing unreachable block (ram,0x0001668641c6) */
/* WARNING: Removing unreachable block (ram,0x0001658a48ac) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3d11) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3d1c) */
/* WARNING: Removing unreachable block (ram,0x00015b2c3b17) */
/* WARNING: Removing unreachable block (ram,0x00014dae9b85) */
/* WARNING: Removing unreachable block (ram,0x0001667ceca8) */
/* WARNING: Removing unreachable block (ram,0x0001667ced0d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dae9aeb(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x68) + param_1 <
      ~(~*(ulonglong *)(unaff_RDI + -0x68) | ~param_1) * 2) {
    uVar1 = FUN_14dff55e9();
    return uVar1;
  }
  uVar1 = FUN_1667cec0f();
  return uVar1;
}



// FUNCTION 14dae9bd2 FUN_14dae9bd2 body=84 status=ok
// SIG undefined FUN_14dae9bd2(void)

/* WARNING: Removing unreachable block (ram,0x00014dae9cbd) */
/* WARNING: Removing unreachable block (ram,0x00014dae9cc3) */

void FUN_14dae9bd2(void)

{
  FUN_156f774e6(0xe9c89);
  FUN_156358d05();
  return;
}



// FUNCTION 14dae9c27 FUN_14dae9c27 body=471 status=ok
// SIG undefined FUN_14dae9c27(void)

/* WARNING: Removing unreachable block (ram,0x00014dae9cbd) */
/* WARNING: Removing unreachable block (ram,0x00014dae9cc3) */

void FUN_14dae9c27(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_156358d05(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dae9cc3 FUN_14dae9cc3 body=205 status=ok
// SIG undefined FUN_14dae9cc3(void)

void FUN_14dae9cc3(void)

{
  return;
}



// FUNCTION 14dae9ebf FUN_14dae9ebf body=14 status=ok
// SIG undefined FUN_14dae9ebf(void)

ulonglong FUN_14dae9ebf(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~((local_res8 - (uVar1 | local_res8)) + uVar1) & (uVar1 | local_res8);
}



// FUNCTION 14dae9f48 FUN_14dae9f48 body=208 status=ok
// SIG undefined FUN_14dae9f48(void)

undefined8 FUN_14dae9f48(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14daea0b3 FUN_14daea0b3 body=214 status=ok
// SIG undefined FUN_14daea0b3(void)

void FUN_14daea0b3(void)

{
  return;
}



// FUNCTION 14daea220 FUN_14daea220 body=22 status=ok
// SIG undefined FUN_14daea220(void)

/* WARNING: Instruction at (ram,0x00014daea234) overlaps instruction at (ram,0x00014daea231)
    */
/* WARNING: Removing unreachable block (ram,0x00014daea2bc) */
/* WARNING: Removing unreachable block (ram,0x00014daea36f) */
/* WARNING: Removing unreachable block (ram,0x00014daea372) */
/* WARNING: Removing unreachable block (ram,0x00014daea3ec) */
/* WARNING: Removing unreachable block (ram,0x00014daea3f2) */
/* WARNING: Removing unreachable block (ram,0x00016556da03) */
/* WARNING: Removing unreachable block (ram,0x000161e2d525) */
/* WARNING: Removing unreachable block (ram,0x000161e2d531) */
/* WARNING: Removing unreachable block (ram,0x00016556da59) */
/* WARNING: Removing unreachable block (ram,0x00016556da6b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daea220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool in_ZF;
  
  if (!in_ZF) {
    FUN_156a7fbdb(param_1,param_2,param_3,&stack0xffffffffffffffe8);
    return;
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)(0x33482399);
  return;
}



// FUNCTION 14daea480 FUN_14daea480 body=337 status=ok
// SIG undefined FUN_14daea480(void)

void FUN_14daea480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R15;
  longlong local_res8;
  
  uVar1 = *(undefined8 *)(unaff_RSI + -8);
  uVar2 = FUN_15af9ffe9();
  *(undefined8 *)(&stack0xfffffffffffffff0 + unaff_R15) = uVar1;
  *(undefined8 *)(local_res8 + -8) = in_RAX;
  *(undefined8 *)(local_res8 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res8 + -0x10) = uVar2;
  *(undefined8 *)(local_res8 + -0x18) = in_R11;
  *(undefined8 *)(local_res8 + -0x20) = param_2;
  uVar1 = *(undefined8 *)(local_res8 + -0x20);
  *(undefined8 *)(local_res8 + -0x10) = param_3;
  *(undefined8 *)(local_res8 + -0x18) = param_3;
  *(undefined8 *)(local_res8 + -0x20) = unaff_R12;
  FUN_164b501ce(param_1,uVar1,*(undefined8 *)(local_res8 + -8));
  return;
}



// FUNCTION 14daea675 FUN_14daea675 body=763 status=ok
// SIG undefined FUN_14daea675(void)

/* WARNING: Removing unreachable block (ram,0x00014daea6ce) */
/* WARNING: Removing unreachable block (ram,0x00014daea8c3) */
/* WARNING: Removing unreachable block (ram,0x00014daea713) */
/* WARNING: Removing unreachable block (ram,0x00014daea730) */
/* WARNING: Removing unreachable block (ram,0x00014daea78a) */
/* WARNING: Removing unreachable block (ram,0x00014daea87b) */
/* WARNING: Removing unreachable block (ram,0x00014daea92c) */
/* WARNING: Removing unreachable block (ram,0x00014daea725) */

undefined8 FUN_14daea675(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160d73993();
  return uVar1;
}



// FUNCTION 14daea974 FUN_14daea974 body=69 status=ok
// SIG undefined FUN_14daea974(void)

void FUN_14daea974(void)

{
  return;
}


