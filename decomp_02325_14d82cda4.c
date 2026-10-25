// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d82cda4 FUN_14d82cda4 body=12 status=ok
// SIG undefined FUN_14d82cda4(void)

void FUN_14d82cda4(void)

{
  return;
}



// FUNCTION 14d82d1a2 FUN_14d82d1a2 body=283 status=ok
// SIG undefined FUN_14d82d1a2(void)

/* WARNING: Removing unreachable block (ram,0x00014d82d2b4) */
/* WARNING: Removing unreachable block (ram,0x00014d82d2bf) */
/* WARNING: Removing unreachable block (ram,0x00014d82d2ba) */
/* WARNING: Removing unreachable block (ram,0x00014d82d22c) */

undefined8 FUN_14d82d1a2(void)

{
  ulonglong *puVar1;
  uint in_EAX;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  int unaff_R15D;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong unaff_retaddr;
  undefined1 local_ee9 [3809];
  
  lVar3 = -(~(ulonglong)local_ee9 + 2);
  plVar4 = (longlong *)(lVar3 + 0xef2);
  *plVar4 = 0;
  *plVar4 = *plVar4 + unaff_retaddr;
  *(undefined8 *)(lVar3 + 0xeea) = unaff_R13;
  *(ulonglong *)(lVar3 + 0xee2) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar1 = (ulonglong *)((lVar3 + 0xeea) - (ulonglong)((*(ulonglong *)(lVar3 + 0xee2) & 1) != 0));
  puVar1[-1] = unaff_R14;
  *puVar1 = (ulonglong)(unaff_R15D - (in_EAX ^ 0xffffffff));
  uVar2 = FUN_160f6316d();
  return uVar2;
}



// FUNCTION 14d82d2bf FUN_14d82d2bf body=140 status=ok
// SIG undefined FUN_14d82d2bf(void)

undefined8 FUN_14d82d2bf(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_14e09f235(in_stack_00000008,param_2,
                        (~(~in_RAX & *(ulonglong *)(unaff_R12 + -0x98)) +
                        *(ulonglong *)(unaff_R12 + -0x98)) - in_RAX,unaff_retaddr,
                        *(undefined8 *)(unaff_R12 + -8),*(undefined8 *)(unaff_R12 + -0x68));
  return uVar1;
}



// FUNCTION 14d82d34b FUN_14d82d34b body=137 status=ok
// SIG undefined FUN_14d82d34b(void)

undefined8 FUN_14d82d34b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d82d3d4 FUN_14d82d3d4 body=144 status=ok
// SIG undefined FUN_14d82d3d4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc0afce) */
/* WARNING: Removing unreachable block (ram,0x00014dc0afd4) */
/* WARNING: Removing unreachable block (ram,0x00014dc0aff5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b00e) */
/* WARNING: Removing unreachable block (ram,0x000161c14139) */
/* WARNING: Removing unreachable block (ram,0x00014e176d24) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b1a9) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca29) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca2f) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca57) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca4d) */
/* WARNING: Removing unreachable block (ram,0x000156c0ca5f) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa3) */
/* WARNING: Removing unreachable block (ram,0x000156c0caa9) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb5d) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb58) */
/* WARNING: Removing unreachable block (ram,0x000156c0cb9b) */
/* WARNING: Removing unreachable block (ram,0x000156c0cbae) */
/* WARNING: Removing unreachable block (ram,0x000156eda328) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b059) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b064) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0da) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b0e5) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b198) */
/* WARNING: Removing unreachable block (ram,0x000156c0c927) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a1) */
/* WARNING: Removing unreachable block (ram,0x00016288fd10) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb4) */
/* WARNING: Removing unreachable block (ram,0x00016288fdb9) */
/* WARNING: Removing unreachable block (ram,0x00016288fdbf) */
/* WARNING: Removing unreachable block (ram,0x00016246b384) */
/* WARNING: Removing unreachable block (ram,0x000156c0c9a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd88fa2) */
/* WARNING: Removing unreachable block (ram,0x00014dc0b05f) */
/* WARNING: Removing unreachable block (ram,0x000161c870f1) */
/* WARNING: Removing unreachable block (ram,0x000156ecc32d) */
/* WARNING: Removing unreachable block (ram,0x00014d82d464) */

undefined8 FUN_14d82d3d4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_2 + -0x80);
  pcVar3 = FUN_156df8331;
  FUN_156df8331(FUN_156df8331,*(ulonglong *)(param_2 + -0xa0) ^ in_R10,param_3);
  if (*(code **)(((~uVar1 | ~in_R10) & (uVar1 | in_R10)) - 0x50) == pcVar3) {
    uVar2 = FUN_14dc0af4d();
    return uVar2;
  }
  uVar2 = FUN_161c870f1();
  return uVar2;
}



// FUNCTION 14d82d464 FUN_14d82d464 body=14 status=ok
// SIG undefined FUN_14d82d464(void)

void FUN_14d82d464(void)

{
  return;
}



// FUNCTION 14d82d50a FUN_14d82d50a body=307 status=ok
// SIG undefined FUN_14d82d50a(void)

void FUN_14d82d50a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165086b21(param_1,param_2,param_3,param_4);
  FUN_1572da98f();
  FUN_156f24088();
  return;
}



// FUNCTION 14d82d63e FUN_14d82d63e body=128 status=ok
// SIG undefined FUN_14d82d63e(void)

void FUN_14d82d63e(void)

{
  FUN_156f24088();
  return;
}



// FUNCTION 14d82d8b6 FUN_14d82d8b6 body=134 status=ok
// SIG undefined FUN_14d82d8b6(void)

void FUN_14d82d8b6(void)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d90d3e2(~unaff_RSI,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d82d944 FUN_14d82d944 body=133 status=ok
// SIG undefined FUN_14d82d944(void)

void FUN_14d82d944(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_162b9a02d(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2);
  return;
}



// FUNCTION 14d82d9ca FUN_14d82d9ca body=152 status=ok
// SIG undefined FUN_14d82d9ca(void)

/* WARNING: Removing unreachable block (ram,0x00014d82da16) */

void FUN_14d82d9ca(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1612efcf9(param_1,FUN_1612efcf9,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14d82dc06 FUN_14d82dc06 body=200 status=ok
// SIG undefined FUN_14d82dc06(void)

void FUN_14d82dc06(undefined8 param_1,undefined8 param_2)

{
  FUN_15b9b7ef4(0x7ffe0000,param_2,FUN_15b9b7ef4);
  return;
}



// FUNCTION 14d82dcd1 FUN_14d82dcd1 body=25 status=ok
// SIG undefined FUN_14d82dcd1(void)

undefined8 FUN_14d82dcd1(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d82dd5a FUN_14d82dd5a body=211 status=ok
// SIG undefined FUN_14d82dd5a(void)

void FUN_14d82dd5a(void)

{
  return;
}



// FUNCTION 14d82de30 FUN_14d82de30 body=115 status=ok
// SIG undefined FUN_14d82de30(void)

undefined8 FUN_14d82de30(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d82dec2 FUN_14d82dec2 body=46 status=ok
// SIG undefined FUN_14d82dec2(void)

void FUN_14d82dec2(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d82deee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d82df5a FUN_14d82df5a body=124 status=ok
// SIG undefined FUN_14d82df5a(void)

void FUN_14d82df5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1660d6b58(param_1,param_2,param_3,0xe5a9852);
  return;
}



// FUNCTION 14d82dfd8 FUN_14d82dfd8 body=372 status=ok
// SIG undefined FUN_14d82dfd8(void)

void FUN_14d82dfd8(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_R12;
  longlong local_res10;
  
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  plVar1 = (longlong *)(local_res10 + -0x10);
  *plVar1 = unaff_RBX;
  *(undefined4 *)(local_res10 + -0xc) = 0;
  *(int *)plVar1 = *(int *)plVar1;
  if (*(int *)plVar1 < 0) {
    *(undefined4 *)(local_res10 + -0xc) = 0xffffffff;
  }
  *plVar1 = unaff_R12;
  *(longlong *)(local_res10 + -0x18) = unaff_R12;
  lVar2 = *(longlong *)(local_res10 + -8);
  *plVar1 = lVar2;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  if ((lVar2 >= 0) && (lVar2 < 0)) {
    *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
    *(undefined4 *)(local_res10 + -0x18) = 0x8c2532fd;
    *(undefined4 *)(local_res10 + -0x14) = 0xffffffff;
    *(undefined4 *)(local_res10 + -0x18) = 0;
    *(undefined4 *)(local_res10 + -0x14) = 0;
    *(undefined4 *)(local_res10 + -0x18) = 0;
    *(undefined4 *)(local_res10 + -0x14) = 0x2d13d317;
    *(uint *)(local_res10 + -0x14) = *(uint *)(local_res10 + -0x14) ^ 0x2d13d317;
    uVar3 = *(undefined8 *)(local_res10 + -0x18);
    *(undefined8 *)(local_res10 + -0x18) = uVar3;
    *(undefined8 *)(local_res10 + -0x20) = uVar3;
    *(undefined8 *)(local_res10 + -0x28) = uVar3;
    *(undefined1 **)(local_res10 + -0x18) = &LAB_14d82e14e;
    *(undefined8 *)(local_res10 + -0x20) = 0x14df06432;
    return;
  }
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = (longlong)(&LAB_15653212c + *(longlong *)(local_res10 + -8));
  FUN_14d7aaa71();
  return;
}



// FUNCTION 14d82e423 FUN_14d82e423 body=84 status=ok
// SIG undefined FUN_14d82e423(void)

void FUN_14d82e423(void)

{
  return;
}



// FUNCTION 14d82e56b FUN_14d82e56b body=236 status=ok
// SIG undefined FUN_14d82e56b(void)

void FUN_14d82e56b(void)

{
  FUN_1625576d1();
  return;
}



// FUNCTION 14d82e6fd FUN_14d82e6fd body=210 status=ok
// SIG undefined FUN_14d82e6fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d82e79e) */

undefined8 FUN_14d82e6fd(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  longlong in_R10;
  longlong local_res18 [2];
  
  lVar1 = *(longlong *)(unaff_RDI + -0x48);
  FUN_156e6ec62();
  *(undefined8 *)((longlong)local_res18 + in_R10) = 0;
  *(longlong *)((longlong)local_res18 + in_R10) =
       *(longlong *)((longlong)local_res18 + in_R10) + param_4;
  lVar2 = local_res18[0];
  local_res18[0] = *(longlong *)(unaff_RDI + -8);
  uVar3 = FUN_161cb2a97(*(undefined8 *)(unaff_RDI + -0x98),lVar1 + param_1,FUN_161cb2a97,lVar2);
  return uVar3;
}



// FUNCTION 14d82ea0f FUN_14d82ea0f body=149 status=ok
// SIG undefined FUN_14d82ea0f(void)

/* WARNING: Removing unreachable block (ram,0x0001615b2beb) */
/* WARNING: Removing unreachable block (ram,0x0001615b2bf1) */
/* WARNING: Removing unreachable block (ram,0x00014d82eaa5) */
/* WARNING: Removing unreachable block (ram,0x00014d82eb47) */
/* WARNING: Removing unreachable block (ram,0x00014d82eb4c) */
/* WARNING: Removing unreachable block (ram,0x00014d82eb52) */
/* WARNING: Removing unreachable block (ram,0x00014d82eb57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d82ea0f(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined8 unaff_RSI;
  uint uVar2;
  uint uVar3;
  longlong unaff_RDI;
  uint uVar5;
  longlong lVar6;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_res8;
  ulonglong uVar4;
  
  if (&stack0x00000000 != &DAT_fffffffffffffff0) {
    FUN_1615b2ac7();
    return;
  }
  uVar2 = _DAT_00000000;
  _DAT_00000000 = ~(in_R11 & local_res8) & (in_R11 | local_res8);
  uVar5 = 0xffffffff - (int)in_RAX;
  uVar2 = ~(uVar5 & uVar2) + uVar2;
  uVar5 = uVar5 ^ 0xffffffff;
  uVar3 = uVar2 - uVar5;
  uVar4 = (ulonglong)uVar3;
  uVar1 = (ulonglong)(uVar2 < uVar5);
  _DAT_ffffffffffffffe8 =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar2,uVar5) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | uVar1 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  _DAT_ffffffffffffffe0 = (uint)(uVar2 < uVar5);
  uVar2 = -((int)(_DAT_ffffffffffffffe0 << 0x1f) >> 0x1f);
  _DAT_ffffffffffffffe0 = (ulonglong)uVar2;
  _DAT_fffffffffffffff0 = unaff_RDI;
  _DAT_fffffffffffffff8 = param_3;
  if (uVar2 != 0) {
    if (uVar1 == 0 && (ulonglong)(uVar3 == 0) == 0) {
      uVar1 = ~(ulonglong)uVar3;
      _DAT_ffffffffffffffe0 =
           (*(ulonglong *)(uVar4 - 0x80) & param_1 ^ 0xffffffffffffffff) &
           (*(ulonglong *)(uVar4 - 0x80) | param_1);
      _DAT_ffffffffffffffe8 = ~-*(longlong *)(uVar4 - 0x28) + 1U ^ param_1;
      FUN_1657a900c(param_1,(*(ulonglong *)(uVar4 - 0x68) & param_1 ^ 0xffffffffffffffff) &
                            (*(ulonglong *)(uVar4 - 0x68) | param_1),
                    ~(uVar3 & param_1 | (~param_1 - (uVar1 | ~param_1)) + uVar1));
      return;
    }
    _DAT_ffffffffffffffe0 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),0x1589bf6);
    _DAT_ffffffffffffffd8 = 0x15b49e5b4;
    _DAT_ffffffffffffffe8 = param_3;
    _DAT_fffffffffffffff0 = unaff_RBX;
    _DAT_fffffffffffffff8 = param_1;
    FUN_15b286e68(param_1,param_2,FUN_15b286e68,(uVar3 + (int)in_RAX + 1) * 2);
    lVar6 = *(longlong *)(unaff_RDI + -0x70);
    _DAT_ffffffffffffffe0 = 0x15b49e647;
    _DAT_ffffffffffffffd8 = unaff_RSI;
    FUN_15b9697d7();
    uVar1 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15;
    _DAT_ffffffffffffffe0 = *(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 + uVar1 * -2;
    FUN_160fd2bad(uVar1 * 2,*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,
                  ~(0xffffffffffffffff - (param_1 & 0xffffffffffffffffU - lVar6 | ~param_1)) &
                  0x628c - ~(unaff_RDI - 0x62edU));
    return;
  }
  FUN_15b49e537();
  return;
}



// FUNCTION 14d82eaa5 FUN_14d82eaa5 body=342 status=ok
// SIG undefined FUN_14d82eaa5(void)

/* WARNING: Removing unreachable block (ram,0x00014d82eb57) */

void FUN_14d82eaa5(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x70);
  param_1 = ~*(ulonglong *)(unaff_RDI + -0x70) | param_1;
  if ((param_1 - (uVar1 | param_1)) + uVar1 == -1) {
    FUN_162f63af7();
    return;
  }
  FUN_162f63af7();
  return;
}



// FUNCTION 14d82f0dc FUN_14d82f0dc body=279 status=ok
// SIG undefined FUN_14d82f0dc(void)

/* WARNING: Removing unreachable block (ram,0x00014d82f144) */

void FUN_14d82f0dc(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  (*(code *)0x166b81ef8)
            ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x38),0x166b81ef8,
             ~((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) + uVar1 + 1),
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d82f167 FUN_14d82f167 body=313 status=ok
// SIG undefined FUN_14d82f167(void)

/* WARNING: Instruction at (ram,0x00014d82f21b) overlaps instruction at (ram,0x00014d82f21a)
    */
/* WARNING: Removing unreachable block (ram,0x00014d82f1f6) */
/* WARNING: Removing unreachable block (ram,0x00014d82f21a) */
/* WARNING: Removing unreachable block (ram,0x00014d82f21b) */

void FUN_14d82f167(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong in_R9;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff85e09c3 + unaff_retaddr);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  puVar1[-1] = unaff_R14;
  puVar2 = puVar1 + 1;
  uVar3 = *puVar2;
  *puVar2 = in_R9;
  *puVar2 = *puVar1 + uVar3 + (*puVar1 & uVar3) * -2;
  *puVar1 = unaff_RBX;
  uVar4 = *puVar1;
  *puVar1 = 0xffffffffffffffff - (~puVar1[2] & ~uVar3);
  puVar1[-1] = in_R11;
  puVar1[-2] = uVar3;
  puVar1[-3] = uVar4;
  puVar1[2] = (0xffffffffffffffff - uVar3 | puVar1[2]) + uVar3 + 1;
  puVar1[2] = ~puVar1[2];
  puVar1[2] = puVar1[2] & *puVar1;
  uVar3 = *puVar2;
  puVar1[3] = puVar1[3] ^ puVar1[-2];
  *puVar2 = unaff_RSI;
  *puVar1 = puVar1[-3];
  *puVar1 = uVar3;
  (*(code *)0x1620a11da)();
  return;
}



// FUNCTION 14d82f29c FUN_14d82f29c body=116 status=ok
// SIG undefined FUN_14d82f29c(void)

void FUN_14d82f29c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  short unaff_R13W;
  short *unaff_R14;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_R14 = unaff_R13W + 1;
  *(undefined8 *)(local_res20 + -8) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined1 **)(local_res20 + -8) = &LAB_14d807cad;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined4 *)(local_res20 + -0x20) = 0xc45e608d;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined **)(local_res20 + -0x10) = &DAT_14d7a7ed9;
  (*(code *)0x14d807c93)(param_1,0x14d807c93);
  return;
}



// FUNCTION 14d82f31a FUN_14d82f31a body=45 status=ok
// SIG undefined FUN_14d82f31a(void)

/* WARNING: Removing unreachable block (ram,0x00014d82f334) */

void FUN_14d82f31a(void)

{
  FUN_15ba1b775(FUN_15ba1b775);
  return;
}



// FUNCTION 14d82f46a FUN_14d82f46a body=39 status=ok
// SIG undefined FUN_14d82f46a(void)

void FUN_14d82f46a(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d82f50f thunk_FUN_165e93f27 body=31 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d82f6f5 FUN_14d82f6f5 body=14 status=ok
// SIG undefined FUN_14d82f6f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d82f6f5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d82f796 FUN_14d82f796 body=156 status=ok
// SIG undefined FUN_14d82f796(void)

void FUN_14d82f796(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 uStackX_18;
  
  *(undefined8 *)(unaff_R13 + -8) = unaff_RBP;
  *(undefined8 *)(unaff_R13 + -0x10) = uStackX_18;
  *(undefined8 *)(unaff_R13 + -0x18) = uStackX_18;
  *(undefined8 *)(unaff_R13 + -0x20) = param_1;
  uVar1 = *(undefined8 *)(unaff_R13 + -0x20);
  *(undefined8 *)(unaff_R13 + -0x10) = *(undefined8 *)(unaff_R13 + -8);
  *(undefined8 *)(unaff_R13 + -8) = 0;
  *(longlong *)(unaff_R13 + -8) = (longlong)(&LAB_166538ce4 + *(longlong *)(unaff_R13 + -8));
  *(undefined8 *)(unaff_R13 + -0x10) = *(undefined8 *)(unaff_R13 + -0x18);
  *(undefined8 *)(unaff_R13 + -0x18) = *(undefined8 *)(unaff_R13 + -0x18);
  *(undefined8 *)(unaff_R13 + -0x20) = unaff_R15;
  *(undefined8 *)(unaff_R13 + -0x28) = 0x14d82f82e;
  FUN_166538cb3(uVar1,thunk_FUN_15b642ca5);
  FUN_14d82f834();
  return;
}



// FUNCTION 14d82f834 FUN_14d82f834 body=176 status=ok
// SIG undefined FUN_14d82f834(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d82f8e4) */
/* WARNING: Removing unreachable block (ram,0x00014d82fa0c) */
/* WARNING: Removing unreachable block (ram,0x00014d82fa12) */
/* WARNING: Removing unreachable block (ram,0x000156759808) */

void FUN_14d82f834(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  uint uVar6;
  undefined8 unaff_RBX;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  bool bVar7;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  bVar7 = (local_res8 & 0x400) != 0;
  plVar2 = (longlong *)(local_res10 + -8);
  *plVar2 = param_1;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  lVar4 = *(longlong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(longlong *)(local_res10 + -0x10) = *plVar2;
  puVar3 = *(undefined1 **)(local_res10 + -0x20);
  uVar5 = *(undefined8 *)(local_res10 + -0x18);
  *plVar2 = 0;
  *plVar2 = *plVar2 + 0x14e16f67c;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x28) = uVar5;
  uVar6 = (uint)*(undefined8 *)(local_res10 + -8) | unaff_EBP;
  uVar5 = *(undefined8 *)(local_res10 + -0x10);
  *(ulonglong *)(local_res10 + -0x10) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((int)uVar6 < 0) * 0x80 |
       (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  out(*puVar3,param_2);
  *(int *)(lVar4 + 0x13) = (int)lVar4;
  pcVar1 = puVar3 + (ulonglong)bVar7 * -2 + 0x29;
  *pcVar1 = *pcVar1 + (char)uVar5;
  *(byte *)(lVar4 + 0x53) = *(byte *)(lVar4 + 0x53) & (byte)((ulonglong)uVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d82f8e4 FUN_14d82f8e4 body=301 status=ok
// SIG undefined FUN_14d82f8e4(void)

/* WARNING: Removing unreachable block (ram,0x00014d82fa12) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d82f8e4(byte param_1)

{
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  ulonglong local_res8;
  ulonglong in_stack_00000028;
  
  uVar1 = in_R10 - (in_R11 << ((param_1 ^ 0xc9) + 0x54 & 0x3f));
  FUN_165c3f0de(unaff_retaddr,~unaff_retaddr | *(ulonglong *)(unaff_RDI + -0x60),0x3c57,
                ~*(ulonglong *)(unaff_RDI + -0x60));
  syscall();
  *(undefined8 *)((~(in_stack_00000028 & local_res8) & (uVar1 | local_res8)) - 8) = 0x4ed5dc8;
  FUN_165c7153c(0x15675980d);
  return;
}



// FUNCTION 14d82fa12 thunk_FUN_16131bb16 body=27 status=ok
// SIG undefined thunk_FUN_16131bb16(void)

void thunk_FUN_16131bb16(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d82fc0b FUN_14d82fc0b body=63 status=ok
// SIG undefined FUN_14d82fc0b(void)

void FUN_14d82fc0b(void)

{
  return;
}



// FUNCTION 14d82fc51 FUN_14d82fc51 body=84 status=ok
// SIG undefined FUN_14d82fc51(void)

void FUN_14d82fc51(void)

{
  FUN_156dbed8c();
  return;
}



// FUNCTION 14d82fe52 FUN_14d82fe52 body=475 status=ok
// SIG undefined FUN_14d82fe52(void)

void FUN_14d82fe52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166a5d13f(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14d82ff8f FUN_14d82ff8f body=172 status=ok
// SIG undefined FUN_14d82ff8f(void)

void FUN_14d82ff8f(void)

{
  return;
}



// FUNCTION 14d830541 FUN_14d830541 body=305 status=ok
// SIG undefined FUN_14d830541(void)

/* WARNING: Removing unreachable block (ram,0x00014d830816) */
/* WARNING: Removing unreachable block (ram,0x00014d830788) */
/* WARNING: Removing unreachable block (ram,0x00014d830793) */
/* WARNING: Removing unreachable block (ram,0x00014d830819) */
/* WARNING: Removing unreachable block (ram,0x00014d83078e) */
/* WARNING: Removing unreachable block (ram,0x00014d830674) */
/* WARNING: Removing unreachable block (ram,0x00015b76e482) */
/* WARNING: Removing unreachable block (ram,0x00015b76e487) */
/* WARNING: Removing unreachable block (ram,0x00015b76e48d) */
/* WARNING: Removing unreachable block (ram,0x00014d8305e0) */
/* WARNING: Removing unreachable block (ram,0x00014d830669) */
/* WARNING: Removing unreachable block (ram,0x00014d83066e) */
/* WARNING: Removing unreachable block (ram,0x00014d8adbab) */
/* WARNING: Removing unreachable block (ram,0x00015b76e492) */

void FUN_14d830541(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8 [4];
  
  *(ulonglong *)((longlong)local_res8 + param_1) = *(ulonglong *)(unaff_R13 + -0x90);
  uVar3 = *(ulonglong *)((longlong)local_res8 + param_1);
  *(ulonglong *)((longlong)local_res8 + param_1) = (~unaff_R15 + uVar3) - (~unaff_R15 & uVar3);
  uVar3 = ~(~(0xffffffffffffffff - uVar3) & ~unaff_R15);
  *(ulonglong *)((longlong)local_res8 + param_1) =
       (uVar3 - (*(ulonglong *)((longlong)local_res8 + param_1) | uVar3)) +
       *(ulonglong *)((longlong)local_res8 + param_1) ^ 0xffffffffffffffff;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  *(longlong *)((longlong)local_res8 + param_1) = param_1;
  lVar2 = uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2;
  *(undefined8 *)((longlong)local_res8 + param_1) = *(undefined8 *)(unaff_R13 + -0x38);
  *(undefined8 *)((longlong)local_res8 + param_1) = *(undefined8 *)(unaff_R13 + -0x78);
  uVar1 = *(ulonglong *)((longlong)local_res8 + param_1) ^ 0xffffffffffffffff;
  *(ulonglong *)((longlong)local_res8 + param_1) = uVar1;
  *(ulonglong *)((longlong)local_res8 + param_1 + -8) = uVar1;
  *(undefined **)((longlong)local_res8 + param_1) = &DAT_1618aff51;
  (*(code *)0x161d2fc24)
            (*(undefined8 *)((longlong)local_res8 + param_1 + -8),lVar2,lVar2,
             ~(uVar3 & unaff_R15) & (~unaff_R15 & uVar3 | unaff_R15));
  return;
}



// FUNCTION 14d830674 FUN_14d830674 body=858 status=ok
// SIG undefined FUN_14d830674(void)

/* WARNING: Removing unreachable block (ram,0x00014d830816) */
/* WARNING: Removing unreachable block (ram,0x00014d830788) */
/* WARNING: Removing unreachable block (ram,0x00014d830793) */
/* WARNING: Removing unreachable block (ram,0x00014d830819) */
/* WARNING: Removing unreachable block (ram,0x00014d83078e) */
/* WARNING: Removing unreachable block (ram,0x00015b76e492) */

void FUN_14d830674(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14debbe00(param_1,param_2);
  FUN_16118ff10();
  if (*(ulonglong *)(unaff_R13 + -0x40) + unaff_R15 <
      (*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15) * 2) {
    FUN_166a61ac5();
    return;
  }
  FUN_166a61ac5();
  return;
}



// FUNCTION 14d830b21 FUN_14d830b21 body=283 status=ok
// SIG undefined FUN_14d830b21(void)

void FUN_14d830b21(void)

{
  FUN_161141513();
  return;
}



// FUNCTION 14d830c42 FUN_14d830c42 body=328 status=ok
// SIG undefined FUN_14d830c42(void)

void FUN_14d830c42(undefined8 param_1)

{
  FUN_14dc6fbbb();
  FUN_1567aab10(param_1);
  return;
}



// FUNCTION 14d830d8c FUN_14d830d8c body=416 status=ok
// SIG undefined FUN_14d830d8c(void)

/* WARNING: Removing unreachable block (ram,0x00014d830e13) */
/* WARNING: Removing unreachable block (ram,0x00014d830e19) */

undefined1 * FUN_14d830d8c(void)

{
  return &LAB_1571462ea;
}



// FUNCTION 14d830f3e FUN_14d830f3e body=151 status=ok
// SIG undefined FUN_14d830f3e(void)

void FUN_14d830f3e(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined8 unaff_R14;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  
  *unaff_RBP = *(undefined8 *)(unaff_RDI + -0x70);
  puVar1 = unaff_RBP + 1;
  *unaff_RBP = unaff_R14;
  uVar2 = *unaff_RBP;
  *unaff_RBP = FUN_14d830fd5;
  uVar4 = FUN_15b81ae22();
  *unaff_RBP = 0x305710ff;
  unaff_RBP[-1] = uVar4;
  uVar4 = *unaff_RBP;
  uVar13 = *puVar1;
  *puVar1 = (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar13 & 0x800) != 0) * 0x800 | (ulonglong)((uVar13 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
            (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  uVar13 = *puVar1;
  bVar10 = (uVar13 & 0x4000) != 0;
  bVar9 = (uVar13 & 0x400) != 0;
  bVar8 = (uVar13 & 0x200) != 0;
  bVar7 = (uVar13 & 0x100) != 0;
  bVar6 = (uVar13 & 0x10) != 0;
  bVar12 = (uVar13 & 0x200000) != 0;
  bVar11 = (uVar13 & 0x40000) != 0;
  unaff_RBP[1] = (ulonglong)bVar10 * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
                 (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
                 (ulonglong)((uVar13 & 0x80) != 0) * 0x80 | (ulonglong)((uVar13 & 0x40) != 0) * 0x40
                 | (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar13 & 4) != 0) * 4 |
                 (ulonglong)((uVar13 & 1) != 0) | (ulonglong)bVar12 * 0x200000 |
                 (ulonglong)bVar11 * 0x40000;
  *(undefined4 *)unaff_RBP = 0xf0de1fde;
  *(undefined4 *)((longlong)unaff_RBP + 4) = 0xffffffff;
  uVar3 = *unaff_RBP;
  *unaff_RBP = uVar2;
  unaff_RBP[-1] = unaff_RDI;
  unaff_RBP[-2] = uVar3;
  uVar13 = ~unaff_RBP[-2];
  uVar5 = 0xf21e0e5 - uVar13;
  unaff_RBP[-2] =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)SBORROW8(0xf21e0e5,uVar13) * 0x800 |
       (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0xf21e0e5 < uVar13) | (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  unaff_RBP[-2] = uVar4;
  unaff_RBP[-3] = uVar4;
  unaff_RBP[-2] = 0x14d831089;
  FUN_1658edd8a();
  return;
}



// FUNCTION 14d830fd5 FUN_14d830fd5 body=178 status=ok
// SIG undefined FUN_14d830fd5(void)

void FUN_14d830fd5(undefined8 param_1,undefined8 param_2)

{
  FUN_1658edd8a(param_1,param_2,0x7ffe0000);
  return;
}



// FUNCTION 14d83112e FUN_14d83112e body=597 status=ok
// SIG undefined FUN_14d83112e(void)

/* WARNING: Instruction at (ram,0x00014d8311b7) overlaps instruction at (ram,0x00014d8311b6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8311b3) */
/* WARNING: Removing unreachable block (ram,0x00014d831255) */
/* WARNING: Removing unreachable block (ram,0x00014d83125b) */
/* WARNING: Removing unreachable block (ram,0x00014d83117a) */

void FUN_14d83112e(void)

{
  FUN_1658760f9();
  FUN_1625e601d();
  FUN_166af08c9();
  return;
}



// FUNCTION 14d83125b FUN_14d83125b body=129 status=ok
// SIG undefined FUN_14d83125b(void)

void FUN_14d83125b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  longlong in_stack_00000008;
  
  uVar2 = *(undefined8 *)(&stack0xfffffffff40191ec + in_stack_00000008);
  uVar1 = *(undefined8 *)(unaff_RDI + -0x68);
  *(longlong *)(&stack0xfffffffff40191ec + in_stack_00000008) = unaff_RDI;
  *(undefined8 *)(&stack0xfffffffff40191e4 + in_stack_00000008) = uVar2;
  *(undefined8 *)(&stack0xfffffffff40191dc + in_stack_00000008) = unaff_R15;
  FUN_15b8fb284(param_1,uVar1);
  return;
}



// FUNCTION 14d8312dd FUN_14d8312dd body=597 status=ok
// SIG undefined FUN_14d8312dd(void)

/* WARNING: Removing unreachable block (ram,0x00015786f24c) */
/* WARNING: Removing unreachable block (ram,0x00014d831407) */
/* WARNING: Removing unreachable block (ram,0x00014d831412) */
/* WARNING: Removing unreachable block (ram,0x00014d831494) */
/* WARNING: Removing unreachable block (ram,0x00014d83149a) */
/* WARNING: Removing unreachable block (ram,0x00016504a8f3) */
/* WARNING: Removing unreachable block (ram,0x00016504a96d) */
/* WARNING: Removing unreachable block (ram,0x00015786f1c5) */
/* WARNING: Removing unreachable block (ram,0x00015786f246) */
/* WARNING: Removing unreachable block (ram,0x000165fa5e59) */
/* WARNING: Removing unreachable block (ram,0x00014d8313ae) */
/* WARNING: Removing unreachable block (ram,0x00014d83140d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8312dd(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_1657f1903(param_1,0,*(undefined8 *)(unaff_RDI + -0x70));
  FUN_15b3b0ef1(param_1,0xffffffff8d1f80ff,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  uVar1 = FUN_1669da875();
  return uVar1;
}



// FUNCTION 14d831536 FUN_14d831536 body=20 status=ok
// SIG undefined FUN_14d831536(void)

void FUN_14d831536(void)

{
  FUN_157247504();
  return;
}



// FUNCTION 14d831644 FUN_14d831644 body=150 status=ok
// SIG undefined FUN_14d831644(void)

undefined8 FUN_14d831644(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_20;
  
  *(undefined8 *)(uStackX_20 + -8) = param_1;
  *(undefined8 *)(uStackX_20 + -0x10) = in_RAX;
  *(undefined8 *)(uStackX_20 + -0x18) = in_RAX;
  *(undefined8 *)(uStackX_20 + -0x10) = *(undefined8 *)(uStackX_20 + -8);
  uVar1 = *(undefined8 *)(uStackX_20 + -0x18);
  *(undefined8 *)(uStackX_20 + -0x18) = in_R11;
  *(undefined8 *)(uStackX_20 + -8) = 0;
  *(undefined8 *)(uStackX_20 + -0x18) = unaff_RBP;
  *(undefined8 *)(uStackX_20 + -0x20) = unaff_R15;
  *(longlong *)(uStackX_20 + -8) = *(longlong *)(uStackX_20 + -8) + -0x16686d92d;
  *(undefined8 *)(uStackX_20 + -0x18) = unaff_R14;
  *(longlong *)(uStackX_20 + -8) = -*(longlong *)(uStackX_20 + -8);
  *(undefined8 *)(uStackX_20 + -0x18) = 0x16686d904;
  return uVar1;
}



// FUNCTION 14d83180d FUN_14d83180d body=53 status=ok
// SIG undefined FUN_14d83180d(void)

void FUN_14d83180d(void)

{
  return;
}



// FUNCTION 14d831927 FUN_14d831927 body=144 status=ok
// SIG undefined FUN_14d831927(void)

void FUN_14d831927(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_162811a8f(FUN_162811a8f,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d831ac0 FUN_14d831ac0 body=67 status=ok
// SIG undefined FUN_14d831ac0(void)

void FUN_14d831ac0(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong unaff_R13;
  longlong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  pcVar2 = FUN_1649d3d56;
  FUN_1649d3d56();
  (*(code *)&LAB_16621c54e)(pcVar2,8,0x51c4a7fe,*(undefined8 *)(lVar1 + unaff_R15 + -0x30));
  return;
}



// FUNCTION 14d831c84 FUN_14d831c84 body=179 status=ok
// SIG undefined FUN_14d831c84(void)

void FUN_14d831c84(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  
  FUN_1574779f1(param_1,~(unaff_RSI & (~param_2 | param_1)));
  return;
}



// FUNCTION 14d831dca FUN_14d831dca body=468 status=ok
// SIG undefined FUN_14d831dca(void)

/* WARNING: Removing unreachable block (ram,0x00014d831e52) */
/* WARNING: Removing unreachable block (ram,0x00014d831e58) */
/* WARNING: Removing unreachable block (ram,0x00014d831ef0) */
/* WARNING: Removing unreachable block (ram,0x00014d831ef5) */
/* WARNING: Removing unreachable block (ram,0x00014d831efb) */
/* WARNING: Removing unreachable block (ram,0x00014d831f95) */
/* WARNING: Removing unreachable block (ram,0x00014d831f9b) */
/* WARNING: Removing unreachable block (ram,0x000166200394) */
/* WARNING: Removing unreachable block (ram,0x0001575d16c7) */

void FUN_14d831dca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = ((~unaff_R15 | param_5) + unaff_R15 + 1) * 2;
  *(undefined8 *)(lVar1 + -8) = param_1;
  *(undefined8 *)(lVar1 + -0x10) = local_res10;
  *(undefined8 *)(lVar1 + -0x18) = local_res10;
  *(undefined8 *)(lVar1 + -0x20) = local_res18;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  FUN_14e22f65d(&LAB_16256ceec,param_2,param_3);
  return;
}



// FUNCTION 14d831efb FUN_14d831efb body=279 status=ok
// SIG undefined FUN_14d831efb(void)

/* WARNING: Removing unreachable block (ram,0x00014d831f9b) */

void FUN_14d831efb(undefined8 param_1)

{
  FUN_14debb68f(param_1,FUN_14debb68f);
  return;
}



// FUNCTION 14d832016 FUN_14d832016 body=143 status=ok
// SIG undefined FUN_14d832016(void)

/* WARNING: Removing unreachable block (ram,0x00014d8320ac) */
/* WARNING: Removing unreachable block (ram,0x000165f932a7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d832016(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((param_1 - (*(ulonglong *)(unaff_RDI + -0x98) | param_1)) +
           *(ulonglong *)(unaff_RDI + -0x98))) {
    uVar1 = FUN_166dbc443();
    return uVar1;
  }
  uVar1 = FUN_160ee5195(0x63cc52b2,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d8320ac FUN_14d8320ac body=152 status=ok
// SIG undefined FUN_14d8320ac(void)

void FUN_14d8320ac(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1565798ec(1,*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15,
                ~(~*(ulonglong *)(unaff_R13 + -0x88) | ~unaff_R15) << 1,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d8323c2 thunk_FUN_14d8323c8 body=5 status=ok
// SIG undefined thunk_FUN_14d8323c8(void)

/* WARNING: Removing unreachable block (ram,0x00014d832451) */
/* WARNING: Removing unreachable block (ram,0x00014d83245c) */
/* WARNING: Removing unreachable block (ram,0x00014d832457) */

void thunk_FUN_14d8323c8(void)

{
  FUN_15b6a431b();
  return;
}



// FUNCTION 14d8323c8 FUN_14d8323c8 body=147 status=ok
// SIG undefined FUN_14d8323c8(void)

/* WARNING: Removing unreachable block (ram,0x00014d832451) */
/* WARNING: Removing unreachable block (ram,0x00014d83245c) */
/* WARNING: Removing unreachable block (ram,0x00014d832457) */

void FUN_14d8323c8(void)

{
  FUN_15b6a431b();
  return;
}



// FUNCTION 14d83245c FUN_14d83245c body=152 status=ok
// SIG undefined FUN_14d83245c(void)

void FUN_14d83245c(void)

{
  longlong unaff_RSI;
  
  FUN_15b5edc68(FUN_15b5edc68,*(undefined8 *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14d832810 FUN_14d832810 body=149 status=ok
// SIG undefined FUN_14d832810(void)

void FUN_14d832810(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_1662c40a0(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d8328a2 FUN_14d8328a2 body=447 status=ok
// SIG undefined FUN_14d8328a2(void)

/* WARNING: Removing unreachable block (ram,0x000165b93a0c) */
/* WARNING: Removing unreachable block (ram,0x000165b93a17) */
/* WARNING: Removing unreachable block (ram,0x000165b9396e) */
/* WARNING: Removing unreachable block (ram,0x000165b93974) */
/* WARNING: Removing unreachable block (ram,0x00014df7442c) */
/* WARNING: Removing unreachable block (ram,0x000165b93a12) */
/* WARNING: Removing unreachable block (ram,0x000165b938d5) */
/* WARNING: Removing unreachable block (ram,0x000165b938e0) */
/* WARNING: Removing unreachable block (ram,0x000165e36b01) */
/* WARNING: Removing unreachable block (ram,0x000165e36bf4) */
/* WARNING: Removing unreachable block (ram,0x000165e36bf9) */
/* WARNING: Removing unreachable block (ram,0x000165e36c0e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000165b938db) */
/* WARNING: Removing unreachable block (ram,0x000156d42c03) */
/* WARNING: Removing unreachable block (ram,0x000156d42c09) */
/* WARNING: Removing unreachable block (ram,0x000165e29986) */
/* WARNING: Removing unreachable block (ram,0x000156d42ca4) */
/* WARNING: Removing unreachable block (ram,0x000156d42caa) */
/* WARNING: Removing unreachable block (ram,0x000156d42caf) */
/* WARNING: Removing unreachable block (ram,0x000156f88976) */
/* WARNING: Removing unreachable block (ram,0x000156f8897c) */
/* WARNING: Removing unreachable block (ram,0x00014d8329a0) */
/* WARNING: Removing unreachable block (ram,0x00014d832a22) */
/* WARNING: Removing unreachable block (ram,0x00014d83291d) */
/* WARNING: Removing unreachable block (ram,0x00014d832995) */
/* WARNING: Removing unreachable block (ram,0x00014d83299a) */
/* WARNING: Removing unreachable block (ram,0x000161af14db) */
/* WARNING: Removing unreachable block (ram,0x00014d832a27) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8328a2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R15;
  
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0xa0),param_1)) {
    uVar5 = *(ulonglong *)(unaff_RDI + -0x90) | param_1;
    uVar2 = ~(*(ulonglong *)(unaff_RDI + -0x90) & param_1);
    lVar4 = (uVar5 - (uVar2 | uVar5)) + uVar2;
    plVar1 = (longlong *)(lVar4 + -8);
    *plVar1 = 0;
    *plVar1 = *plVar1 + unaff_R15;
    *(undefined8 *)(lVar4 + -0x10) = param_3;
    *(undefined8 *)(lVar4 + -0x18) = param_3;
    *(undefined8 *)(lVar4 + -0x20) = unaff_R12;
    *(undefined1 **)(lVar4 + -0x28) = &LAB_1654898f4;
    return in_RAX;
  }
  uVar3 = FUN_156d42b7d();
  return uVar3;
}



// FUNCTION 14d832b01 FUN_14d832b01 body=148 status=ok
// SIG undefined FUN_14d832b01(void)

/* WARNING: Removing unreachable block (ram,0x00014d832b4b) */

void FUN_14d832b01(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int unaff_EBX;
  
  FUN_14d9b0c7c(param_1,param_2,unaff_EBX - (param_3 ^ 0xffffffff),FUN_14d9b0c7c);
  return;
}



// FUNCTION 14d832b9d FUN_14d832b9d body=184 status=ok
// SIG undefined FUN_14d832b9d(void)

void FUN_14d832b9d(void)

{
  return;
}



// FUNCTION 14d832ed7 FUN_14d832ed7 body=148 status=ok
// SIG undefined FUN_14d832ed7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156af4696) */

void FUN_14d832ed7(void)

{
  return;
}



// FUNCTION 14d8331f7 FUN_14d8331f7 body=133 status=ok
// SIG undefined FUN_14d8331f7(void)

void FUN_14d8331f7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_164905bfc)
            (~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),0x73bafa0c);
  return;
}



// FUNCTION 14d833562 FUN_14d833562 body=121 status=ok
// SIG undefined FUN_14d833562(void)

/* WARNING: Removing unreachable block (ram,0x000165844600) */
/* WARNING: Removing unreachable block (ram,0x0001658445fa) */
/* WARNING: Removing unreachable block (ram,0x000165844605) */
/* WARNING: Removing unreachable block (ram,0x00014d833628) */
/* WARNING: Removing unreachable block (ram,0x00014d8335d8) */
/* WARNING: Removing unreachable block (ram,0x00014d8335de) */
/* WARNING: Removing unreachable block (ram,0x00014d83362b) */
/* WARNING: Removing unreachable block (ram,0x00014d83366c) */
/* WARNING: Removing unreachable block (ram,0x00014d833672) */
/* WARNING: Removing unreachable block (ram,0x000162097a71) */
/* WARNING: Removing unreachable block (ram,0x000162097b00) */
/* WARNING: Removing unreachable block (ram,0x000162097b06) */
/* WARNING: Removing unreachable block (ram,0x000162e59c6d) */
/* WARNING: Removing unreachable block (ram,0x000165844556) */
/* WARNING: Removing unreachable block (ram,0x0001658445ef) */
/* WARNING: Removing unreachable block (ram,0x000162e59cec) */
/* WARNING: Removing unreachable block (ram,0x000162e59cf2) */
/* WARNING: Removing unreachable block (ram,0x0001619eb542) */
/* WARNING: Removing unreachable block (ram,0x0001619eb5e4) */
/* WARNING: Removing unreachable block (ram,0x0001619eb5df) */
/* WARNING: Removing unreachable block (ram,0x0001619eb640) */
/* WARNING: Removing unreachable block (ram,0x0001619eb63b) */
/* WARNING: Removing unreachable block (ram,0x0001619eb66d) */
/* WARNING: Removing unreachable block (ram,0x0001619eb672) */
/* WARNING: Removing unreachable block (ram,0x0001619eb678) */
/* WARNING: Removing unreachable block (ram,0x00016557b638) */
/* WARNING: Removing unreachable block (ram,0x00016557b663) */
/* WARNING: Removing unreachable block (ram,0x00016557b65e) */
/* WARNING: Removing unreachable block (ram,0x00016557b699) */
/* WARNING: Removing unreachable block (ram,0x00016557b69e) */

undefined8 FUN_14d833562(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  *(longlong *)(param_2 + 0x10) = unaff_RDI + 1;
  uVar1 = FUN_1619eb542();
  return uVar1;
}



// FUNCTION 14d8335de FUN_14d8335de body=287 status=ok
// SIG undefined FUN_14d8335de(void)

/* WARNING: Removing unreachable block (ram,0x000165844600) */
/* WARNING: Removing unreachable block (ram,0x00014d833628) */
/* WARNING: Removing unreachable block (ram,0x000162e59cec) */
/* WARNING: Removing unreachable block (ram,0x000162e59cf2) */
/* WARNING: Removing unreachable block (ram,0x0001658445fa) */
/* WARNING: Removing unreachable block (ram,0x000162097b06) */
/* WARNING: Removing unreachable block (ram,0x00014d833672) */

undefined8 FUN_14d8335de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_14dcde213(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                        (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,
                        ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),param_3);
  return uVar1;
}



// FUNCTION 14d8336ff FUN_14d8336ff body=129 status=ok
// SIG undefined FUN_14d8336ff(void)

void FUN_14d8336ff(undefined1 param_1)

{
  undefined1 uVar1;
  char in_AL;
  longlong unaff_RSI;
  longlong lVar2;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  lVar2 = *(longlong *)(&stack0x318fe85a + unaff_RSI) + unaff_R15 + (local_res20 & unaff_R15) * -2;
                    /* WARNING: Read-only address (ram,0x00014d7a5311) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a5311;
  }
  uRam000000014d7a5311 = uVar1;
  UNLOCK();
  *(undefined8 *)(lVar2 + -8) = 0x475c862;
  *(undefined8 *)(lVar2 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar2 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d83379c FUN_14d83379c body=120 status=ok
// SIG undefined FUN_14d83379c(void)

undefined8 FUN_14d83379c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d833816 FUN_14d833816 body=153 status=ok
// SIG undefined FUN_14d833816(void)

void FUN_14d833816(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  FUN_166bb8811(FUN_166bb8811,param_2,local_res8,param_4,
                in_stack_00000018 + param_1 + (in_stack_00000018 & param_1) * -2,
                ~in_stack_00000020 | param_1);
  return;
}



// FUNCTION 14d8338b1 FUN_14d8338b1 body=173 status=ok
// SIG undefined FUN_14d8338b1(void)

void FUN_14d8338b1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  ushort in_AX;
  short *unaff_RDI;
  
  *unaff_RDI = (-0x101 - (in_AX & 0x100 | 0xfeff)) + *unaff_RDI;
  *(undefined8 *)(param_6 + -8) = param_4;
  *(undefined8 *)(param_6 + -0x10) = param_1;
  uVar1 = *(undefined8 *)(param_6 + -0x10);
  *(undefined8 *)(param_6 + -0x10) = uVar1;
  *(undefined8 *)(param_6 + -0x18) = uVar1;
  *(undefined8 *)(param_6 + -0x20) = param_3;
  *(undefined8 *)(param_6 + -0x28) = param_3;
  *(undefined8 *)(param_6 + -0x20) = 0x14d83395e;
  FUN_162ca03c1(FUN_162ca03c1,param_2,*(undefined8 *)(param_6 + -0x28),0x162ca043b);
  return;
}



// FUNCTION 14d833a91 FUN_14d833a91 body=154 status=ok
// SIG undefined FUN_14d833a91(void)

/* WARNING: Removing unreachable block (ram,0x00014d833bb3) */
/* WARNING: Removing unreachable block (ram,0x00014d833bb9) */
/* WARNING: Removing unreachable block (ram,0x0001649fabe1) */
/* WARNING: Removing unreachable block (ram,0x00014d833b2c) */

void FUN_14d833a91(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x98) == 0) {
    (*(code *)0x1623f334d)(0x1623f334d,param_2,param_3);
    return;
  }
  FUN_166d7ae7c();
  return;
}



// FUNCTION 14d833b2c FUN_14d833b2c body=140 status=ok
// SIG undefined FUN_14d833b2c(void)

/* WARNING: Removing unreachable block (ram,0x00014d833bb3) */
/* WARNING: Removing unreachable block (ram,0x00014d833bb9) */
/* WARNING: Removing unreachable block (ram,0x0001649fabe1) */

void FUN_14d833b2c(void)

{
  FUN_1649fabe1();
  return;
}



// FUNCTION 14d833bb9 FUN_14d833bb9 body=46 status=ok
// SIG undefined FUN_14d833bb9(void)

void FUN_14d833bb9(void)

{
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0x40551ec;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d833c79 FUN_14d833c79 body=192 status=ok
// SIG undefined FUN_14d833c79(void)

/* WARNING: Removing unreachable block (ram,0x00014d833ddf) */
/* WARNING: Removing unreachable block (ram,0x000156d9a5a4) */
/* WARNING: Removing unreachable block (ram,0x000165cb7fa1) */

void FUN_14d833c79(void)

{
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong in_stack_00000008;
  ulonglong uStackX_20;
  
  if (&DAT_fffffffffffffff7 >= &stack0xfffffffffffffff8) {
    FUN_156d9a55d(in_stack_00000008,
                  CONCAT71((int7)((ulonglong)ProcessEnvironmentBlock >> 8),
                           *(undefined1 *)((longlong)ProcessEnvironmentBlock + 0x5c)));
    return;
  }
  if (&DAT_fffffffffffffff7 < &stack0xfffffffffffffff8 || &stack0x00000000 == (undefined1 *)0x0) {
    return;
  }
  if (CONCAT62((int6)((ulonglong)in_R10 >> 0x10),(short)in_R10 + 0x4143) == 0) {
    FUN_165cb7ef7();
    return;
  }
  if (*(longlong *)(unaff_R13 + -0x60) < 0) {
    FUN_156e07bad(in_stack_00000008 & uStackX_20,*(undefined8 *)(unaff_R13 + -0x90));
    return;
  }
  FUN_156e07bad(in_stack_00000008 & uStackX_20,*(undefined8 *)(unaff_R13 + -0x90));
  return;
}



// FUNCTION 14d833d3d FUN_14d833d3d body=161 status=ok
// SIG undefined FUN_14d833d3d(void)

/* WARNING: Removing unreachable block (ram,0x00014d833ddf) */
/* WARNING: Removing unreachable block (ram,0x000165cb7fa1) */

void FUN_14d833d3d(ulonglong param_1)

{
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 uStackX_18;
  
  if (CONCAT62((int6)((ulonglong)in_R10 >> 0x10),(short)in_R10 + 0x4143) == 0) {
    FUN_165cb7ef7();
    return;
  }
  if (*(longlong *)(unaff_R13 + -0x60) < 0) {
    FUN_156e07bad(param_1 & uStackX_18,*(undefined8 *)(unaff_R13 + -0x90));
    return;
  }
  FUN_156e07bad(param_1 & uStackX_18,*(undefined8 *)(unaff_R13 + -0x90));
  return;
}



// FUNCTION 14d833ddf FUN_14d833ddf body=140 status=ok
// SIG undefined FUN_14d833ddf(void)

void FUN_14d833ddf(byte param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_stack_00000030;
  
  (*(code *)0x157633ad5)
            ((param_1 + in_stack_00000030) - (param_1 & in_stack_00000030),param_2,
             *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15,0x157633ad5);
  return;
}



// FUNCTION 14d833e6c FUN_14d833e6c body=330 status=ok
// SIG undefined FUN_14d833e6c(void)

undefined8 FUN_14d833e6c(void)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  
  *(ulonglong *)(&stack0xfffffffff4652d58 + unaff_R13) =
       (unaff_RBX ^ 0xffffffffffffffff | *(ulonglong *)(&stack0xfffffffff4652d58 + unaff_R13)) +
       unaff_RBX + 1;
  FUN_14e1f58ea();
  return 0xa92c7c8;
}



// FUNCTION 14d83421c FUN_14d83421c body=1026 status=ok
// SIG undefined FUN_14d83421c(void)

/* WARNING: Removing unreachable block (ram,0x00015732c70f) */
/* WARNING: Removing unreachable block (ram,0x00015732c71b) */
/* WARNING: Removing unreachable block (ram,0x00015732c838) */
/* WARNING: Removing unreachable block (ram,0x00015732c83d) */
/* WARNING: Removing unreachable block (ram,0x00015732c843) */
/* WARNING: Removing unreachable block (ram,0x00015732c848) */
/* WARNING: Removing unreachable block (ram,0x00015732c90d) */
/* WARNING: Removing unreachable block (ram,0x00015732c914) */
/* WARNING: Removing unreachable block (ram,0x00015732c603) */
/* WARNING: Removing unreachable block (ram,0x00014da5fda2) */
/* WARNING: Removing unreachable block (ram,0x00014d8342b1) */
/* WARNING: Removing unreachable block (ram,0x00014d8342b7) */
/* WARNING: Removing unreachable block (ram,0x00014d834348) */
/* WARNING: Removing unreachable block (ram,0x00014d83434e) */
/* WARNING: Removing unreachable block (ram,0x00014d815cd5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d83421c(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x68);
  UNRECOVERED_JUMPTABLE = (code *)FUN_165582b27();
  uVar1 = uVar1 ^ local_res10;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x20) = in_R9;
  *(undefined4 *)(uVar1 - 0x28) = 0x1688d562;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar3 = *(undefined8 *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x28) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x30) = uVar3;
  lVar2 = *(longlong *)(uVar1 + ((*(ulonglong *)(uVar1 - 0x30) ^ 0x5e0a964a) - 0x48824330));
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) + lVar2;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 0x1563ddbca;
                    /* WARNING: Could not recover jumptable at 0x0001563ddbb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}



// FUNCTION 14d8343eb FUN_14d8343eb body=178 status=ok
// SIG undefined FUN_14d8343eb(void)

/* WARNING: Removing unreachable block (ram,0x000160bc59a8) */
/* WARNING: Removing unreachable block (ram,0x00014d834466) */

void FUN_14d8343eb(void)

{
  undefined8 local_res10;
  
  if (0xfffffffffffffffd < 0xffffffffffffffffU - local_res10) {
    return;
  }
  FUN_160bc5919();
  return;
}



// FUNCTION 14d834516 FUN_14d834516 body=142 status=ok
// SIG undefined FUN_14d834516(void)

void FUN_14d834516(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x161596a3f)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14d83463b FUN_14d83463b body=128 status=ok
// SIG undefined FUN_14d83463b(void)

void FUN_14d83463b(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong in_R10;
  
  *(ulonglong *)(in_R10 + 8) =
       ~((*(longlong *)(in_R10 + 8) - (param_4 | *(ulonglong *)(in_R10 + 8))) + param_4);
  (*(code *)0x1619bcc3c)(~unaff_RBP,param_2);
  return;
}



// FUNCTION 14d83472f FUN_14d83472f body=26 status=ok
// SIG undefined FUN_14d83472f(void)

void FUN_14d83472f(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d8347c6 FUN_14d8347c6 body=617 status=ok
// SIG undefined FUN_14d8347c6(void)

/* WARNING: Removing unreachable block (ram,0x00014d834927) */
/* WARNING: Removing unreachable block (ram,0x00014d83487c) */
/* WARNING: Removing unreachable block (ram,0x00014d834921) */
/* WARNING: Removing unreachable block (ram,0x0001649b203d) */
/* WARNING: Removing unreachable block (ram,0x00014d83486c) */

void FUN_14d8347c6(void)

{
  FUN_161dda9e2();
  return;
}



// FUNCTION 14d834b03 FUN_14d834b03 body=180 status=ok
// SIG undefined FUN_14d834b03(void)

/* WARNING: Removing unreachable block (ram,0x000156da1057) */
/* WARNING: Removing unreachable block (ram,0x0001663a5637) */
/* WARNING: Removing unreachable block (ram,0x0001663a563d) */
/* WARNING: Removing unreachable block (ram,0x000156da1047) */
/* WARNING: Removing unreachable block (ram,0x00014d834b97) */
/* WARNING: Removing unreachable block (ram,0x000162dd3736) */
/* WARNING: Removing unreachable block (ram,0x000162dd37cb) */
/* WARNING: Removing unreachable block (ram,0x000162dd37d1) */
/* WARNING: Removing unreachable block (ram,0x000156da0e91) */
/* WARNING: Removing unreachable block (ram,0x000156723e1d) */
/* WARNING: Removing unreachable block (ram,0x00015b9385ba) */
/* WARNING: Removing unreachable block (ram,0x00014d834b9d) */

void FUN_14d834b03(void)

{
  FUN_1663a55bf();
  return;
}



// FUNCTION 14d834d63 FUN_14d834d63 body=638 status=ok
// SIG undefined FUN_14d834d63(void)

void FUN_14d834d63(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x15ba302a4)(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d834e89 FUN_14d834e89 body=172 status=ok
// SIG undefined FUN_14d834e89(void)

void FUN_14d834e89(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14db95d79(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d834fc4 FUN_14d834fc4 body=432 status=ok
// SIG undefined FUN_14d834fc4(void)

/* WARNING: Removing unreachable block (ram,0x000161a82250) */
/* WARNING: Removing unreachable block (ram,0x00014d835035) */
/* WARNING: Removing unreachable block (ram,0x00014d83503b) */
/* WARNING: Removing unreachable block (ram,0x00014d83514f) */
/* WARNING: Removing unreachable block (ram,0x00014d835152) */
/* WARNING: Removing unreachable block (ram,0x000161a8226a) */
/* WARNING: Removing unreachable block (ram,0x000161a8226e) */

undefined8 FUN_14d834fc4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161a82250();
  return uVar1;
}



// FUNCTION 14d83538b FUN_14d83538b body=174 status=ok
// SIG undefined FUN_14d83538b(void)

void FUN_14d83538b(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong unaff_R12;
  ulonglong uVar2;
  ulonglong unaff_retaddr;
  undefined2 in_stack_00000028;
  
  uVar1 = 0;
  if (*(short *)(&stack0xfffffffffdd347e2 + (unaff_retaddr ^ 0x6b1afe4b)) < 0) {
    uVar1 = 0xffffffff;
  }
  uVar2 = 0xffffffffffffffff - (unaff_R12 & param_1);
  FUN_1664cc062(param_1,CONCAT62((int6)((ulonglong)uVar1 >> 0x10),
                                 *(undefined2 *)
                                  (&stack0xfffffffffdd347e2 + (unaff_retaddr ^ 0x6b1afe4b))),
                CONCAT62((int6)(((unaff_R12 | param_1) - (uVar2 | unaff_R12 | param_1)) + uVar2 >>
                               0x10),in_stack_00000028));
  return;
}



// FUNCTION 14d835439 FUN_14d835439 body=44 status=ok
// SIG undefined FUN_14d835439(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c414c) overlaps instruction at (ram,0x00014d7c4148)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c4165) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d835439(uint *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong uVar8;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar11;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  bool bVar12;
  float10 in_ST0;
  short unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  uVar5 = (uint)(short)(unaff_retaddr - (short)*param_1);
  uVar10 = *unaff_RBP;
  puVar11 = (undefined4 *)(ulonglong)((int)unaff_RDI + 5U | *(uint *)(unaff_RDI + -0x19));
  *(float *)(unaff_RSI + 0x6844bb0e) = (float)in_ST0;
  do {
  } while ((POPCOUNT(uVar5 & 0x19) & 1U) == 0);
  uVar9 = (ulonglong)(uVar5 & 0x13bf9619);
  uVar5 = (int)unaff_RSI + 1U &
          *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x25) & *param_1;
  out(*(undefined1 *)(ulonglong)uVar5,(short)param_2);
  *(ulonglong *)(uVar9 - 8) = (ulonglong)(unaff_RBP + 1) & 0xffffffff;
  if ((int)uVar5 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in((short)param_2);
  pbVar6 = (byte *)(uVar9 - 8 & 0xffffffff);
  bVar2 = *pbVar6;
  uVar5 = uVar5 + 1 ^ (uint)uVar10;
  uVar3 = (longlong)*(int *)(param_2 + (ulonglong)(uint)(_DAT_176b5d046 * -0x7f1e9f28) * 8) *
          0x3571af9d;
  uVar8 = uVar3 & 0xffffffff;
  bVar12 = (longlong)(int)uVar3 != uVar3;
  *(undefined2 *)(uVar8 + 0x4dd40d55) = in_FS;
  if (bVar12 == (int)uVar5 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar7 = (CONCAT71((int7)((ulonglong)pbVar6 >> 8),(byte)pbVar6 & bVar2) + -0x14a01e3a) -
          (ulonglong)bVar12;
  pbVar6 = (byte *)((ulonglong)uVar5 + 0x7d);
  *pbVar6 = *pbVar6 | (byte)uVar8;
  *puVar11 = (int)lVar7;
  uVar4 = in((short)uVar8);
  pbVar6 = (byte *)(CONCAT71((int7)((ulonglong)lVar7 >> 8),uVar4) + -0x47 + uVar8 * 4);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)param_1;
  if (CARRY1(bVar2,(byte)param_1) || *pbVar6 == 0) {
    pcVar1 = (char *)((longlong)puVar11 + -0x13);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8354fd FUN_14d8354fd body=38 status=ok
// SIG undefined FUN_14d8354fd(void)

void FUN_14d8354fd(void)

{
  return;
}



// FUNCTION 14d83557d FUN_14d83557d body=163 status=ok
// SIG undefined FUN_14d83557d(void)

/* WARNING: Removing unreachable block (ram,0x00014d835605) */

void FUN_14d83557d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *in_R10 = ~*in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = *in_R10 & 0xfeff;
  *in_R10 = ~*in_R10;
  *in_R10 = ~*in_R10;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  FUN_1664cb685(unaff_retaddr,param_2,param_3,FUN_1664cb685);
  return;
}



// FUNCTION 14d83576b FUN_14d83576b body=338 status=ok
// SIG undefined FUN_14d83576b(void)

void FUN_14d83576b(void)

{
  FUN_15b6f1ec5();
  return;
}



// FUNCTION 14d8357fd FUN_14d8357fd body=355 status=ok
// SIG undefined FUN_14d8357fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d83589f) */
/* WARNING: Removing unreachable block (ram,0x00016111430e) */
/* WARNING: Removing unreachable block (ram,0x00014d8358a5) */
/* WARNING: Removing unreachable block (ram,0x00014d835950) */
/* WARNING: Removing unreachable block (ram,0x00014d835955) */
/* WARNING: Removing unreachable block (ram,0x00014d83595b) */
/* WARNING: Removing unreachable block (ram,0x00014d835960) */

void FUN_14d8357fd(ulonglong param_1)

{
  longlong unaff_RSI;
  longlong unaff_retaddr;
  longlong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_RSI) = 0;
  *(longlong *)((longlong)local_res10 + unaff_RSI) =
       *(longlong *)((longlong)local_res10 + unaff_RSI) + unaff_retaddr;
  local_res10[1] = 0xffffffffffffffff - (local_res10[1] & param_1) & (local_res10[1] | param_1);
  FUN_16111430e();
  return;
}



// FUNCTION 14d835960 FUN_14d835960 body=151 status=ok
// SIG undefined FUN_14d835960(void)

void FUN_14d835960(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = (~param_4 + param_4) - (param_4 ^ 0xffffffffffffffff);
  FUN_16184ead1((char)param_1,uVar1,FUN_16184ead1,
                (~param_4 & uVar1) + *(longlong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d835ab5 FUN_14d835ab5 body=157 status=ok
// SIG undefined FUN_14d835ab5(void)

/* WARNING: Removing unreachable block (ram,0x00014d835b4e) */
/* WARNING: Removing unreachable block (ram,0x00014d835b54) */
/* WARNING: Removing unreachable block (ram,0x00014d835b5f) */

void FUN_14d835ab5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165f89c75(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d835b5f FUN_14d835b5f body=12 status=ok
// SIG undefined FUN_14d835b5f(void)

void FUN_14d835b5f(void)

{
  return;
}



// FUNCTION 14d835ca0 FUN_14d835ca0 body=163 status=ok
// SIG undefined FUN_14d835ca0(void)

void FUN_14d835ca0(void)

{
  (*(code *)&LAB_15b31cba1)();
  return;
}



// FUNCTION 14d835e85 FUN_14d835e85 body=104 status=ok
// SIG undefined FUN_14d835e85(void)

void FUN_14d835e85(void)

{
  return;
}



// FUNCTION 14d835f9d FUN_14d835f9d body=2 status=ok
// SIG undefined FUN_14d835f9d(void)

void FUN_14d835f9d(void)

{
  return;
}



// FUNCTION 14d83600c FUN_14d83600c body=149 status=ok
// SIG undefined FUN_14d83600c(void)

void FUN_14d83600c(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  uVar1 = param_1 << 1 | (ulonglong)(param_1 < 0);
  uVar3 = *(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP;
  uVar2 = *(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP;
  (*(code *)0x166b567ff)
            (param_2 - ((-2 - (uVar1 | 0xfffffffffffffffe)) + uVar1),
             -uVar2 - (~(uVar3 - (~uVar2 | uVar3)) + 2),param_3,0x166b567ff);
  return;
}



// FUNCTION 14d836149 FUN_14d836149 body=715 status=ok
// SIG undefined FUN_14d836149(void)

/* WARNING: Removing unreachable block (ram,0x00014d8361a5) */

void FUN_14d836149(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 unaff_R13D;
  undefined4 unaff_000000ac;
  ulonglong unaff_R15;
  undefined1 *puStackX_8;
  ulonglong local_res10;
  
  uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 - (char)unaff_R13D);
  lVar2 = FUN_166bcb119(uVar3,*(undefined8 *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x38),
                        *(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x88) ^ unaff_R15,
                        *(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x60) ^ unaff_R15);
  *(undefined4 *)((longlong)&puStackX_8 + lVar2) = 0xffffffff;
  uVar1 = *(ulonglong *)
           (FUN_166bcb119 +
           ~(~((ulonglong)puStackX_8 & 0xffffffffbcf59bfe) &
            ((ulonglong)puStackX_8 | 0xffffffffbcf59bfe)));
  puStackX_8 = &LAB_14d83626e;
  local_res10 = uVar3;
  (*(code *)0x165fb56f1)
            (uVar3,CONCAT62((int6)(uVar1 >> 0x10),(short)uVar1 << 7),
             uVar1 + uVar3 + (uVar1 & uVar3) * -2,0x58c08b4c5ead48ff);
  return;
}



// FUNCTION 14d836450 FUN_14d836450 body=132 status=ok
// SIG undefined FUN_14d836450(void)

void FUN_14d836450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b2ef4c5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8364d5 FUN_14d8364d5 body=155 status=ok
// SIG undefined FUN_14d8364d5(void)

/* WARNING: Removing unreachable block (ram,0x00014d83655c) */
/* WARNING: Removing unreachable block (ram,0x00014d836562) */
/* WARNING: Removing unreachable block (ram,0x00014d836567) */

void FUN_14d8364d5(void)

{
  return;
}



// FUNCTION 14d8365f3 FUN_14d8365f3 body=162 status=ok
// SIG undefined FUN_14d8365f3(void)

void FUN_14d8365f3(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_164b07105(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                      *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14d8367ba FUN_14d8367ba body=304 status=ok
// SIG undefined FUN_14d8367ba(void)

/* WARNING: Removing unreachable block (ram,0x00014d836841) */
/* WARNING: Removing unreachable block (ram,0x00014d836847) */
/* WARNING: Removing unreachable block (ram,0x00014d83685b) */
/* WARNING: Removing unreachable block (ram,0x00014d83685f) */

void FUN_14d8367ba(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_156dcf64a(param_1,*(ulonglong *)(unaff_RDI + unaff_RSI) + param_1 +
                        (*(ulonglong *)(unaff_RDI + unaff_RSI) & param_1) * -2,param_3,
                0xffffffffb3d3914a);
  return;
}



// FUNCTION 14d8368c4 FUN_14d8368c4 body=159 status=ok
// SIG undefined FUN_14d8368c4(void)

void FUN_14d8368c4(void)

{
  FUN_164f0b9b0();
  return;
}



// FUNCTION 14d836afb FUN_14d836afb body=336 status=ok
// SIG undefined FUN_14d836afb(void)

void FUN_14d836afb(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res10 [24];
  
  FUN_156be8816(param_1,param_2,local_res10);
  FUN_166460de6();
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d836dea FUN_14d836dea body=142 status=ok
// SIG undefined FUN_14d836dea(void)

void FUN_14d836dea(void)

{
  FUN_160f2b6b7();
  return;
}



// FUNCTION 14d836f1f FUN_14d836f1f body=141 status=ok
// SIG undefined FUN_14d836f1f(void)

void FUN_14d836f1f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161435689(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2);
  return;
}



// FUNCTION 14d837225 FUN_14d837225 body=427 status=ok
// SIG undefined FUN_14d837225(void)

/* WARNING: Removing unreachable block (ram,0x000162b55416) */
/* WARNING: Removing unreachable block (ram,0x000162b5535e) */
/* WARNING: Removing unreachable block (ram,0x000162b55369) */
/* WARNING: Removing unreachable block (ram,0x000162b5540b) */
/* WARNING: Removing unreachable block (ram,0x000162b55411) */
/* WARNING: Removing unreachable block (ram,0x0001651e2e7f) */
/* WARNING: Removing unreachable block (ram,0x0001651e2e85) */
/* WARNING: Removing unreachable block (ram,0x0001651e2e8a) */
/* WARNING: Removing unreachable block (ram,0x000162b55364) */
/* WARNING: Removing unreachable block (ram,0x00014d8372c0) */
/* WARNING: Removing unreachable block (ram,0x00014d837356) */
/* WARNING: Removing unreachable block (ram,0x000162b552cf) */
/* WARNING: Removing unreachable block (ram,0x00014d83735c) */

undefined8 FUN_14d837225(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x68) == param_1) {
    uVar1 = FUN_160f44d76();
    return uVar1;
  }
  uVar1 = FUN_160f44d76();
  return uVar1;
}



// FUNCTION 14d837646 FUN_14d837646 body=157 status=ok
// SIG undefined FUN_14d837646(void)

void FUN_14d837646(longlong *param_1)

{
  longlong unaff_RDI;
  longlong lVar1;
  undefined8 uStackX_8;
  
  lVar1 = *(longlong *)(unaff_RDI + -0x50);
  FUN_1667aaa17();
  *param_1 = 0;
  *param_1 = *param_1 + lVar1;
  FUN_14d7a83f2(uStackX_8);
  return;
}



// FUNCTION 14d8376e6 FUN_14d8376e6 body=32 status=ok
// SIG undefined FUN_14d8376e6(void)

void FUN_14d8376e6(longlong *param_1)

{
  longlong in_R11;
  undefined8 uStackX_8;
  
  *param_1 = 0;
  *param_1 = *param_1 + in_R11;
  FUN_14d7a83f2(uStackX_8);
  return;
}



// FUNCTION 14d837793 FUN_14d837793 body=148 status=ok
// SIG undefined FUN_14d837793(void)

void FUN_14d837793(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R12;
  FUN_166b3fe15(*(undefined8 *)(local_res18 + -8),uVar1);
  return;
}



// FUNCTION 14d837828 FUN_14d837828 body=171 status=ok
// SIG undefined FUN_14d837828(void)

/* WARNING: Removing unreachable block (ram,0x00014d83789c) */

ulonglong FUN_14d837828(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong unaff_RBP;
  undefined8 in_R9;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong unaff_retaddr;
  
  puVar2 = (ulonglong *)(&stack0xfffffffff22141c5 + unaff_retaddr);
  *puVar2 = 0;
  *puVar2 = *puVar2;
  *(undefined8 *)(&stack0xfffffffff22141bd + unaff_retaddr) = unaff_R13;
  *(ulonglong *)(&stack0xfffffffff22141b5 + unaff_retaddr) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)*puVar2 < 0) * 0x80 |
       (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(code **)(&stack0xfffffffff22141b5 + unaff_retaddr) = FUN_14d8378d5;
  FUN_162608974();
  uVar1 = *(ulonglong *)(FUN_162608974 + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffff22141b5 + unaff_retaddr) = in_R9;
  *(undefined8 *)(&stack0xfffffffff22141ad + unaff_retaddr) = in_R9;
  *(undefined8 *)(&stack0xfffffffff22141a5 + unaff_retaddr) = in_R9;
  *(code **)(&stack0xfffffffff22141b5 + unaff_retaddr) = FUN_14d83797d;
  *(undefined1 **)(&stack0xfffffffff22141ad + unaff_retaddr) = &LAB_14dc086a1;
  return (~(0xffffffffffffffff - (uVar1 & unaff_R15)) | ~uVar1 & ~unaff_R15) ^ 0xffffffffffffffff;
}



// FUNCTION 14d8378d5 FUN_14d8378d5 body=167 status=ok
// SIG undefined FUN_14d8378d5(void)

ulonglong FUN_14d8378d5(void)

{
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return (~(0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + unaff_RBP) & unaff_R15)) |
         ~*(ulonglong *)(unaff_R13 + unaff_RBP) & ~unaff_R15) ^ 0xffffffffffffffff;
}



// FUNCTION 14d83797d FUN_14d83797d body=137 status=ok
// SIG undefined FUN_14d83797d(void)

void FUN_14d83797d(longlong param_1)

{
  int in_R10D;
  uint in_stack_00000008;
  
  *(uint *)(param_1 + 0x7c) = ~*(uint *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | ~in_stack_00000008;
  *(uint *)(param_1 + 0x7c) = ~*(uint *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) << 1;
  *(uint *)(param_1 + 0x7c) = (in_R10D + in_stack_00000008) - *(int *)(param_1 + 0x7c);
  return;
}



// FUNCTION 14d837a99 FUN_14d837a99 body=265 status=ok
// SIG undefined FUN_14d837a99(void)

/* WARNING: Removing unreachable block (ram,0x0001666d2310) */
/* WARNING: Removing unreachable block (ram,0x0001666d2316) */
/* WARNING: Removing unreachable block (ram,0x0001666d231b) */
/* WARNING: Removing unreachable block (ram,0x0001615dc48d) */
/* WARNING: Removing unreachable block (ram,0x0001615dc493) */
/* WARNING: Removing unreachable block (ram,0x0001615dc3f1) */
/* WARNING: Removing unreachable block (ram,0x0001615dc402) */
/* WARNING: Removing unreachable block (ram,0x0001652fe928) */
/* WARNING: Removing unreachable block (ram,0x0001615dc3f7) */
/* WARNING: Removing unreachable block (ram,0x0001666d2332) */
/* WARNING: Removing unreachable block (ram,0x0001666d2335) */
/* WARNING: Removing unreachable block (ram,0x00014d837b27) */

void FUN_14d837a99(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar4 = ~((0xffffffffffffffff - in_RAX | param_3) & (~param_3 | in_RAX));
  uVar1 = *(ulonglong *)(unaff_R12 + -0x28);
  lVar3 = (in_RAX - 1) - ~(~uVar1 & ~in_RAX | uVar1);
  if (-1 < lVar3) {
    FUN_1615dc361();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_1646eeabf((~(~in_RAX & uVar2) + uVar2) - in_RAX & (~uVar2 | in_RAX) ^ 0xffffffffffffffff);
  FUN_15b7ba379(0x797e071f,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
                 (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15)),
                ~(~(lVar3 + 1U | ~((~(uVar1 & in_RAX) + in_RAX) - ~uVar1)) & (~uVar4 | unaff_R15)));
  return;
}



// FUNCTION 14d837ba6 FUN_14d837ba6 body=95 status=ok
// SIG undefined FUN_14d837ba6(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d837ba6(void)

{
  int iVar1;
  char cVar2;
  uint in_EAX;
  int unaff_EBX;
  undefined8 *puVar3;
  int *unaff_RSI;
  char unaff_DIL;
  undefined8 *unaff_retaddr;
  undefined8 local_res8 [4];
  
  puVar3 = local_res8;
  cVar2 = '\x1a';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_retaddr;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  iVar1 = *(int *)(ulonglong)(in_EAX & 0x3eb3867f);
  if (-1 < (int)unaff_RSI - iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW4((int)unaff_RSI,iVar1)) {
    return unaff_DIL + '\x06';
  }
  if (unaff_EBX >> 0x12 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(ulonglong)(in_EAX & 0x3eb3867f) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d837e4b FUN_14d837e4b body=160 status=ok
// SIG undefined FUN_14d837e4b(void)

void FUN_14d837e4b(void)

{
  ulonglong unaff_RSI;
  
  *(undefined4 *)(&stack0x30077d11 + -~unaff_RSI) = 0xffffffff;
  return;
}



// FUNCTION 14d837eec FUN_14d837eec body=155 status=ok
// SIG undefined FUN_14d837eec(void)

void FUN_14d837eec(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  (*(code *)0x15b9cfe44)(param_1,param_2,0x9a1e3f6,param_4,*(undefined8 *)(unaff_R13 + param_3));
  return;
}



// FUNCTION 14d8380e9 FUN_14d8380e9 body=286 status=ok
// SIG undefined FUN_14d8380e9(void)

/* WARNING: Removing unreachable block (ram,0x00014d838185) */

void FUN_14d8380e9(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R14;
  
  uVar3 = unaff_RSI[1];
  unaff_RSI[1] = param_3;
  *unaff_RSI = param_3;
  unaff_RSI[1] = *(undefined8 *)(unaff_RDI + -8);
  uVar4 = *unaff_RSI;
  *unaff_RSI = *(ulonglong *)(unaff_RDI + -0x98);
  puVar1 = unaff_RSI + -1;
  *puVar1 = in_RAX;
  unaff_RSI[-2] = uVar3;
  uVar2 = *(undefined8 *)(unaff_RDI + -0xa0);
  uVar3 = unaff_RSI[-2];
  uVar6 = *puVar1;
  *puVar1 = param_2;
  unaff_RSI[-2] = uVar2;
  uVar5 = *puVar1;
  *puVar1 = uVar6;
  uVar6 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI & param_1;
  *unaff_RSI = *unaff_RSI << 1;
  uVar6 = (uVar6 + param_1) - *unaff_RSI;
  *unaff_RSI = uVar6;
  if (-1 < (longlong)uVar6) {
    FUN_14daaebc7();
    return;
  }
  *puVar1 = uVar3;
  uVar3 = unaff_RSI[1];
  unaff_RSI[1] = unaff_RSI[1] & param_1;
  unaff_RSI[1] = ~unaff_RSI[1];
  unaff_RSI[1] = unaff_RSI[1] & (uVar3 | param_1);
  *puVar1 = unaff_R14;
  uVar3 = unaff_RSI[2];
  unaff_RSI[2] = unaff_RSI[2] & param_1;
  unaff_RSI[2] = ~unaff_RSI[2];
  unaff_RSI[2] = unaff_RSI[2] & (~-uVar3 + 1 | param_1);
  uVar3 = *puVar1;
  *puVar1 = uVar5;
  uVar5 = *puVar1;
  uVar6 = *unaff_RSI;
  *unaff_RSI = unaff_RBX;
  *puVar1 = 0;
  *puVar1 = *puVar1 - uVar3;
  *puVar1 = -*puVar1;
  unaff_RSI[-2] = in_R10;
  unaff_RSI[-3] = in_R10;
  unaff_RSI[-2] = (ulonglong)FUN_14daaec6d;
  FUN_16611dbd5(uVar6,uVar5,uVar4);
  return;
}



// FUNCTION 14d838208 FUN_14d838208 body=318 status=ok
// SIG undefined FUN_14d838208(void)

/* WARNING: Removing unreachable block (ram,0x00014d838292) */
/* WARNING: Removing unreachable block (ram,0x00014d83829d) */
/* WARNING: Removing unreachable block (ram,0x00014d838298) */

undefined8 FUN_14d838208(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  code *pcVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R14;
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
  byte bVar19;
  ushort local_res8;
  uint6 uStackX_a;
  ulonglong uStackX_10;
  
  uVar6 = *(undefined8 *)(unaff_R12 - 0x68);
  uVar2 = *(undefined8 *)(unaff_R12 - 8);
  uVar5 = FUN_162414727(param_1,~((in_RAX - (param_2 | in_RAX)) + param_2) & unaff_RSI,param_3,
                        FUN_162414727,
                        ~(*(ulonglong *)(unaff_R12 - 0x90) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 - 0x90) | in_RAX));
  *(undefined8 *)(unaff_RBX + ~unaff_R12) = uVar5;
  puVar1 = (undefined8 *)(uStackX_10 ^ param_1);
  uVar3 = (-0x101 - (local_res8 | 0xfeff)) + local_res8;
  bVar15 = (uVar3 & 0x4000) != 0;
  bVar14 = (uVar3 & 0x800) != 0;
  bVar13 = (uVar3 & 0x200) != 0;
  bVar12 = (uVar3 & 0x100) != 0;
  bVar11 = (uVar3 & 0x80) != 0;
  bVar10 = (uVar3 & 0x40) != 0;
  bVar9 = (uVar3 & 0x10) != 0;
  bVar8 = (uVar3 & 4) != 0;
  bVar7 = (uVar3 & 1) != 0;
  bVar19 = (uStackX_a & 0x20) != 0;
  bVar16 = (uStackX_a & 4) != 0;
  bVar18 = 0;
  bVar17 = 0;
  pcVar4 = (code *)swi(0x2e);
  uVar6 = (*pcVar4)(uVar6);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  puVar1[-2] = uVar6;
  *(undefined4 *)(puVar1 + -2) = 0x50ff1cb;
  *(undefined4 *)((longlong)puVar1 - 0xc) = 0;
  puVar1[-2] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
               (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
               (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
               (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
               (ulonglong)(bVar8 & 1) * 4 | (ulonglong)(bVar7 & 1) |
               (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
               (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
  puVar1[-3] = unaff_R14;
  puVar1[-4] = in_R11;
  puVar1[-5] = 0x1577e9497;
  uVar6 = FUN_1615560cf();
  puVar1[-4] = in_R10;
  puVar1[-5] = in_R10;
  puVar1[-4] = FUN_165c7153c;
  return uVar6;
}



// FUNCTION 14d83834c FUN_14d83834c body=147 status=ok
// SIG undefined FUN_14d83834c(void)

void FUN_14d83834c(undefined1 param_1,undefined8 param_2)

{
  FUN_1616a003e(param_1,param_2,FUN_1616a003e,0);
  return;
}



// FUNCTION 14d8383e1 FUN_14d8383e1 body=315 status=ok
// SIG undefined FUN_14d8383e1(void)

/* WARNING: Removing unreachable block (ram,0x00014d838485) */
/* WARNING: Removing unreachable block (ram,0x00014d8384da) */

void FUN_14d8383e1(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R12 + -0x48) ^ in_RAX)) {
    FUN_15b0bd475(in_RAX ^ 0xffffffffffffffff,param_2);
    return;
  }
  FUN_15b0d734f();
  return;
}



// FUNCTION 14d8385a2 FUN_14d8385a2 body=285 status=ok
// SIG undefined FUN_14d8385a2(void)

/* WARNING: Removing unreachable block (ram,0x00015af98909) */

void FUN_14d8385a2(void)

{
  return;
}



// FUNCTION 14d838726 FUN_14d838726 body=10 status=ok
// SIG undefined FUN_14d838726(void)

undefined8 FUN_14d838726(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8387c2 FUN_14d8387c2 body=128 status=ok
// SIG undefined FUN_14d8387c2(void)

void FUN_14d8387c2(void)

{
  return;
}



// FUNCTION 14d838880 FUN_14d838880 body=134 status=ok
// SIG undefined FUN_14d838880(void)

void FUN_14d838880(void)

{
  FUN_161a47e5b(8);
  return;
}



// FUNCTION 14d838908 FUN_14d838908 body=179 status=ok
// SIG undefined FUN_14d838908(void)

undefined8 FUN_14d838908(void)

{
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x5f8bc2ec + -(~in_RAX + 2)) = unaff_RBX;
  return in_stack_00000010;
}



// FUNCTION 14d838a56 FUN_14d838a56 body=283 status=ok
// SIG undefined FUN_14d838a56(void)

void FUN_14d838a56(void)

{
  ulonglong in_R9;
  ulonglong unaff_R15;
  
  FUN_14df02034();
  FUN_165a8fc3d(in_R9,in_R9 & unaff_R15,FUN_165a8fc3d,in_R9);
  return;
}



// FUNCTION 14d838b71 FUN_14d838b71 body=9 status=ok
// SIG undefined FUN_14d838b71(void)

void FUN_14d838b71(void)

{
  return;
}



// FUNCTION 14d838d71 FUN_14d838d71 body=596 status=ok
// SIG undefined FUN_14d838d71(void)

/* WARNING: Removing unreachable block (ram,0x00015b9dce14) */
/* WARNING: Removing unreachable block (ram,0x00014d838e41) */
/* WARNING: Removing unreachable block (ram,0x00014d838df7) */
/* WARNING: Removing unreachable block (ram,0x00014d838dfd) */
/* WARNING: Removing unreachable block (ram,0x00014d838e43) */
/* WARNING: Removing unreachable block (ram,0x00014d838eae) */
/* WARNING: Removing unreachable block (ram,0x00014d838ec1) */
/* WARNING: Removing unreachable block (ram,0x00014d838ed5) */
/* WARNING: Removing unreachable block (ram,0x00014d838ee6) */
/* WARNING: Removing unreachable block (ram,0x00014d838f16) */
/* WARNING: Removing unreachable block (ram,0x00016651b7eb) */
/* WARNING: Removing unreachable block (ram,0x00014d838f1c) */
/* WARNING: Removing unreachable block (ram,0x00014d838fbc) */
/* WARNING: Removing unreachable block (ram,0x00014d838fc1) */
/* WARNING: Removing unreachable block (ram,0x00014d838fc7) */
/* WARNING: Removing unreachable block (ram,0x00014d838fd2) */
/* WARNING: Removing unreachable block (ram,0x00015b9dcd66) */
/* WARNING: Removing unreachable block (ram,0x00015b9dce0e) */
/* WARNING: Removing unreachable block (ram,0x00015b9dce19) */
/* WARNING: Removing unreachable block (ram,0x00015b9dce09) */
/* WARNING: Removing unreachable block (ram,0x000165d110f7) */
/* WARNING: Removing unreachable block (ram,0x000165d1117a) */
/* WARNING: Removing unreachable block (ram,0x000165d11180) */
/* WARNING: Removing unreachable block (ram,0x000165d11185) */
/* WARNING: Removing unreachable block (ram,0x000165d1118b) */
/* WARNING: Removing unreachable block (ram,0x000165d11190) */
/* WARNING: Removing unreachable block (ram,0x000165ca352a) */
/* WARNING: Removing unreachable block (ram,0x000165ca35ae) */
/* WARNING: Removing unreachable block (ram,0x000162ab1ab4) */
/* WARNING: Removing unreachable block (ram,0x000162ab1b5d) */
/* WARNING: Removing unreachable block (ram,0x000162ab1b63) */
/* WARNING: Removing unreachable block (ram,0x000166c87a2a) */
/* WARNING: Removing unreachable block (ram,0x000165ca35b4) */
/* WARNING: Removing unreachable block (ram,0x000165ca3641) */
/* WARNING: Removing unreachable block (ram,0x000165ca3646) */
/* WARNING: Removing unreachable block (ram,0x000165ca364c) */
/* WARNING: Removing unreachable block (ram,0x0001564e328f) */
/* WARNING: Removing unreachable block (ram,0x00014d8390ef) */
/* WARNING: Removing unreachable block (ram,0x00014d8390f5) */

undefined8 FUN_14d838d71(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x15ba40ea7)(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d838fd2 FUN_14d838fd2 body=445 status=ok
// SIG undefined FUN_14d838fd2(void)

/* WARNING: Removing unreachable block (ram,0x00015b9dce14) */
/* WARNING: Removing unreachable block (ram,0x00014d8390ef) */
/* WARNING: Removing unreachable block (ram,0x00014d8390f5) */
/* WARNING: Removing unreachable block (ram,0x000165d11190) */
/* WARNING: Removing unreachable block (ram,0x000165ca364c) */
/* WARNING: Removing unreachable block (ram,0x00015b9dce0e) */
/* WARNING: Removing unreachable block (ram,0x000165d1117a) */
/* WARNING: Removing unreachable block (ram,0x000165d11180) */
/* WARNING: Removing unreachable block (ram,0x000162ab1b63) */
/* WARNING: Removing unreachable block (ram,0x000165d11185) */
/* WARNING: Removing unreachable block (ram,0x000165ca35b4) */
/* WARNING: Removing unreachable block (ram,0x000165ca3641) */
/* WARNING: Removing unreachable block (ram,0x0001564e328f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d838fd2(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = FUN_1614ab8f9(param_1,param_2 + unaff_R15 + (param_2 & unaff_R15) * -2);
  uVar2 = FUN_16199e8da(*(ulonglong *)(unaff_R12 + -0x58) + uVar1 +
                        (*(ulonglong *)(unaff_R12 + -0x58) & uVar1) * -2,
                        ~(*(ulonglong *)(unaff_R12 + -0x78) & uVar1) &
                        (*(ulonglong *)(unaff_R12 + -0x78) | uVar1));
  return uVar2;
}



// FUNCTION 14d83923c FUN_14d83923c body=130 status=ok
// SIG undefined FUN_14d83923c(void)

void FUN_14d83923c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R10;
  
  FUN_162a43ba9((char)param_1,0xffffffffffffff00,param_3,
                ~((~param_1 | *(ulonglong *)(in_R10 + -0x40)) &
                 (~*(ulonglong *)(in_R10 + -0x40) | param_1)));
  return;
}



// FUNCTION 14d83936e FUN_14d83936e body=68 status=ok
// SIG undefined FUN_14d83936e(void)

undefined8 FUN_14d83936e(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d839427 FUN_14d839427 body=147 status=ok
// SIG undefined FUN_14d839427(void)

void FUN_14d839427(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162f21337((param_1 | ~param_2) & unaff_RSI,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8395dc FUN_14d8395dc body=169 status=ok
// SIG undefined FUN_14d8395dc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014d839673 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8395dc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_160ba8515(param_1,param_2,param_3,FUN_160ba8515);
  return;
}



// FUNCTION 14d8397b8 FUN_14d8397b8 body=74 status=ok
// SIG undefined FUN_14d8397b8(void)

/* WARNING: Removing unreachable block (ram,0x00014dfb4688) */
/* WARNING: Removing unreachable block (ram,0x00014d839848) */
/* WARNING: Removing unreachable block (ram,0x00014dfb4676) */
/* WARNING: Removing unreachable block (ram,0x00014dfb4704) */
/* WARNING: Removing unreachable block (ram,0x00014dfb470f) */
/* WARNING: Removing unreachable block (ram,0x00014dfb470a) */
/* WARNING: Removing unreachable block (ram,0x00014dfb46ff) */
/* WARNING: Removing unreachable block (ram,0x00014d83984e) */

void FUN_14d8397b8(void)

{
  FUN_14dfb4676();
  return;
}



// FUNCTION 14d8398d0 FUN_14d8398d0 body=157 status=ok
// SIG undefined FUN_14d8398d0(void)

void FUN_14d8398d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16104776d(param_1,FUN_16104776d,param_3,0x490d5d99);
  return;
}



// FUNCTION 14d839970 FUN_14d839970 body=465 status=ok
// SIG undefined FUN_14d839970(void)

/* WARNING: Removing unreachable block (ram,0x00014d839a93) */
/* WARNING: Removing unreachable block (ram,0x00014d839a9e) */
/* WARNING: Removing unreachable block (ram,0x00014d839aad) */
/* WARNING: Removing unreachable block (ram,0x00014d839a05) */
/* WARNING: Removing unreachable block (ram,0x00014d839a0b) */
/* WARNING: Removing unreachable block (ram,0x000165b4227f) */
/* WARNING: Removing unreachable block (ram,0x000165b422fd) */
/* WARNING: Removing unreachable block (ram,0x000165b42303) */
/* WARNING: Removing unreachable block (ram,0x000162c37ae3) */
/* WARNING: Removing unreachable block (ram,0x000162c37b3f) */
/* WARNING: Removing unreachable block (ram,0x000162c37b42) */
/* WARNING: Removing unreachable block (ram,0x00014d839a99) */

void FUN_14d839970(void)

{
  return;
}



// FUNCTION 14d839be8 FUN_14d839be8 body=160 status=ok
// SIG undefined FUN_14d839be8(void)

void FUN_14d839be8(void)

{
  longlong *plVar1;
  longlong unaff_RBX;
  undefined8 in_R9;
  longlong lVar2;
  undefined8 in_R11;
  undefined8 local_res10;
  
  *(undefined8 *)(unaff_RBX + -8) = in_R11;
  *(undefined8 *)(unaff_RBX + -0x10) = *(undefined8 *)(unaff_RBX + -8);
  *(undefined8 *)(unaff_RBX + -0x18) = in_R9;
  *(undefined8 *)(unaff_RBX + -0x20) = local_res10;
  *(undefined4 *)(unaff_RBX + -0x20) = 0x2e189f9d;
  *(int *)(unaff_RBX + -0x20) = *(int *)(unaff_RBX + -0x20) + 0x54d31f86;
  *(undefined4 *)(unaff_RBX + -0x1c) = 0xffffffff;
  lVar2 = *(longlong *)(unaff_RBX + -0x20) + 0x7d1440e5;
  *(undefined8 *)(unaff_RBX + -0x10 + lVar2) = 0;
  plVar1 = (longlong *)(unaff_RBX + -0x10 + lVar2);
  *plVar1 = *plVar1 + 0x1574673ce;
  FUN_1574673a8();
  return;
}



// FUNCTION 14d839d2b FUN_14d839d2b body=218 status=ok
// SIG undefined FUN_14d839d2b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d839dcb) overlaps instruction at (ram,0x00014d839dca)
    */
/* WARNING: Removing unreachable block (ram,0x00014d839dd9) */
/* WARNING: Removing unreachable block (ram,0x00014d839dae) */
/* WARNING: Removing unreachable block (ram,0x00014d839dcb) */
/* WARNING: Removing unreachable block (ram,0x00014d839dca) */

void FUN_14d839d2b(void)

{
  undefined8 *puVar1;
  undefined3 uVar2;
  short in_AX;
  undefined8 unaff_RBP;
  short *unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_R12;
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
  bool bVar14;
  ulonglong uVar15;
  ushort unaff_retaddr;
  undefined4 in_stack_00000008;
  undefined8 local_res10;
  ulonglong local_res20;
  longlong in_stack_00000028;
  
  *unaff_RSI = (-0x101 - (in_AX - ~unaff_retaddr)) + *unaff_RSI;
  uVar2 = SegmentLimit(in_stack_00000008);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBP;
  puVar1 = (undefined8 *)(in_stack_00000028 + -0x10);
  *puVar1 = unaff_RBP;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 |
       (ulonglong)((byte)((uint3)uVar2 >> 0x10) & 1) * 0x40 |
       (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((local_res20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res20 & 0x40000) != 0) * 0x40000;
  uVar15 = *(ulonglong *)(in_stack_00000028 + -0x18);
  bVar12 = (uVar15 & 0x4000) != 0;
  bVar11 = (uVar15 & 0x800) != 0;
  bVar10 = (uVar15 & 0x400) != 0;
  bVar9 = (uVar15 & 0x200) != 0;
  bVar8 = (uVar15 & 0x100) != 0;
  bVar7 = (uVar15 & 0x80) != 0;
  bVar6 = (uVar15 & 0x40) != 0;
  bVar5 = (uVar15 & 0x10) != 0;
  bVar4 = (uVar15 & 4) != 0;
  bVar3 = (uVar15 & 1) != 0;
  bVar14 = (uVar15 & 0x200000) != 0;
  bVar13 = (uVar15 & 0x40000) != 0;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
       (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x100 | (ulonglong)bVar7 * 0x80 |
       (ulonglong)bVar6 * 0x40 | (ulonglong)bVar5 * 0x10 | (ulonglong)bVar4 * 4 | (ulonglong)bVar3 |
       (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_R12;
  *(ulonglong *)(in_stack_00000028 + -0x30) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x800 | (ulonglong)bVar10 * 0x400 |
       (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x100 | (ulonglong)bVar7 * 0x80 |
       (ulonglong)bVar6 * 0x40 | (ulonglong)bVar5 * 0x10 | (ulonglong)bVar4 * 4 | (ulonglong)bVar3 |
       (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x4ad9794;
  *puVar1 = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *puVar1 = 0x156ef2e25;
  return;
}



// FUNCTION 14d839e34 FUN_14d839e34 body=157 status=ok
// SIG undefined FUN_14d839e34(void)

void FUN_14d839e34(void)

{
  (*(code *)&LAB_1626c74ba)();
  return;
}



// FUNCTION 14d839ed1 FUN_14d839ed1 body=329 status=ok
// SIG undefined FUN_14d839ed1(void)

void FUN_14d839ed1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1653cf9ca(FUN_1653cf9ca,param_2,param_3,param_4);
  FUN_15693ea60();
  return;
}



// FUNCTION 14d83a01b FUN_14d83a01b body=142 status=ok
// SIG undefined FUN_14d83a01b(void)

/* WARNING: Removing unreachable block (ram,0x00014d83a0a9) */

void FUN_14d83a01b(void)

{
  return;
}



// FUNCTION 14d83a0a9 FUN_14d83a0a9 body=154 status=ok
// SIG undefined FUN_14d83a0a9(void)

void FUN_14d83a0a9(void)

{
  return;
}



// FUNCTION 14d83a1df FUN_14d83a1df body=160 status=ok
// SIG undefined FUN_14d83a1df(void)

void FUN_14d83a1df(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1646c8bfa(FUN_1646c8bfa,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d83a306 FUN_14d83a306 body=165 status=ok
// SIG undefined FUN_14d83a306(void)

void FUN_14d83a306(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_15b44d475)(param_1,param_2,param_3,*(undefined8 *)(unaff_RDI + -0x98));
  return;
}



// FUNCTION 14d83a444 FUN_14d83a444 body=328 status=ok
// SIG undefined FUN_14d83a444(void)

void FUN_14d83a444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  plVar1 = (longlong *)(unaff_RBP + -8);
  *plVar1 = *(longlong *)(unaff_R13 + -0x68);
  *plVar1 = in_R11;
  *(undefined8 *)(unaff_RBP + -0x10) = unaff_R14;
  *(ulonglong *)(unaff_RBP + -0x18) = *(ulonglong *)(unaff_R13 + -0x50);
  uVar2 = *(ulonglong *)(unaff_RBP + -0x18);
  uVar3 = *(undefined8 *)(unaff_RBP + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBX;
  *plVar1 = -*plVar1;
  *(undefined8 *)(unaff_RBP + -0x10) = 0x14d83a4e3;
  uVar5 = FUN_166abe471();
  *(undefined8 *)(unaff_RBP + -0x10) = uVar3;
  lVar4 = *plVar1;
  *plVar1 = unaff_R12;
  *(longlong *)(unaff_RBP + -0x10) = unaff_R12;
  *(ulonglong *)(unaff_RBP + -0x18) =
       -1 - ((~unaff_R15 | uVar2) & (~(~uVar2 & unaff_R15) + unaff_R15) - uVar2);
  uVar3 = *(undefined8 *)(unaff_R13 + -0x70);
  *(undefined8 *)(unaff_RBP + -0x18) = param_4;
  *(undefined8 *)(unaff_RBP + -8) = uVar3;
  uVar3 = *(undefined8 *)(unaff_RBP + -0x18);
  *(undefined8 *)(unaff_RBP + -0x10) = param_3;
  *(undefined8 *)(unaff_RBP + -0x18) = param_3;
  *(undefined8 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined8 *)(unaff_RBP + -0x28) = uVar5;
  *(undefined8 *)(unaff_RBP + -0x20) = 0x14d83a58e;
  FUN_165ac447e(param_1,lVar4,FUN_165ac447e,uVar3);
  return;
}



// FUNCTION 14d83a785 FUN_14d83a785 body=473 status=ok
// SIG undefined FUN_14d83a785(void)

/* WARNING: Removing unreachable block (ram,0x00014d83a81e) */

void FUN_14d83a785(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x48);
  FUN_166286b60((uVar1 + unaff_R15) - (uVar1 & unaff_R15),
                ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48));
  return;
}



// FUNCTION 14d83a8e9 FUN_14d83a8e9 body=158 status=ok
// SIG undefined FUN_14d83a8e9(void)

/* WARNING: Removing unreachable block (ram,0x00014d83a967) */

void FUN_14d83a8e9(void)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  (*(code *)0x15661f8fa)(in_stack_00000008,*(undefined8 *)(unaff_RDI + -0x68),0x425092a8);
  return;
}



// FUNCTION 14d83a9e8 FUN_14d83a9e8 body=333 status=ok
// SIG undefined FUN_14d83a9e8(void)

/* WARNING: Removing unreachable block (ram,0x00014d83aa80) */
/* WARNING: Removing unreachable block (ram,0x00014d83aa86) */

void FUN_14d83a9e8(void)

{
  return;
}



// FUNCTION 14d83aa86 FUN_14d83aa86 body=158 status=ok
// SIG undefined FUN_14d83aa86(void)

void FUN_14d83aa86(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  FUN_16116cd41(FUN_16116cd41,0xffffffffffffffd9,
                (~(~uVar1 & ~in_RAX) + ~in_RAX) - uVar1 & (uVar1 | in_RAX),
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14d83aba1 FUN_14d83aba1 body=204 status=ok
// SIG undefined FUN_14d83aba1(void)

/* WARNING: Removing unreachable block (ram,0x00014d83ac2e) */
/* WARNING: Removing unreachable block (ram,0x00014d83ac34) */
/* WARNING: Removing unreachable block (ram,0x00016600c567) */

void FUN_14d83aba1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 uStackX_18;
  
  uVar1 = ~(param_5 & param_1) & (param_5 | param_1);
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x20) = uStackX_18;
  FUN_16600c567();
  return;
}



// FUNCTION 14d83acbb FUN_14d83acbb body=294 status=ok
// SIG undefined FUN_14d83acbb(void)

void FUN_14d83acbb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15ba3bc87(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3);
  return;
}



// FUNCTION 14d83adef FUN_14d83adef body=324 status=ok
// SIG undefined FUN_14d83adef(void)

/* WARNING: Instruction at (ram,0x000165a74584) overlaps instruction at (ram,0x000165a74583)
    */
/* WARNING: Removing unreachable block (ram,0x000162128524) */
/* WARNING: Removing unreachable block (ram,0x000162128535) */
/* WARNING: Removing unreachable block (ram,0x000165e84fc0) */
/* WARNING: Removing unreachable block (ram,0x00014d83af29) */
/* WARNING: Removing unreachable block (ram,0x00014d83af2f) */
/* WARNING: Removing unreachable block (ram,0x000162128486) */
/* WARNING: Removing unreachable block (ram,0x000165e84f1e) */
/* WARNING: Removing unreachable block (ram,0x000165e84fc3) */
/* WARNING: Removing unreachable block (ram,0x000165e85012) */
/* WARNING: Removing unreachable block (ram,0x000162585bd6) */
/* WARNING: Removing unreachable block (ram,0x000162585c9c) */
/* WARNING: Removing unreachable block (ram,0x000162585ca1) */
/* WARNING: Removing unreachable block (ram,0x000162585d60) */
/* WARNING: Removing unreachable block (ram,0x000162585d66) */
/* WARNING: Removing unreachable block (ram,0x000162585d6b) */
/* WARNING: Removing unreachable block (ram,0x00015b57c45b) */
/* WARNING: Removing unreachable block (ram,0x0001571b663b) */
/* WARNING: Removing unreachable block (ram,0x0001571b66bf) */
/* WARNING: Removing unreachable block (ram,0x0001571b66c5) */
/* WARNING: Removing unreachable block (ram,0x000165a74545) */
/* WARNING: Removing unreachable block (ram,0x000165a74584) */
/* WARNING: Removing unreachable block (ram,0x000165a74583) */
/* WARNING: Removing unreachable block (ram,0x000165e850de) */
/* WARNING: Removing unreachable block (ram,0x000165e850e9) */
/* WARNING: Removing unreachable block (ram,0x000165e850e4) */
/* WARNING: Removing unreachable block (ram,0x000162c57f3a) */
/* WARNING: Removing unreachable block (ram,0x000162128530) */
/* WARNING: Removing unreachable block (ram,0x00014d83ae94) */

void FUN_14d83adef(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong in_R11;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  lVar2 = ((~in_RAX | local_res18) + in_RAX + 1) * 2;
  puVar1 = (ulonglong *)(lVar2 + -8);
  *puVar1 = in_R11;
  *(undefined8 *)(lVar2 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lVar2 + -0x18) = unaff_retaddr;
  *(ulonglong *)(lVar2 + -0x10) = *puVar1;
  *puVar1 = 0x4e5ed61;
  *puVar1 = *puVar1 ^ 0x4e5ed61;
  *puVar1 = *puVar1 ^ 0x1568da399;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d83af35 FUN_14d83af35 body=190 status=ok
// SIG undefined FUN_14d83af35(void)

longlong FUN_14d83af35(void)

{
  longlong unaff_RDI;
  
  return 0x2ef9 - ~(unaff_RDI - 0x2f22U);
}



// FUNCTION 14d83aff3 FUN_14d83aff3 body=150 status=ok
// SIG undefined FUN_14d83aff3(void)

void FUN_14d83aff3(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_165ccd868(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d83b1c3 FUN_14d83b1c3 body=141 status=ok
// SIG undefined FUN_14d83b1c3(void)

/* WARNING: Removing unreachable block (ram,0x00014d83b24b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d83b1c3(void)

{
  if (&DAT_fffffffffffffff7 < &stack0x00000008) {
    return;
  }
  FUN_161127e84();
  return;
}



// FUNCTION 14d83b251 FUN_14d83b251 body=184 status=ok
// SIG undefined FUN_14d83b251(void)

void FUN_14d83b251(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ushort *puVar2;
  undefined8 auStackX_18 [2];
  
  puVar2 = (ushort *)((longlong)auStackX_18 + param_3);
  *puVar2 = (-0x101 - (*puVar2 | 0xfeff)) + *puVar2;
  *(undefined8 *)(param_6 + -8) = in_R10;
  *(undefined8 *)(param_6 + -0x10) = param_1;
  *(undefined8 *)(param_6 + -0x18) = in_RAX;
  *(undefined4 *)(param_6 + -0x18) = 0x71c73bac;
  *(undefined4 *)(param_6 + -0x14) = 0;
  uVar1 = *(ulonglong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = auStackX_18[0];
  *(undefined8 *)(param_6 + -0x20) = unaff_R13;
  uVar1 = ~(~uVar1 & 0x71c72bb7);
  *(ulonglong *)(param_6 + -0x28) = uVar1;
  *(ulonglong *)(param_6 + -0x30) = uVar1;
  *(ulonglong *)(param_6 + -0x38) = uVar1;
  *(undefined1 **)(param_6 + -0x28) = &LAB_14d83b30f;
  *(undefined1 **)(param_6 + -0x30) = &LAB_166b7d038;
  return;
}



// FUNCTION 14d83b437 FUN_14d83b437 body=271 status=ok
// SIG undefined FUN_14d83b437(void)

/* WARNING: Removing unreachable block (ram,0x00014d83b523) */

void FUN_14d83b437(void)

{
  FUN_1658fac5c();
  return;
}



// FUNCTION 14d83b67a FUN_14d83b67a body=231 status=ok
// SIG undefined FUN_14d83b67a(void)

/* WARNING: Removing unreachable block (ram,0x00014d83b711) */
/* WARNING: Removing unreachable block (ram,0x00014d83b70b) */

void FUN_14d83b67a(void)

{
  return;
}



// FUNCTION 14d83b7a3 FUN_14d83b7a3 body=126 status=ok
// SIG undefined FUN_14d83b7a3(void)

/* WARNING: Removing unreachable block (ram,0x00014d83b818) */
/* WARNING: Removing unreachable block (ram,0x00014d83b823) */
/* WARNING: Removing unreachable block (ram,0x00014d83b8c1) */
/* WARNING: Removing unreachable block (ram,0x00014d83b8c6) */
/* WARNING: Removing unreachable block (ram,0x00014d83b8cc) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba56) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba5b) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba61) */
/* WARNING: Removing unreachable block (ram,0x000166520bb7) */
/* WARNING: Removing unreachable block (ram,0x000166520bf1) */
/* WARNING: Removing unreachable block (ram,0x00016676966a) */
/* WARNING: Removing unreachable block (ram,0x000161a19d60) */
/* WARNING: Removing unreachable block (ram,0x00014d83b81e) */
/* WARNING: Removing unreachable block (ram,0x00014d9fef9b) */

int FUN_14d83b7a3(UINT param_1,ushort param_2,ushort *param_3,int param_4,longlong param_5)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  ushort unaff_DI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  DWORD DStackX_18;
  
  *param_3 = ~*param_3;
  *param_3 = *param_3 | unaff_DI & param_2;
  *param_3 = *param_3 ^ 0xffff;
  *(undefined8 *)(param_5 + -8) = unaff_R14;
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x18) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  *(undefined8 *)(param_5 + -0x18) = unaff_R12;
  *(undefined8 *)(param_5 + -0x20) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = local_res10;
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(longlong *)(param_5 + -8) = *(longlong *)(param_5 + -8) + 0x156e5a491;
  lpWideCharStr = *(LPCWSTR *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
                    /* WARNING: Could not recover jumptable at 0x000156e5a473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(param_1,DStackX_18,lpWideCharStr,param_4,*(LPSTR *)(param_5 + 0x20),
                              *(int *)(param_5 + 0x28),*(LPCSTR *)(param_5 + 0x30),
                              *(LPBOOL *)(param_5 + 0x38));
  return iVar1;
}



// FUNCTION 14d83b823 FUN_14d83b823 body=169 status=ok
// SIG undefined FUN_14d83b823(void)

/* WARNING: Removing unreachable block (ram,0x00014d83b8cc) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba56) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba5b) */
/* WARNING: Removing unreachable block (ram,0x000166520bb7) */
/* WARNING: Removing unreachable block (ram,0x000166520bf1) */
/* WARNING: Removing unreachable block (ram,0x00016676966a) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba61) */

undefined8
FUN_14d83b823(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = (longlong)(&LAB_161a19db4 + *plVar1);
  if (-1 < *plVar1) {
    *(undefined8 *)(local_res20 + -0x10) = param_3;
    *(undefined8 *)(local_res20 + -0x18) = param_3;
    *(undefined8 *)(local_res20 + -0x20) = param_4;
    *(undefined **)(local_res20 + -0x10) = &DAT_14d7a9050;
    return in_RAX;
  }
  uVar2 = FUN_161a19d60();
  return uVar2;
}



// FUNCTION 14d83b8cc FUN_14d83b8cc body=547 status=ok
// SIG undefined FUN_14d83b8cc(void)

/* WARNING: Removing unreachable block (ram,0x00016676966a) */
/* WARNING: Removing unreachable block (ram,0x00014d83ba61) */

undefined8 FUN_14d83b8cc(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *unaff_RDI;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  undefined8 local_res10;
  
  uVar3 = *unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = *unaff_RDI | unaff_R15;
  *unaff_RDI = ~((~unaff_R15 | uVar3) & *unaff_RDI);
  FUN_1625cbd8b(param_1,FUN_1625cbd8b,local_res10);
  uVar1 = *(ulonglong *)(in_stack_00000008 + -0xa0);
  uVar3 = ~(*(ulonglong *)(in_stack_00000008 + -0x98) & param_1) &
          (*(ulonglong *)(in_stack_00000008 + -0x98) | param_1);
  FUN_16185cf26();
  uVar1 = *(ulonglong *)((~(uVar1 & param_1) & (uVar1 | param_1)) - 0x38);
  if ((uVar1 & uVar3) == 0) {
    uVar2 = FUN_1663cbdcf(uVar3,FUN_1663cbdcf,0xffffffffa0686940);
    return uVar2;
  }
  uVar2 = FUN_166520bb7(uVar3,uVar1 + uVar3);
  return uVar2;
}



// FUNCTION 14d83bc30 FUN_14d83bc30 body=48 status=ok
// SIG undefined FUN_14d83bc30(void)

void FUN_14d83bc30(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d83bc5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d83bf48 FUN_14d83bf48 body=107 status=ok
// SIG undefined FUN_14d83bf48(void)

void FUN_14d83bf48(void)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  
  FUN_15b707f24(in_stack_00000010,unaff_retaddr);
  return;
}



// FUNCTION 14d83c064 FUN_14d83c064 body=52 status=ok
// SIG undefined FUN_14d83c064(void)

undefined8 FUN_14d83c064(void)

{
  longlong unaff_retaddr;
  
  return *(undefined8 *)(unaff_retaddr + -0x70);
}



// FUNCTION 14d83c0ea FUN_14d83c0ea body=130 status=ok
// SIG undefined FUN_14d83c0ea(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164ef95bf) */
/* WARNING: Removing unreachable block (ram,0x00014d83c15d) */

void FUN_14d83c0ea(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  (*(code *)0x164ef95b4)(param_2,*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d83c20b FUN_14d83c20b body=88 status=ok
// SIG undefined FUN_14d83c20b(void)

void FUN_14d83c20b(void)

{
  longlong in_R9;
  
  if (in_R9 != 0x11e848) {
    return;
  }
  return;
}



// FUNCTION 14d83c4d7 FUN_14d83c4d7 body=369 status=ok
// SIG undefined FUN_14d83c4d7(void)

/* WARNING: Removing unreachable block (ram,0x00014d83c573) */
/* WARNING: Removing unreachable block (ram,0x00014d83c579) */

void FUN_14d83c4d7(void)

{
  return;
}



// FUNCTION 14d83c630 FUN_14d83c630 body=141 status=ok
// SIG undefined FUN_14d83c630(void)

void FUN_14d83c630(void)

{
  return;
}



// FUNCTION 14d83c776 FUN_14d83c776 body=161 status=ok
// SIG undefined FUN_14d83c776(void)

void FUN_14d83c776(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 local_res8;
  
  local_res8 = (ulonglong)(uint)local_res8;
  uVar1 = *(ulonglong *)(unaff_RDI + param_3 + (local_res8 ^ 0x4f43673));
  uVar2 = uVar1 & ~param_1;
  (*(code *)0x156f125d9)
            (param_1,(uVar2 | ~param_1 | uVar1) + ~uVar2 + 1,*(undefined8 *)(unaff_RDI + -0x60),
             *(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d83cb4d FUN_14d83cb4d body=157 status=ok
// SIG undefined FUN_14d83cb4d(void)

void FUN_14d83cb4d(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar1 = ~((~unaff_R15 | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1);
  FUN_166092fbb(uVar1,0xffffffffffffffc8,uVar1,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d83cbea FUN_14d83cbea body=14 status=ok
// SIG undefined FUN_14d83cbea(void)

void FUN_14d83cbea(void)

{
  return;
}



// FUNCTION 14d83cc7c FUN_14d83cc7c body=135 status=ok
// SIG undefined FUN_14d83cc7c(void)

void FUN_14d83cc7c(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RSI + (unaff_RDI & unaff_R15));
  FUN_162102134(param_1,~(uVar1 & unaff_RBP) & (uVar1 | unaff_RBP));
  return;
}



// FUNCTION 14d83cf96 FUN_14d83cf96 body=22 status=ok
// SIG undefined FUN_14d83cf96(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d83cf96(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d83d048 FUN_14d83d048 body=929 status=ok
// SIG undefined FUN_14d83d048(void)

void FUN_14d83d048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x162528252)(unaff_retaddr,0x162528252,param_3,param_4);
  return;
}



// FUNCTION 14d83d0dc FUN_14d83d0dc body=155 status=ok
// SIG undefined FUN_14d83d0dc(void)

/* WARNING: Removing unreachable block (ram,0x000161793666) */
/* WARNING: Removing unreachable block (ram,0x00016179366c) */
/* WARNING: Removing unreachable block (ram,0x0001617936b3) */
/* WARNING: Removing unreachable block (ram,0x0001624b0971) */
/* WARNING: Removing unreachable block (ram,0x0001624b08c8) */
/* WARNING: Removing unreachable block (ram,0x0001624b096b) */
/* WARNING: Removing unreachable block (ram,0x000165542804) */
/* WARNING: Removing unreachable block (ram,0x000165542886) */
/* WARNING: Removing unreachable block (ram,0x00016554288b) */
/* WARNING: Removing unreachable block (ram,0x000165542896) */
/* WARNING: Removing unreachable block (ram,0x000165542891) */
/* WARNING: Removing unreachable block (ram,0x0001617935c7) */
/* WARNING: Removing unreachable block (ram,0x00014d83d172) */

undefined8 FUN_14d83d0dc(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_RAX;
  undefined8 uVar13;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStack_20;
  ulonglong auStack_18 [3];
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RSI);
  puVar1[-1] = in_RAX;
  puVar1[-2] = 0xffffffffffffffb8;
  uVar8 = puVar1[-1];
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar3 = *puVar1;
  *puVar1 = param_1;
  uVar9 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  *puVar1 = param_2;
  uVar4 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x90);
  puVar1[-1] = param_3;
  puVar1[-2] = param_3;
  puVar1[-3] = uVar8;
  *(undefined4 *)(puVar1 + -4) = 0xf7a8a37;
  *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
  uVar8 = puVar1[-4];
  puVar1 = (ulonglong *)((longlong)puVar1 + (uVar8 - 0xf7a8a57));
  puVar1[-1] = ~((0xffffffffffffffff - uVar9 | uVar3) & (~uVar3 | param_1));
  *puVar1 = *(ulonglong *)(unaff_RDI + -8);
  uVar3 = puVar1[1];
  puVar1[3] = *puVar1;
  uVar13 = puVar1[2];
  puVar1[2] = uVar4;
  puVar1[1] = uVar4;
  puVar1[2] = *(undefined8 *)(unaff_RDI + -0x98);
  uVar10 = puVar1[1];
  puVar1[1] = uVar3;
  *puVar1 = puVar1[-1];
  uVar3 = *(ulonglong *)(unaff_RDI + -0xa0);
  if (0xf7a8a3e < uVar8) {
    uVar13 = FUN_1624b082d();
    return uVar13;
  }
  puVar1[2] = puVar1[2] ^ param_1;
  puVar1[3] = puVar1[3] ^ param_1;
  puVar1[1] = in_R10;
  *puVar1 = uVar3 ^ param_1;
  *puVar1 = puVar1[4] + param_1;
  puVar1[-1] = unaff_R15;
  puVar1[4] = ~puVar1[4];
  puVar1[4] = puVar1[4] | ~param_1;
  puVar1[4] = ~puVar1[4];
  puVar1[4] = puVar1[4] << 1;
  puVar1[4] = *puVar1 - puVar1[4];
  uVar5 = puVar1[2];
  puVar1[2] = unaff_R13;
  puVar1[1] = puVar1[-1];
  puVar2 = puVar1 + 3;
  *(ushort *)puVar2 = ~(ushort)*puVar2;
  *(ushort *)puVar2 = (ushort)*puVar2 | 0x100;
  *(ushort *)puVar2 = ~(ushort)*puVar2;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  puVar6 = (undefined8 *)puVar1[4];
  pcVar7 = (code *)swi(0x2e);
  uVar13 = (*pcVar7)(uVar5,uVar10,uVar13);
  *puVar6 = unaff_R14;
  puVar6[-2] = uVar12;
  puVar6[-1] = unaff_R14;
  puVar6[-2] = uVar13;
  puVar6[-3] = param_4;
  *(undefined4 *)(puVar6 + -4) = 0xf334df1;
  *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(puVar6 + -4);
  puVar6[-3] = uVar11;
  puVar6[-4] = uVar11;
  puVar6[-3] = &DAT_165b0b356;
  return uVar13;
}



// FUNCTION 14d83d178 FUN_14d83d178 body=681 status=ok
// SIG undefined FUN_14d83d178(void)

void FUN_14d83d178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short *in_R10;
  code *pcVar5;
  longlong lVar6;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong local_res10;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  pcVar5 = FUN_1623a6640;
  FUN_1623a6640();
  *in_R10 = (short)unaff_R15 + *in_R10;
  *(ulonglong *)(local_res10 + -8) = ~((~unaff_R15 | uVar3) & (~uVar3 | unaff_R15));
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x15744ab63;
  *(code **)(local_res10 + -0x18) = pcVar5;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  lVar6 = *(longlong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = 0x14d83d2c6;
  uVar2 = FUN_15744ab44();
  uVar3 = *(ulonglong *)(uVar4 + lVar6 + 0x7bdf79af);
  *(code **)(local_res10 + -0x10) = FUN_15744ab44;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar2;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  uVar4 = *(ulonglong *)(uVar4 + 0xc0);
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x28) = 0x14d83d35a;
  FUN_14db9531d(~(~uVar4 | 0x3321ea55));
  *(undefined4 *)(local_res10 + -0x14) = 0xb42c2ee2;
  *(int *)(local_res10 + -0x14) = *(int *)(local_res10 + -0x14) + 0x4bd3d11d;
  uVar4 = *(ulonglong *)(local_res10 + -0x18) | 0xffffffffa925e652;
  uVar3 = *(ulonglong *)
           (~((uVar3 | 0x3321ea55) - 0x3321ea55) +
           ~((~uVar4 | ~(*(ulonglong *)(local_res10 + -0x18) & 0xffffffffa925e652)) + uVar4 + 1));
  *(code **)(local_res10 + -0x18) = FUN_14db9531d;
  uVar3 = ~((~*(ulonglong *)(local_res10 + -0x18) | uVar3) & (~uVar3 | 0x14db9531d));
  *(ulonglong *)(local_res10 + -0x18) = uVar3;
  *(ulonglong *)(local_res10 + -0x20) = uVar3;
  *(ulonglong *)(local_res10 + -0x28) = uVar3;
  *(code **)(local_res10 + -0x18) = FUN_14d83d425;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_165fc09bd;
  return;
}



// FUNCTION 14d83d425 FUN_14d83d425 body=147 status=ok
// SIG undefined FUN_14d83d425(void)

/* WARNING: Removing unreachable block (ram,0x00014d83d4b6) */

undefined8 FUN_14d83d425(ulonglong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0x88)) &
      (~*(ulonglong *)(unaff_RDI + -0x88) | param_1)) == 0xffffffffffffffff) {
    return in_RAX;
  }
  uVar1 = FUN_161030eed();
  return uVar1;
}



// FUNCTION 14d83d82c FUN_14d83d82c body=176 status=ok
// SIG undefined FUN_14d83d82c(void)

void FUN_14d83d82c(void)

{
  return;
}



// FUNCTION 14d83daa0 FUN_14d83daa0 body=164 status=ok
// SIG undefined FUN_14d83daa0(void)

undefined8 FUN_14d83daa0(void)

{
  return 0xabb8b80;
}



// FUNCTION 14d83dbd9 FUN_14d83dbd9 body=181 status=ok
// SIG undefined FUN_14d83dbd9(void)

undefined8 FUN_14d83dbd9(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStackX_8 [4];
  ulonglong uStack_8;
  
  lVar2 = -~(~(unaff_RBX & 0xffffffffef8b20a6) & (unaff_RBX | 0xffffffffef8b20a6));
  *(undefined4 *)((longlong)auStackX_8 + lVar2) = param_2;
  *(int *)((longlong)auStackX_8 + lVar2) = *(int *)((longlong)auStackX_8 + lVar2) + -0x3289b207;
  uVar3 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48)) &
           (~*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15));
  *(undefined8 *)((longlong)auStackX_8 + lVar2) = in_RAX;
  *(undefined8 *)((longlong)auStackX_8 + lVar2 + -8) = unaff_RSI;
  uVar1 = *(undefined8 *)((longlong)auStackX_8 + lVar2);
  *(ulonglong *)((longlong)auStackX_8 + lVar2) = uVar3;
  *(ulonglong *)((longlong)auStackX_8 + lVar2 + -8) = uVar3;
  *(ulonglong *)((longlong)&uStack_8 + lVar2) = uVar3;
  *(undefined1 **)((longlong)auStackX_8 + lVar2) = &LAB_14d83dc8e;
  *(undefined8 *)((longlong)auStackX_8 + lVar2 + -8) = 0x162a428f6;
  return uVar1;
}



// FUNCTION 14d83dd84 FUN_14d83dd84 body=346 status=ok
// SIG undefined FUN_14d83dd84(void)

/* WARNING: Removing unreachable block (ram,0x00014d83de1b) */

void FUN_14d83dd84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte in_AL;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  byte local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  LOCK();
  bVar2 = in_AL < FUN_14d7be4d7;
  bVar3 = SBORROW1(in_AL,FUN_14d7be4d7);
  cVar1 = in_AL - FUN_14d7be4d7;
  if (cVar1 == '\0') {
    FUN_14d7be4d7 = local_res8;
  }
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar3 * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar2 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = 0xec27666;
  *(longlong *)(local_res18 + -0x20) = *(longlong *)(local_res18 + -0x20) + -0x7f02610;
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -8) = 0x6d25056;
  if ((uVar4 & 0x80) != 0) {
    thunk_FUN_15b3a8258();
    return;
  }
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(code **)(local_res18 + -0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14d83df8d FUN_14d83df8d body=201 status=ok
// SIG undefined FUN_14d83df8d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a887b) overlaps instruction at (ram,0x00014d7a8878)
    */
/* WARNING: Removing unreachable block (ram,0x000162b56be5) */
/* WARNING: Removing unreachable block (ram,0x000162b56bd9) */
/* WARNING: Removing unreachable block (ram,0x00014d83e04a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8878) */
/* WARNING: Removing unreachable block (ram,0x00014d7a88a7) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8886) */
/* WARNING: Removing unreachable block (ram,0x00014d7a88a1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a88bd) */
/* WARNING: Removing unreachable block (ram,0x00014d7a88c4) */
/* WARNING: Removing unreachable block (ram,0x00014d7a887b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d83df8d(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RSI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  int in_stack_00000010;
  
  if (&stack0x00000000 == (undefined1 *)0x0) {
    _DAT_fffffffffffffff0 = 0xa00673e8;
    _DAT_fffffffffffffff8 = 0x661f65e8;
    uVar3 = in_stack_00000010 + 0x626ff384;
    uVar1 = in_stack_00000010 + 0x5c4a19b4U & 0x625d9d0;
    uVar2 = uVar1 * 2;
    uVar1 = uVar3 + uVar1 * -2;
    _DAT_00000000 =
         (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SBORROW4(uVar3,uVar2) * 0x800 |
         (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
         (ulonglong)((int)uVar1 < 0) * 0x80 | (ulonglong)(uVar1 == 0) * 0x40 |
         (ulonglong)((in_AF & 1) != 0) * 0x10 | (ulonglong)((POPCOUNT(uVar1 & 0xff) & 1U) == 0) * 4
         | (ulonglong)(uVar3 < uVar2) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
         (ulonglong)((in_AC & 1) != 0) * 0x40000;
    _DAT_00000008 = unaff_RSI;
    (*(code *)0x166180cd8)();
    return;
  }
  FUN_162b56b3a();
  return;
}



// FUNCTION 14d83e28e FUN_14d83e28e body=180 status=ok
// SIG undefined FUN_14d83e28e(void)

void FUN_14d83e28e(void)

{
  (*(code *)0x1650339a4)();
  return;
}



// FUNCTION 14d83e49a FUN_14d83e49a body=171 status=ok
// SIG undefined FUN_14d83e49a(void)

void FUN_14d83e49a(ulonglong param_1,ulonglong param_2)

{
  (*(code *)0x161a2d8cf)
            (param_1,((param_2 | param_1) -
                     ~((~(param_2 & param_1) ^ 0xffffffffffffffff) & ~(param_2 | param_1))) +
                     ~(param_2 & param_1));
  return;
}



// FUNCTION 14d83e547 FUN_14d83e547 body=27 status=ok
// SIG undefined FUN_14d83e547(void)

void FUN_14d83e547(void)

{
  return;
}



// FUNCTION 14d83e6aa FUN_14d83e6aa body=264 status=ok
// SIG undefined FUN_14d83e6aa(void)

/* WARNING: Removing unreachable block (ram,0x00014d83e732) */

void FUN_14d83e6aa(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160ed99c1(*(undefined8 *)(unaff_R13 + -0x70),*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d83e732 FUN_14d83e732 body=160 status=ok
// SIG undefined FUN_14d83e732(void)

void FUN_14d83e732(undefined8 param_1)

{
  FUN_15b315587(param_1,FUN_15b315587);
  return;
}



// FUNCTION 14d83eaef FUN_14d83eaef body=135 status=ok
// SIG undefined FUN_14d83eaef(void)

void FUN_14d83eaef(void)

{
  FUN_1612efe70();
  return;
}



// FUNCTION 14d83ec21 FUN_14d83ec21 body=149 status=ok
// SIG undefined FUN_14d83ec21(void)

/* WARNING: Instruction at (ram,0x0001575b804f) overlaps instruction at (ram,0x0001575b804e)
    */
/* WARNING: Removing unreachable block (ram,0x00014d83ed0b) */
/* WARNING: Removing unreachable block (ram,0x0001575b804e) */
/* WARNING: Removing unreachable block (ram,0x00014d83ee69) */
/* WARNING: Removing unreachable block (ram,0x00014d83ed3f) */
/* WARNING: Removing unreachable block (ram,0x00014d83ee5e) */
/* WARNING: Removing unreachable block (ram,0x0001575b800d) */
/* WARNING: Removing unreachable block (ram,0x0001575b8088) */
/* WARNING: Removing unreachable block (ram,0x0001575b808e) */
/* WARNING: Removing unreachable block (ram,0x0001575b80a5) */
/* WARNING: Removing unreachable block (ram,0x0001575b80b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d83ec21(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_1653cd172();
  if (-1 < *(longlong *)(unaff_R13 + -0x68) + unaff_R15) {
    uVar1 = FUN_1613e1a4c();
    return uVar1;
  }
  uVar1 = FUN_1613e1a4c();
  return uVar1;
}



// FUNCTION 14d83ecb6 FUN_14d83ecb6 body=435 status=ok
// SIG undefined FUN_14d83ecb6(void)

/* WARNING: Instruction at (ram,0x0001575b804f) overlaps instruction at (ram,0x0001575b804e)
    */
/* WARNING: Removing unreachable block (ram,0x00014d83ed0b) */
/* WARNING: Removing unreachable block (ram,0x0001575b804e) */
/* WARNING: Removing unreachable block (ram,0x00014d83ee69) */
/* WARNING: Removing unreachable block (ram,0x00014d83ed3f) */
/* WARNING: Removing unreachable block (ram,0x00014d83ee5e) */
/* WARNING: Removing unreachable block (ram,0x0001575b800d) */
/* WARNING: Removing unreachable block (ram,0x0001575b8088) */
/* WARNING: Removing unreachable block (ram,0x0001575b808e) */
/* WARNING: Removing unreachable block (ram,0x0001575b80a5) */
/* WARNING: Removing unreachable block (ram,0x0001575b80b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d83ecb6(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x68) + unaff_R15) {
    uVar1 = FUN_1613e1a4c();
    return uVar1;
  }
  uVar1 = FUN_1613e1a4c();
  return uVar1;
}



// FUNCTION 14d83efc9 FUN_14d83efc9 body=147 status=ok
// SIG undefined FUN_14d83efc9(void)

void FUN_14d83efc9(void)

{
  ulonglong uVar1;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = local_res10;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = uStackX_8;
  *(undefined4 *)(uVar1 - 0x28) = 0x1e91ed59;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  *(undefined8 *)(uVar1 - 0x10) =
       *(undefined8 *)(uVar1 + ((*(ulonglong *)(uVar1 - 0x28) ^ 0x106e1e69) - 0xefff338));
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  *(undefined **)(uVar1 - 0x20) = &DAT_14d83f05e;
  return;
}



// FUNCTION 14d83f061 FUN_14d83f061 body=260 status=ok
// SIG undefined FUN_14d83f061(void)

void FUN_14d83f061(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  (*(code *)0x156ee8c03)
            (param_1,unaff_retaddr,param_3,local_res18 + param_1 + (local_res18 & param_1) * -2);
  return;
}



// FUNCTION 14d83f0fd FUN_14d83f0fd body=254 status=ok
// SIG undefined FUN_14d83f0fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d83f174) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d83f0fd(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_2 << 5 ^ param_2 >> 0x1b;
  if (-1 < (int)uVar1) {
    FUN_1628de2e2(param_1,uVar1,-(1 - uVar1),param_4);
    return;
  }
  FUN_15b080dbb();
  return;
}



// FUNCTION 14d83f1fe FUN_14d83f1fe body=186 status=ok
// SIG undefined FUN_14d83f1fe(void)

void FUN_14d83f1fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160bde612(param_1,0x6c3b7ff9,param_3);
  return;
}



// FUNCTION 14d83f4c5 FUN_14d83f4c5 body=452 status=ok
// SIG undefined FUN_14d83f4c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d83f55c) */
/* WARNING: Removing unreachable block (ram,0x00014d83f562) */

undefined8
FUN_14d83f4c5(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *in_R10;
  undefined8 in_R11;
  undefined8 uVar9;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  
  *in_R10 = 0;
  *in_R10 = *in_R10 + ~unaff_R12;
  param_6 = param_6 ^ param_1;
  *(undefined8 *)(param_6 - 8) = in_RAX;
  *(undefined8 *)(param_6 - 0x10) = unaff_R14;
  uVar3 = *(undefined8 *)(param_6 - 0x10);
  *(undefined8 *)(param_6 - 0x10) = in_R11;
  uVar9 = *(undefined8 *)(param_6 - 0x10);
  *(undefined8 *)(param_6 - 0x10) = *(undefined8 *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x18) = in_stack_00000008;
  pcVar8 = FUN_1660a4deb;
  *(undefined8 *)(param_6 - 0x20) = 0x15ba35705;
  lVar6 = FUN_1660a4deb();
  puVar1 = (undefined8 *)(param_6 - 0x10);
  uVar4 = *puVar1;
  *puVar1 = unaff_R13;
  *(undefined8 *)(param_6 - 0x18) = local_res20;
  *(undefined8 *)(param_6 - 0x20) = pcVar8;
  uVar7 = *(undefined8 *)(param_6 - 0x20);
  uVar5 = *(undefined8 *)(param_6 - 0x18);
  *(ulonglong *)(lVar6 + 8) = ~(param_3 + 1U);
  uVar2 = *(undefined8 *)(param_6 - 8);
  *puVar1 = param_6 - 8;
  puVar1 = (undefined8 *)*puVar1;
  puVar1[1] = uVar2;
  *puVar1 = uVar3;
  puVar1[-1] = uVar9;
  uVar7 = (*(code *)0x15673829c)(uVar5,uVar7,uVar4);
  return uVar7;
}



// FUNCTION 14d83f562 FUN_14d83f562 body=96 status=ok
// SIG undefined FUN_14d83f562(void)

undefined8 FUN_14d83f562(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  undefined8 uStackX_10;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | 0xffffffffb5f5920d;
  *(ulonglong *)(unaff_RBP + 8) = ~(~(uVar1 & 0xffffffffb5f5920d) & *(ulonglong *)(unaff_RBP + 8));
  return uStackX_10;
}



// FUNCTION 14d83f5fc thunk_FUN_14d83f602 body=5 status=ok
// SIG undefined thunk_FUN_14d83f602(void)

void thunk_FUN_14d83f602(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166aa4b1a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d83f602 FUN_14d83f602 body=247 status=ok
// SIG undefined FUN_14d83f602(void)

void FUN_14d83f602(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166aa4b1a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d83f7b6 FUN_14d83f7b6 body=50 status=ok
// SIG undefined FUN_14d83f7b6(void)

void FUN_14d83f7b6(void)

{
  undefined1 local_res8;
  undefined8 local_res18;
  
  LOCK();
  DAT_14d7c0577 = local_res8;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = 0x2ef68b4;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d83f863 FUN_14d83f863 body=326 status=ok
// SIG undefined FUN_14d83f863(void)

void FUN_14d83f863(void)

{
  longlong unaff_R13;
  
  FUN_161d9264d(*(undefined8 *)(unaff_R13 + -0x78),*(undefined8 *)(unaff_R13 + -0x78));
  FUN_165387311(FUN_165387311);
  return;
}



// FUNCTION 14d83fb24 FUN_14d83fb24 body=10 status=ok
// SIG undefined FUN_14d83fb24(void)

void FUN_14d83fb24(void)

{
  return;
}



// FUNCTION 14d83fd6b FUN_14d83fd6b body=336 status=ok
// SIG undefined FUN_14d83fd6b(void)

/* WARNING: Removing unreachable block (ram,0x00014d83fe01) */

void FUN_14d83fd6b(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 uStackX_20;
  longlong in_stack_00000038;
  
  lVar1 = *(longlong *)(unaff_RBX + (param_1 ^ unaff_R14));
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) & unaff_R15;
  *(ulonglong *)(unaff_RBX + 0x10) = (lVar1 + unaff_R15) - *(longlong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = ~(unaff_R13 & *(ulonglong *)(unaff_RBX + 0x10));
  *(undefined8 *)(in_stack_00000038 + -8) = in_RAX;
  *(undefined8 *)(in_stack_00000038 + -0x10) = uStackX_20;
  *(undefined8 *)(in_stack_00000038 + -0x10) = *(undefined8 *)(in_stack_00000038 + -8);
  *(undefined8 *)(in_stack_00000038 + -0x18) = param_2;
  *(undefined8 *)(in_stack_00000038 + -0x20) = unaff_RDI;
  *(undefined8 *)(in_stack_00000038 + -0x28) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000038 + -8) = 0x651d8b78;
  *(ulonglong *)(in_stack_00000038 + -8) = *(ulonglong *)(in_stack_00000038 + -8) ^ 0x651d8b78;
  *(longlong *)(in_stack_00000038 + -8) =
       (longlong)(&DAT_15695c333 + *(longlong *)(in_stack_00000038 + -8));
  thunk_FUN_15b642ca5(*(undefined8 *)(in_stack_00000038 + -0x28),
                      *(undefined8 *)(in_stack_00000038 + -0x18));
  return;
}



// FUNCTION 14d83ff97 FUN_14d83ff97 body=151 status=ok
// SIG undefined FUN_14d83ff97(void)

void FUN_14d83ff97(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(param_1 + unaff_RDI);
  FUN_1646e2e03(param_1,(~unaff_RBX | uVar1) & (~uVar1 + unaff_RBX) - ~(uVar1 | ~unaff_RBX) ^
                        0xffffffffffffffff,FUN_1646e2e03);
  return;
}



// FUNCTION 14d84002e FUN_14d84002e body=153 status=ok
// SIG undefined FUN_14d84002e(void)

void FUN_14d84002e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_15b08cfb2)(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14d8400c7 FUN_14d8400c7 body=360 status=ok
// SIG undefined FUN_14d8400c7(void)

/* WARNING: Removing unreachable block (ram,0x00014d8401dc) */
/* WARNING: Removing unreachable block (ram,0x00014d8401e2) */
/* WARNING: Removing unreachable block (ram,0x00014d84015d) */
/* WARNING: Removing unreachable block (ram,0x000164a978f0) */
/* WARNING: Removing unreachable block (ram,0x00014d8402aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8402ac) */
/* WARNING: Removing unreachable block (ram,0x00014d840306) */
/* WARNING: Removing unreachable block (ram,0x00014d840317) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8400c7(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16664b0c9(FUN_16664b0c9);
  return uVar1;
}



// FUNCTION 14d8401e2 FUN_14d8401e2 body=413 status=ok
// SIG undefined FUN_14d8401e2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8402aa) */

void FUN_14d8401e2(void)

{
  longlong unaff_R12;
  int in_stack_00000030;
  
  FUN_161493c18();
  if (-1 < in_stack_00000030) {
    FUN_165983dec(0x5aa7c3e1,FUN_165983dec,*(undefined8 *)(unaff_R12 + -0x80));
    FUN_14d7c3c47();
    return;
  }
  return;
}



// FUNCTION 14d8403d3 FUN_14d8403d3 body=73 status=ok
// SIG undefined FUN_14d8403d3(void)

void FUN_14d8403d3(void)

{
  FUN_161102e11();
  return;
}



// FUNCTION 14d84041c FUN_14d84041c body=72 status=ok
// SIG undefined FUN_14d84041c(void)

void FUN_14d84041c(undefined8 param_1)

{
  ulonglong unaff_retaddr;
  
  if ((longlong)unaff_retaddr < 0) {
    FUN_15b64e235(param_1,unaff_retaddr & 0x7fffffffffffffff);
    return;
  }
  FUN_161102e11();
  return;
}



// FUNCTION 14d84050a FUN_14d84050a body=162 status=ok
// SIG undefined FUN_14d84050a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8405ec) */
/* WARNING: Removing unreachable block (ram,0x00014d8405ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8405e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8405ee) */
/* WARNING: Removing unreachable block (ram,0x00014d84059d) */

undefined8 FUN_14d84050a(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  
  uVar1 = FUN_1619aaf0e(param_1,0x82961e9,
                        ~((~unaff_RBX | *(ulonglong *)(param_1 + -0x88)) &
                         (~*(ulonglong *)(param_1 + -0x88) | unaff_RBX)),
                        (param_4 ^ 0xffffffffffffffff) & unaff_RDI);
  return uVar1;
}



// FUNCTION 14d8405ad FUN_14d8405ad body=76 status=ok
// SIG undefined FUN_14d8405ad(void)

/* WARNING: Removing unreachable block (ram,0x00014d8405ec) */

undefined8 FUN_14d8405ad(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8405ff FUN_14d8405ff body=275 status=ok
// SIG undefined FUN_14d8405ff(void)

/* WARNING: Removing unreachable block (ram,0x00014d840685) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8405ff(ulonglong param_1)

{
  code *pcVar1;
  longlong unaff_retaddr;
  ulonglong uStackX_18;
  
  param_1 = *(ulonglong *)(unaff_retaddr + -0x88) ^ param_1;
  FUN_1611691ba();
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *(undefined8 *)(~(uStackX_18 & param_1) & (uStackX_18 | param_1)) = 0x1c30e6;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d8407ae FUN_14d8407ae body=144 status=ok
// SIG undefined FUN_14d8407ae(void)

void FUN_14d8407ae(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  FUN_16665f579(param_1,param_2,*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14d8408f1 FUN_14d8408f1 body=454 status=ok
// SIG undefined FUN_14d8408f1(void)

/* WARNING: Instruction at (ram,0x000162f2ca23) overlaps instruction at (ram,0x000162f2ca22)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e67) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e78) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9ef4) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9ef8) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9dc6) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9dcc) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e4e) */
/* WARNING: Removing unreachable block (ram,0x000162f2c7a7) */
/* WARNING: Removing unreachable block (ram,0x000162f2c801) */
/* WARNING: Removing unreachable block (ram,0x000162f2c807) */
/* WARNING: Removing unreachable block (ram,0x0001664735f5) */
/* WARNING: Removing unreachable block (ram,0x000162f2c899) */
/* WARNING: Removing unreachable block (ram,0x000162f2c8aa) */
/* WARNING: Removing unreachable block (ram,0x000162f2c8b1) */
/* WARNING: Removing unreachable block (ram,0x000162f2c966) */
/* WARNING: Removing unreachable block (ram,0x000162f2c96b) */
/* WARNING: Removing unreachable block (ram,0x000162f2c971) */
/* WARNING: Removing unreachable block (ram,0x000162f2c9ff) */
/* WARNING: Removing unreachable block (ram,0x000162f2ca04) */
/* WARNING: Removing unreachable block (ram,0x000162f2ca0a) */
/* WARNING: Removing unreachable block (ram,0x000162f2ca23) */
/* WARNING: Removing unreachable block (ram,0x000162f2ca22) */
/* WARNING: Removing unreachable block (ram,0x000162f2ca2a) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00016136eb4b) */
/* WARNING: Removing unreachable block (ram,0x000165a1df0f) */
/* WARNING: Removing unreachable block (ram,0x000165a1df15) */
/* WARNING: Removing unreachable block (ram,0x000165a1df1a) */
/* WARNING: Removing unreachable block (ram,0x000161421e15) */
/* WARNING: Removing unreachable block (ram,0x000161421e1b) */
/* WARNING: Removing unreachable block (ram,0x000161421ebc) */
/* WARNING: Removing unreachable block (ram,0x00015660d9ab) */
/* WARNING: Removing unreachable block (ram,0x000161421d8a) */
/* WARNING: Removing unreachable block (ram,0x000161421d90) */
/* WARNING: Removing unreachable block (ram,0x00016486c80b) */
/* WARNING: Removing unreachable block (ram,0x00016486c8a5) */
/* WARNING: Removing unreachable block (ram,0x00016486c8ab) */
/* WARNING: Removing unreachable block (ram,0x000166213c2c) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e53) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e5c) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e62) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9e6d) */
/* WARNING: Removing unreachable block (ram,0x0001616f8cd5) */
/* WARNING: Removing unreachable block (ram,0x0001616f8cdb) */
/* WARNING: Removing unreachable block (ram,0x0001616f8c45) */
/* WARNING: Removing unreachable block (ram,0x0001616f8c4b) */
/* WARNING: Removing unreachable block (ram,0x0001661eacaf) */
/* WARNING: Removing unreachable block (ram,0x00014d7e9c56) */
/* WARNING: Removing unreachable block (ram,0x0001648b0dc1) */
/* WARNING: Removing unreachable block (ram,0x0001648b0dc7) */
/* WARNING: Removing unreachable block (ram,0x0001648b0e49) */
/* WARNING: Removing unreachable block (ram,0x0001648b0e4e) */
/* WARNING: Removing unreachable block (ram,0x0001648b0e54) */
/* WARNING: Removing unreachable block (ram,0x000161421bb9) */
/* WARNING: Removing unreachable block (ram,0x000161421c50) */
/* WARNING: Removing unreachable block (ram,0x000161421c55) */
/* WARNING: Removing unreachable block (ram,0x000161421c5b) */
/* WARNING: Removing unreachable block (ram,0x000161421cce) */
/* WARNING: Removing unreachable block (ram,0x000161421cbd) */
/* WARNING: Removing unreachable block (ram,0x00015647f668) */
/* WARNING: Removing unreachable block (ram,0x000162f2c78b) */
/* WARNING: Removing unreachable block (ram,0x00014d840a17) */
/* WARNING: Removing unreachable block (ram,0x00014d840a23) */
/* WARNING: Removing unreachable block (ram,0x00014d840970) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4963) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8408f1(byte param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  char in_R10B;
  char unaff_R12B;
  byte unaff_R14B;
  byte in_AF;
  
  if ((byte)-(((in_R10B - ~unaff_R14B) + -2) - (param_1 ^ 0xff)) < (byte)(0xffU - unaff_R12B)) {
    uVar1 = FUN_14d7e9c0b();
    return uVar1;
  }
  if (-1 < (int)(((uint)((longlong)&stack0x00000018 < 0) * 0x80 |
                  (uint)(&stack0x00000000 == &DAT_ffffffffffffffe8) * 0x40 |
                  (uint)((in_AF & 1) != 0) * 0x10 |
                  (uint)((POPCOUNT((ulonglong)&stack0x00000018 & 0xff) & 1U) == 0) * 4 |
                 (uint)(&DAT_00000007 < &stack0x00000020)) << 0x18)) {
    if ((longlong)&stack0x00000018 >= 0) {
      FUN_1625e8a2a();
      uVar1 = thunk_FUN_162f2c791();
      return uVar1;
    }
    return in_RAX;
  }
  uVar1 = FUN_1648b0c94();
  return uVar1;
}



// FUNCTION 14d840a29 FUN_14d840a29 body=161 status=ok
// SIG undefined FUN_14d840a29(void)

undefined8 FUN_14d840a29(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong *unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = (~(uVar1 & unaff_R15) + unaff_R15) - *unaff_R12;
  *unaff_R12 = ~(unaff_RBP & *unaff_R12);
  return local_res8;
}



// FUNCTION 14d840acc FUN_14d840acc body=304 status=ok
// SIG undefined FUN_14d840acc(void)

/* WARNING: Removing unreachable block (ram,0x00014d840bf4) */
/* WARNING: Removing unreachable block (ram,0x00014d840bfa) */
/* WARNING: Removing unreachable block (ram,0x00014d840bff) */

void FUN_14d840acc(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar1 = *param_2;
  uVar2 = *param_2;
  *param_2 = *param_2 ^ 0xffffffffffffffff;
  *param_2 = *param_2 | unaff_retaddr;
  *param_2 = ~((~(unaff_R13 & uVar1) + uVar2) - ~unaff_R13 & *param_2);
  FUN_162afa80e();
  FUN_15b241e9f(0xd5ba2cb,in_stack_00000008);
  return;
}



// FUNCTION 14d840bff FUN_14d840bff body=94 status=ok
// SIG undefined FUN_14d840bff(void)

void FUN_14d840bff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000008;
  
                    /* WARNING: Could not recover jumptable at 0x00014d840c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d840cab FUN_14d840cab body=307 status=ok
// SIG undefined FUN_14d840cab(void)

void FUN_14d840cab(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (param_4 ^ 0x4beb256a)) = 0;
  puVar1 = (ulonglong *)((longlong)local_res10 + (param_4 ^ 0x4beb256a));
  *puVar1 = *puVar1 ^ unaff_R14;
  local_res10[2] = local_res10[2] ^ unaff_R15;
  FUN_160e37010(param_1,unaff_retaddr,param_3);
  local_res10[0] = 0x14d840de7;
  (*(code *)0x16518f54c)();
  return;
}



// FUNCTION 14d841237 FUN_14d841237 body=305 status=ok
// SIG undefined FUN_14d841237(void)

/* WARNING: Removing unreachable block (ram,0x00014d8412c6) */
/* WARNING: Removing unreachable block (ram,0x00014d8412cc) */
/* WARNING: Removing unreachable block (ram,0x0001617af4a8) */

void FUN_14d841237(void)

{
  FUN_1617af4a8();
  return;
}



// FUNCTION 14d84136a FUN_14d84136a body=148 status=ok
// SIG undefined FUN_14d84136a(void)

/* WARNING: Removing unreachable block (ram,0x00014d841405) */
/* WARNING: Removing unreachable block (ram,0x00014d841444) */

void FUN_14d84136a(void)

{
  byte unaff_BPL;
  byte in_stack_00000050;
  
  if (-1 < (char)((unaff_BPL & in_stack_00000050) << 1)) {
    FUN_162ac6f22();
    return;
  }
  FUN_162ac6f22();
  return;
}



// FUNCTION 14d841405 FUN_14d841405 body=126 status=ok
// SIG undefined FUN_14d841405(void)

void FUN_14d841405(void)

{
  FUN_14ddc5204();
  return;
}



// FUNCTION 14d841486 FUN_14d841486 body=252 status=ok
// SIG undefined FUN_14d841486(void)

/* WARNING: Removing unreachable block (ram,0x00014d841516) */

void FUN_14d841486(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  int iVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  bool bVar7;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar8;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = in_RAX;
  uVar4 = *(uint *)(&stack0xfffffffff168e8d8 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = 0x3cd4645e;
  *(undefined4 *)(&stack0xfffffffff168e8dc + unaff_retaddr) = 0;
  *(undefined4 *)(&stack0xfffffffff168e8dc + unaff_retaddr) =
       *(undefined4 *)(&stack0xfffffffff168e8dc + unaff_retaddr);
  uVar2 = *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = (ulonglong)uVar4;
  *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr) = uVar2;
  uVar4 = *(uint *)(&stack0xfffffffff168e8d0 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr) = param_4;
  *(undefined8 *)(&stack0xfffffffff168e8c8 + unaff_retaddr) = param_3;
  uVar1 = *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr) = unaff_R13;
  uVar6 = (uint)uVar2;
  uVar2 = *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) =
       *(undefined8 *)(&stack0xfffffffff168e8c8 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr) =
       *(undefined8 *)(&stack0xfffffffff168e8d0 + unaff_retaddr);
  uVar3 = *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = unaff_R12;
  iVar5 = -1 - ~(~(uint)uVar2 |
                ~(~(~((-0x865ab29 - (uVar4 | 0xf79a54d7)) + uVar4) &
                   (~(uVar6 & 0xf79a54d7) + 0xf79a54d7) - ~uVar6) + 0x76bdbf94));
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = param_2;
  uVar2 = *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr);
  uVar4 = (uint)in_RAX | 0xab6f8f0a;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  *(ulonglong *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = (ulonglong)uVar4;
  *(undefined8 *)(&stack0xfffffffff168e8d8 + unaff_retaddr) = unaff_RSI;
  *(ulonglong *)(&stack0xfffffffff168e8d0 + unaff_retaddr) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
       (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar7 * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(&stack0xfffffffff168e8c8 + unaff_retaddr) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
       (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar7 * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)(&stack0xfffffffff168e8c8 + unaff_retaddr) =
       *(int *)(&stack0xfffffffff168e8c8 + unaff_retaddr) << 0x18;
  *(uint *)(&stack0xfffffffff168e8c8 + unaff_retaddr) =
       *(uint *)(&stack0xfffffffff168e8c8 + unaff_retaddr) >> 0x1f;
  if (*(int *)(&stack0xfffffffff168e8c8 + unaff_retaddr) != 0) {
    FUN_14d84f1de(iVar5,uVar2,uVar3,uVar1);
    return;
  }
  uVar8 = *(ulonglong *)(&stack0xfffffffff168e8d0 + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff168e8d0 + unaff_retaddr) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff168e8c8 + unaff_retaddr) = unaff_R15;
  if ((*(ushort *)(&stack0xfffffffff168e8d0 + unaff_retaddr) & 0x80) != 0) {
    *(undefined8 *)(&stack0xfffffffff168e8e8 + unaff_retaddr) = 0;
    *(undefined8 *)(&stack0xfffffffff168e8e8 + unaff_retaddr) =
         *(undefined8 *)(&stack0xfffffffff168e8e8 + unaff_retaddr);
    *(ulonglong *)(&stack0xfffffffff168e8e8 + unaff_retaddr) =
         *(ulonglong *)(&stack0xfffffffff168e8e8 + unaff_retaddr) ^ in_R10;
    *(ulonglong *)(&stack0xfffffffff168e8e0 + unaff_retaddr) = (ulonglong)uVar4;
    return;
  }
  FUN_14d84f1de(iVar5,uVar2,uVar3,uVar1);
  return;
}



// FUNCTION 14d841584 FUN_14d841584 body=150 status=ok
// SIG undefined FUN_14d841584(void)

void FUN_14d841584(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  
  FUN_1657e797c(param_1,0xfffffffffffffff8,~(param_3 & (unaff_RBX | param_1)));
  return;
}



// FUNCTION 14d84161b FUN_14d84161b body=166 status=ok
// SIG undefined FUN_14d84161b(void)

void FUN_14d84161b(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  ulonglong uVar1;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 local_res8;
  ulonglong local_res10;
  uint local_res18;
  
  *(undefined4 *)((longlong)&local_res10 + param_4) = param_3;
  uVar1 = local_res10 >> 0x10;
  local_res10 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)local_res18 < 0) * 0x80 |
                (ulonglong)(local_res18 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(local_res18 & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  (*(code *)&LAB_165348b56)(&LAB_165348b56,param_2,CONCAT62((int6)uVar1,0x80),local_res8);
  return;
}



// FUNCTION 14d84173f FUN_14d84173f body=156 status=ok
// SIG undefined FUN_14d84173f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8417d0) */
/* WARNING: Removing unreachable block (ram,0x00014d8417d6) */
/* WARNING: Removing unreachable block (ram,0x000161c4e978) */
/* WARNING: Removing unreachable block (ram,0x000161c4e983) */
/* WARNING: Removing unreachable block (ram,0x000161c4e97e) */
/* WARNING: Removing unreachable block (ram,0x00014d8417db) */

undefined8 FUN_14d84173f(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_15b766a40();
  return uVar1;
}



// FUNCTION 14d8417db FUN_14d8417db body=170 status=ok
// SIG undefined FUN_14d8417db(void)

void FUN_14d8417db(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (0x56e91294 - (~unaff_RSI + 2)));
  FUN_15af403d9(CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_R13 + -0x38) >> 0x10),
                         ~(ushort)*(undefined8 *)(unaff_R13 + -0x38)),param_2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14d84188c FUN_14d84188c body=351 status=ok
// SIG undefined FUN_14d84188c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8418fa) */

void FUN_14d84188c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  short *in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R11;
  code *pcVar5;
  short unaff_R12W;
  undefined8 unaff_R15;
  ulonglong uVar6;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *in_RAX = unaff_R12W + 1;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = in_R11;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *puVar1 = 0x2532ed6a;
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  *puVar1 = *puVar1 ^ 0x2532ed6a;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(longlong *)(local_res20 + -8) = (longlong)(&LAB_156d0900d + *(longlong *)(local_res20 + -8));
  pcVar5 = FUN_156d08fec;
  *(undefined8 *)(local_res20 + -0x18) = 0x14d841912;
  uVar3 = FUN_156d08fec();
  lVar2 = *(longlong *)(unaff_RDI + unaff_RBP);
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) = *(longlong *)(local_res20 + -0x10) - lVar2;
  *(longlong *)(local_res20 + -0x10) = -*(longlong *)(local_res20 + -0x10);
  *(undefined4 *)(local_res20 + -0x18) = 0x35353bd6;
  *(uint *)(local_res20 + -0x18) = *(uint *)(local_res20 + -0x18) ^ 0x37b189fb;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  lVar2 = *(longlong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  lVar2 = local_res20 + -0x18 + lVar2;
  *(undefined8 *)(lVar2 + -0x284b21d) = uVar4;
  *(undefined8 *)(lVar2 + -0x284b225) = uVar4;
  *(undefined8 *)(lVar2 + -0x284b21d) = *(undefined8 *)(unaff_RDI + -0x90);
  uVar4 = *(undefined8 *)(lVar2 + -0x284b225);
  *(undefined8 *)(lVar2 + -0x284b225) = param_3;
  *(undefined8 *)(lVar2 + -0x284b22d) = param_3;
  *(undefined8 *)(lVar2 + -0x284b235) = uVar4;
  *(undefined8 *)(lVar2 + -0x284b23d) = uVar3;
  *(undefined4 *)(lVar2 + -0x284b23d) = 0x8b40ee8e;
  *(uint *)(lVar2 + -0x284b23d) = *(uint *)(lVar2 + -0x284b23d) ^ 0x13f5c4d8;
  *(undefined4 *)(lVar2 + -0x284b239) = 0xffffffff;
  *(undefined8 *)(lVar2 + -0x284b245) = 0x14d8419bb;
  FUN_16631e286();
  uVar6 = *(ulonglong *)(lVar2 + -0x284b235);
  *(undefined8 *)(lVar2 + -0x284b235) = unaff_R15;
  *(ulonglong *)(lVar2 + -0x284b23d) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(code **)(lVar2 + -0x284b225) = pcVar5 + -0x64ff6fd;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d841a56 FUN_14d841a56 body=173 status=ok
// SIG undefined FUN_14d841a56(void)

/* WARNING: Removing unreachable block (ram,0x00014d841ab1) */

void FUN_14d841a56(int param_1)

{
  longlong unaff_R12;
  
  FUN_160e4e833(param_1 + 0x54de1ca1,FUN_160e4e833,*(undefined8 *)(unaff_R12 + -0x40),
                *(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14d841b97 FUN_14d841b97 body=262 status=ok
// SIG undefined FUN_14d841b97(void)

/* WARNING: Removing unreachable block (ram,0x00014d841ca7) */
/* WARNING: Removing unreachable block (ram,0x00014d841cad) */
/* WARNING: Removing unreachable block (ram,0x000164fb1e87) */

void FUN_14d841b97(undefined8 param_1)

{
  longlong unaff_RDI;
  
  if ((0xffffffffffffd9bc < unaff_RDI - 0x268bU) && (unaff_RDI - 0x268bU < 0xffffffffffffd9bd)) {
    return;
  }
  (*(code *)0x157514831)(param_1);
  return;
}



// FUNCTION 14d841c25 FUN_14d841c25 body=245 status=ok
// SIG undefined FUN_14d841c25(void)

/* WARNING: Removing unreachable block (ram,0x00014d841ca7) */
/* WARNING: Removing unreachable block (ram,0x00014d841cad) */
/* WARNING: Removing unreachable block (ram,0x000164fb1e87) */

void FUN_14d841c25(void)

{
  return;
}



// FUNCTION 14d841e0d FUN_14d841e0d body=150 status=ok
// SIG undefined FUN_14d841e0d(void)

undefined8 FUN_14d841e0d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_15783ac39(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,0x477351c7 - ~in_RAX,
                        ~(~(~unaff_R15 | param_3) | ~(~param_3 | unaff_R15)) ^ 0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14d841ea3 FUN_14d841ea3 body=72 status=ok
// SIG undefined FUN_14d841ea3(void)

undefined8 FUN_14d841ea3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d84201d FUN_14d84201d body=172 status=ok
// SIG undefined FUN_14d84201d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8420cb) */

void FUN_14d84201d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  undefined8 in_stack_00000010;
  ushort local_res18;
  ulonglong local_res20;
  
  local_res18 = ~(local_res18 & (ushort)in_RAX) & (local_res18 | (ushort)in_RAX);
  puVar1 = (undefined8 *)(local_res20 ^ in_RAX);
  if ((local_res18 | 0x100) != 0x100) {
    pcVar2 = (code *)swi(0x2e);
    (*pcVar2)(param_1,param_2,param_3,in_stack_00000010);
    *puVar1 = unaff_RBX;
    puVar1[-1] = unaff_R13;
    puVar1[-2] = unaff_R13;
    puVar1[-1] = &LAB_14de364ed;
    return;
  }
  FUN_14de364c6();
  return;
}



// FUNCTION 14d8420cb FUN_14d8420cb body=131 status=ok
// SIG undefined FUN_14d8420cb(void)

void FUN_14d8420cb(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(ulonglong *)(unaff_RDI + 0x18) =
       param_3 - ~(((param_3 ^ 0xffffffffffffffff) + *(longlong *)(unaff_RDI + 0x18)) -
                  ((param_3 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_RDI + 0x18)));
  *(undefined8 *)(param_5 + -8) = unaff_R14;
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  FUN_157596370(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d84214f FUN_14d84214f body=178 status=ok
// SIG undefined FUN_14d84214f(void)

void FUN_14d84214f(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1622f7ae7(param_1,param_2,0,
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d842201 thunk_FUN_14d842207 body=5 status=ok
// SIG undefined thunk_FUN_14d842207(void)

void thunk_FUN_14d842207(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b3d5987(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d842207 FUN_14d842207 body=12 status=ok
// SIG undefined FUN_14d842207(void)

void FUN_14d842207(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b3d5987(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d842281 FUN_14d842281 body=155 status=ok
// SIG undefined FUN_14d842281(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d842281(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1568a8457(FUN_1568a8457,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d842558 FUN_14d842558 body=49 status=ok
// SIG undefined FUN_14d842558(void)

void FUN_14d842558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165c7153c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8425da FUN_14d8425da body=901 status=ok
// SIG undefined FUN_14d8425da(void)

/* WARNING: Removing unreachable block (ram,0x00014d8426e0) */
/* WARNING: Removing unreachable block (ram,0x00014d8426e6) */
/* WARNING: Removing unreachable block (ram,0x00014d84275c) */
/* WARNING: Removing unreachable block (ram,0x00014d842760) */
/* WARNING: Removing unreachable block (ram,0x00014d842791) */
/* WARNING: Removing unreachable block (ram,0x00014d84279c) */
/* WARNING: Removing unreachable block (ram,0x00014d8427a8) */
/* WARNING: Removing unreachable block (ram,0x00014d8427b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8428d1) */
/* WARNING: Removing unreachable block (ram,0x00014d8428d6) */
/* WARNING: Removing unreachable block (ram,0x00014d8428dc) */
/* WARNING: Removing unreachable block (ram,0x000160f4007b) */
/* WARNING: Removing unreachable block (ram,0x000166a9fce6) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd05) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd09) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd7c) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd82) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd8f) */
/* WARNING: Removing unreachable block (ram,0x000166a9fd95) */
/* WARNING: Removing unreachable block (ram,0x000162c065f4) */
/* WARNING: Removing unreachable block (ram,0x000162c066be) */

void FUN_14d8425da(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  ushort in_AX;
  byte bVar2;
  short sVar3;
  ushort unaff_BX;
  
  sVar3 = (~in_AX | unaff_BX) + in_AX + 1;
  FUN_16208d9a8();
  bVar2 = (byte)param_1;
  bVar1 = (bVar2 & 0x1f) % 9;
  FUN_16212673e(bVar2 >> bVar1 | bVar2 << 9 - bVar1,FUN_16212673e,
                CONCAT62((int6)((ulonglong)(param_1 + param_4 + 0x123379) >> 0x10),sVar3));
  FUN_1649b8e47();
  return;
}



// FUNCTION 14d8429fc FUN_14d8429fc body=233 status=ok
// SIG undefined FUN_14d8429fc(void)

/* WARNING: Removing unreachable block (ram,0x00014d842a93) */
/* WARNING: Removing unreachable block (ram,0x00014d842aeb) */
/* WARNING: Removing unreachable block (ram,0x00014d842a7d) */
/* WARNING: Removing unreachable block (ram,0x0001571ae05d) */
/* WARNING: Removing unreachable block (ram,0x0001571ae063) */
/* WARNING: Removing unreachable block (ram,0x00015743154c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8429fc(void)

{
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  
  FUN_1664f9e7c(in_stack_00000010);
  FUN_15b2335ec(unaff_R15);
  FUN_15b2c2cb4(&DAT_e02e7c626721c4c4 +
                (~(*(ulonglong *)(unaff_R13 + -0x40) & 0xe02e7c626721c4c4) -
                ~*(ulonglong *)(unaff_R13 + -0x40)));
  return;
}



// FUNCTION 14d842d85 FUN_14d842d85 body=7 status=ok
// SIG undefined FUN_14d842d85(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d842d85(void)

{
  undefined4 in_EAX;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x1f829d) = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d842eae FUN_14d842eae body=158 status=ok
// SIG undefined FUN_14d842eae(void)

/* WARNING: Removing unreachable block (ram,0x00014d842fff) */
/* WARNING: Removing unreachable block (ram,0x00014d843005) */
/* WARNING: Removing unreachable block (ram,0x00014dacb158) */

void FUN_14d842eae(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b611d29(param_1,*(undefined8 *)(unaff_R12 + -0x28),
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2,
                param_4 + *(longlong *)(unaff_R12 + -0x30) ^ in_RAX);
  FUN_14dacb158();
  return;
}



// FUNCTION 14d842f4e FUN_14d842f4e body=328 status=ok
// SIG undefined FUN_14d842f4e(void)

/* WARNING: Removing unreachable block (ram,0x00014d842fff) */
/* WARNING: Removing unreachable block (ram,0x00014d843005) */
/* WARNING: Removing unreachable block (ram,0x00014dacb158) */

void FUN_14d842f4e(void)

{
  FUN_14dacb158();
  return;
}


