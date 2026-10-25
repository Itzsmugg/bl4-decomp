// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dcc15d6 FUN_14dcc15d6 body=180 status=ok
// SIG undefined FUN_14dcc15d6(void)

longlong FUN_14dcc15d6(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  return unaff_RDI + ~(in_RAX | ~unaff_RBX) * -2;
}



// FUNCTION 14dcc168b FUN_14dcc168b body=317 status=ok
// SIG undefined FUN_14dcc168b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc1729) */

void FUN_14dcc168b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15b34f2b2(unaff_retaddr,FUN_15b34f2b2,param_3);
  return;
}



// FUNCTION 14dcc1729 FUN_14dcc1729 body=262 status=ok
// SIG undefined FUN_14dcc1729(void)

void FUN_14dcc1729(void)

{
  FUN_1658c0f21();
  FUN_162103e67();
  return;
}



// FUNCTION 14dcc1833 FUN_14dcc1833 body=356 status=ok
// SIG undefined FUN_14dcc1833(void)

void FUN_14dcc1833(undefined8 param_1,undefined8 param_2,int param_3)

{
  int in_R10D;
  
  (*(code *)0x1659269f2)(param_1,param_2,-(param_3 - in_R10D),0x1659269f2);
  return;
}



// FUNCTION 14dcc196a FUN_14dcc196a body=1092 status=ok
// SIG undefined FUN_14dcc196a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc1bea) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bab) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bb1) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1be5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1bed) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c57) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c5c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c62) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1c6d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1cfc) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1d02) */
/* WARNING: Removing unreachable block (ram,0x00015b883a95) */
/* WARNING: Removing unreachable block (ram,0x00015b883aa0) */
/* WARNING: Removing unreachable block (ram,0x0001658e643b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b0b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b2b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1b2e) */

void FUN_14dcc196a(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_R13;
  
  uVar1 = ~(((param_2 + -1) - ~unaff_R13) + unaff_RBP);
  FUN_160d5b2b8();
  if (uVar1 != 0x7a209434) {
    FUN_15b3d5987();
    return;
  }
  FUN_1572799d3();
  if (*(longlong *)(unaff_R12 + -0x60) != 0) {
    FUN_14de42d1d();
    return;
  }
  return;
}



// FUNCTION 14dcc1d02 FUN_14dcc1d02 body=173 status=ok
// SIG undefined FUN_14dcc1d02(void)

void FUN_14dcc1d02(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  longlong local_res18;
  
  param_4 = param_4 - local_res18;
  *(undefined8 *)(param_4 + -8) = unaff_R13;
  *(undefined8 *)(param_4 + -0x10) = unaff_retaddr;
  *(undefined8 *)(param_4 + -0x18) = unaff_retaddr;
  *(undefined8 *)(param_4 + -0x20) = in_stack_00000008;
  *(undefined8 *)(param_4 + -0x28) = param_3;
  *(undefined8 *)(param_4 + -0x30) = param_3;
  *(undefined **)(param_4 + -0x28) = &DAT_14dcc1daf;
  FUN_161882f06(param_1,param_2,*(undefined8 *)(param_4 + -0x30));
  return;
}



// FUNCTION 14dcc1e36 FUN_14dcc1e36 body=457 status=ok
// SIG undefined FUN_14dcc1e36(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc1f61) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1f6d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1fea) */
/* WARNING: Removing unreachable block (ram,0x00015675030c) */
/* WARNING: Removing unreachable block (ram,0x000156750312) */
/* WARNING: Removing unreachable block (ram,0x0001567503a9) */
/* WARNING: Removing unreachable block (ram,0x0001567503ae) */
/* WARNING: Removing unreachable block (ram,0x0001567503b4) */
/* WARNING: Removing unreachable block (ram,0x00015675042d) */
/* WARNING: Removing unreachable block (ram,0x000156750439) */
/* WARNING: Removing unreachable block (ram,0x000156750445) */
/* WARNING: Removing unreachable block (ram,0x000166a73d3b) */
/* WARNING: Removing unreachable block (ram,0x0001620de705) */
/* WARNING: Removing unreachable block (ram,0x000166a73d9c) */
/* WARNING: Removing unreachable block (ram,0x000166a73dbf) */
/* WARNING: Removing unreachable block (ram,0x000166a73dcd) */
/* WARNING: Removing unreachable block (ram,0x000156baa157) */
/* WARNING: Removing unreachable block (ram,0x000156baa1f4) */
/* WARNING: Removing unreachable block (ram,0x000156baa1f9) */
/* WARNING: Removing unreachable block (ram,0x000156baa1ff) */
/* WARNING: Removing unreachable block (ram,0x000156baa20b) */
/* WARNING: Removing unreachable block (ram,0x000156baa206) */
/* WARNING: Removing unreachable block (ram,0x000156baa20e) */
/* WARNING: Removing unreachable block (ram,0x000162e7b435) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1f06) */
/* WARNING: Removing unreachable block (ram,0x0001572a68a2) */
/* WARNING: Removing unreachable block (ram,0x0001572a6931) */
/* WARNING: Removing unreachable block (ram,0x0001572a6936) */
/* WARNING: Removing unreachable block (ram,0x0001572a693c) */
/* WARNING: Removing unreachable block (ram,0x0001572a6941) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1fef) */
/* WARNING: Removing unreachable block (ram,0x00014dcc1ff5) */
/* WARNING: Removing unreachable block (ram,0x00016292158a) */

undefined8 FUN_14dcc1e36(void)

{
  undefined8 uVar1;
  
  FUN_156bffcdd();
  uVar1 = FUN_1572a68a2();
  return uVar1;
}



// FUNCTION 14dcc214c FUN_14dcc214c body=141 status=ok
// SIG undefined FUN_14dcc214c(void)

void FUN_14dcc214c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1569eb9b3(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dcc21d9 FUN_14dcc21d9 body=122 status=ok
// SIG undefined FUN_14dcc21d9(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc221d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc2234) */

void FUN_14dcc21d9(void)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_165e0ab20)(0x2a6dd1f4,local_res8);
  return;
}



// FUNCTION 14dcc2264 FUN_14dcc2264 body=311 status=ok
// SIG undefined FUN_14dcc2264(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc232e) */

void FUN_14dcc2264(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined8 unaff_R13;
  
  FUN_165312280(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  FUN_156d0dc06(param_1,param_2 ^ unaff_RBP,unaff_R13);
  FUN_14dcc239e();
  return;
}



// FUNCTION 14dcc239e FUN_14dcc239e body=190 status=ok
// SIG undefined FUN_14dcc239e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcc239e(void)

{
  return;
}



// FUNCTION 14dcc255f FUN_14dcc255f body=134 status=ok
// SIG undefined FUN_14dcc255f(void)

void FUN_14dcc255f(undefined8 param_1)

{
  FUN_16680906e(param_1,FUN_16680906e);
  return;
}



// FUNCTION 14dcc266f FUN_14dcc266f body=151 status=ok
// SIG undefined FUN_14dcc266f(void)

void FUN_14dcc266f(undefined8 param_1,undefined8 param_2)

{
  FUN_1667053d2(param_1,param_2);
  return;
}



// FUNCTION 14dcc2790 FUN_14dcc2790 body=162 status=ok
// SIG undefined FUN_14dcc2790(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc281b) */

void FUN_14dcc2790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166525fdb(FUN_166525fdb,0x45f74dfd,param_3);
  return;
}



// FUNCTION 14dcc29eb FUN_14dcc29eb body=3 status=ok
// SIG undefined FUN_14dcc29eb(void)

void FUN_14dcc29eb(void)

{
  return;
}



// FUNCTION 14dcc2bc1 FUN_14dcc2bc1 body=407 status=ok
// SIG undefined FUN_14dcc2bc1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc2c59) */

void FUN_14dcc2bc1(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  longlong lVar4;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar5;
  ulonglong in_stack_00000008;
  
  uVar5 = ~(~(in_stack_00000008 & 0xffffffffbbb378aa) & (in_stack_00000008 | 0xffffffffbbb378aa));
  puVar1 = (undefined8 *)(&stack0xffffffffff4143d0 + uVar5);
  *puVar1 = param_1;
  uVar2 = *puVar1;
  lVar4 = unaff_RBP + param_2 * -2;
  *puVar1 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)(&stack0xffffffffff4143d0 + uVar5) = *(undefined8 *)(unaff_R12 + -0x68);
  *(longlong *)(&stack0xffffffffff4143c8 + uVar5) = lVar4;
  *(longlong *)(&stack0xffffffffff4143c0 + uVar5) = lVar4;
  lVar4 = *(longlong *)(unaff_R12 + -8);
  *(undefined8 *)(&stack0xffffffffff4143c8 + uVar5) = 0;
  *(longlong *)(&stack0xffffffffff4143c8 + uVar5) =
       *(longlong *)(&stack0xffffffffff4143c8 + uVar5) - lVar4;
  *(longlong *)(&stack0xffffffffff4143c8 + uVar5) = -*(longlong *)(&stack0xffffffffff4143c8 + uVar5)
  ;
  uVar3 = *(undefined8 *)(&stack0xffffffffff4143c0 + uVar5);
  *(undefined8 *)(&stack0xffffffffff4143c0 + uVar5) = unaff_R14;
  *(undefined8 *)(&stack0xffffffffff4143b8 + uVar5) = unaff_R14;
  *(undefined8 *)(&stack0xffffffffff4143c0 + uVar5) = *(undefined8 *)(unaff_R12 + -0x98);
  *(undefined8 *)(&stack0xffffffffff4143b8 + uVar5) =
       *(undefined8 *)(&stack0xffffffffff4143b8 + uVar5);
  *(undefined4 *)(&stack0xffffffffff4143b0 + uVar5) = 0xc61088e8;
  *(undefined4 *)(&stack0xffffffffff4143b4 + uVar5) = 0xffffffff;
  (*(code *)0x1623dbdfe)(uVar2,uVar3);
  return;
}



// FUNCTION 14dcc2d85 FUN_14dcc2d85 body=414 status=ok
// SIG undefined FUN_14dcc2d85(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc2e49) */
/* WARNING: Removing unreachable block (ram,0x00014dcc2ec8) */
/* WARNING: Removing unreachable block (ram,0x00016658b590) */
/* WARNING: Removing unreachable block (ram,0x00016658b68e) */
/* WARNING: Removing unreachable block (ram,0x00014dcc2ed4) */

undefined8 FUN_14dcc2d85(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (&DAT_fffffffffffffff7 < &stack0xfffffffffffffff8) {
    uVar1 = FUN_166a2c2b8();
    return uVar1;
  }
  uVar1 = FUN_165052ba2(FUN_165052ba2,param_2);
  return uVar1;
}



// FUNCTION 14dcc2f71 FUN_14dcc2f71 body=278 status=ok
// SIG undefined FUN_14dcc2f71(void)

void FUN_14dcc2f71(undefined8 param_1)

{
  FUN_16606dc3d();
  FUN_16629ec14(param_1);
  return;
}



// FUNCTION 14dcc3248 FUN_14dcc3248 body=186 status=ok
// SIG undefined FUN_14dcc3248(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc32f2) */

void FUN_14dcc3248(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 in_RAX;
  ulonglong unaff_retaddr;
  
  if (param_4 == (unaff_retaddr ^ 0x7714156d)) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == 0xcccea) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == (CONCAT44((int)((ulonglong)in_RAX >> 0x20),0x7833b68b) ^ 0x164fa10a783f7a60)) {
    FUN_165e93f27(param_1,param_2,param_3,0x14d7a5209);
    return;
  }
  if (param_4 == 0xcccec) {
    FUN_165e93f27(param_1,param_2,param_3,&DAT_14d7c00d5);
    return;
  }
  FUN_160e572d1(param_1,param_4);
  return;
}



// FUNCTION 14dcc3390 FUN_14dcc3390 body=331 status=ok
// SIG undefined FUN_14dcc3390(void)

/* WARNING: Removing unreachable block (ram,0x00014e196400) */
/* WARNING: Removing unreachable block (ram,0x00014e196406) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3433) */
/* WARNING: Removing unreachable block (ram,0x00014dcc34b8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc34bd) */

ulonglong FUN_14dcc3390(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R12 + -0x48);
  if (((ushort)~((~(ushort)in_RAX | uVar1) & (~uVar1 | (ushort)in_RAX)) >> 10 & 1) != 0) {
    uVar2 = FUN_161e1d082();
    return uVar2;
  }
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90);
  uVar2 = (~in_RAX + uVar2) - (~in_RAX & uVar2) & (~uVar2 | in_RAX);
  if ((uVar2 != 0) && (uVar2 == 0)) {
    uVar2 = *(ulonglong *)((*(ulonglong *)(unaff_R12 + -0x50) ^ in_RAX) - 0x28);
    uVar3 = ~uVar2 | param_1;
    uVar2 = FUN_1611078fe(param_1,~((~uVar3 | ~param_1 | uVar2) + uVar3 + 1),param_3);
    return uVar2;
  }
  FUN_162336921();
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dcc34db FUN_14dcc34db body=162 status=ok
// SIG undefined FUN_14dcc34db(void)

void FUN_14dcc34db(void)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  *(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI) =
       ~*(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI) =
       *(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI) | ~unaff_R15;
  *(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI) =
       ~*(ulonglong *)(&stack0xfffffffffa2025b3 + unaff_RDI);
  return;
}



// FUNCTION 14dcc357e FUN_14dcc357e body=467 status=ok
// SIG undefined FUN_14dcc357e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc361d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc36aa) */
/* WARNING: Removing unreachable block (ram,0x00015b4a0d67) */
/* WARNING: Removing unreachable block (ram,0x00014dcc36b0) */

void FUN_14dcc357e(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  uint unaff_retaddr;
  
  uVar1 = *(ulonglong *)
           (unaff_RDI + (-~param_3 - (in_RAX + ((ulonglong)unaff_retaddr ^ 0x6270b617))));
  uVar3 = ~*(ulonglong *)(unaff_RDI + -0x80) + param_1;
  uVar2 = ~*(ulonglong *)(unaff_RDI + -0x80) & param_1;
  if (uVar3 < uVar2) {
    return;
  }
  FUN_161daa35c(param_1,~(uVar3 - uVar2),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                uVar1 + param_1 + (uVar1 & param_1) * -2);
  return;
}



// FUNCTION 14dcc3738 FUN_14dcc3738 body=160 status=ok
// SIG undefined FUN_14dcc3738(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc37d9) */
/* WARNING: Removing unreachable block (ram,0x00014dcc388d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3892) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3898) */
/* WARNING: Removing unreachable block (ram,0x000160c55317) */
/* WARNING: Removing unreachable block (ram,0x00014dcc37c9) */

void FUN_14dcc3738(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *in_R11;
  ulonglong uVar3;
  
  uVar3 = ((param_1 ^ 0xffffffffffffffff) + *in_R11) - ((param_1 ^ 0xffffffffffffffff) & *in_R11);
  *in_R11 = ~*in_R11;
  *in_R11 = *in_R11 | param_1;
  uVar1 = *in_R11;
  uVar2 = *in_R11;
  *in_R11 = 0;
  *in_R11 = *in_R11 ^ 0x7ce8c4eb;
  *in_R11 = *in_R11 ^ 0x7ce8c4eb;
  *in_R11 = *in_R11 + ~((uVar2 - (uVar3 | uVar1)) + uVar3);
  FUN_162ca2927();
  return;
}



// FUNCTION 14dcc37d9 FUN_14dcc37d9 body=204 status=ok
// SIG undefined FUN_14dcc37d9(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc3892) */
/* WARNING: Removing unreachable block (ram,0x000160c55317) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3898) */

void FUN_14dcc37d9(void)

{
  FUN_160c55317();
  return;
}



// FUNCTION 14dcc3944 FUN_14dcc3944 body=159 status=ok
// SIG undefined FUN_14dcc3944(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc39da) */
/* WARNING: Removing unreachable block (ram,0x00014dcc39e0) */
/* WARNING: Removing unreachable block (ram,0x00014dcc39e5) */

void FUN_14dcc3944(void)

{
  return;
}



// FUNCTION 14dcc39e5 FUN_14dcc39e5 body=161 status=ok
// SIG undefined FUN_14dcc39e5(void)

void FUN_14dcc39e5(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_160cbbaef(~*(ulonglong *)(unaff_R12 + -0x58),~in_RAX | *(ulonglong *)(unaff_R12 + -0x58),
                param_3 ^ in_RAX);
  return;
}



// FUNCTION 14dcc3b13 FUN_14dcc3b13 body=188 status=ok
// SIG undefined FUN_14dcc3b13(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015670b0dc) */
/* WARNING: Removing unreachable block (ram,0x00015670b0e2) */
/* WARNING: Removing unreachable block (ram,0x00015670b0fd) */
/* WARNING: Removing unreachable block (ram,0x00015670b184) */
/* WARNING: Removing unreachable block (ram,0x00015670b18a) */
/* WARNING: Removing unreachable block (ram,0x000157114640) */
/* WARNING: Removing unreachable block (ram,0x0001571146ec) */
/* WARNING: Removing unreachable block (ram,0x0001571146f8) */
/* WARNING: Removing unreachable block (ram,0x000156c591cc) */
/* WARNING: Removing unreachable block (ram,0x0001567c6b7b) */
/* WARNING: Removing unreachable block (ram,0x0001567c6b75) */
/* WARNING: Removing unreachable block (ram,0x0001567c6b80) */
/* WARNING: Removing unreachable block (ram,0x000162e4d71d) */
/* WARNING: Removing unreachable block (ram,0x000162e4d728) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7bd) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7c2) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7c8) */
/* WARNING: Removing unreachable block (ram,0x00014db16165) */
/* WARNING: Removing unreachable block (ram,0x00014db161f6) */
/* WARNING: Removing unreachable block (ram,0x00014db161fb) */
/* WARNING: Removing unreachable block (ram,0x00014db16201) */
/* WARNING: Removing unreachable block (ram,0x00014db16206) */
/* WARNING: Removing unreachable block (ram,0x000162e4d723) */
/* WARNING: Removing unreachable block (ram,0x00014d93f0d2) */
/* WARNING: Removing unreachable block (ram,0x00014d93f179) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d93f185) */
/* WARNING: Removing unreachable block (ram,0x0001654fb64e) */
/* WARNING: Removing unreachable block (ram,0x00014d93f216) */
/* WARNING: Removing unreachable block (ram,0x00014d93f21c) */
/* WARNING: Removing unreachable block (ram,0x00014d93f221) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2e3) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2ee) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2e9) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2de) */
/* WARNING: Removing unreachable block (ram,0x000162e4d68c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf739c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf73f4) */
/* WARNING: Removing unreachable block (ram,0x00014dcf73f8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3b84) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3b95) */
/* WARNING: Removing unreachable block (ram,0x00014d7aaea4) */
/* WARNING: Removing unreachable block (ram,0x0001567c6a32) */
/* WARNING: Removing unreachable block (ram,0x0001567c6ace) */
/* WARNING: Removing unreachable block (ram,0x00014d93f04c) */
/* WARNING: Removing unreachable block (ram,0x00015670afdb) */
/* WARNING: Removing unreachable block (ram,0x00015670b057) */
/* WARNING: Removing unreachable block (ram,0x00015670b05d) */
/* WARNING: Removing unreachable block (ram,0x0001626be609) */
/* WARNING: Removing unreachable block (ram,0x00015b9cde7f) */
/* WARNING: Removing unreachable block (ram,0x00015b9cdefd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x0001567c6a19 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dcc3b13(longlong param_1)

{
  uint in_EAX;
  ulonglong uVar1;
  uint unaff_EBX;
  uint unaff_ESI;
  uint unaff_EDI;
  uint uVar2;
  
  uVar2 = ~(~unaff_EDI & ~(unaff_ESI ^ 0x1d0bef2a));
  if (param_1 != 0) {
    uVar1 = FUN_1654145c2();
    return uVar1;
  }
  return (ulonglong)(((~((uVar2 - (unaff_EBX | uVar2)) + unaff_EBX) - 1) - ~in_EAX) * 0x200000);
}



// FUNCTION 14dcc3c27 FUN_14dcc3c27 body=144 status=ok
// SIG undefined FUN_14dcc3c27(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc3e01) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3d6b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3dfb) */
/* WARNING: Removing unreachable block (ram,0x00015644d108) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3d5a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcc3c27(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_R10;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  ulonglong uStackX_10;
  
  uVar2 = 0xbf7ffdff;
  FUN_165b47c44();
  uVar2 = ~((~uVar2 | uStackX_10) & (~uStackX_10 | uVar2));
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_retaddr;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = in_R10;
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = (longlong)(&LAB_14dce1b79 + *(longlong *)(uVar2 - 8));
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  thunk_FUN_15b642ca5(unaff_R14);
  return;
}



// FUNCTION 14dcc3cb8 FUN_14dcc3cb8 body=400 status=ok
// SIG undefined FUN_14dcc3cb8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc3e01) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3d6b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3dfb) */
/* WARNING: Removing unreachable block (ram,0x00015644d108) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3d5a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcc3cb8(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  undefined8 in_R10;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar2 = ~((~param_1 | local_res18) & (~local_res18 | param_1));
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RSI;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = in_R10;
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = (longlong)(&LAB_14dce1b79 + *(longlong *)(uVar2 - 8));
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  thunk_FUN_15b642ca5(local_res8);
  return;
}



// FUNCTION 14dcc3f2c FUN_14dcc3f2c body=364 status=ok
// SIG undefined FUN_14dcc3f2c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc3fd3) */

void FUN_14dcc3f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  if (*(longlong *)(unaff_RSI + -0xa0) == unaff_RBP) {
    FUN_16192a748();
    return;
  }
  FUN_164b3a4db(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dcc4280 FUN_14dcc4280 body=179 status=ok
// SIG undefined FUN_14dcc4280(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc4333) */
/* WARNING: Removing unreachable block (ram,0x00014dcc4323) */

void FUN_14dcc4280(void)

{
  thunk_FUN_14dd76016();
  return;
}



// FUNCTION 14dcc4333 FUN_14dcc4333 body=138 status=ok
// SIG undefined FUN_14dcc4333(void)

void FUN_14dcc4333(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined1 in_AL;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 uStackX_18;
  
  *(undefined8 *)(unaff_RDI + (unaff_retaddr ^ 0x38fc553a)) = param_4;
  param_6 = param_6 ^ unaff_RBX;
  LOCK();
  UNLOCK();
  DAT_14d7ad01a = in_AL;
  *(undefined8 *)(param_6 - 8) = 0x18bee0;
  *(undefined8 *)(param_6 - 0x10) = unaff_R14;
  *(undefined8 *)(param_6 - 0x18) = unaff_R14;
  *(code **)(param_6 - 0x10) = FUN_1629c9909;
  (*(code *)0x164ae4dbc)(param_1,param_2,param_3,uStackX_18);
  return;
}



// FUNCTION 14dcc444c FUN_14dcc444c body=93 status=ok
// SIG undefined FUN_14dcc444c(void)

void FUN_14dcc444c(longlong param_1)

{
  undefined8 in_RAX;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  LPCSTR local_res18;
  undefined8 local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + param_1 + unaff_R12 + (unaff_retaddr ^ 0x4d737354)) =
       in_RAX;
                    /* WARNING: Could not recover jumptable at 0x00014dcc44a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(local_res18);
  return;
}



// FUNCTION 14dcc44dd FUN_14dcc44dd body=419 status=ok
// SIG undefined FUN_14dcc44dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc45f0) */

void FUN_14dcc44dd(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  
  uVar1 = (~(~*(ulonglong *)(unaff_R12 + -0x50) & ~in_stack_00000008) + ~in_stack_00000008) -
          *(ulonglong *)(unaff_R12 + -0x50);
  FUN_1575c8155(param_1,param_2);
  uVar1 = *(ulonglong *)(~(~(~uVar1 << 1 | (ulonglong)(-1 < (longlong)uVar1)) | 1) - 0x48);
  if (-1 < (longlong)
           (uVar1 + param_1 +
           ((-~param_1 - (~((~param_1 + uVar1) - (~param_1 & uVar1)) + 2)) + 1) * -2)) {
    FUN_1649f7a55(param_1);
    return;
  }
  return;
}



// FUNCTION 14dcc47c1 FUN_14dcc47c1 body=148 status=ok
// SIG undefined FUN_14dcc47c1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc4856) */
/* WARNING: Removing unreachable block (ram,0x00014dcc48df) */
/* WARNING: Removing unreachable block (ram,0x00014dcc48e4) */
/* WARNING: Removing unreachable block (ram,0x00014dcc48ea) */
/* WARNING: Removing unreachable block (ram,0x00014dcc48ef) */
/* WARNING: Removing unreachable block (ram,0x000161647ca9) */

undefined8 FUN_14dcc47c1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161647ca9();
  return uVar1;
}



// FUNCTION 14dcc4856 FUN_14dcc4856 body=150 status=ok
// SIG undefined FUN_14dcc4856(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc48ef) */

void FUN_14dcc4856(ulonglong param_1)

{
  ulonglong unaff_RSI;
  ulonglong *in_R10;
  ulonglong in_stack_00000028;
  
  *in_R10 = ~unaff_RSI;
  if (in_stack_00000028 + param_1 == (in_stack_00000028 & param_1) * 2) {
    FUN_16162777d(param_1);
    return;
  }
  FUN_16162777d(param_1);
  return;
}



// FUNCTION 14dcc48ef FUN_14dcc48ef body=57 status=ok
// SIG undefined FUN_14dcc48ef(void)

void FUN_14dcc48ef(void)

{
  return;
}



// FUNCTION 14dcc4a33 FUN_14dcc4a33 body=137 status=ok
// SIG undefined FUN_14dcc4a33(void)

void FUN_14dcc4a33(ulonglong param_1)

{
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 ^ param_1) - 8) = unaff_R13;
  *(undefined8 *)((local_res20 ^ param_1) - 0x10) = unaff_R12;
  FUN_14dae3988(local_res10 ^ param_1);
  return;
}



// FUNCTION 14dcc4d56 FUN_14dcc4d56 body=2 status=ok
// SIG undefined FUN_14dcc4d56(void)

void FUN_14dcc4d56(void)

{
  return;
}



// FUNCTION 14dcc4e8f FUN_14dcc4e8f body=285 status=ok
// SIG undefined FUN_14dcc4e8f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc4f11) */
/* WARNING: Removing unreachable block (ram,0x00014dcc4f1d) */
/* WARNING: Removing unreachable block (ram,0x00016555519b) */
/* WARNING: Removing unreachable block (ram,0x0001655551ad) */
/* WARNING: Removing unreachable block (ram,0x0001655551b2) */
/* WARNING: Removing unreachable block (ram,0x0001655551b4) */

void FUN_14dcc4e8f(void)

{
  FUN_16555519b();
  return;
}



// FUNCTION 14dcc4fad FUN_14dcc4fad body=308 status=ok
// SIG undefined FUN_14dcc4fad(void)

/* WARNING: Removing unreachable block (ram,0x0001665a99f2) */
/* WARNING: Removing unreachable block (ram,0x0001665a99f8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc50cb) */

void FUN_14dcc4fad(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = FUN_162da4533(param_1,FUN_162da4533,param_3);
  uVar2 = ~((~uVar1 | *(ulonglong *)(unaff_R12 + -0x38)) &
           (~*(ulonglong *)(unaff_R12 + -0x38) | uVar1));
  uVar3 = CONCAT71((int7)((ulonglong)local_res8 >> 8),0x7d) & 0xffffffffffffff99;
  FUN_164a56f53();
  uVar1 = *(ulonglong *)(uVar2 - 0x60) + unaff_R15 + (*(ulonglong *)(uVar2 - 0x60) & unaff_R15) * -2
  ;
  if ((uVar1 & 0x80) == 0) {
    return;
  }
  FUN_162983003(*(undefined8 *)(uVar2 - 0x78),
                param_2 + CONCAT71((int7)(uVar3 >> 8),~(~(byte)uVar3 & 0xfd)),
                *(ulonglong *)(uVar2 - 0x88) ^ unaff_R15,uVar1);
  return;
}



// FUNCTION 14dcc544b FUN_14dcc544b body=145 status=ok
// SIG undefined FUN_14dcc544b(void)

void FUN_14dcc544b(void)

{
  FUN_162c7f97a();
  return;
}



// FUNCTION 14dcc56a3 FUN_14dcc56a3 body=128 status=ok
// SIG undefined FUN_14dcc56a3(void)

void FUN_14dcc56a3(undefined1 param_1)

{
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong in_stack_00000010;
  
  FUN_162a3b543(param_1,uStackX_8 ^ in_stack_00000010 ^ unaff_R15);
  return;
}



// FUNCTION 14dcc5725 FUN_14dcc5725 body=401 status=ok
// SIG undefined FUN_14dcc5725(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dcc57bb) */
/* WARNING: Removing unreachable block (ram,0x00014dcc57c1) */
/* WARNING: Removing unreachable block (ram,0x00014dcc5856) */
/* WARNING: Removing unreachable block (ram,0x00014dcc585b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc5867) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6a97) */
/* WARNING: Removing unreachable block (ram,0x00014dcc5882) */
/* WARNING: Removing unreachable block (ram,0x00015b764811) */

void FUN_14dcc5725(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  undefined8 in_R11;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(param_2 + -0xa0);
  uVar1 = local_res18 ^ in_R10;
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x20) = uVar2 ^ in_R10;
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(undefined8 *)(uVar1 - 0x28) = in_RAX;
  *(undefined4 *)(uVar1 - 0x28) = 0x2f48182;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar4 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined **)(uVar1 + *(longlong *)(uVar1 - 0x28) + -0x2f4818a) = &DAT_162f5f89a;
  FUN_14d7aca25(param_1,uVar3,uVar4);
  return;
}



// FUNCTION 14dcc5a33 FUN_14dcc5a33 body=278 status=ok
// SIG undefined FUN_14dcc5a33(void)

void FUN_14dcc5a33(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong local_res18;
  
  uVar2 = local_res18 ^ unaff_R15;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_2;
  *(undefined8 *)(uVar2 - 0x10) = unaff_retaddr;
  *plVar1 = -*plVar1;
  *(longlong *)(uVar2 - 0x10) = *plVar1;
  *(undefined8 *)(uVar2 - 0x18) = uStackX_8;
  *(undefined8 *)(uVar2 - 0x20) = in_RAX;
  *(undefined8 *)(uVar2 - 0x28) = param_3;
  uVar4 = *(undefined8 *)(uVar2 - 0x28);
  *(undefined **)(uVar2 - 8) = &DAT_15afb4055;
  uVar5 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = param_1;
  *(undefined8 *)(uVar2 - 0x28) = 0x14dcc5abe;
  FUN_15afb4027(FUN_15afb4027,uVar5,uVar4);
  uVar4 = *(undefined8 *)(uVar2 - 0x20);
  *(ushort *)(uVar2 - 0x18) = *(ushort *)(uVar2 - 0x18) & 0xfeff;
  lVar3 = *(longlong *)(uVar2 - 0x10);
  *(undefined8 *)(lVar3 + -8) = unaff_R13;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x20) = 0xce6ddfe;
  *(ulonglong *)(lVar3 + -0x20) = *(ulonglong *)(lVar3 + -0x20) ^ 0xce6ddfe;
  *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar3 + -0x20);
  *(longlong *)(lVar3 + -8) = (longlong)(&DAT_14dcc5b63 + *(longlong *)(lVar3 + -8));
  *(undefined8 *)(lVar3 + -0x18) = unaff_R12;
  thunk_FUN_15b642ca5(uVar4);
  return;
}



// FUNCTION 14dcc5b7e FUN_14dcc5b7e body=96 status=ok
// SIG undefined FUN_14dcc5b7e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc5bcf) */

void FUN_14dcc5b7e(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int unaff_retaddr;
  
  param_2 = -(-1 - unaff_retaddr) - param_2;
  if (-1 < param_2) {
    return;
  }
  FUN_160dece0b(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcc5be0 FUN_14dcc5be0 body=114 status=ok
// SIG undefined FUN_14dcc5be0(void)

/* WARNING: Removing unreachable block (ram,0x0001646d025a) */
/* WARNING: Removing unreachable block (ram,0x0001646d0260) */
/* WARNING: Removing unreachable block (ram,0x000166214dcc) */
/* WARNING: Removing unreachable block (ram,0x000166214e4d) */
/* WARNING: Removing unreachable block (ram,0x000166214e53) */
/* WARNING: Removing unreachable block (ram,0x000162d4d2be) */
/* WARNING: Removing unreachable block (ram,0x00015b13c86d) */
/* WARNING: Removing unreachable block (ram,0x000162d4d344) */
/* WARNING: Removing unreachable block (ram,0x000162d4d34a) */
/* WARNING: Removing unreachable block (ram,0x000162d4d34f) */
/* WARNING: Removing unreachable block (ram,0x0001646d014d) */

undefined8 FUN_14dcc5be0(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0x88),param_1)) {
    uVar1 = FUN_165f6d370();
    return uVar1;
  }
  uVar1 = FUN_165f6d370();
  return uVar1;
}



// FUNCTION 14dcc5c61 FUN_14dcc5c61 body=62 status=ok
// SIG undefined FUN_14dcc5c61(void)

void FUN_14dcc5c61(void)

{
  return;
}



// FUNCTION 14dcc5f9b FUN_14dcc5f9b body=137 status=ok
// SIG undefined FUN_14dcc5f9b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc6025) */

void FUN_14dcc5f9b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined4 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar2 = (~(*(ulonglong *)(&stack0x2639fb9c + CONCAT44(0xffffffff,unaff_retaddr)) & in_RAX) +
          in_RAX) - (*(ulonglong *)(&stack0x2639fb9c + CONCAT44(0xffffffff,unaff_retaddr)) ^
                    0xffffffffffffffff);
  if (-1 < (longlong)((~uVar2 | ~(local_res20 & in_RAX)) + uVar2 + 1)) {
    FUN_162991560();
    return;
  }
  lVar1 = ((param_5 | in_RAX) - (~(param_5 & in_RAX) | param_5 | in_RAX)) + ~(param_5 & in_RAX);
  *(undefined8 *)(lVar1 + -8) = param_3;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBX;
  FUN_14db5ac30(in_stack_00000008,param_2,&DAT_1504846f5,local_res10);
  return;
}



// FUNCTION 14dcc6025 FUN_14dcc6025 body=160 status=ok
// SIG undefined FUN_14dcc6025(void)

void FUN_14dcc6025(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  thunk_FUN_156ecd3d3(thunk_FUN_156ecd3d3,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14dcc60c5 FUN_14dcc60c5 body=161 status=ok
// SIG undefined FUN_14dcc60c5(void)

void FUN_14dcc60c5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  
  FUN_164a4937a(param_1,param_2);
  *(longlong *)(unaff_R13 + 8) = -1 - unaff_RBX;
  FUN_156c6b1c6(param_5);
  return;
}



// FUNCTION 14dcc6168 FUN_14dcc6168 body=106 status=ok
// SIG undefined FUN_14dcc6168(void)

void FUN_14dcc6168(void)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  undefined8 in_stack_00000018;
  
  *(longlong *)(unaff_R13 + 8) = -1 - unaff_RBX;
  FUN_156c6b1c6(in_stack_00000018);
  return;
}



// FUNCTION 14dcc61d2 FUN_14dcc61d2 body=6 status=ok
// SIG undefined FUN_14dcc61d2(void)

void FUN_14dcc61d2(void)

{
  FUN_14d7c0530();
  return;
}



// FUNCTION 14dcc6271 FUN_14dcc6271 body=133 status=ok
// SIG undefined FUN_14dcc6271(void)

void FUN_14dcc6271(undefined8 param_1,undefined8 param_2,byte param_3,longlong param_4)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  FUN_166c749f2(CONCAT71((int7)(local_res8 >> 8),0x1d) ^ 0x1c,~local_res8,
                *(ulonglong *)(unaff_RDI + -0x70) ^ local_res8,
                unaff_RBP - (param_4 << (~param_3 & 0x3f)));
  return;
}



// FUNCTION 14dcc62f7 FUN_14dcc62f7 body=136 status=ok
// SIG undefined FUN_14dcc62f7(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc652c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc64ee) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e1) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c514) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c553) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c21) */
/* WARNING: Removing unreachable block (ram,0x000160ef6ace) */
/* WARNING: Removing unreachable block (ram,0x0001623cd124) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19f) */
/* WARNING: Removing unreachable block (ram,0x000157444c04) */
/* WARNING: Removing unreachable block (ram,0x000157444c8e) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b5d) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b63) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b68) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bf5) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bfb) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c1c) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c27) */
/* WARNING: Removing unreachable block (ram,0x0001573706e6) */
/* WARNING: Removing unreachable block (ram,0x0001573706fb) */
/* WARNING: Removing unreachable block (ram,0x000157370771) */
/* WARNING: Removing unreachable block (ram,0x0001614dc797) */
/* WARNING: Removing unreachable block (ram,0x000157370777) */
/* WARNING: Removing unreachable block (ram,0x00016494efd9) */
/* WARNING: Removing unreachable block (ram,0x00015737086d) */
/* WARNING: Removing unreachable block (ram,0x000157370873) */
/* WARNING: Removing unreachable block (ram,0x000157370878) */
/* WARNING: Removing unreachable block (ram,0x000157444c93) */
/* WARNING: Removing unreachable block (ram,0x000157444c9f) */
/* WARNING: Removing unreachable block (ram,0x000157444d41) */
/* WARNING: Removing unreachable block (ram,0x000157444d46) */
/* WARNING: Removing unreachable block (ram,0x000157444d4c) */
/* WARNING: Removing unreachable block (ram,0x000157444d51) */
/* WARNING: Removing unreachable block (ram,0x0001623cd1a5) */
/* WARNING: Removing unreachable block (ram,0x0001623cd23c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd242) */
/* WARNING: Removing unreachable block (ram,0x0001623cd247) */
/* WARNING: Removing unreachable block (ram,0x0001667c522f) */
/* WARNING: Removing unreachable block (ram,0x00016567140c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6497) */

undefined8
FUN_14dcc62f7(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong *unaff_R15;
  
  uVar4 = ((~param_4 | param_1) - (~param_1 | param_4 | ~param_4 | param_1)) + (~param_1 | param_4)
          ^ 0xffffffffffffffff;
  uVar3 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x70);
  FUN_15b2ced2c();
  uVar1 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | uVar3;
  *unaff_R15 = ~((0xffffffffffffffff - uVar3 | uVar1) & *unaff_R15);
  param_6 = param_6 ^ uVar3;
  *(undefined8 *)(param_6 - 8) = unaff_R13;
  *(longlong *)(param_6 - 0x10) = unaff_RDI;
  *(longlong *)(param_6 - 0x18) = unaff_RDI;
  *(undefined1 **)(param_6 - 0x20) = &LAB_1654dd023;
  *(undefined8 *)(param_6 - 0x10) = *(undefined8 *)(param_6 - 8);
  *(code **)(param_6 - 0x20) = FUN_14dcc6415;
  uVar2 = FUN_1654dcfa9();
  uVar1 = *(ulonglong *)(param_6 - 0x10);
  if ((longlong)uVar1 < 0) {
    *(undefined8 *)(param_6 - 0x10) = in_R10;
    *(ulonglong *)(param_6 - 0x18) = uVar4;
    *(ulonglong *)(param_6 - 0x20) = param_1;
    *(ulonglong *)(param_6 - 0x20) = uVar1 & 0x7fffffffffffffff;
    *(code **)(param_6 - 0x18) = FUN_1654dcfa9;
    *(code **)(param_6 - 0x20) = FUN_1654dcfa9;
    *(undefined **)(param_6 - 0x18) = &DAT_16194894b;
    return uVar2;
  }
  uVar2 = FUN_161948979();
  return uVar2;
}



// FUNCTION 14dcc6382 FUN_14dcc6382 body=147 status=ok
// SIG undefined FUN_14dcc6382(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc652c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc64ee) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e1) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c514) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c553) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c21) */
/* WARNING: Removing unreachable block (ram,0x000160ef6ace) */
/* WARNING: Removing unreachable block (ram,0x0001623cd124) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19f) */
/* WARNING: Removing unreachable block (ram,0x000157444c04) */
/* WARNING: Removing unreachable block (ram,0x000157444c8e) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b5d) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b63) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b68) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bf5) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bfb) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c1c) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c27) */
/* WARNING: Removing unreachable block (ram,0x0001573706e6) */
/* WARNING: Removing unreachable block (ram,0x0001573706fb) */
/* WARNING: Removing unreachable block (ram,0x000157370771) */
/* WARNING: Removing unreachable block (ram,0x0001614dc797) */
/* WARNING: Removing unreachable block (ram,0x000157370777) */
/* WARNING: Removing unreachable block (ram,0x00016494efd9) */
/* WARNING: Removing unreachable block (ram,0x00015737086d) */
/* WARNING: Removing unreachable block (ram,0x000157370873) */
/* WARNING: Removing unreachable block (ram,0x000157370878) */
/* WARNING: Removing unreachable block (ram,0x000157444c93) */
/* WARNING: Removing unreachable block (ram,0x000157444c9f) */
/* WARNING: Removing unreachable block (ram,0x000157444d41) */
/* WARNING: Removing unreachable block (ram,0x000157444d46) */
/* WARNING: Removing unreachable block (ram,0x000157444d4c) */
/* WARNING: Removing unreachable block (ram,0x000157444d51) */
/* WARNING: Removing unreachable block (ram,0x0001623cd1a5) */
/* WARNING: Removing unreachable block (ram,0x0001623cd23c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd242) */
/* WARNING: Removing unreachable block (ram,0x0001623cd247) */
/* WARNING: Removing unreachable block (ram,0x0001667c522f) */
/* WARNING: Removing unreachable block (ram,0x00016567140c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6497) */

undefined8
FUN_14dcc6382(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong *unaff_R15;
  
  uVar1 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | unaff_RBX;
  *unaff_R15 = ~((0xffffffffffffffff - unaff_RBX | uVar1) & *unaff_R15);
  param_5 = param_5 ^ unaff_RBX;
  *(undefined8 *)(param_5 - 8) = unaff_R13;
  *(undefined8 *)(param_5 - 0x10) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x18) = unaff_RDI;
  *(undefined1 **)(param_5 - 0x20) = &LAB_1654dd023;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(code **)(param_5 - 0x20) = FUN_14dcc6415;
  uVar2 = FUN_1654dcfa9();
  uVar1 = *(ulonglong *)(param_5 - 0x10);
  if ((longlong)uVar1 < 0) {
    *(undefined8 *)(param_5 - 0x10) = in_R10;
    *(undefined8 *)(param_5 - 0x18) = param_4;
    *(undefined8 *)(param_5 - 0x20) = param_1;
    *(ulonglong *)(param_5 - 0x20) = uVar1 & 0x7fffffffffffffff;
    *(code **)(param_5 - 0x18) = FUN_1654dcfa9;
    *(code **)(param_5 - 0x20) = FUN_1654dcfa9;
    *(undefined **)(param_5 - 0x18) = &DAT_16194894b;
    return uVar2;
  }
  uVar2 = FUN_161948979();
  return uVar2;
}



// FUNCTION 14dcc6415 FUN_14dcc6415 body=276 status=ok
// SIG undefined FUN_14dcc6415(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc652c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc64ee) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e1) */
/* WARNING: Removing unreachable block (ram,0x0001667c52e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c514) */
/* WARNING: Removing unreachable block (ram,0x00014dd9c553) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c21) */
/* WARNING: Removing unreachable block (ram,0x000160ef6ace) */
/* WARNING: Removing unreachable block (ram,0x0001623cd124) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19f) */
/* WARNING: Removing unreachable block (ram,0x000157444c04) */
/* WARNING: Removing unreachable block (ram,0x000157444c8e) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b5d) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b63) */
/* WARNING: Removing unreachable block (ram,0x000160ef6b68) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bf5) */
/* WARNING: Removing unreachable block (ram,0x000160ef6bfb) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c1c) */
/* WARNING: Removing unreachable block (ram,0x000160ef6c27) */
/* WARNING: Removing unreachable block (ram,0x0001573706e6) */
/* WARNING: Removing unreachable block (ram,0x0001573706fb) */
/* WARNING: Removing unreachable block (ram,0x000157370771) */
/* WARNING: Removing unreachable block (ram,0x0001614dc797) */
/* WARNING: Removing unreachable block (ram,0x000157370777) */
/* WARNING: Removing unreachable block (ram,0x00016494efd9) */
/* WARNING: Removing unreachable block (ram,0x00015737086d) */
/* WARNING: Removing unreachable block (ram,0x000157370873) */
/* WARNING: Removing unreachable block (ram,0x000157370878) */
/* WARNING: Removing unreachable block (ram,0x000157444c93) */
/* WARNING: Removing unreachable block (ram,0x000157444c9f) */
/* WARNING: Removing unreachable block (ram,0x000157444d41) */
/* WARNING: Removing unreachable block (ram,0x000157444d46) */
/* WARNING: Removing unreachable block (ram,0x000157444d4c) */
/* WARNING: Removing unreachable block (ram,0x000157444d51) */
/* WARNING: Removing unreachable block (ram,0x0001623cd1a5) */
/* WARNING: Removing unreachable block (ram,0x0001623cd23c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd242) */
/* WARNING: Removing unreachable block (ram,0x0001623cd247) */
/* WARNING: Removing unreachable block (ram,0x0001667c522f) */
/* WARNING: Removing unreachable block (ram,0x00016567140c) */
/* WARNING: Removing unreachable block (ram,0x0001623cd19a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6497) */

undefined8 FUN_14dcc6415(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lStackX_8;
  
  if (lStackX_8 < 0) {
    return in_RAX;
  }
  uVar1 = FUN_161948979();
  return uVar1;
}



// FUNCTION 14dcc652c FUN_14dcc652c body=159 status=ok
// SIG undefined FUN_14dcc652c(void)

void FUN_14dcc652c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R15;
  longlong alStackX_10 [2];
  ushort local_res20;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = param_4 - *(longlong *)((longlong)alStackX_10 + in_RAX);
  local_res20 = local_res20 & 0xfeff;
  puVar1 = (ulonglong *)(lStack0000000000000028 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 - unaff_R15;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 1;
  *(undefined8 *)(lStack0000000000000028 + -0x10) = param_3;
  *(undefined8 *)(lStack0000000000000028 + -0x18) = param_3;
  *(undefined8 *)(lStack0000000000000028 + -0x10) = *(undefined8 *)(lStack0000000000000028 + -8);
  uVar2 = *(undefined8 *)(lStack0000000000000028 + -0x18);
  *(undefined8 *)(lStack0000000000000028 + -0x18) = in_R10;
  *(undefined8 *)(lStack0000000000000028 + -0x20) = unaff_R12;
  *(undefined4 *)(lStack0000000000000028 + -0x28) = 0x1e22ecb;
  *(undefined4 *)(lStack0000000000000028 + -0x24) = 0;
  *(undefined1 **)
   (lStack0000000000000028 + *(longlong *)(lStack0000000000000028 + -0x28) + -0x1e22ed3) =
       &LAB_15b9ff023;
  FUN_15b9fefe9(param_1,param_2,uVar2,alStackX_10[0]);
  return;
}



// FUNCTION 14dcc65cd FUN_14dcc65cd body=134 status=ok
// SIG undefined FUN_14dcc65cd(void)

void FUN_14dcc65cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166820d38(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcc66de FUN_14dcc66de body=189 status=ok
// SIG undefined FUN_14dcc66de(void)

short FUN_14dcc66de(void)

{
  ushort unaff_DI;
  ushort in_R9W;
  
  return (~(in_R9W & unaff_DI) + unaff_DI) - ~in_R9W;
}



// FUNCTION 14dcc679c FUN_14dcc679c body=31 status=ok
// SIG undefined FUN_14dcc679c(void)

longlong FUN_14dcc679c(undefined8 param_1,longlong param_2)

{
  longlong in_R10;
  
  return param_2 - in_R10;
}



// FUNCTION 14dcc68be FUN_14dcc68be body=790 status=ok
// SIG undefined FUN_14dcc68be(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001615c285e) */
/* WARNING: Removing unreachable block (ram,0x0001615c2864) */
/* WARNING: Removing unreachable block (ram,0x0001615c2879) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6aa9) */
/* WARNING: Removing unreachable block (ram,0x00016629aec3) */
/* WARNING: Removing unreachable block (ram,0x00016629b000) */
/* WARNING: Removing unreachable block (ram,0x0001570b9410) */
/* WARNING: Removing unreachable block (ram,0x0001570b945c) */
/* WARNING: Removing unreachable block (ram,0x0001570b9456) */
/* WARNING: Removing unreachable block (ram,0x0001570b9461) */
/* WARNING: Removing unreachable block (ram,0x0001570b9475) */
/* WARNING: Removing unreachable block (ram,0x0001570b9479) */
/* WARNING: Removing unreachable block (ram,0x0001649eb12d) */
/* WARNING: Removing unreachable block (ram,0x0001649eb16e) */
/* WARNING: Removing unreachable block (ram,0x0001649eb180) */
/* WARNING: Removing unreachable block (ram,0x000162e582e8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc69d7) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6a9e) */
/* WARNING: Removing unreachable block (ram,0x0001649eb16b) */
/* WARNING: Removing unreachable block (ram,0x0001615c2829) */

void FUN_14dcc68be(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  FUN_164b1ae17(param_1,FUN_164b1ae17,in_stack_00000008);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x30);
  if (~uVar1 <= ((unaff_RBP - (uVar1 | unaff_RBP)) + uVar1 ^ 0xffffffffffffffff) + unaff_RBP) {
    FUN_16629aec3();
    return;
  }
  FUN_1615c27cf();
  return;
}



// FUNCTION 14dcc6d24 FUN_14dcc6d24 body=133 status=ok
// SIG undefined FUN_14dcc6d24(void)

void FUN_14dcc6d24(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  (*(code *)0x15742846a)
            (param_1,param_2,
             (~*(ulonglong *)(unaff_RDI + -0x50) + param_1) -
             (~*(ulonglong *)(unaff_RDI + -0x50) & param_1));
  return;
}



// FUNCTION 14dcc6daa FUN_14dcc6daa body=326 status=ok
// SIG undefined FUN_14dcc6daa(void)

void FUN_14dcc6daa(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  
  uVar1 = param_2 ^ 0xffffffffffffffff | unaff_RBP;
  FUN_15642981f(param_1,~((~uVar1 | unaff_RBP ^ 0xffffffffffffffff | param_2) + uVar1 + 1));
  (*(code *)&LAB_15b31e7f6)();
  return;
}



// FUNCTION 14dcc70b4 FUN_14dcc70b4 body=177 status=ok
// SIG undefined FUN_14dcc70b4(void)

void FUN_14dcc70b4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_14d8b19af)(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1));
  return;
}



// FUNCTION 14dcc7167 FUN_14dcc7167 body=166 status=ok
// SIG undefined FUN_14dcc7167(void)

code * FUN_14dcc7167(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + in_RAX;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_161e31612;
  puVar1 = (ulonglong *)(local_res18 + -0x18);
  *puVar1 = 0x600658be;
  *puVar1 = *puVar1 ^ 0x600658be;
  *puVar1 = (ulonglong)(&LAB_161e31612 + *puVar1);
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar2 = *puVar1;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + uVar2;
  uVar3 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = uVar3;
  *(undefined8 *)(local_res18 + -0x18) = uVar3;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined1 **)(local_res18 + -0x28) = &LAB_161e315ea;
  return thunk_FUN_15b642ca5;
}



// FUNCTION 14dcc72a9 FUN_14dcc72a9 body=131 status=ok
// SIG undefined FUN_14dcc72a9(void)

undefined8 FUN_14dcc72a9(void)

{
  short sVar1;
  longlong lVar2;
  ushort in_AX;
  undefined8 unaff_RBX;
  short *in_R11;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  sVar1 = *in_R11;
  *in_R11 = 0;
  *in_R11 = *in_R11 + (-0x101 - (in_AX | 0xfeff)) + sVar1;
  *(longlong *)(in_stack_00000028 + -8) = in_stack_00000028;
  lVar2 = *(longlong *)(in_stack_00000028 + -8);
  *(undefined8 *)(lVar2 + -8) = 0;
  *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) ^ unaff_R14;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x20) = unaff_retaddr;
  *(undefined **)(lVar2 + -0x28) = &DAT_162a731a2;
  return local_res8;
}



// FUNCTION 14dcc73d3 FUN_14dcc73d3 body=260 status=ok
// SIG undefined FUN_14dcc73d3(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc73dd) */

void FUN_14dcc73d3(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = ~*(ulonglong *)(unaff_RDI + -0x60) & param_1;
  uVar1 = FUN_156ddf62c(param_1,FUN_156ddf62c,uVar2);
  (*(code *)0x166b447ff)
            (~(*(ulonglong *)(unaff_R12 + -0x58) & uVar1) &
             (*(ulonglong *)(unaff_R12 + -0x58) | uVar1),*(undefined8 *)(unaff_R12 + -0x78),
             uVar2 ^ uVar1);
  return;
}



// FUNCTION 14dcc74d9 FUN_14dcc74d9 body=148 status=ok
// SIG undefined FUN_14dcc74d9(void)

undefined1
FUN_14dcc74d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  longlong unaff_RSI;
  ulonglong in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  longlong alStackX_10 [3];
  
  *(undefined8 *)((longlong)alStackX_10 + unaff_RSI) = 0;
  *(longlong *)((longlong)alStackX_10 + unaff_RSI) =
       *(longlong *)((longlong)alStackX_10 + unaff_RSI) - (~in_R11 + 1);
  param_5 = param_5 ^ unaff_R15;
  LOCK();
  uVar2 = DAT_14d7c3676;
  UNLOCK();
  DAT_14d7c3676 = in_AL;
  *(undefined8 *)(param_5 - 0x10) = param_3;
  *(undefined8 *)(param_5 - 8) = 0x385ea18;
  uVar1 = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = param_2;
  *(undefined8 *)(param_5 - 0x18) = param_2;
  *(undefined8 *)(param_5 - 0x20) = unaff_R12;
  *(undefined8 *)(param_5 - 0x28) = uVar1;
  *(undefined8 *)(param_5 - 0x10) = 0x156ef2e25;
  return uVar2;
}



// FUNCTION 14dcc7580 FUN_14dcc7580 body=3 status=ok
// SIG undefined FUN_14dcc7580(void)

/* WARNING: Instruction at (ram,0x00014dcc75d6) overlaps instruction at (ram,0x00014dcc75d5)
    */
/* WARNING: Removing unreachable block (ram,0x0001668e7001) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77d3) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77d9) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77e5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77fa) */
/* WARNING: Removing unreachable block (ram,0x00014dcc789f) */
/* WARNING: Removing unreachable block (ram,0x00014dcc78a4) */
/* WARNING: Removing unreachable block (ram,0x0001668e6fa7) */
/* WARNING: Removing unreachable block (ram,0x0001668e6fef) */
/* WARNING: Removing unreachable block (ram,0x0001668e6ff2) */
/* WARNING: Removing unreachable block (ram,0x0001668e7005) */
/* WARNING: Removing unreachable block (ram,0x0001668e7179) */
/* WARNING: Removing unreachable block (ram,0x0001668e717f) */
/* WARNING: Removing unreachable block (ram,0x0001565545b5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc7919) */
/* WARNING: Removing unreachable block (ram,0x00014dcc791f) */
/* WARNING: Removing unreachable block (ram,0x000166057322) */
/* WARNING: Removing unreachable block (ram,0x000166057389) */
/* WARNING: Removing unreachable block (ram,0x00016605738d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc766a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc7675) */
/* WARNING: Removing unreachable block (ram,0x000166022383) */
/* WARNING: Removing unreachable block (ram,0x000166022389) */
/* WARNING: Removing unreachable block (ram,0x000166057287) */
/* WARNING: Removing unreachable block (ram,0x000166057311) */
/* WARNING: Removing unreachable block (ram,0x000166057317) */
/* WARNING: Removing unreachable block (ram,0x00016605730c) */
/* WARNING: Removing unreachable block (ram,0x00016602238e) */
/* WARNING: Removing unreachable block (ram,0x00014dcc75cf) */

void FUN_14dcc7580(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x15b6cf304)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dcc7583 FUN_14dcc7583 body=91 status=ok
// SIG undefined FUN_14dcc7583(void)

/* WARNING: Instruction at (ram,0x00014dcc75d6) overlaps instruction at (ram,0x00014dcc75d5)
    */
/* WARNING: Removing unreachable block (ram,0x0001668e7001) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77d3) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77d9) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77e5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc77fa) */
/* WARNING: Removing unreachable block (ram,0x00014dcc789f) */
/* WARNING: Removing unreachable block (ram,0x00014dcc78a4) */
/* WARNING: Removing unreachable block (ram,0x0001668e6fa7) */
/* WARNING: Removing unreachable block (ram,0x0001668e6fef) */
/* WARNING: Removing unreachable block (ram,0x0001668e6ff2) */
/* WARNING: Removing unreachable block (ram,0x0001668e7005) */
/* WARNING: Removing unreachable block (ram,0x0001668e7179) */
/* WARNING: Removing unreachable block (ram,0x0001668e717f) */
/* WARNING: Removing unreachable block (ram,0x0001565545b5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc7919) */
/* WARNING: Removing unreachable block (ram,0x00014dcc791f) */
/* WARNING: Removing unreachable block (ram,0x000166057322) */
/* WARNING: Removing unreachable block (ram,0x000166057389) */
/* WARNING: Removing unreachable block (ram,0x00016605738d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc766a) */
/* WARNING: Removing unreachable block (ram,0x00014dcc7675) */
/* WARNING: Removing unreachable block (ram,0x000166022383) */
/* WARNING: Removing unreachable block (ram,0x000166022389) */
/* WARNING: Removing unreachable block (ram,0x000166057287) */
/* WARNING: Removing unreachable block (ram,0x000166057311) */
/* WARNING: Removing unreachable block (ram,0x000166057317) */
/* WARNING: Removing unreachable block (ram,0x00016605730c) */
/* WARNING: Removing unreachable block (ram,0x00016602238e) */
/* WARNING: Removing unreachable block (ram,0x00014dcc75cf) */

void FUN_14dcc7583(void)

{
  (*(code *)0x15b6cf304)();
  return;
}



// FUNCTION 14dcc79a7 FUN_14dcc79a7 body=135 status=ok
// SIG undefined FUN_14dcc79a7(void)

void FUN_14dcc79a7(undefined8 param_1)

{
  FUN_166dd8968(param_1,FUN_166dd8968);
  return;
}



// FUNCTION 14dcc7a2e FUN_14dcc7a2e body=134 status=ok
// SIG undefined FUN_14dcc7a2e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc7ab5) */
/* WARNING: Removing unreachable block (ram,0x0001568cfc07) */

ulonglong FUN_14dcc7a2e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dcc7ab5 FUN_14dcc7ab5 body=351 status=ok
// SIG undefined FUN_14dcc7ab5(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dcc7ab5(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  FUN_165aa3f3a();
  uVar1 = *(ulonglong *)(uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2 + -0x50);
  return uVar1 + param_1 + (uVar1 & param_1) * -2;
}



// FUNCTION 14dcc7d33 FUN_14dcc7d33 body=165 status=ok
// SIG undefined FUN_14dcc7d33(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcc7d33(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong in_R10;
  undefined8 local_res8;
  
  FUN_1618e43db(param_1,~((0xffffffffffffffffU - local_res8 | param_2) & (~param_2 | unaff_RBP)),
                param_3);
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = ~*(ulonglong *)(in_R10 + 8);
  lVar2 = *(longlong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) & param_1;
  *(ulonglong *)(in_R10 + 8) = (lVar2 + param_1) - *(longlong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(in_R10 + 8));
  FUN_15af7cbba();
  return;
}



// FUNCTION 14dcc7dd9 FUN_14dcc7dd9 body=177 status=ok
// SIG undefined FUN_14dcc7dd9(void)

void FUN_14dcc7dd9(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong in_R10;
  
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = ~*(ulonglong *)(in_R10 + 8);
  lVar2 = *(longlong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) & param_1;
  *(ulonglong *)(in_R10 + 8) = (lVar2 + param_1) - *(longlong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(in_R10 + 8));
  FUN_15af7cbba();
  return;
}



// FUNCTION 14dcc7fca FUN_14dcc7fca body=310 status=ok
// SIG undefined FUN_14dcc7fca(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc8072) */

void FUN_14dcc7fca(undefined8 param_1)

{
  ulonglong uVar1;
  ushort *unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res20;
  
  *unaff_RBX = *unaff_RBX ^ 0xffff;
  *unaff_RBX = *unaff_RBX | 0x100;
  *unaff_RBX = ~*unaff_RBX;
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(ulonglong *)(local_res20 + -0x10) =
       *(ulonglong *)(local_res20 + -0x10) ^ *(ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0x392da73a;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x392da73a;
  *(undefined8 *)(local_res20 + -0x18) = local_res8;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  uVar1 = *(ulonglong *)(local_res20 + -8);
  *(ulonglong *)(local_res20 + -8) = (longlong)&DAT_16275b7c7 + uVar1;
  if (0xfffffffe9d8a4838 < uVar1) {
    FUN_16275b795(&DAT_16275b7c7,unaff_retaddr);
    return;
  }
  FUN_16275b795(&DAT_16275b7c7,unaff_retaddr);
  return;
}



// FUNCTION 14dcc8229 FUN_14dcc8229 body=158 status=ok
// SIG undefined FUN_14dcc8229(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcc8229(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  undefined7 uVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  cVar2 = (char)param_1;
  FUN_1614792e2();
  pcVar1 = (char *)(CONCAT71(uVar3,cVar2) * 4 + 0x35f6);
  *pcVar1 = *pcVar1 + cVar2;
  if (*pcVar1 != '\0') {
    iRam0000000000003576 = iRam0000000000003576 + -1;
    *(undefined4 *)(unaff_RBX + unaff_RSI + -0x45adfffc) = unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dcc8342 FUN_14dcc8342 body=51 status=ok
// SIG undefined FUN_14dcc8342(void)

void FUN_14dcc8342(void)

{
  return;
}



// FUNCTION 14dcc83ce FUN_14dcc83ce body=181 status=ok
// SIG undefined FUN_14dcc83ce(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc847e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcc83ce(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RAX;
  longlong lVar3;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  byte local_res10;
  byte in_stack_00000018;
  ushort uStackX_20;
  uint6 uStackX_22;
  
  *(undefined8 *)(unaff_R13 + 8) = in_RAX;
  lVar3 = ((param_5 | param_1) - (~(param_5 & param_1) | param_5 | param_1)) + ~(param_5 & param_1);
  uVar4 = (-0x101 - (uStackX_20 | 0xfeff)) + uStackX_20;
  LOCK();
  bVar5 = local_res10 < DAT_14d7abbc0;
  bVar6 = SBORROW1(local_res10,DAT_14d7abbc0);
  cVar1 = local_res10 - DAT_14d7abbc0;
  bVar2 = in_stack_00000018;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7abbc0;
  }
  DAT_14d7abbc0 = bVar2;
  UNLOCK();
  *(undefined8 *)(lVar3 + -8) = param_4;
  *(undefined8 *)(lVar3 + -0x10) = param_4;
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined4 *)(lVar3 + -0x20) = 0x5e3e30eb;
  *(undefined4 *)(lVar3 + -0x1c) = 0;
  uVar7 = *(ulonglong *)(lVar3 + -0x18);
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(lVar3 + -0x20) = *(ulonglong *)(lVar3 + -0x20) ^ 0x58e24b4e;
  *(longlong *)(lVar3 + -0x20) = *(longlong *)(lVar3 + -0x20) + -0x19c3ad1;
  uVar7 = *(ulonglong *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x18) = unaff_R14;
  *(ulonglong *)(lVar3 + -0x20) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  FUN_165f78e70();
  return;
}



// FUNCTION 14dcc8484 FUN_14dcc8484 body=885 status=ok
// SIG undefined FUN_14dcc8484(void)

/* WARNING: Removing unreachable block (ram,0x0001646d57af) */
/* WARNING: Removing unreachable block (ram,0x00014dcc85a8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc85ff) */
/* WARNING: Removing unreachable block (ram,0x00014dcc863d) */
/* WARNING: Removing unreachable block (ram,0x00014dcc8519) */
/* WARNING: Removing unreachable block (ram,0x0001646d5711) */

void FUN_14dcc8484(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  ushort local_res20;
  uint6 uStackX_22;
  longlong in_stack_00000028;
  
  lVar3 = unaff_RBP - unaff_RSI;
  uVar1 = *(ulonglong *)((longlong)&local_res18 + lVar3);
  *(ulonglong *)((longlong)&local_res18 + lVar3) = ~*(ulonglong *)((longlong)&local_res18 + lVar3);
  *(ulonglong *)((longlong)&local_res18 + lVar3) =
       *(ulonglong *)((longlong)&local_res18 + lVar3) | in_RAX;
  *(ulonglong *)((longlong)&local_res18 + lVar3) =
       (~in_RAX | uVar1) & *(ulonglong *)((longlong)&local_res18 + lVar3) ^ 0xffffffffffffffff;
  local_res20 = ~(~local_res20 | 0x100);
  LOCK();
  uVar2 = CONCAT71((int7)(local_res18 >> 8),DAT_14d7a9a35);
  UNLOCK();
  DAT_14d7a9a35 = (char)local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uVar2;
  *(undefined8 *)(in_stack_00000028 + -8) = in_stack_00000008;
  uVar2 = *(undefined8 *)(in_stack_00000028 + -0x10);
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar2;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0x8eb2597;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_retaddr;
  *(undefined4 *)(in_stack_00000028 + -0x28) = 0;
  *(undefined4 *)(in_stack_00000028 + -0x14) = *(undefined4 *)(in_stack_00000028 + -0x28);
  lVar3 = *(longlong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(longlong *)(in_stack_00000028 + -0x20) = lVar3;
  *(longlong *)(in_stack_00000028 + -0x20) = *(longlong *)(in_stack_00000028 + -0x20) + -0x631667b;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R11;
  *(longlong *)(in_stack_00000028 + -8) = lVar3 + -0x631667b;
  local_res18 = param_1;
  FUN_14d85d504(param_1);
  return;
}



// FUNCTION 14dcc8655 FUN_14dcc8655 body=163 status=ok
// SIG undefined FUN_14dcc8655(void)

void FUN_14dcc8655(void)

{
  FUN_166b9651c();
  FUN_15b9905c0();
  return;
}



// FUNCTION 14dcc86f9 FUN_14dcc86f9 body=154 status=ok
// SIG undefined FUN_14dcc86f9(void)

void FUN_14dcc86f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b9905c0(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcc8822 FUN_14dcc8822 body=122 status=ok
// SIG undefined FUN_14dcc8822(void)

void FUN_14dcc8822(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ushort unaff_retaddr;
  uint6 unaff_retaddr_00;
  longlong lStackX_8;
  
  uVar4 = *(ulonglong *)(param_1 + -0x80);
  pcVar3 = FUN_15b2cc45f;
  uVar2 = FUN_15b2cc45f(FUN_15b2cc45f,*(ulonglong *)(param_1 + -0x78) ^ unaff_RBX);
  uVar1 = ~(~unaff_retaddr & 0xfeff);
  *(undefined8 *)(lStackX_8 + -8) = uVar2;
  *(undefined8 *)(lStackX_8 + -0x10) = uVar2;
  *(ulonglong *)(lStackX_8 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((unaff_retaddr_00 & 0x20) != 0) * 0x200000 |
       (ulonglong)((unaff_retaddr_00 & 4) != 0) * 0x40000;
  *(ulonglong *)(lStackX_8 + -0x20) =
       ~((0xffffffffffffffff - unaff_RBX | uVar4) & (~uVar4 | unaff_RBX));
  *(ulonglong *)(lStackX_8 + -0x28) = ~unaff_RBX;
  uVar4 = *(ulonglong *)(lStackX_8 + -0x18);
  *(code **)(lStackX_8 + -0x18) = pcVar3;
  *(ulonglong *)(lStackX_8 + -0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_8 + -8) = 0x2418dba;
  FUN_162a6d8b6();
  return;
}



// FUNCTION 14dcc889f FUN_14dcc889f body=136 status=ok
// SIG undefined FUN_14dcc889f(void)

void FUN_14dcc889f(undefined8 param_1)

{
  ushort uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  ulonglong uVar2;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  uVar1 = ~(~local_res10 & 0xfeff);
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R12;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x2418dba;
  FUN_162a6d8b6();
  return;
}



// FUNCTION 14dcc89d4 FUN_14dcc89d4 body=25 status=ok
// SIG undefined FUN_14dcc89d4(void)

void FUN_14dcc89d4(void)

{
  return;
}



// FUNCTION 14dcc8a7a FUN_14dcc8a7a body=118 status=ok
// SIG undefined FUN_14dcc8a7a(void)

void FUN_14dcc8a7a(undefined8 param_1)

{
  undefined8 uStackX_8;
  
  FUN_161465cf1(param_1,uStackX_8);
  FUN_1629c9909();
  return;
}



// FUNCTION 14dcc8af2 FUN_14dcc8af2 body=9 status=ok
// SIG undefined FUN_14dcc8af2(void)

void FUN_14dcc8af2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  FUN_1629c9909(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14dcc8c41 FUN_14dcc8c41 body=119 status=ok
// SIG undefined FUN_14dcc8c41(void)

void FUN_14dcc8c41(void)

{
  longlong unaff_RDI;
  longlong lVar1;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  lVar1 = unaff_RDI + local_res20 * -2;
  *(undefined8 *)(lVar1 + -8) = uStackX_8;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = unaff_R13;
  *(undefined1 **)(lVar1 + -8) = &LAB_14dcc8cd7;
  thunk_FUN_15b642ca5(local_res10);
  return;
}



// FUNCTION 14dcc8cfe FUN_14dcc8cfe body=60 status=ok
// SIG undefined FUN_14dcc8cfe(void)

void FUN_14dcc8cfe(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RDI;
  longlong in_R10;
  longlong unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = in_R10 - *(longlong *)(&stack0xfffffffff51fb0c3 + unaff_R15);
  *(undefined8 *)(lStack0000000000000028 + -8) = unaff_RDI;
  *(undefined8 *)(lStack0000000000000028 + -0x10) = uStackX_18;
  *(undefined8 *)(lStack0000000000000028 + -0x18) = uStackX_18;
  *(undefined8 *)(lStack0000000000000028 + -0x10) = *(undefined8 *)(lStack0000000000000028 + -8);
  *(undefined8 *)(lStack0000000000000028 + -0x18) = uStackX_10;
  *(undefined8 *)(lStack0000000000000028 + -8) = 0x16583c3ad;
  (*(code *)&LAB_16583c384)(param_1,param_2);
  return;
}



// FUNCTION 14dcc8d73 FUN_14dcc8d73 body=545 status=ok
// SIG undefined FUN_14dcc8d73(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc8ebf) */
/* WARNING: Removing unreachable block (ram,0x00014dcc8f02) */
/* WARNING: Removing unreachable block (ram,0x00014dcc8eee) */

void FUN_14dcc8d73(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ushort *puVar2;
  undefined8 local_res10;
  ushort local_res18 [4];
  ulonglong in_stack_00000020;
  
  puVar2 = local_res18;
  FUN_157037917(local_res10,puVar2,~(local_res18[0] & 0x100) + local_res18[0] + 0x101,param_4,
                in_stack_00000020 ^ param_1);
  bVar1 = ~((byte)local_res10 & (byte)puVar2);
  FUN_1663029fb(bVar1,bVar1);
  return;
}



// FUNCTION 14dcc910b FUN_14dcc910b body=143 status=ok
// SIG undefined FUN_14dcc910b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc9241) */
/* WARNING: Removing unreachable block (ram,0x00014dcc919c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc9235) */
/* WARNING: Removing unreachable block (ram,0x000160cf5e9e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dcc910b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
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
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong lStackX_10;
  
  uVar1 = (-0x101 - (local_res8 | 0xfeff)) + local_res8;
  bVar11 = (uVar1 & 0x4000) != 0;
  bVar10 = (uVar1 & 0x800) != 0;
  bVar9 = (uVar1 & 0x400) != 0;
  bVar8 = (uVar1 & 0x200) != 0;
  bVar7 = (uVar1 & 0x100) != 0;
  bVar6 = (uVar1 & 0x80) != 0;
  bVar5 = (uVar1 & 0x40) != 0;
  bVar4 = (uVar1 & 0x10) != 0;
  bVar3 = (uVar1 & 4) != 0;
  bVar2 = (uVar1 & 1) != 0;
  bVar13 = (uStackX_a & 0x20) != 0;
  bVar12 = (uStackX_a & 4) != 0;
  *(undefined8 *)(lStackX_10 + -8) = unaff_R13;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R13;
  *(ulonglong *)(lStackX_10 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(ulonglong *)(lStackX_10 + -0x20) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  uVar14 = *(ulonglong *)(lStackX_10 + -0x18);
  *(ulonglong *)(lStackX_10 + -0x18) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_RBP;
  *(undefined8 *)(lStackX_10 + -0x28) = in_R11;
  uVar14 = *(ulonglong *)(lStackX_10 + -0x18);
  *(undefined8 *)(lStackX_10 + -0x18) = param_2;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_R14;
  *(ulonglong *)(lStackX_10 + -0x28) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_10 + -8) = 0x18a7634;
  FUN_16117cb61(param_1,*(undefined8 *)(lStackX_10 + -0x18),param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dcc919c FUN_14dcc919c body=164 status=ok
// SIG undefined FUN_14dcc919c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc9241) */

void FUN_14dcc919c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  (*(code *)0x14e06c50a)
            (0x14e06c50a,
             (*(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff) &
             (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3);
  return;
}



// FUNCTION 14dcc9241 FUN_14dcc9241 body=158 status=ok
// SIG undefined FUN_14dcc9241(void)

void FUN_14dcc9241(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15af7d6a2(param_1,FUN_15af7d6a2,param_3,param_4);
  return;
}



// FUNCTION 14dcc9412 FUN_14dcc9412 body=193 status=ok
// SIG undefined FUN_14dcc9412(void)

undefined1 FUN_14dcc9412(void)

{
  return 1;
}



// FUNCTION 14dcc94d6 FUN_14dcc94d6 body=7 status=ok
// SIG undefined FUN_14dcc94d6(void)

void FUN_14dcc94d6(void)

{
  return;
}



// FUNCTION 14dcc9559 FUN_14dcc9559 body=13 status=ok
// SIG undefined FUN_14dcc9559(void)

void FUN_14dcc9559(void)

{
  return;
}



// FUNCTION 14dcc967e FUN_14dcc967e body=124 status=ok
// SIG undefined FUN_14dcc967e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc96bc) */

void FUN_14dcc967e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RSI;
  undefined8 unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  FUN_1664fad36(unaff_retaddr,param_2,0xb363672);
  return;
}



// FUNCTION 14dcc9782 FUN_14dcc9782 body=153 status=ok
// SIG undefined FUN_14dcc9782(void)

void FUN_14dcc9782(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  
  FUN_1649f0d9e(param_1,param_2 ^ unaff_RBP,param_3,param_4);
  return;
}



// FUNCTION 14dcc981b FUN_14dcc981b body=113 status=ok
// SIG undefined FUN_14dcc981b(void)

void FUN_14dcc981b(undefined8 param_1)

{
  undefined8 *unaff_R14;
  bool in_ZF;
  undefined8 local_res8;
  
  if (!in_ZF) {
    FUN_166db09b6(param_1);
    return;
  }
  *unaff_R14 = local_res8;
  thunk_FUN_1627529c3();
  return;
}



// FUNCTION 14dcc988e FUN_14dcc988e body=156 status=ok
// SIG undefined FUN_14dcc988e(void)

void FUN_14dcc988e(void)

{
  return;
}



// FUNCTION 14dcc992a FUN_14dcc992a body=125 status=ok
// SIG undefined FUN_14dcc992a(void)

void FUN_14dcc992a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16100ca35(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcc9b8d FUN_14dcc9b8d body=143 status=ok
// SIG undefined FUN_14dcc9b8d(void)

void FUN_14dcc9b8d(void)

{
  return;
}



// FUNCTION 14dcc9d5d FUN_14dcc9d5d body=129 status=ok
// SIG undefined FUN_14dcc9d5d(void)

void FUN_14dcc9d5d(void)

{
  FUN_14dbf1612();
  return;
}



// FUNCTION 14dcca07f FUN_14dcca07f body=452 status=ok
// SIG undefined FUN_14dcca07f(void)

/* WARNING: Removing unreachable block (ram,0x0001661ab4ba) */
/* WARNING: Removing unreachable block (ram,0x0001661ab4c5) */
/* WARNING: Removing unreachable block (ram,0x0001661ab4c0) */
/* WARNING: Removing unreachable block (ram,0x00014dcca24e) */
/* WARNING: Removing unreachable block (ram,0x00014dcca2e3) */
/* WARNING: Removing unreachable block (ram,0x00014dcca2e9) */
/* WARNING: Removing unreachable block (ram,0x000162d628db) */
/* WARNING: Removing unreachable block (ram,0x000162d62956) */
/* WARNING: Removing unreachable block (ram,0x000162d6295c) */
/* WARNING: Removing unreachable block (ram,0x0001661ab37a) */
/* WARNING: Removing unreachable block (ram,0x0001661ab406) */
/* WARNING: Removing unreachable block (ram,0x000165756d62) */
/* WARNING: Removing unreachable block (ram,0x0001661ab40c) */
/* WARNING: Removing unreachable block (ram,0x0001661ab401) */
/* WARNING: Removing unreachable block (ram,0x00014dcca1bf) */
/* WARNING: Removing unreachable block (ram,0x000160cf43ae) */
/* WARNING: Removing unreachable block (ram,0x0001620872cb) */
/* WARNING: Removing unreachable block (ram,0x00014dcca11d) */
/* WARNING: Removing unreachable block (ram,0x00014dcca1b9) */
/* WARNING: Removing unreachable block (ram,0x000162a26d22) */
/* WARNING: Removing unreachable block (ram,0x00014dcca243) */
/* WARNING: Removing unreachable block (ram,0x00014dcca249) */
/* WARNING: Removing unreachable block (ram,0x000162d62961) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcca07f(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) == 0xffffffffffffffff &&
      (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15) == 0xffffffffffffffff) {
    FUN_16613324e();
    uVar1 = FUN_14d895019();
    return uVar1;
  }
  uVar1 = FUN_162087239();
  return uVar1;
}



// FUNCTION 14dcca24e FUN_14dcca24e body=353 status=ok
// SIG undefined FUN_14dcca24e(void)

/* WARNING: Removing unreachable block (ram,0x0001661ab4ba) */
/* WARNING: Removing unreachable block (ram,0x0001661ab4c5) */
/* WARNING: Removing unreachable block (ram,0x0001661ab4c0) */
/* WARNING: Removing unreachable block (ram,0x0001661ab40c) */
/* WARNING: Removing unreachable block (ram,0x000162d62961) */
/* WARNING: Removing unreachable block (ram,0x00014dcca2e9) */

undefined8 FUN_14dcca24e(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(0x341d - ~(unaff_RDI - 0x347eU));
  uVar4 = ~uVar1;
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) &
      (~*(ulonglong *)(unaff_RDI + -0x28) | param_1)) != 0) {
    uVar3 = FUN_1661ab37a();
    return uVar3;
  }
  uVar2 = *(ulonglong *)(0x2f61 - ~(unaff_RDI - 0x2faaU));
  if ((param_1 - 1) - ~uVar2 < (uVar2 & param_1) * 2) {
    uVar3 = (*(code *)&LAB_161cadee7)
                      (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                               (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,
                       *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                       ~((~param_1 | uVar1) & (uVar4 + param_1) - (uVar4 & param_1)));
    return uVar3;
  }
  uVar3 = FUN_165756d62();
  return uVar3;
}



// FUNCTION 14dcca566 FUN_14dcca566 body=77 status=ok
// SIG undefined FUN_14dcca566(void)

void FUN_14dcca566(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d7a9aa0(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcca75d FUN_14dcca75d body=280 status=ok
// SIG undefined FUN_14dcca75d(void)

/* WARNING: Instruction at (ram,0x00014dcca782) overlaps instruction at (ram,0x00014dcca781)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dcca75d(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char unaff_BL;
  
  uVar1 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11((char)((ulonglong)param_1 >> 8) + unaff_BL,(char)param_1));
  *(char *)(uVar1 + 0xb) = *(char *)(uVar1 + 0xb) + -1;
  *(int *)(uVar1 + 0x23) = *(int *)(uVar1 + 0x23) + -1;
  FUN_1627c6692();
  FUN_16610716c(uVar1,0xffffffffffffff80,_DAT_ffffffffffffff90 ^ uVar1,
                (param_4 - uVar1) + (0xffffffffffffffff - uVar1 | param_4) * -2 + -2);
  return;
}



// FUNCTION 14dcca987 FUN_14dcca987 body=218 status=ok
// SIG undefined FUN_14dcca987(void)

/* WARNING: Removing unreachable block (ram,0x00014dccaa39) */
/* WARNING: Removing unreachable block (ram,0x00014dccaa45) */
/* WARNING: Removing unreachable block (ram,0x00014dccaa50) */
/* WARNING: Removing unreachable block (ram,0x00014dccaa55) */
/* WARNING: Removing unreachable block (ram,0x000160c40c76) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcca987(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  byte in_AF;
  bool bVar8;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar9;
  int local_res8;
  
  uVar2 = local_res8 + 0x41409cf9;
  *(undefined1 **)(&stack0xfffffffff36afa7f + uVar2) = &stack0xfffffffff36afa87 + uVar2;
  puVar3 = *(ulonglong **)(&stack0xfffffffff36afa7f + uVar2);
  puVar1 = puVar3 + 1;
  *puVar3 = in_RAX;
  *(undefined4 *)puVar3 = 0xbbca7d4;
  *(undefined4 *)((longlong)puVar3 + 4) = 0;
  *puVar3 = in_RAX;
  puVar3[-1] = unaff_RSI;
  uVar4 = *puVar3;
  *(undefined4 *)puVar3 = 0x13e2d5b3;
  *(undefined4 *)((longlong)puVar3 + 4) = 0;
  *(undefined4 *)puVar3 = *(undefined4 *)((*puVar3 ^ 0x13e2d507) + 0x7ffe0000);
  *(undefined4 *)puVar3 = 0x3e882d5c;
  *(undefined4 *)((longlong)puVar3 + 4) = 0;
  uVar7 = *puVar3 ^ 0x3e882d5c;
  *puVar3 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar7 < 0) * 0x80 |
            (ulonglong)(uVar7 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
            (ulonglong)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000
            | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  uVar9 = *puVar3;
  bVar8 = (uVar9 & 0x80) != 0;
  *puVar3 = uVar4;
  puVar3[-1] = (ulonglong)puVar1;
  *puVar1 = uVar7;
  *(undefined4 *)puVar1 = 0xfa3d99b8;
  pvVar5 = ProcessEnvironmentBlock;
  *puVar1 = (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)bVar8 * 0x80 |
            (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  if (!bVar8) {
    uVar6 = FUN_165f01f90(param_1,param_2,pvVar5);
    return uVar6;
  }
  uVar6 = FUN_165f01f90(param_1,param_2,pvVar5);
  return uVar6;
}



// FUNCTION 14dccaa62 thunk_FUN_14dccaa68 body=5 status=ok
// SIG undefined thunk_FUN_14dccaa68(void)

undefined8 thunk_FUN_14dccaa68(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dccaa68 FUN_14dccaa68 body=39 status=ok
// SIG undefined FUN_14dccaa68(void)

undefined8 FUN_14dccaa68(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dccaad6 FUN_14dccaad6 body=127 status=ok
// SIG undefined FUN_14dccaad6(void)

/* WARNING: Removing unreachable block (ram,0x00014dccabe4) */

void FUN_14dccaad6(void)

{
  FUN_15b916449();
  FUN_165c86dea();
  return;
}



// FUNCTION 14dccab55 FUN_14dccab55 body=464 status=ok
// SIG undefined FUN_14dccab55(void)

/* WARNING: Removing unreachable block (ram,0x00014dccabe4) */

void FUN_14dccab55(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_165c86dea(param_1,0xffffffffffffff90,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~((param_1 ^ 0xffffffffffffffff) & uVar1) + uVar1) - param_1 & (~uVar1 | param_1)
                 ));
  return;
}



// FUNCTION 14dccad3f FUN_14dccad3f body=122 status=ok
// SIG undefined FUN_14dccad3f(void)

void FUN_14dccad3f(void)

{
  FUN_162c86075(FUN_162c86075);
  return;
}



// FUNCTION 14dccadba FUN_14dccadba body=425 status=ok
// SIG undefined FUN_14dccadba(void)

/* WARNING: Removing unreachable block (ram,0x00014dccae67) */
/* WARNING: Removing unreachable block (ram,0x00014dccae6d) */

void FUN_14dccadba(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  lVar3 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  piVar1 = (int *)(param_1 + -8);
  *piVar1 = 0;
  *piVar1 = *piVar1 + -0x31459681;
  *(undefined4 *)(param_1 + -4) = 0xe625660e;
  puVar2 = (uint *)(param_1 + -4);
  *puVar2 = *puVar2 ^ 0x19da99f1;
  *(ulonglong *)(param_1 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar2 < 0) * 0x80 |
       (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(param_1 + -0x10) = *(ushort *)(param_1 + -0x10) & 0x100;
  plVar4 = (longlong *)(param_1 + -0x10);
  if (*(short *)(param_1 + -0x10) == 0) {
    plVar4 = (longlong *)piVar1;
  }
  *plVar4 = *(undefined8 *)**(undefined8 **)(lVar3 + *plVar4 + 0x314596a1);
  *plVar4 = *(undefined8 *)*plVar4;
  lVar3 = **(longlong **)*plVar4;
  *plVar4 = 0;
  *plVar4 = *plVar4 - lVar3;
  *plVar4 = -*plVar4;
  *plVar4 = (longlong)&LAB_165e2a0d6;
  return;
}



// FUNCTION 14dccaee3 FUN_14dccaee3 body=815 status=ok
// SIG undefined FUN_14dccaee3(void)

/* WARNING: Instruction at (ram,0x000156f44d48) overlaps instruction at (ram,0x000156f44d46)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000156f44ca9) */
/* WARNING: Removing unreachable block (ram,0x000156f44caf) */
/* WARNING: Removing unreachable block (ram,0x000156f44d43) */
/* WARNING: Removing unreachable block (ram,0x000156f44d3e) */
/* WARNING: Removing unreachable block (ram,0x000156f44da3) */
/* WARNING: Removing unreachable block (ram,0x000156f44daf) */
/* WARNING: Removing unreachable block (ram,0x000156f44e46) */
/* WARNING: Removing unreachable block (ram,0x000156f44e4c) */
/* WARNING: Removing unreachable block (ram,0x000156f44ee5) */
/* WARNING: Removing unreachable block (ram,0x000156f44ef0) */
/* WARNING: Removing unreachable block (ram,0x000156f44eeb) */
/* WARNING: Removing unreachable block (ram,0x00015686992d) */
/* WARNING: Removing unreachable block (ram,0x0001570e3af7) */
/* WARNING: Removing unreachable block (ram,0x000157619aee) */
/* WARNING: Removing unreachable block (ram,0x000157619b64) */
/* WARNING: Removing unreachable block (ram,0x000157619b69) */
/* WARNING: Removing unreachable block (ram,0x000157619b6f) */
/* WARNING: Removing unreachable block (ram,0x000157619b74) */
/* WARNING: Removing unreachable block (ram,0x000157619bf8) */
/* WARNING: Removing unreachable block (ram,0x000157619c03) */
/* WARNING: Removing unreachable block (ram,0x00016563384a) */
/* WARNING: Removing unreachable block (ram,0x000165633850) */
/* WARNING: Removing unreachable block (ram,0x000165633960) */
/* WARNING: Removing unreachable block (ram,0x00016563395a) */
/* WARNING: Removing unreachable block (ram,0x000165633966) */
/* WARNING: Removing unreachable block (ram,0x0001652484a4) */
/* WARNING: Removing unreachable block (ram,0x000156fc59f7) */
/* WARNING: Removing unreachable block (ram,0x000165abae29) */
/* WARNING: Removing unreachable block (ram,0x00014dccb02c) */
/* WARNING: Removing unreachable block (ram,0x00014dccaf8e) */
/* WARNING: Removing unreachable block (ram,0x00014dccafb7) */
/* WARNING: Removing unreachable block (ram,0x00014dccb01b) */
/* WARNING: Removing unreachable block (ram,0x000156fc595e) */
/* WARNING: Removing unreachable block (ram,0x000156fc59ec) */
/* WARNING: Removing unreachable block (ram,0x000156fc59e7) */
/* WARNING: Removing unreachable block (ram,0x00015b2aba00) */
/* WARNING: Removing unreachable block (ram,0x00014dccafbc) */

undefined8 FUN_14dccaee3(void)

{
  undefined8 uVar1;
  undefined2 uVar2;
  longlong unaff_RSI;
  undefined1 local_res10 [24];
  
  uVar2 = 0;
  if ((*(ulonglong *)(unaff_RSI + -0x90) & 0x8000) != 0) {
    uVar2 = 0xffff;
  }
  if (&DAT_00000007 < local_res10) {
    uVar1 = FUN_1652484a4();
    return uVar1;
  }
  uVar1 = FUN_156f44bee(*(undefined8 *)(unaff_RSI + -0x28),uVar2);
  return uVar1;
}



// FUNCTION 14dccb02c FUN_14dccb02c body=157 status=ok
// SIG undefined FUN_14dccb02c(void)

void FUN_14dccb02c(void)

{
  FUN_156dfc75d();
  return;
}



// FUNCTION 14dccb296 FUN_14dccb296 body=14 status=ok
// SIG undefined FUN_14dccb296(void)

void FUN_14dccb296(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dccb328 FUN_14dccb328 body=155 status=ok
// SIG undefined FUN_14dccb328(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dccb328(int *param_1)

{
  undefined4 uVar1;
  undefined2 *unaff_RBX;
  undefined2 in_FS;
  
  uVar1 = FUN_16140574b();
  *unaff_RBX = in_FS;
  out(0x65,uVar1);
  *param_1 = *param_1 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dccb502 FUN_14dccb502 body=104 status=ok
// SIG undefined FUN_14dccb502(void)

void FUN_14dccb502(void)

{
  return;
}



// FUNCTION 14dccb81a FUN_14dccb81a body=890 status=ok
// SIG undefined FUN_14dccb81a(void)

/* WARNING: Removing unreachable block (ram,0x00014dccb8c0) */
/* WARNING: Removing unreachable block (ram,0x00014dccb8cb) */
/* WARNING: Removing unreachable block (ram,0x0001614de374) */
/* WARNING: Removing unreachable block (ram,0x00015b84ccd3) */
/* WARNING: Removing unreachable block (ram,0x00015b84cdf5) */
/* WARNING: Removing unreachable block (ram,0x0001614de380) */
/* WARNING: Removing unreachable block (ram,0x000166407df0) */
/* WARNING: Removing unreachable block (ram,0x0001614de40c) */
/* WARNING: Removing unreachable block (ram,0x0001614de418) */
/* WARNING: Removing unreachable block (ram,0x0001614de41d) */
/* WARNING: Removing unreachable block (ram,0x00015b84cdfa) */
/* WARNING: Removing unreachable block (ram,0x00015b84ce00) */
/* WARNING: Removing unreachable block (ram,0x00015b5c1d9a) */
/* WARNING: Removing unreachable block (ram,0x00014dccb8c6) */
/* WARNING: Removing unreachable block (ram,0x000161c65bd4) */
/* WARNING: Removing unreachable block (ram,0x00014dccb87e) */
/* WARNING: Removing unreachable block (ram,0x000161c65c2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dccb81a(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_15b906241(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,~(in_RAX & param_1) & (in_RAX | param_1)
               );
  uVar1 = FUN_15b84ccd3();
  return uVar1;
}



// FUNCTION 14dccb938 FUN_14dccb938 body=183 status=ok
// SIG undefined FUN_14dccb938(void)

void FUN_14dccb938(void)

{
  return;
}



// FUNCTION 14dccbb9c FUN_14dccbb9c body=167 status=ok
// SIG undefined FUN_14dccbb9c(void)

void FUN_14dccbb9c(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong uStack_8;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + param_2);
  *puVar1 = in_RAX;
  puVar1[-1] = unaff_RSI;
  uVar2 = *(ulonglong *)(0x2f46 - ~(param_1 - 0x2fcfU));
  *puVar1 = *puVar1;
  *(int *)puVar1 = 0x519aecab;
  *(int *)puVar1 = (int)*puVar1 + 0x66371930;
  *(int *)((longlong)puVar1 + 4) = -1;
  *puVar1 = *(ulonglong *)(param_1 + (*puVar1 ^ 0x482dfa4b));
  uVar3 = *(undefined8 *)(param_1 + -0x78);
  *puVar1 = param_4;
  puVar1[-1] = param_4;
  *puVar1 = (ulonglong)&LAB_14dccbc45;
  FUN_15b7fde08(param_1,uVar3,uVar2 ^ unaff_RBX,puVar1[-1]);
  return;
}



// FUNCTION 14dccbc56 thunk_FUN_14dccbc5c body=5 status=ok
// SIG undefined thunk_FUN_14dccbc5c(void)

void thunk_FUN_14dccbc5c(void)

{
  undefined8 uStackX_8;
  
  FUN_1662d8ddb(uStackX_8);
  return;
}



// FUNCTION 14dccbc5c FUN_14dccbc5c body=145 status=ok
// SIG undefined FUN_14dccbc5c(void)

void FUN_14dccbc5c(void)

{
  undefined8 local_res8;
  
  FUN_1662d8ddb(local_res8);
  return;
}



// FUNCTION 14dccbced FUN_14dccbced body=296 status=ok
// SIG undefined FUN_14dccbced(void)

/* WARNING: Removing unreachable block (ram,0x00014dccbd7d) */

undefined8 FUN_14dccbced(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R15;
  longlong lStackX_18;
  undefined1 local_8 [8];
  
  lVar1 = -~(ulonglong)local_8;
  uVar3 = *(ulonglong *)(lVar1 + 0x1f);
  *(ulonglong *)(lVar1 + 0x1f) = ~*(ulonglong *)(lVar1 + 0x1f);
  *(ulonglong *)(lVar1 + 0x1f) = *(ulonglong *)(lVar1 + 0x1f) | unaff_R15;
  uVar3 = (0xffffffffffffffff - unaff_R15 | uVar3) & *(ulonglong *)(lVar1 + 0x1f);
  *(ulonglong *)(lVar1 + 0x1f) = ~uVar3;
  if (-1 < (longlong)uVar3) {
    *(undefined8 *)(lStackX_18 + -8) = in_R10;
    *(undefined8 *)(lStackX_18 + -0x10) = unaff_RDI;
    *(undefined8 *)(lStackX_18 + -0x18) = unaff_RDI;
    *(undefined8 *)(lStackX_18 + -0x20) = unaff_RBX;
    *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
    *(undefined8 *)(lStackX_18 + -0x20) = in_RAX;
    *(undefined8 *)(lStackX_18 + -0x28) = in_RAX;
    *(undefined8 *)(lStackX_18 + -0x30) = in_RAX;
    *(code **)(lStackX_18 + -0x20) = FUN_15b055225;
    *(undefined8 *)(lStackX_18 + -0x28) = 0x15ba47f14;
    return *(undefined8 *)(lStackX_18 + -0x30);
  }
  uVar2 = FUN_15b055184();
  return uVar2;
}



// FUNCTION 14dccbe1c FUN_14dccbe1c body=130 status=ok
// SIG undefined FUN_14dccbe1c(void)

void FUN_14dccbe1c(undefined8 param_1,undefined8 param_2)

{
  FUN_162d88048(param_1,param_2);
  return;
}



// FUNCTION 14dccbea1 FUN_14dccbea1 body=306 status=ok
// SIG undefined FUN_14dccbea1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001622e88d0) */
/* WARNING: Removing unreachable block (ram,0x0001622e88d6) */
/* WARNING: Removing unreachable block (ram,0x000166db0aff) */
/* WARNING: Removing unreachable block (ram,0x000166db0b0b) */
/* WARNING: Removing unreachable block (ram,0x000166db0b98) */
/* WARNING: Removing unreachable block (ram,0x000166db0b9e) */
/* WARNING: Removing unreachable block (ram,0x0001660645b6) */
/* WARNING: Removing unreachable block (ram,0x00016606464d) */
/* WARNING: Removing unreachable block (ram,0x000166064652) */
/* WARNING: Removing unreachable block (ram,0x000166064658) */
/* WARNING: Removing unreachable block (ram,0x00016606469d) */
/* WARNING: Removing unreachable block (ram,0x0001622e8845) */
/* WARNING: Removing unreachable block (ram,0x00014dec18f7) */
/* WARNING: Removing unreachable block (ram,0x00015b7ba2d9) */
/* WARNING: Removing unreachable block (ram,0x00014dccbfd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dccbea1(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  bool bVar4;
  undefined4 local_res18;
  byte *pbStackX_20;
  
  bVar4 = ((in_R11 | param_1) & 8) == 0;
  if (((!bVar4) && (!bVar4)) && (bVar4)) {
    local_res18 = SUB84(pbStackX_20,0);
    bVar4 = false;
    bVar1 = (byte)in_RAX | *pbStackX_20;
    uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
    if ((char)bVar1 < '\0') {
      if (bVar1 != 0) {
        out(8,bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *unaff_RDI = local_res18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((char)bVar1 < '\x01') {
      bVar4 = uVar2 < 0x5563ff43;
      uVar2 = uVar2 + 0xaa9c00bd;
      if ((POPCOUNT(uVar2 & 0xff) & 1U) != 0) {
        pbStackX_20[-0x46] = pbStackX_20[-0x46] - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_27633377cc007777 = (undefined1)uVar2;
    }
    out(0x5b,(uVar2 + 0x4c48e298) - (uint)bVar4);
    return (ulonglong)&pbStackX_20 & 0xffffffff;
  }
  uVar3 = FUN_15b7ba2d9();
  return uVar3;
}



// FUNCTION 14dccbfd4 FUN_14dccbfd4 body=177 status=ok
// SIG undefined FUN_14dccbfd4(void)

void FUN_14dccbfd4(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  uint unaff_retaddr;
  
  uVar1 = (ulonglong)unaff_retaddr ^ 0x44d10716 ^ *(ulonglong *)(unaff_R12 + -0x80);
  FUN_166cc754d((in_RAX - (*(ulonglong *)(unaff_R12 + -0x28) | in_RAX)) +
                *(ulonglong *)(unaff_R12 + -0x28),param_2,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  return;
}



// FUNCTION 14dccc2ea FUN_14dccc2ea body=299 status=ok
// SIG undefined FUN_14dccc2ea(void)

undefined8 FUN_14dccc2ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R15;
  
  FUN_166765c47(param_1,param_2,param_3);
  FUN_1668db5ef();
  return unaff_R15;
}



// FUNCTION 14dccc418 FUN_14dccc418 body=50 status=ok
// SIG undefined FUN_14dccc418(void)

undefined8 FUN_14dccc418(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dccc69e FUN_14dccc69e body=149 status=ok
// SIG undefined FUN_14dccc69e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dccc69e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
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
  ulonglong local_res10;
  longlong local_res18;
  
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = ~(ushort)local_res10;
  local_res10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = uVar1 | 0x100;
  local_res10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res10._0_2_ = ~uVar1;
  LOCK();
  UNLOCK();
  DAT_14d7bc944 = in_AL;
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
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
  uVar14 = *(ulonglong *)(local_res18 + -0x18);
  bVar11 = (uVar14 & 0x4000) != 0;
  bVar10 = (uVar14 & 0x800) != 0;
  bVar9 = (uVar14 & 0x400) != 0;
  bVar8 = (uVar14 & 0x200) != 0;
  bVar7 = (uVar14 & 0x100) != 0;
  bVar6 = (uVar14 & 0x80) != 0;
  bVar5 = (uVar14 & 0x40) != 0;
  bVar4 = (uVar14 & 0x10) != 0;
  bVar3 = (uVar14 & 4) != 0;
  bVar2 = (uVar14 & 1) != 0;
  bVar13 = (uVar14 & 0x200000) != 0;
  bVar12 = (uVar14 & 0x40000) != 0;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RBP;
  *(ulonglong *)(local_res18 + -0x30) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x38) = unaff_R12;
  *(undefined **)(local_res18 + -0x30) = &DAT_14dccc734;
  (*(code *)&LAB_14dca9dd4)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dccc7cf FUN_14dccc7cf body=72 status=ok
// SIG undefined FUN_14dccc7cf(void)

void FUN_14dccc7cf(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 unaff_EBX;
  undefined1 *unaff_RSI;
  float10 in_ST0;
  undefined1 local_res18 [16];
  
  uVar2 = *unaff_RSI;
  *(undefined4 *)(param_1 + -0x1248b522) = unaff_EBX;
  *(char *)(param_1 + -0x6c) = *(char *)(param_1 + -0x6c) >> 0x13;
  pbVar1 = (byte *)((ulonglong)(uint)((int)local_res18._0_8_ >> 0x1f) + 0x68);
  *pbVar1 = *pbVar1 | (byte)unaff_EBX;
  *(short *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x79,(char)param_1)) =
       (short)ROUND(in_ST0);
  LOCK();
  *(int *)CONCAT71(SUB87(local_res18._0_8_,1),uVar2) = (int)local_res18;
  UNLOCK();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14dccc9da FUN_14dccc9da body=451 status=ok
// SIG undefined FUN_14dccc9da(void)

void FUN_14dccc9da(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1569714c5(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  param_6 = param_6 ^ unaff_R15;
  uVar1 = FUN_1669aebfc();
  *(undefined8 *)(param_6 - 8) = 0x212c4b43;
  *(ulonglong *)(param_6 - 8) = *(ulonglong *)(param_6 - 8) ^ 0x212c4b43;
  *(longlong *)(param_6 - 8) = *(longlong *)(param_6 - 8) - param_4;
  *(longlong *)(param_6 - 8) = -*(longlong *)(param_6 - 8);
  *(code **)(param_6 - 0x10) = FUN_1569714c5;
  *(undefined8 *)(param_6 - 0x10) = *(undefined8 *)(param_6 - 8);
  *(undefined8 *)(param_6 - 8) = 0;
  *(undefined8 *)(param_6 - 8) = *(undefined8 *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x18) = param_1;
  *(undefined8 *)(param_6 - 0x20) = uVar1;
  *(undefined8 *)(param_6 - 0x28) = uVar1;
  *(undefined4 *)(param_6 - 0x28) = 0;
  *(undefined4 *)(param_6 - 0x24) = 0;
  *(longlong *)(param_6 - 8) = *(longlong *)(param_6 - 8) - *(longlong *)(param_6 - 0x28);
  uVar1 = *(undefined8 *)(param_6 - 0x18);
  *(ulonglong *)(param_6 - 8) = *(ulonglong *)(param_6 - 8) ^ 0x16608755e;
  *(undefined8 *)(param_6 - 0x18) = in_R10;
  *(undefined8 *)(param_6 - 0x20) = in_R10;
  *(code **)(param_6 - 0x18) = FUN_14dcccb9e;
  FUN_166087537(uVar1);
  return;
}



// FUNCTION 14dcccb9e FUN_14dcccb9e body=165 status=ok
// SIG undefined FUN_14dcccb9e(void)

void FUN_14dcccb9e(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char in_AL;
  ushort *unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong uVar3;
  ulonglong uStackX_20;
  
  *unaff_RDI = (-0x101 - ((~(*unaff_RDI & 0xfeff) - 0x101) - ~*unaff_RDI)) + *unaff_RDI;
                    /* WARNING: Read-only address (ram,0x00014d7beb1f) is written */
  LOCK();
  uVar2 = param_1;
  if (in_AL != '\0') {
    uVar2 = uRam000000014d7beb1f;
  }
  uRam000000014d7beb1f = uVar2;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = param_2;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -8) = 0x13e006;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  if ((uVar3 & 0x40) != 0) {
    *(undefined8 *)(param_5 + -0x20) = in_R11;
    *(undefined8 *)(param_5 + -0x28) = in_R11;
    *(undefined1 **)(param_5 + -0x20) = &LAB_14dcccc44;
    return;
  }
  FUN_1621da82a(param_1,uVar1);
  return;
}



// FUNCTION 14dccce28 FUN_14dccce28 body=163 status=ok
// SIG undefined FUN_14dccce28(void)

void FUN_14dccce28(void)

{
  return;
}



// FUNCTION 14dccd08a FUN_14dccd08a body=305 status=ok
// SIG undefined FUN_14dccd08a(void)

/* WARNING: Removing unreachable block (ram,0x00014dccd12a) */
/* WARNING: Removing unreachable block (ram,0x00014dccd135) */
/* WARNING: Removing unreachable block (ram,0x00014dccd130) */

void FUN_14dccd08a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = 0x14d9a92b2;
  FUN_166c3a9a4(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dccd31f FUN_14dccd31f body=175 status=ok
// SIG undefined FUN_14dccd31f(void)

void FUN_14dccd31f(undefined8 param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1649c6755(param_1,~((~unaff_R15 | *(ulonglong *)(unaff_R13 + unaff_RDI)) &
                         (~*(ulonglong *)(unaff_R13 + unaff_RDI) | unaff_R15)));
  return;
}



// FUNCTION 14dccd58e FUN_14dccd58e body=155 status=ok
// SIG undefined FUN_14dccd58e(void)

void FUN_14dccd58e(undefined8 param_1)

{
  undefined8 unaff_RBX;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_R12) = unaff_RBX;
  local_res10[0] =
       0xffffffffffffffff - (-1 - (~*(ulonglong *)(unaff_R13 + -0xa0) | ~unaff_R15)) &
       (*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15);
  local_res10[1] = local_res10[1] ^ unaff_R15;
  local_res10[2] = local_res10[2] ^ unaff_R15;
  FUN_161086777(param_1);
  FUN_14dccd62b();
  return;
}



// FUNCTION 14dccd62b FUN_14dccd62b body=161 status=ok
// SIG undefined FUN_14dccd62b(void)

/* WARNING: Removing unreachable block (ram,0x00014dccd6a2) */

void FUN_14dccd62b(void)

{
  return;
}



// FUNCTION 14dccd6cc FUN_14dccd6cc body=167 status=ok
// SIG undefined FUN_14dccd6cc(void)

undefined8 FUN_14dccd6cc(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_162808d87(param_1,~unaff_R15,
                ~((0xffffffffffffffff - unaff_R15 | uVar1) &
                 ((uVar1 | ~unaff_R15) + unaff_R15) - uVar1));
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dccd773 FUN_14dccd773 body=183 status=ok
// SIG undefined FUN_14dccd773(void)

undefined8 FUN_14dccd773(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dccd82d FUN_14dccd82d body=322 status=ok
// SIG undefined FUN_14dccd82d(void)

/* WARNING: Removing unreachable block (ram,0x00014dccd960) */
/* WARNING: Removing unreachable block (ram,0x00014dccd96c) */
/* WARNING: Removing unreachable block (ram,0x00014dccd971) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dccd82d(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong in_RAX;
  longlong lVar1;
  code *pcVar2;
  ulonglong local_res20;
  
  lVar1 = in_RAX + ~param_3 * -2;
  pcVar2 = FUN_161112a30;
  FUN_161112a30();
  (*(code *)&LAB_156540ba5)(local_res20 ^ param_1,pcVar2,lVar1);
  return;
}



// FUNCTION 14dccd971 FUN_14dccd971 body=173 status=ok
// SIG undefined FUN_14dccd971(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dccd971(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_R10;
  undefined8 uStackX_10;
  
  *(undefined8 *)(&stack0x284b0612 + in_R10) = uStackX_10;
  FUN_14da5e037(param_1,param_2,param_3,FUN_14da5e037);
  return;
}



// FUNCTION 14dccdbab FUN_14dccdbab body=25 status=ok
// SIG undefined FUN_14dccdbab(void)

void FUN_14dccdbab(void)

{
  return;
}



// FUNCTION 14dccddc2 FUN_14dccddc2 body=460 status=ok
// SIG undefined FUN_14dccddc2(void)

/* WARNING: Removing unreachable block (ram,0x00014dccde4a) */
/* WARNING: Removing unreachable block (ram,0x0001666f6676) */

void FUN_14dccddc2(void)

{
  FUN_1666f6676();
  return;
}



// FUNCTION 14dccdf78 thunk_FUN_14dccdf7e body=5 status=ok
// SIG undefined thunk_FUN_14dccdf7e(void)

/* WARNING: Removing unreachable block (ram,0x0001617c2442) */
/* WARNING: Removing unreachable block (ram,0x00014dcce01a) */
/* WARNING: Removing unreachable block (ram,0x00014dcce020) */
/* WARNING: Removing unreachable block (ram,0x00014dcce0cf) */
/* WARNING: Removing unreachable block (ram,0x00014dcce0d2) */
/* WARNING: Removing unreachable block (ram,0x0001617c23f3) */
/* WARNING: Removing unreachable block (ram,0x0001617c2446) */
/* WARNING: Removing unreachable block (ram,0x00014dcce121) */
/* WARNING: Removing unreachable block (ram,0x00014dcce127) */
/* WARNING: Removing unreachable block (ram,0x00014dcce12c) */
/* WARNING: Removing unreachable block (ram,0x00014dcce23e) */
/* WARNING: Removing unreachable block (ram,0x00014dcce24b) */
/* WARNING: Removing unreachable block (ram,0x00014dcce25f) */
/* WARNING: Removing unreachable block (ram,0x00014dcce265) */
/* WARNING: Removing unreachable block (ram,0x0001657c2216) */
/* WARNING: Removing unreachable block (ram,0x00015ba1f7ea) */

void thunk_FUN_14dccdf7e(void)

{
  FUN_15ba1f7ea();
  return;
}



// FUNCTION 14dccdf7e FUN_14dccdf7e body=736 status=ok
// SIG undefined FUN_14dccdf7e(void)

/* WARNING: Removing unreachable block (ram,0x0001617c2442) */
/* WARNING: Removing unreachable block (ram,0x00014dcce01a) */
/* WARNING: Removing unreachable block (ram,0x00014dcce020) */
/* WARNING: Removing unreachable block (ram,0x00014dcce0cf) */
/* WARNING: Removing unreachable block (ram,0x00014dcce0d2) */
/* WARNING: Removing unreachable block (ram,0x0001617c23f3) */
/* WARNING: Removing unreachable block (ram,0x0001617c2446) */
/* WARNING: Removing unreachable block (ram,0x00014dcce121) */
/* WARNING: Removing unreachable block (ram,0x00014dcce127) */
/* WARNING: Removing unreachable block (ram,0x00014dcce12c) */
/* WARNING: Removing unreachable block (ram,0x00014dcce23e) */
/* WARNING: Removing unreachable block (ram,0x00014dcce24b) */
/* WARNING: Removing unreachable block (ram,0x00014dcce25f) */
/* WARNING: Removing unreachable block (ram,0x00014dcce265) */
/* WARNING: Removing unreachable block (ram,0x0001657c2216) */
/* WARNING: Removing unreachable block (ram,0x00015ba1f7ea) */

void FUN_14dccdf7e(void)

{
  FUN_15ba1f7ea();
  return;
}



// FUNCTION 14dcce265 FUN_14dcce265 body=19 status=ok
// SIG undefined FUN_14dcce265(void)

void FUN_14dcce265(void)

{
  return;
}



// FUNCTION 14dcce30c FUN_14dcce30c body=74 status=ok
// SIG undefined FUN_14dcce30c(void)

void FUN_14dcce30c(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  FUN_14d7bf0b2(local_res10,-~local_res18 - (~param_2 + 2));
  return;
}



// FUNCTION 14dcce3ac FUN_14dcce3ac body=308 status=ok
// SIG undefined FUN_14dcce3ac(void)

/* WARNING: Instruction at (ram,0x00014dcce3f4) overlaps instruction at (ram,0x00014dcce3f3)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcce3f3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcce3ac(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_1619d8ffe(unaff_retaddr,FUN_1619d8ffe,0xffffffffd7df5ebb);
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_160b63f05(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0xffffffffffffffd8);
  FUN_14dcce4e2();
  return;
}



// FUNCTION 14dcce4e2 FUN_14dcce4e2 body=226 status=ok
// SIG undefined FUN_14dcce4e2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000160ecde0b) overlaps instruction at (ram,0x000160ecde0a)
    */
/* WARNING: Removing unreachable block (ram,0x000160ecde0a) */
/* WARNING: Removing unreachable block (ram,0x00014dcce55a) */

void FUN_14dcce4e2(int param_1)

{
  uint in_stack_00000010;
  
  if ((in_stack_00000010 ^ 0x25046ac6) == ~-param_1 + 1U) {
    FUN_160ecddb4();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x14e0bb25a)();
  return;
}



// FUNCTION 14dcce786 FUN_14dcce786 body=147 status=ok
// SIG undefined FUN_14dcce786(void)

void FUN_14dcce786(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_156993b38(param_1,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,
                0xffffffffffffffff - unaff_RBP | *(ulonglong *)(unaff_RSI + -0x80));
  return;
}



// FUNCTION 14dcce820 FUN_14dcce820 body=157 status=ok
// SIG undefined FUN_14dcce820(void)

void FUN_14dcce820(void)

{
  return;
}



// FUNCTION 14dcce8bf FUN_14dcce8bf body=155 status=ok
// SIG undefined FUN_14dcce8bf(void)

void FUN_14dcce8bf(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R11;
  
  FUN_1669114bd(param_1,param_2,~param_1 | in_R11,param_4);
  return;
}



// FUNCTION 14dcce95a FUN_14dcce95a body=600 status=ok
// SIG undefined FUN_14dcce95a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcce9f8) */
/* WARNING: Removing unreachable block (ram,0x00014dccea04) */
/* WARNING: Removing unreachable block (ram,0x0001650c2d1a) */

void FUN_14dcce95a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 local_res18;
  short local_res20;
  
  *(undefined8 *)(param_5 + -8) = param_3;
  *(undefined8 *)(param_5 + -0x10) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x18) = unaff_RDI;
  if ((local_res20 - 0x100U & 1) != 0) {
    FUN_14e09c2de();
    return;
  }
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x28) = unaff_RBP;
  *(undefined1 **)(param_5 + -8) = &LAB_14e09c349;
  thunk_FUN_15b642ca5(local_res18,local_res8,*(undefined8 *)(param_5 + -0x10));
  return;
}



// FUNCTION 14dccec59 FUN_14dccec59 body=166 status=ok
// SIG undefined FUN_14dccec59(void)

/* WARNING: Removing unreachable block (ram,0x00014dccee20) */
/* WARNING: Removing unreachable block (ram,0x00014dccee2b) */
/* WARNING: Removing unreachable block (ram,0x00014dcceed4) */
/* WARNING: Removing unreachable block (ram,0x00014dcceee0) */
/* WARNING: Removing unreachable block (ram,0x000164f6f882) */
/* WARNING: Removing unreachable block (ram,0x00014dccee26) */
/* WARNING: Removing unreachable block (ram,0x00014dccecf5) */
/* WARNING: Removing unreachable block (ram,0x00014dcced00) */
/* WARNING: Removing unreachable block (ram,0x0001668dd046) */
/* WARNING: Removing unreachable block (ram,0x00014dccecfb) */

undefined8 FUN_14dccec59(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162148f80();
  return uVar1;
}



// FUNCTION 14dcced00 FUN_14dcced00 body=640 status=ok
// SIG undefined FUN_14dcced00(void)

/* WARNING: Removing unreachable block (ram,0x00014dccee20) */
/* WARNING: Removing unreachable block (ram,0x00014dccee2b) */
/* WARNING: Removing unreachable block (ram,0x00014dcceed4) */
/* WARNING: Removing unreachable block (ram,0x00014dcceee0) */
/* WARNING: Removing unreachable block (ram,0x000164f6f882) */
/* WARNING: Removing unreachable block (ram,0x00014dccee26) */

undefined8 FUN_14dcced00(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = -(param_2 - *(longlong *)(unaff_R12 + -0x78));
  FUN_16484ee57(param_1,((in_RAX - (uVar2 | in_RAX)) + uVar2 ^ 0xffffffffffffffff) &
                        (uVar2 + in_RAX) - (uVar2 & in_RAX));
  uVar1 = FUN_14e0b3711();
  return uVar1;
}



// FUNCTION 14dccf023 FUN_14dccf023 body=165 status=ok
// SIG undefined FUN_14dccf023(void)

void FUN_14dccf023(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160ed08d9(param_1,param_2,param_3,FUN_160ed08d9);
  return;
}



// FUNCTION 14dccf0c9 FUN_14dccf0c9 body=157 status=ok
// SIG undefined FUN_14dccf0c9(void)

void FUN_14dccf0c9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166720928(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dccf166 FUN_14dccf166 body=288 status=ok
// SIG undefined FUN_14dccf166(void)

void FUN_14dccf166(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *in_R11;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  
  pcVar2 = FUN_15670f0e1;
  FUN_15670f0e1(FUN_15670f0e1,param_2,~param_1 | in_stack_00000010,unaff_retaddr,
                ~in_stack_00000010 | param_1);
  uVar1 = FUN_16632b100(pcVar2,param_2,param_3);
  *in_R11 = uVar1;
  thunk_FUN_157842fff();
  return;
}



// FUNCTION 14dccf28a FUN_14dccf28a body=325 status=ok
// SIG undefined FUN_14dccf28a(void)

/* WARNING: Removing unreachable block (ram,0x00014dccf2f8) */
/* WARNING: Removing unreachable block (ram,0x00014dccf2fe) */

void FUN_14dccf28a(undefined8 param_1)

{
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  if (((ulonglong)local_res8 & 0x8000000000000000) != 0) {
    local_res8 = (ulonglong *)((ulonglong)local_res8 & 0x7fffffffffffffff);
    unaff_retaddr = unaff_retaddr ^ 0x9e7f5a20e15ebdbd;
  }
  *local_res8 = unaff_retaddr;
  thunk_FUN_157842fff(param_1);
  return;
}



// FUNCTION 14dccf429 FUN_14dccf429 body=132 status=ok
// SIG undefined FUN_14dccf429(void)

void FUN_14dccf429(undefined8 param_1,undefined8 param_2)

{
  FUN_165b28279(param_1,param_2);
  return;
}



// FUNCTION 14dccf4af FUN_14dccf4af body=136 status=ok
// SIG undefined FUN_14dccf4af(void)

void FUN_14dccf4af(undefined8 param_1,undefined8 param_2)

{
  FUN_14db9cf57(param_1,param_2);
  FUN_14dccf53b();
  return;
}



// FUNCTION 14dccf53b FUN_14dccf53b body=133 status=ok
// SIG undefined FUN_14dccf53b(void)

undefined8 FUN_14dccf53b(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dccf66f FUN_14dccf66f body=159 status=ok
// SIG undefined FUN_14dccf66f(void)

void FUN_14dccf66f(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x16513013d)(param_1,param_2);
  return;
}



// FUNCTION 14dccf70f FUN_14dccf70f body=151 status=ok
// SIG undefined FUN_14dccf70f(void)

void FUN_14dccf70f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_156fd2371(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dccf7a7 FUN_14dccf7a7 body=122 status=ok
// SIG undefined FUN_14dccf7a7(void)

void FUN_14dccf7a7(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RSI;
  
  FUN_160f6401c(param_1,~((~param_1 | param_2) + param_1 + 1) & 0xffffffffffffffffU - unaff_RSI);
  return;
}



// FUNCTION 14dccf824 FUN_14dccf824 body=449 status=ok
// SIG undefined FUN_14dccf824(void)

/* WARNING: Removing unreachable block (ram,0x00014dccf8b2) */
/* WARNING: Removing unreachable block (ram,0x00014dccf8b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dccf824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_166029534(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dccfa83 FUN_14dccfa83 body=173 status=ok
// SIG undefined FUN_14dccfa83(void)

void FUN_14dccfa83(void)

{
  return;
}



// FUNCTION 14dccfb31 FUN_14dccfb31 body=282 status=ok
// SIG undefined FUN_14dccfb31(void)

/* WARNING: Removing unreachable block (ram,0x00014dccfcfb) */
/* WARNING: Removing unreachable block (ram,0x00014dccfd01) */
/* WARNING: Removing unreachable block (ram,0x00014dccfd06) */
/* WARNING: Removing unreachable block (ram,0x00014dccfc49) */
/* WARNING: Removing unreachable block (ram,0x00014dccfc4f) */
/* WARNING: Removing unreachable block (ram,0x00014dccfc5a) */
/* WARNING: Removing unreachable block (ram,0x00014dccfc67) */
/* WARNING: Removing unreachable block (ram,0x00014dccfcf6) */
/* WARNING: Removing unreachable block (ram,0x00014dccfddd) */
/* WARNING: Removing unreachable block (ram,0x00014dccfde1) */

void FUN_14dccfb31(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  bVar11 = (local_res8 & 0x4000) != 0;
  bVar10 = (local_res8 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (local_res8 & 0x10) != 0;
  bVar15 = (uStackX_a & 0x20) != 0;
  bVar12 = (uStackX_a & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  puVar2 = local_res10 + -1;
  *puVar2 = unaff_R12;
  local_res10[-2] = in_RAX;
  local_res10[-2] = *puVar2;
  *puVar2 = &LAB_14db1d9c4;
  local_res10[-3] = 0x14dccfbc4;
  uVar7 = FUN_14db1d99c();
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  *(int *)((longlong)local_res10 + -0xc) = *(int *)((longlong)local_res10 + -0xc) + -1;
  uVar3 = local_res10[-2];
  local_res10[-2] = uVar7;
  local_res10[-2] = local_res10[-2];
  local_res10[-3] = 0x35aab07 - ~uVar3;
  local_res10[-4] = in_R11;
  uVar7 = local_res10[-2];
  local_res10[-1] = param_1;
  uVar4 = local_res10[-1];
  local_res10[-1] = FUN_14db1d99c;
  local_res10[-2] = unaff_RBX;
  *local_res10 = uVar7;
  local_res10[-1] = unaff_RDI;
  local_res10[-2] = unaff_RDI;
  local_res10[-3] = param_2;
  *(undefined4 *)(local_res10 + -4) = 0x41318dac;
  *(undefined4 *)((longlong)local_res10 + -0x1c) = 0;
  uVar7 = local_res10[-4];
  local_res10[-4] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar10 & 1) * 0x200 | (ulonglong)(bVar9 & 1) * 0x100 |
       (ulonglong)(bVar8 & 1) * 0x10 | 4 | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res10[-4] = 0x164faa7f0;
  FUN_1652969cd(uVar4,uVar7);
  uVar3 = local_res10[-3];
  *(undefined4 *)(local_res10 + -3) = 0x2e595a82;
  *(undefined4 *)((longlong)local_res10 + -0x14) = 0;
  puVar1 = (ulonglong *)((longlong)local_res10 + ((local_res10[-3] ^ 0x212e8e98) - 0xf77d432));
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  *puVar1 = uVar3 ^ unaff_retaddr;
  *(undefined4 *)puVar1 = 0x23aa21ef;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  uVar5 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar6 = *puVar1;
  *puVar1 = uVar3 ^ unaff_retaddr;
  *(undefined4 *)puVar1 = 0x5b56d456;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  FUN_157148d1e(-~uVar6 - (~(uVar5 ^ 0x23aa21ef) + (*puVar1 ^ 0x5b56d454)),FUN_157148d1e);
  return;
}



// FUNCTION 14dccfc4f FUN_14dccfc4f body=494 status=ok
// SIG undefined FUN_14dccfc4f(void)

/* WARNING: Removing unreachable block (ram,0x00014dccfcfb) */
/* WARNING: Removing unreachable block (ram,0x00014dccfd01) */
/* WARNING: Removing unreachable block (ram,0x00014dccfd06) */
/* WARNING: Removing unreachable block (ram,0x00014dccfddd) */
/* WARNING: Removing unreachable block (ram,0x00014dccfde1) */

void FUN_14dccfc4f(void)

{
  FUN_16656c234();
  return;
}



// FUNCTION 14dcd0114 FUN_14dcd0114 body=142 status=ok
// SIG undefined FUN_14dcd0114(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd01a5) */

void FUN_14dcd0114(void)

{
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
      (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)) == 0) {
    FUN_1611aef18(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                  (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,0xffffffffffffffff,
                  ~(0xffffffffffffffff -
                   (~(~unaff_R15 | in_R9) | ~((~in_R9 + unaff_R15) - (~in_R9 & unaff_R15)))));
    return;
  }
  FUN_166148b02();
  return;
}



// FUNCTION 14dcd01a5 FUN_14dcd01a5 body=9 status=ok
// SIG undefined FUN_14dcd01a5(void)

void FUN_14dcd01a5(void)

{
  return;
}



// FUNCTION 14dcd032f FUN_14dcd032f body=269 status=ok
// SIG undefined FUN_14dcd032f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcd032f(void)

{
  longlong lVar1;
  void *pvVar2;
  ushort uVar3;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = local_res8 + unaff_R15 + (local_res8 & unaff_R15) * -2;
  local_res18 = local_res18 ^ unaff_R15;
  uVar3 = FUN_160d34b8c();
  pvVar2 = ProcessEnvironmentBlock;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res18._0_2_ = (uVar3 - ((ushort)local_res18 | uVar3)) + (ushort)local_res18;
  *(longlong *)(local_res20 + -8) = lVar1;
  *(longlong *)(local_res20 + -0x10) = lVar1;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(void **)(local_res20 + -0x20) = pvVar2;
  *(ulonglong *)(local_res20 + -0x28) =
       ~((unaff_R15 - (local_res10 | unaff_R15)) + local_res10) & (local_res10 | unaff_R15);
  *(undefined8 *)(local_res20 + -0x30) = unaff_R12;
  FUN_1647932e5();
  return;
}



// FUNCTION 14dcd06ab FUN_14dcd06ab body=181 status=ok
// SIG undefined FUN_14dcd06ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd07ec) */
/* WARNING: Removing unreachable block (ram,0x00014dcd07f2) */
/* WARNING: Removing unreachable block (ram,0x00014dcd075b) */
/* WARNING: Removing unreachable block (ram,0x00016649c820) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0764) */

void FUN_14dcd06ab(undefined4 param_1)

{
  int iVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  *(undefined4 *)
   ((longlong)&local_res8 +
   ~((unaff_retaddr & 0xffffffffd53b0bdd ^ 0xffffffffffffffff) &
    (unaff_retaddr | 0xffffffffd53b0bdd))) = param_1;
  iVar1 = local_res8._4_4_ + -0x2e8316b3;
  local_res8 = local_res8 & 0xd17ce94dffffffff;
  local_res8 = CONCAT44(iVar1 - local_res8._4_4_,(undefined4)local_res8);
  FUN_16649c820();
  return;
}



// FUNCTION 14dcd0764 FUN_14dcd0764 body=254 status=ok
// SIG undefined FUN_14dcd0764(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd07ec) */
/* WARNING: Removing unreachable block (ram,0x00014dcd07f2) */

void FUN_14dcd0764(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x165213110)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14dcd07f2 FUN_14dcd07f2 body=3 status=ok
// SIG undefined FUN_14dcd07f2(void)

void FUN_14dcd07f2(void)

{
  return;
}



// FUNCTION 14dcd0882 FUN_14dcd0882 body=138 status=ok
// SIG undefined FUN_14dcd0882(void)

void FUN_14dcd0882(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_R11;
  short *unaff_R13;
  short unaff_R14W;
  longlong local_res20;
  
  *unaff_R13 = (-0x101 - unaff_R14W) + *unaff_R13;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  plVar1 = (longlong *)(local_res20 + -0x10);
  *plVar1 = (longlong)&DAT_163602d35;
  *plVar1 = *plVar1 + -0x7cf3ec9;
  lVar2 = *plVar1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  *(longlong *)(local_res20 + -8) = lVar2;
  FUN_15b90ee3f(*(undefined8 *)(local_res20 + -0x18),param_2,param_3,
                *(undefined8 *)(local_res20 + -0x20));
  return;
}



// FUNCTION 14dcd09cb FUN_14dcd09cb body=156 status=ok
// SIG undefined FUN_14dcd09cb(void)

longlong FUN_14dcd09cb(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return (~*(ulonglong *)(unaff_R13 + -0x60) | ~unaff_R15) + *(ulonglong *)(unaff_R13 + -0x60) + 1;
}



// FUNCTION 14dcd0a68 FUN_14dcd0a68 body=175 status=ok
// SIG undefined FUN_14dcd0a68(void)

/* WARNING: Instruction at (ram,0x00014dcd0bcf) overlaps instruction at (ram,0x00014dcd0bcc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcd0c1c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0c22) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0b99) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bc3) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bcf) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bbe) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bd2) */
/* WARNING: Removing unreachable block (ram,0x000164f9f96e) */
/* WARNING: Removing unreachable block (ram,0x00016159f892) */
/* WARNING: Removing unreachable block (ram,0x000164f9f974) */

undefined8 FUN_14dcd0a68(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  longlong alStackX_10 [3];
  
  lVar5 = in_RAX - unaff_RBX;
  plVar1 = (longlong *)((longlong)&local_res8 + lVar5);
  lVar8 = *(longlong *)(unaff_R13 - 0x60);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar8;
  puVar2 = (ulonglong *)((longlong)&local_res8 + lVar5);
  *(uint *)puVar2 = 0x475d5c08;
  *(uint *)puVar2 = (uint)*puVar2 ^ 0x475d5c08;
  *(undefined4 *)((longlong)alStackX_10 + lVar5 + -4) = 0;
  uVar3 = *puVar2;
  uVar4 = *(ulonglong *)(unaff_R13 - 0x88);
  *(undefined8 *)((longlong)&local_res8 + lVar5) = unaff_RSI;
  lVar8 = -0x39 - ~unaff_R13;
  *(code **)((longlong)&local_res8 + lVar5) = FUN_14dcd0b18;
  uVar6 = FUN_165c51d55(lVar8,param_2,uVar3 ^ uVar4 ^ unaff_R15);
  *(longlong *)((longlong)alStackX_10 + lVar5) = lVar8;
  *(undefined8 *)((longlong)alStackX_10 + lVar5) = 0xf2ab676;
  *(longlong *)((longlong)alStackX_10 + lVar5) =
       *(longlong *)((longlong)alStackX_10 + lVar5) + (longlong)puVar2 * -2;
  *(undefined8 *)((longlong)alStackX_10 + lVar5) = *(undefined8 *)((longlong)alStackX_10 + lVar5);
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar4 = *(ulonglong *)(unaff_R12 + -0x78);
  *(longlong *)((longlong)alStackX_10 + lVar5) = unaff_R12;
  *(longlong *)((longlong)&local_res8 + lVar5) = unaff_R12;
  *(undefined1 **)((longlong)alStackX_10 + lVar5) = &LAB_16557920d;
  uVar7 = FUN_1655419e1(-1 - (~(uVar6 & ~uVar3) & (~uVar3 | uVar6)),
                        ~(uVar4 & uVar6) & (~uVar6 & uVar4 | uVar6));
  return uVar7;
}



// FUNCTION 14dcd0b18 FUN_14dcd0b18 body=825 status=ok
// SIG undefined FUN_14dcd0b18(void)

/* WARNING: Instruction at (ram,0x00014dcd0bcf) overlaps instruction at (ram,0x00014dcd0bcc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcd0c1c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0c22) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0b99) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bc3) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bcf) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bbe) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0bd2) */
/* WARNING: Removing unreachable block (ram,0x000164f9f96e) */
/* WARNING: Removing unreachable block (ram,0x00016159f892) */
/* WARNING: Removing unreachable block (ram,0x000164f9f974) */

undefined8 FUN_14dcd0b18(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_1655419e1(-1 - (~(in_RAX & ~*(ulonglong *)(unaff_R12 + -0x58)) &
                             (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                        ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                        (~in_RAX & *(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  return uVar1;
}



// FUNCTION 14dcd0d40 FUN_14dcd0d40 body=97 status=ok
// SIG undefined FUN_14dcd0d40(void)

void FUN_14dcd0d40(void)

{
  return;
}



// FUNCTION 14dcd0de4 FUN_14dcd0de4 body=610 status=ok
// SIG undefined FUN_14dcd0de4(void)

/* WARNING: Removing unreachable block (ram,0x0001657b870d) */
/* WARNING: Removing unreachable block (ram,0x0001657b8718) */
/* WARNING: Removing unreachable block (ram,0x0001657b875c) */
/* WARNING: Removing unreachable block (ram,0x0001657b8771) */
/* WARNING: Removing unreachable block (ram,0x0001657b8866) */
/* WARNING: Removing unreachable block (ram,0x0001657b886b) */
/* WARNING: Removing unreachable block (ram,0x0001657b8871) */
/* WARNING: Removing unreachable block (ram,0x000160c4b1bc) */
/* WARNING: Removing unreachable block (ram,0x000160c4b1be) */
/* WARNING: Removing unreachable block (ram,0x000160c4b1c2) */
/* WARNING: Removing unreachable block (ram,0x0001657b8713) */
/* WARNING: Removing unreachable block (ram,0x000166609979) */
/* WARNING: Removing unreachable block (ram,0x00015b44c0c2) */
/* WARNING: Removing unreachable block (ram,0x00014dcd0e82) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00015b44c029 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcd0de4(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  code *pcVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  byte unaff_R15B;
  ulonglong local_10;
  
  uVar5 = *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX;
  uVar4 = *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX;
  uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),(param_2 * '\x02' & unaff_R15B) * '\x02');
  pcVar3 = FUN_15b14d934;
  FUN_15b14d934();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98) & uVar2 ^ 0xffffffffffffffff;
  FUN_164f688d2(((local_10 | uVar2) - (uVar1 | local_10 | uVar2)) + uVar1,pcVar3,uVar4,uVar5);
  return;
}



// FUNCTION 14dcd0f10 FUN_14dcd0f10 body=181 status=ok
// SIG undefined FUN_14dcd0f10(void)

longlong FUN_14dcd0f10(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return (-~param_1 - (~*(ulonglong *)(unaff_RDI + -0x98) + 2)) +
         (*(ulonglong *)(unaff_RDI + -0x98) & param_1) * -2;
}



// FUNCTION 14dcd1053 FUN_14dcd1053 body=301 status=ok
// SIG undefined FUN_14dcd1053(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcd1053(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~-*(longlong *)(unaff_R13 + -0x78) + 1;
  FUN_16676dff6(uVar1,FUN_16676dff6,(-param_3 - unaff_R15) + (param_3 | unaff_R15) * 2);
  FUN_161e0dc0a(uVar1,*(ulonglong *)(unaff_RDI + -0x68) ^ uVar1);
  return;
}



// FUNCTION 14dcd129f FUN_14dcd129f body=172 status=ok
// SIG undefined FUN_14dcd129f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd134d) */

void FUN_14dcd129f(void)

{
  return;
}



// FUNCTION 14dcd134d FUN_14dcd134d body=134 status=ok
// SIG undefined FUN_14dcd134d(void)

void FUN_14dcd134d(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_166d2e436(FUN_166d2e436,*(ulonglong *)(param_1 + -0x78) ^ unaff_RBX);
  return;
}



// FUNCTION 14dcd14fc FUN_14dcd14fc body=158 status=ok
// SIG undefined FUN_14dcd14fc(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd159a) */

void FUN_14dcd14fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  (*(code *)0x15b690926)(param_1,unaff_RSI ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14dcd159a FUN_14dcd159a body=206 status=ok
// SIG undefined FUN_14dcd159a(void)

void FUN_14dcd159a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  uVar1 = (~param_5 | ~unaff_R15) & (unaff_RBP | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = uStackX_18;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x28) = in_RAX;
  *(undefined4 *)(uVar1 - 0x28) = 0xae8ab60a;
  *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 + *(longlong *)(uVar1 - 0x28) + 0x517549ee);
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = (longlong)(&DAT_160f57241 + *(longlong *)(uVar1 - 8));
  (*(code *)0x160f57203)(param_1,uVar2,local_res8);
  return;
}



// FUNCTION 14dcd19f8 FUN_14dcd19f8 body=297 status=ok
// SIG undefined FUN_14dcd19f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd1aa6) */
/* WARNING: Removing unreachable block (ram,0x00014dcd1a9b) */

void FUN_14dcd19f8(void)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ushort *in_R9;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res20;
  
  *in_R9 = (*in_R9 | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x28) = 0;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x28);
  *(ulonglong *)(local_res20 + -0x10) =
       *(ulonglong *)(local_res20 + -0x10) ^ *(ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -8) = 0x1571bc9ae;
  FUN_14d7ace3c();
  return;
}



// FUNCTION 14dcd1b21 FUN_14dcd1b21 body=312 status=ok
// SIG undefined FUN_14dcd1b21(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd1bb6) */

void FUN_14dcd1b21(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15634e7c7(~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)));
  return;
}



// FUNCTION 14dcd1c5a FUN_14dcd1c5a body=253 status=ok
// SIG undefined FUN_14dcd1c5a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd1d3c) */

void FUN_14dcd1c5a(void)

{
  FUN_162e0b307();
  FUN_15718b1f0();
  return;
}



// FUNCTION 14dcd1df9 FUN_14dcd1df9 body=120 status=ok
// SIG undefined FUN_14dcd1df9(void)

void FUN_14dcd1df9(void)

{
  return;
}



// FUNCTION 14dcd1f9c FUN_14dcd1f9c body=173 status=ok
// SIG undefined FUN_14dcd1f9c(void)

void FUN_14dcd1f9c(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161688f81(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0xffffffffffffff88,
                ~(param_3 & unaff_R15) & (~param_1 & unaff_RBP | unaff_R15),param_4);
  return;
}



// FUNCTION 14dcd20d6 thunk_FUN_14dcd20dc body=5 status=ok
// SIG undefined thunk_FUN_14dcd20dc(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd215a) */
/* WARNING: Removing unreachable block (ram,0x00014dcd2166) */

void thunk_FUN_14dcd20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x58) + 1;
  uVar1 = FUN_165fcfe29(~(uVar1 & in_RAX) & uVar1 + (-1 - (~in_RAX | uVar1)),
                        *(undefined8 *)(unaff_R12 + -0x78),
                        *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                        (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2,param_3);
  FUN_1648eabd6(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar1);
  FUN_1629649ea();
  return;
}



// FUNCTION 14dcd20dc FUN_14dcd20dc body=134 status=ok
// SIG undefined FUN_14dcd20dc(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd215a) */
/* WARNING: Removing unreachable block (ram,0x00014dcd2166) */

void FUN_14dcd20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x58) + 1;
  uVar1 = FUN_165fcfe29(~(uVar1 & in_RAX) & uVar1 + (-1 - (~in_RAX | uVar1)),
                        *(undefined8 *)(unaff_R12 + -0x78),
                        *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                        (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2,param_3);
  FUN_1648eabd6(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar1);
  FUN_1629649ea();
  return;
}



// FUNCTION 14dcd2166 FUN_14dcd2166 body=12 status=ok
// SIG undefined FUN_14dcd2166(void)

void FUN_14dcd2166(void)

{
  return;
}



// FUNCTION 14dcd2323 FUN_14dcd2323 body=322 status=ok
// SIG undefined FUN_14dcd2323(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd23c9) */

void FUN_14dcd2323(void)

{
  if (&stack0x00000000 == &DAT_fffffffffffffff8) {
    FUN_1657d2e6f();
    return;
  }
  FUN_1657d2e6f();
  return;
}



// FUNCTION 14dcd2466 FUN_14dcd2466 body=546 status=ok
// SIG undefined FUN_14dcd2466(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd24d4) */

undefined8 FUN_14dcd2466(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcd27a2 FUN_14dcd27a2 body=93 status=ok
// SIG undefined FUN_14dcd27a2(void)

void FUN_14dcd27a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14d7c5881(param_1,local_res10,param_3,param_4);
  return;
}



// FUNCTION 14dcd2838 FUN_14dcd2838 body=747 status=ok
// SIG undefined FUN_14dcd2838(void)

void FUN_14dcd2838(undefined8 param_1)

{
  ulonglong unaff_RDI;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  
  local_res18 = ~local_res18 & unaff_RDI;
  (*(code *)0x162aa0a12)(param_1,local_res10);
  return;
}



// FUNCTION 14dcd29e5 FUN_14dcd29e5 body=34 status=ok
// SIG undefined FUN_14dcd29e5(void)

void FUN_14dcd29e5(void)

{
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dcd2a08 thunk_FUN_160e7b2c5 body=5 status=ok
// SIG undefined thunk_FUN_160e7b2c5(void)

void thunk_FUN_160e7b2c5(void)

{
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dcd2a0d FUN_14dcd2a0d body=118 status=ok
// SIG undefined FUN_14dcd2a0d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd2a74) */

undefined8 FUN_14dcd2a0d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_retaddr;
  
  if ((unaff_retaddr < 0) && (&stack0x00000000 < &DAT_fffffffffffffff8)) {
    uVar1 = FUN_156b6ed98();
    return uVar1;
  }
  uVar1 = thunk_FUN_160e7b2c5(param_1);
  return uVar1;
}



// FUNCTION 14dcd2b26 FUN_14dcd2b26 body=304 status=ok
// SIG undefined FUN_14dcd2b26(void)

ulonglong FUN_14dcd2b26(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  
  lVar1 = *(longlong *)(unaff_R12 + -0x68);
  uVar2 = *(ulonglong *)(unaff_R12 + -8);
  uVar4 = FUN_1620e96a3(param_1,param_2);
  param_4 = param_4 + lVar1 * -2;
                    /* WARNING: Read-only address (ram,0x00014d7a5efb) is written */
  LOCK();
  uRam000000014d7a5efb = (undefined1)uVar4;
  UNLOCK();
  *(undefined8 *)(param_4 + -8) = unaff_R13;
  *(undefined8 *)(param_4 + -0x10) = unaff_R13;
  *(undefined4 *)(param_4 + -0x18) = 0x86a046c;
  *(undefined4 *)(param_4 + -0x14) = 0;
  lVar1 = *(longlong *)(param_4 + -0x18);
  *(ulonglong *)(param_4 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_4 + -0x20) = unaff_R14;
  *(undefined8 *)(param_4 + -0x28) = unaff_RDI;
  uVar3 = *(undefined8 *)(param_4 + -0x20);
  *(code **)(param_4 + -0x18) = FUN_1620e96a3;
  *(longlong *)(param_4 + -8) = lVar1 + -0x47e7e9c;
  *(undefined8 *)(param_4 + -0x18) = uVar3;
  *(undefined8 *)(param_4 + -0x20) = uVar3;
  *(undefined8 *)(param_4 + -0x28) = uVar3;
  *(code **)(param_4 + -0x18) = FUN_14dcd2c58;
  *(undefined8 *)(param_4 + -0x20) = 0x165860495;
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14dcd2c58 FUN_14dcd2c58 body=139 status=ok
// SIG undefined FUN_14dcd2c58(void)

void FUN_14dcd2c58(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16690c1b4(param_1,FUN_16690c1b4,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14dcd2ce3 FUN_14dcd2ce3 body=127 status=ok
// SIG undefined FUN_14dcd2ce3(void)

void FUN_14dcd2ce3(undefined8 param_1,undefined8 param_2)

{
  FUN_1620b108a(param_1,param_2);
  FUN_160ded1fd(param_1);
  return;
}



// FUNCTION 14dcd2d62 FUN_14dcd2d62 body=216 status=ok
// SIG undefined FUN_14dcd2d62(void)

void FUN_14dcd2d62(undefined8 param_1)

{
  FUN_160ded1fd(param_1);
  return;
}



// FUNCTION 14dcd2f1c FUN_14dcd2f1c body=162 status=ok
// SIG undefined FUN_14dcd2f1c(void)

void FUN_14dcd2f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16662089d(FUN_16662089d,param_2,param_3);
  return;
}



// FUNCTION 14dcd3063 FUN_14dcd3063 body=174 status=ok
// SIG undefined FUN_14dcd3063(void)

ulonglong FUN_14dcd3063(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  return 0xffffffffffffffff - (uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
}



// FUNCTION 14dcd31bf FUN_14dcd31bf body=169 status=ok
// SIG undefined FUN_14dcd31bf(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd3269) */

void FUN_14dcd31bf(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if ((*(ulonglong *)(unaff_RDI + -0x50) & param_1) == 0 &&
      (*(ulonglong *)(unaff_RDI + -0x50) | param_1) == 0xffffffffffffffff) {
    FUN_161396f79();
    return;
  }
  FUN_161396f79();
  return;
}



// FUNCTION 14dcd3269 FUN_14dcd3269 body=141 status=ok
// SIG undefined FUN_14dcd3269(void)

void FUN_14dcd3269(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_161189926(param_1,unaff_retaddr,param_3,FUN_161189926);
  return;
}



// FUNCTION 14dcd32f7 thunk_FUN_14dcd32fd body=5 status=ok
// SIG undefined thunk_FUN_14dcd32fd(void)

void thunk_FUN_14dcd32fd(void)

{
  return;
}



// FUNCTION 14dcd32fd FUN_14dcd32fd body=107 status=ok
// SIG undefined FUN_14dcd32fd(void)

void FUN_14dcd32fd(void)

{
  return;
}



// FUNCTION 14dcd341e FUN_14dcd341e body=291 status=ok
// SIG undefined FUN_14dcd341e(void)

/* WARNING: Removing unreachable block (ram,0x000161d90b04) */
/* WARNING: Removing unreachable block (ram,0x000161d90b0a) */
/* WARNING: Removing unreachable block (ram,0x00016621d586) */
/* WARNING: Removing unreachable block (ram,0x00016621d5b1) */
/* WARNING: Removing unreachable block (ram,0x00016621d5c3) */
/* WARNING: Removing unreachable block (ram,0x00016621d5eb) */
/* WARNING: Removing unreachable block (ram,0x00016621d5f0) */

void FUN_14dcd341e(undefined8 param_1)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (unaff_RSI == 0x123638) {
    FUN_161d90a72();
    FUN_16188240e();
    return;
  }
  if (unaff_RSI == 0x123639) {
    FUN_16131bb16(param_1);
    return;
  }
  if (unaff_RSI == 0x12363a) {
    FUN_16131bb16(param_1);
    return;
  }
  FUN_16621d586();
  return;
}



// FUNCTION 14dcd34bd FUN_14dcd34bd body=127 status=ok
// SIG undefined FUN_14dcd34bd(void)

void FUN_14dcd34bd(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  longlong lVar1;
  
  lVar1 = param_3 + param_1 + 1;
  FUN_16188240e(param_1,(~((param_1 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_RDI + -0x38)) +
                        *(ulonglong *)(unaff_RDI + -0x38)) - ~(param_1 ^ 0xffffffffffffffff),
                CONCAT71((int7)((ulonglong)lVar1 >> 8),-(char)lVar1));
  return;
}



// FUNCTION 14dcd365f FUN_14dcd365f body=132 status=ok
// SIG undefined FUN_14dcd365f(void)

void FUN_14dcd365f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res8 = (ulonglong)(uint)local_res8;
  local_res18[1] =
       *(undefined8 *)
        ((longlong)local_res18 + (~(local_res8 & 0x215e7c4f) & (local_res8 | 0x215e7c4f)));
                    /* WARNING: Could not recover jumptable at 0x00014dcd36e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,local_res10,param_3,param_4);
  return;
}



// FUNCTION 14dcd37f1 FUN_14dcd37f1 body=243 status=ok
// SIG undefined FUN_14dcd37f1(void)

void FUN_14dcd37f1(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 unaff_RSI;
  ushort *puVar3;
  longlong local_res8;
  undefined1 local_7c73 [31827];
  undefined8 local_20;
  
  local_20 = FUN_156352944();
  puVar3 = (ushort *)(0x7c74 - (~(ulonglong)local_7c73 + 2));
  uVar1 = *puVar3;
  uVar2 = *puVar3;
  *puVar3 = 0;
  *puVar3 = *puVar3 + (-0x101 - (uVar1 | 0xfeff)) + uVar2;
  *(undefined8 *)(local_res8 + -8) = unaff_RSI;
  (*(code *)&LAB_15648a2b2)();
  return;
}



// FUNCTION 14dcd38e5 FUN_14dcd38e5 body=117 status=ok
// SIG undefined FUN_14dcd38e5(void)

void FUN_14dcd38e5(undefined8 param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong unaff_R14;
  
  uVar4 = unaff_RDI ^ 0x31357f53;
  *(undefined8 *)(&stack0xfffffffffbe5ae16 + uVar4) = param_1;
  uVar3 = *(undefined8 *)(&stack0xfffffffffbe5ae16 + uVar4);
  plVar1 = (longlong *)(&stack0xfffffffffbe5ae16 + uVar4);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (unaff_R14 & 0x7fffffffffffffff | (ulonglong)((longlong)unaff_R14 < 0) << 0x3f
                      );
  *plVar1 = -*plVar1;
  *(int *)plVar1 = (int)*plVar1;
  *(uint *)(&stack0xfffffffffbe5ae1a + uVar4) =
       *(uint *)(&stack0xfffffffffbe5ae1a + uVar4) & 0x7fffffff;
  bVar2 = *(byte *)*plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + ((ulonglong)bVar2 ^ 5);
  thunk_FUN_166596473(uVar3);
  return;
}



// FUNCTION 14dcd395a FUN_14dcd395a body=328 status=ok
// SIG undefined FUN_14dcd395a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd397a) */

undefined8 FUN_14dcd395a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcd3aaf FUN_14dcd3aaf body=116 status=ok
// SIG undefined FUN_14dcd3aaf(void)

void FUN_14dcd3aaf(void)

{
  return;
}



// FUNCTION 14dcd3b4c FUN_14dcd3b4c body=242 status=ok
// SIG undefined FUN_14dcd3b4c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd3b9c) */

void FUN_14dcd3b4c(void)

{
  FUN_160f26157();
  return;
}



// FUNCTION 14dcd3d34 FUN_14dcd3d34 body=27 status=ok
// SIG undefined FUN_14dcd3d34(void)

void FUN_14dcd3d34(void)

{
  return;
}



// FUNCTION 14dcd3e78 FUN_14dcd3e78 body=246 status=ok
// SIG undefined FUN_14dcd3e78(void)

/* WARNING: Removing unreachable block (ram,0x0001611ec242) */
/* WARNING: Removing unreachable block (ram,0x0001611ec248) */
/* WARNING: Removing unreachable block (ram,0x0001611ec256) */
/* WARNING: Removing unreachable block (ram,0x0001611ec25b) */
/* WARNING: Removing unreachable block (ram,0x0001611ec29a) */
/* WARNING: Removing unreachable block (ram,0x0001611ec2a7) */
/* WARNING: Removing unreachable block (ram,0x0001611ec2ab) */
/* WARNING: Removing unreachable block (ram,0x000156f753b5) */
/* WARNING: Removing unreachable block (ram,0x000156f753fa) */
/* WARNING: Removing unreachable block (ram,0x000156f753ff) */
/* WARNING: Removing unreachable block (ram,0x000156f7540d) */
/* WARNING: Removing unreachable block (ram,0x000156f7544f) */
/* WARNING: Removing unreachable block (ram,0x000156f75455) */
/* WARNING: Removing unreachable block (ram,0x000156f7545a) */
/* WARNING: Removing unreachable block (ram,0x00014da2a093) */
/* WARNING: Removing unreachable block (ram,0x00014da2a099) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf76e) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf811) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf822) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf817) */
/* WARNING: Removing unreachable block (ram,0x000160dda15d) */
/* WARNING: Removing unreachable block (ram,0x00014da2a12f) */
/* WARNING: Removing unreachable block (ram,0x00014da2a135) */
/* WARNING: Removing unreachable block (ram,0x00014da2a13a) */
/* WARNING: Removing unreachable block (ram,0x00015b48f8b4) */
/* WARNING: Removing unreachable block (ram,0x00014da2a176) */
/* WARNING: Removing unreachable block (ram,0x00014da2a18a) */
/* WARNING: Removing unreachable block (ram,0x0001650591db) */
/* WARNING: Removing unreachable block (ram,0x00014da2a002) */
/* WARNING: Removing unreachable block (ram,0x00014da29ff7) */
/* WARNING: Removing unreachable block (ram,0x00014da29ffd) */
/* WARNING: Removing unreachable block (ram,0x00014dcd3f08) */
/* WARNING: Removing unreachable block (ram,0x00014dcd3f42) */
/* WARNING: Removing unreachable block (ram,0x00014dcd3f3c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd3f50) */

void FUN_14dcd3e78(void)

{
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x88)) {
    return;
  }
  FUN_1611ec1ad();
  return;
}



// FUNCTION 14dcd413e FUN_14dcd413e body=168 status=ok
// SIG undefined FUN_14dcd413e(void)

void FUN_14dcd413e(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong unaff_RDI;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffcd2a174 + param_3);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x50);
  lVar2 = *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  *(undefined4 *)puVar1 = 0xef3c2a32;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  FUN_16687d510(param_1,*puVar1,lVar2,lVar2);
  return;
}



// FUNCTION 14dcd41e9 FUN_14dcd41e9 body=298 status=ok
// SIG undefined FUN_14dcd41e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd4309) */
/* WARNING: Removing unreachable block (ram,0x00014dcd4314) */
/* WARNING: Removing unreachable block (ram,0x00014dcd430f) */
/* WARNING: Removing unreachable block (ram,0x00014dcd427a) */
/* WARNING: Removing unreachable block (ram,0x00014dcd4285) */
/* WARNING: Removing unreachable block (ram,0x00016150f630) */
/* WARNING: Removing unreachable block (ram,0x00016127b1da) */
/* WARNING: Removing unreachable block (ram,0x00016127b260) */
/* WARNING: Removing unreachable block (ram,0x00016127b264) */
/* WARNING: Removing unreachable block (ram,0x00016150f636) */

undefined8 FUN_14dcd41e9(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14da368b5();
  return uVar1;
}



// FUNCTION 14dcd4314 FUN_14dcd4314 body=301 status=ok
// SIG undefined FUN_14dcd4314(void)

void FUN_14dcd4314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 local_res18;
  
  FUN_166b7da98();
  (*(code *)0x1655fca6d)(-0x101 - (local_res18 | 0xfeff),0x1655fca6d,param_3);
  return;
}



// FUNCTION 14dcd44c4 FUN_14dcd44c4 body=69 status=ok
// SIG undefined FUN_14dcd44c4(void)

void FUN_14dcd44c4(void)

{
  return;
}



// FUNCTION 14dcd473d FUN_14dcd473d body=136 status=ok
// SIG undefined FUN_14dcd473d(void)

void FUN_14dcd473d(void)

{
  FUN_14dfac16b();
  return;
}



// FUNCTION 14dcd4903 FUN_14dcd4903 body=123 status=ok
// SIG undefined FUN_14dcd4903(void)

void FUN_14dcd4903(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x11b962) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == 0x11b963) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0x11b964) {
    FUN_15642b5af();
    return;
  }
  FUN_15642b59a(param_1,param_2,param_3,0x14d7a840a);
  return;
}



// FUNCTION 14dcd497f FUN_14dcd497f body=181 status=ok
// SIG undefined FUN_14dcd497f(void)

void FUN_14dcd497f(void)

{
  ushort *unaff_RSI;
  undefined8 unaff_RDI;
  short in_R10W;
  undefined8 in_R11;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *unaff_RSI = (-in_R10W - 1U | *unaff_RSI) - 0x100;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_156ea70dc;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x30) = unaff_RDI;
  *(code **)(local_res20 + -0x20) = FUN_14dcd4a34;
  *(undefined8 *)(local_res20 + -0x28) = 0x156ea70d0;
  return;
}



// FUNCTION 14dcd4a34 FUN_14dcd4a34 body=42 status=ok
// SIG undefined FUN_14dcd4a34(void)

void FUN_14dcd4a34(void)

{
  return;
}



// FUNCTION 14dcd4bd5 FUN_14dcd4bd5 body=142 status=ok
// SIG undefined FUN_14dcd4bd5(void)

void FUN_14dcd4bd5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165df42ff(param_1,*(ulonglong *)(unaff_RDI + -0x28) + param_1 +
                        ~(~*(ulonglong *)(unaff_RDI + -0x28) | ~param_1) * -2);
  return;
}



// FUNCTION 14dcd4e33 FUN_14dcd4e33 body=338 status=ok
// SIG undefined FUN_14dcd4e33(void)

/* WARNING: Removing unreachable block (ram,0x00016535fa42) */
/* WARNING: Removing unreachable block (ram,0x00016535fa3c) */
/* WARNING: Removing unreachable block (ram,0x00016535fa47) */
/* WARNING: Removing unreachable block (ram,0x000156f1d921) */
/* WARNING: Removing unreachable block (ram,0x000156f1d9a8) */
/* WARNING: Removing unreachable block (ram,0x000156f1d9ad) */
/* WARNING: Removing unreachable block (ram,0x00014dbcca1e) */
/* WARNING: Removing unreachable block (ram,0x000156f1d9b3) */
/* WARNING: Removing unreachable block (ram,0x000156f1da6e) */
/* WARNING: Removing unreachable block (ram,0x000156f1da74) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca10e) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca1b8) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0d1a) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0d20) */
/* WARNING: Removing unreachable block (ram,0x000165569140) */
/* WARNING: Removing unreachable block (ram,0x000165569146) */
/* WARNING: Removing unreachable block (ram,0x00014d9bca62) */
/* WARNING: Removing unreachable block (ram,0x00014d9bca76) */
/* WARNING: Removing unreachable block (ram,0x00014d9bcad0) */
/* WARNING: Removing unreachable block (ram,0x000165c56c02) */
/* WARNING: Removing unreachable block (ram,0x0001655691d5) */
/* WARNING: Removing unreachable block (ram,0x0001655691db) */
/* WARNING: Removing unreachable block (ram,0x0001655691e0) */
/* WARNING: Removing unreachable block (ram,0x00016535f85c) */
/* WARNING: Removing unreachable block (ram,0x00016535f867) */
/* WARNING: Removing unreachable block (ram,0x00016535f8da) */
/* WARNING: Removing unreachable block (ram,0x00016535f8e0) */
/* WARNING: Removing unreachable block (ram,0x00016535f96e) */
/* WARNING: Removing unreachable block (ram,0x00016535f9da) */
/* WARNING: Removing unreachable block (ram,0x00016535f9f2) */
/* WARNING: Removing unreachable block (ram,0x00016535fa37) */
/* WARNING: Removing unreachable block (ram,0x000156f1d892) */
/* WARNING: Removing unreachable block (ram,0x000156f1d91b) */
/* WARNING: Removing unreachable block (ram,0x000161783fd5) */
/* WARNING: Removing unreachable block (ram,0x00016178404b) */
/* WARNING: Removing unreachable block (ram,0x000161784051) */
/* WARNING: Removing unreachable block (ram,0x00016178405c) */
/* WARNING: Removing unreachable block (ram,0x0001646c5955) */
/* WARNING: Removing unreachable block (ram,0x00016670a864) */
/* WARNING: Removing unreachable block (ram,0x0001646c59da) */
/* WARNING: Removing unreachable block (ram,0x0001646c59e0) */
/* WARNING: Removing unreachable block (ram,0x0001646c59e5) */
/* WARNING: Removing unreachable block (ram,0x00016556909f) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0bf8) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0d15) */
/* WARNING: Removing unreachable block (ram,0x000161d2d347) */
/* WARNING: Removing unreachable block (ram,0x000161d2d3ec) */
/* WARNING: Removing unreachable block (ram,0x000161d2d3f2) */
/* WARNING: Removing unreachable block (ram,0x00016663985a) */
/* WARNING: Removing unreachable block (ram,0x0001563be560) */
/* WARNING: Removing unreachable block (ram,0x0001563be56b) */
/* WARNING: Removing unreachable block (ram,0x0001563be57e) */
/* WARNING: Removing unreachable block (ram,0x0001563be566) */
/* WARNING: Removing unreachable block (ram,0x0001646c5a6d) */
/* WARNING: Removing unreachable block (ram,0x0001646c5a79) */
/* WARNING: Removing unreachable block (ram,0x0001646c5a7e) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b05) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b0a) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b10) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b15) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b98) */
/* WARNING: Removing unreachable block (ram,0x00014da92c3b) */
/* WARNING: Removing unreachable block (ram,0x0001646c5b9e) */
/* WARNING: Removing unreachable block (ram,0x0001646c5c46) */
/* WARNING: Removing unreachable block (ram,0x0001646c5c4c) */
/* WARNING: Removing unreachable block (ram,0x0001646c5cd9) */
/* WARNING: Removing unreachable block (ram,0x0001646c5ce4) */
/* WARNING: Removing unreachable block (ram,0x0001646c5cf0) */
/* WARNING: Removing unreachable block (ram,0x000160e5c4b2) */
/* WARNING: Removing unreachable block (ram,0x0001563be452) */
/* WARNING: Removing unreachable block (ram,0x0001563be4d9) */
/* WARNING: Removing unreachable block (ram,0x000156d56d08) */
/* WARNING: Removing unreachable block (ram,0x0001563be4df) */
/* WARNING: Removing unreachable block (ram,0x0001563be555) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca1bd) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca1c3) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca252) */
/* WARNING: Removing unreachable block (ram,0x00015b8ca258) */
/* WARNING: Removing unreachable block (ram,0x000156717230) */
/* WARNING: Removing unreachable block (ram,0x00015736a4c8) */
/* WARNING: Removing unreachable block (ram,0x000156f1d916) */
/* WARNING: Removing unreachable block (ram,0x00016535f801) */
/* WARNING: Removing unreachable block (ram,0x00015b230b0d) */
/* WARNING: Removing unreachable block (ram,0x00016535f862) */
/* WARNING: Removing unreachable block (ram,0x00014dcd4f6f) */
/* WARNING: Removing unreachable block (ram,0x00015b230ae4) */

undefined8 FUN_14dcd4e33(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong unaff_RDI;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
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
  byte bVar23;
  ulonglong uStack_18;
  ushort auStack_c [2];
  ulonglong uStack_8;
  
  puVar2 = (ulonglong *)(&stack0x00000000 + unaff_RSI);
  *(undefined4 *)puVar2 = 0xd804c6c5;
  ((ushort *)((longlong)puVar2 + 4))[0] = 0xffff;
  ((ushort *)((longlong)puVar2 + 4))[1] = 0xffff;
  uVar7 = *(ulonglong *)(unaff_RDI + *puVar2 + 0x27fb38d3);
  *puVar2 = (param_1 - (uVar7 | param_1)) + uVar7;
  uVar5 = *puVar2;
  uVar10 = -~*(ulonglong *)(unaff_RDI + -0x48) - 1;
  *puVar2 = 0x14dcd4ed5;
  uVar5 = FUN_160cde475(param_1,uVar7 + param_1 + uVar5 * -2);
  puVar2[1] = param_4;
  uVar7 = puVar2[1];
  uVar9 = *(ulonglong *)(unaff_R12 + -0x90) ^ uVar5;
  puVar2[1] = uVar7;
  *puVar2 = uVar7;
  lVar1 = *(longlong *)(unaff_R12 + -0x68);
  puVar2[-1] = in_R11;
  puVar2[1] = 0;
  uVar7 = puVar2[1];
  puVar2[1] = puVar2[1] + lVar1;
  puVar2[-1] = param_3;
  if (uVar7 < (ulonglong)-lVar1) {
    *puVar2 = *(ulonglong *)(unaff_R12 + -8);
    puVar2[-1] = uVar9;
    puVar2[-2] = uVar9;
    uVar7 = *(ulonglong *)(unaff_R12 + -0x98);
    puVar2[-3] = unaff_R14;
    puVar2[-1] = uVar7;
    puVar2[-2] = uVar5;
    puVar2[-3] = uVar10 + param_1 + (uVar10 & param_1) * -2;
    lVar1 = *(longlong *)(unaff_R12 + -0xa0);
    uVar6 = puVar2[-3];
    puVar2[-3] = (ulonglong)FUN_16535f7c6;
    uVar7 = FUN_1668a8698();
    puVar2[-2] = *(undefined8 *)(lVar1 + -0x60);
    uVar9 = puVar2[-2] ^ uVar7;
    puVar2[-2] = uVar7;
    puVar2[-3] = uVar6;
    uVar5 = puVar2[-2];
    uVar7 = *(ulonglong *)(lVar1 + -0x30);
    puVar2[-2] = puVar2[7];
    ((ushort *)((longlong)puVar2 + -0xc))[0] = 0;
    ((ushort *)((longlong)puVar2 + -0xc))[1] = 0;
    *(int *)(puVar2 + -2) = (int)puVar2[-2];
    if ((int)puVar2[-2] < 0) {
      ((ushort *)((longlong)puVar2 + -0xc))[0] = 0xffff;
      ((ushort *)((longlong)puVar2 + -0xc))[1] = 0xffff;
    }
    puVar2[-2] = uVar5;
    *(undefined4 *)(puVar2 + -2) = 0x8b4893a8;
    ((ushort *)((longlong)puVar2 + -0xc))[0] = 0xffff;
    ((ushort *)((longlong)puVar2 + -0xc))[1] = 0xffff;
    uVar4 = puVar2[-2];
    uVar10 = *(ulonglong *)(lVar1 + (0x74b76bd7 - ~uVar4));
    uVar8 = uVar10 | uVar5;
    puVar2[-2] = 0x15b230a57;
    FUN_14db40960((int)(0x74b76bd7 - ~uVar4) >> 3,uVar8,~(uVar10 & uVar5 | ~uVar8),
                  ~((~uVar5 | uVar7) & (~uVar7 | uVar5)));
    *(ushort *)puVar2 = (ushort)*puVar2 & 0xfeff;
    uVar7 = *puVar2;
    bVar19 = (uVar7 & 0x4000) != 0;
    bVar18 = (uVar7 & 0x800) != 0;
    bVar17 = (uVar7 & 0x200) != 0;
    bVar16 = (uVar7 & 0x100) != 0;
    bVar15 = (uVar7 & 0x80) != 0;
    bVar14 = (uVar7 & 0x40) != 0;
    bVar13 = (uVar7 & 0x10) != 0;
    bVar12 = (uVar7 & 4) != 0;
    bVar11 = (uVar7 & 1) != 0;
    bVar23 = (uVar7 & 0x200000) != 0;
    bVar20 = (uVar7 & 0x40000) != 0;
    bVar22 = 0;
    bVar21 = 0;
    puVar2 = (ulonglong *)puVar2[1];
    pcVar3 = (code *)swi(0x2e);
    uVar6 = (*pcVar3)();
    *puVar2 = uVar9;
    puVar2[-1] = uVar9;
    puVar2[-2] = uVar6;
    *(undefined4 *)(puVar2 + -2) = 0x116df881;
    *(undefined4 *)((longlong)puVar2 + -0xc) = 0;
    lVar1 = puVar2[-2];
    puVar2[-2] = (ulonglong)(bVar19 & 1) * 0x4000 | (ulonglong)(bVar18 & 1) * 0x800 |
                 (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)(bVar17 & 1) * 0x200 |
                 (ulonglong)(bVar16 & 1) * 0x100 | (ulonglong)(bVar15 & 1) * 0x80 |
                 (ulonglong)(bVar14 & 1) * 0x40 | (ulonglong)(bVar13 & 1) * 0x10 |
                 (ulonglong)(bVar12 & 1) * 4 | (ulonglong)(bVar11 & 1) |
                 (ulonglong)(bVar23 & 1) * 0x200000 | (ulonglong)(bVar22 & 1) * 0x100000 |
                 (ulonglong)(bVar21 & 1) * 0x80000 | (ulonglong)(bVar20 & 1) * 0x40000;
    puVar2[-3] = lVar1;
    puVar2[-3] = puVar2[-3] + -0xe89c291;
    puVar2[-2] = uVar8;
    *puVar2 = lVar1 - 0xe89c291;
    uVar6 = FUN_14d85d504();
    return uVar6;
  }
  uVar6 = FUN_16535f73b();
  return uVar6;
}



// FUNCTION 14dcd513d FUN_14dcd513d body=142 status=ok
// SIG undefined FUN_14dcd513d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd51a4) */

longlong FUN_14dcd513d(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return -1 - (*(ulonglong *)(unaff_RSI + -0x40) & unaff_RBP);
}



// FUNCTION 14dcd536c FUN_14dcd536c body=160 status=ok
// SIG undefined FUN_14dcd536c(void)

void FUN_14dcd536c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_5739 [22305];
  
  FUN_16192bdc8(FUN_16192bdc8,param_2,auStack_5739);
  return;
}



// FUNCTION 14dcd5410 FUN_14dcd5410 body=77 status=ok
// SIG undefined FUN_14dcd5410(void)

undefined8 FUN_14dcd5410(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcd5aa0 FUN_14dcd5aa0 body=312 status=ok
// SIG undefined FUN_14dcd5aa0(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd5b16) */

void FUN_14dcd5aa0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  (*(code *)0x1577f8789)(0x1577f8789,param_2,param_3 << 0xf | param_3 >> 0x11);
  return;
}



// FUNCTION 14dcd5b98 FUN_14dcd5b98 body=392 status=ok
// SIG undefined FUN_14dcd5b98(void)

/* WARNING: Instruction at (ram,0x000160f4a764) overlaps instruction at (ram,0x000160f4a760)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016504afb1) */
/* WARNING: Removing unreachable block (ram,0x00016504afbc) */
/* WARNING: Removing unreachable block (ram,0x0001655771b7) */
/* WARNING: Removing unreachable block (ram,0x000156d15659) */
/* WARNING: Removing unreachable block (ram,0x000165577236) */
/* WARNING: Removing unreachable block (ram,0x00016557723c) */
/* WARNING: Removing unreachable block (ram,0x000165577241) */
/* WARNING: Removing unreachable block (ram,0x000166b22d9a) */
/* WARNING: Removing unreachable block (ram,0x000166b22dd3) */
/* WARNING: Removing unreachable block (ram,0x000166b22dd9) */
/* WARNING: Removing unreachable block (ram,0x000166b22ee1) */
/* WARNING: Removing unreachable block (ram,0x000166b22ee4) */
/* WARNING: Removing unreachable block (ram,0x000166b22f1a) */
/* WARNING: Removing unreachable block (ram,0x000166b22f1f) */
/* WARNING: Removing unreachable block (ram,0x000166b22f25) */
/* WARNING: Removing unreachable block (ram,0x000166b22f30) */
/* WARNING: Removing unreachable block (ram,0x00016530a415) */
/* WARNING: Removing unreachable block (ram,0x00016530a37b) */
/* WARNING: Removing unreachable block (ram,0x00016530a381) */
/* WARNING: Removing unreachable block (ram,0x00016530a40f) */
/* WARNING: Removing unreachable block (ram,0x0001628789aa) */
/* WARNING: Removing unreachable block (ram,0x00016530a40a) */
/* WARNING: Removing unreachable block (ram,0x0001655771ac) */
/* WARNING: Removing unreachable block (ram,0x0001648ad1d4) */
/* WARNING: Removing unreachable block (ram,0x0001648ad1ce) */
/* WARNING: Removing unreachable block (ram,0x0001648ad1d9) */
/* WARNING: Removing unreachable block (ram,0x0001649e3146) */
/* WARNING: Removing unreachable block (ram,0x0001649e31a9) */
/* WARNING: Removing unreachable block (ram,0x0001649e31af) */
/* WARNING: Removing unreachable block (ram,0x0001649e31ce) */
/* WARNING: Removing unreachable block (ram,0x0001649e31d3) */
/* WARNING: Removing unreachable block (ram,0x0001649e31dc) */
/* WARNING: Removing unreachable block (ram,0x0001649e31e1) */
/* WARNING: Removing unreachable block (ram,0x0001649e31f0) */
/* WARNING: Removing unreachable block (ram,0x0001649e31eb) */
/* WARNING: Removing unreachable block (ram,0x0001649e31fe) */
/* WARNING: Removing unreachable block (ram,0x0001648ad1a9) */
/* WARNING: Removing unreachable block (ram,0x000160c99395) */
/* WARNING: Removing unreachable block (ram,0x000160c993b4) */
/* WARNING: Removing unreachable block (ram,0x000160c993af) */
/* WARNING: Removing unreachable block (ram,0x000160c993c8) */
/* WARNING: Removing unreachable block (ram,0x00016504afb7) */
/* WARNING: Removing unreachable block (ram,0x000156ba2983) */
/* WARNING: Removing unreachable block (ram,0x0001649e2fa2) */
/* WARNING: Removing unreachable block (ram,0x0001649e2f5b) */
/* WARNING: Removing unreachable block (ram,0x0001649e2fa6) */
/* WARNING: Removing unreachable block (ram,0x0001649e3047) */
/* WARNING: Removing unreachable block (ram,0x0001649e3128) */
/* WARNING: Removing unreachable block (ram,0x0001649e312d) */
/* WARNING: Removing unreachable block (ram,0x0001649e3133) */
/* WARNING: Removing unreachable block (ram,0x0001661c1ab2) */
/* WARNING: Removing unreachable block (ram,0x0001661c1ab5) */
/* WARNING: Removing unreachable block (ram,0x000162ee023a) */
/* WARNING: Removing unreachable block (ram,0x000160f4a75d) */
/* WARNING: Removing unreachable block (ram,0x000160f4a7c6) */
/* WARNING: Removing unreachable block (ram,0x00014dcd5cc1) */
/* WARNING: Removing unreachable block (ram,0x00014dcd5c2c) */
/* WARNING: Removing unreachable block (ram,0x000160f4a676) */
/* WARNING: Removing unreachable block (ram,0x000160f4a7ba) */
/* WARNING: Removing unreachable block (ram,0x000160f4a7b5) */
/* WARNING: Removing unreachable block (ram,0x000156e39911) */
/* WARNING: Removing unreachable block (ram,0x00014dcd5cb6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcd5b98(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_RAX;
  longlong unaff_RDI;
  ulonglong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar4 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ in_R11;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(ulonglong *)(uVar2 - 0x18) = uVar3 ^ param_1;
  *(undefined8 *)(uVar2 - 8) = 0;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R15;
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 0x1662abb1a;
  *(ulonglong *)(uVar2 - 0x18) = ~((~param_1 | uVar4) & (0xffffffffffffffff - uVar4 | param_1));
  *(undefined8 *)(uVar2 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R13;
  *(code **)(uVar2 - 0x10) = thunk_FUN_15b642ca5;
  return in_RAX;
}



// FUNCTION 14dcd5cc1 FUN_14dcd5cc1 body=138 status=ok
// SIG undefined FUN_14dcd5cc1(void)

void FUN_14dcd5cc1(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_165eba5e2(param_1,unaff_retaddr,FUN_165eba5e2);
  return;
}



// FUNCTION 14dcd5dda FUN_14dcd5dda body=198 status=ok
// SIG undefined FUN_14dcd5dda(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd5e76) */

void FUN_14dcd5dda(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (~(*(ulonglong *)(unaff_R12 + -0x50) & in_RAX) + in_RAX == ~*(ulonglong *)(unaff_R12 + -0x50))
  {
    FUN_1647a7325();
    return;
  }
  FUN_1647a7325();
  return;
}



// FUNCTION 14dcd6278 FUN_14dcd6278 body=158 status=ok
// SIG undefined FUN_14dcd6278(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd6310) */

ulonglong FUN_14dcd6278(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  return ~((in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x98)) &
          (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x98) | in_RAX));
}



// FUNCTION 14dcd63a4 FUN_14dcd63a4 body=142 status=ok
// SIG undefined FUN_14dcd63a4(void)

void FUN_14dcd63a4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1649281dd(~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x40)) &
                 (~*(ulonglong *)(unaff_R12 + -0x40) | in_RAX)),FUN_1649281dd,
                *(undefined8 *)(unaff_R12 + -0x80),*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dcd658b FUN_14dcd658b body=194 status=ok
// SIG undefined FUN_14dcd658b(void)

/* WARNING: Removing unreachable block (ram,0x00014e0d71dd) */
/* WARNING: Removing unreachable block (ram,0x00014e0d71e3) */
/* WARNING: Removing unreachable block (ram,0x00014dcd65c4) */
/* WARNING: Removing unreachable block (ram,0x00014dcd6628) */

void FUN_14dcd658b(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  if ((longlong)
      (~(*(ulonglong *)(unaff_RDI + -0x88) & unaff_retaddr) &
      (*(ulonglong *)(unaff_RDI + -0x88) | unaff_retaddr)) < 0) {
    FUN_14e0d70bb();
    return;
  }
  FUN_16142f310();
  (*(code *)0x14d86cdfc)();
  return;
}



// FUNCTION 14dcd68d2 FUN_14dcd68d2 body=85 status=ok
// SIG undefined FUN_14dcd68d2(void)

void FUN_14dcd68d2(void)

{
  return;
}



// FUNCTION 14dcd6ab5 FUN_14dcd6ab5 body=148 status=ok
// SIG undefined FUN_14dcd6ab5(void)

void FUN_14dcd6ab5(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  ulonglong local_res20;
  
  *param_1 = ~*param_1;
  *param_1 = *param_1 | 0x100;
  *param_1 = -*param_1;
  *param_1 = *param_1 - 1;
  LOCK();
  bVar3 = (byte)local_res18;
  bVar4 = bVar3 < DAT_14d7be245;
  bVar5 = SBORROW1(bVar3,DAT_14d7be245);
  cVar2 = bVar3 - DAT_14d7be245;
  if (cVar2 == '\0') {
    DAT_14d7be245 = (byte)uStackX_10;
  }
  else {
    local_res18 = CONCAT71((int7)((ulonglong)local_res18 >> 8),DAT_14d7be245);
  }
  UNLOCK();
  *(undefined8 *)(param_5 + -0x10) = unaff_RDI;
  *(undefined8 *)(param_5 + -8) = in_R10;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(undefined8 *)(param_5 + -0x18) = local_res18;
  *(undefined4 *)(param_5 + -0x18) = 0xf013686;
  *(undefined8 *)(param_5 + -0x20) = unaff_R15;
  *(undefined4 *)(param_5 + -0x28) = 0;
  *(undefined4 *)(param_5 + -0x14) = *(undefined4 *)(param_5 + -0x28);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((local_res20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = uVar1;
  *(undefined8 *)(param_5 + -0x28) = unaff_RSI;
  (*(code *)&LAB_16562f0ae)(uStackX_10,param_2,local_res8);
  return;
}



// FUNCTION 14dcd6d09 FUN_14dcd6d09 body=155 status=ok
// SIG undefined FUN_14dcd6d09(void)

void FUN_14dcd6d09(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x16187091d;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(code **)(local_res10 + -0x18) = FUN_14dcd6da4;
  FUN_1618708d5(param_1,uVar1);
  return;
}



// FUNCTION 14dcd6da4 FUN_14dcd6da4 body=162 status=ok
// SIG undefined FUN_14dcd6da4(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd6e37) */

void FUN_14dcd6da4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R12 + -8) + in_RAX + (*(ulonglong *)(unaff_R12 + -8) & in_RAX) * -2
           )) {
    FUN_15b417b0d();
    return;
  }
  FUN_15b417b0d();
  return;
}



// FUNCTION 14dcd6f4f FUN_14dcd6f4f body=566 status=ok
// SIG undefined FUN_14dcd6f4f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcd6fb9) */
/* WARNING: Removing unreachable block (ram,0x00014dcd6fc4) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7045) */
/* WARNING: Removing unreachable block (ram,0x00014dcd7051) */
/* WARNING: Removing unreachable block (ram,0x000165a541c1) */
/* WARNING: Removing unreachable block (ram,0x000165a541fd) */
/* WARNING: Removing unreachable block (ram,0x000165a54205) */
/* WARNING: Removing unreachable block (ram,0x000165a5424b) */
/* WARNING: Removing unreachable block (ram,0x000165a54251) */
/* WARNING: Removing unreachable block (ram,0x000165a54256) */
/* WARNING: Removing unreachable block (ram,0x000165a54309) */
/* WARNING: Removing unreachable block (ram,0x000165a5430c) */
/* WARNING: Removing unreachable block (ram,0x000165a5354c) */
/* WARNING: Removing unreachable block (ram,0x000162a4ad05) */
/* WARNING: Removing unreachable block (ram,0x000162a4ad9b) */
/* WARNING: Removing unreachable block (ram,0x000162a4ada0) */
/* WARNING: Removing unreachable block (ram,0x000162a4ada6) */
/* WARNING: Removing unreachable block (ram,0x000162a4adab) */
/* WARNING: Removing unreachable block (ram,0x00016642fb1a) */
/* WARNING: Removing unreachable block (ram,0x00014dcd6f9a) */
/* WARNING: Removing unreachable block (ram,0x00016642fad3) */
/* WARNING: Removing unreachable block (ram,0x000162d9997c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd6fbf) */
/* WARNING: Removing unreachable block (ram,0x00014d8dba84) */
/* WARNING: Removing unreachable block (ram,0x00014db091ba) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcd6f4f(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort in_R10W;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  ulonglong local_res18;
  
  param_2 = param_2 & 7;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = thunk_FUN_1648b0a56();
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = thunk_FUN_15b10b812();
      return uVar1;
    }
    if (param_2 == 3) {
      return in_stack_00000010;
    }
    if (param_2 == 4) {
      uVar1 = FUN_16105993a();
      return uVar1;
    }
    if (param_2 == 5) {
      FUN_162d9995e();
      uVar1 = FUN_15b4ddb2c(unaff_retaddr,~local_res18 | *(ulonglong *)(unaff_R12 + -0x40),
                            (local_res18 - (*(ulonglong *)(unaff_R12 + -0x60) | local_res18)) +
                            *(ulonglong *)(unaff_R12 + -0x60),FUN_15b4ddb2c);
      return uVar1;
    }
    if (param_2 == 6) {
      uVar1 = FUN_161aad3bf();
      return uVar1;
    }
    if (param_2 == 7) {
      if (!CARRY2(in_R10W,(ushort)in_stack_00000010)) {
        uVar1 = FUN_156fddceb();
        return uVar1;
      }
      uVar1 = FUN_16263e817(unaff_retaddr,0,param_3);
      return uVar1;
    }
  }
  uVar1 = FUN_14e22e49d(unaff_retaddr,FUN_14e22e49d);
  return uVar1;
}


