// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dabd5c6 FUN_14dabd5c6 body=343 status=ok
// SIG undefined FUN_14dabd5c6(void)

void FUN_14dabd5c6(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1661d0ca1)(param_1,param_2);
  return;
}



// FUNCTION 14dabd6d7 FUN_14dabd6d7 body=9 status=ok
// SIG undefined FUN_14dabd6d7(void)

void FUN_14dabd6d7(void)

{
  return;
}



// FUNCTION 14dabd6e0 FUN_14dabd6e0 body=296 status=ok
// SIG undefined FUN_14dabd6e0(void)

/* WARNING: Removing unreachable block (ram,0x000164acffb2) */
/* WARNING: Removing unreachable block (ram,0x000164acffb8) */
/* WARNING: Removing unreachable block (ram,0x000164acffbd) */
/* WARNING: Removing unreachable block (ram,0x000164acff6a) */
/* WARNING: Removing unreachable block (ram,0x00014dabd779) */
/* WARNING: Removing unreachable block (ram,0x00014dabd785) */
/* WARNING: Removing unreachable block (ram,0x0001574744f8) */

void FUN_14dabd6e0(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x88) != 0) {
    FUN_166a9974c();
    return;
  }
  FUN_166a9974c();
  return;
}



// FUNCTION 14dabd8c1 FUN_14dabd8c1 body=730 status=ok
// SIG undefined FUN_14dabd8c1(void)

/* WARNING: Removing unreachable block (ram,0x00014dabd961) */
/* WARNING: Removing unreachable block (ram,0x00014dabda71) */
/* WARNING: Removing unreachable block (ram,0x00014dabda94) */
/* WARNING: Removing unreachable block (ram,0x000156524931) */
/* WARNING: Removing unreachable block (ram,0x00014dabda9a) */

undefined8 FUN_14dabd8c1(void)

{
  short sVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  short *unaff_RDI;
  short in_R10W;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar4;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  longlong in_stack_00000028;
  
  sVar1 = *unaff_RDI;
  *unaff_RDI = 0;
  *unaff_RDI = *unaff_RDI + (-0x100 - (~-in_R10W + 2U)) + sVar1;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7c3795) is written */
                    /* WARNING: Read-only address (ram,0x00014d7c3795) is written */
  LOCK();
  uRam000000014d7c3795 = (undefined1)in_RAX;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R13;
  *(ulonglong *)(in_stack_00000028 + -0x18) = in_RAX & 0xffffffffffffff00;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0x607305a;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R15;
  *(ulonglong *)(in_stack_00000028 + -0x28) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_20 & 4) != 0) * 4 | (ulonglong)((uStackX_20 & 1) != 0) |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  uVar4 = *(ulonglong *)(in_stack_00000028 + -0x28);
  lVar2 = *(longlong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(longlong *)(in_stack_00000028 + -8) = lVar2 + -0x2782f0a;
  if ((uVar4 & 0x80) == 0) {
    uVar3 = FUN_164fd7fcd();
    return uVar3;
  }
  uVar3 = FUN_164fd7fcd();
  return uVar3;
}



// FUNCTION 14dabdbc5 FUN_14dabdbc5 body=368 status=ok
// SIG undefined FUN_14dabdbc5(void)

/* WARNING: Removing unreachable block (ram,0x00014dabdc52) */
/* WARNING: Removing unreachable block (ram,0x00014dabdcc2) */
/* WARNING: Removing unreachable block (ram,0x00014dabdccf) */
/* WARNING: Removing unreachable block (ram,0x0001664d679d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dabdbc5(void)

{
  int in_R10D;
  undefined8 in_stack_00000060;
  
  if (-1 < (longlong)&stack0x00000028) {
    FUN_1664d66db();
    return;
  }
  if (in_R10D != 0) {
    return;
  }
  FUN_166bdeaf8();
  return;
}



// FUNCTION 14dabddd9 thunk_FUN_165dc09fc body=26 status=ok
// SIG undefined thunk_FUN_165dc09fc(void)

void thunk_FUN_165dc09fc(void)

{
  FUN_165dc09fc();
  return;
}



// FUNCTION 14dabdf08 FUN_14dabdf08 body=158 status=ok
// SIG undefined FUN_14dabdf08(void)

/* WARNING: Instruction at (ram,0x00014dabdf1a) overlaps instruction at (ram,0x00014dabdf19)
    */
/* WARNING: Removing unreachable block (ram,0x00015b29c7e4) */
/* WARNING: Removing unreachable block (ram,0x00014dabdf85) */
/* WARNING: Removing unreachable block (ram,0x00014dabdf32) */
/* WARNING: Removing unreachable block (ram,0x00014dabe050) */
/* WARNING: Removing unreachable block (ram,0x00014dabe056) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0d2) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0d8) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0cd) */
/* WARNING: Removing unreachable block (ram,0x00014debd84e) */
/* WARNING: Removing unreachable block (ram,0x00015b29c881) */
/* WARNING: Removing unreachable block (ram,0x00015b29c887) */
/* WARNING: Removing unreachable block (ram,0x000165a88318) */

undefined8 FUN_14dabdf08(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  undefined8 *puVar8;
  longlong unaff_RSI;
  undefined8 in_R10;
  longlong in_R11;
  bool in_ZF;
  undefined1 local_res8 [32];
  
  if (in_ZF) {
    puVar8 = (undefined8 *)*unaff_RBP;
    puVar7 = unaff_RBP + 1;
    *(int *)(in_RAX + 0x5a658f88) = *(int *)(in_RAX + 0x5a658f88) + 1;
  }
  else {
    puVar7 = (undefined8 *)local_res8;
    in_RAX = 0x5a658f88;
    puVar8 = unaff_RBP;
  }
  puVar1 = (undefined8 *)((longlong)puVar7 + ((in_RAX ^ 0x5dc5f884) - 0x7a07714));
  *puVar1 = *(undefined8 *)(unaff_RSI + -0x40);
  *puVar1 = in_R10;
  uVar3 = *(ulonglong *)(unaff_RSI + -0x70);
  *puVar1 = 0;
  *(undefined4 *)puVar1 = 0xd0f34b15;
  puVar1[-1] = FUN_14dabdfa6;
  FUN_165219396(param_1 + -0x7dc21cb9);
  puVar2 = (ulonglong *)((longlong)puVar1 + in_R11 + -0xfbdd67c);
  *(uint *)puVar2 = 0x944164c6;
  *(uint *)puVar2 = (uint)*puVar2 ^ 0x4d91721b;
  *(uint *)((longlong)puVar2 + 4) = 0xffffffff;
  uVar4 = *(ulonglong *)
           (~(~(*puVar2 & 0xffffffffd9d0164a) & (*puVar2 | 0xffffffffd9d0164a)) + 0x7dc21cb9);
  uVar5 = puVar2[1];
  puVar2[1] = 0x7dc21cb9;
  puVar2[3] = 0;
  puVar2[3] = puVar2[3] ^ uVar4;
  puVar2[2] = param_3;
  puVar2[3] = puVar2[3] ^ uVar5;
  puVar2[2] = uVar3 ^ (ulonglong)puVar8;
  uVar6 = FUN_15b29c7e4();
  return uVar6;
}



// FUNCTION 14dabdfa6 FUN_14dabdfa6 body=319 status=ok
// SIG undefined FUN_14dabdfa6(void)

/* WARNING: Removing unreachable block (ram,0x00015b29c7e4) */
/* WARNING: Removing unreachable block (ram,0x00014dabe050) */
/* WARNING: Removing unreachable block (ram,0x00014dabe056) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0d2) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0d8) */
/* WARNING: Removing unreachable block (ram,0x00014dabe0cd) */
/* WARNING: Removing unreachable block (ram,0x00014debd84e) */
/* WARNING: Removing unreachable block (ram,0x00015b29c881) */
/* WARNING: Removing unreachable block (ram,0x00015b29c887) */
/* WARNING: Removing unreachable block (ram,0x000165a88318) */

undefined8 FUN_14dabdfa6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong in_R11;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff0422984 + in_R11);
  *(uint *)puVar1 = 0x944164c6;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x4d91721b;
  *(undefined4 *)(&stack0xfffffffff0422988 + in_R11) = 0xffffffff;
  uVar2 = *(ulonglong *)
           (unaff_RDI + ~(~(*puVar1 & 0xffffffffd9d0164a) & (*puVar1 | 0xffffffffd9d0164a)));
  uVar3 = *(ulonglong *)(&stack0xfffffffff042298c + in_R11);
  *(longlong *)(&stack0xfffffffff042298c + in_R11) = unaff_RDI;
  *(undefined8 *)(&stack0xfffffffff042299c + in_R11) = 0;
  *(ulonglong *)(&stack0xfffffffff042299c + in_R11) =
       *(ulonglong *)(&stack0xfffffffff042299c + in_R11) ^ uVar2;
  *(undefined8 *)(&stack0xfffffffff0422994 + in_R11) = param_3;
  *(ulonglong *)(&stack0xfffffffff042299c + in_R11) =
       *(ulonglong *)(&stack0xfffffffff042299c + in_R11) ^ uVar3;
  *(undefined8 *)(&stack0xfffffffff0422994 + in_R11) = unaff_RBX;
  uVar4 = FUN_15b29c7e4();
  return uVar4;
}



// FUNCTION 14dabe196 FUN_14dabe196 body=978 status=ok
// SIG undefined FUN_14dabe196(void)

/* WARNING: Removing unreachable block (ram,0x00014dabe39f) */
/* WARNING: Removing unreachable block (ram,0x00014dabe3a5) */
/* WARNING: Removing unreachable block (ram,0x000157027c09) */
/* WARNING: Removing unreachable block (ram,0x00014dabe410) */
/* WARNING: Removing unreachable block (ram,0x00014dabe416) */
/* WARNING: Removing unreachable block (ram,0x00014dabe41b) */
/* WARNING: Removing unreachable block (ram,0x00014dabe531) */
/* WARNING: Removing unreachable block (ram,0x00014dabe537) */
/* WARNING: Removing unreachable block (ram,0x00015707e906) */
/* WARNING: Removing unreachable block (ram,0x00015707e971) */
/* WARNING: Removing unreachable block (ram,0x00015707e973) */
/* WARNING: Removing unreachable block (ram,0x00014dabe2fb) */
/* WARNING: Removing unreachable block (ram,0x00014dabe30c) */
/* WARNING: Removing unreachable block (ram,0x00014dabe307) */
/* WARNING: Removing unreachable block (ram,0x00014dabe23f) */
/* WARNING: Removing unreachable block (ram,0x00015b203c3c) */
/* WARNING: Removing unreachable block (ram,0x00016193179d) */

ulonglong FUN_14dabe196(void)

{
  ulonglong uVar1;
  int unaff_ESI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(&DAT_ffffffffffffb5ab + unaff_R13)) {
    uVar1 = FUN_1659519a3();
    return uVar1;
  }
  if (-1 < unaff_ESI) {
    return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
  }
  uVar1 = thunk_FUN_16193171c(4,thunk_FUN_16193171c);
  return uVar1;
}



// FUNCTION 14dabe4cf FUN_14dabe4cf body=106 status=ok
// SIG undefined FUN_14dabe4cf(void)

/* WARNING: Removing unreachable block (ram,0x00015707e971) */
/* WARNING: Removing unreachable block (ram,0x00014dabe537) */

void FUN_14dabe4cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16106bfe7(FUN_16106bfe7,param_2,param_3);
  return;
}



// FUNCTION 14dabe53d FUN_14dabe53d body=174 status=ok
// SIG undefined FUN_14dabe53d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dabe6b0) */
/* WARNING: Removing unreachable block (ram,0x000165218dfa) */
/* WARNING: Removing unreachable block (ram,0x000165218e06) */
/* WARNING: Removing unreachable block (ram,0x000165218ea5) */
/* WARNING: Removing unreachable block (ram,0x000165218eb1) */
/* WARNING: Removing unreachable block (ram,0x000161d216d0) */
/* WARNING: Removing unreachable block (ram,0x00014dabe61e) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0e82) */
/* WARNING: Removing unreachable block (ram,0x00014dabe5e6) */
/* WARNING: Removing unreachable block (ram,0x00014dabe5ec) */
/* WARNING: Removing unreachable block (ram,0x00014dabe621) */
/* WARNING: Removing unreachable block (ram,0x00014dabe66c) */
/* WARNING: Removing unreachable block (ram,0x00014dabe672) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dabe677) */

undefined8 FUN_14dabe53d(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar3 = 0xffffffffffffffff - uVar1 | param_1;
  if (CARRY8(-((~(~param_1 & uVar1) + uVar1) - param_1 | uVar3),uVar3)) {
    uVar2 = (*(code *)0x162cbbe5e)(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = FUN_14dec2a69();
  return uVar2;
}



// FUNCTION 14dabe5ec FUN_14dabe5ec body=139 status=ok
// SIG undefined FUN_14dabe5ec(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dabe61e) */
/* WARNING: Removing unreachable block (ram,0x00014dabe6b0) */
/* WARNING: Removing unreachable block (ram,0x00014dabe677) */

undefined8 FUN_14dabe5ec(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(unaff_R14 + 0x10) =
       ~(~unaff_R15 & *(ulonglong *)(unaff_R14 + 0x10)) + *(longlong *)(unaff_R14 + 0x10) + 1;
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  if (-1 < (longlong)(unaff_R15 - 1)) {
    uVar1 = FUN_15b62c535();
    return uVar1;
  }
  _fxsave(in_stack_00000030);
  *(undefined8 *)(in_stack_00000030 - 0x10) = in_R9;
  *(undefined8 *)(in_stack_00000030 - 0x18) = 0x2eb3a48;
  *(undefined8 *)(in_stack_00000030 - 8) = *(undefined8 *)(in_stack_00000030 - 0x18);
  *(undefined8 *)(in_stack_00000030 - 0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 - 0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000030 - 0x28cf) = &DAT_156ef2e4a;
  return in_stack_00000018;
}



// FUNCTION 14dabe677 FUN_14dabe677 body=87 status=ok
// SIG undefined FUN_14dabe677(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dabe6b0) */

void FUN_14dabe677(void)

{
  FUN_14d7c4825();
  return;
}



// FUNCTION 14dabe7c0 FUN_14dabe7c0 body=335 status=ok
// SIG undefined FUN_14dabe7c0(void)

void FUN_14dabe7c0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  FUN_16208aa13(0x78be6d3,param_2,param_3,param_4,
                ((param_1 - (in_stack_00000018 | param_1)) + in_stack_00000018 ^ 0xffffffffffffffff)
                & (in_stack_00000018 | param_1),(in_stack_00000020 & param_1) << 1);
  FUN_14e189dea(FUN_14e189dea,param_2,0x6293d693);
  return;
}



// FUNCTION 14dabe90f FUN_14dabe90f body=115 status=ok
// SIG undefined FUN_14dabe90f(void)

void FUN_14dabe90f(undefined8 param_1,longlong param_2)

{
  char unaff_BL;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  
  FUN_166af764b(param_1,param_2 + unaff_RBP + (in_R10 & unaff_RBP) * -2,-unaff_BL,
                0xffffffffffffffffU - *(longlong *)(unaff_RSI + -0x28) | unaff_RBP);
  return;
}



// FUNCTION 14dabec19 FUN_14dabec19 body=164 status=ok
// SIG undefined FUN_14dabec19(void)

/* WARNING: Removing unreachable block (ram,0x00014dabecb3) */
/* WARNING: Removing unreachable block (ram,0x00014dabecbe) */
/* WARNING: Removing unreachable block (ram,0x00014dabecb9) */

void FUN_14dabec19(void)

{
  FUN_162266fd7();
  return;
}



// FUNCTION 14dabecbe FUN_14dabecbe body=148 status=ok
// SIG undefined FUN_14dabecbe(void)

void FUN_14dabecbe(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 auStackX_10 [3];
  
  lVar6 = in_RAX - unaff_RDI;
  puVar1 = (ulonglong *)((longlong)&uStackX_8 + lVar6);
  *puVar1 = param_1;
  *(undefined8 *)((longlong)auStackX_10 + lVar6 + -0x10) = 0x15e4f19f;
  *(undefined4 *)((longlong)auStackX_10 + lVar6 + -0x10) = 0x6a5b4473;
  *(undefined4 *)((longlong)auStackX_10 + lVar6 + -0xc) = 0;
  uVar4 = *(ulonglong *)((longlong)auStackX_10 + lVar6 + -0x10) ^ 0x7fbfb5fc;
  *(undefined8 *)((longlong)auStackX_10 + lVar6 + -0x10) = unaff_RBX;
  lVar5 = uVar4 + 0x15e4f19f + (uVar4 & 0x15e4f19f) * -2;
  uVar4 = *puVar1;
  *(undefined8 *)(&stack0x15e4f1af + lVar5 + lVar6 + -0x15e4f19f) = 0;
  *(ulonglong *)(&stack0x15e4f1af + lVar5 + lVar6 + -0x15e4f19f) =
       *(longlong *)(&stack0x15e4f1af + lVar5 + lVar6 + -0x15e4f19f) + uVar4;
  uVar2 = *(undefined8 *)((longlong)auStackX_10 + lVar6);
  *(undefined4 *)puVar1 = 0x7c2806a;
  *(undefined4 *)((longlong)auStackX_10 + lVar6 + -4) = 0;
  uVar4 = *puVar1;
  uVar3 = uVar4 - 0x7c28062;
  *(ulonglong *)(&stack0xfffffffff83d7fa6 + uVar3 + lVar6 + 0x7c28062) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar4,0x7c28062) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar4 < 0x7c28062) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  FUN_156f71af2(uVar2,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dabeeae FUN_14dabeeae body=15 status=ok
// SIG undefined FUN_14dabeeae(void)

void FUN_14dabeeae(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dabef59 FUN_14dabef59 body=296 status=ok
// SIG undefined FUN_14dabef59(void)

void FUN_14dabef59(uint param_1,int param_2,undefined8 param_3)

{
  uint in_EAX;
  uint unaff_EBP;
  undefined8 unaff_retaddr;
  
  FUN_156e41e21(~param_1,(param_2 +
                         (in_EAX | ~((~(unaff_EBP & 0xe4cc204c) + 0xe4cc204c) - ~unaff_EBP))) -
                         ~param_1,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dabf081 FUN_14dabf081 body=423 status=ok
// SIG undefined FUN_14dabf081(void)

/* WARNING: Removing unreachable block (ram,0x00014dabf10c) */
/* WARNING: Removing unreachable block (ram,0x00014dabf101) */

void FUN_14dabf081(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong unaff_RBP;
  ushort *puVar9;
  longlong unaff_RSI;
  longlong unaff_RDI;
  code *pcVar10;
  longlong in_R11;
  undefined8 unaff_R15;
  
  puVar9 = (ushort *)(unaff_RBP + unaff_RSI * -2);
  lVar3 = *(longlong *)(unaff_RDI + -0x98);
  lVar7 = param_1;
  uVar5 = FUN_162eef03b();
  uVar1 = *puVar9;
  uVar2 = *puVar9;
  *puVar9 = 0;
  *puVar9 = *puVar9 + (-0x101 - (uVar1 | 0xfeff)) + uVar2;
  *(undefined8 *)(lVar3 + -8) = param_3;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(longlong *)(lVar3 + -0x18) = param_1;
  *(undefined8 *)(lVar3 + -0x20) = uVar5;
  *(undefined4 *)(lVar3 + -0x20) = 0x50048f71;
  *(undefined4 *)(lVar3 + -0x1c) = 0;
  uVar4 = *(ulonglong *)(lVar3 + -0x20);
  *(undefined8 *)(lVar3 + -0x20) = param_2;
  bVar8 = (byte)*(undefined8 *)(lVar3 + -0x20);
  *(undefined1 **)(lVar3 + -0x10 + (uVar4 ^ 0x50048f79)) = &LAB_161853602;
  pcVar10 = FUN_1618535dc;
  *(code **)(lVar3 + -0x20) = FUN_16688e15f;
  lVar6 = FUN_1618535dc();
  *(byte *)(lVar6 + in_R11) = *(byte *)(lVar6 + in_R11) ^ 0x1e;
  *(byte *)(lVar6 + in_R11) = *(byte *)(lVar6 + in_R11) ^ bVar8;
  *(undefined8 *)(lVar3 + -0x18) = 0x494d5a;
  *(ulonglong *)(lVar3 + -0x18) = *(ulonglong *)(lVar3 + -0x18) ^ 0x494d5a;
  *(longlong *)(lVar3 + -0x18) = *(longlong *)(lVar3 + -0x18) - lVar7;
  *(ulonglong *)(lVar3 + -0x18) = ~*(ulonglong *)(lVar3 + -0x18);
  *(longlong *)(lVar3 + -0x18) = *(longlong *)(lVar3 + -0x18) + 1;
  *(undefined8 *)(lVar3 + -0x20) = unaff_R15;
  *(code **)(lVar3 + -0x28) = pcVar10;
  uVar5 = CONCAT71((int7)((ulonglong)pcVar10 >> 8),0x38);
  *(undefined8 *)(lVar3 + -0x30) = uVar5;
  *(undefined8 *)(lVar3 + -0x38) = uVar5;
  *(undefined **)(lVar3 + -0x30) = &DAT_1614e0847;
  *(undefined1 **)(lVar3 + -0x40) = &LAB_1614e0843;
  return;
}



// FUNCTION 14dabf229 FUN_14dabf229 body=168 status=ok
// SIG undefined FUN_14dabf229(void)

undefined8 FUN_14dabf229(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dabf3f1 FUN_14dabf3f1 body=198 status=ok
// SIG undefined FUN_14dabf3f1(void)

void FUN_14dabf3f1(void)

{
  return;
}



// FUNCTION 14dabf544 FUN_14dabf544 body=164 status=ok
// SIG undefined FUN_14dabf544(void)

void FUN_14dabf544(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RSI;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *(undefined8 *)(param_2 + 8) = unaff_RSI;
  (*(code *)&LAB_166917f0a)(param_1,uStackX_10,&LAB_166917f0a,local_res8);
  return;
}



// FUNCTION 14dabfbac FUN_14dabfbac body=146 status=ok
// SIG undefined FUN_14dabfbac(void)

void FUN_14dabfbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b15692c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dabfc3e FUN_14dabfc3e body=156 status=ok
// SIG undefined FUN_14dabfc3e(void)

void FUN_14dabfc3e(void)

{
  return;
}



// FUNCTION 14dac00e3 FUN_14dac00e3 body=144 status=ok
// SIG undefined FUN_14dac00e3(void)

void FUN_14dac00e3(void)

{
  return;
}



// FUNCTION 14dac0193 FUN_14dac0193 body=164 status=ok
// SIG undefined FUN_14dac0193(void)

/* WARNING: Removing unreachable block (ram,0x000165864403) */
/* WARNING: Removing unreachable block (ram,0x000161803e46) */
/* WARNING: Removing unreachable block (ram,0x000161803e57) */
/* WARNING: Removing unreachable block (ram,0x000161803ec9) */
/* WARNING: Removing unreachable block (ram,0x000161803ed5) */
/* WARNING: Removing unreachable block (ram,0x000165864258) */
/* WARNING: Removing unreachable block (ram,0x000165864385) */
/* WARNING: Removing unreachable block (ram,0x000165864390) */
/* WARNING: Removing unreachable block (ram,0x000165864396) */
/* WARNING: Removing unreachable block (ram,0x00016586439b) */
/* WARNING: Removing unreachable block (ram,0x000165864405) */
/* WARNING: Removing unreachable block (ram,0x00016586443a) */
/* WARNING: Removing unreachable block (ram,0x000161803e52) */
/* WARNING: Removing unreachable block (ram,0x00016176c165) */
/* WARNING: Removing unreachable block (ram,0x00016586443f) */
/* WARNING: Removing unreachable block (ram,0x000165864445) */
/* WARNING: Removing unreachable block (ram,0x000165864450) */
/* WARNING: Removing unreachable block (ram,0x00014dac02d8) */
/* WARNING: Removing unreachable block (ram,0x00014dac0238) */
/* WARNING: Removing unreachable block (ram,0x00014dac02d2) */
/* WARNING: Removing unreachable block (ram,0x00014dac02cd) */

undefined8 FUN_14dac0193(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  int unaff_R13D;
  int in_stack_00000008;
  undefined8 in_stack_00000020;
  
  if (-~(unaff_R13D + in_stack_00000008 + 0x6be00d17 ^ 0x800feb7U) == ~param_2 + 2) {
    uVar1 = (*(code *)0x15ba01c0f)(param_1,in_stack_00000020,-0x3105c08 - (-1 - param_3));
    return uVar1;
  }
  uVar1 = FUN_162a39479();
  return uVar1;
}



// FUNCTION 14dac0238 FUN_14dac0238 body=328 status=ok
// SIG undefined FUN_14dac0238(void)

/* WARNING: Removing unreachable block (ram,0x000165864403) */
/* WARNING: Removing unreachable block (ram,0x000161803e46) */
/* WARNING: Removing unreachable block (ram,0x000161803e57) */
/* WARNING: Removing unreachable block (ram,0x000161803ec9) */
/* WARNING: Removing unreachable block (ram,0x000161803ed5) */
/* WARNING: Removing unreachable block (ram,0x000165864258) */
/* WARNING: Removing unreachable block (ram,0x000165864385) */
/* WARNING: Removing unreachable block (ram,0x000165864390) */
/* WARNING: Removing unreachable block (ram,0x000165864396) */
/* WARNING: Removing unreachable block (ram,0x00016586439b) */
/* WARNING: Removing unreachable block (ram,0x000165864405) */
/* WARNING: Removing unreachable block (ram,0x00016586443a) */
/* WARNING: Removing unreachable block (ram,0x000161803e52) */
/* WARNING: Removing unreachable block (ram,0x00016176c165) */
/* WARNING: Removing unreachable block (ram,0x00016586443f) */
/* WARNING: Removing unreachable block (ram,0x000165864445) */
/* WARNING: Removing unreachable block (ram,0x000165864450) */
/* WARNING: Removing unreachable block (ram,0x00014dac02d8) */

undefined8 FUN_14dac0238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 in_R10;
  ulonglong uVar5;
  undefined8 in_R11;
  ulonglong uVar6;
  ulonglong in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong uStackX_20;
  
  uVar6 = local_res10 + in_stack_00000008 + (local_res10 & in_stack_00000008) * -2;
  uVar1 = local_res18 ^ 0xffffffffffffffff | in_stack_00000008;
  if (-1 < (longlong)
           -(-~(~in_stack_00000008 | local_res18) -
            (~(uVar1 - (~in_stack_00000008 | local_res18 | uVar1)) + 2))) {
    uVar1 = uStackX_20 ^ in_stack_00000008;
    *(undefined8 *)(uVar1 - 8) = param_2;
    puVar3 = &DAT_1568edec2;
    *(undefined8 *)(uVar1 - 0x10) = param_3;
    *(undefined8 *)(uVar1 - 0x18) = param_3;
    *(undefined8 *)(uVar1 - 0x20) = in_R11;
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    uVar4 = *(ulonglong *)(uVar1 - 0x18);
    *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar1 - 0x20) = in_R10;
    uVar5 = 0x51016202;
    *(undefined8 *)(uVar1 - 0x28) = 0x161803dbc;
    FUN_1568ede4d();
    *(code **)(uVar1 - 0x28) = FUN_1568ede4d;
    *(ulonglong *)(uVar1 - 0x28) =
         *(longlong *)(uVar1 - 0x28) + ~((~(~uVar4 & ~uVar6) + ~uVar6) - uVar4) * -2;
    *(undefined8 *)(uVar1 - 0x28) = *(undefined8 *)(puVar3 + -0x38);
    *(ulonglong *)(uVar1 - 0x28) = *(ulonglong *)(uVar1 - 0x28) ^ uVar5;
    *(undefined8 *)(uVar1 - 0x30) = 0x710d49db;
    uVar2 = *(undefined8 *)(uVar1 - 0x28);
    *(undefined **)(uVar1 - 0x28) = &DAT_16176c1cd;
    return uVar2;
  }
  uVar2 = FUN_161803d19();
  return uVar2;
}



// FUNCTION 14dac0382 FUN_14dac0382 body=438 status=ok
// SIG undefined FUN_14dac0382(void)

/* WARNING: Removing unreachable block (ram,0x00014dac048e) */
/* WARNING: Removing unreachable block (ram,0x00014dac0494) */

void FUN_14dac0382(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_14df4a600(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3);
  FUN_161b8f677(FUN_161b8f677);
  return;
}



// FUNCTION 14dac049a FUN_14dac049a body=113 status=ok
// SIG undefined FUN_14dac049a(void)

void FUN_14dac049a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte in_AL;
  undefined8 unaff_RBP;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  longlong local_res10;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7abd96;
  bVar4 = SBORROW1(in_AL,DAT_14d7abd96);
  cVar2 = in_AL - DAT_14d7abd96;
  if (cVar2 == '\0') {
    DAT_14d7abd96 = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  uVar1 = *(undefined8 *)(local_res10 + -0x20);
  uVar5 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x461d326;
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(code **)(local_res10 + -0x28) = FUN_165c7153c;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x28);
  return;
}



// FUNCTION 14dac089c FUN_14dac089c body=260 status=ok
// SIG undefined FUN_14dac089c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf4c7) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf4e8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf4d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf4db) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf485) */
/* WARNING: Removing unreachable block (ram,0x000165a5b553) */
/* WARNING: Removing unreachable block (ram,0x000165a5b55f) */
/* WARNING: Removing unreachable block (ram,0x00014db4a008) */
/* WARNING: Removing unreachable block (ram,0x00014db4a00e) */
/* WARNING: Removing unreachable block (ram,0x00014db4a013) */
/* WARNING: Removing unreachable block (ram,0x00014dac0907) */
/* WARNING: Removing unreachable block (ram,0x00014dac090d) */
/* WARNING: Removing unreachable block (ram,0x00014dac0912) */

void FUN_14dac089c(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong auStackX_8 [2];
  ulonglong auStackX_18 [2];
  undefined8 uStack_8;
  
  uVar3 = *(undefined8 *)((longlong)auStackX_8 + param_1);
  *(ulonglong *)((longlong)auStackX_8 + param_1) = unaff_R13 ^ unaff_R15;
  uVar4 = *(ulonglong *)((longlong)auStackX_8 + param_1 + 8);
  *(undefined8 *)((longlong)auStackX_18 + param_1 + -0x18) = in_R11;
  uVar7 = *(ulonglong *)((longlong)auStackX_18 + param_1 + -0x18);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_1 + 8);
  *puVar1 = *puVar1 & unaff_R15;
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_1 + 8);
  *puVar1 = ~*puVar1;
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_1 + 8);
  *puVar1 = *puVar1 & ~(~uVar4 & ~unaff_R15);
  *(ulonglong *)((longlong)auStackX_8 + param_1) = uVar7;
  lVar5 = *(longlong *)((longlong)auStackX_18 + param_1);
  *(ulonglong *)((longlong)auStackX_18 + param_1) =
       *(ulonglong *)((longlong)auStackX_18 + param_1) & unaff_R15;
  *(undefined8 *)((longlong)auStackX_18 + param_1 + -0x18) = uVar3;
  puVar1 = (ulonglong *)((longlong)auStackX_18 + param_1);
  *puVar1 = *puVar1 << 1 | *puVar1 >> 0x3f;
  lVar8 = *(longlong *)((longlong)auStackX_18 + param_1 + -0x18);
  *(ulonglong *)((longlong)auStackX_18 + param_1) =
       *(ulonglong *)((longlong)auStackX_18 + param_1) & 0xfffffffffffffffe;
  *(undefined8 *)((longlong)auStackX_18 + param_1 + -0x18) = unaff_retaddr;
  *(undefined8 *)((longlong)&uStack_8 + param_1) = in_RAX;
  *(undefined4 *)((longlong)&uStack_8 + param_1) = 0x35e22a8e;
  *(undefined4 *)((longlong)&uStack_8 + param_1 + 4) = 0;
  lVar6 = *(longlong *)
           (&stack0xfffffffffe33e0cd +
           (*(ulonglong *)((longlong)&uStack_8 + param_1) ^ 0x342e35c5) + param_1);
  *(undefined8 *)((longlong)auStackX_18 + param_1 + -0x18) =
       *(undefined8 *)((longlong)auStackX_18 + param_1 + -0x18);
  *(undefined8 *)((longlong)auStackX_18 + param_1) = 0;
  *(longlong *)((longlong)auStackX_18 + param_1) =
       *(longlong *)((longlong)auStackX_18 + param_1) - ((lVar5 + unaff_R15) - lVar6);
  *(ulonglong *)((longlong)auStackX_18 + param_1) = ~*(ulonglong *)((longlong)auStackX_18 + param_1)
  ;
  *(longlong *)((longlong)auStackX_18 + param_1) =
       *(longlong *)((longlong)auStackX_18 + param_1) + 1;
  *(undefined8 *)((longlong)auStackX_8 + param_1) = unaff_RBX;
  lVar5 = *(longlong *)((longlong)auStackX_18 + param_1 + 8);
  puVar1 = (ulonglong *)((longlong)auStackX_18 + param_1 + 8);
  *puVar1 = *puVar1 & unaff_R15;
  plVar2 = (longlong *)((longlong)auStackX_18 + param_1 + 8);
  *plVar2 = *plVar2 << 1;
  *(undefined4 *)((longlong)auStackX_18 + param_1 + -0x18) = 0x905cb12b;
  *(undefined4 *)((longlong)auStackX_18 + param_1 + -0x14) = 0xffffffff;
  *(ulonglong *)
   (&stack0x6fa34ef5 + *(longlong *)((longlong)auStackX_18 + param_1 + -0x18) + param_1) =
       (lVar5 + unaff_R15) - *(longlong *)((longlong)auStackX_18 + param_1 + 8);
  *(ushort *)((longlong)auStackX_18 + param_1) =
       *(ushort *)((longlong)auStackX_18 + param_1) & 0xfeff;
  lVar5 = *(longlong *)((longlong)auStackX_18 + param_1 + 8);
  *(undefined8 *)(lVar5 + -8) = 0;
  *(longlong *)(lVar5 + -8) = *(longlong *)(lVar5 + -8) - lVar8;
  *(longlong *)(lVar5 + -8) = -*(longlong *)(lVar5 + -8);
  *(undefined8 *)(lVar5 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar5 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar5 + -0x10) = *(undefined8 *)(lVar5 + -8);
  *(undefined1 **)(lVar5 + -8) = &LAB_1578a3b31;
  FUN_1578a3b09();
  return;
}



// FUNCTION 14dac09a3 FUN_14dac09a3 body=154 status=ok
// SIG undefined FUN_14dac09a3(void)

void FUN_14dac09a3(void)

{
  FUN_165dd849a();
  return;
}



// FUNCTION 14dac0e8b FUN_14dac0e8b body=67 status=ok
// SIG undefined FUN_14dac0e8b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dac0e8b(undefined8 param_1)

{
  undefined6 uVar1;
  longlong unaff_RBX;
  
  uVar1 = (undefined6)((ulonglong)param_1 >> 0x10);
  LOCK();
  *(char *)(unaff_RBX + -0x7eb0ffc3) = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  *(char *)CONCAT62(uVar1,CONCAT11(0x38,(char)param_1)) =
       *(char *)CONCAT62(uVar1,CONCAT11(0x38,(char)param_1)) + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dac0fd4 FUN_14dac0fd4 body=165 status=ok
// SIG undefined FUN_14dac0fd4(void)

ulonglong FUN_14dac0fd4(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dac1423 FUN_14dac1423 body=99 status=ok
// SIG undefined FUN_14dac1423(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dac1423(void)

{
  undefined8 in_RAX;
  uint uVar1;
  undefined8 local_res10;
  undefined8 uStackX_20;
  
  uVar1 = (uint)local_res10 & 0x9801f0af;
  local_res10._0_4_ = (uint)local_res10 | 0x9801f0af;
  local_res10 = CONCAT44(local_res10._4_4_,~(~uVar1 & (uint)local_res10));
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res10._4_4_ = 0xb0c49251;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res10._4_4_ = 0xffffffff;
  *(undefined8 *)(&stack0x5bb34d35 + local_res10) = in_RAX;
  return uStackX_20;
}



// FUNCTION 14dac1630 FUN_14dac1630 body=167 status=ok
// SIG undefined FUN_14dac1630(void)

void FUN_14dac1630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x165188061)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dac1845 FUN_14dac1845 body=124 status=ok
// SIG undefined FUN_14dac1845(void)

void FUN_14dac1845(void)

{
  undefined8 unaff_retaddr;
  
  FUN_164993036(unaff_retaddr);
  return;
}



// FUNCTION 14dac1954 FUN_14dac1954 body=139 status=ok
// SIG undefined FUN_14dac1954(void)

void FUN_14dac1954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_1574ba48f(param_1,in_stack_00000008,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dac19e0 FUN_14dac19e0 body=3 status=ok
// SIG undefined FUN_14dac19e0(void)

void FUN_14dac19e0(void)

{
  return;
}



// FUNCTION 14dac1a90 thunk_FUN_14dac1a96 body=5 status=ok
// SIG undefined thunk_FUN_14dac1a96(void)

void thunk_FUN_14dac1a96(longlong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  (*(code *)0x166434802)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78),
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,param_1 + unaff_RBX + 1);
  return;
}



// FUNCTION 14dac1a96 FUN_14dac1a96 body=149 status=ok
// SIG undefined FUN_14dac1a96(void)

void FUN_14dac1a96(longlong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  (*(code *)0x166434802)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78),
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,param_1 + unaff_RBX + 1);
  return;
}



// FUNCTION 14dac1b2c FUN_14dac1b2c body=305 status=ok
// SIG undefined FUN_14dac1b2c(void)

/* WARNING: Removing unreachable block (ram,0x00014dac1bb0) */
/* WARNING: Removing unreachable block (ram,0x00014dac1bbb) */
/* WARNING: Removing unreachable block (ram,0x00014dac1bb6) */
/* WARNING: Removing unreachable block (ram,0x00015b230b0d) */
/* WARNING: Removing unreachable block (ram,0x00015b230ae4) */

void FUN_14dac1b2c(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong in_R11;
  longlong *plVar5;
  ulonglong unaff_R14;
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
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = ~(local_res18 & in_RAX) &
          (~(~(unaff_R14 & 0xffffffff8a0013ab) & (unaff_R14 | 0xffffffff8a0013ab)) + local_res18 |
          in_RAX);
  plVar5 = (longlong *)~((~in_RAX | local_res20) & (0xffffffffffffffff - local_res20 | in_RAX));
  bVar14 = (uVar1 & 0x4000) != 0;
  bVar13 = (uVar1 & 0x800) != 0;
  bVar12 = (uVar1 & 0x200) != 0;
  bVar11 = 0;
  bVar10 = (uVar1 & 0x80) != 0;
  bVar9 = (uVar1 & 0x40) != 0;
  bVar8 = (uVar1 & 0x10) != 0;
  bVar7 = (uVar1 & 4) != 0;
  bVar6 = (uVar1 & 1) != 0;
  bVar18 = (uVar1 & 0x200000) != 0;
  bVar15 = (uVar1 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)();
  *plVar5 = in_R11;
  plVar5[-1] = in_R11;
  plVar5[-2] = uVar4;
  *(undefined4 *)(plVar5 + -2) = 0x116df881;
  *(undefined4 *)((longlong)plVar5 + -0xc) = 0;
  lVar3 = plVar5[-2];
  plVar5[-2] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
               (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
               (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
               (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
               (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
               (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  plVar5[-3] = lVar3;
  plVar5[-3] = plVar5[-3] + -0xe89c291;
  plVar5[-2] = param_2;
  *plVar5 = lVar3 + -0xe89c291;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dac1c5e FUN_14dac1c5e body=161 status=ok
// SIG undefined FUN_14dac1c5e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165787769) */

void FUN_14dac1c5e(void)

{
  thunk_FUN_16578776c();
  return;
}



// FUNCTION 14dac1dec FUN_14dac1dec body=115 status=ok
// SIG undefined FUN_14dac1dec(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c05f6) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0606) */
/* WARNING: Removing unreachable block (ram,0x00014d7c05b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac1dec(void)

{
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  FUN_16602970b();
  return;
}



// FUNCTION 14dac1f4b FUN_14dac1f4b body=178 status=ok
// SIG undefined FUN_14dac1f4b(void)

/* WARNING: Removing unreachable block (ram,0x00014dac1ff2) */
/* WARNING: Removing unreachable block (ram,0x00014dac1ff8) */
/* WARNING: Removing unreachable block (ram,0x0001569b4c78) */

void FUN_14dac1f4b(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  plVar1 = (longlong *)(local_res10 + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_4;
  *(longlong *)(local_res10 + -0x18) = *plVar1;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  lVar2 = *(longlong *)(local_res10 + -8);
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) & 0x1569b4c8b;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) << 1;
  *(undefined1 **)(local_res10 + -8) = &LAB_1569b4c8b + (lVar2 - *(longlong *)(local_res10 + -8));
  FUN_1569b4c78();
  return;
}



// FUNCTION 14dac1ffe FUN_14dac1ffe body=171 status=ok
// SIG undefined FUN_14dac1ffe(void)

void FUN_14dac1ffe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_R10;
  longlong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x5d742062 + in_stack_00000008) = in_R10;
  FUN_16168b308(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14dac2297 FUN_14dac2297 body=767 status=ok
// SIG undefined FUN_14dac2297(void)

void FUN_14dac2297(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  
  FUN_160b6b5ac(-1 - ((~(param_1 | 0xffffffffc0f66bfd) | ~(param_1 & 0xffffffffc0f66bfd)) +
                      (param_1 | 0xffffffffc0f66bfd) + 1),unaff_retaddr,~(in_RAX & param_3));
  return;
}



// FUNCTION 14dac23cd FUN_14dac23cd body=163 status=ok
// SIG undefined FUN_14dac23cd(void)

void FUN_14dac23cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_8;
  
  local_8 = *(ulonglong *)(unaff_R13 + -0x98) ^ unaff_R15;
  FUN_16676eb0e(unaff_retaddr,param_2,&local_8,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dac25b3 FUN_14dac25b3 body=83 status=ok
// SIG undefined FUN_14dac25b3(void)

undefined8 FUN_14dac25b3(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dac279e FUN_14dac279e body=164 status=ok
// SIG undefined FUN_14dac279e(void)

void FUN_14dac279e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 unaff_EBX;
  uint unaff_retaddr;
  
  *(uint *)(param_1 + 0x4c) = (unaff_retaddr ^ 0xcf8e7ce) + *(int *)(param_1 + 0x4c);
  FUN_1625c6e63(param_1,unaff_EBX,param_3,param_4,param_2);
  return;
}



// FUNCTION 14dac2843 FUN_14dac2843 body=169 status=ok
// SIG undefined FUN_14dac2843(void)

/* WARNING: Removing unreachable block (ram,0x00014dac28dd) */
/* WARNING: Removing unreachable block (ram,0x00014dac28ee) */
/* WARNING: Removing unreachable block (ram,0x00014dac28e9) */

void FUN_14dac2843(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_1618568aa(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14dac28ee FUN_14dac28ee body=132 status=ok
// SIG undefined FUN_14dac28ee(void)

void FUN_14dac28ee(void)

{
  return;
}



// FUNCTION 14dac2af1 FUN_14dac2af1 body=37 status=ok
// SIG undefined FUN_14dac2af1(void)

void FUN_14dac2af1(void)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14dac2c16 FUN_14dac2c16 body=375 status=ok
// SIG undefined FUN_14dac2c16(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dac2cb2) */
/* WARNING: Removing unreachable block (ram,0x00014dac2cb8) */
/* WARNING: Removing unreachable block (ram,0x00014dac2d0a) */

void FUN_14dac2c16(void)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  longlong in_R10;
  ulonglong in_R11;
  undefined8 unaff_R12;
  longlong unaff_R15;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(in_R10 + 8) =
       ~((*(longlong *)(in_R10 + 8) - (unaff_RDI | *(ulonglong *)(in_R10 + 8))) + unaff_R15);
  uVar2 = ~((~in_RAX | in_stack_00000030) & (~in_stack_00000030 | in_RAX));
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (~in_R11 + 1);
  *(undefined8 *)(uVar2 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x15b2daa71;
  *(longlong *)(uVar2 - 8) = -*(longlong *)(uVar2 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dac2dd0 FUN_14dac2dd0 body=148 status=ok
// SIG undefined FUN_14dac2dd0(void)

undefined8 FUN_14dac2dd0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dac2e64 FUN_14dac2e64 body=131 status=ok
// SIG undefined FUN_14dac2e64(void)

void FUN_14dac2e64(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 uStackX_8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = (~(~uStackX_8 & uVar1) + uVar1) - uStackX_8;
  FUN_1575914b3(uStackX_8,uVar2,~(uVar2 & (uVar1 ^ 0xffffffffffffffff | uStackX_8)),
                ~(*(ulonglong *)(unaff_RDI + -0x60) & uStackX_8) &
                (*(ulonglong *)(unaff_RDI + -0x60) | uStackX_8));
  return;
}



// FUNCTION 14dac30e2 FUN_14dac30e2 body=440 status=ok
// SIG undefined FUN_14dac30e2(void)

/* WARNING: Removing unreachable block (ram,0x00014dac31fe) */
/* WARNING: Removing unreachable block (ram,0x00014d8c2166) */
/* WARNING: Removing unreachable block (ram,0x00014dac3171) */
/* WARNING: Removing unreachable block (ram,0x00014dac31f9) */
/* WARNING: Removing unreachable block (ram,0x00014dac3204) */

undefined8
FUN_14dac30e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x1611954a5)(0x1611954a5,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dac34a2 FUN_14dac34a2 body=146 status=ok
// SIG undefined FUN_14dac34a2(void)

void FUN_14dac34a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 in_AL;
  ushort *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 local_res8;
  
  *unaff_RSI = ~(*unaff_RSI & 0x100) + *unaff_RSI + 1;
  LOCK();
  UNLOCK();
  DAT_14d7a56e5 = in_AL;
  *(undefined8 *)(param_5 + -8) = 0x44bd454;
  *(undefined8 *)(param_5 + -0x10) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x18) = unaff_RDI;
  *(undefined **)(param_5 + -0x10) = &DAT_15658dcb4;
  FUN_15658dcb1(param_1,param_2,local_res8,param_4);
  return;
}



// FUNCTION 14dac35db FUN_14dac35db body=322 status=ok
// SIG undefined FUN_14dac35db(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000156ac1177) overlaps instruction at (ram,0x000156ac1176)
    */
/* WARNING: Removing unreachable block (ram,0x000166a76ee7) */
/* WARNING: Removing unreachable block (ram,0x000156ac1170) */
/* WARNING: Removing unreachable block (ram,0x000156ac11eb) */
/* WARNING: Removing unreachable block (ram,0x00014dac36a6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac35db(void)

{
  if (&DAT_00000007 < &stack0xfffffffffffffff8) {
    FUN_156ac1141();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (0xffffffffffffffdf < *(ulonglong *)((longlong)ProcessEnvironmentBlock + 0x18)) {
    return;
  }
  return;
}



// FUNCTION 14dac3722 FUN_14dac3722 body=179 status=ok
// SIG undefined FUN_14dac3722(void)

void FUN_14dac3722(void)

{
  return;
}



// FUNCTION 14dac393c FUN_14dac393c body=148 status=ok
// SIG undefined FUN_14dac393c(void)

void FUN_14dac393c(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong in_R11;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff6dbd849 + in_R11);
  uVar2 = *puVar1;
  *puVar1 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | param_1;
  *puVar1 = ~((~param_1 | uVar2) & *puVar1);
  FUN_16188fc1b();
  return;
}



// FUNCTION 14dac3a63 FUN_14dac3a63 body=293 status=ok
// SIG undefined FUN_14dac3a63(void)

/* WARNING: Removing unreachable block (ram,0x0001610c079c) */
/* WARNING: Removing unreachable block (ram,0x0001610c0796) */
/* WARNING: Removing unreachable block (ram,0x0001610c07a1) */
/* WARNING: Removing unreachable block (ram,0x00014dac3af0) */

void FUN_14dac3a63(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x165c8e2e9)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
             *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
             (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14dac3b8e FUN_14dac3b8e body=131 status=ok
// SIG undefined FUN_14dac3b8e(void)

/* WARNING: Removing unreachable block (ram,0x00014dac3c13) */

void FUN_14dac3b8e(void)

{
  return;
}



// FUNCTION 14dac3c13 thunk_FUN_14dac3c19 body=5 status=ok
// SIG undefined thunk_FUN_14dac3c19(void)

void thunk_FUN_14dac3c19(undefined8 param_1)

{
  undefined8 unaff_R14;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = param_1;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R14;
  (*(code *)0x160f817d9)(&LAB_165499326);
  return;
}



// FUNCTION 14dac3c19 FUN_14dac3c19 body=154 status=ok
// SIG undefined FUN_14dac3c19(void)

void FUN_14dac3c19(undefined8 param_1)

{
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  (*(code *)0x160f817d9)(&LAB_165499326);
  return;
}



// FUNCTION 14dac3d4f FUN_14dac3d4f body=136 status=ok
// SIG undefined FUN_14dac3d4f(void)

void FUN_14dac3d4f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_14d84f9cd(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,FUN_14d84f9cd,param_4);
  return;
}



// FUNCTION 14dac3ef0 FUN_14dac3ef0 body=132 status=ok
// SIG undefined FUN_14dac3ef0(void)

void FUN_14dac3ef0(void)

{
  FUN_15b6496b2();
  return;
}



// FUNCTION 14dac3f75 FUN_14dac3f75 body=135 status=ok
// SIG undefined FUN_14dac3f75(void)

void FUN_14dac3f75(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156edc1e8(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                 (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
  return;
}



// FUNCTION 14dac4081 FUN_14dac4081 body=119 status=ok
// SIG undefined FUN_14dac4081(void)

/* WARNING: Removing unreachable block (ram,0x00014dac40b6) */

void FUN_14dac4081(void)

{
  return;
}



// FUNCTION 14dac4114 FUN_14dac4114 body=45 status=ok
// SIG undefined FUN_14dac4114(void)

void FUN_14dac4114(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  ulonglong uStackX_10;
  undefined8 uStackX_20;
  
  *(undefined4 *)(&stack0x12875c0f + unaff_RSI) = 0;
  *(undefined8 *)((longlong)&uStackX_20 + (uStackX_10 ^ 0x1123db61)) = unaff_R14;
                    /* WARNING: Could not recover jumptable at 0x00014dac413f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14dac41b9 FUN_14dac41b9 body=198 status=ok
// SIG undefined FUN_14dac41b9(void)

void FUN_14dac41b9(byte param_1,uint param_2)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1654b46ec(~(param_2 << (param_1 & 0x1f) | param_2 >> 0x20 - (param_1 & 0x1f)),
                *(undefined8 *)(unaff_R13 + -0x78),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~unaff_RBX);
  return;
}



// FUNCTION 14dac440d FUN_14dac440d body=340 status=ok
// SIG undefined FUN_14dac440d(void)

/* WARNING: Removing unreachable block (ram,0x00014dac4539) */
/* WARNING: Removing unreachable block (ram,0x00014dac453f) */
/* WARNING: Removing unreachable block (ram,0x0001565d6e04) */

void FUN_14dac440d(void)

{
  FUN_1662074f8();
  return;
}



// FUNCTION 14dac46a2 FUN_14dac46a2 body=41 status=ok
// SIG undefined FUN_14dac46a2(void)

void FUN_14dac46a2(void)

{
  return;
}



// FUNCTION 14dac487b FUN_14dac487b body=281 status=ok
// SIG undefined FUN_14dac487b(void)

void FUN_14dac487b(void)

{
  FUN_15afc1b38();
  FUN_1569fd3de();
  return;
}



// FUNCTION 14dac49a3 FUN_14dac49a3 body=155 status=ok
// SIG undefined FUN_14dac49a3(void)

/* WARNING: Removing unreachable block (ram,0x00014dac49d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac49a3(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_162bef42d(param_1 - param_3,FUN_162bef42d);
  return;
}



// FUNCTION 14dac4bf7 FUN_14dac4bf7 body=612 status=ok
// SIG undefined FUN_14dac4bf7(void)

/* WARNING: Removing unreachable block (ram,0x00014dac4d14) */
/* WARNING: Removing unreachable block (ram,0x00014dac4d25) */
/* WARNING: Removing unreachable block (ram,0x00014dac4db0) */
/* WARNING: Removing unreachable block (ram,0x00014dac4dbc) */
/* WARNING: Removing unreachable block (ram,0x00015b4d0877) */
/* WARNING: Removing unreachable block (ram,0x0001626f2ac9) */
/* WARNING: Removing unreachable block (ram,0x00016111536e) */
/* WARNING: Removing unreachable block (ram,0x00014dac4d1a) */
/* WARNING: Removing unreachable block (ram,0x0001626f2890) */

void FUN_14dac4bf7(undefined8 param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  longlong lVar4;
  undefined8 unaff_R12;
  longlong unaff_R13;
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
  bool bVar16;
  ulonglong local_res10 [3];
  ulonglong in_stack_00000028;
  ulonglong in_stack_00000030;
  
  local_res10[1] = *(undefined8 *)((longlong)local_res10 + unaff_R13);
  local_res10[2] = unaff_RDI;
  uRam000000014d7bd2f1 = FUN_14db77368();
  local_res10[2] = local_res10[2] ^ in_R10;
  uVar3 = ~((0xffffffffffffffff - in_R10 | in_stack_00000028) & (~in_stack_00000028 | in_R10));
  lVar4 = ((in_stack_00000030 | in_R10) -
          (~(in_stack_00000030 & in_R10) | in_stack_00000030 | in_R10)) +
          ~(in_stack_00000030 & in_R10);
  bVar8 = (uVar3 & 0x80) != 0;
                    /* WARNING: Read-only address (ram,0x00014d7bd2f1) is written */
  LOCK();
  UNLOCK();
  *(code **)(lVar4 + -8) = FUN_14db77368;
  *(code **)(lVar4 + -0x10) = FUN_14db77368;
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)bVar8 * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  if (!bVar8) {
    FUN_166bf2cfc();
    return;
  }
  *(undefined8 *)(lVar4 + -0x20) = unaff_R12;
  uVar3 = *(ulonglong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(lVar4 + -0x20) = local_res10[2];
  uVar3 = *(ulonglong *)(lVar4 + -0x18);
  bVar14 = (uVar3 & 0x4000) != 0;
  bVar13 = (uVar3 & 0x800) != 0;
  bVar12 = (uVar3 & 0x400) != 0;
  bVar11 = (uVar3 & 0x200) != 0;
  bVar10 = (uVar3 & 0x100) != 0;
  bVar9 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar8 = (uVar3 & 1) != 0;
  bVar16 = (uVar3 & 0x200000) != 0;
  bVar15 = (uVar3 & 0x40000) != 0;
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar4 + -0x20);
  *(ulonglong *)(lVar4 + -0x20) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)bVar12 * 0x400 |
       (ulonglong)bVar11 * 0x200 | (ulonglong)bVar10 * 0x100 | (ulonglong)bVar9 * 0x80 |
       (ulonglong)bVar7 * 0x40 | (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar8 |
       (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
  *(ulonglong *)(lVar4 + -0x28) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)bVar12 * 0x400 |
       (ulonglong)bVar11 * 0x200 | (ulonglong)bVar10 * 0x100 | (ulonglong)bVar9 * 0x80 |
       (ulonglong)bVar7 * 0x40 | (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar8 |
       (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
  *(undefined8 *)(lVar4 + -8) = 0x1fa20c;
  uVar3 = *(ulonglong *)(lVar4 + -0x20);
  *(ulonglong *)(lVar4 + -0x21f0) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(lVar4 + -0x21f8) = local_res10[1];
  *(undefined8 *)(lVar4 + -0x2200) = param_1;
  puVar1 = (ushort *)(lVar4 + -0x21f0);
  *puVar1 = ~*puVar1;
  *(ulonglong *)(lVar4 + -0x2208) = local_res10[0];
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0x100) + 0x100) - *puVar1;
  FUN_16133aa9b();
  return;
}



// FUNCTION 14dac4dbc FUN_14dac4dbc body=38 status=ok
// SIG undefined FUN_14dac4dbc(void)

void FUN_14dac4dbc(void)

{
  undefined8 uStackX_18;
  
  FUN_165c7153c(uStackX_18);
  return;
}



// FUNCTION 14dac4e64 FUN_14dac4e64 body=163 status=ok
// SIG undefined FUN_14dac4e64(void)

void FUN_14dac4e64(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166063db1(*(ulonglong *)(unaff_R12 + -0x40) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x40) & in_RAX) * -2,4,
                *(undefined8 *)(unaff_R12 + -0x80),
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14dac4f92 FUN_14dac4f92 body=156 status=ok
// SIG undefined FUN_14dac4f92(void)

void FUN_14dac4f92(void)

{
  undefined8 in_RAX;
  longlong unaff_R12;
  
  FUN_160dedd49(FUN_160dedd49,*(undefined8 *)(unaff_R12 + -0x30),in_RAX);
  return;
}



// FUNCTION 14dac50db FUN_14dac50db body=136 status=ok
// SIG undefined FUN_14dac50db(void)

/* WARNING: Removing unreachable block (ram,0x000165e4b75c) */
/* WARNING: Removing unreachable block (ram,0x000165e4b762) */
/* WARNING: Removing unreachable block (ram,0x000165e4b767) */
/* WARNING: Removing unreachable block (ram,0x000165e4b6aa) */
/* WARNING: Removing unreachable block (ram,0x00014dac5164) */

undefined8 FUN_14dac50db(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dac5164 FUN_14dac5164 body=142 status=ok
// SIG undefined FUN_14dac5164(void)

void FUN_14dac5164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort local_res18;
  
  (*(code *)&LAB_160e86acb)(-0x101 - (-0x101 - (local_res18 | 0xfeff)),param_2,param_3);
  return;
}



// FUNCTION 14dac529c FUN_14dac529c body=360 status=ok
// SIG undefined FUN_14dac529c(void)

/* WARNING: Removing unreachable block (ram,0x00015b5e08de) */

void FUN_14dac529c(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b245732(param_1,0x27469c58);
  FUN_162c56162(~*(ulonglong *)(unaff_R13 + -0x60),
                unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x88));
  return;
}



// FUNCTION 14dac546b FUN_14dac546b body=306 status=ok
// SIG undefined FUN_14dac546b(void)

undefined8 FUN_14dac546b(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  longlong lStackX_10;
  
  plVar1 = (longlong *)(lStackX_10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 + unaff_RDI;
  *(undefined8 *)(lStackX_10 + -0x10) = in_R10;
  *(undefined8 *)(lStackX_10 + -0x18) = in_R10;
  *(undefined8 *)(lStackX_10 + -0x20) = in_RAX;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -8) = 0;
  *(ulonglong *)(lStackX_10 + -8) = *(ulonglong *)(lStackX_10 + -8) ^ 0x1662b9f4d;
  *(undefined8 *)(lStackX_10 + -0x18) = 0x14dac54f8;
  uVar4 = FUN_1662b9f21();
  *(undefined8 *)(lStackX_10 + -8) = unaff_retaddr;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R12;
  *(undefined4 *)(lStackX_10 + -0x20) = 0xb2ffb3e6;
  *(undefined4 *)(lStackX_10 + -0x1c) = 0xffffffff;
  uVar2 = *(undefined8 *)(unaff_R13 + *(longlong *)(lStackX_10 + -0x20) + 0x4d004c12);
  uVar3 = *(undefined8 *)(lStackX_10 + -0x18);
  *(undefined8 *)(lStackX_10 + -0x18) = param_2;
  *(undefined8 *)(lStackX_10 + -0x10) = uVar2;
  *(undefined8 *)(lStackX_10 + -0x20) = uVar3;
  *(code **)(lStackX_10 + -0x28) = FUN_1662b9f21;
  *(undefined8 *)(lStackX_10 + -0x30) = *(undefined8 *)(unaff_R13 + -0x98);
  *(undefined8 *)(lStackX_10 + -0x18) = *(undefined8 *)(lStackX_10 + -0x30);
  *(undefined8 *)(lStackX_10 + -0x20) = uVar4;
  *(undefined8 *)(lStackX_10 + -0x28) = unaff_RSI;
  uVar2 = *(undefined8 *)(unaff_R13 + -0xa0);
  *(undefined8 *)(lStackX_10 + -0x28) = 0x15645ad70;
  return uVar2;
}



// FUNCTION 14dac55a0 FUN_14dac55a0 body=340 status=ok
// SIG undefined FUN_14dac55a0(void)

/* WARNING: Removing unreachable block (ram,0x00016510d29d) */
/* WARNING: Removing unreachable block (ram,0x00016510d2a3) */
/* WARNING: Removing unreachable block (ram,0x00016510d1e7) */
/* WARNING: Removing unreachable block (ram,0x00016108a5f8) */
/* WARNING: Removing unreachable block (ram,0x00016108a64e) */
/* WARNING: Removing unreachable block (ram,0x000156b29966) */
/* WARNING: Removing unreachable block (ram,0x000156b2996c) */
/* WARNING: Removing unreachable block (ram,0x000156b29a13) */
/* WARNING: Removing unreachable block (ram,0x000156b29a19) */
/* WARNING: Removing unreachable block (ram,0x000166479bd0) */
/* WARNING: Removing unreachable block (ram,0x00014dac5641) */
/* WARNING: Removing unreachable block (ram,0x00014dac5647) */
/* WARNING: Removing unreachable block (ram,0x000156b298e5) */
/* WARNING: Removing unreachable block (ram,0x00016510d1d6) */
/* WARNING: Removing unreachable block (ram,0x000156e52dae) */

undefined8 FUN_14dac55a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar9;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar10;
  ulonglong uVar11;
  
  uVar5 = *(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP;
  uVar11 = *(ulonglong *)(unaff_RSI + -0x58);
  uVar9 = *(ulonglong *)(unaff_RSI + -0x80) ^ unaff_RBP;
  uVar6 = *(ulonglong *)(unaff_RSI + -0x88);
  uVar1 = *(ulonglong *)(unaff_RSI + -8);
  uVar8 = 1;
  FUN_166cfcd67(uVar5,FUN_166cfcd67,param_3);
  lVar2 = *(longlong *)(uVar9 + 8);
  uVar3 = *(ulonglong *)(uVar9 + 8);
  *(longlong *)(uVar9 + 8) = -*(longlong *)(uVar9 + 8);
  *(longlong *)(uVar9 + 8) = *(longlong *)(uVar9 + 8) + -1;
  *(ulonglong *)(uVar9 + 8) = ~uVar5 & *(ulonglong *)(uVar9 + 8) | uVar5;
  *(ulonglong *)(uVar9 + 8) =
       ~((~*(ulonglong *)(uVar9 + 8) | (~uVar5 + lVar2) - (~uVar5 & uVar3)) +
         *(longlong *)(uVar9 + 8) + 1);
  uVar6 = ~((~uVar5 | uVar6) & (~uVar6 | uVar5));
  bVar10 = (uVar1 & 0x80) != 0;
  uVar4 = rdtsc();
  uVar7 = CONCAT44(uVar8,(int)((ulonglong)uVar4 >> 0x20));
  *(undefined8 *)(uVar6 - 8) = uVar7;
  *(undefined8 *)(uVar6 - 0x10) = uVar7;
  *(undefined4 *)(uVar6 - 0x18) = 0xbeb843b;
  *(undefined4 *)(uVar6 - 0x14) = 0;
  lVar2 = *(longlong *)(uVar6 - 0x18);
  *(ulonglong *)(uVar6 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)bVar10 * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar6 - 0x20) = CONCAT44(extraout_var,(int)uVar4);
  if (!bVar10) {
    *(undefined4 *)(uVar6 - 0x28) = 0x632574d6;
    *(undefined4 *)(uVar6 - 0x24) = 0;
    uVar1 = *(ulonglong *)(uVar6 - 0x28);
    *(undefined8 *)(uVar6 - 0x28) = unaff_R15;
    *(ulonglong *)(uVar6 - 0x30) = uVar11 ^ unaff_RBP;
    uVar11 = *(ulonglong *)(uVar6 - 0x18);
    *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(uVar6 - 0x20);
    *(ulonglong *)(uVar6 - 0x20) =
         (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
         (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)(uVar6 - 8) = lVar2 - (uVar1 ^ 0x6675fcfb);
    uVar4 = *(undefined8 *)(uVar6 - 0x18);
    *(undefined8 *)(uVar6 - 0x10) = unaff_R14;
    *(undefined8 *)(uVar6 - 0x18) = unaff_R14;
    *(code **)(uVar6 - 0x10) = FUN_165c7153c;
    return uVar4;
  }
  uVar4 = FUN_162d1232b();
  return uVar4;
}



// FUNCTION 14dac564d FUN_14dac564d body=318 status=ok
// SIG undefined FUN_14dac564d(void)

/* WARNING: Instruction at (ram,0x00014dac5766) overlaps instruction at (ram,0x00014dac5765)
    */
/* WARNING: Removing unreachable block (ram,0x00014dac5705) */
/* WARNING: Removing unreachable block (ram,0x00014dac5766) */
/* WARNING: Removing unreachable block (ram,0x00014dac5765) */

void FUN_14dac564d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  longlong unaff_R15;
  
  param_5 = unaff_R15 - param_5;
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x18) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  *(undefined4 *)(param_5 + -0x28) = 0xcc79b8dc;
  *(undefined4 *)(param_5 + -0x24) = 0xffffffff;
  *(undefined8 *)(param_5 + -0x10) =
       *(undefined8 *)(param_5 + *(longlong *)(param_5 + -0x28) + 0x3386471c);
  *(undefined1 **)(param_5 + -8) = &LAB_162e36c0a;
  FUN_14d7a8e8b(param_1,param_2,param_3,*(undefined8 *)(param_5 + -0x20));
  return;
}



// FUNCTION 14dac578c FUN_14dac578c body=159 status=ok
// SIG undefined FUN_14dac578c(void)

void FUN_14dac578c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_1619cfb56(param_1,FUN_1619cfb56,param_3,local_res8);
  return;
}



// FUNCTION 14dac5833 FUN_14dac5833 body=307 status=ok
// SIG undefined FUN_14dac5833(void)

/* WARNING: Removing unreachable block (ram,0x00014dac589f) */
/* WARNING: Removing unreachable block (ram,0x00014dac58c8) */
/* WARNING: Removing unreachable block (ram,0x00014dac58d4) */

undefined8 FUN_14dac5833(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong in_R11;
  ulonglong unaff_retaddr;
  
  if ((longlong)unaff_retaddr < 0) {
    in_R11 = ~((in_R11 & 0xffffffff | 0xf24d550c28768686) &
              (~(in_R11 & 0xffffffff) | 0xdb2aaf3d7897979));
    *(ulonglong *)(unaff_retaddr & 0x7fffffffffffffff) = in_R11;
  }
  *(int *)(unaff_retaddr & 0x7fffffffffffffff) = (int)in_R11;
  uVar1 = FUN_1618d9dc9(param_1,param_2);
  return uVar1;
}



// FUNCTION 14dac5968 FUN_14dac5968 body=348 status=ok
// SIG undefined FUN_14dac5968(void)

/* WARNING: Removing unreachable block (ram,0x00014dac5a17) */
/* WARNING: Removing unreachable block (ram,0x00014dac5a1d) */
/* WARNING: Removing unreachable block (ram,0x00014dac5a4b) */
/* WARNING: Removing unreachable block (ram,0x00014dac5a4e) */

undefined8 FUN_14dac5968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = (*(code *)0x165fc4c62)(0x165fc4c62,param_2,param_3,in_stack_00000008);
  return uVar1;
}



// FUNCTION 14dac5b34 FUN_14dac5b34 body=344 status=ok
// SIG undefined FUN_14dac5b34(void)

/* WARNING: Removing unreachable block (ram,0x00014dac5bd6) */
/* WARNING: Removing unreachable block (ram,0x00014dac5be2) */

void FUN_14dac5b34(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161455040(*(undefined8 *)(unaff_R13 + -0x78),FUN_161455040,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dac5cff FUN_14dac5cff body=279 status=ok
// SIG undefined FUN_14dac5cff(void)

void FUN_14dac5cff(undefined8 param_1)

{
  FUN_161c85835(param_1,FUN_161c85835,0xfffffffff38235ea);
  (*(code *)0x14dda082a)(0x14dda082a);
  return;
}



// FUNCTION 14dac5e19 FUN_14dac5e19 body=140 status=ok
// SIG undefined FUN_14dac5e19(void)

/* WARNING: Removing unreachable block (ram,0x00014dac5e8a) */

void FUN_14dac5e19(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dac5fa4 FUN_14dac5fa4 body=437 status=ok
// SIG undefined FUN_14dac5fa4(void)

/* WARNING: Removing unreachable block (ram,0x00014dac603e) */
/* WARNING: Removing unreachable block (ram,0x00014dac6044) */
/* WARNING: Removing unreachable block (ram,0x00014dac6049) */
/* WARNING: Removing unreachable block (ram,0x00016515f00b) */
/* WARNING: Removing unreachable block (ram,0x00014dac60c4) */
/* WARNING: Removing unreachable block (ram,0x00014dac60d0) */
/* WARNING: Removing unreachable block (ram,0x00014dac60d5) */

void FUN_14dac5fa4(void)

{
  ulonglong uVar1;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000028;
  
  uVar1 = 0xffffffffffffffff - ((~in_stack_00000008 | in_stack_00000028) + in_stack_00000008 + 1) &
          (in_stack_00000028 | in_stack_00000008);
  _fxsave(uVar1);
  *(undefined8 *)(uVar1 - 8) = 0x1d99e;
  FUN_161668703();
  return;
}



// FUNCTION 14dac615d FUN_14dac615d body=276 status=ok
// SIG undefined FUN_14dac615d(void)

void FUN_14dac615d(undefined8 param_1)

{
  int unaff_EBP;
  longlong unaff_R13;
  
  if (unaff_EBP < 0) {
    (*(code *)&LAB_165c3e16b)();
    return;
  }
  FUN_162977bee(param_1,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dac61de FUN_14dac61de body=150 status=ok
// SIG undefined FUN_14dac61de(void)

void FUN_14dac61de(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R11;
  ulonglong uVar1;
  undefined8 in_stack_00000010;
  
  uVar1 = ~(~(in_R11 & 0xffffffffbde37468) & (in_R11 | 0xffffffffbde37468));
  *(undefined8 *)(&stack0x00000010 + uVar1) = 0x3dd5f49c;
  *(ulonglong *)(&stack0x00000010 + uVar1) = *(ulonglong *)(&stack0x00000010 + uVar1) ^ 0x3dd5f49c;
  *(longlong *)(&stack0x00000010 + uVar1) = *(longlong *)(&stack0x00000010 + uVar1) + param_3;
  FUN_161109535(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14dac6276 FUN_14dac6276 body=89 status=ok
// SIG undefined FUN_14dac6276(void)

void FUN_14dac6276(void)

{
  return;
}



// FUNCTION 14dac632a FUN_14dac632a body=171 status=ok
// SIG undefined FUN_14dac632a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166c319af) */
/* WARNING: Removing unreachable block (ram,0x000166c319b5) */
/* WARNING: Removing unreachable block (ram,0x00014dac63d5) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5e00) */
/* WARNING: Removing unreachable block (ram,0x00014dac6473) */
/* WARNING: Removing unreachable block (ram,0x00014dac647e) */
/* WARNING: Removing unreachable block (ram,0x00014dac6479) */

void FUN_14dac632a(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 uStackX_20;
  
  uVar2 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x28);
  if (uVar2 == 0) {
    FUN_166c3187d();
    return;
  }
  lVar1 = -1 - (uVar2 + param_1 + 1 |
               0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x28) | param_1));
  FUN_1623195e1(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  *(undefined8 *)(uStackX_20 + -8) = unaff_R15;
  *(undefined8 *)(uStackX_20 + -0x10) = unaff_RSI;
  *(undefined8 *)(uStackX_20 + -0x18) = unaff_RSI;
  *(undefined8 *)(uStackX_20 + -0x20) = in_R10;
  *(longlong *)(uStackX_20 + -0x20) = unaff_RDI;
  *(undefined8 *)(uStackX_20 + -0x10) = *(undefined8 *)(uStackX_20 + -8);
  *(undefined8 *)(uStackX_20 + -8) = 0;
  *(longlong *)(uStackX_20 + -8) = *(longlong *)(uStackX_20 + -8) + 0x14dfebf22;
  *(longlong *)(uStackX_20 + -0x10) = lVar1;
  *(longlong *)(uStackX_20 + -0x18) = lVar1;
  *(undefined8 *)(uStackX_20 + -0x20) = in_R11;
  *(undefined8 *)(uStackX_20 + -0x10) = 0x14d7aba38;
  return;
}



// FUNCTION 14dac63d5 FUN_14dac63d5 body=168 status=ok
// SIG undefined FUN_14dac63d5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac63d5(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char in_AH;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  ulonglong local_res20;
  
  puVar3 = (ulonglong *)(local_res20 ^ unaff_R15);
  puVar2 = puVar3 + -1;
  *puVar2 = 0;
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + param_1;
  if (!CARRY8(uVar4,param_1)) {
    puVar3[-2] = param_4;
    puVar3[-3] = param_4;
    puVar3[-4] = local_res10;
    puVar3[-2] = puVar3[-1];
    puVar3[-3] = unaff_retaddr;
    puVar3[-1] = (ulonglong)&LAB_166c4ac29;
    cRam00000000cf1fa689 = (cRam00000000cf1fa689 - in_AH) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CARRY8(uVar4,param_1) || *puVar2 == 0) {
    FUN_166c4abba();
    return;
  }
  lVar5 = *(longlong *)((longlong)puVar3 + (0x4a8899d2 - ~*puVar3));
  puVar3[5] = puVar3[5] & param_1;
  puVar3[5] = puVar3[5] << 1;
  puVar3[5] = (lVar5 + param_1) - puVar3[5];
  uVar6 = puVar3[3];
  *(ushort *)(puVar3 + 4) = (ushort)puVar3[4] & 0xfeff;
  lVar5 = puVar3[5];
  *(undefined8 *)(lVar5 + -8) = unaff_R14;
  *(undefined8 *)(lVar5 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar5 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar5 + -0x20) = unaff_RSI;
  *(undefined4 *)(lVar5 + -0x28) = 0x7ff4095;
  *(undefined4 *)(lVar5 + -0x24) = 0;
  puVar1 = (uint *)(lVar5 + *(longlong *)(lVar5 + -0x28) + -0x7ff40bd);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x380a2e2f;
  puVar1[1] = 0;
  FUN_156ca58e9(uVar6);
  return;
}



// FUNCTION 14dac647e FUN_14dac647e body=182 status=ok
// SIG undefined FUN_14dac647e(void)

void FUN_14dac647e(ulonglong param_1)

{
  uint *puVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong lVar2;
  undefined8 unaff_R14;
  ulonglong local_res8;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  
  lVar2 = *(longlong *)(&stack0x4a8899da + -~local_res8) + param_1 +
          (in_stack_00000030 & param_1) * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_R14;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x20) = unaff_RSI;
  *(undefined4 *)(lVar2 + -0x28) = 0x7ff4095;
  *(undefined4 *)(lVar2 + -0x24) = 0;
  puVar1 = (uint *)(lVar2 + *(longlong *)(lVar2 + -0x28) + -0x7ff40bd);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x380a2e2f;
  puVar1[1] = 0;
  FUN_156ca58e9(uStackX_20);
  return;
}



// FUNCTION 14dac65df FUN_14dac65df body=144 status=ok
// SIG undefined FUN_14dac65df(void)

void FUN_14dac65df(void)

{
  FUN_15676f102();
  thunk_FUN_14dac6678();
  return;
}



// FUNCTION 14dac6672 thunk_FUN_14dac6678 body=5 status=ok
// SIG undefined thunk_FUN_14dac6678(void)

/* WARNING: Removing unreachable block (ram,0x00014dac669e) */

undefined8 thunk_FUN_14dac6678(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x30);
}



// FUNCTION 14dac6678 FUN_14dac6678 body=116 status=ok
// SIG undefined FUN_14dac6678(void)

/* WARNING: Removing unreachable block (ram,0x00014dac669e) */

undefined8 FUN_14dac6678(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x30);
}



// FUNCTION 14dac695b FUN_14dac695b body=287 status=ok
// SIG undefined FUN_14dac695b(void)

/* WARNING: Removing unreachable block (ram,0x00014dac69fa) */

void FUN_14dac695b(longlong param_1)

{
  ulonglong uVar1;
  short unaff_DI;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < unaff_DI) {
    uVar2 = 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28);
    uVar1 = *(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15;
    FUN_1613d06dc(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                   (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                  (uVar1 - (uVar2 | uVar1)) + uVar2 ^ 0xffffffffffffffff,
                  *(ulonglong *)(unaff_R13 + param_1) ^ unaff_R15);
    return;
  }
  FUN_15b9ac2e0();
  return;
}



// FUNCTION 14dac6a95 FUN_14dac6a95 body=303 status=ok
// SIG undefined FUN_14dac6a95(void)

/* WARNING: Removing unreachable block (ram,0x00014dac6b0f) */
/* WARNING: Removing unreachable block (ram,0x00014dac6b15) */

undefined8 FUN_14dac6a95(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dac6c71 FUN_14dac6c71 body=169 status=ok
// SIG undefined FUN_14dac6c71(void)

void FUN_14dac6c71(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong in_R10;
  longlong in_R11;
  
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  uVar1 = *(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = (~(uVar1 & unaff_RBX) + unaff_RBX) - *(longlong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = -1 - (~(in_R10 + 1U) & *(ulonglong *)(in_R11 + 8));
  FUN_160eeae22(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dac6f70 FUN_14dac6f70 body=157 status=ok
// SIG undefined FUN_14dac6f70(void)

/* WARNING: Removing unreachable block (ram,0x00014dac6fb4) */

void FUN_14dac6f70(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1610037ec(*(ulonglong *)(unaff_R13 + -0x78),
                unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  return;
}



// FUNCTION 14dac7014 FUN_14dac7014 body=196 status=ok
// SIG undefined FUN_14dac7014(void)

undefined8 FUN_14dac7014(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong in_R9;
  ulonglong uVar1;
  ulonglong uStackX_20;
  
  uVar1 = ~(*(ulonglong *)((longlong)&uStackX_20 + in_R9) & 0xffffffffe98677cc);
  *(ulonglong *)((longlong)&uStackX_20 + in_R9) =
       *(ulonglong *)((longlong)&uStackX_20 + in_R9) | 0xffffffffe98677cc;
  *(ulonglong *)((longlong)&uStackX_20 + in_R9) =
       ~((*(longlong *)((longlong)&uStackX_20 + in_R9) -
         (uVar1 | *(ulonglong *)((longlong)&uStackX_20 + in_R9))) + uVar1);
  uVar1 = *(ulonglong *)((longlong)&uStackX_20 + in_R9);
  *(ulonglong *)((longlong)&uStackX_20 + in_R9) = ~*(ulonglong *)((longlong)&uStackX_20 + in_R9);
  *(ulonglong *)((longlong)&uStackX_20 + in_R9) =
       *(ulonglong *)((longlong)&uStackX_20 + in_R9) | unaff_RBX;
  *(ulonglong *)((longlong)&uStackX_20 + in_R9) =
       ~((~unaff_RBX | uVar1) & *(ulonglong *)((longlong)&uStackX_20 + in_R9));
  return in_RAX;
}



// FUNCTION 14dac7345 FUN_14dac7345 body=194 status=ok
// SIG undefined FUN_14dac7345(void)

ulonglong FUN_14dac7345(void)

{
  ulonglong unaff_RBX;
  
  return unaff_RBX | 0x4d2b1250;
}



// FUNCTION 14dac7708 FUN_14dac7708 body=161 status=ok
// SIG undefined FUN_14dac7708(void)

ulonglong FUN_14dac7708(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return param_2 & (~in_RAX | unaff_R15) ^ 0xffffffffffffffff;
}



// FUNCTION 14dac786a FUN_14dac786a body=91 status=ok
// SIG undefined FUN_14dac786a(void)

void FUN_14dac786a(void)

{
  return;
}



// FUNCTION 14dac78f7 FUN_14dac78f7 body=164 status=ok
// SIG undefined FUN_14dac78f7(void)

void FUN_14dac78f7(void)

{
  ulonglong *puVar1;
  ulonglong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + ~(unaff_R15 & in_R9)) = 0;
  puVar1 = (ulonglong *)((longlong)local_res18 + ~(unaff_R15 & in_R9));
  *puVar1 = *puVar1 ^ unaff_R12;
  return;
}



// FUNCTION 14dac799d FUN_14dac799d body=150 status=ok
// SIG undefined FUN_14dac799d(void)

void FUN_14dac799d(void)

{
  FUN_1652627ef();
  return;
}



// FUNCTION 14dac7ad5 FUN_14dac7ad5 body=32 status=ok
// SIG undefined FUN_14dac7ad5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dac7ad5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dac7b70 FUN_14dac7b70 body=168 status=ok
// SIG undefined FUN_14dac7b70(void)

/* WARNING: Removing unreachable block (ram,0x00014dac7c18) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dac7b70(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dac7c18 FUN_14dac7c18 body=28 status=ok
// SIG undefined FUN_14dac7c18(void)

void FUN_14dac7c18(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dac8056 thunk_FUN_14dac805c body=5 status=ok
// SIG undefined thunk_FUN_14dac805c(void)

/* WARNING: Removing unreachable block (ram,0x00014dac80fa) */
/* WARNING: Removing unreachable block (ram,0x00014dac8100) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14dac805c(void)

{
  FUN_161825e70();
  FUN_161697e0c();
  FUN_16664a376();
  return;
}



// FUNCTION 14dac805c FUN_14dac805c body=486 status=ok
// SIG undefined FUN_14dac805c(void)

/* WARNING: Removing unreachable block (ram,0x00014dac80fa) */
/* WARNING: Removing unreachable block (ram,0x00014dac8100) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac805c(void)

{
  FUN_161825e70();
  FUN_161697e0c();
  FUN_16664a376();
  return;
}



// FUNCTION 14dac819f FUN_14dac819f body=170 status=ok
// SIG undefined FUN_14dac819f(void)

undefined8 FUN_14dac819f(ulonglong param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  ulonglong unaff_R14;
  longlong lStackX_10;
  undefined8 auStackX_18 [2];
  ulonglong in_stack_00000030;
  
  *(undefined8 *)((longlong)auStackX_18 + (unaff_R14 ^ 0x16c1ab38)) = unaff_RBP;
  in_stack_00000030 = in_stack_00000030 ^ param_1;
  plVar1 = (longlong *)(in_stack_00000030 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lStackX_10;
  *(undefined8 *)(in_stack_00000030 - 0x10) = auStackX_18[1];
  *(undefined8 *)(in_stack_00000030 - 0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000030 - 0x18) = in_RAX;
  *(undefined8 *)(in_stack_00000030 - 0x20) = in_RAX;
  *(code **)(in_stack_00000030 - 0x10) = FUN_14dac8249;
  *(undefined8 *)(in_stack_00000030 - 0x18) = 0x1611ac693;
  return *(undefined8 *)(in_stack_00000030 - 0x20);
}



// FUNCTION 14dac8249 FUN_14dac8249 body=225 status=ok
// SIG undefined FUN_14dac8249(void)

void FUN_14dac8249(void)

{
  undefined8 unaff_retaddr;
  
  FUN_1571437f3(unaff_retaddr,0xccc);
  return;
}



// FUNCTION 14dac8489 FUN_14dac8489 body=41 status=ok
// SIG undefined FUN_14dac8489(void)

undefined8 FUN_14dac8489(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dac84fd FUN_14dac84fd body=176 status=ok
// SIG undefined FUN_14dac84fd(void)

/* WARNING: Removing unreachable block (ram,0x00014dac8527) */

void FUN_14dac84fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  FUN_160b6ef91(FUN_160b6ef91,param_2,in_RAX ^ unaff_R15,param_4);
  return;
}



// FUNCTION 14dac85ae thunk_FUN_165e93f27 body=26 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dac8645 FUN_14dac8645 body=2 status=ok
// SIG undefined FUN_14dac8645(void)

void FUN_14dac8645(void)

{
  return;
}



// FUNCTION 14dac8d25 FUN_14dac8d25 body=526 status=ok
// SIG undefined FUN_14dac8d25(void)

/* WARNING: Removing unreachable block (ram,0x00014dac8db7) */
/* WARNING: Removing unreachable block (ram,0x00015764d56f) */
/* WARNING: Removing unreachable block (ram,0x00015764d601) */
/* WARNING: Removing unreachable block (ram,0x00015764d607) */
/* WARNING: Removing unreachable block (ram,0x000160e5aed4) */
/* WARNING: Removing unreachable block (ram,0x00014dac8dbd) */
/* WARNING: Removing unreachable block (ram,0x00014dac8e4a) */
/* WARNING: Removing unreachable block (ram,0x00014dac8e50) */
/* WARNING: Removing unreachable block (ram,0x000161a57bc2) */
/* WARNING: Removing unreachable block (ram,0x000161a57c59) */
/* WARNING: Removing unreachable block (ram,0x000161a57c5e) */
/* WARNING: Removing unreachable block (ram,0x000161a57c64) */
/* WARNING: Removing unreachable block (ram,0x000161a57c69) */

void FUN_14dac8d25(void)

{
  FUN_15764d56f();
  return;
}



// FUNCTION 14dac9187 FUN_14dac9187 body=145 status=ok
// SIG undefined FUN_14dac9187(void)

void FUN_14dac9187(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14de30152(0xffffffffdb6dfd11,FUN_14de30152,0xffffffffdb6dfd11,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14dac92ab FUN_14dac92ab body=168 status=FAIL
// SIG undefined FUN_14dac92ab(void)
/* DECOMPILE FAILED */

// FUNCTION 14dac9356 FUN_14dac9356 body=59 status=ok
// SIG undefined FUN_14dac9356(void)

void FUN_14dac9356(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  undefined8 local_res20;
  
  pcVar1 = (code *)swi(0x8d);
  uRam48f1572b00848935 = in_EAX;
  (*pcVar1)(local_res20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14dac93c0 FUN_14dac93c0 body=89 status=ok
// SIG undefined FUN_14dac93c0(void)

undefined8 FUN_14dac93c0(void)

{
  return 0x34c5cd96;
}



// FUNCTION 14dac94a9 FUN_14dac94a9 body=328 status=ok
// SIG undefined FUN_14dac94a9(void)

/* WARNING: Removing unreachable block (ram,0x00014dac953e) */
/* WARNING: Removing unreachable block (ram,0x00014dac957c) */
/* WARNING: Removing unreachable block (ram,0x00014dac956f) */
/* WARNING: Removing unreachable block (ram,0x00014dac95c2) */
/* WARNING: Removing unreachable block (ram,0x00014dac95c4) */
/* WARNING: Removing unreachable block (ram,0x0001571fd68b) */
/* WARNING: Removing unreachable block (ram,0x0001571fd696) */
/* WARNING: Removing unreachable block (ram,0x0001571fd691) */
/* WARNING: Removing unreachable block (ram,0x0001571fd5d3) */
/* WARNING: Removing unreachable block (ram,0x0001571fd5e6) */
/* WARNING: Removing unreachable block (ram,0x0001571fd5ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dac94a9(void)

{
  undefined8 unaff_retaddr;
  
  FUN_156b0b5f5(unaff_retaddr);
  return;
}



// FUNCTION 14dac95f5 FUN_14dac95f5 body=124 status=ok
// SIG undefined FUN_14dac95f5(void)

void FUN_14dac95f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong uVar6;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined4 *)(local_res10 + -0x20) = 0x8acb799;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  lVar2 = *(longlong *)(local_res10 + -0x20);
  uVar6 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x27aa319;
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(code **)(local_res10 + -0x10) = FUN_165c7153c;
  *(code **)(local_res10 + -0x20) = FUN_14dac9672;
  uVar5 = FUN_14ded9500();
  uVar6 = *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined4 *)(local_res10 + -0x18) = 0x1f0f3646;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar3 = *(undefined8 *)(local_res10 + -0x10);
  lVar2 = local_res10 + -8 +
          ((uVar6 ^ 0x611ae9a8) - (*(ulonglong *)(local_res10 + -0x18) ^ 0x1d21debf));
  *(undefined8 *)(lVar2 + -8) = unaff_retaddr;
  puVar1 = (undefined8 *)(lVar2 + -0x10);
  *puVar1 = uVar5;
  *(undefined4 *)puVar1 = 0x9f0de327;
  *(undefined4 *)(lVar2 + -0xc) = 0xffffffff;
  uVar4 = *puVar1;
  *(undefined8 *)(lVar2 + -0x10) = uVar3;
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  FUN_16166fcec(uVar4,FUN_16166fcec);
  return;
}



// FUNCTION 14dac9672 FUN_14dac9672 body=171 status=ok
// SIG undefined FUN_14dac9672(void)

void FUN_14dac9672(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  ulonglong local_res8;
  
  uVar3 = local_res8 ^ 0x611ae9a8;
  *(undefined8 *)(&stack0xfffffffffdd1170f + uVar3) = param_1;
  puVar1 = (undefined8 *)(&stack0xfffffffffdd11707 + uVar3);
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0x9f0de327;
  *(undefined4 *)(&stack0xfffffffffdd1170b + uVar3) = 0xffffffff;
  uVar2 = *puVar1;
  *(undefined8 *)(&stack0xfffffffffdd11707 + uVar3) = param_2;
  *(undefined8 *)(&stack0xfffffffffdd116ff + uVar3) = in_RAX;
  FUN_16166fcec(uVar2,FUN_16166fcec);
  return;
}



// FUNCTION 14dac999d FUN_14dac999d body=184 status=ok
// SIG undefined FUN_14dac999d(void)

void FUN_14dac999d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166de19d7(param_1,unaff_retaddr,param_3,FUN_166de19d7);
  return;
}



// FUNCTION 14dac9b87 FUN_14dac9b87 body=427 status=ok
// SIG undefined FUN_14dac9b87(void)

/* WARNING: Removing unreachable block (ram,0x00014dac9c17) */
/* WARNING: Removing unreachable block (ram,0x00014dac9db4) */
/* WARNING: Removing unreachable block (ram,0x00014dac9dba) */
/* WARNING: Removing unreachable block (ram,0x000166a05024) */
/* WARNING: Removing unreachable block (ram,0x000166a05091) */
/* WARNING: Removing unreachable block (ram,0x0001666b887c) */
/* WARNING: Removing unreachable block (ram,0x000166a05097) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dac9b87(HMODULE param_1,LPCSTR param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_1669721e2;
                    /* WARNING: Could not recover jumptable at 0x0001669721bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14dac9d3b FUN_14dac9d3b body=545 status=ok
// SIG undefined FUN_14dac9d3b(void)

/* WARNING: Removing unreachable block (ram,0x000166a05097) */
/* WARNING: Removing unreachable block (ram,0x00014dac9dba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dac9d3b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ushort local_res10;
  undefined6 uStackX_12;
  longlong local_res18;
  
  *(undefined8 *)(&stack0x00000008 + (unaff_R15 ^ 0x3488c468)) = in_RAX;
  uVar2 = CONCAT62(uStackX_12,~local_res10) ^ 0xffff;
  *(undefined8 *)(local_res18 + -8) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -8) = 0x44fc0e0;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x28) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14daca0cf FUN_14daca0cf body=134 status=ok
// SIG undefined FUN_14daca0cf(void)

void FUN_14daca0cf(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  FUN_157033b9a(unaff_retaddr,FUN_157033b9a,*(ulonglong *)(unaff_RDI + -0x50) | unaff_retaddr);
  return;
}



// FUNCTION 14daca15c FUN_14daca15c body=11 status=ok
// SIG undefined FUN_14daca15c(void)

void FUN_14daca15c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014daca165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14daca1fc FUN_14daca1fc body=197 status=ok
// SIG undefined FUN_14daca1fc(void)

void FUN_14daca1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_156dcfe6f(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14daca2c3 FUN_14daca2c3 body=136 status=ok
// SIG undefined FUN_14daca2c3(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daca2c3(void)

{
  return;
}



// FUNCTION 14daca6ae FUN_14daca6ae body=309 status=ok
// SIG undefined FUN_14daca6ae(void)

/* WARNING: Instruction at (ram,0x000165e0f57d) overlaps instruction at (ram,0x000165e0f579)
    */
/* WARNING: Removing unreachable block (ram,0x000165aca010) */
/* WARNING: Removing unreachable block (ram,0x000165aca016) */
/* WARNING: Removing unreachable block (ram,0x000165aca033) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b0) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b6) */
/* WARNING: Removing unreachable block (ram,0x000165aca0f4) */
/* WARNING: Removing unreachable block (ram,0x000165aca0ef) */
/* WARNING: Removing unreachable block (ram,0x000165aca0fc) */
/* WARNING: Removing unreachable block (ram,0x000165aca123) */
/* WARNING: Removing unreachable block (ram,0x000165aca145) */
/* WARNING: Removing unreachable block (ram,0x000165aca152) */
/* WARNING: Removing unreachable block (ram,0x000165aca158) */
/* WARNING: Removing unreachable block (ram,0x00015afd4be9) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb29) */
/* WARNING: Removing unreachable block (ram,0x00014daca74b) */
/* WARNING: Removing unreachable block (ram,0x00014daca751) */
/* WARNING: Removing unreachable block (ram,0x00014daca765) */
/* WARNING: Removing unreachable block (ram,0x00014daca7b7) */
/* WARNING: Removing unreachable block (ram,0x000165e0f3c3) */
/* WARNING: Removing unreachable block (ram,0x000165e0f42b) */
/* WARNING: Removing unreachable block (ram,0x000165e0f430) */
/* WARNING: Removing unreachable block (ram,0x000165e0f436) */
/* WARNING: Removing unreachable block (ram,0x000165e0f43b) */
/* WARNING: Removing unreachable block (ram,0x0001626b202f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4d6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4e6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4f1) */
/* WARNING: Removing unreachable block (ram,0x000165e0f574) */
/* WARNING: Removing unreachable block (ram,0x000165e0f579) */
/* WARNING: Removing unreachable block (ram,0x000165ac9f86) */
/* WARNING: Removing unreachable block (ram,0x000160bccaba) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57d) */
/* WARNING: Removing unreachable block (ram,0x000165e0f58c) */
/* WARNING: Removing unreachable block (ram,0x000165e0f59d) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5c0) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5bb) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e0) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e5) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5a2) */
/* WARNING: Removing unreachable block (ram,0x000165aca02e) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb5c) */
/* WARNING: Removing unreachable block (ram,0x00015b664088) */
/* WARNING: Removing unreachable block (ram,0x00015b66408e) */

undefined8 FUN_14daca6ae(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined4 auStackX_c [7];
  undefined8 uStack_38;
  longlong alStack_30 [6];
  
  puVar1 = (ulonglong *)(&stack0x00000008 + unaff_RSI);
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = *puVar1;
  uVar6 = *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
  *puVar1 = uVar6;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)auStackX_c + unaff_RSI) = 0;
  uVar8 = *puVar1 ^ *(ulonglong *)(unaff_RDI + -0x28);
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar3 = *puVar1;
  *puVar1 = unaff_R15;
  *(ulonglong *)((longlong)auStackX_c + unaff_RSI + -0xc) = uVar6;
  *(undefined4 *)((longlong)auStackX_c + unaff_RSI + -0xc) = 0xb8ad3411;
  *(undefined4 *)((longlong)auStackX_c + unaff_RSI + -8) = 0xffffffff;
  uVar5 = *puVar1;
  *puVar1 = uVar3 ^ param_1;
  *(ulonglong *)((longlong)auStackX_c + unaff_RSI + -0xc) = uVar3 ^ param_1;
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x90);
  uVar7 = *(undefined8 *)((longlong)auStackX_c + unaff_RSI + -0xc);
  *(ulonglong *)((longlong)auStackX_c + unaff_RSI + -0xc) = uVar2 ^ param_1;
  *(ulonglong *)((longlong)alStack_30 + unaff_RSI + 0x28) = uVar2 ^ param_1;
  *(ulonglong *)((longlong)alStack_30 + unaff_RSI + 0x20) = uVar6;
  uVar9 = *(undefined8 *)(unaff_RDI + -8);
  *(ulonglong *)((longlong)alStack_30 + unaff_RSI + 0x20) = uVar8 + param_1 + (uVar8 & param_1) * -2
  ;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x18) = 0x15b663ffd;
  uVar7 = FUN_160e07efd(param_1,uVar7);
  *(ulonglong *)((longlong)alStack_30 + unaff_RSI + 0x20) = param_1;
  uVar4 = *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x20);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x20) = in_R11;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x18) = in_R11;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x20) = *(undefined8 *)(unaff_R13 + -0x70);
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x18) = uVar7;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x10) = uVar7;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 8) = in_R10;
  uVar7 = *(undefined8 *)(unaff_R13 + -8);
  *(ulonglong *)((longlong)alStack_30 + unaff_RSI + 8) = uVar2 + uVar5 + (uVar2 & uVar5) * -2;
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI) = uVar9;
  *(undefined4 *)((longlong)&uStack_38 + unaff_RSI) = 0x175a454a;
  *(undefined4 *)((longlong)alStack_30 + unaff_RSI + -4) = 0;
  uVar2 = *(ulonglong *)((longlong)&uStack_38 + unaff_RSI);
  *(undefined8 *)((longlong)&uStack_38 + unaff_RSI) = uVar7;
  *(undefined8 *)
   ((longlong)alStack_30 + (0x1399d87b - (~uVar2 + 2) ^ 0x2af41dcc) + unaff_RSI + 0x10) =
       *(undefined8 *)((longlong)&uStack_38 + unaff_RSI);
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 0x10) = *(undefined8 *)(unaff_R13 + -0x98);
  *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 8) =
       *(undefined8 *)((longlong)alStack_30 + unaff_RSI + 8);
  uVar7 = FUN_161bc7615(uVar4);
  return uVar7;
}



// FUNCTION 14daca751 FUN_14daca751 body=20 status=ok
// SIG undefined FUN_14daca751(void)

/* WARNING: Instruction at (ram,0x000165e0f57d) overlaps instruction at (ram,0x000165e0f579)
    */
/* WARNING: Removing unreachable block (ram,0x000165aca123) */
/* WARNING: Removing unreachable block (ram,0x000165aca010) */
/* WARNING: Removing unreachable block (ram,0x000165aca016) */
/* WARNING: Removing unreachable block (ram,0x000165aca033) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b0) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b6) */
/* WARNING: Removing unreachable block (ram,0x000165aca0f4) */
/* WARNING: Removing unreachable block (ram,0x000165aca0ef) */
/* WARNING: Removing unreachable block (ram,0x000165aca0fc) */
/* WARNING: Removing unreachable block (ram,0x000165aca145) */
/* WARNING: Removing unreachable block (ram,0x000165aca152) */
/* WARNING: Removing unreachable block (ram,0x000165aca158) */
/* WARNING: Removing unreachable block (ram,0x00015afd4be9) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb29) */
/* WARNING: Removing unreachable block (ram,0x000165aca02e) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb5c) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4f1) */
/* WARNING: Removing unreachable block (ram,0x000165e0f574) */
/* WARNING: Removing unreachable block (ram,0x000165e0f579) */
/* WARNING: Removing unreachable block (ram,0x000160bccaba) */
/* WARNING: Removing unreachable block (ram,0x000165e0f43b) */
/* WARNING: Removing unreachable block (ram,0x0001626b202f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4d6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4e6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57d) */
/* WARNING: Removing unreachable block (ram,0x000165e0f58c) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5a2) */
/* WARNING: Removing unreachable block (ram,0x000165e0f59d) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5c0) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5bb) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e5) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e0) */

undefined8 FUN_14daca751(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_R12;
  uint uStackX_14;
  
  if ((unaff_R12 & 0x8000000000000000) == 0) {
    return in_RAX;
  }
  uStackX_14 = (uint)((unaff_R12 << 1) >> 0x21);
  if (uStackX_14 != 0) {
    uVar1 = FUN_1655862b6(param_1);
    return uVar1;
  }
  uVar1 = FUN_1655862b6(param_1);
  return uVar1;
}



// FUNCTION 14daca765 FUN_14daca765 body=95 status=ok
// SIG undefined FUN_14daca765(void)

/* WARNING: Instruction at (ram,0x000165e0f57d) overlaps instruction at (ram,0x000165e0f579)
    */
/* WARNING: Removing unreachable block (ram,0x000165aca123) */
/* WARNING: Removing unreachable block (ram,0x000165aca010) */
/* WARNING: Removing unreachable block (ram,0x000165aca016) */
/* WARNING: Removing unreachable block (ram,0x000165aca033) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b0) */
/* WARNING: Removing unreachable block (ram,0x000165aca0b6) */
/* WARNING: Removing unreachable block (ram,0x000165aca0f4) */
/* WARNING: Removing unreachable block (ram,0x000165aca0ef) */
/* WARNING: Removing unreachable block (ram,0x000165aca0fc) */
/* WARNING: Removing unreachable block (ram,0x000165aca145) */
/* WARNING: Removing unreachable block (ram,0x000165aca152) */
/* WARNING: Removing unreachable block (ram,0x000165aca158) */
/* WARNING: Removing unreachable block (ram,0x00015afd4be9) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb29) */
/* WARNING: Removing unreachable block (ram,0x000165aca02e) */
/* WARNING: Removing unreachable block (ram,0x000161d9bb5c) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4f1) */
/* WARNING: Removing unreachable block (ram,0x000165e0f574) */
/* WARNING: Removing unreachable block (ram,0x000165e0f579) */
/* WARNING: Removing unreachable block (ram,0x000160bccaba) */
/* WARNING: Removing unreachable block (ram,0x000165e0f43b) */
/* WARNING: Removing unreachable block (ram,0x0001626b202f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4d6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f4e6) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57f) */
/* WARNING: Removing unreachable block (ram,0x000165e0f58c) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5a2) */
/* WARNING: Removing unreachable block (ram,0x000165e0f59d) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5bb) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e5) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5e0) */
/* WARNING: Removing unreachable block (ram,0x000165e0f5c0) */
/* WARNING: Removing unreachable block (ram,0x000165e0f57d) */

undefined8 FUN_14daca765(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_R12;
  undefined4 uStackX_14;
  
  if ((unaff_R12 & 0x8000000000000000) == 0) {
    return in_RAX;
  }
  uStackX_14 = (uint)((unaff_R12 << 1) >> 0x21);
  if (uStackX_14 == 0) {
    uVar1 = FUN_1655862b6(param_1);
    return uVar1;
  }
  uVar1 = FUN_1655862b6(param_1);
  return uVar1;
}



// FUNCTION 14daca7c5 FUN_14daca7c5 body=515 status=ok
// SIG undefined FUN_14daca7c5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014daca87a) */
/* WARNING: Removing unreachable block (ram,0x00014daca880) */
/* WARNING: Removing unreachable block (ram,0x00014daca82d) */

void FUN_14daca7c5(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RSI;
  
  thunk_FUN_16535bacd(param_1,~(unaff_RSI & param_2),param_3,param_4);
  return;
}



// FUNCTION 14daca92e FUN_14daca92e body=147 status=ok
// SIG undefined FUN_14daca92e(void)

/* WARNING: Removing unreachable block (ram,0x00014dacab07) */
/* WARNING: Removing unreachable block (ram,0x00014dacab0d) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa68) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa73) */
/* WARNING: Removing unreachable block (ram,0x00015b45065b) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa6e) */

undefined8 FUN_14daca92e(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  short *psVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_R11;
  short unaff_R14W;
  undefined8 unaff_R15;
  longlong lStackX_18;
  
  uVar4 = (ulonglong)(uint)(param_2 + (int)in_R11);
  uVar3 = uVar4;
  psVar2 = (short *)FUN_16677d914(param_1,uVar4,0x8b2d8af);
  *psVar2 = (-0x101 - unaff_R14W) + *psVar2;
  *(undefined8 *)(lStackX_18 + -8) = in_R11;
  *(ulonglong *)(lStackX_18 + -0x10) = uVar4;
  *(ulonglong *)(lStackX_18 + -0x18) = uVar4;
  *(ulonglong *)(lStackX_18 + -0x20) = uVar3;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  uVar1 = *(undefined8 *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R15;
  *(undefined8 *)(lStackX_18 + -0x20) = uVar1;
  *(undefined8 *)(lStackX_18 + -0x28) = 0;
  *(undefined8 *)(lStackX_18 + -8) = *(undefined8 *)(lStackX_18 + -0x28);
  *(longlong *)(lStackX_18 + -8) = (longlong)(&LAB_1610da210 + *(longlong *)(lStackX_18 + -8));
  *(undefined8 *)(lStackX_18 + -0x10) = param_3;
  *(undefined8 *)(lStackX_18 + -0x18) = param_3;
  *(code **)(lStackX_18 + -0x10) = thunk_FUN_15b642ca5;
  return *(undefined8 *)(lStackX_18 + -0x20);
}



// FUNCTION 14daca9c2 FUN_14daca9c2 body=208 status=ok
// SIG undefined FUN_14daca9c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dacab07) */
/* WARNING: Removing unreachable block (ram,0x00014dacab0d) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa68) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa73) */
/* WARNING: Removing unreachable block (ram,0x00015b45065b) */
/* WARNING: Removing unreachable block (ram,0x00014dacaa6e) */

undefined8
FUN_14daca9c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 uVar1;
  short *in_RAX;
  undefined8 in_R11;
  short unaff_R14W;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *in_RAX = (-0x101 - unaff_R14W) + *in_RAX;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = uStackX_10;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar1 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = uVar1;
  *(undefined8 *)(param_5 + -0x28) = 0;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -0x28);
  *(longlong *)(param_5 + -8) = (longlong)(&LAB_1610da210 + *(longlong *)(param_5 + -8));
  *(undefined8 *)(param_5 + -0x10) = uStackX_18;
  *(undefined8 *)(param_5 + -0x18) = uStackX_18;
  *(code **)(param_5 + -0x10) = thunk_FUN_15b642ca5;
  return *(undefined8 *)(param_5 + -0x20);
}



// FUNCTION 14dacaa73 FUN_14dacaa73 body=333 status=ok
// SIG undefined FUN_14dacaa73(void)

/* WARNING: Removing unreachable block (ram,0x00014dacab07) */
/* WARNING: Removing unreachable block (ram,0x00014dacab0d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00015b4506b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dacaa73(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b3f59f0();
  return uVar1;
}



// FUNCTION 14dacad82 FUN_14dacad82 body=349 status=ok
// SIG undefined FUN_14dacad82(void)

void FUN_14dacad82(void)

{
  FUN_1613bf34c();
  FUN_157080229();
  return;
}



// FUNCTION 14dacb158 FUN_14dacb158 body=184 status=ok
// SIG undefined FUN_14dacb158(void)

void FUN_14dacb158(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong in_RAX;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88);
  plVar1 = (longlong *)(&stack0xffffffffff257269 + in_RAX);
  lVar3 = *(longlong *)(unaff_R13 + -0x38);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar3;
  *plVar1 = 0x14dacb1fe;
  FUN_1659f0aaf(8,plVar1,uVar2 ^ unaff_R15,in_R9 ^ unaff_R15);
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dacb867 FUN_14dacb867 body=278 status=ok
// SIG undefined FUN_14dacb867(void)

/* WARNING: Removing unreachable block (ram,0x00014dacb97f) */

void FUN_14dacb867(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 local_res8;
  
  FUN_1616db713();
  uVar1 = (~(local_res8 & param_1) + param_1) - ~local_res8;
  if (CARRY8(~uVar1 | ~((~param_1 | local_res8) + param_1 + 1),uVar1)) {
    FUN_1647e74d3();
    return;
  }
  FUN_1647e74d3();
  return;
}



// FUNCTION 14dacb97f FUN_14dacb97f body=159 status=ok
// SIG undefined FUN_14dacb97f(void)

void FUN_14dacb97f(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161da8b76(unaff_retaddr,param_2,FUN_161da8b76);
  return;
}



// FUNCTION 14dacbabc FUN_14dacbabc body=313 status=ok
// SIG undefined FUN_14dacbabc(void)

/* WARNING: Removing unreachable block (ram,0x00014dacbb4d) */
/* WARNING: Removing unreachable block (ram,0x00014dacbb53) */
/* WARNING: Removing unreachable block (ram,0x000166b6585f) */

void FUN_14dacbabc(void)

{
  FUN_166b6585f();
  return;
}



// FUNCTION 14dacbc9c FUN_14dacbc9c body=260 status=ok
// SIG undefined FUN_14dacbc9c(void)

void FUN_14dacbc9c(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  longlong lVar1;
  longlong unaff_retaddr;
  ulonglong in_stack_00000010;
  
  lVar1 = *(longlong *)(CONCAT71(unaff_00000039,unaff_DIL) + unaff_retaddr + 0x7a4efb1f) + param_1;
  FUN_1623f0d8d();
  FUN_164a9f472(param_1,param_2,param_3 >> 0x18,*(ulonglong *)(lVar1 + -0x90) | in_stack_00000010);
  return;
}



// FUNCTION 14dacbefa FUN_14dacbefa body=148 status=ok
// SIG undefined FUN_14dacbefa(void)

void FUN_14dacbefa(undefined1 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x165115b12)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dacbf90 FUN_14dacbf90 body=61 status=ok
// SIG undefined FUN_14dacbf90(void)

undefined8 FUN_14dacbf90(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dacc01a FUN_14dacc01a body=83 status=ok
// SIG undefined FUN_14dacc01a(void)

ulonglong FUN_14dacc01a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short *in_RAX;
  undefined8 unaff_RDI;
  short unaff_R12W;
  ulonglong local_res8;
  ulonglong uStackX_18;
  longlong local_res20;
  
  *in_RAX = unaff_R12W + *in_RAX;
                    /* WARNING: Read-only address (ram,0x00014d7c0a56) is written */
  LOCK();
  uRam000000014d7c0a56 = (undefined1)local_res8;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
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
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14dacc06e;
  return local_res8 & 0xffffffffffffff00;
}



// FUNCTION 14dacc08a FUN_14dacc08a body=174 status=ok
// SIG undefined FUN_14dacc08a(void)

void FUN_14dacc08a(undefined8 param_1,undefined8 param_2)

{
  FUN_16631af13();
  FUN_14e1dc6bd(FUN_14e1dc6bd,param_2);
  return;
}



// FUNCTION 14dacc138 FUN_14dacc138 body=167 status=ok
// SIG undefined FUN_14dacc138(void)

undefined8 FUN_14dacc138(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dacc2ea FUN_14dacc2ea body=151 status=ok
// SIG undefined FUN_14dacc2ea(void)

void FUN_14dacc2ea(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162ec275f(param_1,FUN_162ec275f,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14dacc383 FUN_14dacc383 body=13 status=ok
// SIG undefined FUN_14dacc383(void)

void FUN_14dacc383(void)

{
  longlong unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00014dacc38b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RDI + 0xe0))();
  return;
}



// FUNCTION 14dacc42e FUN_14dacc42e body=158 status=ok
// SIG undefined FUN_14dacc42e(void)

void FUN_14dacc42e(undefined8 param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP;
  (*(code *)0x166dea084)
            (CONCAT71((int7)((ulonglong)param_1 >> 8),param_2) & 0xffffffffffffff21 | 0xde,uVar1,
             *(undefined8 *)(unaff_RSI + -0x60),
             (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP ^ 0xffffffffffffffff) & uVar1);
  return;
}



// FUNCTION 14dacc4ce FUN_14dacc4ce body=151 status=ok
// SIG undefined FUN_14dacc4ce(void)

void FUN_14dacc4ce(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  FUN_1573901d2(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14dacc742 FUN_14dacc742 body=214 status=ok
// SIG undefined FUN_14dacc742(void)

void FUN_14dacc742(longlong *param_1,longlong param_2)

{
  FUN_162d4afe8();
  *param_1 = 0;
  *param_1 = *param_1 - param_2;
  FUN_14e1d5d69(0xfffffffffffffff8,FUN_14e1d5d69);
  return;
}



// FUNCTION 14dacc843 FUN_14dacc843 body=511 status=ok
// SIG undefined FUN_14dacc843(void)

/* WARNING: Removing unreachable block (ram,0x00014dacc8b7) */
/* WARNING: Removing unreachable block (ram,0x00014dacc8bd) */
/* WARNING: Removing unreachable block (ram,0x00014dacc952) */
/* WARNING: Removing unreachable block (ram,0x00014dacc958) */
/* WARNING: Removing unreachable block (ram,0x00014dacc9c6) */
/* WARNING: Removing unreachable block (ram,0x00014dacc9cc) */
/* WARNING: Removing unreachable block (ram,0x000165e88fc3) */
/* WARNING: Removing unreachable block (ram,0x00015b424b60) */
/* WARNING: Removing unreachable block (ram,0x0001574a4b04) */

void FUN_14dacc843(void)

{
  return;
}



// FUNCTION 14dacc9d2 FUN_14dacc9d2 body=145 status=ok
// SIG undefined FUN_14dacc9d2(void)

void FUN_14dacc9d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte unaff_R12B;
  byte in_stack_00000008;
  
  *(byte *)(param_1 + 3 + param_3) =
       ~((*(char *)(param_1 + 3 + param_3) - (unaff_R12B | *(byte *)(param_1 + 3 + param_3))) +
        unaff_R12B);
  pbVar1 = (byte *)(param_1 + 3 + param_3);
  *pbVar1 = *pbVar1 ^ in_stack_00000008;
  *(byte *)(param_1 + 4 + param_3) = in_stack_00000008;
  *(byte *)(param_1 + 5 + param_3) = in_stack_00000008;
  *(byte *)(param_1 + 6 + param_3) = in_stack_00000008;
  *(undefined1 *)(param_1 + 7 + param_3) = 0;
  puVar2 = (undefined1 *)(param_1 + 7 + param_3);
  *puVar2 = *puVar2;
  puVar2 = (undefined1 *)(param_1 + 7 + param_3);
  *puVar2 = *puVar2;
  pbVar1 = (byte *)(param_1 + 7 + param_3);
  *pbVar1 = *pbVar1 ^ in_stack_00000008;
  FUN_14dc3944d(8);
  return;
}



// FUNCTION 14daccaee FUN_14daccaee body=99 status=ok
// SIG undefined FUN_14daccaee(void)

longlong FUN_14daccaee(longlong param_1)

{
  longlong unaff_RDI;
  
  return *(longlong *)(unaff_RDI + -0x60) + param_1;
}



// FUNCTION 14daccdf3 FUN_14daccdf3 body=74 status=ok
// SIG undefined FUN_14daccdf3(void)

void FUN_14daccdf3(undefined8 param_1)

{
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0x3929256;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined **)(local_res18 + -0x10) = &DAT_14dacce3f;
  return;
}



// FUNCTION 14daccef1 FUN_14daccef1 body=294 status=ok
// SIG undefined FUN_14daccef1(void)

void FUN_14daccef1(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R12;
  
  uVar3 = in_RAX + 1U ^ 0xffffffffffffffff;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  uVar2 = FUN_15ba63756(param_1,0x44bb,uVar3);
  uVar3 = -((uVar3 ^ 0x16c8579b) - *(longlong *)(unaff_R12 + -0x80));
  uVar4 = uVar3 ^ 0xffffffffffffffff;
  (*(code *)0x16246a6a9)
            (~((~param_1 | uVar1) & (~uVar1 | param_1)),*(undefined8 *)(unaff_R12 + -0x58),
             -1 - ((~uVar2 | uVar3) & (~(uVar4 & uVar2) + uVar2) - ~uVar4));
  return;
}



// FUNCTION 14dacd1c9 FUN_14dacd1c9 body=484 status=ok
// SIG undefined FUN_14dacd1c9(void)

/* WARNING: Removing unreachable block (ram,0x00016194e218) */
/* WARNING: Removing unreachable block (ram,0x00016194e21e) */
/* WARNING: Removing unreachable block (ram,0x00016534530f) */
/* WARNING: Removing unreachable block (ram,0x0001653453ce) */
/* WARNING: Removing unreachable block (ram,0x0001653453d4) */
/* WARNING: Removing unreachable block (ram,0x00014dacd275) */
/* WARNING: Removing unreachable block (ram,0x00014dacd2fd) */
/* WARNING: Removing unreachable block (ram,0x00016194e195) */
/* WARNING: Removing unreachable block (ram,0x00015b4bfbd8) */
/* WARNING: Removing unreachable block (ram,0x00014dacd303) */

undefined8 FUN_14dacd1c9(int param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong *unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_ZF;
  
  if (in_ZF) {
    param_2 = param_2 + 1;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  if ((param_1 + param_2 | 0x1787ad6cU) != 0) {
    FUN_16221054a((-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x78)) +
                  (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15) * 2);
    uVar2 = *unaff_R12;
    uVar3 = *unaff_R12;
    uVar4 = *unaff_R12;
    *unaff_R12 = ~*unaff_R12;
    *unaff_R12 = 0xffffffffffffffff;
    *unaff_R12 = ~(uVar4 & *unaff_R12);
    *unaff_R12 = *unaff_R12 | unaff_R15;
    *unaff_R12 = (~uVar2 & (uVar1 ^ unaff_R15) | uVar3) & *unaff_R12 ^ 0xffffffffffffffff;
    uVar5 = FUN_162ca7a45();
    return uVar5;
  }
  uVar5 = FUN_165d33802();
  return uVar5;
}



// FUNCTION 14dacd4eb FUN_14dacd4eb body=13 status=ok
// SIG undefined FUN_14dacd4eb(void)

void FUN_14dacd4eb(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dacd4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dacd58f FUN_14dacd58f body=166 status=ok
// SIG undefined FUN_14dacd58f(void)

void FUN_14dacd58f(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_16563faef(param_1,0xffffffffffffffc0,
                (uint)((param_3 & 0xffffffff) >> 0x14) | (uint)((param_3 & 0xffffffff) << 0xd));
  return;
}



// FUNCTION 14dacd738 FUN_14dacd738 body=156 status=ok
// SIG undefined FUN_14dacd738(void)

/* WARNING: Removing unreachable block (ram,0x00014dacd815) */
/* WARNING: Removing unreachable block (ram,0x00014dacd858) */

void FUN_14dacd738(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_14dcaf499(FUN_14dcaf499,param_2,in_stack_00000008);
  FUN_160c0eac9();
  thunk_FUN_16592d894();
  return;
}



// FUNCTION 14dacd7d5 FUN_14dacd7d5 body=321 status=ok
// SIG undefined FUN_14dacd7d5(void)

/* WARNING: Removing unreachable block (ram,0x00014dacd815) */
/* WARNING: Removing unreachable block (ram,0x00014dacd858) */

void FUN_14dacd7d5(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160c0eac9(param_1,param_2,0xa3aefe7a,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  thunk_FUN_16592d894(param_1,param_2);
  return;
}



// FUNCTION 14dacdccd FUN_14dacdccd body=26 status=ok
// SIG undefined FUN_14dacdccd(void)

void FUN_14dacdccd(void)

{
  return;
}



// FUNCTION 14dacdd53 FUN_14dacdd53 body=131 status=ok
// SIG undefined FUN_14dacdd53(void)

void FUN_14dacdd53(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1650094f9(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dacddd6 FUN_14dacddd6 body=116 status=ok
// SIG undefined FUN_14dacddd6(void)

void FUN_14dacddd6(void)

{
  return;
}



// FUNCTION 14dacde55 FUN_14dacde55 body=150 status=ok
// SIG undefined FUN_14dacde55(void)

void FUN_14dacde55(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15714cf5d)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0x137d4f5f,
             *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14dacdeec FUN_14dacdeec body=191 status=ok
// SIG undefined FUN_14dacdeec(void)

/* WARNING: Instruction at (ram,0x00014dacdf8c) overlaps instruction at (ram,0x00014dacdf89)
    */
/* WARNING: Removing unreachable block (ram,0x00014dacdfb2) */

undefined8 FUN_14dacdeec(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  
  puVar1 = (uint *)(&stack0xfffffffff66fc37c + unaff_RBP);
  *puVar1 = 0xd2b41574;
  *puVar1 = *puVar1 ^ 0x6d8fb48b;
  *puVar1 = *puVar1 ^ 0x210cd806;
  *(undefined4 *)(&stack0xfffffffff66fc380 + unaff_RBP) = 0x165667b1;
  lVar2 = *(longlong *)puVar1;
  *(longlong *)(&stack0xfffffffff66fc37c + unaff_RBP) = param_1 * lVar2;
  uVar6 = (ulonglong)(param_1 * lVar2) >> 0x20;
  uVar3 = *(ulonglong *)(&stack0xfffffffff66fc37c + unaff_RBP);
  *(longlong *)(&stack0xfffffffff66fc37c + unaff_RBP) = lVar2;
  *(undefined4 *)(&stack0xfffffffff66fc37c + unaff_RBP) = 0xc978aacc;
  *(undefined4 *)(&stack0xfffffffff66fc380 + unaff_RBP) = 0xad0acd57;
  *(int *)(&stack0xfffffffff66fc380 + unaff_RBP) =
       *(int *)(&stack0xfffffffff66fc380 + unaff_RBP) + 0x52f532a8;
  uVar4 = *(ulonglong *)(&stack0xfffffffff66fc37c + unaff_RBP);
  *(longlong *)(&stack0xfffffffff66fc37c + unaff_RBP) = lVar2;
  *(undefined4 *)(&stack0xfffffffff66fc37c + unaff_RBP) = 0x21d5b45f;
  *(undefined4 *)(&stack0xfffffffff66fc380 + unaff_RBP) = 0;
  uVar7 = 4;
  if (uVar4 != *(longlong *)(&stack0xfffffffff66fc37c + unaff_RBP) + 0x29a1550eU) {
    uVar7 = uVar6;
  }
  *(int *)(uVar7 - 0x1574b75a) =
       (*(int *)(uVar7 - 0x1574b75a) - (int)uVar4) -
       (uint)(uVar4 < *(longlong *)(&stack0xfffffffff66fc37c + unaff_RBP) + 0x29a1550eU);
  if ((uVar6 | uVar3) != 0) {
    *(ulonglong *)(&stack0xfffffffff66fc384 + unaff_RBP) =
         ~(~(uVar6 | uVar3) + 1 + uVar3 + uVar6) & (uVar7 | uVar3);
    *(ulonglong *)(&stack0xfffffffff66fc384 + unaff_RBP) =
         (ulonglong)
         ((7 - ((uint)*(undefined8 *)(&stack0xfffffffff66fc384 + unaff_RBP) | 7)) +
         (uint)*(undefined8 *)(&stack0xfffffffff66fc384 + unaff_RBP));
    puVar1 = (uint *)(&stack0xfffffffff66fc384 + unaff_RBP);
    *puVar1 = 0x43bd6a33;
    *puVar1 = *puVar1 + 0x7b7ccbf;
    *puVar1 = *puVar1 ^ 0x4b7536f2;
    *(undefined4 *)(&stack0xfffffffff66fc388 + unaff_RBP) = 0;
    uVar5 = *(undefined8 *)(&stack0xfffffffff66fc39c + unaff_RBP);
    *(undefined **)(&stack0xfffffffff66fc39c + unaff_RBP) = &DAT_1666e5546;
    return uVar5;
  }
  uVar5 = FUN_15750e914();
  return uVar5;
}



// FUNCTION 14dacdfb2 FUN_14dacdfb2 body=148 status=ok
// SIG undefined FUN_14dacdfb2(void)

void FUN_14dacdfb2(void)

{
  FUN_1564bab8e();
  FUN_14dace049();
  return;
}



// FUNCTION 14dace049 FUN_14dace049 body=149 status=ok
// SIG undefined FUN_14dace049(void)

undefined8 FUN_14dace049(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14dace2c8 FUN_14dace2c8 body=22 status=ok
// SIG undefined FUN_14dace2c8(void)

void FUN_14dace2c8(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014dace2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dace365 FUN_14dace365 body=151 status=ok
// SIG undefined FUN_14dace365(void)

void FUN_14dace365(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte bStackX_20;
  
  lVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                   (~((byte)param_2 & bStackX_20) + bStackX_20) - ~(byte)param_2);
  FUN_1657694b4();
  FUN_165eca6cf(lVar1 + param_1 * -2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_14e1b1ae5();
  return;
}



// FUNCTION 14dace3fd FUN_14dace3fd body=479 status=ok
// SIG undefined FUN_14dace3fd(void)

void FUN_14dace3fd(longlong param_1,longlong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165eca6cf(param_2 + param_1 * -2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_14e1b1ae5();
  return;
}



// FUNCTION 14dace5e1 FUN_14dace5e1 body=142 status=ok
// SIG undefined FUN_14dace5e1(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dace5e1(void)

{
  thunk_FUN_162f0524f();
  return;
}



// FUNCTION 14dace713 FUN_14dace713 body=323 status=ok
// SIG undefined FUN_14dace713(void)

/* WARNING: Removing unreachable block (ram,0x00014dace7a5) */
/* WARNING: Removing unreachable block (ram,0x00014dace836) */
/* WARNING: Removing unreachable block (ram,0x00014dace83a) */

void FUN_14dace713(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) == 0) {
    FUN_162efde65();
    return;
  }
  (*(code *)&LAB_15b8a0994)
            (~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14dacebb5 FUN_14dacebb5 body=146 status=ok
// SIG undefined FUN_14dacebb5(void)

/* WARNING: Removing unreachable block (ram,0x00016635d008) */
/* WARNING: Removing unreachable block (ram,0x00016635cecb) */
/* WARNING: Removing unreachable block (ram,0x00014dacec43) */
/* WARNING: Removing unreachable block (ram,0x00014dacec49) */
/* WARNING: Removing unreachable block (ram,0x00016635cfc5) */
/* WARNING: Removing unreachable block (ram,0x00016635cfc8) */
/* WARNING: Removing unreachable block (ram,0x00016635cff7) */
/* WARNING: Removing unreachable block (ram,0x00016635cffd) */
/* WARNING: Removing unreachable block (ram,0x00016635cff2) */

void FUN_14dacebb5(void)

{
  FUN_16635cecb();
  return;
}



// FUNCTION 14dacec4f FUN_14dacec4f body=166 status=ok
// SIG undefined FUN_14dacec4f(void)

void FUN_14dacec4f(void)

{
  FUN_1662ee8b4();
  return;
}



// FUNCTION 14daced92 FUN_14daced92 body=166 status=ok
// SIG undefined FUN_14daced92(void)

void FUN_14daced92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_RDI) = 0;
  *(ulonglong *)((longlong)auStackX_18 + unaff_RDI) =
       *(ulonglong *)((longlong)auStackX_18 + unaff_RDI) ^ in_R10;
  auStackX_18[0] = *(ulonglong *)(unaff_R13 + -8);
  (*(code *)&LAB_161af59b4)
            (~((*(ulonglong *)(unaff_R13 + -0x98) ^ 0xffffffffffffffff) &
              (unaff_R15 ^ 0xffffffffffffffff)),&LAB_161af59b4,param_3,param_4);
  return;
}



// FUNCTION 14dacf0b0 FUN_14dacf0b0 body=116 status=ok
// SIG undefined FUN_14dacf0b0(void)

void FUN_14dacf0b0(void)

{
  FUN_14df8ee72();
  return;
}



// FUNCTION 14dacf326 FUN_14dacf326 body=227 status=ok
// SIG undefined FUN_14dacf326(void)

void FUN_14dacf326(void)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_14d96a51e();
  lVar1 = *(ulonglong *)(unaff_RSI + -0x70) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x70) & unaff_RBP) * -2;
  FUN_161aa888e(lVar1,lVar1);
  return;
}



// FUNCTION 14dacf40d FUN_14dacf40d body=21 status=ok
// SIG undefined FUN_14dacf40d(void)

void FUN_14dacf40d(void)

{
  return;
}



// FUNCTION 14dacf548 FUN_14dacf548 body=412 status=ok
// SIG undefined FUN_14dacf548(void)

undefined8 FUN_14dacf548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_160eeb7c9();
  uVar1 = FUN_1614504b5(param_1,FUN_1614504b5,param_3);
  return uVar1;
}



// FUNCTION 14dacf772 FUN_14dacf772 body=133 status=ok
// SIG undefined FUN_14dacf772(void)

void FUN_14dacf772(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x65a3b) {
    FUN_166a62797(param_1,&DAT_14d7c06d4);
    return;
  }
  if (param_2 != 0x65b10) {
    FUN_161130f38();
    return;
  }
  FUN_161130f26(param_1,0x14d7c41b4);
  return;
}



// FUNCTION 14dacf8b6 FUN_14dacf8b6 body=288 status=ok
// SIG undefined FUN_14dacf8b6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000161c5afaf) */
/* WARNING: Removing unreachable block (ram,0x000161c5afbb) */
/* WARNING: Removing unreachable block (ram,0x000161c5afc0) */
/* WARNING: Removing unreachable block (ram,0x000161c5b05b) */
/* WARNING: Removing unreachable block (ram,0x000161c5b066) */
/* WARNING: Removing unreachable block (ram,0x000161c5b06c) */
/* WARNING: Removing unreachable block (ram,0x000161c5b0ab) */
/* WARNING: Removing unreachable block (ram,0x000161c5b0ae) */
/* WARNING: Removing unreachable block (ram,0x00015ba41936) */
/* WARNING: Removing unreachable block (ram,0x000161c5af26) */
/* WARNING: Removing unreachable block (ram,0x00014dacf9d8) */

undefined8 FUN_14dacf8b6(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1668ae547(param_1,~*(ulonglong *)(unaff_RDI + -0x68));
  uVar1 = *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15;
  if ((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15)) + uVar1 == -1) {
    uVar2 = FUN_161c5ae88();
    return uVar2;
  }
  if (*(longlong *)(unaff_R13 + -0x60) != -1) {
    uVar2 = FUN_162a89a98();
    return uVar2;
  }
  FUN_14de8878b();
  FUN_162b74929();
  uVar2 = FUN_15b7c50be();
  return uVar2;
}



// FUNCTION 14dacf9d8 FUN_14dacf9d8 body=132 status=ok
// SIG undefined FUN_14dacf9d8(void)

undefined8 FUN_14dacf9d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  
  *param_3 = in_RAX;
  param_3[-1] = unaff_RSI;
  param_3[-1] = *(undefined8 *)(unaff_R12 + -0x80);
  param_3[-1] = &LAB_15704ba32;
  return *param_3;
}



// FUNCTION 14dacfa5e FUN_14dacfa5e body=153 status=ok
// SIG undefined FUN_14dacfa5e(void)

void FUN_14dacfa5e(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1610ffe8c(*(longlong *)(unaff_R13 + -0x78),*(longlong *)(unaff_R13 + -0x78) + unaff_R15,
                -1 - ((~unaff_R15 | param_3) & (~param_3 | unaff_R15)));
  return;
}



// FUNCTION 14dacfaf7 FUN_14dacfaf7 body=491 status=ok
// SIG undefined FUN_14dacfaf7(void)

/* WARNING: Removing unreachable block (ram,0x00014dacfb87) */

undefined8 FUN_14dacfaf7(void)

{
  return 0x10;
}



// FUNCTION 14dacfe89 FUN_14dacfe89 body=255 status=ok
// SIG undefined FUN_14dacfe89(void)

void FUN_14dacfe89(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 unaff_RDI;
  code *pcVar2;
  undefined8 unaff_R12;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar1 = (~(local_res8 & 0x100 | 0xfeff) - 0x100) + local_res8;
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined4 *)(local_res10 + -0x18) = 0x796d42f;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  pcVar2 = FUN_165b74d8d;
  *(undefined8 *)(local_res10 + -0x28) = 0x14dacff37;
  FUN_165b74d8d();
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(code **)(local_res10 + -0x20) = pcVar2;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x28) = unaff_RDI;
  *(code **)(local_res10 + -0x18) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14dacffd5 FUN_14dacffd5 body=32 status=ok
// SIG undefined FUN_14dacffd5(void)

void FUN_14dacffd5(void)

{
  return;
}



// FUNCTION 14dad0071 FUN_14dad0071 body=189 status=ok
// SIG undefined FUN_14dad0071(void)

/* WARNING: Removing unreachable block (ram,0x00014dad012f) */

ulonglong FUN_14dad0071(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (*(longlong *)(unaff_RSI + -0x60) < 0) {
    uVar1 = FUN_166de1026();
    return uVar1;
  }
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14dad012f FUN_14dad012f body=39 status=ok
// SIG undefined FUN_14dad012f(void)

void FUN_14dad012f(void)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr);
  *local_res10 = 0x168d0be;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dad01d9 FUN_14dad01d9 body=178 status=ok
// SIG undefined FUN_14dad01d9(void)

void FUN_14dad01d9(void)

{
  return;
}



// FUNCTION 14dad028c FUN_14dad028c body=14 status=ok
// SIG undefined FUN_14dad028c(void)

void FUN_14dad028c(void)

{
  return;
}



// FUNCTION 14dad04de FUN_14dad04de body=159 status=ok
// SIG undefined FUN_14dad04de(void)

void FUN_14dad04de(undefined8 param_1)

{
  (*(code *)0x162d6597f)(param_1,0x162d6597f);
  return;
}



// FUNCTION 14dad0763 FUN_14dad0763 body=159 status=ok
// SIG undefined FUN_14dad0763(void)

/* WARNING: Removing unreachable block (ram,0x00014dad07f9) */
/* WARNING: Removing unreachable block (ram,0x00014dad0804) */
/* WARNING: Removing unreachable block (ram,0x00014dad07ff) */

void FUN_14dad0763(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 local_res8;
  
  *(undefined8 *)(&stack0xfffffffff6e4fb0b + in_R11) = local_res8;
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) = *(undefined8 *)(unaff_RDI + -0xa0);
  puVar1 = (undefined8 *)(&stack0xfffffffff6e4fb1b + in_R11);
  *puVar1 = in_R10;
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) =
       *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11);
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) =
       *(undefined8 *)(&stack0xfffffffff6e4fb0b + in_R11);
  *(undefined8 *)(&stack0xfffffffff6e4fb0b + in_R11) = param_2;
  uVar3 = *(ulonglong *)(&stack0xfffffffff6e4fb13 + in_R11);
  *puVar1 = *puVar1;
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff6e4fb0b + in_R11) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff6e4fb0b + in_R11) = 0x9e96f72d;
  *(undefined4 *)(&stack0xfffffffff6e4fb0f + in_R11) = 0xffffffff;
  uVar2 = *(ulonglong *)
           (&stack0x584e03f6 + *(longlong *)(&stack0xfffffffff6e4fb0b + in_R11) + in_R11);
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) = unaff_RBX;
  *(ulonglong *)(&stack0xfffffffff6e4fb0b + in_R11) = ~(uVar2 & uVar3) + uVar3;
  *(ulonglong *)(&stack0xfffffffff6e4fb0b + in_R11) =
       *(longlong *)(&stack0xfffffffff6e4fb0b + in_R11) - ~uVar2;
  *(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11) =
       *(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11) & uVar3;
  *(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11) =
       ~*(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11);
  *(undefined8 *)(&stack0xfffffffff6e4fb13 + in_R11) = param_4;
  *(undefined8 *)(&stack0xfffffffff6e4fb0b + in_R11) = unaff_RSI;
  *(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11) =
       ~*(ulonglong *)(&stack0xfffffffff6e4fb23 + in_R11);
  *(undefined **)(&stack0xfffffffff6e4fb03 + in_R11) = &DAT_162f6b50d;
  return;
}



// FUNCTION 14dad0804 FUN_14dad0804 body=160 status=ok
// SIG undefined FUN_14dad0804(void)

void FUN_14dad0804(undefined8 param_1)

{
  FUN_15675e75e(param_1,FUN_15675e75e);
  return;
}



// FUNCTION 14dad08a4 FUN_14dad08a4 body=15 status=ok
// SIG undefined FUN_14dad08a4(void)

void FUN_14dad08a4(void)

{
  return;
}



// FUNCTION 14dad0942 FUN_14dad0942 body=142 status=ok
// SIG undefined FUN_14dad0942(void)

void FUN_14dad0942(void)

{
  FUN_1565733be();
  return;
}



// FUNCTION 14dad0a77 FUN_14dad0a77 body=118 status=ok
// SIG undefined FUN_14dad0a77(void)

void FUN_14dad0a77(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint in_EAX;
  undefined8 unaff_retaddr;
  
  FUN_166b71ace(param_1,param_2 & in_EAX,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dad0aef FUN_14dad0aef body=755 status=ok
// SIG undefined FUN_14dad0aef(void)

void FUN_14dad0aef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1612d11c7(param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3);
  return;
}



// FUNCTION 14dad0e87 thunk_FUN_14dad0e8d body=5 status=ok
// SIG undefined thunk_FUN_14dad0e8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dad0eeb) */
/* WARNING: Removing unreachable block (ram,0x00014dad0ef1) */

void thunk_FUN_14dad0e8d(void)

{
  FUN_162169ebc();
  FUN_16656608d(FUN_16656608d);
  return;
}



// FUNCTION 14dad0e8d FUN_14dad0e8d body=100 status=ok
// SIG undefined FUN_14dad0e8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dad0eeb) */
/* WARNING: Removing unreachable block (ram,0x00014dad0ef1) */

void FUN_14dad0e8d(void)

{
  FUN_162169ebc();
  FUN_16656608d(FUN_16656608d);
  return;
}



// FUNCTION 14dad0ef1 FUN_14dad0ef1 body=322 status=ok
// SIG undefined FUN_14dad0ef1(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dad0ef1(void)

{
  ushort *in_R9;
  ulonglong in_R10;
  short unaff_retaddr;
  ulonglong uStack0000000000000028;
  
  *in_R9 = (0xffffU - unaff_retaddr | *in_R9) - 0x100;
  uStack0000000000000028 = in_R10 ^ 0x151b1dc4374f7d7d;
  FUN_166a1833b();
  FUN_162da2b69();
  return;
}



// FUNCTION 14dad1035 FUN_14dad1035 body=53 status=ok
// SIG undefined FUN_14dad1035(void)

void FUN_14dad1035(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined **)(local_res18 + -8) = &DAT_14dad1081;
                    /* WARNING: Could not recover jumptable at 0x00014dad1068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_res18 + -0x18))();
  return;
}



// FUNCTION 14dad12af FUN_14dad12af body=183 status=ok
// SIG undefined FUN_14dad12af(void)

void FUN_14dad12af(longlong param_1)

{
  longlong unaff_R12;
  longlong lVar1;
  ulonglong local_res8;
  ulonglong local_res20;
  
  lVar1 = unaff_R12 + (local_res8 ^ 0x66fe8a79);
  *(undefined8 *)((longlong)&local_res20 + lVar1) = 0x154dc59;
  *(ulonglong *)((longlong)&local_res20 + lVar1) =
       *(ulonglong *)((longlong)&local_res20 + lVar1) ^ 0x154dc59;
  *(longlong *)((longlong)&local_res20 + lVar1) =
       *(longlong *)((longlong)&local_res20 + lVar1) + param_1;
  return;
}



// FUNCTION 14dad1367 FUN_14dad1367 body=173 status=ok
// SIG undefined FUN_14dad1367(void)

/* WARNING: Instruction at (ram,0x00014dad14ee) overlaps instruction at (ram,0x00014dad14ed)
    */
/* WARNING: Removing unreachable block (ram,0x00014dad151d) */
/* WARNING: Removing unreachable block (ram,0x00016164634c) */
/* WARNING: Removing unreachable block (ram,0x00016164633c) */
/* WARNING: Removing unreachable block (ram,0x00014dad14ab) */
/* WARNING: Removing unreachable block (ram,0x00014dad14b1) */
/* WARNING: Removing unreachable block (ram,0x00014dad14ee) */
/* WARNING: Removing unreachable block (ram,0x00014dad140b) */
/* WARNING: Removing unreachable block (ram,0x00014dad1411) */
/* WARNING: Removing unreachable block (ram,0x00014dad1416) */
/* WARNING: Removing unreachable block (ram,0x00014de5e24b) */
/* WARNING: Removing unreachable block (ram,0x00014dad14ed) */
/* WARNING: Removing unreachable block (ram,0x00014dad14fb) */
/* WARNING: Removing unreachable block (ram,0x00014dad1559) */
/* WARNING: Removing unreachable block (ram,0x00014dad15a8) */
/* WARNING: Removing unreachable block (ram,0x00014dad15a0) */
/* WARNING: Removing unreachable block (ram,0x00014dad1548) */
/* WARNING: Removing unreachable block (ram,0x0001658cf58b) */

undefined8 FUN_14dad1367(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  longlong local_10;
  
  local_10 = CONCAT44(local_10._4_4_,0xc7aac67);
  lVar1 = *(longlong *)(&stack0xfffffffff38553b1 + local_10) + unaff_R15 +
          (uStackX_18 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  *(undefined8 *)(lVar1 + -0x10) = in_R10;
  uVar2 = FUN_1620f1d7c();
  return uVar2;
}



// FUNCTION 14dad1416 FUN_14dad1416 body=535 status=ok
// SIG undefined FUN_14dad1416(void)

/* WARNING: Instruction at (ram,0x00014dad14ee) overlaps instruction at (ram,0x00014dad14ed)
    */
/* WARNING: Removing unreachable block (ram,0x00014dad14ab) */
/* WARNING: Removing unreachable block (ram,0x00014dad14b1) */
/* WARNING: Removing unreachable block (ram,0x00014dad14ee) */
/* WARNING: Removing unreachable block (ram,0x00014dad14ed) */
/* WARNING: Removing unreachable block (ram,0x00014dad14fb) */
/* WARNING: Removing unreachable block (ram,0x00014dad151d) */
/* WARNING: Removing unreachable block (ram,0x00014dad1520) */
/* WARNING: Removing unreachable block (ram,0x00014dad1548) */
/* WARNING: Removing unreachable block (ram,0x00014dad1559) */
/* WARNING: Removing unreachable block (ram,0x00014dad15a0) */
/* WARNING: Removing unreachable block (ram,0x00014dad15a8) */

void FUN_14dad1416(undefined8 param_1,undefined8 param_2)

{
  FUN_165a83a44(param_1,param_2);
  return;
}



// FUNCTION 14dad16cf FUN_14dad16cf body=142 status=ok
// SIG undefined FUN_14dad16cf(void)

void FUN_14dad16cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  FUN_161469134(in_stack_00000010,param_2,param_3,FUN_161469134);
  return;
}



// FUNCTION 14dad175e FUN_14dad175e body=455 status=ok
// SIG undefined FUN_14dad175e(void)

/* WARNING: Removing unreachable block (ram,0x00014dad1890) */
/* WARNING: Removing unreachable block (ram,0x00014dad1896) */

void FUN_14dad175e(void)

{
  FUN_1626d302a();
  (*(code *)&LAB_164f8461e)();
  return;
}



// FUNCTION 14dad1f0a FUN_14dad1f0a body=172 status=ok
// SIG undefined FUN_14dad1f0a(void)

void FUN_14dad1f0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)0x165d2504a)(local_res8,0xffffffffffffffff,param_3,0x165d2504a);
  return;
}



// FUNCTION 14dad20dd FUN_14dad20dd body=290 status=ok
// SIG undefined FUN_14dad20dd(void)

void FUN_14dad20dd(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined4 unaff_retaddr;
  undefined1 local_res10 [8];
  ulonglong in_stack_00000018;
  
  FUN_1572b1d65(param_1,local_res10,param_3,param_4,
                ~(in_stack_00000018 & in_RAX) & (in_stack_00000018 | in_RAX));
  *param_1 = unaff_retaddr;
  FUN_16606f076(FUN_16606f076);
  return;
}



// FUNCTION 14dad2342 FUN_14dad2342 body=75 status=ok
// SIG undefined FUN_14dad2342(void)

undefined8 FUN_14dad2342(void)

{
  ulonglong in_RAX;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x00000018 + (in_RAX ^ 0x3cbd320b)) = in_stack_00000008;
  return in_stack_00000010;
}



// FUNCTION 14dad23d7 FUN_14dad23d7 body=284 status=ok
// SIG undefined FUN_14dad23d7(void)

/* WARNING: Removing unreachable block (ram,0x00014dad24f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dad23d7(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  undefined8 uStackX_18;
  
  param_2 = param_2 - param_3;
  FUN_1620bf4d6(param_1,param_2,param_2);
  uVar2 = ~_FUN_1620bf4d6;
  _FUN_1620bf4d6 = -(uVar2 | 0x100) + -1;
  if (0x100 < (ushort)(-(uVar2 | 0x100) + 0xff)) {
    plVar1 = (longlong *)(uStackX_18 + -8);
    *plVar1 = 0;
    *plVar1 = *plVar1 + unaff_R12;
    *(undefined8 *)(uStackX_18 + -0x10) = unaff_RDI;
    *(undefined8 *)(uStackX_18 + -0x18) = unaff_RDI;
    *(undefined8 *)(uStackX_18 + -0x10) = *(undefined8 *)(uStackX_18 + -8);
    *(undefined8 *)(uStackX_18 + -8) = 0;
    *(longlong *)(uStackX_18 + -8) = *(longlong *)(uStackX_18 + -8) + 0x14d9f80e5;
    thunk_FUN_15b0572f1(param_1,param_2);
    return;
  }
  FUN_14d9f805e();
  return;
}



// FUNCTION 14dad24f8 FUN_14dad24f8 body=154 status=ok
// SIG undefined FUN_14dad24f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dad2593) */
/* WARNING: Removing unreachable block (ram,0x00014dad2611) */
/* WARNING: Removing unreachable block (ram,0x00014dad2616) */
/* WARNING: Removing unreachable block (ram,0x00015b8fec48) */
/* WARNING: Removing unreachable block (ram,0x00014dad261c) */

undefined8 FUN_14dad24f8(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ulonglong local_10;
  ulonglong local_8;
  
  local_10 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + -8) | param_1;
  param_1 = *(ulonglong *)(unaff_RDI + -8) & param_1;
  local_8 = ~param_1;
  if (param_1 == 0) {
    uVar1 = FUN_16496299c();
    return uVar1;
  }
  local_8 = (~uVar2 | local_8) + uVar2 + 1;
  uVar1 = FUN_164a9ec19(FUN_164a9ec19,&local_10,unaff_retaddr);
  return uVar1;
}



// FUNCTION 14dad2593 FUN_14dad2593 body=290 status=ok
// SIG undefined FUN_14dad2593(void)

/* WARNING: Removing unreachable block (ram,0x00014dad261c) */

longlong FUN_14dad2593(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
  lVar3 = (~uVar2 | 0xffffffffffffffff - (uVar1 & unaff_R15)) + uVar2;
  if (-1 < lVar3) {
    return lVar3 + 1;
  }
  lVar3 = FUN_15b8fec48();
  return lVar3;
}



// FUNCTION 14dad2f2d FUN_14dad2f2d body=311 status=ok
// SIG undefined FUN_14dad2f2d(void)

/* WARNING: Removing unreachable block (ram,0x00014dad2fca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dad2f2d(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  
  uVar1 = FUN_14e03d85a(in_stack_00000008 + param_1 + (in_stack_00000008 & param_1) * -2,param_2,
                        param_3,unaff_retaddr);
  return uVar1;
}



// FUNCTION 14dad3069 FUN_14dad3069 body=108 status=ok
// SIG undefined FUN_14dad3069(void)

void FUN_14dad3069(void)

{
  return;
}



// FUNCTION 14dad30fc FUN_14dad30fc body=121 status=ok
// SIG undefined FUN_14dad30fc(void)

void FUN_14dad30fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_162acfbfc(-param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dad3218 FUN_14dad3218 body=437 status=ok
// SIG undefined FUN_14dad3218(void)

/* WARNING: Removing unreachable block (ram,0x00014e12dc97) */
/* WARNING: Removing unreachable block (ram,0x00014e12dca3) */
/* WARNING: Removing unreachable block (ram,0x00016271c34a) */
/* WARNING: Removing unreachable block (ram,0x00014dad332d) */
/* WARNING: Removing unreachable block (ram,0x00014dad3333) */
/* WARNING: Removing unreachable block (ram,0x00014dad3338) */
/* WARNING: Removing unreachable block (ram,0x00014dad33ad) */
/* WARNING: Removing unreachable block (ram,0x000165d86a43) */
/* WARNING: Removing unreachable block (ram,0x00014dad33ca) */
/* WARNING: Removing unreachable block (ram,0x00014dad33d0) */
/* WARNING: Removing unreachable block (ram,0x00014e12db6b) */
/* WARNING: Removing unreachable block (ram,0x00014e12dbf8) */
/* WARNING: Removing unreachable block (ram,0x00014e12dbfe) */
/* WARNING: Removing unreachable block (ram,0x00014ddc7172) */
/* WARNING: Removing unreachable block (ram,0x00014dad331a) */
/* WARNING: Removing unreachable block (ram,0x00016271c3cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dad3218(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_161248d59();
  lVar1 = DAT_161248cc1;
  if (~(~DAT_161248d31 & param_1) + param_1 != DAT_161248d31) {
    uVar2 = FUN_14e12daae();
    return uVar2;
  }
  uVar2 = FUN_160e68ef1();
  if (-1 < lVar1) {
    return uVar2;
  }
  uVar2 = FUN_157273d69(0x6721c4c4);
  return uVar2;
}



// FUNCTION 14dad33d0 FUN_14dad33d0 body=149 status=ok
// SIG undefined FUN_14dad33d0(void)

void FUN_14dad33d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_1565c23d8(-local_res10,param_2,local_res8);
  return;
}



// FUNCTION 14dad3507 FUN_14dad3507 body=153 status=ok
// SIG undefined FUN_14dad3507(void)

void FUN_14dad3507(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x15b4cf8f4)(param_1,param_2);
  return;
}



// FUNCTION 14dad375d FUN_14dad375d body=163 status=ok
// SIG undefined FUN_14dad375d(void)

ulonglong FUN_14dad375d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dad3803 FUN_14dad3803 body=144 status=ok
// SIG undefined FUN_14dad3803(void)

void FUN_14dad3803(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  (*(code *)0x1658f95ff)
            (param_1,~*(ulonglong *)(unaff_RDI + -0x80) & ~param_1 |
                     *(ulonglong *)(unaff_RDI + -0x80),
             -1 - (in_RAX & (-~param_1 - (~param_3 + 2)) - (param_3 & param_1)));
  return;
}



// FUNCTION 14dad39dc FUN_14dad39dc body=298 status=ok
// SIG undefined FUN_14dad39dc(void)

/* WARNING: Removing unreachable block (ram,0x00014dad3c55) */
/* WARNING: Removing unreachable block (ram,0x00014dad3c5b) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d38) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d2d) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d3f) */
/* WARNING: Removing unreachable block (ram,0x0001666ecefd) */
/* WARNING: Removing unreachable block (ram,0x0001666ecfb7) */
/* WARNING: Removing unreachable block (ram,0x0001666ecfbf) */
/* WARNING: Removing unreachable block (ram,0x0001666ed059) */
/* WARNING: Removing unreachable block (ram,0x0001666ed061) */
/* WARNING: Removing unreachable block (ram,0x000156cbd17e) */
/* WARNING: Removing unreachable block (ram,0x000156cbd1c1) */
/* WARNING: Removing unreachable block (ram,0x0001666ed06a) */
/* WARNING: Removing unreachable block (ram,0x0001666ed110) */
/* WARNING: Removing unreachable block (ram,0x0001666ed116) */
/* WARNING: Removing unreachable block (ram,0x0001666ed11b) */
/* WARNING: Removing unreachable block (ram,0x000165433b33) */
/* WARNING: Removing unreachable block (ram,0x000165433bc8) */
/* WARNING: Removing unreachable block (ram,0x000165433bcd) */
/* WARNING: Removing unreachable block (ram,0x000165433bd3) */
/* WARNING: Removing unreachable block (ram,0x000165433bd8) */
/* WARNING: Removing unreachable block (ram,0x00014dad3b08) */
/* WARNING: Removing unreachable block (ram,0x00014dad3b91) */
/* WARNING: Removing unreachable block (ram,0x00014dad3b97) */
/* WARNING: Removing unreachable block (ram,0x000166d1ad36) */
/* WARNING: Removing unreachable block (ram,0x00014dad3ba8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dad39dc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14ddd7ae7();
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
           (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2)) {
    FUN_14dea3b1e();
    return;
  }
  return;
}



// FUNCTION 14dad3b08 FUN_14dad3b08 body=632 status=ok
// SIG undefined FUN_14dad3b08(void)

/* WARNING: Removing unreachable block (ram,0x00014dad3c55) */
/* WARNING: Removing unreachable block (ram,0x00014dad3c5b) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d38) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d2d) */
/* WARNING: Removing unreachable block (ram,0x00014dad3d3f) */
/* WARNING: Removing unreachable block (ram,0x0001666ecefd) */
/* WARNING: Removing unreachable block (ram,0x0001666ecfb7) */
/* WARNING: Removing unreachable block (ram,0x0001666ecfbf) */
/* WARNING: Removing unreachable block (ram,0x0001666ed059) */
/* WARNING: Removing unreachable block (ram,0x0001666ed061) */
/* WARNING: Removing unreachable block (ram,0x000156cbd17e) */
/* WARNING: Removing unreachable block (ram,0x000156cbd1c1) */
/* WARNING: Removing unreachable block (ram,0x0001666ed06a) */
/* WARNING: Removing unreachable block (ram,0x0001666ed110) */
/* WARNING: Removing unreachable block (ram,0x0001666ed116) */
/* WARNING: Removing unreachable block (ram,0x0001666ed11b) */
/* WARNING: Removing unreachable block (ram,0x000165433b33) */
/* WARNING: Removing unreachable block (ram,0x000165433bc8) */
/* WARNING: Removing unreachable block (ram,0x000165433bcd) */
/* WARNING: Removing unreachable block (ram,0x000165433bd3) */
/* WARNING: Removing unreachable block (ram,0x000165433bd8) */
/* WARNING: Removing unreachable block (ram,0x00014dad3ba8) */

void FUN_14dad3b08(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_R10;
  ulonglong uVar3;
  undefined8 uStackX_18;
  ushort uStackX_20;
  
  uVar3 = *(ulonglong *)(param_3 + 0x10);
  lVar1 = *(longlong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  lVar2 = *(longlong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = *(ulonglong *)(param_3 + 0x10) & param_1;
  *(ulonglong *)(param_3 + 0x10) = (lVar2 + param_1) - *(longlong *)(param_3 + 0x10);
  uVar3 = (~(in_R10 & uVar3) + lVar1) - ~in_R10 & *(ulonglong *)(param_3 + 0x10);
  if (-1 < (longlong)uVar3) {
    FUN_166d1ad36();
    return;
  }
  *(ulonglong *)(param_3 + 0x10) = ~uVar3;
  FUN_157594ffc(uStackX_18,param_2,FUN_157594ffc,~(uStackX_20 & 0x100 | 0xfeff) - 0x100);
  return;
}



// FUNCTION 14dad3e0d FUN_14dad3e0d body=820 status=ok
// SIG undefined FUN_14dad3e0d(void)

/* WARNING: Removing unreachable block (ram,0x00016140af90) */
/* WARNING: Removing unreachable block (ram,0x00016580a983) */
/* WARNING: Removing unreachable block (ram,0x00016580a989) */
/* WARNING: Removing unreachable block (ram,0x00016140af8a) */
/* WARNING: Removing unreachable block (ram,0x00014dad3f45) */
/* WARNING: Removing unreachable block (ram,0x00014dad3f4b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00016140af6c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dad3e0d(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong in_R11;
  
  FUN_14dbb22eb();
  uVar2 = *(ulonglong *)(in_R11 + -0x88) | in_R10;
  FUN_166d2a4a5(CONCAT71((int7)(uVar2 >> 8),0xc5),FUN_166d2a4a5,
                *(ulonglong *)(in_R11 + -0x68) ^ in_R10,
                ~(*(ulonglong *)(in_R11 + -0x88) & in_R10) & uVar2);
  uVar1 = FUN_1669a2b01();
  return uVar1;
}



// FUNCTION 14dad443a FUN_14dad443a body=122 status=ok
// SIG undefined FUN_14dad443a(void)

void FUN_14dad443a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162c89fee(param_1,param_2,param_3,FUN_162c89fee);
  return;
}



// FUNCTION 14dad454c FUN_14dad454c body=161 status=ok
// SIG undefined FUN_14dad454c(void)

/* WARNING: Removing unreachable block (ram,0x00014dad4572) */

undefined8 FUN_14dad454c(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dad45ef FUN_14dad45ef body=68 status=ok
// SIG undefined FUN_14dad45ef(void)

void FUN_14dad45ef(void)

{
  return;
}



// FUNCTION 14dad4ad8 FUN_14dad4ad8 body=121 status=ok
// SIG undefined FUN_14dad4ad8(void)

/* WARNING: Removing unreachable block (ram,0x00014dad4b52) */

void FUN_14dad4ad8(ulonglong param_1,undefined8 param_2)

{
  ulonglong unaff_RSI;
  
  if (-1 < (longlong)((unaff_RSI - param_1) + (~param_1 | unaff_RSI) * -2 + -2)) {
    FUN_14e21d312();
    return;
  }
  FUN_14daabf44(param_1,param_2);
  return;
}



// FUNCTION 14dad4b52 FUN_14dad4b52 body=135 status=ok
// SIG undefined FUN_14dad4b52(void)

void FUN_14dad4b52(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14dd7b644(param_1 + (int)param_4,FUN_14dd7b644,param_3,param_4);
  (*(code *)&LAB_166d0c7b1)();
  return;
}



// FUNCTION 14dad4bda FUN_14dad4bda body=157 status=ok
// SIG undefined FUN_14dad4bda(void)

void FUN_14dad4bda(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_R15;
  
  (*(code *)&LAB_166d0c7b1)(param_1,param_2,unaff_R15);
  return;
}



// FUNCTION 14dad4da5 FUN_14dad4da5 body=21 status=ok
// SIG undefined FUN_14dad4da5(void)

void FUN_14dad4da5(void)

{
  undefined8 unaff_retaddr;
  
  FUN_16131bb16(unaff_retaddr);
  return;
}



// FUNCTION 14dad4f6b FUN_14dad4f6b body=159 status=ok
// SIG undefined FUN_14dad4f6b(void)

void FUN_14dad4f6b(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x166637123)
            (*(ulonglong *)(unaff_RSI + -0x70) + unaff_RBP +
             (*(ulonglong *)(unaff_RSI + -0x70) & unaff_RBP) * -2,0x166637123,
             *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP);
  return;
}



// FUNCTION 14dad513c FUN_14dad513c body=291 status=ok
// SIG undefined FUN_14dad513c(void)

/* WARNING: Removing unreachable block (ram,0x00014dad51d6) */
/* WARNING: Removing unreachable block (ram,0x00014dad51f0) */

void FUN_14dad513c(byte param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong unaff_RSI;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 in_stack_00000018;
  ulonglong local_res20;
  longlong in_stack_00000028;
  
  *(undefined8 *)(unaff_RSI + 0x10) = 0;
  *(longlong *)(unaff_RSI + 0x10) = *(longlong *)(unaff_RSI + 0x10) - ~in_RAX;
  *(longlong *)(unaff_RSI + 0x10) = -*(longlong *)(unaff_RSI + 0x10);
  uVar3 = ((ushort)local_res20 | 0x100) - 0x100;
  LOCK();
  bVar2 = (byte)in_stack_00000018;
  bVar4 = bVar2 < DAT_14d7a90bd;
  bVar5 = SBORROW1(bVar2,DAT_14d7a90bd);
  cVar1 = bVar2 - DAT_14d7a90bd;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    in_stack_00000018 = CONCAT71((int7)((ulonglong)in_stack_00000018 >> 8),DAT_14d7a90bd);
    bVar2 = DAT_14d7a90bd;
  }
  DAT_14d7a90bd = bVar2;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_stack_00000018;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((local_res20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x1c8a71c;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dad526a FUN_14dad526a body=25 status=ok
// SIG undefined FUN_14dad526a(void)

void FUN_14dad526a(void)

{
  return;
}



// FUNCTION 14dad5367 FUN_14dad5367 body=324 status=ok
// SIG undefined FUN_14dad5367(void)

/* WARNING: Removing unreachable block (ram,0x00014dad54ad) */

void FUN_14dad5367(void)

{
  longlong unaff_R13;
  
  FUN_156f8e2ea();
  if (CARRY8(-*(ulonglong *)(unaff_R13 + -0x80),*(ulonglong *)(unaff_R13 + -0x80))) {
    FUN_16271a608();
    return;
  }
  FUN_16271a608();
  return;
}



// FUNCTION 14dad54ad FUN_14dad54ad body=285 status=ok
// SIG undefined FUN_14dad54ad(void)

void FUN_14dad54ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162675fcd(param_1);
  (*(code *)0x1656ddb6e)
            ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) + unaff_R15 + 1,param_2,param_3,
             ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14dad5661 FUN_14dad5661 body=57 status=ok
// SIG undefined FUN_14dad5661(void)

void FUN_14dad5661(void)

{
  return;
}



// FUNCTION 14dad56f7 FUN_14dad56f7 body=143 status=ok
// SIG undefined FUN_14dad56f7(void)

void FUN_14dad56f7(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RSI;
  
  uVar1 = *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | param_1;
  *unaff_RSI = ~((~param_1 | uVar1) & *unaff_RSI);
  return;
}



// FUNCTION 14dad58df FUN_14dad58df body=167 status=ok
// SIG undefined FUN_14dad58df(void)

void FUN_14dad58df(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16491cc6b(0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX));
  return;
}



// FUNCTION 14dad5b50 FUN_14dad5b50 body=175 status=ok
// SIG undefined FUN_14dad5b50(void)

void FUN_14dad5b50(void)

{
  undefined8 uStackX_8;
  
  FUN_162ab731c(0,uStackX_8);
  return;
}



// FUNCTION 14dad5cab FUN_14dad5cab body=280 status=ok
// SIG undefined FUN_14dad5cab(void)

/* WARNING: Instruction at (ram,0x00014dad5df0) overlaps instruction at (ram,0x00014dad5def)
    */
/* WARNING: Removing unreachable block (ram,0x00014dad5d4a) */
/* WARNING: Removing unreachable block (ram,0x00014dad5d33) */
/* WARNING: Removing unreachable block (ram,0x00014dad5d39) */
/* WARNING: Removing unreachable block (ram,0x00014dad5d4d) */
/* WARNING: Removing unreachable block (ram,0x00014dad5df0) */
/* WARNING: Removing unreachable block (ram,0x00014dad5def) */
/* WARNING: Removing unreachable block (ram,0x00014dad5dfc) */
/* WARNING: Removing unreachable block (ram,0x00014dad5e0c) */
/* WARNING: Removing unreachable block (ram,0x00014dad5e17) */
/* WARNING: Removing unreachable block (ram,0x000164ab1a29) */
/* WARNING: Removing unreachable block (ram,0x00015726e827) */

void FUN_14dad5cab(void)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  *(ulonglong *)(unaff_RDI + 0x10) =
       ((unaff_retaddr & unaff_R15) - unaff_retaddr) + *(longlong *)(unaff_RDI + 0x10);
  FUN_15726e827();
  return;
}


