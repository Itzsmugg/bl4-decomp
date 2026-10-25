// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d919eff FUN_14d919eff body=173 status=ok
// SIG undefined FUN_14d919eff(void)

void FUN_14d919eff(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  FUN_15ba3726b(~(uVar1 & unaff_RBP) & (uVar1 + unaff_RBP) - (uVar1 & unaff_RBP),
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,FUN_15ba3726b);
  return;
}



// FUNCTION 14d919fad FUN_14d919fad body=144 status=ok
// SIG undefined FUN_14d919fad(void)

void FUN_14d919fad(void)

{
  return;
}



// FUNCTION 14d91a040 FUN_14d91a040 body=151 status=ok
// SIG undefined FUN_14d91a040(void)

void FUN_14d91a040(void)

{
  longlong unaff_RSI;
  ulonglong in_R10;
  
  FUN_1662c634a(FUN_1662c634a,
                *(ulonglong *)(unaff_RSI + -0x90) + in_R10 +
                (*(ulonglong *)(unaff_RSI + -0x90) & in_R10) * -2);
  return;
}



// FUNCTION 14d91a0d7 FUN_14d91a0d7 body=347 status=ok
// SIG undefined FUN_14d91a0d7(void)

/* WARNING: Removing unreachable block (ram,0x00014d91a187) */

undefined8 FUN_14d91a0d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  short in_R10W;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res20;
  
  *param_4 = in_R10W + *param_4;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = 0x1ff879b;
  *puVar1 = *puVar1 ^ 0x1ff879b;
  *puVar1 = *puVar1 ^ param_1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  plVar2 = (longlong *)(local_res20 + -0x20);
  *(int *)plVar2 = -0x45de1cb2;
  *(int *)plVar2 = *(int *)plVar2 + 0x45de1cb2;
  *(undefined4 *)(local_res20 + -0x1c) = 0xb4373a2f;
  *(int *)(local_res20 + -0x1c) = *(int *)(local_res20 + -0x1c) + 0x4bc8c5d1;
  lVar3 = *plVar2;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(longlong *)(local_res20 + -0x10) = lVar3 + *(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x156f2b0f0;
  uVar4 = thunk_FUN_15b642ca5(*(undefined8 *)(local_res20 + -0x10),param_2,param_3,
                              *(undefined8 *)(local_res20 + -0x20));
  return uVar4;
}



// FUNCTION 14d91a235 FUN_14d91a235 body=7 status=ok
// SIG undefined FUN_14d91a235(void)

void FUN_14d91a235(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d91a2bb FUN_14d91a2bb body=24 status=ok
// SIG undefined FUN_14d91a2bb(void)

void FUN_14d91a2bb(void)

{
  return;
}



// FUNCTION 14d91a418 FUN_14d91a418 body=197 status=ok
// SIG undefined FUN_14d91a418(void)

void FUN_14d91a418(void)

{
  return;
}



// FUNCTION 14d91a697 FUN_14d91a697 body=26 status=ok
// SIG undefined FUN_14d91a697(void)

void FUN_14d91a697(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d91a7e3 FUN_14d91a7e3 body=14 status=ok
// SIG undefined FUN_14d91a7e3(void)

void FUN_14d91a7e3(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d91a87d FUN_14d91a87d body=620 status=ok
// SIG undefined FUN_14d91a87d(void)

/* WARNING: Removing unreachable block (ram,0x000164aac20f) */
/* WARNING: Removing unreachable block (ram,0x000164aac22a) */
/* WARNING: Removing unreachable block (ram,0x000164aac21f) */
/* WARNING: Removing unreachable block (ram,0x00014d91a925) */
/* WARNING: Removing unreachable block (ram,0x00014d91a948) */
/* WARNING: Removing unreachable block (ram,0x00014d91a94b) */

void FUN_14d91a87d(undefined8 param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong in_R11;
  longlong unaff_R14;
  uint auStack_8 [2];
  
  puVar1 = (uint *)(&stack0x00000000 + (in_R11 - unaff_R14));
  *puVar1 = 0xf9d54e11;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 2;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 + 0x133fcb37;
  puVar1[1] = 0;
  puVar1[-2] = 0x1c66fb;
  puVar1[-1] = 0;
  lVar4 = *(longlong *)(puVar1 + -2);
  *(undefined8 *)(puVar1 + -2) = param_1;
  plVar2 = (longlong *)((longlong)puVar1 + lVar4 + -0x1c66fb);
  *plVar2 = *(longlong *)puVar1;
  _fxrstor((longlong)puVar1 + (lVar4 - ~(*plVar2 - 0xd15d44eU)) + -0x1babdd);
  piVar3 = (int *)(unaff_RBP + -8);
  *(undefined8 *)piVar3 = in_RAX;
  *piVar3 = 0;
  *piVar3 = *piVar3 + -0x3c917c00;
  *piVar3 = *piVar3 + 0x3c917c00;
  *(undefined4 *)(unaff_RBP + -4) = 0;
  *(undefined8 *)(unaff_RBP + -8) = in_RAX;
  *(undefined **)(unaff_RBP + -0x10) = &DAT_14de3ce48;
  return;
}



// FUNCTION 14d91a9a5 FUN_14d91a9a5 body=34 status=ok
// SIG undefined FUN_14d91a9a5(void)

void FUN_14d91a9a5(void)

{
  return;
}



// FUNCTION 14d91ab1d FUN_14d91ab1d body=158 status=ok
// SIG undefined FUN_14d91ab1d(void)

void FUN_14d91ab1d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_164abf72a(param_1,unaff_retaddr,param_3,FUN_164abf72a);
  return;
}



// FUNCTION 14d91b0e4 FUN_14d91b0e4 body=280 status=ok
// SIG undefined FUN_14d91b0e4(void)

/* WARNING: Removing unreachable block (ram,0x000162d5776d) */
/* WARNING: Removing unreachable block (ram,0x000162d57773) */
/* WARNING: Removing unreachable block (ram,0x00014d91b174) */
/* WARNING: Removing unreachable block (ram,0x00014d91b180) */
/* WARNING: Removing unreachable block (ram,0x000162ede3ec) */

void FUN_14d91b0e4(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15656d090(~(((param_1 | unaff_RBP) - (param_2 | param_1 | unaff_RBP)) + param_2),
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4);
  return;
}



// FUNCTION 14d91b180 FUN_14d91b180 body=153 status=ok
// SIG undefined FUN_14d91b180(void)

void FUN_14d91b180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  
  *(ulonglong *)(unaff_RBP + 0x10) = -1 - ~(~in_RAX | ~*(ulonglong *)(unaff_RBP + 0x10));
  FUN_16169b793(FUN_16169b793,param_2,param_3);
  return;
}



// FUNCTION 14d91b219 FUN_14d91b219 body=32 status=ok
// SIG undefined FUN_14d91b219(void)

void FUN_14d91b219(void)

{
  return;
}



// FUNCTION 14d91b4cc FUN_14d91b4cc body=148 status=ok
// SIG undefined FUN_14d91b4cc(void)

void FUN_14d91b4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1652b4bd2(param_1,FUN_1652b4bd2,param_3,param_4);
  return;
}



// FUNCTION 14d91b6ce FUN_14d91b6ce body=199 status=ok
// SIG undefined FUN_14d91b6ce(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb688b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6875) */
/* WARNING: Removing unreachable block (ram,0x00014dbb6886) */
/* WARNING: Removing unreachable block (ram,0x00014dbb688d) */
/* WARNING: Removing unreachable block (ram,0x00014dbb685f) */
/* WARNING: Removing unreachable block (ram,0x00014d91b78c) */
/* WARNING: Removing unreachable block (ram,0x00014d91b77c) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbb67d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d91b6ce(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_R12;
  int unaff_R14D;
  undefined8 in_stack_00000008;
  
  uVar1 = *(undefined8 *)(unaff_R12 + param_2 + 0x4293ec59);
  uVar2 = FUN_16247e44c(param_1,in_stack_00000008);
  if (unaff_R14D < 0) {
    return uVar2;
  }
  uVar2 = 0x70;
  FUN_1573ccefb();
  uVar1 = FUN_16271c3cb(uVar1,uVar2);
  return uVar1;
}



// FUNCTION 14d91b823 FUN_14d91b823 body=116 status=ok
// SIG undefined FUN_14d91b823(void)

void FUN_14d91b823(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | 0xffffffff9753dcb3;
  *(ulonglong *)(unaff_RBX + 8) = ~(~(uVar1 & 0xffffffff9753dcb3) & *(ulonglong *)(unaff_RBX + 8));
  return;
}



// FUNCTION 14d91b8e7 FUN_14d91b8e7 body=166 status=ok
// SIG undefined FUN_14d91b8e7(void)

void FUN_14d91b8e7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_retaddr;
  
  uVar3 = unaff_retaddr ^ 0x5f029505;
  *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3) = param_3;
  uVar2 = *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3);
  *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3) = in_R10;
  uVar1 = *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3);
  *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3) =
       *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3) & in_RAX;
  *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3) =
       ~*(ulonglong *)(&stack0xffffffffffdb2290 + uVar3);
  *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3) =
       *(ulonglong *)(&stack0xffffffffffdb2290 + uVar3) & (uVar1 | in_RAX);
  *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3) =
       *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3);
  *(undefined8 *)(&stack0xffffffffffdb2280 + uVar3) = param_4;
  uVar1 = *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3);
  *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3) =
       ~*(ulonglong *)(&stack0xffffffffffdb2298 + uVar3);
  *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3) =
       *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3) | in_RAX;
  *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3) =
       ~((~in_RAX | uVar1) & *(ulonglong *)(&stack0xffffffffffdb2298 + uVar3));
  *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3) =
       *(undefined8 *)(&stack0xffffffffffdb2288 + uVar3);
  *(ulonglong *)(&stack0xffffffffffdb2280 + uVar3) = ~(unaff_R12 & in_RAX) & (unaff_R12 | in_RAX);
  *(undefined8 *)(&stack0xffffffffffdb2278 + uVar3) = uVar2;
  *(undefined8 *)(&stack0xffffffffffdb2270 + uVar3) = uVar2;
  *(undefined8 *)(&stack0xffffffffffdb2268 + uVar3) = uVar2;
  *(undefined1 **)(&stack0xffffffffffdb2278 + uVar3) = &LAB_14d91b98e;
  *(undefined1 **)(&stack0xffffffffffdb2270 + uVar3) = &LAB_164898fc9;
  return;
}



// FUNCTION 14d91ba4d FUN_14d91ba4d body=516 status=ok
// SIG undefined FUN_14d91ba4d(void)

/* WARNING: Removing unreachable block (ram,0x00014d91bccc) */
/* WARNING: Removing unreachable block (ram,0x00014d91bcd7) */
/* WARNING: Removing unreachable block (ram,0x00014d91bb95) */
/* WARNING: Removing unreachable block (ram,0x00014d91bb9b) */
/* WARNING: Removing unreachable block (ram,0x00014d91bba0) */
/* WARNING: Removing unreachable block (ram,0x00014d91bc46) */
/* WARNING: Removing unreachable block (ram,0x00014d91bc4b) */
/* WARNING: Removing unreachable block (ram,0x00014d91bc51) */
/* WARNING: Removing unreachable block (ram,0x00014d91bc56) */
/* WARNING: Removing unreachable block (ram,0x0001665b7b10) */
/* WARNING: Removing unreachable block (ram,0x0001665b7b96) */
/* WARNING: Removing unreachable block (ram,0x0001665b7b9c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6551f) */
/* WARNING: Removing unreachable block (ram,0x00014d91bcd2) */

void FUN_14d91ba4d(undefined8 param_1)

{
  FUN_165eb9884(param_1,0x5bd15ac6);
  FUN_1661ed83a();
  return;
}



// FUNCTION 14d91bc56 FUN_14d91bc56 body=396 status=ok
// SIG undefined FUN_14d91bc56(void)

/* WARNING: Removing unreachable block (ram,0x00014d91bccc) */
/* WARNING: Removing unreachable block (ram,0x00014d91bcd7) */
/* WARNING: Removing unreachable block (ram,0x0001665b7b96) */
/* WARNING: Removing unreachable block (ram,0x0001665b7b9c) */
/* WARNING: Removing unreachable block (ram,0x00014d91bcd2) */

void FUN_14d91bc56(void)

{
  undefined8 local_res8;
  
  (*(code *)0x166d436a0)(local_res8);
  return;
}



// FUNCTION 14d91bde4 FUN_14d91bde4 body=79 status=ok
// SIG undefined FUN_14d91bde4(void)

void FUN_14d91bde4(undefined8 param_1)

{
  FUN_14de2f02d(param_1);
  return;
}



// FUNCTION 14d91bec6 FUN_14d91bec6 body=313 status=ok
// SIG undefined FUN_14d91bec6(void)

/* WARNING: Removing unreachable block (ram,0x00014d91bf74) */
/* WARNING: Removing unreachable block (ram,0x00014d91bf7a) */

void FUN_14d91bec6(void)

{
  return;
}



// FUNCTION 14d91c0bc FUN_14d91c0bc body=137 status=ok
// SIG undefined FUN_14d91c0bc(void)

void FUN_14d91c0bc(void)

{
  return;
}



// FUNCTION 14d91c46e FUN_14d91c46e body=147 status=ok
// SIG undefined FUN_14d91c46e(void)

void FUN_14d91c46e(void)

{
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  
  FUN_1652c50c4(local_res10,in_stack_00000008);
  return;
}



// FUNCTION 14d91c508 FUN_14d91c508 body=140 status=ok
// SIG undefined FUN_14d91c508(void)

void FUN_14d91c508(undefined8 param_1,undefined8 param_2)

{
  FUN_15b68106e(param_1,param_2);
  FUN_14d91c595();
  return;
}



// FUNCTION 14d91c595 FUN_14d91c595 body=301 status=ok
// SIG undefined FUN_14d91c595(void)

/* WARNING: Removing unreachable block (ram,0x000161110422) */
/* WARNING: Removing unreachable block (ram,0x00014d91c635) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d91c595(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1655ebc7e(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d91c6ce FUN_14d91c6ce body=320 status=ok
// SIG undefined FUN_14d91c6ce(void)

/* WARNING: Instruction at (ram,0x00015b02b7bf) overlaps instruction at (ram,0x00015b02b7be)
    */
/* WARNING: Removing unreachable block (ram,0x000162420e01) */
/* WARNING: Removing unreachable block (ram,0x000162420e0d) */
/* WARNING: Removing unreachable block (ram,0x00015b02b7a5) */
/* WARNING: Removing unreachable block (ram,0x00015b02b7bf) */
/* WARNING: Removing unreachable block (ram,0x00015b02b7ca) */
/* WARNING: Removing unreachable block (ram,0x00015b02b7be) */
/* WARNING: Removing unreachable block (ram,0x00015b02b7c5) */
/* WARNING: Removing unreachable block (ram,0x00014d91c748) */
/* WARNING: Removing unreachable block (ram,0x00014d91c771) */
/* WARNING: Removing unreachable block (ram,0x00014d91c88d) */
/* WARNING: Removing unreachable block (ram,0x00014d91c898) */
/* WARNING: Removing unreachable block (ram,0x00014d91c8a3) */
/* WARNING: Removing unreachable block (ram,0x00014d91c89e) */

undefined8 FUN_14d91c6ce(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong in_R10;
  longlong unaff_R12;
  longlong local_10;
  
  *param_1 = -1 - param_4;
  lVar5 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  local_10 = lVar5 + 0x20;
  uVar4 = FUN_14dcdeb46();
  lVar5 = lVar5 - in_R10;
  puVar1 = (uint *)(&stack0xfffffffffffffff8 + lVar5);
  *(undefined8 *)((longlong)&local_10 + lVar5) = *(undefined8 *)(unaff_RDI + -0x30);
  *(undefined8 *)puVar1 = *(undefined8 *)((longlong)&local_10 + lVar5);
  *(int **)puVar1 = param_1;
  uVar2 = *(undefined8 *)puVar1;
  *(undefined8 *)puVar1 = uVar4;
  *puVar1 = 0xaf8235d5;
  *puVar1 = *puVar1 ^ 0x24f582d8;
  *(undefined4 *)(&stack0xfffffffffffffffc + lVar5) = 0xffffffff;
  if (*(longlong *)puVar1 == -0x3e8585c8) {
    uVar2 = (*(code *)&LAB_1661d1e96)();
    return uVar2;
  }
  puVar1[0] = 0x5b02b6fd;
  puVar1[1] = 1;
  lVar3 = FUN_162535b11();
  *(undefined8 *)puVar1 = uVar2;
  lVar5 = *(longlong *)(unaff_R12 + -0x78);
  *(longlong *)puVar1 = lVar5 + lVar3;
  if (lVar5 != -1 || lVar3 != -1) {
    uVar2 = FUN_15746ff78();
    return uVar2;
  }
  uVar2 = FUN_15746ff78();
  return uVar2;
}



// FUNCTION 14d91c771 FUN_14d91c771 body=475 status=ok
// SIG undefined FUN_14d91c771(void)

/* WARNING: Removing unreachable block (ram,0x00014d91c8a3) */

undefined8 FUN_14d91c771(void)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 local_res8;
  
  pcVar3 = FUN_16235149f;
  FUN_16235149f();
  lVar1 = *(longlong *)(unaff_R13 + -0x60);
  *(undefined8 *)(&stack0xfffffffffa839e70 + (longlong)pcVar3) = local_res8;
  if (-1 < lVar1 + unaff_R15) {
    uVar2 = FUN_1649328cd();
    return uVar2;
  }
  uVar2 = FUN_1649328cd();
  return uVar2;
}



// FUNCTION 14d91ca78 FUN_14d91ca78 body=275 status=ok
// SIG undefined FUN_14d91ca78(void)

/* WARNING: Instruction at (ram,0x00014d91cab8) overlaps instruction at (ram,0x00014d91cab7)
    */
/* WARNING: Removing unreachable block (ram,0x00014d91cb08) */
/* WARNING: Removing unreachable block (ram,0x00014d91cb1f) */
/* WARNING: Removing unreachable block (ram,0x00014d91cb2b) */
/* WARNING: Removing unreachable block (ram,0x00014d91cb49) */
/* WARNING: Removing unreachable block (ram,0x00014d91cb4e) */
/* WARNING: Removing unreachable block (ram,0x00014d91cab7) */

void FUN_14d91ca78(undefined8 param_1,undefined8 param_2)

{
  byte in_ZF;
  undefined8 unaff_retaddr;
  undefined1 local_res10 [8];
  
  if ((int)((uint)(in_ZF & 1) << 0x1f) < 0) {
    return;
  }
  if (local_res10 < &DAT_fffffffffffffff8) {
    FUN_165682a15(0xbe,param_2,unaff_retaddr);
    return;
  }
  FUN_16131a114();
  return;
}



// FUNCTION 14d91cc16 FUN_14d91cc16 body=3 status=ok
// SIG undefined FUN_14d91cc16(void)

void FUN_14d91cc16(void)

{
  return;
}



// FUNCTION 14d91cd68 FUN_14d91cd68 body=53 status=ok
// SIG undefined FUN_14d91cd68(void)

void FUN_14d91cd68(void)

{
  return;
}



// FUNCTION 14d91ce0d FUN_14d91ce0d body=130 status=ok
// SIG undefined FUN_14d91ce0d(void)

void FUN_14d91ce0d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x16645d9d7)(param_1,0x16645d9d7,param_3);
  return;
}



// FUNCTION 14d91cf29 FUN_14d91cf29 body=154 status=ok
// SIG undefined FUN_14d91cf29(void)

void FUN_14d91cf29(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  ushort uVar1;
  undefined8 in_R11;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
  uVar1 = (-0x101 - (local_res18 | 0xfeff)) + local_res18;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined4 *)(local_res20 + -0x18) = 0x6f0083b;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  (*(code *)0x160be80a6)(param_1,param_2);
  return;
}



// FUNCTION 14d91d163 FUN_14d91d163 body=191 status=ok
// SIG undefined FUN_14d91d163(void)

/* WARNING: Removing unreachable block (ram,0x00014d91d212) */
/* WARNING: Removing unreachable block (ram,0x00014d91d229) */
/* WARNING: Removing unreachable block (ram,0x000165ec4b33) */
/* WARNING: Removing unreachable block (ram,0x000165ec4b39) */
/* WARNING: Removing unreachable block (ram,0x000165ec4bbd) */
/* WARNING: Removing unreachable block (ram,0x00015b3508b6) */
/* WARNING: Removing unreachable block (ram,0x000165ec4bc3) */
/* WARNING: Removing unreachable block (ram,0x000165ec4c4f) */
/* WARNING: Removing unreachable block (ram,0x000165ec4c5a) */
/* WARNING: Removing unreachable block (ram,0x000165ec4c60) */
/* WARNING: Removing unreachable block (ram,0x000164b10fd4) */
/* WARNING: Removing unreachable block (ram,0x000164b1106f) */
/* WARNING: Removing unreachable block (ram,0x000164b11074) */
/* WARNING: Removing unreachable block (ram,0x000164b1107a) */
/* WARNING: Removing unreachable block (ram,0x0001564bb59d) */
/* WARNING: Removing unreachable block (ram,0x00014d91d21e) */
/* WARNING: Removing unreachable block (ram,0x000165ec495d) */
/* WARNING: Removing unreachable block (ram,0x00016662e061) */
/* WARNING: Removing unreachable block (ram,0x000165ec49e8) */
/* WARNING: Removing unreachable block (ram,0x000165ec49f4) */
/* WARNING: Removing unreachable block (ram,0x0001663ce1be) */
/* WARNING: Removing unreachable block (ram,0x000165ec49f9) */
/* WARNING: Removing unreachable block (ram,0x000165ec4a5d) */
/* WARNING: Removing unreachable block (ram,0x000165ec4a61) */
/* WARNING: Removing unreachable block (ram,0x0001663ce1b3) */
/* WARNING: Removing unreachable block (ram,0x0001663ce1b9) */
/* WARNING: Removing unreachable block (ram,0x000156ecdbbb) */
/* WARNING: Removing unreachable block (ram,0x0001617af359) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d91d163(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) & param_1;
  if (-1 < (longlong)uVar1) {
    FUN_156e6aec2(param_1,(-~param_1 - (~*(ulonglong *)(unaff_RDI + -0x68) + 2)) + uVar1 * -2,
                  param_3 ^ param_1);
    return;
  }
  FUN_165ec48d6();
  return;
}



// FUNCTION 14d91d229 FUN_14d91d229 body=145 status=ok
// SIG undefined FUN_14d91d229(void)

void FUN_14d91d229(undefined8 param_1,undefined8 param_2)

{
  FUN_162238da1(param_1,param_2,FUN_162238da1,0);
  return;
}



// FUNCTION 14d91d471 FUN_14d91d471 body=3 status=ok
// SIG undefined FUN_14d91d471(void)

void FUN_14d91d471(void)

{
  return;
}



// FUNCTION 14d91d4f3 FUN_14d91d4f3 body=139 status=ok
// SIG undefined FUN_14d91d4f3(void)

/* WARNING: Removing unreachable block (ram,0x000164bf78e5) */
/* WARNING: Removing unreachable block (ram,0x000164bf78eb) */
/* WARNING: Removing unreachable block (ram,0x00015b66ecc3) */
/* WARNING: Removing unreachable block (ram,0x00014d91d57f) */

void FUN_14d91d4f3(void)

{
  FUN_15b66ecc3();
  return;
}



// FUNCTION 14d91d57f FUN_14d91d57f body=152 status=ok
// SIG undefined FUN_14d91d57f(void)

void FUN_14d91d57f(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  longlong in_R9;
  ulonglong in_R10;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_AF;
  ulonglong uStack_8;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + in_R9);
  *puVar1 = in_R10;
  uVar3 = *puVar1;
  uVar5 = 0xffffffffffffffff - (in_R10 & unaff_R15) & (uVar3 | unaff_R15);
  uVar4 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
           (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  *puVar1 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                     CONCAT11(((longlong)uVar5 < 0) << 7 | (uVar5 == 0) << 6 | in_AF << 4 |
                              ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) << 2,(char)in_RAX)) | 0x200;
  puVar1[-1] = unaff_RSI;
  uVar2 = *(undefined8 *)(unaff_R13 + -0x88);
  *puVar1 = 0x14d91d615;
  FUN_156af2a92(uVar3 | unaff_R15,uVar4,uVar2,uVar4);
  return;
}



// FUNCTION 14d91d698 FUN_14d91d698 body=273 status=ok
// SIG undefined FUN_14d91d698(void)

/* WARNING: Removing unreachable block (ram,0x00014d91d79f) */
/* WARNING: Removing unreachable block (ram,0x00014d91d7a5) */
/* WARNING: Removing unreachable block (ram,0x00014d91d7b0) */
/* WARNING: Removing unreachable block (ram,0x00016173758c) */

undefined8
FUN_14d91d698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort in_AX;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  short *unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
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
  ulonglong uVar19;
  undefined8 local_res10;
  ulonglong uStackX_20;
  
  *unaff_R12 = (-0x101 - (in_AX | 0xfeff)) + *unaff_R12;
  bVar14 = (uStackX_20 & 0x4000) != 0;
  bVar13 = (uStackX_20 & 0x800) != 0;
  bVar12 = (uStackX_20 & 0x200) != 0;
  bVar11 = (uStackX_20 & 0x100) != 0;
  bVar10 = (uStackX_20 & 0x80) != 0;
  bVar9 = (uStackX_20 & 0x40) != 0;
  bVar8 = (uStackX_20 & 0x10) != 0;
  bVar7 = (uStackX_20 & 4) != 0;
  bVar6 = (uStackX_20 & 1) != 0;
  bVar18 = (uStackX_20 & 0x200000) != 0;
  bVar15 = (uStackX_20 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar5 = (code *)swi(0x2e);
  uVar3 = (*pcVar5)(param_1,param_2);
  *param_5 = param_3;
  param_5[-1] = param_3;
  param_5[-2] = uVar3;
  *(undefined4 *)(param_5 + -2) = 0x59a2600;
  param_5[-3] = unaff_RDI;
  param_5[-4] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
                (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
                (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
                (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
                (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
                (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  *(undefined4 *)((longlong)param_5 + -0xc) = 0;
  uVar19 = param_5[-4];
  lVar1 = param_5[-3];
  param_5[-2] = (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar19 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar19 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar19 & 0x80) != 0) * 0x80 | (ulonglong)((uVar19 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar19 & 0x10) != 0) * 0x10 | (ulonglong)((uVar19 & 4) != 0) * 4 |
                (ulonglong)((uVar19 & 1) != 0) | (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
  uVar19 = param_5[-2];
  param_5[-2] = param_1;
  param_5[-3] = (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar19 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar19 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar19 & 0x80) != 0) * 0x80 | (ulonglong)((uVar19 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar19 & 0x10) != 0) * 0x10 | (ulonglong)((uVar19 & 4) != 0) * 4 |
                (ulonglong)((uVar19 & 1) != 0) | (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
  pcVar5 = FUN_161b64f15;
  param_5[-4] = 0x14d91d716;
  uVar4 = FUN_161b64f15();
  uVar19 = ~((~(ulonglong)pcVar5 | *(ulonglong *)(lVar1 + -0x68)) &
            (~*(ulonglong *)(lVar1 + -0x68) | (ulonglong)pcVar5));
  param_5[-4] = pcVar5;
  uVar3 = param_5[-4];
  param_5[-4] = local_res10;
  param_5[-4] = uVar4;
  *(undefined4 *)(param_5 + -4) = 0x3e93d894;
  *(undefined4 *)((longlong)param_5 + -0x1c) = 0xd0991d8d;
  *(int *)((longlong)param_5 + -0x1c) = *(int *)((longlong)param_5 + -0x1c) + 0x2f66e273;
  param_5[-4] = uVar4;
  param_5[-4] = in_R10;
  uVar4 = param_5[-4];
  param_5[-4] = unaff_R14;
  *(undefined4 *)(param_5 + -5) = 0xe1022f0;
  *(undefined4 *)((longlong)param_5 + -0x24) = 0xa23f9898;
  *(int *)((longlong)param_5 + -0x24) = *(int *)((longlong)param_5 + -0x24) + 0x5dc06768;
  param_5 = (undefined8 *)((longlong)param_5 + param_5[-5] + -0xe102318);
  *param_5 = *(undefined8 *)(lVar1 + -0x88);
  param_5[1] = unaff_R15;
  uVar2 = param_5[1];
  param_5[1] = *(undefined8 *)(lVar1 + -0x90);
  *param_5 = *(undefined8 *)(lVar1 + -8);
  param_5[-1] = uVar19;
  param_5[-2] = uVar19;
  param_5[-3] = uVar4;
  param_5[-4] = uVar2;
  param_5[-5] = *(undefined8 *)(lVar1 + -0x98);
  param_5[-1] = 0;
  param_5[-1] = param_5[-1] - param_5[-5];
  param_5[-1] = -param_5[-1];
  uVar3 = FUN_156494d99(uVar3,FUN_156494d99);
  return uVar3;
}



// FUNCTION 14d91d7b0 FUN_14d91d7b0 body=122 status=ok
// SIG undefined FUN_14d91d7b0(void)

longlong FUN_14d91d7b0(void)

{
  longlong unaff_R15;
  undefined8 local_res18;
  
  return local_res18 + unaff_R15;
}



// FUNCTION 14d91db49 FUN_14d91db49 body=309 status=ok
// SIG undefined FUN_14d91db49(void)

undefined8 FUN_14d91db49(void)

{
  FUN_16294673b();
  return 0x914d18ff;
}



// FUNCTION 14d91dd1a FUN_14d91dd1a body=151 status=ok
// SIG undefined FUN_14d91dd1a(void)

void FUN_14d91dd1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = ~local_res18 & param_4;
  FUN_1654a588f(param_1,CONCAT62((int6)((ulonglong)unaff_retaddr >> 0x10),0x57e5) ^ 0xa91a,
                &local_res18,local_res8,
                ~(in_stack_00000020 & unaff_RBP) & (in_stack_00000020 | unaff_RBP));
  return;
}



// FUNCTION 14d91de55 FUN_14d91de55 body=141 status=ok
// SIG undefined FUN_14d91de55(void)

/* WARNING: Removing unreachable block (ram,0x00014d91df9c) */

void FUN_14d91de55(ulonglong param_1)

{
  ulonglong *puVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R12;
  undefined8 uStackX_10;
  ulonglong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60) ^ param_1;
  FUN_14dd17743(param_1,FUN_14dd17743,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                 (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  puVar1 = (ulonglong *)(in_stack_00000028 - 8);
  *puVar1 = 0x13478617;
  *puVar1 = *puVar1 ^ 0x13478617;
  *puVar1 = *puVar1 - unaff_R12;
  *puVar1 = -*puVar1;
  *(undefined8 *)(in_stack_00000028 - 0x10) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 - 0x18) = uStackX_10;
  *(ulonglong *)(in_stack_00000028 - 0x10) = *puVar1;
  *(ulonglong *)(in_stack_00000028 - 0x18) = uVar2;
  *(undefined8 *)(in_stack_00000028 - 8) = 0;
  *(longlong *)(in_stack_00000028 - 8) =
       (longlong)(&LAB_1569ca485 + *(longlong *)(in_stack_00000028 - 8));
  *(code **)(in_stack_00000028 - 0x10) = HeapFree_exref;
  return;
}



// FUNCTION 14d91dee3 FUN_14d91dee3 body=272 status=ok
// SIG undefined FUN_14d91dee3(void)

/* WARNING: Removing unreachable block (ram,0x00014d91df9c) */

void FUN_14d91dee3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong unaff_R12;
  undefined8 local_res8;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  puVar1 = (ulonglong *)(param_1 - 8);
  *puVar1 = 0x13478617;
  *puVar1 = *puVar1 ^ 0x13478617;
  *puVar1 = *puVar1 - unaff_R12;
  *puVar1 = -*puVar1;
  *(undefined8 *)(param_1 - 0x10) = local_res8;
  *(undefined8 *)(param_1 - 0x18) = local_res8;
  *(ulonglong *)(param_1 - 0x10) = *puVar1;
  *(undefined8 *)(param_1 - 0x18) = param_4;
  *(undefined8 *)(param_1 - 8) = 0;
  *(longlong *)(param_1 - 8) = (longlong)(&LAB_1569ca485 + *(longlong *)(param_1 - 8));
  *(code **)(param_1 - 0x10) = HeapFree_exref;
  return;
}



// FUNCTION 14d91e044 FUN_14d91e044 body=163 status=ok
// SIG undefined FUN_14d91e044(void)

/* WARNING: Removing unreachable block (ram,0x00014d91e077) */
/* WARNING: Removing unreachable block (ram,0x00014d91e0e7) */

ulonglong FUN_14d91e044(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14d91e0e7 FUN_14d91e0e7 body=69 status=ok
// SIG undefined FUN_14d91e0e7(void)

undefined8 FUN_14d91e0e7(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d91e21a FUN_14d91e21a body=133 status=ok
// SIG undefined FUN_14d91e21a(void)

void FUN_14d91e21a(void)

{
  FUN_1577eb6e3();
  return;
}



// FUNCTION 14d91e357 FUN_14d91e357 body=35 status=ok
// SIG undefined FUN_14d91e357(void)

void FUN_14d91e357(void)

{
  return;
}



// FUNCTION 14d91e482 FUN_14d91e482 body=136 status=ok
// SIG undefined FUN_14d91e482(void)

void FUN_14d91e482(void)

{
  (*(code *)&LAB_16490c008)(&LAB_16490c008);
  return;
}



// FUNCTION 14d91e50a FUN_14d91e50a body=164 status=ok
// SIG undefined FUN_14d91e50a(void)

/* WARNING: Removing unreachable block (ram,0x00014d91e51d) */
/* WARNING: Removing unreachable block (ram,0x00016185c34e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014d91e5a3 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d91e50a(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  bool bVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  bVar2 = (uVar1 & param_1 & 0x7fffffffffffffff) == 0;
  FUN_15b48a648(param_1,FUN_15b48a648);
  if (bVar2) {
    FUN_16131bb16();
    return;
  }
  if (uVar1 == 1) {
    FUN_16131bb16();
    return;
  }
  if (uVar1 == 2) {
    FUN_16185c2a6();
    return;
  }
  if (uVar1 != 3) {
    if (uVar1 == 4) {
      return;
    }
    if (uVar1 == 5) {
      FUN_166cc8510();
      FUN_160df08c4();
      FUN_156fb7e0d();
      return;
    }
    FUN_166cc8526();
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14d91e5ae FUN_14d91e5ae body=583 status=ok
// SIG undefined FUN_14d91e5ae(void)

/* WARNING: Removing unreachable block (ram,0x00016185c34e) */

void FUN_14d91e5ae(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 1) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 2) {
    FUN_16185c2a6();
    return;
  }
  if (unaff_RSI != 3) {
    if (unaff_RSI == 4) {
      return;
    }
    if (unaff_RSI == 5) {
      FUN_166cc8510();
      FUN_160df08c4();
      FUN_156fb7e0d();
      return;
    }
    FUN_166cc8526();
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14d91e75c FUN_14d91e75c body=280 status=ok
// SIG undefined FUN_14d91e75c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001569f48dc) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5300) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5325) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5327) */
/* WARNING: Removing unreachable block (ram,0x00014d7a532d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a537a) */
/* WARNING: Removing unreachable block (ram,0xfc0757c0) */
/* WARNING: Removing unreachable block (ram,0x6e86c386) */
/* WARNING: Removing unreachable block (ram,0x0001569f48e2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4df5) */
/* WARNING: Removing unreachable block (ram,0x00014d91e7d7) */
/* WARNING: Removing unreachable block (ram,0x00014d91e86b) */
/* WARNING: Removing unreachable block (ram,0x0001569f4851) */

void FUN_14d91e75c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_res10;
  
  FUN_16518360e((~(local_res10 | param_1) | ~(local_res10 & param_1)) + (local_res10 | param_1) + 1,
                param_2,param_3,param_4);
  return;
}



// FUNCTION 14d91e876 FUN_14d91e876 body=6 status=ok
// SIG undefined FUN_14d91e876(void)

void FUN_14d91e876(void)

{
  return;
}



// FUNCTION 14d91e9a8 FUN_14d91e9a8 body=289 status=ok
// SIG undefined FUN_14d91e9a8(void)

/* WARNING: Removing unreachable block (ram,0x00014d91ea03) */

void FUN_14d91e9a8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156fe3220(param_1,0xffffffffd9efd313,
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  FUN_1653ba76b(FUN_1653ba76b);
  return;
}



// FUNCTION 14d91eacc FUN_14d91eacc body=118 status=ok
// SIG undefined FUN_14d91eacc(void)

void FUN_14d91eacc(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong *in_R10;
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  
  uVar1 = *in_R10;
  *in_R10 = *in_R10 & unaff_RBP;
  *in_R10 = (uVar1 + unaff_RBP) - *in_R10;
  *in_R10 = ~(unaff_R13 & *in_R10);
  FUN_15ba0b6b2(unaff_retaddr);
  return;
}



// FUNCTION 14d91ebc1 FUN_14d91ebc1 body=780 status=ok
// SIG undefined FUN_14d91ebc1(void)

/* WARNING: Removing unreachable block (ram,0x00014d91ec48) */
/* WARNING: Removing unreachable block (ram,0x00014d91ec4e) */
/* WARNING: Removing unreachable block (ram,0x00014e1ee5b6) */
/* WARNING: Removing unreachable block (ram,0x00014e1ee5bc) */
/* WARNING: Removing unreachable block (ram,0x000162cdfceb) */
/* WARNING: Removing unreachable block (ram,0x000162cdfd34) */
/* WARNING: Removing unreachable block (ram,0x000162cdfd36) */
/* WARNING: Removing unreachable block (ram,0x00014e1ee659) */
/* WARNING: Removing unreachable block (ram,0x00014e1ee65f) */
/* WARNING: Removing unreachable block (ram,0x00014e1ee521) */

void FUN_14d91ebc1(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  FUN_160f1e24b(FUN_160f1e24b,~((param_1 - (uVar1 | param_1)) + uVar1 | ~(uVar1 | param_1)),
                ~(param_3 & param_1) & (unaff_RSI | param_1),param_4);
  return;
}



// FUNCTION 14d91ee41 FUN_14d91ee41 body=146 status=ok
// SIG undefined FUN_14d91ee41(void)

undefined8 FUN_14d91ee41(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d91ef60 FUN_14d91ef60 body=170 status=ok
// SIG undefined FUN_14d91ef60(void)

/* WARNING: Removing unreachable block (ram,0x00014d91f007) */
/* WARNING: Removing unreachable block (ram,0x00014d91effc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d91ef60(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_R9;
  ulonglong unaff_R15;
  
  lVar3 = -(in_R9 + unaff_R15 + (in_R9 & unaff_R15) * -2);
  FUN_162e3fce8();
  uVar1 = *(ulonglong *)(lVar3 + 0x10);
  uVar2 = *(ulonglong *)(lVar3 + 0x10);
  *(ulonglong *)(lVar3 + 0x10) = ~*(ulonglong *)(lVar3 + 0x10);
  *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | unaff_R15;
  *(ulonglong *)(lVar3 + 0x10) = ~((~uVar1 & ~unaff_R15 | uVar2) & *(ulonglong *)(lVar3 + 0x10));
  (*(code *)0x1623c9a6e)();
  return;
}



// FUNCTION 14d91f00d FUN_14d91f00d body=160 status=ok
// SIG undefined FUN_14d91f00d(void)

undefined8 FUN_14d91f00d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d91f0ae FUN_14d91f0ae body=381 status=ok
// SIG undefined FUN_14d91f0ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d91f145) */
/* WARNING: Removing unreachable block (ram,0x00014d91f14b) */

undefined8 FUN_14d91f0ae(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d91f1e2 FUN_14d91f1e2 body=193 status=ok
// SIG undefined FUN_14d91f1e2(void)

void FUN_14d91f1e2(void)

{
  return;
}



// FUNCTION 14d91f2ac FUN_14d91f2ac body=110 status=ok
// SIG undefined FUN_14d91f2ac(void)

void FUN_14d91f2ac(void)

{
  undefined8 unaff_RBX;
  ulonglong local_res8;
  
  local_res8 = local_res8 ^ 0xffffffff00000000;
  *(undefined8 *)(&stack0x0ac7f864 + local_res8) = unaff_RBX;
  return;
}



// FUNCTION 14d91f52f FUN_14d91f52f body=176 status=ok
// SIG undefined FUN_14d91f52f(void)

void FUN_14d91f52f(void)

{
  return;
}



// FUNCTION 14d91f830 FUN_14d91f830 body=431 status=ok
// SIG undefined FUN_14d91f830(void)

undefined8 FUN_14d91f830(void)

{
  undefined8 uVar1;
  
  FUN_1565345b6();
  uVar1 = FUN_14d969e79();
  return uVar1;
}



// FUNCTION 14d91f9e5 FUN_14d91f9e5 body=139 status=ok
// SIG undefined FUN_14d91f9e5(void)

void FUN_14d91f9e5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 in_R10;
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
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  uVar3 = (local_res8 | 0x100) - 0x100;
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x800) != 0;
  bVar10 = (uVar3 & 0x200) != 0;
  bVar9 = (uVar3 & 0x100) != 0;
  bVar8 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar4 = (uVar3 & 1) != 0;
  bVar16 = (uStackX_a & 0x20) != 0;
  bVar13 = (uStackX_a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res10 = param_4;
  local_res10[-1] = param_4;
  *(undefined4 *)(local_res10 + -2) = 0x9ce92ae;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  uVar2 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res10[-3] = param_3;
  local_res10[-4] = in_R10;
  local_res10[-5] = uVar2;
  local_res10[-5] = local_res10[-5] + -0x73d92ce;
  FUN_14df31141(param_1,param_2,FUN_14df31141);
  return;
}



// FUNCTION 14d91faf1 FUN_14d91faf1 body=85 status=ok
// SIG undefined FUN_14d91faf1(void)

void FUN_14d91faf1(void)

{
  return;
}



// FUNCTION 14d91fb94 FUN_14d91fb94 body=419 status=ok
// SIG undefined FUN_14d91fb94(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015715cd0d) */
/* WARNING: Removing unreachable block (ram,0x00015715cd2a) */
/* WARNING: Removing unreachable block (ram,0x00015715cd1e) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6322) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d91fb94(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong unaff_RDI;
  undefined8 unaff_R12;
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
  
  uVar1 = *(ulonglong *)(unaff_RDI + -8) ^ param_1;
  puVar2 = (undefined8 *)
           (~(*(ulonglong *)(unaff_RDI + -0x90) & param_1) &
           ~(~*(ulonglong *)(unaff_RDI + -0x90) & ~param_1));
  bVar12 = (uVar1 & 0x4000) != 0;
  bVar11 = (uVar1 & 0x800) != 0;
  bVar10 = (uVar1 & 0x200) != 0;
  bVar9 = (uVar1 & 0x100) != 0;
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
  (*pcVar3)(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,param_2,param_3);
  *puVar2 = unaff_R12;
  puVar2[-1] = unaff_R12;
  puVar2[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *puVar2 = 0x405f6ee;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9203ee FUN_14d9203ee body=169 status=ok
// SIG undefined FUN_14d9203ee(void)

/* WARNING: Removing unreachable block (ram,0x00014d92047e) */
/* WARNING: Removing unreachable block (ram,0x00014d920489) */
/* WARNING: Removing unreachable block (ram,0x00014d920484) */
/* WARNING: Removing unreachable block (ram,0x000160b99c57) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9203ee(void)

{
  return;
}



// FUNCTION 14d920514 FUN_14d920514 body=267 status=ok
// SIG undefined FUN_14d920514(void)

/* WARNING: Removing unreachable block (ram,0x00014d920595) */
/* WARNING: Removing unreachable block (ram,0x00014d92059b) */

undefined8
FUN_14d920514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = FUN_156355ac6(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,
                        *(undefined8 *)(unaff_RSI + -0x88),param_3,param_4);
  return uVar1;
}



// FUNCTION 14d9206b9 FUN_14d9206b9 body=467 status=ok
// SIG undefined FUN_14d9206b9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd364ff) overlaps instruction at (ram,0x00014dd364fc)
    */
/* WARNING: Removing unreachable block (ram,0x000160b50579) */
/* WARNING: Removing unreachable block (ram,0x0001610babe4) */
/* WARNING: Removing unreachable block (ram,0x0001610babea) */
/* WARNING: Removing unreachable block (ram,0x0001610bac6f) */
/* WARNING: Removing unreachable block (ram,0x0001610bac74) */
/* WARNING: Removing unreachable block (ram,0x0001610bac7a) */
/* WARNING: Removing unreachable block (ram,0x0001570c13d1) */
/* WARNING: Removing unreachable block (ram,0x0001570c1479) */
/* WARNING: Removing unreachable block (ram,0x0001570c147f) */
/* WARNING: Removing unreachable block (ram,0x0001565606b7) */
/* WARNING: Removing unreachable block (ram,0x0001618f661a) */
/* WARNING: Removing unreachable block (ram,0x0001618f6620) */
/* WARNING: Removing unreachable block (ram,0x0001618f66a7) */
/* WARNING: Removing unreachable block (ram,0x0001618f66ad) */
/* WARNING: Removing unreachable block (ram,0x0001618f66b8) */
/* WARNING: Removing unreachable block (ram,0x0001618f66f2) */
/* WARNING: Removing unreachable block (ram,0x00014dd364b2) */
/* WARNING: Removing unreachable block (ram,0x00014dd364ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd36551) */
/* WARNING: Removing unreachable block (ram,0x00014dd3655c) */
/* WARNING: Removing unreachable block (ram,0x00014dd36557) */
/* WARNING: Removing unreachable block (ram,0x0001610baad3) */
/* WARNING: Removing unreachable block (ram,0x0001566606aa) */
/* WARNING: Removing unreachable block (ram,0x00014dd364fc) */
/* WARNING: Removing unreachable block (ram,0x000156850baa) */
/* WARNING: Removing unreachable block (ram,0x00014d920803) */
/* WARNING: Removing unreachable block (ram,0x00014d92074c) */
/* WARNING: Removing unreachable block (ram,0x00014e0016a6) */
/* WARNING: Removing unreachable block (ram,0x00016165d780) */
/* WARNING: Removing unreachable block (ram,0x00014d9207f1) */
/* WARNING: Removing unreachable block (ram,0x00014d9207fd) */
/* WARNING: Removing unreachable block (ram,0x00014e0017b1) */
/* WARNING: Removing unreachable block (ram,0x00014e00173b) */
/* WARNING: Removing unreachable block (ram,0x00014e001741) */
/* WARNING: Removing unreachable block (ram,0x00014e0017ab) */
/* WARNING: Removing unreachable block (ram,0x0001618f63ce) */
/* WARNING: Removing unreachable block (ram,0x0001618f6464) */
/* WARNING: Removing unreachable block (ram,0x0001618f6469) */
/* WARNING: Removing unreachable block (ram,0x0001618f6474) */
/* WARNING: Removing unreachable block (ram,0x0001618f6500) */
/* WARNING: Removing unreachable block (ram,0x0001618f6504) */
/* WARNING: Removing unreachable block (ram,0x0001618f658a) */
/* WARNING: Removing unreachable block (ram,0x0001618f6590) */
/* WARNING: Removing unreachable block (ram,0x000160ef41a6) */
/* WARNING: Removing unreachable block (ram,0x0001618f646f) */
/* WARNING: Removing unreachable block (ram,0x000156850c12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d9206b9(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) == 0) {
    uVar1 = FUN_156850b74();
    return uVar1;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  if (unaff_R15 - 1 == ~*(ulonglong *)(unaff_R13 + -0x30)) {
    uVar1 = FUN_161694b4c((~uVar2 | ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar2 + 1,
                          *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                          (~(*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) + unaff_R15) -
                          ~*(ulonglong *)(unaff_R13 + -0x50),in_R9);
    return uVar1;
  }
  uVar1 = FUN_160d9317f();
  return uVar1;
}



// FUNCTION 14d920896 FUN_14d920896 body=8 status=ok
// SIG undefined FUN_14d920896(void)

void FUN_14d920896(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_165c7153c(uStackX_8,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d92092a FUN_14d92092a body=285 status=ok
// SIG undefined FUN_14d92092a(void)

void FUN_14d92092a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *unaff_RBP;
  ulonglong unaff_RSI;
  
  *unaff_RBP = ~unaff_RSI;
  FUN_16563c930();
  (*(code *)0x16556eb6e)(param_1,0x16556eb6e,param_3);
  return;
}



// FUNCTION 14d920ae3 FUN_14d920ae3 body=271 status=ok
// SIG undefined FUN_14d920ae3(void)

/* WARNING: Removing unreachable block (ram,0x00014d920bfa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d920ae3(byte param_1)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  byte bVar2;
  undefined8 in_R11;
  longlong unaff_R12;
  byte unaff_R13B;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000038;
  longlong in_stack_00000048;
  
  bVar2 = 0;
  FUN_1564f34b7();
  lVar1 = unaff_R12 -
          (in_stack_00000048 <<
          (~((~(param_1 | bVar2) | unaff_R13B) + (param_1 | bVar2) + 1) & 0x3f));
  *(undefined8 *)(lVar1 + -8) = unaff_RDI;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = in_R11;
  *(undefined1 **)(lVar1 + -8) = &LAB_161d41057;
  *(undefined8 *)(lVar1 + -0x18) = in_stack_00000008;
  *(undefined8 *)(lVar1 + -0x20) = in_stack_00000038;
  *(undefined8 *)(lVar1 + -0x10) = FUN_1564f34b7;
  *(code **)(lVar1 + -0x18) = FUN_1564f34b7;
  *(undefined8 *)(lVar1 + -0x10) = &DAT_14d7bd941;
  return;
}



// FUNCTION 14d920bfa FUN_14d920bfa body=152 status=ok
// SIG undefined FUN_14d920bfa(void)

void FUN_14d920bfa(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 uStackX_8;
  undefined8 local_res18;
  
  *(ulonglong *)(in_RAX + 0x18) = ~*(ulonglong *)(in_RAX + 0x18);
  *(ulonglong *)(in_RAX + 0x18) = *(ulonglong *)(in_RAX + 0x18) | ~param_1;
  *(ulonglong *)(in_RAX + 0x18) = ~*(ulonglong *)(in_RAX + 0x18);
  *(undefined8 *)((~param_5 & unaff_RBX) - 8) = in_R10;
  *(undefined8 *)((~param_5 & unaff_RBX) - 0x10) = unaff_RBP;
  FUN_1656802c0(local_res18,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14d921155 FUN_14d921155 body=179 status=ok
// SIG undefined FUN_14d921155(void)

/* WARNING: Removing unreachable block (ram,0x00014d921199) */

void FUN_14d921155(void)

{
  FUN_1649a2ac3();
  return;
}



// FUNCTION 14d921208 FUN_14d921208 body=160 status=ok
// SIG undefined FUN_14d921208(void)

void FUN_14d921208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  *(ulonglong *)(in_RAX + 0x10) =
       (unaff_R15 - (*(ulonglong *)(in_RAX + 0x10) | unaff_R15)) + *(longlong *)(in_RAX + 0x10);
  FUN_1610b2914(param_1,FUN_1610b2914,param_3,local_res8);
  return;
}



// FUNCTION 14d9212aa FUN_14d9212aa body=32 status=ok
// SIG undefined FUN_14d9212aa(void)

void FUN_14d9212aa(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14d9213ef FUN_14d9213ef body=298 status=ok
// SIG undefined FUN_14d9213ef(void)

void FUN_14d9213ef(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong local_res10;
  
  uVar3 = (~in_R11 & param_1) + *(longlong *)(unaff_R13 + -0x40) ^ unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x90) ^ 0xffffffffffffffff;
  FUN_164c154e7(FUN_164c154e7,(uVar2 + unaff_R15) - (uVar2 & unaff_R15),0xffffffffffffff70,
                *(undefined8 *)(unaff_R13 + -0x60));
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  *(ulonglong *)(local_res10 + -0x10) = uVar3;
  *(undefined8 *)(local_res10 + -0x18) = 0x14d921517;
  FUN_16135258d();
  FUN_14d92151d();
  return;
}



// FUNCTION 14d92151d FUN_14d92151d body=190 status=ok
// SIG undefined FUN_14d92151d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9215aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9215b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9215b5) */

void FUN_14d92151d(void)

{
  FUN_161c2d2f3();
  return;
}



// FUNCTION 14d92175e FUN_14d92175e body=311 status=ok
// SIG undefined FUN_14d92175e(void)

/* WARNING: Removing unreachable block (ram,0x00014d921800) */

void FUN_14d92175e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ushort *puVar4;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  *(undefined8 *)(in_RAX + 8) = unaff_R14;
  param_6 = param_6 ^ unaff_R15;
  puVar4 = (ushort *)(0x11 - (~(ulonglong)&stack0x00000018 + 2));
  *puVar4 = (~(*puVar4 | 0xfeff) - 0x100) + *puVar4;
  *(undefined8 *)(param_6 - 8) = param_3;
  *(undefined8 *)(param_6 - 0x10) = unaff_R12;
  *(undefined8 *)(param_6 - 0x18) = unaff_R13;
  uVar1 = *(undefined8 *)(param_6 - 0x10);
  *(undefined8 *)(param_6 - 0x10) = param_4;
  *(undefined8 *)(param_6 - 0x18) = 0x157298c8a;
  lVar2 = *(longlong *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x18) = 0x157298c8a;
  uVar3 = *(undefined8 *)(param_6 - 0x10);
  *(undefined8 *)(param_6 - 0x10) = uVar1;
  *(undefined8 *)(param_6 - 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x20) = in_R10;
  *(undefined8 *)(param_6 - 0x10) = uVar1;
  *(undefined8 *)(param_6 - 8) = 0x39535788;
  *(longlong *)(param_6 - 8) = *(longlong *)(param_6 - 8) + 0x2ba79adc;
  *(ulonglong *)(param_6 - 8) = *(ulonglong *)(param_6 - 8) ^ 0x64faf264;
  *(ulonglong *)(param_6 - 8) = *(ulonglong *)(param_6 - 8) ^ lVar2 - 0x92f723U;
  FUN_15696952b(param_1,param_2,FUN_15696952b,uVar3);
  return;
}



// FUNCTION 14d921936 FUN_14d921936 body=40 status=ok
// SIG undefined FUN_14d921936(void)

undefined8 FUN_14d921936(void)

{
  int in_EAX;
  undefined8 in_stack_00000008;
  
  return CONCAT44((int)((ulonglong)in_stack_00000008 >> 0x20) - in_EAX,(int)in_stack_00000008);
}



// FUNCTION 14d9219b2 FUN_14d9219b2 body=68 status=ok
// SIG undefined FUN_14d9219b2(void)

void FUN_14d9219b2(void)

{
  return;
}



// FUNCTION 14d921a2d FUN_14d921a2d body=169 status=ok
// SIG undefined FUN_14d921a2d(void)

/* WARNING: Removing unreachable block (ram,0x00014d86fa1b) */
/* WARNING: Removing unreachable block (ram,0x00015b6eba69) */
/* WARNING: Removing unreachable block (ram,0x00014d921ad6) */
/* WARNING: Removing unreachable block (ram,0x00014d921b66) */
/* WARNING: Removing unreachable block (ram,0x00014d921b6c) */
/* WARNING: Removing unreachable block (ram,0x00014d86f97c) */
/* WARNING: Removing unreachable block (ram,0x00014d86fa15) */
/* WARNING: Removing unreachable block (ram,0x00014df1ba15) */
/* WARNING: Removing unreachable block (ram,0x00014df1bab2) */
/* WARNING: Removing unreachable block (ram,0x00014df1bab8) */
/* WARNING: Removing unreachable block (ram,0x00015b6eb9da) */
/* WARNING: Removing unreachable block (ram,0x00015b6eba5e) */
/* WARNING: Removing unreachable block (ram,0x00015b6eba64) */
/* WARNING: Removing unreachable block (ram,0x00014dde1953) */
/* WARNING: Removing unreachable block (ram,0x00014df1babd) */
/* WARNING: Removing unreachable block (ram,0x00014d921b77) */

void FUN_14d921a2d(void)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  bool bVar3;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = ~*(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBX + 0x10) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_RBX + 0x10));
  uVar2 = (local_res10 | 0x100) - 0x100;
  bVar3 = (uVar2 & 1) != 0;
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  if (bVar3) {
    FUN_164b6586f();
    return;
  }
  FUN_164b6586f();
  return;
}



// FUNCTION 14d921ad6 FUN_14d921ad6 body=153 status=ok
// SIG undefined FUN_14d921ad6(void)

/* WARNING: Removing unreachable block (ram,0x00014df1babd) */
/* WARNING: Removing unreachable block (ram,0x00015b6eba69) */
/* WARNING: Removing unreachable block (ram,0x00014d86fa1b) */
/* WARNING: Removing unreachable block (ram,0x00014d921b77) */

void FUN_14d921ad6(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 - 0x68);
  if (0x9f < unaff_R12) {
    FUN_14d86f97c();
    return;
  }
  if (-1 < (longlong)
           (~((~(0xffffffffffffffff - in_RAX & uVar1) + uVar1) - ~(0xffffffffffffffff - in_RAX)) |
           ~(~uVar1 | in_RAX))) {
    FUN_14dde1953();
    return;
  }
  FUN_160f116a1(param_1,param_2);
  return;
}



// FUNCTION 14d921b77 FUN_14d921b77 body=140 status=ok
// SIG undefined FUN_14d921b77(void)

void FUN_14d921b77(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  FUN_15648cd34(param_1,param_2,~*(ulonglong *)(unaff_RSI + -0x60),
                ~((~unaff_RBP | uVar1) & (~(~uVar1 & unaff_RBP) + unaff_RBP) - uVar1));
  return;
}



// FUNCTION 14d921d5c FUN_14d921d5c body=591 status=ok
// SIG undefined FUN_14d921d5c(void)

/* WARNING: Removing unreachable block (ram,0x00014d921ddb) */
/* WARNING: Removing unreachable block (ram,0x00014d921de1) */
/* WARNING: Removing unreachable block (ram,0x00016245f61b) */

undefined8 FUN_14d921d5c(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_162195148(param_1,0xdb2bbb52,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return uVar1;
}



// FUNCTION 14d922083 FUN_14d922083 body=312 status=ok
// SIG undefined FUN_14d922083(void)

/* WARNING: Removing unreachable block (ram,0x000165f6b891) */
/* WARNING: Removing unreachable block (ram,0x00014d9220fd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d922083(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_R12;
  ulonglong *unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  ulonglong uStackX_20;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = *unaff_R13 ^ 0xffffffffffffffff;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  *unaff_R13 = (~(~unaff_R15 | uVar1) & 0xffffffffffffffff - *unaff_R13 | ~unaff_R15 | uVar1) +
               *unaff_R13 + 1 ^ 0xffffffffffffffff;
  if (CARRY8(local_res18,unaff_R15)) {
    uVar1 = uStackX_20 ^ unaff_R15;
    *(undefined8 *)(uVar1 - 8) = unaff_R14;
    *(undefined8 *)(uVar1 - 0x10) = param_4;
    *(undefined8 *)(uVar1 - 0x18) = param_4;
    *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
    *(undefined8 *)(uVar1 - 0x28) = unaff_R12;
    *(undefined1 **)(uVar1 - 0x20) = &LAB_14da73b0e;
    uVar2 = FUN_1615dde32(in_stack_00000008,param_2,param_3,FUN_1615dde32);
    return uVar2;
  }
  uVar2 = FUN_165f6b7ed();
  return uVar2;
}



// FUNCTION 14d9220fd FUN_14d9220fd body=172 status=ok
// SIG undefined FUN_14d9220fd(void)

void FUN_14d9220fd(ulonglong param_1)

{
  ulonglong local_res8;
  
  FUN_15b9057f7(param_1,FUN_15b9057f7,local_res8 ^ param_1);
  return;
}



// FUNCTION 14d9221a9 FUN_14d9221a9 body=143 status=ok
// SIG undefined FUN_14d9221a9(void)

/* WARNING: Removing unreachable block (ram,0x00014d9221e8) */

void FUN_14d9221a9(void)

{
  FUN_15b1362e4();
  return;
}



// FUNCTION 14d922509 FUN_14d922509 body=16 status=ok
// SIG undefined FUN_14d922509(void)

void FUN_14d922509(void)

{
  return;
}



// FUNCTION 14d922621 FUN_14d922621 body=939 status=ok
// SIG undefined FUN_14d922621(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014e1df732) overlaps instruction at (ram,0x00014e1df731)
    */
/* WARNING: Removing unreachable block (ram,0x000156bd9def) */
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
/* WARNING: Removing unreachable block (ram,0x00014d9227ba) */
/* WARNING: Removing unreachable block (ram,0x00014d9227c0) */

undefined8
FUN_14d922621(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16164a82d(FUN_16164a82d,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d9227c0 FUN_14d9227c0 body=146 status=ok
// SIG undefined FUN_14d9227c0(void)

void FUN_14d9227c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(param_6 + -8) = in_R11;
  *(undefined8 *)(param_6 + -0x10) = param_2;
  *(undefined8 *)(param_6 + -0x18) = param_2;
  *(undefined8 *)(param_6 + -0x20) = unaff_RSI;
  FUN_164b2b898(in_stack_00000010,*(undefined8 *)(param_6 + -8),param_3,param_4);
  return;
}



// FUNCTION 14d922aee FUN_14d922aee body=653 status=ok
// SIG undefined FUN_14d922aee(void)

/* WARNING: Removing unreachable block (ram,0x00014d922cc9) */
/* WARNING: Removing unreachable block (ram,0x00014d922ccf) */
/* WARNING: Removing unreachable block (ram,0x00014d922c0b) */
/* WARNING: Removing unreachable block (ram,0x00014d922c29) */
/* WARNING: Removing unreachable block (ram,0x000164ab02ef) */
/* WARNING: Removing unreachable block (ram,0x000156adbf41) */
/* WARNING: Removing unreachable block (ram,0x00014d922c22) */
/* WARNING: Removing unreachable block (ram,0x00016140af8a) */
/* WARNING: Removing unreachable block (ram,0x00016140af90) */
/* WARNING: Removing unreachable block (ram,0x00016140af95) */
/* WARNING: Removing unreachable block (ram,0x000164ab0384) */
/* WARNING: Removing unreachable block (ram,0x000164ab0395) */
/* WARNING: Removing unreachable block (ram,0x000164ab03f4) */
/* WARNING: Removing unreachable block (ram,0x000164ab03f7) */
/* WARNING: Removing unreachable block (ram,0x000164ab041f) */
/* WARNING: Removing unreachable block (ram,0x000164ab0424) */
/* WARNING: Removing unreachable block (ram,0x000164f8aad4) */
/* WARNING: Removing unreachable block (ram,0x000164f8ab5e) */
/* WARNING: Removing unreachable block (ram,0x000164f8ab63) */
/* WARNING: Removing unreachable block (ram,0x000164f8ab69) */
/* WARNING: Removing unreachable block (ram,0x000164f8aba3) */
/* WARNING: Removing unreachable block (ram,0x000164f8aba6) */
/* WARNING: Removing unreachable block (ram,0x0001648008cc) */
/* WARNING: Removing unreachable block (ram,0x000164ab042a) */
/* WARNING: Removing unreachable block (ram,0x00016498f946) */
/* WARNING: Removing unreachable block (ram,0x000164ab04c0) */
/* WARNING: Removing unreachable block (ram,0x000164ab04c6) */
/* WARNING: Removing unreachable block (ram,0x000164ab04cb) */
/* WARNING: Removing unreachable block (ram,0x000164ab0573) */
/* WARNING: Removing unreachable block (ram,0x000164ab0578) */
/* WARNING: Removing unreachable block (ram,0x000164ab057e) */
/* WARNING: Removing unreachable block (ram,0x00016140ad4d) */
/* WARNING: Removing unreachable block (ram,0x00016140ae71) */
/* WARNING: Removing unreachable block (ram,0x00016140ae77) */
/* WARNING: Removing unreachable block (ram,0x00014dbc3d7c) */
/* WARNING: Removing unreachable block (ram,0x00016140ae7e) */
/* WARNING: Removing unreachable block (ram,0x00016140af85) */
/* WARNING: Removing unreachable block (ram,0x000164ab0390) */
/* WARNING: Removing unreachable block (ram,0x00014d922b7b) */
/* WARNING: Removing unreachable block (ram,0x0001577e462b) */
/* WARNING: Removing unreachable block (ram,0x0001577e462f) */
/* WARNING: Removing unreachable block (ram,0x0001577e464d) */
/* WARNING: Removing unreachable block (ram,0x0001577e4650) */

void FUN_14d922aee(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (*(ulonglong *)(unaff_RSI + -0x40) + unaff_RBP +
      (*(ulonglong *)(unaff_RSI + -0x40) & unaff_RBP) * -2 != 0) {
    FUN_161da7ec0();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP;
  uVar1 = ~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP);
  FUN_166044e67((uVar2 - (uVar1 | uVar2)) + uVar1,0x69cdd9cc,
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP);
  return;
}



// FUNCTION 14d922d80 FUN_14d922d80 body=153 status=ok
// SIG undefined FUN_14d922d80(void)

void FUN_14d922d80(undefined8 param_1,longlong param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = unaff_RDI + param_2 * -2;
  FUN_165c8e40b(FUN_165c8e40b,uVar1 + unaff_R15 + ~(~uVar1 | ~unaff_R15) * -2);
  return;
}



// FUNCTION 14d922e19 FUN_14d922e19 body=10 status=ok
// SIG undefined FUN_14d922e19(void)

void FUN_14d922e19(void)

{
  return;
}



// FUNCTION 14d922f4e FUN_14d922f4e body=143 status=ok
// SIG undefined FUN_14d922f4e(void)

/* WARNING: Instruction at (ram,0x00014d922f5d) overlaps instruction at (ram,0x00014d922f5c)
    */
/* WARNING: Removing unreachable block (ram,0x00014d922f5c) */

void FUN_14d922f4e(void)

{
  undefined8 local_res8;
  
  FUN_1564a503b(local_res8);
  return;
}



// FUNCTION 14d922fdd FUN_14d922fdd body=144 status=ok
// SIG undefined FUN_14d922fdd(void)

void FUN_14d922fdd(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162e89d7c(param_1 & unaff_RDI,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d9231ad FUN_14d9231ad body=380 status=ok
// SIG undefined FUN_14d9231ad(void)

/* WARNING: Removing unreachable block (ram,0x00014d92325f) */
/* WARNING: Removing unreachable block (ram,0x00014d923265) */

ulonglong FUN_14d9231ad(ulonglong param_1)

{
  undefined8 local_res8;
  
  return local_res8 ^ param_1;
}



// FUNCTION 14d92332d FUN_14d92332d body=171 status=ok
// SIG undefined FUN_14d92332d(void)

void FUN_14d92332d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165c63e3b(FUN_165c63e3b,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92346d FUN_14d92346d body=173 status=ok
// SIG undefined FUN_14d92346d(void)

void FUN_14d92346d(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 *unaff_RSI;
  
  *unaff_RSI = in_RAX;
  *(undefined4 *)unaff_RSI = 0x6ed5c44a;
  *(undefined4 *)((longlong)unaff_RSI + 4) = 0;
  *unaff_RSI = unaff_RBX;
  unaff_RSI[-1] = unaff_RBX;
  unaff_RSI[-2] = unaff_RBX;
  *unaff_RSI = FUN_14d92351e;
  unaff_RSI[-1] = &DAT_15ba12fe6;
  return;
}



// FUNCTION 14d92351e FUN_14d92351e body=259 status=ok
// SIG undefined FUN_14d92351e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9235ad) */
/* WARNING: Removing unreachable block (ram,0x00015b0be9af) */

undefined8 FUN_14d92351e(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  if (-1 < (longlong)(~param_1 & (*(ulonglong *)(unaff_RDI + -0x48) ^ 0xffffffffffffffff) | param_1)
     ) {
    uVar3 = *(ulonglong *)(unaff_RDI + -0x98);
    uVar1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
    *(undefined8 *)(uVar1 - 8) = unaff_R12;
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    *(undefined **)(uVar1 - 8) = &DAT_15af70cd5;
    uVar4 = FUN_14d7ac86d(uVar3 ^ param_1,param_2 ^ uVar2 ^ param_1);
    return uVar4;
  }
  uVar4 = thunk_FUN_15b0be92d();
  return uVar4;
}



// FUNCTION 14d9235ad FUN_14d9235ad body=24 status=ok
// SIG undefined FUN_14d9235ad(void)

void FUN_14d9235ad(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d923770 FUN_14d923770 body=24 status=ok
// SIG undefined FUN_14d923770(void)

void FUN_14d923770(void)

{
  return;
}



// FUNCTION 14d9238d4 FUN_14d9238d4 body=178 status=ok
// SIG undefined FUN_14d9238d4(void)

undefined8 FUN_14d9238d4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d923a0c FUN_14d923a0c body=137 status=ok
// SIG undefined FUN_14d923a0c(void)

void FUN_14d923a0c(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x165090487)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d923b1e FUN_14d923b1e body=155 status=ok
// SIG undefined FUN_14d923b1e(void)

void FUN_14d923b1e(undefined8 param_1)

{
  FUN_164ad8ffe(param_1,FUN_164ad8ffe);
  return;
}



// FUNCTION 14d923bba FUN_14d923bba body=399 status=ok
// SIG undefined FUN_14d923bba(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d923c46) */
/* WARNING: Removing unreachable block (ram,0x00014d923c7b) */
/* WARNING: Removing unreachable block (ram,0x00014d923c7f) */
/* WARNING: Removing unreachable block (ram,0x00014d923d4e) */
/* WARNING: Removing unreachable block (ram,0x00014d7bff6f) */
/* WARNING: Removing unreachable block (ram,0x00016613ea00) */
/* WARNING: Removing unreachable block (ram,0x00016613eac2) */

void FUN_14d923bba(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res18 ^ param_1;
  uVar3 = (~local_res20 | ~param_1) + local_res20 + 1;
  if (-1 < (longlong)uVar3) {
    FUN_16613e97b();
    return;
  }
  uVar3 = ~(((uVar3 ^ 0xffffffffffffffff) + local_res20) - param_1 &
           (0xffffffffffffffff - local_res20 | param_1));
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7be76c);
  UNLOCK();
  DAT_14d7be76c = (char)in_RAX;
  *(undefined8 *)(uVar3 - 8) = uVar2;
  *(undefined8 *)(uVar3 - 0x10) = uVar2;
  *(ulonglong *)(uVar3 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar3 - 8) = 0x7d5df64;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d923f3f thunk_FUN_14d923f45 body=5 status=ok
// SIG undefined thunk_FUN_14d923f45(void)

void thunk_FUN_14d923f45(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  longlong in_R10;
  undefined8 unaff_retaddr;
  
  if (in_R10 != unaff_RDI) {
    return;
  }
  FUN_165e93f27(param_1,param_2,unaff_retaddr,&DAT_14d7c09f5);
  return;
}



// FUNCTION 14d923f45 FUN_14d923f45 body=76 status=ok
// SIG undefined FUN_14d923f45(void)

void FUN_14d923f45(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  longlong in_R10;
  undefined8 unaff_retaddr;
  
  if (in_R10 != unaff_RDI) {
    return;
  }
  FUN_165e93f27(param_1,param_2,unaff_retaddr,&DAT_14d7c09f5);
  return;
}



// FUNCTION 14d923fc0 FUN_14d923fc0 body=57 status=ok
// SIG undefined FUN_14d923fc0(void)

undefined8 FUN_14d923fc0(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d92403a FUN_14d92403a body=172 status=ok
// SIG undefined FUN_14d92403a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d92403a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15704e538(0x9b0e20c,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14d9242d7 FUN_14d9242d7 body=432 status=ok
// SIG undefined FUN_14d9242d7(void)

/* WARNING: Removing unreachable block (ram,0x00014d924358) */
/* WARNING: Removing unreachable block (ram,0x00014d92435e) */

void FUN_14d9242d7(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_161e4d424(~((in_RAX ^ 0xffffffffffffffff | uVar1) + in_RAX + 1) &
                (uVar1 + in_RAX) - (uVar1 & in_RAX),FUN_161e4d424);
  return;
}



// FUNCTION 14d9243f4 FUN_14d9243f4 body=166 status=ok
// SIG undefined FUN_14d9243f4(void)

void FUN_14d9243f4(void)

{
  return;
}



// FUNCTION 14d9247e9 FUN_14d9247e9 body=166 status=ok
// SIG undefined FUN_14d9247e9(void)

undefined8 FUN_14d9247e9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d92494e FUN_14d92494e body=172 status=ok
// SIG undefined FUN_14d92494e(void)

void FUN_14d92494e(void)

{
  return;
}



// FUNCTION 14d924bca FUN_14d924bca body=262 status=ok
// SIG undefined FUN_14d924bca(void)

void FUN_14d924bca(void)

{
  return;
}



// FUNCTION 14d924f2b FUN_14d924f2b body=164 status=ok
// SIG undefined FUN_14d924f2b(void)

void FUN_14d924f2b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1646cf1cf(param_1,in_stack_00000008,param_3);
  return;
}



// FUNCTION 14d92537f FUN_14d92537f body=141 status=ok
// SIG undefined FUN_14d92537f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9253f1) */

undefined8 FUN_14d92537f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d92540c FUN_14d92540c body=186 status=ok
// SIG undefined FUN_14d92540c(void)

void FUN_14d92540c(void)

{
  return;
}



// FUNCTION 14d9255d0 FUN_14d9255d0 body=178 status=ok
// SIG undefined FUN_14d9255d0(void)

/* WARNING: Instruction at (ram,0x000165634597) overlaps instruction at (ram,0x000165634596)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9256b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9256bb) */
/* WARNING: Removing unreachable block (ram,0x000161b2f7da) */

char * FUN_14d9255d0(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                    uint param_5,longlong param_6)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  ushort uVar12;
  char *pcVar13;
  longlong lVar14;
  undefined8 unaff_RBX;
  undefined4 *puVar15;
  ulonglong *puVar16;
  undefined8 unaff_RBP;
  ulonglong uVar17;
  char in_R10B;
  ushort *unaff_R12;
  ulonglong uVar18;
  undefined8 unaff_R13;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  ulonglong uVar32;
  char *in_stack_00000010;
  undefined8 local_res18;
  char *pcStackX_20;
  uint uVar4;
  ushort uVar6;
  
  uVar12 = 0xfeff - (*unaff_R12 | 0xfeff);
  uVar5 = *unaff_R12;
  uVar6 = *unaff_R12;
  *unaff_R12 = uVar12 + uVar6;
  if ((!CARRY2(uVar12,uVar5)) || (CARRY2(uVar12,uVar5) || (ushort)(uVar12 + uVar6) == 0)) {
    _fxrstor(param_6);
    *(longlong *)(param_6 + -0x10) = param_3;
    *(undefined8 *)(param_6 + -8) = 0x50dc170;
    *(undefined8 *)(param_6 + -0x10) = unaff_R13;
    *(undefined8 *)(param_6 + -0x18) = unaff_R13;
    *(undefined **)(param_6 + -0x10) = &DAT_166a9e3a8;
    return in_stack_00000010;
  }
  if ((param_5 >> 7 & 1) == 0) {
    in_R10B = in_R10B + '\x01';
  }
  cVar22 = in_R10B == '\0';
  puVar15 = &param_5;
  while( true ) {
    *(longlong *)((longlong)puVar15 + -8) = param_1;
    lVar14 = *(longlong *)((longlong)puVar15 + -8);
    if (cVar22 == '\0') {
      *(undefined1 **)((longlong)puVar15 + 8) = &LAB_1656345a0_1;
      return pcStackX_20;
    }
    uVar32 = *(ulonglong *)((longlong)puVar15 + 8);
    puVar16 = (ulonglong *)((longlong)puVar15 + 0x10);
    *(undefined4 *)((longlong)puVar15 + 0x14) = 0;
    *(int *)((longlong)puVar15 + 0x14) = *(int *)((longlong)puVar15 + 0x14) + -0x5a3cc6e8;
    cVar22 = -0x7f;
    puVar2 = (uint *)((longlong)puVar15 + 0x14);
    uVar3 = *puVar2;
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + 0x5a3cc6e7;
    *(ulonglong *)((longlong)puVar15 + 8) =
         (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY4(uVar4,0x5a3cc6e7) * 0x800
         | (ulonglong)((uVar32 & 0x400) != 0) * 0x400 | (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar32 & 0x100) != 0) * 0x100 | (ulonglong)((int)*puVar2 < 0) * 0x80 |
         (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(0xa5c33918 < uVar3) |
         (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)((longlong)puVar15 + 8) = *(ulonglong *)((longlong)puVar15 + 8) | 1;
    uVar32 = *(ulonglong *)((longlong)puVar15 + 8);
    bVar29 = (uVar32 & 0x4000) != 0;
    bVar28 = (uVar32 & 0x800) != 0;
    bVar27 = (uVar32 & 0x400) != 0;
    bVar26 = (uVar32 & 0x200) != 0;
    bVar25 = (uVar32 & 0x100) != 0;
    bVar24 = (uVar32 & 0x80) != 0;
    bVar23 = (uVar32 & 0x40) != 0;
    bVar21 = (uVar32 & 0x10) != 0;
    bVar20 = (uVar32 & 4) != 0;
    bVar31 = (uVar32 & 0x200000) != 0;
    bVar30 = (uVar32 & 0x40000) != 0;
    if ((uVar32 & 1) != 0) break;
    bVar11 = (byte)pcStackX_20;
    *pcStackX_20 = *pcStackX_20 + bVar11;
    pbVar1 = (byte *)(lVar14 + -1);
    bVar19 = CARRY1(*pbVar1,bVar11);
    bVar28 = SCARRY1(*pbVar1,bVar11);
    *pbVar1 = *pbVar1 + bVar11;
    bVar24 = (char)*pbVar1 < '\0';
    bVar23 = *pbVar1 == 0;
    bVar20 = (POPCOUNT(*pbVar1) & 1U) == 0;
    param_1 = lVar14 + -1;
    lVar14 = 0;
    puVar15 = (undefined4 *)((longlong)puVar15 + 0x10);
    if (param_1 == 0) {
code_r0x0001656345a2:
      puVar16[-1] = (ulonglong)bVar29 * 0x4000 | (ulonglong)bVar28 * 0x800 |
                    (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 |
                    (ulonglong)bVar25 * 0x100 | (ulonglong)bVar24 * 0x80 | (ulonglong)bVar23 * 0x40
                    | (ulonglong)bVar21 * 0x10 | (ulonglong)bVar20 * 4 | (ulonglong)bVar19 |
                    (ulonglong)bVar31 * 0x200000 | (ulonglong)bVar30 * 0x40000;
      *(int *)(puVar16 + -1) = (int)puVar16[-1] << 0x1f;
      *(uint *)(puVar16 + -1) = (uint)puVar16[-1] >> 0x1f;
      if ((int)puVar16[-1] == 0) {
        uVar32 = *puVar16;
      }
      else {
        uVar32 = *puVar16;
        bVar30 = (uVar32 & 0x4000) != 0;
        bVar29 = (uVar32 & 0x800) != 0;
        bVar28 = (uVar32 & 0x400) != 0;
        bVar27 = (uVar32 & 0x200) != 0;
        bVar26 = (uVar32 & 0x100) != 0;
        bVar25 = (uVar32 & 0x80) != 0;
        bVar24 = (uVar32 & 0x40) != 0;
        bVar23 = (uVar32 & 0x10) != 0;
        bVar21 = (uVar32 & 4) != 0;
        bVar20 = (uVar32 & 1) != 0;
        bVar19 = (uVar32 & 0x200000) != 0;
        bVar31 = (uVar32 & 0x40000) != 0;
        *puVar16 = (ulonglong)bVar30 * 0x4000 | (ulonglong)bVar29 * 0x800 |
                   (ulonglong)bVar28 * 0x400 | (ulonglong)bVar27 * 0x200 | (ulonglong)bVar26 * 0x100
                   | (ulonglong)bVar25 * 0x80 | (ulonglong)bVar24 * 0x40 | (ulonglong)bVar23 * 0x10
                   | (ulonglong)bVar21 * 4 | (ulonglong)bVar20 | (ulonglong)bVar19 * 0x200000 |
                   (ulonglong)bVar31 * 0x40000;
        puVar16[-1] = (ulonglong)bVar30 * 0x4000 | (ulonglong)bVar29 * 0x800 |
                      (ulonglong)bVar28 * 0x400 | (ulonglong)bVar27 * 0x200 |
                      (ulonglong)bVar26 * 0x100 | (ulonglong)bVar25 * 0x80 |
                      (ulonglong)bVar24 * 0x40 | (ulonglong)bVar23 * 0x10 | (ulonglong)bVar21 * 4 |
                      (ulonglong)bVar20 | (ulonglong)bVar19 * 0x200000 | (ulonglong)bVar31 * 0x40000
        ;
        *(int *)(puVar16 + -1) = (int)puVar16[-1] << 0x1f;
        *(uint *)(puVar16 + -1) = (uint)puVar16[-1] >> 0x1f;
        if ((int)puVar16[-1] == 0) {
          uVar32 = *puVar16;
          *puVar16 = param_2;
          puVar16[-1] = param_2;
          puVar16[-2] = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar32 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
                        (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
          uVar32 = puVar16[-2];
          puVar16[-2] = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar32 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
                        (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
          uVar32 = puVar16[-2];
          puVar16[-2] = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar32 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
                        (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
          uVar32 = puVar16[-2];
          puVar16[-2] = unaff_RBP;
          puVar16[-3] = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar32 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
                        (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
          *puVar16 = 0x16563469e;
          return pcStackX_20;
        }
        uVar32 = *puVar16;
      }
      uVar7 = puVar16[1];
      puVar16[1] = param_4;
      *puVar16 = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar32 & 0x80) != 0) * 0x80 | (ulonglong)((uVar32 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10 | (ulonglong)((uVar32 & 4) != 0) * 4 | 1
                 | (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
      uVar32 = *puVar16;
      *puVar16 = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar32 & 0x80) != 0) * 0x80 | (ulonglong)((uVar32 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10 | (ulonglong)((uVar32 & 4) != 0) * 4 |
                 (ulonglong)((uVar32 & 1) != 0) | (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
      *puVar16 = *puVar16 & 0xffffffffffffffbf;
      uVar32 = *puVar16;
      if ((uVar32 & 0x40) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar17 = param_3 + (ulonglong)((uVar32 & 1) != 0);
      uVar8 = puVar16[1];
      puVar16[1] = lVar14;
      *puVar16 = local_res18;
      uVar18 = 0xffffffffffffffff - ~uVar17;
      puVar16[-1] = uVar8;
      if ((longlong)((~uVar7 - (uVar18 | ~uVar7)) + uVar18) < 0) {
        pcVar13 = (char *)FUN_1612c1d56();
        return pcVar13;
      }
      uVar9 = *puVar16;
      uVar8 = puVar16[1];
      *puVar16 = (ulonglong)(puVar16 + 1);
      puVar10 = (undefined8 *)*puVar16;
      puVar10[-1] = unaff_RBX;
      *puVar10 = pcStackX_20;
      puVar10[-1] = uVar17;
      puVar10[-2] = uVar9;
      puVar10[-2] = uVar8;
      uVar9 = puVar10[-2];
      uVar17 = puVar10[-1];
      puVar10[-1] = uVar8;
      uVar7 = puVar10[-1];
      lVar14 = puVar10[-1];
      puVar10[-1] = puVar10[-1] - uVar17;
      puVar10[-2] = (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 |
                    (ulonglong)SBORROW8(lVar14,uVar17) * 0x800 |
                    (ulonglong)((uVar32 & 0x400) != 0) * 0x400 |
                    (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
                    (ulonglong)((uVar32 & 0x100) != 0) * 0x100 |
                    (ulonglong)((longlong)puVar10[-1] < 0) * 0x80 |
                    (ulonglong)(puVar10[-1] == 0) * 0x40 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10
                    | (ulonglong)((POPCOUNT(puVar10[-1] & 0xff) & 1U) == 0) * 4 |
                    (ulonglong)(uVar7 < uVar17) | (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
                    (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
      puVar10[-1] = uVar9;
      puVar10[-2] = uVar9;
      puVar10[-3] = unaff_RBP;
      puVar10[-4] = unaff_RBP;
      puVar10[-3] = &LAB_1612c1e02;
      return &LAB_166165ff2;
    }
  }
  puVar16 = (ulonglong *)((longlong)puVar15 + 8);
  *(ulonglong *)((longlong)puVar15 + 8) =
       (ulonglong)bVar29 * 0x4000 | (ulonglong)bVar28 * 0x800 | (ulonglong)bVar27 * 0x400 |
       (ulonglong)bVar26 * 0x200 | (ulonglong)bVar25 * 0x100 | (ulonglong)bVar24 * 0x80 |
       (ulonglong)bVar23 * 0x40 | (ulonglong)bVar21 * 0x10 | (ulonglong)bVar20 * 4 | 1 |
       (ulonglong)bVar31 * 0x200000 | (ulonglong)bVar30 * 0x40000;
  bVar19 = true;
  goto code_r0x0001656345a2;
}



// FUNCTION 14d925650 FUN_14d925650 body=262 status=ok
// SIG undefined FUN_14d925650(void)

/* WARNING: Instruction at (ram,0x000165634597) overlaps instruction at (ram,0x000165634596)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9256b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9256bb) */
/* WARNING: Removing unreachable block (ram,0x000161b2f7da) */

char * FUN_14d925650(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte bVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  undefined1 *puVar12;
  ulonglong *puVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  char in_R10B;
  undefined8 unaff_R12;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  char *unaff_retaddr;
  uint in_stack_00000008;
  ulonglong local_res10;
  uint local_res1c [3];
  uint uVar4;
  
  if ((in_stack_00000008 >> 7 & 1) == 0) {
    in_R10B = in_R10B + '\x01';
  }
  cVar19 = in_R10B == '\0';
  puVar12 = &stack0x00000008;
  while( true ) {
    *(longlong *)(puVar12 + -8) = param_1;
    lVar11 = *(longlong *)(puVar12 + -8);
    if (cVar19 == '\0') {
      *(undefined1 **)(puVar12 + 8) = &LAB_1656345a0_1;
      return unaff_retaddr;
    }
    uVar29 = *(ulonglong *)(puVar12 + 8);
    puVar13 = (ulonglong *)(puVar12 + 0x10);
    *(undefined4 *)(puVar12 + 0x14) = 0;
    *(int *)(puVar12 + 0x14) = *(int *)(puVar12 + 0x14) + -0x5a3cc6e8;
    cVar19 = -0x7f;
    puVar2 = (uint *)(puVar12 + 0x14);
    uVar3 = *puVar2;
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + 0x5a3cc6e7;
    *(ulonglong *)(puVar12 + 8) =
         (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY4(uVar4,0x5a3cc6e7) * 0x800
         | (ulonglong)((uVar29 & 0x400) != 0) * 0x400 | (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar29 & 0x100) != 0) * 0x100 | (ulonglong)((int)*puVar2 < 0) * 0x80 |
         (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(0xa5c33918 < uVar3) |
         (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)(puVar12 + 8) = *(ulonglong *)(puVar12 + 8) | 1;
    uVar29 = *(ulonglong *)(puVar12 + 8);
    bVar26 = (uVar29 & 0x4000) != 0;
    bVar25 = (uVar29 & 0x800) != 0;
    bVar24 = (uVar29 & 0x400) != 0;
    bVar23 = (uVar29 & 0x200) != 0;
    bVar22 = (uVar29 & 0x100) != 0;
    bVar21 = (uVar29 & 0x80) != 0;
    bVar20 = (uVar29 & 0x40) != 0;
    bVar18 = (uVar29 & 0x10) != 0;
    bVar17 = (uVar29 & 4) != 0;
    bVar28 = (uVar29 & 0x200000) != 0;
    bVar27 = (uVar29 & 0x40000) != 0;
    if ((uVar29 & 1) != 0) break;
    bVar9 = (byte)unaff_retaddr;
    *unaff_retaddr = *unaff_retaddr + bVar9;
    pbVar1 = (byte *)(lVar11 + -1);
    bVar16 = CARRY1(*pbVar1,bVar9);
    bVar25 = SCARRY1(*pbVar1,bVar9);
    *pbVar1 = *pbVar1 + bVar9;
    bVar21 = (char)*pbVar1 < '\0';
    bVar20 = *pbVar1 == 0;
    bVar17 = (POPCOUNT(*pbVar1) & 1U) == 0;
    param_1 = lVar11 + -1;
    lVar11 = 0;
    puVar12 = puVar12 + 0x10;
    if (param_1 == 0) {
code_r0x0001656345a2:
      puVar13[-1] = (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar25 * 0x800 |
                    (ulonglong)bVar24 * 0x400 | (ulonglong)bVar23 * 0x200 |
                    (ulonglong)bVar22 * 0x100 | (ulonglong)bVar21 * 0x80 | (ulonglong)bVar20 * 0x40
                    | (ulonglong)bVar18 * 0x10 | (ulonglong)bVar17 * 4 | (ulonglong)bVar16 |
                    (ulonglong)bVar28 * 0x200000 | (ulonglong)bVar27 * 0x40000;
      *(int *)(puVar13 + -1) = (int)puVar13[-1] << 0x1f;
      *(uint *)(puVar13 + -1) = (uint)puVar13[-1] >> 0x1f;
      if ((int)puVar13[-1] == 0) {
        uVar29 = *puVar13;
      }
      else {
        uVar29 = *puVar13;
        bVar27 = (uVar29 & 0x4000) != 0;
        bVar26 = (uVar29 & 0x800) != 0;
        bVar25 = (uVar29 & 0x400) != 0;
        bVar24 = (uVar29 & 0x200) != 0;
        bVar23 = (uVar29 & 0x100) != 0;
        bVar22 = (uVar29 & 0x80) != 0;
        bVar21 = (uVar29 & 0x40) != 0;
        bVar20 = (uVar29 & 0x10) != 0;
        bVar18 = (uVar29 & 4) != 0;
        bVar17 = (uVar29 & 1) != 0;
        bVar16 = (uVar29 & 0x200000) != 0;
        bVar28 = (uVar29 & 0x40000) != 0;
        *puVar13 = (ulonglong)bVar27 * 0x4000 | (ulonglong)bVar26 * 0x800 |
                   (ulonglong)bVar25 * 0x400 | (ulonglong)bVar24 * 0x200 | (ulonglong)bVar23 * 0x100
                   | (ulonglong)bVar22 * 0x80 | (ulonglong)bVar21 * 0x40 | (ulonglong)bVar20 * 0x10
                   | (ulonglong)bVar18 * 4 | (ulonglong)bVar17 | (ulonglong)bVar16 * 0x200000 |
                   (ulonglong)bVar28 * 0x40000;
        puVar13[-1] = (ulonglong)bVar27 * 0x4000 | (ulonglong)bVar26 * 0x800 |
                      (ulonglong)bVar25 * 0x400 | (ulonglong)bVar24 * 0x200 |
                      (ulonglong)bVar23 * 0x100 | (ulonglong)bVar22 * 0x80 |
                      (ulonglong)bVar21 * 0x40 | (ulonglong)bVar20 * 0x10 | (ulonglong)bVar18 * 4 |
                      (ulonglong)bVar17 | (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar28 * 0x40000
        ;
        *(int *)(puVar13 + -1) = (int)puVar13[-1] << 0x1f;
        *(uint *)(puVar13 + -1) = (uint)puVar13[-1] >> 0x1f;
        if ((int)puVar13[-1] == 0) {
          uVar29 = *puVar13;
          *puVar13 = param_2;
          puVar13[-1] = param_2;
          puVar13[-2] = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar29 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
                        (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
          uVar29 = puVar13[-2];
          puVar13[-2] = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar29 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
                        (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
          uVar29 = puVar13[-2];
          puVar13[-2] = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar29 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
                        (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
          uVar29 = puVar13[-2];
          puVar13[-2] = unaff_RBP;
          puVar13[-3] = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                        (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                        (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                        (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                        (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                        (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
                        (ulonglong)((uVar29 & 0x40) != 0) * 0x40 |
                        (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
                        (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
                        (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                        (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
          *puVar13 = 0x16563469e;
          return unaff_retaddr;
        }
        uVar29 = *puVar13;
      }
      uVar5 = puVar13[1];
      puVar13[1] = param_4;
      *puVar13 = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar29 & 0x80) != 0) * 0x80 | (ulonglong)((uVar29 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 | (ulonglong)((uVar29 & 4) != 0) * 4 | 1
                 | (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
      uVar29 = *puVar13;
      *puVar13 = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar29 & 0x80) != 0) * 0x80 | (ulonglong)((uVar29 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 | (ulonglong)((uVar29 & 4) != 0) * 4 |
                 (ulonglong)((uVar29 & 1) != 0) | (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
      *puVar13 = *puVar13 & 0xffffffffffffffbf;
      uVar29 = *puVar13;
      if ((uVar29 & 0x40) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar14 = param_3 + (ulonglong)((uVar29 & 1) != 0);
      uVar6 = puVar13[1];
      puVar13[1] = lVar11;
      *puVar13 = unaff_R12;
      uVar15 = 0xffffffffffffffff - ~uVar14;
      puVar13[-1] = uVar6;
      if ((longlong)((~uVar5 - (uVar15 | ~uVar5)) + uVar15) < 0) {
        pcVar10 = (char *)FUN_1612c1d56();
        return pcVar10;
      }
      uVar7 = *puVar13;
      uVar6 = puVar13[1];
      *puVar13 = (ulonglong)(puVar13 + 1);
      puVar8 = (undefined8 *)*puVar13;
      puVar8[-1] = unaff_RBX;
      *puVar8 = unaff_retaddr;
      puVar8[-1] = uVar14;
      puVar8[-2] = uVar7;
      puVar8[-2] = uVar6;
      uVar7 = puVar8[-2];
      uVar14 = puVar8[-1];
      puVar8[-1] = uVar6;
      uVar5 = puVar8[-1];
      lVar11 = puVar8[-1];
      puVar8[-1] = puVar8[-1] - uVar14;
      puVar8[-2] = (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 |
                   (ulonglong)SBORROW8(lVar11,uVar14) * 0x800 |
                   (ulonglong)((uVar29 & 0x400) != 0) * 0x400 |
                   (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
                   (ulonglong)((uVar29 & 0x100) != 0) * 0x100 |
                   (ulonglong)((longlong)puVar8[-1] < 0) * 0x80 |
                   (ulonglong)(puVar8[-1] == 0) * 0x40 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
                   (ulonglong)((POPCOUNT(puVar8[-1] & 0xff) & 1U) == 0) * 4 |
                   (ulonglong)(uVar5 < uVar14) | (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
                   (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
      puVar8[-1] = uVar7;
      puVar8[-2] = uVar7;
      puVar8[-3] = unaff_RBP;
      puVar8[-4] = unaff_RBP;
      puVar8[-3] = &LAB_1612c1e02;
      return &LAB_166165ff2;
    }
  }
  puVar13 = (ulonglong *)(puVar12 + 8);
  *(ulonglong *)(puVar12 + 8) =
       (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar25 * 0x800 | (ulonglong)bVar24 * 0x400 |
       (ulonglong)bVar23 * 0x200 | (ulonglong)bVar22 * 0x100 | (ulonglong)bVar21 * 0x80 |
       (ulonglong)bVar20 * 0x40 | (ulonglong)bVar18 * 0x10 | (ulonglong)bVar17 * 4 | 1 |
       (ulonglong)bVar28 * 0x200000 | (ulonglong)bVar27 * 0x40000;
  bVar16 = true;
  goto code_r0x0001656345a2;
}



// FUNCTION 14d9257f0 FUN_14d9257f0 body=202 status=ok
// SIG undefined FUN_14d9257f0(void)

void FUN_14d9257f0(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ulonglong uVar3;
  longlong unaff_R13;
  longlong unaff_R15;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_10 [2];
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_R15);
  *(undefined4 *)puVar1 = 0x2c58966;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  puVar2 = (ulonglong *)((longlong)puVar1 + (*puVar1 - 0x2c5894e));
  uVar3 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar1 = param_4;
  *puVar2 = ~param_1 & *puVar2 | param_1;
  *puVar2 = ~((0xffffffffffffffff - param_1 | uVar3) & *puVar2);
  puVar1[4] = puVar1[4] ^ param_1;
  puVar1[2] = in_R10;
  puVar1[1] = in_RAX;
  bVar4 = 0;
  bVar8 = 0;
  uVar3 = param_1 ^ 0xffffffffffffffff;
  bVar7 = (longlong)uVar3 < 0;
  bVar6 = uVar3 == 0;
  bVar5 = (POPCOUNT(uVar3 & 0xff) & 1U) == 0;
  *puVar1 = param_1;
  puVar1[-1] = 0x14d925879;
  FUN_1614b2c9a();
  puVar1[-1] = unaff_RBX;
  puVar1[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(bVar8 & 1) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(bVar7 & 1) * 0x80 | (ulonglong)(bVar6 & 1) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[3] = unaff_R13 - 0x6a59118;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d925a3e FUN_14d925a3e body=425 status=ok
// SIG undefined FUN_14d925a3e(void)

/* WARNING: Removing unreachable block (ram,0x00016504ed84) */
/* WARNING: Removing unreachable block (ram,0x00014d925abe) */

void FUN_14d925a3e(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16603d0d8();
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_166c9012f((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar1 + 1,
                ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  return;
}



// FUNCTION 14d925abe FUN_14d925abe body=157 status=ok
// SIG undefined FUN_14d925abe(void)

void FUN_14d925abe(undefined8 param_1)

{
  undefined8 unaff_R14;
  
  FUN_156a5ba12(param_1,unaff_R14);
  return;
}



// FUNCTION 14d925c0b FUN_14d925c0b body=143 status=ok
// SIG undefined FUN_14d925c0b(void)

void FUN_14d925c0b(void)

{
  ulonglong uVar1;
  ulonglong *in_RAX;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *in_RAX;
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | unaff_R15;
  *in_RAX = 0xffffffffffffffff - ((0xffffffffffffffffU - unaff_RSI | uVar1) & *in_RAX);
  (*(code *)0x16574abfe)(0x16574abfe);
  return;
}



// FUNCTION 14d925c9b FUN_14d925c9b body=149 status=ok
// SIG undefined FUN_14d925c9b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d925c9b(undefined8 param_1)

{
  FUN_162c690c4(param_1,FUN_162c690c4);
  return;
}



// FUNCTION 14d925dd0 FUN_14d925dd0 body=61 status=ok
// SIG undefined FUN_14d925dd0(void)

void FUN_14d925dd0(void)

{
  undefined8 unaff_RDI;
  undefined4 unaff_retaddr;
  
  *(undefined8 *)(&stack0x1a48a119 + CONCAT44(0xffffffff,unaff_retaddr)) = unaff_RDI;
  return;
}



// FUNCTION 14d925e6c FUN_14d925e6c body=295 status=ok
// SIG undefined FUN_14d925e6c(void)

/* WARNING: Removing unreachable block (ram,0x00014d925eef) */
/* WARNING: Removing unreachable block (ram,0x00014d925ef5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d925e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_1574a6b3a(local_res10,param_2);
  return;
}



// FUNCTION 14d925f95 FUN_14d925f95 body=308 status=ok
// SIG undefined FUN_14d925f95(void)

/* WARNING: Removing unreachable block (ram,0x00014d9260b5) */

undefined8
FUN_14d925f95(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong unaff_R12;
  undefined8 local_res18 [2];
  
  FUN_165ce682c();
  *(undefined8 *)
   ((longlong)local_res18 + ~(~(unaff_R12 & 0xffffffffad10817e) & (unaff_R12 | 0xffffffffad10817e)))
       = param_2;
  return param_5;
}



// FUNCTION 14d9260c9 FUN_14d9260c9 body=154 status=ok
// SIG undefined FUN_14d9260c9(void)

/* WARNING: Removing unreachable block (ram,0x00014d926289) */
/* WARNING: Removing unreachable block (ram,0x00014d926294) */
/* WARNING: Removing unreachable block (ram,0x00014d9261f3) */
/* WARNING: Removing unreachable block (ram,0x00014d9261f9) */
/* WARNING: Removing unreachable block (ram,0x00014d92622c) */
/* WARNING: Removing unreachable block (ram,0x00014d92622e) */
/* WARNING: Removing unreachable block (ram,0x00014da6d4d7) */
/* WARNING: Removing unreachable block (ram,0x00014da6d58c) */
/* WARNING: Removing unreachable block (ram,0x00014da6d592) */
/* WARNING: Removing unreachable block (ram,0x00014da6d597) */
/* WARNING: Removing unreachable block (ram,0x00014da6d59d) */
/* WARNING: Removing unreachable block (ram,0x00015afa29aa) */
/* WARNING: Removing unreachable block (ram,0x00014d92628f) */
/* WARNING: Removing unreachable block (ram,0x00014dcb1340) */
/* WARNING: Removing unreachable block (ram,0x0001668a7fcd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00014d92614e */
/* WARNING: Removing unreachable block (ram,0x00014dcb12b0) */
/* WARNING: Removing unreachable block (ram,0x00014dcb133a) */
/* WARNING: Removing unreachable block (ram,0x0001616dacfc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9260c9(void)

{
  FUN_14de27c9c();
  FUN_14dcb12b0();
  return;
}



// FUNCTION 14d926164 FUN_14d926164 body=454 status=ok
// SIG undefined FUN_14d926164(void)

/* WARNING: Removing unreachable block (ram,0x00014d926289) */
/* WARNING: Removing unreachable block (ram,0x00014d926294) */
/* WARNING: Removing unreachable block (ram,0x00014d9261f3) */
/* WARNING: Removing unreachable block (ram,0x00014d9261f9) */
/* WARNING: Removing unreachable block (ram,0x00014d92622c) */
/* WARNING: Removing unreachable block (ram,0x00014d92622e) */
/* WARNING: Removing unreachable block (ram,0x00014da6d4d7) */
/* WARNING: Removing unreachable block (ram,0x00014da6d58c) */
/* WARNING: Removing unreachable block (ram,0x00014da6d592) */
/* WARNING: Removing unreachable block (ram,0x00014da6d597) */
/* WARNING: Removing unreachable block (ram,0x00014da6d59d) */
/* WARNING: Removing unreachable block (ram,0x00015afa29aa) */
/* WARNING: Removing unreachable block (ram,0x00014d92628f) */
/* WARNING: Removing unreachable block (ram,0x00014dcb1340) */
/* WARNING: Removing unreachable block (ram,0x0001668a7fc7) */
/* WARNING: Removing unreachable block (ram,0x00014dcb12b0) */
/* WARNING: Removing unreachable block (ram,0x00014dcb133a) */
/* WARNING: Removing unreachable block (ram,0x0001616dacfc) */
/* WARNING: Removing unreachable block (ram,0x0001668a7fcd) */

void FUN_14d926164(void)

{
  FUN_14dcb12b0();
  return;
}



// FUNCTION 14d926456 FUN_14d926456 body=154 status=ok
// SIG undefined FUN_14d926456(void)

/* WARNING: Removing unreachable block (ram,0x00014d9264ea) */
/* WARNING: Removing unreachable block (ram,0x00014d9264f0) */

void FUN_14d926456(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9264f0 FUN_14d9264f0 body=134 status=ok
// SIG undefined FUN_14d9264f0(void)

void FUN_14d9264f0(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_161c694b8(param_1,param_2,-1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1),
                ((param_3 | param_1) - (~(param_3 & param_1) | param_3 | param_1)) +
                ~(param_3 & param_1));
  return;
}



// FUNCTION 14d926602 FUN_14d926602 body=165 status=ok
// SIG undefined FUN_14d926602(void)

void FUN_14d926602(void)

{
  return;
}



// FUNCTION 14d9267b6 FUN_14d9267b6 body=335 status=ok
// SIG undefined FUN_14d9267b6(void)

void FUN_14d9267b6(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  ulonglong param_5)

{
  int *piVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong in_R11;
  ulonglong local_res20;
  
  *(ulonglong *)(unaff_RDI + 8) =
       (0xffffffffffffffffU - param_1 | *(ulonglong *)(unaff_RDI + 8)) + param_1 + 1;
  local_res20 = ~(local_res20 & in_RAX) & (local_res20 | in_RAX);
  param_5 = param_5 ^ in_RAX;
  uVar2 = FUN_14df77ef3(&local_res20);
  *(undefined8 *)(&stack0x00000018 + in_R11) = uVar2;
  *(undefined8 *)(param_5 - 8) = unaff_RBX;
  *(undefined8 *)(param_5 - 0x10) = 0x14d9268c0;
  FUN_15680bd4d();
  *param_4 = *param_4 + 1;
  *(undefined4 *)(param_5 - 0x10) = 0x25171b84;
  piVar1 = (int *)(param_5 - 0x18);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *piVar1 = -0x38645ee2;
  *piVar1 = *piVar1 + 0x4249ecba;
  *(undefined8 *)(param_5 - 0x18) = param_3;
  *(undefined8 *)(param_5 - 0x20) = param_3;
  *(undefined1 **)(param_5 - 0x18) = &LAB_14d926908;
  return;
}



// FUNCTION 14d926968 FUN_14d926968 body=176 status=ok
// SIG undefined FUN_14d926968(void)

void FUN_14d926968(void)

{
  return;
}



// FUNCTION 14d926a96 FUN_14d926a96 body=45 status=ok
// SIG undefined FUN_14d926a96(void)

void FUN_14d926a96(void)

{
  return;
}



// FUNCTION 14d926bd6 FUN_14d926bd6 body=446 status=ok
// SIG undefined FUN_14d926bd6(void)

/* WARNING: Removing unreachable block (ram,0x00014d926d25) */

undefined8
FUN_14d926bd6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulonglong in_RAX;
  undefined8 uVar9;
  uint uVar10;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar11;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong uVar12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar14;
  ulonglong *unaff_retaddr;
  
  *(undefined4 *)(unaff_retaddr + -1) = 0x1f03ea94;
  unaff_retaddr[-3] = unaff_RSI;
  *(undefined4 *)(unaff_retaddr + -4) = 0x2dab50b1;
  *(int *)(unaff_retaddr + -2) = (int)unaff_retaddr[-4];
  *(int *)((longlong)unaff_retaddr + -4) = (int)unaff_retaddr[-2];
  unaff_retaddr[-2] = param_2;
  *(int *)((longlong)unaff_retaddr + -4) = *(int *)((longlong)unaff_retaddr + -4) + 0x5c799597;
  uVar6 = unaff_retaddr[-2];
  unaff_retaddr[-2] = 0;
  *(undefined4 *)(unaff_retaddr + -2) = 0x75db19b8;
  uVar2 = *(uint *)((longlong)unaff_retaddr + -4);
  uVar10 = (uint)unaff_retaddr[-2];
  uVar11 = uVar2 + uVar10;
  bVar13 = (POPCOUNT(uVar11 & 0xff) & 1U) == 0;
  *(uint *)((longlong)unaff_retaddr + -4) = uVar11;
  uVar9 = unaff_retaddr[-1];
  unaff_retaddr[-1] = uVar9;
  uVar3 = unaff_retaddr[-1];
  unaff_retaddr[-1] = unaff_R13;
  if ((int)uVar11 < 0) {
    uVar9 = FUN_1653c3cf9();
    return uVar9;
  }
  unaff_retaddr[-2] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar2,uVar10) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar13 * 4 |
       (ulonglong)CARRY4(uVar2,uVar10) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  unaff_retaddr[-3] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar2,uVar10) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar13 * 4 |
       (ulonglong)CARRY4(uVar2,uVar10) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)(unaff_retaddr + -3) = (int)unaff_retaddr[-3] << 0x18;
  *(uint *)(unaff_retaddr + -3) = (uint)unaff_retaddr[-3] >> 0x1f;
  if ((int)unaff_retaddr[-3] != 0) {
    unaff_retaddr[-2] = param_4;
    uVar14 = unaff_retaddr[-2];
    unaff_retaddr[-2] = unaff_R12;
    unaff_retaddr[-3] = unaff_R14;
    uVar12 = ~(in_RAX | ~*unaff_retaddr) | in_RAX;
    puVar7 = (ushort *)unaff_retaddr[-2];
    *unaff_retaddr = *unaff_retaddr & in_RAX;
    *unaff_retaddr = ~*unaff_retaddr;
    unaff_retaddr[-2] = unaff_RDI;
    unaff_retaddr[-3] = unaff_retaddr[-3];
    *unaff_retaddr = (~uVar12 | *unaff_retaddr) + uVar12 + 1;
    uVar8 = unaff_retaddr[-3];
    uVar4 = unaff_retaddr[-1];
    unaff_retaddr[-1] = uVar9;
    uVar12 = unaff_retaddr[1];
    unaff_retaddr[-2] = uVar4;
    unaff_retaddr[-3] = in_R10;
    unaff_retaddr[1] = (~in_RAX | unaff_retaddr[1]) + in_RAX + 1;
    unaff_retaddr[-2] = uVar12 + in_RAX;
    puVar1 = unaff_retaddr + 1;
    *puVar1 = *puVar1 << 1 | *puVar1 >> 0x3f;
    unaff_retaddr[1] = unaff_retaddr[1] & 0xfffffffffffffffe;
    unaff_retaddr[1] = unaff_retaddr[-2] - unaff_retaddr[1];
    uVar9 = unaff_retaddr[-1];
    unaff_retaddr[2] = unaff_retaddr[2] ^ in_RAX;
    *unaff_retaddr = uVar14;
    unaff_retaddr[-1] = unaff_R15;
    unaff_retaddr[-2] = 0x1614aa6c3;
    DAT_14d7bf84f = FUN_165d05419(uVar9,uVar6,uVar3);
    *puVar7 = *puVar7 ^ 0xffff;
    uVar12 = unaff_retaddr[1];
    uVar14 = unaff_retaddr[2];
    lVar5 = unaff_retaddr[3];
    LOCK();
    UNLOCK();
    *(undefined8 *)(lVar5 + -8) = in_R11;
    *(undefined8 *)(lVar5 + -0x10) = in_R11;
    *(ulonglong *)(lVar5 + -0x18) =
         (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
         (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)(lVar5 + -0x20) = uVar12;
    uVar9 = *(undefined8 *)(lVar5 + -0x20);
    uVar12 = *(ulonglong *)(lVar5 + -0x18);
    *(ulonglong *)(lVar5 + -0x18) =
         (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
         (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
    *(code **)(lVar5 + -0x20) = FUN_165d05419;
    *(undefined8 *)(lVar5 + -0x28) = uVar9;
    uVar12 = *(ulonglong *)(lVar5 + -0x18);
    *(undefined8 *)(lVar5 + -0x18) = uVar8;
    *(ulonglong *)(lVar5 + -0x20) =
         (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
         (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
    uVar9 = FUN_165bb9c28();
    return uVar9;
  }
  uVar9 = FUN_1653c3cf9();
  return uVar9;
}



// FUNCTION 14d926e56 FUN_14d926e56 body=37 status=ok
// SIG undefined FUN_14d926e56(void)

void FUN_14d926e56(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  FUN_14d7a7d8a(param_1,uStackX_8);
  return;
}



// FUNCTION 14d926fd2 FUN_14d926fd2 body=979 status=ok
// SIG undefined FUN_14d926fd2(void)

/* WARNING: Instruction at (ram,0x0001648e281b) overlaps instruction at (ram,0x0001648e2819)
    */
/* WARNING: Removing unreachable block (ram,0x0001650d8a6a) */
/* WARNING: Removing unreachable block (ram,0x0001650a0c73) */
/* WARNING: Removing unreachable block (ram,0x00014d92707c) */
/* WARNING: Removing unreachable block (ram,0x00014d9270e8) */
/* WARNING: Removing unreachable block (ram,0x00014d9270ee) */
/* WARNING: Removing unreachable block (ram,0x00014d9270f3) */
/* WARNING: Removing unreachable block (ram,0x00014d92721b) */
/* WARNING: Removing unreachable block (ram,0x00014d927221) */
/* WARNING: Removing unreachable block (ram,0x000160b9871b) */
/* WARNING: Removing unreachable block (ram,0x0001648e27ef) */
/* WARNING: Removing unreachable block (ram,0x0001648e27fa) */
/* WARNING: Removing unreachable block (ram,0x0001648e281b) */
/* WARNING: Removing unreachable block (ram,0x0001648e27f5) */
/* WARNING: Removing unreachable block (ram,0x00014d927076) */
/* WARNING: Removing unreachable block (ram,0x0001650d89b5) */
/* WARNING: Removing unreachable block (ram,0x0001648e27fc) */
/* WARNING: Removing unreachable block (ram,0x0001648e27fd) */
/* WARNING: Removing unreachable block (ram,0x0001648e2825) */

void FUN_14d926fd2(void)

{
  ulonglong in_R9;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 & ~unaff_R15;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = ~(in_R9 & *unaff_R13);
  FUN_1650d89b5();
  return;
}



// FUNCTION 14d927356 FUN_14d927356 body=278 status=ok
// SIG undefined FUN_14d927356(void)

void FUN_14d927356(undefined8 param_1,undefined8 param_2)

{
  FUN_14d90da2a(param_1,param_2);
  return;
}



// FUNCTION 14d9275a8 FUN_14d9275a8 body=161 status=ok
// SIG undefined FUN_14d9275a8(void)

undefined8 FUN_14d9275a8(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14d92764b FUN_14d92764b body=172 status=ok
// SIG undefined FUN_14d92764b(void)

/* WARNING: Removing unreachable block (ram,0x00014de56bd0) */
/* WARNING: Removing unreachable block (ram,0x00014de56bd6) */
/* WARNING: Removing unreachable block (ram,0x00014de56bdb) */
/* WARNING: Removing unreachable block (ram,0x00014de56b42) */
/* WARNING: Removing unreachable block (ram,0x00014de56bcb) */
/* WARNING: Removing unreachable block (ram,0x00014de56b32) */
/* WARNING: Removing unreachable block (ram,0x00014d9276f7) */
/* WARNING: Removing unreachable block (ram,0x00014d92778d) */
/* WARNING: Removing unreachable block (ram,0x00014d927792) */
/* WARNING: Removing unreachable block (ram,0x0001661620f1) */
/* WARNING: Removing unreachable block (ram,0x00014d927798) */
/* WARNING: Removing unreachable block (ram,0x00014d92782f) */
/* WARNING: Removing unreachable block (ram,0x00014d927835) */
/* WARNING: Removing unreachable block (ram,0x00014de56a9b) */
/* WARNING: Removing unreachable block (ram,0x00014de56b1d) */

void FUN_14d92764b(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  undefined8 unaff_R14;
  undefined8 in_stack_00000020;
  
  uVar1 = ~(param_6 & param_1) & (param_6 | param_1);
  if (-1 < (longlong)uVar1) {
    FUN_162a49b73();
    return;
  }
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(code **)(uVar1 - 0x10) = FUN_162a49bf9;
  FUN_164b004fd(in_stack_00000020,param_2,param_3);
  *(code **)(uVar1 - 0x10) = FUN_164b004fd;
  *(code **)(uVar1 - 0x18) = FUN_164b004fd;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_162a49c1a;
  return;
}



// FUNCTION 14d9276f7 FUN_14d9276f7 body=320 status=ok
// SIG undefined FUN_14d9276f7(void)

/* WARNING: Removing unreachable block (ram,0x00014de56bd0) */
/* WARNING: Removing unreachable block (ram,0x00014de56bd6) */
/* WARNING: Removing unreachable block (ram,0x00014de56bdb) */
/* WARNING: Removing unreachable block (ram,0x00014de56b42) */
/* WARNING: Removing unreachable block (ram,0x00014de56bcb) */
/* WARNING: Removing unreachable block (ram,0x00014de56b32) */
/* WARNING: Removing unreachable block (ram,0x00014d927798) */
/* WARNING: Removing unreachable block (ram,0x00014d92782f) */
/* WARNING: Removing unreachable block (ram,0x00014d927835) */
/* WARNING: Removing unreachable block (ram,0x00014de56a9b) */
/* WARNING: Removing unreachable block (ram,0x00014de56b1d) */

void FUN_14d9276f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (*(longlong *)(unaff_RSI + -0x80) == 0) {
    FUN_156f7f4b3(FUN_156f7f4b3,
                  ~(*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) &
                  (*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP),param_3,
                  *(undefined8 *)(unaff_RSI + -0x88));
    FUN_165c7153c();
    return;
  }
  FUN_1661620f1();
  return;
}



// FUNCTION 14d92783b FUN_14d92783b body=249 status=ok
// SIG undefined FUN_14d92783b(void)

void FUN_14d92783b(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  puVar2 = (ulonglong *)(local_res10 + -8);
  *puVar2 = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  uVar3 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(ulonglong *)(local_res10 + -0x10) = *puVar2;
  uVar5 = *(undefined8 *)(local_res10 + -0x18);
  *puVar2 = 0x327d66d5;
  *puVar2 = *puVar2 ^ 0x327d66d5;
  *puVar2 = (ulonglong)(&DAT_14d8d303f + *puVar2);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x28) = 0x14d9278e3;
  uVar5 = FUN_14d8d2faa(uVar5,param_2,param_3,uVar3);
  uVar4 = in(param_2);
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)uVar5 >> 8),uVar4) + -0x77);
  *pbVar1 = *pbVar1 | (char)uVar5 + 0x83U;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0xf42ab5e;
  *(undefined **)(local_res10 + -0x18) = &DAT_14d8d303f;
  *puVar2 = unaff_RBX - 0xf42ab5e;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9279fd FUN_14d9279fd body=168 status=ok
// SIG undefined FUN_14d9279fd(void)

void FUN_14d9279fd(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_15b429952(param_1,*(undefined8 *)(unaff_RDI + -0x68),~(in_RAX | unaff_RBP));
  return;
}



// FUNCTION 14d927aa7 FUN_14d927aa7 body=21 status=ok
// SIG undefined FUN_14d927aa7(void)

void FUN_14d927aa7(void)

{
  FUN_14d7aa525();
  return;
}



// FUNCTION 14d927b62 FUN_14d927b62 body=200 status=ok
// SIG undefined FUN_14d927b62(void)

undefined8 FUN_14d927b62(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 in_stack_00000010;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R13;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = in_R10;
  *(undefined8 *)(in_stack_00000028 - 0x28) = in_stack_00000010;
  uVar2 = *(undefined8 *)(in_stack_00000028 - 0x28);
  *(undefined8 *)(in_stack_00000028 - 0x10) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x20) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 - 0x28) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 - 0x30) = unaff_RBX;
  *(undefined1 **)(in_stack_00000028 - 0x20) = &LAB_14d927c2a;
  *(undefined1 **)(in_stack_00000028 - 0x28) = &LAB_165d708d6;
  return uVar2;
}



// FUNCTION 14d927d87 FUN_14d927d87 body=153 status=ok
// SIG undefined FUN_14d927d87(void)

/* WARNING: Removing unreachable block (ram,0x00016208e08e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4dc0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4dce) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4de9) */
/* WARNING: Removing unreachable block (ram,0x00016208e094) */
/* WARNING: Removing unreachable block (ram,0x00016208e105) */
/* WARNING: Removing unreachable block (ram,0x00016208e110) */
/* WARNING: Removing unreachable block (ram,0x00016208e116) */
/* WARNING: Removing unreachable block (ram,0x000162d3732e) */
/* WARNING: Removing unreachable block (ram,0x00014da61c9e) */
/* WARNING: Removing unreachable block (ram,0x00014da61ca4) */
/* WARNING: Removing unreachable block (ram,0x00015713ffd3) */
/* WARNING: Removing unreachable block (ram,0x00015714004e) */
/* WARNING: Removing unreachable block (ram,0x000157140054) */
/* WARNING: Removing unreachable block (ram,0x00016208df6d) */
/* WARNING: Removing unreachable block (ram,0x00016208e02d) */
/* WARNING: Removing unreachable block (ram,0x00016208e031) */
/* WARNING: Removing unreachable block (ram,0x00016208e083) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4e2e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4e31) */
/* WARNING: Removing unreachable block (ram,0x00014d927e20) */

undefined8 FUN_14d927d87(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (-1 < -*(longlong *)(unaff_R12 + -0x58)) {
    uVar1 = FUN_15713ffd3();
    return uVar1;
  }
  uVar1 = FUN_14da61bff(param_1);
  return uVar1;
}



// FUNCTION 14d927e20 FUN_14d927e20 body=54 status=ok
// SIG undefined FUN_14d927e20(void)

void FUN_14d927e20(void)

{
  return;
}



// FUNCTION 14d927f25 FUN_14d927f25 body=133 status=ok
// SIG undefined FUN_14d927f25(void)

undefined8 FUN_14d927f25(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d92805e FUN_14d92805e body=145 status=ok
// SIG undefined FUN_14d92805e(void)

void FUN_14d92805e(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong auStackX_8 [4];
  
  puVar1 = (ulonglong *)((longlong)auStackX_8 + unaff_RBP);
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | in_RAX;
  *puVar1 = 0xfffffffffffffffe - ~-((~*puVar1 | ~in_RAX | uVar2) + *puVar1 + 1);
  auStackX_8[3] = auStackX_8[3] ^ in_RAX;
  (*(code *)0x16191f240)(param_1,param_2);
  return;
}



// FUNCTION 14d928502 FUN_14d928502 body=440 status=ok
// SIG undefined FUN_14d928502(void)

/* WARNING: Removing unreachable block (ram,0x00014d928596) */

void FUN_14d928502(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  FUN_14e155d2c(param_1,0xffffffffffffff80,
                (~uVar1 | param_1 ^ 0xffffffffffffffff) &
                (~((param_1 - (uVar1 | param_1)) + uVar1) + param_1) - ~uVar1,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  FUN_16476f205(param_1);
  return;
}



// FUNCTION 14d928596 FUN_14d928596 body=64 status=ok
// SIG undefined FUN_14d928596(void)

void FUN_14d928596(void)

{
  return;
}



// FUNCTION 14d928638 FUN_14d928638 body=124 status=ok
// SIG undefined FUN_14d928638(void)

/* WARNING: Removing unreachable block (ram,0x00014d928673) */

void FUN_14d928638(ulonglong param_1)

{
  ulonglong unaff_R12;
  
  FUN_14dea86e3(param_1,(unaff_R12 + param_1) - (unaff_R12 & param_1),unaff_R12 | param_1);
  return;
}



// FUNCTION 14d9289a0 FUN_14d9289a0 body=140 status=ok
// SIG undefined FUN_14d9289a0(void)

/* WARNING: Removing unreachable block (ram,0x00014d928a28) */

void FUN_14d9289a0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [2];
  ushort uStackX_18;
  ulonglong uStackX_20;
  
  uVar5 = (~(*(ulonglong *)((longlong)local_res8 + unaff_RBX) & in_RAX) + in_RAX) -
          ~*(ulonglong *)((longlong)local_res8 + unaff_RBX);
  uVar2 = uStackX_20 & in_RAX;
  uVar3 = -((uVar5 & uVar2) + 2);
  uVar5 = ~uVar5;
  lVar4 = uVar3 - uVar5;
  uStackX_20 = lVar4 + 1;
  if (uVar3 < uVar5) {
    uStackX_20 = ~uVar2;
    thunk_FUN_161af866a();
    return;
  }
  uStackX_18 = uStackX_18 & 0xfeff;
  puVar1 = (ulonglong *)(lVar4 + -7);
  *puVar1 = unaff_RBP;
  *(ulonglong *)(lVar4 + -0xf) = local_res8[1];
  *(ulonglong *)(lVar4 + -0xf) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x161af86eb;
  thunk_FUN_15b642ca5(unaff_retaddr);
  return;
}



// FUNCTION 14d928a2e FUN_14d928a2e body=226 status=ok
// SIG undefined FUN_14d928a2e(void)

/* WARNING: Removing unreachable block (ram,0x00014d928ad0) */
/* WARNING: Removing unreachable block (ram,0x00014d928ad6) */
/* WARNING: Removing unreachable block (ram,0x00014d928adb) */

void FUN_14d928a2e(void)

{
  FUN_16471771a();
  return;
}



// FUNCTION 14d928b5e FUN_14d928b5e body=147 status=ok
// SIG undefined FUN_14d928b5e(void)

void FUN_14d928b5e(ulonglong param_1)

{
  undefined4 *in_RAX;
  longlong unaff_RDI;
  
  *in_RAX = 0xffffffff;
  FUN_16185a8ae(param_1,~*(ulonglong *)(unaff_RDI + -0x60) & ~param_1 |
                        *(ulonglong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d928d8f FUN_14d928d8f body=302 status=ok
// SIG undefined FUN_14d928d8f(void)

/* WARNING: Removing unreachable block (ram,0x00016172a4ae) */
/* WARNING: Removing unreachable block (ram,0x00016172a49d) */
/* WARNING: Removing unreachable block (ram,0x00016172a4a3) */
/* WARNING: Removing unreachable block (ram,0x00014d928edf) */
/* WARNING: Removing unreachable block (ram,0x00014d928e2c) */
/* WARNING: Removing unreachable block (ram,0x00014d928e3c) */
/* WARNING: Removing unreachable block (ram,0x00014d928e41) */
/* WARNING: Removing unreachable block (ram,0x00014d928ed9) */
/* WARNING: Removing unreachable block (ram,0x00016172a400) */

void FUN_14d928d8f(ulonglong param_1)

{
  char unaff_BL;
  longlong unaff_RDI;
  char local_res8;
  
  if ((char)(unaff_BL + local_res8 + '\x1e') == '\0') {
    (*(code *)0x1573edf60)
              (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                       (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
    return;
  }
  FUN_1563abf5d();
  return;
}



// FUNCTION 14d928e2c FUN_14d928e2c body=320 status=ok
// SIG undefined FUN_14d928e2c(void)

/* WARNING: Removing unreachable block (ram,0x00016172a4ae) */
/* WARNING: Removing unreachable block (ram,0x00016172a49d) */
/* WARNING: Removing unreachable block (ram,0x00016172a4a3) */
/* WARNING: Removing unreachable block (ram,0x00014d928edf) */

void FUN_14d928e2c(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP;
  FUN_165f33caf(param_1,0xffffffffffffffff,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                (~uVar1 | ~(*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP)) + uVar1 + 1);
  return;
}



// FUNCTION 14d928f6f FUN_14d928f6f body=268 status=ok
// SIG undefined FUN_14d928f6f(void)

void FUN_14d928f6f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  FUN_156517f72(param_1,in_stack_00000010);
  puVar1 = (undefined8 *)(param_6 ^ unaff_R15);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *puVar1 = 0x36fe6f4;
  puVar1[-1] = param_3;
  puVar1[-2] = param_3;
  puVar1[-1] = 0x156ef2e25;
  return;
}



// FUNCTION 14d929097 FUN_14d929097 body=143 status=ok
// SIG undefined FUN_14d929097(void)

void FUN_14d929097(undefined8 param_1)

{
  FUN_162dfdf0d(param_1);
  return;
}



// FUNCTION 14d929127 FUN_14d929127 body=363 status=ok
// SIG undefined FUN_14d929127(void)

/* WARNING: Removing unreachable block (ram,0x00014d92922e) */

ulonglong FUN_14d929127(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  ulonglong local_res10;
  
  if (((longlong)(local_res10 & in_RAX) < 0) && (0 < (longlong)(local_res10 & in_RAX))) {
    *(ulonglong *)(&stack0xfffffffff7c0fb32 + param_1) =
         (ulonglong)(uint)((int)unaff_retaddr - (-1 - (int)in_RAX));
    uVar1 = *(uint *)(&stack0xfffffffff7c0fb32 + param_1);
    *(ulonglong *)(&stack0xfffffffff7c0fb3a + param_1) =
         ~(0xffffffffffffffff - in_RAX | unaff_R12) | ~(~unaff_R12 | in_RAX);
    *(longlong *)(&stack0xfffffffff7c0fb3a + param_1) = unaff_RSI;
    *(undefined8 *)(&stack0xfffffffff7c0fb32 + param_1) = param_2;
    *(ulonglong *)(&stack0xfffffffff7c0fb2a + param_1) = (ulonglong)uVar1;
    uVar2 = *(ulonglong *)(&stack0xfffffffff7c0fb2a + param_1);
    *(undefined8 *)(&stack0xfffffffff7c0fb3a + param_1) = 0;
    *(undefined8 *)(&stack0xfffffffff7c0fb32 + param_1) = unaff_R13;
    *(ulonglong *)(&stack0xfffffffff7c0fb3a + param_1) =
         ~*(ulonglong *)(&stack0xfffffffff7c0fb3a + param_1);
    *(longlong *)(&stack0xfffffffff7c0fb3a + param_1) =
         *(longlong *)(&stack0xfffffffff7c0fb3a + param_1) + 2;
    *(longlong *)(&stack0xfffffffff7c0fb3a + param_1) =
         -*(longlong *)(&stack0xfffffffff7c0fb3a + param_1);
    *(ulonglong *)(&stack0xfffffffff7c0fb3a + param_1) =
         *(longlong *)(&stack0xfffffffff7c0fb3a + param_1) - ~unaff_RDI;
    *(undefined8 *)(&stack0xfffffffff7c0fb2a + param_1) = 0x164ac09d1;
    return uVar2;
  }
  FUN_15b92e51d(param_1,param_2,param_3,param_4);
  uVar2 = FUN_160eccd1a((~(~unaff_retaddr & *(ulonglong *)(unaff_RSI + -0x68)) +
                        *(ulonglong *)(unaff_RSI + -0x68)) - unaff_retaddr);
  return uVar2;
}



// FUNCTION 14d92929f FUN_14d92929f body=143 status=ok
// SIG undefined FUN_14d92929f(void)

void FUN_14d92929f(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  undefined8 local_res10;
  undefined1 local_res20 [8];
  
  uVar1 = *(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | param_1;
  *(ulonglong *)(param_4 + 8) = ~((~unaff_RSI | uVar1) & *(ulonglong *)(param_4 + 8));
  (*(code *)&LAB_16137e5c4)(param_1,&LAB_16137e5c4,local_res20,local_res10);
  return;
}



// FUNCTION 14d9294d7 FUN_14d9294d7 body=250 status=ok
// SIG undefined FUN_14d9294d7(void)

/* WARNING: Removing unreachable block (ram,0x00014d929553) */
/* WARNING: Removing unreachable block (ram,0x00014d929559) */
/* WARNING: Removing unreachable block (ram,0x000162d30b84) */
/* WARNING: Removing unreachable block (ram,0x000162d30b8a) */
/* WARNING: Removing unreachable block (ram,0x0001574ac425) */

void FUN_14d9294d7(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong uStackX_20;
  
  uVar2 = uStackX_20 ^ unaff_RBX;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  puVar1 = (undefined8 *)(uVar2 - 0x10);
  *puVar1 = unaff_R12;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *puVar1 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(uVar2 - 0x18);
  *(undefined4 *)(uVar2 - 0x20) = 0x2fa52952;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  uVar3 = *(ulonglong *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  *(undefined **)
   ((longlong)puVar1 + ~(~(uVar3 & 0xffffffffd05ad6a5) & (uVar3 | 0xffffffffd05ad6a5))) =
       &DAT_16269555e;
  *puVar1 = in_RAX;
  return;
}



// FUNCTION 14d929646 FUN_14d929646 body=137 status=ok
// SIG undefined FUN_14d929646(void)

longlong FUN_14d929646(ulonglong param_1)

{
  ulonglong in_RAX;
  
  return in_RAX + param_1 + (in_RAX & param_1) * -2;
}



// FUNCTION 14d92975c FUN_14d92975c body=317 status=ok
// SIG undefined FUN_14d92975c(void)

void FUN_14d92975c(ulonglong param_1)

{
  undefined8 unaff_RSI;
  undefined8 local_res10 [3];
  
  FUN_160b54e23();
  *(undefined8 *)
   ((longlong)local_res10 + ~(~(param_1 & 0xffffffff8c40c9e2) & (param_1 | 0xffffffff8c40c9e2))) =
       unaff_RSI;
  return;
}



// FUNCTION 14d92989e FUN_14d92989e body=459 status=ok
// SIG undefined FUN_14d92989e(void)

/* WARNING: Removing unreachable block (ram,0x00014d929924) */
/* WARNING: Removing unreachable block (ram,0x00014d92992a) */
/* WARNING: Removing unreachable block (ram,0x00014d9299eb) */
/* WARNING: Removing unreachable block (ram,0x00014d9299f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9299f6) */
/* WARNING: Removing unreachable block (ram,0x00014d929a01) */

void FUN_14d92989e(void)

{
  return;
}



// FUNCTION 14d929c5e FUN_14d929c5e body=706 status=ok
// SIG undefined FUN_14d929c5e(void)

/* WARNING: Removing unreachable block (ram,0x00014d929cc9) */
/* WARNING: Removing unreachable block (ram,0x00014d929ccf) */
/* WARNING: Removing unreachable block (ram,0x00014d929d6f) */
/* WARNING: Removing unreachable block (ram,0x00014d929d75) */
/* WARNING: Removing unreachable block (ram,0x00014d929de0) */
/* WARNING: Removing unreachable block (ram,0x00014d929ddb) */
/* WARNING: Removing unreachable block (ram,0x00014d929de3) */
/* WARNING: Removing unreachable block (ram,0x0001628b7a17) */

void FUN_14d929c5e(void)

{
  return;
}



// FUNCTION 14d929f90 FUN_14d929f90 body=147 status=ok
// SIG undefined FUN_14d929f90(void)

void FUN_14d929f90(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar1 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = *param_2 | param_1;
  *param_2 = ~((0xffffffffffffffffU - unaff_retaddr | uVar1) & *param_2);
  FUN_15b23c2df(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d92a023 FUN_14d92a023 body=157 status=ok
// SIG undefined FUN_14d92a023(void)

/* WARNING: Removing unreachable block (ram,0x00014d92a0c2) */

void FUN_14d92a023(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(~(~*(ulonglong *)(unaff_R13 + -0x90) | ~unaff_R15) << 1)) {
    FUN_160e03420();
    return;
  }
  FUN_160e03420();
  return;
}



// FUNCTION 14d92a0c2 FUN_14d92a0c2 body=152 status=ok
// SIG undefined FUN_14d92a0c2(void)

void FUN_14d92a0c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1617d3e36(FUN_1617d3e36,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92a15d FUN_14d92a15d body=436 status=ok
// SIG undefined FUN_14d92a15d(void)

/* WARNING: Removing unreachable block (ram,0x00014d92a25b) */

void FUN_14d92a15d(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined7 extraout_var;
  longlong unaff_RBP;
  ushort unaff_DI;
  longlong unaff_R13;
  ushort unaff_R15W;
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
  byte bVar21;
  ulonglong uStackX_10;
  longlong *local_res18;
  
  bVar17 = (uStackX_10 & 0x4000) != 0;
  bVar16 = (uStackX_10 & 0x800) != 0;
  bVar15 = (uStackX_10 & 0x200) != 0;
  bVar14 = (uStackX_10 & 0x100) != 0;
  bVar13 = (uStackX_10 & 0x80) != 0;
  bVar12 = (uStackX_10 & 0x40) != 0;
  bVar11 = (uStackX_10 & 0x10) != 0;
  bVar10 = (uStackX_10 & 4) != 0;
  bVar9 = (uStackX_10 & 1) != 0;
  bVar21 = (uStackX_10 & 0x200000) != 0;
  bVar18 = (uStackX_10 & 0x40000) != 0;
  bVar20 = 0;
  bVar19 = 0;
  pcVar4 = (code *)swi(0x2e);
  (*pcVar4)();
  *local_res18 = unaff_RBP;
  local_res18[-1] = unaff_RBP;
  *(undefined4 *)(local_res18 + -2) = 0x86b5137;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  lVar5 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)(bVar17 & 1) * 0x4000 | (ulonglong)(bVar16 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
       (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
       (ulonglong)(bVar12 & 1) * 0x40 | (ulonglong)(bVar11 & 1) * 0x10 | (ulonglong)(bVar10 & 1) * 4
       | (ulonglong)(bVar9 & 1) | (ulonglong)(bVar21 & 1) * 0x200000 |
       (ulonglong)(bVar20 & 1) * 0x100000 | (ulonglong)(bVar19 & 1) * 0x80000 |
       (ulonglong)(bVar18 & 1) * 0x40000;
  *local_res18 = lVar5 + -0x817c251;
  local_res18[-2] = 0x14d92a1d9;
  FUN_162672fac();
  local_res18[-2] = *(undefined8 *)(unaff_R13 + -0x80);
  uVar2 = local_res18[-2];
  local_res18[-2] = param_1;
  local_res18[-2] = local_res18[-2];
  lVar6 = local_res18[-2];
  local_res18[-2] = uVar2;
  uVar7 = local_res18[-2];
  local_res18[-2] = CONCAT71(extraout_var,2);
  *(undefined4 *)(local_res18 + -2) = 0x3a7d962;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  lVar8 = local_res18[-2];
  puVar1 = (ulonglong *)((longlong)local_res18 + lVar8 + -0x3a7d972);
  *(int *)puVar1 = 0x18524ebe;
  *(int *)puVar1 = (int)*puVar1 + 0x2f5adaef;
  *(int *)puVar1 = (int)*puVar1 + 0x3751e07d;
  *(int *)((longlong)puVar1 + 4) = 0;
  uVar3 = *puVar1;
  lVar5 = *(longlong *)(unaff_R13 + -0x60);
  *puVar1 = (ulonglong)FUN_162e2b809;
  FUN_1628f37bc(CONCAT62((int6)((ulonglong)lVar6 >> 0x10),
                         ~(~unaff_DI &
                          ~(~((ushort)uVar2 & unaff_R15W) & ((ushort)uVar7 | unaff_R15W)))),
                lVar8 + -0x3a7d96a,0xffffffffffffffc0,-((uVar3 ^ 0x7eff0a2a) - lVar5));
  *puVar1 = (ulonglong)&DAT_15b45c64a;
  return;
}



// FUNCTION 14d92a25b thunk_FUN_14d92a261 body=5 status=ok
// SIG undefined thunk_FUN_14d92a261(void)

void thunk_FUN_14d92a261(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  longlong unaff_RSI;
  ushort *puVar1;
  undefined8 auStackX_10 [3];
  
  puVar1 = (ushort *)((longlong)auStackX_10 + unaff_RSI);
  *puVar1 = (-0x101 - (*puVar1 & 0x100 | 0xfeff)) + *puVar1;
  (*(code *)0x15b38fb25)(auStackX_10[0],param_2,0x15b38fb25,param_4);
  return;
}



// FUNCTION 14d92a261 FUN_14d92a261 body=130 status=ok
// SIG undefined FUN_14d92a261(void)

void FUN_14d92a261(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  ushort *puVar1;
  undefined8 local_res10 [3];
  
  puVar1 = (ushort *)((longlong)local_res10 + unaff_RSI);
  *puVar1 = (-0x101 - (*puVar1 & 0x100 | 0xfeff)) + *puVar1;
  (*(code *)0x15b38fb25)(local_res10[0],param_2,0x15b38fb25,param_4);
  return;
}



// FUNCTION 14d92a3fe FUN_14d92a3fe body=57 status=ok
// SIG undefined FUN_14d92a3fe(void)

void FUN_14d92a3fe(undefined8 param_1)

{
  undefined8 local_10;
  
  local_10 = CONCAT71((int7)((ulonglong)param_1 >> 8),0x6a);
  FUN_15742aeca(local_10 ^ 0x6b,0);
  FUN_165c7153c();
  return;
}



// FUNCTION 14d92a552 FUN_14d92a552 body=79 status=ok
// SIG undefined FUN_14d92a552(void)

void FUN_14d92a552(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined4 in_EAX;
  undefined8 uStackX_18;
  
  SegmentLimit(in_EAX);
  *(undefined8 *)(param_5 + param_1 + (param_5 & param_1) * -2 + -8) = 0x7c737aa;
  FUN_165c7153c(uStackX_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92a605 FUN_14d92a605 body=99 status=ok
// SIG undefined FUN_14d92a605(void)

undefined8 FUN_14d92a605(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d92a748 FUN_14d92a748 body=345 status=ok
// SIG undefined FUN_14d92a748(void)

/* WARNING: Removing unreachable block (ram,0x000161dfe231) */
/* WARNING: Removing unreachable block (ram,0x00014d92a7eb) */

void FUN_14d92a748(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) & in_RAX;
  FUN_15768110c(uVar1 * 2,*(ulonglong *)(unaff_R12 + -0x58) + in_RAX + uVar1 * -2,
                param_3 + in_RAX + (param_3 & in_RAX) * -2);
  FUN_1628fa843(*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,FUN_1628fa843,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14d92a953 FUN_14d92a953 body=35 status=ok
// SIG undefined FUN_14d92a953(void)

ulonglong FUN_14d92a953(void)

{
  ulonglong unaff_R15;
  
  return ~unaff_R15;
}



// FUNCTION 14d92aa6f FUN_14d92aa6f body=379 status=ok
// SIG undefined FUN_14d92aa6f(void)

/* WARNING: Removing unreachable block (ram,0x000156b9bd84) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd7e) */
/* WARNING: Removing unreachable block (ram,0x000156b9bd89) */
/* WARNING: Removing unreachable block (ram,0x00014d92abb4) */
/* WARNING: Removing unreachable block (ram,0x00014d92abba) */
/* WARNING: Removing unreachable block (ram,0x00014dadde74) */
/* WARNING: Removing unreachable block (ram,0x000166cb5ae5) */
/* WARNING: Removing unreachable block (ram,0x000166cb5aeb) */
/* WARNING: Removing unreachable block (ram,0x000166cb5af6) */
/* WARNING: Removing unreachable block (ram,0x000166cb5b89) */
/* WARNING: Removing unreachable block (ram,0x000166cb5b95) */
/* WARNING: Removing unreachable block (ram,0x000166cb5b90) */
/* WARNING: Removing unreachable block (ram,0x000166cb5b83) */
/* WARNING: Removing unreachable block (ram,0x000162c9107e) */

void FUN_14d92aa6f(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int *piVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R10;
  longlong lVar16;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined4 in_stack_00000008;
  undefined8 local_res10;
  ulonglong local_res18;
  
  *(undefined8 *)(&stack0x2835e3be + CONCAT44(0xffffffff,in_stack_00000008)) = unaff_RBP;
  lVar11 = FUN_15712c587();
  puVar1 = (ulonglong *)(lVar11 + -8);
  uVar15 = *(ulonglong *)(unaff_RSI + -0x60);
  *puVar1 = uVar15;
  uVar6 = *puVar1;
  *(ulonglong *)(lVar11 + -0x10) = uVar15;
  *(undefined4 *)(lVar11 + -0x10) = 0x25852bf;
  *(undefined4 *)(lVar11 + -0xc) = 0;
  lVar8 = *(longlong *)(lVar11 + -0x10);
  puVar2 = (ulonglong *)((longlong)puVar1 + lVar8 + -0x25852bf);
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852c7) = uVar15;
  *(undefined4 *)((longlong)puVar1 + lVar8 + -0x25852c7) = 0xbe6a7b16;
  *(undefined4 *)((longlong)puVar1 + lVar8 + -0x25852c3) = 0xffffffff;
  *puVar2 = *(ulonglong *)
             (unaff_RSI + *(longlong *)((longlong)puVar1 + lVar8 + -0x25852c7) + 0x419584aa);
  uVar13 = ~((~local_res18 | *puVar2) & (~*puVar2 | local_res18));
  *puVar2 = *(ulonglong *)(unaff_RSI + -0x70);
  uVar15 = ~(~*puVar2 & ~local_res18);
  uVar14 = *(ulonglong *)(unaff_RSI + -0x38);
  *puVar2 = ~(*puVar2 & local_res18) & uVar15;
  *(short *)((longlong)puVar1 + lVar8 + -0x25852c1) = (short)uVar15;
  *(short *)((longlong)puVar1 + lVar8 + -0x25852c3) = (short)unaff_RSI + -0x427a;
  uVar10 = *puVar2;
  uVar14 = uVar14 ^ local_res18;
  uVar7 = *(ulonglong *)(unaff_RSI + -0x58);
  *puVar2 = uVar6 ^ local_res18;
  uVar15 = *puVar2;
  *puVar2 = unaff_R14;
  uVar6 = *(ulonglong *)(unaff_RSI + -0x80);
  *puVar2 = uVar13;
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852c7) = uVar13;
  lVar11 = *(longlong *)(unaff_RSI + -0x88);
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852cf) = local_res10;
  plVar3 = (longlong *)((longlong)puVar1 + lVar8 + -0x25852d7);
  *(undefined4 *)plVar3 = 0xe5a9a70a;
  *(undefined4 *)((longlong)puVar1 + lVar8 + -0x25852d3) = 0xffffffff;
  lVar16 = *plVar3;
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852d7) = uVar6 ^ local_res18;
  lVar16 = lVar16 + 0x1a5658fe;
  lVar9 = *(longlong *)((longlong)puVar1 + lVar8 + -0x25852d7);
  *(undefined8 *)((longlong)puVar1 + lVar16 + lVar8 + -0x25852c7) = 0;
  plVar3 = (longlong *)((longlong)puVar1 + lVar16 + lVar8 + -0x25852c7);
  *plVar3 = *plVar3 + lVar11;
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852d7) = in_R10;
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852df) = uVar10;
  *(code **)((longlong)puVar1 + lVar8 + -0x25852e7) = FUN_14daddd59;
  uVar12 = FUN_156600ec0(uVar14,~(uVar7 & local_res18) & (uVar7 | local_res18),uVar15);
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df) = uVar12;
  *(longlong *)((longlong)puVar1 + lVar8 + -0x25852e7) = unaff_RSI;
  uVar15 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar6 = *(ulonglong *)(unaff_R13 + -0x30);
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df) = 0x14daddde8;
  uVar12 = FUN_161306bd0(lVar9 + unaff_RSI + (uVar14 & unaff_R15) * -2,
                         ~((~uVar15 & ~unaff_R15 | uVar15) & (~uVar15 | unaff_R15)));
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df) = uVar12;
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852e7) = uVar6 ^ unaff_R15;
  lVar16 = *(longlong *)((longlong)puVar1 + lVar8 + -0x25852e7);
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df) =
       *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df);
  *(longlong *)((longlong)puVar1 + lVar8 + -0x25852e7) = lVar16;
  lVar11 = *(longlong *)((longlong)puVar1 + lVar8 + -0x25852e7);
  plVar3 = (longlong *)((longlong)puVar1 + lVar8 + -0x25852e7);
  if (lVar16 - 0x1086U < 0xffffffffffffefa2) {
    FUN_156b9bceb();
    return;
  }
  *plVar3 = *(longlong *)(lVar16 + -0x28);
  *(undefined8 *)((longlong)puVar1 + lVar8 + -0x25852df) = *(undefined8 *)(lVar11 + -0x40);
  *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852df) =
       *(ulonglong *)((longlong)puVar1 + lVar8 + -0x25852df) ^ 0x40;
  *plVar3 = lVar11;
  uVar15 = *(ulonglong *)(*plVar3 + -0x38);
  *(undefined4 *)plVar3 = 0xbf9d0e40;
  *(undefined4 *)((longlong)puVar1 + lVar8 + -0x25852e3) = 0xdfc2a1a5;
  piVar4 = (int *)((longlong)puVar1 + lVar8 + -0x25852e3);
  *piVar4 = *piVar4 + 0x203d5e5a;
  *plVar3 = (longlong)FUN_165f10882;
  FUN_162668f7b(uVar15 ^ 0x40);
  puVar5 = (ushort *)((longlong)puVar1 + lVar8 + -0x25852d7);
  *puVar5 = *puVar5 & 0xfeff;
  *(undefined8 *)(*(longlong *)((longlong)puVar1 + lVar8 + -0x25852cf) + -8) = 0x15c76e;
  FUN_156c79161();
  return;
}



// FUNCTION 14d92aecc thunk_FUN_14d92aed3 body=5 status=ok
// SIG undefined thunk_FUN_14d92aed3(void)

void thunk_FUN_14d92aed3(void)

{
  byte in_CF;
  
  if ((in_CF & 1) == 0) {
    FUN_14dc8c9c6(FUN_14dc8c9c6);
    return;
  }
  return;
}



// FUNCTION 14d92aed3 FUN_14d92aed3 body=80 status=ok
// SIG undefined FUN_14d92aed3(void)

void FUN_14d92aed3(void)

{
  byte in_CF;
  
  if ((in_CF & 1) == 0) {
    FUN_14dc8c9c6(FUN_14dc8c9c6);
    return;
  }
  return;
}



// FUNCTION 14d92b069 FUN_14d92b069 body=148 status=ok
// SIG undefined FUN_14d92b069(void)

/* WARNING: Instruction at (ram,0x00014d92b15c) overlaps instruction at (ram,0x00014d92b15b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d92b15b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00014d92b179 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d92b069(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156914ac1(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  FUN_1629c40ce();
  return;
}



// FUNCTION 14d92b0fe FUN_14d92b0fe body=180 status=ok
// SIG undefined FUN_14d92b0fe(void)

/* WARNING: Instruction at (ram,0x00014d92b15c) overlaps instruction at (ram,0x00014d92b15b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d92b15b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d92b179 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d92b0fe(undefined8 param_1)

{
  uint in_stack_00000008;
  int in_stack_00000608;
  
  FUN_1629c40ce(param_1,-((in_stack_00000008 ^ 0x7339c1a4) - in_stack_00000608));
  return;
}



// FUNCTION 14d92b2d8 FUN_14d92b2d8 body=93 status=ok
// SIG undefined FUN_14d92b2d8(void)

void FUN_14d92b2d8(void)

{
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined1 **)(local_res20 + -8) = &LAB_14d92b34b;
  FUN_14d7c09a5();
  return;
}



// FUNCTION 14d92b40d FUN_14d92b40d body=29 status=ok
// SIG undefined FUN_14d92b40d(void)

void FUN_14d92b40d(void)

{
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0x28a6f0;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d92b551 FUN_14d92b551 body=152 status=ok
// SIG undefined FUN_14d92b551(void)

/* WARNING: Removing unreachable block (ram,0x00014d92b5eb) */

void FUN_14d92b551(void)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x98)) {
    FUN_1575e4ca5(unaff_retaddr,in_stack_00000008);
    return;
  }
  FUN_1575e4ca5(unaff_retaddr,in_stack_00000008);
  return;
}



// FUNCTION 14d92b5eb FUN_14d92b5eb body=154 status=ok
// SIG undefined FUN_14d92b5eb(void)

void FUN_14d92b5eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R14;
  undefined8 local_res8;
  
  FUN_15b61f571(param_1,local_res8,param_3);
  FUN_166bc61c7(param_1,local_res8 + unaff_R14 + (local_res8 & unaff_R14) * -2);
  return;
}



// FUNCTION 14d92b686 FUN_14d92b686 body=120 status=ok
// SIG undefined FUN_14d92b686(void)

void FUN_14d92b686(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R14;
  
  FUN_166bc61c7(param_1,param_2 + unaff_R14 + (param_2 & unaff_R14) * -2);
  return;
}



// FUNCTION 14d92b713 FUN_14d92b713 body=104 status=ok
// SIG undefined FUN_14d92b713(void)

void FUN_14d92b713(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  FUN_14d9a120a(*(undefined8 *)(uVar1 - 0x18),FUN_14d9a120a);
  return;
}



// FUNCTION 14d92b77b FUN_14d92b77b body=24 status=ok
// SIG undefined FUN_14d92b77b(void)

void FUN_14d92b77b(void)

{
  return;
}



// FUNCTION 14d92bd12 FUN_14d92bd12 body=153 status=ok
// SIG undefined FUN_14d92bd12(void)

void FUN_14d92bd12(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15725b5f4(param_1,FUN_15725b5f4,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                     (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14d92be7a FUN_14d92be7a body=109 status=ok
// SIG undefined FUN_14d92be7a(void)

void FUN_14d92be7a(void)

{
  (*(code *)&LAB_1575aebd4)();
  return;
}



// FUNCTION 14d92c000 FUN_14d92c000 body=467 status=ok
// SIG undefined FUN_14d92c000(void)

/* WARNING: Removing unreachable block (ram,0x00014de0939b) */
/* WARNING: Removing unreachable block (ram,0x00015b4a7996) */
/* WARNING: Removing unreachable block (ram,0x00014d92c09d) */
/* WARNING: Removing unreachable block (ram,0x00014d92c152) */
/* WARNING: Removing unreachable block (ram,0x00014d92c145) */
/* WARNING: Removing unreachable block (ram,0x00014d92c154) */
/* WARNING: Removing unreachable block (ram,0x00014d92c194) */
/* WARNING: Removing unreachable block (ram,0x00014d92c186) */

void FUN_14d92c000(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x88) != 0) {
    FUN_165d427f6();
    return;
  }
  if (*(longlong *)(unaff_RDI + -0x90) != 0) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
    pcVar2 = FUN_165d892a2;
    FUN_165d892a2();
    uVar1 = *(ulonglong *)(uVar1 + param_1 + (uVar1 & param_1) * -2 + -0x98);
    FUN_1566366ea((~(ulonglong)pcVar2 + uVar1) - (~(ulonglong)pcVar2 & uVar1) &
                  (~uVar1 | (ulonglong)pcVar2) ^ 0xffffffffffffffff);
    return;
  }
  FUN_15b4a7865();
  return;
}



// FUNCTION 14d92c241 FUN_14d92c241 body=77 status=ok
// SIG undefined FUN_14d92c241(void)

void FUN_14d92c241(undefined8 param_1)

{
  int unaff_EBP;
  undefined8 local_res8;
  
  FUN_14da21236(param_1,local_res8,unaff_EBP + 1);
  return;
}



// FUNCTION 14d92c3ce FUN_14d92c3ce body=117 status=ok
// SIG undefined FUN_14d92c3ce(void)

void FUN_14d92c3ce(undefined8 param_1)

{
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong auStackX_10 [3];
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
  auStackX_10[2] =
       ~(auStackX_10[2] & unaff_R15) & (*(ulonglong *)((longlong)auStackX_10 + in_R11) | unaff_R15)
       & 0xfffffffffffffeff;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RSI;
  *(undefined1 **)(in_stack_00000028 - 8) = &LAB_14d92c45f;
  thunk_FUN_15b642ca5(param_1,auStackX_10[0]);
  return;
}



// FUNCTION 14d92c533 FUN_14d92c533 body=220 status=ok
// SIG undefined FUN_14d92c533(void)

/* WARNING: Removing unreachable block (ram,0x00014d92c573) */
/* WARNING: Removing unreachable block (ram,0x00014d92c5b0) */

void FUN_14d92c533(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d7aa4b7(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d92c771 FUN_14d92c771 body=300 status=ok
// SIG undefined FUN_14d92c771(void)

void FUN_14d92c771(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  longlong *plVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_retaddr;
  ulonglong *in_stack_00000010;
  undefined8 local_res18;
  undefined8 uStackX_20;
  
  uVar2 = param_3 + (unaff_retaddr ^ 0x778bdad9);
  if (unaff_RBX == ~(~(uVar2 & 0xffffffff884a2f63) & (uVar2 | 0xffffffff884a2f63))) {
    FUN_165dc09fc();
    return;
  }
  if (unaff_RBX == 0x10630d) {
    FUN_16149593c();
    uVar2 = *in_stack_00000010;
    *in_stack_00000010 = -*in_stack_00000010;
    *in_stack_00000010 = *in_stack_00000010 - 1;
    *in_stack_00000010 = ~*in_stack_00000010;
    *in_stack_00000010 = *in_stack_00000010 & ~param_1;
    *in_stack_00000010 = *in_stack_00000010 ^ 0xffffffffffffffff;
    *in_stack_00000010 = ~((~param_1 | uVar2) & *in_stack_00000010);
    plVar1 = (longlong *)((param_7 ^ param_1) - 8);
    *plVar1 = unaff_RBP;
    *(longlong *)((param_7 ^ param_1) - 0x10) = *plVar1;
    *plVar1 = 0;
    *plVar1 = (longlong)(&LAB_14d972b07 + *plVar1);
    FUN_14d972ad9(param_5,uStackX_20,local_res18);
    return;
  }
  FUN_1616714d7();
  return;
}



// FUNCTION 14d92c9a7 FUN_14d92c9a7 body=177 status=ok
// SIG undefined FUN_14d92c9a7(void)

/* WARNING: Removing unreachable block (ram,0x00014d92ca4d) */
/* WARNING: Removing unreachable block (ram,0x00014d92ca53) */
/* WARNING: Removing unreachable block (ram,0x00014d92ca58) */
/* WARNING: Removing unreachable block (ram,0x00014d92caca) */

void FUN_14d92c9a7(void)

{
  FUN_1622342b4();
  return;
}



// FUNCTION 14d92ca58 FUN_14d92ca58 body=322 status=ok
// SIG undefined FUN_14d92ca58(void)

void FUN_14d92ca58(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong local_res10;
  char local_res18;
  
  param_5 = param_5 ^ in_RAX;
                    /* WARNING: Read-only address (ram,0x00014d7a97de) is written */
  LOCK();
  if (local_res18 == '\0') {
    uRam000000014d7a97de = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(param_5 - 8) = param_2;
  *(undefined8 *)(param_5 - 0x10) = param_2;
  *(undefined8 *)(param_5 - 0x18) = in_R10;
  *(undefined8 *)(param_5 - 0x20) = in_R10;
  *(undefined1 **)(param_5 - 0x18) = &LAB_15b0522c4;
  *(undefined8 *)(param_5 - 0x28) = 0x14d92caf4;
  FUN_15b0522b8();
  plVar1 = (longlong *)(param_5 - 0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + local_res10;
  *(longlong *)(param_5 - 0x20) = local_res10;
  *plVar1 = *(longlong *)(unaff_R12 + -0x68);
  *(undefined8 *)(param_5 - 0x20) = 0;
  *(ulonglong *)(param_5 - 0x20) = *(ulonglong *)(param_5 - 0x20) ^ param_3;
  *(ulonglong *)(param_5 - 0x28) = param_3;
  *(undefined8 *)(param_5 - 0x30) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x20) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)(param_5 - 0x28) = param_1;
  *(undefined8 *)(param_5 - 0x30) = param_1;
  *(undefined8 *)(param_5 - 0x28) = *(undefined8 *)(unaff_R12 + -0x98);
  uVar2 = *(undefined8 *)(param_5 - 0x30);
  *(undefined8 *)(param_5 - 0x30) = unaff_RBX;
  *(undefined8 *)(param_5 - 0x38) = unaff_RBX;
  *(undefined **)(param_5 - 0x30) = &DAT_16167e68e;
  FUN_16167e68b(uVar2);
  return;
}



// FUNCTION 14d92cc3a FUN_14d92cc3a body=149 status=ok
// SIG undefined FUN_14d92cc3a(void)

void FUN_14d92cc3a(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *in_R10;
  ulonglong in_R11;
  ulonglong unaff_R15;
  
  uVar1 = *in_R10;
  uVar2 = *in_R10;
  *in_R10 = *in_R10 ^ 0xffffffffffffffff;
  *in_R10 = *in_R10 | unaff_R15;
  *in_R10 = ~((in_R11 + uVar1) - (in_R11 & uVar2) & *in_R10);
  return;
}



// FUNCTION 14d92cdf6 FUN_14d92cdf6 body=128 status=ok
// SIG undefined FUN_14d92cdf6(void)

void FUN_14d92cdf6(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_160ed3d2e(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14d92cfb8 FUN_14d92cfb8 body=25 status=ok
// SIG undefined FUN_14d92cfb8(void)

void FUN_14d92cfb8(void)

{
  return;
}



// FUNCTION 14d92d05e FUN_14d92d05e body=35 status=ok
// SIG undefined FUN_14d92d05e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d92d05e(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined6 uVar6;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined2)param_2;
  cVar4 = (char)((uint)param_1 >> 8);
  in(uVar5);
  pcVar2 = (code *)swi(0xc4);
  (*pcVar2)();
  uVar3 = in(uVar5);
  pcVar1 = (char *)(CONCAT62(uVar6,uVar5) + (ulonglong)uVar3);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d92d21f FUN_14d92d21f body=157 status=ok
// SIG undefined FUN_14d92d21f(void)

void FUN_14d92d21f(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x60)) &
           (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  FUN_16584b592(uVar1,FUN_16584b592,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,uVar1);
  return;
}



// FUNCTION 14d92d2bd FUN_14d92d2bd body=283 status=ok
// SIG undefined FUN_14d92d2bd(void)

/* WARNING: Removing unreachable block (ram,0x00014d92d341) */

void FUN_14d92d2bd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_157840f48(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92d341 FUN_14d92d341 body=143 status=ok
// SIG undefined FUN_14d92d341(void)

void FUN_14d92d341(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_14dec2d8b(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d92d470 FUN_14d92d470 body=131 status=ok
// SIG undefined FUN_14d92d470(void)

void FUN_14d92d470(undefined8 param_1,undefined8 param_2)

{
  FUN_16491d44d(param_1,param_2,FUN_16491d44d);
  return;
}



// FUNCTION 14d92d4f9 FUN_14d92d4f9 body=162 status=ok
// SIG undefined FUN_14d92d4f9(void)

void FUN_14d92d4f9(void)

{
  longlong unaff_RBX;
  ulonglong in_R10;
  
  *(ulonglong *)(unaff_RBX + 8) =
       ~((~*(ulonglong *)(unaff_RBX + 8) | in_R10) + *(longlong *)(unaff_RBX + 8) + 1);
  return;
}



// FUNCTION 14d92d630 FUN_14d92d630 body=278 status=ok
// SIG undefined FUN_14d92d630(void)

/* WARNING: Removing unreachable block (ram,0x00014d92d6d5) */
/* WARNING: Removing unreachable block (ram,0x00014d92d710) */
/* WARNING: Removing unreachable block (ram,0x00014d92d6ca) */

undefined8 FUN_14d92d630(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_166d7da5b((char)param_1,0xffffffffffffff90,
                        ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                         (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
                        ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return uVar1;
}



// FUNCTION 14d92d75c FUN_14d92d75c body=251 status=ok
// SIG undefined FUN_14d92d75c(void)

/* WARNING: Removing unreachable block (ram,0x000161e1d648) */
/* WARNING: Removing unreachable block (ram,0x000161e1d64e) */
/* WARNING: Removing unreachable block (ram,0x000161e1d653) */
/* WARNING: Removing unreachable block (ram,0x00015b973150) */
/* WARNING: Removing unreachable block (ram,0x00015b97314a) */
/* WARNING: Removing unreachable block (ram,0x00015b973155) */
/* WARNING: Removing unreachable block (ram,0x00014d92d7f0) */
/* WARNING: Removing unreachable block (ram,0x000162d0ab05) */
/* WARNING: Removing unreachable block (ram,0x000162d0aa95) */
/* WARNING: Removing unreachable block (ram,0x000162d0aaff) */
/* WARNING: Removing unreachable block (ram,0x00015b64f7fa) */
/* WARNING: Removing unreachable block (ram,0x00015b9730ad) */
/* WARNING: Removing unreachable block (ram,0x000161e1d5b7) */
/* WARNING: Removing unreachable block (ram,0x000161e1d5be) */
/* WARNING: Removing unreachable block (ram,0x00015b64f8fc) */
/* WARNING: Removing unreachable block (ram,0x00015b64f907) */
/* WARNING: Removing unreachable block (ram,0x00015b64f902) */
/* WARNING: Removing unreachable block (ram,0x00015721a8dd) */
/* WARNING: Removing unreachable block (ram,0x00015b298fcc) */

void FUN_14d92d75c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  short *psVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong auStackX_10 [2];
  ulonglong local_res20;
  
  *(undefined8 *)((longlong)auStackX_10 + (unaff_retaddr ^ 0x31473b18)) = unaff_R14;
  uVar9 = auStackX_10[0];
  uVar14 = local_res20 ^ unaff_RBP;
  psVar10 = (short *)((-~unaff_RBP - (~param_5 + 2)) + (param_5 & unaff_RBP) * -2);
  local_res20._0_2_ = (ushort)uVar14;
  local_res20 = CONCAT62((int6)(uVar14 >> 0x10),((ushort)local_res20 | 0x100) - 0x100);
  *(undefined8 *)(psVar10 + -4) = unaff_R12;
  *(undefined8 *)(psVar10 + -8) = in_stack_00000008;
  *(undefined8 *)(psVar10 + -0xc) = in_stack_00000008;
  *(undefined8 *)(psVar10 + -0x10) = param_2;
  *(undefined8 *)(psVar10 + -8) = *(undefined8 *)(psVar10 + -4);
  uVar5 = *(undefined8 *)(psVar10 + -0x10);
  pcVar13 = FUN_15683a517;
  *(code **)(psVar10 + -0x10) = FUN_15b298f34;
  auStackX_10[0] = param_1;
  FUN_15683a517(param_1,uVar5,param_3,param_4);
  puVar1 = (ulonglong *)(psVar10 + -8);
  uVar14 = *puVar1;
  *puVar1 = param_1;
  uVar6 = *puVar1;
  *(ulonglong *)(psVar10 + -8) = -((longlong)pcVar13 - uVar14);
  uVar12 = *(ulonglong *)(psVar10 + -8);
  uVar15 = *(ulonglong *)(unaff_RDI + -0x60);
  *(ulonglong *)(psVar10 + -8) = uVar15;
  lVar7 = *(longlong *)(psVar10 + -8);
  uVar11 = (~uVar6 | *(ulonglong *)(unaff_RDI + -0x70)) &
           (~*(ulonglong *)(unaff_RDI + -0x70) | uVar6);
  if (-1 < (longlong)uVar11) {
    FUN_15721a850();
    return;
  }
  *(ulonglong *)(psVar10 + -8) = uVar6;
  uVar4 = *(ulonglong *)(psVar10 + -8);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  *(ulonglong *)(psVar10 + -8) = uVar2;
  uVar3 = *(ulonglong *)(psVar10 + -8);
  if ((~(*(ulonglong *)(unaff_RDI + -0x48) & uVar4) & (*(ulonglong *)(unaff_RDI + -0x48) | uVar4))
      == 0) {
    FUN_162d0a8bb();
    return;
  }
  *(undefined8 *)(psVar10 + -8) = unaff_R13;
  lVar8 = *(longlong *)(psVar10 + -8);
  *(ulonglong *)(psVar10 + -8) = uVar9;
  *(undefined1 **)(psVar10 + -0xc) = &LAB_15683a57c;
  *(undefined8 *)(psVar10 + -8) = *(undefined8 *)(psVar10 + -0xc);
  *(undefined8 *)(psVar10 + -0xc) = *(undefined8 *)(psVar10 + -0xc);
  *(ulonglong *)(psVar10 + -0x10) = ~(-((longlong)pcVar13 - uVar14) & uVar6) & (uVar12 | uVar6);
  psVar10[-0x18] = -0x56b8;
  psVar10[-0x17] = 0x62d0;
  psVar10[-0x16] = 1;
  psVar10[-0x15] = 0;
  FUN_1668d1500(uVar4,~(uVar2 & uVar4) & (uVar3 | uVar4),uVar11 ^ 0xffffffffffffffff,
                lVar7 + uVar6 + (uVar15 & uVar6) * -2);
  *(undefined8 *)(psVar10 + -0x18) = *(undefined8 *)(unaff_RDI + -0x80);
  if (*psVar10 < 0) {
    *(undefined8 *)(psVar10 + -0x18) = *(undefined8 *)(psVar10 + -0x18);
    psVar10[-0x18] = -1;
    psVar10[-0x17] = -1;
    psVar10[-0x16] = -0x4bc4;
    psVar10[-0x15] = -0x72d;
    *(int *)(psVar10 + -0x16) = *(int *)(psVar10 + -0x16) + 0x72c4bc3;
  }
  psVar10[-0x18] = -0x5611;
  psVar10[-0x17] = 0x62d0;
  psVar10[-0x16] = 1;
  psVar10[-0x15] = 0;
  FUN_166d3e682();
  uVar5 = *(undefined8 *)(lVar8 + -0x80);
  *(undefined8 *)(psVar10 + -0x18) = uVar5;
  *(undefined8 *)(psVar10 + -0x18) = uVar5;
  psVar10[-0x18] = 0x2354;
  psVar10[-0x17] = -0x4fb4;
  psVar10[-0x16] = -1;
  psVar10[-0x15] = -1;
  uVar14 = *(ulonglong *)(lVar8 + (*(ulonglong *)(psVar10 + -0x18) ^ 0x4fb3dc24));
  if ((longlong)(*(ulonglong *)(psVar10 + -0x18) ^ 0x4fb3dc24) < 0) {
    uVar12 = uVar14 | unaff_R15;
    uVar14 = uVar14 & unaff_R15;
    uVar15 = ~uVar14;
    *(ulonglong *)(psVar10 + -0x18) = (uVar14 - ~(uVar15 & uVar12)) + uVar15;
    *(ulonglong *)(psVar10 + -0x1c) = uVar12;
    psVar10[-0x1c] = -0x2d31;
    psVar10[-0x1b] = -0x3310;
    psVar10[-0x1a] = -1;
    psVar10[-0x19] = -1;
    uVar14 = *(ulonglong *)(psVar10 + -0x1c);
    psVar10[-0x1c] = 0x2cd1;
    psVar10[-0x1b] = 0x330f;
    psVar10[-0x1a] = 0;
    psVar10[-0x19] = 0;
    uVar12 = ~*(ulonglong *)(psVar10 + -0x1c);
    if (-uVar12 == ~uVar14 + 2) {
      *(ulonglong *)(psVar10 + -0x1c) = uVar12;
      *(ulonglong *)(psVar10 + -0x20) = uVar12;
      *(undefined1 **)(psVar10 + -0x1c) = &LAB_1664f111a;
      return;
    }
    FUN_16225a3f5();
    return;
  }
  FUN_1664f106d();
  return;
}



// FUNCTION 14d92d902 FUN_14d92d902 body=173 status=ok
// SIG undefined FUN_14d92d902(void)

undefined8 FUN_14d92d902(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  return *(undefined8 *)(param_3 + -0x38);
}



// FUNCTION 14d92dae2 FUN_14d92dae2 body=149 status=ok
// SIG undefined FUN_14d92dae2(void)

void FUN_14d92dae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1669503c1)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d92dbb8 FUN_14d92dbb8 body=91 status=ok
// SIG undefined FUN_14d92dbb8(void)

void FUN_14d92dbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 != 0xc9b84) {
    (*(code *)&LAB_165170059)(param_1,param_2,param_3);
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14d92dc03 thunk_FUN_14d92dc09 body=5 status=ok
// SIG undefined thunk_FUN_14d92dc09(void)

longlong thunk_FUN_14d92dc09(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14d92dc09 FUN_14d92dc09 body=132 status=ok
// SIG undefined FUN_14d92dc09(void)

longlong FUN_14d92dc09(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14d92dc8e FUN_14d92dc8e body=161 status=ok
// SIG undefined FUN_14d92dc8e(void)

void FUN_14d92dc8e(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong local_res8 [4];
  
  puVar1 = (ulonglong *)((longlong)local_res8 + param_2);
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & param_1;
  *puVar1 = (uVar3 + param_1) - *puVar1;
  *puVar1 = ~((~param_1 | uVar2) & *puVar1);
  param_5 = param_5 ^ param_1;
  local_res8[3] = (local_res8[3] ^ param_1) & 0xfffffffffffffeff;
  *(undefined8 *)(param_5 - 8) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x10) = unaff_R14;
  *(undefined8 *)(param_5 - 0x18) = unaff_R14;
  uVar4 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = unaff_R13;
  *(undefined8 *)(param_5 - 0x10) = uVar4;
  *(undefined8 *)(param_5 - 0x18) = param_4;
  *(undefined8 *)(param_5 - 0x20) = in_RAX;
  (*(code *)&LAB_15b61ca7b)(local_res8[2],local_res8[1],local_res8[0],&LAB_15b61ca7b);
  return;
}



// FUNCTION 14d92ddd1 FUN_14d92ddd1 body=126 status=ok
// SIG undefined FUN_14d92ddd1(void)

void FUN_14d92ddd1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
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
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong *local_res18;
  
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
  *local_res18 = param_3;
  local_res18[-1] = param_3;
  local_res18[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res18[-3] = uVar3;
  *(undefined4 *)(local_res18 + -3) = 0x2996e50e;
  *(undefined4 *)((longlong)local_res18 + -0x14) = 0;
  uVar2 = local_res18[-3];
  uVar17 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  uVar17 = local_res18[-2];
  local_res18[-2] = param_4;
  local_res18[-3] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  local_res18[-4] = unaff_RBX;
  *local_res18 = (uVar2 ^ 0x21a697c2) - 0x4a873b0;
  local_res18[-1] = local_res8;
  local_res18[-2] = local_res8;
  local_res18[-1] = (longlong)FUN_165c7153c;
  return;
}



// FUNCTION 14d92df0d FUN_14d92df0d body=111 status=ok
// SIG undefined FUN_14d92df0d(void)

/* WARNING: Removing unreachable block (ram,0x00014d92df6b) */

void FUN_14d92df0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_14dcd720d(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92df7c FUN_14d92df7c body=168 status=ok
// SIG undefined FUN_14d92df7c(void)

void FUN_14d92df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined1 **)(local_res10 + -0x28) = &LAB_16229bb1f;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  FUN_16229bae1(param_1,param_2,FUN_16229bae1,*(undefined8 *)(local_res10 + -0x28));
  return;
}



// FUNCTION 14d92e2a1 FUN_14d92e2a1 body=50 status=ok
// SIG undefined FUN_14d92e2a1(void)

void FUN_14d92e2a1(void)

{
  longlong *unaff_R12;
  longlong unaff_R15;
  
  *unaff_R12 = 0;
  *unaff_R12 = *unaff_R12 - unaff_R15;
  *unaff_R12 = -*unaff_R12;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d92e3f8 FUN_14d92e3f8 body=109 status=ok
// SIG undefined FUN_14d92e3f8(void)

void FUN_14d92e3f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  longlong alStackX_18 [2];
  
  alStackX_18[1] =
       param_1 - *(longlong *)
                  ((longlong)alStackX_18 +
                  (unaff_retaddr -
                  ~(~(unaff_R15 & 0xffffffffe52bd839) & (unaff_R15 | 0xffffffffe52bd839))));
  (*(code *)&LAB_15b46de66)(alStackX_18[0],&LAB_15b46de66,param_3);
  return;
}



// FUNCTION 14d92e509 FUN_14d92e509 body=172 status=ok
// SIG undefined FUN_14d92e509(void)

void FUN_14d92e509(void)

{
  return;
}



// FUNCTION 14d92e5c1 thunk_FUN_14d92e5c7 body=5 status=ok
// SIG undefined thunk_FUN_14d92e5c7(void)

void thunk_FUN_14d92e5c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  FUN_166611a14(FUN_166611a14,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92e5c7 FUN_14d92e5c7 body=137 status=ok
// SIG undefined FUN_14d92e5c7(void)

void FUN_14d92e5c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166611a14(FUN_166611a14,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92e79c FUN_14d92e79c body=117 status=ok
// SIG undefined FUN_14d92e79c(void)

void FUN_14d92e79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1658d9c1d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d92e811 FUN_14d92e811 body=298 status=ok
// SIG undefined FUN_14d92e811(void)

/* WARNING: Removing unreachable block (ram,0x00014d92e8b2) */
/* WARNING: Removing unreachable block (ram,0x00014d92e8b8) */

undefined8
FUN_14d92e811(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16654231c(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d92e98b FUN_14d92e98b body=198 status=ok
// SIG undefined FUN_14d92e98b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d92e98b(void)

{
  FUN_166df6e89();
  return _CurrentLocale;
}



// FUNCTION 14d92eab8 FUN_14d92eab8 body=149 status=ok
// SIG undefined FUN_14d92eab8(void)

void FUN_14d92eab8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160cf49cf(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~*(ulonglong *)(unaff_R13 + -0x28) | ~unaff_R15) ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14d92eb4e FUN_14d92eb4e body=200 status=ok
// SIG undefined FUN_14d92eb4e(void)

void FUN_14d92eb4e(void)

{
  return;
}



// FUNCTION 14d92ee11 FUN_14d92ee11 body=341 status=ok
// SIG undefined FUN_14d92ee11(void)

void FUN_14d92ee11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  uVar4 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x166942c07;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = 0;
  *(undefined4 *)(local_res10 + -0x20) = 0xacf82ac1;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = 0x14d92eea9;
  FUN_166942be2();
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90);
  *(undefined8 *)(local_res10 + -0x20) = 0;
  *(ulonglong *)(local_res10 + -0x20) = *(ulonglong *)(local_res10 + -0x20) ^ uVar2;
  uVar3 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined4 *)(local_res10 + -0x28) = 0x16ac64;
  *(undefined4 *)(local_res10 + -0x24) = 0;
  puVar1 = (undefined8 *)(local_res10 + *(longlong *)(local_res10 + -0x28) + -0x16ac7c);
  uVar5 = *puVar1;
  *puVar1 = param_2;
  puVar1[2] = uVar3;
  uVar3 = *puVar1;
  puVar1[1] = *(undefined8 *)(unaff_RDI + -8);
  *puVar1 = uVar4;
  puVar1[-1] = uVar4;
  puVar1[-2] = unaff_retaddr;
  puVar1[-2] = FUN_166942be2;
  FUN_1653ce194(param_1,uVar3,param_3,uVar5);
  return;
}



// FUNCTION 14d92ef68 FUN_14d92ef68 body=120 status=ok
// SIG undefined FUN_14d92ef68(void)

void FUN_14d92ef68(void)

{
  longlong unaff_retaddr;
  
  if (-1 < unaff_retaddr) {
    FUN_1656ac748();
    return;
  }
  (*(code *)&LAB_160febe03)();
  return;
}



// FUNCTION 14d92efe1 FUN_14d92efe1 body=308 status=ok
// SIG undefined FUN_14d92efe1(void)

void FUN_14d92efe1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x16173651a)
            (param_1,(param_1 - (*(ulonglong *)(unaff_RDI + -0x30) | param_1)) +
                     *(ulonglong *)(unaff_RDI + -0x30),0x16173651a,
             (*(ulonglong *)(unaff_RDI + -0x60) & param_1) << 1);
  return;
}



// FUNCTION 14d92f225 FUN_14d92f225 body=34 status=ok
// SIG undefined FUN_14d92f225(void)

void FUN_14d92f225(void)

{
  longlong in_RAX;
  
                    /* WARNING: Could not recover jumptable at 0x00014d92f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RAX + 0x20))();
  return;
}



// FUNCTION 14d92f4b4 FUN_14d92f4b4 body=249 status=ok
// SIG undefined FUN_14d92f4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d92f4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1568d7d8d(param_1,param_2,param_3,param_4);
  FUN_1622256ff();
  return;
}



// FUNCTION 14d92f5f3 FUN_14d92f5f3 body=287 status=ok
// SIG undefined FUN_14d92f5f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d92f687) */

void FUN_14d92f5f3(undefined8 param_1)

{
  (*(code *)&LAB_1668b0b4e)(param_1);
  return;
}



// FUNCTION 14d92f718 FUN_14d92f718 body=10 status=ok
// SIG undefined FUN_14d92f718(void)

void FUN_14d92f718(void)

{
  return;
}



// FUNCTION 14d92f7d9 FUN_14d92f7d9 body=280 status=ok
// SIG undefined FUN_14d92f7d9(void)

/* WARNING: Removing unreachable block (ram,0x00014d92f861) */

void FUN_14d92f7d9(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = (uVar1 + unaff_R15) - (uVar1 & unaff_R15);
  if (uVar2 == 0) {
    FUN_1615e5ca5();
    return;
  }
  FUN_15b3cfee1((~uVar1 | ~unaff_R15) & uVar2,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,
                unaff_RSI + unaff_R15 + (param_3 & unaff_R15) * -2);
  return;
}



// FUNCTION 14d92f9ad FUN_14d92f9ad body=458 status=ok
// SIG undefined FUN_14d92f9ad(void)

undefined8 FUN_14d92f9ad(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined2 in_R10W;
  undefined6 in_register_00000092;
  undefined8 in_R11;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(longlong *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = 0x5e77f9bb;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_156fc702c;
  puVar1 = (ulonglong *)(local_res18 + -0x18);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xffffffffa1880644;
  *puVar1 = ~(~(uVar2 & 0xffffffffa1880644) & *puVar1);
  uVar4 = *(undefined8 *)(local_res18 + -0x28);
  *(longlong *)(local_res18 + -0x18) = *(longlong *)(local_res18 + -0x18) - unaff_R14;
  *(longlong *)(local_res18 + -0x18) = -*(longlong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  uVar3 = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x28) = 0x14d92fa4f;
  uVar6 = FUN_156fc6fe4();
  *(undefined8 *)(local_res18 + -0x28) = uVar6;
  lVar7 = (~(unaff_RBP | uStackX_8) | unaff_RBP & uStackX_8 ^ 0xffffffffffffffff) +
          (unaff_RBP | uStackX_8) + 1;
  uVar6 = *(undefined8 *)(local_res18 + -0x28);
  uVar2 = *(ulonglong *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(unaff_R13 + -0x70);
  *(longlong *)(local_res18 + -0x28) = lVar7;
  *(longlong *)(local_res18 + -0x30) = lVar7;
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(unaff_R13 + -8);
  uVar5 = *(undefined8 *)(local_res18 + -0x30);
  *(undefined8 *)(local_res18 + -0x30) = uVar5;
  *(undefined8 *)(local_res18 + -0x38) = uVar5;
  *(undefined8 *)(local_res18 + -0x40) = uVar6;
  *(undefined8 *)(local_res18 + -0x48) = uVar4;
  uVar6 = *(undefined8 *)(local_res18 + -0x48);
  *(undefined8 *)(local_res18 + -0x30) = *(undefined8 *)(unaff_R13 + -0x98);
  uVar4 = *(undefined8 *)(local_res18 + -0x38);
  *(undefined8 *)(local_res18 + -0x38) = uVar4;
  *(undefined8 *)(local_res18 + -0x40) = uVar4;
  *(undefined8 *)(local_res18 + -0x48) = 0x14d92facb;
  uVar8 = FUN_166b12af2();
  *(longlong *)(local_res18 + -0x40) = unaff_R13;
  *(ulonglong *)(param_2 + 8) = ~uVar2;
  uVar5 = *(undefined8 *)(local_res18 + -0x30);
  *(code **)(local_res18 + -0x30) = FUN_166b12af2;
  *(undefined8 *)(local_res18 + -0x38) = param_3;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) = ~*(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) = *(ulonglong *)(local_res18 + -0x18) | uVar8;
  *(ulonglong *)(local_res18 + -0x18) = ~((~uVar8 | uVar2) & *(ulonglong *)(local_res18 + -0x18));
  uVar4 = *(undefined8 *)(local_res18 + -0x28);
  *(ulonglong *)(local_res18 + -0x28) = CONCAT62(in_register_00000092,in_R10W);
  *(undefined8 *)(local_res18 + -0x30) = uVar3;
  *(undefined8 *)(local_res18 + -0x38) = uVar5;
  *(undefined8 *)(local_res18 + -0x38) = uVar6;
  *(undefined8 *)(local_res18 + -0x40) = uVar6;
  *(undefined2 *)(local_res18 + -0x40) = 0x8085;
  *(undefined8 *)(local_res18 + -0x48) = uVar4;
  *(undefined8 *)(local_res18 + -0x50) = uVar4;
  *(undefined8 *)(local_res18 + -0x58) = uVar4;
  *(undefined **)(local_res18 + -0x48) = &DAT_14d92fb79;
  *(undefined1 **)(local_res18 + -0x50) = &LAB_160facbb5;
  return *(undefined8 *)(local_res18 + -0x58);
}



// FUNCTION 14d92fc1e FUN_14d92fc1e body=255 status=ok
// SIG undefined FUN_14d92fc1e(void)

void FUN_14d92fc1e(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  FUN_16692d08c(~*(ulonglong *)(unaff_R12 + -0x58),param_2,
                0xffffffffffffffff - (uVar1 & in_RAX) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1,
                *(ulonglong *)(unaff_R12 + unaff_RSI + 0x70902cb8) ^ in_RAX);
  return;
}



// FUNCTION 14d92fdd8 FUN_14d92fdd8 body=10 status=ok
// SIG undefined FUN_14d92fdd8(void)

void FUN_14d92fdd8(void)

{
  return;
}



// FUNCTION 14d92fed4 FUN_14d92fed4 body=190 status=ok
// SIG undefined FUN_14d92fed4(void)

void FUN_14d92fed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b326032(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9300ab FUN_14d9300ab body=144 status=ok
// SIG undefined FUN_14d9300ab(void)

void FUN_14d9300ab(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x166197239)
            (param_1,*(ulonglong *)(unaff_RDI + -0x70) + param_1,
             (*(ulonglong *)(unaff_RDI + -0x70) & param_1) << 1,
             *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d930147 FUN_14d930147 body=151 status=ok
// SIG undefined FUN_14d930147(void)

void FUN_14d930147(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_R14;
  undefined8 uStackX_18;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  uVar2 = *(ulonglong *)(unaff_RBP + 8);
  *(longlong *)(unaff_RBP + 8) = -*(longlong *)(unaff_RBP + 8);
  *(longlong *)(unaff_RBP + 8) = *(longlong *)(unaff_RBP + 8) + -1;
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | param_1;
  *(ulonglong *)(unaff_RBP + 8) = ~((~uVar1 & unaff_R14 | uVar2) & *(ulonglong *)(unaff_RBP + 8));
  FUN_166343708(uStackX_18);
  return;
}



// FUNCTION 14d930305 FUN_14d930305 body=744 status=ok
// SIG undefined FUN_14d930305(void)

/* WARNING: Control flow encountered bad instruction data */
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
/* WARNING: Removing unreachable block (ram,0x0001620d9834) */
/* WARNING: Removing unreachable block (ram,0x00014d930383) */
/* WARNING: Removing unreachable block (ram,0x00014d930389) */
/* WARNING: Removing unreachable block (ram,0x0001625cae00) */

void FUN_14d930305(undefined8 param_1)

{
  ulonglong unaff_RBX;
  undefined4 unaff_ESI;
  undefined8 local_res18;
  undefined4 local_res20;
  
  local_res18 = param_1;
  FUN_16623f38f(0xb9);
  *(undefined4 *)((longlong)&local_res18 + (~unaff_RBX ^ 0x2b206a1f)) = unaff_ESI;
  local_res18 = 0x5da49ef7;
  local_res20 = 0xb2971dc3;
  FUN_15659b9cd();
  return;
}



// FUNCTION 14d930602 FUN_14d930602 body=40 status=ok
// SIG undefined FUN_14d930602(void)

void FUN_14d930602(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7bee77(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9306bc FUN_14d9306bc body=76 status=ok
// SIG undefined FUN_14d9306bc(void)

void FUN_14d9306bc(void)

{
  ulonglong uVar1;
  undefined8 unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_retaddr;
  *(undefined8 *)(uVar1 - 8) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_14d93071b;
  thunk_FUN_15b642ca5(local_res10);
  return;
}



// FUNCTION 14d93076d FUN_14d93076d body=180 status=ok
// SIG undefined FUN_14d93076d(void)

void FUN_14d93076d(void)

{
  return;
}


