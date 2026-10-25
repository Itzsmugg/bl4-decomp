// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db164e5 FUN_14db164e5 body=175 status=ok
// SIG undefined FUN_14db164e5(void)

/* WARNING: Removing unreachable block (ram,0x00014db1658a) */
/* WARNING: Removing unreachable block (ram,0x00014db16595) */
/* WARNING: Removing unreachable block (ram,0x00014db165e3) */
/* WARNING: Removing unreachable block (ram,0x00014db165e7) */
/* WARNING: Removing unreachable block (ram,0x00014db16590) */

void FUN_14db164e5(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong unaff_RBX;
  ulonglong in_R11;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(unaff_RBX + 8) =
       ~(((~(param_4 & in_R11) + in_R11) - ~param_4) + *(longlong *)(unaff_RBX + 8) + 1);
  FUN_1613e8680(param_5,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14db16595 FUN_14db16595 body=146 status=ok
// SIG undefined FUN_14db16595(void)

/* WARNING: Removing unreachable block (ram,0x00014db165e3) */

void FUN_14db16595(void)

{
  FUN_14ddf7166();
  FUN_14d7a802c();
  return;
}



// FUNCTION 14db16627 FUN_14db16627 body=74 status=ok
// SIG undefined FUN_14db16627(void)

void FUN_14db16627(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_14d7a802c(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14db166d5 FUN_14db166d5 body=690 status=ok
// SIG undefined FUN_14db166d5(void)

/* WARNING: Removing unreachable block (ram,0x00014db1677c) */
/* WARNING: Removing unreachable block (ram,0x00014db167b9) */
/* WARNING: Removing unreachable block (ram,0x00014db167bd) */
/* WARNING: Removing unreachable block (ram,0x00014db16936) */
/* WARNING: Removing unreachable block (ram,0x00014db1693b) */

void FUN_14db166d5(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  longlong local_res20;
  
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = 0x4cb2e735;
  *puVar1 = *puVar1 ^ 0x4cb2e735;
  *puVar1 = *puVar1 + unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = &LAB_164ff26a6;
  if ((undefined8 *)(local_res20 + -8) == (undefined8 *)0x0) {
    FUN_164ff2638();
    return;
  }
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = uVar2;
  *(undefined8 *)(local_res20 + -0x18) = uVar2;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7bd7d5;
  return;
}



// FUNCTION 14db16a33 FUN_14db16a33 body=123 status=ok
// SIG undefined FUN_14db16a33(void)

/* WARNING: Removing unreachable block (ram,0x00014dff617d) */
/* WARNING: Removing unreachable block (ram,0x00014dff6183) */
/* WARNING: Removing unreachable block (ram,0x000157360dfa) */
/* WARNING: Removing unreachable block (ram,0x000157360e05) */
/* WARNING: Removing unreachable block (ram,0x00014db16aa9) */

undefined8 FUN_14db16a33(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  if ((~((~unaff_R15 | *(ulonglong *)(unaff_retaddr + -0x30)) + unaff_R15 + 1) &
      (*(ulonglong *)(unaff_retaddr + -0x30) | unaff_R15)) != 0) {
    uVar1 = FUN_157360d88();
    return uVar1;
  }
  uVar1 = (*(code *)0x160dd2d76)
                    (param_1,~(unaff_RDI & ~(~(param_2 ^ 0xffffffffffffffff) & ~unaff_R15)),param_3,
                     param_4);
  return uVar1;
}



// FUNCTION 14db16aaf FUN_14db16aaf body=142 status=ok
// SIG undefined FUN_14db16aaf(void)

void FUN_14db16aaf(ulonglong param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  FUN_1656e6ce7(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1),
                *(ulonglong *)(unaff_RDI + param_2) ^ param_1);
  return;
}



// FUNCTION 14db16ce4 FUN_14db16ce4 body=293 status=ok
// SIG undefined FUN_14db16ce4(void)

void FUN_14db16ce4(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  undefined8 uStackX_18;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = param_3;
  *(undefined8 *)(param_5 - 0x10) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x18) = 0x14db16d74;
  FUN_1658e3a67(param_1,param_2,0x17554621c,unaff_retaddr);
  uVar1 = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = unaff_R14;
  *(undefined8 *)(param_5 - 0x18) = local_res10;
  *(undefined8 *)(param_5 - 0x10) = uVar1;
  *(code **)(param_5 - 0x18) = FUN_1658e3a67;
  *(undefined8 *)(param_5 - 0x20) = in_R10;
  *(ulonglong *)(param_5 - 0x18) =
       (-0x4cf84d8b49240c89 - param_1) + (param_1 | 0x4cf84d8b49240c89) * 2;
  *(undefined8 *)(param_5 - 0x18) = uStackX_18;
  *(undefined8 *)(param_5 - 0x20) = uStackX_18;
  *(code **)(param_5 - 0x18) = FUN_14db16e0b;
  FUN_165262112();
  return;
}



// FUNCTION 14db16e0b FUN_14db16e0b body=143 status=ok
// SIG undefined FUN_14db16e0b(void)

void FUN_14db16e0b(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBP + 0x10) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_RBP + 0x10));
  FUN_15b21c660(FUN_15b21c660,local_res8);
  return;
}



// FUNCTION 14db16f25 FUN_14db16f25 body=175 status=ok
// SIG undefined FUN_14db16f25(void)

void FUN_14db16f25(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *(undefined8 *)(param_4 + 0x10) = unaff_RBX;
  plVar1 = (longlong *)(param_5 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = param_2;
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = uStackX_10;
  *(undefined8 *)(param_5 + -0x20) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x28) = in_R10;
  *(undefined8 *)(param_5 + -0x30) = in_RAX;
  *(undefined4 *)(param_5 + -0x30) = 0x29f85314;
  *(undefined4 *)(param_5 + -0x2c) = 0;
  *(undefined8 *)(param_5 + -0x30) = local_res8;
  *(undefined8 *)(param_5 + -0x38) = local_res8;
  *(undefined8 *)(param_5 + -0x30) = 0x14db16fd6;
  FUN_15b815134(param_1,*(undefined8 *)(param_5 + -8),param_3,*(undefined8 *)(param_5 + -0x38));
  return;
}



// FUNCTION 14db1706e FUN_14db1706e body=156 status=ok
// SIG undefined FUN_14db1706e(void)

/* WARNING: Removing unreachable block (ram,0x00014db17102) */
/* WARNING: Removing unreachable block (ram,0x00014db1710c) */

void FUN_14db1706e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1624d6fa2(FUN_1624d6fa2,
                *(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14db17241 FUN_14db17241 body=497 status=ok
// SIG undefined FUN_14db17241(void)

/* WARNING: Removing unreachable block (ram,0x00014db172d1) */

void FUN_14db17241(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  lVar3 = (~(~param_1 & uVar1) + uVar1) - param_1;
  lVar2 = ~((uVar1 ^ 0xffffffffffffffff) & param_1) + param_1;
  if (lVar2 != 0) {
    FUN_162797cbe(param_1,lVar2,lVar3);
    return;
  }
  FUN_162797cbe(param_1,0,lVar3);
  return;
}



// FUNCTION 14db17447 FUN_14db17447 body=163 status=ok
// SIG undefined FUN_14db17447(void)

void FUN_14db17447(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x60);
  FUN_14e1fb944(param_1,FUN_14e1fb944,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (uVar1 + param_1) - (uVar1 & param_1)));
  return;
}



// FUNCTION 14db174ea FUN_14db174ea body=161 status=ok
// SIG undefined FUN_14db174ea(void)

/* WARNING: Removing unreachable block (ram,0x00014db176a0) */

undefined1 * FUN_14db174ea(void)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_res18;
  longlong in_stack_00000028;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  uint uStack0000000000000048;
  ulonglong in_stack_00000050;
  undefined8 in_stack_00000058;
  
  _uStack0000000000000048 =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)&stack0x00000048,8) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)&stack0x00000050 < 0) * 0x80 |
       (ulonglong)(&stack0x00000000 == &DAT_ffffffffffffffb0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)((POPCOUNT((ulonglong)&stack0x00000050 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(&DAT_fffffffffffffff7 < &stack0x00000048) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((uStack0000000000000048 >> 7 & 1) != 0) {
    puVar2 = (undefined1 *)FUN_1620802d6();
    return puVar2;
  }
  if ((ulonglong)((longlong)&stack0x00000050 < 0) != 0) {
    in_stack_00000058 = *(undefined8 *)(unaff_R12 + -0x68);
    in_stack_00000050 = *(undefined8 *)(unaff_R12 + -8);
    FUN_156c2c8ab(in_stack_00000040,in_stack_00000038,local_res18);
    return (undefined1 *)
           (~(~*(ulonglong *)(in_stack_00000028 + -0x40) | (ulonglong)in_stack_00000040) &
           (~(ulonglong)in_stack_00000040 | *(ulonglong *)(in_stack_00000028 + -0x40)));
  }
  if (local_res18 == 0) {
    puVar2 = (undefined1 *)FUN_16260a75d();
    return puVar2;
  }
  uVar1 = -((int)((uint)((local_res18 & 7) == 0) << 0x1f) >> 0x1f);
  in_stack_00000050 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    *in_stack_00000040 = *in_stack_00000038;
    return in_stack_00000040;
  }
  puVar2 = (undefined1 *)FUN_162226297();
  return puVar2;
}



// FUNCTION 14db1758c FUN_14db1758c body=374 status=ok
// SIG undefined FUN_14db1758c(void)

/* WARNING: Removing unreachable block (ram,0x00014db176a0) */

ulonglong FUN_14db1758c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_156c2c8ab(param_1,param_2,param_3);
  return ~(~*(ulonglong *)(unaff_RDI + -0x40) | param_1) &
         (~param_1 | *(ulonglong *)(unaff_RDI + -0x40));
}



// FUNCTION 14db17786 FUN_14db17786 body=210 status=ok
// SIG undefined FUN_14db17786(void)

/* WARNING: Removing unreachable block (ram,0x00014db177fe) */

undefined8 FUN_14db17786(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  longlong lVar2;
  ulonglong local_res10;
  ulonglong local_res18;
  
  param_1 = ~local_res10 & param_1;
  lVar2 = ((local_res18 | unaff_R15) - (~(local_res18 & unaff_R15) | local_res18 | unaff_R15)) +
          ~(local_res18 & unaff_R15);
  *(undefined8 *)(lVar2 + -8) = param_3;
  *(undefined8 *)(lVar2 + -0x10) = param_3;
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((param_1 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_1 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_1 & 0x400) != 0) * 0x400 | (ulonglong)((param_1 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_1 & 0x80) != 0) * 0x80 | (ulonglong)((param_1 & 0x40) != 0) * 0x40 |
       (ulonglong)((param_1 & 0x10) != 0) * 0x10 | (ulonglong)((param_1 & 4) != 0) * 4 |
       (ulonglong)((param_1 & 1) != 0) | (ulonglong)((param_1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_1 & 0x40000) != 0) * 0x40000;
  uVar1 = FUN_1563c65d3(&ExceptionList,param_2,FUN_1563c65d3,param_4);
  return uVar1;
}



// FUNCTION 14db17a44 FUN_14db17a44 body=150 status=ok
// SIG undefined FUN_14db17a44(void)

void FUN_14db17a44(void)

{
  FUN_1612d716a();
  return;
}



// FUNCTION 14db17ada FUN_14db17ada body=130 status=ok
// SIG undefined FUN_14db17ada(void)

undefined8 FUN_14db17ada(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14db17b7c FUN_14db17b7c body=441 status=ok
// SIG undefined FUN_14db17b7c(void)

/* WARNING: Instruction at (ram,0x00014db17c55) overlaps instruction at (ram,0x00014db17c54)
    */
/* WARNING: Removing unreachable block (ram,0x00016612ac9f) */
/* WARNING: Removing unreachable block (ram,0x00016612aca5) */
/* WARNING: Removing unreachable block (ram,0x00016612acaa) */
/* WARNING: Removing unreachable block (ram,0x00014db17c16) */
/* WARNING: Removing unreachable block (ram,0x00014db17c21) */
/* WARNING: Removing unreachable block (ram,0x00014db17c55) */
/* WARNING: Removing unreachable block (ram,0x00014db17c54) */
/* WARNING: Removing unreachable block (ram,0x00014db17c5c) */
/* WARNING: Removing unreachable block (ram,0x00014db17c8a) */
/* WARNING: Removing unreachable block (ram,0x00014db17c90) */
/* WARNING: Removing unreachable block (ram,0x00014db17d31) */
/* WARNING: Removing unreachable block (ram,0x000160c6e3c0) */
/* WARNING: Removing unreachable block (ram,0x00014db17d37) */
/* WARNING: Removing unreachable block (ram,0x00014db17dce) */
/* WARNING: Removing unreachable block (ram,0x00014db17dd3) */
/* WARNING: Removing unreachable block (ram,0x00014db17dd9) */
/* WARNING: Removing unreachable block (ram,0x00016211aa7d) */
/* WARNING: Removing unreachable block (ram,0x000164782395) */
/* WARNING: Removing unreachable block (ram,0x0001647823d7) */
/* WARNING: Removing unreachable block (ram,0x0001647823da) */
/* WARNING: Removing unreachable block (ram,0x00016478242a) */
/* WARNING: Removing unreachable block (ram,0x000164782435) */
/* WARNING: Removing unreachable block (ram,0x00016478244d) */
/* WARNING: Removing unreachable block (ram,0x0001647824da) */
/* WARNING: Removing unreachable block (ram,0x0001647824e0) */
/* WARNING: Removing unreachable block (ram,0x00015b9f2167) */
/* WARNING: Removing unreachable block (ram,0x00016612abfa) */
/* WARNING: Removing unreachable block (ram,0x000160e82aa9) */
/* WARNING: Removing unreachable block (ram,0x00014db17c1c) */

undefined8 FUN_14db17b7c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e1987bc();
  return uVar1;
}



// FUNCTION 14db17d37 FUN_14db17d37 body=489 status=ok
// SIG undefined FUN_14db17d37(void)

/* WARNING: Removing unreachable block (ram,0x00014db17dd9) */

void FUN_14db17d37(ulonglong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  ulonglong uVar3;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  uVar3 = local_res20 ^ param_1;
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  syscall();
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 - 0x18) = 0x14db17d99;
  *(ulonglong *)(in_stack_00000028 - 0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(in_stack_00000028 - 0x20);
  plVar1 = (longlong *)(in_stack_00000028 - 8);
  uVar2 = *(undefined8 *)(in_stack_00000028 - 0x18);
  *(ulonglong *)(in_stack_00000028 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *plVar1 = 0x528c401;
  *plVar1 = *plVar1 + 0x81971;
  if ((*(ulonglong *)(in_stack_00000028 - 0x18) & 1) != 0) {
    *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R12;
    *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R12;
    *(undefined1 **)(in_stack_00000028 - 0x10) = &LAB_16211aa93;
    return;
  }
  FUN_16211aa7d(uVar2);
  return;
}



// FUNCTION 14db17fb1 FUN_14db17fb1 body=156 status=ok
// SIG undefined FUN_14db17fb1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db18036) */
/* WARNING: Removing unreachable block (ram,0x00014db18042) */

void FUN_14db17fb1(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong in_R11;
  undefined8 unaff_retaddr;
  
  *param_3 = unaff_retaddr;
  if (in_R11 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14db180e0 FUN_14db180e0 body=293 status=ok
// SIG undefined FUN_14db180e0(void)

/* WARNING: Removing unreachable block (ram,0x00014db18184) */
/* WARNING: Removing unreachable block (ram,0x000165df1414) */

undefined8 FUN_14db180e0(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char unaff_R14B;
  undefined8 in_stack_00000018;
  int local_res20;
  
  if (local_res20 << ((unaff_R14B + -1) - ~param_1 & 0x1f) < 0) {
    uVar1 = FUN_165c400f2(in_stack_00000018);
    return uVar1;
  }
  if (&stack0x00000000 == &DAT_ffffffffffffffe0) {
    uVar1 = FUN_156ee5225(in_stack_00000018,param_2,FUN_156ee5225);
    return uVar1;
  }
  uVar1 = FUN_1661500bf();
  return uVar1;
}



// FUNCTION 14db18382 FUN_14db18382 body=37 status=ok
// SIG undefined FUN_14db18382(void)

void FUN_14db18382(void)

{
  return;
}



// FUNCTION 14db185c9 FUN_14db185c9 body=74 status=ok
// SIG undefined FUN_14db185c9(void)

void FUN_14db185c9(void)

{
  return;
}



// FUNCTION 14db18646 FUN_14db18646 body=2 status=ok
// SIG undefined FUN_14db18646(void)

void FUN_14db18646(void)

{
  return;
}



// FUNCTION 14db1881a FUN_14db1881a body=136 status=ok
// SIG undefined FUN_14db1881a(void)

void FUN_14db1881a(undefined8 param_1)

{
  (*(code *)&LAB_14e084236)(param_1,&LAB_14e084236,0x102);
  return;
}



// FUNCTION 14db188a5 FUN_14db188a5 body=120 status=ok
// SIG undefined FUN_14db188a5(void)

void FUN_14db188a5(ulonglong param_1)

{
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  
  (*(code *)0x160f1a09b)
            (param_1,0x160f1a09b,
             -(*(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x30) | param_1),
             *(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x60) & param_1);
  return;
}



// FUNCTION 14db18920 FUN_14db18920 body=13 status=ok
// SIG undefined FUN_14db18920(void)

void FUN_14db18920(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db1892b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db189ba thunk_FUN_14db189c0 body=5 status=ok
// SIG undefined thunk_FUN_14db189c0(void)

/* WARNING: Removing unreachable block (ram,0x00014db18a6d) */
/* WARNING: Removing unreachable block (ram,0x00014db18a73) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14db189c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_retaddr + -0x98);
  uVar1 = ~uVar2 | unaff_RBP;
  FUN_161338f00(param_1,param_2,param_3);
  FUN_16291de56(FUN_16291de56,
                ~((~uVar1 | ~(~(0xffffffffffffffff - unaff_RBP) & ~uVar2)) + uVar1 + 1));
  return;
}



// FUNCTION 14db189c0 FUN_14db189c0 body=312 status=ok
// SIG undefined FUN_14db189c0(void)

/* WARNING: Removing unreachable block (ram,0x00014db18a6d) */
/* WARNING: Removing unreachable block (ram,0x00014db18a73) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db189c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_retaddr + -0x98);
  uVar1 = ~uVar2 | unaff_RBP;
  FUN_161338f00(param_1,param_2,param_3);
  FUN_16291de56(FUN_16291de56,
                ~((~uVar1 | ~(~(0xffffffffffffffff - unaff_RBP) & ~uVar2)) + uVar1 + 1));
  return;
}



// FUNCTION 14db18c2a FUN_14db18c2a body=173 status=ok
// SIG undefined FUN_14db18c2a(void)

void FUN_14db18c2a(void)

{
  return;
}



// FUNCTION 14db18cdd FUN_14db18cdd body=153 status=ok
// SIG undefined FUN_14db18cdd(void)

void FUN_14db18cdd(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_160fe2fbc(param_1,uVar1 | param_1,FUN_160fe2fbc,(~(~uVar1 & ~param_1) + ~param_1) - uVar1);
  return;
}



// FUNCTION 14db18e0f thunk_FUN_14db18e15 body=5 status=ok
// SIG undefined thunk_FUN_14db18e15(void)

longlong thunk_FUN_14db18e15(void)

{
  ulonglong in_R9;
  
  return 0x131dd8cd - (in_R9 ^ 0xffffffffffffffff);
}



// FUNCTION 14db18e15 FUN_14db18e15 body=134 status=ok
// SIG undefined FUN_14db18e15(void)

longlong FUN_14db18e15(void)

{
  ulonglong in_R9;
  
  return 0x131dd8cd - (in_R9 ^ 0xffffffffffffffff);
}



// FUNCTION 14db18f28 FUN_14db18f28 body=146 status=ok
// SIG undefined FUN_14db18f28(void)

void FUN_14db18f28(void)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161d32bab((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15) ^ 0xffffffffffffffff,
                unaff_RBX | unaff_R15);
  return;
}



// FUNCTION 14db18fbc FUN_14db18fbc body=413 status=ok
// SIG undefined FUN_14db18fbc(void)

/* WARNING: Removing unreachable block (ram,0x00014db19041) */
/* WARNING: Removing unreachable block (ram,0x00014db19047) */
/* WARNING: Removing unreachable block (ram,0x0001613db6e7) */

void FUN_14db18fbc(void)

{
  return;
}



// FUNCTION 14db191f5 FUN_14db191f5 body=186 status=ok
// SIG undefined FUN_14db191f5(void)

void FUN_14db191f5(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong unaff_RSI;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 auStack_28cf [1305];
  
  plVar1 = (longlong *)(&stack0x00000000 + unaff_RSI);
  *(undefined4 *)plVar1 = 0x888eb6d7;
  *(undefined4 *)((longlong)plVar1 + 4) = 0xffffffff;
  if (*plVar1 != 0x2d145782) {
    FUN_164b9b1da(param_1,((param_2 | unaff_R15) - (~(param_2 & unaff_R15) | param_2 | unaff_R15)) +
                          ~(param_2 & unaff_R15));
    return;
  }
  *plVar1 = 0x187d9a6;
  *(undefined8 *)((longlong)plVar1 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)plVar1 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)plVar1 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14db1929c FUN_14db1929c body=247 status=ok
// SIG undefined FUN_14db1929c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015b356c8e) overlaps instruction at (ram,0x00015b356c8d)
    */
/* WARNING: Removing unreachable block (ram,0x00015b356c56) */
/* WARNING: Removing unreachable block (ram,0x00015b356c8d) */
/* WARNING: Removing unreachable block (ram,0x00015b356c8e) */
/* WARNING: Removing unreachable block (ram,0x00014db1931d) */

undefined8 FUN_14db1929c(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  longlong lStackX_18;
  
  *(longlong *)(lStackX_18 + -8) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RDI;
  *(undefined **)(lStackX_18 + -0x10) = &DAT_14dcbc338;
  *(undefined **)(lStackX_18 + -0x18) = &DAT_14dcbc338;
  *(undefined8 *)(lStackX_18 + -0x10) = 0;
  *(longlong *)(lStackX_18 + -0x10) =
       *(longlong *)(lStackX_18 + -0x10) + *(longlong *)(lStackX_18 + -8);
  uVar1 = *(ulonglong *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -0x18) = param_1;
  *(undefined8 *)(lStackX_18 + -8) = 0;
  *(ulonglong *)(lStackX_18 + -8) = *(ulonglong *)(lStackX_18 + -8) ^ uVar1;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined4 *)(lStackX_18 + -0x18) = 0;
  *(undefined4 *)(lStackX_18 + -0x14) = 0;
  *(undefined8 *)(lStackX_18 + -0x10) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x10) = 0x14d7a6eb8;
  return *(undefined8 *)(lStackX_18 + -0x18);
}



// FUNCTION 14db193a7 FUN_14db193a7 body=144 status=ok
// SIG undefined FUN_14db193a7(void)

void FUN_14db193a7(void)

{
  undefined8 in_stack_00000008;
  
  FUN_162520b69(in_stack_00000008);
  return;
}



// FUNCTION 14db1943d FUN_14db1943d body=177 status=ok
// SIG undefined FUN_14db1943d(void)

void FUN_14db1943d(void)

{
  FUN_166c941cf();
  return;
}



// FUNCTION 14db194f1 FUN_14db194f1 body=132 status=ok
// SIG undefined FUN_14db194f1(void)

void FUN_14db194f1(void)

{
  undefined4 uStackX_8;
  int in_stack_00000018;
  
  if (-1 < in_stack_00000018 - uStackX_8) {
    FUN_15b93b2b9();
    return;
  }
  return;
}



// FUNCTION 14db1957d FUN_14db1957d body=46 status=ok
// SIG undefined FUN_14db1957d(void)

void FUN_14db1957d(void)

{
  return;
}



// FUNCTION 14db19918 FUN_14db19918 body=176 status=ok
// SIG undefined FUN_14db19918(void)

void FUN_14db19918(undefined8 param_1)

{
  FUN_156400bad(param_1,FUN_156400bad);
  return;
}



// FUNCTION 14db19dbc FUN_14db19dbc body=757 status=ok
// SIG undefined FUN_14db19dbc(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db19dbc(void)

{
  code *pcVar1;
  undefined8 in_R11;
  code *pcVar2;
  longlong unaff_R12;
  
  pcVar2 = FUN_1626c37f9;
  FUN_1626c37f9();
  FUN_156aa619d();
  pcVar1 = FUN_1667cc031;
  FUN_1667cc031();
  FUN_165c6262e(pcVar1,FUN_165c6262e);
  *(undefined8 *)(unaff_R12 + -8) = in_R11;
  *(undefined1 **)(unaff_R12 + -0x10) = &LAB_1574b2581;
  *(undefined1 **)(unaff_R12 + -0x18) = &LAB_1574b2581;
  *(code **)(unaff_R12 + -0x20) = pcVar2;
  FUN_1574b2540();
  return;
}



// FUNCTION 14db1a0bb FUN_14db1a0bb body=289 status=ok
// SIG undefined FUN_14db1a0bb(void)

/* WARNING: Removing unreachable block (ram,0x00014db1a146) */

void FUN_14db1a0bb(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x30) <
      (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) * 2) {
    FUN_15b0eec7d();
    return;
  }
  FUN_15b0eec7d();
  return;
}



// FUNCTION 14db1a1e0 FUN_14db1a1e0 body=448 status=ok
// SIG undefined FUN_14db1a1e0(void)

/* WARNING: Removing unreachable block (ram,0x00014db1a2dd) */
/* WARNING: Removing unreachable block (ram,0x00014db1a2e3) */

void FUN_14db1a1e0(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_R14;
  
  *(ulonglong *)(unaff_RBP + 8) = ~in_RAX & *(ulonglong *)(unaff_RBP + 8) | in_RAX;
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  *(undefined8 *)(unaff_RBP + 8) = 0;
  *(longlong *)(unaff_RBP + 8) = *(longlong *)(unaff_RBP + 8) + ~(unaff_R14 & uVar1);
  FUN_165bb467e();
  FUN_15b2e0bac(param_1);
  return;
}



// FUNCTION 14db1a38a FUN_14db1a38a body=299 status=ok
// SIG undefined FUN_14db1a38a(void)

/* WARNING: Removing unreachable block (ram,0x00014db1a437) */
/* WARNING: Removing unreachable block (ram,0x00014db1a43d) */
/* WARNING: Removing unreachable block (ram,0x0001667757c5) */
/* WARNING: Removing unreachable block (ram,0x0001667757f4) */
/* WARNING: Removing unreachable block (ram,0x0001566b73a0) */
/* WARNING: Removing unreachable block (ram,0x000166775847) */
/* WARNING: Removing unreachable block (ram,0x00016677584d) */

undefined8 FUN_14db1a38a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1667757c5();
  return uVar1;
}



// FUNCTION 14db1a4ba FUN_14db1a4ba body=138 status=ok
// SIG undefined FUN_14db1a4ba(void)

void FUN_14db1a4ba(void)

{
  longlong unaff_RBP;
  undefined8 local_res18;
  
  FUN_156354859(local_res18 + unaff_RBP);
  FUN_14db1a547();
  return;
}



// FUNCTION 14db1a547 FUN_14db1a547 body=132 status=ok
// SIG undefined FUN_14db1a547(void)

/* WARNING: Removing unreachable block (ram,0x00014db1a561) */

void FUN_14db1a547(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15653c259((char)param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x60),FUN_15653c259,
                *(ulonglong *)(unaff_RDI + -0x60) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14db1a5e2 FUN_14db1a5e2 body=221 status=ok
// SIG undefined FUN_14db1a5e2(void)

/* WARNING: Instruction at (ram,0x00016261e55b) overlaps instruction at (ram,0x00016261e55a)
    */
/* WARNING: Removing unreachable block (ram,0x000164b561cc) */
/* WARNING: Removing unreachable block (ram,0x000164b561d2) */
/* WARNING: Removing unreachable block (ram,0x000164b562f1) */
/* WARNING: Removing unreachable block (ram,0x000164b562f6) */
/* WARNING: Removing unreachable block (ram,0x000164b5639f) */
/* WARNING: Removing unreachable block (ram,0x000164b563a5) */
/* WARNING: Removing unreachable block (ram,0x000164b563aa) */
/* WARNING: Removing unreachable block (ram,0x000162db52db) */
/* WARNING: Removing unreachable block (ram,0x000164b560bc) */
/* WARNING: Removing unreachable block (ram,0x0001569081c5) */
/* WARNING: Removing unreachable block (ram,0x000164b560c8) */
/* WARNING: Removing unreachable block (ram,0x000164b56140) */
/* WARNING: Removing unreachable block (ram,0x0001651d9580) */
/* WARNING: Removing unreachable block (ram,0x000164b56146) */
/* WARNING: Removing unreachable block (ram,0x0001668e020f) */
/* WARNING: Removing unreachable block (ram,0x00014db1a6d4) */
/* WARNING: Removing unreachable block (ram,0x00014db1a6da) */
/* WARNING: Removing unreachable block (ram,0x00014db1a767) */
/* WARNING: Removing unreachable block (ram,0x00014db1a76d) */
/* WARNING: Removing unreachable block (ram,0x0001619dc7e9) */
/* WARNING: Removing unreachable block (ram,0x0001619dc80e) */
/* WARNING: Removing unreachable block (ram,0x0001619dc817) */
/* WARNING: Removing unreachable block (ram,0x0001619dc86a) */
/* WARNING: Removing unreachable block (ram,0x0001619dc870) */
/* WARNING: Removing unreachable block (ram,0x0001619dc8c6) */
/* WARNING: Removing unreachable block (ram,0x0001619dc8fb) */
/* WARNING: Removing unreachable block (ram,0x0001619dc91a) */
/* WARNING: Removing unreachable block (ram,0x0001619dc920) */
/* WARNING: Removing unreachable block (ram,0x00015703d76d) */
/* WARNING: Removing unreachable block (ram,0x000156ddaae8) */
/* WARNING: Removing unreachable block (ram,0x00014db1a618) */
/* WARNING: Removing unreachable block (ram,0x00016181ab7d) */
/* WARNING: Removing unreachable block (ram,0x00014db1a63f) */
/* WARNING: Removing unreachable block (ram,0x00014db1a645) */
/* WARNING: Removing unreachable block (ram,0x00014da7bd90) */
/* WARNING: Removing unreachable block (ram,0x00014da7bd8a) */
/* WARNING: Removing unreachable block (ram,0x00014db1a64a) */

undefined8 FUN_14db1a5e2(void)

{
  char in_AL;
  undefined8 uVar1;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0xd8) = 0;
  DAT_1d6c89a1 = DAT_1d6c89a1 + in_AL;
  uVar1 = (*(code *)0x162e6571c)();
  return uVar1;
}



// FUNCTION 14db1a64a FUN_14db1a64a body=1243 status=ok
// SIG undefined FUN_14db1a64a(void)

/* WARNING: Removing unreachable block (ram,0x000164b561cc) */
/* WARNING: Removing unreachable block (ram,0x000164b561d2) */
/* WARNING: Removing unreachable block (ram,0x000164b562f1) */
/* WARNING: Removing unreachable block (ram,0x000164b562f6) */
/* WARNING: Removing unreachable block (ram,0x000164b5639f) */
/* WARNING: Removing unreachable block (ram,0x000164b563a5) */
/* WARNING: Removing unreachable block (ram,0x000164b563aa) */
/* WARNING: Removing unreachable block (ram,0x000162db52db) */
/* WARNING: Removing unreachable block (ram,0x000164b560bc) */
/* WARNING: Removing unreachable block (ram,0x0001569081c5) */
/* WARNING: Removing unreachable block (ram,0x000164b560c8) */
/* WARNING: Removing unreachable block (ram,0x000164b56140) */
/* WARNING: Removing unreachable block (ram,0x0001651d9580) */
/* WARNING: Removing unreachable block (ram,0x000164b56146) */
/* WARNING: Removing unreachable block (ram,0x0001668e020f) */
/* WARNING: Removing unreachable block (ram,0x00014db1a6d4) */
/* WARNING: Removing unreachable block (ram,0x00014db1a6da) */
/* WARNING: Removing unreachable block (ram,0x00014db1a767) */
/* WARNING: Removing unreachable block (ram,0x00014db1a76d) */
/* WARNING: Removing unreachable block (ram,0x0001619dc7e9) */
/* WARNING: Removing unreachable block (ram,0x0001619dc80e) */
/* WARNING: Removing unreachable block (ram,0x0001619dc817) */
/* WARNING: Removing unreachable block (ram,0x0001619dc86a) */
/* WARNING: Removing unreachable block (ram,0x0001619dc870) */
/* WARNING: Removing unreachable block (ram,0x0001619dc8c6) */
/* WARNING: Removing unreachable block (ram,0x0001619dc8fb) */
/* WARNING: Removing unreachable block (ram,0x0001619dc91a) */
/* WARNING: Removing unreachable block (ram,0x0001619dc920) */
/* WARNING: Removing unreachable block (ram,0x00015703d76d) */
/* WARNING: Removing unreachable block (ram,0x000156ddaae8) */

undefined8 FUN_14db1a64a(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1569081c5(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                        ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x70)) &
                         (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
  return uVar1;
}



// FUNCTION 14db1a817 FUN_14db1a817 body=181 status=ok
// SIG undefined FUN_14db1a817(void)

void FUN_14db1a817(void)

{
  return;
}



// FUNCTION 14db1a965 FUN_14db1a965 body=138 status=ok
// SIG undefined FUN_14db1a965(void)

void FUN_14db1a965(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = 0xffffffffffffffff - (~uVar1 | param_1);
  FUN_1662d3de1((char)param_1,param_2,~uVar2 & ~(~uVar1 & ~param_1 | uVar1) | uVar2,
                ~(param_4 & param_1) & (unaff_RSI + param_4 | param_1));
  return;
}



// FUNCTION 14db1a9ef FUN_14db1a9ef body=136 status=ok
// SIG undefined FUN_14db1a9ef(void)

void FUN_14db1a9ef(void)

{
  longlong in_R9;
  
  if (in_R9 == 0x126fc6) {
    FUN_165e93f27();
    return;
  }
  return;
}



// FUNCTION 14db1aa78 FUN_14db1aa78 body=132 status=ok
// SIG undefined FUN_14db1aa78(void)

void FUN_14db1aa78(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~(param_3 + param_4 + param_2);
  lVar1 = (*(ulonglong *)(unaff_R13 + -0x60) - unaff_R15) +
          (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) * -2 + -2;
  FUN_161247cd7((0xffffffffffffffff - uVar2 | ~(in_R10 & unaff_R15)) + uVar2 + 1,lVar1,lVar1,lVar1);
  return;
}



// FUNCTION 14db1ab8f FUN_14db1ab8f body=320 status=ok
// SIG undefined FUN_14db1ab8f(void)

/* WARNING: Removing unreachable block (ram,0x00014db1ac3c) */

void FUN_14db1ab8f(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = FUN_16637a1d6(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  FUN_1626030dc(*(ulonglong *)(unaff_R12 + -0x80) + uVar1 +
                (*(ulonglong *)(unaff_R12 + -0x80) & uVar1) * -2);
  return;
}



// FUNCTION 14db1ae2e FUN_14db1ae2e body=167 status=ok
// SIG undefined FUN_14db1ae2e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db1ae2e(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  ulonglong in_R10;
  ulonglong unaff_R15;
  
  *(ulonglong *)(in_RAX + 8) = ~*(ulonglong *)(in_RAX + 8);
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) | unaff_R15;
  *(ulonglong *)(in_RAX + 8) = ~(in_R10 & *(ulonglong *)(in_RAX + 8));
  FUN_166c837c3(0x10,param_2,FUN_166c837c3);
  return;
}



// FUNCTION 14db1b14e FUN_14db1b14e body=484 status=ok
// SIG undefined FUN_14db1b14e(void)

/* WARNING: Removing unreachable block (ram,0x000161436d61) */
/* WARNING: Removing unreachable block (ram,0x000162809fb6) */
/* WARNING: Removing unreachable block (ram,0x00014db1b1f6) */
/* WARNING: Removing unreachable block (ram,0x00014db1b1fc) */
/* WARNING: Removing unreachable block (ram,0x00014db1b27a) */
/* WARNING: Removing unreachable block (ram,0x00014db1b27f) */
/* WARNING: Removing unreachable block (ram,0x00014db1b285) */
/* WARNING: Removing unreachable block (ram,0x00014db1b28a) */
/* WARNING: Removing unreachable block (ram,0x00014db1b2bd) */
/* WARNING: Removing unreachable block (ram,0x00014db1b2ca) */
/* WARNING: Removing unreachable block (ram,0x00015b13851a) */
/* WARNING: Removing unreachable block (ram,0x00015b138520) */
/* WARNING: Removing unreachable block (ram,0x000161436d71) */
/* WARNING: Removing unreachable block (ram,0x00016280a0cd) */
/* WARNING: Removing unreachable block (ram,0x00016280a109) */

undefined8 FUN_14db1b14e(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong unaff_RBX;
  ulonglong uVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  char unaff_retaddr;
  ulonglong uStackX_8;
  
  uVar7 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar9 = ~(*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x68) | unaff_R15);
  if (unaff_retaddr < '\0') {
    uVar5 = FUN_162809fb6(param_1,uVar7,0);
    return uVar5;
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar5 = *(undefined8 *)(unaff_R13 + -8);
  uVar4 = *(undefined8 *)(unaff_R13 + -0x98);
  uVar6 = FUN_162bb1eb2(param_1,uVar7,param_3);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) & unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) = ((uVar3 ^ unaff_R15) + unaff_R15) - *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) =
       ~((~(uVar2 ^ unaff_R15) | ~*(ulonglong *)(unaff_RBX + 8)) ^ 0xffffffffffffffff);
  uVar2 = uStackX_8 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = uVar6;
  *(undefined8 *)(uVar2 - 0x10) = param_1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(code **)(uVar2 - 0x20) = FUN_15b1383f8;
  FUN_1667f1777();
  puVar8 = (ulonglong *)(uVar7 + (*(ulonglong *)(uVar2 - 0x10) ^ 0x13e36dfd));
  puVar8[-1] = uVar5;
  uVar5 = puVar8[-1];
  *(int *)puVar8 = 0x7d84d025;
  puVar8[-1] = uVar4;
  puVar8[-2] = unaff_R12;
  *(int *)puVar8 = (int)*puVar8 + 0x12692cd6;
  *(int *)((longlong)puVar8 + 4) = 0;
  puVar8[-1] = unaff_R14;
  uVar1 = *(uint *)((longlong)puVar8 + 4);
  *(uint *)((longlong)puVar8 + 4) = *(uint *)((longlong)puVar8 + 4) | 0x44e93be;
  *(uint *)((longlong)puVar8 + 4) = ~(~(uVar1 & 0x44e93be) & *(uint *)((longlong)puVar8 + 4));
  uVar2 = puVar8[-1];
  *(int *)((longlong)puVar8 + 4) = *(int *)((longlong)puVar8 + 4) + 0x44e93be;
  *puVar8 = puVar8[-2];
  puVar8[-1] = (ulonglong)FUN_15b13848c;
  uVar7 = FUN_15732273d();
  *puVar8 = param_4;
  *puVar8 = *(ulonglong *)(uVar9 - 0x58);
  *puVar8 = uVar2;
  uVar2 = *puVar8;
  *puVar8 = uVar7;
  puVar8[-1] = CONCAT71((int7)((ulonglong)uVar5 >> 8),(char)uVar2);
  *puVar8 = *(ulonglong *)(uVar9 - 0x60);
  uVar5 = FUN_16124a086(&DAT_ac91427a73ca2b2b,0x536ebd858c35d4d5,
                        ~((*(ulonglong *)(uVar9 - 0x70) | 0x536ebd858c35d4d4) &
                         (*(ulonglong *)(uVar9 - 0x70) ^ 0xffffffffffffffff | 0xac91427a73ca2b2b)),
                        ~(*puVar8 & 0xac91427a73ca2b2b) & (*puVar8 | 0xac91427a73ca2b2b));
  return uVar5;
}



// FUNCTION 14db1b336 FUN_14db1b336 body=123 status=ok
// SIG undefined FUN_14db1b336(void)

void FUN_14db1b336(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x30) & param_1;
  uVar1 = uVar1 << 1 | uVar1 >> 0x3f;
  FUN_15b37c7b6(param_1,param_2,
                (*(ulonglong *)(unaff_RDI + -0x30) + param_1) -
                ((-2 - (uVar1 | 0xfffffffffffffffe)) + uVar1));
  FUN_14db1b3b5();
  return;
}



// FUNCTION 14db1b3b5 FUN_14db1b3b5 body=134 status=ok
// SIG undefined FUN_14db1b3b5(void)

void FUN_14db1b3b5(undefined8 param_1)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_165f2340e(param_1,unaff_RSI + (unaff_RBP + 1) * -2,*(undefined8 *)(unaff_RDI + -8));
  return;
}



// FUNCTION 14db1b4ef FUN_14db1b4ef body=51 status=ok
// SIG undefined FUN_14db1b4ef(void)

/* WARNING: Removing unreachable block (ram,0x00014db1b50b) */

undefined8 FUN_14db1b4ef(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14db1b614 FUN_14db1b614 body=288 status=ok
// SIG undefined FUN_14db1b614(void)

void FUN_14db1b614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res10;
  longlong in_stack_00000028;
  
  FUN_166af800c(param_1,local_res10);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBP;
  *(undefined1 **)(in_stack_00000028 + -0x20) = &LAB_1664738f9;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R15;
  *(code **)(in_stack_00000028 + -0x28) = FUN_14db1b736;
  uVar1 = FUN_166473899(in_R11);
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar1;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0x2fa88429;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar1;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0xad5537ae;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0xffffffff;
  *(undefined8 *)(in_stack_00000028 + -0x18) = 0x684773;
  thunk_FUN_1653ee33f();
  return;
}



// FUNCTION 14db1b736 FUN_14db1b736 body=163 status=ok
// SIG undefined FUN_14db1b736(void)

void FUN_14db1b736(void)

{
  thunk_FUN_1653ee33f();
  return;
}



// FUNCTION 14db1b7dc FUN_14db1b7dc body=149 status=ok
// SIG undefined FUN_14db1b7dc(void)

void FUN_14db1b7dc(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b9ec4c7(param_1,*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db1b873 FUN_14db1b873 body=209 status=ok
// SIG undefined FUN_14db1b873(void)

/* WARNING: Removing unreachable block (ram,0x000162e608fe) */
/* WARNING: Removing unreachable block (ram,0x00014db1b911) */

void FUN_14db1b873(void)

{
  longlong unaff_R12;
  undefined1 local_res8 [32];
  
  if (-1 < *(longlong *)(unaff_R12 + -0x50)) {
    FUN_162e60865();
    return;
  }
  if (local_res8 < &DAT_00000008) {
    return;
  }
  FUN_15b464f34();
  return;
}



// FUNCTION 14db1b9b5 thunk_FUN_14db1b9bb body=5 status=ok
// SIG undefined thunk_FUN_14db1b9bb(void)

void thunk_FUN_14db1b9bb(void)

{
  FUN_162f4d51c();
  FUN_160e390ab();
  return;
}



// FUNCTION 14db1b9bb FUN_14db1b9bb body=125 status=ok
// SIG undefined FUN_14db1b9bb(void)

void FUN_14db1b9bb(void)

{
  FUN_162f4d51c();
  FUN_160e390ab();
  return;
}



// FUNCTION 14db1ba3a FUN_14db1ba3a body=166 status=ok
// SIG undefined FUN_14db1ba3a(void)

void FUN_14db1ba3a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_160e390ab(param_1,*(ulonglong *)(unaff_RDI + -0xa0) | param_1,param_3,param_4);
  return;
}



// FUNCTION 14db1bae0 FUN_14db1bae0 body=117 status=ok
// SIG undefined FUN_14db1bae0(void)

void FUN_14db1bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_157338e94)(param_1,param_2,local_res8,param_4);
  return;
}



// FUNCTION 14db1bb56 FUN_14db1bb56 body=114 status=ok
// SIG undefined FUN_14db1bb56(void)

/* WARNING: Removing unreachable block (ram,0x00014db1bb8d) */

void FUN_14db1bb56(void)

{
  return;
}



// FUNCTION 14db1bbc9 FUN_14db1bbc9 body=122 status=ok
// SIG undefined FUN_14db1bbc9(void)

void FUN_14db1bbc9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161b04f9c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db1bea8 FUN_14db1bea8 body=72 status=ok
// SIG undefined FUN_14db1bea8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db1bea8(undefined8 param_1,char param_2,ulonglong *param_3)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  char *unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x14db1bf09;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *param_3 = *param_3 ^ (ulonglong)param_3;
  *unaff_retaddr = *unaff_retaddr + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db1bf4f FUN_14db1bf4f body=300 status=ok
// SIG undefined FUN_14db1bf4f(void)

/* WARNING: Removing unreachable block (ram,0x00014db1bff1) */

void FUN_14db1bf4f(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) + param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) & param_1;
  if (uVar2 < uVar1 * 2) {
    FUN_161cfa732();
    return;
  }
  thunk_FUN_15af2fe81(param_1,uVar2 + uVar1 * -2);
  return;
}



// FUNCTION 14db1c07b FUN_14db1c07b body=25 status=ok
// SIG undefined FUN_14db1c07b(void)

void FUN_14db1c07b(void)

{
  return;
}



// FUNCTION 14db1c120 FUN_14db1c120 body=397 status=ok
// SIG undefined FUN_14db1c120(void)

/* WARNING: Removing unreachable block (ram,0x0001655d0276) */
/* WARNING: Removing unreachable block (ram,0x000166bf78b2) */

ulonglong FUN_14db1c120(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38) ^ CONCAT62(unaff_000000ba,unaff_R15W);
  if (*(longlong *)(unaff_R13 + -0x48) != 0) {
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14db1c1da FUN_14db1c1da body=163 status=ok
// SIG undefined FUN_14db1c1da(void)

void FUN_14db1c1da(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1617b78c5(param_1,0xffffffffffffff78,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                ~(~*(ulonglong *)(unaff_R13 + -0x60) | ~unaff_R15) * -2);
  return;
}



// FUNCTION 14db1c27e FUN_14db1c27e body=157 status=ok
// SIG undefined FUN_14db1c27e(void)

void FUN_14db1c27e(ulonglong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  
  FUN_1572daeaf(param_1 << 6 | param_1 >> 0x3b,
                ~((param_4 | 0xffffffffda0562f4) & (~param_4 | 0x25fa9d0b)),param_3,
                *(undefined8 *)(unaff_R13 + -0x60));
  FUN_14db1c31e();
  return;
}



// FUNCTION 14db1c31e FUN_14db1c31e body=406 status=ok
// SIG undefined FUN_14db1c31e(void)

/* WARNING: Removing unreachable block (ram,0x00014db1c403) */

void FUN_14db1c31e(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar4;
  ulonglong local_res10;
  uint in_stack_00000018;
  ulonglong local_res20;
  undefined2 in_stack_00000048;
  
  *(undefined8 *)(unaff_RSI + 0x10) = unaff_RDI;
  puVar2 = &local_res20;
  uVar4 = CONCAT62((int6)((ulonglong)unaff_R15 >> 0x10),~((~(ushort)local_res20 | 0xfeff) + 0x101));
  FUN_161c68515(puVar2,param_2);
  param_4 = param_4 ^ uVar4;
  bVar1 = (byte)puVar2 & 0x1f;
  uVar3 = (ulonglong)
          CONCAT22((ushort)((((ulonglong)puVar2 & 0xffffffff) << bVar1) >> 0x10) |
                   (ushort)((((ulonglong)puVar2 & 0xffffffff) >> 0x21 - bVar1) >> 0x10),
                   in_stack_00000048);
  FUN_160d9c761(uVar3,in_stack_00000048,uVar4 ^ 0x4ce3ff415f410824);
  local_res10 = (ulonglong)in_stack_00000018;
  *(undefined8 *)((longlong)&local_res20 + (local_res10 ^ 0x77b6fafd)) = 0;
  puVar2 = (ulonglong *)((longlong)&local_res20 + (local_res10 ^ 0x77b6fafd));
  *puVar2 = *puVar2 ^ uVar3;
  uVar3 = local_res20;
  local_res20 = param_4;
  FUN_14d7ab040(uVar3);
  return;
}



// FUNCTION 14db1c6d9 FUN_14db1c6d9 body=175 status=ok
// SIG undefined FUN_14db1c6d9(void)

undefined8 FUN_14db1c6d9(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14db1c789 FUN_14db1c789 body=132 status=ok
// SIG undefined FUN_14db1c789(void)

undefined8 FUN_14db1c789(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 in_R10;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  *(undefined8 *)(in_stack_00000028 - 8) = local_res10;
  *(undefined1 **)(in_stack_00000028 - 0x10) = &LAB_1569b260a;
  *(undefined1 **)(in_stack_00000028 - 0x18) = &LAB_1569b260a;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = in_R10;
  *(undefined8 *)(in_stack_00000028 - 0x28) = 0x1569b2587;
  return uVar1;
}



// FUNCTION 14db1c93d FUN_14db1c93d body=508 status=ok
// SIG undefined FUN_14db1c93d(void)

/* WARNING: Removing unreachable block (ram,0x00014db1cc00) */
/* WARNING: Removing unreachable block (ram,0x00014db1cc06) */
/* WARNING: Removing unreachable block (ram,0x00014db1ca44) */
/* WARNING: Removing unreachable block (ram,0x00014db1ca4a) */
/* WARNING: Removing unreachable block (ram,0x00014db1cb60) */
/* WARNING: Removing unreachable block (ram,0x000162467742) */
/* WARNING: Removing unreachable block (ram,0x0001624677cb) */
/* WARNING: Removing unreachable block (ram,0x0001624677d1) */
/* WARNING: Removing unreachable block (ram,0x00014de71c0a) */
/* WARNING: Removing unreachable block (ram,0x00014de71d3b) */
/* WARNING: Removing unreachable block (ram,0x00014de71d40) */
/* WARNING: Removing unreachable block (ram,0x00014de71d46) */
/* WARNING: Removing unreachable block (ram,0x00014dcbaf15) */
/* WARNING: Removing unreachable block (ram,0x00014dcbafb5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb04a) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb051) */
/* WARNING: Removing unreachable block (ram,0x000161d7c507) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb059) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb0e9) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb0ee) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb0f4) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb0f9) */
/* WARNING: Removing unreachable block (ram,0x00014db1cb66) */
/* WARNING: Removing unreachable block (ram,0x00014db1cbfb) */
/* WARNING: Removing unreachable block (ram,0x00014de835ea) */

void FUN_14db1c93d(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_1656e0304();
  FUN_14df6885d(FUN_14df6885d,unaff_R15 + 0x14d7c1ac1 + (param_2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db1cac6 FUN_14db1cac6 body=891 status=ok
// SIG undefined FUN_14db1cac6(void)

/* WARNING: Removing unreachable block (ram,0x00014db1cc00) */
/* WARNING: Removing unreachable block (ram,0x00014db1cc06) */
/* WARNING: Removing unreachable block (ram,0x00014db1cb66) */
/* WARNING: Removing unreachable block (ram,0x00014db1cbfb) */
/* WARNING: Removing unreachable block (ram,0x00014de835ea) */
/* WARNING: Removing unreachable block (ram,0x00014de71d46) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb0f9) */
/* WARNING: Removing unreachable block (ram,0x0001624677d1) */

void FUN_14db1cac6(undefined8 param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong unaff_RDI;
  ulonglong uVar9;
  ulonglong in_R10;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 in_R11;
  undefined8 unaff_R14;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong uStackX_20;
  
  uVar10 = *(ulonglong *)(param_3 + -0xa0);
  uVar11 = *(ulonglong *)(param_3 + -8) + in_R10 + (*(ulonglong *)(param_3 + -8) & in_R10) * -2;
  puVar3 = (undefined8 *)(~(uStackX_20 & in_R10) & (uStackX_20 | in_R10));
  bVar15 = (uVar11 & 0x4000) != 0;
  bVar14 = (uVar11 & 0x200) != 0;
  bVar13 = 0;
  bVar12 = (uVar11 & 0x10) != 0;
  bVar19 = (uVar11 & 0x200000) != 0;
  bVar16 = (uVar11 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  puVar3[-1] = in_RAX;
  puVar3[-2] = unaff_R14;
  puVar3[-2] = puVar3[-2];
  puVar3[-3] = 0x14de71ca9;
  uVar7 = FUN_164761905(local_res10,param_2,(uVar10 - in_R10) + (~in_R10 | uVar10) * -2 + -2,param_4
                       );
  *(undefined4 *)((longlong)puVar3 - 0xc) = 0;
  uVar10 = *(ulonglong *)
            (unaff_RDI +
            ~((~(puVar3[-2] ^ 0x1e76b3d5) | param_2) & (~param_2 | puVar3[-2] ^ 0x1e76b3d5))) ^
           local_res10;
  puVar3[-2] = uVar7;
  puVar3[-3] = in_stack_00000008;
  puVar3[-2] = puVar3[-2];
  puVar3[-3] = puVar3[-3];
  if (unaff_RDI - 0x550bU < 0xfffffffffffff4c4) {
    FUN_14dcbaf15();
    return;
  }
  plVar1 = puVar3 + -1;
  uVar9 = *(ulonglong *)(unaff_RDI + -0x70) ^ local_res10;
  puVar3[-2] = *(undefined8 *)(unaff_RDI + -0x80);
  uVar6 = puVar3[-2];
  lVar8 = -1 - ((~local_res10 + uVar6) - (~local_res10 & uVar6) & (~uVar6 | local_res10));
  puVar3[-2] = lVar8;
  puVar3[-3] = lVar8;
  lVar8 = -0x68;
  puVar3[-2] = 0x14dcbafa1;
  uVar6 = FUN_161e06ff7();
  lVar4 = *plVar1;
  *plVar1 = -lVar8;
  lVar8 = *plVar1;
  uVar7 = *puVar3;
  *(undefined8 *)((longlong)puVar3 + lVar8 + 0x10) = puVar3[1];
  puVar2 = (ulonglong *)((longlong)puVar3 + lVar8 + 8);
  *puVar2 = uVar6;
  *(undefined4 *)puVar2 = 0x39f01c3f;
  *(undefined4 *)((longlong)puVar3 + lVar8 + 0xc) = 0;
  uVar6 = *puVar2;
  *(ulonglong *)((longlong)puVar3 + lVar8 + 8) = uVar10;
  *(undefined8 *)((longlong)puVar3 + lVar8) = in_R11;
  *(ulonglong *)((longlong)puVar3 + lVar8 + -8) =
       (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)((uVar11 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar14 & 1) * 0x200 | (ulonglong)(bVar13 & 1) * 0x100 | 0x80 |
       (ulonglong)(bVar12 & 1) * 0x10 | 4 | (ulonglong)(bVar19 & 1) * 0x200000 |
       (ulonglong)(bVar18 & 1) * 0x100000 | (ulonglong)(bVar17 & 1) * 0x80000 |
       (ulonglong)(bVar16 & 1) * 0x40000;
  *(longlong *)((longlong)puVar3 + lVar8 + -0x10) = unaff_RDI;
  if ((*(ushort *)((longlong)puVar3 + lVar8 + -8) & 1) == 0) {
    FUN_161d7c507();
    return;
  }
  lVar5 = *(longlong *)((longlong)puVar3 + lVar8 + -0x10);
  uVar10 = *(ulonglong *)((longlong)puVar3 + lVar8 + -8);
  if ((uVar10 & 1) != 0 || (uVar10 & 0x40) != 0) {
    *(ulonglong *)((longlong)puVar3 + lVar8) = uVar9;
    *(undefined8 *)((longlong)puVar3 + lVar8 + -8) = uVar7;
    *(longlong *)((longlong)puVar3 + lVar8 + -8) = lVar4;
    uVar7 = *(undefined8 *)((longlong)puVar3 + lVar8 + 8);
    *(undefined8 *)((longlong)puVar3 + lVar8 + 8) = *(undefined8 *)((longlong)puVar3 + lVar8);
    *(undefined8 *)((longlong)puVar3 + lVar8) = uVar7;
    *(undefined8 *)((longlong)puVar3 + lVar8) = *(undefined8 *)((longlong)puVar3 + lVar8 + -8);
    *(undefined1 **)((longlong)puVar3 + lVar8 + -8) = &LAB_164b0de81;
    return;
  }
  *(undefined8 *)((longlong)puVar3 + lVar8) = *(undefined8 *)(lVar5 + -0x40);
  uVar10 = *(ulonglong *)(lVar5 + -0x50);
  lVar8 = uVar10 + uVar6;
  if (CARRY8(uVar10,uVar6)) {
    FUN_1564969de(uVar6,lVar8);
    return;
  }
  FUN_1564969de(uVar6,lVar8);
  return;
}



// FUNCTION 14db1cd37 FUN_14db1cd37 body=192 status=ok
// SIG undefined FUN_14db1cd37(void)

/* WARNING: Removing unreachable block (ram,0x00014db1cde8) */

void FUN_14db1cd37(void)

{
  return;
}



// FUNCTION 14db1d008 FUN_14db1d008 body=94 status=ok
// SIG undefined FUN_14db1d008(void)

void FUN_14db1d008(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined1 local_res18;
  ulonglong in_stack_00000028;
  
  LOCK();
  DAT_14d7a9b1b = local_res18;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + in_RAX + (in_stack_00000028 & in_RAX) * -2 + -8) = 0x2a659fe;
  FUN_14d85d504(param_1);
  return;
}



// FUNCTION 14db1d147 FUN_14db1d147 body=143 status=ok
// SIG undefined FUN_14db1d147(void)

void FUN_14db1d147(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_1621b7adf(local_res10,param_2,local_res8,FUN_1621b7adf);
  return;
}



// FUNCTION 14db1d1d8 FUN_14db1d1d8 body=153 status=ok
// SIG undefined FUN_14db1d1d8(void)

void FUN_14db1d1d8(void)

{
  FUN_156f9bc46();
  return;
}



// FUNCTION 14db1d278 FUN_14db1d278 body=594 status=ok
// SIG undefined FUN_14db1d278(void)

/* WARNING: Removing unreachable block (ram,0x00014db1d383) */
/* WARNING: Removing unreachable block (ram,0x00014db1d3c8) */
/* WARNING: Removing unreachable block (ram,0x0001662572f5) */
/* WARNING: Removing unreachable block (ram,0x00014db1d3fe) */

void FUN_14db1d278(void)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = FUN_166aa9f02();
  if ((uVar1 & unaff_R15) == 0xffffffffffffffff) {
    FUN_166de84e3();
    return;
  }
  FUN_166de84e3();
  return;
}



// FUNCTION 14db1d85e FUN_14db1d85e body=318 status=ok
// SIG undefined FUN_14db1d85e(void)

/* WARNING: Removing unreachable block (ram,0x0001663a4821) */
/* WARNING: Removing unreachable block (ram,0x0001663a4810) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000165cce5e9 */
/* WARNING: Removing unreachable block (ram,0x00014db1d8f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db1d85e(void)

{
  longlong in_stack_00000008;
  
  if (-1 < in_stack_00000008) {
    FUN_1663a4775();
    return;
  }
  FUN_15b4689f8();
  return;
}



// FUNCTION 14db1d99c FUN_14db1d99c body=22 status=ok
// SIG undefined FUN_14db1d99c(void)

void FUN_14db1d99c(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db1da3b FUN_14db1da3b body=398 status=ok
// SIG undefined FUN_14db1da3b(void)

/* WARNING: Removing unreachable block (ram,0x000161543e3c) */
/* WARNING: Removing unreachable block (ram,0x000161543e47) */
/* WARNING: Removing unreachable block (ram,0x000161543e42) */
/* WARNING: Removing unreachable block (ram,0x00016504d70c) */
/* WARNING: Removing unreachable block (ram,0x00016504d803) */

undefined8 FUN_14db1da3b(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined4 in_R11D;
  longlong lVar2;
  longlong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong in_stack_00000008;
  ulonglong local_res18 [2];
  
  *(undefined4 *)((longlong)local_res18 + (in_stack_00000008 ^ 0x1caafdb3)) = in_R11D;
  if (local_res18[0] == 0x432a3634) {
    local_res18[0] =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar1 = (*(code *)0x16504d6e6)();
    return uVar1;
  }
  FUN_165348573();
  lVar2 = -~param_1 - (~*(ulonglong *)(unaff_RDI + -0x98) + 2);
  if (lVar2 == 0) {
    uVar1 = FUN_161543d9e();
    return uVar1;
  }
  uVar1 = (*(code *)0x14d924e3f)
                    (lVar2 + ~(~*(ulonglong *)(unaff_RDI + -0x98) | ~param_1) * -2,param_2,param_3,
                     -unaff_R12,local_res18[0]);
  return uVar1;
}



// FUNCTION 14db1dac8 FUN_14db1dac8 body=120 status=ok
// SIG undefined FUN_14db1dac8(void)

void FUN_14db1dac8(void)

{
  FUN_157211972();
  return;
}



// FUNCTION 14db1db40 FUN_14db1db40 body=65 status=ok
// SIG undefined FUN_14db1db40(void)

undefined8 FUN_14db1db40(void)

{
  longlong unaff_RBX;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) ^ 0xffffffffffffffff;
  return in_stack_00000010;
}



// FUNCTION 14db1dbcf FUN_14db1dbcf body=187 status=ok
// SIG undefined FUN_14db1dbcf(void)

/* WARNING: Removing unreachable block (ram,0x00014db1dc8e) */

void FUN_14db1dbcf(void)

{
  byte in_SF;
  
  if ((in_SF & 1) == 0) {
    FUN_16218ad45();
    return;
  }
  FUN_16218ad45();
  return;
}



// FUNCTION 14db1dc95 FUN_14db1dc95 body=158 status=ok
// SIG undefined FUN_14db1dc95(void)

void FUN_14db1dc95(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162f13b07(~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) |
                ~(*(ulonglong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffff | unaff_R15),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14db1ddc7 FUN_14db1ddc7 body=166 status=ok
// SIG undefined FUN_14db1ddc7(void)

void FUN_14db1ddc7(void)

{
  ushort *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  code *pcVar5;
  undefined8 uVar6;
  longlong in_R10;
  longlong lVar7;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RDI;
  uVar2 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x1b91c18f;
  *(undefined8 *)(local_res18 + -0x18) = in_R9;
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x20);
  pcVar5 = FUN_160ba2663;
  *(code **)(local_res18 + -0x28) = FUN_14db1de6e;
  FUN_160ba2663();
  uVar6 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x28) = uVar6;
  puVar1 = (ushort *)(local_res18 + -0x18);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *(code **)(local_res18 + -0x30) = pcVar5;
  *puVar1 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1;
  uVar6 = *(undefined8 *)(local_res18 + -0x30);
  lVar3 = *(longlong *)(local_res18 + -0x20);
  plVar4 = *(longlong **)(local_res18 + -0x10);
  plVar4[-1] = local_res8;
  plVar4[-2] = in_R10;
  plVar4[-3] = in_R10;
  lVar7 = plVar4[-1];
  plVar4[-4] = lVar3;
  plVar4[-5] = 0x14db1df12;
  FUN_1622c0850(&LAB_15741b9a9);
  *(ulonglong *)(unaff_R12 + 0x10) = ~(in_R11 & *(ulonglong *)(unaff_R12 + 0x10));
  lVar3 = plVar4[-4];
  plVar4[-2] = uVar6;
  plVar4[-3] = lVar7;
  plVar4[-4] = uVar2;
  puVar1 = (ushort *)(plVar4 + -1);
  *puVar1 = (~(*puVar1 | 0xfeff) - 0x100) + *puVar1;
  lVar7 = *plVar4;
  *(longlong *)(lVar7 + -8) = lVar3;
  *(undefined8 *)(lVar7 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar7 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(lVar7 + -8);
  *(undefined **)(lVar7 + -0x20) = &DAT_160ba26be;
  *(undefined **)(lVar7 + -0x28) = &DAT_160ba26be;
  *(undefined **)(lVar7 + -0x30) = &DAT_160ba26be;
  *(code **)(lVar7 + -0x20) = FUN_14db1dfcb;
  *(undefined1 **)(lVar7 + -0x28) = &LAB_1655fe721;
  return;
}



// FUNCTION 14db1de6e FUN_14db1de6e body=348 status=ok
// SIG undefined FUN_14db1de6e(void)

void FUN_14db1de6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  longlong lVar2;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R10;
  longlong lVar3;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  longlong *local_res10;
  
  local_res10[-1] = param_1;
  local_res10[-2] = in_R10;
  local_res10[-3] = in_R10;
  lVar3 = local_res10[-1];
  local_res10[-4] = unaff_RBP;
  local_res10[-5] = 0x14db1df12;
  FUN_1622c0850(&LAB_15741b9a9);
  *(ulonglong *)(unaff_R12 + 0x10) = ~(in_R11 & *(ulonglong *)(unaff_R12 + 0x10));
  lVar2 = local_res10[-4];
  local_res10[-2] = param_4;
  local_res10[-3] = lVar3;
  local_res10[-4] = unaff_RDI;
  puVar1 = (ushort *)(local_res10 + -1);
  *puVar1 = (~(*puVar1 | 0xfeff) - 0x100) + *puVar1;
  lVar3 = *local_res10;
  *(longlong *)(lVar3 + -8) = lVar2;
  *(undefined8 *)(lVar3 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar3 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x20) = unaff_R13;
  *(undefined8 *)(lVar3 + -0x28) = unaff_R13;
  *(undefined8 *)(lVar3 + -0x30) = unaff_R13;
  *(code **)(lVar3 + -0x20) = FUN_14db1dfcb;
  *(undefined1 **)(lVar3 + -0x28) = &LAB_1655fe721;
  return;
}



// FUNCTION 14db1dfcb FUN_14db1dfcb body=476 status=ok
// SIG undefined FUN_14db1dfcb(void)

/* WARNING: Removing unreachable block (ram,0x0001657d8f02) */
/* WARNING: Removing unreachable block (ram,0x00014db1e080) */
/* WARNING: Removing unreachable block (ram,0x00014db1e08a) */
/* WARNING: Removing unreachable block (ram,0x00014db1e07a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14db1dfcb(void)

{
  code *pcVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  pcVar1 = FUN_156f33e94;
  FUN_156f33e94((~(0xffffffffffffffff - unaff_R15 & *(ulonglong *)(unaff_R13 + -0x50)) +
                *(ulonglong *)(unaff_R13 + -0x50)) - ~(0xffffffffffffffff - unaff_R15),
                ~(0xffffffffffffffff -
                 (~(unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) |
                 ~(~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15))));
  return (~((ulonglong)pcVar1 & unaff_R15) + unaff_R15) - ~(ulonglong)pcVar1;
}



// FUNCTION 14db1e080 FUN_14db1e080 body=10 status=ok
// SIG undefined FUN_14db1e080(void)

void FUN_14db1e080(void)

{
  return;
}



// FUNCTION 14db1e0fa FUN_14db1e0fa body=346 status=ok
// SIG undefined FUN_14db1e0fa(void)

/* WARNING: Removing unreachable block (ram,0x00014db1e198) */

undefined8 FUN_14db1e0fa(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff;
  uVar1 = FUN_166180eb5(param_1,~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x68))
                                 & (uVar2 + param_1) - (uVar2 & param_1)),FUN_166180eb5);
  return uVar1;
}



// FUNCTION 14db1e448 FUN_14db1e448 body=153 status=ok
// SIG undefined FUN_14db1e448(void)

void FUN_14db1e448(void)

{
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  undefined8 in_R9;
  undefined8 in_R10;
  ushort *unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | 0x100;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *(ulonglong *)(local_res20 + -8) = CONCAT71(unaff_00000039,unaff_DIL);
  *(undefined8 *)(local_res20 + -0x10) = in_R9;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x28) = in_R10;
  *(undefined8 *)(local_res20 + -0x30) = in_R10;
  *(code **)(local_res20 + -0x28) = FUN_14db1e4e2;
  (*(code *)0x157177915)();
  return;
}



// FUNCTION 14db1e4e2 FUN_14db1e4e2 body=207 status=ok
// SIG undefined FUN_14db1e4e2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db1e4e2(void)

{
  char in_R11B;
  longlong unaff_R12;
  char local_res8 [32];
  
  local_res8[unaff_R12] = '\0';
  local_res8[unaff_R12] = local_res8[unaff_R12];
  local_res8[unaff_R12] = local_res8[unaff_R12] + in_R11B;
  return;
}



// FUNCTION 14db1e88e FUN_14db1e88e body=259 status=ok
// SIG undefined FUN_14db1e88e(void)

void FUN_14db1e88e(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  
  FUN_1660a8be1(param_1,0x5c0f186b,(~unaff_RBP | ~(~unaff_RBX & param_3)) + unaff_RBP + 1);
  FUN_156f8113e(0xffffffffffffffff);
  return;
}



// FUNCTION 14db1ea31 FUN_14db1ea31 body=248 status=ok
// SIG undefined FUN_14db1ea31(void)

void FUN_14db1ea31(undefined8 param_1)

{
  FUN_14e03e589(param_1);
  FUN_14dbb4cfd();
  return;
}



// FUNCTION 14db1ebb2 FUN_14db1ebb2 body=167 status=ok
// SIG undefined FUN_14db1ebb2(void)

void FUN_14db1ebb2(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = param_1 + *(longlong *)(unaff_R12 + -0x58);
  FUN_15689df0d(~(uVar1 & in_RAX) & (~in_RAX & uVar1 | in_RAX),0x3c290cc2);
  return;
}



// FUNCTION 14db1ec5a FUN_14db1ec5a body=175 status=ok
// SIG undefined FUN_14db1ec5a(void)

ushort FUN_14db1ec5a(void)

{
  ushort in_AX;
  
  return in_AX >> 9 | in_AX << 8;
}



// FUNCTION 14db1eedd FUN_14db1eedd body=386 status=ok
// SIG undefined FUN_14db1eedd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164b5167e) */
/* WARNING: Removing unreachable block (ram,0x000164b51684) */
/* WARNING: Removing unreachable block (ram,0x000164b51693) */
/* WARNING: Removing unreachable block (ram,0x00016612c58d) */
/* WARNING: Removing unreachable block (ram,0x00016612c598) */
/* WARNING: Removing unreachable block (ram,0x00016612c62a) */
/* WARNING: Removing unreachable block (ram,0x00016612c635) */
/* WARNING: Removing unreachable block (ram,0x00016612c6d0) */
/* WARNING: Removing unreachable block (ram,0x00016612c6d6) */
/* WARNING: Removing unreachable block (ram,0x000162e861ed) */
/* WARNING: Removing unreachable block (ram,0x000162e86296) */
/* WARNING: Removing unreachable block (ram,0x000162e8629c) */
/* WARNING: Removing unreachable block (ram,0x0001613dec5a) */
/* WARNING: Removing unreachable block (ram,0x00016612c630) */
/* WARNING: Removing unreachable block (ram,0x000164b515db) */
/* WARNING: Removing unreachable block (ram,0x000156cbfd05) */
/* WARNING: Removing unreachable block (ram,0x000156cbfd94) */
/* WARNING: Removing unreachable block (ram,0x000156cbfd99) */
/* WARNING: Removing unreachable block (ram,0x000156cbfda5) */
/* WARNING: Removing unreachable block (ram,0x000161d3ebaf) */
/* WARNING: Removing unreachable block (ram,0x00016612c593) */
/* WARNING: Removing unreachable block (ram,0x000164b0bdd0) */
/* WARNING: Removing unreachable block (ram,0x000164b0be50) */
/* WARNING: Removing unreachable block (ram,0x000164b0be55) */
/* WARNING: Removing unreachable block (ram,0x00014d7c28e1) */
/* WARNING: Removing unreachable block (ram,0x000162a3b8fb) */
/* WARNING: Removing unreachable block (ram,0x000162a3b98e) */
/* WARNING: Removing unreachable block (ram,0x000164b2a414) */
/* WARNING: Removing unreachable block (ram,0x000162a3b993) */
/* WARNING: Removing unreachable block (ram,0x000162a3b999) */
/* WARNING: Removing unreachable block (ram,0x000156e93fe8) */
/* WARNING: Removing unreachable block (ram,0x000156e93fee) */
/* WARNING: Removing unreachable block (ram,0x000156e94068) */
/* WARNING: Removing unreachable block (ram,0x000156e9406b) */
/* WARNING: Removing unreachable block (ram,0x000156e9411d) */
/* WARNING: Removing unreachable block (ram,0x000156e94123) */
/* WARNING: Removing unreachable block (ram,0x000156e94184) */
/* WARNING: Removing unreachable block (ram,0x00014d7c488d) */
/* WARNING: Removing unreachable block (ram,0x00016612c48e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00016612c506) */
/* WARNING: Removing unreachable block (ram,0x00016612c50c) */
/* WARNING: Removing unreachable block (ram,0x00015650f493) */
/* WARNING: Removing unreachable block (ram,0x000164b51698) */
/* WARNING: Removing unreachable block (ram,0x000164b5169b) */
/* WARNING: Removing unreachable block (ram,0x000164b5171c) */
/* WARNING: Removing unreachable block (ram,0x000164b51722) */
/* WARNING: Removing unreachable block (ram,0x000164b51727) */
/* WARNING: Removing unreachable block (ram,0x00014e19a117) */
/* WARNING: Removing unreachable block (ram,0x00014e19a1a3) */
/* WARNING: Removing unreachable block (ram,0x00014e19a1a8) */
/* WARNING: Removing unreachable block (ram,0x00014e19a1ae) */
/* WARNING: Removing unreachable block (ram,0x000160c0cd06) */
/* WARNING: Removing unreachable block (ram,0x00014db1ef80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db1eedd(void)

{
  undefined8 uVar1;
  
  FUN_14e0f5bde();
  FUN_1657cf7c0();
  uVar1 = FUN_164b0bdd0();
  return uVar1;
}



// FUNCTION 14db1f016 FUN_14db1f016 body=182 status=ok
// SIG undefined FUN_14db1f016(void)

void FUN_14db1f016(undefined8 param_1,undefined8 param_2)

{
  FUN_156a9b005(param_1,param_2,FUN_156a9b005);
  return;
}



// FUNCTION 14db1f1c2 FUN_14db1f1c2 body=141 status=ok
// SIG undefined FUN_14db1f1c2(void)

void FUN_14db1f1c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 in_R11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  longlong in_stack_00000038;
  
  *unaff_RDI = param_1;
  *(undefined8 *)(in_stack_00000038 + -8) = in_R11;
  *(undefined1 **)(in_stack_00000038 + -0x10) = &LAB_16482fc7b;
  *(undefined1 **)(in_stack_00000038 + -0x18) = &LAB_16482fc7b;
  *(undefined8 *)(in_stack_00000038 + -0x20) = unaff_RSI;
  uStack0000000000000028 = param_2;
  (*(code *)0x16482fc12)(in_stack_00000020,param_2,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14db1f2ef FUN_14db1f2ef body=152 status=ok
// SIG undefined FUN_14db1f2ef(void)

void FUN_14db1f2ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_1626cf3d5)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db1f421 FUN_14db1f421 body=139 status=ok
// SIG undefined FUN_14db1f421(void)

void FUN_14db1f421(void)

{
  return;
}



// FUNCTION 14db1f54f FUN_14db1f54f body=251 status=ok
// SIG undefined FUN_14db1f54f(void)

void FUN_14db1f54f(void)

{
  FUN_165163af7();
  (*(code *)&LAB_16485b208)();
  return;
}



// FUNCTION 14db1f777 thunk_FUN_14db1f77d body=5 status=ok
// SIG undefined thunk_FUN_14db1f77d(void)

void thunk_FUN_14db1f77d(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x165d17ac1)
            (param_1,0x7928d14a,
             (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
             (~*(ulonglong *)(unaff_RDI + -0x70) | param_1) ^ 0xffffffffffffffff,
             ~((~param_1 | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14db1f77d FUN_14db1f77d body=136 status=ok
// SIG undefined FUN_14db1f77d(void)

void FUN_14db1f77d(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x165d17ac1)
            (param_1,0x7928d14a,
             (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
             (~*(ulonglong *)(unaff_RDI + -0x70) | param_1) ^ 0xffffffffffffffff,
             ~((~param_1 | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14db1f97a FUN_14db1f97a body=117 status=ok
// SIG undefined FUN_14db1f97a(void)

void FUN_14db1f97a(void)

{
  longlong in_R9;
  
  if (in_R9 == 0xc79a0) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0xc79a1) {
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14db1fb43 FUN_14db1fb43 body=197 status=ok
// SIG undefined FUN_14db1fb43(void)

void FUN_14db1fb43(void)

{
  return;
}



// FUNCTION 14db1fcd9 FUN_14db1fcd9 body=47 status=ok
// SIG undefined FUN_14db1fcd9(void)

void FUN_14db1fcd9(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db1fd06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db1fffa FUN_14db1fffa body=219 status=ok
// SIG undefined FUN_14db1fffa(void)

/* WARNING: Removing unreachable block (ram,0x00014db20078) */
/* WARNING: Removing unreachable block (ram,0x00014db2007e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db1fffa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(uVar1 - 8) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined1 **)(uVar1 - 8) = &LAB_1625f48ba + *(longlong *)(uVar1 - 8);
  thunk_FUN_15b642ca5(param_1,param_2,param_3,*(undefined8 *)(uVar1 - 0x10));
  return;
}



// FUNCTION 14db2007e FUN_14db2007e body=306 status=ok
// SIG undefined FUN_14db2007e(void)

void FUN_14db2007e(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  (*(code *)0x162c37711)
            (param_1,~(param_2 & param_1) & unaff_RBP,param_3,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14db20246 FUN_14db20246 body=385 status=ok
// SIG undefined FUN_14db20246(void)

/* WARNING: Removing unreachable block (ram,0x0001618f44b8) */
/* WARNING: Removing unreachable block (ram,0x0001618f44ce) */
/* WARNING: Removing unreachable block (ram,0x00014db20379) */
/* WARNING: Removing unreachable block (ram,0x00014db202e2) */
/* WARNING: Removing unreachable block (ram,0x00016541546e) */
/* WARNING: Removing unreachable block (ram,0x0001654154a3) */
/* WARNING: Removing unreachable block (ram,0x0001654154cd) */
/* WARNING: Removing unreachable block (ram,0x0001565a5bf5) */
/* WARNING: Removing unreachable block (ram,0x0001565a5bfb) */
/* WARNING: Removing unreachable block (ram,0x0001565a5c00) */

void FUN_14db20246(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68) | param_1;
  FUN_166498c95(param_1,~((uVar1 ^ 0xffffffffffffffff |
                          param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68)) + uVar1
                         + 1),param_3,param_4);
  return;
}



// FUNCTION 14db20434 FUN_14db20434 body=19 status=ok
// SIG undefined FUN_14db20434(void)

void FUN_14db20434(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d85d504(param_1,local_res8);
  return;
}



// FUNCTION 14db205f4 FUN_14db205f4 body=143 status=ok
// SIG undefined FUN_14db205f4(void)

void FUN_14db205f4(void)

{
  (*(code *)&LAB_166d8f59d)();
  return;
}



// FUNCTION 14db207df FUN_14db207df body=123 status=ok
// SIG undefined FUN_14db207df(void)

void FUN_14db207df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d8e5f0f(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db20861 FUN_14db20861 body=145 status=ok
// SIG undefined FUN_14db20861(void)

/* WARNING: Removing unreachable block (ram,0x00014db208ed) */
/* WARNING: Removing unreachable block (ram,0x00014db208f3) */
/* WARNING: Removing unreachable block (ram,0x00015766c5c2) */

void FUN_14db20861(void)

{
  FUN_15766c5c2();
  return;
}



// FUNCTION 14db208f3 FUN_14db208f3 body=142 status=ok
// SIG undefined FUN_14db208f3(void)

void FUN_14db208f3(undefined8 param_1)

{
  (*(code *)0x162e30ef8)(param_1);
  return;
}



// FUNCTION 14db20a17 FUN_14db20a17 body=50 status=ok
// SIG undefined FUN_14db20a17(void)

void FUN_14db20a17(void)

{
  return;
}



// FUNCTION 14db20aa8 FUN_14db20aa8 body=326 status=ok
// SIG undefined FUN_14db20aa8(void)

void FUN_14db20aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_14e055660(param_1,param_2,param_3);
  FUN_16565e1e7(&DAT_ac91427a73ca2b2b,*(ulonglong *)(unaff_RDI + -0x58) | 0xac91427a73ca2b2b);
  return;
}



// FUNCTION 14db20bf9 FUN_14db20bf9 body=290 status=ok
// SIG undefined FUN_14db20bf9(void)

/* WARNING: Removing unreachable block (ram,0x0001567e8fb5) */
/* WARNING: Removing unreachable block (ram,0x00014db20c95) */
/* WARNING: Removing unreachable block (ram,0x00014db20c9b) */
/* WARNING: Removing unreachable block (ram,0x00014db20cf6) */
/* WARNING: Removing unreachable block (ram,0x00014db20cf9) */
/* WARNING: Removing unreachable block (ram,0x0001567e9040) */
/* WARNING: Removing unreachable block (ram,0x0001567e9044) */

void FUN_14db20bf9(void)

{
  longlong unaff_R13;
  undefined4 uStack_c;
  
  FUN_1567e8fb5(*(undefined8 *)(unaff_R13 + -0x48),(ulonglong)uStack_c << 0x20);
  return;
}



// FUNCTION 14db20e2f FUN_14db20e2f body=281 status=ok
// SIG undefined FUN_14db20e2f(void)

void FUN_14db20e2f(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  short sVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong in_stack_00000040;
  
  *(ulonglong *)(param_3 + 8) =
       (in_RAX - (*(ulonglong *)
                   (param_3 + ~(~(param_2 & 0xffffffffb7c43135) & (param_2 | 0xffffffffb7c43135))) |
                 in_RAX)) + *(longlong *)(param_3 + 8);
  sVar1 = FUN_16156ff46(param_1,local_res8);
  *local_res18 = (-0x101 - sVar1) + *local_res18;
  *(undefined8 *)(in_stack_00000040 + -8) = unaff_RBP;
  FUN_161b5a9eb();
  return;
}



// FUNCTION 14db20f49 thunk_FUN_14db20f4f body=5 status=ok
// SIG undefined thunk_FUN_14db20f4f(void)

void thunk_FUN_14db20f4f(void)

{
  return;
}



// FUNCTION 14db20f4f FUN_14db20f4f body=108 status=ok
// SIG undefined FUN_14db20f4f(void)

void FUN_14db20f4f(void)

{
  return;
}



// FUNCTION 14db210d5 thunk_FUN_1574ba9da body=19 status=ok
// SIG undefined thunk_FUN_1574ba9da(void)

void thunk_FUN_1574ba9da(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14db210e8 FUN_14db210e8 body=158 status=ok
// SIG undefined FUN_14db210e8(void)

/* WARNING: Removing unreachable block (ram,0x00014db21180) */
/* WARNING: Removing unreachable block (ram,0x00014db21186) */

void FUN_14db210e8(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xdc37c) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xdc37d) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xdc37e) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xdc3da) {
    return;
  }
  FUN_16169d3d7();
  return;
}



// FUNCTION 14db21186 FUN_14db21186 body=148 status=ok
// SIG undefined FUN_14db21186(void)

void FUN_14db21186(void)

{
  FUN_15b27225b();
  return;
}



// FUNCTION 14db212c5 FUN_14db212c5 body=160 status=ok
// SIG undefined FUN_14db212c5(void)

void FUN_14db212c5(undefined8 param_1)

{
  undefined8 uStackX_10;
  
  FUN_15b61fa21(param_1,uStackX_10);
  return;
}



// FUNCTION 14db2161b FUN_14db2161b body=133 status=ok
// SIG undefined FUN_14db2161b(void)

void FUN_14db2161b(void)

{
  longlong unaff_R13;
  
  thunk_FUN_156ca3449(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14db21746 FUN_14db21746 body=413 status=ok
// SIG undefined FUN_14db21746(void)

/* WARNING: Removing unreachable block (ram,0x0001621622f3) */
/* WARNING: Removing unreachable block (ram,0x000162162378) */
/* WARNING: Removing unreachable block (ram,0x00014db217d1) */
/* WARNING: Removing unreachable block (ram,0x00014db2180d) */

void FUN_14db21746(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  undefined1 unaff_SIL;
  ulonglong in_R9;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (unaff_RBP | ~(in_R9 | 0xffffffffddc2905f)));
  uVar2 = uVar1 ^ 0xffffffffffffffff | unaff_R15;
  uVar2 = (~uVar2 | 0xffffffffffffffff - unaff_R15 | uVar1) + uVar2 + 1;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  if (uVar1 == 0) {
    FUN_156d84a81(0,CONCAT71((int7)(uVar2 >> 8),unaff_SIL));
    return;
  }
  FUN_162a220ee(uVar1,0xfffffffffffffff8,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,~uVar2);
  FUN_156d84b2e();
  return;
}



// FUNCTION 14db21984 FUN_14db21984 body=155 status=ok
// SIG undefined FUN_14db21984(void)

void FUN_14db21984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  longlong lVar1;
  undefined8 unaff_RDI;
  longlong unaff_retaddr;
  
  lVar1 = unaff_RSI - *(longlong *)(&stack0xfffffffff4ef44a2 + unaff_retaddr);
  *(undefined8 *)(lVar1 + -8) = param_4;
  *(undefined8 *)(lVar1 + -0x10) = param_1;
  *(undefined8 *)(lVar1 + -0x18) = param_1;
  *(undefined8 *)(lVar1 + -0x20) = param_3;
  *(undefined8 *)(lVar1 + -0x28) = unaff_RDI;
  *(undefined8 *)(lVar1 + -0x30) = in_RAX;
  *(undefined8 *)(lVar1 + -0x38) = 0x166cbabf7;
  return;
}



// FUNCTION 14db21a20 FUN_14db21a20 body=134 status=ok
// SIG undefined FUN_14db21a20(void)

void FUN_14db21a20(byte param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  short sStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  *param_3 = *param_3 + sStackX_8;
  LOCK();
  bVar3 = (byte)in_RAX;
  bVar4 = bVar3 < DAT_14d7ab6f3;
  bVar5 = SBORROW1(bVar3,DAT_14d7ab6f3);
  cVar2 = bVar3 - DAT_14d7ab6f3;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7ab6f3);
    bVar3 = DAT_14d7ab6f3;
  }
  DAT_14d7ab6f3 = bVar3;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  *(undefined4 *)(param_5 + -0x18) = 0xd8bb4c9;
  *(undefined4 *)(param_5 + -0x14) = 0;
  lVar1 = *(longlong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = in_R10;
  *(undefined8 *)(param_5 + -0x28) = uStackX_10;
  *(undefined8 *)(param_5 + -0x30) = in_RAX;
  uVar6 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R14;
  *(ulonglong *)(param_5 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(longlong *)(param_5 + -8) = lVar1 + -0x661c543;
  (*(code *)&LAB_1655742e4)(param_1,uStackX_18,*(undefined8 *)(param_5 + -0x28));
  return;
}



// FUNCTION 14db21e32 FUN_14db21e32 body=119 status=ok
// SIG undefined FUN_14db21e32(void)

void FUN_14db21e32(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1651f12a8(param_1,FUN_1651f12a8,~*(ulonglong *)(unaff_RDI + -0x70) | param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14db21eaa FUN_14db21eaa body=350 status=ok
// SIG undefined FUN_14db21eaa(void)

/* WARNING: Removing unreachable block (ram,0x00014db21f5b) */
/* WARNING: Removing unreachable block (ram,0x00014db21f4b) */

undefined8 FUN_14db21eaa(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_165c966da(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                        ~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) |
                        *(ulonglong *)(unaff_R13 + -0x28) & ~unaff_R15);
  return uVar1;
}



// FUNCTION 14db22143 FUN_14db22143 body=54 status=ok
// SIG undefined FUN_14db22143(void)

/* WARNING: Removing unreachable block (ram,0x0001570416be) */
/* WARNING: Removing unreachable block (ram,0x00014db22259) */

void FUN_14db22143(ulonglong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong in_stack_00000008;
  ulonglong auStackX_18 [2];
  
  lVar3 = *(longlong *)(unaff_RSI + -0x58);
  uVar2 = FUN_16625cf9a(~(~unaff_RBP | param_1) | ~(param_1 ^ 0xffffffffffffffff | unaff_RBP),lVar3)
  ;
  *(undefined4 *)
   ((longlong)auStackX_18 +
   param_3 + ~((~(in_stack_00000008 | 0xffffffff90a7a5b1) | ~param_4) +
               (in_stack_00000008 | 0xffffffff90a7a5b1) + 1)) = 0xac91427a;
  uVar1 = auStackX_18[0];
  uVar4 = ~auStackX_18[0];
  lVar5 = ~(auStackX_18[0] & 0xeb76b307db9b72b7) + auStackX_18[0];
  auStackX_18[0] = uVar2;
  FUN_166662e4c(uVar1,lVar3 + 1,~((uVar4 | 0x14894cf824648d48) & lVar5 + 0xeb76b307db9b72b8U));
  return;
}



// FUNCTION 14db2225f FUN_14db2225f body=898 status=ok
// SIG undefined FUN_14db2225f(void)

void FUN_14db2225f(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1625195a2)(param_1,param_2,&stack0x00000000);
  return;
}



// FUNCTION 14db222ef FUN_14db222ef body=141 status=ok
// SIG undefined FUN_14db222ef(void)

/* WARNING: Removing unreachable block (ram,0x00014db2237d) */
/* WARNING: Removing unreachable block (ram,0x00014db223fe) */
/* WARNING: Removing unreachable block (ram,0x00014db22403) */
/* WARNING: Removing unreachable block (ram,0x00015757d138) */
/* WARNING: Removing unreachable block (ram,0x00014db22409) */

void FUN_14db222ef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  plVar1 = (longlong *)(&stack0xfffffffffcee4099 + unaff_RDI);
  *(int *)plVar1 = -0x3024bd6d;
  *(int *)plVar1 = (int)*plVar1 + 0x3024bd6d;
  *(undefined4 *)(&stack0xfffffffffcee409d + unaff_RDI) = 0;
  uVar2 = *plVar1 + *(longlong *)(unaff_RSI + -0x80);
  *(undefined8 *)(&stack0xfffffffffcee4099 + unaff_RDI) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffffcee4091 + unaff_RDI) = param_4;
  *(undefined8 *)(&stack0xfffffffffcee4089 + unaff_RDI) = param_3;
  *(undefined8 *)(&stack0xfffffffffcee4091 + unaff_RDI) = unaff_R14;
  if (uVar2 + unaff_RBP < ((~unaff_RBP | uVar2) + unaff_RBP + 1) * 2) {
    FUN_1657e01b1();
    return;
  }
  FUN_1657e01b1();
  return;
}



// FUNCTION 14db2237d FUN_14db2237d body=159 status=ok
// SIG undefined FUN_14db2237d(void)

/* WARNING: Removing unreachable block (ram,0x00014db22409) */

void FUN_14db2237d(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  
  lVar1 = *(longlong *)(unaff_RDI + -8);
  if (param_1 != 0) {
    FUN_165a04880(param_1,unaff_retaddr);
    *(undefined8 *)(lVar1 + -8) = in_R10;
    *(undefined8 *)(lVar1 + -0x10) = param_3;
    *(undefined8 *)(lVar1 + -0x18) = param_3;
    *(ulonglong *)(lVar1 + -0x20) = unaff_RBP + param_1 + (unaff_RBP & param_1) * -2;
    (*(code *)&LAB_1659acbe9)(unaff_R14);
    return;
  }
  FUN_15757d138();
  return;
}



// FUNCTION 14db2248b FUN_14db2248b body=305 status=ok
// SIG undefined FUN_14db2248b(void)

/* WARNING: Removing unreachable block (ram,0x00014db2252b) */

void FUN_14db2248b(void)

{
  undefined8 uStackX_10;
  
  if (-1 < uStackX_10) {
    FUN_161aee117();
    return;
  }
  FUN_161aee117();
  return;
}



// FUNCTION 14db22971 FUN_14db22971 body=283 status=ok
// SIG undefined FUN_14db22971(void)

void FUN_14db22971(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = param_3 + *(longlong *)(unaff_R13 + -0x88);
  FUN_162ec0a65(0xffffffffffffffc8,0x4f980607,~(uVar1 & unaff_R15) & (uVar1 | unaff_R15));
  FUN_1624c13a8(8);
  return;
}



// FUNCTION 14db22a8e FUN_14db22a8e body=146 status=ok
// SIG undefined FUN_14db22a8e(void)

void FUN_14db22a8e(void)

{
  return;
}



// FUNCTION 14db22c45 FUN_14db22c45 body=11 status=ok
// SIG undefined FUN_14db22c45(void)

void FUN_14db22c45(void)

{
  return;
}



// FUNCTION 14db22f5e FUN_14db22f5e body=2 status=ok
// SIG undefined FUN_14db22f5e(void)

void FUN_14db22f5e(void)

{
  return;
}



// FUNCTION 14db22f60 FUN_14db22f60 body=124 status=ok
// SIG undefined FUN_14db22f60(void)

void FUN_14db22f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x116baa) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0x116caa) {
    FUN_15685b73f();
    return;
  }
  FUN_15685b721(param_1,param_2,param_3,FUN_15685b721);
  return;
}



// FUNCTION 14db236a2 FUN_14db236a2 body=327 status=ok
// SIG undefined FUN_14db236a2(void)

void FUN_14db236a2(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e081c4a();
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_1563ffaf2((unaff_R15 - (uVar1 | unaff_R15)) + uVar1,0xffffffffffffff78,uVar1,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db2389c FUN_14db2389c body=195 status=ok
// SIG undefined FUN_14db2389c(void)

/* WARNING: Removing unreachable block (ram,0x00014db23960) */
/* WARNING: Removing unreachable block (ram,0x00014db239ff) */
/* WARNING: Removing unreachable block (ram,0x000161158da1) */
/* WARNING: Removing unreachable block (ram,0x000161158e20) */
/* WARNING: Removing unreachable block (ram,0x000161158e26) */
/* WARNING: Removing unreachable block (ram,0x000166b29a12) */
/* WARNING: Removing unreachable block (ram,0x000166b29a44) */
/* WARNING: Removing unreachable block (ram,0x00014db23a05) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db2389c(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  if (*(longlong *)(unaff_RDI + -0x50) == 0) {
    uVar2 = FUN_15b973da8();
    return uVar2;
  }
  bVar1 = *(longlong *)(unaff_RDI + -0x60) == 0;
  if (param_1 == -1 && bVar1) {
    if (param_1 != -1 || !bVar1) {
      return local_res8;
    }
    uVar2 = thunk_FUN_162e6cd98();
    return uVar2;
  }
  uVar2 = thunk_FUN_162e6cd98();
  return uVar2;
}



// FUNCTION 14db23960 FUN_14db23960 body=654 status=ok
// SIG undefined FUN_14db23960(void)

/* WARNING: Removing unreachable block (ram,0x00014db23a05) */
/* WARNING: Removing unreachable block (ram,0x000161158e26) */

void FUN_14db23960(char param_1)

{
  char cVar1;
  char in_AL;
  longlong lVar2;
  ulonglong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong in_stack_00000030;
  
  lVar2 = (-in_stack_00000030 - in_R10) + (in_stack_00000030 | in_R10) * 2;
  LOCK();
  cVar1 = param_1;
  if (in_AL != DAT_14d7bea26) {
    cVar1 = DAT_14d7bea26;
  }
  DAT_14d7bea26 = cVar1;
  UNLOCK();
  *(undefined8 *)(lVar2 + -0x10) = unaff_R14;
  *(undefined8 *)(lVar2 + -8) = 0x373b2;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R13;
  *(code **)(lVar2 + -0x10) = FUN_156c79161;
  return;
}



// FUNCTION 14db23a9a FUN_14db23a9a body=10 status=ok
// SIG undefined FUN_14db23a9a(void)

undefined8 FUN_14db23a9a(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14db23b53 FUN_14db23b53 body=143 status=ok
// SIG undefined FUN_14db23b53(void)

void FUN_14db23b53(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x60);
  uVar1 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) & (uVar1 + param_1) - (uVar1 & param_1));
  (*(code *)0x161486cf1)(param_1,uVar1,*(undefined8 *)(unaff_RDI + -0x70),uVar1);
  return;
}



// FUNCTION 14db23c72 FUN_14db23c72 body=36 status=ok
// SIG undefined FUN_14db23c72(void)

void FUN_14db23c72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 local_res8 [4];
  
  *(undefined8 *)((longlong)local_res8 + unaff_R13) = param_3;
  *(undefined1 **)((longlong)local_res8 + unaff_R13 + -8) = &LAB_14db23c97;
  return;
}



// FUNCTION 14db23db1 FUN_14db23db1 body=144 status=ok
// SIG undefined FUN_14db23db1(void)

/* WARNING: Removing unreachable block (ram,0x00014db23e39) */
/* WARNING: Removing unreachable block (ram,0x00014db23e44) */
/* WARNING: Removing unreachable block (ram,0x00014db23e3f) */

void FUN_14db23db1(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar3 = param_3 - *(longlong *)(&stack0x00000010 + param_2);
  uVar2 = ~(param_5 & unaff_R15) & (~(param_5 & unaff_R15) + unaff_R15) - ~param_5;
  *(undefined8 *)(uVar2 - 8) = unaff_retaddr;
  puVar1 = (undefined8 *)(uVar2 - 0x10);
  *puVar1 = unaff_retaddr;
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
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 8) = 0x2d57938;
  *puVar1 = in_stack_00000008;
  *(undefined8 *)(uVar2 - 0x18) = in_stack_00000008;
  *puVar1 = 0x156ef2e25;
  return;
}



// FUNCTION 14db23e44 FUN_14db23e44 body=186 status=ok
// SIG undefined FUN_14db23e44(void)

void FUN_14db23e44(void)

{
  longlong unaff_RDI;
  longlong in_R9;
  ulonglong unaff_retaddr;
  
  FUN_1657eba02(unaff_retaddr,in_R9 + unaff_retaddr,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) ^ unaff_retaddr);
  return;
}



// FUNCTION 14db240c5 FUN_14db240c5 body=131 status=ok
// SIG undefined FUN_14db240c5(void)

undefined8 FUN_14db240c5(void)

{
  uint in_EAX;
  ulonglong uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = CONCAT62((int6)((ulonglong)in_stack_00000008 >> 0x10),
                   *(short *)(&stack0xfffffffff1182ebe + in_EAX)) & 0xfffffffffffffeff;
  return CONCAT62((int6)(uVar1 >> 0x10),
                  -0x101 - ((*(short *)(&stack0xfffffffff1182ebe + in_EAX) + -0x101) - (short)uVar1)
                 );
}



// FUNCTION 14db241d7 FUN_14db241d7 body=22 status=ok
// SIG undefined FUN_14db241d7(void)

void FUN_14db241d7(void)

{
  return;
}



// FUNCTION 14db241ed FUN_14db241ed body=273 status=ok
// SIG undefined FUN_14db241ed(void)

undefined8 FUN_14db241ed(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong in_R9;
  
  if (in_R9 != 0x128282) {
    uVar1 = FUN_162388127();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14db24396 FUN_14db24396 body=261 status=ok
// SIG undefined FUN_14db24396(void)

/* WARNING: Removing unreachable block (ram,0x00014db24441) */

void FUN_14db24396(void)

{
  undefined8 unaff_retaddr;
  
  if (&DAT_fffffffffffffff7 < &stack0xfffffffffffffff8) {
    FUN_160b436c1(unaff_retaddr);
    return;
  }
  FUN_160b436c1(unaff_retaddr);
  return;
}



// FUNCTION 14db247b5 FUN_14db247b5 body=140 status=ok
// SIG undefined FUN_14db247b5(void)

/* WARNING: Removing unreachable block (ram,0x00014db2483a) */
/* WARNING: Removing unreachable block (ram,0x00014db24845) */
/* WARNING: Removing unreachable block (ram,0x00014db24840) */

void FUN_14db247b5(void)

{
  FUN_16168027e();
  return;
}



// FUNCTION 14db24845 FUN_14db24845 body=267 status=ok
// SIG undefined FUN_14db24845(void)

void FUN_14db24845(void)

{
  FUN_1660eabe3();
  return;
}



// FUNCTION 14db249fc FUN_14db249fc body=188 status=ok
// SIG undefined FUN_14db249fc(void)

ulonglong FUN_14db249fc(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14db24ab8 FUN_14db24ab8 body=212 status=ok
// SIG undefined FUN_14db24ab8(void)

/* WARNING: Removing unreachable block (ram,0x00014db24b3b) */
/* WARNING: Removing unreachable block (ram,0x00016637bc1b) */
/* WARNING: Removing unreachable block (ram,0x00016637bc21) */
/* WARNING: Removing unreachable block (ram,0x000156f78467) */
/* WARNING: Removing unreachable block (ram,0x000156f783a7) */
/* WARNING: Removing unreachable block (ram,0x000156f78461) */
/* WARNING: Removing unreachable block (ram,0x000160c684f8) */
/* WARNING: Removing unreachable block (ram,0x000165f6bb1b) */
/* WARNING: Removing unreachable block (ram,0x00014db24b61) */

ulonglong FUN_14db24ab8(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x38) ^ param_1) < 0) {
    uVar1 = FUN_156f78309();
    return uVar1;
  }
  if (-1 < (longlong)
           -((0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x50) | param_1 ^ 0xffffffffffffffff)
            ^ 0xffffffffffffffff)) {
    uVar1 = FUN_165f6ba85();
    return uVar1;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  if (-1 < (longlong)(uVar1 | param_1)) {
    uVar1 = FUN_14d804b10(param_1,uVar1,uVar1,
                          (-param_1 - *(ulonglong *)(unaff_RDI + -0x60)) +
                          (*(ulonglong *)(unaff_RDI + -0x60) | param_1) * 2);
    return uVar1;
  }
  return ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) &
          (~*(ulonglong *)(unaff_RDI + -0x80) | param_1));
}



// FUNCTION 14db24c1a FUN_14db24c1a body=186 status=ok
// SIG undefined FUN_14db24c1a(void)

void FUN_14db24c1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x11c795) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 0x11c883) {
    FUN_16131bb16();
    return;
  }
  FUN_15b6ed115(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db24e7d FUN_14db24e7d body=243 status=ok
// SIG undefined FUN_14db24e7d(void)

/* WARNING: Removing unreachable block (ram,0x00014db24f72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db24e7d(void)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  int in_R10D;
  int aiStackX_10 [6];
  
  uVar1 = unaff_RDI & (unaff_RBP & 0xe55012d | 0xfffffffff1aafed2) ^ 0xffffffffffffffff;
  *(undefined4 *)((longlong)aiStackX_10 + uVar1) = 0;
  *(int *)((longlong)aiStackX_10 + uVar1) = *(int *)((longlong)aiStackX_10 + uVar1) - in_R10D;
  *(int *)((longlong)aiStackX_10 + uVar1) = -*(int *)((longlong)aiStackX_10 + uVar1);
  if (_DAT_7ffe0064 == 0) {
    FUN_15b989e4b();
    return;
  }
  FUN_15b989e4b();
  return;
}



// FUNCTION 14db24f73 FUN_14db24f73 body=113 status=ok
// SIG undefined FUN_14db24f73(void)

void FUN_14db24f73(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ushort unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_20;
  
  *param_4 = (0xffff - (unaff_retaddr ^ 0x9dd3) | *param_4) - 0x100;
  *(undefined8 *)(uStackX_20 + -8) = in_R10;
  *(undefined8 *)(uStackX_20 + -0x10) = *(undefined8 *)(uStackX_20 + -8);
  *(undefined8 *)(uStackX_20 + -0x18) = unaff_RDI;
  FUN_14dd693ac(param_1,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14db25107 FUN_14db25107 body=62 status=ok
// SIG undefined FUN_14db25107(void)

void FUN_14db25107(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14db251b8 FUN_14db251b8 body=161 status=ok
// SIG undefined FUN_14db251b8(void)

void FUN_14db251b8(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  (*(code *)&LAB_15760edb2)
            (~param_2,param_2,(~uVar1 | ~unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1,
             ~(0xffffffffffffffff - ~((unaff_R15 - (param_4 | unaff_R15)) + param_4) | ~param_2));
  return;
}



// FUNCTION 14db25391 FUN_14db25391 body=167 status=ok
// SIG undefined FUN_14db25391(void)

void FUN_14db25391(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_R10;
  undefined8 local_res8;
  
  *(undefined8 *)(&stack0x3cdd87c7 + param_3) = in_R10;
  (*(code *)0x156a91813)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14db25439 FUN_14db25439 body=163 status=ok
// SIG undefined FUN_14db25439(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db25439(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_1621c395d(local_res8,param_2,FUN_1621c395d);
  return;
}



// FUNCTION 14db254dc FUN_14db254dc body=150 status=ok
// SIG undefined FUN_14db254dc(void)

/* WARNING: Removing unreachable block (ram,0x00014db2555c) */

void FUN_14db254dc(undefined8 param_1,undefined8 param_2)

{
  FUN_14dfc11f6(param_1,param_2);
  return;
}



// FUNCTION 14db2560a FUN_14db2560a body=330 status=ok
// SIG undefined FUN_14db2560a(void)

/* WARNING: Removing unreachable block (ram,0x00014db256c4) */
/* WARNING: Removing unreachable block (ram,0x00014db256cd) */
/* WARNING: Removing unreachable block (ram,0x000160fb9bb1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2560a(void)

{
  FUN_160fb9bb1();
  return;
}



// FUNCTION 14db25759 FUN_14db25759 body=8 status=ok
// SIG undefined FUN_14db25759(void)

void FUN_14db25759(HANDLE param_1,DWORD param_2,SIZE_T param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014db2575b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db257de FUN_14db257de body=332 status=ok
// SIG undefined FUN_14db257de(void)

/* WARNING: Removing unreachable block (ram,0x00014db258e6) */

void FUN_14db257de(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar2 = FUN_16607c922((-(in_RAX ^ 0xffffffffffffffff) - (~*(ulonglong *)(unaff_R12 + -0x58) + 2))
                        + (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,0xffffffffffffffff);
  puVar1 = param_3 + 1;
  *puVar1 = (ulonglong)FUN_16607c922;
  *param_3 = uVar2;
  *(undefined4 *)param_3 = 0x1c8790b4;
  *(undefined4 *)((longlong)param_3 + 4) = 0;
  uVar3 = *param_3 ^ 0x1f276998;
  *(ulonglong *)((longlong)puVar1 + (uVar3 - 0x3a0f92c)) = uVar2;
  *(undefined4 *)((longlong)puVar1 + (uVar3 - 0x3a0f92c)) = 0x2c202c40;
  *(undefined4 *)((longlong)puVar1 + (uVar3 - 0x3a0f928)) = 0;
  (*(code *)&LAB_164a35767)();
  return;
}



// FUNCTION 14db259c1 thunk_FUN_14db259c7 body=5 status=ok
// SIG undefined thunk_FUN_14db259c7(void)

/* WARNING: Removing unreachable block (ram,0x00014db25a55) */
/* WARNING: Removing unreachable block (ram,0x00014db25a4a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14db259c7(void)

{
  FUN_156c0a966();
  return;
}



// FUNCTION 14db259c7 FUN_14db259c7 body=191 status=ok
// SIG undefined FUN_14db259c7(void)

/* WARNING: Removing unreachable block (ram,0x00014db25a55) */
/* WARNING: Removing unreachable block (ram,0x00014db25a4a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db259c7(void)

{
  FUN_156c0a966();
  return;
}



// FUNCTION 14db25ad3 FUN_14db25ad3 body=116 status=ok
// SIG undefined FUN_14db25ad3(void)

undefined8 FUN_14db25ad3(void)

{
  undefined8 in_RAX;
  longlong in_R9;
  
  if (in_R9 != 0x132085) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14db25b63 FUN_14db25b63 body=284 status=ok
// SIG undefined FUN_14db25b63(void)

/* WARNING: Removing unreachable block (ram,0x00014db25be1) */

undefined8
FUN_14db25b63(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  short unaff_R15W;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  *param_2 = unaff_R15W + *param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -8) = unaff_R14;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = unaff_R14;
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
  *(undefined8 *)(param_5 + -0x20) = uStackX_18;
  *(undefined8 *)(param_5 + -0x28) = uStackX_18;
  *(undefined1 **)(param_5 + -0x20) = &LAB_16644f556;
  return in_RAX;
}



// FUNCTION 14db25c83 FUN_14db25c83 body=398 status=ok
// SIG undefined FUN_14db25c83(void)

/* WARNING: Instruction at (ram,0x00014db25cda) overlaps instruction at (ram,0x00014db25cd9)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dc34a76 */
/* WARNING: Removing unreachable block (ram,0x00014db25d62) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db25c83(void)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  uRam000000000bc8d20a =
       uRam000000000bc8d20a & (uint)CONCAT71(0xff000000,ArbitraryUserPointer._0_1_);
  if (-1 < uStackX_8) {
    FUN_14dc34a4b(unaff_retaddr,0x3500153);
    return;
  }
  FUN_166c3515a(unaff_retaddr,0xc802652,ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14db25e15 FUN_14db25e15 body=189 status=ok
// SIG undefined FUN_14db25e15(void)

/* WARNING: Removing unreachable block (ram,0x00014db25ec8) */

undefined8 FUN_14db25e15(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ushort *unaff_R12;
  ushort unaff_R13W;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *unaff_R12 = *unaff_R12 | unaff_R13W;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined8 *)(local_res20 + -8) = 0x756614db;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x756614db;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x1648a6ec3;
  uVar1 = thunk_FUN_15b642ca5();
  return uVar1;
}



// FUNCTION 14db25ed2 FUN_14db25ed2 body=285 status=ok
// SIG undefined FUN_14db25ed2(void)

/* WARNING: Removing unreachable block (ram,0x00014db25f5b) */
/* WARNING: Removing unreachable block (ram,0x00014db25f66) */
/* WARNING: Removing unreachable block (ram,0x00014db25f23) */
/* WARNING: Removing unreachable block (ram,0x000162526420) */
/* WARNING: Removing unreachable block (ram,0x000162526426) */
/* WARNING: Removing unreachable block (ram,0x000166c542f3) */
/* WARNING: Removing unreachable block (ram,0x00014db25f61) */

void FUN_14db25ed2(void)

{
  FUN_166c542f3();
  return;
}



// FUNCTION 14db25fef FUN_14db25fef body=135 status=ok
// SIG undefined FUN_14db25fef(void)

void FUN_14db25fef(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6)

{
  short *psVar1;
  uint uVar2;
  undefined8 uVar3;
  short in_R11W;
  short *unaff_R12;
  longlong unaff_R14;
  ulonglong uVar4;
  undefined8 local_res10;
  ulonglong local_res18;
  
  if ((local_res18 & 1) != 0) {
    unaff_R14 = unaff_R14 + 1;
  }
  psVar1 = (short *)(param_1 + unaff_R14);
  uVar4 = (longlong)unaff_R12 - (longlong)psVar1;
  uVar2 = (uint)((local_res18 & 0x4000) != 0) * 0x4000 |
          (uint)SBORROW8((longlong)unaff_R12,(longlong)psVar1) * 0x800 |
          (uint)((local_res18 & 0x400) != 0) * 0x400 | (uint)((local_res18 & 0x200) != 0) * 0x200 |
          (uint)((local_res18 & 0x100) != 0) * 0x100 | (uint)((longlong)uVar4 < 0) * 0x80 |
          (uint)(uVar4 == 0) * 0x40 | (uint)((local_res18 & 0x10) != 0) * 0x10 |
          (uint)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 | (uint)(unaff_R12 < psVar1);
  uVar3 = FUN_16567ec28();
  *psVar1 = (-0x101 - in_R11W) + *psVar1;
  *(undefined8 *)(param_6 + -8) = uVar3;
  *(undefined8 *)(param_6 + -0x10) = uVar3;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)((param_5 & 0x80) != 0) * 0x80 |
       (ulonglong)((param_5 & 0x40) != 0) * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 |
       (ulonglong)((param_5 & 4) != 0) * 4 | (ulonglong)((param_5 & 1) != 0) |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(param_6 + -0x20) =
       (ulonglong)
       ((uVar2 | (uint)((local_res18 & 0x200000) != 0) * 0x200000 |
        (uint)((local_res18 & 0x40000) != 0) * 0x40000) >> 6 ^ uVar2 << 0x1a);
  uVar4 = *(ulonglong *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -0x20) = *(undefined8 *)(param_6 + -0x20);
  *(undefined8 *)(param_6 + -0x28) = param_3;
  *(undefined8 *)(param_6 + -0x18) = local_res10;
  FUN_1651a147e();
  return;
}



// FUNCTION 14db26076 FUN_14db26076 body=119 status=ok
// SIG undefined FUN_14db26076(void)

void FUN_14db26076(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  short in_R11W;
  undefined8 unaff_R15;
  ulonglong uVar1;
  short *unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_retaddr = (-0x101 - in_R11W) + *unaff_retaddr;
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
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
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x28) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  FUN_1651a147e(param_1,param_2,*(undefined8 *)(local_res20 + -0x28));
  return;
}



// FUNCTION 14db26192 FUN_14db26192 body=44 status=ok
// SIG undefined FUN_14db26192(void)

void FUN_14db26192(void)

{
  return;
}



// FUNCTION 14db261be FUN_14db261be body=130 status=ok
// SIG undefined FUN_14db261be(void)

void FUN_14db261be(void)

{
  int in_R9D;
  
  if (in_R9D < 0) {
    return;
  }
  return;
}



// FUNCTION 14db26258 thunk_FUN_14db2625e body=5 status=ok
// SIG undefined thunk_FUN_14db2625e(void)

ulonglong thunk_FUN_14db2625e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14db2625e FUN_14db2625e body=152 status=ok
// SIG undefined FUN_14db2625e(void)

ulonglong FUN_14db2625e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14db262f6 FUN_14db262f6 body=145 status=ok
// SIG undefined FUN_14db262f6(void)

void FUN_14db262f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_RSI;
  
  *unaff_RSI = (-0x101 - (*unaff_RSI | 0xfeff)) + *unaff_RSI;
  *(undefined8 *)(param_5 + -8) = param_1;
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(undefined8 *)(param_5 + -0x18) = param_4;
  FUN_1626d65c7(&DAT_1626d6617,param_2,param_3,FUN_1626d65c7);
  return;
}



// FUNCTION 14db26585 FUN_14db26585 body=218 status=ok
// SIG undefined FUN_14db26585(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156808af5) */
/* WARNING: Removing unreachable block (ram,0x0001660782db) */
/* WARNING: Removing unreachable block (ram,0x000156808ba9) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee66) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee8f) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee98) */
/* WARNING: Removing unreachable block (ram,0x00015b78eef5) */
/* WARNING: Removing unreachable block (ram,0x000161442e8c) */
/* WARNING: Removing unreachable block (ram,0x00015b78eefb) */
/* WARNING: Removing unreachable block (ram,0x00015b78ef32) */
/* WARNING: Removing unreachable block (ram,0x00015b78ef55) */
/* WARNING: Removing unreachable block (ram,0x00015b78ef88) */
/* WARNING: Removing unreachable block (ram,0x00015b78ef8d) */
/* WARNING: Removing unreachable block (ram,0x00015b78ef93) */
/* WARNING: Removing unreachable block (ram,0x000156681c67) */
/* WARNING: Removing unreachable block (ram,0x000156808b9d) */
/* WARNING: Removing unreachable block (ram,0x000156808bb4) */
/* WARNING: Removing unreachable block (ram,0x000156808c50) */
/* WARNING: Removing unreachable block (ram,0x000156808c56) */
/* WARNING: Removing unreachable block (ram,0x00015b78edd4) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee5b) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee61) */
/* WARNING: Removing unreachable block (ram,0x00015b78ee56) */
/* WARNING: Removing unreachable block (ram,0x000162124d44) */
/* WARNING: Removing unreachable block (ram,0x000162124d4a) */
/* WARNING: Removing unreachable block (ram,0x000162124e5a) */
/* WARNING: Removing unreachable block (ram,0x000162124e61) */
/* WARNING: Removing unreachable block (ram,0x0001626cf650) */
/* WARNING: Removing unreachable block (ram,0x0001669cddc3) */
/* WARNING: Removing unreachable block (ram,0x00015b36af86) */
/* WARNING: Removing unreachable block (ram,0x00015b36af1b) */
/* WARNING: Removing unreachable block (ram,0x00015b36af8a) */
/* WARNING: Removing unreachable block (ram,0x000164930359) */
/* WARNING: Removing unreachable block (ram,0x0001649303fd) */
/* WARNING: Removing unreachable block (ram,0x000164930404) */
/* WARNING: Removing unreachable block (ram,0x000162124c45) */
/* WARNING: Removing unreachable block (ram,0x000162124cc4) */
/* WARNING: Removing unreachable block (ram,0x0001573fecd3) */
/* WARNING: Removing unreachable block (ram,0x00016493040c) */
/* WARNING: Removing unreachable block (ram,0x000164930490) */
/* WARNING: Removing unreachable block (ram,0x00015b2bd1f3) */
/* WARNING: Removing unreachable block (ram,0x00015b2bd27b) */
/* WARNING: Removing unreachable block (ram,0x00015b2bd281) */
/* WARNING: Removing unreachable block (ram,0x00015b2bd276) */
/* WARNING: Removing unreachable block (ram,0x00014daed898) */
/* WARNING: Removing unreachable block (ram,0x00014daed919) */
/* WARNING: Removing unreachable block (ram,0x000164930496) */
/* WARNING: Removing unreachable block (ram,0x0001626cf6ce) */
/* WARNING: Removing unreachable block (ram,0x000156808a5a) */
/* WARNING: Removing unreachable block (ram,0x000156808a99) */
/* WARNING: Removing unreachable block (ram,0x000156808abf) */
/* WARNING: Removing unreachable block (ram,0x0001626cf656) */
/* WARNING: Removing unreachable block (ram,0x0001626cf6a0) */
/* WARNING: Removing unreachable block (ram,0x0001626cf69b) */
/* WARNING: Removing unreachable block (ram,0x0001626cf6c9) */
/* WARNING: Removing unreachable block (ram,0x000156808a8d) */
/* WARNING: Removing unreachable block (ram,0x00014db265bf) */
/* WARNING: Removing unreachable block (ram,0x00014db265c5) */

undefined8 FUN_14db26585(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong in_R9;
  
  if (in_R9 == 0x119995) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (in_R9 == 0x119996) {
    return in_RAX;
  }
  if (in_R9 == 0x119997) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (in_R9 < 0x119998) {
    if (in_R9 == 0x119998) {
      return in_RAX;
    }
    if (in_R9 != 0x119999) {
      uVar1 = FUN_156808a52();
      return uVar1;
    }
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  uVar1 = FUN_1669cdd1a();
  return uVar1;
}



// FUNCTION 14db2666e FUN_14db2666e body=19 status=ok
// SIG undefined FUN_14db2666e(void)

void FUN_14db2666e(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db2679f FUN_14db2679f body=276 status=ok
// SIG undefined FUN_14db2679f(void)

void FUN_14db2679f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  FUN_1657e0096(param_1,param_2,in_stack_00000010);
  FUN_14e07873d();
  return;
}



// FUNCTION 14db268b6 FUN_14db268b6 body=177 status=ok
// SIG undefined FUN_14db268b6(void)

ulonglong FUN_14db268b6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)
           (unaff_RDI +
           unaff_RSI + ~(~(in_RAX & 0xffffffffac3d7cc5) & (in_RAX | 0xffffffffac3d7cc5)));
  return ~((~param_1 | uVar1) & (~uVar1 | param_1));
}



// FUNCTION 14db26c0f FUN_14db26c0f body=442 status=ok
// SIG undefined FUN_14db26c0f(void)

/* WARNING: Removing unreachable block (ram,0x00014db26d3b) */
/* WARNING: Removing unreachable block (ram,0x00014db26d41) */
/* WARNING: Removing unreachable block (ram,0x00014db26c9a) */

undefined8 FUN_14db26c0f(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80) + in_RAX;
  uVar3 = ~(~*(ulonglong *)(unaff_R12 + -0x80) | 0xffffffffffffffff - in_RAX);
  if (uVar2 < uVar3 * 2) {
    uVar1 = (*(code *)&LAB_161c89cb9)
                      ((*(ulonglong *)(unaff_R12 + -0x58) - in_RAX) +
                       (~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) * -2 + -2,&LAB_161c89cb9,
                       uVar2 + uVar3 * -2);
    return uVar1;
  }
  uVar1 = FUN_1612497da();
  return uVar1;
}



// FUNCTION 14db26df3 FUN_14db26df3 body=171 status=ok
// SIG undefined FUN_14db26df3(void)

void FUN_14db26df3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x30);
  FUN_1574efe3d(param_1,uVar1,param_3,uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14db26fbe FUN_14db26fbe body=162 status=ok
// SIG undefined FUN_14db26fbe(void)

/* WARNING: Removing unreachable block (ram,0x00014db27055) */
/* WARNING: Removing unreachable block (ram,0x00014db2705b) */
/* WARNING: Removing unreachable block (ram,0x00014db27060) */

void FUN_14db26fbe(void)

{
  return;
}



// FUNCTION 14db27060 FUN_14db27060 body=79 status=ok
// SIG undefined FUN_14db27060(void)

void FUN_14db27060(void)

{
  return;
}



// FUNCTION 14db270d0 FUN_14db270d0 body=16 status=ok
// SIG undefined FUN_14db270d0(void)

void FUN_14db270d0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db270de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db2717d FUN_14db2717d body=270 status=ok
// SIG undefined FUN_14db2717d(void)

/* WARNING: Instruction at (ram,0x00014db27232) overlaps instruction at (ram,0x00014db27231)
    */
/* WARNING: Removing unreachable block (ram,0x00014db27273) */
/* WARNING: Removing unreachable block (ram,0x00014db27279) */
/* WARNING: Removing unreachable block (ram,0x00014db27213) */
/* WARNING: Removing unreachable block (ram,0x00014db27232) */
/* WARNING: Removing unreachable block (ram,0x00014db27231) */

void FUN_14db2717d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)((*(ulonglong *)(unaff_R13 + -0x50) ^ 0xffffffffffffffff) & ~unaff_R15)) {
    FUN_15b098ec5();
    return;
  }
  FUN_161a2b72d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db274d5 FUN_14db274d5 body=151 status=ok
// SIG undefined FUN_14db274d5(void)

/* WARNING: Removing unreachable block (ram,0x00014db27568) */

void FUN_14db274d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15);
  lVar2 = (uVar3 - (uVar1 | uVar3)) + uVar1;
  FUN_1616c136e(lVar2,(~*(ulonglong *)(unaff_R13 + -0x28) | ~unaff_R15) &
                      (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),param_3,0x381f0468,
                *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15);
  FUN_161096756(lVar2,FUN_161096756,0xffffffffffffffff);
  return;
}



// FUNCTION 14db2756e FUN_14db2756e body=38 status=ok
// SIG undefined FUN_14db2756e(void)

void FUN_14db2756e(void)

{
  return;
}



// FUNCTION 14db27a49 FUN_14db27a49 body=162 status=ok
// SIG undefined FUN_14db27a49(void)

void FUN_14db27a49(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_1651b362a(param_1,*(undefined8 *)(unaff_RDI + -0x50),*(undefined8 *)(unaff_RDI + -0x50));
  FUN_14db27aec();
  return;
}



// FUNCTION 14db27aec FUN_14db27aec body=305 status=ok
// SIG undefined FUN_14db27aec(void)

void FUN_14db27aec(void)

{
  FUN_162d01fdb();
  FUN_16522fbf9();
  return;
}



// FUNCTION 14db27c21 FUN_14db27c21 body=308 status=ok
// SIG undefined FUN_14db27c21(void)

/* WARNING: Instruction at (ram,0x00014db27d48) overlaps instruction at (ram,0x00014db27d46)
    */
/* WARNING: Removing unreachable block (ram,0x00014db27d43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db27c21(void)

{
  FUN_166275fca();
  (*(code *)0x15b3c65a6)();
  return;
}



// FUNCTION 14db27dfa FUN_14db27dfa body=154 status=ok
// SIG undefined FUN_14db27dfa(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db27dfa(void)

{
  FUN_1651a7057();
  return;
}



// FUNCTION 14db27e94 FUN_14db27e94 body=193 status=ok
// SIG undefined FUN_14db27e94(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db27e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14de348ab(param_1,param_2,param_3,FUN_14de348ab);
  return;
}



// FUNCTION 14db27fd6 FUN_14db27fd6 body=118 status=ok
// SIG undefined FUN_14db27fd6(void)

void FUN_14db27fd6(void)

{
  return;
}



// FUNCTION 14db28126 FUN_14db28126 body=330 status=ok
// SIG undefined FUN_14db28126(void)

/* WARNING: Removing unreachable block (ram,0x00014db28265) */

void FUN_14db28126(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong in_R11;
  longlong lStackX_10;
  ulonglong local_res20;
  
  uVar1 = (local_res20 ^ 0xffffffffffffffff) & in_R11;
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = 0x14db281b7;
  FUN_161586346();
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(unaff_RSI + -0x48);
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  FUN_14ddb7383(0x92,param_2,param_3,
                CONCAT71((int7)((ulonglong)(unaff_RBX + lStackX_10 + 0x9f0b45d) >> 8),0xe5));
  return;
}



// FUNCTION 14db28328 FUN_14db28328 body=141 status=ok
// SIG undefined FUN_14db28328(void)

/* WARNING: Removing unreachable block (ram,0x00014db28460) */
/* WARNING: Removing unreachable block (ram,0x00014db28466) */
/* WARNING: Removing unreachable block (ram,0x000165de0790) */
/* WARNING: Removing unreachable block (ram,0x00014db283b7) */
/* WARNING: Removing unreachable block (ram,0x000164c1871b) */

void FUN_14db28328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 uStackX_18;
  
  *unaff_RBX = (*unaff_RBX | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -8) = uStackX_18;
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(undefined8 *)(param_5 + -0x18) = param_4;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined4 *)(param_5 + -0x20) = 0xeaaa84c6;
  *(undefined4 *)(param_5 + -0x1c) = 0xffffffff;
  *(undefined8 *)(param_5 + *(longlong *)(param_5 + -0x20) + 0x15557b32) = 0;
  *(longlong *)(param_5 + -8) = *(longlong *)(param_5 + -8) + -0x162eb634b;
  *(ulonglong *)(param_5 + -8) = ~*(ulonglong *)(param_5 + -8);
  *(longlong *)(param_5 + -8) = *(longlong *)(param_5 + -8) + 1;
  FUN_14d7bd247(param_1,*(undefined8 *)(param_5 + -0x10));
  return;
}



// FUNCTION 14db283b7 FUN_14db283b7 body=362 status=ok
// SIG undefined FUN_14db283b7(void)

/* WARNING: Removing unreachable block (ram,0x00014db28460) */
/* WARNING: Removing unreachable block (ram,0x00014db28466) */

void FUN_14db283b7(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined1 **)(uVar1 - 8) = &LAB_162a6d2bd;
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar3;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  (*(code *)0x162a6d22f)(param_1,uVar2);
  return;
}



// FUNCTION 14db286e0 FUN_14db286e0 body=134 status=ok
// SIG undefined FUN_14db286e0(void)

void FUN_14db286e0(void)

{
  return;
}



// FUNCTION 14db28766 FUN_14db28766 body=30 status=ok
// SIG undefined FUN_14db28766(void)

undefined8 FUN_14db28766(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14db2889e FUN_14db2889e body=334 status=ok
// SIG undefined FUN_14db2889e(void)

/* WARNING: Removing unreachable block (ram,0x00014db28920) */
/* WARNING: Removing unreachable block (ram,0x00014db28945) */

void FUN_14db2889e(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  uint in_stack_00000008;
  int local_res20 [2];
  
  uVar2 = ~((~((ulonglong)in_stack_00000008 ^ 0x736727bf) | unaff_R15) &
           (~unaff_R15 | (ulonglong)in_stack_00000008 ^ 0x736727bf));
  lVar3 = unaff_RDI + uVar2 + (unaff_RDI & uVar2) * -2;
  *(undefined4 *)((longlong)local_res20 + lVar3) = 0xba52e468;
  piVar1 = (int *)((longlong)local_res20 + lVar3);
  *piVar1 = *piVar1 + 0x45ad1b98;
  if (*piVar1 == 0) {
    FUN_156b8ffb1(param_1,param_2);
    return;
  }
  FUN_156b8ffb1(param_1,param_2);
  return;
}



// FUNCTION 14db28a98 FUN_14db28a98 body=314 status=ok
// SIG undefined FUN_14db28a98(void)

/* WARNING: Removing unreachable block (ram,0x00014db28bb4) */
/* WARNING: Removing unreachable block (ram,0x00014db28bd2) */
/* WARNING: Removing unreachable block (ram,0x00014db28c4d) */
/* WARNING: Removing unreachable block (ram,0x00014db28c59) */
/* WARNING: Removing unreachable block (ram,0x00014db28c64) */
/* WARNING: Removing unreachable block (ram,0x00014db28c6f) */
/* WARNING: Removing unreachable block (ram,0x00014daf8ae8) */

ulonglong FUN_14db28a98(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_R10;
  char in_AF;
  longlong unaff_retaddr;
  
  FUN_16223e41c(param_1,*(ulonglong *)(param_2 + -0xa0) + in_R10 +
                        (*(ulonglong *)(param_2 + -0xa0) & in_R10) * -2);
  if (-1 < (longlong)(*(longlong *)(unaff_retaddr + -0x60) + param_1)) {
    uVar1 = ~(~param_1 | *(ulonglong *)(unaff_retaddr + -0x70)) |
            ~(~*(ulonglong *)(unaff_retaddr + -0x70) | param_1);
    return CONCAT62((int6)(param_1 >> 0x10),
                    CONCAT11(((longlong)uVar1 < 0) << 7 | (uVar1 == 0) << 6 | in_AF << 4 |
                             ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) << 2,(char)param_1)) | 0x200;
  }
  uVar1 = FUN_162106c51();
  return uVar1;
}



// FUNCTION 14db28bd2 FUN_14db28bd2 body=221 status=ok
// SIG undefined FUN_14db28bd2(void)

/* WARNING: Removing unreachable block (ram,0x00014db28c59) */
/* WARNING: Removing unreachable block (ram,0x00014db28c64) */

void FUN_14db28bd2(void)

{
  int unaff_R15D;
  
  if (unaff_R15D != 0) {
    FUN_14daf8ae8();
    return;
  }
  return;
}



// FUNCTION 14db28d16 FUN_14db28d16 body=605 status=ok
// SIG undefined FUN_14db28d16(void)

/* WARNING: Removing unreachable block (ram,0x000162a51a65) */
/* WARNING: Removing unreachable block (ram,0x00014db28da6) */
/* WARNING: Removing unreachable block (ram,0x00014db28db2) */
/* WARNING: Removing unreachable block (ram,0x000164a3a416) */

void FUN_14db28d16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_162a51a7f;
  FUN_162a51a65();
  return;
}



// FUNCTION 14db28ffc FUN_14db28ffc body=138 status=ok
// SIG undefined FUN_14db28ffc(void)

void FUN_14db28ffc(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_165e63a24((in_R10 - (*(ulonglong *)(param_2 + -0x78) | in_R10)) +
                *(ulonglong *)(param_2 + -0x78));
  return;
}



// FUNCTION 14db290ff FUN_14db290ff body=137 status=ok
// SIG undefined FUN_14db290ff(void)

/* WARNING: Instruction at (ram,0x00014db29148) overlaps instruction at (ram,0x00014db29147)
    */
/* WARNING: Removing unreachable block (ram,0x00014db29162) */
/* WARNING: Removing unreachable block (ram,0x00014db29147) */

void FUN_14db290ff(void)

{
  longlong unaff_R13;
  undefined8 uStackX_10;
  
  FUN_162186cd5();
  FUN_1612b6848(*(undefined8 *)(unaff_R13 + -0x40),uStackX_10);
  return;
}



// FUNCTION 14db29188 FUN_14db29188 body=146 status=ok
// SIG undefined FUN_14db29188(void)

void FUN_14db29188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_1612b6848(*(undefined8 *)(unaff_R13 + -0x40),unaff_retaddr,param_3,~unaff_R15);
  return;
}



// FUNCTION 14db2921a FUN_14db2921a body=147 status=ok
// SIG undefined FUN_14db2921a(void)

void FUN_14db2921a(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = ~((~unaff_RDI | 0x5c61c197) & (unaff_RBP | 0xffffffffa39e3e68));
  uVar1 = *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2);
  *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2);
  *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2);
  *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) =
       *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) & ~unaff_R15;
  *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2);
  *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) =
       (~unaff_R15 | uVar1) & *(ulonglong *)(&stack0xfffffffff40d6f2e + uVar2) ^ 0xffffffffffffffff;
  FUN_15b192433(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14db292ae FUN_14db292ae body=317 status=ok
// SIG undefined FUN_14db292ae(void)

/* WARNING: Removing unreachable block (ram,0x00014db293ed) */
/* WARNING: Removing unreachable block (ram,0x00014db29486) */
/* WARNING: Removing unreachable block (ram,0x0001574d8c4c) */
/* WARNING: Removing unreachable block (ram,0x00014db2948c) */
/* WARNING: Removing unreachable block (ram,0x00016276d501) */

void FUN_14db292ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 unaff_retaddr;
  longlong local_res8;
  
  pcVar2 = FUN_14dc87919;
  FUN_14dc87919();
  uVar1 = *(ulonglong *)(local_res8 + -0x98) ^ (ulonglong)pcVar2;
  if (-1 < (longlong)(~(ulonglong)pcVar2 | *(ulonglong *)(local_res8 + -8))) {
    FUN_16276d462();
    return;
  }
  if ((longlong)&stack0xffffffffffffffe8 < 0) {
    FUN_161a04341(uVar1,unaff_retaddr,param_3,param_4);
    return;
  }
  FUN_161a04341(uVar1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14db293ed FUN_14db293ed body=558 status=ok
// SIG undefined FUN_14db293ed(void)

/* WARNING: Removing unreachable block (ram,0x00014db2948c) */

void FUN_14db293ed(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong in_R10;
  undefined4 unaff_R14D;
  
  lVar1 = *(longlong *)(unaff_RDI + -0xa0);
  FUN_161825ab0(param_1,param_2);
  *(undefined4 *)(lVar1 + in_R10 + 0x4dff6e90) = unaff_R14D;
  return;
}



// FUNCTION 14db29526 FUN_14db29526 body=167 status=ok
// SIG undefined FUN_14db29526(void)

void FUN_14db29526(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = uVar1;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x28) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x30) = unaff_retaddr;
  *(code **)(local_res18 + -0x28) = FUN_14db295d0;
  (*(code *)&LAB_1566cb8e6)(uVar2);
  return;
}



// FUNCTION 14db295d0 FUN_14db295d0 body=324 status=ok
// SIG undefined FUN_14db295d0(void)

/* WARNING: Instruction at (ram,0x00014db295f8) overlaps instruction at (ram,0x00014db295f6)
    */
/* WARNING: Removing unreachable block (ram,0x00014db29651) */
/* WARNING: Removing unreachable block (ram,0x00014db29694) */
/* WARNING: Removing unreachable block (ram,0x00014db29653) */
/* WARNING: Removing unreachable block (ram,0x00014db295f8) */

void FUN_14db295d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 unaff_R13D;
  undefined4 unaff_000000ac;
  ulonglong unaff_R15;
  
  uVar1 = *(undefined8 *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x88);
  FUN_16530801d(uVar1,param_2,uVar1,
                *(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x60) ^ unaff_R15);
  FUN_162d23d03(*(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x90) | unaff_R15);
  return;
}



// FUNCTION 14db29b55 FUN_14db29b55 body=255 status=ok
// SIG undefined FUN_14db29b55(void)

void FUN_14db29b55(void)

{
  longlong unaff_RDI;
  
  FUN_15b9a4e7f(*(undefined8 *)(unaff_RDI + -0xa0));
  return;
}



// FUNCTION 14db29fa2 FUN_14db29fa2 body=147 status=ok
// SIG undefined FUN_14db29fa2(void)

void FUN_14db29fa2(void)

{
  FUN_164f8f164();
  FUN_156b0ed1b();
  return;
}



// FUNCTION 14db2a036 FUN_14db2a036 body=214 status=ok
// SIG undefined FUN_14db2a036(void)

void FUN_14db2a036(void)

{
  FUN_156b0ed1b();
  return;
}



// FUNCTION 14db2a47f FUN_14db2a47f body=282 status=ok
// SIG undefined FUN_14db2a47f(void)

void FUN_14db2a47f(void)

{
  ulonglong unaff_R13;
  uint unaff_retaddr;
  
  if (unaff_R13 !=
      ~(~((ulonglong)unaff_retaddr & 0xffffffffd95ece97) &
       ((ulonglong)unaff_retaddr | 0xffffffffd95ece97))) {
    FUN_14d892ce9();
    FUN_166bf4dc9();
    FUN_157615e29();
    FUN_156fc2438();
    return;
  }
  FUN_162dc6f43();
  return;
}



// FUNCTION 14db2a59a FUN_14db2a59a body=334 status=ok
// SIG undefined FUN_14db2a59a(void)

void FUN_14db2a59a(void)

{
  FUN_157615e29();
  FUN_156fc2438();
  return;
}



// FUNCTION 14db2a76e FUN_14db2a76e body=174 status=ok
// SIG undefined FUN_14db2a76e(void)

void FUN_14db2a76e(void)

{
  return;
}



// FUNCTION 14db2aa5b FUN_14db2aa5b body=137 status=ok
// SIG undefined FUN_14db2aa5b(void)

void FUN_14db2aa5b(void)

{
  FUN_16176e3ee();
  return;
}



// FUNCTION 14db2aae6 FUN_14db2aae6 body=131 status=ok
// SIG undefined FUN_14db2aae6(void)

void FUN_14db2aae6(void)

{
  return;
}



// FUNCTION 14db2ac21 FUN_14db2ac21 body=144 status=ok
// SIG undefined FUN_14db2ac21(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2ac21(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1621ee3f0((~in_RAX | *(ulonglong *)(unaff_R12 + -0x90)) &
                (~*(ulonglong *)(unaff_R12 + -0x90) | in_RAX),param_2,param_3,param_4);
  return;
}



// FUNCTION 14db2af53 FUN_14db2af53 body=156 status=ok
// SIG undefined FUN_14db2af53(void)

void FUN_14db2af53(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
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
  undefined8 local_res8;
  undefined8 local_res20;
  
  puVar1 = (undefined8 *)
           ~(~(0xffffffffffffffff - ((~param_1 | param_6) + param_1 + 1)) |
            0xffffffffffffffffU - param_4);
  bVar13 = (param_5 & 0x4000) != 0;
  bVar12 = (param_5 & 0x800) != 0;
  bVar11 = (param_5 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (param_5 & 0x80) != 0;
  bVar8 = (param_5 & 0x40) != 0;
  bVar7 = (param_5 & 0x10) != 0;
  bVar6 = (param_5 & 4) != 0;
  bVar5 = (param_5 & 1) != 0;
  bVar17 = (param_5 & 0x200000) != 0;
  bVar14 = (param_5 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar3 = (*pcVar2)();
  *puVar1 = uVar3;
  puVar1[-1] = uVar3;
  *(undefined4 *)(puVar1 + -2) = 0x1132a2fc;
  *(undefined4 *)((longlong)puVar1 - 0xc) = 0;
  puVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar1[-3] = unaff_R15;
  puVar1[-4] = FUN_14db2afef;
  uVar4 = FUN_162a6ebbc();
  puVar1[-2] = local_res8;
  *(code **)((longlong)puVar1 + (unaff_RBP + in_R10 + (unaff_RBP & in_R10) * -2 ^ 0x62e9be57) + 8) =
       FUN_162a6ebbc;
  puVar1[1] = unaff_R14;
  puVar1[2] = puVar1[2] ^ uVar4;
  puVar1[3] = puVar1[3] ^ uVar4;
  puVar1[4] = puVar1[4] ^ uVar4;
  puVar1[2] = param_3;
  puVar1[1] = local_res20;
  FUN_162b6005c(FUN_162b6005c);
  return;
}



// FUNCTION 14db2afef FUN_14db2afef body=143 status=ok
// SIG undefined FUN_14db2afef(void)

void FUN_14db2afef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong in_R10;
  undefined8 unaff_R15;
  undefined8 uStack0000000000000028;
  
  *(undefined8 *)(&stack0x00000020 + (unaff_RBP + in_R10 + (unaff_RBP & in_R10) * -2 ^ 0x62e9be57))
       = unaff_R15;
  uStack0000000000000028 = param_3;
  FUN_162b6005c(FUN_162b6005c);
  return;
}



// FUNCTION 14db2b07f FUN_14db2b07f body=753 status=ok
// SIG undefined FUN_14db2b07f(void)

/* WARNING: Instruction at (ram,0x00014db2b3f7) overlaps instruction at (ram,0x00014db2b3f6)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001570dba8e) */
/* WARNING: Removing unreachable block (ram,0x0001570dbaac) */
/* WARNING: Removing unreachable block (ram,0x0001570dbb35) */
/* WARNING: Removing unreachable block (ram,0x0001570dbb3b) */
/* WARNING: Removing unreachable block (ram,0x0001612de62a) */
/* WARNING: Removing unreachable block (ram,0x0001658270c7) */
/* WARNING: Removing unreachable block (ram,0x0001612de6b2) */
/* WARNING: Removing unreachable block (ram,0x0001612de6b8) */
/* WARNING: Removing unreachable block (ram,0x0001612de6bd) */
/* WARNING: Removing unreachable block (ram,0x0001612de763) */
/* WARNING: Removing unreachable block (ram,0x000165b61680) */
/* WARNING: Removing unreachable block (ram,0x0001612de769) */
/* WARNING: Removing unreachable block (ram,0x0001612de7a7) */
/* WARNING: Removing unreachable block (ram,0x0001612de7cb) */
/* WARNING: Removing unreachable block (ram,0x0001612de7d1) */
/* WARNING: Removing unreachable block (ram,0x0001612de7d6) */
/* WARNING: Removing unreachable block (ram,0x00015b2a6e27) */
/* WARNING: Removing unreachable block (ram,0x00015b2a6e37) */
/* WARNING: Removing unreachable block (ram,0x00015b2a6e32) */
/* WARNING: Removing unreachable block (ram,0x00015b2a6e3a) */
/* WARNING: Removing unreachable block (ram,0x0001570dbaa0) */
/* WARNING: Removing unreachable block (ram,0x00014db2b125) */
/* WARNING: Removing unreachable block (ram,0x00014db2b12b) */
/* WARNING: Removing unreachable block (ram,0x00014db2b1b2) */
/* WARNING: Removing unreachable block (ram,0x0001563c7161) */
/* WARNING: Removing unreachable block (ram,0x00014db2b1b8) */
/* WARNING: Removing unreachable block (ram,0x00014db2b20f) */
/* WARNING: Removing unreachable block (ram,0x00014db2b212) */
/* WARNING: Removing unreachable block (ram,0x00014db2b258) */
/* WARNING: Removing unreachable block (ram,0x00014db2b25e) */
/* WARNING: Removing unreachable block (ram,0x00014db2b263) */
/* WARNING: Removing unreachable block (ram,0x00016291733d) */
/* WARNING: Removing unreachable block (ram,0x00014db2b304) */
/* WARNING: Removing unreachable block (ram,0x00014db2b310) */
/* WARNING: Removing unreachable block (ram,0x00014db2b315) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3f7) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3f6) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3fd) */
/* WARNING: Removing unreachable block (ram,0x00014db2b422) */
/* WARNING: Removing unreachable block (ram,0x00014db2b428) */
/* WARNING: Removing unreachable block (ram,0x000165263f85) */
/* WARNING: Removing unreachable block (ram,0x000166df8b09) */
/* WARNING: Removing unreachable block (ram,0x0001570dba1d) */
/* WARNING: Removing unreachable block (ram,0x0001570dba7a) */
/* WARNING: Removing unreachable block (ram,0x0001570dba7b) */
/* WARNING: Removing unreachable block (ram,0x0001570dba89) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9553) */
/* WARNING: Removing unreachable block (ram,0x000166df8b78) */
/* WARNING: Removing unreachable block (ram,0x000166df8b84) */
/* WARNING: Removing unreachable block (ram,0x000166df8b96) */

undefined8 FUN_14db2b07f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong local_res18;
  
  uVar1 = ~local_res18 & unaff_RSI;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined **)(uVar1 - 8) = &DAT_1648ae7a9;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(undefined **)(uVar1 - 0x10) = &DAT_14d7a74c8;
  return in_RAX;
}



// FUNCTION 14db2b263 FUN_14db2b263 body=606 status=ok
// SIG undefined FUN_14db2b263(void)

/* WARNING: Instruction at (ram,0x00014db2b3f7) overlaps instruction at (ram,0x00014db2b3f6)
    */
/* WARNING: Removing unreachable block (ram,0x00014db2b315) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3f7) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3f6) */
/* WARNING: Removing unreachable block (ram,0x00014db2b3fd) */
/* WARNING: Removing unreachable block (ram,0x00014db2b422) */
/* WARNING: Removing unreachable block (ram,0x00014db2b428) */
/* WARNING: Removing unreachable block (ram,0x000165263f85) */

void FUN_14db2b263(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -8) & param_1) & (*(ulonglong *)(unaff_RDI + -8) | param_1);
  if (-1 < (longlong)uVar1) {
    FUN_16291733d();
    return;
  }
  FUN_1575e2f18(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,param_2,((ushort)uVar1 | 0x100) - 0x101)
  ;
  return;
}



// FUNCTION 14db2b4c7 FUN_14db2b4c7 body=96 status=ok
// SIG undefined FUN_14db2b4c7(void)

void FUN_14db2b4c7(void)

{
  return;
}



// FUNCTION 14db2b605 FUN_14db2b605 body=34 status=ok
// SIG undefined FUN_14db2b605(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db2b624) overlaps instruction at (ram,0x00014db2b623)
    */
/* WARNING: Removing unreachable block (ram,0x00014db2b623) */

void FUN_14db2b605(void)

{
  longlong unaff_RSI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x1567cfd3a)(*(undefined8 *)(unaff_RSI + 0x38));
  FUN_15b2e1fe4();
  return;
}



// FUNCTION 14db2b698 FUN_14db2b698 body=132 status=ok
// SIG undefined FUN_14db2b698(void)

void FUN_14db2b698(void)

{
  FUN_15b2e1fe4();
  return;
}



// FUNCTION 14db2b720 FUN_14db2b720 body=144 status=ok
// SIG undefined FUN_14db2b720(void)

void FUN_14db2b720(undefined8 param_1)

{
  longlong unaff_R13;
  
  (*(code *)0x162bafb64)(param_1,0xffffffffffffff70,0x162bafb64,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14db2b85d FUN_14db2b85d body=170 status=ok
// SIG undefined FUN_14db2b85d(void)

/* WARNING: Removing unreachable block (ram,0x00014db2b907) */

void FUN_14db2b85d(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  short param_5)

{
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) & unaff_RSI;
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~(param_2 & *(ulonglong *)(unaff_R12 + 0x10));
  if (param_5 != 0) {
    FUN_1567d0275();
    return;
  }
  FUN_1567d0275();
  return;
}



// FUNCTION 14db2b907 FUN_14db2b907 body=185 status=ok
// SIG undefined FUN_14db2b907(void)

void FUN_14db2b907(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_162603dcb(0x321fc2b1,param_2,0xffffffffffffffd0,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db2b9c1 FUN_14db2b9c1 body=314 status=ok
// SIG undefined FUN_14db2b9c1(void)

/* WARNING: Removing unreachable block (ram,0x000156bc512f) */
/* WARNING: Removing unreachable block (ram,0x000156bc5135) */
/* WARNING: Removing unreachable block (ram,0x000156bc513a) */
/* WARNING: Removing unreachable block (ram,0x00016594a9df) */
/* WARNING: Removing unreachable block (ram,0x00014db2ba4c) */

undefined8 FUN_14db2b9c1(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  
  uVar1 = FUN_1628e0e93(*(ulonglong *)(unaff_R13 + -0x78) + CONCAT62(unaff_000000ba,unaff_R15W) +
                        (*(ulonglong *)(unaff_R13 + -0x78) & CONCAT62(unaff_000000ba,unaff_R15W)) *
                        -2,*(ulonglong *)(unaff_R13 + -0x28) ^ CONCAT62(unaff_000000ba,unaff_R15W));
  return uVar1;
}



// FUNCTION 14db2bb9b FUN_14db2bb9b body=12 status=ok
// SIG undefined FUN_14db2bb9b(void)

void FUN_14db2bb9b(void)

{
  return;
}



// FUNCTION 14db2bc9a FUN_14db2bc9a body=141 status=ok
// SIG undefined FUN_14db2bc9a(void)

/* WARNING: Removing unreachable block (ram,0x00014db2bd23) */
/* WARNING: Removing unreachable block (ram,0x00014db2bd29) */
/* WARNING: Removing unreachable block (ram,0x00014db2bdbd) */
/* WARNING: Removing unreachable block (ram,0x00014db2bdc2) */
/* WARNING: Removing unreachable block (ram,0x00014db2bdc8) */
/* WARNING: Removing unreachable block (ram,0x00014db2bdcd) */

void FUN_14db2bc9a(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong in_R11;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong in_stack_00000018;
  ulonglong uStackX_20;
  
  uVar1 = *(ulonglong *)
           ((longlong)&local_res10 +
           ~(~(unaff_R14 & 0xfffffffffca62a7a) & (unaff_R14 | 0xfffffffffca62a7a)));
  local_res10 = param_3;
  lVar2 = (unaff_R15 - (~uStackX_20 | unaff_R15)) + ~uStackX_20;
  FUN_16253aeed(lVar2,FUN_16253aeed,~unaff_R15 | uStackX_20,param_4,
                (~in_stack_00000018 | ~unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  uVar1 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) =
       (~(uVar1 & ~unaff_R15) + ~unaff_R15) - *(longlong *)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = -*(longlong *)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + -1;
  local_res10 = in_R11 + local_res10 * -2;
  FUN_1571c072a(lVar2);
  return;
}



// FUNCTION 14db2bd29 FUN_14db2bd29 body=164 status=ok
// SIG undefined FUN_14db2bd29(void)

/* WARNING: Removing unreachable block (ram,0x00014db2bdcd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db2bd29(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -8) == 0) {
    FUN_15b092252();
    return;
  }
  FUN_15b092252();
  return;
}



// FUNCTION 14db2bdcd FUN_14db2bdcd body=186 status=ok
// SIG undefined FUN_14db2bdcd(void)

void FUN_14db2bdcd(void)

{
  return;
}



// FUNCTION 14db2be87 FUN_14db2be87 body=108 status=ok
// SIG undefined FUN_14db2be87(void)

void FUN_14db2be87(undefined8 param_1)

{
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong uVar1;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
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
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x617e75e;
  FUN_165c7153c(*(undefined8 *)(local_res10 + -0x18));
  return;
}


