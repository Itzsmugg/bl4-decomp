// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dbcf158 FUN_14dbcf158 body=172 status=ok
// SIG undefined FUN_14dbcf158(void)

void FUN_14dbcf158(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x10) = in_R9;
  *(undefined8 *)(uVar1 - 0x18) = in_R9;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R14;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14dbcf205;
  return;
}



// FUNCTION 14dbcf481 FUN_14dbcf481 body=593 status=ok
// SIG undefined FUN_14dbcf481(void)

/* WARNING: Removing unreachable block (ram,0x00014dbcf5d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf654) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf659) */
/* WARNING: Removing unreachable block (ram,0x000160d2b9cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf5c5) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf5cb) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf65f) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf6c2) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf526) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf550) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf557) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbcf481(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b07c8d9(FUN_15b07c8d9,param_2,
                ((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x60)) + unaff_RBP +
                 1 ^ 0xffffffffffffffff) & (*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP));
  return;
}



// FUNCTION 14dbcf65f FUN_14dbcf65f body=125 status=ok
// SIG undefined FUN_14dbcf65f(void)

void FUN_14dbcf65f(byte param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,longlong param_7)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  ushort unaff_BX;
  short in_R10W;
  undefined8 unaff_R12;
  bool bVar3;
  bool bVar4;
  ushort local_res8;
  undefined8 uStackX_20;
  
  *param_2 = (-0x100 - (~-(unaff_BX | (in_R10W - (local_res8 ^ 0x4441)) + 0x1b3f) + 2)) + *param_2;
  LOCK();
  bVar3 = in_AL < DAT_14d7ac31a;
  bVar4 = SBORROW1(in_AL,DAT_14d7ac31a);
  cVar1 = in_AL - DAT_14d7ac31a;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7ac31a;
  }
  DAT_14d7ac31a = bVar2;
  UNLOCK();
  *(undefined8 *)(param_7 + -8) = unaff_R12;
  *(undefined8 *)(param_7 + -0x10) = unaff_R12;
  *(ulonglong *)(param_7 + -0x18) =
       (ulonglong)((param_6 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((param_6 & 0x400) != 0) * 0x400 | (ulonglong)((param_6 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_6 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((param_6 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((param_6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_6 & 0x40000) != 0) * 0x40000;
  FUN_156ae978c(param_1,uStackX_20,param_3);
  return;
}



// FUNCTION 14dbcf6e0 FUN_14dbcf6e0 body=133 status=ok
// SIG undefined FUN_14dbcf6e0(void)

/* WARNING: Removing unreachable block (ram,0x00015706166a) */
/* WARNING: Removing unreachable block (ram,0x000157061670) */
/* WARNING: Removing unreachable block (ram,0x0001570615f3) */
/* WARNING: Removing unreachable block (ram,0x00014dbcf766) */

ulonglong FUN_14dbcf6e0(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  ulonglong in_stack_00000008;
  ushort local_res10;
  ulonglong in_stack_00000018;
  
  local_res10 = local_res10 ^ (ushort)in_RAX;
  if (-1 < (longlong)in_stack_00000018) {
    uVar1 = FUN_157061563();
    return uVar1;
  }
  uVar1 = 0xffffffffffffffff - (in_stack_00000018 & in_RAX) & ~(~in_stack_00000018 & ~in_RAX);
  if ((short)((-0x101 - (local_res10 | 0xfeff)) + local_res10) < 0) {
    *(undefined8 *)(uVar1 - 8) = param_2;
    *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
    *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
    *(undefined4 *)(uVar1 - 0x28) = 0xc5bc51ea;
    *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
    *(undefined1 **)(uVar1 - 0x30) = &LAB_156949d69;
    return (~in_stack_00000008 + ~in_RAX) - (~in_stack_00000008 & ~in_RAX) &
           (in_stack_00000008 | in_RAX);
  }
  uVar1 = FUN_156949d2d();
  return uVar1;
}



// FUNCTION 14dbcf766 FUN_14dbcf766 body=349 status=ok
// SIG undefined FUN_14dbcf766(void)

void FUN_14dbcf766(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_16152eafc(param_1,(~unaff_RBP | 0xffffffffffffffffU - param_2) + unaff_RBP + 1);
  return;
}



// FUNCTION 14dbcfbcc FUN_14dbcfbcc body=140 status=ok
// SIG undefined FUN_14dbcfbcc(void)

void FUN_14dbcfbcc(undefined8 param_1)

{
  longlong lVar1;
  longlong in_R10;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  lVar1 = in_R10 + unaff_R15 + (local_res20 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = uStackX_8;
  *(undefined8 *)(lVar1 + -0x10) = local_res10;
  FUN_15648291e(param_1);
  return;
}



// FUNCTION 14dbcfe9e FUN_14dbcfe9e body=125 status=ok
// SIG undefined FUN_14dbcfe9e(void)

ulonglong FUN_14dbcfe9e(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  ulonglong unaff_R12;
  ulonglong uVar3;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar3 = unaff_R12 ^ 0xffffffffffffffff | in_RAX;
  uVar2 = ~((~uVar3 | ~in_RAX | unaff_R12) + uVar3 + 1);
  uVar3 = local_res10 ^ in_RAX;
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar1 - 0x20) = uVar2;
  *(ulonglong *)(uVar1 - 0x28) = uVar2;
  *(ulonglong *)(uVar1 - 0x30) = uVar2;
  *(undefined **)(uVar1 - 0x20) = &DAT_14dbcff1c;
  *(undefined8 *)(uVar1 - 0x28) = 0x1627bca9d;
  return local_res8 ^ in_RAX;
}



// FUNCTION 14dbd005c FUN_14dbd005c body=305 status=ok
// SIG undefined FUN_14dbd005c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd00f4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd00fa) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0153) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0155) */
/* WARNING: Removing unreachable block (ram,0x00014dbd017d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0182) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0188) */
/* WARNING: Removing unreachable block (ram,0x00014dbd018d) */

void FUN_14dbd005c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165a38d6b(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x28)) +
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15) * 2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dbd018d FUN_14dbd018d body=159 status=ok
// SIG undefined FUN_14dbd018d(void)

void FUN_14dbd018d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16598c374(0xffffffffffffff78,*(undefined8 *)(unaff_R13 + -0x88),
                *(undefined8 *)(unaff_R13 + -0x88),
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14dbd0234 FUN_14dbd0234 body=139 status=ok
// SIG undefined FUN_14dbd0234(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbd0234(void)

{
  code *pcVar1;
  ulonglong unaff_RDI;
  
  pcVar1 = FUN_166564e50;
  FUN_166564e50();
  FUN_156f7d595();
  FUN_166848efc(~((unaff_RDI | (ulonglong)pcVar1) &
                 (~(~(ulonglong)pcVar1 & 0xffffffffb6ee37ac) - 0x4911c854) - (longlong)pcVar1),
                DAT_156f7d53d);
  return;
}



// FUNCTION 14dbd02bf FUN_14dbd02bf body=150 status=ok
// SIG undefined FUN_14dbd02bf(void)

void FUN_14dbd02bf(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  
  FUN_156f7d595(param_1,*(ulonglong *)(unaff_RDI - 0x68) ^ param_1,
                -1 - ((unaff_RSI | param_3) & (~param_3 | param_1)));
  FUN_166848efc(~((unaff_RDI | param_1) & (~(~param_1 & 0xffffffffb6ee37ac) - 0x4911c854) - param_1)
                ,DAT_156f7d53d);
  return;
}



// FUNCTION 14dbd0355 FUN_14dbd0355 body=168 status=ok
// SIG undefined FUN_14dbd0355(void)

void FUN_14dbd0355(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  FUN_166848efc(~((unaff_RDI | param_1) & (~(~param_1 & unaff_RBP) + unaff_RBP) - param_1),
                *(undefined8 *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14dbd03fd FUN_14dbd03fd body=124 status=ok
// SIG undefined FUN_14dbd03fd(void)

void FUN_14dbd03fd(void)

{
  return;
}



// FUNCTION 14dbd047a FUN_14dbd047a body=45 status=ok
// SIG undefined FUN_14dbd047a(void)

undefined8 FUN_14dbd047a(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dbd04ff FUN_14dbd04ff body=28 status=ok
// SIG undefined FUN_14dbd04ff(void)

undefined8 FUN_14dbd04ff(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dbd05a0 FUN_14dbd05a0 body=426 status=ok
// SIG undefined FUN_14dbd05a0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd0634) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06b9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0605) */
/* WARNING: Removing unreachable block (ram,0x0001571cdee1) */
/* WARNING: Removing unreachable block (ram,0x0001660c29f4) */
/* WARNING: Removing unreachable block (ram,0x0001571cdee7) */
/* WARNING: Removing unreachable block (ram,0x0001571ce01c) */
/* WARNING: Removing unreachable block (ram,0x0001571ce022) */
/* WARNING: Removing unreachable block (ram,0x0001571ce011) */
/* WARNING: Removing unreachable block (ram,0x000165da1a1f) */
/* WARNING: Removing unreachable block (ram,0x000165da1ac2) */
/* WARNING: Removing unreachable block (ram,0x000165da1acd) */
/* WARNING: Removing unreachable block (ram,0x000165da1ac7) */
/* WARNING: Removing unreachable block (ram,0x000165da1ad2) */
/* WARNING: Removing unreachable block (ram,0x00014e212294) */
/* WARNING: Removing unreachable block (ram,0x00014e21229a) */
/* WARNING: Removing unreachable block (ram,0x0001571cdd95) */
/* WARNING: Removing unreachable block (ram,0x0001571cddcb) */
/* WARNING: Removing unreachable block (ram,0x0001571cddbb) */
/* WARNING: Removing unreachable block (ram,0x0001571cddd5) */
/* WARNING: Removing unreachable block (ram,0x0001571cde1e) */
/* WARNING: Removing unreachable block (ram,0x0001571cde3f) */
/* WARNING: Removing unreachable block (ram,0x0001571cdedc) */
/* WARNING: Removing unreachable block (ram,0x0001571cde34) */
/* WARNING: Removing unreachable block (ram,0x0001571cde13) */
/* WARNING: Removing unreachable block (ram,0x0001662c276a) */
/* WARNING: Removing unreachable block (ram,0x0001662c27ad) */
/* WARNING: Removing unreachable block (ram,0x0001662c27b1) */
/* WARNING: Removing unreachable block (ram,0x00014e212325) */
/* WARNING: Removing unreachable block (ram,0x00014e21232b) */
/* WARNING: Removing unreachable block (ram,0x00014e212330) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06be) */
/* WARNING: Removing unreachable block (ram,0x0001619db3d2) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06e0) */
/* WARNING: Removing unreachable block (ram,0x000161cc67d6) */
/* WARNING: Removing unreachable block (ram,0x000161cc6802) */
/* WARNING: Removing unreachable block (ram,0x000161cc6808) */
/* WARNING: Removing unreachable block (ram,0x000162281507) */
/* WARNING: Removing unreachable block (ram,0x00016228150c) */
/* WARNING: Removing unreachable block (ram,0x000162281512) */
/* WARNING: Removing unreachable block (ram,0x000162281517) */
/* WARNING: Removing unreachable block (ram,0x00014db273d0) */

undefined8 FUN_14dbd05a0(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong in_R11;
  longlong unaff_retaddr;
  
  if ((int)((uint)(unaff_retaddr ==
                  in_R11 + (~(((unaff_RBP | 0xffffffffa38376ef) -
                              (~(unaff_RBP & 0xffffffffa38376ef) | unaff_RBP | 0xffffffffa38376ef))
                             + ~(unaff_RBP & 0xffffffffa38376ef)) ^ 0x13768b66)) << 0x1f) < 0) {
    uVar1 = FUN_14d8ac0f8();
    return uVar1;
  }
  uVar1 = FUN_1629d0484();
  return uVar1;
}



// FUNCTION 14dbd0634 FUN_14dbd0634 body=574 status=ok
// SIG undefined FUN_14dbd0634(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd06be) */
/* WARNING: Removing unreachable block (ram,0x0001619db3d2) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbd06e0) */
/* WARNING: Removing unreachable block (ram,0x000161cc67d6) */
/* WARNING: Removing unreachable block (ram,0x000161cc6802) */
/* WARNING: Removing unreachable block (ram,0x000161cc6808) */
/* WARNING: Removing unreachable block (ram,0x000162281507) */
/* WARNING: Removing unreachable block (ram,0x00016228150c) */
/* WARNING: Removing unreachable block (ram,0x000162281512) */
/* WARNING: Removing unreachable block (ram,0x000162281517) */
/* WARNING: Removing unreachable block (ram,0x00014db273d0) */

undefined8 FUN_14dbd0634(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1619db3d2();
  return uVar1;
}



// FUNCTION 14dbd078a FUN_14dbd078a body=307 status=ok
// SIG undefined FUN_14dbd078a(void)

/* WARNING: Removing unreachable block (ram,0x00016541b484) */
/* WARNING: Removing unreachable block (ram,0x00016541b48a) */
/* WARNING: Removing unreachable block (ram,0x00016541b48f) */
/* WARNING: Removing unreachable block (ram,0x00016541b402) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0823) */

void FUN_14dbd078a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  ushort uStackX_10;
  ulonglong local_res18;
  
  lVar4 = ((param_1 - 1) - ~local_res18) + ~(~local_res18 | ~param_1) * -2;
  if (!CARRY2(~(uStackX_10 | 0xfeff) - 0x100,uStackX_10)) {
    FUN_162d51ba0();
    return;
  }
  *(undefined8 *)(lVar4 + -8) = in_stack_00000008;
  *(undefined8 *)(lVar4 + -0x10) = unaff_R14;
  *(undefined8 *)(lVar4 + -0x18) = unaff_R14;
  *(undefined8 *)(lVar4 + -0x20) = in_RAX;
  *(undefined4 *)(lVar4 + -0x28) = 0x2f8839f7;
  *(undefined4 *)(lVar4 + -0x24) = 0;
  uVar2 = *(ulonglong *)(lVar4 + -0x28);
  *(undefined8 *)(lVar4 + -0x28) = param_4;
  uVar3 = *(undefined8 *)(lVar4 + -0x28);
  *(undefined8 *)(lVar4 + -0x18 + (uVar2 ^ 0x2f8839ff)) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar4 + -8) = 0;
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = uVar3;
  lVar1 = *(longlong *)(lVar4 + -8);
  *(ulonglong *)(lVar4 + -8) = *(ulonglong *)(lVar4 + -8) & 0x16694d00f;
  *(longlong *)(lVar4 + -8) = *(longlong *)(lVar4 + -8) << 1;
  *(undefined1 **)(lVar4 + -8) = &LAB_16694d00f + (lVar1 - *(longlong *)(lVar4 + -8));
  FUN_16694cfca(FUN_16694cfca,param_2,param_3,*(undefined8 *)(lVar4 + -0x18));
  return;
}



// FUNCTION 14dbd0823 FUN_14dbd0823 body=169 status=ok
// SIG undefined FUN_14dbd0823(void)

void FUN_14dbd0823(void)

{
  return;
}



// FUNCTION 14dbd08cc FUN_14dbd08cc body=225 status=ok
// SIG undefined FUN_14dbd08cc(void)

void FUN_14dbd08cc(void)

{
  FUN_1616afe8c();
  return;
}



// FUNCTION 14dbd0ce2 FUN_14dbd0ce2 body=87 status=ok
// SIG undefined FUN_14dbd0ce2(void)

void FUN_14dbd0ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  code *pcVar1;
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
  undefined8 local_res8;
  ulonglong uStackX_18;
  undefined8 *local_res20;
  
  *param_4 = (*param_4 | 0x100) - 0x100;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x200) != 0;
  bVar7 = (uStackX_18 & 0x100) != 0;
  bVar6 = (uStackX_18 & 0x80) != 0;
  bVar5 = (uStackX_18 & 0x40) != 0;
  bVar4 = (uStackX_18 & 0x10) != 0;
  bVar3 = (uStackX_18 & 4) != 0;
  bVar2 = (uStackX_18 & 1) != 0;
  bVar14 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr,param_2,param_3,local_res8);
  *local_res20 = param_3;
  local_res20[-1] = param_3;
  local_res20[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  local_res20[-3] = 0x14dbd0d35;
  FUN_156beba19();
  FUN_14dbd0d3b();
  return;
}



// FUNCTION 14dbd0d3b FUN_14dbd0d3b body=188 status=ok
// SIG undefined FUN_14dbd0d3b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbd0d3b(void)

{
  FUN_161c28c6b();
  return;
}



// FUNCTION 14dbd0dfd FUN_14dbd0dfd body=309 status=ok
// SIG undefined FUN_14dbd0dfd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd0f29) */
/* WARNING: Removing unreachable block (ram,0x00014dbd0f2f) */
/* WARNING: Removing unreachable block (ram,0x00015b4b66ce) */

void FUN_14dbd0dfd(ulonglong param_1)

{
  ulonglong unaff_RDI;
  ulonglong *unaff_R13;
  
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | param_1;
  *unaff_R13 = 0xffffffffffffffff - (unaff_RDI & *unaff_R13);
  FUN_156d85803();
  FUN_15b4b66ce();
  return;
}



// FUNCTION 14dbd0f35 FUN_14dbd0f35 body=134 status=ok
// SIG undefined FUN_14dbd0f35(void)

void FUN_14dbd0f35(void)

{
  longlong unaff_R12;
  ulonglong unaff_R13;
  
  *(undefined8 *)(unaff_R12 + 8) = 0;
  *(longlong *)(unaff_R12 + 8) = *(longlong *)(unaff_R12 + 8) + ~unaff_R13;
  return;
}



// FUNCTION 14dbd0fbc FUN_14dbd0fbc body=172 status=ok
// SIG undefined FUN_14dbd0fbc(void)

void FUN_14dbd0fbc(void)

{
  FUN_160d4e1ce();
  return;
}



// FUNCTION 14dbd110f FUN_14dbd110f body=21 status=ok
// SIG undefined FUN_14dbd110f(void)

void FUN_14dbd110f(void)

{
  return;
}



// FUNCTION 14dbd137f FUN_14dbd137f body=138 status=ok
// SIG undefined FUN_14dbd137f(void)

void FUN_14dbd137f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000020;
  
  *in_RAX = ~unaff_RBP;
  FUN_1610a31c4(param_1,0x76b1fcba,param_3,unaff_retaddr,~(~in_stack_00000020 | ~unaff_R15) << 1);
  return;
}



// FUNCTION 14dbd1546 FUN_14dbd1546 body=190 status=ok
// SIG undefined FUN_14dbd1546(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd1605) */

undefined8 FUN_14dbd1546(void)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R14;
  undefined8 unaff_R15;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined4 *)(local_res18 + -0x28) = 0xfbab2227;
  *(undefined4 *)(local_res18 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res18 + *(longlong *)(local_res18 + -0x28) + 0x454ddc9) =
       *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined1 **)(local_res18 + -8) = &LAB_16292710b;
                    /* WARNING: Could not recover jumptable at 0x0001629270e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(local_res18 + -0x18))();
  return uVar2;
}



// FUNCTION 14dbd1605 FUN_14dbd1605 body=87 status=ok
// SIG undefined FUN_14dbd1605(void)

void FUN_14dbd1605(void)

{
  return;
}



// FUNCTION 14dbd16b2 FUN_14dbd16b2 body=20 status=ok
// SIG undefined FUN_14dbd16b2(void)

void FUN_14dbd16b2(void)

{
  return;
}



// FUNCTION 14dbd16cc FUN_14dbd16cc body=239 status=ok
// SIG undefined FUN_14dbd16cc(void)

void FUN_14dbd16cc(void)

{
  FUN_16257a462();
  return;
}



// FUNCTION 14dbd17bf FUN_14dbd17bf body=76 status=ok
// SIG undefined FUN_14dbd17bf(void)

undefined8 FUN_14dbd17bf(void)

{
  undefined8 in_RAX;
  undefined8 unaff_R12;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x2b47e614 + unaff_retaddr) = unaff_R12;
  return in_RAX;
}



// FUNCTION 14dbd180b FUN_14dbd180b body=91 status=ok
// SIG undefined FUN_14dbd180b(void)

void FUN_14dbd180b(void)

{
  (*(code *)&LAB_164f18355)(&stack0x00000000);
  return;
}



// FUNCTION 14dbd19f7 FUN_14dbd19f7 body=75 status=ok
// SIG undefined FUN_14dbd19f7(void)

void FUN_14dbd19f7(void)

{
  FUN_162532027();
  return;
}



// FUNCTION 14dbd1ac7 FUN_14dbd1ac7 body=12 status=ok
// SIG undefined FUN_14dbd1ac7(void)

void FUN_14dbd1ac7(undefined8 param_1)

{
  undefined8 *unaff_R14;
  undefined8 uStackX_10;
  
  *unaff_R14 = param_1;
  FUN_14d85d504(uStackX_10);
  return;
}



// FUNCTION 14dbd1bf9 FUN_14dbd1bf9 body=348 status=ok
// SIG undefined FUN_14dbd1bf9(void)

/* WARNING: Removing unreachable block (ram,0x00015b47c170) */
/* WARNING: Removing unreachable block (ram,0x00014dbd1c98) */

void FUN_14dbd1bf9(void)

{
  FUN_161c767da();
  return;
}



// FUNCTION 14dbd2191 FUN_14dbd2191 body=15 status=ok
// SIG undefined FUN_14dbd2191(void)

void FUN_14dbd2191(void)

{
  return;
}



// FUNCTION 14dbd21a0 FUN_14dbd21a0 body=118 status=ok
// SIG undefined FUN_14dbd21a0(void)

/* WARNING: Removing unreachable block (ram,0x000164820478) */
/* WARNING: Removing unreachable block (ram,0x0001648204e5) */
/* WARNING: Removing unreachable block (ram,0x0001648204ef) */
/* WARNING: Removing unreachable block (ram,0x00014dbd228b) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2314) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2319) */
/* WARNING: Removing unreachable block (ram,0x000166434780) */
/* WARNING: Removing unreachable block (ram,0x0001664347fc) */
/* WARNING: Removing unreachable block (ram,0x000166434802) */
/* WARNING: Removing unreachable block (ram,0x0001574741c6) */
/* WARNING: Removing unreachable block (ram,0x00014dbd231f) */

undefined8 FUN_14dbd21a0(void)

{
  undefined8 uVar1;
  
  FUN_1564961dd();
  uVar1 = FUN_164820478();
  return uVar1;
}



// FUNCTION 14dbd2218 FUN_14dbd2218 body=120 status=ok
// SIG undefined FUN_14dbd2218(void)

/* WARNING: Removing unreachable block (ram,0x000164820478) */
/* WARNING: Removing unreachable block (ram,0x0001648204e5) */
/* WARNING: Removing unreachable block (ram,0x0001648204ef) */
/* WARNING: Removing unreachable block (ram,0x00014dbd228b) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2314) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2319) */
/* WARNING: Removing unreachable block (ram,0x000166434780) */
/* WARNING: Removing unreachable block (ram,0x0001664347fc) */
/* WARNING: Removing unreachable block (ram,0x000166434802) */
/* WARNING: Removing unreachable block (ram,0x0001574741c6) */
/* WARNING: Removing unreachable block (ram,0x00014dbd231f) */

undefined8 FUN_14dbd2218(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164820478();
  return uVar1;
}



// FUNCTION 14dbd2291 FUN_14dbd2291 body=301 status=ok
// SIG undefined FUN_14dbd2291(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd231f) */
/* WARNING: Removing unreachable block (ram,0x000166434802) */

undefined8 FUN_14dbd2291(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)(ushort)(param_1 >> 0x30) | (uint)((param_1 << 0x30) >> 0x20);
  iVar3 = (0xffff - (uVar4 | 0xffff)) + uVar4;
  uVar2 = CONCAT44(iVar3,(int)(param_1 >> 0x10));
  if (iVar3 == 0) {
    uVar2 = ~(param_1 & uVar2) & (param_1 | uVar2);
    uVar2 = uVar2 + (uVar2 >> 0x20) + (uVar2 & uVar2 >> 0x20) * -2;
    uVar1 = FUN_160e7b2c5((1 - ((~(ulonglong)((uint)uVar2 & 1) + 1) - ~uVar2)) + uVar2,param_2,
                          param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_166434780();
  return uVar1;
}



// FUNCTION 14dbd2503 FUN_14dbd2503 body=152 status=ok
// SIG undefined FUN_14dbd2503(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd2591) */
/* WARNING: Removing unreachable block (ram,0x00014dbd25a2) */
/* WARNING: Removing unreachable block (ram,0x00014dbd25ee) */
/* WARNING: Removing unreachable block (ram,0x00014dbd25f1) */
/* WARNING: Removing unreachable block (ram,0x00014e18224c) */
/* WARNING: Removing unreachable block (ram,0x00014e182349) */
/* WARNING: Removing unreachable block (ram,0x00014e18234f) */
/* WARNING: Removing unreachable block (ram,0x000164af81a0) */
/* WARNING: Removing unreachable block (ram,0x00014e1822a5) */
/* WARNING: Removing unreachable block (ram,0x00014e1822ab) */
/* WARNING: Removing unreachable block (ram,0x00014e182344) */
/* WARNING: Removing unreachable block (ram,0x00015762c074) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2597) */

undefined8 FUN_14dbd2503(void)

{
  undefined8 uVar1;
  
  FUN_1622e8eb6();
  uVar1 = FUN_15762c074();
  return uVar1;
}



// FUNCTION 14dbd25a2 FUN_14dbd25a2 body=156 status=ok
// SIG undefined FUN_14dbd25a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd25ee) */

void FUN_14dbd25a2(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1570d1f62(param_1,param_2,FUN_1570d1f62,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14dbd26e7 FUN_14dbd26e7 body=285 status=ok
// SIG undefined FUN_14dbd26e7(void)

void FUN_14dbd26e7(undefined8 param_1)

{
  FUN_166b91af9(param_1);
  FUN_15700f266();
  return;
}



// FUNCTION 14dbd2808 FUN_14dbd2808 body=864 status=ok
// SIG undefined FUN_14dbd2808(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd2890) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2896) */
/* WARNING: Removing unreachable block (ram,0x00014dbd28f6) */
/* WARNING: Removing unreachable block (ram,0x00014dbd28fa) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2a3f) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2a45) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2a4a) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2ac3) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2ac9) */
/* WARNING: Removing unreachable block (ram,0x00016542285f) */
/* WARNING: Removing unreachable block (ram,0x000162cde820) */
/* WARNING: Removing unreachable block (ram,0x000162cde8bf) */
/* WARNING: Removing unreachable block (ram,0x000162cde8c4) */
/* WARNING: Removing unreachable block (ram,0x000162cde8ca) */
/* WARNING: Removing unreachable block (ram,0x000162cde8cf) */
/* WARNING: Removing unreachable block (ram,0x000162cde938) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dbd2808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e0b47a1(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dbd2ac9 FUN_14dbd2ac9 body=172 status=ok
// SIG undefined FUN_14dbd2ac9(void)

void FUN_14dbd2ac9(void)

{
  FUN_1572bfa93();
  return;
}



// FUNCTION 14dbd2d36 FUN_14dbd2d36 body=554 status=ok
// SIG undefined FUN_14dbd2d36(void)

/* WARNING: Removing unreachable block (ram,0x00015b034b8c) */
/* WARNING: Removing unreachable block (ram,0x00015b034b92) */
/* WARNING: Removing unreachable block (ram,0x00015b034bd4) */
/* WARNING: Removing unreachable block (ram,0x00015b034bd8) */
/* WARNING: Removing unreachable block (ram,0x00015b034c2e) */
/* WARNING: Removing unreachable block (ram,0x00015b034c34) */
/* WARNING: Removing unreachable block (ram,0x00014dca040f) */
/* WARNING: Removing unreachable block (ram,0x00015b034c39) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbd2d36(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char unaff_BPL;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160da684e();
  if (-1 < unaff_BPL) {
    uVar3 = unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x78);
    uVar2 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
    uVar1 = FUN_164fb6447(~((uVar2 - (uVar3 | uVar2)) + uVar3),
                          ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + unaff_R15 + 1 ^
                          0xffffffffffffffff) & (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),
                          *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                          (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                          *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
    return uVar1;
  }
  return 0xa679;
}



// FUNCTION 14dbd2e42 FUN_14dbd2e42 body=308 status=ok
// SIG undefined FUN_14dbd2e42(void)

undefined8 FUN_14dbd2e42(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = in_R10;
  *(undefined8 *)(param_1 - 0x10) = param_2;
  *(undefined8 *)(param_1 - 0x18) = param_2;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  uVar3 = *(undefined8 *)(param_1 - 0x18);
  *(undefined8 *)(param_1 - 0x18) = in_RAX;
  *(undefined1 **)(param_1 - 8) = &LAB_165fec11c;
  uVar5 = *(undefined8 *)(param_1 - 0x18);
  bVar4 = (byte)local_res10 & 0xf;
  bVar1 = (local_res10 & 0x1f) != 0;
  bVar2 = ((-0x3ee4 << bVar4 | 0xc11cU >> 0x10 - bVar4) & 1) == 0;
  if ((!bVar1 || bVar1 && !bVar2) && (bVar1 && (!bVar1 || bVar2))) {
    *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R13 + -0x40);
    *(undefined8 *)(param_1 - 0x18) = uVar5;
    *(undefined8 *)(param_1 - 0x20) = unaff_RSI;
    uVar5 = *(undefined8 *)(param_1 - 0x18);
    *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R13 + -0x60);
    *(undefined8 *)(param_1 - 0x18) = uVar5;
    *(undefined8 *)(param_1 - 0x20) = uVar5;
    *(undefined8 *)(param_1 - 0x28) = uVar5;
    *(code **)(param_1 - 0x18) = FUN_14dbd2f7a;
    *(undefined1 **)(param_1 - 0x20) = &LAB_165231a6e;
    return *(undefined8 *)(param_1 - 0x28);
  }
  uVar5 = FUN_14d7ac173(local_res10,uVar3,param_3,unaff_retaddr);
  return uVar5;
}



// FUNCTION 14dbd2f7a FUN_14dbd2f7a body=135 status=ok
// SIG undefined FUN_14dbd2f7a(void)

void FUN_14dbd2f7a(undefined8 param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong unaff_R13;
  bool bVar9;
  byte in_AF;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte in_TF;
  bool bVar13;
  byte in_IF;
  bool bVar14;
  bool bVar15;
  byte in_NT;
  bool bVar16;
  byte in_AC;
  bool bVar17;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar18;
  ulonglong uVar19;
  
  uVar8 = *(undefined8 *)(unaff_R13 + -0x98);
  pcVar4 = FUN_15696fdf4;
  FUN_15696fdf4();
  lVar2 = *(longlong *)(unaff_R13 + -8);
  pcVar7 = FUN_160c96b4f;
  FUN_160c96b4f();
  *(code **)pcVar4 = pcVar7;
  *(code **)(pcVar4 + -8) = pcVar4;
  lVar3 = *(longlong *)(pcVar4 + -8);
  *(ulonglong *)(pcVar4 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  uVar19 = *(ulonglong *)(pcVar4 + -8);
  bVar16 = (uVar19 & 0x4000) != 0;
  bVar15 = (uVar19 & 0x400) != 0;
  bVar14 = (uVar19 & 0x200) != 0;
  bVar13 = (uVar19 & 0x100) != 0;
  bVar10 = (uVar19 & 0x10) != 0;
  bVar18 = (uVar19 & 0x200000) != 0;
  bVar17 = (uVar19 & 0x40000) != 0;
  *(undefined8 *)(lVar3 + -8) = uVar8;
  *(ulonglong *)(lVar3 + -0x10) =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 | (ulonglong)bVar13 * 0x100 |
       (ulonglong)((uVar19 & 0x80) != 0) * 0x80 | (ulonglong)((uVar19 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)((uVar19 & 4) != 0) * 4 |
       (ulonglong)((uVar19 & 1) != 0) | (ulonglong)bVar18 * 0x200000 | (ulonglong)bVar17 * 0x40000;
  *(ushort *)(lVar3 + -0x10) = *(ushort *)(lVar3 + -0x10) & 0x100;
  bVar12 = *(short *)(lVar3 + -0x10) < 0;
  bVar11 = *(short *)(lVar3 + -0x10) == 0;
  bVar9 = (POPCOUNT(*(ushort *)(lVar3 + -0x10) & 0xff) & 1U) == 0;
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
       (ulonglong)bVar13 * 0x100 | (ulonglong)bVar12 * 0x80 | (ulonglong)bVar11 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar9 * 4 | (ulonglong)bVar18 * 0x200000 |
       (ulonglong)bVar17 * 0x40000;
  *(ulonglong *)(lVar3 + -0x20) =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
       (ulonglong)bVar13 * 0x100 | (ulonglong)bVar12 * 0x80 | (ulonglong)bVar11 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar9 * 4 | (ulonglong)bVar18 * 0x200000 |
       (ulonglong)bVar17 * 0x40000;
  *(int *)(lVar3 + -0x20) = *(int *)(lVar3 + -0x20) << 0x19;
  *(uint *)(lVar3 + -0x20) = *(uint *)(lVar3 + -0x20) >> 0x1f;
  if (*(int *)(lVar3 + -0x20) == 0) {
    uVar19 = *(ulonglong *)(lVar3 + -0x18);
    puVar5 = (undefined1 *)(lVar3 + -0x10);
    bVar13 = (uVar19 & 0x800) != 0;
    bVar12 = (uVar19 & 0x80) != 0;
    bVar11 = (uVar19 & 0x40) != 0;
    bVar10 = (uVar19 & 4) != 0;
    bVar9 = (uVar19 & 1) != 0;
  }
  else {
    uVar19 = *(ulonglong *)(lVar3 + -0x18);
    bVar9 = &DAT_fffffffffffffff7 < (undefined1 *)(lVar3 + -0x10);
    bVar13 = SCARRY8(lVar3 + -0x10,8);
    puVar5 = (undefined1 *)(lVar3 + -8);
    bVar12 = lVar3 + -8 < 0;
    bVar11 = lVar3 == 8;
    bVar10 = (POPCOUNT(lVar3 - 8U & 0xff) & 1U) == 0;
  }
  *(undefined8 *)(puVar5 + -8) = 0;
  *(ulonglong *)(puVar5 + -0x10) =
       (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar13 * 0x800 |
       (ulonglong)((uVar19 & 0x400) != 0) * 0x400 | (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar19 & 0x100) != 0) * 0x100 | (ulonglong)bVar12 * 0x80 |
       (ulonglong)bVar11 * 0x40 | (ulonglong)((uVar19 & 0x10) != 0) * 0x10 | (ulonglong)bVar10 * 4 |
       (ulonglong)bVar9 | (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
  *(ushort *)(puVar5 + -0x10) = *(ushort *)(puVar5 + -0x10) & 0x100;
  plVar6 = (longlong *)(puVar5 + -0x10);
  if (*(short *)(puVar5 + -0x10) == 0) {
    plVar6 = (longlong *)(puVar5 + -8);
  }
  *plVar6 = *plVar6 - lVar2;
  *plVar6 = -*plVar6;
  puVar1 = (uint *)(plVar6 + -1);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x1c41347;
  *(undefined4 *)((longlong)plVar6 + -4) = 0;
  thunk_FUN_165681b9a(param_1,*(undefined8 *)puVar1);
  return;
}



// FUNCTION 14dbd3003 FUN_14dbd3003 body=441 status=ok
// SIG undefined FUN_14dbd3003(void)

void FUN_14dbd3003(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong unaff_R13;
  bool bVar7;
  byte in_AF;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte in_TF;
  bool bVar11;
  byte in_IF;
  bool bVar12;
  bool bVar13;
  byte in_NT;
  bool bVar14;
  byte in_AC;
  bool bVar15;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(unaff_R13 + -8);
  pcVar6 = FUN_160c96b4f;
  FUN_160c96b4f();
  *param_2 = pcVar6;
  param_2[-1] = param_2;
  lVar3 = param_2[-1];
  param_2[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  uVar17 = param_2[-1];
  bVar14 = (uVar17 & 0x4000) != 0;
  bVar13 = (uVar17 & 0x400) != 0;
  bVar12 = (uVar17 & 0x200) != 0;
  bVar11 = (uVar17 & 0x100) != 0;
  bVar8 = (uVar17 & 0x10) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar15 = (uVar17 & 0x40000) != 0;
  *(undefined8 *)(lVar3 + -8) = local_res8;
  *(ulonglong *)(lVar3 + -0x10) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar11 * 0x100 |
       (ulonglong)((uVar17 & 0x80) != 0) * 0x80 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar8 * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0)
       | (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
  *(ushort *)(lVar3 + -0x10) = *(ushort *)(lVar3 + -0x10) & 0x100;
  bVar10 = *(short *)(lVar3 + -0x10) < 0;
  bVar9 = *(short *)(lVar3 + -0x10) == 0;
  bVar7 = (POPCOUNT(*(ushort *)(lVar3 + -0x10) & 0xff) & 1U) == 0;
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 |
       (ulonglong)bVar11 * 0x100 | (ulonglong)bVar10 * 0x80 | (ulonglong)bVar9 * 0x40 |
       (ulonglong)bVar8 * 0x10 | (ulonglong)bVar7 * 4 | (ulonglong)bVar16 * 0x200000 |
       (ulonglong)bVar15 * 0x40000;
  *(ulonglong *)(lVar3 + -0x20) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 |
       (ulonglong)bVar11 * 0x100 | (ulonglong)bVar10 * 0x80 | (ulonglong)bVar9 * 0x40 |
       (ulonglong)bVar8 * 0x10 | (ulonglong)bVar7 * 4 | (ulonglong)bVar16 * 0x200000 |
       (ulonglong)bVar15 * 0x40000;
  *(int *)(lVar3 + -0x20) = *(int *)(lVar3 + -0x20) << 0x19;
  *(uint *)(lVar3 + -0x20) = *(uint *)(lVar3 + -0x20) >> 0x1f;
  if (*(int *)(lVar3 + -0x20) == 0) {
    uVar17 = *(ulonglong *)(lVar3 + -0x18);
    puVar4 = (undefined1 *)(lVar3 + -0x10);
    bVar11 = (uVar17 & 0x800) != 0;
    bVar10 = (uVar17 & 0x80) != 0;
    bVar9 = (uVar17 & 0x40) != 0;
    bVar8 = (uVar17 & 4) != 0;
    bVar7 = (uVar17 & 1) != 0;
  }
  else {
    uVar17 = *(ulonglong *)(lVar3 + -0x18);
    bVar7 = &DAT_fffffffffffffff7 < (undefined1 *)(lVar3 + -0x10);
    bVar11 = SCARRY8(lVar3 + -0x10,8);
    puVar4 = (undefined1 *)(lVar3 + -8);
    bVar10 = lVar3 + -8 < 0;
    bVar9 = lVar3 == 8;
    bVar8 = (POPCOUNT(lVar3 - 8U & 0xff) & 1U) == 0;
  }
  *(undefined8 *)(puVar4 + -8) = 0;
  *(ulonglong *)(puVar4 + -0x10) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar11 * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)bVar10 * 0x80 |
       (ulonglong)bVar9 * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 | (ulonglong)bVar8 * 4 |
       (ulonglong)bVar7 | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(ushort *)(puVar4 + -0x10) = *(ushort *)(puVar4 + -0x10) & 0x100;
  plVar5 = (longlong *)(puVar4 + -0x10);
  if (*(short *)(puVar4 + -0x10) == 0) {
    plVar5 = (longlong *)(puVar4 + -8);
  }
  *plVar5 = *plVar5 - lVar2;
  *plVar5 = -*plVar5;
  puVar1 = (uint *)(plVar5 + -1);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x1c41347;
  *(undefined4 *)((longlong)plVar5 + -4) = 0;
  thunk_FUN_165681b9a(param_1,*(undefined8 *)puVar1);
  return;
}



// FUNCTION 14dbd314b FUN_14dbd314b body=144 status=ok
// SIG undefined FUN_14dbd314b(void)

void FUN_14dbd314b(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = ~(local_res18 & unaff_R15) & param_3;
  local_res20 = local_res20 ^ unaff_R15;
  FUN_166282abf(&local_res10,param_2,local_res10);
  FUN_165dc09fc();
  return;
}



// FUNCTION 14dbd326d FUN_14dbd326d body=154 status=ok
// SIG undefined FUN_14dbd326d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd3307) */

undefined8 FUN_14dbd326d(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong uVar3;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  
  uVar3 = -(~(~(~in_stack_00000028 | unaff_R15) | unaff_R15 ^ 0xffffffffffffffff | in_stack_00000028
             ) + 2);
  uVar2 = ~(~in_stack_00000028 | unaff_R15);
  if (uVar3 < uVar2) {
    uVar1 = FUN_14e1e6537();
    return uVar1;
  }
  uVar2 = ~((uVar3 - uVar2) + 1);
  *(undefined8 *)(uVar2 - 8) = 0x1e7b884;
  *(undefined8 *)(uVar2 - 0x10) = local_res10;
  *(undefined8 *)(uVar2 - 0x18) = local_res10;
  *(undefined8 *)(uVar2 - 0x20) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = 0x156ef2e25;
  return in_RAX;
}



// FUNCTION 14dbd3307 FUN_14dbd3307 body=135 status=ok
// SIG undefined FUN_14dbd3307(void)

void FUN_14dbd3307(void)

{
  FUN_165524054();
  return;
}



// FUNCTION 14dbd357f FUN_14dbd357f body=154 status=ok
// SIG undefined FUN_14dbd357f(void)

void FUN_14dbd357f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16554f627(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dbd3743 FUN_14dbd3743 body=297 status=ok
// SIG undefined FUN_14dbd3743(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd3862) */
/* WARNING: Removing unreachable block (ram,0x00014dbd386d) */
/* WARNING: Removing unreachable block (ram,0x00016623788e) */
/* WARNING: Removing unreachable block (ram,0x00016623791c) */
/* WARNING: Removing unreachable block (ram,0x000166237922) */
/* WARNING: Removing unreachable block (ram,0x000166237917) */
/* WARNING: Removing unreachable block (ram,0x0001668cf9ca) */
/* WARNING: Removing unreachable block (ram,0x000166237a2e) */
/* WARNING: Removing unreachable block (ram,0x000166237a32) */
/* WARNING: Removing unreachable block (ram,0x00016107fa7f) */
/* WARNING: Removing unreachable block (ram,0x00016107fa85) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3868) */

undefined8 FUN_14dbd3743(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = ~*(ulonglong *)(unaff_R14 + 0x10);
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) | param_1;
  *(ulonglong *)(unaff_R14 + 0x10) =
       ~(0xffffffffffffffff -
         (-~(param_4 ^ 0xffffffffffffffff) -
         (~(~uVar1 - (param_4 ^ 0xffffffffffffffff | ~uVar1)) + 2)) &
        *(ulonglong *)(unaff_R14 + 0x10));
  FUN_165f56ed8();
  uVar2 = FUN_16623788e();
  return uVar2;
}



// FUNCTION 14dbd386d FUN_14dbd386d body=87 status=ok
// SIG undefined FUN_14dbd386d(void)

undefined1 FUN_14dbd386d(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  short *unaff_RSI;
  undefined8 in_R10;
  short unaff_R13W;
  longlong local_res20;
  
  *unaff_RSI = (-0x101 - unaff_R13W) + *unaff_RSI;
  LOCK();
  uVar1 = DAT_14d7a9c63;
  UNLOCK();
  DAT_14d7a9c63 = in_AL;
  *(undefined8 *)(local_res20 + -8) = 0x281734a;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(code **)(local_res20 + -0x10) = FUN_14d85d504;
  return uVar1;
}



// FUNCTION 14dbd391b FUN_14dbd391b body=116 status=ok
// SIG undefined FUN_14dbd391b(void)

/* WARNING: Instruction at (ram,0x00015b8aa948) overlaps instruction at (ram,0x00015b8aa947)
    */
/* WARNING: Removing unreachable block (ram,0x000160d19f86) */
/* WARNING: Removing unreachable block (ram,0x000160d19f8c) */
/* WARNING: Removing unreachable block (ram,0x00015b49ff76) */
/* WARNING: Removing unreachable block (ram,0x000161344b28) */
/* WARNING: Removing unreachable block (ram,0x000161344bb6) */
/* WARNING: Removing unreachable block (ram,0x000161344bbb) */
/* WARNING: Removing unreachable block (ram,0x000161344bc1) */
/* WARNING: Removing unreachable block (ram,0x00015684cf23) */
/* WARNING: Removing unreachable block (ram,0x00015684cfaa) */
/* WARNING: Removing unreachable block (ram,0x00015684cfb0) */
/* WARNING: Removing unreachable block (ram,0x00014de37caf) */
/* WARNING: Removing unreachable block (ram,0x00014de37d31) */
/* WARNING: Removing unreachable block (ram,0x00014de37d37) */
/* WARNING: Removing unreachable block (ram,0x000161bb8dd4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3984) */
/* WARNING: Removing unreachable block (ram,0x00014dbd398a) */
/* WARNING: Removing unreachable block (ram,0x000165723f7a) */
/* WARNING: Removing unreachable block (ram,0x000165723f80) */
/* WARNING: Removing unreachable block (ram,0x000165724003) */
/* WARNING: Removing unreachable block (ram,0x00016572400f) */
/* WARNING: Removing unreachable block (ram,0x0001610803df) */
/* WARNING: Removing unreachable block (ram,0x000165f0144a) */
/* WARNING: Removing unreachable block (ram,0x000165f01493) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6829) */
/* WARNING: Removing unreachable block (ram,0x000165f01499) */
/* WARNING: Removing unreachable block (ram,0x000165f01532) */
/* WARNING: Removing unreachable block (ram,0x000160d19efa) */
/* WARNING: Removing unreachable block (ram,0x000165723f75) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa8eb) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa945) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa93c) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa948) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa94e) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa98c) */
/* WARNING: Removing unreachable block (ram,0x00015b8aa998) */
/* WARNING: Removing unreachable block (ram,0x0001651d7779) */
/* WARNING: Removing unreachable block (ram,0x000165f0153e) */
/* WARNING: Removing unreachable block (ram,0x000165f0157e) */
/* WARNING: Removing unreachable block (ram,0x000165f013ac) */
/* WARNING: Removing unreachable block (ram,0x000161344aab) */
/* WARNING: Removing unreachable block (ram,0x000161344ae0) */
/* WARNING: Removing unreachable block (ram,0x000165f0143f) */
/* WARNING: Removing unreachable block (ram,0x000161344adb) */
/* WARNING: Removing unreachable block (ram,0x000161344ae2) */

undefined8 FUN_14dbd391b(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  cVar1 = *(char *)(param_2 + unaff_R12);
  *(undefined1 *)(param_1 + param_2) = 0x5c;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + -0x12;
  bVar2 = *(byte *)(param_1 + param_2);
  *(byte *)(param_1 + param_2) = ~*(byte *)(param_1 + param_2);
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) & 0x4a;
  *(byte *)(param_1 + param_2) = ~*(byte *)(param_1 + param_2);
  *(byte *)(param_1 + param_2) = -1 - (~(bVar2 & 0xb5) & *(byte *)(param_1 + param_2));
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar1;
  return in_stack_00000008;
}



// FUNCTION 14dbd398a FUN_14dbd398a body=140 status=ok
// SIG undefined FUN_14dbd398a(void)

void FUN_14dbd398a(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined2 *unaff_RBP;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *unaff_RBP = param_1;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = param_3;
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -8);
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x14dbd3a2b;
  thunk_FUN_15b642ca5(local_res18,*(undefined8 *)(param_5 + -0x10),*(undefined8 *)(param_5 + -0x18),
                      local_res8);
  return;
}



// FUNCTION 14dbd3c31 FUN_14dbd3c31 body=787 status=ok
// SIG undefined FUN_14dbd3c31(void)

/* WARNING: Instruction at (ram,0x00014dbd3fe2) overlaps instruction at (ram,0x00014dbd3fe1)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fee) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3ff4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3d71) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3d77) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3ea7) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3eac) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3eb2) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3eb7) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3f9d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fa0) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fe2) */
/* WARNING: Removing unreachable block (ram,0x00016641091e) */
/* WARNING: Removing unreachable block (ram,0x0001664109b3) */
/* WARNING: Removing unreachable block (ram,0x0001664109b9) */
/* WARNING: Removing unreachable block (ram,0x0001661e84a3) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fdf) */

undefined8 FUN_14dbd3c31(void)

{
  undefined8 uVar1;
  
  FUN_1668f6e3a();
  uVar1 = FUN_1652998f2();
  return uVar1;
}



// FUNCTION 14dbd3eb7 FUN_14dbd3eb7 body=305 status=ok
// SIG undefined FUN_14dbd3eb7(void)

/* WARNING: Instruction at (ram,0x00014dbd3fe2) overlaps instruction at (ram,0x00014dbd3fe1)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fee) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3ff4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3f9d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd3fdf) */
/* WARNING: Removing unreachable block (ram,0x0001664109b9) */

ulonglong FUN_14dbd3eb7(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  FUN_15ba2390e(param_1,param_2,param_3);
  return *(ulonglong *)(uVar1 - 0x80) ^ param_1;
}



// FUNCTION 14dbd41ce FUN_14dbd41ce body=116 status=ok
// SIG undefined FUN_14dbd41ce(void)

void FUN_14dbd41ce(void)

{
  return;
}



// FUNCTION 14dbd425f FUN_14dbd425f body=123 status=ok
// SIG undefined FUN_14dbd425f(void)

/* WARNING: Removing unreachable block (ram,0x0001619ecbd9) */
/* WARNING: Removing unreachable block (ram,0x0001619ecbdf) */
/* WARNING: Removing unreachable block (ram,0x0001619ecbe4) */
/* WARNING: Removing unreachable block (ram,0x000156aa2121) */
/* WARNING: Removing unreachable block (ram,0x000156aa2127) */
/* WARNING: Removing unreachable block (ram,0x000156aa212c) */
/* WARNING: Removing unreachable block (ram,0x00014dbd42e0) */

undefined8 FUN_14dbd425f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if (*(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 <
      (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * 2) {
    uVar1 = thunk_FUN_156aa2082();
    return uVar1;
  }
  uVar1 = FUN_14e1a1142(unaff_retaddr,param_2,param_3,FUN_14e1a1142);
  return uVar1;
}



// FUNCTION 14dbd42e0 thunk_FUN_14dbd42e6 body=5 status=ok
// SIG undefined thunk_FUN_14dbd42e6(void)

undefined8 thunk_FUN_14dbd42e6(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dbd42e6 FUN_14dbd42e6 body=158 status=ok
// SIG undefined FUN_14dbd42e6(void)

undefined8 FUN_14dbd42e6(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dbd4385 FUN_14dbd4385 body=152 status=ok
// SIG undefined FUN_14dbd4385(void)

void FUN_14dbd4385(void)

{
  (*(code *)0x1650bfc9e)();
  return;
}



// FUNCTION 14dbd4530 FUN_14dbd4530 body=316 status=ok
// SIG undefined FUN_14dbd4530(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd45c9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45fc) */
/* WARNING: Removing unreachable block (ram,0x00014dbd4600) */

void FUN_14dbd4530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 local_res8;
  
  if (-1 < (short)(~(~local_res8 & 0xfeff) - 0x100)) {
    FUN_1619059de(param_1,param_2,param_3);
    return;
  }
  FUN_1619059de(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbd466f FUN_14dbd466f body=146 status=ok
// SIG undefined FUN_14dbd466f(void)

void FUN_14dbd466f(void)

{
  FUN_1625aaf83();
  return;
}



// FUNCTION 14dbd4702 FUN_14dbd4702 body=44 status=ok
// SIG undefined FUN_14dbd4702(void)

void FUN_14dbd4702(void)

{
  return;
}



// FUNCTION 14dbd47b3 FUN_14dbd47b3 body=300 status=ok
// SIG undefined FUN_14dbd47b3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd4859) */
/* WARNING: Removing unreachable block (ram,0x0001614f0ae6) */

void FUN_14dbd47b3(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = param_2 + *(longlong *)(unaff_R13 + -0x28);
  if (*(longlong *)(unaff_R13 + -0x68) == 0) {
    FUN_1668f4318();
    return;
  }
  (*(code *)0x15672e0d3)
            (param_1,0xffffffffffffffff - ((~unaff_R15 | uVar1) + unaff_R15 + 1) &
                     (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14dbd4a8f FUN_14dbd4a8f body=147 status=ok
// SIG undefined FUN_14dbd4a8f(void)

void FUN_14dbd4a8f(void)

{
  return;
}



// FUNCTION 14dbd4b28 FUN_14dbd4b28 body=183 status=ok
// SIG undefined FUN_14dbd4b28(void)

void FUN_14dbd4b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  *(undefined4 *)(local_res10 + -0x28) = 0x2fe3d4bd;
  *(undefined4 *)(local_res10 + -0x24) = 0;
  uVar2 = *(ulonglong *)(local_res10 + -0x28) ^ 0x77551de4;
  *(undefined8 *)(local_res10 + -0x28) = in_R11;
  *(undefined8 *)
   (local_res10 + -0x18 + ~(~(uVar2 & 0xffffffffa74936ae) & (uVar2 | 0xffffffffa74936ae))) =
       *(undefined8 *)(local_res10 + -8);
  uVar1 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  *(undefined **)(local_res10 + -0x20) = &DAT_14dbd4be0;
  FUN_160dc5d1d(uVar1,param_2,&LAB_160dc5d88,*(undefined8 *)(local_res10 + -0x28));
  return;
}



// FUNCTION 14dbd4be6 thunk_FUN_14dbd4bf2 body=5 status=ok
// SIG undefined thunk_FUN_14dbd4bf2(void)

void thunk_FUN_14dbd4bf2(void)

{
  return;
}



// FUNCTION 14dbd4bf2 FUN_14dbd4bf2 body=63 status=ok
// SIG undefined FUN_14dbd4bf2(void)

void FUN_14dbd4bf2(void)

{
  return;
}



// FUNCTION 14dbd4f3a FUN_14dbd4f3a body=308 status=ok
// SIG undefined FUN_14dbd4f3a(void)

/* WARNING: Removing unreachable block (ram,0x000156d8b0eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd517c) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5182) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51ef) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5106) */
/* WARNING: Removing unreachable block (ram,0x0001569d537e) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5073) */
/* WARNING: Removing unreachable block (ram,0x000166913e1f) */
/* WARNING: Removing unreachable block (ram,0x00014dbd50fb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5101) */
/* WARNING: Removing unreachable block (ram,0x000156d8b0e5) */
/* WARNING: Removing unreachable block (ram,0x00014dbd4fdb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5068) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5063) */

undefined8 FUN_14dbd4f3a(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_157617b7e(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                         (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),0x8074bea,
                        (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x88)) +
                        (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15) * 2,param_1 | unaff_RBP);
  return uVar1;
}



// FUNCTION 14dbd5073 FUN_14dbd5073 body=147 status=ok
// SIG undefined FUN_14dbd5073(void)

/* WARNING: Removing unreachable block (ram,0x000156d8b0eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd517c) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5182) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51ef) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5106) */
/* WARNING: Removing unreachable block (ram,0x0001569d537e) */
/* WARNING: Removing unreachable block (ram,0x000156d8b0e5) */

longlong FUN_14dbd5073(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((*(ulonglong *)(unaff_RDI + -0x60) & param_1 ^ 0xffffffffffffffff) &
           (*(ulonglong *)(unaff_RDI + -0x60) | param_1))) {
    lVar1 = FUN_166913e1f();
    return lVar1;
  }
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dbd5106 FUN_14dbd5106 body=123 status=ok
// SIG undefined FUN_14dbd5106(void)

/* WARNING: Removing unreachable block (ram,0x000156d8b0eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd517c) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5182) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51eb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd51ef) */
/* WARNING: Removing unreachable block (ram,0x000156d8b0e5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbd5106(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) | param_1;
  FUN_1665241e3(param_1,(~uVar1 | *(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff)
                        + uVar1 + 1,param_3,FUN_1665241e3);
  return;
}



// FUNCTION 14dbd5182 FUN_14dbd5182 body=157 status=ok
// SIG undefined FUN_14dbd5182(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd51eb) */

void FUN_14dbd5182(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1653e7baa(param_1,(~unaff_R15 + *(ulonglong *)(unaff_R13 + -0x68)) -
                        (~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x68)));
  return;
}



// FUNCTION 14dbd52b6 FUN_14dbd52b6 body=150 status=ok
// SIG undefined FUN_14dbd52b6(void)

void FUN_14dbd52b6(void)

{
  (*(code *)0x14dd3b70f)(0x14dd3b70f);
  return;
}



// FUNCTION 14dbd549c FUN_14dbd549c body=268 status=ok
// SIG undefined FUN_14dbd549c(void)

void FUN_14dbd549c(void)

{
  undefined4 in_EAX;
  undefined8 unaff_retaddr;
  
  FUN_165b992cb(unaff_retaddr,0xffffffffffffffb0,in_EAX);
  FUN_1655d6ef1(unaff_retaddr);
  return;
}



// FUNCTION 14dbd58b5 FUN_14dbd58b5 body=310 status=ok
// SIG undefined FUN_14dbd58b5(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd593b) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5941) */

undefined1 FUN_14dbd58b5(void)

{
  ulonglong uVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *(undefined8 *)(unaff_R12 + 0x18) = unaff_R14;
  uVar1 = 0xffffffffffffffffU - in_stack_00000028 & unaff_retaddr;
  LOCK();
  uVar2 = DAT_14d7a6288;
  UNLOCK();
  DAT_14d7a6288 = in_AL;
  *(undefined8 *)(uVar1 - 8) = 0x3c7209a;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x20) = local_res18;
  *(undefined8 *)(uVar1 - 0x28) = local_res18;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_161a50a95;
  return uVar2;
}



// FUNCTION 14dbd59ed FUN_14dbd59ed body=115 status=ok
// SIG undefined FUN_14dbd59ed(void)

void FUN_14dbd59ed(void)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 unaff_R12;
  undefined1 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7be48b) is written */
  LOCK();
  cVar3 = (char)in_RAX;
  uVar2 = unaff_retaddr;
  if (cVar3 != '\0') {
    in_RAX = in_RAX & 0xffffffffffffff00;
    uVar2 = uRam000000014d7be48b;
  }
  uRam000000014d7be48b = uVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(ulonglong *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0xe65f83a;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(ulonglong *)(local_res10 + -0x18) = in_RAX;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x7a877ac;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbd5a76 FUN_14dbd5a76 body=23 status=ok
// SIG undefined FUN_14dbd5a76(void)

void FUN_14dbd5a76(void)

{
  return;
}



// FUNCTION 14dbd5c0b FUN_14dbd5c0b body=139 status=ok
// SIG undefined FUN_14dbd5c0b(void)

void FUN_14dbd5c0b(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong in_R10;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10 [3];
  
  local_res10[1] =
       *(longlong *)
        ((longlong)local_res10 +
        in_R10 + ~(~(in_RAX & 0xfffffffff7142cf4) & (in_RAX | 0xfffffffff7142cf4))) + unaff_R15 +
       (local_res10[1] & unaff_R15) * -2;
  local_res10[0] = 0x30f88f0;
  FUN_1667c886d(-param_1,unaff_retaddr,param_3,FUN_1667c886d);
  return;
}



// FUNCTION 14dbd5c97 FUN_14dbd5c97 body=332 status=ok
// SIG undefined FUN_14dbd5c97(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd5d35) */
/* WARNING: Removing unreachable block (ram,0x0001574598d8) */
/* WARNING: Removing unreachable block (ram,0x000165e568ce) */
/* WARNING: Removing unreachable block (ram,0x000165e568d4) */
/* WARNING: Removing unreachable block (ram,0x000165e56971) */
/* WARNING: Removing unreachable block (ram,0x000165e56976) */
/* WARNING: Removing unreachable block (ram,0x000165e5697c) */
/* WARNING: Removing unreachable block (ram,0x00015745987b) */
/* WARNING: Removing unreachable block (ram,0x0001574598ea) */
/* WARNING: Removing unreachable block (ram,0x00014dbd5d24) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x0001619920a1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dbd5c97(void)

{
  ulonglong in_R11;
  
  return in_R11 >> 0x20;
}



// FUNCTION 14dbd5de5 FUN_14dbd5de5 body=156 status=ok
// SIG undefined FUN_14dbd5de5(void)

void FUN_14dbd5de5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 uStackX_10;
  
  FUN_1628f2088(*(undefined8 *)(unaff_R13 + -0x98),param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dbd5e83 FUN_14dbd5e83 body=15 status=ok
// SIG undefined FUN_14dbd5e83(void)

void FUN_14dbd5e83(void)

{
  return;
}



// FUNCTION 14dbd616d FUN_14dbd616d body=198 status=ok
// SIG undefined FUN_14dbd616d(void)

/* WARNING: Removing unreachable block (ram,0x00015752e37d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62c9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62d4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6205) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6220) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6239) */
/* WARNING: Removing unreachable block (ram,0x000164f9817c) */
/* WARNING: Removing unreachable block (ram,0x000164f98188) */
/* WARNING: Removing unreachable block (ram,0x00015752e2db) */
/* WARNING: Removing unreachable block (ram,0x00015752e33f) */
/* WARNING: Removing unreachable block (ram,0x00015752e344) */
/* WARNING: Removing unreachable block (ram,0x0001659424c2) */
/* WARNING: Removing unreachable block (ram,0x0001659424e1) */
/* WARNING: Removing unreachable block (ram,0x0001572ca6a5) */
/* WARNING: Removing unreachable block (ram,0x0001659424e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbd616d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1572ca6a5();
  return uVar1;
}



// FUNCTION 14dbd623b FUN_14dbd623b body=677 status=ok
// SIG undefined FUN_14dbd623b(void)

/* WARNING: Removing unreachable block (ram,0x00015752e37d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62c9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbd62d4) */
/* WARNING: Removing unreachable block (ram,0x000164f98188) */

undefined8 FUN_14dbd623b(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
  uVar1 = FUN_160efdf25();
  uVar2 = (*(code *)0x1650d1f09)
                    ((~(~unaff_R12 | uVar3) | ~(param_1 & ~uVar1)) + (~unaff_R12 | uVar3) + 1 ^
                     0xffffffffffffffff,0x1650d1f09,
                     -1 - ~(~(~uVar3 | *(ulonglong *)(unaff_RDI + -0x6420)) |
                           ~(~*(ulonglong *)(unaff_RDI + -0x6420) | uVar3)),
                     *(ulonglong *)(unaff_RDI + -0x63e8) ^ uVar3);
  return uVar2;
}



// FUNCTION 14dbd635e FUN_14dbd635e body=153 status=ok
// SIG undefined FUN_14dbd635e(void)

void FUN_14dbd635e(undefined8 param_1)

{
  (*(code *)&LAB_156cd013c)(param_1,0);
  return;
}



// FUNCTION 14dbd63f7 FUN_14dbd63f7 body=295 status=ok
// SIG undefined FUN_14dbd63f7(void)

void FUN_14dbd63f7(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_CF;
  
  if (!in_CF) {
    return;
  }
  FUN_166b4f3e9();
  puVar1 = (ulonglong *)(&stack0xfffffffffc04bde1 + ~(param_1 & (unaff_RBX | 0xffffffffd4fde8a5)));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar2;
  FUN_161c1fdbf(unaff_R15,~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x48)));
  return;
}



// FUNCTION 14dbd65db FUN_14dbd65db body=164 status=ok
// SIG undefined FUN_14dbd65db(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd666f) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6680) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6675) */

void FUN_14dbd65db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  FUN_157110775(FUN_157110775,
                ~(*(ulonglong *)(unaff_RDI + -0x68) & in_stack_00000008) &
                (*(ulonglong *)(unaff_RDI + -0x68) | in_stack_00000008),param_3);
  FUN_16111ebc8();
  return;
}



// FUNCTION 14dbd6680 FUN_14dbd6680 body=312 status=ok
// SIG undefined FUN_14dbd6680(void)

void FUN_14dbd6680(undefined8 param_1)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  
  (*(code *)0x160dc9eb7)(param_1,~((~unaff_RBP | unaff_RDI) & (~unaff_RDI | unaff_RBP)));
  return;
}



// FUNCTION 14dbd6a5c FUN_14dbd6a5c body=183 status=ok
// SIG undefined FUN_14dbd6a5c(void)

undefined8 FUN_14dbd6a5c(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dbd6b9c FUN_14dbd6b9c body=319 status=ok
// SIG undefined FUN_14dbd6b9c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbd6b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_162658478(local_res10,param_2,0x2b352c62);
  FUN_161229613(local_res10);
  return;
}



// FUNCTION 14dbd6cdd FUN_14dbd6cdd body=938 status=ok
// SIG undefined FUN_14dbd6cdd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd6d83) */
/* WARNING: Removing unreachable block (ram,0x00014dbd6d89) */
/* WARNING: Removing unreachable block (ram,0x00016110fbcc) */

void FUN_14dbd6cdd(void)

{
  char *in_R9;
  char in_R11B;
  char in_CF;
  bool in_ZF;
  
  if (!in_ZF) {
    *in_R9 = *in_R9 + in_R11B + in_CF;
  }
  FUN_1564ceb60();
  FUN_15670c818();
  FUN_164ab2a5d();
  FUN_15b4af935();
  return;
}



// FUNCTION 14dbd6e20 FUN_14dbd6e20 body=193 status=ok
// SIG undefined FUN_14dbd6e20(void)

void FUN_14dbd6e20(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161811e39(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x28)) +
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15) * 2);
  return;
}



// FUNCTION 14dbd6f86 FUN_14dbd6f86 body=291 status=ok
// SIG undefined FUN_14dbd6f86(void)

void FUN_14dbd6f86(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  
  param_1 = param_1 ^ unaff_R15;
  FUN_161b166d5(param_1,-~-*(longlong *)(unaff_R13 + -0x28));
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar2 = *(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = ~*(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) | param_1;
  uVar3 = *(ulonglong *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(longlong *)(param_4 + 0x10) =
       *(longlong *)(param_4 + 0x10) +
       ~((~in_stack_00000010 + lVar1) - (~in_stack_00000010 & uVar2) & uVar3);
  FUN_160c795bd(param_5);
  return;
}



// FUNCTION 14dbd70ab FUN_14dbd70ab body=662 status=ok
// SIG undefined FUN_14dbd70ab(void)

/* WARNING: Removing unreachable block (ram,0x00015b0c7ed5) */
/* WARNING: Removing unreachable block (ram,0x00015b0c7ee0) */
/* WARNING: Removing unreachable block (ram,0x00015b0c7f6c) */
/* WARNING: Removing unreachable block (ram,0x00015b0c7f72) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b0c7edb) */
/* WARNING: Removing unreachable block (ram,0x00014dbd712e) */

longlong FUN_14dbd70ab(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dbd712e thunk_FUN_14dbd7138 body=5 status=ok
// SIG undefined thunk_FUN_14dbd7138(void)

void thunk_FUN_14dbd7138(void)

{
  return;
}



// FUNCTION 14dbd7138 FUN_14dbd7138 body=57 status=ok
// SIG undefined FUN_14dbd7138(void)

void FUN_14dbd7138(void)

{
  return;
}



// FUNCTION 14dbd7171 FUN_14dbd7171 body=232 status=ok
// SIG undefined FUN_14dbd7171(void)

void FUN_14dbd7171(undefined8 param_1)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0x12e1ca) {
    FUN_165bbb1e4();
    return;
  }
  FUN_165bbb1cc(param_1);
  return;
}



// FUNCTION 14dbd725a FUN_14dbd725a body=535 status=ok
// SIG undefined FUN_14dbd725a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd7280) */
/* WARNING: Removing unreachable block (ram,0x00014dbd72dc) */

void FUN_14dbd725a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x166a166bc)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbd7576 FUN_14dbd7576 body=262 status=ok
// SIG undefined FUN_14dbd7576(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd75ee) */
/* WARNING: Removing unreachable block (ram,0x00014dbd75f4) */
/* WARNING: Removing unreachable block (ram,0x000165a25a0a) */
/* WARNING: Removing unreachable block (ram,0x000165a25a9d) */
/* WARNING: Removing unreachable block (ram,0x000165a25aa3) */
/* WARNING: Removing unreachable block (ram,0x000165a25a98) */
/* WARNING: Removing unreachable block (ram,0x00016594cf10) */

void FUN_14dbd7576(void)

{
  FUN_165a25a0a();
  return;
}



// FUNCTION 14dbd767c FUN_14dbd767c body=137 status=ok
// SIG undefined FUN_14dbd767c(void)

void FUN_14dbd767c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1614d0fde)
            (param_1,0x1614d0fde,
             ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
              (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
             ~-*(longlong *)(unaff_RDI + -0x60) + 1U ^ param_1);
  return;
}



// FUNCTION 14dbd779a FUN_14dbd779a body=151 status=ok
// SIG undefined FUN_14dbd779a(void)

void FUN_14dbd779a(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RDI;
  
  FUN_161b22603(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,param_2 - param_4);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbd79e3 thunk_FUN_14dbd79e9 body=5 status=ok
// SIG undefined thunk_FUN_14dbd79e9(void)

void thunk_FUN_14dbd79e9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16216b00b(~*(ulonglong *)(unaff_R13 + -0x78),~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dbd79e9 FUN_14dbd79e9 body=158 status=ok
// SIG undefined FUN_14dbd79e9(void)

void FUN_14dbd79e9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16216b00b(~*(ulonglong *)(unaff_R13 + -0x78),~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dbd7cd3 FUN_14dbd7cd3 body=146 status=ok
// SIG undefined FUN_14dbd7cd3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd7d68) */

void FUN_14dbd7cd3(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166357f75(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14dbd7d68 FUN_14dbd7d68 body=137 status=ok
// SIG undefined FUN_14dbd7d68(void)

void FUN_14dbd7d68(void)

{
  FUN_15b65ccea();
  return;
}



// FUNCTION 14dbd7f31 thunk_FUN_14dbd7f37 body=5 status=ok
// SIG undefined thunk_FUN_14dbd7f37(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd7fc4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd7fca) */
/* WARNING: Removing unreachable block (ram,0x00014d7c5394) */

void thunk_FUN_14dbd7f37(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  ulonglong uStackX_20;
  
  uVar2 = uStackX_20 ^ unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & param_4;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & (uVar3 | param_4);
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined **)(uVar2 - 8) = &DAT_156709bf4;
  FUN_156709bcd();
  return;
}



// FUNCTION 14dbd7f37 FUN_14dbd7f37 body=446 status=ok
// SIG undefined FUN_14dbd7f37(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd7fc4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd7fca) */
/* WARNING: Removing unreachable block (ram,0x00014d7c5394) */

void FUN_14dbd7f37(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & param_4;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & (uVar3 | param_4);
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined **)(uVar2 - 8) = &DAT_156709bf4;
  FUN_156709bcd();
  return;
}



// FUNCTION 14dbd8071 FUN_14dbd8071 body=153 status=ok
// SIG undefined FUN_14dbd8071(void)

void FUN_14dbd8071(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == 0x11752a) {
    FUN_165e93f27();
    return;
  }
  FUN_1655a964d(param_1,FUN_1655a964d);
  return;
}



// FUNCTION 14dbd81b0 FUN_14dbd81b0 body=151 status=ok
// SIG undefined FUN_14dbd81b0(void)

void FUN_14dbd81b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1666165c2(param_1,param_2,FUN_1666165c2);
  return;
}



// FUNCTION 14dbd8248 FUN_14dbd8248 body=140 status=ok
// SIG undefined FUN_14dbd8248(void)

undefined8 FUN_14dbd8248(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dbd8305 FUN_14dbd8305 body=582 status=ok
// SIG undefined FUN_14dbd8305(void)

/* WARNING: Removing unreachable block (ram,0x0001661f65e0) */
/* WARNING: Removing unreachable block (ram,0x0001661f65e6) */
/* WARNING: Removing unreachable block (ram,0x0001565d9708) */
/* WARNING: Removing unreachable block (ram,0x00014dbd837e) */
/* WARNING: Removing unreachable block (ram,0x00014d9d674c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d67c2) */
/* WARNING: Removing unreachable block (ram,0x00014d9d67ce) */
/* WARNING: Removing unreachable block (ram,0x000165302480) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8384) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8394) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8398) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8428) */
/* WARNING: Removing unreachable block (ram,0x00014dbd842d) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8433) */
/* WARNING: Removing unreachable block (ram,0x000166608b8a) */
/* WARNING: Removing unreachable block (ram,0x00015727f080) */
/* WARNING: Removing unreachable block (ram,0x00015727f108) */
/* WARNING: Removing unreachable block (ram,0x00015727f114) */
/* WARNING: Removing unreachable block (ram,0x00015727f11f) */
/* WARNING: Removing unreachable block (ram,0x00015727f12d) */
/* WARNING: Removing unreachable block (ram,0x00015727f13d) */
/* WARNING: Removing unreachable block (ram,0x0001661f6561) */
/* WARNING: Removing unreachable block (ram,0x0001661f65db) */
/* WARNING: Removing unreachable block (ram,0x000166608c06) */
/* WARNING: Removing unreachable block (ram,0x000166608c0c) */
/* WARNING: Removing unreachable block (ram,0x000166608cd1) */
/* WARNING: Removing unreachable block (ram,0x000166608d05) */
/* WARNING: Removing unreachable block (ram,0x000166608d24) */
/* WARNING: Removing unreachable block (ram,0x000166608d2f) */

undefined8 FUN_14dbd8305(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14d9d674c();
  return uVar1;
}



// FUNCTION 14dbd8433 FUN_14dbd8433 body=135 status=ok
// SIG undefined FUN_14dbd8433(void)

void FUN_14dbd8433(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16475cb41(param_1,(*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) << 1,
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_14dbd84bc();
  return;
}



// FUNCTION 14dbd84bc FUN_14dbd84bc body=297 status=ok
// SIG undefined FUN_14dbd84bc(void)

/* WARNING: Removing unreachable block (ram,0x000164f45b30) */
/* WARNING: Removing unreachable block (ram,0x000164f45b36) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000156629baa) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8550) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbd84bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar3 = *(ulonglong *)(unaff_R12 + -0x50);
  uVar2 = ~in_RAX & (uVar3 | ~in_RAX) + ~uVar3 + 1 | in_RAX;
  uVar3 = uVar2 ^ 0xffffffffffffffff | ~in_RAX | uVar3;
  if (!CARRY8(uVar3,uVar2)) {
    FUN_164f45aa8();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R12 + -0x98);
  if (uVar1 != 0) {
    if ((~((~in_RAX | uVar1) + in_RAX + 1) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1) != 0) {
      FUN_166a5bd75();
      return;
    }
    uVar1 = *(ulonglong *)(unaff_R12 + -0x68) ^ in_RAX;
    *(ulonglong *)(uVar1 - 8) = ~(uVar3 + uVar2 + 1);
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
    *(undefined1 **)(uVar1 - 8) = &LAB_166a5bde1;
    (*(code *)0x0)(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 14dbd867d FUN_14dbd867d body=338 status=ok
// SIG undefined FUN_14dbd867d(void)

void FUN_14dbd867d(void)

{
  FUN_16475c70f();
  FUN_156e89e82();
  return;
}



// FUNCTION 14dbd8900 FUN_14dbd8900 body=301 status=ok
// SIG undefined FUN_14dbd8900(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd8986) */

void FUN_14dbd8900(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_156556040(param_1,~((~(~unaff_RBP & param_2) + param_2) - (~unaff_RBP ^ 0xffffffffffffffff) &
                         (~(~param_2 & unaff_R15) + unaff_R15) - param_2));
  return;
}



// FUNCTION 14dbd8a2e FUN_14dbd8a2e body=422 status=ok
// SIG undefined FUN_14dbd8a2e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbd8ac0) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8b55) */
/* WARNING: Removing unreachable block (ram,0x00014dc6125c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2730) */
/* WARNING: Removing unreachable block (ram,0x00014d7c273c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c272c) */

void FUN_14dbd8a2e(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x58);
  lVar2 = (unaff_RBP - 1) - ~-(uVar1 | unaff_RBP);
  if (-1 < lVar2) {
    (*(code *)0x16483ddc0)
              (param_1 & param_2,
               ~(lVar2 + uVar1) & (-~unaff_RBP - ((uVar1 & unaff_RBP) + 2)) - ~uVar1,param_3,param_4
              );
    return;
  }
  FUN_15710f1d4();
  return;
}



// FUNCTION 14dbd8c1f FUN_14dbd8c1f body=32 status=ok
// SIG undefined FUN_14dbd8c1f(void)

void FUN_14dbd8c1f(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dbd8dee FUN_14dbd8dee body=356 status=ok
// SIG undefined FUN_14dbd8dee(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd8e9c) */
/* WARNING: Removing unreachable block (ram,0x00014dbd8ea2) */
/* WARNING: Removing unreachable block (ram,0x00015669eb0a) */
/* WARNING: Removing unreachable block (ram,0x00015669eb8e) */

undefined8 FUN_14dbd8dee(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15669eb0a();
  return uVar1;
}



// FUNCTION 14dbd8f5a FUN_14dbd8f5a body=156 status=ok
// SIG undefined FUN_14dbd8f5a(void)

void FUN_14dbd8f5a(byte param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  byte unaff_DIL;
  undefined8 uStackX_8;
  
  FUN_161a0fccb(-1 - ~(0xfe - ~(~(unaff_DIL & (param_1 | param_4 + 0x45U)) + 1)),param_2,param_3,
                uStackX_8);
  return;
}



// FUNCTION 14dbd9087 FUN_14dbd9087 body=7 status=ok
// SIG undefined FUN_14dbd9087(void)

void FUN_14dbd9087(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbd9274 FUN_14dbd9274 body=187 status=ok
// SIG undefined FUN_14dbd9274(void)

void FUN_14dbd9274(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  FUN_165e1a5aa(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14dbd9767 FUN_14dbd9767 body=196 status=ok
// SIG undefined FUN_14dbd9767(void)

void FUN_14dbd9767(void)

{
  return;
}



// FUNCTION 14dbd982b FUN_14dbd982b body=437 status=ok
// SIG undefined FUN_14dbd982b(void)

/* WARNING: Removing unreachable block (ram,0x000165985fd7) */
/* WARNING: Removing unreachable block (ram,0x000165985fdd) */
/* WARNING: Removing unreachable block (ram,0x0001664eec36) */
/* WARNING: Removing unreachable block (ram,0x0001664eec3c) */
/* WARNING: Removing unreachable block (ram,0x0001664eec7d) */
/* WARNING: Removing unreachable block (ram,0x00015afba61f) */
/* WARNING: Removing unreachable block (ram,0x000165985dd4) */
/* WARNING: Removing unreachable block (ram,0x000165985dda) */
/* WARNING: Removing unreachable block (ram,0x000165985ddf) */
/* WARNING: Removing unreachable block (ram,0x000165985e01) */
/* WARNING: Removing unreachable block (ram,0x000165985dfc) */
/* WARNING: Removing unreachable block (ram,0x000165985e55) */
/* WARNING: Removing unreachable block (ram,0x000165985e6e) */
/* WARNING: Removing unreachable block (ram,0x000165985fcc) */
/* WARNING: Removing unreachable block (ram,0x00016530d902) */
/* WARNING: Removing unreachable block (ram,0x00014dbd98c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14dbd982b(ulonglong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 in_R10;
  longlong lVar4;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res20;
  
  uVar3 = (local_res20 & param_1) << 1 | (ulonglong)((longlong)(local_res20 & param_1) < 0);
  lVar4 = (local_res20 + param_1) - ((-2 - (uVar3 | 0xfffffffffffffffe)) + uVar3);
  puVar2 = (undefined8 *)(lVar4 + -0x10);
  *puVar2 = in_R10;
  *(undefined8 *)(lVar4 + -8) = in_RAX;
  *puVar2 = local_res8;
  *(undefined8 *)(lVar4 + -0x18) = local_res8;
  *puVar2 = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = unaff_retaddr;
  *(undefined4 *)(lVar4 + -0x20) = 0x36068b8f;
  *(undefined4 *)(lVar4 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(lVar4 + -0x20) ^ 0x1468572d;
  *(undefined8 *)(lVar4 + -0x20) = unaff_RBP;
  *(undefined **)(lVar4 + -0x10 + ~(~(uVar3 & 0xffffffffdd912355) & (uVar3 | 0xffffffffdd912355))) =
       &DAT_165429e67;
  *(undefined8 *)(lVar4 + -0x18) = 0x7bdf2669;
  *(ulonglong *)(lVar4 + -0x18) = *(ulonglong *)(lVar4 + -0x18) ^ 0x7bdf2669;
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar4 + -0x18);
  *(undefined2 *)(lVar4 + -0x18) = 0;
  *(short *)(lVar4 + -0x18) = *(short *)(lVar4 + -0x18) + -0x6199;
  plVar1 = (longlong *)(lVar4 + -0x10);
  lVar4 = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar4;
  return *plVar1;
}



// FUNCTION 14dbd9944 FUN_14dbd9944 body=24 status=ok
// SIG undefined FUN_14dbd9944(void)

void FUN_14dbd9944(void)

{
  return;
}



// FUNCTION 14dbd9b5b FUN_14dbd9b5b body=118 status=ok
// SIG undefined FUN_14dbd9b5b(void)

void FUN_14dbd9b5b(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_16500804b(param_1,*(undefined8 *)(unaff_R13 + -0x40));
  return;
}



// FUNCTION 14dbd9bda FUN_14dbd9bda body=44 status=ok
// SIG undefined FUN_14dbd9bda(void)

void FUN_14dbd9bda(void)

{
  return;
}



// FUNCTION 14dbd9e65 FUN_14dbd9e65 body=156 status=ok
// SIG undefined FUN_14dbd9e65(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd9ed0) */

void FUN_14dbd9e65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165a32248(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbd9f02 FUN_14dbd9f02 body=164 status=ok
// SIG undefined FUN_14dbd9f02(void)

/* WARNING: Removing unreachable block (ram,0x00014dbd9fa8) */

void FUN_14dbd9f02(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  char cStackX_8;
  
  if (cStackX_8 == '\0') {
    FUN_14e1818be(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                  (-~unaff_R15 - (~*(ulonglong *)(unaff_R13 + -0x28) + 2)) +
                  (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
    return;
  }
  FUN_165a686cb();
  return;
}



// FUNCTION 14dbd9fa8 FUN_14dbd9fa8 body=233 status=ok
// SIG undefined FUN_14dbd9fa8(void)

void FUN_14dbd9fa8(undefined8 param_1)

{
  (*(code *)0x161208816)(param_1);
  return;
}



// FUNCTION 14dbda02b FUN_14dbda02b body=444 status=ok
// SIG undefined FUN_14dbda02b(void)

undefined8 FUN_14dbda02b(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  code *pcVar7;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  ulonglong *local_res20;
  
  local_res20[-1] = in_R10;
  local_res20[-2] = unaff_R15;
  local_res20[-3] = unaff_R15;
  if ((&DAT_00000007 < local_res20) && (local_res20 < &DAT_00000008)) {
    local_res20[-1] = local_res20[-1] ^ unaff_R15;
    *local_res20 = *local_res20 ^ unaff_R15;
    local_res20[-2] = param_2;
    local_res20[-3] = uStackX_10;
    uVar4 = local_res20[1];
    local_res20[1] = ~local_res20[1];
    local_res20[1] = local_res20[1] | unaff_R15;
    local_res20[1] = ~((~unaff_R15 | uVar4) & local_res20[1]);
    local_res20[-1] = unaff_R12;
    local_res20[-2] = local_res20[-2];
    local_res20[-3] = unaff_R13;
    *(ushort *)local_res20 = ((ushort)*local_res20 | 0x100) - 0x100;
    local_res20[-2] = unaff_RDI;
    local_res20[-3] = unaff_RDI;
    local_res20[-4] = unaff_RDI;
    local_res20[-2] = (ulonglong)FUN_14dbda189;
    local_res20[-3] = (ulonglong)&LAB_1621a9a5f;
    return uStackX_8;
  }
  local_res20[-4] = param_2;
  uVar5 = local_res20[-4];
  local_res20[-2] = local_res20[-1];
  *(undefined4 *)(local_res20 + -4) = 0;
  *(undefined4 *)((longlong)local_res20 + -0x1c) = 0;
  local_res20[-3] = unaff_R12;
  local_res20[-4] = uVar5;
  uVar5 = local_res20[-4];
  local_res20[-4] = unaff_RBP;
  local_res20[-1] = (ulonglong)&LAB_162499d90;
  uVar2 = local_res20[-4];
  local_res20[-3] = unaff_retaddr;
  uVar6 = local_res20[-3];
  pcVar7 = FUN_162499d75;
  local_res20[-3] = 0x166df3138;
  uVar4 = FUN_162499d75();
  *local_res20 = uVar4;
  uVar3 = local_res20[-1];
  local_res20[-1] = uVar3;
  local_res20[-2] = uVar3;
  local_res20[-1] = *(undefined8 *)(unaff_RDI + -0x98);
  local_res20[-2] = *(undefined8 *)(unaff_RDI + -0xa0);
  uVar3 = local_res20[-2];
  local_res20[-2] = uVar5;
  local_res20[-3] = uVar3;
  local_res20[-3] = uVar6;
  uVar4 = local_res20[-3];
  uVar5 = local_res20[-2];
  local_res20[-2] = (ulonglong)pcVar7;
  local_res20[-3] = unaff_R13;
  puVar1 = local_res20 + -1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | uVar4;
  local_res20[-4] = uVar2;
  uVar5 = FUN_1614a2ed0(uVar4,uVar5);
  return uVar5;
}



// FUNCTION 14dbda0d7 FUN_14dbda0d7 body=176 status=ok
// SIG undefined FUN_14dbda0d7(void)

void FUN_14dbda0d7(void)

{
  return;
}



// FUNCTION 14dbda189 FUN_14dbda189 body=278 status=ok
// SIG undefined FUN_14dbda189(void)

void FUN_14dbda189(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_162dbd9f6(param_1,in_stack_00000008,unaff_retaddr);
  return;
}



// FUNCTION 14dbda47e FUN_14dbda47e body=148 status=ok
// SIG undefined FUN_14dbda47e(void)

void FUN_14dbda47e(void)

{
  return;
}



// FUNCTION 14dbda7b8 FUN_14dbda7b8 body=141 status=ok
// SIG undefined FUN_14dbda7b8(void)

undefined8 FUN_14dbda7b8(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong *in_RAX;
  undefined8 in_stack_00000008;
  
  uVar1 = *in_RAX;
  *in_RAX = -*in_RAX;
  *in_RAX = *in_RAX - 1;
  *in_RAX = *in_RAX | param_1;
  *in_RAX = ~(~param_2 | uVar1) | ~*in_RAX;
  return in_stack_00000008;
}



// FUNCTION 14dbda8e6 FUN_14dbda8e6 body=296 status=ok
// SIG undefined FUN_14dbda8e6(void)

/* WARNING: Removing unreachable block (ram,0x000165155ba4) */
/* WARNING: Removing unreachable block (ram,0x000165155baa) */
/* WARNING: Removing unreachable block (ram,0x00014dbdaa12) */
/* WARNING: Removing unreachable block (ram,0x00014dbdaa07) */
/* WARNING: Removing unreachable block (ram,0x000165155afe) */
/* WARNING: Removing unreachable block (ram,0x0001669a5d55) */
/* WARNING: Removing unreachable block (ram,0x0001669a5d4a) */
/* WARNING: Removing unreachable block (ram,0x000165ebfe31) */
/* WARNING: Removing unreachable block (ram,0x000165ebfe35) */

void FUN_14dbda8e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_14dad8cf9(in_stack_00000008,param_2,param_3);
  uVar8 = (undefined2)param_2;
  uVar4 = *(ulonglong *)(unaff_RSI + -0x98);
  uVar5 = *(ulonglong *)(unaff_RSI + -0xa0);
  if (-1 < (longlong)(*(ulonglong *)(unaff_RSI + -8) | 0x20dc2765)) {
    FUN_1669a5cde();
    return;
  }
  uVar3 = ~(*(ulonglong *)(unaff_RSI + -0x88) & 0x20dc2765) &
          (*(ulonglong *)(unaff_RSI + -0x88) & 0xffffffffdf23d89a | 0x20dc2765);
  puVar2 = (ulonglong *)(uVar3 - 8);
  *puVar2 = unaff_R13;
  *(ulonglong *)(uVar3 - 0x10) = uVar4 ^ 0x20dc2765;
  *(undefined8 *)(uVar3 - 0x10) = param_4;
  *(undefined8 *)(uVar3 - 0x10) = in_stack_00000008;
  *(undefined8 *)(uVar3 - 0x18) = in_stack_00000008;
  uVar4 = *puVar2;
  *(ulonglong *)(uVar3 - 0x20) = ~(uVar5 | 0xffffffffdf23d89a) | ~(~uVar5 | 0x20dc2765);
  *(ulonglong *)(uVar3 - 0x10) = uVar4;
  uVar7 = *(undefined8 *)(uVar3 - 0x18);
  *puVar2 = 0x327d66d5;
  *puVar2 = *puVar2 ^ 0x327d66d5;
  *puVar2 = (ulonglong)(&DAT_14d8d303f + *puVar2);
  *(undefined8 *)(uVar3 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar3 - 0x20) = 0x20dc276d;
  *(undefined8 *)(uVar3 - 0x28) = 0x14d9278e3;
  uVar7 = FUN_14d8d2faa(uVar7);
  uVar6 = in(uVar8);
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)uVar7 >> 8),uVar6) + -0x77);
  *pbVar1 = *pbVar1 | (char)uVar7 + 0x83U;
  *(longlong *)(uVar3 - 0x20) = *(longlong *)(uVar3 - 0x20) + -0xf42ab5e;
  *(undefined **)(uVar3 - 0x18) = &DAT_14d8d303f;
  *puVar2 = unaff_RBX - 0xf42ab5e;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbdaa12 FUN_14dbdaa12 body=193 status=ok
// SIG undefined FUN_14dbdaa12(void)

void FUN_14dbdaa12(void)

{
  FUN_15b69b5f1();
  return;
}



// FUNCTION 14dbdad1e thunk_FUN_14dbdad24 body=5 status=ok
// SIG undefined thunk_FUN_14dbdad24(void)

undefined8 thunk_FUN_14dbdad24(void)

{
  undefined8 in_RAX;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x449a44a5 + unaff_retaddr) = 0;
  return in_RAX;
}



// FUNCTION 14dbdad24 FUN_14dbdad24 body=100 status=ok
// SIG undefined FUN_14dbdad24(void)

undefined8 FUN_14dbdad24(void)

{
  undefined8 in_RAX;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x449a44a5 + unaff_retaddr) = 0;
  return in_RAX;
}



// FUNCTION 14dbdadd4 FUN_14dbdadd4 body=107 status=ok
// SIG undefined FUN_14dbdadd4(void)

void FUN_14dbdadd4(void)

{
  return;
}



// FUNCTION 14dbdafc8 FUN_14dbdafc8 body=419 status=ok
// SIG undefined FUN_14dbdafc8(void)

/* WARNING: Removing unreachable block (ram,0x000166261e75) */
/* WARNING: Removing unreachable block (ram,0x000166261e6f) */
/* WARNING: Removing unreachable block (ram,0x000166261e7a) */
/* WARNING: Removing unreachable block (ram,0x00014dbdb0e3) */

undefined8 FUN_14dbdafc8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  
  FUN_1621b8f6a();
  uVar1 = *(ulonglong *)(param_2 + -0xa0);
  *(ulonglong *)((*(ulonglong *)(param_2 + -0x40) ^ in_R10) - 8) =
       *(ulonglong *)(param_2 + -0x98) ^ in_R10;
  uVar2 = (*(code *)&LAB_156bdf987)(param_1,~(uVar1 & in_R10) & (uVar1 | in_R10));
  return uVar2;
}



// FUNCTION 14dbdb0e3 FUN_14dbdb0e3 body=29 status=ok
// SIG undefined FUN_14dbdb0e3(void)

void FUN_14dbdb0e3(void)

{
  return;
}



// FUNCTION 14dbdb184 FUN_14dbdb184 body=128 status=ok
// SIG undefined FUN_14dbdb184(void)

void FUN_14dbdb184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_156f7fa90(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dbdb206 FUN_14dbdb206 body=1118 status=ok
// SIG undefined FUN_14dbdb206(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdb29e) */
/* WARNING: Removing unreachable block (ram,0x00014dbdb2a9) */
/* WARNING: Removing unreachable block (ram,0x00014dbdb33a) */
/* WARNING: Removing unreachable block (ram,0x00014dbdb340) */
/* WARNING: Removing unreachable block (ram,0x0001616c2cca) */
/* WARNING: Removing unreachable block (ram,0x0001616c2d0d) */
/* WARNING: Removing unreachable block (ram,0x0001616c2d0f) */
/* WARNING: Removing unreachable block (ram,0x00014dbdb2a4) */

void FUN_14dbdb206(void)

{
  FUN_15732b9df();
  return;
}



// FUNCTION 14dbdb495 FUN_14dbdb495 body=187 status=ok
// SIG undefined FUN_14dbdb495(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbdb495(void)

{
  return;
}



// FUNCTION 14dbdb906 FUN_14dbdb906 body=77 status=ok
// SIG undefined FUN_14dbdb906(void)

void FUN_14dbdb906(undefined8 param_1,undefined8 param_2)

{
  FUN_14dd60401(param_1,param_2,FUN_14dd60401);
  return;
}



// FUNCTION 14dbdb9d5 FUN_14dbdb9d5 body=128 status=ok
// SIG undefined FUN_14dbdb9d5(void)

void FUN_14dbdb9d5(undefined8 param_1)

{
  FUN_164f6a1b2(param_1);
  return;
}



// FUNCTION 14dbdba5b FUN_14dbdba5b body=44 status=ok
// SIG undefined FUN_14dbdba5b(void)

void FUN_14dbdba5b(void)

{
  return;
}



// FUNCTION 14dbdbaf2 FUN_14dbdbaf2 body=387 status=ok
// SIG undefined FUN_14dbdbaf2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdbb80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbdbaf2(void)

{
  FUN_1655dd3b5(FUN_1655dd3b5);
  return;
}



// FUNCTION 14dbdbc1f FUN_14dbdbc1f body=126 status=ok
// SIG undefined FUN_14dbdbc1f(void)

void FUN_14dbdbc1f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1611496b6(param_1,0x47,param_3,param_4);
  return;
}



// FUNCTION 14dbdbca4 FUN_14dbdbca4 body=285 status=ok
// SIG undefined FUN_14dbdbca4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdbd1e) */

void FUN_14dbdbca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  FUN_165e845c8(in_stack_00000010,param_2,FUN_165e845c8);
  return;
}



// FUNCTION 14dbdbdc3 FUN_14dbdbdc3 body=150 status=ok
// SIG undefined FUN_14dbdbdc3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdbef1) */
/* WARNING: Removing unreachable block (ram,0x00014dbdbef7) */
/* WARNING: Removing unreachable block (ram,0x00015b0bfe4e) */

void FUN_14dbdbdc3(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  uVar1 = (uint)*(undefined8 *)(unaff_R13 + -0x30);
  FUN_16643dded(~(param_2 & unaff_R15) & (param_2 | unaff_R15),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  FUN_1628e2dfc((~(uVar1 & (uint)unaff_R15) & (uVar1 | (uint)unaff_R15)) - (int)unaff_R14,
                unaff_R14 & 0xffffffff,
                ~((~unaff_R14 | *(ulonglong *)(param_4 + -0x38)) &
                 (~*(ulonglong *)(param_4 + -0x38) | unaff_R14)));
  return;
}



// FUNCTION 14dbdbe59 FUN_14dbdbe59 body=452 status=ok
// SIG undefined FUN_14dbdbe59(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdbef1) */
/* WARNING: Removing unreachable block (ram,0x00014dbdbef7) */
/* WARNING: Removing unreachable block (ram,0x00015b0bfe4e) */

void FUN_14dbdbe59(void)

{
  int unaff_ESI;
  longlong in_R9;
  ulonglong unaff_R14;
  
  FUN_1628e2dfc(unaff_ESI - (int)unaff_R14,unaff_R14 & 0xffffffff,
                ~((~unaff_R14 | *(ulonglong *)(in_R9 + -0x38)) &
                 (~*(ulonglong *)(in_R9 + -0x38) | unaff_R14)));
  return;
}



// FUNCTION 14dbdc2a5 FUN_14dbdc2a5 body=485 status=ok
// SIG undefined FUN_14dbdc2a5(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdc34d) */
/* WARNING: Removing unreachable block (ram,0x00014dbdc3a5) */
/* WARNING: Removing unreachable block (ram,0x00014dbdc3eb) */
/* WARNING: Removing unreachable block (ram,0x00015b49a62d) */
/* WARNING: Removing unreachable block (ram,0x00014dbdc3fa) */
/* WARNING: Removing unreachable block (ram,0x00014dbdc400) */

void FUN_14dbdc2a5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  if (param_5 != 0) {
    (*(code *)&LAB_1654f0f79)(param_1,param_2,param_3);
    return;
  }
  FUN_165b45b28();
  return;
}



// FUNCTION 14dbdc497 thunk_FUN_14dbdc49d body=5 status=ok
// SIG undefined thunk_FUN_14dbdc49d(void)

void thunk_FUN_14dbdc49d(undefined8 param_1)

{
  (*(code *)&LAB_161876ac9)(param_1,&LAB_161876ac9);
  return;
}



// FUNCTION 14dbdc49d FUN_14dbdc49d body=142 status=ok
// SIG undefined FUN_14dbdc49d(void)

void FUN_14dbdc49d(undefined8 param_1)

{
  (*(code *)&LAB_161876ac9)(param_1,&LAB_161876ac9);
  return;
}



// FUNCTION 14dbdc52c FUN_14dbdc52c body=136 status=ok
// SIG undefined FUN_14dbdc52c(void)

/* WARNING: Instruction at (ram,0x00014dbdc59c) overlaps instruction at (ram,0x00014dbdc59b)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbdc59b) */

void FUN_14dbdc52c(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  uint in_EAX;
  undefined8 unaff_retaddr;
  
  FUN_1567a6c1c(param_1,unaff_retaddr,param_3,((param_2 + -1) - ~in_EAX) + param_4);
  return;
}



// FUNCTION 14dbdc641 FUN_14dbdc641 body=19 status=ok
// SIG undefined FUN_14dbdc641(void)

void FUN_14dbdc641(void)

{
  return;
}



// FUNCTION 14dbdc6c9 FUN_14dbdc6c9 body=140 status=ok
// SIG undefined FUN_14dbdc6c9(void)

void FUN_14dbdc6c9(uint param_1)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_1615d20f1(param_1 >> 0x10,*(longlong *)(unaff_R13 + -0x48) + unaff_R15);
  return;
}



// FUNCTION 14dbdc756 FUN_14dbdc756 body=147 status=ok
// SIG undefined FUN_14dbdc756(void)

void FUN_14dbdc756(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  FUN_156596b03(local_res18,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dbdc885 FUN_14dbdc885 body=149 status=ok
// SIG undefined FUN_14dbdc885(void)

void FUN_14dbdc885(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_165be3d5b(param_1,param_2,
                (~(*(ulonglong *)(unaff_RDI + -0x90) & param_1) + param_1) -
                ~*(ulonglong *)(unaff_RDI + -0x90),FUN_165be3d5b);
  return;
}



// FUNCTION 14dbdc91a FUN_14dbdc91a body=32 status=ok
// SIG undefined FUN_14dbdc91a(void)

void FUN_14dbdc91a(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_R13;
  
  *(ulonglong *)(param_2 + 8) = (~unaff_R13 | *(ulonglong *)(param_2 + 8)) + unaff_R13 + 1;
  return;
}



// FUNCTION 14dbdc9bb FUN_14dbdc9bb body=117 status=ok
// SIG undefined FUN_14dbdc9bb(void)

void FUN_14dbdc9bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1571b8300(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbdca31 FUN_14dbdca31 body=540 status=ok
// SIG undefined FUN_14dbdca31(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdcb70) */
/* WARNING: Removing unreachable block (ram,0x00014dbdcb7b) */
/* WARNING: Removing unreachable block (ram,0x00014dbdcb76) */
/* WARNING: Removing unreachable block (ram,0x00014dbdcac9) */

void FUN_14dbdca31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0xa0);
  uVar2 = ~(uVar1 & unaff_RBP) & (uVar1 + unaff_RBP) - (uVar1 & unaff_RBP);
  uVar1 = local_res10 ^ unaff_RBP;
  if (-1 < (longlong)uVar1) {
    *(undefined8 *)(uVar1 - 8) = in_R11;
    *(ulonglong *)(uVar1 - 0x10) = uVar2;
    *(ulonglong *)(uVar1 - 0x18) = uVar2;
    *(undefined8 *)(uVar1 - 0x20) = param_3;
    *(undefined8 *)(uVar1 - 0x28) = unaff_RDI;
    *(undefined8 *)(uVar1 - 0x30) = unaff_RDI;
    *(undefined **)(uVar1 - 0x28) = &DAT_162a7c950;
    return;
  }
  FUN_162a7c8de();
  return;
}



// FUNCTION 14dbdcced FUN_14dbdcced body=315 status=ok
// SIG undefined FUN_14dbdcced(void)

void FUN_14dbdcced(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong *unaff_RDI;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  
  FUN_15733166e(param_1,in_stack_00000008,param_3,param_4,in_stack_00000018 ^ in_RAX);
  uVar1 = *unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = *unaff_RDI | param_1;
  *unaff_RDI = ~((~param_1 | uVar1) & *unaff_RDI);
  FUN_15732bb83(param_1);
  return;
}



// FUNCTION 14dbdce2b FUN_14dbdce2b body=151 status=ok
// SIG undefined FUN_14dbdce2b(void)

void FUN_14dbdce2b(undefined8 param_1)

{
  FUN_15b9c059a(param_1);
  FUN_14dbdcec3();
  return;
}



// FUNCTION 14dbdcec3 FUN_14dbdcec3 body=726 status=ok
// SIG undefined FUN_14dbdcec3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdceea) */
/* WARNING: Removing unreachable block (ram,0x000160cd6990) */
/* WARNING: Removing unreachable block (ram,0x000160cd6996) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd05b) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd06c) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd09b) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd09f) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd10a) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd110) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd183) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd18e) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd189) */
/* WARNING: Removing unreachable block (ram,0x000161cedb70) */
/* WARNING: Removing unreachable block (ram,0x000160cd6910) */
/* WARNING: Removing unreachable block (ram,0x0001655e66c4) */
/* WARNING: Removing unreachable block (ram,0x00014dbdd061) */
/* WARNING: Removing unreachable block (ram,0x00014dbdcf50) */
/* WARNING: Removing unreachable block (ram,0x00014dbdcf56) */

undefined1 *
FUN_14dbdcec3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_16672be7c;
  return &LAB_16672be7c;
}



// FUNCTION 14dbdd449 FUN_14dbdd449 body=134 status=ok
// SIG undefined FUN_14dbdd449(void)

void FUN_14dbdd449(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dbdd504 FUN_14dbdd504 body=147 status=ok
// SIG undefined FUN_14dbdd504(void)

void FUN_14dbdd504(void)

{
  return;
}



// FUNCTION 14dbdd763 FUN_14dbdd763 body=133 status=ok
// SIG undefined FUN_14dbdd763(void)

void FUN_14dbdd763(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x14dde3088)(param_1,0x14dde3088,param_3,param_4);
  return;
}



// FUNCTION 14dbdd7e8 FUN_14dbdd7e8 body=156 status=ok
// SIG undefined FUN_14dbdd7e8(void)

void FUN_14dbdd7e8(longlong param_1)

{
  ulonglong unaff_RBX;
  
  (*(code *)&LAB_1565aa512)(param_1,0,0,*(ulonglong *)(param_1 + -0x58) ^ unaff_RBX);
  return;
}



// FUNCTION 14dbddd45 FUN_14dbddd45 body=160 status=ok
// SIG undefined FUN_14dbddd45(void)

void FUN_14dbddd45(undefined8 param_1)

{
  FUN_1576545da(param_1,FUN_1576545da);
  return;
}



// FUNCTION 14dbdde7f FUN_14dbdde7f body=64 status=ok
// SIG undefined FUN_14dbdde7f(void)

void FUN_14dbdde7f(void)

{
  return;
}



// FUNCTION 14dbddf0d FUN_14dbddf0d body=25 status=ok
// SIG undefined FUN_14dbddf0d(void)

void FUN_14dbddf0d(void)

{
  return;
}



// FUNCTION 14dbde04c FUN_14dbde04c body=134 status=ok
// SIG undefined FUN_14dbde04c(void)

/* WARNING: Removing unreachable block (ram,0x000165c6a6b4) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6ba) */
/* WARNING: Removing unreachable block (ram,0x00014dbde174) */
/* WARNING: Removing unreachable block (ram,0x00014dbde17a) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6a9) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6af) */
/* WARNING: Removing unreachable block (ram,0x0001610a2832) */

undefined8 FUN_14dbde04c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_14e006d99();
  FUN_1624a4861();
  FUN_1658bf298(param_1);
  uVar1 = FUN_14dd52eb0();
  return uVar1;
}



// FUNCTION 14dbde0d4 FUN_14dbde0d4 body=324 status=ok
// SIG undefined FUN_14dbde0d4(void)

/* WARNING: Removing unreachable block (ram,0x000165c6a6b4) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6ba) */
/* WARNING: Removing unreachable block (ram,0x00014dbde174) */
/* WARNING: Removing unreachable block (ram,0x00014dbde17a) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6a9) */
/* WARNING: Removing unreachable block (ram,0x000165c6a6af) */
/* WARNING: Removing unreachable block (ram,0x0001610a2832) */

undefined8 FUN_14dbde0d4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint unaff_EBP;
  int unaff_R13D;
  int unaff_R14D;
  
  FUN_1624a4861(param_1,param_2,-~unaff_EBP - (param_3 + unaff_R13D + unaff_R14D));
  FUN_1658bf298(param_1);
  uVar1 = FUN_14dd52eb0();
  return uVar1;
}



// FUNCTION 14dbde376 FUN_14dbde376 body=227 status=ok
// SIG undefined FUN_14dbde376(void)

void FUN_14dbde376(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (unaff_R15 ^ 0x407d6017)) = param_1;
  FUN_15679927c(local_res10[0]);
  return;
}



// FUNCTION 14dbde494 FUN_14dbde494 body=328 status=ok
// SIG undefined FUN_14dbde494(void)

void FUN_14dbde494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  longlong lVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 in_R10;
  ulonglong local_res8;
  longlong local_res18 [2];
  
  *(undefined8 *)
   ((longlong)local_res18 + ~(~(unaff_RSI & 0xffffffffdaa377a1) & (unaff_RSI | 0xffffffffdaa377a1)))
       = param_2;
  lVar2 = local_res18[0];
  uVar3 = *(ulonglong *)(unaff_RDI + -0xa0) & local_res8;
  local_res18[0] = *(longlong *)(unaff_RDI + -8);
  FUN_165d0147b(local_res8,lVar2,*(ulonglong *)(unaff_RDI + -0xa0) | local_res8);
  *(undefined8 *)(local_res18[0] + -8) = in_RAX;
  *(ulonglong *)(local_res18[0] + -0x10) = local_res8;
  *(ulonglong *)(local_res18[0] + -0x18) = uVar3;
  *(longlong *)(local_res18[0] + -0x20) = lVar2;
  *(undefined8 *)(local_res18[0] + -0x28) = param_3;
  uVar1 = *(undefined8 *)(local_res18[0] + -0x28);
  *(undefined8 *)(local_res18[0] + -0x20) = param_4;
  *(undefined8 *)(local_res18[0] + -0x28) = in_R10;
  *(undefined8 *)(local_res18[0] + -0x30) = uVar1;
  *(undefined8 *)(local_res18[0] + -0x38) = uVar1;
  *(undefined8 *)(local_res18[0] + -0x40) = uVar1;
  *(undefined **)(local_res18[0] + -0x30) = &DAT_14dbde5de;
  *(undefined1 **)(local_res18[0] + -0x38) = &LAB_14e16cbac;
  return;
}



// FUNCTION 14dbde67c FUN_14dbde67c body=315 status=ok
// SIG undefined FUN_14dbde67c(void)

ulonglong FUN_14dbde67c(void)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = FUN_1656a0321();
  return uVar1 ^ unaff_R15;
}



// FUNCTION 14dbde7b7 FUN_14dbde7b7 body=259 status=ok
// SIG undefined FUN_14dbde7b7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c1691) */
/* WARNING: Removing unreachable block (ram,0x00014dbde805) */
/* WARNING: Removing unreachable block (ram,0x00014dbde896) */
/* WARNING: Removing unreachable block (ram,0x0001569f25c2) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7ff) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7dd) */

void FUN_14dbde7b7(void)

{
  undefined4 in_EAX;
  uint unaff_EBP;
  uint unaff_retaddr;
  
  FUN_160df1abb(unaff_retaddr ^ unaff_EBP,in_EAX);
  return;
}



// FUNCTION 14dbde8a7 FUN_14dbde8a7 body=18 status=ok
// SIG undefined FUN_14dbde8a7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dbde8a7(void)

{
  undefined8 *in_RAX;
  undefined8 unaff_R13;
  
  *in_RAX = unaff_R13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbde94f thunk_FUN_165e93f27 body=19 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbdeb1c FUN_14dbdeb1c body=464 status=ok
// SIG undefined FUN_14dbdeb1c(void)

void FUN_14dbdeb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_R12;
  undefined8 *unaff_R15;
  
  *unaff_R15 = unaff_R12;
  pcVar1 = FUN_1648fd3ed;
  FUN_1648fd3ed(param_1,FUN_1648fd3ed,param_3);
  FUN_161af7b56(0xdd4221e6,pcVar1);
  (*(code *)0x15b85e142)();
  return;
}



// FUNCTION 14dbdee3d FUN_14dbdee3d body=297 status=ok
// SIG undefined FUN_14dbdee3d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdeec8) */
/* WARNING: Removing unreachable block (ram,0x00014dbdeece) */
/* WARNING: Removing unreachable block (ram,0x00014dbdef2d) */
/* WARNING: Removing unreachable block (ram,0x00014dbdef28) */
/* WARNING: Removing unreachable block (ram,0x00014dbdef4c) */
/* WARNING: Removing unreachable block (ram,0x00016119a256) */
/* WARNING: Removing unreachable block (ram,0x00016119a2d1) */
/* WARNING: Removing unreachable block (ram,0x00016119a2d6) */
/* WARNING: Removing unreachable block (ram,0x00016119a2dc) */
/* WARNING: Removing unreachable block (ram,0x00016119a2e1) */

undefined8 FUN_14dbdee3d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16119a256();
  return uVar1;
}



// FUNCTION 14dbdf093 FUN_14dbdf093 body=79 status=ok
// SIG undefined FUN_14dbdf093(void)

void FUN_14dbdf093(void)

{
  return;
}



// FUNCTION 14dbdf1f8 FUN_14dbdf1f8 body=480 status=ok
// SIG undefined FUN_14dbdf1f8(void)

void FUN_14dbdf1f8(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort in_AX;
  undefined8 uVar5;
  ushort *unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  ulonglong *local_res20;
  
  *unaff_RBP = *unaff_RBP ^ 0xffff;
  *unaff_RBP = *unaff_RBP | ~in_AX;
  *unaff_RBP = ~*unaff_RBP;
  _fxrstor(local_res20);
  local_res20[-1] = in_R10;
  local_res20[-3] = param_2;
  local_res20[-4] = uStackX_8;
  local_res20[-5] =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  uVar15 = local_res20[-5];
  bVar12 = (uVar15 & 0x4000) != 0;
  bVar11 = (uVar15 & 0x400) != 0;
  bVar10 = (uVar15 & 0x200) != 0;
  bVar9 = (uVar15 & 0x100) != 0;
  bVar8 = (uVar15 & 0x10) != 0;
  bVar14 = (uVar15 & 0x200000) != 0;
  bVar13 = (uVar15 & 0x40000) != 0;
  local_res20[-2] = in_R10;
  uVar5 = local_res20[-3];
  local_res20[-3] =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar11 * 0x400 | (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 |
       (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar8 * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0)
       | (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  local_res20[-4] = 0x95161ff;
  uVar15 = local_res20[-4];
  lVar2 = local_res20[-4];
  local_res20[-4] = local_res20[-4] + -0x950e330;
  local_res20[-4] =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)SBORROW8(lVar2,0x950e330) * 0x800 |
       (ulonglong)bVar11 * 0x400 | (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 |
       (ulonglong)((longlong)local_res20[-4] < 0) * 0x80 | (ulonglong)(local_res20[-4] == 0) * 0x40
       | (ulonglong)bVar8 * 0x10 | (ulonglong)((POPCOUNT(local_res20[-4] & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar15 < 0x950e330) | (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  uVar15 = local_res20[-3];
  local_res20[-3] = unaff_R14;
  local_res20[-4] =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  local_res20[-1] = 0x7ecf;
  pcVar6 = FUN_165f8ba0a;
  local_res20[-5] = 0x14dbdf28c;
  FUN_165f8ba0a(param_1,uVar5);
  uVar15 = local_res20[-4];
  local_res20[-4] = (ulonglong)pcVar6;
  local_res20[-5] = (ulonglong)pcVar6;
  local_res20[-6] = unaff_R15;
  uVar3 = local_res20[-6];
  local_res20[-4] = *(ulonglong *)(unaff_R13 + -0x98);
  uVar7 = local_res20[-5];
  local_res20[-5] = 8;
  local_res20[-6] = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar4 = local_res20[-5];
  local_res20[-5] = in_R11;
  local_res20[-4] = local_res20[-4] ^ uVar3;
  local_res20[-5] = unaff_RDI;
  local_res20[-6] = 0x14dbdf30d;
  FUN_15b20c6e0();
  lVar2 = *(longlong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) & uVar15;
  *(ulonglong *)(unaff_RSI + 8) = (lVar2 + uVar15) - *(longlong *)(unaff_RSI + 8);
  local_res20[-5] = unaff_retaddr;
  local_res20[-5] =
       -1 - ((~*(ulonglong *)(unaff_RSI + 8) | uVar7) + *(longlong *)(unaff_RSI + 8) + 1);
  *(ulonglong *)(unaff_RSI + 8) = local_res20[-5];
  *local_res20 = *local_res20 ^ uVar15;
  uVar5 = local_res20[-2];
  local_res20[-2] = uVar4;
  local_res20[-3] = uVar5;
  puVar1 = local_res20 + -1;
  *(ushort *)puVar1 = ~(ushort)*puVar1;
  *(ushort *)puVar1 = (ushort)*puVar1 | 0x100;
  *(ushort *)puVar1 = ~(ushort)*puVar1;
  uVar5 = local_res20[-3];
  local_res20[-3] = 0x14dbdf39d;
  uVar5 = FUN_16147fff7(uVar5);
  local_res20[-3] = uVar5;
  *(undefined4 *)(local_res20 + -3) = 0x1373404;
  *(undefined4 *)((longlong)local_res20 + -0x14) = 0;
  lVar2 = local_res20[-3];
  local_res20[-3] = lVar2;
  local_res20[-3] = local_res20[-3] + 0x18cb449;
  lVar2 = lVar2 + 0x18cb449;
  uVar15 = local_res20[-2];
  local_res20[-2] =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  local_res20[-3] = lVar2;
  local_res20[-4] = lVar2;
  local_res20[-3] = (ulonglong)&LAB_14dbdf3dd;
  return;
}



// FUNCTION 14dbdf430 FUN_14dbdf430 body=461 status=ok
// SIG undefined FUN_14dbdf430(void)

void FUN_14dbdf430(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong unaff_R12;
  ulonglong uVar11;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uStack_8;
  
  uVar11 = (unaff_R15 - (unaff_R12 | unaff_R15)) + unaff_R12 ^ 0xffffffffffffffff;
  uVar7 = param_2 - uVar11;
  puVar1 = (undefined8 *)(&stack0x00000000 + uVar7);
  uVar8 = *puVar1;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0x58be0c2;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  uVar5 = puVar1[-1];
  uVar9 = uVar5 - 0x58be0ba;
  puVar2 = (ulonglong *)((longlong)puVar1 + uVar9);
  if ((uVar5 < 0x58be0ba) &&
     (puVar2[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar5,0x58be0ba) * 0x800 |
                   (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                   (ulonglong)((longlong)uVar9 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
                   (ulonglong)(in_AF & 1) * 0x10 |
                   (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 | 1 |
                   (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                   (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000,
     (puVar2[-1] & 1) == 0)) {
    puVar2[-1] = *(undefined8 *)(unaff_RDI + -0x98);
    puVar2[1] = puVar2[-1];
    uVar6 = *puVar2;
    *puVar2 = unaff_R13;
    puVar2[-1] = *(ulonglong *)(unaff_RDI + -0xa0);
    uVar5 = *puVar2;
    uVar10 = puVar2[-1] ^ uVar7;
    puVar2[1] = puVar2[1] ^ uVar7;
    *puVar2 = uVar7;
    uVar9 = puVar2[2];
    puVar2[-1] = uVar6;
    puVar2[-2] = uVar5;
    puVar2[2] = ~puVar2[2];
    puVar2[2] = puVar2[2] | ~uVar7;
    puVar2[2] = ~puVar2[2];
    uVar8 = puVar2[-1];
    puVar3 = puVar2 + 2;
    *puVar3 = *puVar3 << 1 | (ulonglong)((longlong)*puVar3 < 0);
    puVar2[2] = puVar2[2] & 0xfffffffffffffffe;
    puVar2[2] = (uVar9 + uVar7) - puVar2[2];
    uVar5 = *puVar2;
    *puVar2 = 0;
    *puVar2 = *puVar2 + unaff_RSI;
    puVar2[-1] = 0x14dbdf553;
    FUN_165b729be();
    puVar2[2] = puVar2[2] ^ uVar11;
    puVar2[3] = puVar2[3] ^ uVar11;
    puVar2[1] = uVar8;
    *puVar2 = unaff_R14;
    puVar3 = puVar2 + 2;
    *(ushort *)puVar3 = -(ushort)*puVar3;
    *(ushort *)puVar3 = (ushort)*puVar3 - 1;
    *(ushort *)puVar3 = (ushort)*puVar3 | 0x100;
    *(ushort *)puVar3 = -(ushort)*puVar3;
    *(ushort *)puVar3 = (ushort)*puVar3 - 1;
    lVar4 = puVar2[3];
    puVar2 = (ulonglong *)(lVar4 + -8);
    *puVar2 = uVar5;
    *(ulonglong *)(lVar4 + -0x10) = *puVar2;
    *puVar2 = (ulonglong)&LAB_1568aaf9a;
    *(undefined8 *)(lVar4 + -0x10) = param_3;
    *(undefined8 *)(lVar4 + -0x18) = param_3;
    *(ulonglong *)(lVar4 + -0x20) = uVar10;
    *(ulonglong *)(lVar4 + -0x28) = uVar10;
    *(ulonglong *)(lVar4 + -0x30) = uVar10;
    *(undefined1 **)(lVar4 + -0x20) = &LAB_14dbdf603;
    *(undefined1 **)(lVar4 + -0x28) = &LAB_1568aaf38;
    return;
  }
  puVar2[-1] = in_RAX;
  *(undefined4 *)(puVar2 + -1) = 0xa37fc51b;
  *(int *)(puVar2 + -1) = (int)puVar2[-1] + 0x5c803ae5;
  *(undefined4 *)((longlong)puVar2 + -4) = 0;
  uVar5 = puVar2[-1];
  uVar9 = *puVar2;
  uVar11 = *puVar2;
  puVar2[-1] = unaff_RBP;
  *(undefined4 *)(puVar2 + -2) = 0x8abfa2e;
  *(undefined4 *)((longlong)puVar2 + -0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + (0x8abfa26 - puVar2[-2])) = in_RAX;
  FUN_156a00d79(uVar5 + uVar9 + (uVar5 & uVar11) * -2,uVar8,(int)param_3 >> ((byte)uVar7 & 0x1f));
  return;
}



// FUNCTION 14dbdf7eb FUN_14dbdf7eb body=9 status=ok
// SIG undefined FUN_14dbdf7eb(void)

void FUN_14dbdf7eb(void)

{
  FUN_156c79161();
  return;
}



// FUNCTION 14dbdf872 FUN_14dbdf872 body=180 status=ok
// SIG undefined FUN_14dbdf872(void)

void FUN_14dbdf872(undefined8 param_1)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  if (unaff_RSI == 0xbe4d5) {
    FUN_16131bb16(param_1,unaff_retaddr);
    return;
  }
  if (unaff_RSI != 0xbe4d6) {
    return;
  }
  return;
}



// FUNCTION 14dbdf9c6 FUN_14dbdf9c6 body=352 status=ok
// SIG undefined FUN_14dbdf9c6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbdfa63) */
/* WARNING: Removing unreachable block (ram,0x00014dbdfa7e) */
/* WARNING: Removing unreachable block (ram,0x00014dbdfa87) */

void FUN_14dbdf9c6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x16574cc7e)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,
             *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,0x16574cc7e);
  return;
}



// FUNCTION 14dbdfba8 FUN_14dbdfba8 body=256 status=ok
// SIG undefined FUN_14dbdfba8(void)

void FUN_14dbdfba8(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong *unaff_RBX;
  ulonglong unaff_RSI;
  longlong in_R9;
  longlong in_R11;
  longlong unaff_R13;
  longlong unaff_R15;
  ulonglong uVar2;
  
  *unaff_RBX = in_R9 - in_R11;
  *unaff_RBX = in_RAX;
  unaff_RBX[-1] = unaff_RSI;
  *unaff_RBX = *(ulonglong *)(unaff_R13 + -0x88);
  uVar1 = *unaff_RBX + unaff_R15;
  *unaff_RBX = 0x14dbdfc36;
  FUN_16472c032();
  uVar2 = unaff_RBX[2];
  unaff_RBX[2] = (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar2 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
                 (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = unaff_RBX[2];
  unaff_RBX[2] = unaff_R15;
  unaff_RBX[1] = (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar2 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
                 (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)unaff_RBX = 0x463b922;
  *(undefined4 *)((longlong)unaff_RBX + 4) = 0;
  uVar2 = *unaff_RBX;
  *unaff_RBX = uVar1;
  *(undefined8 *)((longlong)unaff_RBX + (uVar2 ^ 0x463b92a) + 0x18) = 0x34f39ea;
  *(longlong *)((longlong)unaff_RBX + -0x28a7) = unaff_R13;
  *(longlong *)((longlong)unaff_RBX + -0x28af) = unaff_R13;
  *(undefined **)((longlong)unaff_RBX + -0x28a7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dbdfd6c FUN_14dbdfd6c body=476 status=ok
// SIG undefined FUN_14dbdfd6c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbdfe09) */
/* WARNING: Removing unreachable block (ram,0x000161a51611) */
/* WARNING: Removing unreachable block (ram,0x00014dbdff41) */
/* WARNING: Removing unreachable block (ram,0x00014dbdff47) */
/* WARNING: Removing unreachable block (ram,0x00014dbdff4c) */
/* WARNING: Removing unreachable block (ram,0x00014dbe000b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0006) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0013) */

undefined8 FUN_14dbdfd6c(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x1620a876c)();
  return uVar1;
}



// FUNCTION 14dbdff4c FUN_14dbdff4c body=261 status=ok
// SIG undefined FUN_14dbdff4c(void)

undefined8
FUN_14dbdff4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined3 uVar2;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_retaddr;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -8);
  FUN_161d17d8c(param_1,param_2,param_3);
  uVar2 = SegmentLimit((int)uVar1);
  *(undefined8 *)(unaff_retaddr + -8) = param_4;
  *(undefined8 *)(unaff_retaddr + -0x10) = param_4;
  *(undefined8 *)(unaff_retaddr + -0x18) = in_R10;
  *(undefined8 *)(unaff_retaddr + -0x20) = in_R10;
  *(undefined1 **)(unaff_retaddr + -0x18) = &LAB_14dbe0052;
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),(uint)(ushort)uVar2);
}



// FUNCTION 14dbe0071 FUN_14dbe0071 body=106 status=ok
// SIG undefined FUN_14dbe0071(void)

void FUN_14dbe0071(void)

{
  return;
}



// FUNCTION 14dbe03a2 FUN_14dbe03a2 body=841 status=ok
// SIG undefined FUN_14dbe03a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe043a) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0446) */
/* WARNING: Removing unreachable block (ram,0x00014dbe04fa) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0502) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0522) */
/* WARNING: Removing unreachable block (ram,0x00014dbe0529) */

undefined8
FUN_14dbe03a2(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong in_R11;
  ulonglong local_res18;
  
  plVar2 = (longlong *)(~param_5 | param_1);
  pcVar7 = (code *)swi(0x2e);
  (*pcVar7)(~(local_res18 & param_1) & (local_res18 | param_1),param_2,param_3);
  *plVar2 = param_2;
  plVar2[-1] = param_2;
  *(undefined4 *)(plVar2 + -2) = 0x12ede4a2;
  *(undefined4 *)((longlong)plVar2 - 0xc) = 0;
  pcVar7 = FUN_16493e78b;
  plVar2[-3] = 0x1571af597;
  uVar6 = FUN_16493e78b();
  lVar5 = plVar2[-2];
  uVar3 = *(ulonglong *)pcVar7;
  *(ulonglong *)pcVar7 = ~*(ulonglong *)pcVar7;
  *(ulonglong *)pcVar7 = *(ulonglong *)pcVar7 | unaff_RBX;
  *(ulonglong *)pcVar7 = ~((in_R11 ^ 0xffffffffffffffff | uVar3) & *(ulonglong *)pcVar7);
  plVar1 = (longlong *)(plVar2[-1] + -0x10);
  lVar4 = *plVar2;
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar4;
  *plVar2 = unaff_RBP;
  plVar2[-1] = unaff_RBP;
  plVar2[-2] = (longlong)plVar1;
  plVar2[-3] = lVar5;
  plVar2[-4] = lVar5;
  plVar2[-3] = (longlong)&DAT_1571af60a;
  return uVar6;
}



// FUNCTION 14dbe0674 FUN_14dbe0674 body=228 status=ok
// SIG undefined FUN_14dbe0674(void)

void FUN_14dbe0674(undefined8 param_1)

{
  FUN_1618fa206(param_1,FUN_1618fa206);
  return;
}



// FUNCTION 14dbe075a FUN_14dbe075a body=147 status=ok
// SIG undefined FUN_14dbe075a(void)

void FUN_14dbe075a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_15677e804(in_stack_00000008,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dbe07ed FUN_14dbe07ed body=132 status=ok
// SIG undefined FUN_14dbe07ed(void)

void FUN_14dbe07ed(undefined8 param_1)

{
  FUN_16575f3d6(param_1,FUN_16575f3d6);
  return;
}



// FUNCTION 14dbe0927 FUN_14dbe0927 body=38 status=ok
// SIG undefined FUN_14dbe0927(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dbe0927(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte in_AL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong alStackX_18 [2];
  
  *(undefined8 *)((longlong)alStackX_18 + param_3) = 0;
  *(longlong *)((longlong)alStackX_18 + param_3) =
       *(longlong *)((longlong)alStackX_18 + param_3) - unaff_RBP;
  *(longlong *)((longlong)alStackX_18 + param_3) = -*(longlong *)((longlong)alStackX_18 + param_3);
  *(byte *)(unaff_RSI + 0x2f26000a) = *(byte *)(unaff_RSI + 0x2f26000a) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbe0b73 FUN_14dbe0b73 body=280 status=ok
// SIG undefined FUN_14dbe0b73(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe0c16) */

undefined8 FUN_14dbe0b73(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_res8;
  ushort local_res10;
  longlong local_res18;
  
  if ((ushort)-(~-(local_res10 | 0xfeff) + 2) < 0x100) {
    *(undefined8 *)(local_res18 + -8) = unaff_R14;
    *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
    *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
    *(undefined8 *)(local_res18 + -0x20) = 0;
    *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x20);
    *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x1618d1431;
    *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
    *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
    *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
    plVar1 = (longlong *)(local_res18 + -0x10);
    *plVar1 = 0;
    *plVar1 = *plVar1 + -0x14d7a45d2;
    *plVar1 = -*plVar1;
    *(undefined8 *)(local_res18 + -0x20) = local_res8;
    *(undefined8 *)(local_res18 + -0x28) = local_res8;
    *(undefined8 *)(local_res18 + -0x30) = local_res8;
    *(undefined1 **)(local_res18 + -0x20) = &LAB_1627b2347;
    *(undefined8 *)(local_res18 + -0x28) = 0x1618d13fd;
    return *(undefined8 *)(local_res18 + -0x30);
  }
  uVar2 = FUN_1627b22a6();
  return uVar2;
}



// FUNCTION 14dbe0d17 FUN_14dbe0d17 body=166 status=ok
// SIG undefined FUN_14dbe0d17(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe0d61) */

void FUN_14dbe0d17(void)

{
  return;
}



// FUNCTION 14dbe0e4c FUN_14dbe0e4c body=171 status=ok
// SIG undefined FUN_14dbe0e4c(void)

void FUN_14dbe0e4c(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) =
       -1 - ((unaff_R15 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(unaff_RBX + 8));
  FUN_156e2f797(local_res10);
  return;
}



// FUNCTION 14dbe0ef8 FUN_14dbe0ef8 body=134 status=ok
// SIG undefined FUN_14dbe0ef8(void)

void FUN_14dbe0ef8(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong in_R10;
  longlong unaff_R13;
  
  uVar1 = 0;
  if (((in_RAX & unaff_R13 - in_R10 ^ 0xffffffffffffffff) & 0x80000000) != 0) {
    uVar1 = 0xffffffff;
  }
  FUN_156fd772c(param_1,uVar1);
  return;
}



// FUNCTION 14dbe10be FUN_14dbe10be body=295 status=ok
// SIG undefined FUN_14dbe10be(void)

/* WARNING: Instruction at (ram,0x00014dbe118d) overlaps instruction at (ram,0x00014dbe118c)
    */

void FUN_14dbe10be(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_RBX;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  bVar12 = (local_res8 & 0x4000) != 0;
  bVar11 = (local_res8 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (local_res8 & 0x10) != 0;
  bVar16 = (uStackX_a & 0x20) != 0;
  bVar13 = (uStackX_a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  lVar5 = *(longlong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = 0x1685c6f29;
  *(longlong *)(local_res10 + -0x10) = *(longlong *)(local_res10 + -0x10) + -0x72a6ed4;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R13;
  puVar1 = (ulonglong *)(local_res10 + -0x28);
  *puVar1 = unaff_R14;
  *(undefined8 *)(local_res10 + -0x30) = in_RAX;
  *(undefined4 *)(local_res10 + -0x30) = 0x197a5c4c;
  *(undefined4 *)(local_res10 + -0x2c) = 0;
  *(undefined4 *)(local_res10 + -0x2c) = *(undefined4 *)(local_res10 + -0x2c);
  uVar3 = *(undefined8 *)(local_res10 + -0x30);
  *(undefined8 *)(local_res10 + -0x30) = 0x14dbe116f;
  FUN_16131fffe(uVar3,param_2,uVar2);
  puVar8 = (undefined8 *)(local_res10 + -0x20);
  param_4 = param_4 ^ 0xff;
  *puVar1 = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
            (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100 |
            (ulonglong)((char)param_4 < '\0') * 0x80 | (ulonglong)(param_4 == 0) * 0x40 |
            (ulonglong)(bVar9 & 1) * 0x10 | (ulonglong)((POPCOUNT(param_4) & 1U) == 0) * 4 |
            (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
            (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *puVar1 = *puVar1 & 0xfffffffffffff7ff;
  uVar17 = *puVar1;
  if ((uVar17 & 0x800) != 0) {
    puVar8 = (undefined8 *)(lVar5 + 8);
    param_4 = (byte)uVar3;
  }
  *puVar8 = *puVar8;
  uVar7 = unaff_RBX << 0x31;
  *puVar8 = *puVar8;
  uVar4 = ~uVar7 | 0xffffffffe685a3c4U >> (param_4 & 0x3f);
  lVar5 = uVar4 + uVar7;
  uVar6 = lVar5 + 1;
  puVar8[-1] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY8(lVar5,1) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar6 < 0) * 0x80
               | (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)CARRY8(uVar4,uVar7)
               | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  (*(code *)0x162b80d8f)(0x162b80d8f);
  return;
}



// FUNCTION 14dbe11e6 FUN_14dbe11e6 body=164 status=ok
// SIG undefined FUN_14dbe11e6(void)

void FUN_14dbe11e6(void)

{
  FUN_166d68353();
  return;
}



// FUNCTION 14dbe1611 FUN_14dbe1611 body=44 status=ok
// SIG undefined FUN_14dbe1611(void)

void FUN_14dbe1611(void)

{
  return;
}



// FUNCTION 14dbe16b2 FUN_14dbe16b2 body=12 status=ok
// SIG undefined FUN_14dbe16b2(void)

void FUN_14dbe16b2(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbe16ca FUN_14dbe16ca body=165 status=ok
// SIG undefined FUN_14dbe16ca(void)

void FUN_14dbe16ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1652e487c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbe1835 FUN_14dbe1835 body=142 status=ok
// SIG undefined FUN_14dbe1835(void)

void FUN_14dbe1835(void)

{
  return;
}



// FUNCTION 14dbe18ed FUN_14dbe18ed body=91 status=ok
// SIG undefined FUN_14dbe18ed(void)

void FUN_14dbe18ed(void)

{
  return;
}



// FUNCTION 14dbe196d FUN_14dbe196d body=139 status=ok
// SIG undefined FUN_14dbe196d(void)

void FUN_14dbe196d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RBP;
  
  *(undefined1 **)
   (&stack0x00000000 +
   (unaff_RBP - ~(~(param_3 & 0xffffffff87b8e249) & (param_3 | 0xffffffff87b8e249)))) =
       &LAB_1571d6d0b;
  return;
}



// FUNCTION 14dbe19f9 FUN_14dbe19f9 body=445 status=ok
// SIG undefined FUN_14dbe19f9(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe1b2b) */
/* WARNING: Removing unreachable block (ram,0x000162f39480) */

undefined8 FUN_14dbe19f9(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong in_R9;
  ulonglong unaff_R14;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(in_R9 + -0x78);
  uVar2 = 0xffffffffffffffff -
          ((~uVar2 & ~unaff_R14 | uVar2) & (0xffffffffffffffff - uVar2 | unaff_R14));
  FUN_16656ad44(uVar2,(*(ulonglong *)(in_R9 + -0x40) & unaff_R14) << 1);
  uVar1 = thunk_FUN_160cb8cf8(local_res18 + uVar2 + (local_res18 & uVar2) * -2);
  return uVar1;
}



// FUNCTION 14dbe1cc6 FUN_14dbe1cc6 body=173 status=ok
// SIG undefined FUN_14dbe1cc6(void)

void FUN_14dbe1cc6(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_166adeb81(~*(ulonglong *)(param_2 + -0x48) | ~in_R10,param_2);
  return;
}



// FUNCTION 14dbe1de0 FUN_14dbe1de0 body=147 status=ok
// SIG undefined FUN_14dbe1de0(void)

void FUN_14dbe1de0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong *unaff_RBX;
  ulonglong unaff_RBP;
  bool bVar4;
  bool bVar5;
  undefined1 *local_res8 [3];
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX & unaff_RBP;
  uVar2 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX ^ (uVar1 + unaff_RBP) - uVar2;
  bVar5 = ((ulonglong)local_res8[0] & 0x40) != 0;
  bVar4 = ((ulonglong)local_res8[0] & 1) != 0;
  bVar3 = !bVar4;
  if (!bVar3 || !bVar5) {
    local_res8[0] = (undefined1 *)local_res8;
    (*(code *)0x1664aa520)(param_1,(~(~param_2 + 2) + 1) - ~(uint)bVar4,param_3);
    return;
  }
  local_res8[0] =
       (undefined1 *)
       ((ulonglong)(((ulonglong)local_res8[0] & 0x4000) != 0) * 0x4000 |
        (ulonglong)(!bVar4 && ((ulonglong)local_res8[0] & 0x800) != 0) * 0x800 |
        (ulonglong)(((ulonglong)local_res8[0] & 0x400) != 0) * 0x400 |
        (ulonglong)(((ulonglong)local_res8[0] & 0x200) != 0) * 0x200 |
        (ulonglong)(((ulonglong)local_res8[0] & 0x100) != 0) * 0x100 |
        (ulonglong)(!bVar4 && ((ulonglong)local_res8[0] & 0x80) != 0) * 0x80 |
        (ulonglong)(bVar3 && bVar5) * 0x40 |
        (ulonglong)(((ulonglong)local_res8[0] & 0x10) != 0) * 0x10 |
        (ulonglong)(!bVar4 && ((ulonglong)local_res8[0] & 4) != 0) * 4 | (ulonglong)bVar4 |
        (ulonglong)(((ulonglong)local_res8[0] & 0x200000) != 0) * 0x200000 |
       (ulonglong)(((ulonglong)local_res8[0] & 0x40000) != 0) * 0x40000);
  if (bVar3 && bVar5) {
    FUN_14dd92660();
    return;
  }
  return;
}



// FUNCTION 14dbe1e76 FUN_14dbe1e76 body=63 status=ok
// SIG undefined FUN_14dbe1e76(void)

void FUN_14dbe1e76(void)

{
  return;
}



// FUNCTION 14dbe1f77 FUN_14dbe1f77 body=472 status=ok
// SIG undefined FUN_14dbe1f77(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe2021) */

void FUN_14dbe1f77(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15)) {
    FUN_161118b92(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                  (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                  ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                   (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
    return;
  }
  FUN_1650f1ec7();
  return;
}



// FUNCTION 14dbe2273 FUN_14dbe2273 body=276 status=ok
// SIG undefined FUN_14dbe2273(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe22f1) */
/* WARNING: Removing unreachable block (ram,0x00014dbe22fd) */

void FUN_14dbe2273(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16279b3a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbe240f FUN_14dbe240f body=161 status=ok
// SIG undefined FUN_14dbe240f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe24b1) */

void FUN_14dbe240f(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000028;
  
  uVar3 = ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  uVar1 = FUN_166b1add9();
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
  *(ulonglong *)(in_stack_00000028 - 8) = uVar3;
  *(ulonglong *)(in_stack_00000028 - 0x10) = uVar2;
  *(undefined8 *)(in_stack_00000028 - 0x18) = uVar1;
  *(undefined4 *)(in_stack_00000028 - 0x18) = 0x44f88fa7;
  *(undefined4 *)(in_stack_00000028 - 0x14) = 0;
  *(undefined8 *)(in_stack_00000028 - 0x18) = 0x165de2072;
  FUN_14da2423d();
  FUN_165de2078();
  return;
}



// FUNCTION 14dbe24b1 FUN_14dbe24b1 body=144 status=ok
// SIG undefined FUN_14dbe24b1(void)

void FUN_14dbe24b1(void)

{
  return;
}



// FUNCTION 14dbe2669 FUN_14dbe2669 body=143 status=ok
// SIG undefined FUN_14dbe2669(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe26f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbe277c) */
/* WARNING: Removing unreachable block (ram,0x00014dbe2788) */
/* WARNING: Removing unreachable block (ram,0x00014dbe2777) */
/* WARNING: Removing unreachable block (ram,0x000162bade58) */
/* WARNING: Removing unreachable block (ram,0x000162badedb) */
/* WARNING: Removing unreachable block (ram,0x00014dbe278d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbe2669(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 <
      (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * 2) {
    UNRECOVERED_JUMPTABLE =
         (code *)FUN_157306010(param_1,param_2,param_3,*(undefined8 *)(unaff_R13 + -0xa0));
                    /* WARNING: Could not recover jumptable at 0x0001657d8759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1657d8690();
  return;
}



// FUNCTION 14dbe26f8 FUN_14dbe26f8 body=246 status=ok
// SIG undefined FUN_14dbe26f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe278d) */

void FUN_14dbe26f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  FUN_161d5fa35(param_1,param_2,local_res18);
  FUN_162c9d900();
  return;
}



// FUNCTION 14dbe2812 FUN_14dbe2812 body=141 status=ok
// SIG undefined FUN_14dbe2812(void)

void FUN_14dbe2812(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  FUN_157652e60(param_1,~(param_1 & ~unaff_R12) + param_1 + 1,*(undefined8 *)(unaff_RDI + -0x50));
  return;
}



// FUNCTION 14dbe2a5c FUN_14dbe2a5c body=37 status=ok
// SIG undefined FUN_14dbe2a5c(void)

void FUN_14dbe2a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_157842375(in_stack_00000008,param_2,param_3,param_4);
  FUN_1669c8fd0();
  return;
}



// FUNCTION 14dbe2b8a FUN_14dbe2b8a body=167 status=ok
// SIG undefined FUN_14dbe2b8a(void)

void FUN_14dbe2b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1649c4f97)
            (0x397f1c65,
             CONCAT62((int6)(*(ulonglong *)(unaff_R12 + -0x70) + in_RAX +
                             (*(ulonglong *)(unaff_R12 + -0x70) & in_RAX) * -2 >> 0x10),0x1fcb),
             param_3,0x735);
  return;
}



// FUNCTION 14dbe2c32 FUN_14dbe2c32 body=148 status=ok
// SIG undefined FUN_14dbe2c32(void)

void FUN_14dbe2c32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  plVar1 = (longlong *)(local_res18 + -0x28);
  *plVar1 = in_RAX;
  *(undefined4 *)plVar1 = 0xf1fed869;
  *(undefined4 *)(local_res18 + -0x24) = 0xffffffff;
  uVar2 = *(undefined8 *)((longlong)plVar1 + *plVar1 + 0xe0127b7);
  *(longlong *)(local_res18 + -0x20) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = uVar2;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x14dbe2ce5;
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
  FUN_14d7c3615(param_1,*(undefined8 *)(local_res18 + -0x10),param_3,local_res8);
  return;
}



// FUNCTION 14dbe2d8d FUN_14dbe2d8d body=183 status=ok
// SIG undefined FUN_14dbe2d8d(void)

void FUN_14dbe2d8d(void)

{
  return;
}



// FUNCTION 14dbe2ee6 FUN_14dbe2ee6 body=174 status=ok
// SIG undefined FUN_14dbe2ee6(void)

void FUN_14dbe2ee6(void)

{
  return;
}



// FUNCTION 14dbe3017 FUN_14dbe3017 body=433 status=ok
// SIG undefined FUN_14dbe3017(void)

int FUN_14dbe3017(void)

{
  int iVar1;
  
  FUN_1651452dd();
  iVar1 = FUN_1653cf537();
  return iVar1 + -0x4c3665c0;
}



// FUNCTION 14dbe31d1 FUN_14dbe31d1 body=171 status=ok
// SIG undefined FUN_14dbe31d1(void)

void FUN_14dbe31d1(void)

{
  longlong unaff_R12;
  longlong unaff_R14;
  longlong lVar1;
  uint local_res10 [6];
  
  lVar1 = unaff_R14 + unaff_R12;
  *(undefined4 *)((longlong)local_res10 + lVar1) = 0x5b5d4b32;
  *(uint *)((longlong)local_res10 + lVar1) = *(uint *)((longlong)local_res10 + lVar1) ^ 0x5b5d4b32;
  *(undefined4 *)((longlong)local_res10 + lVar1) = *(undefined4 *)((longlong)local_res10 + lVar1);
  return;
}



// FUNCTION 14dbe3328 FUN_14dbe3328 body=314 status=ok
// SIG undefined FUN_14dbe3328(void)

/* WARNING: Removing unreachable block (ram,0x0001614df780) */
/* WARNING: Removing unreachable block (ram,0x0001614df786) */
/* WARNING: Removing unreachable block (ram,0x0001614df408) */
/* WARNING: Removing unreachable block (ram,0x0001614df413) */
/* WARNING: Removing unreachable block (ram,0x0001614df551) */
/* WARNING: Removing unreachable block (ram,0x0001614df556) */
/* WARNING: Removing unreachable block (ram,0x000156cafa90) */
/* WARNING: Removing unreachable block (ram,0x0001614df55c) */
/* WARNING: Removing unreachable block (ram,0x0001614df5e7) */
/* WARNING: Removing unreachable block (ram,0x000164c4b5ee) */
/* WARNING: Removing unreachable block (ram,0x0001614df5ed) */
/* WARNING: Removing unreachable block (ram,0x0001614df65d) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc6cc) */
/* WARNING: Removing unreachable block (ram,0x0001614df663) */
/* WARNING: Removing unreachable block (ram,0x000162d60e9f) */
/* WARNING: Removing unreachable block (ram,0x0001564a6e11) */
/* WARNING: Removing unreachable block (ram,0x00015708e46d) */
/* WARNING: Removing unreachable block (ram,0x0001564a6e31) */
/* WARNING: Removing unreachable block (ram,0x0001564a6e39) */
/* WARNING: Removing unreachable block (ram,0x0001564a6e3f) */
/* WARNING: Removing unreachable block (ram,0x0001564a6e44) */
/* WARNING: Removing unreachable block (ram,0x0001564a6ee8) */
/* WARNING: Removing unreachable block (ram,0x000165316529) */
/* WARNING: Removing unreachable block (ram,0x000165316597) */
/* WARNING: Removing unreachable block (ram,0x00016531659d) */
/* WARNING: Removing unreachable block (ram,0x00015708e3db) */
/* WARNING: Removing unreachable block (ram,0x000162e2fdab) */
/* WARNING: Removing unreachable block (ram,0x000162e2ff43) */
/* WARNING: Removing unreachable block (ram,0x000162e2ff4f) */
/* WARNING: Removing unreachable block (ram,0x0001566987f5) */
/* WARNING: Removing unreachable block (ram,0x00014da061e7) */
/* WARNING: Removing unreachable block (ram,0x0001564a6eee) */
/* WARNING: Removing unreachable block (ram,0x000162e2ff88) */
/* WARNING: Removing unreachable block (ram,0x000162e2ff8c) */
/* WARNING: Removing unreachable block (ram,0x0001614df40e) */
/* WARNING: Removing unreachable block (ram,0x00014dbe33d5) */
/* WARNING: Removing unreachable block (ram,0x00014da061ed) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3459) */
/* WARNING: Removing unreachable block (ram,0x00014dbe345f) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3464) */
/* WARNING: Removing unreachable block (ram,0x0001614df3ea) */

undefined8 FUN_14dbe3328(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70) | param_1;
  if (uVar2 != 0) {
    uVar1 = FUN_15b351a5a(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                          ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1) & uVar2,
                          0xffffffffffffff70);
    return uVar1;
  }
  uVar1 = FUN_1614df373();
  return uVar1;
}



// FUNCTION 14dbe3464 FUN_14dbe3464 body=432 status=ok
// SIG undefined FUN_14dbe3464(void)

longlong FUN_14dbe3464(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  undefined8 local_res20;
  
  uVar2 = -(in_stack_00000008 - *(longlong *)(unaff_RDI + -0x88));
  uVar3 = ~((~param_1 | uVar2) + param_1 + 1) & (uVar2 | param_1);
  uVar1 = FUN_162cbee04(param_1,param_2,param_3,param_4);
  uVar2 = *(ulonglong *)(uVar3 + 8);
  *(ulonglong *)(uVar3 + 8) = ~*(ulonglong *)(uVar3 + 8);
  *(ulonglong *)(uVar3 + 8) = *(ulonglong *)(uVar3 + 8) | uVar1;
  *(ulonglong *)(uVar3 + 8) = ~((uVar1 ^ 0xffffffffffffffff | uVar2) & *(ulonglong *)(uVar3 + 8));
  FUN_165986d00();
  return local_res20 + uVar1 + (local_res20 & uVar1) * -2;
}



// FUNCTION 14dbe361a FUN_14dbe361a body=143 status=ok
// SIG undefined FUN_14dbe361a(void)

void FUN_14dbe361a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R10;
  longlong unaff_R15;
  
  *(ulonglong *)(in_R10 + 8) = ~(unaff_R15 + *(longlong *)(in_R10 + 8) + 1U);
  FUN_15b31d322(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbe371f FUN_14dbe371f body=173 status=ok
// SIG undefined FUN_14dbe371f(void)

void FUN_14dbe371f(undefined8 param_1,undefined8 param_2)

{
  FUN_156566689(param_1,param_2);
  return;
}



// FUNCTION 14dbe38f0 FUN_14dbe38f0 body=156 status=ok
// SIG undefined FUN_14dbe38f0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe3987) */
/* WARNING: Removing unreachable block (ram,0x00014dbe398d) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3a0f) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3a14) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3a20) */
/* WARNING: Removing unreachable block (ram,0x00014dbe3a25) */

void FUN_14dbe38f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_1655cccd5(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dbe398d FUN_14dbe398d body=329 status=ok
// SIG undefined FUN_14dbe398d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe3a25) */

void FUN_14dbe398d(void)

{
  short unaff_BP;
  
  if (unaff_BP < 0) {
    FUN_16694df29();
    return;
  }
  FUN_16694df29();
  return;
}



// FUNCTION 14dbe3ad7 FUN_14dbe3ad7 body=142 status=ok
// SIG undefined FUN_14dbe3ad7(void)

void FUN_14dbe3ad7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined1 **)(local_res18 + -8) = &LAB_164b525f4;
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  uVar3 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = uVar1;
  *(undefined8 *)(local_res18 + -0x18) = uVar1;
  *(code **)(local_res18 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RBP;
  *(code **)(local_res18 + -0x20) = FUN_14dbe3b66;
  FUN_164b525d7(uVar3,param_2,local_res8,uVar2);
  return;
}



// FUNCTION 14dbe3b66 FUN_14dbe3b66 body=135 status=ok
// SIG undefined FUN_14dbe3b66(void)

void FUN_14dbe3b66(undefined8 param_1)

{
  longlong unaff_R12;
  
  FUN_15b9bf8c7(param_1,*(undefined8 *)(unaff_R12 + -0x38),0xffffffffffffffa0,FUN_15b9bf8c7);
  return;
}



// FUNCTION 14dbe3c76 FUN_14dbe3c76 body=147 status=ok
// SIG undefined FUN_14dbe3c76(void)

void FUN_14dbe3c76(void)

{
  FUN_156fe0242(FUN_156fe0242);
  return;
}



// FUNCTION 14dbe3e62 FUN_14dbe3e62 body=125 status=ok
// SIG undefined FUN_14dbe3e62(void)

void FUN_14dbe3e62(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1668e5481)
            (param_1 ^ 0x5c1a305a ^ *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dbe3edf FUN_14dbe3edf body=319 status=ok
// SIG undefined FUN_14dbe3edf(void)

void FUN_14dbe3edf(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  char in_stack_00000030;
  
  if (in_stack_00000030 < '\0') {
    FUN_1669ad74f(FUN_1669ad74f,0xe86e4b2b);
    return;
  }
  FUN_165c05361(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14dbe3f76 FUN_14dbe3f76 body=124 status=ok
// SIG undefined FUN_14dbe3f76(void)

void FUN_14dbe3f76(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined4 *)(local_res10 + -0x18) = 0x4891459;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = uVar1;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x27071df;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x28) = 0x14dbe3ff7;
  FUN_15b98a445();
  FUN_14dbe3ffd();
  return;
}



// FUNCTION 14dbe3ffd FUN_14dbe3ffd body=307 status=ok
// SIG undefined FUN_14dbe3ffd(void)

/* WARNING: Instruction at (ram,0x00015737bd8c) overlaps instruction at (ram,0x00015737bd8b)
    */
/* WARNING: Removing unreachable block (ram,0x000162837e90) */
/* WARNING: Removing unreachable block (ram,0x000162837dcf) */
/* WARNING: Removing unreachable block (ram,0x000162837de0) */
/* WARNING: Removing unreachable block (ram,0x000162837ddb) */
/* WARNING: Removing unreachable block (ram,0x000162837dfc) */
/* WARNING: Removing unreachable block (ram,0x000162837e94) */
/* WARNING: Removing unreachable block (ram,0x00015737bd10) */
/* WARNING: Removing unreachable block (ram,0x00015737bd85) */
/* WARNING: Removing unreachable block (ram,0x00015737bd8c) */
/* WARNING: Removing unreachable block (ram,0x000162837efb) */
/* WARNING: Removing unreachable block (ram,0x000162837f0f) */
/* WARNING: Removing unreachable block (ram,0x000162837f17) */
/* WARNING: Removing unreachable block (ram,0x000162837f9f) */
/* WARNING: Removing unreachable block (ram,0x00016111fc2b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4130) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4136) */
/* WARNING: Removing unreachable block (ram,0x000165527b8c) */
/* WARNING: Removing unreachable block (ram,0x000165527c17) */
/* WARNING: Removing unreachable block (ram,0x000165527c1d) */
/* WARNING: Removing unreachable block (ram,0x000165527c22) */
/* WARNING: Removing unreachable block (ram,0x000165527c73) */
/* WARNING: Removing unreachable block (ram,0x000165527c7d) */
/* WARNING: Removing unreachable block (ram,0x000162134856) */
/* WARNING: Removing unreachable block (ram,0x000161beab65) */
/* WARNING: Removing unreachable block (ram,0x0001621348ec) */
/* WARNING: Removing unreachable block (ram,0x0001621348f2) */
/* WARNING: Removing unreachable block (ram,0x0001621348f7) */
/* WARNING: Removing unreachable block (ram,0x00016213496f) */
/* WARNING: Removing unreachable block (ram,0x000162134975) */
/* WARNING: Removing unreachable block (ram,0x00015afb7a23) */
/* WARNING: Removing unreachable block (ram,0x00014dbe40aa) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4125) */
/* WARNING: Removing unreachable block (ram,0x000162837fa5) */

undefined8 FUN_14dbe3ffd(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162837dcf();
  return uVar1;
}



// FUNCTION 14dbe4136 FUN_14dbe4136 body=167 status=ok
// SIG undefined FUN_14dbe4136(void)

void FUN_14dbe4136(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  FUN_1578710e3(param_1,unaff_RSI - param_2);
  return;
}



// FUNCTION 14dbe41dd FUN_14dbe41dd body=106 status=ok
// SIG undefined FUN_14dbe41dd(void)

undefined8 FUN_14dbe41dd(void)

{
  ushort *in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | 0x100;
  *in_RAX = ~*in_RAX;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x14dbe4263;
  *(code **)(local_res20 + -0x10) = HeapAlloc_exref;
  return uStackX_8;
}



// FUNCTION 14dbe4282 FUN_14dbe4282 body=200 status=ok
// SIG undefined FUN_14dbe4282(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe4320) */
/* WARNING: Removing unreachable block (ram,0x00014dbe432b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4326) */

void FUN_14dbe4282(void)

{
  short in_R11W;
  
  if (in_R11W != -1) {
    return;
  }
  FUN_166731e61();
  return;
}



// FUNCTION 14dbe4843 FUN_14dbe4843 body=134 status=ok
// SIG undefined FUN_14dbe4843(void)

void FUN_14dbe4843(undefined8 param_1,undefined8 param_2)

{
  FUN_166582799(param_1,param_2);
  return;
}



// FUNCTION 14dbe4a61 FUN_14dbe4a61 body=111 status=ok
// SIG undefined FUN_14dbe4a61(void)

void FUN_14dbe4a61(void)

{
  return;
}



// FUNCTION 14dbe4b82 FUN_14dbe4b82 body=309 status=ok
// SIG undefined FUN_14dbe4b82(void)

/* WARNING: Removing unreachable block (ram,0x000162b88fc8) */
/* WARNING: Removing unreachable block (ram,0x000162b88fd3) */
/* WARNING: Removing unreachable block (ram,0x000162b89052) */
/* WARNING: Removing unreachable block (ram,0x000162b89057) */
/* WARNING: Removing unreachable block (ram,0x000162b88fce) */
/* WARNING: Removing unreachable block (ram,0x000164afd9a0) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4c19) */

void FUN_14dbe4b82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x90) == 0) {
    FUN_16625b993(param_1,param_2,param_3);
    return;
  }
  FUN_162b88f36();
  return;
}


