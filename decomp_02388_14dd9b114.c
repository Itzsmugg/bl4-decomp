// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd9b114 FUN_14dd9b114 body=914 status=ok
// SIG undefined FUN_14dd9b114(void)

/* WARNING: Removing unreachable block (ram,0x0001657bbd66) */
/* WARNING: Removing unreachable block (ram,0x00014e169aa5) */
/* WARNING: Removing unreachable block (ram,0x00014dd9b23c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9b114(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  FUN_1615825bb();
  uVar6 = ~(~(local_res20 ^ unaff_RBX) & ~unaff_R15);
  uVar2 = ~((~(local_res20 ^ unaff_RBX) | ~unaff_R15) ^ 0xffffffffffffffff);
  lVar5 = (uVar6 - (uVar2 | uVar6)) + uVar2;
  *(undefined8 *)(lVar5 + -8) = unaff_retaddr;
  puVar1 = (ulonglong *)(lVar5 + -0x10);
  *puVar1 = 0x16d5f3598;
  *puVar1 = *puVar1 - 0x70bc262;
  uVar2 = *puVar1;
  *(undefined8 *)(lVar5 + -0x10) = *(undefined8 *)(lVar5 + -8);
  *(undefined8 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(lVar5 + -8);
  *(ulonglong *)(lVar5 + -8) = *(ulonglong *)(lVar5 + -8) ^ uVar2;
  *(undefined8 *)(lVar5 + -0x18) = 0x14e16999b;
  uVar4 = FUN_166537312();
  *(undefined8 *)(lVar5 + -0x18) = uVar4;
  *(undefined8 *)(lVar5 + -0x20) = unaff_RSI;
  uVar6 = 0xfffffffffffffff8;
  lVar3 = *(longlong *)(param_2 + -0x88);
  *(longlong *)(lVar5 + -0x18) = lVar3;
  *(undefined8 *)(lVar5 + -0x20) = 0x14e169a30;
  FUN_1652582bb();
  *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar3 + -0x70);
  *(ulonglong *)(lVar5 + -0x20) = *(ulonglong *)(lVar5 + -0x20) | uVar6;
  uVar2 = *(ulonglong *)(lVar3 + -0x80);
  *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar5 + -0x20);
  *(ulonglong *)(lVar5 + -0x20) = uVar2 ^ uVar6;
  *(undefined8 *)(lVar5 + -0x28) = *(undefined8 *)(lVar3 + -0x48);
  *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar5 + -0x28);
  FUN_16690c24d();
  return;
}



// FUNCTION 14dd9b970 FUN_14dd9b970 body=144 status=ok
// SIG undefined FUN_14dd9b970(void)

undefined8 FUN_14dd9b970(undefined8 param_1)

{
  undefined8 in_RAX;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x13bcfecc + unaff_retaddr) = param_1;
  return in_RAX;
}



// FUNCTION 14dd9ba80 FUN_14dd9ba80 body=126 status=ok
// SIG undefined FUN_14dd9ba80(void)

void FUN_14dd9ba80(void)

{
  longlong *plVar1;
  undefined8 unaff_RDI;
  longlong in_R11;
  longlong unaff_R12;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) - in_R11;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  plVar1 = (longlong *)(local_res10 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined1 **)(local_res10 + -8) = &LAB_14da3af9a;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14dd9bb15 FUN_14dd9bb15 body=331 status=ok
// SIG undefined FUN_14dd9bb15(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9bc40) */

void FUN_14dd9bb15(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_161d4ed01(in_stack_00000010,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd9bea5 FUN_14dd9bea5 body=141 status=ok
// SIG undefined FUN_14dd9bea5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9bf23) */
/* WARNING: Removing unreachable block (ram,0x00014dd9bf2f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9bf34) */
/* WARNING: Removing unreachable block (ram,0x00014dd9bf76) */
/* WARNING: Removing unreachable block (ram,0x00014dd9bf71) */
/* WARNING: Removing unreachable block (ram,0x00014dd9bf8b) */

void FUN_14dd9bea5(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = ~*(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) | unaff_RBP;
  *(ulonglong *)(unaff_R14 + 0x10) =
       -1 - ((~unaff_RBX & ~uVar1 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R14 + 0x10));
  FUN_15ba044f0();
  return;
}



// FUNCTION 14dd9bf34 FUN_14dd9bf34 body=178 status=ok
// SIG undefined FUN_14dd9bf34(void)

void FUN_14dd9bf34(void)

{
  ulonglong in_RAX;
  ulonglong unaff_retaddr;
  
  FUN_1623f0b51(8,unaff_retaddr ^ in_RAX);
  return;
}



// FUNCTION 14dd9c01a FUN_14dd9c01a body=72 status=ok
// SIG undefined FUN_14dd9c01a(void)

void FUN_14dd9c01a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1611c96af(&DAT_ac91427a73ca2b2b,param_2,
                ~*(ulonglong *)(unaff_RDI + -0x78) & 0x536ebd858c35d4d4);
  return;
}



// FUNCTION 14dd9c062 FUN_14dd9c062 body=152 status=ok
// SIG undefined FUN_14dd9c062(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9c0ea) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c0fb) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c0f0) */
/* WARNING: Removing unreachable block (ram,0x000161bcda68) */
/* WARNING: Removing unreachable block (ram,0x000161bcdada) */
/* WARNING: Removing unreachable block (ram,0x000161bcdabe) */

void FUN_14dd9c062(void)

{
  return;
}



// FUNCTION 14dd9c0fb FUN_14dd9c0fb body=138 status=ok
// SIG undefined FUN_14dd9c0fb(void)

void FUN_14dd9c0fb(void)

{
  FUN_16165b2eb();
  return;
}



// FUNCTION 14dd9c21d FUN_14dd9c21d body=314 status=ok
// SIG undefined FUN_14dd9c21d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9c2b6) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c2bc) */

void FUN_14dd9c21d(void)

{
  int unaff_EDI;
  
  if (unaff_EDI < 0) {
    FUN_16271f43a();
    return;
  }
  FUN_16271f43a();
  return;
}



// FUNCTION 14dd9c350 FUN_14dd9c350 body=448 status=ok
// SIG undefined FUN_14dd9c350(void)

/* WARNING: Removing unreachable block (ram,0x000156a789e5) */
/* WARNING: Removing unreachable block (ram,0x000156a789eb) */
/* WARNING: Removing unreachable block (ram,0x00015754d48e) */
/* WARNING: Removing unreachable block (ram,0x00015754d52a) */
/* WARNING: Removing unreachable block (ram,0x00015754d530) */
/* WARNING: Removing unreachable block (ram,0x00015754d535) */
/* WARNING: Removing unreachable block (ram,0x000165fd0f72) */
/* WARNING: Removing unreachable block (ram,0x000165fd0f95) */
/* WARNING: Removing unreachable block (ram,0x000165fd0faf) */
/* WARNING: Removing unreachable block (ram,0x000165fd0ff7) */
/* WARNING: Removing unreachable block (ram,0x000165fd0ffa) */
/* WARNING: Removing unreachable block (ram,0x000165fd1010) */
/* WARNING: Removing unreachable block (ram,0x00016662a55a) */
/* WARNING: Removing unreachable block (ram,0x000156669044) */
/* WARNING: Removing unreachable block (ram,0x00016662a5f7) */
/* WARNING: Removing unreachable block (ram,0x00016662a5fd) */
/* WARNING: Removing unreachable block (ram,0x00016662a602) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c3dc) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c3e2) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c47c) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c487) */
/* WARNING: Removing unreachable block (ram,0x0001619cbc06) */
/* WARNING: Removing unreachable block (ram,0x0001652bbf78) */
/* WARNING: Removing unreachable block (ram,0x0001619cbd0b) */
/* WARNING: Removing unreachable block (ram,0x0001619cbd11) */
/* WARNING: Removing unreachable block (ram,0x0001619cbd16) */
/* WARNING: Removing unreachable block (ram,0x0001619cbd9f) */
/* WARNING: Removing unreachable block (ram,0x0001619cbda4) */
/* WARNING: Removing unreachable block (ram,0x0001619cbdaa) */
/* WARNING: Removing unreachable block (ram,0x00016294e1d0) */
/* WARNING: Removing unreachable block (ram,0x00016294e307) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c48d) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c509) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c514) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c553) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c50f) */
/* WARNING: Removing unreachable block (ram,0x000156a78954) */
/* WARNING: Removing unreachable block (ram,0x000156a789e0) */
/* WARNING: Removing unreachable block (ram,0x00016294e30c) */
/* WARNING: Removing unreachable block (ram,0x00016294e312) */
/* WARNING: Removing unreachable block (ram,0x00016294e317) */

undefined8 FUN_14dd9c350(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = (*(code *)0x16119114c)
                    (*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                     ~(~*(ulonglong *)(unaff_RSI + -0x38) | ~unaff_RBP) * -2,
                     *(ulonglong *)(unaff_RSI + -0x58) + unaff_RBP +
                     (*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) * -2);
  return uVar1;
}



// FUNCTION 14dd9c514 FUN_14dd9c514 body=62 status=ok
// SIG undefined FUN_14dd9c514(void)

longlong FUN_14dd9c514(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  ulonglong unaff_RBP;
  
  return in_RAX + param_2 + unaff_RBP + (in_RAX + param_2 & unaff_RBP) * -2;
}



// FUNCTION 14dd9c5c4 FUN_14dd9c5c4 body=175 status=ok
// SIG undefined FUN_14dd9c5c4(void)

void FUN_14dd9c5c4(void)

{
  FUN_156bee217();
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd9c7e9 FUN_14dd9c7e9 body=144 status=ok
// SIG undefined FUN_14dd9c7e9(void)

void FUN_14dd9c7e9(void)

{
  FUN_16576cb9d();
  return;
}



// FUNCTION 14dd9cb74 FUN_14dd9cb74 body=129 status=ok
// SIG undefined FUN_14dd9cb74(void)

void FUN_14dd9cb74(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | param_1;
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~((~(unaff_R14 & uVar1) + lVar2) - ~unaff_R14 & *(ulonglong *)(unaff_RDI + 0x10));
  *(undefined8 *)(param_5 + -8) = param_3;
  FUN_161d94857(local_res18,param_2,FUN_161d94857);
  return;
}



// FUNCTION 14dd9cbf7 FUN_14dd9cbf7 body=76 status=ok
// SIG undefined FUN_14dd9cbf7(void)

undefined8 FUN_14dd9cbf7(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong unaff_R14;
  undefined8 local_res18;
  longlong local_res20;
  
  lVar2 = in_RAX + param_1 + (in_RAX & param_1) * -2;
  *(undefined8 *)((longlong)&local_res20 + lVar2) = 0;
  plVar1 = (longlong *)((longlong)&local_res20 + lVar2);
  *plVar1 = *plVar1 + unaff_R14;
  return local_res18;
}



// FUNCTION 14dd9cc44 FUN_14dd9cc44 body=171 status=ok
// SIG undefined FUN_14dd9cc44(void)

void FUN_14dd9cc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R14;
  
  if (unaff_R14 != 0xfdd50) {
    FUN_161ba2616();
    return;
  }
  FUN_1574ba9da(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd9ce53 FUN_14dd9ce53 body=122 status=ok
// SIG undefined FUN_14dd9ce53(void)

void FUN_14dd9ce53(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_retaddr;
  undefined8 local_res20;
  
  uVar1 = *unaff_retaddr;
  *unaff_retaddr = ~*unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr | param_1;
  *unaff_retaddr = ~((0xfffffffffffffffe - ~-param_1 | uVar1) & *unaff_retaddr);
  FUN_166c18e56(local_res20);
  return;
}



// FUNCTION 14dd9cf67 FUN_14dd9cf67 body=147 status=ok
// SIG undefined FUN_14dd9cf67(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9cfc9) */

void FUN_14dd9cf67(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_14dfee984)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14dd9d08d FUN_14dd9d08d body=304 status=ok
// SIG undefined FUN_14dd9d08d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9d13e) */

void FUN_14dd9d08d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_14e169e73(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  FUN_16120d30f(param_1);
  return;
}



// FUNCTION 14dd9d1c1 FUN_14dd9d1c1 body=141 status=ok
// SIG undefined FUN_14dd9d1c1(void)

void FUN_14dd9d1c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_161df7b61(in_stack_00000008,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd9d334 FUN_14dd9d334 body=163 status=ok
// SIG undefined FUN_14dd9d334(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_14dd9d334(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -8);
  pcVar3 = FUN_15b9e4f3f;
  FUN_15b9e4f3f();
  uVar4 = uVar4 | unaff_RBX;
  uVar1 = FUN_161792543();
  uVar5 = (ulonglong)pcVar3 | uVar1;
  uVar1 = ~uVar5 | ~((ulonglong)pcVar3 & uVar1);
  if (!CARRY8(uVar1,uVar5)) {
    return &DAT_1619ecdbb;
  }
  if (CARRY8(uVar1,uVar5) || uVar1 + uVar5 == -1) {
    puVar2 = (undefined *)FUN_14dfe6d00();
    return puVar2;
  }
  puVar2 = (undefined *)FUN_1662bbdbd(FUN_1662bbdbd,unaff_RSI,unaff_retaddr,uVar4);
  return puVar2;
}



// FUNCTION 14dd9d3d8 FUN_14dd9d3d8 body=166 status=ok
// SIG undefined FUN_14dd9d3d8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined *
FUN_14dd9d3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res10;
  
  uVar3 = local_res10 | unaff_RBX;
  uVar1 = FUN_161792543();
  uVar4 = param_4 | uVar1;
  uVar1 = ~uVar4 | ~(param_4 & uVar1);
  if (!CARRY8(uVar1,uVar4)) {
    return &DAT_1619ecdbb;
  }
  if (CARRY8(uVar1,uVar4) || uVar1 + uVar4 == -1) {
    puVar2 = (undefined *)FUN_14dfe6d00();
    return puVar2;
  }
  puVar2 = (undefined *)FUN_1662bbdbd(FUN_1662bbdbd,unaff_RSI,param_3,uVar3);
  return puVar2;
}



// FUNCTION 14dd9d47f FUN_14dd9d47f body=162 status=ok
// SIG undefined FUN_14dd9d47f(void)

undefined * FUN_14dd9d47f(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000018;
  
  uVar4 = in_stack_00000018 | in_RAX;
  uVar2 = ~uVar4 | ~(in_stack_00000018 & in_RAX);
  lVar3 = uVar2 + uVar4 + 1;
  if (!CARRY8(uVar2,uVar4)) {
    return &DAT_1619ecdbb;
  }
  if (CARRY8(uVar2,uVar4) || lVar3 == 0) {
    puVar1 = (undefined *)FUN_14dfe6d00();
    return puVar1;
  }
  puVar1 = (undefined *)
           FUN_1662bbdbd(FUN_1662bbdbd,local_res8,param_3,param_4,
                         param_2 + in_RAX + (in_stack_00000010 & in_RAX) * -2,lVar3);
  return puVar1;
}



// FUNCTION 14dd9d521 FUN_14dd9d521 body=169 status=ok
// SIG undefined FUN_14dd9d521(void)

void FUN_14dd9d521(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1662bbdbd(FUN_1662bbdbd,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd9d649 thunk_FUN_14dd9d64f body=5 status=ok
// SIG undefined thunk_FUN_14dd9d64f(void)

void thunk_FUN_14dd9d64f(undefined8 param_1)

{
  FUN_165447854(param_1,FUN_165447854);
  return;
}



// FUNCTION 14dd9d64f FUN_14dd9d64f body=838 status=ok
// SIG undefined FUN_14dd9d64f(void)

void FUN_14dd9d64f(undefined8 param_1)

{
  FUN_165447854(param_1,FUN_165447854);
  return;
}



// FUNCTION 14dd9d76e FUN_14dd9d76e body=9 status=ok
// SIG undefined FUN_14dd9d76e(void)

void FUN_14dd9d76e(void)

{
  return;
}



// FUNCTION 14dd9d90b FUN_14dd9d90b body=309 status=ok
// SIG undefined FUN_14dd9d90b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9d998) */
/* WARNING: Removing unreachable block (ram,0x00014dd9d99e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9d90b(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(uVar2 - 8) = in_R10;
  *(undefined8 *)(uVar2 - 0x10) = param_1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x28) = 0x166bba686;
  FUN_166e003dc();
  *(undefined8 *)(uVar2 - 0x28) = *(undefined8 *)(unaff_RDI + -0x70);
  puVar1 = (undefined8 *)(uVar2 - 0x28);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x80);
  *(undefined8 *)(uVar2 - 0x30) = *puVar1;
  *(undefined4 *)(uVar2 - 0x30) = 0x7e04c854;
  *(undefined4 *)(uVar2 - 0x2c) = 0;
  *(undefined4 *)((longlong)puVar1 + ((*(ulonglong *)(uVar2 - 0x30) ^ 0x77eb36b0) - 0x9effee4)) =
       0x82344884;
  FUN_156a7ce9b();
  return;
}



// FUNCTION 14dd9da40 FUN_14dd9da40 body=25 status=ok
// SIG undefined FUN_14dd9da40(void)

void FUN_14dd9da40(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + unaff_RBP) = param_2;
  FUN_14d85d504(param_1,auStackX_10[1]);
  return;
}



// FUNCTION 14dd9dacf FUN_14dd9dacf body=62 status=ok
// SIG undefined FUN_14dd9dacf(void)

undefined8 FUN_14dd9dacf(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dd9dc01 FUN_14dd9dc01 body=119 status=ok
// SIG undefined FUN_14dd9dc01(void)

void FUN_14dd9dc01(undefined8 param_1)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong uVar2;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0x1144a6b2;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  uVar2 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res10 + -8) = lVar1 + -0xefe50e0;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd9dc8f FUN_14dd9dc8f body=190 status=ok
// SIG undefined FUN_14dd9dc8f(void)

void FUN_14dd9dc8f(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165f1d00e(param_1,param_2,param_3,param_4);
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd9ddba FUN_14dd9ddba body=336 status=ok
// SIG undefined FUN_14dd9ddba(void)

/* WARNING: Removing unreachable block (ram,0x00016274dcb7) */
/* WARNING: Removing unreachable block (ram,0x00016274dd55) */
/* WARNING: Removing unreachable block (ram,0x00016274dd61) */
/* WARNING: Removing unreachable block (ram,0x00016274dd6c) */
/* WARNING: Removing unreachable block (ram,0x00016274def9) */
/* WARNING: Removing unreachable block (ram,0x0001618c5895) */
/* WARNING: Removing unreachable block (ram,0x000165679389) */
/* WARNING: Removing unreachable block (ram,0x00016567938f) */
/* WARNING: Removing unreachable block (ram,0x000166d5ebcf) */
/* WARNING: Removing unreachable block (ram,0x00014dd9de5f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd9ddba(void)

{
  longlong unaff_R13;
  
  if (-1 < -*(longlong *)(unaff_R13 + -0x60)) {
    FUN_165679273();
    return;
  }
  FUN_156c64c01();
  FUN_16274dcb7();
  return;
}



// FUNCTION 14dd9df90 FUN_14dd9df90 body=161 status=ok
// SIG undefined FUN_14dd9df90(void)

void FUN_14dd9df90(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 in_R11;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  
  *unaff_R13 = ~((~*unaff_R13 | param_2) + *unaff_R13 + 1);
  lVar2 = param_5 + unaff_R15 + (param_5 & unaff_R15) * -2;
  puVar1 = (ulonglong *)(lVar2 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_4;
  *(undefined8 *)(lVar2 + -0x10) = in_R11;
  *(undefined8 *)(lVar2 + -0x18) = in_R11;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  FUN_15b2843b6(param_1,uStackX_10,param_3,&LAB_15b284422);
  return;
}



// FUNCTION 14dd9e0cc FUN_14dd9e0cc body=12 status=ok
// SIG undefined FUN_14dd9e0cc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd9e0cc(void)

{
  uint *puVar1;
  longlong in_RAX;
  
  puVar1 = (uint *)(in_RAX + -0x379e8b46);
  *puVar1 = *puVar1 >> 2 | *puVar1 << 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd9e228 FUN_14dd9e228 body=374 status=ok
// SIG undefined FUN_14dd9e228(void)

void FUN_14dd9e228(void)

{
  undefined1 auStack_210 [528];
  
  _fxsave(auStack_210);
  FUN_166c4baaf();
  FUN_165b11c44();
  return;
}



// FUNCTION 14dd9e4f3 FUN_14dd9e4f3 body=58 status=ok
// SIG undefined FUN_14dd9e4f3(void)

void FUN_14dd9e4f3(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | unaff_R15;
  *(ulonglong *)(unaff_R12 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_R12 + 8));
  return;
}



// FUNCTION 14dd9e581 FUN_14dd9e581 body=110 status=ok
// SIG undefined FUN_14dd9e581(void)

void FUN_14dd9e581(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_RDI;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,param_3);
  unaff_R12[-1] = unaff_RDI;
  unaff_R12[-2] = 0x2e6180a;
  *unaff_R12 = unaff_R12[-2];
  *(undefined8 *)((longlong)unaff_R12 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)unaff_R12 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)unaff_R12 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd9e5fa FUN_14dd9e5fa body=379 status=ok
// SIG undefined FUN_14dd9e5fa(void)

/* WARNING: Removing unreachable block (ram,0x00016669dab9) */
/* WARNING: Removing unreachable block (ram,0x00016669dabf) */
/* WARNING: Removing unreachable block (ram,0x00016669db37) */
/* WARNING: Removing unreachable block (ram,0x00016669db3c) */
/* WARNING: Removing unreachable block (ram,0x00016669db42) */
/* WARNING: Removing unreachable block (ram,0x00016669db47) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e6fa) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e700) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e76f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e775) */
/* WARNING: Removing unreachable block (ram,0x0001652f2313) */
/* WARNING: Removing unreachable block (ram,0x000165eea949) */
/* WARNING: Removing unreachable block (ram,0x000165eea9da) */
/* WARNING: Removing unreachable block (ram,0x000165eea9e0) */
/* WARNING: Removing unreachable block (ram,0x00014dd27161) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e678) */

void FUN_14dd9e5fa(void)

{
  if (&stack0x00000000 == (undefined1 *)0x0) {
    FUN_16669da56();
    return;
  }
  FUN_165eea949();
  return;
}



// FUNCTION 14dd9e775 FUN_14dd9e775 body=110 status=ok
// SIG undefined FUN_14dd9e775(void)

void FUN_14dd9e775(void)

{
  return;
}



// FUNCTION 14dd9ea2d FUN_14dd9ea2d body=272 status=ok
// SIG undefined FUN_14dd9ea2d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9eabf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9ea2d(undefined8 param_1,undefined8 param_2)

{
  FUN_162df7714(0x10,param_2);
  return;
}



// FUNCTION 14dd9eabf FUN_14dd9eabf body=53 status=ok
// SIG undefined FUN_14dd9eabf(void)

void FUN_14dd9eabf(void)

{
  return;
}



// FUNCTION 14dd9eb79 FUN_14dd9eb79 body=131 status=ok
// SIG undefined FUN_14dd9eb79(void)

void FUN_14dd9eb79(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  (*(code *)0x156a097f6)(0x156a097f6,~((~param_2 | unaff_RBP) + param_2 + 1));
  return;
}



// FUNCTION 14dd9ebfd FUN_14dd9ebfd body=266 status=ok
// SIG undefined FUN_14dd9ebfd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9ec90) */
/* WARNING: Removing unreachable block (ram,0x0001624cd5d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9ebfd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined8 unaff_RSI;
  longlong in_R11;
  longlong unaff_R13;
  
  *(ulonglong *)(in_R11 + 0x10) = ~*(ulonglong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = *(ulonglong *)(in_R11 + 0x10) | in_RAX ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R11 + 0x10) = ~*(ulonglong *)(in_R11 + 0x10);
  if (~((param_6 ^ 0xffffffffffffffff) & in_RAX) + in_RAX != ~(param_6 ^ 0xffffffffffffffff)) {
    FUN_1624cd4f6();
    return;
  }
  _DAT_ffffffffffffffd7 = 0x254a9be;
  _DAT_ffffffffffffffcf = 0x1624cd580;
  _DAT_ffffffffffffffdf = param_1;
  _DAT_ffffffffffffffe7 = param_2;
  _DAT_ffffffffffffffef = param_4;
  _DAT_fffffffffffffff7 = param_4;
  FUN_16621e9f8(FUN_16621e9f8,0xfffffffffffffff7,param_3,param_2);
  _DAT_ffffffffffffffcf = CONCAT44(extraout_var,0xabfa468);
  _DAT_ffffffffffffffc7 = unaff_RSI;
  FUN_1658c454a(0x62f21c30,FUN_1658c454a,*(undefined8 *)(unaff_R13 + -0x88));
  return;
}



// FUNCTION 14dd9ef27 FUN_14dd9ef27 body=435 status=ok
// SIG undefined FUN_14dd9ef27(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9efb0) */
/* WARNING: Removing unreachable block (ram,0x00014dd9efb6) */

void FUN_14dd9ef27(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_164f0882f(local_res8,unaff_retaddr,param_3,param_4,param_1);
  return;
}



// FUNCTION 14dd9f201 FUN_14dd9f201 body=161 status=ok
// SIG undefined FUN_14dd9f201(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9f336) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f342) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f34e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9f201(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  code *pcVar4;
  longlong unaff_R12;
  bool bVar5;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x28);
  pcVar4 = FUN_165e5cfc3;
  FUN_165e5cfc3();
  iVar1 = *(int *)(&stack0x00000008 + (longlong)pcVar4);
  *(undefined4 *)(&stack0x00000008 + (longlong)pcVar4) = 0;
  *(int *)(&stack0x00000008 + (longlong)pcVar4) =
       *(int *)(&stack0x00000008 + (longlong)pcVar4) + iVar1;
  *(int *)(&stack0x00000008 + (longlong)pcVar4) = -*(int *)(&stack0x00000008 + (longlong)pcVar4);
  bVar5 = true;
  uVar3 = 0xffffffffcc6b530d;
  FUN_162b39786();
  if (bVar5) {
    FUN_1574ba9da(uVar3);
    return;
  }
  if ((~(uVar2 & in_RAX) & (~((~in_RAX | uVar2) + in_RAX + 1) + in_RAX) - ~uVar2) != 0xdbf86) {
    return;
  }
  return;
}



// FUNCTION 14dd9f2a4 FUN_14dd9f2a4 body=346 status=ok
// SIG undefined FUN_14dd9f2a4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9f336) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f342) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f34e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd9f2a4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  bool bVar3;
  undefined1 uStack0000000000000120;
  
  iVar1 = *(int *)(&stack0x00000008 + param_2);
  *(undefined4 *)(&stack0x00000008 + param_2) = 0;
  *(int *)(&stack0x00000008 + param_2) = *(int *)(&stack0x00000008 + param_2) + iVar1;
  *(int *)(&stack0x00000008 + param_2) = -*(int *)(&stack0x00000008 + param_2);
  uStack0000000000000120 = 0x6e;
  bVar3 = true;
  uVar2 = 0xffffffffcc6b530d;
  FUN_162b39786();
  if (bVar3) {
    FUN_1574ba9da(uVar2);
    return;
  }
  if (unaff_RBX != 0xdbf86) {
    return;
  }
  return;
}



// FUNCTION 14dd9f574 FUN_14dd9f574 body=426 status=ok
// SIG undefined FUN_14dd9f574(void)

/* WARNING: Removing unreachable block (ram,0x00014de8e721) */
/* WARNING: Removing unreachable block (ram,0x00014de8e665) */
/* WARNING: Removing unreachable block (ram,0x00014de8e66b) */
/* WARNING: Removing unreachable block (ram,0x00014de8e71b) */
/* WARNING: Removing unreachable block (ram,0x000161cbc896) */
/* WARNING: Removing unreachable block (ram,0x000157324a6b) */
/* WARNING: Removing unreachable block (ram,0x00014de8e716) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f725) */
/* WARNING: Removing unreachable block (ram,0x000161402730) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f5de) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f62b) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f636) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f71a) */
/* WARNING: Removing unreachable block (ram,0x00014de8e5bc) */

undefined8 FUN_14dd9f574(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161402730();
  return uVar1;
}



// FUNCTION 14dd9f725 FUN_14dd9f725 body=141 status=ok
// SIG undefined FUN_14dd9f725(void)

void FUN_14dd9f725(void)

{
  return;
}



// FUNCTION 14dd9f7b6 FUN_14dd9f7b6 body=454 status=ok
// SIG undefined FUN_14dd9f7b6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9f8ce) */
/* WARNING: Removing unreachable block (ram,0x00014dd9f8d4) */

void FUN_14dd9f7b6(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165bba5a5();
  (*(code *)0x15741c167)
            (~*(ulonglong *)(unaff_R13 + -0x38) & ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38),
             param_2,~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) |
                     ~(~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
             ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) + unaff_R15 + 1 ^ 0xffffffffffffffff)
             & (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14dd9f8da FUN_14dd9f8da body=205 status=ok
// SIG undefined FUN_14dd9f8da(void)

void FUN_14dd9f8da(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14dadc59b(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dd9fa3d FUN_14dd9fa3d body=349 status=ok
// SIG undefined FUN_14dd9fa3d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9fb9a) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fad5) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fae0) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fb94) */
/* WARNING: Removing unreachable block (ram,0x0001610e3b8b) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fb8f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fadb) */

void FUN_14dd9fa3d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  ulonglong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 in_stack_00000020;
  longlong in_stack_00000038;
  
  *(ulonglong *)(unaff_RSI + 0x18) =
       ((~(in_R10 & *(ulonglong *)(unaff_RSI + 0x18)) + *(longlong *)(unaff_RSI + 0x18)) - ~in_R10)
       + in_RAX + 1;
  param_3 = 0xffffffffffffffffU - in_stack_00000038 & param_3;
  *(undefined8 *)(param_3 - 8) = unaff_R13;
  *(undefined8 *)(param_3 - 0x10) = unaff_R14;
  *(undefined8 *)(param_3 - 0x18) = unaff_R14;
  *(undefined8 *)(param_3 - 0x20) = unaff_RBX;
  FUN_1616bc40e(param_1,local_res8,in_stack_00000020);
  return;
}



// FUNCTION 14dd9fc1e FUN_14dd9fc1e body=301 status=ok
// SIG undefined FUN_14dd9fc1e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9fce0) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fcb4) */
/* WARNING: Removing unreachable block (ram,0x000162f09ce4) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fd38) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fd3e) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fca8) */
/* WARNING: Removing unreachable block (ram,0x00014de76ce7) */
/* WARNING: Removing unreachable block (ram,0x00014dd9fd43) */

void FUN_14dd9fc1e(void)

{
  FUN_14de76ce7();
  return;
}



// FUNCTION 14dd9ff8a FUN_14dd9ff8a body=293 status=ok
// SIG undefined FUN_14dd9ff8a(void)

/* WARNING: Removing unreachable block (ram,0x00014dda0015) */
/* WARNING: Removing unreachable block (ram,0x00014dda0026) */
/* WARNING: Removing unreachable block (ram,0x00014dda0021) */

void FUN_14dd9ff8a(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_15b7c936f((~(uVar1 | unaff_R15) | ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1)) +
                (uVar1 | unaff_R15),FUN_15b7c936f,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dda00b3 thunk_FUN_14dda00b9 body=5 status=ok
// SIG undefined thunk_FUN_14dda00b9(void)

void thunk_FUN_14dda00b9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16240e0d2(param_1,0xffffffffffffff90,
                (param_1 - (*(ulonglong *)(unaff_RDI + -0x70) | param_1)) +
                *(ulonglong *)(unaff_RDI + -0x70),*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dda00b9 FUN_14dda00b9 body=133 status=ok
// SIG undefined FUN_14dda00b9(void)

void FUN_14dda00b9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16240e0d2(param_1,0xffffffffffffff90,
                (param_1 - (*(ulonglong *)(unaff_RDI + -0x70) | param_1)) +
                *(ulonglong *)(unaff_RDI + -0x70),*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dda03ce FUN_14dda03ce body=145 status=ok
// SIG undefined FUN_14dda03ce(void)

undefined8 FUN_14dda03ce(void)

{
  ulonglong in_RAX;
  undefined8 unaff_R14;
  undefined8 local_res10;
  ulonglong local_res20;
  
  *(undefined8 *)((local_res20 ^ in_RAX) - 8) = unaff_R14;
  *(undefined **)((local_res20 ^ in_RAX) - 0x10) = &DAT_165583534;
  return local_res10;
}



// FUNCTION 14dda0465 FUN_14dda0465 body=7 status=ok
// SIG undefined FUN_14dda0465(void)

void FUN_14dda0465(void)

{
  return;
}



// FUNCTION 14dda046d FUN_14dda046d body=491 status=ok
// SIG undefined FUN_14dda046d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7b90e) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b914) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ba47) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ba4c) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ba52) */
/* WARNING: Removing unreachable block (ram,0x000166b80217) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ba93) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ba97) */
/* WARNING: Removing unreachable block (ram,0x00015733e549) */
/* WARNING: Removing unreachable block (ram,0x00015733e4ad) */
/* WARNING: Removing unreachable block (ram,0x00015733e53e) */
/* WARNING: Removing unreachable block (ram,0x00015733e543) */
/* WARNING: Removing unreachable block (ram,0x000161d8224a) */
/* WARNING: Removing unreachable block (ram,0x00014dda050b) */
/* WARNING: Removing unreachable block (ram,0x00016525b884) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dda046d(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x11bafd) {
    return in_RAX;
  }
  if (unaff_RSI == 0x11bafe) {
    uVar1 = thunk_FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x11bb67) {
    return in_RAX;
  }
  if (unaff_RSI != 0x11bb68) {
    if (unaff_RSI != 0x11bb69) {
      FUN_1566cc674();
      FUN_1660c558f();
      uVar1 = FUN_15789eba8();
      return uVar1;
    }
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  uVar1 = FUN_14dd7b7ef();
  return uVar1;
}



// FUNCTION 14dda0667 FUN_14dda0667 body=69 status=ok
// SIG undefined FUN_14dda0667(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dda06a9) overlaps instruction at (ram,0x00014dda06a8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dda06a8) */
/* WARNING: Removing unreachable block (ram,0x00014dda082a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dda0667(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar5;
  undefined8 in_R10;
  uint uVar6;
  longlong unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar7;
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
  ulonglong uVar21;
  uint unaff_retaddr;
  longlong in_stack_00000008;
  ulonglong uStackX_10;
  longlong *plStackX_18;
  
  uVar5 = unaff_EDI & 0xfff;
  uVar6 = (~(~unaff_retaddr & uVar5) + uVar5) - unaff_retaddr;
  uVar4 = (ulonglong)uVar6;
  uVar7 = (ulonglong)(~(~(uVar5 ^ 0xffffffff | unaff_retaddr) | ~uVar6) ^ 0xffffffff);
  (*(code *)0x14dbc8d19)();
  uVar21 = *(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = *(ulonglong *)(unaff_R13 + 0x10) | uVar7;
  *(ulonglong *)(unaff_R13 + 0x10) = -1 - ((~uVar7 | uVar21) & *(ulonglong *)(unaff_R13 + 0x10));
  uStackX_10 = uStackX_10 ^ 0xffff;
  (*(code *)0x165e0ea6e)();
  *(undefined8 *)(&stack0x00000000 + in_stack_00000008) = 0;
  *(ulonglong *)(&stack0x00000000 + in_stack_00000008) =
       *(longlong *)(&stack0x00000000 + in_stack_00000008) + uVar4;
  bVar16 = (uStackX_10 & 0x4000) != 0;
  bVar15 = (uStackX_10 & 0x800) != 0;
  bVar14 = (uStackX_10 & 0x200) != 0;
  bVar13 = (uStackX_10 & 0x100) != 0;
  bVar12 = (uStackX_10 & 0x80) != 0;
  bVar11 = (uStackX_10 & 0x40) != 0;
  bVar10 = (uStackX_10 & 0x10) != 0;
  bVar9 = (uStackX_10 & 4) != 0;
  bVar8 = (uStackX_10 & 1) != 0;
  bVar20 = (uStackX_10 & 0x200000) != 0;
  bVar17 = (uStackX_10 & 0x40000) != 0;
  bVar19 = 0;
  bVar18 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)(unaff_RSI);
  *plStackX_18 = unaff_RBP;
  plStackX_18[-1] = unaff_RBP;
  plStackX_18[-2] = uVar3;
  *(undefined4 *)(plStackX_18 + -2) = 0xc965f2d;
  plStackX_18[-3] = unaff_R15;
  plStackX_18[-4] =
       (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)(bVar15 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar14 & 1) * 0x200 |
       (ulonglong)(bVar13 & 1) * 0x100 | (ulonglong)(bVar12 & 1) * 0x80 |
       (ulonglong)(bVar11 & 1) * 0x40 | (ulonglong)(bVar10 & 1) * 0x10 | (ulonglong)(bVar9 & 1) * 4
       | (ulonglong)(bVar8 & 1) | (ulonglong)(bVar20 & 1) * 0x200000 |
       (ulonglong)(bVar19 & 1) * 0x100000 | (ulonglong)(bVar18 & 1) * 0x80000 |
       (ulonglong)(bVar17 & 1) * 0x40000;
  *(undefined4 *)((longlong)plStackX_18 + -0xc) = 0;
  uVar21 = plStackX_18[-4];
  lVar2 = plStackX_18[-2];
  plStackX_18[-2] =
       (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar21 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar21 & 0x400) != 0) * 0x400 | (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)((uVar21 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar21 & 0x40) != 0) * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar21 & 4) != 0) * 4 | (ulonglong)((uVar21 & 1) != 0) |
       (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  plStackX_18[-3] = in_R10;
  plStackX_18[-2] = uVar3;
  *plStackX_18 = lVar2 + -0x7e82763;
  uVar3 = plStackX_18[-2];
  plStackX_18[-2] = 0x15b47d31d;
  return uVar3;
}



// FUNCTION 14dda078a FUN_14dda078a body=315 status=ok
// SIG undefined FUN_14dda078a(void)

/* WARNING: Removing unreachable block (ram,0x00014dda082a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dda078a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R15;
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
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  longlong *plStackX_20;
  
  *(undefined8 *)(&stack0x00000008 + unaff_R15) = 0;
  *(longlong *)(&stack0x00000008 + unaff_R15) =
       *(longlong *)(&stack0x00000008 + unaff_R15) + param_1;
  bVar12 = (local_res18 & 0x4000) != 0;
  bVar11 = (local_res18 & 0x800) != 0;
  bVar10 = (local_res18 & 0x200) != 0;
  bVar9 = (local_res18 & 0x100) != 0;
  bVar8 = (local_res18 & 0x80) != 0;
  bVar7 = (local_res18 & 0x40) != 0;
  bVar6 = (local_res18 & 0x10) != 0;
  bVar5 = (local_res18 & 4) != 0;
  bVar4 = (local_res18 & 1) != 0;
  bVar16 = (local_res18 & 0x200000) != 0;
  bVar13 = (local_res18 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)(in_stack_00000008,param_2,param_3,unaff_retaddr);
  *plStackX_20 = unaff_RBP;
  plStackX_20[-1] = unaff_RBP;
  plStackX_20[-2] = uVar3;
  *(undefined4 *)(plStackX_20 + -2) = 0xc965f2d;
  plStackX_20[-3] = unaff_RDI;
  plStackX_20[-4] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  *(undefined4 *)((longlong)plStackX_20 + -0xc) = 0;
  uVar17 = plStackX_20[-4];
  lVar2 = plStackX_20[-2];
  plStackX_20[-2] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  plStackX_20[-3] = in_R10;
  plStackX_20[-2] = uVar3;
  *plStackX_20 = lVar2 + -0x7e82763;
  uVar3 = plStackX_20[-2];
  plStackX_20[-2] = 0x15b47d31d;
  return uVar3;
}



// FUNCTION 14dda08c6 FUN_14dda08c6 body=442 status=ok
// SIG undefined FUN_14dda08c6(void)

/* WARNING: Removing unreachable block (ram,0x00014dda0a02) */
/* WARNING: Removing unreachable block (ram,0x00014dda0ac3) */

void FUN_14dda08c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  
  uVar1 = *(ulonglong *)
           (&stack0x00000008 + ~(~(in_RAX & 0xffffffffffbf1f24) & (in_RAX | 0xffffffffffbf1f24)));
  FUN_161b0470c();
  *(undefined8 *)((longlong)&stack0x00000028 + ~((~unaff_RBP | uVar1) + unaff_RBP + 1)) = unaff_RBX;
  param_5 = param_3;
  FUN_1668144b8();
  return;
}



// FUNCTION 14dda0a02 FUN_14dda0a02 body=304 status=ok
// SIG undefined FUN_14dda0a02(void)

void FUN_14dda0a02(undefined8 param_1)

{
  FUN_1577f4d5a();
  FUN_14d951461(param_1,FUN_14d951461,0);
  return;
}



// FUNCTION 14dda0b3a FUN_14dda0b3a body=297 status=ok
// SIG undefined FUN_14dda0b3a(void)

/* WARNING: Removing unreachable block (ram,0x00015b325c55) */
/* WARNING: Removing unreachable block (ram,0x00015b325c5b) */
/* WARNING: Removing unreachable block (ram,0x00014dda0c5a) */
/* WARNING: Removing unreachable block (ram,0x00014dda0c60) */
/* WARNING: Removing unreachable block (ram,0x00014dda0c65) */

void FUN_14dda0b3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_15738ee1f(unaff_retaddr,param_2,param_3,local_res8);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x38);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x40);
  FUN_166b0ffee();
  *(ulonglong *)
   (&stack0x00000000 +
   ~(((ulonglong)(&DAT_ac91427a73ca2b2b + (uVar1 - (uVar1 | 0xac91427a73ca2b2b))) ^
     0xffffffffffffffff) & ~((uVar1 | 0xac91427a73ca2b2b) ^ 0xffffffffffffffff) ^ 0xffffffffffffffff
    )) = uVar2 ^ 0xac91427a73ca2b2b;
  return;
}



// FUNCTION 14dda0c65 FUN_14dda0c65 body=58 status=ok
// SIG undefined FUN_14dda0c65(void)

void FUN_14dda0c65(void)

{
  return;
}



// FUNCTION 14dda0c9f FUN_14dda0c9f body=271 status=ok
// SIG undefined FUN_14dda0c9f(void)

/* WARNING: Removing unreachable block (ram,0x00014dda0d10) */
/* WARNING: Removing unreachable block (ram,0x00014dda0d16) */
/* WARNING: Removing unreachable block (ram,0x00014dcfd284) */

undefined8 FUN_14dda0c9f(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R14;
  
  if (unaff_R14 == 0xe3c3b) {
    return in_RAX;
  }
  if (unaff_R14 == 0xe3c3c) {
    uVar1 = FUN_14dcfd284();
    return uVar1;
  }
  uVar1 = FUN_14dcfd2a4();
  return uVar1;
}



// FUNCTION 14dda0efe FUN_14dda0efe body=310 status=ok
// SIG undefined FUN_14dda0efe(void)

/* WARNING: Removing unreachable block (ram,0x00014dda0f98) */
/* WARNING: Removing unreachable block (ram,0x00014dda0f9e) */

void FUN_14dda0efe(undefined8 param_1,undefined8 param_2)

{
  FUN_1622f26ec(param_1,param_2,FUN_1622f26ec);
  return;
}



// FUNCTION 14dda0fa4 FUN_14dda0fa4 body=191 status=ok
// SIG undefined FUN_14dda0fa4(void)

void FUN_14dda0fa4(void)

{
  return;
}



// FUNCTION 14dda1064 FUN_14dda1064 body=58 status=ok
// SIG undefined FUN_14dda1064(void)

void FUN_14dda1064(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dda12b5 FUN_14dda12b5 body=264 status=ok
// SIG undefined FUN_14dda12b5(void)

/* WARNING: Removing unreachable block (ram,0x00014e1eb8ae) */
/* WARNING: Removing unreachable block (ram,0x00014dda1342) */

void FUN_14dda12b5(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  if ((longlong)
      ((unaff_R15 - ((unaff_retaddr ^ 0x79b4cda7) - param_2)) + (param_2 & unaff_R15) * -2) < 0) {
    FUN_16147fdd4(param_1,0x44fb877);
    return;
  }
  FUN_14e1eb818();
  return;
}



// FUNCTION 14dda1451 FUN_14dda1451 body=186 status=ok
// SIG undefined FUN_14dda1451(void)

/* WARNING: Removing unreachable block (ram,0x00014dda1501) */
/* WARNING: Removing unreachable block (ram,0x00014dda1507) */
/* WARNING: Removing unreachable block (ram,0x00014dda150c) */

void FUN_14dda1451(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15721d90f(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dda150c FUN_14dda150c body=199 status=ok
// SIG undefined FUN_14dda150c(void)

void FUN_14dda150c(void)

{
  return;
}



// FUNCTION 14dda15dc FUN_14dda15dc body=148 status=ok
// SIG undefined FUN_14dda15dc(void)

/* WARNING: Removing unreachable block (ram,0x00014dda1671) */

void FUN_14dda15dc(void)

{
  ulonglong uVar1;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 + 1;
  if (-1 < (longlong)uVar1) {
    FUN_1614e37c6(~uVar1 & (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
                    /* WARNING: Could not recover jumptable at 0x000160d3d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_R11 + 0x48))();
    return;
  }
  thunk_FUN_160d3cfa5();
  return;
}



// FUNCTION 14dda1671 FUN_14dda1671 body=138 status=ok
// SIG undefined FUN_14dda1671(void)

void FUN_14dda1671(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_165272355(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dda1774 FUN_14dda1774 body=127 status=ok
// SIG undefined FUN_14dda1774(void)

void FUN_14dda1774(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_R10;
  undefined8 unaff_R13;
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
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  bVar12 = (local_res8 & 0x4000) != 0;
  bVar11 = (local_res8 & 0x800) != 0;
  bVar10 = (local_res8 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (local_res8 & 0x80) != 0;
  bVar7 = (local_res8 & 0x40) != 0;
  bVar6 = (local_res8 & 0x10) != 0;
  bVar5 = (local_res8 & 4) != 0;
  bVar4 = (local_res8 & 1) != 0;
  bVar16 = (uStackX_a & 0x20) != 0;
  bVar13 = (uStackX_a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)(unaff_retaddr);
  *local_res10 = unaff_R14;
  local_res10[-1] = unaff_R14;
  local_res10[-2] = uVar3;
  *(undefined4 *)(local_res10 + -2) = 0x12e974d4;
  local_res10[-3] = in_R10;
  *(undefined4 *)(local_res10 + -4) = 0;
  *(undefined4 *)((longlong)local_res10 + -0xc) = *(undefined4 *)(local_res10 + -4);
  uVar2 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res10[-3] = uVar2;
  local_res10[-3] = local_res10[-3] + -0xb8152ee;
  local_res10[-2] = uVar3;
  local_res10[-3] = unaff_R13;
  local_res10[-4] = unaff_R13;
  local_res10[-3] = &LAB_14dda17f4;
  return;
}



// FUNCTION 14dda1b75 FUN_14dda1b75 body=167 status=ok
// SIG undefined FUN_14dda1b75(void)

void FUN_14dda1b75(void)

{
  undefined8 local_res18;
  
  FUN_14dde4a98(local_res18);
  return;
}



// FUNCTION 14dda1c1d FUN_14dda1c1d body=263 status=ok
// SIG undefined FUN_14dda1c1d(void)

/* WARNING: Removing unreachable block (ram,0x00014dda1cab) */
/* WARNING: Removing unreachable block (ram,0x00014dda1cb1) */

undefined8 FUN_14dda1c1d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dda1d2c FUN_14dda1d2c body=193 status=ok
// SIG undefined FUN_14dda1d2c(void)

void FUN_14dda1d2c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x157510196)(param_1,param_2);
  return;
}



// FUNCTION 14dda1fc0 FUN_14dda1fc0 body=144 status=ok
// SIG undefined FUN_14dda1fc0(void)

void FUN_14dda1fc0(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x14df66511)
            (param_1,*(undefined8 *)(unaff_RDI + -0x60),*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14dda2052 FUN_14dda2052 body=139 status=ok
// SIG undefined FUN_14dda2052(void)

void FUN_14dda2052(void)

{
  (*(code *)0x1651b21ea)(0x1651b21ea);
  return;
}



// FUNCTION 14dda20dd FUN_14dda20dd body=313 status=ok
// SIG undefined FUN_14dda20dd(void)

/* WARNING: Removing unreachable block (ram,0x0001655b7bb0) */
/* WARNING: Removing unreachable block (ram,0x00015679a520) */
/* WARNING: Removing unreachable block (ram,0x00015679a526) */
/* WARNING: Removing unreachable block (ram,0x00015679a5c6) */
/* WARNING: Removing unreachable block (ram,0x0001669bc9ff) */
/* WARNING: Removing unreachable block (ram,0x000162c37b3f) */
/* WARNING: Removing unreachable block (ram,0x00014dda2178) */
/* WARNING: Removing unreachable block (ram,0x00014dda217e) */
/* WARNING: Removing unreachable block (ram,0x000161995ad4) */
/* WARNING: Removing unreachable block (ram,0x000157620486) */
/* WARNING: Removing unreachable block (ram,0x000161857d67) */
/* WARNING: Removing unreachable block (ram,0x000162c37a4e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dda20dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  uVar2 = ~(uStackX_18 & unaff_R15) & (uStackX_18 | unaff_R15);
  if ((longlong)uVar2 < 0) {
    thunk_FUN_157620405();
    return;
  }
  if (&DAT_ffffffffffffffef < &stack0xfffffffffffffff0) {
    *(undefined8 *)(uVar2 - 8) = param_1;
    puVar7 = &DAT_16478d7f4;
    *(undefined8 *)(uVar2 - 0x10) = param_3;
    *(undefined8 *)(uVar2 - 0x18) = param_3;
    *(undefined8 *)(uVar2 - 0x20) = 0x161995a48;
    uVar5 = FUN_16478d7a2(&DAT_16478d7f4,param_2,FUN_16478d7a2);
    *(undefined **)(uVar2 - 0x20) = puVar7;
    uVar4 = *(undefined8 *)(uVar2 - 0x20);
    puVar1 = (ulonglong *)(uVar2 - 0x20);
    uVar6 = *(ulonglong *)(unaff_R12 + -0x30);
    *puVar1 = uVar6;
    if ((longlong)uVar6 < 0) {
      *(undefined4 *)puVar1 = 0xeee95f1;
      *(undefined4 *)(uVar2 - 0x1c) = 0;
      uVar6 = *puVar1;
      lVar3 = *(longlong *)(unaff_R12 + -0x80);
      *puVar1 = uVar5;
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(uVar2 - 0x1c) = 0;
      uVar6 = *puVar1 ^ -((~((uVar6 ^ 0x5feb59be) & 0x5105cc4f) & (uVar6 ^ 0x5feb59be | 0x5105cc4f))
                         - lVar3);
      *puVar1 = *(ulonglong *)(unaff_R12 + -0x28);
      *puVar1 = (uVar6 + uVar5) - (uVar6 & uVar5);
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(uVar2 - 0x1c) = 0;
      FUN_1655b7bb0();
      return;
    }
    FUN_161857ccd(uVar4);
    return;
  }
  FUN_1619959a1();
  return;
}



// FUNCTION 14dda2216 FUN_14dda2216 body=159 status=ok
// SIG undefined FUN_14dda2216(void)

void FUN_14dda2216(void)

{
  undefined8 in_stack_00000008;
  
  FUN_16521b0e6(FUN_16521b0e6,in_stack_00000008);
  return;
}



// FUNCTION 14dda23ee FUN_14dda23ee body=565 status=ok
// SIG undefined FUN_14dda23ee(void)

/* WARNING: Removing unreachable block (ram,0x00014dda2481) */
/* WARNING: Removing unreachable block (ram,0x00015b7039f9) */
/* WARNING: Removing unreachable block (ram,0x00014dda2476) */
/* WARNING: Removing unreachable block (ram,0x00015743402e) */

void FUN_14dda23ee(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15)) {
    FUN_15b703959();
    return;
  }
  if (*(longlong *)(unaff_R13 + -0x50) == 0) {
    FUN_166531c69();
    return;
  }
  FUN_166531c69();
  return;
}



// FUNCTION 14dda28be FUN_14dda28be body=135 status=ok
// SIG undefined FUN_14dda28be(void)

void FUN_14dda28be(undefined8 param_1,undefined8 param_2)

{
  FUN_15ba18dc1(param_1,param_2,FUN_15ba18dc1);
  return;
}



// FUNCTION 14dda2a72 FUN_14dda2a72 body=253 status=ok
// SIG undefined FUN_14dda2a72(void)

/* WARNING: Instruction at (ram,0x000166074540) overlaps instruction at (ram,0x00016607453f)
    */
/* WARNING: Removing unreachable block (ram,0x00014dda2b36) */
/* WARNING: Removing unreachable block (ram,0x0001660746a6) */
/* WARNING: Removing unreachable block (ram,0x00014dda2ae2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00016607455e */
/* WARNING: Removing unreachable block (ram,0x0001660745a5) */
/* WARNING: Removing unreachable block (ram,0x0001660746a0) */
/* WARNING: Removing unreachable block (ram,0x000162502f9f) */
/* WARNING: Removing unreachable block (ram,0x000166074598) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dda2a72(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  int unaff_R14D;
  undefined8 unaff_retaddr;
  
  *(int *)(&stack0x00000010 + in_RAX) = *(int *)(&stack0x00000010 + in_RAX) + unaff_R14D;
  if (-1 < (int)((uint)(unaff_RBX <= param_4 && param_4 - unaff_RBX != 0) << 0x1f)) {
    FUN_164a2d2a1(unaff_retaddr,param_2,param_3,(param_4 - unaff_RBX) + unaff_RBX);
    return;
  }
  FUN_162d7e640();
  return;
}



// FUNCTION 14dda2b72 FUN_14dda2b72 body=158 status=ok
// SIG undefined FUN_14dda2b72(void)

void FUN_14dda2b72(void)

{
  return;
}



// FUNCTION 14dda2c13 FUN_14dda2c13 body=458 status=ok
// SIG undefined FUN_14dda2c13(void)

/* WARNING: Removing unreachable block (ram,0x00014dda2d37) */
/* WARNING: Removing unreachable block (ram,0x00014dda2d3d) */
/* WARNING: Removing unreachable block (ram,0x000165f061ea) */
/* WARNING: Removing unreachable block (ram,0x00014dda2d6c) */
/* WARNING: Removing unreachable block (ram,0x00014dda2d6f) */
/* WARNING: Removing unreachable block (ram,0x00014dda2dae) */
/* WARNING: Removing unreachable block (ram,0x00014dda2dc2) */
/* WARNING: Removing unreachable block (ram,0x00014dda2dc7) */
/* WARNING: Removing unreachable block (ram,0x00014dda2ca9) */

void FUN_14dda2c13(void)

{
  ulonglong uVar1;
  undefined8 in_R11;
  ulonglong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong uVar3;
  longlong in_stack_00000028;
  
  uVar2 = ~unaff_R13;
  uVar3 = *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2);
  *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffffef2f52d + uVar2);
  uVar1 = *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2);
  *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2) =
       ~*(ulonglong *)(&stack0xfffffffffef2f52d + uVar2);
  *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2) =
       (~(uVar1 & unaff_R15) + unaff_R15) - *(longlong *)(&stack0xfffffffffef2f52d + uVar2);
  uVar3 = (~*(ulonglong *)(&stack0xfffffffffef2f52d + uVar2) | ~unaff_R15 | uVar3) +
          *(longlong *)(&stack0xfffffffffef2f52d + uVar2) + 1;
  if (uVar3 == 0) {
    FUN_1660d1b53();
    return;
  }
  *(ulonglong *)(&stack0xfffffffffef2f52d + uVar2) = ~uVar3;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x26de5f8;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14dda2de0 FUN_14dda2de0 body=160 status=ok
// SIG undefined FUN_14dda2de0(void)

void FUN_14dda2de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_R12;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x20);
  (*(code *)0x1662b1665)(param_1,param_2,&LAB_1662b16aa,uVar1);
  return;
}



// FUNCTION 14dda2e88 FUN_14dda2e88 body=119 status=ok
// SIG undefined FUN_14dda2e88(void)

undefined8 FUN_14dda2e88(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14dda2f1e thunk_FUN_14dda2f24 body=5 status=ok
// SIG undefined thunk_FUN_14dda2f24(void)

void thunk_FUN_14dda2f24(void)

{
  return;
}



// FUNCTION 14dda2f24 FUN_14dda2f24 body=132 status=ok
// SIG undefined FUN_14dda2f24(void)

void FUN_14dda2f24(void)

{
  return;
}



// FUNCTION 14dda3035 FUN_14dda3035 body=142 status=ok
// SIG undefined FUN_14dda3035(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001618970ef) */
/* WARNING: Removing unreachable block (ram,0x0001618970f5) */
/* WARNING: Removing unreachable block (ram,0x00016115507e) */
/* WARNING: Removing unreachable block (ram,0x000161155084) */
/* WARNING: Removing unreachable block (ram,0x000161896fca) */
/* WARNING: Removing unreachable block (ram,0x0001618970ea) */
/* WARNING: Removing unreachable block (ram,0x000165afbaed) */
/* WARNING: Removing unreachable block (ram,0x00016115518c) */
/* WARNING: Removing unreachable block (ram,0x000161155103) */
/* WARNING: Removing unreachable block (ram,0x000161155109) */
/* WARNING: Removing unreachable block (ram,0x000161155114) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6657) */
/* WARNING: Removing unreachable block (ram,0x000161700af5) */
/* WARNING: Removing unreachable block (ram,0x000161700b7f) */
/* WARNING: Removing unreachable block (ram,0x0001653e980b) */
/* WARNING: Removing unreachable block (ram,0x0001653e98fb) */
/* WARNING: Removing unreachable block (ram,0x0001653e98ff) */
/* WARNING: Removing unreachable block (ram,0x000161700b85) */
/* WARNING: Removing unreachable block (ram,0x000161700c16) */
/* WARNING: Removing unreachable block (ram,0x0001656ab96d) */
/* WARNING: Removing unreachable block (ram,0x000161700c1c) */
/* WARNING: Removing unreachable block (ram,0x000161700c9b) */
/* WARNING: Removing unreachable block (ram,0x000161700ca0) */
/* WARNING: Removing unreachable block (ram,0x000161700ca6) */
/* WARNING: Removing unreachable block (ram,0x000161700cab) */
/* WARNING: Removing unreachable block (ram,0x000161700cc1) */
/* WARNING: Removing unreachable block (ram,0x000161700d13) */
/* WARNING: Removing unreachable block (ram,0x000161700d31) */
/* WARNING: Removing unreachable block (ram,0x000161d107b2) */
/* WARNING: Removing unreachable block (ram,0x0001669e9657) */
/* WARNING: Removing unreachable block (ram,0x00014dda30be) */
/* WARNING: Removing unreachable block (ram,0x00014dda30c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dda3035(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  
  uVar2 = *(ulonglong *)(param_2 + -0x80);
  lVar5 = *(ulonglong *)(param_2 + -0xa0) + in_R10 +
          ~(~*(ulonglong *)(param_2 + -0xa0) | ~in_R10) * -2;
  uVar4 = *(ulonglong *)(param_2 + -0x98) ^ in_R10;
  uVar1 = 0xffffffffffffffff - (param_3 & in_R10) & (~(param_3 & in_R10) + in_R10) - ~param_3;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(ulonglong *)(uVar1 - 0x10) = uVar2 ^ in_R10;
  *(undefined8 *)(uVar1 - 0x18) = 0x161154ffe;
  FUN_1649d3357();
  *(ulonglong *)(uVar1 - 0x18) = uVar4;
  *(longlong *)(uVar1 - 0x20) = lVar5;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  uVar3 = DAT_1649d32c7;
  *(undefined8 *)(uVar1 - 0x28) = param_1;
  *(undefined4 *)(uVar1 - 0x30) = 0xce47e5cc;
  *(undefined4 *)(uVar1 - 0x2c) = 0xffffffff;
  *(undefined8 *)(uVar1 + *(longlong *)(uVar1 - 0x30) + 0x31b81a1c) = uVar3;
  uVar3 = FUN_161700af5();
  return uVar3;
}



// FUNCTION 14dda30c4 FUN_14dda30c4 body=179 status=ok
// SIG undefined FUN_14dda30c4(void)

void FUN_14dda30c4(void)

{
  FUN_1662110c0(FUN_1662110c0);
  return;
}



// FUNCTION 14dda31fc FUN_14dda31fc body=529 status=ok
// SIG undefined FUN_14dda31fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dda334e) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa020) */
/* WARNING: Removing unreachable block (ram,0x00014df6f443) */
/* WARNING: Removing unreachable block (ram,0x00014dda32a5) */

void FUN_14dda31fc(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong local_res8;
  
  *(undefined4 *)(&stack0xfffffffff483b5b1 + local_res8) = 0x9d4de3cd;
  *(undefined4 *)(&stack0xfffffffff483b5b5 + local_res8) = 0xffffffff;
  uVar1 = *(ulonglong *)(&stack0xfffffffff483b5b1 + local_res8);
  *(undefined8 *)(&stack0xfffffffff483b5b9 + local_res8) =
       *(undefined8 *)(unaff_RSI + ~((uVar1 | 0xffffffff9d4de3e2) & (~uVar1 | 0x62b21c1d)));
  *(undefined8 *)(&stack0xfffffffff483b5b9 + local_res8) = param_1;
  uVar2 = *(undefined8 *)(&stack0xfffffffff483b5b9 + local_res8);
  *(undefined4 *)(&stack0xfffffffff483b5b9 + local_res8) = 0xb916e1b1;
  *(undefined4 *)(&stack0xfffffffff483b5bd + local_res8) = 0xffffffff;
  uVar3 = *(ulonglong *)(&stack0xfffffffff483b5b9 + local_res8);
  uVar1 = *(ulonglong *)(unaff_RSI + (uVar3 ^ 0x46e91e69));
  *(ulonglong *)(&stack0xfffffffff483b5b9 + local_res8) =
       CONCAT62((int6)((ulonglong)uVar2 >> 0x10),(short)uVar2 + 0x2611);
  FUN_166d04e20(*(undefined8 *)(&stack0xfffffffff483b5b9 + local_res8),uVar3 ^ 0x46e91e69,
                FUN_166d04e20,(uVar1 & unaff_RBP) << 1);
  return;
}



// FUNCTION 14dda349c FUN_14dda349c body=57 status=ok
// SIG undefined FUN_14dda349c(void)

void FUN_14dda349c(void)

{
  return;
}



// FUNCTION 14dda3520 FUN_14dda3520 body=74 status=ok
// SIG undefined FUN_14dda3520(void)

void FUN_14dda3520(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dda3568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dda3760 FUN_14dda3760 body=312 status=ok
// SIG undefined FUN_14dda3760(void)

void FUN_14dda3760(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x50) ^ param_1;
  FUN_165a11388();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar1 = (~(0xffffffffffffffff - param_1 & uVar1) + uVar1) - ~(0xffffffffffffffff - param_1) &
          (~uVar1 | param_1) ^ 0xffffffffffffffff;
  FUN_1628f9d65();
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
  *(code **)(in_stack_00000028 - 8) = FUN_1628f9d65;
  *(ulonglong *)(in_stack_00000028 - 0x10) = uVar1;
  *(ulonglong *)(in_stack_00000028 - 0x18) = uVar1;
  *(ulonglong *)(in_stack_00000028 - 0x20) = uVar2;
  FUN_156d60b41();
  return;
}



// FUNCTION 14dda3899 FUN_14dda3899 body=165 status=ok
// SIG undefined FUN_14dda3899(void)

void FUN_14dda3899(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 unaff_RBP;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x10) = param_3;
  *(undefined8 *)(param_5 - 0x18) = param_3;
  *(undefined8 *)(param_5 - 0x20) = in_R11;
  FUN_156d60b41(param_1,uStackX_10,FUN_156d60b41);
  return;
}



// FUNCTION 14dda3940 FUN_14dda3940 body=167 status=ok
// SIG undefined FUN_14dda3940(void)

/* WARNING: Removing unreachable block (ram,0x00014dda39a1) */

void FUN_14dda3940(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1626afaf1(param_1,FUN_1626afaf1,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dda39e8 FUN_14dda39e8 body=114 status=ok
// SIG undefined FUN_14dda39e8(void)

void FUN_14dda39e8(void)

{
  return;
}



// FUNCTION 14dda3b17 thunk_FUN_14dda3b1d body=5 status=ok
// SIG undefined thunk_FUN_14dda3b1d(void)

void thunk_FUN_14dda3b1d(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar2 = unaff_retaddr | unaff_R15;
  uVar1 = ~((~unaff_R15 | unaff_retaddr) + unaff_R15 + 1);
  FUN_15af2e59f((uVar2 - (~uVar2 & uVar1 | uVar2)) + uVar1);
  return;
}



// FUNCTION 14dda3b1d FUN_14dda3b1d body=138 status=ok
// SIG undefined FUN_14dda3b1d(void)

void FUN_14dda3b1d(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar2 = unaff_retaddr | unaff_R15;
  uVar1 = ~((~unaff_R15 | unaff_retaddr) + unaff_R15 + 1);
  FUN_15af2e59f((uVar2 - (~uVar2 & uVar1 | uVar2)) + uVar1);
  return;
}



// FUNCTION 14dda3cc5 FUN_14dda3cc5 body=180 status=ok
// SIG undefined FUN_14dda3cc5(void)

/* WARNING: Removing unreachable block (ram,0x00014dda3d5b) */

undefined8 FUN_14dda3cc5(byte param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 in_R10;
  undefined8 unaff_R15;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000008;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar5 = (local_res10 | 0x100) - 0x100;
  LOCK();
  bVar4 = (byte)in_stack_00000008;
  bVar6 = bVar4 < DAT_14d7c166b;
  bVar7 = SBORROW1(bVar4,DAT_14d7c166b);
  cVar3 = bVar4 - DAT_14d7c166b;
  bVar4 = param_1;
  if (cVar3 != '\0') {
    in_stack_00000008 = CONCAT71((int7)((ulonglong)in_stack_00000008 >> 8),DAT_14d7c166b);
    bVar4 = DAT_14d7c166b;
  }
  DAT_14d7c166b = bVar4;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = in_stack_00000008;
  *(undefined8 *)(local_res18 + -0x10) = in_stack_00000008;
  *(undefined8 *)(local_res18 + -0x18) = in_stack_00000008;
  *(undefined4 *)(local_res18 + -0x18) = 0xe14c0cb;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar6 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar8 = *(ulonglong *)(local_res18 + -0x28);
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(undefined8 *)(local_res18 + -0x28) = in_R10;
  *(longlong *)(local_res18 + -8) = lVar1 + -0xd8e52cd;
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(code **)(local_res18 + -0x10) = FUN_14d85d504;
  return uVar2;
}



// FUNCTION 14dda3d5b FUN_14dda3d5b body=81 status=ok
// SIG undefined FUN_14dda3d5b(void)

undefined8 FUN_14dda3d5b(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dda3f0e FUN_14dda3f0e body=317 status=ok
// SIG undefined FUN_14dda3f0e(void)

/* WARNING: Removing unreachable block (ram,0x00014dda3f9c) */
/* WARNING: Removing unreachable block (ram,0x00014dda3fa7) */
/* WARNING: Removing unreachable block (ram,0x00014dda3fa2) */

void FUN_14dda3f0e(undefined8 param_1)

{
  FUN_1652264f3(param_1);
  return;
}



// FUNCTION 14dda40d3 FUN_14dda40d3 body=165 status=ok
// SIG undefined FUN_14dda40d3(void)

void FUN_14dda40d3(void)

{
  return;
}



// FUNCTION 14dda443d FUN_14dda443d body=161 status=ok
// SIG undefined FUN_14dda443d(void)

void FUN_14dda443d(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  FUN_162c99f4b(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  FUN_16260b8ed(CONCAT44(uStackX_c,local_res8));
  return;
}



// FUNCTION 14dda44de FUN_14dda44de body=150 status=ok
// SIG undefined FUN_14dda44de(void)

void FUN_14dda44de(void)

{
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  FUN_16260b8ed(CONCAT44(unaff_retaddr_00,unaff_retaddr));
  return;
}



// FUNCTION 14dda4708 FUN_14dda4708 body=171 status=ok
// SIG undefined FUN_14dda4708(void)

/* WARNING: Removing unreachable block (ram,0x000161ce1129) */
/* WARNING: Removing unreachable block (ram,0x000161ce112f) */
/* WARNING: Removing unreachable block (ram,0x00014dda479c) */

void FUN_14dda4708(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 +
      (*(ulonglong *)(unaff_RDI + -0x88) & param_1) * -2 == 0) {
    FUN_156db85ef(param_1,-1 - ((~(~-param_1 + 1) | *(ulonglong *)(unaff_RDI + -0x68)) &
                               (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),param_3);
    return;
  }
  FUN_161ce1089();
  return;
}



// FUNCTION 14dda4843 FUN_14dda4843 body=566 status=ok
// SIG undefined FUN_14dda4843(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2fbe) overlaps instruction at (ram,0x00014d7c2fbc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dda4936) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dda4843(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong unaff_RBX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar13;
  float10 in_ST0;
  longlong local_res8;
  ushort uStackX_18;
  longlong lStackX_20;
  undefined8 local_8;
  
  puVar11 = (undefined4 *)
            (~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x68)) + unaff_R15 + 1) &
            ~(~*(ulonglong *)(unaff_R13 + -0x68) & 0xffffffffffffffff - unaff_R15));
  local_8 = *(undefined8 *)(unaff_R13 + -0x50);
  if ((&DAT_fffffffffffffff7 >= &local_8) || (&DAT_fffffffffffffff7 < &local_8)) {
    local_8 = *(undefined8 *)(unaff_R13 + -8);
    uVar7 = (*(code *)0x16263dfc3)();
    return uVar7;
  }
  bVar13 = (uStackX_18 & 0x400) != 0;
  *(undefined8 *)(lStackX_20 + -8) = in_R11;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -0x18) = param_1;
  *(undefined **)(lStackX_20 + -8) = &DAT_16166cb91;
  uVar7 = *(undefined8 *)(lStackX_20 + -0x18);
  pcVar5 = (code *)swi(0x20);
  (*pcVar5)(uVar7,param_2,param_3);
  puVar10 = puVar11 + (ulonglong)bVar13 * -2 + 1;
  *puVar11 = _DAT_00000008;
  *(undefined8 *)(lStackX_20 + -8) = uVar7;
  iVar6 = in(0x88);
  LOCK();
  uVar3 = *(undefined1 *)(ulonglong)(iVar6 + 0x1e131555);
  *(undefined1 *)(ulonglong)(iVar6 + 0x1e131555) = (char)((ulonglong)uVar7 >> 8);
  lVar8 = CONCAT62((int6)((ulonglong)uVar7 >> 0x10),CONCAT11(uVar3,(char)uVar7));
  UNLOCK();
  *(undefined8 *)(lStackX_20 + -0x10) = 0x42;
  do {
    pbVar2 = (byte *)((longlong)puVar10 + 0x422e4c91);
    bVar4 = *pbVar2;
    bVar9 = (byte)(unaff_RBX >> 8);
    *pbVar2 = *pbVar2 + bVar9;
    uVar12 = (int)param_4 + *in_R10 + (uint)CARRY1(bVar4,bVar9);
    param_4 = (ulonglong)uVar12;
    unaff_RBX = unaff_RBX & 0xffffffffffffff00;
  } while ((POPCOUNT(uVar12 & 0xff) & 1U) == 0);
  puVar11 = (undefined4 *)((ulonglong)bVar13 * -8 + 0xc);
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 **)(lStackX_20 + -0x18) = puVar11;
  out(0x5ce3,((char)iVar6 + 0x28U | 0xd9) << 1);
  _DAT_bb493cde = _DAT_bb493cde | (uint)local_res8;
  cRamffffffffcbc75f2f = cRamffffffffcbc75f2f + -0x1d;
  piVar1 = (int *)(local_res8 + 0x29);
  *piVar1 = *piVar1;
  uRam000000005e4a1ddf = *puVar11;
  if (*piVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 **)(lStackX_20 + -0x20) = &DAT_bb493cde;
  uVar12 = in(0x61);
  *(float *)(ulonglong)uVar12 = (float)in_ST0;
  *(int *)((longlong)puVar11 + local_res8 * 4 + 0x282890b2) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dda48c9 FUN_14dda48c9 body=275 status=ok
// SIG undefined FUN_14dda48c9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2fbe) overlaps instruction at (ram,0x00014d7c2fbc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dda4936) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dda48c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong unaff_RBX;
  undefined4 *puVar10;
  undefined4 *unaff_RSI;
  undefined4 *puVar11;
  undefined4 *unaff_RDI;
  uint uVar12;
  int *in_R10;
  undefined8 in_R11;
  bool bVar13;
  float10 in_ST0;
  longlong lStackX_8;
  ushort local_res18;
  longlong local_res20;
  
  bVar13 = (local_res18 & 0x400) != 0;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined **)(local_res20 + -8) = &DAT_16166cb91;
  uVar7 = *(undefined8 *)(local_res20 + -0x18);
  pcVar5 = (code *)swi(0x20);
  (*pcVar5)(uVar7,param_2,param_3);
  *unaff_RDI = *unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = uVar7;
  iVar6 = in(0x88);
  LOCK();
  uVar3 = *(undefined1 *)(ulonglong)(iVar6 + 0x1e131555);
  *(undefined1 *)(ulonglong)(iVar6 + 0x1e131555) = (char)((ulonglong)uVar7 >> 8);
  lVar8 = CONCAT62((int6)((ulonglong)uVar7 >> 0x10),CONCAT11(uVar3,(char)uVar7));
  UNLOCK();
  *(undefined8 *)(local_res20 + -0x10) = 0x42;
  do {
    pbVar2 = (byte *)((longlong)(unaff_RDI + (ulonglong)bVar13 * -2 + 1) + 0x422e4c91);
    bVar4 = *pbVar2;
    bVar9 = (byte)(unaff_RBX >> 8);
    *pbVar2 = *pbVar2 + bVar9;
    uVar12 = (int)param_4 + *in_R10 + (uint)CARRY1(bVar4,bVar9);
    param_4 = (ulonglong)uVar12;
    unaff_RBX = unaff_RBX & 0xffffffffffffff00;
  } while ((POPCOUNT(uVar12 & 0xff) & 1U) == 0);
  puVar10 = unaff_RSI + (ulonglong)bVar13 * -2 + 1;
  puVar11 = unaff_RDI + (ulonglong)bVar13 * -2 + 1;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 **)(local_res20 + -0x18) = puVar10;
  out(0x5ce3,((char)iVar6 + 0x28U | 0xd9) << 1);
  _DAT_bb493cde = _DAT_bb493cde | (uint)lStackX_8;
  cRamffffffffcbc75f2f = cRamffffffffcbc75f2f + -0x1d;
  piVar1 = (int *)(lStackX_8 + 0x29);
  *piVar1 = *piVar1;
  uRam000000005e4a1ddf = *puVar10;
  if (*piVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 **)(local_res20 + -0x20) = &DAT_bb493cde;
  uVar12 = in(0x61);
  *(float *)(ulonglong)uVar12 = (float)in_ST0;
  *(int *)((longlong)puVar10 + lStackX_8 * 4 + 0x282890b2) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dda49d8 FUN_14dda49d8 body=34 status=ok
// SIG undefined FUN_14dda49d8(void)

void FUN_14dda49d8(void)

{
  undefined8 unaff_R13;
  ulonglong local_res8;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + (local_res8 ^ 0xab6cf63)) = unaff_R13;
  return;
}



// FUNCTION 14dda4a89 FUN_14dda4a89 body=55 status=ok
// SIG undefined FUN_14dda4a89(void)

void FUN_14dda4a89(void)

{
  return;
}



// FUNCTION 14dda4e65 FUN_14dda4e65 body=124 status=ok
// SIG undefined FUN_14dda4e65(void)

void FUN_14dda4e65(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  short unaff_BX;
  short unaff_R12W;
  ushort uVar1;
  ushort *unaff_R14;
  
  uVar1 = unaff_R12W + unaff_BX * -2;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = ~(~uVar1 | ~*unaff_R14) | ~uVar1;
  *unaff_R14 = *unaff_R14 ^ 0xffff;
  *(undefined8 *)(param_5 + -8) = param_3;
  FUN_165b0bc8b(param_1,param_2,FUN_165b0bc8b);
  return;
}



// FUNCTION 14dda4ee4 FUN_14dda4ee4 body=319 status=ok
// SIG undefined FUN_14dda4ee4(void)

/* WARNING: Removing unreachable block (ram,0x00014dda4f85) */

void FUN_14dda4ee4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_164aee1ed(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1)),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
  return;
}



// FUNCTION 14dda5026 FUN_14dda5026 body=135 status=ok
// SIG undefined FUN_14dda5026(void)

void FUN_14dda5026(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar2 = unaff_R15 ^ 0xffffffffffffffff | uVar1;
  uVar1 = (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1;
  (*(code *)0x16550f535)(0x16550f535,-((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14dda514e FUN_14dda514e body=120 status=ok
// SIG undefined FUN_14dda514e(void)

/* WARNING: Removing unreachable block (ram,0x00014dda5278) */

undefined8 FUN_14dda514e(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  uint uVar4;
  longlong unaff_R13;
  
  uVar4 = (uint)param_1;
  uVar2 = FUN_166ca682d(param_1,(-~uVar4 - ((-uVar4 ^ 0xffffffff) + 2)) + uVar4);
  puVar1 = (ulonglong *)
           (&stack0xfffffffff49e5429 +
           (~(unaff_RBX & 0xffffffffac5ea58e) & (uVar2 | 0xffffffffac5ea58e) ^ 0xffffffffffffffff));
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  if (FUN_166ca682d + uVar2 != (code *)((uVar2 & 0x166ca682d) << 1)) {
    uVar3 = FUN_15afc5370(*puVar1);
    return uVar3;
  }
  uVar3 = FUN_165618f52(~(-~*(ulonglong *)(unaff_R13 + -0x60) - 1 & 0x166ca682d));
  return uVar3;
}



// FUNCTION 14dda51ca FUN_14dda51ca body=327 status=ok
// SIG undefined FUN_14dda51ca(void)

/* WARNING: Removing unreachable block (ram,0x00014dda5278) */

undefined8 FUN_14dda51ca(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)
           (&stack0xfffffffff49e5431 +
           (~(unaff_RBX & 0xffffffffac5ea58e) & (in_RAX | 0xffffffffac5ea58e) ^ 0xffffffffffffffff))
  ;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  if (uVar2 + unaff_R15 != (uVar2 & unaff_R15) << 1) {
    uVar3 = FUN_15afc5370(*puVar1);
    return uVar3;
  }
  uVar3 = FUN_165618f52(~(-~*(ulonglong *)(unaff_R13 + -0x60) - 1 & unaff_R15),param_2,FUN_165618f52
                       );
  return uVar3;
}



// FUNCTION 14dda5423 FUN_14dda5423 body=94 status=ok
// SIG undefined FUN_14dda5423(void)

void FUN_14dda5423(void)

{
  return;
}



// FUNCTION 14dda54b6 FUN_14dda54b6 body=155 status=ok
// SIG undefined FUN_14dda54b6(void)

void FUN_14dda54b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short unaff_BX;
  undefined8 unaff_RDI;
  short *in_R11;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *in_R11 = (-0x101 - unaff_BX) + *in_R11;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined **)(local_res20 + -0x20) = &DAT_165811a64;
  return;
}



// FUNCTION 14dda5553 FUN_14dda5553 body=150 status=ok
// SIG undefined FUN_14dda5553(void)

void FUN_14dda5553(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  (*(code *)0x14da58f1f)
            (param_1,~((unaff_RBP | param_2) &
                      ((~(param_2 ^ 0xffffffffffffffff) | ~in_RAX) + in_RAX) -
                      ~(param_2 ^ 0xffffffffffffffff)));
  return;
}



// FUNCTION 14dda5670 FUN_14dda5670 body=145 status=ok
// SIG undefined FUN_14dda5670(void)

void FUN_14dda5670(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_162d7f9d0(param_1,param_2,FUN_162d7f9d0,-(*(ulonglong *)(unaff_RDI + -0x60) & param_1));
  return;
}



// FUNCTION 14dda5702 FUN_14dda5702 body=167 status=ok
// SIG undefined FUN_14dda5702(void)

void FUN_14dda5702(undefined8 param_1,char param_2)

{
  longlong unaff_RBX;
  
  *(undefined4 *)(&stack0x00000000 + unaff_RBX) = 0xffffffff;
  FUN_162beda96(param_1,param_2 + -1);
  return;
}



// FUNCTION 14dda57aa FUN_14dda57aa body=132 status=ok
// SIG undefined FUN_14dda57aa(void)

void FUN_14dda57aa(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(&stack0x00000020 + param_3) = param_4;
  FUN_15b0f2f70(param_1,FUN_15b0f2f70,local_res18,in_stack_00000020);
  return;
}



// FUNCTION 14dda5ba9 FUN_14dda5ba9 body=105 status=ok
// SIG undefined FUN_14dda5ba9(void)

void FUN_14dda5ba9(void)

{
  return;
}



// FUNCTION 14dda5c3f FUN_14dda5c3f body=328 status=ok
// SIG undefined FUN_14dda5c3f(void)

/* WARNING: Removing unreachable block (ram,0x00014dda5d0c) */
/* WARNING: Removing unreachable block (ram,0x00014dda5cdd) */

undefined8 FUN_14dda5c3f(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  longlong in_R11;
  
  uVar1 = *(ulonglong *)(0x4330 - (~(in_R11 - 0x43afU) + 2));
  uVar2 = FUN_162b56150(*(ulonglong *)(in_R11 + -0x28) ^ in_R10,
                        uVar1 + in_R10 + (uVar1 & in_R10) * -2);
  return uVar2;
}



// FUNCTION 14dda5cdd thunk_FUN_14dda5ce3 body=5 status=ok
// SIG undefined thunk_FUN_14dda5ce3(void)

/* WARNING: Removing unreachable block (ram,0x00014dda5d0c) */

undefined8 thunk_FUN_14dda5ce3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dda5ce3 FUN_14dda5ce3 body=130 status=ok
// SIG undefined FUN_14dda5ce3(void)

/* WARNING: Removing unreachable block (ram,0x00014dda5d0c) */

undefined8 FUN_14dda5ce3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dda5d65 FUN_14dda5d65 body=172 status=ok
// SIG undefined FUN_14dda5d65(void)

void FUN_14dda5d65(longlong param_1,uint param_2)

{
  ulonglong unaff_RBX;
  longlong unaff_retaddr;
  
  if (unaff_retaddr == -0x6f3c4c6b) {
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) & param_2;
  }
  FUN_15b8add7d(param_1,FUN_15b8add7d,*(ulonglong *)(param_1 + -0x88) ^ unaff_RBX,
                *(ulonglong *)(param_1 + -0x58) ^ unaff_RBX);
  return;
}



// FUNCTION 14dda5e17 FUN_14dda5e17 body=161 status=ok
// SIG undefined FUN_14dda5e17(void)

void FUN_14dda5e17(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_16197c88b(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dda6004 FUN_14dda6004 body=125 status=ok
// SIG undefined FUN_14dda6004(void)

void FUN_14dda6004(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong *in_R10;
  
  uVar1 = *in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = *in_R10 | unaff_RBP;
  *in_R10 = ~((*in_R10 - (~(~unaff_RSI & ~uVar1) | *in_R10)) + ~(~unaff_RSI & ~uVar1));
  FUN_162bd1ea6();
  FUN_164abb487();
  return;
}



// FUNCTION 14dda6083 FUN_14dda6083 body=127 status=ok
// SIG undefined FUN_14dda6083(void)

void FUN_14dda6083(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_164abb487(param_1,*(ulonglong *)(param_1 + -0x78) + unaff_RBX +
                        (*(ulonglong *)(param_1 + -0x78) & unaff_RBX) * -2);
  return;
}



// FUNCTION 14dda6103 FUN_14dda6103 body=476 status=ok
// SIG undefined FUN_14dda6103(void)

/* WARNING: Removing unreachable block (ram,0x00014dda6234) */
/* WARNING: Removing unreachable block (ram,0x00014dda623a) */
/* WARNING: Removing unreachable block (ram,0x000165e178f8) */
/* WARNING: Removing unreachable block (ram,0x000165e17987) */
/* WARNING: Removing unreachable block (ram,0x000165e1798c) */
/* WARNING: Removing unreachable block (ram,0x000165e17992) */
/* WARNING: Removing unreachable block (ram,0x000165e17997) */
/* WARNING: Removing unreachable block (ram,0x000165e17a0f) */
/* WARNING: Removing unreachable block (ram,0x000165e17a14) */
/* WARNING: Removing unreachable block (ram,0x000165e17a1a) */
/* WARNING: Removing unreachable block (ram,0x000165e17a25) */
/* WARNING: Removing unreachable block (ram,0x000162842d2e) */
/* WARNING: Removing unreachable block (ram,0x000165e17ac1) */
/* WARNING: Removing unreachable block (ram,0x000165e17ac7) */
/* WARNING: Removing unreachable block (ram,0x000165e17acc) */

undefined8 FUN_14dda6103(void)

{
  undefined8 uVar1;
  
  FUN_166575664();
  uVar1 = FUN_165e178f8();
  return uVar1;
}



// FUNCTION 14dda62e1 FUN_14dda62e1 body=293 status=ok
// SIG undefined FUN_14dda62e1(void)

void FUN_14dda62e1(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 local_res18;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_16680c912();
  *param_3 = ~*param_3;
  *param_3 = *param_3 | 0x100;
  *param_3 = -*param_3;
  *param_3 = *param_3 - 1;
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -8) = 0x1568bb57e;
                    /* WARNING: Could not recover jumptable at 0x0001568bb567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dda65a6 FUN_14dda65a6 body=272 status=ok
// SIG undefined FUN_14dda65a6(void)

/* WARNING: Instruction at (ram,0x00016144dd24) overlaps instruction at (ram,0x00016144dd23)
    */
/* WARNING: Removing unreachable block (ram,0x00014dda663c) */
/* WARNING: Removing unreachable block (ram,0x00014dda6647) */
/* WARNING: Removing unreachable block (ram,0x00014dda6642) */

undefined8 FUN_14dda65a6(ulonglong param_1,undefined8 param_2,undefined2 param_3)

{
  uint *puVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 unaff_BP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R12;
  longlong unaff_R14;
  uint local_res8 [8];
  
  puVar1 = (uint *)((longlong)local_res8 + unaff_R12 + -8);
  *(undefined8 *)puVar1 = unaff_RSI;
  *(longlong *)puVar1 = *(longlong *)puVar1 - unaff_R14;
  puVar4 = puVar1 + 2;
  *(undefined8 *)puVar1 = in_RAX;
  *puVar1 = 0;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 0xfb5520da;
  uVar3 = ~(~(uVar3 & 0xfb5520da) & *puVar1);
  *puVar1 = uVar3;
  puVar1[1] = 0;
  puVar1[1] = puVar1[1];
  if (*(longlong *)puVar1 == 0x4aadf25) {
    in_R10 = *(ulonglong *)(unaff_RDI + -0x30);
    puVar4 = (uint *)((longlong)puVar1 + 6);
    *(undefined2 *)((longlong)puVar1 + 6) = param_3;
  }
  puVar1 = (uint *)((ulonglong)uVar3 + 0x57 + param_1 * 4);
  *puVar1 = *puVar1 | 0x504166d0;
  *(undefined2 *)((longlong)puVar4 + -2) = unaff_BP;
  uVar2 = ~(((~(~(0xffffffffffffffff - param_1) | ~in_R10) ^ 0xffffffffffffffff) + in_R10) -
            (0xffffffffffffffff - param_1 ^ 0xffffffffffffffff) & (~in_R10 | param_1));
  *(ulonglong *)((longlong)puVar4 + -6) = uVar2;
  *(ulonglong *)((longlong)puVar4 + -0xe) = uVar2;
  *(ulonglong *)((longlong)puVar4 + -0x16) = uVar2;
  *(undefined8 *)((longlong)puVar4 + -6) = 0x16144dda4;
  *(undefined8 *)((longlong)puVar4 + -0xe) = 0x14dfab570;
  return *(undefined8 *)((longlong)puVar4 + -0x16);
}



// FUNCTION 14dda66ba FUN_14dda66ba body=119 status=ok
// SIG undefined FUN_14dda66ba(void)

undefined8 FUN_14dda66ba(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dda67b7 FUN_14dda67b7 body=156 status=ok
// SIG undefined FUN_14dda67b7(void)

void FUN_14dda67b7(void)

{
  FUN_16247feb1(0x14d7c1afc);
  return;
}



// FUNCTION 14dda6853 FUN_14dda6853 body=44 status=ok
// SIG undefined FUN_14dda6853(void)

void FUN_14dda6853(void)

{
  return;
}



// FUNCTION 14dda68f8 FUN_14dda68f8 body=95 status=ok
// SIG undefined FUN_14dda68f8(void)

ulonglong FUN_14dda68f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 in_RAX;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 unaff_RSI;
  undefined1 *puVar19;
  undefined8 in_R11;
  longlong unaff_R12;
  ulonglong uVar20;
  undefined8 unaff_R15;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  ulonglong local_res18;
  undefined1 auStackX_20 [8];
  int iVar3;
  
  *(undefined4 *)
   ((longlong)local_res10 +
   ~(~(local_res8 & 0xfffffffff3ed88d0) & (local_res8 | 0xfffffffff3ed88d0))) = 0;
  uVar20 = CONCAT44(local_res10[1],local_res10[0]);
  local_res10[0] = 0x287ce58;
  local_res10[1] = 0;
  uVar20 = uVar20 ^ 0x40b71671;
  puVar19 = auStackX_20;
  uVar4 = (ulonglong)((local_res18 & 0x4000) != 0);
  uVar5 = (ulonglong)((local_res18 & 0x800) != 0);
  uVar6 = (ulonglong)((local_res18 & 0x400) != 0);
  uVar7 = (ulonglong)((local_res18 & 0x200) != 0);
  uVar8 = (ulonglong)((local_res18 & 0x100) != 0);
  uVar9 = (ulonglong)((local_res18 & 0x80) != 0);
  uVar10 = (ulonglong)((local_res18 & 0x40) != 0);
  uVar11 = (ulonglong)((local_res18 & 0x10) != 0);
  uVar12 = (ulonglong)((local_res18 & 4) != 0);
  uVar13 = (ulonglong)((local_res18 & 1) != 0);
  uVar14 = (ulonglong)((local_res18 & 0x200000) != 0);
  uVar15 = (ulonglong)((local_res18 & 0x40000) != 0);
  local_res18 = uVar4 * 0x4000 | uVar5 * 0x800 | uVar6 * 0x400 | uVar7 * 0x200 | uVar8 * 0x100 |
                uVar9 * 0x80 | uVar10 * 0x40 | uVar11 * 0x10 | uVar12 * 4 | uVar13 |
                uVar14 * 0x200000 | uVar15 * 0x40000;
  *(ulonglong *)(&stack0xfffffffff3eed0cb + uVar20) =
       (ulonglong)(uVar4 != 0) * 0x4000 | (ulonglong)(uVar5 != 0) * 0x800 |
       (ulonglong)(uVar6 != 0) * 0x400 | (ulonglong)(uVar7 != 0) * 0x200 |
       (ulonglong)(uVar8 != 0) * 0x100 | (ulonglong)(uVar9 != 0) * 0x80 |
       (ulonglong)(uVar10 != 0) * 0x40 | (ulonglong)(uVar11 != 0) * 0x10 |
       (ulonglong)(uVar12 != 0) * 4 | (ulonglong)(uVar13 != 0) | (ulonglong)(uVar14 != 0) * 0x200000
       | (ulonglong)(uVar15 != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff3eed0c3 + uVar20) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff3eed0c3 + uVar20) = 0xa386e461;
  uVar2 = *(uint *)(&stack0xfffffffff3eed0c3 + uVar20);
  iVar3 = *(int *)(&stack0xfffffffff3eed0c3 + uVar20);
  *(int *)(&stack0xfffffffff3eed0c3 + uVar20) =
       *(int *)(&stack0xfffffffff3eed0c3 + uVar20) + 0x6f152885;
  puVar1 = (undefined8 *)(&stack0xfffffffff3eed0bb + uVar20);
  *(undefined4 *)puVar1 = 0;
  *(ulonglong *)(&stack0xfffffffff3eed0b3 + uVar20) =
       (ulonglong)(uVar4 != 0) * 0x4000 | (ulonglong)SCARRY4(iVar3,0x6f152885) * 0x800 |
       (ulonglong)(uVar6 != 0) * 0x400 | (ulonglong)(uVar7 != 0) * 0x200 |
       (ulonglong)(uVar8 != 0) * 0x100 |
       (ulonglong)(*(int *)(&stack0xfffffffff3eed0c3 + uVar20) < 0) * 0x80 |
       (ulonglong)(*(int *)(&stack0xfffffffff3eed0c3 + uVar20) == 0) * 0x40 |
       (ulonglong)(uVar11 != 0) * 0x10 |
       (ulonglong)((POPCOUNT(*(uint *)(&stack0xfffffffff3eed0c3 + uVar20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0x90ead77a < uVar2) | (ulonglong)(uVar14 != 0) * 0x200000 |
       (ulonglong)(uVar15 != 0) * 0x40000;
  *(undefined **)(&stack0xfffffffff3eed0b3 + uVar20) = &DAT_14dda69ae;
  uVar17 = (*(code *)0x1651922f1)();
  *(undefined8 *)(&stack0xfffffffff3eed0cb + uVar20) = in_R11;
  uVar16 = *(undefined8 *)(&stack0xfffffffff3eed0c3 + uVar20);
  *(undefined8 *)(&stack0xfffffffff3eed0c3 + uVar20) = 0x40b71671;
  *puVar1 = 0x40b71671;
  *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20) = uVar17;
  uVar17 = *(undefined8 *)(unaff_R12 + -8);
  uVar5 = *(ulonglong *)(&stack0xfffffffff3eed0b3 + uVar20);
  *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20) = param_3;
  *(undefined8 *)(&stack0xfffffffff3eed0c3 + uVar20) = uVar17;
  uVar17 = *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20);
  *puVar1 = *(undefined8 *)(unaff_R12 + -0x98);
  *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20) = uVar16;
  uVar4 = *(ulonglong *)(unaff_R12 + -0xa0);
  *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20) = param_1;
  *(undefined8 *)(&stack0xfffffffff3eed0ab + uVar20) = uVar17;
  puVar18 = &DAT_162d27064;
  *(undefined8 *)(&stack0xfffffffff3eed0ab + uVar20) = 0x14dda6a43;
  uVar17 = (*(code *)&DAT_162d27064)();
  *(ulonglong *)(&stack0xfffffffff3eed0cb + uVar20) =
       *(ulonglong *)(&stack0xfffffffff3eed0cb + uVar20) & (ulonglong)puVar18;
  *(longlong *)(&stack0xfffffffff3eed0cb + uVar20) =
       *(longlong *)(&stack0xfffffffff3eed0cb + uVar20) << 1;
  *(undefined1 **)(&stack0xfffffffff3eed0b3 + uVar20) = puVar19;
  *(undefined **)(&stack0xfffffffff3eed0cb + uVar20) =
       puVar18 + ((~((~uVar5 | uVar4) + uVar5 + 1) & (uVar4 | uVar5)) -
                 *(longlong *)(&stack0xfffffffff3eed0cb + uVar20));
  *puVar1 = uVar17;
  *(undefined8 *)(&stack0xfffffffff3eed0b3 + uVar20) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff3eed0ab + uVar20) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffff3eed0a3 + uVar20) = unaff_R15;
  *(undefined **)(&stack0xfffffffff3eed0ab + uVar20) = &DAT_14dda6ab0;
  return (ulonglong)puVar18 ^ 0xffffffffffffffff;
}



// FUNCTION 14dda6bfd FUN_14dda6bfd body=169 status=ok
// SIG undefined FUN_14dda6bfd(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dda6bfd(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong lStackX_20;
  
  uVar2 = *(ulonglong *)(unaff_RBP + 8 + unaff_R15);
  *(undefined8 *)(unaff_RBP + 8 + unaff_R15) = 0;
  plVar1 = (longlong *)(unaff_RBP + 8 + unaff_R15);
  *plVar1 = *plVar1 - ~(in_RAX & uVar2);
  plVar1 = (longlong *)(unaff_RBP + 8 + unaff_R15);
  *plVar1 = -*plVar1;
  *(longlong *)((longlong)&lStackX_20 + unaff_R15) =
       *(longlong *)((longlong)&lStackX_20 + unaff_R15) - unaff_R14;
  return;
}



// FUNCTION 14dda6dda FUN_14dda6dda body=23 status=ok
// SIG undefined FUN_14dda6dda(void)

void FUN_14dda6dda(void)

{
  return;
}



// FUNCTION 14dda6f99 FUN_14dda6f99 body=306 status=ok
// SIG undefined FUN_14dda6f99(void)

/* WARNING: Removing unreachable block (ram,0x00014dda7034) */
/* WARNING: Removing unreachable block (ram,0x00014dda703a) */
/* WARNING: Removing unreachable block (ram,0x000166415e8f) */
/* WARNING: Removing unreachable block (ram,0x00014dda70b0) */
/* WARNING: Removing unreachable block (ram,0x00014dda70b6) */
/* WARNING: Removing unreachable block (ram,0x00014dda70bb) */
/* WARNING: Removing unreachable block (ram,0x00014dda7145) */
/* WARNING: Removing unreachable block (ram,0x00014dda714b) */
/* WARNING: Removing unreachable block (ram,0x0001622d82a0) */

void FUN_14dda6f99(ulonglong param_1)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  
  FUN_16274437b(CONCAT71((int7)(param_1 >> 8),0xc5) ^ 0xc4,
                (~((in_R10 - (unaff_RSI | in_R10)) + unaff_RSI) + in_R10) -
                (unaff_RSI ^ 0xffffffffffffffff),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dda703a FUN_14dda703a body=128 status=ok
// SIG undefined FUN_14dda703a(void)

/* WARNING: Removing unreachable block (ram,0x00014dda70bb) */
/* WARNING: Removing unreachable block (ram,0x00014dda7145) */
/* WARNING: Removing unreachable block (ram,0x0001622d82a0) */
/* WARNING: Removing unreachable block (ram,0x00014dda714b) */

void FUN_14dda703a(void)

{
  ulonglong unaff_RBP;
  longlong unaff_R12;
  
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R12 + -0x70) + unaff_RBP +
           (*(ulonglong *)(unaff_R12 + -0x70) & unaff_RBP) * -2)) {
    FUN_166415e8f();
    return;
  }
  FUN_165d4c00f(~(*(ulonglong *)(unaff_R12 + -0x68) & unaff_RBP) &
                (*(ulonglong *)(unaff_R12 + -0x68) | unaff_RBP),
                *(ulonglong *)(unaff_R12 + -0x30) ^ unaff_RBP,FUN_165d4c00f);
  return;
}



// FUNCTION 14dda70bb FUN_14dda70bb body=284 status=ok
// SIG undefined FUN_14dda70bb(void)

/* WARNING: Removing unreachable block (ram,0x00014dda714b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dda70bb(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7a7692(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dda71d7 FUN_14dda71d7 body=161 status=ok
// SIG undefined FUN_14dda71d7(void)

void FUN_14dda71d7(void)

{
  FUN_162d1bce7();
  return;
}



// FUNCTION 14dda72fd FUN_14dda72fd body=140 status=ok
// SIG undefined FUN_14dda72fd(void)

void FUN_14dda72fd(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_res18;
  
  *(ulonglong *)(param_3 + 0x18) = (*(ulonglong *)(param_3 + 0x18) | 1) - 1;
  FUN_166c7b71c(local_res18,param_2,FUN_166c7b71c);
  return;
}



// FUNCTION 14dda7441 FUN_14dda7441 body=377 status=ok
// SIG undefined FUN_14dda7441(void)

/* WARNING: Removing unreachable block (ram,0x00014dda74dd) */

void FUN_14dda7441(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 8);
  uVar2 = *(ulonglong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = ~*(ulonglong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) | unaff_R15;
  *(ulonglong *)(unaff_RDI + 8) =
       ~((-~uVar2 - (~(0xffffffffffffffff - (param_2 & uVar1)) + 2)) - ~param_2 &
        *(ulonglong *)(unaff_RDI + 8));
  uVar1 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  if (uVar1 == 0) {
    FUN_1570d3d78();
    return;
  }
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = 0x166f85466;
  lVar3 = *(longlong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = 0x166f85466;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R13;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_1570d3e3b;
  FUN_1615d23e7(param_1,in_stack_00000010,lVar3 + -0x59b3039);
  return;
}



// FUNCTION 14dda760d FUN_14dda760d body=153 status=ok
// SIG undefined FUN_14dda760d(void)

void FUN_14dda760d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R14;
  
  plVar1 = (longlong *)(&stack0xfffffffff203ba78 + unaff_R14);
  *(undefined8 *)(&stack0xfffffffff203ba70 + unaff_R14) = *(undefined8 *)(unaff_R12 + -0xa0);
  *plVar1 = 0;
  *plVar1 = *plVar1 + *(longlong *)(&stack0xfffffffff203ba70 + unaff_R14);
  *(undefined8 *)(&stack0xfffffffff203ba80 + unaff_R14) =
       *(undefined8 *)(&stack0xfffffffff203ba80 + unaff_R14);
  *(undefined8 *)(&stack0xfffffffff203ba78 + unaff_R14) = param_3;
  *(undefined8 *)(&stack0xfffffffff203ba70 + unaff_R14) = unaff_RSI;
  uVar2 = *(undefined8 *)(&stack0xfffffffff203ba78 + unaff_R14);
  *(undefined8 *)(&stack0xfffffffff203ba78 + unaff_R14) =
       *(undefined8 *)(&stack0xfffffffff203ba70 + unaff_R14);
  *(undefined8 *)(&stack0xfffffffff203ba78 + unaff_R14) = param_1;
  FUN_161bcd6d5(FUN_161bcd6d5,param_2,uVar2);
  return;
}



// FUNCTION 14dda77e1 FUN_14dda77e1 body=284 status=ok
// SIG undefined FUN_14dda77e1(void)

/* WARNING: Removing unreachable block (ram,0x00014dda7824) */
/* WARNING: Removing unreachable block (ram,0x00014dda786c) */

void FUN_14dda77e1(void)

{
  return;
}



// FUNCTION 14dda787b FUN_14dda787b body=120 status=ok
// SIG undefined FUN_14dda787b(void)

longlong FUN_14dda787b(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return (~(in_RAX | unaff_R15) | ~(in_RAX & unaff_R15)) + (in_RAX | unaff_R15) + 1;
}



// FUNCTION 14dda78f5 FUN_14dda78f5 body=498 status=ok
// SIG undefined FUN_14dda78f5(void)

void FUN_14dda78f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  
  if ((&DAT_00000007 < &stack0x00000000) && (&stack0x00000000 < &DAT_00000008)) {
    FUN_16598f353(param_1,in_RAX >> 0x3f,param_3,0x2bc9197f);
    return;
  }
  return;
}



// FUNCTION 14dda7a50 FUN_14dda7a50 body=132 status=ok
// SIG undefined FUN_14dda7a50(void)

void FUN_14dda7a50(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RBX;
  ulonglong unaff_RDI;
  
  uVar1 = *unaff_RBX;
  uVar2 = *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | param_1;
  *unaff_RBX = ~((~uVar1 & unaff_RDI | uVar2) & *unaff_RBX);
  (*(code *)0x14dc46fb9)();
  return;
}



// FUNCTION 14dda7ad5 FUN_14dda7ad5 body=193 status=ok
// SIG undefined FUN_14dda7ad5(void)

void FUN_14dda7ad5(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 uStackX_10;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ unaff_RBP;
  *(undefined8 *)(in_stack_00000028 - 8) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R13;
  *(undefined1 **)(in_stack_00000028 - 8) = &LAB_1574c3fba;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 0x18);
  *(undefined8 *)(in_stack_00000028 - 0x18) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x20) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x28) = uVar1;
  *(undefined **)(in_stack_00000028 - 0x18) = &DAT_14dda7b96;
  *(undefined8 *)(in_stack_00000028 - 0x20) = 0x1574c3f93;
  return;
}



// FUNCTION 14dda7e4a FUN_14dda7e4a body=128 status=ok
// SIG undefined FUN_14dda7e4a(void)

void FUN_14dda7e4a(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  lVar2 = (param_1 - (uVar1 | param_1)) + uVar1;
  FUN_161af2cd9(param_1,lVar2,(-~param_1 - (~uVar1 + 2)) + lVar2 * -2,
                ~((param_1 ^ 0xffffffffffffffff | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14dda7ed0 FUN_14dda7ed0 body=160 status=ok
// SIG undefined FUN_14dda7ed0(void)

void FUN_14dda7ed0(undefined8 param_1)

{
  FUN_15b9f681f(param_1,FUN_15b9f681f);
  return;
}



// FUNCTION 14dda7f76 FUN_14dda7f76 body=462 status=ok
// SIG undefined FUN_14dda7f76(void)

/* WARNING: Removing unreachable block (ram,0x00014dda80aa) */
/* WARNING: Removing unreachable block (ram,0x00014dda80b5) */
/* WARNING: Removing unreachable block (ram,0x00014dda80b0) */
/* WARNING: Removing unreachable block (ram,0x00014dda800a) */
/* WARNING: Removing unreachable block (ram,0x00014dda8069) */

void FUN_14dda7f76(void)

{
  if (&DAT_fffffffffffffff7 < &stack0xffffffffffffffe0) {
    FUN_16155beee();
    return;
  }
  return;
}



// FUNCTION 14dda8146 FUN_14dda8146 body=287 status=ok
// SIG undefined FUN_14dda8146(void)

/* WARNING: Removing unreachable block (ram,0x0001665976a3) */
/* WARNING: Removing unreachable block (ram,0x0001665976ae) */
/* WARNING: Removing unreachable block (ram,0x00014dda81e5) */
/* WARNING: Removing unreachable block (ram,0x00014dda81eb) */
/* WARNING: Removing unreachable block (ram,0x00016659761a) */
/* WARNING: Removing unreachable block (ram,0x00016659769e) */
/* WARNING: Removing unreachable block (ram,0x0001665976a9) */

void FUN_14dda8146(void)

{
  thunk_FUN_166597620();
  return;
}



// FUNCTION 14dda8268 FUN_14dda8268 body=207 status=ok
// SIG undefined FUN_14dda8268(void)

void FUN_14dda8268(void)

{
  return;
}



// FUNCTION 14dda8339 FUN_14dda8339 body=310 status=ok
// SIG undefined FUN_14dda8339(void)

void FUN_14dda8339(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_1669da8fd(param_1,FUN_1669da8fd,local_res8);
  FUN_15694eeb7(&DAT_ac91427a73ca2b2b,FUN_15694eeb7);
  return;
}



// FUNCTION 14dda8474 FUN_14dda8474 body=584 status=ok
// SIG undefined FUN_14dda8474(void)

/* WARNING: Removing unreachable block (ram,0x00014dda858a) */
/* WARNING: Removing unreachable block (ram,0x00014dda8590) */
/* WARNING: Removing unreachable block (ram,0x00014d89da40) */
/* WARNING: Removing unreachable block (ram,0x00014dda84f9) */

undefined8 FUN_14dda8474(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  longlong unaff_R14;
  
  if (-1 < unaff_R14) {
    return in_RAX;
  }
  uVar1 = FUN_16586def9();
  return uVar1;
}



// FUNCTION 14dda8747 FUN_14dda8747 body=91 status=ok
// SIG undefined FUN_14dda8747(void)

void FUN_14dda8747(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RDI;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined1 **)(local_res18 + -8) = &LAB_14dda87c3;
                    /* WARNING: Could not recover jumptable at 0x00014dda87a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(local_res18 + -0x10),uStackX_8);
  return;
}



// FUNCTION 14dda87ee FUN_14dda87ee body=158 status=ok
// SIG undefined FUN_14dda87ee(void)

void FUN_14dda87ee(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + unaff_RBX + 0x4330fa73);
  FUN_166173749(param_1,FUN_166173749,(~param_1 | uVar1) & (~uVar1 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dda8894 FUN_14dda8894 body=131 status=ok
// SIG undefined FUN_14dda8894(void)

/* WARNING: Removing unreachable block (ram,0x00016493c1f9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0294) */
/* WARNING: Removing unreachable block (ram,0x00014dda89a7) */
/* WARNING: Removing unreachable block (ram,0x000164c51870) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a32) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a38) */
/* WARNING: Removing unreachable block (ram,0x00014dda8918) */
/* WARNING: Removing unreachable block (ram,0x00015ba40f3f) */
/* WARNING: Removing unreachable block (ram,0x00014dda899c) */
/* WARNING: Removing unreachable block (ram,0x00014dda89a2) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a3d) */

void FUN_14dda8894(void)

{
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ 0xffffffffffffffff | unaff_retaddr;
  if ((uVar1 - (~unaff_retaddr | local_res18 | uVar1)) + (~unaff_retaddr | local_res18) == 0) {
    FUN_156e2c0b8();
    return;
  }
  FUN_156e2c0b8();
  return;
}



// FUNCTION 14dda8918 FUN_14dda8918 body=291 status=ok
// SIG undefined FUN_14dda8918(void)

/* WARNING: Removing unreachable block (ram,0x00016493c1f9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0294) */
/* WARNING: Removing unreachable block (ram,0x00014dda89a7) */
/* WARNING: Removing unreachable block (ram,0x000164c51870) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a32) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a38) */
/* WARNING: Removing unreachable block (ram,0x00014dda8a3d) */

void FUN_14dda8918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_2;
  if (-1 < (char)((char)param_2 >> 0x17)) {
    FUN_16493c166();
    return;
  }
  puVar1 = (undefined8 *)(local_res20 + -0x10);
  *puVar1 = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *puVar1 = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = 0x1c814438;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x4f1c28f5;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x6b9d6d2d;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x15ba40f6c;
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x18);
  FUN_14d7ab21e(param_1,*puVar1,param_3,local_res8);
  return;
}



// FUNCTION 14dda8a3d FUN_14dda8a3d body=304 status=ok
// SIG undefined FUN_14dda8a3d(void)

void FUN_14dda8a3d(void)

{
  FUN_16664d5f7();
  FUN_15b486cc4();
  return;
}



// FUNCTION 14dda8c9c FUN_14dda8c9c body=134 status=ok
// SIG undefined FUN_14dda8c9c(void)

void FUN_14dda8c9c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161d02d95(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        ~(~*(ulonglong *)(unaff_RDI + -0x68) & ~param_1));
  FUN_14dda8d24();
  return;
}



// FUNCTION 14dda8d24 FUN_14dda8d24 body=148 status=ok
// SIG undefined FUN_14dda8d24(void)

/* WARNING: Removing unreachable block (ram,0x00014dda8eee) */
/* WARNING: Removing unreachable block (ram,0x00014dda8ef9) */
/* WARNING: Removing unreachable block (ram,0x00014dda8ef4) */
/* WARNING: Removing unreachable block (ram,0x00014dda8e3e) */
/* WARNING: Removing unreachable block (ram,0x000156f3482c) */

void FUN_14dda8d24(longlong param_1)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = unaff_RBP + in_R10 * -2;
  FUN_164f00564(param_1 << 0xc,0,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15) ^ 0xffffffffffffffff);
  FUN_157803ff9();
  FUN_165936c2a(FUN_165936c2a,lVar1);
  return;
}



// FUNCTION 14dda8db9 FUN_14dda8db9 body=656 status=ok
// SIG undefined FUN_14dda8db9(void)

/* WARNING: Removing unreachable block (ram,0x00014dda8eee) */
/* WARNING: Removing unreachable block (ram,0x00014dda8ef9) */
/* WARNING: Removing unreachable block (ram,0x00014dda8ef4) */
/* WARNING: Removing unreachable block (ram,0x00014dda8e3e) */
/* WARNING: Removing unreachable block (ram,0x000156f3482c) */

void FUN_14dda8db9(void)

{
  undefined8 in_R10;
  
  FUN_157803ff9();
  FUN_165936c2a(FUN_165936c2a,in_R10);
  return;
}



// FUNCTION 14dda9046 FUN_14dda9046 body=360 status=ok
// SIG undefined FUN_14dda9046(void)

/* WARNING: Removing unreachable block (ram,0x00014dda918d) */

void FUN_14dda9046(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  char *pcVar2;
  longlong in_RAX;
  byte unaff_R12B;
  byte bVar3;
  
  bVar3 = 0x6c - (~unaff_R12B + 2);
  *(undefined1 *)(param_1 + -2 + in_RAX) = 0;
  pbVar1 = (byte *)(param_1 + -2 + in_RAX);
  *pbVar1 = *pbVar1 ^ 0x13;
  pbVar1 = (byte *)(param_1 + -2 + in_RAX);
  *pbVar1 = *pbVar1 ^ 0x13;
  pcVar2 = (char *)(param_1 + -2 + in_RAX);
  *pcVar2 = *pcVar2 - ~((~param_4 | bVar3) & (~bVar3 | param_4));
  pcVar2 = (char *)(param_1 + -2 + in_RAX);
  *pcVar2 = -*pcVar2;
  FUN_156c0a8c8(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dda91b0 FUN_14dda91b0 body=572 status=ok
// SIG undefined FUN_14dda91b0(void)

/* WARNING: Removing unreachable block (ram,0x0001668a9b35) */
/* WARNING: Removing unreachable block (ram,0x0001668a9b3b) */
/* WARNING: Removing unreachable block (ram,0x00014dda9241) */

void FUN_14dda91b0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x98);
  puVar1 = (undefined8 *)(*(ulonglong *)(unaff_RDI + -0x90) ^ param_1);
  uVar4 = rdtsc();
  puVar1[-2] = param_4;
  puVar1[-3] = 0x511efc4;
  puVar1[-1] = puVar1[-3];
  puVar1[-3] = 0x156cfdbea;
  UNRECOVERED_JUMPTABLE = (code *)FUN_15764de8e(uVar3 ^ param_1,uVar4 >> 0x20);
  uVar2 = *(undefined8 *)((longlong)puVar1 + ((unaff_R15 ^ 0x75c19863) - 8));
  puVar1[-2] = in_R11;
  *puVar1 = uVar2;
  uVar2 = puVar1[-1];
  puVar1[-1] = puVar1[-2];
  puVar1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000156cfdc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dda9363 FUN_14dda9363 body=136 status=ok
// SIG undefined FUN_14dda9363(void)

/* WARNING: Removing unreachable block (ram,0x00014dda93ec) */

void FUN_14dda9363(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  ulonglong *unaff_R14;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  uVar1 = *unaff_R14;
  *unaff_R14 = -*unaff_R14;
  *unaff_R14 = *unaff_R14 - 1;
  *unaff_R14 = *unaff_R14 | unaff_RBP;
  *unaff_R14 = ~((~unaff_RBP | uVar1) & *unaff_R14);
  uVar1 = (unaff_RBP - (in_stack_00000018 | unaff_RBP)) + in_stack_00000018;
  if (-1 < (longlong)uVar1) {
    thunk_FUN_15b4d62c0();
    return;
  }
  uVar1 = ~(~(uVar1 ^ 0xffffffffffffffff) | ~in_stack_00000018 & ~unaff_RBP);
  (*(code *)0x1658e4b8a)
            (0x1658e4b8a,CONCAT62((int6)((ulonglong)param_2 >> 0x10),(short)uVar1) | 0x100,param_3,
             param_4,uVar1,in_stack_00000020 ^ unaff_RBP);
  return;
}



// FUNCTION 14dda93ec FUN_14dda93ec body=143 status=ok
// SIG undefined FUN_14dda93ec(void)

void FUN_14dda93ec(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x1652d149b)
            (*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,0x1652d149b,
             *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP);
  return;
}



// FUNCTION 14dda947b FUN_14dda947b body=132 status=ok
// SIG undefined FUN_14dda947b(void)

void FUN_14dda947b(void)

{
  (*(code *)0x156fc060c)();
  return;
}



// FUNCTION 14dda9507 FUN_14dda9507 body=235 status=ok
// SIG undefined FUN_14dda9507(void)

/* WARNING: Removing unreachable block (ram,0x00016670046e) */
/* WARNING: Removing unreachable block (ram,0x000166700474) */
/* WARNING: Removing unreachable block (ram,0x00016503dacf) */
/* WARNING: Removing unreachable block (ram,0x00016670029d) */
/* WARNING: Removing unreachable block (ram,0x0001667002a3) */
/* WARNING: Removing unreachable block (ram,0x000166700331) */
/* WARNING: Removing unreachable block (ram,0x000166a90c3f) */
/* WARNING: Removing unreachable block (ram,0x000166700337) */
/* WARNING: Removing unreachable block (ram,0x000166700469) */
/* WARNING: Removing unreachable block (ram,0x000166a90c7a) */
/* WARNING: Removing unreachable block (ram,0x000166a90c7e) */
/* WARNING: Removing unreachable block (ram,0x000166a90cbc) */
/* WARNING: Removing unreachable block (ram,0x0001665d80d7) */
/* WARNING: Removing unreachable block (ram,0x00014dda9591) */

undefined8 FUN_14dda9507(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1665d80d7();
  return uVar1;
}



// FUNCTION 14dda967a FUN_14dda967a body=217 status=ok
// SIG undefined FUN_14dda967a(void)

/* WARNING: Removing unreachable block (ram,0x00014dda96b1) */

void FUN_14dda967a(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164f00a71(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,FUN_164f00a71,
                *(ulonglong *)(unaff_R13 + (param_2 ^ ~(param_3 & ~(~unaff_RDI & 0x29227e42)))) ^
                unaff_R15);
  FUN_1629c9909();
  return;
}



// FUNCTION 14dda9754 FUN_14dda9754 body=270 status=ok
// SIG undefined FUN_14dda9754(void)

/* WARNING: Removing unreachable block (ram,0x0001666cbd61) */
/* WARNING: Removing unreachable block (ram,0x0001666cbd67) */
/* WARNING: Removing unreachable block (ram,0x0001666cbd6c) */
/* WARNING: Removing unreachable block (ram,0x0001666cbdf2) */
/* WARNING: Removing unreachable block (ram,0x0001666cbdf7) */
/* WARNING: Removing unreachable block (ram,0x0001666cbdfd) */
/* WARNING: Removing unreachable block (ram,0x0001666cbe02) */
/* WARNING: Removing unreachable block (ram,0x0001564c3d54) */
/* WARNING: Removing unreachable block (ram,0x000162a22ae4) */
/* WARNING: Removing unreachable block (ram,0x000162a22af0) */
/* WARNING: Removing unreachable block (ram,0x000162a22af5) */
/* WARNING: Removing unreachable block (ram,0x000162a22b12) */
/* WARNING: Removing unreachable block (ram,0x000162a22b16) */
/* WARNING: Removing unreachable block (ram,0x000162a22b6d) */
/* WARNING: Removing unreachable block (ram,0x000162a22b78) */
/* WARNING: Removing unreachable block (ram,0x000162a22b7e) */
/* WARNING: Removing unreachable block (ram,0x0001564c3d45) */
/* WARNING: Removing unreachable block (ram,0x000165e3edf2) */
/* WARNING: Removing unreachable block (ram,0x0001666cbccc) */
/* WARNING: Removing unreachable block (ram,0x00016695b3ed) */
/* WARNING: Removing unreachable block (ram,0x00014dda97ad) */
/* WARNING: Removing unreachable block (ram,0x00016695b20c) */
/* WARNING: Removing unreachable block (ram,0x00016695b2cf) */
/* WARNING: Removing unreachable block (ram,0x000165e3edb2) */
/* WARNING: Removing unreachable block (ram,0x00016695b2db) */
/* WARNING: Removing unreachable block (ram,0x00016695b362) */
/* WARNING: Removing unreachable block (ram,0x0001666cbc4e) */
/* WARNING: Removing unreachable block (ram,0x0001666cbcc6) */
/* WARNING: Removing unreachable block (ram,0x00014d8991c8) */
/* WARNING: Removing unreachable block (ram,0x00016695b2c4) */
/* WARNING: Removing unreachable block (ram,0x00016695b368) */
/* WARNING: Removing unreachable block (ram,0x000162a22a69) */
/* WARNING: Removing unreachable block (ram,0x00016695b3e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dda9754(longlong param_1)

{
  undefined8 uVar1;
  
  if (-1 < (longlong)
           ((0x4d5ff4ed1eee8b8c - (~*(ulonglong *)(param_1 + -0x50) + 2)) +
           (*(ulonglong *)(param_1 + -0x50) & 0x4d5ff4ed1eee8b8b) * -2)) {
    uVar1 = FUN_162e04eb1();
    return uVar1;
  }
  uVar1 = FUN_162e04eb1();
  return uVar1;
}



// FUNCTION 14dda9864 FUN_14dda9864 body=289 status=ok
// SIG undefined FUN_14dda9864(void)

/* WARNING: Removing unreachable block (ram,0x00014dda9988) */

void FUN_14dda9864(void)

{
  ulonglong uVar1;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15;
  FUN_164a29334(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x68));
  if ((*(ulonglong *)(uVar1 - 0x40) | 0x164a29334) == 0) {
    FUN_166ca6b20();
    return;
  }
  FUN_15658bee4(~*(ulonglong *)(uVar1 - 0x38) | 0x164a29334,FUN_15658bee4,
                ~(*(ulonglong *)(uVar1 - 0x60) & 0x164a29334) &
                (*(ulonglong *)(uVar1 - 0x60) & 0xfffffffe9b5d6ccb | 0x164a29334),
                in_R9 ^ 0x164a29334);
  return;
}



// FUNCTION 14dda9988 FUN_14dda9988 body=161 status=ok
// SIG undefined FUN_14dda9988(void)

void FUN_14dda9988(void)

{
  FUN_15b925b12();
  return;
}



// FUNCTION 14dda9a2a FUN_14dda9a2a body=232 status=ok
// SIG undefined FUN_14dda9a2a(void)

/* WARNING: Removing unreachable block (ram,0x00014dda9a7a) */
/* WARNING: Removing unreachable block (ram,0x00016623adae) */
/* WARNING: Removing unreachable block (ram,0x00016623adca) */
/* WARNING: Removing unreachable block (ram,0x00016623ade1) */
/* WARNING: Removing unreachable block (ram,0x00014dda9a91) */

void FUN_14dda9a2a(void)

{
  int in_R9D;
  
  if (in_R9D == 0) {
    FUN_16623ad14();
    return;
  }
  FUN_161cc926f();
  return;
}



// FUNCTION 14dda9b80 FUN_14dda9b80 body=356 status=ok
// SIG undefined FUN_14dda9b80(void)

/* WARNING: Removing unreachable block (ram,0x00014dda9c39) */
/* WARNING: Removing unreachable block (ram,0x00014dda9c44) */
/* WARNING: Removing unreachable block (ram,0x00014dda9c3f) */

void FUN_14dda9b80(void)

{
  FUN_162909485();
  return;
}



// FUNCTION 14dda9e39 FUN_14dda9e39 body=28 status=ok
// SIG undefined FUN_14dda9e39(void)

void FUN_14dda9e39(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  
  *in_R10 = in_R11;
  thunk_FUN_15b0572f1(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dda9ee8 FUN_14dda9ee8 body=144 status=ok
// SIG undefined FUN_14dda9ee8(void)

/* WARNING: Removing unreachable block (ram,0x00014dda9f6d) */
/* WARNING: Removing unreachable block (ram,0x00014dda9f78) */
/* WARNING: Removing unreachable block (ram,0x00014dda9f9a) */
/* WARNING: Removing unreachable block (ram,0x00014dda9f9e) */
/* WARNING: Removing unreachable block (ram,0x00014dda9f73) */

undefined8 FUN_14dda9ee8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166a7c35a();
  return uVar1;
}



// FUNCTION 14dda9f78 FUN_14dda9f78 body=142 status=ok
// SIG undefined FUN_14dda9f78(void)

/* WARNING: Removing unreachable block (ram,0x00014dda9f9a) */

undefined8 FUN_14dda9f78(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14ddaa132 FUN_14ddaa132 body=171 status=ok
// SIG undefined FUN_14ddaa132(void)

undefined8 FUN_14ddaa132(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14ddaa498 FUN_14ddaa498 body=145 status=ok
// SIG undefined FUN_14ddaa498(void)

void FUN_14ddaa498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15704061c(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4);
  return;
}



// FUNCTION 14ddaa746 FUN_14ddaa746 body=190 status=ok
// SIG undefined FUN_14ddaa746(void)

undefined8 FUN_14ddaa746(void)

{
  longlong *plVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  longlong local_res20;
  
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - local_res10;
  *plVar1 = -*plVar1;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R13;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14ddaa806;
  *(undefined **)(local_res20 + -0x20) = &DAT_15afa657c;
  return unaff_retaddr;
}



// FUNCTION 14ddaab82 FUN_14ddaab82 body=162 status=ok
// SIG undefined FUN_14ddaab82(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddaab82(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_162cb40d5(param_1,*(undefined8 *)(unaff_RDI + -0x60),FUN_162cb40d5);
  return;
}



// FUNCTION 14ddaac26 FUN_14ddaac26 body=299 status=ok
// SIG undefined FUN_14ddaac26(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaaca6) */
/* WARNING: Removing unreachable block (ram,0x00014ddaacac) */
/* WARNING: Removing unreachable block (ram,0x00014ddaacf8) */
/* WARNING: Removing unreachable block (ram,0x00014ddaacf3) */
/* WARNING: Removing unreachable block (ram,0x00014ddaacfb) */
/* WARNING: Removing unreachable block (ram,0x00015b05c395) */

void FUN_14ddaac26(void)

{
  FUN_15b05c395();
  return;
}



// FUNCTION 14ddaad54 FUN_14ddaad54 body=267 status=ok
// SIG undefined FUN_14ddaad54(void)

/* WARNING: Removing unreachable block (ram,0x000156f21538) */
/* WARNING: Removing unreachable block (ram,0x00014ddaadda) */
/* WARNING: Removing unreachable block (ram,0x00014ddaade0) */
/* WARNING: Removing unreachable block (ram,0x000156f21581) */
/* WARNING: Removing unreachable block (ram,0x000156f21584) */
/* WARNING: Removing unreachable block (ram,0x000156f215c4) */
/* WARNING: Removing unreachable block (ram,0x000156f215ca) */
/* WARNING: Removing unreachable block (ram,0x000156f21657) */
/* WARNING: Removing unreachable block (ram,0x000156f2165d) */
/* WARNING: Removing unreachable block (ram,0x000162e89a79) */
/* WARNING: Removing unreachable block (ram,0x000164fd5a20) */

undefined8 FUN_14ddaad54(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156f21538();
  return uVar1;
}



// FUNCTION 14ddaae62 FUN_14ddaae62 body=724 status=ok
// SIG undefined FUN_14ddaae62(void)

/* WARNING: Removing unreachable block (ram,0x00015664f5dd) */
/* WARNING: Removing unreachable block (ram,0x00014ddaaedd) */
/* WARNING: Removing unreachable block (ram,0x00014ddaaee3) */
/* WARNING: Removing unreachable block (ram,0x00015b717af7) */
/* WARNING: Removing unreachable block (ram,0x00015b717afd) */

void FUN_14ddaae62(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong in_RAX;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong *in_R10;
  ulonglong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res18;
  ulonglong local_res20;
  
  *in_R10 = *in_R10 - 1;
  *in_R10 = *in_R10 | param_1;
  *in_R10 = ~in_RAX | ~*in_R10;
  uVar1 = local_res20 ^ param_1;
  puVar6 = (ulonglong *)
           ((~(~param_5 | param_1) | ~param_1 | param_5) + (~param_5 | param_1) + 1 ^
           0xffffffffffffffff);
  uVar5 = rdtsc();
  uVar8 = CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)((ulonglong)uVar5 >> 0x20));
  puVar6[-1] = unaff_RDI;
  puVar6[-2] = unaff_RDI;
  puVar6[-3] = (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar1 & 0x800) != 0) * 0x800 | (ulonglong)((uVar1 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
               (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  puVar6[-4] = 0xfea1759;
  puVar6[-4] = puVar6[-4] + -0xf9478bf;
  puVar6[-3] = unaff_R13;
  puVar6[-1] = 0x559e9a;
  lVar2 = puVar6[-3];
  puVar6[-3] = 0x15b717a5a;
  uVar7 = FUN_1618901b9();
  uVar3 = puVar6[-1];
  uVar1 = *puVar6;
  uVar4 = puVar6[1];
  uVar5 = puVar6[2];
  puVar6[2] = uVar8;
  puVar6[1] = uVar8;
  *puVar6 = puVar6[-2];
  puVar6[2] = *(ulonglong *)(lVar2 + -0x70);
  uVar8 = puVar6[1];
  puVar6[1] = *(undefined8 *)(lVar2 + -8);
  *puVar6 = *(ulonglong *)(lVar2 + -0x98);
  puVar6[-1] = in_R11;
  puVar6[-1] = uVar4;
  if ((char)*puVar6 < '\0') {
    puVar6[-2] = local_res18;
    local_res18 = puVar6[-2];
    puVar6[-2] = uVar7;
  }
  puVar6[-2] = unaff_RBX;
  puVar6[-3] = uVar1;
  *puVar6 = *puVar6 ^ unaff_R15;
  puVar6[1] = puVar6[1] ^ unaff_R15;
  puVar6[-1] = uVar3;
  puVar6[-2] = uVar3;
  *(undefined2 *)(puVar6 + -2) = 0xb6c5;
  puVar6[-2] = local_res18;
  puVar6[-3] = unaff_R14;
  FUN_1570b1e45(puVar6[-2],uVar8,puVar6[-1],uVar5);
  return;
}



// FUNCTION 14ddab160 FUN_14ddab160 body=102 status=ok
// SIG undefined FUN_14ddab160(void)

void FUN_14ddab160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  uVar1 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_14ddab1dc;
                    /* WARNING: Could not recover jumptable at 0x00014ddab1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,*(undefined8 *)(local_res10 + -0x18));
  return;
}



// FUNCTION 14ddab203 FUN_14ddab203 body=292 status=ok
// SIG undefined FUN_14ddab203(void)

void FUN_14ddab203(void)

{
  FUN_1611da711();
  return;
}



// FUNCTION 14ddab29b FUN_14ddab29b body=148 status=ok
// SIG undefined FUN_14ddab29b(void)

/* WARNING: Removing unreachable block (ram,0x00014ddab325) */

void FUN_14ddab29b(undefined8 param_1,undefined8 param_2,int param_3)

{
  int unaff_ESI;
  uint in_R10D;
  
  if ((in_R10D & unaff_ESI - param_3) == 0xffffffff) {
    FUN_14db5e395();
    return;
  }
  FUN_14db5e395();
  return;
}



// FUNCTION 14ddab3a4 FUN_14ddab3a4 body=157 status=ok
// SIG undefined FUN_14ddab3a4(void)

void FUN_14ddab3a4(undefined8 param_1,short *param_2,short param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  short unaff_BX;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *param_2 = unaff_BX + param_3 + *param_2;
  *(undefined8 *)(param_5 + -8) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
  uVar1 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = in_R10;
  *(undefined8 *)(param_5 + -0x18) = uVar1;
  *(undefined8 *)(param_5 + -8) = 0x70e8ac85;
  FUN_15b0df18b(param_1,0xfffffffea4f20e17,local_res8,*(undefined8 *)(param_5 + -0x20));
  return;
}



// FUNCTION 14ddab441 FUN_14ddab441 body=343 status=ok
// SIG undefined FUN_14ddab441(void)

/* WARNING: Instruction at (ram,0x00014ddab519) overlaps instruction at (ram,0x00014ddab518)
    */
/* WARNING: Removing unreachable block (ram,0x0001622754d6) */
/* WARNING: Removing unreachable block (ram,0x000164c616b2) */
/* WARNING: Removing unreachable block (ram,0x00014ddab4e9) */
/* WARNING: Removing unreachable block (ram,0x00014ddab4f5) */
/* WARNING: Removing unreachable block (ram,0x00014ddab519) */
/* WARNING: Removing unreachable block (ram,0x00014ddab518) */
/* WARNING: Removing unreachable block (ram,0x00014ddab51e) */
/* WARNING: Removing unreachable block (ram,0x000164c61620) */
/* WARNING: Removing unreachable block (ram,0x0001611db377) */
/* WARNING: Removing unreachable block (ram,0x000164c61626) */

undefined8 FUN_14ddab441(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1611db377();
  return uVar1;
}



// FUNCTION 14ddab772 FUN_14ddab772 body=140 status=ok
// SIG undefined FUN_14ddab772(void)

/* WARNING: Removing unreachable block (ram,0x00014ddab79c) */

void FUN_14ddab772(undefined8 param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  HMODULE hModule;
  undefined8 in_R11;
  ulonglong unaff_R15;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = in_R11;
  *(undefined8 *)(param_5 - 0x10) = param_1;
  *(undefined8 *)(param_5 - 0x18) = param_1;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  hModule = *(HMODULE *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 8) = 0;
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) + 0x14ddab814;
                    /* WARNING: Could not recover jumptable at 0x00014ddab7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(hModule,param_2);
  return;
}



// FUNCTION 14ddabc3f FUN_14ddabc3f body=149 status=ok
// SIG undefined FUN_14ddabc3f(void)

void FUN_14ddabc3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R15;
  
  *(undefined4 *)(&stack0x00000000 + unaff_R15) = 0xffffffff;
  (*(code *)&LAB_156e07c4b)(param_1,&stack0x00000010,param_3,param_4);
  return;
}



// FUNCTION 14ddabcd6 FUN_14ddabcd6 body=2 status=ok
// SIG undefined FUN_14ddabcd6(void)

void FUN_14ddabcd6(void)

{
  return;
}



// FUNCTION 14ddabd74 FUN_14ddabd74 body=186 status=ok
// SIG undefined FUN_14ddabd74(void)

void FUN_14ddabd74(void)

{
  return;
}



// FUNCTION 14ddabe2e FUN_14ddabe2e body=296 status=ok
// SIG undefined FUN_14ddabe2e(void)

/* WARNING: Removing unreachable block (ram,0x00014ddabebf) */
/* WARNING: Removing unreachable block (ram,0x00014ddabec5) */
/* WARNING: Removing unreachable block (ram,0x000164783968) */

undefined8 FUN_14ddabe2e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong in_R11;
  undefined8 in_stack_00000018;
  
  lVar1 = *(longlong *)(in_R11 + 8);
  *(undefined8 *)(in_R11 + 8) = 0;
  *(longlong *)(in_R11 + 8) = *(longlong *)(in_R11 + 8) + param_1 + lVar1;
  uVar2 = FUN_164783968(in_stack_00000018);
  return uVar2;
}



// FUNCTION 14ddabf57 FUN_14ddabf57 body=616 status=ok
// SIG undefined FUN_14ddabf57(void)

/* WARNING: Removing unreachable block (ram,0x00014ddac0a4) */
/* WARNING: Removing unreachable block (ram,0x00014ddac0aa) */
/* WARNING: Removing unreachable block (ram,0x00014ddac10a) */
/* WARNING: Removing unreachable block (ram,0x00014ddac110) */
/* WARNING: Removing unreachable block (ram,0x000162c46e99) */
/* WARNING: Removing unreachable block (ram,0x00014ddac199) */
/* WARNING: Removing unreachable block (ram,0x00014ddac19f) */
/* WARNING: Removing unreachable block (ram,0x00014ddac1a4) */
/* WARNING: Removing unreachable block (ram,0x0001574ad249) */
/* WARNING: Removing unreachable block (ram,0x00014dc32489) */

void FUN_14ddabf57(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort in_AX;
  undefined8 in_stack_00000008;
  ushort in_stack_00000018;
  
  FUN_165f12184((in_stack_00000018 ^ in_AX | 0x100) - 0x100,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14ddac110 FUN_14ddac110 body=300 status=ok
// SIG undefined FUN_14ddac110(void)

/* WARNING: Removing unreachable block (ram,0x00014ddac1a4) */
/* WARNING: Removing unreachable block (ram,0x000162c46e99) */

void FUN_14ddac110(void)

{
  FUN_162c46e99();
  return;
}



// FUNCTION 14ddac2df FUN_14ddac2df body=176 status=ok
// SIG undefined FUN_14ddac2df(void)

/* WARNING: Removing unreachable block (ram,0x00014ddac37c) */

undefined8 FUN_14ddac2df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15)) {
    uVar1 = FUN_14dd78280(unaff_retaddr,param_2,param_3);
    return uVar1;
  }
  uVar1 = FUN_14dd78280(unaff_retaddr,param_2,param_3);
  return uVar1;
}



// FUNCTION 14ddac782 FUN_14ddac782 body=153 status=ok
// SIG undefined FUN_14ddac782(void)

void FUN_14ddac782(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1618cd6db(param_1,FUN_1618cd6db,*(ulonglong *)(unaff_RDI + -0x70) & param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14ddac974 FUN_14ddac974 body=144 status=ok
// SIG undefined FUN_14ddac974(void)

void FUN_14ddac974(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1567efd26(~((0xffffffffffffffff - param_1 & unaff_RBP | param_1) & (~param_1 | unaff_R15)),
                ~*(ulonglong *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14ddacaa2 FUN_14ddacaa2 body=158 status=ok
// SIG undefined FUN_14ddacaa2(void)

void FUN_14ddacaa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  byte in_TF;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_8;
  
  local_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  if ((ulonglong)(in_TF & 1) != 0) {
    register0x00000020 = (BADSPACEBASE *)&local_8;
  }
  *(undefined8 *)register0x00000020 = unaff_RSI;
  *(void **)((longlong)register0x00000020 + -8) = Win32ThreadInfo;
  uVar1 = *(undefined8 *)register0x00000020;
  *(undefined8 *)register0x00000020 = param_2;
  *(undefined8 *)((longlong)register0x00000020 + -8) = uVar1;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = uVar1;
  *(undefined1 **)((longlong)register0x00000020 + -8) = &LAB_14ddacb44;
  FUN_14dff51ef(param_1,FUN_14dff51ef);
  return;
}



// FUNCTION 14ddacbe2 FUN_14ddacbe2 body=404 status=ok
// SIG undefined FUN_14ddacbe2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Removing unreachable block (ram,0x00014d7be107) */
/* WARNING: Removing unreachable block (ram,0x00014d7be141) */
/* WARNING: Removing unreachable block (ram,0x00014d7be14b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be159) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14ddacbe2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong local_res8 [4];
  
  lVar2 = local_res8[0];
  local_res8[2] =
       *(longlong *)((longlong)local_res8 + (unaff_RBX ^ 0x59a1840)) + in_RAX +
       (local_res8[2] & in_RAX) * -2;
  uVar1 = (local_res8[3] + in_RAX) - (local_res8[3] & in_RAX);
  local_res8[3] = (~uVar1 | 0xffffffffffffffff - (local_res8[3] & in_RAX)) + uVar1 + 1;
  local_res8[0] = 0;
  if ((char)in_RAX < '\0') {
    local_res8[0] = -1;
  }
  local_res8[0] = CONCAT71(local_res8[0]._1_7_,(char)in_RAX);
  FUN_1654a784e(param_1,param_2,param_3,lVar2);
  return;
}



// FUNCTION 14ddacebc FUN_14ddacebc body=87 status=ok
// SIG undefined FUN_14ddacebc(void)

void FUN_14ddacebc(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  ulonglong in_stack_00000018;
  
  (*(code *)0x166d81143)(local_res8,0x166d81143,param_3,param_4,in_stack_00000018 ^ param_1);
  return;
}



// FUNCTION 14ddacf30 FUN_14ddacf30 body=99 status=ok
// SIG undefined FUN_14ddacf30(void)

void FUN_14ddacf30(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong in_R10;
  undefined8 unaff_R12;
  longlong lVar1;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(in_R10 + 0x18) = unaff_R12;
  lVar1 = (~param_2 | ~param_5) + param_2;
  *(undefined8 *)(lVar1 + -0x17) = in_stack_00000008;
  *(undefined8 *)(lVar1 + -0x1f) = in_stack_00000008;
  *(undefined **)(lVar1 + -0x17) = &DAT_14ddacf94;
  return;
}



// FUNCTION 14ddacfd8 FUN_14ddacfd8 body=462 status=ok
// SIG undefined FUN_14ddacfd8(void)

/* WARNING: Removing unreachable block (ram,0x00014ddad07c) */
/* WARNING: Removing unreachable block (ram,0x00014ddad105) */
/* WARNING: Removing unreachable block (ram,0x000166139583) */
/* WARNING: Removing unreachable block (ram,0x00014ddad10b) */

undefined8 FUN_14ddacfd8(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((*(ulonglong *)(unaff_RDI + -0x48) & param_1 & 0x7fffffffffffffff) == 0) {
    uVar1 = FUN_165233770();
    return uVar1;
  }
  uVar1 = FUN_165233770();
  return uVar1;
}



// FUNCTION 14ddad245 FUN_14ddad245 body=194 status=ok
// SIG undefined FUN_14ddad245(void)

void FUN_14ddad245(void)

{
  return;
}



// FUNCTION 14ddad4de FUN_14ddad4de body=279 status=ok
// SIG undefined FUN_14ddad4de(void)

/* WARNING: Removing unreachable block (ram,0x00014ddad571) */
/* WARNING: Removing unreachable block (ram,0x00014ddad577) */

undefined8 FUN_14ddad4de(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_164b2a242(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return uVar1;
}



// FUNCTION 14ddad577 FUN_14ddad577 body=132 status=ok
// SIG undefined FUN_14ddad577(void)

undefined8 FUN_14ddad577(void)

{
  ushort uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ushort local_res10;
  uint6 uStackX_12;
  longlong lStackX_18;
  
  uVar1 = (local_res10 | 0x100) - 0x100;
  syscall();
  *(undefined8 *)(lStackX_18 + -8) = unaff_R14;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_R14;
  *(ulonglong *)(lStackX_18 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(lStackX_18 + -0x18);
  *(ulonglong *)(lStackX_18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_R13;
  uVar2 = *(ulonglong *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RSI;
  *(ulonglong *)(lStackX_18 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_18 + -8) = 0x72aff14;
  *(undefined1 **)(lStackX_18 + -0x20) = &LAB_14e1c36eb;
  return unaff_retaddr;
}



// FUNCTION 14ddad5fb FUN_14ddad5fb body=111 status=ok
// SIG undefined FUN_14ddad5fb(void)

void FUN_14ddad5fb(uint param_1)

{
  uint unaff_EBX;
  
  FUN_1568ec076((~param_1 | unaff_EBX) + param_1 + 1 ^ 0xffffffff);
  return;
}



// FUNCTION 14ddad7a0 FUN_14ddad7a0 body=170 status=ok
// SIG undefined FUN_14ddad7a0(void)

void FUN_14ddad7a0(void)

{
  return;
}



// FUNCTION 14ddad8fa FUN_14ddad8fa body=65 status=ok
// SIG undefined FUN_14ddad8fa(void)

void FUN_14ddad8fa(void)

{
  return;
}



// FUNCTION 14ddad989 FUN_14ddad989 body=157 status=ok
// SIG undefined FUN_14ddad989(void)

void FUN_14ddad989(undefined8 param_1,undefined8 param_2)

{
  FUN_161087692(param_1,param_2,0x3db69ced);
  return;
}



// FUNCTION 14ddada28 FUN_14ddada28 body=260 status=ok
// SIG undefined FUN_14ddada28(void)

void FUN_14ddada28(void)

{
  return;
}



// FUNCTION 14ddadbe3 FUN_14ddadbe3 body=14 status=ok
// SIG undefined FUN_14ddadbe3(void)

void FUN_14ddadbe3(longlong param_1)

{
  FUN_16656e5b9(param_1 + 2);
  return;
}



// FUNCTION 14ddadbf1 FUN_14ddadbf1 body=252 status=ok
// SIG undefined FUN_14ddadbf1(void)

/* WARNING: Removing unreachable block (ram,0x00014ddadc74) */

void FUN_14ddadbf1(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  undefined8 in_R11;
  longlong unaff_R12;
  longlong unaff_R15;
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
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_20;
  
  uVar17 = *(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | param_1;
  *(ulonglong *)(unaff_R15 + 8) =
       ~(((unaff_RBX - (param_2 | unaff_RBX)) + param_2 | uVar17) & *(ulonglong *)(unaff_R15 + 8));
  plVar1 = (longlong *)(param_6 + param_1 + (param_6 & param_1) * -2);
  bVar12 = (param_5 & 0x4000) != 0;
  bVar11 = (param_5 & 0x800) != 0;
  bVar10 = (param_5 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (param_5 & 0x80) != 0;
  bVar7 = (param_5 & 0x40) != 0;
  bVar6 = (param_5 & 0x10) != 0;
  bVar5 = (param_5 & 4) != 0;
  bVar4 = (param_5 & 1) != 0;
  bVar16 = (param_5 & 0x200000) != 0;
  bVar13 = (param_5 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar3 = (*pcVar2)(uStackX_20,uStackX_8,unaff_retaddr);
  *plVar1 = unaff_R12;
  plVar1[-1] = unaff_R12;
  plVar1[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = plVar1[-2];
  plVar1[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  plVar1[-3] = uVar3;
  *(undefined4 *)(plVar1 + -4) = 0x4761fcf7;
  *(undefined4 *)((longlong)plVar1 + -0x1c) = 0;
  plVar1[-2] = in_R11;
  *plVar1 = 0xe422f35 - (plVar1[-4] ^ 0x4f27a628U);
  FUN_165c7153c();
  return;
}



// FUNCTION 14ddaddae FUN_14ddaddae body=132 status=ok
// SIG undefined FUN_14ddaddae(void)

void FUN_14ddaddae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_157492402(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddade34 FUN_14ddade34 body=337 status=ok
// SIG undefined FUN_14ddade34(void)

/* WARNING: Removing unreachable block (ram,0x00014ddadee2) */
/* WARNING: Removing unreachable block (ram,0x00014ddadee8) */
/* WARNING: Removing unreachable block (ram,0x00014ddadeed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddade34(undefined8 param_1,undefined8 param_2)

{
  FUN_165d38a34(param_1,param_2,0xffffffff8845acb5);
  return;
}



// FUNCTION 14ddae169 FUN_14ddae169 body=311 status=ok
// SIG undefined FUN_14ddae169(void)

void FUN_14ddae169(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R10;
  longlong lVar1;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  lVar1 = in_R10 - local_res20;
  *(undefined8 *)(lVar1 + -8) = in_R11;
  *(undefined8 *)(lVar1 + -0x10) = param_3;
  *(undefined8 *)(lVar1 + -0x18) = param_3;
  *(undefined8 *)(lVar1 + -0x20) = 0x14ddae20b;
  FUN_157224f23();
  *(undefined8 *)(lVar1 + -0x18) = unaff_retaddr;
  *(undefined1 **)(lVar1 + -0x18) = &LAB_16139bb56;
  return;
}



// FUNCTION 14ddae34e FUN_14ddae34e body=588 status=ok
// SIG undefined FUN_14ddae34e(void)

/* WARNING: Instruction at (ram,0x00014ddae5ba) overlaps instruction at (ram,0x00014ddae5b9)
    */
/* WARNING: Removing unreachable block (ram,0x0001622a2e86) */
/* WARNING: Removing unreachable block (ram,0x00014ddae63b) */
/* WARNING: Removing unreachable block (ram,0x00014ddae64f) */
/* WARNING: Removing unreachable block (ram,0x00014ddae657) */
/* WARNING: Removing unreachable block (ram,0x00014ddae706) */
/* WARNING: Removing unreachable block (ram,0x00014ddae70c) */
/* WARNING: Removing unreachable block (ram,0x00016195ba87) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddae34e(undefined8 param_1)

{
  undefined1 *puVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_164b967ce(param_1);
  puVar1 = &DAT_ac91427a73ca2b2b;
  uVar2 = ~-*(longlong *)(unaff_RDI + -0x78) + 1;
  uVar3 = 0xffffffffffffffff - uVar2;
  FUN_15ba0a674();
  uVar2 = DAT_15ba0a60c ^
          ~((uVar2 | 0x536ebd858c35d4d4) &
           (ulonglong)(&DAT_ac91427a73ca2b2b + (~(uVar3 & 0xac91427a73ca2b2b) - ~uVar3)));
  FUN_1629fa2cc();
  uVar2 = *(ulonglong *)(uVar2 - 0x68) ^ (ulonglong)puVar1;
  FUN_1628f723b();
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_1615c9783(in_stack_00000040,uVar2 * 2,in_stack_00000038,in_stack_00000030);
  return;
}



// FUNCTION 14ddae59f FUN_14ddae59f body=513 status=ok
// SIG undefined FUN_14ddae59f(void)

/* WARNING: Instruction at (ram,0x00014ddae5ba) overlaps instruction at (ram,0x00014ddae5b9)
    */
/* WARNING: Removing unreachable block (ram,0x0001622a2e86) */
/* WARNING: Removing unreachable block (ram,0x00014ddae63b) */
/* WARNING: Removing unreachable block (ram,0x00014ddae64f) */
/* WARNING: Removing unreachable block (ram,0x00014ddae657) */
/* WARNING: Removing unreachable block (ram,0x00014ddae706) */
/* WARNING: Removing unreachable block (ram,0x00014ddae70c) */
/* WARNING: Removing unreachable block (ram,0x00016195ba87) */

void FUN_14ddae59f(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1615c9783(param_7,param_2 * 2,param_6,param_5);
  return;
}



// FUNCTION 14ddae979 FUN_14ddae979 body=304 status=ok
// SIG undefined FUN_14ddae979(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddae979(undefined8 param_1,undefined8 param_2)

{
  short unaff_R14W;
  short unaff_R15W;
  
  FUN_165e027e1(param_1,param_2,FUN_165e027e1);
  FUN_1616d77b8(unaff_R15W - unaff_R14W,FUN_1616d77b8);
  return;
}



// FUNCTION 14ddaeb2d FUN_14ddaeb2d body=140 status=ok
// SIG undefined FUN_14ddaeb2d(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaebaf) */
/* WARNING: Removing unreachable block (ram,0x00014ddaebb5) */
/* WARNING: Removing unreachable block (ram,0x00014ddaebba) */

void FUN_14ddaeb2d(undefined8 param_1)

{
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong uStackX_20;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_retaddr ^ 0x22c45fd)) = unaff_RSI;
  FUN_164920cfa(param_1,uStackX_20 | unaff_R15);
  return;
}



// FUNCTION 14ddaebba FUN_14ddaebba body=157 status=ok
// SIG undefined FUN_14ddaebba(void)

void FUN_14ddaebba(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong unaff_RDI;
  uint in_R10D;
  int unaff_retaddr;
  
  (*(code *)0x14dd80e24)
            (param_1,*(undefined8 *)(unaff_RDI + -0x30),
             ((unaff_retaddr + -1) - (-1 - ~in_R10D)) - ~param_3,0x14dd80e24);
  return;
}



// FUNCTION 14ddaec5e FUN_14ddaec5e body=115 status=ok
// SIG undefined FUN_14ddaec5e(void)

void FUN_14ddaec5e(void)

{
  ulonglong unaff_RBP;
  ulonglong unaff_retaddr;
  
  FUN_162da6b30(unaff_retaddr ^ unaff_RBP);
  return;
}



// FUNCTION 14ddaecd3 FUN_14ddaecd3 body=335 status=ok
// SIG undefined FUN_14ddaecd3(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaed73) */
/* WARNING: Removing unreachable block (ram,0x00014ddaed79) */

void FUN_14ddaecd3(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_15b67b909(FUN_15b67b909,
                ~((-~param_1 -
                  (~(param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68)) + 2)) + 1) &
                (~param_1 & *(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3);
  return;
}



// FUNCTION 14ddaee25 FUN_14ddaee25 body=177 status=ok
// SIG undefined FUN_14ddaee25(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaee5b) */

void FUN_14ddaee25(void)

{
  return;
}



// FUNCTION 14ddaeedc FUN_14ddaeedc body=149 status=ok
// SIG undefined FUN_14ddaeedc(void)

void FUN_14ddaeedc(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x16516e855)
            (0x34e8ffff,0x16516e855,~*(ulonglong *)(unaff_RSI + -0x28),
             -~*(ulonglong *)(unaff_RSI + -0x28) - 1 ^ unaff_RBP);
  return;
}



// FUNCTION 14ddaf028 FUN_14ddaf028 body=253 status=ok
// SIG undefined FUN_14ddaf028(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaf0aa) */
/* WARNING: Removing unreachable block (ram,0x00014ddaf0b0) */

void FUN_14ddaf028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1628a3e26(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14ddaf0b0 FUN_14ddaf0b0 body=173 status=ok
// SIG undefined FUN_14ddaf0b0(void)

void FUN_14ddaf0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000020;
  
  FUN_162c7a9f8(param_1,param_2,param_3,param_4,
                ~((in_RAX ^ 0xffffffffffffffff | in_stack_00000020) &
                 (0xffffffffffffffff - in_stack_00000020 | in_RAX)));
  return;
}



// FUNCTION 14ddaf276 FUN_14ddaf276 body=152 status=ok
// SIG undefined FUN_14ddaf276(void)

void FUN_14ddaf276(void)

{
  return;
}



// FUNCTION 14ddaf44e FUN_14ddaf44e body=50 status=ok
// SIG undefined FUN_14ddaf44e(void)

void FUN_14ddaf44e(ushort param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *unaff_RBP;
  undefined8 unaff_retaddr;
  
  *unaff_RBP = *unaff_RBP & ~param_1;
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  FUN_16179ccaf(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddaf497 FUN_14ddaf497 body=417 status=ok
// SIG undefined FUN_14ddaf497(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaf529) */

void FUN_14ddaf497(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  longlong lStackX_10;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x48) | param_1;
  uVar4 = *(ulonglong *)(unaff_RDI + -0x48) & param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + -8);
  FUN_16508dfd3();
  *(ulonglong *)(lStackX_10 + -8) = param_1;
  puVar1 = (ulonglong *)(lStackX_10 + -0x10);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar2;
  *(ulonglong *)(lStackX_10 + -0x18) = uVar2;
  *(ulonglong *)(lStackX_10 + -0x20) = (~uVar3 | ~uVar4) + uVar3 + 1;
  *(undefined8 *)(lStackX_10 + -0x28) = unaff_R12;
  *(undefined8 *)(lStackX_10 + -0x30) = unaff_R12;
  *(code **)(lStackX_10 + -0x28) = FUN_1646d5313;
  (*(code *)0x162d49fb2)(&DAT_162d4a05e);
  return;
}



// FUNCTION 14ddaf64e FUN_14ddaf64e body=194 status=ok
// SIG undefined FUN_14ddaf64e(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaf6d4) */
/* WARNING: Removing unreachable block (ram,0x00014ddaf6da) */
/* WARNING: Removing unreachable block (ram,0x00014ddaf740) */
/* WARNING: Removing unreachable block (ram,0x00014ddaf743) */

void FUN_14ddaf64e(void)

{
  return;
}



// FUNCTION 14ddaf6da FUN_14ddaf6da body=173 status=ok
// SIG undefined FUN_14ddaf6da(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaf740) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014ddaf75e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddaf6da(void)

{
  FUN_1625e71c0(0xb46c01a,FUN_1625e71c0);
  return;
}



// FUNCTION 14ddaf788 FUN_14ddaf788 body=268 status=ok
// SIG undefined FUN_14ddaf788(void)

/* WARNING: Removing unreachable block (ram,0x00014ddaf81d) */

undefined8 FUN_14ddaf788(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -8);
}



// FUNCTION 14ddafa7d FUN_14ddafa7d body=141 status=ok
// SIG undefined FUN_14ddafa7d(void)

void FUN_14ddafa7d(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  int unaff_retaddr;
  
  if (SCARRY4(unaff_retaddr,-0x6fc5b7f7)) {
    unaff_R15 = unaff_R13;
  }
  bVar1 = *(longlong *)(unaff_R13 + -0x68) == -1;
  if (bVar1 && unaff_R15 == 0) {
    if (bVar1 && unaff_R15 == 0) {
      FUN_15648a45f();
      return;
    }
    FUN_165d0c751(param_1,*(ulonglong *)(unaff_R12 + -0x28) + in_RAX +
                          (*(ulonglong *)(unaff_R12 + -0x28) & in_RAX) * -2,
                  *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                  *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
    return;
  }
  FUN_1569f675e(param_1,param_2);
  return;
}



// FUNCTION 14ddafb0b thunk_FUN_14ddafb11 body=5 status=ok
// SIG undefined thunk_FUN_14ddafb11(void)

void thunk_FUN_14ddafb11(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_165d0c751(param_1,*(ulonglong *)(unaff_R12 + -0x28) + in_RAX +
                        (*(ulonglong *)(unaff_R12 + -0x28) & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14ddafb11 FUN_14ddafb11 body=131 status=ok
// SIG undefined FUN_14ddafb11(void)

void FUN_14ddafb11(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_165d0c751(param_1,*(ulonglong *)(unaff_R12 + -0x28) + in_RAX +
                        (*(ulonglong *)(unaff_R12 + -0x28) & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14ddafb94 FUN_14ddafb94 body=601 status=ok
// SIG undefined FUN_14ddafb94(void)

/* WARNING: Removing unreachable block (ram,0x00014ddafd8f) */
/* WARNING: Removing unreachable block (ram,0x00014ddafcd1) */
/* WARNING: Removing unreachable block (ram,0x00014ddafc29) */
/* WARNING: Removing unreachable block (ram,0x00015b20b6cd) */
/* WARNING: Removing unreachable block (ram,0x00014ddafcd7) */
/* WARNING: Removing unreachable block (ram,0x00014ddafd84) */
/* WARNING: Removing unreachable block (ram,0x000156c21579) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddafb94(void)

{
  ulonglong uVar1;
  longlong in_R9;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  
  uVar1 = 0xffffffffffffffffU - in_stack_00000008 | *(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = ~*(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = 0xffffffffffffffff - unaff_R15 & *(ulonglong *)(in_R9 + 8) | unaff_R15
  ;
  *(ulonglong *)(in_R9 + 8) =
       ~((*(longlong *)(in_R9 + 8) - (uVar1 | *(ulonglong *)(in_R9 + 8))) + uVar1);
  return;
}



// FUNCTION 14ddafcd7 FUN_14ddafcd7 body=273 status=ok
// SIG undefined FUN_14ddafcd7(void)

/* WARNING: Removing unreachable block (ram,0x00014ddafd8f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddafcd7(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_res20;
  
  if (local_res20 == -1 && param_1 == -1) {
    FUN_156c21579();
    return;
  }
  FUN_161a1e5fc(param_1,param_2,param_3,FUN_161a1e5fc);
  return;
}



// FUNCTION 14ddb0147 FUN_14ddb0147 body=123 status=ok
// SIG undefined FUN_14ddb0147(void)

void FUN_14ddb0147(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R15;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uStackX_10;
  ulonglong auStackX_18 [2];
  ulonglong auStack_10 [2];
  
  bVar9 = (uStackX_10 & 0x4000) != 0;
  bVar8 = (uStackX_10 & 0x400) != 0;
  bVar7 = (uStackX_10 & 0x200) != 0;
  bVar6 = (uStackX_10 & 0x100) != 0;
  bVar5 = (uStackX_10 & 0x10) != 0;
  bVar11 = (uStackX_10 & 0x200000) != 0;
  bVar10 = (uStackX_10 & 0x40000) != 0;
  uVar3 = *(ulonglong *)((longlong)auStackX_18 + param_3);
  *(ulonglong *)((longlong)auStackX_18 + param_3) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar8 * 0x400 | (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80 | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar5 * 0x10 | (ulonglong)((uStackX_10 & 4) != 0) * 4 |
       (ulonglong)((uStackX_10 & 1) != 0) | (ulonglong)bVar11 * 0x200000 |
       (ulonglong)bVar10 * 0x40000;
  *(undefined8 *)((longlong)auStackX_18 + param_3 + -8) = param_1;
  *(undefined8 *)(&stack0x00000008 + param_3) = unaff_R15;
  *(int *)((longlong)auStackX_18 + param_3) = *(int *)((longlong)auStackX_18 + param_3) << 0x19;
  uVar4 = *(undefined8 *)((longlong)auStackX_18 + param_3 + -8);
  puVar1 = (uint *)((longlong)auStackX_18 + param_3);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 >> 0x1f;
  *(ulonglong *)((longlong)auStackX_18 + param_3 + -8) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)bVar8 * 0x400 | (ulonglong)bVar7 * 0x200 |
       (ulonglong)bVar6 * 0x100 | (ulonglong)((int)*puVar1 < 0) * 0x80 |
       (ulonglong)(*puVar1 == 0) * 0x40 | (ulonglong)bVar5 * 0x10 |
       (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 | (ulonglong)((uVar2 >> 0x1e & 1) != 0)
       | (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar10 * 0x40000;
  *(ulonglong *)(&stack0x00000008 + param_3) = uVar3;
  *(undefined8 *)((longlong)auStackX_18 + param_3 + -0x18) = unaff_RSI;
  *(undefined8 *)((longlong)auStack_10 + param_3 + 8) = in_R10;
  *(undefined8 *)((longlong)auStack_10 + param_3) = in_R10;
  *(code **)((longlong)auStack_10 + param_3 + 8) = thunk_FUN_14ddb01ca;
  FUN_1626059af(uVar4,param_2,uVar3 & 0xffffffffffff0000);
  return;
}



// FUNCTION 14ddb01c4 thunk_FUN_14ddb01ca body=5 status=ok
// SIG undefined thunk_FUN_14ddb01ca(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb0248) */
/* WARNING: Removing unreachable block (ram,0x00014ddb0253) */
/* WARNING: Removing unreachable block (ram,0x00014ddb024e) */

void thunk_FUN_14ddb01ca(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16490e16b(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40));
  return;
}



// FUNCTION 14ddb01ca FUN_14ddb01ca body=136 status=ok
// SIG undefined FUN_14ddb01ca(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb0248) */
/* WARNING: Removing unreachable block (ram,0x00014ddb0253) */
/* WARNING: Removing unreachable block (ram,0x00014ddb024e) */

void FUN_14ddb01ca(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16490e16b(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40));
  return;
}



// FUNCTION 14ddb0253 FUN_14ddb0253 body=144 status=ok
// SIG undefined FUN_14ddb0253(void)

void FUN_14ddb0253(void)

{
  longlong unaff_R13;
  
  FUN_1660a0194(0,*(undefined8 *)(unaff_R13 + -0x78));
  return;
}


