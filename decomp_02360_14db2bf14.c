// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db2bf14 FUN_14db2bf14 body=575 status=ok
// SIG undefined FUN_14db2bf14(void)

/* WARNING: Instruction at (ram,0x0001575083aa) overlaps instruction at (ram,0x0001575083a6)
    */
/* WARNING: Removing unreachable block (ram,0x000157508412) */
/* WARNING: Removing unreachable block (ram,0x000157508414) */
/* WARNING: Removing unreachable block (ram,0x0001575083a2) */
/* WARNING: Removing unreachable block (ram,0x00014db2bfb1) */
/* WARNING: Removing unreachable block (ram,0x00014db2bff7) */
/* WARNING: Removing unreachable block (ram,0x00014db2bffb) */
/* WARNING: Removing unreachable block (ram,0x00014db2c02f) */

void FUN_14db2bf14(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x157117c13)
            (*(undefined8 *)(unaff_R12 + -0x28),0x157117c13,
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db2c0ca FUN_14db2c0ca body=17 status=ok
// SIG undefined FUN_14db2c0ca(void)

void FUN_14db2c0ca(void)

{
  return;
}



// FUNCTION 14db2c1e7 FUN_14db2c1e7 body=141 status=ok
// SIG undefined FUN_14db2c1e7(void)

void FUN_14db2c1e7(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_R11D;
  
  (*(code *)0x165933488)
            (param_1,CONCAT31(~((uint3)((uint)in_R11D >> 8) & ~(uint3)((uint)param_2 >> 8)),0x24),
             0x165933488);
  return;
}



// FUNCTION 14db2c275 FUN_14db2c275 body=149 status=ok
// SIG undefined FUN_14db2c275(void)

void FUN_14db2c275(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_14dea7a43)(param_1,param_2,*(longlong *)(unaff_RDI + -0x60) + -1,0);
  return;
}



// FUNCTION 14db2c3bc thunk_FUN_165c7153c body=5 status=ok
// SIG undefined thunk_FUN_165c7153c(void)

void thunk_FUN_165c7153c(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14db2c457 FUN_14db2c457 body=125 status=ok
// SIG undefined FUN_14db2c457(void)

void FUN_14db2c457(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  FUN_1610ba10c(~((unaff_RBP - (uVar1 | unaff_RBP)) + uVar1),~(~uVar1 & ~unaff_RBP));
  return;
}



// FUNCTION 14db2c563 FUN_14db2c563 body=357 status=ok
// SIG undefined FUN_14db2c563(void)

/* WARNING: Removing unreachable block (ram,0x00014db2c5f7) */
/* WARNING: Removing unreachable block (ram,0x00014db2c5fd) */
/* WARNING: Removing unreachable block (ram,0x000161adfb0a) */
/* WARNING: Removing unreachable block (ram,0x0001663cb982) */
/* WARNING: Removing unreachable block (ram,0x000161adfb96) */
/* WARNING: Removing unreachable block (ram,0x000161adfb9c) */
/* WARNING: Removing unreachable block (ram,0x000161adfba1) */

undefined8 FUN_14db2c563(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161adfb0a();
  return uVar1;
}



// FUNCTION 14db2c7f4 FUN_14db2c7f4 body=193 status=ok
// SIG undefined FUN_14db2c7f4(void)

longlong FUN_14db2c7f4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14db2c8ba FUN_14db2c8ba body=307 status=ok
// SIG undefined FUN_14db2c8ba(void)

/* WARNING: Removing unreachable block (ram,0x00014db2c959) */
/* WARNING: Removing unreachable block (ram,0x00014db2c964) */
/* WARNING: Removing unreachable block (ram,0x00014db2c95f) */

void FUN_14db2c8ba(void)

{
  FUN_161125cd5();
  return;
}



// FUNCTION 14db2c9ee FUN_14db2c9ee body=146 status=ok
// SIG undefined FUN_14db2c9ee(void)

/* WARNING: Removing unreachable block (ram,0x000161bac89e) */
/* WARNING: Removing unreachable block (ram,0x000161bac8a9) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7da8) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7dae) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7db3) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7db7) */
/* WARNING: Removing unreachable block (ram,0x00016694523f) */
/* WARNING: Removing unreachable block (ram,0x0001665fbe72) */
/* WARNING: Removing unreachable block (ram,0x000161bac6cb) */
/* WARNING: Removing unreachable block (ram,0x00016563a7d8) */
/* WARNING: Removing unreachable block (ram,0x00016563a93a) */
/* WARNING: Removing unreachable block (ram,0x00016563a93f) */
/* WARNING: Removing unreachable block (ram,0x00016563a945) */
/* WARNING: Removing unreachable block (ram,0x00016563a94a) */
/* WARNING: Removing unreachable block (ram,0x000161bac7f0) */
/* WARNING: Removing unreachable block (ram,0x000161bac7f6) */
/* WARNING: Removing unreachable block (ram,0x000161bac7fb) */
/* WARNING: Removing unreachable block (ram,0x000165a65283) */
/* WARNING: Removing unreachable block (ram,0x00014dca41e3) */
/* WARNING: Removing unreachable block (ram,0x000165a6530a) */
/* WARNING: Removing unreachable block (ram,0x000165a65310) */
/* WARNING: Removing unreachable block (ram,0x000165a65315) */
/* WARNING: Removing unreachable block (ram,0x000161bac8a4) */
/* WARNING: Removing unreachable block (ram,0x0001665fbf59) */
/* WARNING: Removing unreachable block (ram,0x0001665fbfd2) */
/* WARNING: Removing unreachable block (ram,0x00014db2ca80) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb12) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb18) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb231) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb2a3) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb2a8) */
/* WARNING: Removing unreachable block (ram,0x0001665fbe5f) */
/* WARNING: Removing unreachable block (ram,0x0001665fbf53) */
/* WARNING: Removing unreachable block (ram,0x000162a2346e) */
/* WARNING: Removing unreachable block (ram,0x000162a234d8) */
/* WARNING: Removing unreachable block (ram,0x0001669451e2) */
/* WARNING: Removing unreachable block (ram,0x000162a234de) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb515) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb2ae) */
/* WARNING: Removing unreachable block (ram,0x00016115bdbc) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3c7) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3cd) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3d8) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb470) */
/* WARNING: Removing unreachable block (ram,0x0001654e93c5) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb476) */
/* WARNING: Removing unreachable block (ram,0x00015691e17e) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb50a) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb510) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb1d) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb9e) */
/* WARNING: Removing unreachable block (ram,0x00014db2cba5) */

undefined8 FUN_14db2c9ee(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) != 0) {
    uVar1 = FUN_161bac648();
    return uVar1;
  }
  FUN_165f8e1f9(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15);
  uVar1 = FUN_156940a16();
  return uVar1;
}



// FUNCTION 14db2ca80 FUN_14db2ca80 body=327 status=ok
// SIG undefined FUN_14db2ca80(void)

/* WARNING: Removing unreachable block (ram,0x0001665fbe72) */
/* WARNING: Removing unreachable block (ram,0x00016694523f) */
/* WARNING: Removing unreachable block (ram,0x000162a234de) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb476) */
/* WARNING: Removing unreachable block (ram,0x00015691e17e) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb50a) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb510) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3d8) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb470) */
/* WARNING: Removing unreachable block (ram,0x0001654e93c5) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb515) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb2ae) */
/* WARNING: Removing unreachable block (ram,0x00016115bdbc) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3c7) */
/* WARNING: Removing unreachable block (ram,0x00014d7eb3cd) */
/* WARNING: Removing unreachable block (ram,0x0001665fbf59) */
/* WARNING: Removing unreachable block (ram,0x0001665fbfd2) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb1d) */
/* WARNING: Removing unreachable block (ram,0x00014db2cb9e) */
/* WARNING: Removing unreachable block (ram,0x00014db2cba5) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000162a234b5 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_14db2ca80(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  code *pcVar5;
  ushort *unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong in_stack_00000008;
  ulonglong local_res10;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar8 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  uVar7 = ~((~(0xffffffffffffffff - param_1 & uVar7) + uVar7) - ~(0xffffffffffffffff - param_1) &
           (~uVar7 | param_1));
  if (uVar7 == 0) {
    uVar1 = FUN_14d7eb231();
    return uVar1;
  }
  uVar6 = 0xffffffffffffffff - in_stack_00000008 | param_1;
  uVar6 = ~((uVar6 - (~param_1 | in_stack_00000008 | uVar6)) + (~param_1 | in_stack_00000008));
  if (local_res10 == param_1) {
    uVar3 = 0x4ce4d81;
    _DAT_ffffffffffffffe8 =
         (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar6 & 0x80) != 0) * 0x80 | (ulonglong)((uVar6 & 0x40) != 0) * 0x40 |
         (ulonglong)((uVar6 & 0x10) != 0) * 0x10 | (ulonglong)((uVar6 & 4) != 0) * 4 |
         (ulonglong)((uVar6 & 1) != 0) | (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
    pcVar5 = FUN_161557788;
    _DAT_ffffffffffffffd8 = FUN_1665fbedc;
    _DAT_ffffffffffffffe0 = param_2;
    _DAT_fffffffffffffff0 = uVar7;
    _DAT_fffffffffffffff8 = uVar7;
    _DAT_ffffffffffffffd8 = (code *)FUN_161557788();
    uVar7 = uVar8 | uVar3;
    _DAT_ffffffffffffffd0 = (~uVar7 | ~(uVar8 & uVar3)) + uVar7 + 1;
    _DAT_fffffffffffffff8 = _DAT_fffffffffffffff8 ^ uVar3;
    _DAT_00000000 =
         ~-~(((0xffffffffffffffff - uVar3) + _DAT_00000000) -
             (0xffffffffffffffff - uVar3 & _DAT_00000000) &
            (~((uVar3 - (~_DAT_00000000 | uVar3)) + ~_DAT_00000000) + uVar3) - ~_DAT_00000000) + 1;
    _DAT_00000008 = ~(~_DAT_00000008 | ~uVar3);
    pcVar4 = FUN_166c02fe4;
    _DAT_ffffffffffffffe0 = 0x166945270;
    _DAT_ffffffffffffffe8 = _DAT_ffffffffffffffd0;
    _DAT_fffffffffffffff0 = unaff_R14;
    uVar2 = FUN_166c02fe4(FUN_166c02fe4,pcVar5);
    *unaff_RBX = ~*unaff_RBX;
    *unaff_RBX = *unaff_RBX | 0x100;
    *unaff_RBX = ~*unaff_RBX;
    uVar7 = _DAT_00000008;
    *(code **)(_DAT_00000008 - 8) = pcVar4;
    *(undefined8 *)(uVar7 - 0x10) = unaff_R12;
    *(undefined8 *)(uVar7 - 0x18) = unaff_R12;
    uVar1 = *(undefined8 *)(uVar7 - 8);
    *(undefined8 *)(uVar7 - 0x20) = in_R11;
    *(undefined8 *)(uVar7 - 0x28) = uVar2;
    *(undefined4 *)(uVar7 - 0x28) = 0xf8a3b6b7;
    *(undefined4 *)(uVar7 - 0x24) = 0xffffffff;
    *(undefined8 *)(uVar7 + *(longlong *)(uVar7 - 0x28) + 0x75c4939) = uVar1;
    *(undefined8 *)(uVar7 - 8) = 0;
    *(ulonglong *)(uVar7 - 8) = *(ulonglong *)(uVar7 - 8) ^ 0x16684468a;
    *(undefined8 *)(uVar7 - 0x18) = param_4;
    *(undefined8 *)(uVar7 - 0x20) = 0x16684464a;
    return uVar2;
  }
  uVar1 = FUN_1665fbe5f();
  return uVar1;
}



// FUNCTION 14db2cbc8 thunk_FUN_14db2cbce body=5 status=ok
// SIG undefined thunk_FUN_14db2cbce(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14db2cbce(void)

{
  longlong unaff_RDI;
  
  if (unaff_RDI != -0x3b26eb27) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db2cbce FUN_14db2cbce body=118 status=ok
// SIG undefined FUN_14db2cbce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db2cbce(void)

{
  longlong unaff_RDI;
  
  if (unaff_RDI != -0x3b26eb27) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db2ce89 FUN_14db2ce89 body=295 status=ok
// SIG undefined FUN_14db2ce89(void)

/* WARNING: Removing unreachable block (ram,0x00014db2cf30) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2ce89(undefined8 param_1)

{
  longlong unaff_RSI;
  undefined8 local_res8;
  
  if (-1 < *(longlong *)(unaff_RSI + -0x98)) {
    FUN_166829f88();
    return;
  }
  FUN_161cda2e4(param_1,local_res8);
  return;
}



// FUNCTION 14db2cfb7 FUN_14db2cfb7 body=171 status=ok
// SIG undefined FUN_14db2cfb7(void)

void FUN_14db2cfb7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15666b93b(FUN_15666b93b,*(ulonglong *)(unaff_R13 + -0x60),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db2d064 thunk_FUN_14db2d06a body=5 status=ok
// SIG undefined thunk_FUN_14db2d06a(void)

void thunk_FUN_14db2d06a(void)

{
  (*(code *)0x162073048)();
  return;
}



// FUNCTION 14db2d06a FUN_14db2d06a body=156 status=ok
// SIG undefined FUN_14db2d06a(void)

void FUN_14db2d06a(void)

{
  (*(code *)0x162073048)();
  return;
}



// FUNCTION 14db2d23d FUN_14db2d23d body=101 status=ok
// SIG undefined FUN_14db2d23d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db2d23d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db2d395 FUN_14db2d395 body=61 status=ok
// SIG undefined FUN_14db2d395(void)

void FUN_14db2d395(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14db2d553 FUN_14db2d553 body=726 status=ok
// SIG undefined FUN_14db2d553(void)

void FUN_14db2d553(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_14d8961a8((param_1 << 0x1b | param_1 >> 0x25) * param_2 + -0x7a1435883d4d519d,param_2,param_3,
                in_stack_00000008);
  return;
}



// FUNCTION 14db2d5d6 FUN_14db2d5d6 body=117 status=ok
// SIG undefined FUN_14db2d5d6(void)

void FUN_14db2d5d6(void)

{
  FUN_14d967578();
  return;
}



// FUNCTION 14db2d64c FUN_14db2d64c body=281 status=ok
// SIG undefined FUN_14db2d64c(void)

/* WARNING: Removing unreachable block (ram,0x00014db2d6c3) */
/* WARNING: Removing unreachable block (ram,0x00014db2d6c9) */
/* WARNING: Removing unreachable block (ram,0x00014db2d72a) */
/* WARNING: Removing unreachable block (ram,0x00014db2d72d) */

void FUN_14db2d64c(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  (*(code *)0x156bba7ba)(param_1,-1 - (unaff_RBP & (~(param_2 & in_RAX) + in_RAX) - ~param_2));
  return;
}



// FUNCTION 14db2d76a FUN_14db2d76a body=239 status=ok
// SIG undefined FUN_14db2d76a(void)

/* WARNING: Removing unreachable block (ram,0x00014db2d7f9) */

void FUN_14db2d76a(undefined8 param_1)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 unaff_R12;
  longlong unaff_R15;
  undefined8 local_res10;
  longlong in_stack_00000028;
  
  puVar1 = (ushort *)(&stack0xfffffffffea803f4 + unaff_R15);
  *puVar1 = ~*puVar1;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 & 0x100;
  *puVar1 = (uVar2 + 0x100) - *puVar1;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(in_stack_00000028 + -8) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x18) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(ulonglong *)(in_stack_00000028 + -8) = *(ulonglong *)(in_stack_00000028 + -8) ^ 0x15afa295d;
  FUN_14d7aa2d9(*(undefined8 *)(in_stack_00000028 + -0x18));
  return;
}



// FUNCTION 14db2da71 FUN_14db2da71 body=322 status=ok
// SIG undefined FUN_14db2da71(void)

/* WARNING: Removing unreachable block (ram,0x00014db2dcbd) */
/* WARNING: Removing unreachable block (ram,0x00014db2dcc9) */
/* WARNING: Removing unreachable block (ram,0x00014db2dbbc) */
/* WARNING: Removing unreachable block (ram,0x00014db2dba6) */

undefined8 FUN_14db2da71(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  FUN_161585e12(unaff_retaddr,*(ulonglong *)(unaff_RDI + -0x28) | unaff_retaddr);
  uVar1 = FUN_165c70856();
  return uVar1;
}



// FUNCTION 14db2dbbc FUN_14db2dbbc body=424 status=ok
// SIG undefined FUN_14db2dbbc(void)

/* WARNING: Removing unreachable block (ram,0x00014db2dcbd) */
/* WARNING: Removing unreachable block (ram,0x00014db2dcc9) */

undefined8 FUN_14db2dbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  short unaff_BP;
  short unaff_SI;
  ushort *unaff_RDI;
  ulonglong in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  short *unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_RDI = (-0x101 - ((~(*unaff_RDI & 0xfeff) - 0x101) - ~*unaff_RDI)) + *unaff_RDI;
  puVar1 = (undefined8 *)(local_res20 + -8);
  *puVar1 = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = &DAT_1614fa329;
  *(undefined8 *)(local_res20 + -0x18) = 0x14db2dc3a;
  FUN_1614fa2fa();
  *unaff_R13 = unaff_BP - (-1 - unaff_SI);
  lVar4 = *(longlong *)(local_res20 + 0x18);
  *(undefined8 *)(lVar4 + -8) = 0;
  *(undefined8 *)(lVar4 + -0x10) = param_3;
  *(undefined8 *)(lVar4 + -0x18) = in_R11;
  puVar2 = (ulonglong *)(lVar4 + -8);
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 + 2;
  *puVar2 = -*puVar2;
  *puVar2 = *puVar2 - ~in_R10;
  uVar7 = *(undefined8 *)(lVar4 + -0x18);
  uVar5 = *(undefined8 *)(lVar4 + -0x10);
  *(undefined8 *)(lVar4 + -0x10) = local_res8;
  *(undefined8 *)(lVar4 + -0x18) = local_res8;
  *(undefined8 *)(lVar4 + -0x20) = unaff_RBX;
  *(undefined8 *)(lVar4 + -0x28) = unaff_retaddr;
  *(undefined8 *)(lVar4 + -0x20) = param_1;
  uVar6 = *(undefined8 *)(lVar4 + -0x20);
  *(undefined8 *)(lVar4 + -0x20) = unaff_R12;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  *(longlong *)(lVar4 + -0x10) = *(longlong *)(lVar4 + -0x10) + *(longlong *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = uStackX_10;
  *(undefined8 *)(lVar4 + -0x20) = uVar7;
  plVar3 = (longlong *)(lVar4 + -8);
  *plVar3 = 0;
  *plVar3 = *plVar3 + -0x161ce3e26;
  *plVar3 = -*plVar3;
  uVar7 = FUN_161ce3e01(uVar6,*(undefined8 *)(lVar4 + -0x18),uVar5,*(undefined8 *)(lVar4 + -0x28));
  return uVar7;
}



// FUNCTION 14db2dcc9 FUN_14db2dcc9 body=33 status=ok
// SIG undefined FUN_14db2dcc9(void)

void FUN_14db2dcc9(void)

{
  return;
}



// FUNCTION 14db2dd8f FUN_14db2dd8f body=471 status=ok
// SIG undefined FUN_14db2dd8f(void)

/* WARNING: Removing unreachable block (ram,0x00014db2dec0) */

void FUN_14db2dd8f(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  uVar1 = *(ulonglong *)(unaff_R13 + in_RAX + 0x8fe5d95);
  FUN_162f0339e(-(3 - (*(longlong *)(unaff_R13 + -0x48) + 2)),param_2,
                -1 - ((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  *(undefined4 *)
   (&stack0x00000000 + ~(~(unaff_R15 & 0xffffffff9cadd6b0) & (unaff_R15 | 0xffffffff9cadd6b0))) = 0;
  if ((-~unaff_R15 -
      (~*(ulonglong *)
         (&stack0x00000010 + ~((unaff_retaddr | 0xffffffffbdf8f134) & (~unaff_retaddr | 0x42070ecb))
         ) + 2)) + (local_res18 & unaff_R15) * -2 == 0) {
    FUN_14e0360fb();
    return;
  }
  FUN_162a93914();
  (*(code *)0x16655309c)(unaff_R15);
  return;
}



// FUNCTION 14db2e10b FUN_14db2e10b body=275 status=ok
// SIG undefined FUN_14db2e10b(void)

void FUN_14db2e10b(undefined8 param_1)

{
  FUN_1650b163d(param_1,FUN_1650b163d);
  return;
}



// FUNCTION 14db2e21e FUN_14db2e21e body=314 status=ok
// SIG undefined FUN_14db2e21e(void)

/* WARNING: Removing unreachable block (ram,0x00014de831c4) */
/* WARNING: Removing unreachable block (ram,0x00014de831d6) */
/* WARNING: Removing unreachable block (ram,0x00014de831e1) */
/* WARNING: Removing unreachable block (ram,0x00014de831e6) */
/* WARNING: Removing unreachable block (ram,0x00014db2e2c1) */
/* WARNING: Removing unreachable block (ram,0x00014db2e2da) */
/* WARNING: Removing unreachable block (ram,0x00014db2e2d3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2e21e(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  LPCSTR lpLibFileName;
  ulonglong *puVar6;
  ulonglong unaff_RBP;
  ulonglong unaff_R12;
  longlong unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  undefined8 uStackX_10;
  longlong lStackX_18;
  
  lVar3 = -~(ulonglong)&uStackX_10;
  puVar6 = (ulonglong *)(lVar3 + 7);
  uVar5 = 0xffffffffffffffff;
  *puVar6 = (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)((in_IF & 1) != 0) * 0x200 |
            (ulonglong)((in_TF & 1) != 0) * 0x100 | 0x80 | (ulonglong)((in_AF & 1) != 0) * 0x10 | 4
            | (ulonglong)((in_ID & 1) != 0) * 0x200000 | (ulonglong)((in_AC & 1) != 0) * 0x40000;
  *puVar6 = (ulonglong)FUN_15725f2b2;
  uVar4 = FUN_16263b600();
  *puVar6 = uVar4;
  *(ulonglong *)(lVar3 + -1) = unaff_RBP & 0x16263b600;
  *puVar6 = unaff_R12;
  *puVar6 = (ulonglong)puVar6;
  *(ulonglong **)(lVar3 + -1) = puVar6;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x70);
  *(undefined8 *)(lVar3 + -9) = uStackX_10;
  *(undefined8 *)(lVar3 + -0x11) = uVar5;
  *puVar6 = uVar4;
  lpLibFileName = *(LPCSTR *)(lVar3 + -0x11);
  uVar5 = *(undefined8 *)(lVar3 + -9);
  lVar2 = *(longlong *)(lVar3 + -1);
  plVar1 = (longlong *)(lVar3 + -1);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar2;
  *(undefined8 *)(lVar3 + -9) = 0x15725f349;
  FUN_14da09540();
  *(undefined8 *)(lVar3 + 0xf) = uVar5;
  *puVar6 = param_2;
  *(undefined8 *)(lVar3 + 0x17) = 0;
  *(longlong *)(lVar3 + 0x17) = *(longlong *)(lVar3 + 0x17) + lStackX_18;
                    /* WARNING: Could not recover jumptable at 0x00015725f39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(lpLibFileName);
  return;
}



// FUNCTION 14db2e8b0 FUN_14db2e8b0 body=153 status=ok
// SIG undefined FUN_14db2e8b0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2e8b0(void)

{
  undefined8 local_res8;
  
  FUN_164c76879(local_res8);
  return;
}



// FUNCTION 14db2e9ee FUN_14db2e9ee body=194 status=ok
// SIG undefined FUN_14db2e9ee(void)

void FUN_14db2e9ee(void)

{
  FUN_160f40fa5();
  return;
}



// FUNCTION 14db2edd5 FUN_14db2edd5 body=103 status=ok
// SIG undefined FUN_14db2edd5(void)

void FUN_14db2edd5(HMODULE param_1)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  longlong in_stack_00000028;
  
  puVar1 = (undefined8 *)(in_stack_00000028 + -8);
  *puVar1 = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *puVar1;
  *puVar1 = &LAB_14db2ee58;
                    /* WARNING: Could not recover jumptable at 0x00014db2ee37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeLibrary(param_1);
  return;
}



// FUNCTION 14db2ef20 FUN_14db2ef20 body=164 status=ok
// SIG undefined FUN_14db2ef20(void)

void FUN_14db2ef20(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16253f2ea(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14db2f075 FUN_14db2f075 body=647 status=ok
// SIG undefined FUN_14db2f075(void)

/* WARNING: Removing unreachable block (ram,0x00014db2f0f5) */
/* WARNING: Removing unreachable block (ram,0x00014db2f0fb) */
/* WARNING: Removing unreachable block (ram,0x00014db2f16e) */
/* WARNING: Removing unreachable block (ram,0x00014db2f174) */
/* WARNING: Removing unreachable block (ram,0x00014e1ba296) */
/* WARNING: Removing unreachable block (ram,0x0001650f4332) */
/* WARNING: Removing unreachable block (ram,0x0001650f4338) */

undefined8 FUN_14db2f075(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1570922c8(param_1,FUN_1570922c8);
  return uVar1;
}



// FUNCTION 14db2f1ef FUN_14db2f1ef body=297 status=ok
// SIG undefined FUN_14db2f1ef(void)

/* WARNING: Removing unreachable block (ram,0x00014db2f231) */

void FUN_14db2f1ef(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_160bbf2d8(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  FUN_162d2e141();
  return;
}



// FUNCTION 14db2f4cb FUN_14db2f4cb body=429 status=ok
// SIG undefined FUN_14db2f4cb(void)

/* WARNING: Removing unreachable block (ram,0x00014db2f55d) */

void FUN_14db2f4cb(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong local_res8;
  
  (*(code *)0x166915806)
            (param_1,*(undefined8 *)(unaff_RDI + -0x68),*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~((~(~local_res8 & ~param_1 & local_res8) + local_res8) - ~(~local_res8 & ~param_1) &
              (0xffffffffffffffff - local_res8 | param_1)));
  return;
}



// FUNCTION 14db2f5e3 FUN_14db2f5e3 body=41 status=ok
// SIG undefined FUN_14db2f5e3(void)

undefined8 FUN_14db2f5e3(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14db2f6d6 FUN_14db2f6d6 body=711 status=ok
// SIG undefined FUN_14db2f6d6(void)

/* WARNING: Removing unreachable block (ram,0x000161d423d2) */
/* WARNING: Removing unreachable block (ram,0x000161d423d8) */
/* WARNING: Removing unreachable block (ram,0x00016484edc0) */
/* WARNING: Removing unreachable block (ram,0x00014db2f8a8) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d45) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d73) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d85) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1da3) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1da8) */
/* WARNING: Removing unreachable block (ram,0x00014db2f775) */
/* WARNING: Removing unreachable block (ram,0x00014db2f805) */
/* WARNING: Removing unreachable block (ram,0x00014db2f811) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1cab) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d11) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d3a) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1d40) */
/* WARNING: Removing unreachable block (ram,0x000161d42328) */
/* WARNING: Removing unreachable block (ram,0x000161d4236d) */
/* WARNING: Removing unreachable block (ram,0x000161d42375) */
/* WARNING: Removing unreachable block (ram,0x00014db2f816) */
/* WARNING: Removing unreachable block (ram,0x00014db2f89d) */
/* WARNING: Removing unreachable block (ram,0x00014db2f8a2) */

undefined8 FUN_14db2f6d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = FUN_165050001(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + param_1)) &
                         ~(~(0xffffffffffffffff - *(ulonglong *)(unaff_R13 + param_1)) & ~unaff_R15)
                         ),~(((unaff_R15 | ~uVar1) + ~unaff_R15 + 1 | uVar1) &
                            (~unaff_R15 & ~uVar1 | unaff_R15)),param_3,param_4);
  return uVar2;
}



// FUNCTION 14db2fa30 FUN_14db2fa30 body=177 status=ok
// SIG undefined FUN_14db2fa30(void)

/* WARNING: Removing unreachable block (ram,0x00014db2fadd) */

void FUN_14db2fa30(void)

{
  longlong unaff_R12;
  
  if (-1 < -*(longlong *)(unaff_R12 + -0x98)) {
    FUN_1668d0040();
    return;
  }
  FUN_1668d0040();
  return;
}



// FUNCTION 14db2fae3 FUN_14db2fae3 body=474 status=ok
// SIG undefined FUN_14db2fae3(void)

/* WARNING: Removing unreachable block (ram,0x000156e7424b) */
/* WARNING: Removing unreachable block (ram,0x000156e742ca) */
/* WARNING: Removing unreachable block (ram,0x000156e742d5) */
/* WARNING: Removing unreachable block (ram,0x000156e742db) */
/* WARNING: Removing unreachable block (ram,0x000156e742e6) */

void FUN_14db2fae3(void)

{
  return;
}



// FUNCTION 14db2fb95 FUN_14db2fb95 body=143 status=ok
// SIG undefined FUN_14db2fb95(void)

void FUN_14db2fb95(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  
  FUN_14dc36582();
  FUN_14dbf538e(param_1,in_RAX,param_3,param_4);
  return;
}



// FUNCTION 14db2fc26 FUN_14db2fc26 body=140 status=ok
// SIG undefined FUN_14db2fc26(void)

void FUN_14db2fc26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14dbf538e(param_1,local_res10,param_3,param_4);
  return;
}



// FUNCTION 14db2fe29 FUN_14db2fe29 body=162 status=ok
// SIG undefined FUN_14db2fe29(void)

void FUN_14db2fe29(undefined8 param_1)

{
  FUN_14d9b9dba(param_1,FUN_14d9b9dba);
  return;
}



// FUNCTION 14db2fecc FUN_14db2fecc body=144 status=ok
// SIG undefined FUN_14db2fecc(void)

void FUN_14db2fecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x16143806a)(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14db2ffd4 FUN_14db2ffd4 body=365 status=ok
// SIG undefined FUN_14db2ffd4(void)

/* WARNING: Removing unreachable block (ram,0x00014db30092) */
/* WARNING: Removing unreachable block (ram,0x00014db3009d) */
/* WARNING: Removing unreachable block (ram,0x00014db30098) */

void FUN_14db2ffd4(void)

{
  FUN_161736246();
  return;
}



// FUNCTION 14db30142 FUN_14db30142 body=145 status=ok
// SIG undefined FUN_14db30142(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db30142(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  (*(code *)&LAB_162cc6b37)(in_stack_00000008,param_2);
  return;
}



// FUNCTION 14db30267 FUN_14db30267 body=295 status=ok
// SIG undefined FUN_14db30267(void)

void FUN_14db30267(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_160ec1553(param_1,param_2 + unaff_R15 + (param_2 & unaff_R15) * -2);
  FUN_166c8ec5b();
  return;
}



// FUNCTION 14db304e8 FUN_14db304e8 body=120 status=ok
// SIG undefined FUN_14db304e8(void)

/* WARNING: Removing unreachable block (ram,0x000160f4532d) */
/* WARNING: Removing unreachable block (ram,0x000160f45338) */
/* WARNING: Removing unreachable block (ram,0x000160f45333) */
/* WARNING: Removing unreachable block (ram,0x00014db30675) */
/* WARNING: Removing unreachable block (ram,0x000160f452a2) */
/* WARNING: Removing unreachable block (ram,0x00014db306ae) */
/* WARNING: Removing unreachable block (ram,0x00014db306b5) */

void FUN_14db304e8(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_R12;
  ulonglong uVar10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  ulonglong auStack_10 [2];
  
  auStack_10[1] = 0xfffffffffcd70af4;
  uVar6 = *(ulonglong *)(unaff_R12 + -0xa0) | in_RAX;
  uVar10 = ~(*(ulonglong *)(unaff_R12 + -0xa0) & in_RAX);
  FUN_162c16e59();
  uVar7 = -~param_2 - (~param_1 + 2);
  uVar8 = ~((~unaff_R15 | uVar7) & (~unaff_R15 & ~uVar7 | unaff_R15));
  lVar1 = *(longlong *)(unaff_R13 + -0x30);
  uVar5 = FUN_162683eea(uVar8,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  *(undefined8 *)(&stack0x00000010 + lVar1) = DAT_162683e82;
  uVar7 = *(ulonglong *)(&stack0x00000010 + lVar1);
  *(undefined8 *)(&stack0x00000008 + lVar1) = uVar5;
  *(ulonglong *)(&stack0x00000010 + lVar1) = uVar8;
  *(undefined8 *)(&stack0x00000008 + lVar1) = in_stack_00000010;
  *(undefined8 *)(&stack0x00000000 + lVar1) = param_3;
  uVar5 = *(undefined8 *)(&stack0x00000008 + lVar1);
  uVar2 = *(ulonglong *)(&stack0x00000010 + lVar1);
  lVar9 = uVar7 + uVar8 + (uVar7 & uVar8) * -2;
  *(ulonglong *)(&stack0x00000010 + lVar1) = (uVar6 - (uVar10 | uVar6)) + uVar10;
  if (DAT_162683ea2 != uVar2) {
    FUN_160f4520f();
    return;
  }
  *(code **)(&stack0x00000010 + lVar1) = FUN_162683eea;
  *(longlong *)(&stack0x00000008 + lVar1) = unaff_R13;
  uVar7 = -(-1 - uVar2) - (~DAT_162683e62 + 2);
  lVar4 = *(longlong *)(&stack0x00000010 + lVar1);
  *(undefined8 *)(&stack0x00000010 + lVar1) = *(undefined8 *)(lVar4 + -0x90);
  *(longlong *)(&stack0x00000008 + lVar1) = lVar9;
  *(longlong *)(&stack0x00000000 + lVar1) = lVar9;
  uVar3 = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)((longlong)auStack_10 + lVar1 + 8) = uVar5;
  *(ulonglong *)((longlong)auStack_10 + lVar1) = uVar7 + (DAT_162683e62 & uVar2) * -2;
  *(undefined8 *)(&stack0x00000008 + lVar1) = uVar3;
  if (uVar7 < (DAT_162683e62 & uVar2) * 2) {
    *(ulonglong *)(&stack0x00000000 + lVar1) = unaff_R15;
    *(ulonglong *)((longlong)auStack_10 + lVar1 + 8) = unaff_R15;
    lVar9 = *(longlong *)(lVar4 + -0x98);
    *(undefined8 *)((longlong)auStack_10 + lVar1) = unaff_RBX;
    *(undefined8 *)(&stack0x00000000 + lVar1) = 0;
    *(longlong *)(&stack0x00000000 + lVar1) = *(longlong *)(&stack0x00000000 + lVar1) - lVar9;
    *(longlong *)(&stack0x00000000 + lVar1) = -*(longlong *)(&stack0x00000000 + lVar1);
    *(ulonglong *)((longlong)auStack_10 + lVar1 + 8) = uVar2;
    *(ulonglong *)((longlong)auStack_10 + lVar1) = uVar2;
    *(undefined1 **)((longlong)auStack_10 + lVar1 + 8) = &LAB_161105016;
    return;
  }
  FUN_161104fcf();
  return;
}



// FUNCTION 14db30562 FUN_14db30562 body=463 status=ok
// SIG undefined FUN_14db30562(void)

/* WARNING: Removing unreachable block (ram,0x000160f4532d) */
/* WARNING: Removing unreachable block (ram,0x000160f45338) */
/* WARNING: Removing unreachable block (ram,0x000160f45333) */
/* WARNING: Removing unreachable block (ram,0x00014db30675) */
/* WARNING: Removing unreachable block (ram,0x000160f452a2) */
/* WARNING: Removing unreachable block (ram,0x00014db306ae) */
/* WARNING: Removing unreachable block (ram,0x00014db306b5) */

void FUN_14db30562(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStack_20 [3];
  
  uVar7 = -~param_2 - (~param_1 + 2);
  uVar8 = ~((~unaff_R15 | uVar7) & (~unaff_R15 & ~uVar7 | unaff_R15));
  lVar2 = *(longlong *)(unaff_R13 + -0x30);
  uVar6 = FUN_162683eea(uVar8,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  *(undefined8 *)(&stack0x00000000 + lVar2) = DAT_162683e82;
  uVar7 = *(ulonglong *)(&stack0x00000000 + lVar2);
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = uVar6;
  *(ulonglong *)(&stack0x00000000 + lVar2) = uVar8;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = param_4;
  *(undefined8 *)((longlong)auStack_20 + lVar2 + 0x10) = param_3;
  uVar6 = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2);
  uVar3 = *(ulonglong *)(&stack0x00000000 + lVar2);
  lVar9 = uVar7 + uVar8 + (uVar7 & uVar8) * -2;
  *(undefined8 *)(&stack0x00000000 + lVar2) = unaff_R12;
  if (DAT_162683ea2 != uVar3) {
    FUN_160f4520f();
    return;
  }
  *(code **)(&stack0x00000000 + lVar2) = FUN_162683eea;
  *(longlong *)(&stack0xfffffffffffffff8 + lVar2) = unaff_R13;
  uVar7 = -(-1 - uVar3) - (~DAT_162683e62 + 2);
  lVar5 = *(longlong *)(&stack0x00000000 + lVar2);
  *(undefined8 *)(&stack0x00000000 + lVar2) = *(undefined8 *)(lVar5 + -0x90);
  *(longlong *)(&stack0xfffffffffffffff8 + lVar2) = lVar9;
  *(longlong *)((longlong)auStack_20 + lVar2 + 0x10) = lVar9;
  uVar4 = *(undefined8 *)(lVar5 + -8);
  *(undefined8 *)((longlong)auStack_20 + lVar2 + 8) = uVar6;
  *(ulonglong *)((longlong)auStack_20 + lVar2) = uVar7 + (DAT_162683e62 & uVar3) * -2;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = uVar4;
  if (uVar7 < (DAT_162683e62 & uVar3) * 2) {
    *(ulonglong *)((longlong)auStack_20 + lVar2 + 0x10) = unaff_R15;
    *(ulonglong *)((longlong)auStack_20 + lVar2 + 8) = unaff_R15;
    lVar9 = *(longlong *)(lVar5 + -0x98);
    *(undefined8 *)((longlong)auStack_20 + lVar2) = unaff_RBX;
    *(undefined8 *)((longlong)auStack_20 + lVar2 + 0x10) = 0;
    plVar1 = (longlong *)((longlong)auStack_20 + lVar2 + 0x10);
    *plVar1 = *plVar1 - lVar9;
    plVar1 = (longlong *)((longlong)auStack_20 + lVar2 + 0x10);
    *plVar1 = -*plVar1;
    *(ulonglong *)((longlong)auStack_20 + lVar2 + 8) = uVar3;
    *(ulonglong *)((longlong)auStack_20 + lVar2) = uVar3;
    *(undefined1 **)((longlong)auStack_20 + lVar2 + 8) = &LAB_161105016;
    return;
  }
  FUN_161104fcf();
  return;
}



// FUNCTION 14db307e8 FUN_14db307e8 body=245 status=ok
// SIG undefined FUN_14db307e8(void)

/* WARNING: Removing unreachable block (ram,0x0001618f5030) */
/* WARNING: Removing unreachable block (ram,0x0001618f5036) */
/* WARNING: Removing unreachable block (ram,0x0001618f50b1) */
/* WARNING: Removing unreachable block (ram,0x00014db3087e) */
/* WARNING: Removing unreachable block (ram,0x00014db308af) */

undefined8
FUN_14db307e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  longlong in_R10;
  ulonglong in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  
  *(undefined8 *)
   (unaff_RBX + in_R10 + ~(~(in_R11 & 0xffffffffe871658b) & (in_R11 | 0xffffffffe871658b))) =
       unaff_RBP;
  uVar1 = ~(param_7 & unaff_R15) & (param_7 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 0x15b441401;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  return uVar2;
}



// FUNCTION 14db3087e FUN_14db3087e body=137 status=ok
// SIG undefined FUN_14db3087e(void)

void FUN_14db3087e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte in_AL;
  byte bVar5;
  undefined7 in_register_00000001;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R11;
  undefined8 unaff_R13;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ulonglong local_res20;
  
  *(ulonglong *)(unaff_RDI + 0x10) = (~unaff_RBP | *(ulonglong *)(unaff_RDI + 0x10)) + unaff_RBP + 1
  ;
  uVar9 = ~local_res20 & in_R11;
  param_5 = param_5 ^ unaff_RBP;
  LOCK();
  bVar7 = in_AL < DAT_14d7c1faf;
  bVar8 = SBORROW1(in_AL,DAT_14d7c1faf);
  cVar4 = in_AL - DAT_14d7c1faf;
  bVar5 = DAT_14d7c1faf;
  if (cVar4 == '\0') {
    DAT_14d7c1faf = (byte)param_1;
    bVar5 = in_AL;
  }
  UNLOCK();
  *(undefined8 *)(param_5 - 8) = uStackX_10;
  *(undefined8 *)(param_5 - 0x10) = uStackX_10;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar8 * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar4 < '\0') * 0x80 | (ulonglong)(cVar4 == '\0') * 0x40 |
       (ulonglong)((uVar9 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 |
       (ulonglong)bVar7 | (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  uVar9 = *(ulonglong *)(param_5 - 0x18);
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
       (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = uStackX_8;
  *(undefined8 *)(param_5 - 0x28) = unaff_R13;
  uVar6 = 0x1c194c;
  uVar9 = *(ulonglong *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = param_4;
  *(ulonglong *)(param_5 - 0x20) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
       (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(param_5 - 0x28) = CONCAT71(in_register_00000001,bVar5);
  *(undefined4 *)(param_5 - 0x28) = 0xd7307723;
  *(undefined4 *)(param_5 - 0x24) = 0xffffffff;
  *(code **)(param_5 - 0x30) = FUN_14db30907;
  FUN_14dab6b88();
  puVar1 = (ulonglong *)(param_5 - 0x20);
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x7d5b8822;
  *(undefined4 *)(param_5 - 0x1c) = 0xffffffff;
  uVar2 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 8) = *(undefined8 *)(unaff_retaddr + (0x50161d10 - ~*puVar1));
  uVar3 = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x18) = uVar6;
  *(undefined8 *)(param_5 - 0x18) = param_1;
  uVar9 = *(ulonglong *)(param_5 - 0x18);
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) ^ uVar9;
  *(undefined8 *)(param_5 - 0x10) = uVar2;
  *(undefined8 *)(param_5 - 0x18) = uStackX_18;
  *(undefined8 *)(param_5 - 0x20) = uStackX_18;
  *(undefined1 **)(param_5 - 0x18) = &LAB_14db30998;
  FUN_166a59236(uVar9,FUN_166a59236,uVar3);
  return;
}



// FUNCTION 14db30907 FUN_14db30907 body=144 status=ok
// SIG undefined FUN_14db30907(void)

void FUN_14db30907(undefined8 param_1)

{
  undefined8 in_stack_00000018;
  
  FUN_166a59236(param_1,FUN_166a59236,in_stack_00000018);
  return;
}



// FUNCTION 14db30a31 FUN_14db30a31 body=162 status=ok
// SIG undefined FUN_14db30a31(void)

/* WARNING: Removing unreachable block (ram,0x00014db30ad4) */

void FUN_14db30a31(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000030;
  
  *(undefined8 *)(&stack0x00000018 + unaff_RBX) = unaff_RBP;
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000030 - 8) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000030 - 0x10) = unaff_R13;
  if ((undefined8 *)(in_stack_00000030 - 8) == (undefined8 *)0x0) {
    *(undefined1 **)(in_stack_00000030 - 0x18) = &LAB_1624df289;
    *(undefined8 *)(in_stack_00000030 - 0x10) = in_RAX;
    *(undefined8 *)(in_stack_00000030 - 0x18) = in_RAX;
    uVar1 = *(undefined8 *)(in_stack_00000030 - 8);
    *(undefined8 *)(in_stack_00000030 - 0x20) = in_R11;
    *(undefined8 *)(in_stack_00000030 - 0x28) = local_res8;
    *(undefined8 *)(in_stack_00000030 - 0x10) = uVar1;
    *(undefined **)(in_stack_00000030 - 8) = &DAT_156cbf7c7;
    *(undefined8 *)(in_stack_00000030 - 0x18) = 0x1669b71f5;
    FUN_156cbf7a1();
    pcVar2 = (code *)swi(1);
    (*pcVar2)(*(undefined8 *)(in_stack_00000030 - 0x10));
    return;
  }
  FUN_1669b7177();
  return;
}



// FUNCTION 14db30ad4 FUN_14db30ad4 body=10 status=ok
// SIG undefined FUN_14db30ad4(void)

void FUN_14db30ad4(void)

{
  return;
}



// FUNCTION 14db30ea8 FUN_14db30ea8 body=161 status=ok
// SIG undefined FUN_14db30ea8(void)

/* WARNING: Removing unreachable block (ram,0x00014db30f44) */
/* WARNING: Removing unreachable block (ram,0x00014db30f4a) */
/* WARNING: Removing unreachable block (ram,0x0001611a3bfd) */

undefined8 FUN_14db30ea8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1611a3bfd();
  return uVar1;
}



// FUNCTION 14db30f4a FUN_14db30f4a body=165 status=ok
// SIG undefined FUN_14db30f4a(void)

longlong FUN_14db30f4a(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)
           (unaff_RSI + ~(~(param_2 & 0xffffffffbb6a4849) & (param_2 | 0xffffffffbb6a4849)));
  return uVar1 + param_1 + (uVar1 & param_1) * -2;
}



// FUNCTION 14db30ff1 FUN_14db30ff1 body=271 status=ok
// SIG undefined FUN_14db30ff1(void)

void FUN_14db30ff1(void)

{
  FUN_161c28211();
  FUN_15ba129dc();
  (*(code *)0x14dfcd535)(0x14dfcd535);
  return;
}



// FUNCTION 14db31100 FUN_14db31100 body=149 status=ok
// SIG undefined FUN_14db31100(void)

void FUN_14db31100(void)

{
  (*(code *)0x14dfcd535)(0x14dfcd535);
  return;
}



// FUNCTION 14db312b4 FUN_14db312b4 body=17 status=ok
// SIG undefined FUN_14db312b4(void)

void FUN_14db312b4(void)

{
  return;
}



// FUNCTION 14db3134c FUN_14db3134c body=119 status=ok
// SIG undefined FUN_14db3134c(void)

void FUN_14db3134c(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  FUN_14d7f76d9(param_1,~unaff_R15 | local_res18);
  return;
}



// FUNCTION 14db31471 FUN_14db31471 body=269 status=ok
// SIG undefined FUN_14db31471(void)

void FUN_14db31471(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7abb37);
  UNLOCK();
  DAT_14d7abb37 = (char)in_RAX;
  *(undefined8 *)(local_res10 + -8) = uVar1;
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined4 *)(local_res10 + -0x18) = 0x921f043;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  *(undefined8 *)(local_res10 + -0x20) = 0x14db314ea;
  uVar1 = FUN_162a29e23(unaff_retaddr);
  *(undefined8 *)(local_res10 + -0x20) = uVar1;
  *(undefined4 *)(local_res10 + -0x20) = 0x8a85de52;
  *(undefined4 *)(local_res10 + -0x1c) = 0xffffffff;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *(undefined4 *)(local_res10 + -0x20) = *(undefined4 *)(local_res10 + -0x20);
  if (*(int *)(local_res10 + -0x20) < 0) {
    *(undefined4 *)(local_res10 + -0x1c) = 0xffffffff;
    *(undefined8 *)(local_res10 + -0x28) = 0x14db31555;
    return;
  }
  *(undefined8 *)(local_res10 + -0x28) = in_R9;
  FUN_164c216e7();
  return;
}



// FUNCTION 14db316c0 FUN_14db316c0 body=113 status=ok
// SIG undefined FUN_14db316c0(void)

undefined8 FUN_14db316c0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db31740 FUN_14db31740 body=335 status=ok
// SIG undefined FUN_14db31740(void)

/* WARNING: Instruction at (ram,0x000156d294aa) overlaps instruction at (ram,0x000156d294a9)
    */
/* WARNING: Removing unreachable block (ram,0x000156d2940b) */
/* WARNING: Removing unreachable block (ram,0x000156d29416) */
/* WARNING: Removing unreachable block (ram,0x000156d2948b) */
/* WARNING: Removing unreachable block (ram,0x000156d29496) */
/* WARNING: Removing unreachable block (ram,0x000156d294aa) */
/* WARNING: Removing unreachable block (ram,0x000156d294a9) */
/* WARNING: Removing unreachable block (ram,0x000156d29491) */
/* WARNING: Removing unreachable block (ram,0x000156d29486) */
/* WARNING: Removing unreachable block (ram,0x00015693d695) */
/* WARNING: Removing unreachable block (ram,0x00015693d718) */
/* WARNING: Removing unreachable block (ram,0x00015693d71d) */
/* WARNING: Removing unreachable block (ram,0x000156d29411) */
/* WARNING: Removing unreachable block (ram,0x00014db317e2) */
/* WARNING: Removing unreachable block (ram,0x00014db317ee) */
/* WARNING: Removing unreachable block (ram,0x00014db317f9) */
/* WARNING: Removing unreachable block (ram,0x00014db31804) */
/* WARNING: Removing unreachable block (ram,0x00014db31832) */
/* WARNING: Removing unreachable block (ram,0x00014db31835) */

void FUN_14db31740(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  
  *(undefined8 *)(&stack0x56bab206 + in_RAX) = 0x56943310;
  FUN_156da359b(param_1,param_2);
  return;
}



// FUNCTION 14db3180b FUN_14db3180b body=139 status=ok
// SIG undefined FUN_14db3180b(void)

/* WARNING: Removing unreachable block (ram,0x00014db31832) */

void FUN_14db3180b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_160cd52cd(param_1,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14db31897 FUN_14db31897 body=66 status=ok
// SIG undefined FUN_14db31897(void)

undefined8 FUN_14db31897(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db31943 FUN_14db31943 body=295 status=ok
// SIG undefined FUN_14db31943(void)

void FUN_14db31943(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_R12;
  
  lVar3 = unaff_RSI + param_1 + (unaff_R12 & param_1) * -2;
  uVar2 = FUN_1575e4382();
  uVar1 = *(ulonglong *)(lVar3 + -0x80);
  uVar4 = ~uVar1 | uVar2;
  FUN_161bf9595((~uVar4 | ~uVar2 | uVar1) + uVar4 + 1,FUN_161bf9595,uVar4,
                *(ulonglong *)(lVar3 + -0x30) ^ uVar2);
  return;
}



// FUNCTION 14db31a6b FUN_14db31a6b body=156 status=ok
// SIG undefined FUN_14db31a6b(void)

void FUN_14db31a6b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_14dcdaf02(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14db31c50 FUN_14db31c50 body=135 status=ok
// SIG undefined FUN_14db31c50(void)

/* WARNING: Removing unreachable block (ram,0x00014db31c6f) */

void FUN_14db31c50(undefined1 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  
  FUN_16490e378(param_1,~(param_2 & in_RAX) & unaff_RDI);
  return;
}



// FUNCTION 14db31cd9 thunk_FUN_14db31cdf body=5 status=ok
// SIG undefined thunk_FUN_14db31cdf(void)

void thunk_FUN_14db31cdf(void)

{
  FUN_15635792e();
  return;
}



// FUNCTION 14db31cdf FUN_14db31cdf body=142 status=ok
// SIG undefined FUN_14db31cdf(void)

void FUN_14db31cdf(void)

{
  FUN_15635792e();
  return;
}



// FUNCTION 14db31d6d FUN_14db31d6d body=67 status=ok
// SIG undefined FUN_14db31d6d(void)

void FUN_14db31d6d(void)

{
  return;
}



// FUNCTION 14db31de4 FUN_14db31de4 body=119 status=ok
// SIG undefined FUN_14db31de4(void)

void FUN_14db31de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  longlong *plVar1;
  longlong unaff_R14;
  longlong lStackX_20;
  
  plVar1 = (longlong *)((longlong)&lStackX_20 + unaff_R14);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RSI;
  FUN_164c1958b(FUN_164c1958b,param_2,plVar1,param_4);
  return;
}



// FUNCTION 14db31f73 FUN_14db31f73 body=1197 status=ok
// SIG undefined FUN_14db31f73(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014de80466) */
/* WARNING: Removing unreachable block (ram,0x00014de8046c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7878) */
/* WARNING: Removing unreachable block (ram,0x00015746300d) */
/* WARNING: Removing unreachable block (ram,0x00014db32026) */
/* WARNING: Removing unreachable block (ram,0x00014db320a8) */
/* WARNING: Removing unreachable block (ram,0x00014db320ad) */
/* WARNING: Removing unreachable block (ram,0x00014db320b8) */
/* WARNING: Removing unreachable block (ram,0x00014db320c3) */
/* WARNING: Removing unreachable block (ram,0x00014db320b3) */
/* WARNING: Removing unreachable block (ram,0x00014db3215a) */
/* WARNING: Removing unreachable block (ram,0x000157462f89) */
/* WARNING: Removing unreachable block (ram,0x000157463007) */
/* WARNING: Removing unreachable block (ram,0x00014de80347) */
/* WARNING: Removing unreachable block (ram,0x00014db32166) */

void FUN_14db31f73(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  uVar1 = 0xffffffffffffffff - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + unaff_R15 + 1);
  if (-1 < (longlong)((uVar2 - (uVar1 | uVar2)) + uVar1)) {
    FUN_16275982c();
    return;
  }
  FUN_16565c196();
  return;
}



// FUNCTION 14db3263d FUN_14db3263d body=171 status=ok
// SIG undefined FUN_14db3263d(void)

void FUN_14db3263d(void)

{
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x60917c6d + unaff_retaddr) = unaff_R14;
  FUN_1578024bd();
  return;
}



// FUNCTION 14db328eb FUN_14db328eb body=134 status=ok
// SIG undefined FUN_14db328eb(void)

void FUN_14db328eb(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_RBX;
  ushort *in_R10;
  undefined8 in_R11;
  ushort unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *in_R10 = (unaff_retaddr & param_3 | *in_R10) - 0x100;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined1 **)(param_5 + -8) = &LAB_161c4b085 + *(longlong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = uStackX_10;
  FUN_161c4b03d(*(undefined8 *)(param_5 + -0x18),param_2,uStackX_18);
  return;
}



// FUNCTION 14db32972 FUN_14db32972 body=140 status=ok
// SIG undefined FUN_14db32972(void)

void FUN_14db32972(undefined8 param_1)

{
  (*(code *)0x16253b792)(param_1);
  return;
}



// FUNCTION 14db32a05 FUN_14db32a05 body=27 status=ok
// SIG undefined FUN_14db32a05(void)

void FUN_14db32a05(undefined8 param_1)

{
  FUN_166a62797(param_1,&DAT_14d7b193b);
  return;
}



// FUNCTION 14db32ab7 FUN_14db32ab7 body=127 status=ok
// SIG undefined FUN_14db32ab7(void)

void FUN_14db32ab7(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ((param_1 ^ 0xffffffffffffffff) & param_2) + *(longlong *)(unaff_R13 + -0x78);
  thunk_FUN_162716234(uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,
                      *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14db32d54 FUN_14db32d54 body=161 status=ok
// SIG undefined FUN_14db32d54(void)

void FUN_14db32d54(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_R14;
  longlong local_res8 [4];
  
  local_res8[3] =
       *(longlong *)((longlong)local_res8 + (unaff_RBX ^ 0x40f52c47)) + in_RAX +
       (local_res8[3] & in_RAX) * -2;
  FUN_162458257();
  FUN_164f251dd(unaff_R14,param_2);
  return;
}



// FUNCTION 14db32df6 FUN_14db32df6 body=110 status=ok
// SIG undefined FUN_14db32df6(void)

void FUN_14db32df6(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_164f251dd(in_stack_00000008,param_2);
  return;
}



// FUNCTION 14db33049 FUN_14db33049 body=16 status=ok
// SIG undefined FUN_14db33049(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db33049(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db330e9 FUN_14db330e9 body=452 status=ok
// SIG undefined FUN_14db330e9(void)

/* WARNING: Removing unreachable block (ram,0x000162096f2c) */
/* WARNING: Removing unreachable block (ram,0x000162096f32) */
/* WARNING: Removing unreachable block (ram,0x000162096f37) */
/* WARNING: Removing unreachable block (ram,0x000162096fb8) */
/* WARNING: Removing unreachable block (ram,0x000162096fbe) */
/* WARNING: Removing unreachable block (ram,0x000162096fc9) */
/* WARNING: Removing unreachable block (ram,0x000165e1f6cc) */
/* WARNING: Removing unreachable block (ram,0x000162096e99) */
/* WARNING: Removing unreachable block (ram,0x000162096e9f) */
/* WARNING: Removing unreachable block (ram,0x00015b883ce9) */
/* WARNING: Removing unreachable block (ram,0x000161c8f2ef) */
/* WARNING: Removing unreachable block (ram,0x00014db3317a) */
/* WARNING: Removing unreachable block (ram,0x00014db33180) */
/* WARNING: Removing unreachable block (ram,0x000161d81608) */
/* WARNING: Removing unreachable block (ram,0x00015b66ca50) */

undefined8 FUN_14db330e9(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  FUN_1665538ec();
  uVar3 = *(ulonglong *)(unaff_RSI + -0xa0);
  uVar3 = ((~uVar2 | uVar3) + uVar2 + 1 ^ 0xffffffffffffffff) & (uVar3 + uVar2) - (uVar3 & uVar2);
  uVar1 = FUN_162f10d00();
  if (in_R11 == 0x12d866) {
    return uVar1;
  }
  if (uVar3 == 0x12d867) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (uVar3 == 0x12d868) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (uVar3 != 0x12d869) {
    uVar1 = FUN_162096e21();
    return uVar1;
  }
  uVar1 = FUN_161c8f2ef(param_1,param_2);
  return uVar1;
}



// FUNCTION 14db3332c FUN_14db3332c body=141 status=ok
// SIG undefined FUN_14db3332c(void)

undefined8 FUN_14db3332c(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(&stack0x00000010 + param_2);
  *(ulonglong *)(&stack0x00000010 + param_2) = ~*(ulonglong *)(&stack0x00000010 + param_2);
  uVar4 = ~unaff_R15 & *(ulonglong *)(&stack0x00000010 + param_2) | unaff_R15;
  *(undefined8 *)(&stack0x00000010 + param_2) = 0;
  lVar2 = *(longlong *)(&stack0x00000010 + param_2);
  *(ulonglong *)(&stack0x00000010 + param_2) = *(ulonglong *)(&stack0x00000010 + param_2) & uVar4;
  *(longlong *)(&stack0x00000010 + param_2) = *(longlong *)(&stack0x00000010 + param_2) << 1;
  *(ulonglong *)(&stack0x00000010 + param_2) =
       (lVar2 + uVar4) - *(longlong *)(&stack0x00000010 + param_2);
  *(ulonglong *)(&stack0x00000010 + param_2) =
       -1 - ((~unaff_R15 | uVar1) & *(ulonglong *)(&stack0x00000010 + param_2));
  uVar3 = FUN_162beb630(param_1,unaff_retaddr);
  return uVar3;
}



// FUNCTION 14db333ba FUN_14db333ba body=125 status=ok
// SIG undefined FUN_14db333ba(void)

undefined8 FUN_14db333ba(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db33610 FUN_14db33610 body=150 status=ok
// SIG undefined FUN_14db33610(void)

void FUN_14db33610(void)

{
  return;
}



// FUNCTION 14db336a7 FUN_14db336a7 body=224 status=ok
// SIG undefined FUN_14db336a7(void)

void FUN_14db336a7(undefined8 param_1,undefined8 param_2)

{
  longlong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(&stack0x4b1647cf + in_stack_00000008) = param_2;
  FUN_165727c55(FUN_165727c55,in_stack_00000018);
  return;
}



// FUNCTION 14db337f5 FUN_14db337f5 body=568 status=ok
// SIG undefined FUN_14db337f5(void)

/* WARNING: Removing unreachable block (ram,0x00014db338e7) */
/* WARNING: Removing unreachable block (ram,0x00014db338f3) */
/* WARNING: Removing unreachable block (ram,0x00014db33859) */
/* WARNING: Removing unreachable block (ram,0x00014db3385f) */
/* WARNING: Removing unreachable block (ram,0x00014db338e2) */
/* WARNING: Removing unreachable block (ram,0x000164bcc580) */
/* WARNING: Removing unreachable block (ram,0x000164bcc603) */
/* WARNING: Removing unreachable block (ram,0x00016134295d) */
/* WARNING: Removing unreachable block (ram,0x000164bcc60f) */
/* WARNING: Removing unreachable block (ram,0x000164bcc689) */
/* WARNING: Removing unreachable block (ram,0x000164bcc68e) */
/* WARNING: Removing unreachable block (ram,0x000164bcc69a) */
/* WARNING: Removing unreachable block (ram,0x00014d953d69) */

void FUN_14db337f5(void)

{
  longlong unaff_retaddr;
  
  if (unaff_retaddr < 0) {
    FUN_156ead624();
    return;
  }
  return;
}



// FUNCTION 14db33950 FUN_14db33950 body=158 status=ok
// SIG undefined FUN_14db33950(void)

void FUN_14db33950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x20) = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x28) = uVar1;
  *(undefined8 *)(local_res20 + -0x28) = local_res8;
  FUN_165411aa0(param_1,param_2,&DAT_1565657be);
  return;
}



// FUNCTION 14db33b4b FUN_14db33b4b body=319 status=ok
// SIG undefined FUN_14db33b4b(void)

/* WARNING: Removing unreachable block (ram,0x00014db33be2) */
/* WARNING: Removing unreachable block (ram,0x00014db33bed) */
/* WARNING: Removing unreachable block (ram,0x00016587d496) */
/* WARNING: Removing unreachable block (ram,0x00016587d53a) */
/* WARNING: Removing unreachable block (ram,0x00016587d545) */
/* WARNING: Removing unreachable block (ram,0x00016587d5c7) */
/* WARNING: Removing unreachable block (ram,0x00016587d5cd) */
/* WARNING: Removing unreachable block (ram,0x00016241b57c) */
/* WARNING: Removing unreachable block (ram,0x00016587d540) */
/* WARNING: Removing unreachable block (ram,0x00016587d529) */
/* WARNING: Removing unreachable block (ram,0x000156c6365d) */
/* WARNING: Removing unreachable block (ram,0x0001619eb09c) */
/* WARNING: Removing unreachable block (ram,0x000156c636b7) */
/* WARNING: Removing unreachable block (ram,0x000156c636bd) */
/* WARNING: Removing unreachable block (ram,0x000156c636c2) */
/* WARNING: Removing unreachable block (ram,0x000161b77c38) */
/* WARNING: Removing unreachable block (ram,0x000161b77c3e) */
/* WARNING: Removing unreachable block (ram,0x00014db33be8) */

void FUN_14db33b4b(void)

{
  FUN_16587d496();
  return;
}



// FUNCTION 14db33c8d FUN_14db33c8d body=616 status=ok
// SIG undefined FUN_14db33c8d(void)

/* WARNING: Removing unreachable block (ram,0x00014db33e45) */
/* WARNING: Removing unreachable block (ram,0x00014db33e3f) */
/* WARNING: Removing unreachable block (ram,0x00014db33e4a) */
/* WARNING: Removing unreachable block (ram,0x000160db6008) */
/* WARNING: Removing unreachable block (ram,0x00014db33d17) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014db33d8a) */
/* WARNING: Removing unreachable block (ram,0x00014db33d96) */
/* WARNING: Removing unreachable block (ram,0x00014db33d9b) */

undefined8 FUN_14db33c8d(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  longlong in_stack_00000008;
  
  uVar3 = *(ulonglong *)(in_stack_00000008 + -0xa0);
  uVar1 = *(ulonglong *)(in_stack_00000008 + -0x98) ^ param_1;
  uVar2 = *(ulonglong *)(in_stack_00000008 + -0x90) ^ param_1;
  *(undefined8 *)(uVar2 - 8) = unaff_RBP;
  *(ulonglong *)(uVar2 - 0x10) = uVar1;
  *(ulonglong *)(uVar2 - 0x18) = uVar1;
  uVar5 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x28) = param_2;
  uVar4 = *(undefined8 *)(uVar2 - 0x28);
  *(undefined8 *)(uVar2 - 0x10) = uVar5;
  uVar5 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined1 **)(uVar2 - 8) = &LAB_161776b8e;
                    /* WARNING: Could not recover jumptable at 0x000161776b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)(uVar3 + param_1 + (uVar3 & param_1) * -2))(uVar5,uVar4,param_3);
  return uVar5;
}



// FUNCTION 14db33d9b FUN_14db33d9b body=359 status=ok
// SIG undefined FUN_14db33d9b(void)

/* WARNING: Removing unreachable block (ram,0x00014db33e3f) */
/* WARNING: Removing unreachable block (ram,0x00014db33e4a) */
/* WARNING: Removing unreachable block (ram,0x00014db33e45) */

undefined8 FUN_14db33d9b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1573c2119(param_1,param_2,param_3,0x3623a009,*(undefined8 *)(unaff_RDI + -0x98),
                        *(undefined8 *)(unaff_RDI + -8));
  return uVar1;
}



// FUNCTION 14db34043 FUN_14db34043 body=141 status=ok
// SIG undefined FUN_14db34043(void)

void FUN_14db34043(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16604ab23(param_1,param_2,0xffffffffd163ee5c,unaff_retaddr);
  return;
}



// FUNCTION 14db340d0 FUN_14db340d0 body=576 status=ok
// SIG undefined FUN_14db340d0(void)

/* WARNING: Removing unreachable block (ram,0x00014db3414c) */
/* WARNING: Removing unreachable block (ram,0x00014db34158) */
/* WARNING: Removing unreachable block (ram,0x0001666b17f5) */
/* WARNING: Removing unreachable block (ram,0x0001666b1911) */
/* WARNING: Removing unreachable block (ram,0x0001666b191d) */
/* WARNING: Removing unreachable block (ram,0x0001666b1999) */
/* WARNING: Removing unreachable block (ram,0x0001666b199e) */
/* WARNING: Removing unreachable block (ram,0x0001666b19a4) */
/* WARNING: Removing unreachable block (ram,0x000156572c7f) */
/* WARNING: Removing unreachable block (ram,0x0001666b19a9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db340d0(void)

{
  return;
}



// FUNCTION 14db34274 FUN_14db34274 body=142 status=ok
// SIG undefined FUN_14db34274(void)

void FUN_14db34274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1574fbf77(param_1,FUN_1574fbf77,param_3);
  return;
}



// FUNCTION 14db34303 FUN_14db34303 body=298 status=ok
// SIG undefined FUN_14db34303(void)

void FUN_14db34303(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x30) ^ param_1;
  uVar1 = FUN_165cb98e6(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  uVar1 = ~(0xffffffffffffffff - uVar2 & (uVar1 | 0xffffffffa1358356));
  *(undefined4 *)(&stack0x00000000 + uVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + uVar1) = *(undefined4 *)(&stack0x00000000 + uVar1);
  FUN_1629073ca(param_1,param_2);
  return;
}



// FUNCTION 14db3442f FUN_14db3442f body=312 status=ok
// SIG undefined FUN_14db3442f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14db3442f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  
  return (param_3 + -1) - ~in_RAX;
}



// FUNCTION 14db345bf FUN_14db345bf body=2 status=ok
// SIG undefined FUN_14db345bf(void)

void FUN_14db345bf(void)

{
  return;
}



// FUNCTION 14db34710 FUN_14db34710 body=166 status=ok
// SIG undefined FUN_14db34710(void)

void FUN_14db34710(undefined8 param_1)

{
  (*(code *)&LAB_166c69329)(param_1,&LAB_166c69329);
  return;
}



// FUNCTION 14db3484f FUN_14db3484f body=41 status=ok
// SIG undefined FUN_14db3484f(void)

undefined8 FUN_14db3484f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db3495e FUN_14db3495e body=136 status=ok
// SIG undefined FUN_14db3495e(void)

/* WARNING: Instruction at (ram,0x00014db34981) overlaps instruction at (ram,0x00014db34980)
    */

void FUN_14db3495e(void)

{
  return;
}



// FUNCTION 14db34dcd FUN_14db34dcd body=153 status=ok
// SIG undefined FUN_14db34dcd(void)

void FUN_14db34dcd(void)

{
  FUN_166db1646();
  return;
}



// FUNCTION 14db35041 FUN_14db35041 body=136 status=ok
// SIG undefined FUN_14db35041(void)

void FUN_14db35041(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_1648745c5)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14db3515b FUN_14db3515b body=114 status=ok
// SIG undefined FUN_14db3515b(void)

void FUN_14db3515b(void)

{
  return;
}



// FUNCTION 14db351f2 FUN_14db351f2 body=251 status=ok
// SIG undefined FUN_14db351f2(void)

void FUN_14db351f2(void)

{
  FUN_16531d627();
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14db35329 FUN_14db35329 body=145 status=ok
// SIG undefined FUN_14db35329(void)

ulonglong FUN_14db35329(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14db3543f FUN_14db3543f body=163 status=ok
// SIG undefined FUN_14db3543f(void)

/* WARNING: Removing unreachable block (ram,0x00014db354bd) */

void FUN_14db3543f(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_162ab75f3(~((~in_RAX | param_2) & (~(~param_2 & in_RAX) + in_RAX) - param_2),
                *(undefined8 *)(unaff_R12 + -0x78));
  FUN_14db354e5();
  return;
}



// FUNCTION 14db354e5 FUN_14db354e5 body=86 status=ok
// SIG undefined FUN_14db354e5(void)

void FUN_14db354e5(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  longlong in_R10;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0x109beb3b;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x109beb3b;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_14db35550;
                    /* WARNING: Could not recover jumptable at 0x00014db35539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_retaddr ^ uStackX_8);
  return;
}



// FUNCTION 14db355a6 FUN_14db355a6 body=60 status=ok
// SIG undefined FUN_14db355a6(void)

void FUN_14db355a6(void)

{
  return;
}



// FUNCTION 14db35794 FUN_14db35794 body=153 status=ok
// SIG undefined FUN_14db35794(void)

void FUN_14db35794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1568bf31a(param_1,0xffffffffffffffff,param_3);
  return;
}



// FUNCTION 14db35b66 FUN_14db35b66 body=286 status=ok
// SIG undefined FUN_14db35b66(void)

void FUN_14db35b66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000018;
  
  FUN_156f425b0(param_1,in_RAX ^ 0xffffffffffffffff,in_RAX ^ 0xffffffffffffffff,param_4,
                in_stack_00000018 ^ in_RAX);
  FUN_1575bd984();
  return;
}



// FUNCTION 14db35dcd FUN_14db35dcd body=192 status=ok
// SIG undefined FUN_14db35dcd(void)

void FUN_14db35dcd(void)

{
  return;
}



// FUNCTION 14db35fbc FUN_14db35fbc body=474 status=ok
// SIG undefined FUN_14db35fbc(void)

/* WARNING: Removing unreachable block (ram,0x000156b237aa) */
/* WARNING: Removing unreachable block (ram,0x000165397a63) */
/* WARNING: Removing unreachable block (ram,0x00014db3605f) */
/* WARNING: Removing unreachable block (ram,0x00014db360f1) */
/* WARNING: Removing unreachable block (ram,0x00014db360f6) */
/* WARNING: Removing unreachable block (ram,0x000156b23703) */
/* WARNING: Removing unreachable block (ram,0x00014db360fc) */

void FUN_14db35fbc(void)

{
  return;
}



// FUNCTION 14db36342 FUN_14db36342 body=144 status=ok
// SIG undefined FUN_14db36342(void)

/* WARNING: Removing unreachable block (ram,0x00014db364ff) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b32) */
/* WARNING: Removing unreachable block (ram,0x00014db3646e) */
/* WARNING: Removing unreachable block (ram,0x000164973633) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b27) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b2d) */
/* WARNING: Removing unreachable block (ram,0x000156b8887b) */

undefined8 FUN_14db36342(void)

{
  undefined8 uVar1;
  
  FUN_1667d34e2();
  uVar1 = thunk_FUN_156b88881();
  return uVar1;
}



// FUNCTION 14db363d2 FUN_14db363d2 body=389 status=ok
// SIG undefined FUN_14db363d2(void)

/* WARNING: Removing unreachable block (ram,0x00014db364ff) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b32) */
/* WARNING: Removing unreachable block (ram,0x00014db3646e) */
/* WARNING: Removing unreachable block (ram,0x000164973633) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b27) */
/* WARNING: Removing unreachable block (ram,0x0001660d0b2d) */
/* WARNING: Removing unreachable block (ram,0x000156b8887b) */

undefined8 FUN_14db363d2(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_156b88881();
  return uVar1;
}



// FUNCTION 14db36590 FUN_14db36590 body=186 status=ok
// SIG undefined FUN_14db36590(void)

void FUN_14db36590(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  
  uVar2 = *(ulonglong *)(param_1 + 8 + unaff_RBP);
  puVar1 = (ulonglong *)(param_1 + 8 + unaff_RBP);
  *puVar1 = *puVar1 ^ 0xffffffffffffffff;
  puVar1 = (ulonglong *)(param_1 + 8 + unaff_RBP);
  *puVar1 = *puVar1 | unaff_RBX;
  *(ulonglong *)(param_1 + 8 + unaff_RBP) =
       ~((unaff_RBX ^ 0xffffffffffffffff | uVar2) & *(ulonglong *)(param_1 + 8 + unaff_RBP));
  return;
}



// FUNCTION 14db36655 FUN_14db36655 body=754 status=ok
// SIG undefined FUN_14db36655(void)

/* WARNING: Instruction at (ram,0x000162c0c7b0) overlaps instruction at (ram,0x000162c0c7af)
    */
/* WARNING: Removing unreachable block (ram,0x000162636e9f) */
/* WARNING: Removing unreachable block (ram,0x00014db36818) */
/* WARNING: Removing unreachable block (ram,0x000162c0c574) */
/* WARNING: Removing unreachable block (ram,0x00014df6c6c9) */
/* WARNING: Removing unreachable block (ram,0x00014df6c748) */
/* WARNING: Removing unreachable block (ram,0x00014df6c74e) */
/* WARNING: Removing unreachable block (ram,0x00014db366f5) */
/* WARNING: Removing unreachable block (ram,0x000165b1e624) */
/* WARNING: Removing unreachable block (ram,0x000162636eaa) */
/* WARNING: Removing unreachable block (ram,0x000162c0c5f2) */
/* WARNING: Removing unreachable block (ram,0x000162c0c60d) */
/* WARNING: Removing unreachable block (ram,0x000162c0c603) */
/* WARNING: Removing unreachable block (ram,0x000162c0c616) */
/* WARNING: Removing unreachable block (ram,0x000162c0c65e) */
/* WARNING: Removing unreachable block (ram,0x000162c0c659) */
/* WARNING: Removing unreachable block (ram,0x000162c0c663) */
/* WARNING: Removing unreachable block (ram,0x000162c0c68d) */
/* WARNING: Removing unreachable block (ram,0x000162c0c693) */
/* WARNING: Removing unreachable block (ram,0x000164a6361e) */
/* WARNING: Removing unreachable block (ram,0x000162c0c69a) */
/* WARNING: Removing unreachable block (ram,0x000162c0c739) */
/* WARNING: Removing unreachable block (ram,0x000162c0c745) */
/* WARNING: Removing unreachable block (ram,0x000162c0c7b0) */
/* WARNING: Removing unreachable block (ram,0x000162c0c7af) */
/* WARNING: Removing unreachable block (ram,0x000160bf5316) */
/* WARNING: Removing unreachable block (ram,0x000160bf5320) */
/* WARNING: Removing unreachable block (ram,0x00014db36812) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db36655(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  lVar3 = ~(uVar1 | unaff_R15) + 1 + unaff_R15 + uVar1;
  uVar2 = (*(code *)0x166d2615c)
                    ((uVar1 + unaff_R15) -
                     ~(0xffffffffffffffff - (lVar3 * 2 | (ulonglong)(lVar3 < 0)) | 1),0x166d2615c);
  return uVar2;
}



// FUNCTION 14db369fd FUN_14db369fd body=347 status=ok
// SIG undefined FUN_14db369fd(void)

/* WARNING: Removing unreachable block (ram,0x00014db36b4d) */
/* WARNING: Removing unreachable block (ram,0x00014db36b53) */
/* WARNING: Removing unreachable block (ram,0x000165b29e87) */

void FUN_14db369fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  FUN_15b0c6281();
  FUN_1669652f8(FUN_1669652f8,uVar1,param_3,param_4);
  return;
}



// FUNCTION 14db36b59 FUN_14db36b59 body=136 status=ok
// SIG undefined FUN_14db36b59(void)

ulonglong FUN_14db36b59(void)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  
  return ~((~unaff_RBX | unaff_RSI) + unaff_RBX + 1);
}



// FUNCTION 14db36ca5 FUN_14db36ca5 body=141 status=ok
// SIG undefined FUN_14db36ca5(void)

/* WARNING: Removing unreachable block (ram,0x00014db36cec) */

void FUN_14db36ca5(undefined8 param_1,short param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  (*(code *)0x16629049b)
            (-(uVar1 & in_RAX),-param_2,
             0xfffffffffffffffe - ~-(uVar1 & in_RAX) & (uVar1 + in_RAX) - (uVar1 & in_RAX),
             *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db36d33 FUN_14db36d33 body=303 status=ok
// SIG undefined FUN_14db36d33(void)

void FUN_14db36d33(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = 1;
  FUN_161286022(1,0xffffffffffffff90,*(ulonglong *)(unaff_RDI + -0x70) & param_1,
                unaff_retaddr ^ param_1);
  FUN_16513a3a2(uVar1,8,unaff_RSI);
  return;
}



// FUNCTION 14db37170 FUN_14db37170 body=133 status=ok
// SIG undefined FUN_14db37170(void)

/* WARNING: Removing unreachable block (ram,0x000164ac13d4) */
/* WARNING: Removing unreachable block (ram,0x00014db37280) */

void FUN_14db37170(ulonglong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  longlong unaff_RDI;
  
  if (param_4 == 0x117aaa) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == 0x117aab) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0x117aac) {
    FUN_1648b4d52();
    return;
  }
  FUN_1648b4d43(param_1,param_2,param_3);
  if ((~(*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x80) | param_1)) == 0) {
    FUN_16556c378(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                          (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,
                  (-param_3 - param_1) + (param_3 | param_1) * 2);
    FUN_15b610475();
    FUN_16283e50d();
    FUN_164ac151b();
    return;
  }
  FUN_164ac137e();
  return;
}



// FUNCTION 14db371f5 FUN_14db371f5 body=299 status=ok
// SIG undefined FUN_14db371f5(void)

/* WARNING: Removing unreachable block (ram,0x000164ac13d4) */
/* WARNING: Removing unreachable block (ram,0x00014db37280) */

void FUN_14db371f5(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  if ((~(*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x80) | param_1)) == 0) {
    FUN_16556c378(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                          (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,
                  (-param_3 - param_1) + (param_3 | param_1) * 2);
    FUN_15b610475();
    FUN_16283e50d();
    FUN_164ac151b();
    return;
  }
  FUN_164ac137e();
  return;
}



// FUNCTION 14db3750d FUN_14db3750d body=73 status=ok
// SIG undefined FUN_14db3750d(void)

void FUN_14db3750d(void)

{
  return;
}



// FUNCTION 14db375a2 FUN_14db375a2 body=153 status=ok
// SIG undefined FUN_14db375a2(void)

void FUN_14db375a2(void)

{
  return;
}



// FUNCTION 14db37647 FUN_14db37647 body=256 status=ok
// SIG undefined FUN_14db37647(void)

void FUN_14db37647(ulonglong param_1)

{
  undefined8 in_stack_00000010;
  ulonglong in_stack_00000038;
  
  FUN_15656b00d(param_1,in_stack_00000010);
  FUN_166bcf456((in_stack_00000038 & param_1) << 1 |
                (ulonglong)((longlong)(in_stack_00000038 & param_1) < 0));
  return;
}



// FUNCTION 14db3785b FUN_14db3785b body=352 status=ok
// SIG undefined FUN_14db3785b(void)

/* WARNING: Removing unreachable block (ram,0x00014db3790a) */
/* WARNING: Removing unreachable block (ram,0x00014db37910) */
/* WARNING: Removing unreachable block (ram,0x0001618f32db) */
/* WARNING: Removing unreachable block (ram,0x0001618f331e) */
/* WARNING: Removing unreachable block (ram,0x0001618f3322) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3785b(void)

{
  thunk_FUN_1618f32e1();
  return;
}



// FUNCTION 14db37a65 FUN_14db37a65 body=924 status=ok
// SIG undefined FUN_14db37a65(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db37c3c) */
/* WARNING: Removing unreachable block (ram,0x00014db37c42) */
/* WARNING: Removing unreachable block (ram,0x00014d7be287) */
/* WARNING: Removing unreachable block (ram,0x00014db37cc9) */
/* WARNING: Removing unreachable block (ram,0x00014db37ccf) */
/* WARNING: Removing unreachable block (ram,0x000156aa666f) */
/* WARNING: Removing unreachable block (ram,0x00014db37d5e) */
/* WARNING: Removing unreachable block (ram,0x00014db37d64) */

void FUN_14db37a65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  code *pcVar3;
  longlong unaff_RDI;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) ^ 0xffffffffffffffff;
  *(longlong *)(unaff_RDI + 0x10) = -*(longlong *)(unaff_RDI + 0x10);
  *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) + -1;
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) & ~in_RAX;
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) =
       -1 - (~((uVar1 | in_RAX) + ~uVar1 + 1) & *(ulonglong *)(unaff_RDI + 0x10));
  pcVar3 = FUN_162381525;
  FUN_162381525(in_stack_00000010,FUN_162381525,param_3);
  uVar2 = FUN_16513d2f2(0xffffffffffffff70,(ulonglong)pcVar3 >> 8 | (longlong)pcVar3 << 0x39);
  FUN_166ac944b(uVar2,0x16);
  return;
}



// FUNCTION 14db37e82 FUN_14db37e82 body=616 status=ok
// SIG undefined FUN_14db37e82(void)

/* WARNING: Removing unreachable block (ram,0x00016282d2d7) */
/* WARNING: Removing unreachable block (ram,0x000164f26a38) */
/* WARNING: Removing unreachable block (ram,0x000164f26aec) */
/* WARNING: Removing unreachable block (ram,0x000164f26af2) */
/* WARNING: Removing unreachable block (ram,0x000160fe2e9e) */
/* WARNING: Removing unreachable block (ram,0x00014db37f24) */

void FUN_14db37e82(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = (-*(longlong *)(unaff_R12 + -0x90) ^ 0xffffffffffffffffU) + 1;
  if (-1 < (longlong)(uVar1 + in_RAX + (uVar1 & in_RAX) * -2)) {
    FUN_16282d23b();
    return;
  }
  if (*(longlong *)(unaff_R12 + -8) == 0 && in_RAX == 0) {
    FUN_160daf9c8();
    return;
  }
  FUN_160daf9c8();
  return;
}



// FUNCTION 14db38057 FUN_14db38057 body=286 status=ok
// SIG undefined FUN_14db38057(void)

/* WARNING: Removing unreachable block (ram,0x00014db380cf) */
/* WARNING: Removing unreachable block (ram,0x00014db380ee) */
/* WARNING: Removing unreachable block (ram,0x00014db380e8) */

void FUN_14db38057(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1623286ee(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14db382d6 FUN_14db382d6 body=129 status=ok
// SIG undefined FUN_14db382d6(void)

void FUN_14db382d6(void)

{
  return;
}



// FUNCTION 14db3848a FUN_14db3848a body=198 status=ok
// SIG undefined FUN_14db3848a(void)

/* WARNING: Removing unreachable block (ram,0x00014db38615) */
/* WARNING: Removing unreachable block (ram,0x00014db385cb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3848a(void)

{
  FUN_162269257();
  return;
}



// FUNCTION 14db38550 FUN_14db38550 body=295 status=ok
// SIG undefined FUN_14db38550(void)

/* WARNING: Removing unreachable block (ram,0x00014db38615) */
/* WARNING: Removing unreachable block (ram,0x00014db385cb) */

void FUN_14db38550(void)

{
  return;
}



// FUNCTION 14db3867c FUN_14db3867c body=39 status=ok
// SIG undefined FUN_14db3867c(void)

void FUN_14db3867c(void)

{
  return;
}



// FUNCTION 14db386fa FUN_14db386fa body=74 status=ok
// SIG undefined FUN_14db386fa(void)

void FUN_14db386fa(void)

{
  return;
}



// FUNCTION 14db38829 FUN_14db38829 body=274 status=ok
// SIG undefined FUN_14db38829(void)

/* WARNING: Removing unreachable block (ram,0x00014db38875) */

void FUN_14db38829(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_165435a20();
  FUN_15b373295(param_1,local_res8);
  FUN_15b3d5987();
  return;
}



// FUNCTION 14db38b62 FUN_14db38b62 body=130 status=ok
// SIG undefined FUN_14db38b62(void)

void FUN_14db38b62(void)

{
  return;
}



// FUNCTION 14db39061 FUN_14db39061 body=144 status=ok
// SIG undefined FUN_14db39061(void)

void FUN_14db39061(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  uVar1 = 0xffffffffffffffff - (local_res20 & param_1) & ~(~local_res20 & ~param_1);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(uStackX_10,param_2,param_3);
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  FUN_16152409a();
  return;
}



// FUNCTION 14db3918a FUN_14db3918a body=127 status=ok
// SIG undefined FUN_14db3918a(void)

void FUN_14db3918a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_1649dbb03)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db392c2 FUN_14db392c2 body=701 status=ok
// SIG undefined FUN_14db392c2(void)

/* WARNING: Removing unreachable block (ram,0x00014db3940c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db392c2(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar10;
  longlong in_R11;
  ulonglong uVar11;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_16102194a();
  puVar1 = (ulonglong *)(&stack0xfffffffffe6b3e11 + in_R11);
  lVar3 = *(longlong *)(unaff_RDI + -0x38);
  *puVar1 = 0;
  *puVar1 = *puVar1 - lVar3;
  *puVar1 = -*puVar1;
  puVar2 = (ulonglong *)(&stack0xfffffffffe6b3e11 + in_R11);
  uVar6 = ~((~param_1 | *puVar1) & (~*puVar1 | param_1));
  uVar11 = *(ulonglong *)(unaff_RDI + -0x40) ^ param_1;
  uVar7 = *(ulonglong *)(unaff_RDI + -0x50);
  *puVar1 = uVar7;
  *puVar2 = *puVar1 + param_1 + (uVar7 & param_1) * -2;
  *puVar2 = uVar6;
  puVar2[-1] = unaff_RSI;
  uVar7 = *(ulonglong *)(unaff_RDI + -0x30);
  uVar10 = *puVar2;
  *puVar2 = uVar10;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  *puVar2 = param_1;
  uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),0xcc) ^ 0xfe;
  bVar8 = (byte)uVar9;
  bVar8 = ~(bVar8 & 0x33) & (bVar8 | 0x33);
  bVar4 = (bVar8 & 0x3f) != 0;
  bVar5 = (uVar7 & param_1) << (bVar8 & 0x3f) == 0;
  if ((!bVar4 && bVar8 == 0 || bVar4 && bVar5) && ((bVar4 || bVar8 != 0) && (!bVar4 || !bVar5))) {
    uVar7 = *(ulonglong *)(uVar11 - 0x38);
    uVar6 = ~uVar7 | uVar10;
    (*(code *)0x161b14cec)(bVar8,uVar9,0x161b14cec,-1 - ((~uVar6 | ~uVar10 | uVar7) + uVar6 + 1));
    return;
  }
  uVar9 = *puVar2;
  uVar7 = *(ulonglong *)(unaff_RDI + -0x60);
  *puVar2 = uVar10;
  puVar2[-1] = puVar2[-1];
  uVar10 = ~(*(ulonglong *)(unaff_RDI + -0x70) & uVar9 |
            ~(*(ulonglong *)(unaff_RDI + -0x70) | uVar9));
  *puVar2 = *(ulonglong *)(unaff_RDI + -0x80);
  puVar2[-1] = 0x1622698d6;
  uVar7 = FUN_161a28249(uVar9,FUN_161a28249,uVar10,uVar7 ^ uVar9);
  *puVar2 = uVar7;
  *(undefined4 *)puVar2 = 0xf1d71eb5;
  puVar2[-1] = uVar7;
  *(undefined4 *)(puVar2 + -1) = 0x29c719a8;
  *(undefined4 *)((longlong)puVar2 + -4) = 0;
  *(undefined4 *)((longlong)puVar2 + (puVar2[-1] ^ 0x29c719ac)) = 0xffffffff;
  uVar7 = *puVar2;
  *puVar2 = uVar10;
  puVar2[-1] = *(undefined8 *)(uVar6 + uVar7 + 0xe28e0d3);
  uVar7 = puVar2[-1];
  uVar10 = *puVar2;
  uVar6 = 0xffffffffffffffff - uVar7 | unaff_R15;
  *puVar2 = uVar11;
  *puVar2 = unaff_R14;
  puVar2[-1] = unaff_R14;
  *puVar2 = (ulonglong)&LAB_16226998d;
  FUN_162db4090(~((~uVar6 | ~unaff_R15 | uVar7) + uVar6 + 1),FUN_162db4090,uVar10);
  return;
}



// FUNCTION 14db3952a FUN_14db3952a body=252 status=ok
// SIG undefined FUN_14db3952a(void)

/* WARNING: Removing unreachable block (ram,0x00014db396b7) */

undefined8 FUN_14db3952a(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  
  uStackX_8 = (ulonglong)(uint)uStackX_8;
  *(undefined8 *)(unaff_RBP + (uStackX_8 ^ 0x58b6c4cf)) = unaff_R13;
  FUN_15b76c797();
  FUN_164754c9f();
  uVar1 = FUN_161b2db7c();
  return uVar1;
}



// FUNCTION 14db39628 FUN_14db39628 body=471 status=ok
// SIG undefined FUN_14db39628(void)

/* WARNING: Removing unreachable block (ram,0x00014db396b7) */

undefined8 FUN_14db39628(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161b2db7c();
  return uVar1;
}



// FUNCTION 14db398af FUN_14db398af body=290 status=ok
// SIG undefined FUN_14db398af(void)

void FUN_14db398af(void)

{
  FUN_166767998(0xffffffffd76624b1);
  FUN_16111985a();
  return;
}



// FUNCTION 14db399d1 FUN_14db399d1 body=362 status=ok
// SIG undefined FUN_14db399d1(void)

/* WARNING: Removing unreachable block (ram,0x00014db39a7a) */
/* WARNING: Removing unreachable block (ram,0x00014db39a86) */
/* WARNING: Removing unreachable block (ram,0x00014db39a8b) */

undefined8 FUN_14db399d1(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_161326de7(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX);
  return uVar1;
}



// FUNCTION 14db39b3f FUN_14db39b3f body=104 status=ok
// SIG undefined FUN_14db39b3f(void)

void FUN_14db39b3f(int param_1)

{
  FUN_166115122(param_1,-1 - param_1);
  return;
}



// FUNCTION 14db39ba8 FUN_14db39ba8 body=27 status=ok
// SIG undefined FUN_14db39ba8(void)

void FUN_14db39ba8(void)

{
  return;
}



// FUNCTION 14db39c68 FUN_14db39c68 body=306 status=ok
// SIG undefined FUN_14db39c68(void)

void FUN_14db39c68(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 unaff_retaddr;
  
  lVar3 = -~param_2 - (~-(unaff_R12 - param_3) + 2U);
  FUN_1661f9b16();
  plVar1 = (longlong *)(&stack0x00000000 + unaff_RBP);
  *plVar1 = (longlong)plVar1;
  *plVar1 = *plVar1 + 8;
  uVar2 = (ulonglong)(&stack0x00000008 + unaff_RBP) & 0xfffffffffffffff0;
  _fxsave(uVar2 - 0x210);
  *(undefined8 *)(uVar2 - 0x218) = unaff_RBX;
  *(longlong *)(uVar2 - 0x220) = lVar3;
  *(undefined8 *)(uVar2 - 0x228) = unaff_retaddr;
  *(ulonglong *)(uVar2 - 0x230) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 1 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(uVar2 - 0x230) = 0x14db39d92;
  FUN_162e499f2();
  FUN_165e93f27();
  return;
}



// FUNCTION 14db39ec4 FUN_14db39ec4 body=159 status=ok
// SIG undefined FUN_14db39ec4(void)

void FUN_14db39ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_160f0c6b2(param_1,FUN_160f0c6b2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14db39f63 FUN_14db39f63 body=177 status=ok
// SIG undefined FUN_14db39f63(void)

void FUN_14db39f63(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0xfffffffff342cb28 + unaff_RBP) = unaff_RSI;
  puVar1 = (ulonglong *)(&stack0xfffffffff342cb30 + unaff_RBP);
  *(undefined4 *)puVar1 = 0xf3f0b34a;
  *(undefined4 *)(&stack0xfffffffff342cb34 + unaff_RBP) = 0xffffffff;
  *puVar1 = *(ulonglong *)(unaff_RDI + (*puVar1 ^ 0xc0f4cd2));
  uVar2 = *puVar1;
  *(undefined4 *)puVar1 = 0xb9f43388;
  *(undefined4 *)(&stack0xfffffffff342cb34 + unaff_RBP) = 0xffffffff;
  (*(code *)0x164f74141)(param_1,uVar2 ^ param_1);
  return;
}



// FUNCTION 14db3a1f6 FUN_14db3a1f6 body=922 status=ok
// SIG undefined FUN_14db3a1f6(void)

/* WARNING: Removing unreachable block (ram,0x00014db3a3c3) */
/* WARNING: Removing unreachable block (ram,0x00014db3a453) */
/* WARNING: Removing unreachable block (ram,0x000161c11ea7) */
/* WARNING: Removing unreachable block (ram,0x000161c11ead) */
/* WARNING: Removing unreachable block (ram,0x000161c11ef3) */
/* WARNING: Removing unreachable block (ram,0x000161c11ef7) */
/* WARNING: Removing unreachable block (ram,0x000161c11f35) */
/* WARNING: Removing unreachable block (ram,0x000161c11f40) */
/* WARNING: Removing unreachable block (ram,0x000161c11f46) */
/* WARNING: Removing unreachable block (ram,0x00016546656e) */
/* WARNING: Removing unreachable block (ram,0x00014db3a45e) */
/* WARNING: Removing unreachable block (ram,0x00014db3a464) */
/* WARNING: Removing unreachable block (ram,0x00014db3a4e5) */
/* WARNING: Removing unreachable block (ram,0x00014db3a4eb) */
/* WARNING: Removing unreachable block (ram,0x00014db3a50f) */
/* WARNING: Removing unreachable block (ram,0x00014db3a513) */
/* WARNING: Removing unreachable block (ram,0x000157526163) */
/* WARNING: Removing unreachable block (ram,0x0001566b1b0b) */
/* WARNING: Removing unreachable block (ram,0x0001566b1ba4) */
/* WARNING: Removing unreachable block (ram,0x0001566b1baa) */
/* WARNING: Removing unreachable block (ram,0x000161c11e1f) */
/* WARNING: Removing unreachable block (ram,0x0001626da450) */
/* WARNING: Removing unreachable block (ram,0x00014db3a3b8) */
/* WARNING: Removing unreachable block (ram,0x00014db3a29d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db3a1f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15688273a(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14db3a59b FUN_14db3a59b body=147 status=ok
// SIG undefined FUN_14db3a59b(void)

void FUN_14db3a59b(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_CF;
  
  uVar1 = (ulonglong)in_CF << 0x20 | param_1 & 0xffffffff;
  FUN_161d5e3b5((uint)(uVar1 >> 3) | (uint)(uVar1 << 0x1e),
                ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88),*(ulonglong *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_166cc4413();
  return;
}



// FUNCTION 14db3a630 FUN_14db3a630 body=168 status=ok
// SIG undefined FUN_14db3a630(void)

void FUN_14db3a630(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_166cc4413(param_1,param_2 & unaff_RBP);
  return;
}



// FUNCTION 14db3a8a8 FUN_14db3a8a8 body=26 status=ok
// SIG undefined FUN_14db3a8a8(void)

void FUN_14db3a8a8(void)

{
  return;
}



// FUNCTION 14db3aba4 FUN_14db3aba4 body=133 status=ok
// SIG undefined FUN_14db3aba4(void)

void FUN_14db3aba4(undefined8 param_1)

{
  undefined8 unaff_RBP;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = 0x14db3ac24;
  FUN_1574be12e(param_1);
  FUN_14db3ac2a();
  return;
}



// FUNCTION 14db3ac2a FUN_14db3ac2a body=135 status=ok
// SIG undefined FUN_14db3ac2a(void)

void FUN_14db3ac2a(undefined8 param_1,uint param_2)

{
  FUN_1653c43ad(param_1,-0x561c16fc - ~param_2);
  return;
}



// FUNCTION 14db3b11e FUN_14db3b11e body=150 status=ok
// SIG undefined FUN_14db3b11e(void)

void FUN_14db3b11e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  longlong unaff_R14;
  undefined8 uStackX_8;
  
  *(undefined8 *)(unaff_RDI + (unaff_R14 - ~param_1)) = uStackX_8;
  (*(code *)0x14da61414)(0x14da61414,param_2,param_3);
  return;
}



// FUNCTION 14db3b1b5 FUN_14db3b1b5 body=916 status=ok
// SIG undefined FUN_14db3b1b5(void)

/* WARNING: Removing unreachable block (ram,0x00014db3b240) */
/* WARNING: Removing unreachable block (ram,0x00014db3b24c) */
/* WARNING: Removing unreachable block (ram,0x00015b1fcb9b) */
/* WARNING: Removing unreachable block (ram,0x000160fa17c5) */
/* WARNING: Removing unreachable block (ram,0x00015b1fcb03) */
/* WARNING: Removing unreachable block (ram,0x00015b1fcb90) */
/* WARNING: Removing unreachable block (ram,0x00015b1fcb95) */
/* WARNING: Removing unreachable block (ram,0x00015749b129) */
/* WARNING: Removing unreachable block (ram,0x000160fa17cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3b1b5(void)

{
  FUN_15b1fcb03();
  return;
}



// FUNCTION 14db3b7c4 FUN_14db3b7c4 body=49 status=ok
// SIG undefined FUN_14db3b7c4(void)

void FUN_14db3b7c4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14ddceead(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                 (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  (*(code *)&LAB_156b83ac1)();
  return;
}



// FUNCTION 14db3ba88 FUN_14db3ba88 body=171 status=ok
// SIG undefined FUN_14db3ba88(void)

undefined8 FUN_14db3ba88(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db3bbd4 FUN_14db3bbd4 body=151 status=ok
// SIG undefined FUN_14db3bbd4(void)

void FUN_14db3bbd4(undefined1 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90);
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15;
  FUN_15b068e21(param_1,(uVar2 - (uVar1 | uVar2)) + uVar1 ^ 0xffffffffffffffff,
                *(undefined8 *)(unaff_R13 + -0x88),*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db3bc6b FUN_14db3bc6b body=334 status=ok
// SIG undefined FUN_14db3bc6b(void)

/* WARNING: Removing unreachable block (ram,0x00014db3bd12) */
/* WARNING: Removing unreachable block (ram,0x00014db3bd07) */

void FUN_14db3bc6b(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) & param_1;
  *(ulonglong *)(unaff_R13 + 8) = (unaff_RBP + param_1) - *(longlong *)(unaff_R13 + 8);
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(undefined8 *)(unaff_R13 + 8) = 0;
  *(longlong *)(unaff_R13 + 8) =
       *(longlong *)(unaff_R13 + 8) - (unaff_RBX & uVar1 ^ 0xffffffffffffffff);
  *(longlong *)(unaff_R13 + 8) = -*(longlong *)(unaff_R13 + 8);
  param_6 = param_6 ^ param_1;
  *(undefined8 *)(param_6 - 8) = param_4;
  *(undefined8 *)(param_6 - 0x18) = uStackX_18;
  *(undefined8 *)(param_6 - 0x10) = in_RAX;
  *(undefined8 *)(param_6 - 0x18) = in_RAX;
  *(undefined8 *)(param_6 - 0x20) = unaff_R15;
  *(undefined8 *)(param_6 - 0x28) = in_stack_00000010;
  *(undefined8 *)(param_6 - 0x30) = in_stack_00000010;
  *(code **)(param_6 - 0x28) = thunk_FUN_156d3ffee;
  FUN_14e1624b7(local_res20,param_2,unaff_retaddr,&DAT_14e16251d);
  return;
}



// FUNCTION 14db3bdc2 FUN_14db3bdc2 body=170 status=ok
// SIG undefined FUN_14db3bdc2(void)

undefined8 FUN_14db3bdc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_165b78739;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28) = param_2;
  *(undefined8 *)(local_res10 + -0x30) = uVar2;
  *(undefined8 *)(local_res10 + -0x38) = uVar2;
  *(undefined8 *)(local_res10 + -0x40) = uVar2;
  *(code **)(local_res10 + -0x30) = FUN_14db3be6c;
  *(undefined1 **)(local_res10 + -0x38) = &LAB_165b78701;
  return uVar1;
}



// FUNCTION 14db3be6c FUN_14db3be6c body=148 status=ok
// SIG undefined FUN_14db3be6c(void)

void FUN_14db3be6c(void)

{
  return;
}



// FUNCTION 14db3c225 FUN_14db3c225 body=140 status=ok
// SIG undefined FUN_14db3c225(void)

void FUN_14db3c225(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_18;
  
  FUN_165059e68(param_1,FUN_165059e68,param_3,uStackX_18);
  return;
}



// FUNCTION 14db3c353 FUN_14db3c353 body=148 status=ok
// SIG undefined FUN_14db3c353(void)

/* WARNING: Removing unreachable block (ram,0x00014db3c480) */
/* WARNING: Removing unreachable block (ram,0x00014db3c4eb) */
/* WARNING: Removing unreachable block (ram,0x00014db3c4ed) */
/* WARNING: Removing unreachable block (ram,0x00014db3c3e0) */
/* WARNING: Removing unreachable block (ram,0x00014db3c47a) */
/* WARNING: Removing unreachable block (ram,0x000161c8af1c) */

void FUN_14db3c353(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  LPCSTR unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined4 *)(local_res10 + -0x20) = 0;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *(longlong *)(local_res10 + -0x10) =
       -(*(longlong *)(local_res10 + -0x20) - *(longlong *)(local_res10 + -8));
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x165eeb247;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
                    /* WARNING: Could not recover jumptable at 0x000165eeb22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(unaff_retaddr);
  return;
}



// FUNCTION 14db3c3e0 FUN_14db3c3e0 body=384 status=ok
// SIG undefined FUN_14db3c3e0(void)

/* WARNING: Removing unreachable block (ram,0x00014db3c480) */
/* WARNING: Removing unreachable block (ram,0x00014db3c4eb) */
/* WARNING: Removing unreachable block (ram,0x00014db3c4ed) */

void FUN_14db3c3e0(void)

{
  return;
}



// FUNCTION 14db3c525 FUN_14db3c525 body=142 status=ok
// SIG undefined FUN_14db3c525(void)

void FUN_14db3c525(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RSI;
  *puVar1 = *puVar1 - 0x15b814917;
  *puVar1 = -*puVar1;
  (*(code *)0x15b8148ef)(param_1,param_2,uVar2,unaff_retaddr);
  return;
}



// FUNCTION 14db3c641 FUN_14db3c641 body=124 status=ok
// SIG undefined FUN_14db3c641(void)

void FUN_14db3c641(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  short *in_RAX;
  ushort unaff_BX;
  undefined8 unaff_RSI;
  short in_R11W;
  undefined8 unaff_R13;
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
  ulonglong uVar15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_20;
  
  *in_RAX = in_R11W - ~unaff_BX;
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
  (*pcVar1)(unaff_retaddr,param_2,param_3,param_4);
  *param_5 = unaff_R14;
  param_5[-1] = unaff_R14;
  param_5[-2] = (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
                (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
                (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 |
                (ulonglong)(bVar3 & 1) * 4 | (ulonglong)(bVar2 & 1) |
                (ulonglong)(bVar14 & 1) * 0x200000 | (ulonglong)(bVar13 & 1) * 0x100000 |
                (ulonglong)(bVar12 & 1) * 0x80000 | (ulonglong)(bVar11 & 1) * 0x40000;
  uVar15 = param_5[-2];
  param_5[-2] = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar15 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar15 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 |
                (ulonglong)((uVar15 & 1) != 0) | (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  uVar15 = param_5[-2];
  param_5[-2] = unaff_R13;
  param_5[-3] = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar15 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar15 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 |
                (ulonglong)((uVar15 & 1) != 0) | (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  param_5[-4] = unaff_RSI;
  *param_5 = 0x62e5b6;
  FUN_1573cc13a();
  return;
}



// FUNCTION 14db3c72e thunk_FUN_14db3c734 body=5 status=ok
// SIG undefined thunk_FUN_14db3c734(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db3c759) */

void thunk_FUN_14db3c734(void)

{
  return;
}



// FUNCTION 14db3c734 FUN_14db3c734 body=143 status=ok
// SIG undefined FUN_14db3c734(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db3c759) */

void FUN_14db3c734(void)

{
  return;
}



// FUNCTION 14db3c986 FUN_14db3c986 body=415 status=ok
// SIG undefined FUN_14db3c986(void)

/* WARNING: Removing unreachable block (ram,0x00015b984fb4) */
/* WARNING: Removing unreachable block (ram,0x00014db3ca24) */
/* WARNING: Removing unreachable block (ram,0x00014db3ca45) */
/* WARNING: Removing unreachable block (ram,0x00014db3ca7a) */

void FUN_14db3c986(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_164b36815(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                ((in_RAX ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                (-in_RAX - *(ulonglong *)(unaff_R12 + -0x80)) +
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX) * 2,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db3ca24 FUN_14db3ca24 body=165 status=ok
// SIG undefined FUN_14db3ca24(void)

void FUN_14db3ca24(undefined8 param_1)

{
  FUN_14e0c6754(param_1,FUN_14e0c6754,0xe79a3f9);
  return;
}



// FUNCTION 14db3cc4c FUN_14db3cc4c body=704 status=ok
// SIG undefined FUN_14db3cc4c(void)

/* WARNING: Instruction at (ram,0x0001623deae1) overlaps instruction at (ram,0x0001623deae0)
    */
/* WARNING: Removing unreachable block (ram,0x0001659c0be0) */
/* WARNING: Removing unreachable block (ram,0x0001659c0c67) */
/* WARNING: Removing unreachable block (ram,0x0001659c0c6c) */
/* WARNING: Removing unreachable block (ram,0x0001659c0c72) */
/* WARNING: Removing unreachable block (ram,0x0001623de9a5) */
/* WARNING: Removing unreachable block (ram,0x000161cedd54) */
/* WARNING: Removing unreachable block (ram,0x0001623dea98) */
/* WARNING: Removing unreachable block (ram,0x0001623dea9e) */
/* WARNING: Removing unreachable block (ram,0x0001623deaa3) */
/* WARNING: Removing unreachable block (ram,0x0001623deae1) */
/* WARNING: Removing unreachable block (ram,0x0001623deae0) */
/* WARNING: Removing unreachable block (ram,0x0001623deaeb) */
/* WARNING: Removing unreachable block (ram,0x0001623deb3e) */
/* WARNING: Removing unreachable block (ram,0x0001623deb44) */
/* WARNING: Removing unreachable block (ram,0x00016249095a) */
/* WARNING: Removing unreachable block (ram,0x00014db3cd79) */
/* WARNING: Removing unreachable block (ram,0x00014db3cce3) */

undefined8 FUN_14db3cc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
           (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15))) {
    uVar1 = FUN_1659c0b57();
    return uVar1;
  }
  uVar1 = FUN_156faee47(param_1,param_2,param_3,FUN_156faee47);
  return uVar1;
}



// FUNCTION 14db3ce8d FUN_14db3ce8d body=151 status=ok
// SIG undefined FUN_14db3ce8d(void)

void FUN_14db3ce8d(byte param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar4;
  byte in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
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
  bool bVar15;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar1 = ~((~local_res10 + 0x100) - (~local_res10 & 0x100));
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar11 = (uVar1 & 0x400) != 0;
  bVar10 = (uVar1 & 0x200) != 0;
  bVar9 = (uVar1 & 0x100) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar15 = (uStackX_12 & 0x20) != 0;
  bVar14 = (uStackX_12 & 4) != 0;
  LOCK();
  bVar5 = in_AL < DAT_14d7c4618;
  bVar12 = SBORROW1(in_AL,DAT_14d7c4618);
  cVar3 = in_AL - DAT_14d7c4618;
  bVar8 = cVar3 == '\0';
  bVar6 = (POPCOUNT(cVar3) & 1U) == 0;
  bVar4 = param_1;
  if (!bVar8) {
    bVar4 = DAT_14d7c4618;
  }
  DAT_14d7c4618 = bVar4;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)bVar13 * 0x4000 | (ulonglong)bVar12 * 0x800 | (ulonglong)bVar11 * 0x400 |
       (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)bVar8 * 0x40 | (ulonglong)bVar7 * 0x10 | (ulonglong)bVar6 * 4 | (ulonglong)bVar5 |
       (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x28) = param_3;
  *(ulonglong *)(local_res18 + -0x30) =
       (ulonglong)bVar13 * 0x4000 | (ulonglong)bVar12 * 0x800 | (ulonglong)bVar11 * 0x400 |
       (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)bVar8 * 0x40 | (ulonglong)bVar7 * 0x10 | (ulonglong)bVar6 * 4 | (ulonglong)bVar5 |
       (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
  bVar5 = (*(ulonglong *)(local_res18 + -0x30) & 1) != 0;
  *(code **)(local_res18 + -0x30) = FUN_14db3cf27;
  UNRECOVERED_JUMPTABLE = (code *)FUN_16229bec4();
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x28) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  uVar2 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = unaff_RBX;
  if (bVar5) {
    *(undefined8 *)(local_res18 + -0x30) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014db3cf79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db3cf27 FUN_14db3cf27 body=83 status=ok
// SIG undefined FUN_14db3cf27(void)

void FUN_14db3cf27(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db3cf79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 14db3cfba FUN_14db3cfba body=340 status=ok
// SIG undefined FUN_14db3cfba(void)

/* WARNING: Removing unreachable block (ram,0x00014db3d044) */
/* WARNING: Removing unreachable block (ram,0x00014db3d04a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3cfba(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  longlong alStackX_8 [4];
  undefined8 local_8;
  
  alStackX_8[2] =
       *(longlong *)(&stack0x68ef0636 + unaff_R13) + unaff_RBP + (alStackX_8[2] & unaff_RBP) * -2;
  local_8._4_4_ = (undefined4)((ulonglong)in_RAX >> 0x20);
  local_8 = CONCAT44(local_8._4_4_,0x19fc6a39);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_8._4_4_ = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_8._4_4_ = 0;
  alStackX_8[3] =
       *(longlong *)((longlong)alStackX_8 + (local_8 ^ 0x19fc6a21)) + unaff_RBP +
       (alStackX_8[3] & unaff_RBP) * -2;
  FUN_1629073ca(param_1,param_2);
  return;
}



// FUNCTION 14db3d111 FUN_14db3d111 body=5 status=ok
// SIG undefined FUN_14db3d111(void)

void FUN_14db3d111(void)

{
  return;
}



// FUNCTION 14db3d2fe FUN_14db3d2fe body=156 status=ok
// SIG undefined FUN_14db3d2fe(void)

/* WARNING: Removing unreachable block (ram,0x00014db3d39c) */
/* WARNING: Removing unreachable block (ram,0x000165389b07) */

void FUN_14db3d2fe(void)

{
  FUN_165389b07();
  return;
}



// FUNCTION 14db3d39c FUN_14db3d39c body=21 status=ok
// SIG undefined FUN_14db3d39c(void)

void FUN_14db3d39c(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14db3d3b1 FUN_14db3d3b1 body=108 status=ok
// SIG undefined FUN_14db3d3b1(void)

void FUN_14db3d3b1(void)

{
  longlong in_R9;
  
  if (in_R9 != 0x2a6dc) {
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14db3d44f FUN_14db3d44f body=129 status=ok
// SIG undefined FUN_14db3d44f(void)

void FUN_14db3d44f(ulonglong param_1)

{
  undefined8 local_res10;
  
  FUN_1627a69d8(param_1,~(~(~param_1 | local_res10) |
                         (~((param_1 - (~local_res10 | param_1)) + ~local_res10) + param_1) -
                         local_res10 ^ 0xffffffffffffffff));
  return;
}



// FUNCTION 14db3d4d1 FUN_14db3d4d1 body=179 status=ok
// SIG undefined FUN_14db3d4d1(void)

void FUN_14db3d4d1(void)

{
  return;
}



// FUNCTION 14db3d585 FUN_14db3d585 body=37 status=ok
// SIG undefined FUN_14db3d585(void)

void FUN_14db3d585(void)

{
  return;
}



// FUNCTION 14db3d6cd FUN_14db3d6cd body=138 status=ok
// SIG undefined FUN_14db3d6cd(void)

/* WARNING: Removing unreachable block (ram,0x00014db3d869) */
/* WARNING: Removing unreachable block (ram,0x00014db3d86f) */
/* WARNING: Removing unreachable block (ram,0x00014db3d916) */
/* WARNING: Removing unreachable block (ram,0x00014db3d91c) */
/* WARNING: Removing unreachable block (ram,0x000161b39727) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9c4) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9ca) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9cf) */
/* WARNING: Removing unreachable block (ram,0x000165848c94) */
/* WARNING: Removing unreachable block (ram,0x000165848d40) */
/* WARNING: Removing unreachable block (ram,0x000165848d46) */
/* WARNING: Removing unreachable block (ram,0x000161839a4d) */
/* WARNING: Removing unreachable block (ram,0x00014db3d753) */
/* WARNING: Removing unreachable block (ram,0x00014db3d759) */
/* WARNING: Removing unreachable block (ram,0x000156861989) */
/* WARNING: Removing unreachable block (ram,0x000161839a8e) */
/* WARNING: Removing unreachable block (ram,0x000161839a91) */
/* WARNING: Removing unreachable block (ram,0x00015651e4a8) */
/* WARNING: Removing unreachable block (ram,0x00015651e510) */

undefined8
FUN_14db3d6cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b1cd750(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  FUN_1627aae59();
  if (0xfffffffffffffffd < ~*(ulonglong *)((~(in_RAX & unaff_R15) & (in_RAX | unaff_R15)) - 0x50)) {
    uVar1 = FUN_1651ed290();
    return uVar1;
  }
  return 0xffffffffffffffa0;
}



// FUNCTION 14db3d759 FUN_14db3d759 body=713 status=ok
// SIG undefined FUN_14db3d759(void)

/* WARNING: Removing unreachable block (ram,0x00014db3d869) */
/* WARNING: Removing unreachable block (ram,0x00014db3d86f) */
/* WARNING: Removing unreachable block (ram,0x00014db3d916) */
/* WARNING: Removing unreachable block (ram,0x00014db3d91c) */
/* WARNING: Removing unreachable block (ram,0x000161b39727) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9c4) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9ca) */
/* WARNING: Removing unreachable block (ram,0x00014db3d9cf) */
/* WARNING: Removing unreachable block (ram,0x000165848c94) */
/* WARNING: Removing unreachable block (ram,0x000165848d40) */
/* WARNING: Removing unreachable block (ram,0x000165848d46) */
/* WARNING: Removing unreachable block (ram,0x000161839a4d) */
/* WARNING: Removing unreachable block (ram,0x000161839a8e) */
/* WARNING: Removing unreachable block (ram,0x000161839a91) */

ulonglong FUN_14db3d759(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong in_R11;
  longlong unaff_R13;
  undefined8 in_stack_00000010;
  ulonglong in_stack_00000020;
  
  *(ulonglong *)(in_R11 + 0x10) = (~param_1 | *(ulonglong *)(in_R11 + 0x10)) + param_1 + 1;
  FUN_1614fef36(param_1,FUN_1614fef36,in_stack_00000010,param_4,
                (~param_3 | ~in_stack_00000020) + param_3 + 1);
  return *(ulonglong *)(unaff_R13 + -0x38) ^ param_5 + param_1;
}



// FUNCTION 14db3da56 FUN_14db3da56 body=135 status=ok
// SIG undefined FUN_14db3da56(void)

void FUN_14db3da56(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 unaff_R14;
  
  FUN_165596a3a(param_1);
  if (param_4 == 0x122f4) {
    return;
  }
  if (param_4 == 0x122f5) {
    (*(code *)0x16177779e)();
    return;
  }
  if (param_4 != 0x1242a) {
    if (param_4 == 0x1242b) {
      (*(code *)0x15b3feab6)(unaff_R14);
      return;
    }
    if (param_4 != 0x1242c) {
      if (param_4 == 0x1242d) {
        (*(code *)0x166bca49e)(unaff_R14,param_2,0x166bca49e,0x14d7bd2ac);
        return;
      }
      if (param_4 != 0x12568) {
        (*(code *)0x166cedfe7)();
        return;
      }
    }
  }
  FUN_164846ef8();
  return;
}



// FUNCTION 14db3db70 FUN_14db3db70 body=118 status=ok
// SIG undefined FUN_14db3db70(void)

void FUN_14db3db70(undefined8 param_1)

{
  FUN_16556e197(param_1);
  return;
}



// FUNCTION 14db3dbf3 FUN_14db3dbf3 body=24 status=ok
// SIG undefined FUN_14db3dbf3(void)

void FUN_14db3dbf3(void)

{
  return;
}



// FUNCTION 14db3dc98 FUN_14db3dc98 body=168 status=ok
// SIG undefined FUN_14db3dc98(void)

/* WARNING: Removing unreachable block (ram,0x00014db3dd41) */

undefined8 FUN_14db3dc98(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = (in_RAX & unaff_R15 ^ 0xffffffffffffffff) & (in_RAX | unaff_R15);
  if (-1 < unaff_R13 + -0x38) {
    uVar1 = FUN_15af2e892(param_1,unaff_R15 + param_2,uVar2);
    return uVar1;
  }
  uVar1 = FUN_15af2e892(param_1,unaff_R15 + param_2,uVar2);
  return uVar1;
}



// FUNCTION 14db3dd41 FUN_14db3dd41 body=125 status=ok
// SIG undefined FUN_14db3dd41(void)

undefined8 FUN_14db3dd41(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db3ddc9 FUN_14db3ddc9 body=159 status=ok
// SIG undefined FUN_14db3ddc9(void)

void FUN_14db3ddc9(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RSI);
  uVar2 = 0xffffffffffffffff - unaff_R15;
  (*(code *)0x16103ea23)
            (~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15),
             (~((uVar1 - (uVar2 | uVar1)) + uVar2) + uVar1) - ~uVar2);
  return;
}



// FUNCTION 14db3dfb8 FUN_14db3dfb8 body=150 status=ok
// SIG undefined FUN_14db3dfb8(void)

void FUN_14db3dfb8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15aff64aa(param_1,8,FUN_15aff64aa,
                ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14db3e2b8 FUN_14db3e2b8 body=128 status=ok
// SIG undefined FUN_14db3e2b8(void)

void FUN_14db3e2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15af36ec2(FUN_15af36ec2,param_2,param_3);
  return;
}



// FUNCTION 14db3e3d7 FUN_14db3e3d7 body=151 status=ok
// SIG undefined FUN_14db3e3d7(void)

/* WARNING: Instruction at (ram,0x00014db3e463) overlaps instruction at (ram,0x00014db3e462)
    */

void FUN_14db3e3d7(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 unaff_RBX;
  undefined8 uVar3;
  ulonglong *puVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_18;
  undefined1 local_10 [16];
  
  local_18 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  bVar2 = (ulonglong)(in_TF & 1) == 0;
  bVar1 = 0;
  puVar4 = &local_18;
  if (bVar2) {
    bVar1 = POPCOUNT((ulonglong)local_10 & 0xff);
    puVar4 = (ulonglong *)local_10;
  }
  *puVar4 = unaff_RBX;
  *(undefined4 *)(puVar4 + -1) = 0x515b1328;
  *(undefined4 *)((longlong)puVar4 - 4) = 0;
  puVar4[-1] = (ulonglong)(in_NT & 1) * 0x4000 |
               (ulonglong)(bVar2 && SCARRY8((longlong)&local_18,8)) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(bVar2 && (longlong)local_10 < 0) * 0x80 |
               (ulonglong)(bVar2 && local_10 == (undefined1 *)0x0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((bVar1 & 1) == 0) * 4 |
               (ulonglong)(bVar2 && &DAT_fffffffffffffff7 < &local_18) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar4[-1] = puVar4[-1] | 1;
  if ((puVar4[-1] & 1) == 0) {
    uVar3 = 0x4e1157cd;
  }
  else {
    uVar3 = 0x14e1157cd;
  }
  puVar4[-1] = uVar3;
  return;
}



// FUNCTION 14db3e6e0 FUN_14db3e6e0 body=147 status=ok
// SIG undefined FUN_14db3e6e0(void)

/* WARNING: Instruction at (ram,0x00014db3e75f) overlaps instruction at (ram,0x00014db3e75e)
    */

void FUN_14db3e6e0(void)

{
  undefined1 in_AL;
  
  DAT_57fe4103e23d8b48 = in_AL;
  return;
}



// FUNCTION 14db3e774 FUN_14db3e774 body=222 status=ok
// SIG undefined FUN_14db3e774(void)

void FUN_14db3e774(void)

{
  FUN_16255b361();
  return;
}



// FUNCTION 14db3e8a2 FUN_14db3e8a2 body=294 status=ok
// SIG undefined FUN_14db3e8a2(void)

/* WARNING: Removing unreachable block (ram,0x00014db3e939) */
/* WARNING: Removing unreachable block (ram,0x00014db3e93f) */
/* WARNING: Removing unreachable block (ram,0x00015b5e6957) */
/* WARNING: Removing unreachable block (ram,0x00015b5e696e) */
/* WARNING: Removing unreachable block (ram,0x00015b5e6971) */

void FUN_14db3e8a2(void)

{
  FUN_15b5e6957();
  return;
}



// FUNCTION 14db3eb3d FUN_14db3eb3d body=34 status=ok
// SIG undefined FUN_14db3eb3d(void)

void FUN_14db3eb3d(void)

{
  return;
}



// FUNCTION 14db3ed06 FUN_14db3ed06 body=310 status=ok
// SIG undefined FUN_14db3ed06(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3ed06(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_R10D;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  int unaff_retaddr;
  uint in_stack_00000008;
  
  uVar3 = ~(param_2 & unaff_retaddr + 0x79264057U) & (param_2 | unaff_retaddr + 0x79264057U);
  uVar3 = (~(uVar3 & (uint)param_1) + (uint)param_1) - ~uVar3;
  uVar4 = ~(uVar3 & in_R10D) & (uVar3 | in_R10D);
  uVar3 = -(~in_stack_00000008 + 2);
  uVar5 = ~uVar4;
  uVar2 = uVar3 - uVar5;
  if (uVar5 <= uVar3) {
    FUN_15b90312f();
    return;
  }
  uVar1 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SBORROW4(uVar3,uVar5) * 0x800 |
          (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          (ushort)((int)uVar2 < 0) * 0x80 | (ushort)(uVar2 == 0) * 0x40 | (ushort)(in_AF & 1) * 0x10
          | (ushort)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4;
  if ((ushort)((0x41 - (uVar1 | 0x41)) + (uVar1 | 1)) == 0) {
    return;
  }
  FUN_15b90312f(param_1,uVar4,param_3,param_4);
  return;
}



// FUNCTION 14db3ee54 FUN_14db3ee54 body=12 status=ok
// SIG undefined FUN_14db3ee54(void)

void FUN_14db3ee54(void)

{
  return;
}



// FUNCTION 14db3ef88 FUN_14db3ef88 body=269 status=ok
// SIG undefined FUN_14db3ef88(void)

/* WARNING: Removing unreachable block (ram,0x00014db3f04e) */
/* WARNING: Removing unreachable block (ram,0x00014db3f01b) */

void FUN_14db3ef88(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [2];
  ushort local_res18;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)((longlong)local_res8 + unaff_R12);
  *(longlong *)((longlong)local_res8 + unaff_R12) = -*(longlong *)((longlong)local_res8 + unaff_R12)
  ;
  *(longlong *)((longlong)local_res8 + unaff_R12) =
       *(longlong *)((longlong)local_res8 + unaff_R12) + -1;
  *(ulonglong *)((longlong)local_res8 + unaff_R12) =
       *(ulonglong *)((longlong)local_res8 + unaff_R12) | unaff_R15;
  *(ulonglong *)((longlong)local_res8 + unaff_R12) =
       ~((~unaff_R15 | uVar1) & *(ulonglong *)((longlong)local_res8 + unaff_R12));
  local_res20 = local_res20 ^ unaff_R15;
  local_res18 = local_res18 & 0xfeff;
  *(undefined8 *)(local_res20 - 8) = unaff_retaddr;
  *(undefined8 *)(local_res20 - 0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 - 0x18) = param_2;
  uVar2 = ~*(uint *)(local_res20 + 0x18) & (uint)unaff_retaddr;
  if (~(uVar2 & *(uint *)(local_res20 + 0x18)) + *(int *)(local_res20 + 0x18) < ~uVar2) {
    FUN_1649b956a();
    return;
  }
  FUN_1649b956a();
  return;
}



// FUNCTION 14db3f096 FUN_14db3f096 body=123 status=ok
// SIG undefined FUN_14db3f096(void)

void FUN_14db3f096(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  longlong alStackX_8 [4];
  
  alStackX_8[3] = unaff_R12 - *(longlong *)((longlong)alStackX_8 + param_1);
  (*(code *)0x16179b1cb)(0x16179b1cb,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db3f113 FUN_14db3f113 body=142 status=ok
// SIG undefined FUN_14db3f113(void)

void FUN_14db3f113(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_14ddbb33e(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14db3f233 FUN_14db3f233 body=36 status=ok
// SIG undefined FUN_14db3f233(void)

undefined8 FUN_14db3f233(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db3f364 FUN_14db3f364 body=43 status=ok
// SIG undefined FUN_14db3f364(void)

void FUN_14db3f364(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x6fc6c87b + unaff_retaddr) = param_2;
  return;
}



// FUNCTION 14db3f4a7 FUN_14db3f4a7 body=155 status=ok
// SIG undefined FUN_14db3f4a7(void)

void FUN_14db3f4a7(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_165403740(param_1,unaff_RSI + unaff_RDI + (param_2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db3f5d1 FUN_14db3f5d1 body=188 status=ok
// SIG undefined FUN_14db3f5d1(void)

undefined8 FUN_14db3f5d1(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14db3f691 FUN_14db3f691 body=165 status=ok
// SIG undefined FUN_14db3f691(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc49c9) */
/* WARNING: Removing unreachable block (ram,0x00014db3f73d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3f691(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (((~in_RAX | *(ulonglong *)(unaff_R12 + -0x28)) & (~*(ulonglong *)(unaff_R12 + -0x28) | in_RAX)
      ) != 0xffffffffffffffff) {
    FUN_14ddc4923();
    return;
  }
  if (in_RAX != 0xffffffffffffffff) {
    FUN_165330ebb();
    return;
  }
  FUN_15af8ab0e(FUN_15af8ab0e,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14db3f73d FUN_14db3f73d body=366 status=ok
// SIG undefined FUN_14db3f73d(void)

void FUN_14db3f73d(void)

{
  FUN_160ef1ce0();
  FUN_1574859ce();
  return;
}



// FUNCTION 14db3f8b6 FUN_14db3f8b6 body=296 status=ok
// SIG undefined FUN_14db3f8b6(void)

/* WARNING: Removing unreachable block (ram,0x00014db3f947) */
/* WARNING: Removing unreachable block (ram,0x00014db3f953) */
/* WARNING: Removing unreachable block (ram,0x00014db3f94e) */
/* WARNING: Removing unreachable block (ram,0x00014db3f98d) */
/* WARNING: Removing unreachable block (ram,0x00014db3f992) */

undefined8 FUN_14db3f8b6(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x90)) {
    uVar1 = FUN_160b4cafc();
    return uVar1;
  }
  uVar1 = FUN_160b4cafc();
  return uVar1;
}



// FUNCTION 14db3f9df FUN_14db3f9df body=140 status=ok
// SIG undefined FUN_14db3f9df(void)

void FUN_14db3f9df(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  
  FUN_1569a3f1f(*(undefined8 *)(unaff_R13 + param_2 + (unaff_RBP ^ 0x1ab6d2a9)),FUN_1569a3f1f);
  return;
}



// FUNCTION 14db3fb00 FUN_14db3fb00 body=157 status=ok
// SIG undefined FUN_14db3fb00(void)

ulonglong FUN_14db3fb00(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~(*(ulonglong *)(unaff_RDI + -0x80) & param_1 |
          (*(ulonglong *)(unaff_RDI + -0x80) | param_1) ^ 0xffffffffffffffff);
}



// FUNCTION 14db3fc3c FUN_14db3fc3c body=162 status=ok
// SIG undefined FUN_14db3fc3c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016638be26) */
/* WARNING: Removing unreachable block (ram,0x00014d7c41fc) */
/* WARNING: Removing unreachable block (ram,0x00014d7c427b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c41fe) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4206) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4208) */
/* WARNING: Removing unreachable block (ram,0x00014db3fcdf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db3fc3c(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  uVar2 = ~uVar1 | ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1);
  lVar3 = uVar2 + uVar1 + 1;
  if (CARRY8(uVar2,uVar1)) {
    FUN_16638be13();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) ^ param_1;
  if (*(longlong *)(unaff_RDI + -0x28) == 0) {
    FUN_1617d449c(param_1,0xffffffffffffffff,uVar1,lVar3);
    return;
  }
  FUN_1617d449c(param_1,*(longlong *)(unaff_RDI + -0x28) + -1,uVar1,lVar3);
  return;
}



// FUNCTION 14db3fcdf FUN_14db3fcdf body=201 status=ok
// SIG undefined FUN_14db3fcdf(void)

void FUN_14db3fcdf(void)

{
  return;
}



// FUNCTION 14db3ff64 FUN_14db3ff64 body=161 status=ok
// SIG undefined FUN_14db3ff64(void)

/* WARNING: Removing unreachable block (ram,0x00014df9151b) */
/* WARNING: Removing unreachable block (ram,0x00014df91521) */
/* WARNING: Removing unreachable block (ram,0x00014df91526) */
/* WARNING: Removing unreachable block (ram,0x00014df915cb) */
/* WARNING: Removing unreachable block (ram,0x000162d23a8b) */
/* WARNING: Removing unreachable block (ram,0x00014df91486) */
/* WARNING: Removing unreachable block (ram,0x00014df91516) */
/* WARNING: Removing unreachable block (ram,0x000156fabd68) */
/* WARNING: Removing unreachable block (ram,0x000156fabd6e) */
/* WARNING: Removing unreachable block (ram,0x00014df915d0) */
/* WARNING: Removing unreachable block (ram,0x00014df915dc) */
/* WARNING: Removing unreachable block (ram,0x00014df91671) */
/* WARNING: Removing unreachable block (ram,0x00014df9167d) */
/* WARNING: Removing unreachable block (ram,0x000156fabce5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbf916) */
/* WARNING: Removing unreachable block (ram,0x000156797e88) */
/* WARNING: Removing unreachable block (ram,0x000162d23a39) */
/* WARNING: Removing unreachable block (ram,0x000162d23a91) */
/* WARNING: Removing unreachable block (ram,0x000162d239f4) */
/* WARNING: Removing unreachable block (ram,0x000162d239fa) */
/* WARNING: Removing unreachable block (ram,0x00014db40005) */

undefined8 FUN_14db3ff64(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x50) < 0) {
    lVar2 = *(ulonglong *)(unaff_R13 + -0xa0) + unaff_R15 +
            (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) * -2;
    FUN_162a2bceb(param_1 & unaff_RBP,*(longlong *)(unaff_R13 + -0x98) + unaff_R15,param_3,param_4);
    *(ulonglong *)(lVar2 + 0x10) = (~param_3 | *(ulonglong *)(lVar2 + 0x10)) + param_3 + 1;
    FUN_166c2d7ee();
    uVar1 = thunk_FUN_15b642ca5();
    return uVar1;
  }
  uVar1 = FUN_162d23955();
  return uVar1;
}



// FUNCTION 14db40005 FUN_14db40005 body=34 status=ok
// SIG undefined FUN_14db40005(void)

undefined8 FUN_14db40005(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db4032b FUN_14db4032b body=14 status=ok
// SIG undefined FUN_14db4032b(void)

void FUN_14db4032b(void)

{
  return;
}



// FUNCTION 14db403bc FUN_14db403bc body=120 status=ok
// SIG undefined FUN_14db403bc(void)

void FUN_14db403bc(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0xffffffffc5b39527;
  FUN_1623531d0(0xffffffffc5b39527,param_2,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                ~(~*(ulonglong *)(unaff_R13 + -0x88) & ~unaff_R15),
                unaff_RBP + param_3 + ((~unaff_R15 | param_4) + unaff_R15 + 1) * -2);
  thunk_FUN_161aa1ef8(uVar1);
  return;
}



// FUNCTION 14db40437 FUN_14db40437 body=136 status=ok
// SIG undefined FUN_14db40437(void)

void FUN_14db40437(undefined8 param_1)

{
  thunk_FUN_161aa1ef8(param_1);
  return;
}



// FUNCTION 14db404c0 FUN_14db404c0 body=118 status=ok
// SIG undefined FUN_14db404c0(void)

void FUN_14db404c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1566f37bc)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db40537 FUN_14db40537 body=331 status=ok
// SIG undefined FUN_14db40537(void)

/* WARNING: Removing unreachable block (ram,0x00014db405d9) */
/* WARNING: Removing unreachable block (ram,0x00014db405df) */

undefined8 FUN_14db40537(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_161b7dd26(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                        *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar1;
}



// FUNCTION 14db405f3 FUN_14db405f3 body=175 status=ok
// SIG undefined FUN_14db405f3(void)

void FUN_14db405f3(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong in_R10;
  longlong lVar2;
  undefined8 in_R11;
  longlong local_res8 [2];
  ushort local_res18;
  
  lVar2 = in_R10 - *(longlong *)((longlong)local_res8 + param_1);
  local_res18 = local_res18 & 0xfeff;
  *(undefined8 *)(lVar2 + -8) = unaff_RBX;
  *(longlong *)(lVar2 + -0x10) = param_4;
  plVar1 = (longlong *)(lVar2 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_4;
  *(undefined8 *)(lVar2 + -0x20) = in_R11;
  FUN_16592e556(local_res8[1],param_2,param_3,*(undefined8 *)(lVar2 + -8));
  return;
}



// FUNCTION 14db406a4 thunk_FUN_14db406aa body=5 status=ok
// SIG undefined thunk_FUN_14db406aa(void)

/* WARNING: Instruction at (ram,0x00014db4070d) overlaps instruction at (ram,0x00014db4070c)
    */
/* WARNING: Removing unreachable block (ram,0x00014db4070c) */

void thunk_FUN_14db406aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 unaff_retaddr;
  
  FUN_165ddffb6(unaff_retaddr,param_2,param_3,param_4);
  FUN_14db40722();
  return;
}



// FUNCTION 14db406aa FUN_14db406aa body=119 status=ok
// SIG undefined FUN_14db406aa(void)

/* WARNING: Instruction at (ram,0x00014db4070d) overlaps instruction at (ram,0x00014db4070c)
    */
/* WARNING: Removing unreachable block (ram,0x00014db4070c) */

void FUN_14db406aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_165ddffb6(unaff_retaddr,param_2,param_3,param_4);
  FUN_14db40722();
  return;
}



// FUNCTION 14db40722 FUN_14db40722 body=145 status=ok
// SIG undefined FUN_14db40722(void)

void FUN_14db40722(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_1612f5dcb(param_1,~*(ulonglong *)(unaff_RDI + -0x28));
  return;
}



// FUNCTION 14db407b4 FUN_14db407b4 body=138 status=ok
// SIG undefined FUN_14db407b4(void)

void FUN_14db407b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  FUN_1570be981(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14db4083e FUN_14db4083e body=59 status=ok
// SIG undefined FUN_14db4083e(void)

void FUN_14db4083e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27(param_1,param_2,param_3,&DAT_14d7c20b8);
    return;
  }
  return;
}



// FUNCTION 14db40960 FUN_14db40960 body=183 status=ok
// SIG undefined FUN_14db40960(void)

void FUN_14db40960(void)

{
  return;
}



// FUNCTION 14db40a18 FUN_14db40a18 body=179 status=ok
// SIG undefined FUN_14db40a18(void)

undefined8 FUN_14db40a18(undefined8 param_1)

{
  undefined8 in_RAX;
  ushort *unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R14;
  longlong in_stack_00000028;
  
  *unaff_RBP = (-0x101 - (*unaff_RBP | 0xfeff)) + *unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x20) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x28) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x30) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x38) = in_RAX;
  *(code **)(in_stack_00000028 + -0x28) = FUN_14db40acb;
  *(undefined8 *)(in_stack_00000028 + -0x30) = 0x1661be049;
  return *(undefined8 *)(in_stack_00000028 + -0x38);
}



// FUNCTION 14db40acb FUN_14db40acb body=266 status=ok
// SIG undefined FUN_14db40acb(void)

/* WARNING: Instruction at (ram,0x0001663cdfa3) overlaps instruction at (ram,0x0001663cdfa2)
    */
/* WARNING: Removing unreachable block (ram,0x00015b2c9703) */
/* WARNING: Removing unreachable block (ram,0x000161170f96) */
/* WARNING: Removing unreachable block (ram,0x000161170fa2) */
/* WARNING: Removing unreachable block (ram,0x00016117103f) */
/* WARNING: Removing unreachable block (ram,0x000161171044) */
/* WARNING: Removing unreachable block (ram,0x00016117104a) */
/* WARNING: Removing unreachable block (ram,0x0001655a8cee) */
/* WARNING: Removing unreachable block (ram,0x000161e40745) */
/* WARNING: Removing unreachable block (ram,0x000161e40787) */
/* WARNING: Removing unreachable block (ram,0x000161e4079f) */
/* WARNING: Removing unreachable block (ram,0x000161170e8e) */
/* WARNING: Removing unreachable block (ram,0x000161170e99) */
/* WARNING: Removing unreachable block (ram,0x000161170f37) */
/* WARNING: Removing unreachable block (ram,0x000161170f3c) */
/* WARNING: Removing unreachable block (ram,0x000161170f42) */
/* WARNING: Removing unreachable block (ram,0x000161170f47) */
/* WARNING: Removing unreachable block (ram,0x00015686b846) */
/* WARNING: Removing unreachable block (ram,0x00015686b8b6) */
/* WARNING: Removing unreachable block (ram,0x000156a532c7) */
/* WARNING: Removing unreachable block (ram,0x000156a53352) */
/* WARNING: Removing unreachable block (ram,0x000156a53357) */
/* WARNING: Removing unreachable block (ram,0x000156a5335d) */
/* WARNING: Removing unreachable block (ram,0x000156a53362) */
/* WARNING: Removing unreachable block (ram,0x00015686b8bc) */
/* WARNING: Removing unreachable block (ram,0x00015686b955) */
/* WARNING: Removing unreachable block (ram,0x00015686b95b) */
/* WARNING: Removing unreachable block (ram,0x00015686b960) */
/* WARNING: Removing unreachable block (ram,0x00015686b9e2) */
/* WARNING: Removing unreachable block (ram,0x00015686b9ed) */
/* WARNING: Removing unreachable block (ram,0x00015686b9e8) */
/* WARNING: Removing unreachable block (ram,0x00015686b9dd) */
/* WARNING: Removing unreachable block (ram,0x0001656baec4) */
/* WARNING: Removing unreachable block (ram,0x000162de604b) */
/* WARNING: Removing unreachable block (ram,0x00014db40b5f) */
/* WARNING: Removing unreachable block (ram,0x00014db40b65) */
/* WARNING: Removing unreachable block (ram,0x000161170e0a) */
/* WARNING: Removing unreachable block (ram,0x000161170e7d) */
/* WARNING: Removing unreachable block (ram,0x000162de628a) */
/* WARNING: Removing unreachable block (ram,0x000162de6296) */
/* WARNING: Removing unreachable block (ram,0x000162de629c) */
/* WARNING: Removing unreachable block (ram,0x000162de60cf) */
/* WARNING: Removing unreachable block (ram,0x000162de60d5) */
/* WARNING: Removing unreachable block (ram,0x00015b2c96ee) */
/* WARNING: Removing unreachable block (ram,0x00015b2c9706) */
/* WARNING: Removing unreachable block (ram,0x000162de617c) */
/* WARNING: Removing unreachable block (ram,0x000162de6186) */
/* WARNING: Removing unreachable block (ram,0x000162de61e1) */
/* WARNING: Removing unreachable block (ram,0x0001653501c7) */
/* WARNING: Removing unreachable block (ram,0x000162de61e7) */
/* WARNING: Removing unreachable block (ram,0x0001663cdedc) */
/* WARNING: Removing unreachable block (ram,0x0001663cdf33) */
/* WARNING: Removing unreachable block (ram,0x0001663cdf2c) */
/* WARNING: Removing unreachable block (ram,0x0001663cdf39) */
/* WARNING: Removing unreachable block (ram,0x0001663cdfa3) */
/* WARNING: Removing unreachable block (ram,0x0001663cdfa2) */
/* WARNING: Removing unreachable block (ram,0x0001663cdfb3) */
/* WARNING: Removing unreachable block (ram,0x0001655a8f65) */
/* WARNING: Removing unreachable block (ram,0x0001655a8f70) */
/* WARNING: Removing unreachable block (ram,0x0001655a8f6b) */
/* WARNING: Removing unreachable block (ram,0x000161170e94) */
/* WARNING: Removing unreachable block (ram,0x000164911c82) */
/* WARNING: Removing unreachable block (ram,0x000164911c8d) */
/* WARNING: Removing unreachable block (ram,0x000164911c88) */
/* WARNING: Removing unreachable block (ram,0x000166aabaab) */
/* WARNING: Removing unreachable block (ram,0x00014db40c58) */
/* WARNING: Removing unreachable block (ram,0x00014db40c64) */
/* WARNING: Removing unreachable block (ram,0x00014db40ce8) */
/* WARNING: Removing unreachable block (ram,0x00014db40cee) */
/* WARNING: Removing unreachable block (ram,0x0001649385a4) */
/* WARNING: Removing unreachable block (ram,0x0001649385ac) */
/* WARNING: Removing unreachable block (ram,0x0001649385cf) */
/* WARNING: Removing unreachable block (ram,0x00014db40bc6) */
/* WARNING: Removing unreachable block (ram,0x00014db40bcc) */
/* WARNING: Removing unreachable block (ram,0x00014db40bd7) */
/* WARNING: Removing unreachable block (ram,0x000164911b79) */
/* WARNING: Removing unreachable block (ram,0x000164911bf2) */
/* WARNING: Removing unreachable block (ram,0x000164911bf7) */
/* WARNING: Removing unreachable block (ram,0x000164911bfd) */
/* WARNING: Removing unreachable block (ram,0x000166aaba08) */
/* WARNING: Removing unreachable block (ram,0x00015b45ce4b) */
/* WARNING: Removing unreachable block (ram,0x000166aabaa0) */
/* WARNING: Removing unreachable block (ram,0x000166aabaa6) */
/* WARNING: Removing unreachable block (ram,0x00015b4d283b) */
/* WARNING: Removing unreachable block (ram,0x00015b4d28c5) */
/* WARNING: Removing unreachable block (ram,0x00015b4d28ca) */
/* WARNING: Removing unreachable block (ram,0x00015b4d28d0) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4ec1) */
/* WARNING: Removing unreachable block (ram,0x00015b4a3434) */

undefined8 FUN_14db40acb(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b4a3434();
  return uVar1;
}



// FUNCTION 14db40bd7 FUN_14db40bd7 body=879 status=ok
// SIG undefined FUN_14db40bd7(void)

/* WARNING: Removing unreachable block (ram,0x000166aabaab) */
/* WARNING: Removing unreachable block (ram,0x000164911c88) */
/* WARNING: Removing unreachable block (ram,0x000164911c82) */
/* WARNING: Removing unreachable block (ram,0x000164911c8d) */
/* WARNING: Removing unreachable block (ram,0x00015b45ce4b) */
/* WARNING: Removing unreachable block (ram,0x00014db40c58) */
/* WARNING: Removing unreachable block (ram,0x00014db40c64) */
/* WARNING: Removing unreachable block (ram,0x00014db40ce8) */
/* WARNING: Removing unreachable block (ram,0x00014db40cee) */
/* WARNING: Removing unreachable block (ram,0x0001649385a4) */
/* WARNING: Removing unreachable block (ram,0x0001649385ac) */
/* WARNING: Removing unreachable block (ram,0x0001649385cf) */
/* WARNING: Removing unreachable block (ram,0x00015b4d28d0) */
/* WARNING: Removing unreachable block (ram,0x000164911bfd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db40bd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,ulonglong param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 unaff_R13;
  longlong lVar5;
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
  ulonglong in_stack_00000008;
  ulonglong local_res20;
  
  uVar4 = local_res20 + in_stack_00000008;
  if ((longlong)uVar4 < 0) {
    uVar2 = FUN_15b4d283b();
    return uVar2;
  }
  lVar5 = uVar4 + (local_res20 & in_stack_00000008) * -2;
  if (uVar4 < (local_res20 & in_stack_00000008) * 2) {
    param_5 = param_5 ^ in_stack_00000008;
    puVar3 = (undefined8 *)
             ~((in_stack_00000008 ^ 0xffffffffffffffff | param_6) & (~param_6 | in_stack_00000008));
    bVar14 = (param_5 & 0x4000) != 0;
    bVar13 = (param_5 & 0x800) != 0;
    bVar12 = (param_5 & 0x200) != 0;
    bVar11 = 0;
    bVar10 = (param_5 & 0x80) != 0;
    bVar9 = (param_5 & 0x40) != 0;
    bVar8 = (param_5 & 0x10) != 0;
    bVar7 = (param_5 & 4) != 0;
    bVar6 = (param_5 & 1) != 0;
    bVar18 = (param_5 & 0x200000) != 0;
    bVar15 = (param_5 & 0x40000) != 0;
    bVar17 = 0;
    bVar16 = 0;
    pcVar1 = (code *)swi(0x2e);
    uVar2 = (*pcVar1)(lVar5,param_2,param_3,param_4);
    *puVar3 = unaff_R13;
    puVar3[-1] = unaff_R13;
    puVar3[-2] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
                 (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
                 (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
                 (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
                 (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
                 (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
                 (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
    uVar4 = puVar3[-2];
    puVar3[-2] = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar4 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
                 (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    puVar3[-3] = unaff_RBX;
    uVar4 = puVar3[-2];
    puVar3[-2] = lVar5;
    puVar3[-3] = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar4 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
                 (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    puVar3[-4] = &LAB_15b5ff60b;
    return uVar2;
  }
  uVar2 = FUN_14d9a4ec1();
  return uVar2;
}



// FUNCTION 14db40ebf FUN_14db40ebf body=175 status=ok
// SIG undefined FUN_14db40ebf(void)

/* WARNING: Removing unreachable block (ram,0x00014db40f6e) */
/* WARNING: Removing unreachable block (ram,0x00014db40fe1) */
/* WARNING: Removing unreachable block (ram,0x00014db40fe5) */

void FUN_14db40ebf(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  *(ulonglong *)(unaff_R12 + 8) = ~param_1 | ~*(ulonglong *)(unaff_R12 + 8);
  param_5 = param_5 ^ unaff_retaddr;
  if (&stack0x00000000 == &DAT_ffffffffffffffe8) {
    FUN_156481033();
    return;
  }
  *(undefined8 *)(param_5 - 8) = unaff_R13;
  *(undefined8 *)(param_5 - 0x10) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x18) = unaff_R14;
  *(undefined8 *)(param_5 - 0x18) = unaff_R13;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = local_res18;
  *(undefined8 *)(param_5 - 8) = 0;
  *(longlong *)(param_5 - 8) = (longlong)(&LAB_157524d9f + *(longlong *)(param_5 - 8));
  lVar1 = *(longlong *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = in_R11;
  *(undefined8 *)(param_5 - 0x18) = in_R11;
  *(undefined8 *)(param_5 - 0x10) = 0;
  *(ulonglong *)(param_5 - 0x10) = *(ulonglong *)(param_5 - 0x10) ^ 0x14d7c16c6;
  *(undefined8 *)(param_5 - 0x20) = 0x1564810d4;
  FUN_157524d7c(in_stack_00000010,param_2,param_3);
  *(undefined4 *)(param_5 - 0x20) = 0x6721c4c4;
  *(undefined4 *)(param_5 - 0x18) = *(undefined4 *)(param_5 - 0x20);
  *(undefined4 *)(param_5 - 0x14) = 0x6ad83432;
  *(int *)(param_5 - 0x14) = *(int *)(param_5 - 0x14) + 0x75564830;
  *(undefined8 *)(param_5 - 0x18) = *(undefined8 *)(lVar1 + -0x58);
  *(undefined **)(param_5 - 0x18) = &DAT_156481169;
  return;
}



// FUNCTION 14db40f6e FUN_14db40f6e body=155 status=ok
// SIG undefined FUN_14db40f6e(void)

/* WARNING: Removing unreachable block (ram,0x00014db40fe1) */

void FUN_14db40f6e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 ^ param_1) - 0x10) = unaff_RBX;
  *(undefined8 *)((local_res20 ^ param_1) - 0x18) = unaff_RBX;
  FUN_166753364(in_stack_00000010,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14db411d0 FUN_14db411d0 body=116 status=ok
// SIG undefined FUN_14db411d0(void)

/* WARNING: Removing unreachable block (ram,0x00014db41246) */

void FUN_14db411d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           ((~(~*(ulonglong *)(in_RAX + 0x7ecf) & unaff_R15) + unaff_R15) -
           *(ulonglong *)(in_RAX + 0x7ecf))) {
    FUN_1619c7a8c();
    return;
  }
  (*(code *)0x1621d0b79)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -8),
             *(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14db41246 FUN_14db41246 body=137 status=ok
// SIG undefined FUN_14db41246(void)

void FUN_14db41246(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_166181947(param_1,param_2,in_stack_00000008,&ExceptionList);
  return;
}



// FUNCTION 14db412d0 FUN_14db412d0 body=145 status=ok
// SIG undefined FUN_14db412d0(void)

void FUN_14db412d0(void)

{
  undefined8 unaff_retaddr;
  
  FUN_160e81bf3(0x4aba3883,FUN_160e81bf3,unaff_retaddr);
  return;
}



// FUNCTION 14db41411 FUN_14db41411 body=158 status=ok
// SIG undefined FUN_14db41411(void)

undefined8 FUN_14db41411(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  bool in_ZF;
  undefined4 local_res10;
  
  if (in_ZF) {
    return in_RAX;
  }
  if (unaff_R13 != 0x31545) {
    return in_RAX;
  }
  if (local_res10 < 0) {
    return in_RAX;
  }
  uVar1 = FUN_162dc6f43();
  return uVar1;
}



// FUNCTION 14db41550 FUN_14db41550 body=134 status=ok
// SIG undefined FUN_14db41550(void)

/* WARNING: Removing unreachable block (ram,0x00014db41656) */
/* WARNING: Removing unreachable block (ram,0x00014db41661) */
/* WARNING: Removing unreachable block (ram,0x00014db4165c) */

void FUN_14db41550(void)

{
  FUN_1624261d0();
  return;
}



// FUNCTION 14db415d6 FUN_14db415d6 body=266 status=ok
// SIG undefined FUN_14db415d6(void)

/* WARNING: Removing unreachable block (ram,0x00014db41656) */
/* WARNING: Removing unreachable block (ram,0x00014db41661) */
/* WARNING: Removing unreachable block (ram,0x00014db4165c) */

void FUN_14db415d6(void)

{
  return;
}



// FUNCTION 14db416e1 FUN_14db416e1 body=554 status=ok
// SIG undefined FUN_14db416e1(void)

/* WARNING: Instruction at (ram,0x00014db4189d) overlaps instruction at (ram,0x00014db4189c)
    */
/* WARNING: Removing unreachable block (ram,0x00014daad837) */
/* WARNING: Removing unreachable block (ram,0x00014daad8cf) */
/* WARNING: Removing unreachable block (ram,0x00014daad8d4) */
/* WARNING: Removing unreachable block (ram,0x00014daad8da) */
/* WARNING: Removing unreachable block (ram,0x00014daad97f) */
/* WARNING: Removing unreachable block (ram,0x00014daad985) */
/* WARNING: Removing unreachable block (ram,0x00015b6f5c06) */
/* WARNING: Removing unreachable block (ram,0x00015b6f5c2f) */
/* WARNING: Removing unreachable block (ram,0x00015b6f5c2a) */
/* WARNING: Removing unreachable block (ram,0x00015b6f5c3c) */
/* WARNING: Removing unreachable block (ram,0x00015b694fed) */
/* WARNING: Removing unreachable block (ram,0x00015b69505d) */
/* WARNING: Removing unreachable block (ram,0x000162550769) */
/* WARNING: Removing unreachable block (ram,0x00015b695063) */
/* WARNING: Removing unreachable block (ram,0x00015b6950f2) */
/* WARNING: Removing unreachable block (ram,0x00015b6950f8) */
/* WARNING: Removing unreachable block (ram,0x000164755656) */
/* WARNING: Removing unreachable block (ram,0x00014db41760) */
/* WARNING: Removing unreachable block (ram,0x00014db4176b) */
/* WARNING: Removing unreachable block (ram,0x00014db41868) */
/* WARNING: Removing unreachable block (ram,0x000156d30eee) */
/* WARNING: Removing unreachable block (ram,0x00014db4186e) */
/* WARNING: Removing unreachable block (ram,0x00014db41885) */
/* WARNING: Removing unreachable block (ram,0x00014db4189d) */
/* WARNING: Removing unreachable block (ram,0x00014db4189c) */
/* WARNING: Removing unreachable block (ram,0x00014db418a4) */
/* WARNING: Removing unreachable block (ram,0x00014db418ad) */
/* WARNING: Removing unreachable block (ram,0x00014db418b9) */
/* WARNING: Removing unreachable block (ram,0x00016267741b) */
/* WARNING: Removing unreachable block (ram,0x000162677448) */
/* WARNING: Removing unreachable block (ram,0x000162677470) */
/* WARNING: Removing unreachable block (ram,0x00016267746f) */
/* WARNING: Removing unreachable block (ram,0x000162677478) */
/* WARNING: Removing unreachable block (ram,0x000162677541) */
/* WARNING: Removing unreachable block (ram,0x000162677546) */
/* WARNING: Removing unreachable block (ram,0x000162677552) */
/* WARNING: Removing unreachable block (ram,0x000162677557) */
/* WARNING: Removing unreachable block (ram,0x00014db41766) */
/* WARNING: Removing unreachable block (ram,0x00014db41900) */
/* WARNING: Removing unreachable block (ram,0x00014db41920) */
/* WARNING: Removing unreachable block (ram,0x00014db41928) */

undefined8 FUN_14db416e1(void)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ushort unaff_DI;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R13;
  longlong unaff_R15;
  ushort *unaff_retaddr;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_retaddr = ~*unaff_retaddr;
  uVar2 = *unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr ^ 0xffff;
  *unaff_retaddr = (~(uVar2 & (unaff_DI ^ 0xffff)) + (unaff_DI ^ 0xffff)) - *unaff_retaddr;
  *unaff_retaddr = -*unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr - 1;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R15;
  *plVar1 = -*plVar1;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x10) = in_R9;
  *(undefined8 *)(local_res20 + -0x18) = in_R9;
  *(undefined8 *)(local_res20 + -0x20) = in_R10;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RSI;
  uVar5 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x28) = in_RAX;
  *(undefined4 *)(local_res20 + -0x28) = 0x9c179c28;
  *(undefined4 *)(local_res20 + -0x24) = 0xffffffff;
  *(longlong *)(local_res20 + *(longlong *)(local_res20 + -0x28) + 0x63e863c8) = *plVar1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *plVar1 = (longlong)&LAB_1566562f0;
  lVar3 = *(longlong *)(local_res20 + -0x10);
  *(longlong *)(local_res20 + -0x10) = lVar3;
  *(longlong *)(local_res20 + -0x18) = lVar3;
  if (lVar3 != 0) {
    uVar5 = FUN_1566562b1();
    return uVar5;
  }
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(undefined8 *)(local_res20 + -0x20) = uVar5;
  uVar4 = *(ulonglong *)(local_res20 + -0x10);
  *(ulonglong *)(local_res20 + -0x10) = *(ulonglong *)(local_res20 + -0x10) & 0x14d7ac635;
  *(ulonglong *)(local_res20 + -0x10) = ~*(ulonglong *)(local_res20 + -0x10);
  *(ulonglong *)(local_res20 + -0x10) = *(ulonglong *)(local_res20 + -0x10) & (uVar4 | 0x14d7ac635);
  return in_RAX;
}



// FUNCTION 14db4186e FUN_14db4186e body=442 status=ok
// SIG undefined FUN_14db4186e(void)

/* WARNING: Instruction at (ram,0x00014db4189d) overlaps instruction at (ram,0x00014db4189c)
    */
/* WARNING: Removing unreachable block (ram,0x00014db41900) */
/* WARNING: Removing unreachable block (ram,0x00014db41920) */
/* WARNING: Removing unreachable block (ram,0x00014db41928) */
/* WARNING: Removing unreachable block (ram,0x000162677557) */

void FUN_14db4186e(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *in_RAX;
  ulonglong *puVar7;
  undefined1 *puVar8;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar9;
  byte in_AF;
  bool bVar10;
  bool bVar11;
  byte in_TF;
  byte in_IF;
  bool bVar12;
  bool bVar13;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar14;
  ulonglong uStack_8;
  uint uVar6;
  
  bVar12 = false;
  bVar9 = CARRY8(param_2,unaff_RDI);
  bVar13 = SCARRY8(param_2,unaff_RDI);
  uStack_8 = param_2 + unaff_RDI;
  bVar11 = (longlong)uStack_8 < 0;
  bVar10 = uStack_8 == 0;
  bVar3 = POPCOUNT(uStack_8 & 0xff);
  puVar8 = &stack0x00000000 + uStack_8;
  puVar7 = &uStack_8;
  do {
    puVar7[-1] = (ulonglong)puVar8;
    puVar4 = (undefined1 *)puVar7[-1];
    puVar8 = (undefined1 *)*puVar7;
    *(ulonglong *)(puVar4 + -8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)bVar12 * 0x400 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)bVar11 * 0x80
         | (ulonglong)bVar10 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((bVar3 & 1) == 0) * 4 | (ulonglong)bVar9 | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    *(ulonglong *)(puVar4 + -8) = *(ulonglong *)(puVar4 + -8) & 0xfffffffffffffffb;
    uVar14 = *(ulonglong *)(puVar4 + -8);
    in_NT = (uVar14 & 0x4000) != 0;
    bVar12 = (uVar14 & 0x400) != 0;
    in_IF = (uVar14 & 0x200) != 0;
    in_TF = (uVar14 & 0x100) != 0;
    in_AF = (uVar14 & 0x10) != 0;
    in_ID = (uVar14 & 0x200000) != 0;
    in_AC = (uVar14 & 0x40000) != 0;
    in_VIP = 0;
    in_VIF = 0;
    if ((uVar14 & 4) == 0) {
      puVar7 = (ulonglong *)(puVar4 + -8);
      *(undefined1 **)(puVar4 + -8) = in_RAX;
      *(undefined4 *)(puVar4 + -8) = 0x10e1764f;
      *(undefined4 *)(puVar4 + -4) = 0;
      goto code_r0x00014db418ad;
    }
    bVar9 = false;
    bVar13 = false;
    uVar6 = (uint)in_RAX;
    uVar14 = (ulonglong)in_RAX & 0x2404c750;
    uVar5 = uVar6 & 0x2404c750;
    in_RAX = (undefined1 *)(ulonglong)uVar5;
    bVar11 = false;
    bVar3 = POPCOUNT(uVar6 & 0x50);
    bVar10 = true;
    puVar7 = (ulonglong *)puVar4;
  } while (uVar14 == 0);
  in_RAX = (undefined1 *)((ulonglong)(uint3)(uVar5 >> 8) << 8);
  *in_RAX = *in_RAX;
  *in_RAX = *in_RAX;
code_r0x00014db418ad:
  puVar1 = (undefined4 *)((longlong)puVar7 + ((*puVar7 ^ 0x18149b48) - 0x8f5ecf7));
  *puVar1 = 0x3a7f1d39;
  puVar1[1] = 0;
  uVar2 = *(undefined8 *)(puVar1 + 4);
  uVar14 = *(ulonglong *)(puVar1 + 6);
  *(undefined4 **)(puVar1 + 4) = puVar1 + 6;
  *(undefined1 **)(puVar1 + 4) = in_RAX;
  puVar1[4] = 0x6cdb6d25;
  *(ulonglong *)(puVar1 + 2) =
       (ulonglong)in_NT * 0x4000 | (ulonglong)bVar12 * 0x400 | (ulonglong)in_IF * 0x200 |
       (ulonglong)in_TF * 0x100 | (ulonglong)((longlong)uVar14 < 0) * 0x80 |
       (ulonglong)(uVar14 == 0) * 0x40 | (ulonglong)in_AF * 0x10 |
       (ulonglong)((POPCOUNT(uVar14 & 0xff) & 1U) == 0) * 4 | (ulonglong)in_ID * 0x200000 |
       (ulonglong)in_AC * 0x40000;
  *(ulonglong *)(puVar1 + 2) = *(ulonglong *)(puVar1 + 2) & 0xffffffffffffffbf;
  if ((*(ulonglong *)(puVar1 + 2) & 0x40) == 0) {
    puVar1[5] = 0;
  }
  else {
    DAT_042444c7 = DAT_042444c7 + -0x72;
  }
  uVar14 = *(ulonglong *)(puVar1 + 4);
  *(undefined8 *)(puVar1 + 4) = 0x1626774b6;
  FUN_15b916aab(~((uVar14 | 0xffffffffa4d9c2f6) & (~uVar14 | 0x5b263d09)),0x5b263d09,uVar2);
  uVar14 = *(ulonglong *)(unaff_R13 + -0x60);
  if (-1 < (longlong)
           -~(~(((uVar14 - 1) - ~((~uVar14 | ~unaff_R15) + uVar14 + 1 ^ 0xffffffffffffffff)) -
               unaff_R15) & ~(~uVar14 | unaff_R15))) {
    FUN_1566609b4();
    return;
  }
  FUN_1566609b4();
  return;
}



// FUNCTION 14db41b87 FUN_14db41b87 body=21 status=ok
// SIG undefined FUN_14db41b87(void)

void FUN_14db41b87(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db41c1f FUN_14db41c1f body=116 status=ok
// SIG undefined FUN_14db41c1f(void)

void FUN_14db41c1f(byte param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  undefined8 unaff_R13;
  bool bVar4;
  bool bVar5;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar1 = ~(local_res18 ^ 0xffff);
  LOCK();
  bVar4 = in_AL < FUN_14d7aaedf;
  bVar5 = SBORROW1(in_AL,FUN_14d7aaedf);
  cVar2 = in_AL - FUN_14d7aaedf;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = FUN_14d7aaedf;
  }
  FUN_14d7aaedf = bVar3;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  FUN_16471fee3();
  return;
}



// FUNCTION 14db41d19 FUN_14db41d19 body=314 status=ok
// SIG undefined FUN_14db41d19(void)

/* WARNING: Removing unreachable block (ram,0x0001610382a7) */
/* WARNING: Removing unreachable block (ram,0x00014dde2657) */
/* WARNING: Removing unreachable block (ram,0x00014db41dad) */

void FUN_14db41d19(void)

{
  ulonglong uVar1;
  byte unaff_R13B;
  undefined7 unaff_000000a9;
  ulonglong unaff_R15;
  byte bStackX_18;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x88);
  if (unaff_R13B < bStackX_18) {
    FUN_16103826a(0x18,CONCAT71(0xffffffffffffff,bStackX_18),
                  0xffffffffffffffff - (uVar1 & unaff_R15) & (uVar1 | unaff_R15),
                  *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x60) ^ unaff_R15);
    return;
  }
  return;
}



// FUNCTION 14db41dad FUN_14db41dad body=147 status=ok
// SIG undefined FUN_14db41dad(void)

void FUN_14db41dad(void)

{
  return;
}



// FUNCTION 14db41e40 FUN_14db41e40 body=145 status=ok
// SIG undefined FUN_14db41e40(void)

void FUN_14db41e40(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166882c93(param_1,0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x68) | param_1);
  return;
}



// FUNCTION 14db41f81 FUN_14db41f81 body=211 status=ok
// SIG undefined FUN_14db41f81(void)

void FUN_14db41f81(undefined8 param_1,undefined4 param_2)

{
  longlong in_R10;
  byte in_CF;
  longlong unaff_retaddr;
  
  *(undefined4 *)(unaff_retaddr + in_R10 + 0x3f00aa7b + (ulonglong)((in_CF & 1) != 0)) = param_2;
  return;
}



// FUNCTION 14db4236d FUN_14db4236d body=124 status=ok
// SIG undefined FUN_14db4236d(void)

void FUN_14db4236d(undefined8 param_1,undefined8 param_2)

{
  FUN_1650ef3d6(param_1,param_2,0x6793ac9a);
  return;
}



// FUNCTION 14db423eb FUN_14db423eb body=26 status=ok
// SIG undefined FUN_14db423eb(void)

void FUN_14db423eb(void)

{
  return;
}



// FUNCTION 14db4265a FUN_14db4265a body=361 status=ok
// SIG undefined FUN_14db4265a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db4265a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_166522d8e(param_1,param_2,FUN_166522d8e);
  UNRECOVERED_JUMPTABLE = (code *)FUN_1612fa1d0();
                    /* WARNING: Could not recover jumptable at 0x00014db427c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db4284c FUN_14db4284c body=178 status=ok
// SIG undefined FUN_14db4284c(void)

void FUN_14db4284c(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  
  FUN_15b45b457(param_1,param_2,FUN_15b45b457,~unaff_R15);
  return;
}


