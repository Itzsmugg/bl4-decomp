// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da0d42a FUN_14da0d42a body=206 status=ok
// SIG undefined FUN_14da0d42a(void)

/* WARNING: Removing unreachable block (ram,0x00014da0d4d5) */

void FUN_14da0d42a(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~((unaff_R15 - (unaff_RBP | unaff_R15)) + param_2) & unaff_RDI;
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x68) ^ unaff_R15)) {
    FUN_165e100b8(param_1,uVar1);
    return;
  }
  FUN_165e100b8(param_1,uVar1);
  return;
}



// FUNCTION 14da0d5eb FUN_14da0d5eb body=139 status=ok
// SIG undefined FUN_14da0d5eb(void)

void FUN_14da0d5eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15738e919(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da0d7bd FUN_14da0d7bd body=159 status=ok
// SIG undefined FUN_14da0d7bd(void)

void FUN_14da0d7bd(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x50) & param_1;
  FUN_1622cca28(param_1,((*(ulonglong *)(unaff_RDI + -0x50) + param_1) -
                        ((uVar1 << 1 | uVar1 >> 0x3f | 1) - 1)) + 1,
                *(ulonglong *)(unaff_RDI + -0x30) | param_1,FUN_1622cca28);
  return;
}



// FUNCTION 14da0d85c FUN_14da0d85c body=142 status=ok
// SIG undefined FUN_14da0d85c(void)

void FUN_14da0d85c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  
  FUN_162c96755(0xff,param_2,param_3,in_stack_00000008,in_stack_00000018 & param_1);
  return;
}



// FUNCTION 14da0dac8 FUN_14da0dac8 body=473 status=ok
// SIG undefined FUN_14da0dac8(void)

void FUN_14da0dac8(void)

{
  FUN_162313b4c();
  (*(code *)0x1568d4dd8)(0x1568d4dd8,0xffffffffe4707f23);
  return;
}



// FUNCTION 14da0dca8 thunk_FUN_14da0dcae body=5 status=ok
// SIG undefined thunk_FUN_14da0dcae(void)

void thunk_FUN_14da0dcae(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166c16d88(*(ulonglong *)(unaff_R12 + -0x80) | in_RAX,&DAT_ffffffd0,
                *(ulonglong *)(unaff_R12 + -0x80) & in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14da0dcae FUN_14da0dcae body=145 status=ok
// SIG undefined FUN_14da0dcae(void)

void FUN_14da0dcae(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166c16d88(*(ulonglong *)(unaff_R12 + -0x80) | in_RAX,&DAT_ffffffd0,
                *(ulonglong *)(unaff_R12 + -0x80) & in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14da0ddd1 thunk_FUN_14da0ddd7 body=5 status=ok
// SIG undefined thunk_FUN_14da0ddd7(void)

void thunk_FUN_14da0ddd7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1662b921c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da0ddd7 FUN_14da0ddd7 body=140 status=ok
// SIG undefined FUN_14da0ddd7(void)

void FUN_14da0ddd7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1662b921c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da0de66 FUN_14da0de66 body=143 status=ok
// SIG undefined FUN_14da0de66(void)

void FUN_14da0de66(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RDI;
  longlong in_R10;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) ^ 0xffffffffffffffff;
  lVar2 = *(longlong *)(in_R10 + 8);
  *(undefined8 *)(in_R10 + 8) = 0;
  *(longlong *)(in_R10 + 8) =
       *(longlong *)(in_R10 + 8) + ((~(uVar1 & unaff_R15) + unaff_R15) - lVar2);
  *(ulonglong *)(in_R10 + 8) = -1 - (unaff_RDI & *(ulonglong *)(in_R10 + 8));
  FUN_15b78c598(0x2e39f191,param_2,FUN_15b78c598);
  return;
}



// FUNCTION 14da0def6 FUN_14da0def6 body=198 status=ok
// SIG undefined FUN_14da0def6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da0def6(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = FUN_15b7406a0(0xffffffff93301a5f,
                        *(ulonglong *)(unaff_RSI + -0x90) + unaff_RBP +
                        (*(ulonglong *)(unaff_RSI + -0x90) & unaff_RBP) * -2,FUN_15b7406a0);
  return uVar1;
}



// FUNCTION 14da0e00a FUN_14da0e00a body=94 status=ok
// SIG undefined FUN_14da0e00a(void)

void FUN_14da0e00a(void)

{
  return;
}



// FUNCTION 14da0e0ae FUN_14da0e0ae body=122 status=ok
// SIG undefined FUN_14da0e0ae(void)

void FUN_14da0e0ae(undefined8 param_1)

{
  byte unaff_SIL;
  byte in_stack_00000028;
  
  (*(code *)&LAB_166c2305e)(param_1,in_stack_00000028 - (unaff_SIL | in_stack_00000028));
  return;
}



// FUNCTION 14da0e128 FUN_14da0e128 body=284 status=ok
// SIG undefined FUN_14da0e128(void)

void FUN_14da0e128(undefined8 param_1)

{
  FUN_14dc872ef(param_1);
  return;
}



// FUNCTION 14da0e4df FUN_14da0e4df body=162 status=ok
// SIG undefined FUN_14da0e4df(void)

void FUN_14da0e4df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)
           ((~(~in_RAX & *(ulonglong *)(unaff_R12 + -0xa0)) + *(ulonglong *)(unaff_R12 + -0xa0)) -
           in_RAX)) {
    return;
  }
  FUN_161312e52(param_1,FUN_161312e52,param_3);
  return;
}



// FUNCTION 14da0e58e FUN_14da0e58e body=184 status=ok
// SIG undefined FUN_14da0e58e(void)

/* WARNING: Removing unreachable block (ram,0x00014da0e642) */

void FUN_14da0e58e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (0xffffffffffff90e4 < unaff_RDI - 0x6f83U) {
    (*(code *)0x165433eeb)
              (param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                       (~*(ulonglong *)(unaff_RDI + -0x68) | param_1) ^ 0xffffffffffffffff,param_3);
    return;
  }
  FUN_16286a6a8();
  return;
}



// FUNCTION 14da0e648 FUN_14da0e648 body=421 status=ok
// SIG undefined FUN_14da0e648(void)

/* WARNING: Removing unreachable block (ram,0x00014da0e6ea) */
/* WARNING: Removing unreachable block (ram,0x00014da0e6dc) */
/* WARNING: Removing unreachable block (ram,0x00014da0e6f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da0e648(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_14dd40f03(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(((~unaff_R15 - (~uVar1 | ~unaff_R15)) + ~uVar1 | uVar1) & (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14da0ebcb FUN_14da0ebcb body=180 status=ok
// SIG undefined FUN_14da0ebcb(void)

/* WARNING: Removing unreachable block (ram,0x00014da0ec63) */

void FUN_14da0ebcb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14df3c269(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da0ed02 FUN_14da0ed02 body=127 status=ok
// SIG undefined FUN_14da0ed02(void)

void FUN_14da0ed02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  FUN_16554ae4e(unaff_retaddr,param_2,param_3,
                ~((~(~unaff_retaddr & uVar1) + uVar1) - unaff_retaddr & (~uVar1 | unaff_retaddr)));
  (*(code *)0x1647e9621)();
  return;
}



// FUNCTION 14da0ed81 FUN_14da0ed81 body=166 status=ok
// SIG undefined FUN_14da0ed81(void)

void FUN_14da0ed81(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  
  (*(code *)0x1647e9621)
            (param_1,*(undefined8 *)(param_1 + -0x88),*(undefined8 *)(param_1 + -0x88),
             ~(~(unaff_RBX & ~param_4) & (~param_4 | unaff_RBX)));
  return;
}



// FUNCTION 14da0ee27 FUN_14da0ee27 body=344 status=ok
// SIG undefined FUN_14da0ee27(void)

void FUN_14da0ee27(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  FUN_156f04166();
  if (unaff_R15 == 0) {
    FUN_164981247();
    return;
  }
  if (unaff_R15 != 0) {
    FUN_164981247();
    return;
  }
  FUN_14da0ef83(unaff_retaddr,param_2,local_res20 + unaff_R15);
  return;
}



// FUNCTION 14da0ef83 FUN_14da0ef83 body=158 status=ok
// SIG undefined FUN_14da0ef83(void)

void FUN_14da0ef83(undefined8 param_1,undefined8 param_2)

{
  short *in_RAX;
  short unaff_BX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *in_RAX = (-0x101 - unaff_BX) + *in_RAX;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -8) = 0;
  FUN_162cf4406(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da0f155 FUN_14da0f155 body=164 status=ok
// SIG undefined FUN_14da0f155(void)

undefined8 FUN_14da0f155(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da0f2ad FUN_14da0f2ad body=148 status=ok
// SIG undefined FUN_14da0f2ad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da0f483) */
/* WARNING: Removing unreachable block (ram,0x00014da0f489) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8615) */
/* WARNING: Removing unreachable block (ram,0x00014da0f3d7) */

void FUN_14da0f2ad(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ushort *puVar1;
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res10 = ~(local_res10 & unaff_R15) & (local_res10 | unaff_R15);
  local_res18 = ~(local_res18 & unaff_R15);
  FUN_16637b981();
  puVar1 = (ushort *)((longlong)&local_res10 + (param_1 - (param_4 + 0x98ec6a8)));
  *puVar1 = (*puVar1 | 0x100) - 0x100;
  if ((local_res18 & 0x80) == 0) {
    FUN_1665e7541();
    return;
  }
  FUN_1665e7541();
  return;
}



// FUNCTION 14da0f342 FUN_14da0f342 body=141 status=ok
// SIG undefined FUN_14da0f342(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da0f483) */
/* WARNING: Removing unreachable block (ram,0x00014da0f489) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8615) */
/* WARNING: Removing unreachable block (ram,0x00014da0f3d7) */

void FUN_14da0f342(longlong param_1)

{
  ushort *puVar1;
  longlong unaff_retaddr;
  ushort local_res10 [4];
  ulonglong uStackX_18;
  
  puVar1 = (ushort *)((longlong)local_res10 + (param_1 - (unaff_retaddr + 0x98ec6a8)));
  *puVar1 = (*puVar1 | 0x100) - 0x100;
  if ((uStackX_18 & 0x80) == 0) {
    FUN_1665e7541();
    return;
  }
  FUN_1665e7541();
  return;
}



// FUNCTION 14da0f3d7 FUN_14da0f3d7 body=183 status=ok
// SIG undefined FUN_14da0f3d7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da0f483) */
/* WARNING: Removing unreachable block (ram,0x00014da0f489) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8615) */

void FUN_14da0f3d7(void)

{
  longlong *plVar1;
  ushort *unaff_RBX;
  undefined8 unaff_R14;
  undefined8 local_res10;
  longlong local_res18;
  longlong in_stack_00000028;
  
  *unaff_RBX = (*unaff_RBX | 0x100) - 0x100;
  plVar1 = (longlong *)(in_stack_00000028 + -8);
  *plVar1 = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R14;
  *(longlong *)(in_stack_00000028 + -0x10) = *plVar1;
  *plVar1 = 0;
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res10;
  *plVar1 = (longlong)(FUN_15b08c136 + *plVar1);
  FUN_15b08c0c7();
  return;
}



// FUNCTION 14da0f48f FUN_14da0f48f body=134 status=ok
// SIG undefined FUN_14da0f48f(void)

void FUN_14da0f48f(void)

{
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  FUN_165ab2907(FUN_165ab2907,-~unaff_R15 - (~local_res18 + 2));
  return;
}



// FUNCTION 14da0f516 FUN_14da0f516 body=150 status=ok
// SIG undefined FUN_14da0f516(void)

void FUN_14da0f516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  (*(code *)0x1659531fb)
            (in_stack_00000008,*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15,param_3,
             *(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14da0f65e FUN_14da0f65e body=86 status=ok
// SIG undefined FUN_14da0f65e(void)

void FUN_14da0f65e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16688251b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da0f746 FUN_14da0f746 body=134 status=ok
// SIG undefined FUN_14da0f746(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da0f746(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int unaff_ESI;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -0x18) = &LAB_14da0f7e9;
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(longlong *)(local_res10 + -8) =
       *(longlong *)(local_res10 + -8) - *(longlong *)(local_res10 + -0x18);
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  out(*(undefined4 *)
       (ulonglong)
       ((unaff_ESI - ((int)local_res10 + -8)) -
       (uint)(&DAT_fffffffffffffff7 < (undefined1 *)(local_res10 + -0x10))),param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da0f89c FUN_14da0f89c body=511 status=ok
// SIG undefined FUN_14da0f89c(void)

/* WARNING: Removing unreachable block (ram,0x00014da0f92e) */
/* WARNING: Removing unreachable block (ram,0x00014da0f93a) */
/* WARNING: Removing unreachable block (ram,0x000165912411) */

void FUN_14da0f89c(void)

{
  return;
}



// FUNCTION 14da0f9e2 FUN_14da0f9e2 body=166 status=ok
// SIG undefined FUN_14da0f9e2(void)

void FUN_14da0f9e2(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  longlong *unaff_RDI;
  ulonglong unaff_R12;
  undefined8 in_stack_00000010;
  
  *unaff_RDI = (param_3 & unaff_R12) - *unaff_RDI;
  *unaff_RDI = *unaff_RDI - ~unaff_RBX;
  (*(code *)0x14d91da01)(0xfffffffffffffff8,0x14d91da01,in_stack_00000010);
  return;
}



// FUNCTION 14da0fc57 FUN_14da0fc57 body=177 status=ok
// SIG undefined FUN_14da0fc57(void)

/* WARNING: Instruction at (ram,0x000164986fbc) overlaps instruction at (ram,0x000164986fbb)
    */
/* WARNING: Removing unreachable block (ram,0x00014da0fd03) */
/* WARNING: Removing unreachable block (ram,0x000164986ed6) */
/* WARNING: Removing unreachable block (ram,0x000164986fbc) */
/* WARNING: Removing unreachable block (ram,0x000164986fbb) */
/* WARNING: Removing unreachable block (ram,0x00014da0fd09) */

void FUN_14da0fc57(void)

{
  FUN_164986ed6();
  return;
}



// FUNCTION 14da0fd09 FUN_14da0fd09 body=134 status=ok
// SIG undefined FUN_14da0fd09(void)

void FUN_14da0fd09(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong *in_R10;
  ulonglong unaff_R15;
  
  uVar1 = *in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = (~(uVar1 & unaff_R15) + unaff_R15) - *in_R10;
  *in_R10 = ~(unaff_RBP & *in_R10);
  return;
}



// FUNCTION 14da0fe44 FUN_14da0fe44 body=298 status=ok
// SIG undefined FUN_14da0fe44(void)

void FUN_14da0fe44(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  longlong alStackX_18 [2];
  
  param_3 = param_3 - (in_R11 ^ 0x2a5d81df);
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0);
  *(undefined8 *)((longlong)alStackX_18 + param_3) = 0;
  *(ulonglong *)((longlong)alStackX_18 + param_3) =
       *(longlong *)((longlong)alStackX_18 + param_3) - (~uVar2 + 1);
  *(undefined8 *)((longlong)&uStackX_10 + param_3) = in_RAX;
  *(undefined4 *)((longlong)&uStackX_10 + param_3) = 0x9c03fab;
  *(undefined4 *)((longlong)alStackX_18 + param_3 + -4) = 0;
  puVar1 = (undefined8 *)
           (&stack0xfffffffff63fc075 + *(longlong *)((longlong)&uStackX_10 + param_3) + param_3);
  uVar3 = *puVar1;
  *puVar1 = unaff_RSI;
  uVar4 = *puVar1;
  *puVar1 = unaff_RBP;
  puVar1[-2] = 0x14da0fee1;
  FUN_165bcb5f2(param_1,uStackX_8,uVar3);
  uVar3 = *puVar1;
  *puVar1 = uVar4;
  puVar1[-1] = *(undefined8 *)(unaff_R12 + -0xa0);
  *puVar1 = FUN_165bcb5f2;
  *puVar1 = *puVar1;
  puVar1[-1] = unaff_RBX;
  puVar1[-1] = uVar3;
  puVar1[-2] = param_1;
  FUN_165b8909e(puVar1[-2]);
  return;
}



// FUNCTION 14da10067 FUN_14da10067 body=165 status=ok
// SIG undefined FUN_14da10067(void)

void FUN_14da10067(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong uVar1;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong lStackX_20;
  
  *(ulonglong *)(unaff_R13 + 0x10) = ~(param_1 + 1U);
  *(undefined8 *)(lStackX_20 + -8) = in_R11;
  *(undefined8 *)(lStackX_20 + -0x10) = in_R11;
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined4 *)(lStackX_20 + -0x20) = 0x3824b239;
  *(undefined4 *)(lStackX_20 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(lStackX_20 + -0x18);
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_20 + -0x20) = uStackX_10;
  *(undefined4 *)(lStackX_20 + -0x28) = 0x5ff26fe0;
  *(undefined4 *)(lStackX_20 + -0x24) = 0;
  (*(code *)&LAB_156470a1e)(&LAB_156470a1e,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da10112 FUN_14da10112 body=319 status=ok
// SIG undefined FUN_14da10112(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da10112(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong in_R10;
  ulonglong unaff_R15;
  ulonglong local_res10 [3];
  
  uVar1 = local_res10[1] & unaff_R15;
  local_res10[1] = ~uVar1;
  local_res10[1] =
       ~(uVar1 | ~(*(ulonglong *)
                    ((longlong)local_res10 + ~(in_R10 & (unaff_RBX | 0xffffffffd0476d2a))) |
                  unaff_R15));
  local_res10[0] = param_2;
  FUN_1666048dd(param_1,local_res10[2],param_3,param_4);
  (*(code *)0x1651b639d)(0x1651b639d,0xffffffffffffff88);
  return;
}



// FUNCTION 14da10361 FUN_14da10361 body=296 status=ok
// SIG undefined FUN_14da10361(void)

/* WARNING: Removing unreachable block (ram,0x00014da103f5) */
/* WARNING: Removing unreachable block (ram,0x00014da1047b) */
/* WARNING: Removing unreachable block (ram,0x00015b1251b2) */
/* WARNING: Removing unreachable block (ram,0x00015b125221) */
/* WARNING: Removing unreachable block (ram,0x00015b125227) */
/* WARNING: Removing unreachable block (ram,0x000161597c42) */
/* WARNING: Removing unreachable block (ram,0x00015b12522c) */

void FUN_14da10361(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (param_2 == 0x110a9f) {
    FUN_1662eee07(param_1,0x14d7aa77e);
    return;
  }
  if (0x110a9e < param_2) {
    FUN_1627242f4();
    return;
  }
  if (param_2 == 0x110aa0) {
    FUN_1662eee07(param_1,&DAT_14d7ac2fc,param_3);
    return;
  }
  return;
}



// FUNCTION 14da106df FUN_14da106df body=192 status=ok
// SIG undefined FUN_14da106df(void)

void FUN_14da106df(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 uStackX_10;
  ulonglong in_stack_00000020;
  
  FUN_1652f4397(uStackX_10,&stack0x00000018,param_3,param_4,unaff_RBX,
                ((in_stack_00000020 | param_1) -
                (~(in_stack_00000020 & param_1) | in_stack_00000020 | param_1)) +
                ~(in_stack_00000020 & param_1));
  return;
}



// FUNCTION 14da1088b FUN_14da1088b body=690 status=ok
// SIG undefined FUN_14da1088b(void)

/* WARNING: Removing unreachable block (ram,0x00014da10a56) */

void FUN_14da1088b(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RSI;
  code *pcVar2;
  undefined8 unaff_R13;
  ulonglong local_20;
  
  lVar1 = *(longlong *)(unaff_RSI + -0x98);
  pcVar2 = FUN_160d3c830;
  local_20 = 0x14da10933;
  FUN_160d3c830();
  *(undefined8 *)(pcVar2 + 8) = unaff_R13;
  local_20 = 0x14da109b9;
  FUN_14dbafb53();
  local_20 = *(ulonglong *)(lVar1 + -0x80) ^ param_1;
  if (-1 < (longlong)&local_20) {
    FUN_15b16adc8();
    return;
  }
  FUN_15b16adc8();
  return;
}



// FUNCTION 14da10bf0 FUN_14da10bf0 body=172 status=ok
// SIG undefined FUN_14da10bf0(void)

undefined8 FUN_14da10bf0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da10c9c FUN_14da10c9c body=164 status=ok
// SIG undefined FUN_14da10c9c(void)

void FUN_14da10c9c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x15682eed1)(param_1,param_2);
  return;
}



// FUNCTION 14da10def FUN_14da10def body=408 status=ok
// SIG undefined FUN_14da10def(void)

/* WARNING: Removing unreachable block (ram,0x00014da10f13) */
/* WARNING: Removing unreachable block (ram,0x00014da10f24) */
/* WARNING: Removing unreachable block (ram,0x00014da10f54) */
/* WARNING: Removing unreachable block (ram,0x00014da10f65) */
/* WARNING: Removing unreachable block (ram,0x00014da10f1f) */

undefined8 FUN_14da10def(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  
  FUN_14de1e25c(param_1,in_RAX + unaff_RBP + (in_RAX & unaff_RBP) * -2);
  uVar1 = FUN_156dfd6b2();
  return uVar1;
}



// FUNCTION 14da10fc2 FUN_14da10fc2 body=486 status=ok
// SIG undefined FUN_14da10fc2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da111a8) overlaps instruction at (ram,0x00014da111a7)
    */
/* WARNING: Removing unreachable block (ram,0x00014da11247) */
/* WARNING: Removing unreachable block (ram,0x00014da110f4) */
/* WARNING: Removing unreachable block (ram,0x00014da111a7) */
/* WARNING: Removing unreachable block (ram,0x00014da111a8) */
/* WARNING: Removing unreachable block (ram,0x00014da111de) */
/* WARNING: Removing unreachable block (ram,0x00014da111e4) */
/* WARNING: Removing unreachable block (ram,0x00014da111ee) */
/* WARNING: Removing unreachable block (ram,0x00014da111f2) */
/* WARNING: Removing unreachable block (ram,0x00014da111dd) */
/* WARNING: Removing unreachable block (ram,0x000162832fd8) */

void FUN_14da10fc2(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 local_res18;
  
  uVar1 = ~param_1 & local_res18 | param_1;
  FUN_165b579db((~uVar1 | local_res18 & param_1 ^ 0xffffffffffffffff) + uVar1 + 1);
  FUN_162832fd8();
  return;
}



// FUNCTION 14da11205 thunk_FUN_14da1120a body=5 status=ok
// SIG undefined thunk_FUN_14da1120a(void)

/* WARNING: Removing unreachable block (ram,0x00014da11247) */

void thunk_FUN_14da1120a(ulonglong param_1,ulonglong param_2)

{
  FUN_1658b4951((short)param_1,param_2 ^ param_1);
  return;
}



// FUNCTION 14da1120a FUN_14da1120a body=137 status=ok
// SIG undefined FUN_14da1120a(void)

/* WARNING: Removing unreachable block (ram,0x00014da11247) */

void FUN_14da1120a(ulonglong param_1,ulonglong param_2)

{
  FUN_1658b4951((short)param_1,param_2 ^ param_1);
  return;
}



// FUNCTION 14da11293 FUN_14da11293 body=181 status=ok
// SIG undefined FUN_14da11293(void)

void FUN_14da11293(void)

{
  FUN_161148cca();
  return;
}



// FUNCTION 14da11349 FUN_14da11349 body=57 status=ok
// SIG undefined FUN_14da11349(void)

void FUN_14da11349(void)

{
  return;
}



// FUNCTION 14da1164e FUN_14da1164e body=155 status=ok
// SIG undefined FUN_14da1164e(void)

void FUN_14da1164e(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong unaff_R15;
  undefined4 local_res8;
  int local_resc;
  
  lVar2 = CONCAT44(local_resc + 0x5e835b41,local_res8);
  *(ulonglong *)(&stack0xfffffffffe70a563 + lVar2) = ~param_1;
  uVar1 = *(undefined8 *)(&stack0xfffffffffe70a563 + lVar2);
  *(ulonglong *)(&stack0xfffffffffe70a563 + lVar2) =
       (-~unaff_R15 - (~in_RAX + 2)) + (in_RAX & unaff_R15) * -2;
  *(undefined4 *)(&stack0xfffffffffe70a563 + lVar2) = 0;
  *(undefined4 *)(&stack0xfffffffffe70a567 + lVar2) = 0;
  *(undefined8 *)(&stack0xfffffffffe70a563 + lVar2) = uVar1;
  *(undefined8 *)(&stack0xfffffffffe70a55b + lVar2) = param_2;
  *(undefined8 *)(&stack0xfffffffffe70a553 + lVar2) = param_2;
  *(code **)(&stack0xfffffffffe70a55b + lVar2) = FUN_14da116ec;
  (*(code *)&LAB_1660b81fc)(&LAB_1660b81fc,*(undefined8 *)(&stack0xfffffffffe70a553 + lVar2));
  return;
}



// FUNCTION 14da116ec FUN_14da116ec body=153 status=ok
// SIG undefined FUN_14da116ec(void)

/* WARNING: Removing unreachable block (ram,0x00014da1172c) */

void FUN_14da116ec(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  FUN_160caf6bf(param_1,FUN_160caf6bf,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~(param_4 & param_1) & param_2);
  return;
}



// FUNCTION 14da1192b FUN_14da1192b body=163 status=ok
// SIG undefined FUN_14da1192b(void)

/* WARNING: Removing unreachable block (ram,0x00014da1198b) */

void FUN_14da1192b(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong auStackX_8 [4];
  
  *(longlong *)((longlong)auStackX_8 + param_2) = *(longlong *)(unaff_R12 + param_1);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_2 + 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 + *(longlong *)((longlong)auStackX_8 + param_2);
  uVar2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)puVar1 = 0xe87dee1b;
  *(ulonglong *)((longlong)auStackX_8 + param_2 + 8) = uVar2 ^ in_RAX;
  *(ulonglong *)((longlong)auStackX_8 + param_2) = uVar2 ^ in_RAX;
  *(undefined1 **)((longlong)auStackX_8 + param_2 + 8) = &LAB_14da119d6;
  return;
}



// FUNCTION 14da11a5f FUN_14da11a5f body=117 status=ok
// SIG undefined FUN_14da11a5f(void)

void FUN_14da11a5f(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  longlong local_res18 [2];
  undefined8 uStack0000000000000028;
  
  local_res18[1] = -(unaff_R15 - *(longlong *)((longlong)local_res18 + (unaff_RDI - unaff_R12)));
  uStack0000000000000028 = param_2;
  (*(code *)0x1652dcc65)(param_1,0x1652dcc65);
  return;
}



// FUNCTION 14da11b57 FUN_14da11b57 body=54 status=ok
// SIG undefined FUN_14da11b57(void)

void FUN_14da11b57(void)

{
  return;
}



// FUNCTION 14da11d27 FUN_14da11d27 body=128 status=ok
// SIG undefined FUN_14da11d27(void)

/* WARNING: Removing unreachable block (ram,0x00014da11d9c) */
/* WARNING: Removing unreachable block (ram,0x00014da11da7) */
/* WARNING: Removing unreachable block (ram,0x00014da11e1f) */
/* WARNING: Removing unreachable block (ram,0x00014da11e25) */
/* WARNING: Removing unreachable block (ram,0x00016538ce66) */
/* WARNING: Removing unreachable block (ram,0x00014da11da2) */

undefined8 FUN_14da11d27(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da11da7 FUN_14da11da7 body=271 status=ok
// SIG undefined FUN_14da11da7(void)

/* WARNING: Removing unreachable block (ram,0x00014da11e25) */

void FUN_14da11da7(undefined8 param_1)

{
  FUN_14daddc0c(param_1);
  return;
}



// FUNCTION 14da11f5a FUN_14da11f5a body=323 status=ok
// SIG undefined FUN_14da11f5a(void)

/* WARNING: Removing unreachable block (ram,0x00014da11ff6) */
/* WARNING: Removing unreachable block (ram,0x00014da1212f) */
/* WARNING: Removing unreachable block (ram,0x000165a5d4e3) */
/* WARNING: Removing unreachable block (ram,0x00014da12135) */
/* WARNING: Removing unreachable block (ram,0x00014da121d5) */
/* WARNING: Removing unreachable block (ram,0x00015744e176) */
/* WARNING: Removing unreachable block (ram,0x00014da121db) */

undefined8 FUN_14da11f5a(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if (-1 < (longlong)uVar1) {
    uVar2 = FUN_1665a0ec9();
    return uVar2;
  }
  uVar2 = FUN_162e2a494(param_1,uVar1 + param_1 + (uVar1 & param_1) * -2,param_3 ^ param_1);
  return uVar2;
}



// FUNCTION 14da120a0 FUN_14da120a0 body=494 status=ok
// SIG undefined FUN_14da120a0(void)

/* WARNING: Removing unreachable block (ram,0x00014da121db) */
/* WARNING: Removing unreachable block (ram,0x00014da12135) */
/* WARNING: Removing unreachable block (ram,0x00014da121d5) */
/* WARNING: Removing unreachable block (ram,0x00015744e176) */

undefined8 FUN_14da120a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160ccfd0c(param_1,&DAT_0000feff,param_3,FUN_160ccfd0c);
  return uVar1;
}



// FUNCTION 14da121e1 FUN_14da121e1 body=339 status=ok
// SIG undefined FUN_14da121e1(void)

/* WARNING: Removing unreachable block (ram,0x00014da1231b) */
/* WARNING: Removing unreachable block (ram,0x00014da12327) */
/* WARNING: Removing unreachable block (ram,0x000156f4d919) */

undefined8 FUN_14da121e1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  longlong lVar2;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  lVar2 = unaff_R13 + local_res20 * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x10) = in_R10;
  *(undefined8 *)(lVar2 + -0x18) = in_R10;
  *(undefined8 *)(lVar2 + -0x20) = uStackX_10;
  *(undefined4 *)(lVar2 + -0x28) = 0x6101f40f;
  *(undefined4 *)(lVar2 + -0x24) = 0;
  *(undefined8 *)(lVar2 + -0x28) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x30) = 0x14da12292;
  FUN_1617f7479();
  *(undefined8 *)(lVar2 + -0x30) = param_1;
  uVar1 = FUN_156f4d919();
  return uVar1;
}



// FUNCTION 14da12a28 FUN_14da12a28 body=170 status=ok
// SIG undefined FUN_14da12a28(void)

void FUN_14da12a28(void)

{
  (*(code *)&LAB_164b9f6f4)();
  return;
}



// FUNCTION 14da12ad2 FUN_14da12ad2 body=161 status=ok
// SIG undefined FUN_14da12ad2(void)

ulonglong FUN_14da12ad2(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined2 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_R12 + 0x10) =
       ~(~(~param_3 & (uVar1 ^ 0xffffffffffffffff)) & *(ulonglong *)(unaff_R12 + 0x10));
  return CONCAT62((int6)((ulonglong)in_RAX >> 0x10),local_res20) | 0x100;
}



// FUNCTION 14da12caf FUN_14da12caf body=117 status=ok
// SIG undefined FUN_14da12caf(void)

void FUN_14da12caf(undefined8 param_1)

{
  thunk_FUN_166187b36(param_1);
  return;
}



// FUNCTION 14da12dcf FUN_14da12dcf body=264 status=ok
// SIG undefined FUN_14da12dcf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da12dcf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  undefined1 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  uVar1 = FUN_15b603e13(uVar2,FUN_15b603e13);
  uVar3 = ~*(ulonglong *)(unaff_R15 + 0x10) & ~uVar1 | *(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | uVar1;
  *(ulonglong *)(unaff_R15 + 0x10) =
       ~((*(longlong *)(unaff_R15 + 0x10) - (uVar3 | *(ulonglong *)(unaff_R15 + 0x10))) + uVar3);
  LOCK();
  FUN_14d7a976e = uStackX_10;
  UNLOCK();
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = 0x2fb7428;
  *(undefined8 *)(local_res20 + -0x20) = 0x275a004;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  FUN_15b229f38(uVar2,uStackX_8,*(undefined8 *)(local_res20 + -0x18));
  return;
}



// FUNCTION 14da12eda FUN_14da12eda body=149 status=ok
// SIG undefined FUN_14da12eda(void)

void FUN_14da12eda(void)

{
  FUN_156eeaa4f();
  return;
}



// FUNCTION 14da12f6f FUN_14da12f6f body=140 status=ok
// SIG undefined FUN_14da12f6f(void)

/* WARNING: Removing unreachable block (ram,0x00014da12fed) */

void FUN_14da12f6f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  (*(code *)0x162b0b76e)(in_stack_00000010,param_2,0x10,in_stack_00000008);
  return;
}



// FUNCTION 14da131e9 FUN_14da131e9 body=152 status=ok
// SIG undefined FUN_14da131e9(void)

void FUN_14da131e9(void)

{
  return;
}



// FUNCTION 14da134df FUN_14da134df body=123 status=ok
// SIG undefined FUN_14da134df(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001648bcd23) */
/* WARNING: Removing unreachable block (ram,0x0001648bcdc1) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ed9e) */
/* WARNING: Removing unreachable block (ram,0x0001648bcdc7) */
/* WARNING: Removing unreachable block (ram,0x0001648bce6d) */
/* WARNING: Removing unreachable block (ram,0x0001648bce78) */
/* WARNING: Removing unreachable block (ram,0x0001648bce7e) */
/* WARNING: Removing unreachable block (ram,0x00014e175d2a) */
/* WARNING: Removing unreachable block (ram,0x00014da13555) */
/* WARNING: Removing unreachable block (ram,0x00014da1355b) */
/* WARNING: Removing unreachable block (ram,0x00014da135e8) */
/* WARNING: Removing unreachable block (ram,0x00014da135ee) */
/* WARNING: Removing unreachable block (ram,0x00014da135f3) */
/* WARNING: Removing unreachable block (ram,0x00014da13682) */
/* WARNING: Removing unreachable block (ram,0x00014da13688) */
/* WARNING: Removing unreachable block (ram,0x00014d7a54f0) */
/* WARNING: Removing unreachable block (ram,0x0001648bcc8e) */
/* WARNING: Removing unreachable block (ram,0x0001648bcd18) */
/* WARNING: Removing unreachable block (ram,0x0001648bcd1e) */
/* WARNING: Removing unreachable block (ram,0x000162565a79) */
/* WARNING: Removing unreachable block (ram,0x000162565b0d) */
/* WARNING: Removing unreachable block (ram,0x000165ae6f87) */

undefined8 FUN_14da134df(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong *unaff_RSI;
  ulonglong unaff_R15;
  undefined8 uStackX_18;
  
  uVar1 = FUN_1654a0b10();
  *unaff_RSI = param_2 ^ 0xffffffffffffffff -
                         ((unaff_R15 ^ 0xffffffffffffffff | uStackX_18) &
                         (0xfffffffffffffffe - ~-uStackX_18 | unaff_R15));
  return uVar1;
}



// FUNCTION 14da1355b FUN_14da1355b body=446 status=ok
// SIG undefined FUN_14da1355b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001648bcd23) */
/* WARNING: Removing unreachable block (ram,0x0001648bcdc1) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ed9e) */
/* WARNING: Removing unreachable block (ram,0x0001648bcdc7) */
/* WARNING: Removing unreachable block (ram,0x0001648bce6d) */
/* WARNING: Removing unreachable block (ram,0x0001648bce78) */
/* WARNING: Removing unreachable block (ram,0x0001648bce7e) */
/* WARNING: Removing unreachable block (ram,0x00014e175d2a) */
/* WARNING: Removing unreachable block (ram,0x000162565a79) */
/* WARNING: Removing unreachable block (ram,0x000162565b0d) */
/* WARNING: Removing unreachable block (ram,0x000165ae6f87) */
/* WARNING: Removing unreachable block (ram,0x00014da135f3) */
/* WARNING: Removing unreachable block (ram,0x00014da13682) */
/* WARNING: Removing unreachable block (ram,0x00014da13688) */
/* WARNING: Removing unreachable block (ram,0x00014d7a54f0) */

undefined8 FUN_14da1355b(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  if ((~(uVar1 & param_1) & (uVar1 + param_1) - (uVar1 & param_1)) == 0) {
    uVar2 = FUN_1648bcc8e();
    return uVar2;
  }
  uVar2 = FUN_162565a79();
  return uVar2;
}



// FUNCTION 14da1371d FUN_14da1371d body=176 status=ok
// SIG undefined FUN_14da1371d(void)

undefined8
FUN_14da1371d(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined8 *param_7)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
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
  ulonglong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = *(longlong *)(param_2 + param_1 + 0x50f3aec1);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & local_res8;
  *(ulonglong *)(param_2 + 0x10) = (lVar1 + local_res8) - *(longlong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) =
       ~((*(longlong *)(param_2 + 0x10) - (in_RAX | *(ulonglong *)(param_2 + 0x10))) + in_RAX);
  if (-1 < (int)local_res8) {
    return local_res20;
  }
  bVar12 = (param_6 & 0x4000) != 0;
  bVar11 = (param_6 & 0x800) != 0;
  bVar10 = (param_6 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (param_6 & 0x80) != 0;
  bVar7 = (param_6 & 0x40) != 0;
  bVar6 = (param_6 & 0x10) != 0;
  bVar5 = (param_6 & 4) != 0;
  bVar4 = (param_6 & 1) != 0;
  bVar16 = (param_6 & 0x200000) != 0;
  bVar13 = (param_6 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar3 = (*pcVar2)(param_5,local_res18,param_3,param_4);
  *param_7 = unaff_R14;
  param_7[-1] = unaff_R14;
  param_7[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
                (ulonglong)((param_6 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
                (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
                (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
                (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
                (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
                (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = param_7[-2];
  param_7[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar17 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar17 & 0x80) != 0) * 0x80 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
                (ulonglong)((uVar17 & 1) != 0) | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  param_7[-3] = 0x4c22185;
  param_7[-3] = param_7[-3] + -0x47de49;
  uVar17 = param_7[-2];
  param_7[-2] = in_R11;
  param_7[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar17 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar17 & 0x80) != 0) * 0x80 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
                (ulonglong)((uVar17 & 1) != 0) | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  param_7[-4] = unaff_R12;
  param_7[-5] = unaff_R12;
  param_7[-6] = unaff_R12;
  param_7[-4] = FUN_1568b27de;
  param_7[-5] = 0x1620a43ef;
  return uVar3;
}



// FUNCTION 14da137c1 FUN_14da137c1 body=132 status=ok
// SIG undefined FUN_14da137c1(void)

void FUN_14da137c1(undefined8 param_1)

{
  FUN_15b842daa(param_1,0xffffffffffffff90);
  return;
}



// FUNCTION 14da13845 FUN_14da13845 body=157 status=ok
// SIG undefined FUN_14da13845(void)

/* WARNING: Removing unreachable block (ram,0x00014da138dc) */
/* WARNING: Removing unreachable block (ram,0x00014da138e2) */
/* WARNING: Removing unreachable block (ram,0x00014da139f9) */
/* WARNING: Removing unreachable block (ram,0x00014da139fe) */
/* WARNING: Removing unreachable block (ram,0x00014da13a04) */
/* WARNING: Removing unreachable block (ram,0x00014dc4386b) */
/* WARNING: Removing unreachable block (ram,0x000165237393) */

undefined8 FUN_14da13845(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165237393();
  return uVar1;
}



// FUNCTION 14da138e2 FUN_14da138e2 body=147 status=ok
// SIG undefined FUN_14da138e2(void)

/* WARNING: Removing unreachable block (ram,0x00014da13a04) */

undefined8 FUN_14da138e2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1626776d8();
  if (-1 < (longlong)&stack0xfffffffffffffff8) {
    return uVar1;
  }
  uVar1 = FUN_14dc4386b();
  return uVar1;
}



// FUNCTION 14da13976 FUN_14da13976 body=189 status=ok
// SIG undefined FUN_14da13976(void)

/* WARNING: Removing unreachable block (ram,0x00014da13a04) */

undefined8 FUN_14da13976(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  if (-1 < (longlong)local_8) {
    return in_RAX;
  }
  uVar1 = FUN_14dc4386b();
  return uVar1;
}



// FUNCTION 14da13b9d FUN_14da13b9d body=148 status=ok
// SIG undefined FUN_14da13b9d(void)

void FUN_14da13b9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0xbbe30) {
    FUN_1566a5d4a(param_1,FUN_1566a5d4a);
    return;
  }
  FUN_165e93f27(param_1,param_2,param_3,&DAT_14d7bc2f9);
  return;
}



// FUNCTION 14da13cbe FUN_14da13cbe body=230 status=ok
// SIG undefined FUN_14da13cbe(void)

void FUN_14da13cbe(byte param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1620e3259('P' - (~param_1 + 2));
  FUN_1624facf4(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),0x48c489e6);
  return;
}



// FUNCTION 14da13e2c FUN_14da13e2c body=599 status=ok
// SIG undefined FUN_14da13e2c(void)

/* WARNING: Removing unreachable block (ram,0x0001652de933) */
/* WARNING: Removing unreachable block (ram,0x0001652de939) */
/* WARNING: Removing unreachable block (ram,0x000156fac29a) */
/* WARNING: Removing unreachable block (ram,0x00014da13f71) */
/* WARNING: Removing unreachable block (ram,0x00014da13f82) */
/* WARNING: Removing unreachable block (ram,0x00014da13fa4) */
/* WARNING: Removing unreachable block (ram,0x00014da1400c) */
/* WARNING: Removing unreachable block (ram,0x0001652de92e) */
/* WARNING: Removing unreachable block (ram,0x00014da14011) */
/* WARNING: Removing unreachable block (ram,0x00014da13f77) */
/* WARNING: Removing unreachable block (ram,0x00014da13ed4) */

void FUN_14da13e2c(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  *(undefined8 *)(uVar2 - 8) = in_R9;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = (longlong)(&LAB_1651238b4 + *plVar1);
  lVar3 = *plVar1;
  *(undefined8 *)(uVar2 - 0x10) = in_R10;
  *(undefined8 *)(uVar2 - 0x18) = in_R10;
  *(code **)(uVar2 - 0x10) = thunk_FUN_15b642ca5;
  if (-1 < lVar3) {
    FUN_1651238a1();
    return;
  }
  return;
}



// FUNCTION 14da14112 FUN_14da14112 body=133 status=ok
// SIG undefined FUN_14da14112(void)

/* WARNING: Removing unreachable block (ram,0x00014da14199) */

void FUN_14da14112(undefined8 param_1)

{
  FUN_165c924b6(param_1);
  return;
}



// FUNCTION 14da14199 FUN_14da14199 body=297 status=ok
// SIG undefined FUN_14da14199(void)

void FUN_14da14199(void)

{
  undefined8 unaff_retaddr;
  
  FUN_164c6941b(unaff_retaddr);
  thunk_FUN_165bf26ec();
  return;
}



// FUNCTION 14da142c3 FUN_14da142c3 body=156 status=ok
// SIG undefined FUN_14da142c3(void)

void FUN_14da142c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined4 *)(local_res18 + -0x10) = 0x50d9deba;
  *(undefined4 *)(local_res18 + -0xc) = 0;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(undefined4 *)(local_res18 + -0x28) = 0;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  (*(code *)0x14d8dba84)
            (0x14d8dba84,param_2,
             -(*(longlong *)(local_res18 + -0x28) - *(longlong *)(local_res18 + -8)));
  return;
}



// FUNCTION 14da148c7 FUN_14da148c7 body=115 status=ok
// SIG undefined FUN_14da148c7(void)

void FUN_14da148c7(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined1 local_res10 [24];
  
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | unaff_RBP;
  *(ulonglong *)(unaff_R12 + 8) =
       ~((unaff_RBP ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(unaff_R12 + 8));
  FUN_166d65a52(local_res10);
  return;
}



// FUNCTION 14da14aa5 FUN_14da14aa5 body=279 status=ok
// SIG undefined FUN_14da14aa5(void)

/* WARNING: Removing unreachable block (ram,0x00014da14b1e) */
/* WARNING: Removing unreachable block (ram,0x00014da14b9a) */
/* WARNING: Removing unreachable block (ram,0x000166bd0ab1) */

undefined8 FUN_14da14aa5(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16656a905(param_1);
  return uVar1;
}



// FUNCTION 14da14f43 FUN_14da14f43 body=132 status=ok
// SIG undefined FUN_14da14f43(void)

undefined8 FUN_14da14f43(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da14fc9 FUN_14da14fc9 body=174 status=ok
// SIG undefined FUN_14da14fc9(void)

void FUN_14da14fc9(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  ulonglong in_R10;
  undefined8 local_res8 [4];
  
  *(undefined4 *)((longlong)local_res8 + unaff_RBP) = 0;
  local_res8[0] = 0x219b04a3;
  FUN_1567baa59(param_1,param_2,*(undefined8 *)(param_2 + -0x88),
                *(ulonglong *)(param_2 + -0x60) ^ in_R10);
  return;
}



// FUNCTION 14da150f8 FUN_14da150f8 body=233 status=ok
// SIG undefined FUN_14da150f8(void)

void FUN_14da150f8(undefined8 param_1)

{
  undefined8 unaff_RBX;
  undefined8 local_res18;
  
  FUN_16695e941();
  FUN_16564350d(param_1,local_res18,unaff_RBX);
  return;
}



// FUNCTION 14da151e3 FUN_14da151e3 body=276 status=ok
// SIG undefined FUN_14da151e3(void)

/* WARNING: Removing unreachable block (ram,0x000162cd64f4) */
/* WARNING: Removing unreachable block (ram,0x000162cd6505) */
/* WARNING: Removing unreachable block (ram,0x000162cd64fa) */
/* WARNING: Removing unreachable block (ram,0x0001648d4082) */
/* WARNING: Removing unreachable block (ram,0x00014da1527d) */

ulonglong FUN_14da151e3(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if ((*(ulonglong *)(unaff_RDI + -0x58) & param_1) == 0) {
    uVar1 = thunk_FUN_1648d3ffa();
    return uVar1;
  }
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_RDI + -0x40) + param_1 +
           (*(ulonglong *)(unaff_RDI + -0x40) & param_1) * -2)) {
    uVar1 = FUN_162cd6458();
    return uVar1;
  }
  return *(ulonglong *)(0x83d - (~(unaff_RDI - 0x8bcU) + 2)) ^ param_1;
}



// FUNCTION 14da15301 FUN_14da15301 body=144 status=ok
// SIG undefined FUN_14da15301(void)

/* WARNING: Removing unreachable block (ram,0x00015b91142d) */
/* WARNING: Removing unreachable block (ram,0x00015b911498) */
/* WARNING: Removing unreachable block (ram,0x00014da15392) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da15301(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x30) ^ unaff_retaddr)) {
    return in_RAX;
  }
  uVar1 = FUN_15b9113f9();
  return uVar1;
}



// FUNCTION 14da15392 FUN_14da15392 body=197 status=ok
// SIG undefined FUN_14da15392(void)

undefined8 FUN_14da15392(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da15458 FUN_14da15458 body=106 status=ok
// SIG undefined FUN_14da15458(void)

void FUN_14da15458(void)

{
  return;
}



// FUNCTION 14da154e7 FUN_14da154e7 body=59 status=ok
// SIG undefined FUN_14da154e7(void)

void FUN_14da154e7(void)

{
  return;
}



// FUNCTION 14da15522 FUN_14da15522 body=111 status=ok
// SIG undefined FUN_14da15522(void)

/* WARNING: Removing unreachable block (ram,0x00014da15613) */
/* WARNING: Removing unreachable block (ram,0x00014da1558c) */
/* WARNING: Removing unreachable block (ram,0x00014daa6a25) */
/* WARNING: Removing unreachable block (ram,0x00014daa6a2c) */
/* WARNING: Removing unreachable block (ram,0x000166d4b2c5) */

undefined8 FUN_14da15522(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc786d) {
    return in_RAX;
  }
  if (unaff_RSI == 0xc786e) {
    uVar1 = thunk_FUN_166d4b2cf();
    return uVar1;
  }
  uVar1 = FUN_166d4b2ff();
  return uVar1;
}



// FUNCTION 14da1558c FUN_14da1558c body=142 status=ok
// SIG undefined FUN_14da1558c(void)

/* WARNING: Removing unreachable block (ram,0x00014da15613) */

undefined8 FUN_14da1558c(void)

{
  undefined8 in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_R13 + 8) = (~unaff_R15 | *(ulonglong *)(unaff_R13 + 8)) + unaff_R15 + 1;
  return in_RAX;
}



// FUNCTION 14da1561c FUN_14da1561c body=145 status=ok
// SIG undefined FUN_14da1561c(void)

undefined8 FUN_14da1561c(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong in_R10;
  
  if (param_2 == in_R10) {
    uVar1 = FUN_15b2155b3(param_1,&DAT_14d7a7f89);
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14da156ad FUN_14da156ad body=34 status=ok
// SIG undefined FUN_14da156ad(void)

undefined8 FUN_14da156ad(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da15860 FUN_14da15860 body=117 status=ok
// SIG undefined FUN_14da15860(void)

void FUN_14da15860(void)

{
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = unaff_R12;
  *(undefined8 *)(lStackX_10 + -0x10) = in_RAX;
  *(undefined8 *)(lStackX_10 + -0x18) = in_RAX;
  *(undefined8 *)(lStackX_10 + -0x20) = in_R11;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_retaddr;
  *(undefined8 *)(lStackX_10 + -8) = 0;
  *(longlong *)(lStackX_10 + -8) = (longlong)(&DAT_14da158ed + *(longlong *)(lStackX_10 + -8));
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da15904 FUN_14da15904 body=491 status=ok
// SIG undefined FUN_14da15904(void)

/* WARNING: Removing unreachable block (ram,0x00014da15a5c) */

undefined8 FUN_14da15904(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  longlong unaff_RBX;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
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
  byte bVar21;
  byte bVar22;
  undefined8 local_res8;
  ulonglong local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  uVar4 = *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~param_1 & *(ulonglong *)(unaff_RBX + 8) | param_1;
  uVar5 = *(ulonglong *)(unaff_RBX + 8);
  *(undefined8 *)(unaff_RBX + 8) = 0;
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) ^ ~((~param_1 | uVar4) & uVar5);
  puVar3 = (undefined8 *)(local_res20 ^ param_1);
  bVar18 = (local_res18 & 0x4000) != 0;
  bVar17 = (local_res18 & 0x800) != 0;
  bVar16 = (local_res18 & 0x200) != 0;
  bVar15 = 0;
  bVar14 = (local_res18 & 0x80) != 0;
  bVar13 = (local_res18 & 0x40) != 0;
  bVar12 = (local_res18 & 0x10) != 0;
  bVar11 = (local_res18 & 4) != 0;
  bVar10 = (local_res18 & 1) != 0;
  bVar22 = (uStackX_1a & 0x20) != 0;
  bVar19 = (uStackX_1a & 4) != 0;
  bVar21 = 0;
  bVar20 = 0;
  pcVar9 = (code *)swi(0x2e);
  uVar8 = (*pcVar9)();
  *puVar3 = param_2;
  puVar3[-1] = param_2;
  puVar3[-2] = (ulonglong)(bVar18 & 1) * 0x4000 | (ulonglong)(bVar17 & 1) * 0x800 |
               (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar16 & 1) * 0x200 |
               (ulonglong)(bVar15 & 1) * 0x100 | (ulonglong)(bVar14 & 1) * 0x80 |
               (ulonglong)(bVar13 & 1) * 0x40 | (ulonglong)(bVar12 & 1) * 0x10 |
               (ulonglong)(bVar11 & 1) * 4 | (ulonglong)(bVar10 & 1) |
               (ulonglong)(bVar22 & 1) * 0x200000 | (ulonglong)(bVar21 & 1) * 0x100000 |
               (ulonglong)(bVar20 & 1) * 0x80000 | (ulonglong)(bVar19 & 1) * 0x40000;
  puVar1 = puVar3 + -3;
  *puVar1 = uVar8;
  puVar3[-4] = uVar8;
  *(undefined4 *)(puVar3 + -4) = 0x56b053b5;
  *(undefined4 *)((longlong)puVar3 - 0x1c) = 0;
  puVar3[-4] = 0xd27507a;
  pcVar9 = FUN_161cc3013;
  puVar3[-5] = 0x14da159a9;
  uVar8 = FUN_161cc3013();
  uVar7 = *puVar1;
  *puVar1 = param_3;
  puVar3[-4] = param_3;
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x90);
  puVar3[-4] = *(undefined8 *)(unaff_RDI + -8);
  puVar3[-5] = param_4;
  puVar3[-6] = param_4;
  lVar6 = *(longlong *)(unaff_RDI + -0x98);
  puVar3[-7] = pcVar9;
  puVar3[-8] = local_res8;
  puVar3[-9] = uVar8;
  puVar3[-5] = 0;
  puVar3[-5] = puVar3[-5] - lVar6;
  puVar3[-5] = -puVar3[-5];
  uVar8 = puVar3[-6];
  puVar2 = puVar3 + -5;
  puVar3[-6] = *(undefined8 *)(unaff_RDI + -0xa0);
  uVar4 = puVar3[-6];
  puVar3[-6] = unaff_R15;
  uVar5 = *puVar2;
  *puVar2 = *puVar2 & local_res10;
  puVar3[-7] = local_res10;
  *puVar2 = *puVar2 << 1;
  puVar3[-7] = uVar4 ^ local_res10;
  puVar3[-7] = uVar7;
  puVar3[-5] = (uVar5 + local_res10) - puVar3[-5];
  puVar3[-6] = puVar3[-9];
  puVar3[-7] = uVar8;
  puVar3[-8] = puVar3[-9];
  *(undefined4 *)(puVar3 + -8) = 0x75dc7a2b;
  *(undefined4 *)((longlong)puVar3 - 0x3c) = 0;
  *(undefined4 *)((longlong)puVar3 - 0x3cU) = *(undefined4 *)((longlong)puVar3 - 0x3cU);
  uVar8 = puVar3[-8];
  puVar3[-8] = unaff_R13;
  puVar3[-9] = unaff_R13;
  puVar3[-8] = &DAT_14e0e1660;
  return uVar8;
}



// FUNCTION 14da15b9c FUN_14da15b9c body=356 status=ok
// SIG undefined FUN_14da15b9c(void)

/* WARNING: Removing unreachable block (ram,0x00014da15c1f) */
/* WARNING: Removing unreachable block (ram,0x00014da15c99) */
/* WARNING: Removing unreachable block (ram,0x00014da15c9f) */
/* WARNING: Removing unreachable block (ram,0x000162576f6e) */

ulonglong FUN_14da15b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  lVar1 = *(longlong *)(unaff_R13 + -0x98);
  FUN_15b81b31b(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4,
                *(undefined8 *)(unaff_R13 + -0x70));
  uVar3 = ~-*(longlong *)(lVar1 + -0x90) + 1;
  return (~uVar2 | uVar3) & (~uVar3 | uVar2) ^ 0xffffffffffffffff;
}



// FUNCTION 14da15ca5 FUN_14da15ca5 body=133 status=ok
// SIG undefined FUN_14da15ca5(void)

void FUN_14da15ca5(void)

{
  FUN_156709f5d(FUN_156709f5d);
  return;
}



// FUNCTION 14da15dc3 FUN_14da15dc3 body=90 status=ok
// SIG undefined FUN_14da15dc3(void)

void FUN_14da15dc3(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4)

{
  undefined4 uStackX_8;
  LPSTR in_stack_00000040;
  int in_stack_00000048;
  LPCSTR in_stack_00000050;
  LPBOOL in_stack_00000058;
  
                    /* WARNING: Could not recover jumptable at 0x00014da15e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(uStackX_8,param_2,param_3,param_4,in_stack_00000040,in_stack_00000048,
                      in_stack_00000050,in_stack_00000058);
  return;
}



// FUNCTION 14da15e65 FUN_14da15e65 body=171 status=ok
// SIG undefined FUN_14da15e65(void)

/* WARNING: Removing unreachable block (ram,0x00014da15e85) */

void FUN_14da15e65(undefined8 param_1)

{
  FUN_16219584e(param_1,FUN_16219584e);
  return;
}



// FUNCTION 14da15f10 FUN_14da15f10 body=123 status=ok
// SIG undefined FUN_14da15f10(void)

void FUN_14da15f10(undefined8 param_1,int param_2)

{
  undefined8 in_stack_00000008;
  
  thunk_FUN_165ee95d2(in_stack_00000008,-param_2);
  return;
}



// FUNCTION 14da15f8d FUN_14da15f8d body=140 status=ok
// SIG undefined FUN_14da15f8d(void)

/* WARNING: Removing unreachable block (ram,0x00014da16041) */

void FUN_14da15f8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = (~(~in_RAX & unaff_R15) + unaff_R15) - in_RAX;
  uVar1 = -(~unaff_R15 | in_RAX | uVar2);
  if (!CARRY8(uVar1,uVar2)) {
    if ((~(((~unaff_R15 | in_RAX) - 1) - ~(uVar1 + uVar2)) & 0x8000) != 0) {
      (*(code *)0x160c6e523)(param_1,param_2,param_3);
      return;
    }
    FUN_160c6e50f();
    (*(code *)&LAB_162d7e250)(&DAT_ac91427a73ca2b2b,0,&LAB_162d7e250);
    return;
  }
  if (!CARRY8(uVar1,uVar2)) {
    return;
  }
  FUN_16159718a();
  return;
}



// FUNCTION 14da1601b FUN_14da1601b body=66 status=ok
// SIG undefined FUN_14da1601b(void)

void FUN_14da1601b(void)

{
  return;
}



// FUNCTION 14da160ac FUN_14da160ac body=459 status=ok
// SIG undefined FUN_14da160ac(void)

/* WARNING: Removing unreachable block (ram,0x00014da1613f) */
/* WARNING: Removing unreachable block (ram,0x00014da16180) */
/* WARNING: Removing unreachable block (ram,0x00014da16184) */

undefined8
FUN_14da160ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = (*(code *)&LAB_1665a88ef)
                    (param_1,4,0x442c,param_4,*(undefined8 *)(unaff_RDI + -0x98),
                     *(undefined8 *)(unaff_RDI + -8));
  return uVar1;
}



// FUNCTION 14da161e7 FUN_14da161e7 body=148 status=ok
// SIG undefined FUN_14da161e7(void)

undefined8 FUN_14da161e7(void)

{
  longlong unaff_RBX;
  ulonglong in_R10;
  undefined8 local_res10;
  
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | in_R10 ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  return local_res10;
}



// FUNCTION 14da16321 FUN_14da16321 body=126 status=ok
// SIG undefined FUN_14da16321(void)

/* WARNING: Removing unreachable block (ram,0x00014da1639f) */
/* WARNING: Removing unreachable block (ram,0x00014da1640d) */
/* WARNING: Removing unreachable block (ram,0x00014ddafffd) */

undefined8 FUN_14da16321(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e1538d6(param_1,param_2);
  return uVar1;
}



// FUNCTION 14da1639f FUN_14da1639f body=258 status=ok
// SIG undefined FUN_14da1639f(void)

undefined8 FUN_14da1639f(void)

{
  undefined8 in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)
      ((unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15)) +
      *(ulonglong *)(unaff_R13 + -0x50)) < 0) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14da16427 FUN_14da16427 body=182 status=ok
// SIG undefined FUN_14da16427(void)

void FUN_14da16427(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1571c2b0b(FUN_1571c2b0b,param_2,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) + unaff_R15 + 1,0);
  FUN_14da164df();
  return;
}



// FUNCTION 14da164df FUN_14da164df body=314 status=ok
// SIG undefined FUN_14da164df(void)

/* WARNING: Removing unreachable block (ram,0x00014da1657d) */
/* WARNING: Removing unreachable block (ram,0x00014da16583) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da164df(void)

{
  return;
}



// FUNCTION 14da16725 FUN_14da16725 body=230 status=ok
// SIG undefined FUN_14da16725(void)

void FUN_14da16725(undefined8 param_1,undefined8 param_2)

{
  FUN_165088a7c();
  FUN_165bbbc12(param_1,param_2);
  return;
}



// FUNCTION 14da1680c FUN_14da1680c body=183 status=ok
// SIG undefined FUN_14da1680c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1626) */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c6) */
/* WARNING: Removing unreachable block (ram,0x000165cc5c78) */
/* WARNING: Removing unreachable block (ram,0x000165cc5d0d) */
/* WARNING: Removing unreachable block (ram,0x000165cc5d13) */
/* WARNING: Removing unreachable block (ram,0x000165cc5d02) */
/* WARNING: Removing unreachable block (ram,0x000165b93ee2) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa634) */
/* WARNING: Removing unreachable block (ram,0x00014da168c3) */
/* WARNING: Removing unreachable block (ram,0x00014da1696c) */
/* WARNING: Removing unreachable block (ram,0x00014da16977) */
/* WARNING: Removing unreachable block (ram,0x00014da169b5) */
/* WARNING: Removing unreachable block (ram,0x00014da169ca) */
/* WARNING: Removing unreachable block (ram,0x00014da169e9) */
/* WARNING: Removing unreachable block (ram,0x00014da169ff) */
/* WARNING: Removing unreachable block (ram,0x00014da16972) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa4e8) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa548) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa54c) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa583) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa588) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa58e) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa593) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa629) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa62e) */
/* WARNING: Removing unreachable block (ram,0x00014dc54721) */
/* WARNING: Removing unreachable block (ram,0x00014dc5479d) */
/* WARNING: Removing unreachable block (ram,0x000156c6a81e) */
/* WARNING: Removing unreachable block (ram,0x00014dc547a9) */
/* WARNING: Removing unreachable block (ram,0x0001611cd1e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc547d4) */
/* WARNING: Removing unreachable block (ram,0x000165cc5d18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da1680c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165cc5c78(param_1);
  return uVar1;
}



// FUNCTION 14da168c3 FUN_14da168c3 body=338 status=ok
// SIG undefined FUN_14da168c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1626) */
/* WARNING: Removing unreachable block (ram,0x000156c6a8c6) */
/* WARNING: Removing unreachable block (ram,0x00014dc547a9) */
/* WARNING: Removing unreachable block (ram,0x0001611cd1e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc547d4) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa634) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa593) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa629) */
/* WARNING: Removing unreachable block (ram,0x00014dc54721) */
/* WARNING: Removing unreachable block (ram,0x00014dc5479d) */
/* WARNING: Removing unreachable block (ram,0x000156c6a81e) */
/* WARNING: Removing unreachable block (ram,0x00015b1aa548) */
/* WARNING: Removing unreachable block (ram,0x00014da16977) */
/* WARNING: Removing unreachable block (ram,0x00014da169b5) */
/* WARNING: Removing unreachable block (ram,0x00014da169ca) */
/* WARNING: Removing unreachable block (ram,0x00014da169e9) */
/* WARNING: Removing unreachable block (ram,0x00014da169ff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da168c3(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if (&DAT_536ebd858c35d4d4 <
      (undefined1 *)~(*(ulonglong *)(unaff_RDI + -0x78) & 0xac91427a73ca2b2b)) {
    FUN_15b1aa4e8();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x58);
  if (-1 < (longlong)
           (~(~(uVar1 | 0xac91427a73ca2b2b) + 0xac91427a73ca2b2c + uVar1) &
           (uVar1 | 0xac91427a73ca2b2b))) {
    FUN_15b6df047();
    return;
  }
  FUN_15b6df047();
  return;
}



// FUNCTION 14da16c1f FUN_14da16c1f body=73 status=ok
// SIG undefined FUN_14da16c1f(void)

void FUN_14da16c1f(void)

{
  return;
}



// FUNCTION 14da16c9d FUN_14da16c9d body=167 status=ok
// SIG undefined FUN_14da16c9d(void)

void FUN_14da16c9d(byte param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R15;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  longlong local_res18;
  ulonglong local_res20;
  
  param_2 = param_2 - (local_res18 << (param_1 & 0x3f));
  uVar6 = (local_res20 & unaff_R15) << 1;
  bVar3 = FUN_162db429b(in_stack_00000008,uStackX_10);
  uVar1 = ~(param_5 & in_R10) & ~unaff_RSI;
  LOCK();
  bVar4 = bVar3 < DAT_14d7aca69;
  bVar5 = SBORROW1(bVar3,DAT_14d7aca69);
  cVar2 = bVar3 - DAT_14d7aca69;
  if (cVar2 == '\0') {
    DAT_14d7aca69 = (byte)in_stack_00000008;
  }
  UNLOCK();
  *(longlong *)(uVar1 - 8) = param_2;
  *(longlong *)(uVar1 - 0x10) = param_2;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar6 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(code **)(uVar1 - 0x20) = FUN_162db429b;
  *(undefined4 *)(uVar1 - 0x28) = 0x3f31ee20;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar6 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar1 - 0x20) = unaff_R15;
  (*(code *)0x14de777f4)();
  return;
}



// FUNCTION 14da16d44 FUN_14da16d44 body=158 status=ok
// SIG undefined FUN_14da16d44(void)

void FUN_14da16d44(byte param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & in_R10) & ~unaff_RSI;
  LOCK();
  bVar4 = in_AL < DAT_14d7aca69;
  bVar5 = SBORROW1(in_AL,DAT_14d7aca69);
  cVar2 = in_AL - DAT_14d7aca69;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7aca69;
  }
  DAT_14d7aca69 = bVar3;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = uStackX_10;
  *(undefined8 *)(uVar1 - 0x10) = uStackX_10;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined4 *)(uVar1 - 0x28) = 0x3f31ee20;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar6 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  (*(code *)0x14de777f4)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da16e7d FUN_14da16e7d body=146 status=ok
// SIG undefined FUN_14da16e7d(void)

void FUN_14da16e7d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong unaff_retaddr;
  undefined1 local_res10 [24];
  
  uVar1 = ~(param_5 & param_1);
  FUN_15b62dc86(param_5 & param_1 &
                ~(uVar1 | (~(*(ulonglong *)(&stack0x284a5550 + unaff_retaddr) & param_1) + param_1)
                          - ~*(ulonglong *)(&stack0x284a5550 + unaff_retaddr)) | uVar1,local_res10,
                param_3,FUN_15b62dc86);
  return;
}



// FUNCTION 14da16f0f FUN_14da16f0f body=164 status=ok
// SIG undefined FUN_14da16f0f(void)

void FUN_14da16f0f(void)

{
  return;
}



// FUNCTION 14da170ed FUN_14da170ed body=154 status=ok
// SIG undefined FUN_14da170ed(void)

/* WARNING: Removing unreachable block (ram,0x00014da17189) */

undefined8 FUN_14da170ed(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint in_stack_00000030;
  
  if ((unaff_ESI & in_stack_00000030) != 0) {
    uVar1 = FUN_162bdc07b(*(undefined8 *)(param_2 + -0x48),param_2,unaff_RBP + -1);
    return uVar1;
  }
  uVar1 = FUN_15ba2e462(param_1);
  return uVar1;
}



// FUNCTION 14da17189 FUN_14da17189 body=171 status=ok
// SIG undefined FUN_14da17189(void)

undefined8 FUN_14da17189(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da17237 FUN_14da17237 body=313 status=ok
// SIG undefined FUN_14da17237(void)

void ** FUN_14da17237(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R13;
  longlong unaff_R14;
  ulonglong *unaff_R15;
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
  ulonglong uStackX_8;
  longlong *local_res10;
  
  bVar14 = (uStackX_8 & 0x4000) != 0;
  bVar13 = (uStackX_8 & 0x800) != 0;
  bVar12 = (uStackX_8 & 0x200) != 0;
  bVar11 = (uStackX_8 & 0x100) != 0;
  bVar10 = (uStackX_8 & 0x80) != 0;
  bVar9 = (uStackX_8 & 0x40) != 0;
  bVar8 = (uStackX_8 & 0x10) != 0;
  bVar7 = (uStackX_8 & 4) != 0;
  bVar6 = (uStackX_8 & 1) != 0;
  bVar18 = (uStackX_8 & 0x200000) != 0;
  bVar15 = (uStackX_8 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar5 = (code *)swi(0x2e);
  uVar3 = (*pcVar5)();
  *local_res10 = unaff_R14;
  plVar1 = local_res10 + -1;
  local_res10[-2] = unaff_R13;
  *plVar1 = unaff_R14;
  local_res10[-2] = uVar3;
  *(undefined4 *)(local_res10 + -2) = 0x93d2aa2;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  lVar2 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
       (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
       (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 | (ulonglong)(bVar7 & 1) * 4 |
       (ulonglong)(bVar6 & 1) | (ulonglong)(bVar18 & 1) * 0x200000 |
       (ulonglong)(bVar17 & 1) * 0x100000 | (ulonglong)(bVar16 & 1) * 0x80000 |
       (ulonglong)(bVar15 & 1) * 0x40000;
  local_res10[-3] = lVar2;
  local_res10[-3] = local_res10[-3] + -0x2f4f060;
  local_res10[-2] = in_R10;
  *local_res10 = lVar2 + -0x2f4f060;
  lVar2 = *plVar1;
  *plVar1 = param_2;
  local_res10[-2] = param_2;
  pcVar5 = FUN_165c7153c;
  local_res10[-3] = (longlong)unaff_R15;
  local_res10[-4] = param_3;
  local_res10[-5] = 0x14da172c5;
  FUN_16130f4ba();
  uVar4 = 0xffffffffffffffff - param_1 | *unaff_R15;
  local_res10[-5] = unaff_RBP;
  *unaff_R15 = *unaff_R15 ^ 0xffffffffffffffff;
  *unaff_R15 = *unaff_R15 | param_1;
  local_res10[-5] = in_R11;
  uVar4 = ~((*unaff_R15 - (uVar4 | *unaff_R15)) + uVar4);
  local_res10[-5] = uVar4;
  local_res10[-6] = unaff_RDI;
  *unaff_R15 = uVar4;
  local_res10[-3] = lVar2;
  local_res10[-4] = 0x14da17341;
  FUN_161367cb8();
  local_res10[-4] = unaff_RBX;
  local_res10[-5] = unaff_RBX;
  local_res10[-6] = (longlong)pcVar5;
  local_res10[-7] = (longlong)pcVar5;
  local_res10[-6] = (longlong)&DAT_14da17376;
  return &ExceptionList;
}



// FUNCTION 14da173ca FUN_14da173ca body=347 status=ok
// SIG undefined FUN_14da173ca(void)

void FUN_14da173ca(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  FUN_15b49240b();
  FUN_15b8a948d(param_1,uStackX_8);
  return;
}



// FUNCTION 14da17561 FUN_14da17561 body=166 status=ok
// SIG undefined FUN_14da17561(void)

void FUN_14da17561(void)

{
  return;
}



// FUNCTION 14da1775c FUN_14da1775c body=229 status=ok
// SIG undefined FUN_14da1775c(void)

/* WARNING: Removing unreachable block (ram,0x00014da177ca) */
/* WARNING: Removing unreachable block (ram,0x00014da177d5) */
/* WARNING: Removing unreachable block (ram,0x00014da17842) */
/* WARNING: Removing unreachable block (ram,0x00014da177d0) */

void FUN_14da1775c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15b724f04)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da1797b FUN_14da1797b body=182 status=ok
// SIG undefined FUN_14da1797b(void)

void FUN_14da1797b(void)

{
  return;
}



// FUNCTION 14da17adb FUN_14da17adb body=293 status=ok
// SIG undefined FUN_14da17adb(void)

/* WARNING: Removing unreachable block (ram,0x00014da17c88) */
/* WARNING: Removing unreachable block (ram,0x00014da17b7e) */
/* WARNING: Removing unreachable block (ram,0x00014da17c82) */
/* WARNING: Removing unreachable block (ram,0x000162b78e56) */

undefined8 FUN_14da17adb(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  
  uVar2 = uStackX_10 ^ param_1;
  param_1 = uStackX_18 ^ param_1;
  uStackX_10._0_2_ = (ushort)uVar2;
  uVar1 = ~(~(ushort)uStackX_10 | 0x100);
  uStackX_10 = CONCAT62((int6)(uVar2 >> 0x10),uVar1);
  syscall();
  *(ulonglong *)(param_1 - 8) = uStackX_10;
  *(ulonglong *)(param_1 - 0x10) = uStackX_10;
  *(undefined8 *)(param_1 - 0x18) = in_RAX;
  *(undefined4 *)(param_1 - 0x18) = 0xde745d5;
  *(undefined4 *)(param_1 - 0x14) = 0;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 0x20) = param_3;
  *(undefined8 *)(param_1 - 0x28) = in_RAX;
  *(undefined4 *)(param_1 - 0x28) = 0x6ec35ec3;
  uVar3 = FUN_164917b75(0x16519625e,param_2,FUN_164917b75);
  return uVar3;
}



// FUNCTION 14da17c02 FUN_14da17c02 body=329 status=ok
// SIG undefined FUN_14da17c02(void)

/* WARNING: Removing unreachable block (ram,0x00014da17c88) */

undefined1 FUN_14da17c02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_AL;
  undefined8 unaff_R13;
  ulonglong uVar1;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7a7443) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a7443 = in_AL;
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x20);
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x2fd0734;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = 0x156ef2e25;
  return 0;
}



// FUNCTION 14da17dd2 FUN_14da17dd2 body=110 status=ok
// SIG undefined FUN_14da17dd2(void)

void FUN_14da17dd2(undefined8 param_1)

{
  FUN_156968c84(param_1,FUN_156968c84);
  return;
}



// FUNCTION 14da18009 FUN_14da18009 body=106 status=ok
// SIG undefined FUN_14da18009(void)

void FUN_14da18009(void)

{
  return;
}



// FUNCTION 14da18087 FUN_14da18087 body=337 status=ok
// SIG undefined FUN_14da18087(void)

/* WARNING: Removing unreachable block (ram,0x00014da18123) */

void FUN_14da18087(void)

{
  ulonglong *puVar1;
  ulonglong unaff_RDI;
  longlong in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(in_R10 + 8) =
       -1 - ((*(longlong *)(in_R10 + 8) - (unaff_RDI | *(ulonglong *)(in_R10 + 8))) + unaff_RDI);
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  puVar1 = (ulonglong *)(in_stack_00000030 - 8);
  *puVar1 = uStackX_18;
  *(ulonglong *)(in_stack_00000030 - 0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x1620dc668;
  *(undefined8 *)(in_stack_00000030 - 0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 - 0x18) = unaff_R13;
  *(undefined **)(in_stack_00000030 - 0x10) = &DAT_14d7c2e23;
  return;
}



// FUNCTION 14da182bb FUN_14da182bb body=136 status=ok
// SIG undefined FUN_14da182bb(void)

void FUN_14da182bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165ecac28(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da183ba FUN_14da183ba body=300 status=ok
// SIG undefined FUN_14da183ba(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164ac6b03) */
/* WARNING: Removing unreachable block (ram,0x000164ac6b0f) */
/* WARNING: Removing unreachable block (ram,0x000164ac6b14) */
/* WARNING: Removing unreachable block (ram,0x000164ac6b79) */
/* WARNING: Removing unreachable block (ram,0x000164ac6b7e) */
/* WARNING: Removing unreachable block (ram,0x00014da18441) */
/* WARNING: Removing unreachable block (ram,0x00014da1844c) */
/* WARNING: Removing unreachable block (ram,0x00014da18447) */
/* WARNING: Removing unreachable block (ram,0x00014da184dc) */
/* WARNING: Removing unreachable block (ram,0x00014da184df) */

void FUN_14da183ba(void)

{
  FUN_164c1c0e8();
  return;
}



// FUNCTION 14da18583 FUN_14da18583 body=176 status=ok
// SIG undefined FUN_14da18583(void)

void FUN_14da18583(void)

{
  FUN_1654fba56();
  return;
}



// FUNCTION 14da18c65 FUN_14da18c65 body=127 status=ok
// SIG undefined FUN_14da18c65(void)

/* WARNING: Removing unreachable block (ram,0x00014da18e12) */
/* WARNING: Removing unreachable block (ram,0x00014da18e1e) */
/* WARNING: Removing unreachable block (ram,0x000164f0898b) */
/* WARNING: Removing unreachable block (ram,0x00014da18d85) */
/* WARNING: Removing unreachable block (ram,0x00014da18dd4) */

void FUN_14da18c65(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong lVar5;
  longlong unaff_R13;
  ulonglong unaff_R14;
  undefined1 auStack_2f42 [12098];
  
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | in_RAX;
  *(ulonglong *)(unaff_R13 + 8) = ~unaff_R14 | ~*(ulonglong *)(unaff_R13 + 8);
  uVar4 = FUN_161375abb();
  lVar5 = -(~(ulonglong)auStack_2f42 + 2);
  puVar1 = (uint *)(lVar5 + 0x2f63);
  *(undefined8 *)puVar1 = uVar4;
  *puVar1 = 0x2c05444f;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xd031a72c;
  uVar3 = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + (~(uVar2 & 0xd031a72c) & uVar3 ^ 0xffffffff);
  *(undefined4 *)(lVar5 + 0x2f67) = 0x556831f;
  uVar2 = *(uint *)(lVar5 + 0x2f67);
  *(uint *)(lVar5 + 0x2f67) = *(uint *)(lVar5 + 0x2f67) | 0xfe28b31e;
  *(uint *)(lVar5 + 0x2f67) = ~(~(uVar2 & 0xfe28b31e) & *(uint *)(lVar5 + 0x2f67));
  *(uint *)(lVar5 + 0x2f67) = *(uint *)(lVar5 + 0x2f67) ^ 0x481cffe;
  *(undefined1 **)(lVar5 + 0x2f5b) = &LAB_164bbe5da;
  return;
}



// FUNCTION 14da18ce5 FUN_14da18ce5 body=345 status=ok
// SIG undefined FUN_14da18ce5(void)

/* WARNING: Removing unreachable block (ram,0x00014da18e12) */
/* WARNING: Removing unreachable block (ram,0x00014da18e1e) */
/* WARNING: Removing unreachable block (ram,0x000164f0898b) */
/* WARNING: Removing unreachable block (ram,0x00014da18d85) */
/* WARNING: Removing unreachable block (ram,0x00014da18dd4) */

void FUN_14da18ce5(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined1 local_2f52 [12114];
  
  lVar4 = -(~(ulonglong)local_2f52 + 2);
  puVar1 = (uint *)(lVar4 + 0x2f63);
  *(undefined8 *)puVar1 = in_RAX;
  *puVar1 = 0x2c05444f;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xd031a72c;
  uVar3 = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + (~(uVar2 & 0xd031a72c) & uVar3 ^ 0xffffffff);
  *(undefined4 *)(lVar4 + 0x2f67) = 0x556831f;
  uVar2 = *(uint *)(lVar4 + 0x2f67);
  *(uint *)(lVar4 + 0x2f67) = *(uint *)(lVar4 + 0x2f67) | 0xfe28b31e;
  *(uint *)(lVar4 + 0x2f67) = ~(~(uVar2 & 0xfe28b31e) & *(uint *)(lVar4 + 0x2f67));
  *(uint *)(lVar4 + 0x2f67) = *(uint *)(lVar4 + 0x2f67) ^ 0x481cffe;
  *(undefined1 **)(lVar4 + 0x2f5b) = &LAB_164bbe5da;
  return;
}



// FUNCTION 14da18e91 FUN_14da18e91 body=193 status=ok
// SIG undefined FUN_14da18e91(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c4f80) */

ulonglong FUN_14da18e91(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStack_10 [2];
  
  *(undefined8 *)((longlong)auStack_10 + unaff_RBX + 8) = in_RAX;
  *(undefined8 *)((longlong)auStack_10 + unaff_RBX) = unaff_RSI;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar4 = ~unaff_R15 & uVar3 | unaff_R15;
  *(undefined8 *)((longlong)auStack_10 + unaff_RBX + 8) = *(undefined8 *)(unaff_R13 + -0x38);
  uVar1 = *(ulonglong *)((longlong)auStack_10 + unaff_RBX + 8);
  if (unaff_R15 != 0) {
    uVar3 = FUN_15b979237(uVar4,-1 - unaff_R15,~(uVar3 & unaff_R15) & uVar4,
                          ~((~unaff_R15 | in_R9) & (~(~in_R9 & unaff_R15) + unaff_R15) - in_R9));
    return uVar3;
  }
  *(undefined8 *)((longlong)auStack_10 + unaff_RBX + 8) = 0;
  lVar2 = *(longlong *)((longlong)auStack_10 + unaff_RBX + 8);
  *(undefined1 **)((longlong)auStack_10 + unaff_RBX + 8) = &LAB_15b979284;
  return 0xffffffffffffffffU - lVar2 & (uVar1 | unaff_R15);
}



// FUNCTION 14da18fc7 FUN_14da18fc7 body=8 status=ok
// SIG undefined FUN_14da18fc7(void)

void FUN_14da18fc7(void)

{
  FUN_1629c9909();
  return;
}



// FUNCTION 14da1916e FUN_14da1916e body=1057 status=ok
// SIG undefined FUN_14da1916e(void)

/* WARNING: Removing unreachable block (ram,0x00014da1944d) */

void FUN_14da1916e(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint unaff_EBP;
  uint uVar7;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong uVar8;
  longlong unaff_R13;
  longlong unaff_R14;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong in_stack_00000008;
  undefined8 *local_res10;
  
  FUN_16214c881(0xc87cc02,0xffffffffff7bbffd);
  uVar3 = ~(0xffff - ((ushort)in_stack_00000008 & 0xfeff));
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x200) != 0;
  bVar10 = (uVar3 & 0x100) != 0;
  bVar9 = (uVar3 & 0x10) != 0;
  bVar16 = (in_stack_00000008 & 0x200000) != 0;
  bVar13 = (in_stack_00000008 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  plVar1 = local_res10 + -1;
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  local_res10[-2] = 0x14da1929f;
  lVar5 = FUN_166cb14ed();
  lVar5 = unaff_R14 - lVar5;
  uVar4 = *local_res10;
  *(undefined8 *)((longlong)local_res10 + lVar5) = param_4;
  *(undefined8 *)((longlong)local_res10 + lVar5) = in_R10;
  uVar6 = *(ulonglong *)((longlong)local_res10 + lVar5);
  uVar8 = (ulonglong)~(~(param_3 & 0x8df16233) & (param_3 | 0x8df16233));
  uVar7 = unaff_EBP ^ 0xffffffff;
  *(ulonglong *)((longlong)local_res10 + lVar5) =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)((uVar3 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100 |
       (ulonglong)((int)uVar7 < 0) * 0x80 | (ulonglong)(uVar7 == 0) * 0x40 |
       (ulonglong)(bVar9 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
       (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  if ((*(uint *)((longlong)local_res10 + lVar5) >> 7 & 1) != 0) {
    *(undefined8 *)((longlong)local_res10 + lVar5 + -8) =
         *(undefined8 *)((longlong)local_res10 + lVar5);
    *(undefined8 *)((longlong)local_res10 + lVar5) = uVar4;
    uVar6 = *(ulonglong *)((longlong)local_res10 + lVar5 + -8);
    *(undefined8 *)((longlong)local_res10 + lVar5 + -8) = 0xffffffff;
    if ((uVar6 & 0x800) != 0) {
      *(ulonglong *)((longlong)local_res10 + lVar5 + -8) = uVar6;
      *(ulonglong *)((longlong)local_res10 + lVar5 + -0x10) =
           (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 |
           (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100 |
           (ulonglong)(bVar9 & 1) * 0x10 | 4 | (ulonglong)(bVar16 & 1) * 0x200000 |
           (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
           (ulonglong)(bVar13 & 1) * 0x40000;
    }
    thunk_FUN_15644f5a2();
    return;
  }
  uVar17 = *(ulonglong *)((longlong)local_res10 + lVar5);
  *(ulonglong *)((longlong)local_res10 + lVar5) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  if ((*(uint *)((longlong)local_res10 + lVar5) >> 7 & 1) != 0) {
    puVar2 = (ulonglong *)((longlong)local_res10 + lVar5 + 0x10);
    *puVar2 = *puVar2 ^ uVar6;
    puVar2 = (ulonglong *)((longlong)local_res10 + lVar5 + 0x18);
    *puVar2 = *puVar2 ^ uVar6;
    *(undefined8 *)((longlong)local_res10 + lVar5 + 8) = 0x12ac42c7;
    uVar17 = ~uVar6 | *(ulonglong *)((longlong)local_res10 + lVar5 + 0x20);
    puVar2 = (ulonglong *)((longlong)local_res10 + lVar5 + 0x20);
    *puVar2 = ~*puVar2;
    puVar2 = (ulonglong *)((longlong)local_res10 + lVar5 + 0x20);
    *puVar2 = *puVar2 | uVar6;
    uVar6 = ~((*(longlong *)((longlong)local_res10 + lVar5 + 0x20) -
              (uVar17 | *(ulonglong *)((longlong)local_res10 + lVar5 + 0x20))) + uVar17);
    *(ulonglong *)((longlong)local_res10 + lVar5) = uVar8;
    *(ulonglong *)((longlong)local_res10 + lVar5 + 0x20) = uVar6;
    *(undefined8 *)((longlong)local_res10 + lVar5 + 0x10) = unaff_RDI;
    *(ulonglong *)((longlong)local_res10 + lVar5 + 8) = uVar6;
    *(undefined8 *)((longlong)local_res10 + lVar5) = *(undefined8 *)((longlong)local_res10 + lVar5);
    if (&DAT_ffffffffffffffef < (undefined1 *)((longlong)local_res10 + lVar5 + 8)) {
      FUN_16192b7ee();
      return;
    }
    FUN_16192b7ee();
    return;
  }
  *(ulonglong *)((longlong)local_res10 + lVar5) = uVar8;
  *(ulonglong *)((longlong)local_res10 + lVar5 + -8) = uVar8;
  *(code **)((longlong)local_res10 + lVar5) = thunk_FUN_15644f5a2;
  return;
}



// FUNCTION 14da1983b FUN_14da1983b body=242 status=ok
// SIG undefined FUN_14da1983b(void)

/* WARNING: Removing unreachable block (ram,0x00014da19867) */
/* WARNING: Removing unreachable block (ram,0x00014da198d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da1983b(longlong param_1)

{
  longlong local_res18;
  
  if (local_res18 == param_1) {
    FUN_165857616(FUN_165857616);
    return;
  }
  FUN_156a10b66();
  return;
}



// FUNCTION 14da19d51 FUN_14da19d51 body=123 status=ok
// SIG undefined FUN_14da19d51(void)

undefined8 FUN_14da19d51(void)

{
  return 0x265284e;
}



// FUNCTION 14da19def FUN_14da19def body=283 status=ok
// SIG undefined FUN_14da19def(void)

void FUN_14da19def(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  FUN_15b5f141f(uVar1,param_2,*(undefined8 *)(unaff_R13 + -0x88),
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) & uVar1);
  FUN_15b6bf3a9();
  return;
}



// FUNCTION 14da1a0c8 FUN_14da1a0c8 body=157 status=ok
// SIG undefined FUN_14da1a0c8(void)

void FUN_14da1a0c8(void)

{
  return;
}



// FUNCTION 14da1a31b FUN_14da1a31b body=328 status=ok
// SIG undefined FUN_14da1a31b(void)

/* WARNING: Removing unreachable block (ram,0x00015b3c8523) */
/* WARNING: Removing unreachable block (ram,0x00015b3c8529) */
/* WARNING: Removing unreachable block (ram,0x00014da1a39c) */
/* WARNING: Removing unreachable block (ram,0x00014da1a3a2) */
/* WARNING: Removing unreachable block (ram,0x00015b3c84a7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da1a31b(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar3 = *(ulonglong *)(unaff_RSI + -0xa0);
  uVar3 = ~((~(~uVar3 | unaff_RBP) | ~uVar3 & 0xffffffffffffffff - unaff_RBP | uVar3) +
            (~uVar3 | unaff_RBP) + 1);
  lVar2 = (-~local_res20 - unaff_RBP) + (~unaff_RBP | local_res20) * -2 + -3;
  *(undefined8 *)(lVar2 + -8) = unaff_RDI;
  *(ulonglong *)(lVar2 + -0x10) = uVar3;
  *(ulonglong *)(lVar2 + -0x18) = uVar3;
  *(undefined8 *)(lVar2 + -0x20) = in_stack_00000008;
  *(undefined4 *)(lVar2 + -0x28) = 0xb14f9945;
  *(undefined4 *)(lVar2 + -0x24) = 0xffffffff;
  *(undefined8 *)(lVar2 + -0x28) = unaff_R15;
  uVar1 = FUN_162f3b831();
  return uVar1;
}



// FUNCTION 14da1a490 FUN_14da1a490 body=106 status=ok
// SIG undefined FUN_14da1a490(void)

void FUN_14da1a490(void)

{
  undefined4 unaff_retaddr;
  undefined8 local_res8;
  
  if ((local_res8 & 0x8000000000000000) == 0) {
    FUN_16103b492();
    return;
  }
  FUN_156ede2b5(unaff_retaddr);
  return;
}



// FUNCTION 14da1a4fb FUN_14da1a4fb body=137 status=ok
// SIG undefined FUN_14da1a4fb(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da1a4fb(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + ~(unaff_RBP & (unaff_RSI | 0xfffffffff386291d)));
  FUN_160ee1117(param_1,~(uVar1 & in_RAX | ~(uVar1 | in_RAX)));
  return;
}



// FUNCTION 14da1a644 FUN_14da1a644 body=311 status=ok
// SIG undefined FUN_14da1a644(void)

/* WARNING: Removing unreachable block (ram,0x00014da1a6ec) */

void FUN_14da1a644(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  longlong local_res10 [3];
  
  uVar1 = local_res10[1] & unaff_R15;
  local_res10[1] = 0;
  if (*(longlong *)((longlong)local_res10 + unaff_RBX) + unaff_R15 + uVar1 * -2 != 0) {
    FUN_160d1fedf();
    return;
  }
  FUN_160d1fedf();
  return;
}



// FUNCTION 14da1a77d FUN_14da1a77d body=157 status=ok
// SIG undefined FUN_14da1a77d(void)

void FUN_14da1a77d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *in_R10;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  uVar1 = *in_R10;
  uVar2 = *in_R10;
  *in_R10 = 0x3b3c;
  *in_R10 = *in_R10 + 0xc4c4;
  *in_R10 = *in_R10 - ((-0x101 - (uVar1 | 0xfeff)) + uVar2);
  *in_R10 = -*in_R10;
  *(undefined8 *)(param_5 + -8) = local_res8;
  *(undefined8 *)(param_5 + -0x10) = in_R11;
  *(undefined8 *)(param_5 + -0x18) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x18);
  FUN_161c2c9dc(uStackX_18,&DAT_161c2ca27,param_3,param_4);
  return;
}



// FUNCTION 14da1a81d FUN_14da1a81d body=277 status=ok
// SIG undefined FUN_14da1a81d(void)

void FUN_14da1a81d(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  ulonglong *in_stack_00000010;
  undefined8 local_res18;
  
  uVar1 = ~(local_res18 & param_1) & (local_res18 | param_1);
  local_res18._0_2_ = (ushort)uVar1;
  local_res18 = CONCAT62((int6)(uVar1 >> 0x10),
                         (-0x101 - ((ushort)local_res18 | 0xfeff)) + (ushort)local_res18);
  FUN_15afba4a7();
  *in_stack_00000010 = ~*in_stack_00000010;
  *in_stack_00000010 = *in_stack_00000010 | local_res8;
  *in_stack_00000010 = unaff_retaddr & *in_stack_00000010 ^ 0xffffffffffffffff;
  thunk_FUN_162d53fa1(local_res18);
  return;
}



// FUNCTION 14da1aa63 FUN_14da1aa63 body=940 status=ok
// SIG undefined FUN_14da1aa63(void)

/* WARNING: Removing unreachable block (ram,0x00014da1ad62) */
/* WARNING: Removing unreachable block (ram,0x00014da1ac20) */
/* WARNING: Removing unreachable block (ram,0x00014da1ad5c) */
/* WARNING: Removing unreachable block (ram,0x00014da1ad57) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da1aa63(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  undefined8 in_stack_00000010;
  
  FUN_162e66cfe(param_1,param_2,unaff_RBP - (param_3 & 2),in_stack_00000010);
  uVar1 = FUN_16556ac6f();
  return uVar1;
}



// FUNCTION 14da1ad62 FUN_14da1ad62 body=198 status=ok
// SIG undefined FUN_14da1ad62(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14da1ad62(longlong param_1)

{
  longlong in_stack_00000038;
  
  return in_stack_00000038 + param_1;
}



// FUNCTION 14da1ae2a FUN_14da1ae2a body=147 status=ok
// SIG undefined FUN_14da1ae2a(void)

void FUN_14da1ae2a(void)

{
  FUN_165dd4f02();
  return;
}



// FUNCTION 14da1aec4 FUN_14da1aec4 body=141 status=ok
// SIG undefined FUN_14da1aec4(void)

/* WARNING: Removing unreachable block (ram,0x0001569ff81d) */
/* WARNING: Removing unreachable block (ram,0x0001569ff823) */
/* WARNING: Removing unreachable block (ram,0x00016190f487) */
/* WARNING: Removing unreachable block (ram,0x000161c60ae2) */
/* WARNING: Removing unreachable block (ram,0x000161c60b45) */
/* WARNING: Removing unreachable block (ram,0x000161c60b40) */
/* WARNING: Removing unreachable block (ram,0x000161c60b47) */
/* WARNING: Removing unreachable block (ram,0x00016190f502) */
/* WARNING: Removing unreachable block (ram,0x00016190f508) */
/* WARNING: Removing unreachable block (ram,0x00016190f50d) */
/* WARNING: Removing unreachable block (ram,0x00014daa789f) */
/* WARNING: Removing unreachable block (ram,0x00016190f620) */
/* WARNING: Removing unreachable block (ram,0x00016190f626) */
/* WARNING: Removing unreachable block (ram,0x00016190f62b) */
/* WARNING: Removing unreachable block (ram,0x00014da1af51) */

undefined8 FUN_14da1aec4(void)

{
  undefined8 uVar1;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000010;
  
  if ((longlong)
      ((~in_stack_00000008 + in_stack_00000010) - (~in_stack_00000008 & in_stack_00000010) &
      (~in_stack_00000010 | in_stack_00000008)) < 0) {
    FUN_156d352a8();
    uVar1 = FUN_16190f487();
    return uVar1;
  }
  uVar1 = FUN_1569ff71b();
  return uVar1;
}



// FUNCTION 14da1af51 FUN_14da1af51 body=95 status=ok
// SIG undefined FUN_14da1af51(void)

undefined8 FUN_14da1af51(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da1b29e FUN_14da1b29e body=167 status=ok
// SIG undefined FUN_14da1b29e(void)

void FUN_14da1b29e(void)

{
  (*(code *)0x162b816d0)();
  return;
}



// FUNCTION 14da1b92d FUN_14da1b92d body=448 status=ok
// SIG undefined FUN_14da1b92d(void)

/* WARNING: Removing unreachable block (ram,0x00014da1baec) */
/* WARNING: Removing unreachable block (ram,0x00014da1baf2) */
/* WARNING: Removing unreachable block (ram,0x00015b49b9d4) */
/* WARNING: Removing unreachable block (ram,0x00014da1b96f) */
/* WARNING: Removing unreachable block (ram,0x000166033420) */
/* WARNING: Removing unreachable block (ram,0x00014da1b9b3) */
/* WARNING: Removing unreachable block (ram,0x00014da1ba72) */
/* WARNING: Removing unreachable block (ram,0x00014da1ba77) */

void FUN_14da1b92d(void)

{
  return;
}



// FUNCTION 14da1baf2 FUN_14da1baf2 body=168 status=ok
// SIG undefined FUN_14da1baf2(void)

void FUN_14da1baf2(undefined8 param_1)

{
  undefined8 in_stack_fffffffffffffff0;
  
  FUN_162ec5d6a(param_1,CONCAT44((int)((ulonglong)in_stack_fffffffffffffff0 >> 0x20),0xc3fcd89) |
                        0xfffffffff3c030de);
  return;
}



// FUNCTION 14da1bc35 FUN_14da1bc35 body=577 status=ok
// SIG undefined FUN_14da1bc35(void)

/* WARNING: Removing unreachable block (ram,0x00014da1bdec) */

void FUN_14da1bc35(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  uVar3 = *(ulonglong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x28) = 0x14da1bcb8;
  uVar1 = FUN_1614ce684();
  *(ulonglong *)(local_res18 + -0x20) =
       ~((~((uVar3 - (unaff_RBX | uVar3)) + unaff_RBX) + uVar3) - ~uVar1 & (~uVar3 | param_1));
  *(undefined4 *)(local_res18 + -0x20) = 0x9bfa9023;
  *(uint *)(local_res18 + -0x20) = *(uint *)(local_res18 + -0x20) ^ 0x662af2e0;
  *(undefined4 *)(local_res18 + -0x1c) = 0xffffffff;
  *(undefined8 *)(local_res18 + -0x20) = 0x14da1bd50;
  uVar2 = FUN_161d1bf41();
  *(undefined4 *)(local_res18 + -0x18) = 0;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x40);
  uVar1 = ~((~(~uVar3 & ~param_1) + ~param_1) - uVar3);
  *(ulonglong *)(local_res18 + -0x18) = uVar3 + param_1 + uVar1 * -2;
  *(undefined8 *)(local_res18 + -0x18) = uVar2;
  *(code **)(local_res18 + -0x20) = FUN_161d1bf41;
  if (uVar3 + param_1 < uVar1 * 2) {
    FUN_166e0a3b2();
    return;
  }
  FUN_166e0a3b2();
  return;
}



// FUNCTION 14da1bef2 FUN_14da1bef2 body=156 status=ok
// SIG undefined FUN_14da1bef2(void)

void FUN_14da1bef2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1570c09cb(0xffffffffffffffd0,0x35fa9982,param_3,FUN_1570c09cb);
  return;
}



// FUNCTION 14da1bf8f FUN_14da1bf8f body=160 status=ok
// SIG undefined FUN_14da1bf8f(void)

void FUN_14da1bf8f(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_16187199f(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14da1c036 FUN_14da1c036 body=259 status=ok
// SIG undefined FUN_14da1c036(void)

/* WARNING: Removing unreachable block (ram,0x00014da1c0d1) */

undefined8 FUN_14da1c036(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ushort *unaff_R14;
  bool in_ZF;
  ushort unaff_retaddr;
  
  if (!in_ZF) {
    unaff_R14 = (ushort *)((ulonglong)unaff_R14 & 0x7fffffffffffffff);
    unaff_retaddr = ~(~unaff_retaddr | 0xc9c9) | ~(unaff_retaddr | 0x3636);
    in_ZF = &stack0x00000000 == &DAT_fffffffffffffff8;
  }
  *unaff_R14 = unaff_retaddr;
  if (in_ZF) {
    return in_RAX;
  }
  uVar1 = FUN_16258bffe();
  return uVar1;
}



// FUNCTION 14da1c204 FUN_14da1c204 body=128 status=ok
// SIG undefined FUN_14da1c204(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da1c204(void)

{
  FUN_156cf529c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da1c284 FUN_14da1c284 body=118 status=ok
// SIG undefined FUN_14da1c284(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da1c284(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da1c4c4 FUN_14da1c4c4 body=98 status=ok
// SIG undefined FUN_14da1c4c4(void)

void FUN_14da1c4c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  LOCK();
  UNLOCK();
  DAT_14d7bd91e = in_AL;
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
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
  uVar1 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = param_1;
  *(undefined8 *)(local_res18 + -0x28) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -8) = 0x2122960;
  FUN_165c7153c(*(undefined8 *)(local_res18 + -0x20),*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14da1c560 FUN_14da1c560 body=135 status=ok
// SIG undefined FUN_14da1c560(void)

void FUN_14da1c560(void)

{
  longlong in_R11;
  
  if (in_R11 == 0xe2f33) {
    return;
  }
  FUN_15b8af2ac();
  return;
}



// FUNCTION 14da1c711 FUN_14da1c711 body=50 status=ok
// SIG undefined FUN_14da1c711(void)

void FUN_14da1c711(void)

{
  return;
}



// FUNCTION 14da1c865 FUN_14da1c865 body=213 status=ok
// SIG undefined FUN_14da1c865(void)

void FUN_14da1c865(undefined8 param_1,undefined8 param_2)

{
  FUN_1660ea540(FUN_1660ea540,param_2);
  return;
}



// FUNCTION 14da1c9ed FUN_14da1c9ed body=145 status=ok
// SIG undefined FUN_14da1c9ed(void)

void FUN_14da1c9ed(void)

{
  FUN_166a19dc0();
  return;
}



// FUNCTION 14da1cb46 FUN_14da1cb46 body=18 status=ok
// SIG undefined FUN_14da1cb46(void)

void FUN_14da1cb46(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14da1cd28 FUN_14da1cd28 body=177 status=ok
// SIG undefined FUN_14da1cd28(void)

void FUN_14da1cd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x28) = param_2;
  *(undefined8 *)(local_res18 + -0x30) = param_4;
  *(undefined8 *)(local_res18 + -0x38) = param_4;
  *(undefined **)(local_res18 + -0x30) = &DAT_14da1cddf;
  FUN_1619509cb(param_1,FUN_1619509cb,param_3,*(undefined8 *)(local_res18 + -0x38));
  return;
}



// FUNCTION 14da1ce6d FUN_14da1ce6d body=279 status=ok
// SIG undefined FUN_14da1ce6d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da1ce6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  code *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = FUN_161cb4ecd;
  FUN_161cb4ecd();
  (*(code *)&LAB_1613ea4b7)
            (pcVar1,*(ulonglong *)((-unaff_RDI ^ in_RAX) - 0x68) ^ (ulonglong)pcVar1,param_3,
             &LAB_1613ea4b7);
  return;
}



// FUNCTION 14da1cf88 FUN_14da1cf88 body=194 status=ok
// SIG undefined FUN_14da1cf88(void)

void FUN_14da1cf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R14;
  *(code **)(local_res18 + -0x20) = FUN_14da1d04a;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_15683fa30;
  return;
}



// FUNCTION 14da1d04a FUN_14da1d04a body=334 status=ok
// SIG undefined FUN_14da1d04a(void)

/* WARNING: Removing unreachable block (ram,0x00014da1d167) */
/* WARNING: Removing unreachable block (ram,0x00014da1d16d) */
/* WARNING: Removing unreachable block (ram,0x00016586483c) */
/* WARNING: Removing unreachable block (ram,0x00015665c8cd) */
/* WARNING: Removing unreachable block (ram,0x00015665c8d3) */
/* WARNING: Removing unreachable block (ram,0x00014da1d0df) */
/* WARNING: Removing unreachable block (ram,0x0001629e956b) */

void FUN_14da1d04a(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong local_res8;
  ulonglong uStackX_10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  if (local_res8 + param_1 == 0) {
    FUN_15665c832();
    return;
  }
  uVar2 = ~((~param_1 | uStackX_10) & (~uStackX_10 | param_1));
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  *(undefined8 *)(uVar2 - 0x20) = in_R11;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_1629e95c8;
  (*(code *)0x14de6ef25)(~((~param_1 | uVar1) & (~uVar1 | param_1)),param_2);
  return;
}



// FUNCTION 14da1d2fc FUN_14da1d2fc body=246 status=ok
// SIG undefined FUN_14da1d2fc(void)

void FUN_14da1d2fc(undefined8 param_1,ushort *param_2,undefined8 param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong in_RAX;
  undefined8 uVar5;
  longlong unaff_RSI;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  longlong lStackX_20;
  
  uVar7 = (undefined7)((ulonglong)param_3 >> 8);
  uVar6 = (undefined1)param_3;
  uVar2 = *param_2;
  uVar3 = *param_2;
  *param_2 = 0;
  *param_2 = *param_2 + ((uVar3 - 1) - ~(0xfeff - (uVar2 | 0xfeff)));
  syscall();
  *(undefined8 *)(lStackX_20 + -8) = in_R10;
  *(undefined8 *)(lStackX_20 + -0x10) = in_R10;
  puVar1 = (uint *)(lStackX_20 + -0x18);
  *(longlong *)puVar1 = in_RAX;
  *(undefined8 *)(lStackX_20 + -0x20) = 0x14da1d345;
  *(uint *)(lStackX_20 + -0x28) = 0x1057e542;
  *puVar1 = *(uint *)(lStackX_20 + -0x28);
  uVar5 = *(undefined8 *)(lStackX_20 + -0x20);
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_R15;
  *(undefined4 *)(lStackX_20 + -0x14) = 0;
  *(undefined8 *)(lStackX_20 + -0x20) = 0x14da1d389;
  FUN_15b22c842(uVar5,uStackX_8);
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(longlong *)puVar1 = *(longlong *)puVar1 - unaff_RSI;
  *(longlong *)puVar1 = -*(longlong *)puVar1;
  uVar4 = *puVar1;
  *(longlong *)puVar1 = unaff_R12;
  *(undefined8 *)(lStackX_20 + -0x20) = uVar5;
  uVar5 = *(undefined8 *)(lStackX_20 + -0x20);
  *(undefined8 *)(lStackX_20 + -0x20) = uVar5;
  *(ulonglong *)(lStackX_20 + -0x28) = CONCAT71(uVar7,uVar6);
  *(ulonglong *)(lStackX_20 + -0x30) = CONCAT71((int7)((ulonglong)uVar5 >> 8),0x79);
  FUN_161607fd6(FUN_161607fd6,uVar4 >> 0x1d,1);
  return;
}



// FUNCTION 14da1d3f3 FUN_14da1d3f3 body=327 status=ok
// SIG undefined FUN_14da1d3f3(void)

/* WARNING: Removing unreachable block (ram,0x00014da1d53d) */

undefined8 FUN_14da1d3f3(void)

{
  undefined8 uVar1;
  longlong in_R11;
  ulonglong unaff_retaddr;
  
  FUN_16659d88c();
  if ((longlong)(*(ulonglong *)(in_R11 + -0x30) & unaff_retaddr) < 0) {
    uVar1 = FUN_162697027();
    return uVar1;
  }
  uVar1 = FUN_162697027();
  return uVar1;
}



// FUNCTION 14da1d53d FUN_14da1d53d body=41 status=ok
// SIG undefined FUN_14da1d53d(void)

void FUN_14da1d53d(void)

{
  return;
}



// FUNCTION 14da1d5c7 FUN_14da1d5c7 body=149 status=ok
// SIG undefined FUN_14da1d5c7(void)

/* WARNING: Removing unreachable block (ram,0x000161943bb9) */
/* WARNING: Removing unreachable block (ram,0x00014da1d65d) */

void FUN_14da1d5c7(ulonglong param_1)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined4 unaff_retaddr;
  undefined8 uStack_20;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) == param_1) {
    uStack_20 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),0xa152fe00);
    (*(code *)0x165678eef)
              (0x165678eef,
               (CONCAT44(0x8d188f5,unaff_retaddr) ^ 0x8d188f51b39de24) +
               *(longlong *)(unaff_RDI + -0x68) ^ param_1,uStack_20 + 0x5ead01f8);
    return;
  }
  FUN_161943b70();
  return;
}



// FUNCTION 14da1d65d FUN_14da1d65d body=54 status=ok
// SIG undefined FUN_14da1d65d(void)

void FUN_14da1d65d(void)

{
  undefined8 in_stack_00000008;
  
  FUN_14d85d504(in_stack_00000008);
  return;
}



// FUNCTION 14da1d779 FUN_14da1d779 body=671 status=ok
// SIG undefined FUN_14da1d779(void)

/* WARNING: Removing unreachable block (ram,0x000166246ac8) */
/* WARNING: Removing unreachable block (ram,0x000166246ace) */
/* WARNING: Removing unreachable block (ram,0x00014da1d892) */

undefined8 FUN_14da1d779(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_166827437(FUN_166827437,param_2,param_3);
  pcVar2 = FUN_166b3d5b3;
  FUN_166b3d5b3();
  uVar1 = FUN_15b84daf3(pcVar2);
  return uVar1;
}



// FUNCTION 14da1d9ce FUN_14da1d9ce body=148 status=ok
// SIG undefined FUN_14da1d9ce(void)

void FUN_14da1d9ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  
  FUN_165617da4(param_1,*(undefined8 *)(unaff_R13 + -0x98),param_3);
  return;
}



// FUNCTION 14da1dbbc FUN_14da1dbbc body=299 status=ok
// SIG undefined FUN_14da1dbbc(void)

/* WARNING: Removing unreachable block (ram,0x00014da1dca4) */
/* WARNING: Removing unreachable block (ram,0x00014da1dc59) */
/* WARNING: Removing unreachable block (ram,0x00014da1dce3) */
/* WARNING: Removing unreachable block (ram,0x00014da1dce8) */
/* WARNING: Removing unreachable block (ram,0x000164bd323f) */
/* WARNING: Removing unreachable block (ram,0x00014da1dcee) */

void FUN_14da1dbbc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if (*(ulonglong *)(unaff_R13 + -0xa0) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) * -2 == 0) {
    FUN_1573dc731(unaff_retaddr);
    return;
  }
  FUN_1573dc731(unaff_retaddr);
  return;
}



// FUNCTION 14da1dcee FUN_14da1dcee body=110 status=ok
// SIG undefined FUN_14da1dcee(void)

void FUN_14da1dcee(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint unaff_ESI;
  
  FUN_156ffcbb3(param_1,param_2,(unaff_ESI & (param_3 ^ 0xffffffff) | ~unaff_ESI) ^ 0xffffffff);
  return;
}



// FUNCTION 14da1dd5c FUN_14da1dd5c body=69 status=ok
// SIG undefined FUN_14da1dd5c(void)

void FUN_14da1dd5c(void)

{
  return;
}



// FUNCTION 14da1df4e FUN_14da1df4e body=427 status=ok
// SIG undefined FUN_14da1df4e(void)

/* WARNING: Instruction at (ram,0x00014da1dfd3) overlaps instruction at (ram,0x00014da1dfd2)
    */
/* WARNING: Removing unreachable block (ram,0x00014da1e0ba) */
/* WARNING: Removing unreachable block (ram,0x00014da1e0cb) */
/* WARNING: Removing unreachable block (ram,0x00014da1dfd2) */
/* WARNING: Removing unreachable block (ram,0x00014da1e0c0) */
/* WARNING: Removing unreachable block (ram,0x0001577ef544) */
/* WARNING: Removing unreachable block (ram,0x00014da1e010) */
/* WARNING: Removing unreachable block (ram,0x0001577ef3f5) */
/* WARNING: Removing unreachable block (ram,0x0001577ef53e) */
/* WARNING: Removing unreachable block (ram,0x00016113ef49) */
/* WARNING: Removing unreachable block (ram,0x00014da1e01c) */

void FUN_14da1df4e(void)

{
  FUN_1577ef3f5();
  return;
}



// FUNCTION 14da1e169 FUN_14da1e169 body=74 status=ok
// SIG undefined FUN_14da1e169(void)

void FUN_14da1e169(void)

{
  return;
}



// FUNCTION 14da1e4e1 FUN_14da1e4e1 body=101 status=ok
// SIG undefined FUN_14da1e4e1(void)

void FUN_14da1e4e1(void)

{
  return;
}



// FUNCTION 14da1e60d FUN_14da1e60d body=292 status=ok
// SIG undefined FUN_14da1e60d(void)

void FUN_14da1e60d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong unaff_R12;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_R12 + -8);
  lVar1 = -(~-(~in_RAX | *(ulonglong *)(unaff_R12 + -0xa0) |
              ~(*(ulonglong *)(unaff_R12 + -0xa0) & ~in_RAX)) + 2);
  FUN_16508ae29();
  (*(code *)&LAB_1626f4a52)(param_1,param_2,lVar1,param_4,uVar2);
  return;
}



// FUNCTION 14da1e8ed FUN_14da1e8ed body=522 status=ok
// SIG undefined FUN_14da1e8ed(void)

/* WARNING: Removing unreachable block (ram,0x00014da1e96e) */

undefined8 FUN_14da1e8ed(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da1ea82 FUN_14da1ea82 body=138 status=ok
// SIG undefined FUN_14da1ea82(void)

void FUN_14da1ea82(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16645e04d(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP);
  return;
}



// FUNCTION 14da1eb0e FUN_14da1eb0e body=46 status=ok
// SIG undefined FUN_14da1eb0e(void)

void FUN_14da1eb0e(void)

{
  return;
}



// FUNCTION 14da1eb8d FUN_14da1eb8d body=302 status=ok
// SIG undefined FUN_14da1eb8d(void)

/* WARNING: Instruction at (ram,0x00014da1ec49) overlaps instruction at (ram,0x00014da1ec46)
    */
/* WARNING: Removing unreachable block (ram,0x00014da1ec31) */
/* WARNING: Removing unreachable block (ram,0x00014da1ec49) */
/* WARNING: Removing unreachable block (ram,0x00014da1ec46) */
/* WARNING: Removing unreachable block (ram,0x00014da1ec4d) */
/* WARNING: Removing unreachable block (ram,0x00014da1ecd0) */

void FUN_14da1eb8d(void)

{
  longlong unaff_R15;
  
  if (unaff_R15 == 0) {
    FUN_16210162d();
    return;
  }
  FUN_16210162d();
  return;
}



// FUNCTION 14da1ec31 FUN_14da1ec31 body=167 status=ok
// SIG undefined FUN_14da1ec31(void)

/* WARNING: Instruction at (ram,0x00014da1ec49) overlaps instruction at (ram,0x00014da1ec46)
    */

void FUN_14da1ec31(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 local_res8 [32];
  
  param_2 = param_2 ^ 0x4488fcb7;
  if (unaff_RSI != param_2) {
    param_2 = *(ulonglong *)(unaff_RDI + -0x68);
    register0x00000020 = (BADSPACEBASE *)local_res8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = *(undefined8 *)(unaff_RDI + -0x48);
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R15;
  *(undefined8 *)((longlong)register0x00000020 + -8) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = param_4;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = param_4;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = *(undefined8 *)(unaff_RDI + -0x98);
  uVar1 = *(undefined8 *)((longlong)register0x00000020 + -0x20);
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = unaff_R14;
  *(ulonglong *)((longlong)register0x00000020 + -0x30) = param_1;
  *(code **)((longlong)register0x00000020 + -0x38) = FUN_14da1ecda;
  lVar2 = FUN_161ba45e1(param_1,param_2 ^ param_1,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00014da1ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))();
  return;
}



// FUNCTION 14da1ecda FUN_14da1ecda body=17 status=ok
// SIG undefined FUN_14da1ecda(void)

void FUN_14da1ecda(void)

{
  longlong in_RAX;
  
                    /* WARNING: Could not recover jumptable at 0x00014da1ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RAX + 0x10))();
  return;
}



// FUNCTION 14da1ed9b FUN_14da1ed9b body=490 status=ok
// SIG undefined FUN_14da1ed9b(void)

/* WARNING: Removing unreachable block (ram,0x00014da1ef82) */
/* WARNING: Removing unreachable block (ram,0x00014da1ef88) */

undefined8 FUN_14da1ed9b(void)

{
  undefined8 uVar1;
  
  FUN_16531d249();
  FUN_1618defa2();
  uVar1 = FUN_14d9a1923();
  return uVar1;
}



// FUNCTION 14da1ef88 FUN_14da1ef88 body=256 status=ok
// SIG undefined FUN_14da1ef88(void)

undefined8 FUN_14da1ef88(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong in_R9;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_retaddr;
  *(undefined **)(uVar1 - 0x10) = &DAT_15682df3d;
  *(undefined **)(uVar1 - 0x18) = &DAT_15682df3d;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x30) = 0x14da1f01b;
  FUN_15682dea3();
  uVar2 = *(undefined8 *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(uVar1 - 0x18);
  *(code **)(uVar1 - 0x28) = FUN_15682dea3;
  *(undefined8 *)(uVar1 - 0x18) = 0x5206bbba;
  *(ulonglong *)(uVar1 - 0x18) = *(ulonglong *)(uVar1 - 0x18) ^ 0x5206bbba;
  *(ulonglong *)(uVar1 - 0x18) = *(ulonglong *)(uVar1 - 0x18) ^ in_R9 - 0x96bfb3bU;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = 0x14d7a75c0;
  return uVar2;
}



// FUNCTION 14da1f0ae FUN_14da1f0ae body=163 status=ok
// SIG undefined FUN_14da1f0ae(void)

void FUN_14da1f0ae(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_14d8028f5(param_1,FUN_14d8028f5,param_3,local_res8);
  return;
}



// FUNCTION 14da1f152 FUN_14da1f152 body=438 status=ok
// SIG undefined FUN_14da1f152(void)

/* WARNING: Removing unreachable block (ram,0x000160fbf1dc) */
/* WARNING: Removing unreachable block (ram,0x000160fbf29e) */
/* WARNING: Removing unreachable block (ram,0x00014da1f1db) */

void FUN_14da1f152(void)

{
  uint in_R11D;
  uint in_stack_00000010;
  
  if ((in_R11D & 1) != 0) {
    return;
  }
  if ((in_stack_00000010 & 1) == 0) {
    FUN_160fbf1ce();
    return;
  }
  return;
}



// FUNCTION 14da1f3b6 FUN_14da1f3b6 body=363 status=ok
// SIG undefined FUN_14da1f3b6(void)

/* WARNING: Removing unreachable block (ram,0x00014da1f449) */
/* WARNING: Removing unreachable block (ram,0x00014da1f4d8) */
/* WARNING: Removing unreachable block (ram,0x00014da1f4dd) */
/* WARNING: Removing unreachable block (ram,0x00014da1f4e3) */
/* WARNING: Removing unreachable block (ram,0x00014da1f4e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da1f3b6(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  *(longlong *)(&stack0x00000010 + in_RAX) = *(longlong *)(&stack0x00000010 + in_RAX) - unaff_RSI;
  *(longlong *)(&stack0x00000010 + in_RAX) = -*(longlong *)(&stack0x00000010 + in_RAX);
  uVar1 = (*(code *)&LAB_156b1f898)(param_1,param_2);
  return uVar1;
}



// FUNCTION 14da1f618 FUN_14da1f618 body=298 status=ok
// SIG undefined FUN_14da1f618(void)

/* WARNING: Removing unreachable block (ram,0x00014da1f6b4) */
/* WARNING: Removing unreachable block (ram,0x00014da1f6eb) */
/* WARNING: Removing unreachable block (ram,0x00014da1f6f0) */
/* WARNING: Removing unreachable block (ram,0x00014da1f6a9) */

void FUN_14da1f618(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  short *unaff_RSI;
  undefined8 unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_RSI = (-0x101 - (param_3 | 0xfeff)) + *unaff_RSI;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_retaddr;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_15732cad6;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_15732cad6;
  *(undefined8 *)(local_res20 + -0x20) = param_1;
  uVar2 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  lVar3 = *(longlong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -8) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  *(longlong *)(local_res20 + -8) = lVar3 + *(longlong *)(local_res20 + -8);
  thunk_FUN_15b642ca5(uVar2,param_2,*(undefined8 *)(local_res20 + -0x18),
                      *(undefined8 *)(local_res20 + -0x10));
  return;
}



// FUNCTION 14da1f876 FUN_14da1f876 body=152 status=ok
// SIG undefined FUN_14da1f876(void)

void FUN_14da1f876(void)

{
  return;
}



// FUNCTION 14da1f90f FUN_14da1f90f body=73 status=ok
// SIG undefined FUN_14da1f90f(void)

void FUN_14da1f90f(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14da1f958 FUN_14da1f958 body=225 status=ok
// SIG undefined FUN_14da1f958(void)

longlong FUN_14da1f958(ulonglong param_1)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uStackX_10;
  undefined4 uStackX_14;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  FUN_16584c519(3 - (~param_1 + 2));
  uVar3 = ~-*(longlong *)(unaff_RSI + -0x30) + 1U ^ unaff_RBP;
  FUN_1618abf88(0xffffffff9bd82a9e);
  pvVar1 = ProcessEnvironmentBlock;
  if (CONCAT44(uStackX_14,uStackX_10) == 0x8663982) {
    *(undefined8 *)(uStackX_20 + -8) = 0xffffffffffffff98;
    *(undefined8 *)(uStackX_20 + -0x10) = 0xffffffffffffff98;
    *(void **)(uStackX_20 + -0x18) = pvVar1;
    *(undefined4 *)(uStackX_20 + -0x18) = 0xdfce66f;
    *(undefined4 *)(uStackX_20 + -0x14) = 0;
    lVar2 = *(longlong *)(uStackX_20 + -0x18);
    *(ulonglong *)(uStackX_20 + -0x18) =
         (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
         (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
         (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
         (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 |
         (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80 | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40
         | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 | (ulonglong)((uStackX_18 & 4) != 0) * 4 |
         (ulonglong)((uStackX_18 & 1) != 0) | (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
    uVar4 = *(ulonglong *)(uStackX_20 + -0x18);
    *(ulonglong *)(uStackX_20 + -0x18) = uVar3;
    *(ulonglong *)(uStackX_20 + -0x20) =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    *(longlong *)(uStackX_20 + -8) = lVar2 + -0x97b6ca7;
    lVar2 = FUN_165c7153c();
    return lVar2;
  }
  return CONCAT44(uStackX_14,uStackX_10);
}



// FUNCTION 14da1fa3b FUN_14da1fa3b body=309 status=ok
// SIG undefined FUN_14da1fa3b(void)

longlong FUN_14da1fa3b(void)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  ulonglong uVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined8 local_res18;
  
  pvVar1 = ProcessEnvironmentBlock;
  if (CONCAT44(uStackX_c,local_res8) == 0x8663982) {
    *(undefined8 *)(local_res18 + -8) = unaff_RBX;
    *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
    *(void **)(local_res18 + -0x18) = pvVar1;
    *(undefined4 *)(local_res18 + -0x18) = 0xdfce66f;
    *(undefined4 *)(local_res18 + -0x14) = 0;
    lVar2 = *(longlong *)(local_res18 + -0x18);
    *(ulonglong *)(local_res18 + -0x18) =
         (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
         (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
         (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
         (ulonglong)((local_res10 & 0x100) != 0) * 0x100 |
         (ulonglong)((local_res10 & 0x80) != 0) * 0x80 |
         (ulonglong)((local_res10 & 0x40) != 0) * 0x40 |
         (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
         (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000
         | (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
    uVar3 = *(ulonglong *)(local_res18 + -0x18);
    *(undefined8 *)(local_res18 + -0x18) = in_R11;
    *(ulonglong *)(local_res18 + -0x20) =
         (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
         (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
    *(longlong *)(local_res18 + -8) = lVar2 + -0x97b6ca7;
    lVar2 = FUN_165c7153c();
    return lVar2;
  }
  return CONCAT44(uStackX_c,local_res8);
}



// FUNCTION 14da1fad3 FUN_14da1fad3 body=63 status=ok
// SIG undefined FUN_14da1fad3(void)

void FUN_14da1fad3(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da1fbfa FUN_14da1fbfa body=5 status=ok
// SIG undefined FUN_14da1fbfa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da1fbfa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da1fe7f FUN_14da1fe7f body=131 status=ok
// SIG undefined FUN_14da1fe7f(void)

void FUN_14da1fe7f(ulonglong param_1)

{
  longlong in_R10;
  longlong unaff_R14;
  
  *(ulonglong *)(in_R10 + 0x10) =
       ~(~(param_1 | *(ulonglong *)(in_R10 + 0x10)) + 1 + *(longlong *)(in_R10 + 0x10) + unaff_R14);
  FUN_15652f0a8(FUN_15652f0a8);
  return;
}



// FUNCTION 14da200f7 FUN_14da200f7 body=105 status=ok
// SIG undefined FUN_14da200f7(void)

ulonglong FUN_14da200f7(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  return ~((in_RAX - (unaff_RBX | in_RAX)) + unaff_RBX);
}



// FUNCTION 14da20161 FUN_14da20161 body=471 status=ok
// SIG undefined FUN_14da20161(void)

/* WARNING: Removing unreachable block (ram,0x00015b5b5395) */
/* WARNING: Removing unreachable block (ram,0x00015b2df912) */
/* WARNING: Removing unreachable block (ram,0x00015b2df918) */
/* WARNING: Removing unreachable block (ram,0x0001570fd8d2) */
/* WARNING: Removing unreachable block (ram,0x00015b5b538f) */
/* WARNING: Removing unreachable block (ram,0x00015b5b53a0) */
/* WARNING: Removing unreachable block (ram,0x00015b5b5427) */
/* WARNING: Removing unreachable block (ram,0x000164b631b6) */
/* WARNING: Removing unreachable block (ram,0x000164b63249) */
/* WARNING: Removing unreachable block (ram,0x00015b2c6b6b) */
/* WARNING: Removing unreachable block (ram,0x000164b6324f) */
/* WARNING: Removing unreachable block (ram,0x000164b632e3) */
/* WARNING: Removing unreachable block (ram,0x000164b632ef) */
/* WARNING: Removing unreachable block (ram,0x000164b632f4) */
/* WARNING: Removing unreachable block (ram,0x000164b63324) */
/* WARNING: Removing unreachable block (ram,0x000164b63347) */
/* WARNING: Removing unreachable block (ram,0x000166400daa) */
/* WARNING: Removing unreachable block (ram,0x000166400e37) */
/* WARNING: Removing unreachable block (ram,0x000166400e3d) */
/* WARNING: Removing unreachable block (ram,0x000166400e49) */
/* WARNING: Removing unreachable block (ram,0x00015b2df612) */
/* WARNING: Removing unreachable block (ram,0x00015b2df72a) */
/* WARNING: Removing unreachable block (ram,0x00015b2df735) */
/* WARNING: Removing unreachable block (ram,0x000161e4942e) */
/* WARNING: Removing unreachable block (ram,0x00015b2df73b) */
/* WARNING: Removing unreachable block (ram,0x00015b2df74c) */
/* WARNING: Removing unreachable block (ram,0x00015b2df750) */
/* WARNING: Removing unreachable block (ram,0x000161bf20aa) */
/* WARNING: Removing unreachable block (ram,0x00015b2df7ce) */
/* WARNING: Removing unreachable block (ram,0x00015b2df7d4) */
/* WARNING: Removing unreachable block (ram,0x00015b2df7d9) */
/* WARNING: Removing unreachable block (ram,0x00015b2df884) */
/* WARNING: Removing unreachable block (ram,0x00015b2df892) */
/* WARNING: Removing unreachable block (ram,0x00015b2df88d) */
/* WARNING: Removing unreachable block (ram,0x0001570fd8ec) */
/* WARNING: Removing unreachable block (ram,0x0001570fd91d) */
/* WARNING: Removing unreachable block (ram,0x0001570fd92e) */
/* WARNING: Removing unreachable block (ram,0x00015b2df8cf) */
/* WARNING: Removing unreachable block (ram,0x00015b2df90d) */
/* WARNING: Removing unreachable block (ram,0x00014da2029d) */
/* WARNING: Removing unreachable block (ram,0x00014da202a3) */
/* WARNING: Removing unreachable block (ram,0x00014da20300) */
/* WARNING: Removing unreachable block (ram,0x00014da20303) */
/* WARNING: Removing unreachable block (ram,0x00014da201f9) */
/* WARNING: Removing unreachable block (ram,0x00015b5b52f8) */
/* WARNING: Removing unreachable block (ram,0x00015b5b52f3) */
/* WARNING: Removing unreachable block (ram,0x0001622f84a5) */
/* WARNING: Removing unreachable block (ram,0x000156bbcfd8) */

undefined8 FUN_14da20161(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x88) & param_1) < 0) {
    uVar1 = FUN_164f9ac09(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_1666748b1();
  return uVar1;
}



// FUNCTION 14da20720 FUN_14da20720 body=97 status=ok
// SIG undefined FUN_14da20720(void)

void FUN_14da20720(void)

{
  code *pcVar1;
  ushort in_AX;
  ushort *unaff_RBP;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined8 *local_res20;
  
  *unaff_RBP = (in_AX ^ 0xffff | *unaff_RBP) - 0x100;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  local_res20[-1] = uStackX_8;
  local_res20[-2] = 0x221c87a;
  *local_res20 = local_res20[-2];
  *(undefined8 *)((longlong)local_res20 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)local_res20 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)local_res20 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14da20841 FUN_14da20841 body=172 status=ok
// SIG undefined FUN_14da20841(void)

void FUN_14da20841(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1654e68a3(FUN_1654e68a3,0,
                ~(*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP),
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14da20990 FUN_14da20990 body=10 status=ok
// SIG undefined FUN_14da20990(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da20b55) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab1ec) */
/* WARNING: Removing unreachable block (ram,0x000165f57e88) */
/* WARNING: Removing unreachable block (ram,0x00014da20ab3) */
/* WARNING: Removing unreachable block (ram,0x00014da20b34) */
/* WARNING: Removing unreachable block (ram,0x000165f57e8b) */
/* WARNING: Removing unreachable block (ram,0x00014da20b2f) */

undefined8 FUN_14da20990(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong unaff_R15;
  ulonglong in_stack_00000008;
  ulonglong uStack_18;
  undefined1 *puStack_10;
  
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | param_1;
  *(ulonglong *)(unaff_R15 + 8) =
       ~((*(longlong *)(unaff_R15 + 8) - (param_4 | *(ulonglong *)(unaff_R15 + 8))) + param_4);
  puStack_10 = &LAB_14da20a11;
  uVar1 = FUN_156b0498f(param_1,param_2);
  uStack_18 = ~((~in_stack_00000008 | 0x10) & (in_stack_00000008 | 0xffffffffffffffef));
  puStack_10 = (undefined1 *)0xe900000005850f0a;
  if (&uStack_18 <= &DAT_00000007) {
    uVar1 = FUN_15b695e92();
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14da20b5b FUN_14da20b5b body=165 status=ok
// SIG undefined FUN_14da20b5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da20b5b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165d39a11(param_1,param_2,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da20d20 FUN_14da20d20 body=400 status=ok
// SIG undefined FUN_14da20d20(void)

/* WARNING: Removing unreachable block (ram,0x000164b9e0ed) */
/* WARNING: Removing unreachable block (ram,0x000164b9e0f3) */
/* WARNING: Removing unreachable block (ram,0x000164b9e105) */
/* WARNING: Removing unreachable block (ram,0x000164b9e15d) */
/* WARNING: Removing unreachable block (ram,0x000164b9e160) */
/* WARNING: Removing unreachable block (ram,0x000161a9cb04) */
/* WARNING: Removing unreachable block (ram,0x0001565fbf4f) */

undefined1 * FUN_14da20d20(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 *puVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),0x2a) ^ 0x2b;
  cVar6 = (char)uVar7;
  bVar3 = -1 < (longlong)((*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) << cVar6 + -1);
  if ((cVar6 != '\0' && !bVar3) && (cVar6 == '\0' || bVar3)) {
    puVar4 = (undefined1 *)FUN_14da20d97(uVar7,param_2);
    return puVar4;
  }
  plVar2 = (longlong *)(*(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15);
  uVar7 = rdtsc();
  plVar2[-1] = in_R10;
  plVar2[-2] = in_R10;
  plVar2[-3] = 0x164b9e062;
  lVar5 = FUN_16209979d(param_1,uVar7 >> 0x20);
  *plVar2 = lVar5;
  plVar2[-1] = unaff_RSI;
  plVar1 = plVar2 + 1;
  *plVar1 = *(longlong *)(*plVar2 + 0x60);
  plVar2[2] = *plVar1;
  *plVar1 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  *plVar2 = (longlong)&LAB_156dbf03f;
  return &LAB_156dbf03f;
}



// FUNCTION 14da20d97 FUN_14da20d97 body=140 status=ok
// SIG undefined FUN_14da20d97(void)

void FUN_14da20d97(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  ulonglong in_R10;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(in_RAX + 0x10) =
       (-~unaff_R15 -
       (~((~(in_R10 & *(ulonglong *)(in_RAX + 0x10)) + *(longlong *)(in_RAX + 0x10)) - ~in_R10) + 2)
       ) + 1;
  FUN_166be447a(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da20e9d FUN_14da20e9d body=155 status=ok
// SIG undefined FUN_14da20e9d(void)

void FUN_14da20e9d(void)

{
  FUN_14da7c720(FUN_14da7c720);
  return;
}



// FUNCTION 14da20f3a FUN_14da20f3a body=149 status=ok
// SIG undefined FUN_14da20f3a(void)

/* WARNING: Removing unreachable block (ram,0x00014da20fc7) */
/* WARNING: Removing unreachable block (ram,0x00014da20fd2) */
/* WARNING: Removing unreachable block (ram,0x00014da20fcd) */

void FUN_14da20f3a(void)

{
  FUN_1566ec3cd();
  return;
}



// FUNCTION 14da20fd2 FUN_14da20fd2 body=151 status=ok
// SIG undefined FUN_14da20fd2(void)

void FUN_14da20fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1622a7f67(FUN_1622a7f67,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,
                0xffffffffaef480fe,*(undefined8 *)(unaff_RSI + -0x88));
  return;
}



// FUNCTION 14da2106a FUN_14da2106a body=151 status=ok
// SIG undefined FUN_14da2106a(void)

void FUN_14da2106a(void)

{
  return;
}



// FUNCTION 14da21199 FUN_14da21199 body=156 status=ok
// SIG undefined FUN_14da21199(void)

void FUN_14da21199(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  param_5 = param_5 ^ param_1;
  puVar1 = (ulonglong *)(param_5 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R15;
  *(undefined8 *)(param_5 - 0x10) = in_RAX;
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  uVar2 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 8) = 0;
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ 0x156364ad8;
  *(undefined8 *)(param_5 - 0x10) = uVar2;
  *(undefined8 *)(param_5 - 0x18) = uVar2;
  FUN_156364a9c(local_res18,param_2);
  return;
}



// FUNCTION 14da21236 FUN_14da21236 body=110 status=ok
// SIG undefined FUN_14da21236(void)

void FUN_14da21236(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 local_10;
  
  local_10 = (uint)param_1;
  thunk_FUN_162e5e7c9(param_1,param_2,
                      ~((~((param_3 ^ 0xffffffff) & ~local_10) + ~local_10) -
                       ~(param_3 ^ 0xffffffff)));
  return;
}



// FUNCTION 14da21349 FUN_14da21349 body=131 status=ok
// SIG undefined FUN_14da21349(void)

void FUN_14da21349(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1569ee462(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0xa0)) &
                        (~*(ulonglong *)(unaff_RDI + -0xa0) | param_1));
  return;
}



// FUNCTION 14da21517 FUN_14da21517 body=307 status=ok
// SIG undefined FUN_14da21517(void)

/* WARNING: Removing unreachable block (ram,0x00014da21645) */
/* WARNING: Removing unreachable block (ram,0x00014da2163f) */
/* WARNING: Removing unreachable block (ram,0x00014da21650) */
/* WARNING: Removing unreachable block (ram,0x00014da21662) */
/* WARNING: Removing unreachable block (ram,0x00014da2168c) */
/* WARNING: Removing unreachable block (ram,0x00014da216b9) */
/* WARNING: Removing unreachable block (ram,0x00014da216be) */
/* WARNING: Removing unreachable block (ram,0x000162cf000f) */
/* WARNING: Removing unreachable block (ram,0x000162cf0015) */
/* WARNING: Removing unreachable block (ram,0x000162cf001a) */
/* WARNING: Removing unreachable block (ram,0x000162cf00a0) */
/* WARNING: Removing unreachable block (ram,0x000162cf00a6) */
/* WARNING: Removing unreachable block (ram,0x000162cf00ab) */
/* WARNING: Removing unreachable block (ram,0x000164effc22) */
/* WARNING: Removing unreachable block (ram,0x000162cde973) */
/* WARNING: Removing unreachable block (ram,0x000164effca2) */
/* WARNING: Removing unreachable block (ram,0x000164effca8) */
/* WARNING: Removing unreachable block (ram,0x000164effcad) */
/* WARNING: Removing unreachable block (ram,0x00014da215a3) */

undefined8 FUN_14da21517(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  
  if (-1 < (longlong)
           (~((~param_1 | in_RAX) + param_1 + 1) &
           (~((param_1 - (in_RAX | param_1)) + in_RAX) + param_1) - (in_RAX ^ 0xffffffffffffffff)))
  {
    uVar1 = FUN_165035957();
    return uVar1;
  }
  uVar1 = FUN_162ceff6d();
  return uVar1;
}



// FUNCTION 14da21650 FUN_14da21650 body=148 status=ok
// SIG undefined FUN_14da21650(void)

void FUN_14da21650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  if (unaff_R14 == (unaff_retaddr ^ 0x6eab3c56)) {
    FUN_1574ba9da(param_1,in_stack_00000008);
    return;
  }
  if (unaff_R14 != 0xfa306) {
    FUN_166dca75f();
    FUN_165c7153c();
    return;
  }
  FUN_1574ba9da(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14da21883 FUN_14da21883 body=463 status=ok
// SIG undefined FUN_14da21883(void)

/* WARNING: Removing unreachable block (ram,0x00014da2191b) */

void FUN_14da21883(undefined8 param_1,uint param_2)

{
  ulonglong in_RAX;
  uint uVar1;
  longlong unaff_R12;
  
  uVar1 = (~-param_2 + 1) * 0x40000000;
  FUN_15b9d8351(param_1,param_2 >> 2 ^ uVar1,uVar1,
                ((in_RAX - 1) - ~*(ulonglong *)(unaff_R12 + -0x60)) +
                (*(ulonglong *)(unaff_R12 + -0x60) & in_RAX) * -2);
  return;
}



// FUNCTION 14da219b4 FUN_14da219b4 body=165 status=ok
// SIG undefined FUN_14da219b4(void)

void FUN_14da219b4(ulonglong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong unaff_RDI;
  
  if ((param_4 | 0xe4f43b16) < 0xe4f43b17) {
    FUN_16626d80b(param_1,(0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x68) | ~param_1) &
                          (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
    return;
  }
  if (0xe4f43b15 < (param_4 | 0xe4f43b16)) {
    FUN_161353299();
    return;
  }
  return;
}



// FUNCTION 14da21a5a FUN_14da21a5a body=104 status=ok
// SIG undefined FUN_14da21a5a(void)

void FUN_14da21a5a(void)

{
  return;
}



// FUNCTION 14da21acf FUN_14da21acf body=168 status=ok
// SIG undefined FUN_14da21acf(void)

/* WARNING: Removing unreachable block (ram,0x00014da21b75) */
/* WARNING: Removing unreachable block (ram,0x00014da21b4f) */

void FUN_14da21acf(void)

{
  FUN_1623daac0();
  return;
}



// FUNCTION 14da21b7b FUN_14da21b7b body=148 status=ok
// SIG undefined FUN_14da21b7b(void)

void FUN_14da21b7b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  
  *(undefined8 *)(unaff_R13 + 0x10) = unaff_R14;
  *(longlong *)(param_5 + -8) = param_5;
  lVar1 = *(longlong *)(param_5 + -8);
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RSI;
  (*(code *)0x15b754bd9)(param_1,0x16cce4754,param_3,param_4);
  return;
}



// FUNCTION 14da21cac FUN_14da21cac body=394 status=ok
// SIG undefined FUN_14da21cac(void)

/* WARNING: Removing unreachable block (ram,0x00014da21d30) */
/* WARNING: Removing unreachable block (ram,0x00014da21d4d) */
/* WARNING: Removing unreachable block (ram,0x00014da21d54) */

undefined8 FUN_14da21cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ushort in_AX;
  undefined8 unaff_RBP;
  ushort *unaff_RSI;
  longlong unaff_R14;
  undefined8 local_res10;
  longlong local_res20;
  
  *unaff_RSI = (~in_AX | *unaff_RSI) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  plVar1 = (longlong *)(local_res20 + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R14;
  *plVar1 = -*plVar1;
  *(longlong *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined **)(local_res20 + -8) = &DAT_161a365ba;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x20);
  *(code **)(local_res20 + -0x10) = thunk_FUN_15b642ca5;
  return local_res10;
}



// FUNCTION 14da21e3a FUN_14da21e3a body=173 status=ok
// SIG undefined FUN_14da21e3a(void)

void FUN_14da21e3a(void)

{
  FUN_14de47189();
  return;
}



// FUNCTION 14da21ee8 FUN_14da21ee8 body=113 status=ok
// SIG undefined FUN_14da21ee8(void)

void FUN_14da21ee8(void)

{
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_14da21f76;
  FUN_14d7a9fab();
  return;
}



// FUNCTION 14da2212a FUN_14da2212a body=162 status=ok
// SIG undefined FUN_14da2212a(void)

/* WARNING: Removing unreachable block (ram,0x00014da22256) */
/* WARNING: Removing unreachable block (ram,0x00014da22267) */
/* WARNING: Removing unreachable block (ram,0x0001573c5bc4) */
/* WARNING: Removing unreachable block (ram,0x000157309c6e) */
/* WARNING: Removing unreachable block (ram,0x00014da2225c) */
/* WARNING: Removing unreachable block (ram,0x00014da221cd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da2212a(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  uVar2 = ~(~*(ulonglong *)(unaff_R12 + -0x78) | ~in_RAX);
  if (-1 < (longlong)(uVar2 * 2)) {
    uVar1 = (*(code *)0x1571ec467)
                      (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                       (-~in_RAX - (~*(ulonglong *)(unaff_R12 + -0x78) + 2)) + uVar2 * -2,
                       ~(unaff_RSI - ~param_3),param_4);
    return uVar1;
  }
  uVar1 = FUN_166150ef0();
  return uVar1;
}



// FUNCTION 14da221cd FUN_14da221cd body=466 status=ok
// SIG undefined FUN_14da221cd(void)

/* WARNING: Removing unreachable block (ram,0x00014da22256) */
/* WARNING: Removing unreachable block (ram,0x00014da22267) */
/* WARNING: Removing unreachable block (ram,0x0001573c5bc4) */
/* WARNING: Removing unreachable block (ram,0x000157309c6e) */
/* WARNING: Removing unreachable block (ram,0x00014da2225c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14da221cd(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined8 uVar3;
  longlong in_R10;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  
  *param_4 = param_1 ^ 0xffffffffffffffff;
  uVar4 = (~unaff_R15 | param_5) & (~param_5 | unaff_R15) ^ 0xffffffffffffffff;
  *(undefined8 *)(uVar4 - 8) = 0;
  *(longlong *)(uVar4 - 8) = *(longlong *)(uVar4 - 8) + in_R10;
  plVar1 = (longlong *)(uVar4 - 0x10);
  *plVar1 = in_RAX;
  *(longlong *)(uVar4 - 0x18) = in_RAX;
  lVar2 = *(longlong *)(uVar4 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 + lVar2;
  *(undefined8 *)(uVar4 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar4 - 0x18) = unaff_R13;
  uVar3 = FUN_157309c6e();
  return uVar3;
}



// FUNCTION 14da22547 FUN_14da22547 body=266 status=ok
// SIG undefined FUN_14da22547(void)

/* WARNING: Removing unreachable block (ram,0x00014da225e5) */
/* WARNING: Removing unreachable block (ram,0x00014da225f1) */
/* WARNING: Removing unreachable block (ram,0x000165122a49) */

void FUN_14da22547(void)

{
  ulonglong uVar1;
  undefined8 in_R9;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar1 = 0xffffffffffffffff - (local_res20 & unaff_R15) & ~(~local_res20 & ~unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_R9;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_165122a67;
  FUN_165122a49();
  return;
}



// FUNCTION 14da2268f FUN_14da2268f body=153 status=ok
// SIG undefined FUN_14da2268f(void)

void FUN_14da2268f(void)

{
  (*(code *)&LAB_165b6f602)();
  return;
}



// FUNCTION 14da229e9 FUN_14da229e9 body=122 status=ok
// SIG undefined FUN_14da229e9(void)

undefined8 FUN_14da229e9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da22a64 FUN_14da22a64 body=250 status=ok
// SIG undefined FUN_14da22a64(void)

/* WARNING: Removing unreachable block (ram,0x000162b1f3b0) */
/* WARNING: Removing unreachable block (ram,0x00014da22b5c) */
/* WARNING: Removing unreachable block (ram,0x00014da22b62) */
/* WARNING: Removing unreachable block (ram,0x000162b1f34a) */
/* WARNING: Removing unreachable block (ram,0x0001666c0e9e) */
/* WARNING: Removing unreachable block (ram,0x000162b1f4eb) */
/* WARNING: Removing unreachable block (ram,0x000162b1f4f6) */
/* WARNING: Removing unreachable block (ram,0x000162b1f4f1) */
/* WARNING: Removing unreachable block (ram,0x000162b1f2d9) */
/* WARNING: Removing unreachable block (ram,0x00014da22ac6) */
/* WARNING: Removing unreachable block (ram,0x00014da22b43) */
/* WARNING: Removing unreachable block (ram,0x00014da22b57) */
/* WARNING: Removing unreachable block (ram,0x00016548eea7) */

void FUN_14da22a64(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_00000018;
  
  lVar3 = -~(ulonglong)&stack0x00000010;
  if (lVar3 + 0xf < 0) {
    uVar1 = *(ulonglong *)(lVar3 + 0x17);
    *(ulonglong *)(lVar3 + 0x17) = ~*(ulonglong *)(lVar3 + 0x17);
    *(ulonglong *)(lVar3 + 0x17) = *(ulonglong *)(lVar3 + 0x17) | param_1;
    uVar2 = *(ulonglong *)(lVar3 + 0x17);
    *(undefined8 *)(lVar3 + 0x17) = 0;
    *(longlong *)(lVar3 + 0x17) = *(longlong *)(lVar3 + 0x17) + ~((~param_1 | uVar1) & uVar2);
    FUN_15675db96(FUN_15675db96,in_stack_00000018,param_3,param_4);
    FUN_1663535a0();
    return;
  }
  FUN_166353502();
  return;
}



// FUNCTION 14da22b62 FUN_14da22b62 body=157 status=ok
// SIG undefined FUN_14da22b62(void)

void FUN_14da22b62(void)

{
  FUN_15b142058();
  return;
}



// FUNCTION 14da22dfd FUN_14da22dfd body=304 status=ok
// SIG undefined FUN_14da22dfd(void)

/* WARNING: Removing unreachable block (ram,0x00014da22e94) */
/* WARNING: Removing unreachable block (ram,0x00014da22e9a) */
/* WARNING: Removing unreachable block (ram,0x00014da22f2f) */
/* WARNING: Removing unreachable block (ram,0x00014da22f35) */
/* WARNING: Removing unreachable block (ram,0x000160f668d5) */

undefined8 FUN_14da22dfd(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  ulonglong *unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R12;
  
  unaff_RBP[-1] = in_RAX;
  unaff_RBP[-2] = unaff_RSI;
  uVar3 = unaff_RBP[-1];
  *unaff_RBP = *(ulonglong *)(unaff_RDI + -0x28);
  uVar1 = *unaff_RBP;
  *unaff_RBP = in_R10;
  unaff_RBP[-1] = ~param_1 + uVar1;
  unaff_RBP[-1] = unaff_RBP[-1] - (~param_1 & uVar1);
  uVar4 = unaff_RBP[-1];
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  *unaff_RBP = unaff_R12;
  unaff_RBP[-1] = unaff_R12;
  unaff_RBP[-2] = uVar3;
  unaff_RBP[-3] = *(undefined8 *)(unaff_RDI + -0x90);
  unaff_RBP[-2] = ~(uVar4 & (~uVar1 | param_1));
  unaff_RBP[-3] = unaff_RDI;
  uVar5 = FUN_164c0556b(param_1,uVar2 ^ param_1);
  return uVar5;
}



// FUNCTION 14da22f35 FUN_14da22f35 body=103 status=ok
// SIG undefined FUN_14da22f35(void)

void FUN_14da22f35(void)

{
  return;
}



// FUNCTION 14da2309d FUN_14da2309d body=162 status=ok
// SIG undefined FUN_14da2309d(void)

void FUN_14da2309d(void)

{
  longlong unaff_R12;
  undefined8 local_res8;
  
  (*(code *)0x15696e2a5)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ local_res8,
             *(ulonglong *)(unaff_R12 + -0x78) ^ local_res8);
  return;
}



// FUNCTION 14da23141 FUN_14da23141 body=150 status=ok
// SIG undefined FUN_14da23141(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da23141(void)

{
  return;
}



// FUNCTION 14da23366 FUN_14da23366 body=138 status=ok
// SIG undefined FUN_14da23366(void)

/* WARNING: Removing unreachable block (ram,0x000166297185) */
/* WARNING: Removing unreachable block (ram,0x00014da233ec) */
/* WARNING: Removing unreachable block (ram,0x00014da233f2) */
/* WARNING: Removing unreachable block (ram,0x00015b5a82cb) */
/* WARNING: Removing unreachable block (ram,0x00015b5a8344) */
/* WARNING: Removing unreachable block (ram,0x00015b5a8349) */
/* WARNING: Removing unreachable block (ram,0x0001570d1598) */
/* WARNING: Removing unreachable block (ram,0x00015b5a835b) */
/* WARNING: Removing unreachable block (ram,0x00015b5a8367) */
/* WARNING: Removing unreachable block (ram,0x00015b5a836c) */
/* WARNING: Removing unreachable block (ram,0x00014da234a6) */
/* WARNING: Removing unreachable block (ram,0x000166400a25) */
/* WARNING: Removing unreachable block (ram,0x000166400a7c) */
/* WARNING: Removing unreachable block (ram,0x000161bbf4f9) */
/* WARNING: Removing unreachable block (ram,0x000166400a4f) */
/* WARNING: Removing unreachable block (ram,0x000156c39414) */

undefined8
FUN_14da23366(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined8 uVar1;
  byte unaff_BPL;
  byte bVar2;
  undefined8 local_res20;
  
  bVar2 = ~((unaff_BPL | 0x38) - 0x38) & (unaff_BPL | 199);
  if (param_5 << (((~(bVar2 | 0x21) ^ 0xff) & (~bVar2 | 0xde) ^ 0xff) & 0x1f) < 0) {
    uVar1 = FUN_161bbf4f9();
    return uVar1;
  }
  uVar1 = FUN_156c3937a(local_res20,param_2,param_3);
  return uVar1;
}



// FUNCTION 14da233f2 FUN_14da233f2 body=206 status=ok
// SIG undefined FUN_14da233f2(void)

/* WARNING: Removing unreachable block (ram,0x00015b5a835b) */
/* WARNING: Removing unreachable block (ram,0x00015b5a8367) */
/* WARNING: Removing unreachable block (ram,0x00015b5a836c) */
/* WARNING: Removing unreachable block (ram,0x00014da234a6) */

void FUN_14da233f2(void)

{
  return;
}



// FUNCTION 14da234c0 FUN_14da234c0 body=154 status=ok
// SIG undefined FUN_14da234c0(void)

void FUN_14da234c0(void)

{
  longlong in_R9;
  
  if (in_R9 == 0xcdbf0) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0xcdbf1) {
    (*(code *)0x15659087a)();
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14da235f7 FUN_14da235f7 body=323 status=ok
// SIG undefined FUN_14da235f7(void)

/* WARNING: Removing unreachable block (ram,0x00014da2368f) */
/* WARNING: Removing unreachable block (ram,0x00014da2369a) */
/* WARNING: Removing unreachable block (ram,0x00014da236e0) */
/* WARNING: Removing unreachable block (ram,0x00014da236f5) */
/* WARNING: Removing unreachable block (ram,0x00014da23695) */

void FUN_14da235f7(void)

{
  return;
}



// FUNCTION 14da2373c FUN_14da2373c body=130 status=ok
// SIG undefined FUN_14da2373c(void)

void FUN_14da2373c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_165a47b10)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14da237bf FUN_14da237bf body=140 status=ok
// SIG undefined FUN_14da237bf(void)

void FUN_14da237bf(void)

{
  FUN_165530205();
  return;
}



// FUNCTION 14da238c3 FUN_14da238c3 body=178 status=ok
// SIG undefined FUN_14da238c3(void)

void FUN_14da238c3(undefined8 param_1)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_166a9c254(param_1,FUN_166a9c254,local_res10,local_res8);
  return;
}



// FUNCTION 14da23b7c FUN_14da23b7c body=234 status=ok
// SIG undefined FUN_14da23b7c(void)

ulonglong FUN_14da23b7c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dd8f183(param_1,*(undefined8 *)(unaff_R12 + -0x30),param_3,0);
  return *(ulonglong *)(~(unaff_RSI & (unaff_R13 | in_RAX)) - 0x38) ^ unaff_R15;
}



// FUNCTION 14da23ca7 FUN_14da23ca7 body=114 status=ok
// SIG undefined FUN_14da23ca7(void)

void FUN_14da23ca7(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b35f918(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da23d19 FUN_14da23d19 body=425 status=ok
// SIG undefined FUN_14da23d19(void)

/* WARNING: Removing unreachable block (ram,0x00014da23e32) */
/* WARNING: Removing unreachable block (ram,0x0001663ac2a8) */
/* WARNING: Removing unreachable block (ram,0x00014da23ebb) */
/* WARNING: Removing unreachable block (ram,0x00014da23ec1) */
/* WARNING: Removing unreachable block (ram,0x00014da23ec6) */
/* WARNING: Removing unreachable block (ram,0x00014da23ef7) */

ulonglong FUN_14da23d19(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e167f5c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28));
  return ~(*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) &
         (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15);
}



// FUNCTION 14da23ec6 FUN_14da23ec6 body=194 status=ok
// SIG undefined FUN_14da23ec6(void)

void FUN_14da23ec6(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 =
       *(undefined8 *)
        (unaff_R13 + (in_RAX ^ ~(~(param_2 & 0xffffffffa24f66a9) & (param_2 | 0xffffffffa24f66a9))))
  ;
  FUN_166b4ceab(FUN_166b4ceab,in_stack_00000018,local_res8);
  return;
}



// FUNCTION 14da2400f FUN_14da2400f body=554 status=ok
// SIG undefined FUN_14da2400f(void)

/* WARNING: Removing unreachable block (ram,0x00014da241f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da2400f(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  short unaff_DI;
  undefined8 uVar10;
  undefined8 unaff_R13;
  longlong local_res8;
  
  FUN_160b6a38e();
  uVar10 = 0xfffffffffffffff8;
  puVar9 = &DAT_ac91427a73ca2b2b;
  FUN_1661e923c();
  *(undefined8 *)(&stack0xfffffffff28c2df3 + unaff_DI) = *(undefined8 *)(local_res8 + 0x5375e1a1);
  uVar6 = *(undefined8 *)(&stack0xfffffffff28c2e03 + unaff_DI);
  *(undefined8 *)(&stack0xfffffffff28c2e13 + unaff_DI) =
       *(undefined8 *)(&stack0xfffffffff28c2df3 + unaff_DI);
  uVar3 = *(undefined8 *)(&stack0xfffffffff28c2e0b + unaff_DI);
  *(ulonglong *)(&stack0xfffffffff28c2e0b + unaff_DI) =
       *(ulonglong *)(&stack0xfffffffff28c2dfb + unaff_DI);
  *(ulonglong *)(&stack0xfffffffff28c2e03 + unaff_DI) =
       *(ulonglong *)(&stack0xfffffffff28c2dfb + unaff_DI);
  *(undefined8 *)(&stack0xfffffffff28c2e0b + unaff_DI) = 0xa9c7a4e;
  *(ulonglong *)(&stack0xfffffffff28c2e0b + unaff_DI) =
       *(ulonglong *)(&stack0xfffffffff28c2e0b + unaff_DI) ^ 0xa9c7a4e;
  *(longlong *)(&stack0xfffffffff28c2e0b + unaff_DI) =
       *(longlong *)(&stack0xfffffffff28c2e0b + unaff_DI) + _DAT_5375e109;
  uVar7 = *(ulonglong *)(&stack0xfffffffff28c2e03 + unaff_DI);
  *(code **)(&stack0xfffffffff28c2e03 + unaff_DI) = FUN_160b6a38e;
  puVar1 = (ulonglong *)(&stack0xfffffffff28c2dfb + unaff_DI);
  *puVar1 = 0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + _DAT_5375e101;
  uVar4 = *puVar1;
  uVar8 = *(undefined8 *)(&stack0xfffffffff28c2e03 + unaff_DI);
  *(undefined8 *)(&stack0xfffffffff28c2e03 + unaff_DI) = uVar3;
  *(ulonglong *)(&stack0xfffffffff28c2dfb + unaff_DI) = uVar4;
  if (CARRY8(uVar2,_DAT_5375e101)) {
    lVar5 = *(longlong *)(&stack0xfffffffff28c2dfb + unaff_DI);
    *(undefined1 **)(&stack0xfffffffff28c2dfb + unaff_DI) = puVar9;
    uVar3 = *(undefined8 *)(&stack0xfffffffff28c2e03 + unaff_DI);
    *(undefined8 *)(&stack0xfffffffff28c2e03 + unaff_DI) =
         *(undefined8 *)(&stack0xfffffffff28c2dfb + unaff_DI);
    *(undefined8 *)(&stack0xfffffffff28c2dfb + unaff_DI) = unaff_R13;
    *(undefined8 *)(&stack0xfffffffff28c2dfb + unaff_DI) = uVar3;
    *(undefined8 *)(&stack0xfffffffff28c2df3 + unaff_DI) = uVar10;
    uVar10 = *(undefined8 *)(&stack0xfffffffff28c2df3 + unaff_DI);
    *(code **)(&stack0xfffffffff28c2dfb + unaff_DI) = FUN_1661e923c;
    *(ulonglong *)(&stack0xfffffffff28c2df3 + unaff_DI) =
         ~-(lVar5 + uVar7 + (uVar4 & uVar7) * -2) + 1;
    *(undefined8 *)(&stack0xfffffffff28c2deb + unaff_DI) = uVar8;
    *(undefined8 *)(&stack0xfffffffff28c2de3 + unaff_DI) = uVar8;
    *(code **)(&stack0xfffffffff28c2deb + unaff_DI) = thunk_FUN_164baf12b;
    FUN_156fa3598(*(longlong *)(&stack0xfffffffff28c2e0b + unaff_DI) + uVar7,uVar6,uVar10);
    return;
  }
  FUN_164baf08c();
  return;
}


