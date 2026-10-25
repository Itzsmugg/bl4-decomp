// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d99fa54 FUN_14d99fa54 body=170 status=ok
// SIG undefined FUN_14d99fa54(void)

void FUN_14d99fa54(void)

{
  FUN_15b2c9f39();
  return;
}



// FUNCTION 14d99fc48 FUN_14d99fc48 body=147 status=ok
// SIG undefined FUN_14d99fc48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d99fc48(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_160dd7c81(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78),
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) + in_RAX + 1 |
                 ~(*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),param_2 - param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d99fcdb thunk_FUN_14d99fce1 body=5 status=ok
// SIG undefined thunk_FUN_14d99fce1(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14d99fce1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d99fce1 FUN_14d99fce1 body=40 status=ok
// SIG undefined FUN_14d99fce1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d99fce1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d99fd82 FUN_14d99fd82 body=6 status=ok
// SIG undefined FUN_14d99fd82(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c444b) overlaps instruction at (ram,0x00014d7c4448)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d99fd82(ulonglong param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong in_RAX;
  uint uVar8;
  uint *puVar9;
  longlong unaff_RBX;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *unaff_RBP;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  char in_ZF;
  float10 in_ST0;
  undefined4 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  char cVar10;
  char cVar11;
  
  plVar12 = (longlong *)auStackX_8;
  do {
    if (param_1 == 1 || in_ZF != '\0') {
      plVar13 = (longlong *)(*plVar12 + -8);
      *(undefined4 **)(*plVar12 + -8) = unaff_retaddr;
      plVar14 = unaff_RBP;
code_r0x00014d7c4452:
      *(longlong **)((longlong)plVar13 + -8) = plVar14;
      *(ulonglong *)(((ulonglong)((longlong)plVar13 + -8) & 0xffffffff) - 8) = in_RAX | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = in(0x57);
    iVar7 = (int)CONCAT71((int7)(in_RAX >> 8),uVar6);
    plVar12[-1] = (longlong)unaff_retaddr;
    unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xfd);
    uVar5 = plVar12[-1];
    out(param_2,iVar7 + -0x3c8c459d);
    if (0x3c8c459c < iVar7) {
      return;
    }
    unaff_retaddr = (undefined4 *)(ulonglong)((uint)unaff_RBX * 0x59f7e3ff);
    in(param_2);
    plVar14 = (longlong *)*unaff_RBP;
    plVar12 = unaff_RBP + 2;
    plVar13 = unaff_RBP + 2;
    uVar2 = in((short)unaff_RBP[1]);
    *unaff_RDI = uVar2;
    in_RAX = 0x8c77021b;
    cVar11 = (char)((ulonglong)uVar5 >> 8);
    cVar10 = -cVar11;
    puVar9 = (uint *)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),CONCAT11(cVar10,(char)uVar5));
    if (cVar10 != '\0' && cVar11 < '\x01') {
      puVar1 = (uint *)(unaff_RBX + 0x2fa21d24);
      *puVar1 = *puVar1 ^ (uint)unaff_RBX;
      uVar8 = *puVar1;
      uVar3 = *(uint *)(in_R11 & 0xffffffff);
      in_RAX = (ulonglong)uVar3;
      *(short *)((longlong)unaff_RDI + 0x71) = (short)ROUND(in_ST0);
      if ((POPCOUNT(uVar8 & 0xff) & 1U) != 0) {
        bRam75472f93eb93432f = (byte)uVar3 & 0x1d;
        unaff_RDI[1] = *unaff_retaddr;
        pcVar4 = (code *)swi(3);
        (*pcVar4)(puVar9,0x301a0c95);
        return;
      }
      goto code_r0x00014d7c4452;
    }
    uVar8 = (uint)puVar9 | *puVar9;
    param_1 = (ulonglong)uVar8;
    in_ZF = uVar8 == 0;
    param_2 = CONCAT11(*(undefined1 *)((longlong)plVar14 + 0x6c),0x95);
    unaff_RBP = plVar14;
    unaff_RDI = unaff_RDI + 1;
  } while( true );
}



// FUNCTION 14d99fe13 FUN_14d99fe13 body=277 status=ok
// SIG undefined FUN_14d99fe13(void)

void FUN_14d99fe13(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165503d9e(param_1,*(ulonglong *)(unaff_RDI + -0x70) | param_1,
                *(ulonglong *)(unaff_RDI + -0x70),
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  FUN_16179e425();
  return;
}



// FUNCTION 14d9a0115 FUN_14d9a0115 body=448 status=ok
// SIG undefined FUN_14d9a0115(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a01c0) */

void FUN_14d9a0115(longlong param_1)

{
  ulonglong unaff_RBX;
  
  (*(code *)0x162474e88)
            (param_1,*(undefined8 *)(param_1 + -0x78),
             ~((unaff_RBX ^ 0xffffffffffffffff | *(ulonglong *)(param_1 + -0x88)) &
              (~*(ulonglong *)(param_1 + -0x88) | unaff_RBX)));
  return;
}



// FUNCTION 14d9a0577 FUN_14d9a0577 body=110 status=ok
// SIG undefined FUN_14d9a0577(void)

void FUN_14d9a0577(void)

{
  byte in_ZF;
  
  if ((in_ZF & 1) != 0) {
    return;
  }
  FUN_1629256d1();
  return;
}



// FUNCTION 14d9a079c FUN_14d9a079c body=465 status=ok
// SIG undefined FUN_14d9a079c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a08cc) */
/* WARNING: Removing unreachable block (ram,0x00014d9a08d2) */
/* WARNING: Removing unreachable block (ram,0x0001568cf16d) */
/* WARNING: Removing unreachable block (ram,0x0001568cf20a) */
/* WARNING: Removing unreachable block (ram,0x0001568cf216) */
/* WARNING: Removing unreachable block (ram,0x0001568cf21b) */
/* WARNING: Removing unreachable block (ram,0x000157835891) */

void FUN_14d9a079c(void)

{
  FUN_1657477d4();
  FUN_1568cf16d();
  return;
}



// FUNCTION 14d9a0a26 FUN_14d9a0a26 body=307 status=ok
// SIG undefined FUN_14d9a0a26(void)

void FUN_14d9a0a26(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * -2;
  FUN_1662d1fb8();
  FUN_156405256(*(undefined8 *)(unaff_R13 + -0x78),0xffffffffffffff88,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),uVar1 & 0x1662d1fb8);
  return;
}



// FUNCTION 14d9a0bd7 FUN_14d9a0bd7 body=163 status=ok
// SIG undefined FUN_14d9a0bd7(void)

void FUN_14d9a0bd7(void)

{
  return;
}



// FUNCTION 14d9a0d29 FUN_14d9a0d29 body=311 status=ok
// SIG undefined FUN_14d9a0d29(void)

/* WARNING: Removing unreachable block (ram,0x0001648540c4) */
/* WARNING: Removing unreachable block (ram,0x0001648540ca) */
/* WARNING: Removing unreachable block (ram,0x000164853f9b) */
/* WARNING: Removing unreachable block (ram,0x000164853fa1) */
/* WARNING: Removing unreachable block (ram,0x000164854026) */
/* WARNING: Removing unreachable block (ram,0x000164854031) */
/* WARNING: Removing unreachable block (ram,0x000164854037) */
/* WARNING: Removing unreachable block (ram,0x00015ba19b5a) */
/* WARNING: Removing unreachable block (ram,0x000166dcd9e6) */
/* WARNING: Removing unreachable block (ram,0x000166dcdd86) */
/* WARNING: Removing unreachable block (ram,0x000166dcdd8c) */
/* WARNING: Removing unreachable block (ram,0x000166dcda7d) */
/* WARNING: Removing unreachable block (ram,0x000161451fef) */
/* WARNING: Removing unreachable block (ram,0x000166dcda83) */
/* WARNING: Removing unreachable block (ram,0x000166dcdc63) */
/* WARNING: Removing unreachable block (ram,0x000166dcdc69) */
/* WARNING: Removing unreachable block (ram,0x000166dcdc6e) */
/* WARNING: Removing unreachable block (ram,0x000166dcdd02) */
/* WARNING: Removing unreachable block (ram,0x00014d99df00) */
/* WARNING: Removing unreachable block (ram,0x000166dcdd08) */
/* WARNING: Removing unreachable block (ram,0x000161a2b4e8) */
/* WARNING: Removing unreachable block (ram,0x0001568a9da8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a0dc3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a0dc9) */
/* WARNING: Removing unreachable block (ram,0x000164853f0d) */
/* WARNING: Removing unreachable block (ram,0x000164853f96) */
/* WARNING: Removing unreachable block (ram,0x000166d70ea7) */

undefined8 FUN_14d9a0d29(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  uVar1 = FUN_164853f0d();
  return uVar1;
}



// FUNCTION 14d9a0fce FUN_14d9a0fce body=182 status=ok
// SIG undefined FUN_14d9a0fce(void)

void FUN_14d9a0fce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong unaff_RSI;
  undefined8 unaff_R12;
  undefined8 in_stack_00000010;
  ulonglong local_res20;
  
  lVar3 = (unaff_RSI - (~unaff_RSI & local_res20 | unaff_RSI)) + local_res20;
  *(undefined8 *)(lVar3 + -8) = param_4;
  *(undefined8 *)(lVar3 + -0x10) = 0x14d9a104e;
  FUN_161d8fd60(in_stack_00000010,param_2);
  puVar1 = *(undefined8 **)(lVar3 + 8);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *puVar1 = 0x32148ba;
  puVar1[-1] = unaff_R12;
  puVar1[-2] = unaff_R12;
  puVar1[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14d9a1194 FUN_14d9a1194 body=15 status=ok
// SIG undefined FUN_14d9a1194(void)

void FUN_14d9a1194(void)

{
  return;
}



// FUNCTION 14d9a11a3 FUN_14d9a11a3 body=102 status=ok
// SIG undefined FUN_14d9a11a3(void)

void FUN_14d9a11a3(void)

{
  FUN_166110d34();
  return;
}



// FUNCTION 14d9a120a FUN_14d9a120a body=294 status=ok
// SIG undefined FUN_14d9a120a(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a12a6) */

void FUN_14d9a120a(void)

{
  return;
}



// FUNCTION 14d9a13ce FUN_14d9a13ce body=178 status=ok
// SIG undefined FUN_14d9a13ce(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a1480) */

void FUN_14d9a13ce(undefined8 param_1,undefined8 param_2)

{
  longlong in_R10;
  undefined8 unaff_retaddr;
  
  if (-1 < in_R10) {
    FUN_1615b5fe4(param_1,param_2,unaff_retaddr);
    return;
  }
  FUN_1615b5fe4(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9a1480 FUN_14d9a1480 body=8 status=ok
// SIG undefined FUN_14d9a1480(void)

void FUN_14d9a1480(void)

{
  return;
}



// FUNCTION 14d9a1519 FUN_14d9a1519 body=466 status=ok
// SIG undefined FUN_14d9a1519(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000157675bb5) */
/* WARNING: Removing unreachable block (ram,0x000157675bbb) */
/* WARNING: Removing unreachable block (ram,0x00014d9a15a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a15ae) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5ed8) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5ede) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5f4d) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5f58) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5f53) */
/* WARNING: Removing unreachable block (ram,0x0001622c4d6d) */
/* WARNING: Removing unreachable block (ram,0x00016513a5ef) */
/* WARNING: Removing unreachable block (ram,0x00016513a673) */
/* WARNING: Removing unreachable block (ram,0x00016513a678) */
/* WARNING: Removing unreachable block (ram,0x00016513a67e) */
/* WARNING: Removing unreachable block (ram,0x0001610cfb4d) */
/* WARNING: Removing unreachable block (ram,0x00016513a70f) */
/* WARNING: Removing unreachable block (ram,0x00016513a71b) */
/* WARNING: Removing unreachable block (ram,0x00016513a720) */
/* WARNING: Removing unreachable block (ram,0x00015b14ed45) */
/* WARNING: Removing unreachable block (ram,0x0001622c4de9) */
/* WARNING: Removing unreachable block (ram,0x0001622c4def) */
/* WARNING: Removing unreachable block (ram,0x00015b5e5e5e) */
/* WARNING: Removing unreachable block (ram,0x00015b1a1411) */
/* WARNING: Removing unreachable block (ram,0x00015b1a1417) */

void FUN_14d9a1519(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58);
  (*(code *)0x162c0f562)
            (~((~(~-in_RAX + 1) | *(ulonglong *)(unaff_R12 + -0x58)) &
              (uVar1 + in_RAX) - (uVar1 & in_RAX)));
  return;
}



// FUNCTION 14d9a164b FUN_14d9a164b body=159 status=ok
// SIG undefined FUN_14d9a164b(void)

void FUN_14d9a164b(void)

{
  return;
}



// FUNCTION 14d9a16f2 FUN_14d9a16f2 body=133 status=ok
// SIG undefined FUN_14d9a16f2(void)

void FUN_14d9a16f2(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong in_RAX;
  longlong unaff_RDI;
  
  FUN_164fac0bd(param_1,FUN_164fac0bd,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                in_RAX + (~(param_1 & ~param_4) + param_1 + 1) * -2);
  FUN_165e93f27();
  return;
}



// FUNCTION 14d9a1778 FUN_14d9a1778 body=7 status=ok
// SIG undefined FUN_14d9a1778(void)

void FUN_14d9a1778(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d9a177f FUN_14d9a177f body=139 status=ok
// SIG undefined FUN_14d9a177f(void)

void FUN_14d9a177f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 != 0x12c9db) {
    FUN_16625365c();
    return;
  }
  FUN_166253635(FUN_166253635,0x14d7be3d7,param_3,0x14d7be3d7);
  return;
}



// FUNCTION 14d9a1812 FUN_14d9a1812 body=275 status=ok
// SIG undefined FUN_14d9a1812(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a1881) */

void FUN_14d9a1812(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_RBX;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(&stack0x04d78c70 + unaff_RBX) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00015725bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9a1923 FUN_14d9a1923 body=2 status=ok
// SIG undefined FUN_14d9a1923(void)

undefined8 FUN_14d9a1923(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9a19bc FUN_14d9a19bc body=162 status=ok
// SIG undefined FUN_14d9a19bc(void)

undefined8 FUN_14d9a19bc(void)

{
  return 0x10;
}



// FUNCTION 14d9a1b17 FUN_14d9a1b17 body=148 status=ok
// SIG undefined FUN_14d9a1b17(void)

void FUN_14d9a1b17(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong in_RAX;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(ulonglong *)(param_3 + 0x18) = ~(~param_1 & ~*(ulonglong *)(param_3 + 0x18)) + in_RAX + 1;
  syscall();
  *(undefined8 *)(param_5 + -8) = local_res8;
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x18) = local_res10;
  *(undefined4 *)(param_5 + -0x18) = 0x11e13e80;
  *(undefined4 *)(param_5 + -0x14) = 0;
  thunk_FUN_16153ac4d(0x14d9a1b7f,unaff_retaddr,thunk_FUN_16153ac4d,param_4);
  return;
}



// FUNCTION 14d9a1c31 FUN_14d9a1c31 body=118 status=ok
// SIG undefined FUN_14d9a1c31(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9a1c31(longlong param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *in_RAX;
  longlong lVar3;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  
  lVar3 = param_1 + -1;
  if (lVar3 == 0) {
    lVar3 = param_1 + -2;
    if (lVar3 == 0) {
      return;
    }
    *in_RAX = *in_RAX << 1 | (char)*in_RAX < '\0';
    unaff_RDI = unaff_RDI + 4;
    unaff_RSI = unaff_RSI + 4;
  }
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI);
  if (-1 < (int)pcVar2 + -0x2072fe) {
    if ((int)pcVar2 < 0x2072fe) {
      unaff_RDI[-0x5f] = unaff_RDI[-0x5f] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar2 = *pcVar2 + *unaff_RSI;
  uVar1 = *(undefined4 *)(unaff_RSI + 1);
  *(uint *)(lVar3 + -0x2c) = *(uint *)(lVar3 + -0x2c) >> ((byte)lVar3 & 0x1f);
  *unaff_RDI = (char)uVar1;
  *(char *)(unaff_RBP + 10) = *(char *)(unaff_RBP + 10) + (char)((uint)uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9a1d95 FUN_14d9a1d95 body=156 status=ok
// SIG undefined FUN_14d9a1d95(void)

void FUN_14d9a1d95(void)

{
  return;
}



// FUNCTION 14d9a1e32 FUN_14d9a1e32 body=159 status=ok
// SIG undefined FUN_14d9a1e32(void)

void FUN_14d9a1e32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160d4882c(param_1,param_2,param_3,FUN_160d4882c);
  return;
}



// FUNCTION 14d9a1ed1 FUN_14d9a1ed1 body=159 status=ok
// SIG undefined FUN_14d9a1ed1(void)

/* WARNING: Removing unreachable block (ram,0x000164fddde0) */
/* WARNING: Removing unreachable block (ram,0x000160b57587) */
/* WARNING: Removing unreachable block (ram,0x00014d9a1f71) */

void FUN_14d9a1ed1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  if (*(longlong *)(unaff_R12 + -0x80) < 0) {
    (*(code *)&LAB_161012782)(param_1,param_2,unaff_retaddr,&LAB_161012782);
    return;
  }
  FUN_164fddd3a();
  return;
}



// FUNCTION 14d9a1f71 FUN_14d9a1f71 body=84 status=ok
// SIG undefined FUN_14d9a1f71(void)

void FUN_14d9a1f71(void)

{
  return;
}



// FUNCTION 14d9a200b FUN_14d9a200b body=156 status=ok
// SIG undefined FUN_14d9a200b(void)

/* WARNING: Removing unreachable block (ram,0x000165c9f273) */
/* WARNING: Removing unreachable block (ram,0x000165c9f26d) */
/* WARNING: Removing unreachable block (ram,0x000165c9f278) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2f8) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2fe) */
/* WARNING: Removing unreachable block (ram,0x0001625670be) */
/* WARNING: Removing unreachable block (ram,0x000162567190) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16f) */
/* WARNING: Removing unreachable block (ram,0x000165c9f175) */
/* WARNING: Removing unreachable block (ram,0x000165c9f268) */
/* WARNING: Removing unreachable block (ram,0x000162f1a0ad) */
/* WARNING: Removing unreachable block (ram,0x00014ddeb533) */
/* WARNING: Removing unreachable block (ram,0x00015b6720ad) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b8) */
/* WARNING: Removing unreachable block (ram,0x000166d19674) */
/* WARNING: Removing unreachable block (ram,0x00015b672079) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d1) */
/* WARNING: Removing unreachable block (ram,0x0001646f11dc) */
/* WARNING: Removing unreachable block (ram,0x0001663bb941) */
/* WARNING: Removing unreachable block (ram,0x0001646f1394) */
/* WARNING: Removing unreachable block (ram,0x0001646f139a) */
/* WARNING: Removing unreachable block (ram,0x0001646f139f) */
/* WARNING: Removing unreachable block (ram,0x0001646f1419) */
/* WARNING: Removing unreachable block (ram,0x0001646f141e) */
/* WARNING: Removing unreachable block (ram,0x00014e13b421) */
/* WARNING: Removing unreachable block (ram,0x0001646f1424) */
/* WARNING: Removing unreachable block (ram,0x0001622b1c66) */
/* WARNING: Removing unreachable block (ram,0x0001622b1ced) */
/* WARNING: Removing unreachable block (ram,0x0001622b1cf3) */
/* WARNING: Removing unreachable block (ram,0x0001657c54e0) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f4) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f9) */
/* WARNING: Removing unreachable block (ram,0x0001657c55ff) */
/* WARNING: Removing unreachable block (ram,0x00015b671f88) */
/* WARNING: Removing unreachable block (ram,0x00015b67207d) */
/* WARNING: Removing unreachable block (ram,0x0001629a2449) */
/* WARNING: Removing unreachable block (ram,0x0001629a24e7) */
/* WARNING: Removing unreachable block (ram,0x0001629a24ec) */
/* WARNING: Removing unreachable block (ram,0x0001629a24f2) */
/* WARNING: Removing unreachable block (ram,0x0001646f14ca) */
/* WARNING: Removing unreachable block (ram,0x0001646f14d0) */
/* WARNING: Removing unreachable block (ram,0x0001646f1558) */
/* WARNING: Removing unreachable block (ram,0x0001646f155e) */
/* WARNING: Removing unreachable block (ram,0x00014e0416c9) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d7) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0eb) */
/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */
/* WARNING: Removing unreachable block (ram,0x000161480de3) */

undefined8 FUN_14d9a200b(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 in_R9;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  lVar4 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 + uVar3 * -2;
  if ((lVar4 >= 0) && (lVar4 < 0)) {
    if (-1 < (longlong)(2 - (~in_R11 + 2))) {
      uVar1 = FUN_14d7a6d2b(uVar2,uVar3 * 2,unaff_retaddr,in_R9);
      return uVar1;
    }
    uVar1 = FUN_15b2d2b0a();
    return uVar1;
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0x68) & unaff_R15;
  uVar3 = uVar3 << 1 | uVar3 >> 0x3f;
  if (*(ulonglong *)(unaff_R13 + -0x68) + unaff_R15 < (-2 - (uVar3 | 0xfffffffffffffffe)) + uVar3) {
    uVar1 = FUN_1646f113c();
    return uVar1;
  }
  if (*(longlong *)(unaff_R13 + -0x98) < 0) {
    uVar1 = FUN_165e23d6b(uVar2,lVar4);
    return uVar1;
  }
  uVar1 = FUN_165e23d6b(uVar2,lVar4);
  return uVar1;
}



// FUNCTION 14d9a20a8 FUN_14d9a20a8 body=181 status=ok
// SIG undefined FUN_14d9a20a8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */

undefined8
FUN_14d9a20a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong in_R11;
  undefined8 unaff_retaddr;
  
  if (-1 < (longlong)(2 - (~in_R11 + 2))) {
    uVar1 = FUN_14d7a6d2b(param_1,param_2,unaff_retaddr,param_4);
    return uVar1;
  }
  uVar1 = FUN_15b2d2b0a();
  return uVar1;
}



// FUNCTION 14d9a21ca FUN_14d9a21ca body=149 status=ok
// SIG undefined FUN_14d9a21ca(void)

void FUN_14d9a21ca(int *param_1)

{
  undefined8 in_stack_00000008;
  
  *param_1 = 0;
  *param_1 = *param_1 + -0x26e65a5d;
  *param_1 = *param_1 + 0x64c05c13;
  FUN_165bf58e7(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d9a22cb FUN_14d9a22cb body=159 status=ok
// SIG undefined FUN_14d9a22cb(void)

void FUN_14d9a22cb(ulonglong param_1)

{
  undefined4 local_res8 [8];
  
  *(undefined4 *)
   ((longlong)local_res8 + ~(~(param_1 & 0xffffffffe1337c7e) & (param_1 | 0xffffffffe1337c7e))) =
       0xffffffff;
  return;
}



// FUNCTION 14d9a236a FUN_14d9a236a body=138 status=ok
// SIG undefined FUN_14d9a236a(void)

void FUN_14d9a236a(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  
  FUN_1613f0917(param_1,FUN_1613f0917,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                (*(ulonglong *)(unaff_RDI + param_3) & param_1 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RDI + param_3) | param_1));
  return;
}



// FUNCTION 14d9a25a6 FUN_14d9a25a6 body=63 status=ok
// SIG undefined FUN_14d9a25a6(void)

void FUN_14d9a25a6(void)

{
  undefined1 *puVar1;
  undefined8 unaff_RDI;
  byte in_TF;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8;
  if ((in_TF & 1) != 0) {
    puVar1 = (undefined1 *)register0x00000020;
  }
  *(undefined8 *)(puVar1 + -0x10) = unaff_RDI;
  *(undefined8 *)(puVar1 + -0x18) = unaff_RDI;
  *(undefined **)(puVar1 + -0x10) = &DAT_14d9a25e7;
  return;
}



// FUNCTION 14d9a2620 FUN_14d9a2620 body=334 status=ok
// SIG undefined FUN_14d9a2620(void)

/* WARNING: Instruction at (ram,0x00014d9a264c) overlaps instruction at (ram,0x00014d9a264b)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000165f2352e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9a2620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong in_stack_00000008;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  if ((in_stack_00000008 & 1) == 0) {
    uVar1 = (*(code *)0x14da64af0)(0x14da64af0);
    return uVar1;
  }
  if ((ushort)((ushort)((in_stack_00000008 & 0x4000) != 0) * 0x4000 |
               (ushort)((in_stack_00000008 & 0x800) != 0) * 0x800 |
               (ushort)((in_stack_00000008 & 0x400) != 0) * 0x400 |
               (ushort)((in_stack_00000008 & 0x200) != 0) * 0x200 |
               (ushort)((in_stack_00000008 & 0x100) != 0) * 0x100 |
               (ushort)((in_stack_00000008 & 0x80) != 0) * 0x80 |
               (ushort)((in_stack_00000008 & 0x40) != 0) * 0x40 |
               (ushort)((in_stack_00000008 & 0x10) != 0) * 0x10 |
               (ushort)((in_stack_00000008 & 4) != 0) * 4 | 0xffbf) != 0xffbe) {
    uVar1 = FUN_165f234a4(uStackX_18,param_2);
    return uVar1;
  }
  return local_res20;
}



// FUNCTION 14d9a278c FUN_14d9a278c body=280 status=ok
// SIG undefined FUN_14d9a278c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a2814) */
/* WARNING: Removing unreachable block (ram,0x00014d9a281a) */

undefined8 FUN_14d9a278c(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  longlong unaff_R14;
  undefined2 *unaff_R15;
  longlong local_res20;
  
  *unaff_R15 = param_3;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R13;
  *(undefined **)(local_res20 + -8) = &DAT_1661c57cf + *(longlong *)(local_res20 + -8);
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(longlong *)(local_res20 + -0x10) = unaff_R14;
  plVar1 = (longlong *)(local_res20 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = uVar2;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7bd4e5;
  return in_RAX;
}



// FUNCTION 14d9a29b8 FUN_14d9a29b8 body=467 status=ok
// SIG undefined FUN_14d9a29b8(void)

void * FUN_14d9a29b8(longlong param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  ulonglong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + param_1) = unaff_retaddr;
  uVar1 = local_res10[0];
  local_res10[0] = *(ulonglong *)(unaff_RDI + -0x98) ^ in_stack_00000008;
  local_res10[1] = ~(local_res10[1] & in_stack_00000008);
  FUN_156d339fd();
  FUN_156e7a9a1();
  uVar3 = *(ulonglong *)(unaff_R13 + -0x68) ^ uVar1;
  lVar4 = *(ulonglong *)(unaff_R13 + -0x50) + uVar1 +
          (*(ulonglong *)(unaff_R13 + -0x50) & uVar1) * -2;
  FUN_162c86cda();
  pvVar2 = ClientId.UniqueProcess;
  *(longlong *)(unaff_R12 + -8) = lVar4;
  *(longlong *)(unaff_R12 + -0x10) = lVar4;
  *(ulonglong *)(unaff_R12 + -0x18) = uVar3;
  *(ulonglong *)(unaff_R12 + -0x20) = uVar3;
  *(undefined **)(unaff_R12 + -0x18) = &DAT_14d9a2be7;
  return pvVar2;
}



// FUNCTION 14d9a2b8e FUN_14d9a2b8e body=88 status=ok
// SIG undefined FUN_14d9a2b8e(void)

void * FUN_14d9a2b8e(void)

{
  void *pvVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong local_res18;
  
  pvVar1 = ClientId.UniqueProcess;
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined **)(local_res18 + -0x18) = &DAT_14d9a2be7;
  return pvVar1;
}



// FUNCTION 14d9a2df8 FUN_14d9a2df8 body=234 status=ok
// SIG undefined FUN_14d9a2df8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a2e91) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2e9d) */

longlong FUN_14d9a2df8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * -2;
}



// FUNCTION 14d9a3068 FUN_14d9a3068 body=178 status=ok
// SIG undefined FUN_14d9a3068(void)

void FUN_14d9a3068(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_4;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  uVar3 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  puVar2 = (uint *)(local_res10 + -0x20);
  *puVar2 = 0x32b36dee;
  *puVar2 = *puVar2 ^ 0x7f6bab89;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x30) = unaff_RSI;
  *(code **)(local_res10 + -0x28) = FUN_14d9a311a;
  FUN_160e8e379(param_1,param_2,uVar3,&DAT_160e8e3cf);
  return;
}



// FUNCTION 14d9a311a FUN_14d9a311a body=165 status=ok
// SIG undefined FUN_14d9a311a(void)

void FUN_14d9a311a(void)

{
  return;
}



// FUNCTION 14d9a325b FUN_14d9a325b body=163 status=ok
// SIG undefined FUN_14d9a325b(void)

/* WARNING: Removing unreachable block (ram,0x000161c956f3) */
/* WARNING: Removing unreachable block (ram,0x000161c95772) */
/* WARNING: Removing unreachable block (ram,0x000161c95778) */
/* WARNING: Removing unreachable block (ram,0x0001613bc7a5) */
/* WARNING: Removing unreachable block (ram,0x0001613bc7dd) */
/* WARNING: Removing unreachable block (ram,0x0001613bc7d5) */
/* WARNING: Removing unreachable block (ram,0x0001613bc7e4) */
/* WARNING: Removing unreachable block (ram,0x0001613bc8aa) */
/* WARNING: Removing unreachable block (ram,0x0001613bc8b6) */
/* WARNING: Removing unreachable block (ram,0x0001613bc935) */
/* WARNING: Removing unreachable block (ram,0x0001613bc93b) */
/* WARNING: Removing unreachable block (ram,0x0001622031dd) */
/* WARNING: Removing unreachable block (ram,0x000156acec70) */
/* WARNING: Removing unreachable block (ram,0x000156aced02) */
/* WARNING: Removing unreachable block (ram,0x000156aced0e) */
/* WARNING: Removing unreachable block (ram,0x000165d20789) */
/* WARNING: Removing unreachable block (ram,0x00014d9a32f9) */
/* WARNING: Removing unreachable block (ram,0x00014d9a32ff) */
/* WARNING: Removing unreachable block (ram,0x000161c955e8) */
/* WARNING: Removing unreachable block (ram,0x000162203246) */
/* WARNING: Removing unreachable block (ram,0x000162203249) */
/* WARNING: Removing unreachable block (ram,0x000161c955c7) */
/* WARNING: Removing unreachable block (ram,0x00014d926a96) */
/* WARNING: Removing unreachable block (ram,0x000165fc3a4b) */
/* WARNING: Removing unreachable block (ram,0x000165fc3a51) */
/* WARNING: Removing unreachable block (ram,0x000165fc3a56) */

undefined8 FUN_14d9a325b(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  lVar3 = ((in_RAX - 1) - ~*(ulonglong *)(unaff_R12 + -0x78)) +
          ((0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | ~in_RAX) ^ 0xffffffffffffffff)
          * -2;
  if (-1 < lVar3) {
    uVar2 = FUN_1616183d8(~(uVar1 & in_RAX) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1,lVar3,
                          *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
    return uVar2;
  }
  uVar2 = FUN_1627775e4();
  return uVar2;
}



// FUNCTION 14d9a32ff FUN_14d9a32ff body=80 status=ok
// SIG undefined FUN_14d9a32ff(void)

void FUN_14d9a32ff(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9a343a FUN_14d9a343a body=301 status=ok
// SIG undefined FUN_14d9a343a(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a3498) */

undefined8 FUN_14d9a343a(void)

{
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 uStackX_20;
  
  FUN_1650e1fd7();
  *(undefined8 *)
   (unaff_R12 +
   ~(~((unaff_retaddr ^ 0x2a7c548b) & 0xfffffffffecca88c) &
    (unaff_retaddr ^ 0x2a7c548b | 0xfffffffffecca88c))) = unaff_R13;
  return uStackX_20;
}



// FUNCTION 14d9a367b FUN_14d9a367b body=142 status=ok
// SIG undefined FUN_14d9a367b(void)

void FUN_14d9a367b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  undefined8 uStackX_10;
  longlong in_stack_00000020;
  
  FUN_160d04ab6(uStackX_10,param_2,param_3,param_4,unaff_RSI + in_stack_00000020 * -2);
  FUN_14d9a370c();
  return;
}



// FUNCTION 14d9a370c FUN_14d9a370c body=149 status=ok
// SIG undefined FUN_14d9a370c(void)

void FUN_14d9a370c(void)

{
  return;
}



// FUNCTION 14d9a37a2 FUN_14d9a37a2 body=1409 status=ok
// SIG undefined FUN_14d9a37a2(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a394f) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3955) */
/* WARNING: Removing unreachable block (ram,0x000166722409) */
/* WARNING: Removing unreachable block (ram,0x00014d9a38c3) */
/* WARNING: Removing unreachable block (ram,0x0001668a60c4) */
/* WARNING: Removing unreachable block (ram,0x0001668a60c9) */
/* WARNING: Removing unreachable block (ram,0x0001668a60cf) */
/* WARNING: Removing unreachable block (ram,0x0001668a60d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9a37a2(void)

{
  uint uVar1;
  uint unaff_EBX;
  int unaff_EDI;
  
  uVar1 = unaff_EBX & 0xac7fc80b | 0x538037f4;
  FUN_1662e0cdb((uVar1 - (0xffffffffU - unaff_EDI | uVar1)) + (0xffffffffU - unaff_EDI),
                FUN_1662e0cdb);
  FUN_14dbffcf1(FUN_14dbffcf1);
  return;
}



// FUNCTION 14d9a39e8 FUN_14d9a39e8 body=282 status=ok
// SIG undefined FUN_14d9a39e8(void)

/* WARNING: Removing unreachable block (ram,0x000162d5dc19) */
/* WARNING: Removing unreachable block (ram,0x000162d5dc1f) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3a71) */
/* WARNING: Removing unreachable block (ram,0x000162d5dbad) */
/* WARNING: Removing unreachable block (ram,0x0001667e053b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3a9b) */
/* WARNING: Removing unreachable block (ram,0x0001667e0540) */
/* WARNING: Removing unreachable block (ram,0x0001667e054d) */

void FUN_14d9a39e8(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (*(ulonglong *)(unaff_R12 + -0x90) + in_RAX < (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) * 2)
  {
    FUN_156a7f961();
    return;
  }
  FUN_156a7f961();
  return;
}



// FUNCTION 14d9a3b89 FUN_14d9a3b89 body=65 status=ok
// SIG undefined FUN_14d9a3b89(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a3c20) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3c26) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3c9a) */
/* WARNING: Removing unreachable block (ram,0x000160da842d) */
/* WARNING: Removing unreachable block (ram,0x000160da8410) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9a3b89(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong local_res8;
  
  uVar2 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x70);
  uVar3 = ~*(ulonglong *)(unaff_RDI + -0x70) | param_1;
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x48) ^ param_1)) {
    uVar1 = FUN_161adacc5(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                          ~((uVar3 - (uVar2 | uVar3)) + uVar2),local_res8 ^ param_1);
    return uVar1;
  }
  uVar1 = FUN_15b829490();
  return uVar1;
}



// FUNCTION 14d9a3cd7 FUN_14d9a3cd7 body=321 status=ok
// SIG undefined FUN_14d9a3cd7(void)

/* WARNING: Instruction at (ram,0x000161843f26) overlaps instruction at (ram,0x000161843f25)
    */
/* WARNING: Removing unreachable block (ram,0x0001628e5420) */
/* WARNING: Removing unreachable block (ram,0x0001628e542b) */
/* WARNING: Removing unreachable block (ram,0x000161843ea7) */
/* WARNING: Removing unreachable block (ram,0x00016606a1c1) */
/* WARNING: Removing unreachable block (ram,0x00016606a1cc) */
/* WARNING: Removing unreachable block (ram,0x00016606a1c7) */
/* WARNING: Removing unreachable block (ram,0x0001628e5426) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3d7c) */
/* WARNING: Removing unreachable block (ram,0x000161a08e42) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3e0b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3e11) */
/* WARNING: Removing unreachable block (ram,0x00016254ca29) */
/* WARNING: Removing unreachable block (ram,0x00016254caae) */
/* WARNING: Removing unreachable block (ram,0x00016254cab3) */
/* WARNING: Removing unreachable block (ram,0x00016606a132) */
/* WARNING: Removing unreachable block (ram,0x0001653a0720) */
/* WARNING: Removing unreachable block (ram,0x00016254cab9) */
/* WARNING: Removing unreachable block (ram,0x000161843e5a) */
/* WARNING: Removing unreachable block (ram,0x000161843edb) */
/* WARNING: Removing unreachable block (ram,0x0001628e5310) */
/* WARNING: Removing unreachable block (ram,0x0001628e5393) */
/* WARNING: Removing unreachable block (ram,0x0001628e5398) */
/* WARNING: Removing unreachable block (ram,0x0001628e539e) */
/* WARNING: Removing unreachable block (ram,0x000161843ee1) */
/* WARNING: Removing unreachable block (ram,0x000161843f26) */
/* WARNING: Removing unreachable block (ram,0x000161843f25) */
/* WARNING: Removing unreachable block (ram,0x00014d9a3e1c) */

undefined8 FUN_14d9a3cd7(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x60) == 0 && unaff_R15 == 0) {
    uVar1 = FUN_161843db2();
    return uVar1;
  }
  uVar1 = thunk_FUN_162647dec(*(longlong *)(unaff_R13 + -0x78),
                              *(longlong *)(unaff_R13 + -0x78) + unaff_R15);
  return uVar1;
}



// FUNCTION 14d9a3e1c thunk_FUN_14d9a3e28 body=5 status=ok
// SIG undefined thunk_FUN_14d9a3e28(void)

void thunk_FUN_14d9a3e28(void)

{
  return;
}



// FUNCTION 14d9a3e28 FUN_14d9a3e28 body=60 status=ok
// SIG undefined FUN_14d9a3e28(void)

void FUN_14d9a3e28(void)

{
  return;
}



// FUNCTION 14d9a3f2d FUN_14d9a3f2d body=166 status=ok
// SIG undefined FUN_14d9a3f2d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9a3f8a) */

void FUN_14d9a3f2d(void)

{
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_retaddr;
  
  (*(code *)0x16516d625)(unaff_retaddr,*(ulonglong *)(in_R11 + -0x80) ^ in_R10);
  return;
}



// FUNCTION 14d9a40f1 FUN_14d9a40f1 body=264 status=ok
// SIG undefined FUN_14d9a40f1(void)

/* WARNING: Removing unreachable block (ram,0x000165556fd6) */
/* WARNING: Removing unreachable block (ram,0x000165556fdc) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4182) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9a40f1(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  ulonglong uStackX_20;
  
  uVar1 = uStackX_20 ^ unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x18) = uStackX_10;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined **)(uVar1 - 8) = &DAT_1565e6ea3;
                    /* WARNING: Could not recover jumptable at 0x0001565e6e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}



// FUNCTION 14d9a43fc FUN_14d9a43fc body=129 status=ok
// SIG undefined FUN_14d9a43fc(void)

void FUN_14d9a43fc(void)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_162566718(unaff_retaddr,local_res8);
  return;
}



// FUNCTION 14d9a451a FUN_14d9a451a body=144 status=ok
// SIG undefined FUN_14d9a451a(void)

undefined8 FUN_14d9a451a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9a45ac thunk_FUN_14d9a45b2 body=5 status=ok
// SIG undefined thunk_FUN_14d9a45b2(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a474c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a46cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_14d9a45b2(undefined8 param_1,undefined8 param_2)

{
  char in_R11B;
  char unaff_R12B;
  char cStack000000000000011b;
  
  FUN_160e60473(param_1,param_2);
  cStack000000000000011b = in_R11B - unaff_R12B;
  if (-1 < cStack000000000000011b) {
    FUN_16494bd1f();
    return;
  }
  FUN_16494bd1f();
  return;
}



// FUNCTION 14d9a45b2 FUN_14d9a45b2 body=117 status=ok
// SIG undefined FUN_14d9a45b2(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a474c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a46cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9a45b2(undefined8 param_1,undefined8 param_2)

{
  char in_R11B;
  char unaff_R12B;
  char cStack000000000000011b;
  
  FUN_160e60473(param_1,param_2);
  cStack000000000000011b = in_R11B - unaff_R12B;
  if (-1 < cStack000000000000011b) {
    FUN_16494bd1f();
    return;
  }
  FUN_16494bd1f();
  return;
}



// FUNCTION 14d9a4628 FUN_14d9a4628 body=355 status=ok
// SIG undefined FUN_14d9a4628(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a474c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a46cf) */

void FUN_14d9a4628(void)

{
  char in_R11B;
  char unaff_R12B;
  char cStack000000000000012b;
  
  cStack000000000000012b = in_R11B - unaff_R12B;
  if (-1 < cStack000000000000012b) {
    FUN_16494bd1f();
    return;
  }
  FUN_16494bd1f();
  return;
}



// FUNCTION 14d9a478c FUN_14d9a478c body=168 status=ok
// SIG undefined FUN_14d9a478c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a4821) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4810) */

void FUN_14d9a478c(undefined8 param_1)

{
  ushort uVar1;
  undefined8 in_R10;
  ushort *unaff_R14;
  longlong local_res20;
  
  *unaff_R14 = *unaff_R14 ^ 0xffff;
  uVar1 = *unaff_R14;
  *unaff_R14 = *unaff_R14 & 0x100;
  *unaff_R14 = (uVar1 + 0x100) - *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined **)(local_res20 + -8) = &DAT_156f44431;
  FUN_14d7a5de9();
  return;
}



// FUNCTION 14d9a4821 FUN_14d9a4821 body=164 status=ok
// SIG undefined FUN_14d9a4821(void)

void FUN_14d9a4821(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  lVar2 = *(longlong *)(unaff_RBX + 8);
  lVar3 = *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) & ~unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) =
       ~((~((lVar2 - (unaff_RSI | uVar1)) + unaff_RSI) + lVar3) - ~unaff_RBP &
        *(ulonglong *)(unaff_RBX + 8));
  FUN_165848397(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9a49fb FUN_14d9a49fb body=142 status=ok
// SIG undefined FUN_14d9a49fb(void)

void FUN_14d9a49fb(undefined8 param_1)

{
  (*(code *)0x15b1379b1)(param_1);
  return;
}



// FUNCTION 14d9a4a8b FUN_14d9a4a8b body=157 status=ok
// SIG undefined FUN_14d9a4a8b(void)

void FUN_14d9a4a8b(void)

{
  return;
}



// FUNCTION 14d9a4b29 FUN_14d9a4b29 body=145 status=ok
// SIG undefined FUN_14d9a4b29(void)

void FUN_14d9a4b29(longlong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_14dd9c350(param_1 + *(longlong *)(unaff_RSI + -0x60),FUN_14dd9c350,
                *(longlong *)(unaff_RSI + -0x60),*(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d9a4bbd FUN_14d9a4bbd body=299 status=ok
// SIG undefined FUN_14d9a4bbd(void)

void FUN_14d9a4bbd(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  undefined2 in_stack_00000038;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88) ^ 0xffffffffffffffff;
  FUN_1662ea6ae(param_1,param_2,in_stack_00000010,
                ~(*(ulonglong *)(unaff_RDI + -0x88) & param_1) + param_1);
  uVar2 = ~*(ulonglong *)(local_res8 + -0x90);
  FUN_1664a32b9(CONCAT62((~(uint6)(uVar1 >> 0x10) |
                         (uint6)(*(ulonglong *)(local_res8 + -0x90) >> 0x10)) &
                         (uint6)((uVar2 + uVar1) - (uVar2 & uVar1) >> 0x10),in_stack_00000038) ^
                0xffffffffffff0000,*(undefined8 *)(local_res8 + -0x40),0xffffffffffffffff);
  return;
}



// FUNCTION 14d9a4ec1 FUN_14d9a4ec1 body=124 status=ok
// SIG undefined FUN_14d9a4ec1(void)

void FUN_14d9a4ec1(ulonglong param_1)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 *puVar2;
  undefined8 unaff_R13;
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
  byte bVar15;
  ulonglong uVar16;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar16 = local_res10 ^ param_1;
  puVar2 = (undefined8 *)~((param_1 ^ 0xffffffffffffffff | local_res18) & (~local_res18 | param_1));
  bVar11 = (uVar16 & 0x4000) != 0;
  bVar10 = (uVar16 & 0x800) != 0;
  bVar9 = (uVar16 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (uVar16 & 0x80) != 0;
  bVar6 = (uVar16 & 0x40) != 0;
  bVar5 = (uVar16 & 0x10) != 0;
  bVar4 = (uVar16 & 4) != 0;
  bVar3 = (uVar16 & 1) != 0;
  bVar15 = (uVar16 & 0x200000) != 0;
  bVar12 = (uVar16 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *puVar2 = unaff_R13;
  puVar2[-1] = unaff_R13;
  puVar2[-2] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
               (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
               (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
               (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
               (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
               (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
               (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  uVar16 = puVar2[-2];
  puVar2[-2] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
               (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  puVar2[-3] = unaff_RBX;
  uVar16 = puVar2[-2];
  puVar2[-2] = local_res8;
  puVar2[-3] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
               (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  puVar2[-4] = &LAB_15b5ff60b;
  return;
}



// FUNCTION 14d9a4f3f FUN_14d9a4f3f body=174 status=ok
// SIG undefined FUN_14d9a4f3f(void)

void FUN_14d9a4f3f(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_156a05c9d(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,*(ulonglong *)(unaff_R13 + -0x48),
                ~(uVar1 & unaff_R15) & ((~uVar1 | ~unaff_R15) + uVar1 + 1 | unaff_R15),
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14d9a4fed FUN_14d9a4fed body=172 status=ok
// SIG undefined FUN_14d9a4fed(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a5093) */

void FUN_14d9a4fed(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  puVar1 = (undefined8 *)(local_res18 + -0x18);
  *puVar1 = param_4;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  *(undefined1 **)(local_res18 + -8) = &LAB_164fe00e3;
  (*in_RAX)(local_res8,*puVar1,*(undefined8 *)(local_res18 + -0x10),uVar2);
  return;
}



// FUNCTION 14d9a5230 FUN_14d9a5230 body=178 status=ok
// SIG undefined FUN_14d9a5230(void)

longlong FUN_14d9a5230(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return (~param_1 + *(ulonglong *)(unaff_RDI + -0x60)) -
         (~param_1 & *(ulonglong *)(unaff_RDI + -0x60));
}



// FUNCTION 14d9a5355 FUN_14d9a5355 body=131 status=ok
// SIG undefined FUN_14d9a5355(void)

void FUN_14d9a5355(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16160e672(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,FUN_16160e672,param_3 ^ unaff_RBP);
  return;
}



// FUNCTION 14d9a55bc FUN_14d9a55bc body=151 status=ok
// SIG undefined FUN_14d9a55bc(void)

void FUN_14d9a55bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *(undefined8 *)(param_5 + -8) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_R12;
  FUN_166428ca5(local_res18,param_2,local_res10,local_res8);
  return;
}



// FUNCTION 14d9a5655 FUN_14d9a5655 body=84 status=ok
// SIG undefined FUN_14d9a5655(void)

void FUN_14d9a5655(void)

{
  return;
}



// FUNCTION 14d9a591c FUN_14d9a591c body=76 status=ok
// SIG undefined FUN_14d9a591c(void)

undefined8 FUN_14d9a591c(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d9a5a26 FUN_14d9a5a26 body=173 status=ok
// SIG undefined FUN_14d9a5a26(void)

void FUN_14d9a5a26(undefined8 param_1,undefined8 param_2)

{
  FUN_1574b55e1(FUN_1574b55e1,param_2);
  return;
}



// FUNCTION 14d9a5b87 FUN_14d9a5b87 body=158 status=ok
// SIG undefined FUN_14d9a5b87(void)

undefined8 FUN_14d9a5b87(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_R10;
  longlong unaff_R13;
  uint unaff_retaddr;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)
   (&stack0x00000010 +
   ~(~((ulonglong)unaff_retaddr & 0xffffffffc3eeea6c) &
    ((ulonglong)unaff_retaddr | 0xffffffffc3eeea6c))) = param_3;
  FUN_1625ff929(param_1,param_2,in_stack_00000010,local_res8,*(undefined8 *)(unaff_R13 + -8));
  return in_R10;
}



// FUNCTION 14d9a60c4 FUN_14d9a60c4 body=131 status=ok
// SIG undefined FUN_14d9a60c4(void)

void FUN_14d9a60c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_162ef8e53(param_1,param_2,unaff_retaddr,FUN_162ef8e53);
  return;
}



// FUNCTION 14d9a61da FUN_14d9a61da body=142 status=ok
// SIG undefined FUN_14d9a61da(void)

void FUN_14d9a61da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x165291081)(param_1,param_2,0x165291081,param_4);
  return;
}



// FUNCTION 14d9a6268 FUN_14d9a6268 body=153 status=ok
// SIG undefined FUN_14d9a6268(void)

undefined8 FUN_14d9a6268(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9a6302 FUN_14d9a6302 body=824 status=ok
// SIG undefined FUN_14d9a6302(void)

/* WARNING: Removing unreachable block (ram,0x00016114f8e3) */
/* WARNING: Removing unreachable block (ram,0x00016114f8e9) */
/* WARNING: Removing unreachable block (ram,0x00014d9a6440) */
/* WARNING: Removing unreachable block (ram,0x00014d9a6446) */
/* WARNING: Removing unreachable block (ram,0x000165155ba4) */
/* WARNING: Removing unreachable block (ram,0x000165155baa) */
/* WARNING: Removing unreachable block (ram,0x00016669ef02) */
/* WARNING: Removing unreachable block (ram,0x000165ebfe31) */
/* WARNING: Removing unreachable block (ram,0x00016176d40e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000020 : 0x000165ebfefd */
/* WARNING: Removing unreachable block (ram,0x00014d9a6396) */
/* WARNING: Removing unreachable block (ram,0x00016176d408) */
/* WARNING: Removing unreachable block (ram,0x000165155afe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9a6302(void)

{
  FUN_16669ef02();
  return;
}



// FUNCTION 14d9a6509 FUN_14d9a6509 body=124 status=ok
// SIG undefined FUN_14d9a6509(void)

void FUN_14d9a6509(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(longlong *)(unaff_RBP + -8) = unaff_RBP;
  lVar1 = *(longlong *)(unaff_RBP + -8);
  *(undefined8 *)(unaff_RBP + -8) = in_RAX;
  *(undefined4 *)(unaff_RBP + -8) = 0x50d4eb23;
  *(undefined4 *)(unaff_RBP + -4) = 0;
  *(undefined8 *)
   ((-(-1 - ~(~(*(ulonglong *)(unaff_RBP + -8) & 0xffffffffaf2b57fa) &
             (*(ulonglong *)(unaff_RBP + -8) | 0xffffffffaf2b57fa))) - (~(lVar1 - 0x431eU) + 2)) +
   -8) = 0x15b92f966;
  return;
}



// FUNCTION 14d9a661f thunk_FUN_166a62797 body=19 status=ok
// SIG undefined thunk_FUN_166a62797(void)

void thunk_FUN_166a62797(undefined8 param_1)

{
  FUN_166a62797(param_1,0x14d7c332c);
  return;
}



// FUNCTION 14d9a66cb FUN_14d9a66cb body=85 status=ok
// SIG undefined FUN_14d9a66cb(void)

void FUN_14d9a66cb(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14d9a675d FUN_14d9a675d body=188 status=ok
// SIG undefined FUN_14d9a675d(void)

void FUN_14d9a675d(short param_1)

{
  FUN_162f1c846(param_1 + 0x281b);
  return;
}



// FUNCTION 14d9a6870 FUN_14d9a6870 body=162 status=ok
// SIG undefined FUN_14d9a6870(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a6912) */

void FUN_14d9a6870(void)

{
  ulonglong uVar1;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  
  if (uStackX_10 != 0) {
    uVar1 = ~(uStackX_10 & unaff_R15) & (uStackX_10 | unaff_R15);
    *(undefined8 *)(uVar1 - 8) = unaff_R12;
    *(undefined **)(uVar1 - 0x10) = &DAT_157499f1a;
    return;
  }
  FUN_1616317a9();
  return;
}



// FUNCTION 14d9a6912 FUN_14d9a6912 body=5 status=ok
// SIG undefined FUN_14d9a6912(void)

void FUN_14d9a6912(void)

{
  return;
}



// FUNCTION 14d9a6b28 FUN_14d9a6b28 body=311 status=ok
// SIG undefined FUN_14d9a6b28(void)

void FUN_14d9a6b28(void)

{
  FUN_160f07ddf();
  FUN_16624482e();
  return;
}



// FUNCTION 14d9a6c68 FUN_14d9a6c68 body=171 status=ok
// SIG undefined FUN_14d9a6c68(void)

/* WARNING: Instruction at (ram,0x00014d9a6d0c) overlaps instruction at (ram,0x00014d9a6d0a)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9a6d07) */
/* WARNING: Removing unreachable block (ram,0x00014d9a6d09) */
/* WARNING: Removing unreachable block (ram,0x00014d9a6d1c) */

void FUN_14d9a6c68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)&DAT_1654cb3ac)();
  return;
}



// FUNCTION 14d9a6f02 FUN_14d9a6f02 body=143 status=ok
// SIG undefined FUN_14d9a6f02(void)

void FUN_14d9a6f02(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong unaff_RBP;
  
  FUN_162397b30(FUN_162397b30,0x16ac4eba,~(param_2 & (~param_3 | unaff_RBP)));
  FUN_14d9a6f93();
  return;
}



// FUNCTION 14d9a6f93 FUN_14d9a6f93 body=131 status=ok
// SIG undefined FUN_14d9a6f93(void)

void FUN_14d9a6f93(byte param_1,ushort param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  bVar1 = (param_1 & 0x1f) % 9;
  FUN_14dfd6fe7(*(undefined8 *)(unaff_R12 + -0x30),
                CONCAT11((char)(param_2 >> 8),
                         (byte)((param_2 & 0xff) >> bVar1) | (byte)((param_2 & 0xff) << 9 - bVar1))
                + -0x6a24,
                CONCAT62((int6)((param_3 + in_RAX) - ~(~param_3 | ~in_RAX) >> 0x10),0x6a24),
                *(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14d9a7016 FUN_14d9a7016 body=270 status=ok
// SIG undefined FUN_14d9a7016(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a711c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a7127) */
/* WARNING: Removing unreachable block (ram,0x00014d9a7122) */

undefined8 FUN_14d9a7016(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166b4762c();
  return uVar1;
}



// FUNCTION 14d9a7127 FUN_14d9a7127 body=312 status=ok
// SIG undefined FUN_14d9a7127(void)

void FUN_14d9a7127(void)

{
  ushort uVar1;
  ushort unaff_retaddr;
  undefined8 in_stack_00000010;
  
  uVar1 = 0x299b;
  FUN_16481299b();
  FUN_1660ab68b(~((~(uVar1 | 0x96ec) | unaff_retaddr) + (uVar1 | 0x96ec) + 1),in_stack_00000010);
  return;
}



// FUNCTION 14d9a7263 FUN_14d9a7263 body=384 status=ok
// SIG undefined FUN_14d9a7263(void)

void FUN_14d9a7263(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1663bab1d)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9a72e3 FUN_14d9a72e3 body=210 status=ok
// SIG undefined FUN_14d9a72e3(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a7371) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9a72e3(ulonglong param_1)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong local_res10;
  ulonglong local_res20;
  
  lVar1 = ((param_1 - 1) - ~local_res20) + (local_res20 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R12;
  *(ulonglong *)(lVar1 + -0x18) =
       (unaff_RDI + param_1) -
       ~(~((unaff_RDI & param_1) << 1 | (ulonglong)((longlong)(unaff_RDI & param_1) < 0)) | 1);
  *(undefined8 *)(lVar1 + -0x20) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x28) = in_RAX;
  uVar2 = FUN_15701f983(local_res10 ^ param_1);
  return uVar2;
}



// FUNCTION 14d9a73fb FUN_14d9a73fb body=285 status=ok
// SIG undefined FUN_14d9a73fb(void)

/* WARNING: Removing unreachable block (ram,0x00015b255057) */
/* WARNING: Removing unreachable block (ram,0x00015b25505d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a750f) */
/* WARNING: Removing unreachable block (ram,0x00014d9a7515) */
/* WARNING: Removing unreachable block (ram,0x00014d9a7520) */
/* WARNING: Removing unreachable block (ram,0x00014d9a75bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9a75c3) */
/* WARNING: Removing unreachable block (ram,0x00015689db57) */
/* WARNING: Removing unreachable block (ram,0x00015689dbb0) */
/* WARNING: Removing unreachable block (ram,0x00015689dbb3) */
/* WARNING: Removing unreachable block (ram,0x00015689dc63) */
/* WARNING: Removing unreachable block (ram,0x00015689dc5e) */
/* WARNING: Removing unreachable block (ram,0x00015689dc6b) */
/* WARNING: Removing unreachable block (ram,0x00015689dc80) */
/* WARNING: Removing unreachable block (ram,0x00015689dc85) */
/* WARNING: Removing unreachable block (ram,0x00014d9a74ac) */
/* WARNING: Removing unreachable block (ram,0x00015b949122) */
/* WARNING: Removing unreachable block (ram,0x00014d9a747f) */
/* WARNING: Removing unreachable block (ram,0x00015b27d3ec) */
/* WARNING: Removing unreachable block (ram,0x00016534510d) */
/* WARNING: Removing unreachable block (ram,0x00016534513b) */
/* WARNING: Removing unreachable block (ram,0x00016534512e) */
/* WARNING: Removing unreachable block (ram,0x00015b27d3f2) */
/* WARNING: Removing unreachable block (ram,0x00015b27d402) */

undefined8 FUN_14d9a73fb(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((-~param_1 - (~*(ulonglong *)(unaff_RDI + -0xa0) + 2)) +
      (*(ulonglong *)(unaff_RDI + -0xa0) & param_1) * -2 == 0) {
    uVar1 = FUN_15b254fcd();
    return uVar1;
  }
  uVar1 = FUN_15b949122();
  return uVar1;
}



// FUNCTION 14d9a7520 FUN_14d9a7520 body=755 status=ok
// SIG undefined FUN_14d9a7520(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a75c3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d9a7520(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char unaff_BPL;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_156b478e1(param_1,param_2);
  if (unaff_BPL == '\0') {
    uVar1 = FUN_162e0555a();
    return uVar1;
  }
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14d9a76d4 FUN_14d9a76d4 body=10 status=ok
// SIG undefined FUN_14d9a76d4(void)

void FUN_14d9a76d4(void)

{
  return;
}



// FUNCTION 14d9a76de FUN_14d9a76de body=142 status=ok
// SIG undefined FUN_14d9a76de(void)

void FUN_14d9a76de(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong lVar6;
  ulonglong unaff_retaddr;
  ulonglong in_stack_00000008;
  longlong in_stack_00000018;
  
  uVar4 = *(ulonglong *)(unaff_RBP + param_2);
  uVar5 = *(ulonglong *)(unaff_RBP + param_2);
  if ((in_stack_00000008 & 0x40) == 0) {
    FUN_162a35c11();
    (*(code *)&LAB_15705b51a)();
    return;
  }
  lVar6 = -~param_4 - (~unaff_RDI + 2);
  *(undefined1 *)(in_stack_00000018 + 2 + lVar6) = 0;
  puVar1 = (undefined1 *)(in_stack_00000018 + 2 + lVar6);
  *puVar1 = *puVar1;
  bVar3 = *(byte *)(in_stack_00000018 + 2 + lVar6);
  pbVar2 = (byte *)(in_stack_00000018 + 2 + lVar6);
  *pbVar2 = *pbVar2 | 0xa5;
  *(byte *)(in_stack_00000018 + 2 + lVar6) =
       ~(~(bVar3 & 0xa5) & *(byte *)(in_stack_00000018 + 2 + lVar6));
  FUN_162cc8e7f(param_1,~-(~((unaff_retaddr ^ 0x330572c6) & uVar5) &
                          (unaff_retaddr ^ 0x330572c6 | uVar4)) + 1,param_3);
  return;
}



// FUNCTION 14d9a776c FUN_14d9a776c body=154 status=ok
// SIG undefined FUN_14d9a776c(void)

void FUN_14d9a776c(void)

{
  (*(code *)&LAB_15705b51a)();
  return;
}



// FUNCTION 14d9a79ca FUN_14d9a79ca body=163 status=ok
// SIG undefined FUN_14d9a79ca(void)

void FUN_14d9a79ca(void)

{
  return;
}



// FUNCTION 14d9a7a70 FUN_14d9a7a70 body=220 status=ok
// SIG undefined FUN_14d9a7a70(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a7b02) */
/* WARNING: Removing unreachable block (ram,0x00016543b97d) */

void FUN_14d9a7a70(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  FUN_165c834c3(param_1,param_2,param_3,param_4);
  FUN_166ca9e91();
  FUN_1664b9a42(~param_2,*(undefined8 *)(((~uVar1 | ~unaff_R15) & (uVar1 | unaff_R15)) - 0x28));
  FUN_156de794b();
  return;
}



// FUNCTION 14d9a7ba1 FUN_14d9a7ba1 body=295 status=ok
// SIG undefined FUN_14d9a7ba1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9a7ba1(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_8;
  
  lVar2 = (-~unaff_R15 - ((param_1 ^ 0xffffffffffffffff) + 2)) + (param_1 & unaff_R15) * -2;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_162e0eb2b(CONCAT71((int7)((ulonglong)lVar2 >> 8),1),
                ~(~unaff_R15 & uVar1 | unaff_R15) + 1 + unaff_R15 + uVar1);
  local_8._0_4_ = (undefined4)lVar2;
  local_8 = CONCAT44(0xac91427a,(undefined4)local_8) ^ 0x658e2d94;
  uVar1 = *(ulonglong *)(uVar1 + unaff_R15 + -0x58);
  FUN_1619639e5(local_8,(local_8 - (uVar1 | local_8)) + uVar1,uVar1 | local_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9a7cca FUN_14d9a7cca body=73 status=ok
// SIG undefined FUN_14d9a7cca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9a7cca(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9a814a FUN_14d9a814a body=146 status=ok
// SIG undefined FUN_14d9a814a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9a814a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 in_R11;
  undefined8 local_res20;
  
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  *(longlong *)(local_res20 + -0x10) = *plVar1;
  *plVar1 = 0x1006563a;
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  uVar2 = *(ulonglong *)(local_res20 + -8);
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) | 0xffffffffeff9a9c5;
  *(ulonglong *)(local_res20 + -8) =
       ~(~(uVar2 & 0xffffffffeff9a9c5) & *(ulonglong *)(local_res20 + -8));
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x14d9a81f9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9a8493 FUN_14d9a8493 body=201 status=ok
// SIG undefined FUN_14d9a8493(void)

/* WARNING: Removing unreachable block (ram,0x000160c184f7) */
/* WARNING: Removing unreachable block (ram,0x00014d9a8535) */

void FUN_14d9a8493(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if ((longlong)(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX) < 0) {
    FUN_160c1844c();
    return;
  }
  if (~(*(ulonglong *)(unaff_R12 + -0x48) & in_RAX) + in_RAX < ~*(ulonglong *)(unaff_R12 + -0x48)) {
    FUN_16545ce4f();
    return;
  }
  FUN_16545ce4f();
  return;
}



// FUNCTION 14d9a85bf FUN_14d9a85bf body=114 status=ok
// SIG undefined FUN_14d9a85bf(void)

undefined8 FUN_14d9a85bf(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9a8632 FUN_14d9a8632 body=180 status=ok
// SIG undefined FUN_14d9a8632(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9a8632(void)

{
  (*(code *)&LAB_156dc009f)(0xacaffa62);
  return;
}



// FUNCTION 14d9a8789 FUN_14d9a8789 body=159 status=ok
// SIG undefined FUN_14d9a8789(void)

void FUN_14d9a8789(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + (param_2 ^ 0x14d6eaa4));
  uVar2 = uVar1 ^ 0xffffffffffffffff;
  FUN_1569ca335(param_1,~((~param_1 | uVar1) & (uVar2 + param_1) - ~(~uVar2 | ~param_1)));
  return;
}



// FUNCTION 14d9a8829 FUN_14d9a8829 body=119 status=ok
// SIG undefined FUN_14d9a8829(void)

void FUN_14d9a8829(void)

{
  ulonglong *puVar1;
  undefined8 unaff_RSI;
  bool in_CF;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  undefined1 local_res18 [16];
  
  if (in_CF) {
    puVar1 = (ulonglong *)local_res18;
    uStackX_8 = uStackX_10;
  }
  else {
    puVar1 = &uStackX_10;
  }
  *puVar1 = unaff_RSI;
  puVar1[-1] = (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 |
               (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
               (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | 0x80 |
               (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
               (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  FUN_16597a7b5(8);
  return;
}



// FUNCTION 14d9a88a4 FUN_14d9a88a4 body=106 status=ok
// SIG undefined FUN_14d9a88a4(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a8910) */

void FUN_14d9a88a4(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(in_R11 + 0x18) =
       (~unaff_R12 - ~(unaff_R12 & unaff_R15)) + *(longlong *)(in_R11 + 0x18);
  if (CARRY8(~in_RAX | ~in_stack_00000030,in_RAX)) {
    FUN_166bd5e34(param_1,param_2);
    return;
  }
  FUN_162c78592();
  return;
}



// FUNCTION 14d9a8910 FUN_14d9a8910 body=699 status=ok
// SIG undefined FUN_14d9a8910(void)

void FUN_14d9a8910(void)

{
  (*(code *)0x1575f898c)();
  return;
}



// FUNCTION 14d9a89ae FUN_14d9a89ae body=180 status=ok
// SIG undefined FUN_14d9a89ae(void)

void FUN_14d9a89ae(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  
  *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = *(ulonglong *)(unaff_R13 + 0x10) | param_1;
  *(ulonglong *)(unaff_R13 + 0x10) = ~(param_3 & *(ulonglong *)(unaff_R13 + 0x10));
  FUN_1647ff3ce(in_stack_00000018,param_2,local_res10);
  return;
}



// FUNCTION 14d9a8a64 FUN_14d9a8a64 body=169 status=ok
// SIG undefined FUN_14d9a8a64(void)

undefined8 FUN_14d9a8a64(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d9a8c3a FUN_14d9a8c3a body=446 status=ok
// SIG undefined FUN_14d9a8c3a(void)

/* WARNING: Removing unreachable block (ram,0x0001565f017f) */
/* WARNING: Removing unreachable block (ram,0x00014d9a8cbd) */
/* WARNING: Removing unreachable block (ram,0x00014d9a8d01) */
/* WARNING: Removing unreachable block (ram,0x00014d9a8d06) */

undefined8 FUN_14d9a8c3a(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_15b6bcbb6(param_1,(*(ulonglong *)(unaff_RDI + -0x68) - param_1) +
                        (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) * -2 + -2,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  uVar1 = FUN_165e78746();
  return uVar1;
}



// FUNCTION 14d9a8cbd thunk_FUN_14d9a8cc3 body=5 status=ok
// SIG undefined thunk_FUN_14d9a8cc3(void)

undefined4 thunk_FUN_14d9a8cc3(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 *puVar2;
  undefined8 unaff_RSI;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined1 auStack_8 [8];
  
  puVar2 = auStack_8;
  if ((ushort)((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_OF & 1) * 0x800 |
               (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
               (ushort)(in_SF & 1) * 0x80 | (ushort)(in_ZF & 1) * 0x40 | (ushort)(in_AF & 1) * 0x10
               | (ushort)(in_PF & 1) * 4 | (ushort)(in_CF & 1) | 0xfeff) == 0xfeff) {
    puVar2 = (undefined1 *)register0x00000020;
  }
  *(ulonglong *)(puVar2 + -8) = CONCAT44(in_register_00000004,in_EAX);
  *(undefined8 *)(puVar2 + -0x10) = unaff_RSI;
  *(undefined4 *)(puVar2 + -0x18) = 0x34888ebc;
  *(undefined4 *)(puVar2 + -0x14) = 0;
  uVar1 = *(undefined4 *)
           ((longlong)ProcessEnvironmentBlock +
           ((*(ulonglong *)(puVar2 + -0x18) ^ 0x3488fdfa) - 0x721a));
  *(undefined8 *)(puVar2 + -0x18) = 0x16623e9de;
  return uVar1;
}



// FUNCTION 14d9a8cc3 FUN_14d9a8cc3 body=148 status=ok
// SIG undefined FUN_14d9a8cc3(void)

undefined4 FUN_14d9a8cc3(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 *puVar2;
  undefined8 unaff_RSI;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined1 local_8 [8];
  
  puVar2 = local_8;
  if ((ushort)((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_OF & 1) * 0x800 |
               (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
               (ushort)(in_SF & 1) * 0x80 | (ushort)(in_ZF & 1) * 0x40 | (ushort)(in_AF & 1) * 0x10
               | (ushort)(in_PF & 1) * 4 | (ushort)(in_CF & 1) | 0xfeff) == 0xfeff) {
    puVar2 = (undefined1 *)register0x00000020;
  }
  *(ulonglong *)(puVar2 + -8) = CONCAT44(in_register_00000004,in_EAX);
  *(undefined8 *)(puVar2 + -0x10) = unaff_RSI;
  *(undefined4 *)(puVar2 + -0x18) = 0x34888ebc;
  *(undefined4 *)(puVar2 + -0x14) = 0;
  uVar1 = *(undefined4 *)
           ((longlong)ProcessEnvironmentBlock +
           ((*(ulonglong *)(puVar2 + -0x18) ^ 0x3488fdfa) - 0x721a));
  *(undefined8 *)(puVar2 + -0x18) = 0x16623e9de;
  return uVar1;
}



// FUNCTION 14d9a8f30 FUN_14d9a8f30 body=446 status=ok
// SIG undefined FUN_14d9a8f30(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a8fb5) */
/* WARNING: Removing unreachable block (ram,0x00014d9a8fbb) */

void FUN_14d9a8f30(ulonglong param_1,undefined8 param_2,byte param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x50);
  uVar2 = 0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x50);
  uVar2 = (~(uVar2 & param_1) + param_1) - ~uVar2;
  FUN_14e180cff(param_1,~((uVar2 - ((~(uVar1 & uVar2) + uVar2) - ~uVar1)) + uVar1),
                ~(~(~(byte)unaff_RDI | param_3) | ~(~param_3 | (byte)unaff_RDI)) ^ 0xff);
  return;
}



// FUNCTION 14d9a90ee FUN_14d9a90ee body=284 status=ok
// SIG undefined FUN_14d9a90ee(void)

void FUN_14d9a90ee(void)

{
  FUN_1571a60ed();
  FUN_16219670c();
  return;
}



// FUNCTION 14d9a920c FUN_14d9a920c body=165 status=ok
// SIG undefined FUN_14d9a920c(void)

void FUN_14d9a920c(undefined8 param_1,ushort *param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ushort unaff_R15W;
  undefined8 local_res8;
  undefined8 local_res20;
  
  *param_2 = ((~((*param_2 - (~unaff_R15W | *param_2)) + ~unaff_R15W) + *param_2) - unaff_R15W) -
             0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d9a92b2;
  FUN_166c3a9a4(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14d9a935d FUN_14d9a935d body=353 status=ok
// SIG undefined FUN_14d9a935d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a9417) */
/* WARNING: Removing unreachable block (ram,0x00014d9a947c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9477) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9493) */

undefined8 FUN_14d9a935d(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x98)) {
    return in_RAX;
  }
  uVar1 = FUN_161655e61(param_1,param_2);
  return uVar1;
}



// FUNCTION 14d9a94c1 FUN_14d9a94c1 body=442 status=ok
// SIG undefined FUN_14d9a94c1(void)

/* WARNING: Removing unreachable block (ram,0x00014db8f67c) */
/* WARNING: Removing unreachable block (ram,0x00014db8f7ab) */
/* WARNING: Removing unreachable block (ram,0x000165f29909) */
/* WARNING: Removing unreachable block (ram,0x00014db8f5ef) */
/* WARNING: Removing unreachable block (ram,0x00014db8f676) */
/* WARNING: Removing unreachable block (ram,0x00015b8ae46a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9566) */
/* WARNING: Removing unreachable block (ram,0x00014d9a95e5) */
/* WARNING: Removing unreachable block (ram,0x00014d9a95eb) */
/* WARNING: Removing unreachable block (ram,0x00014d9a95ff) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9602) */
/* WARNING: Removing unreachable block (ram,0x00014d9a964f) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9653) */
/* WARNING: Removing unreachable block (ram,0x000156735a41) */
/* WARNING: Removing unreachable block (ram,0x000156735ac2) */
/* WARNING: Removing unreachable block (ram,0x00014db8f7b1) */

void FUN_14d9a94c1(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 in_R9;
  ulonglong unaff_R15;
  ulonglong auStackX_8 [2];
  ulonglong auStackX_18 [2];
  
  uVar2 = *(undefined8 *)((longlong)auStackX_8 + unaff_RBP);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + unaff_RBP + 8);
  *puVar1 = *puVar1 ^ unaff_R15;
  *(ulonglong *)((longlong)auStackX_18 + unaff_RBP) =
       *(ulonglong *)((longlong)auStackX_18 + unaff_RBP) ^ unaff_R15;
  *(undefined8 *)((longlong)auStackX_8 + unaff_RBP) = in_RAX;
  uVar3 = *(ulonglong *)((longlong)auStackX_18 + unaff_RBP + 8);
  *(undefined8 *)((longlong)auStackX_18 + unaff_RBP + -0x18) = in_R9;
  puVar1 = (ulonglong *)((longlong)auStackX_18 + unaff_RBP + 8);
  *puVar1 = *puVar1 & unaff_R15;
  puVar1 = (ulonglong *)((longlong)auStackX_18 + unaff_RBP + 8);
  *puVar1 = ~*puVar1;
  puVar1 = (ulonglong *)((longlong)auStackX_18 + unaff_RBP + 8);
  *puVar1 = *puVar1 & (~unaff_R15 & uVar3 | unaff_R15);
  *(ushort *)((longlong)auStackX_18 + unaff_RBP) =
       *(ushort *)((longlong)auStackX_18 + unaff_RBP) & 0xfeff;
  lVar4 = *(longlong *)((longlong)auStackX_18 + unaff_RBP + 8);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)((longlong)auStackX_18 + unaff_RBP + -0x18);
  *(undefined8 *)(lVar4 + -0x10) = uVar2;
  FUN_14db8f5ef();
  return;
}



// FUNCTION 14d9a95eb FUN_14d9a95eb body=151 status=ok
// SIG undefined FUN_14d9a95eb(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a964f) */

void FUN_14d9a95eb(void)

{
  FUN_15b95990f();
  return;
}



// FUNCTION 14d9a9683 FUN_14d9a9683 body=86 status=ok
// SIG undefined FUN_14d9a9683(void)

void FUN_14d9a9683(void)

{
  undefined8 unaff_RBX;
  ulonglong unaff_R15;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (unaff_R15 ^ 0xab2cfd4)) = unaff_RBX;
  return;
}



// FUNCTION 14d9a98fc FUN_14d9a98fc body=156 status=ok
// SIG undefined FUN_14d9a98fc(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9a98fc(void)

{
  return;
}



// FUNCTION 14d9a99d2 FUN_14d9a99d2 body=304 status=ok
// SIG undefined FUN_14d9a99d2(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a9adc) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9ae2) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9ae7) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9a54) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9ad7) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9a49) */

undefined * FUN_14d9a99d2(void)

{
  return &DAT_15b7c0582;
}



// FUNCTION 14d9a9b80 FUN_14d9a9b80 body=129 status=ok
// SIG undefined FUN_14d9a9b80(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a9bc6) */

undefined8 FUN_14d9a9b80(void)

{
  undefined8 unaff_RSI;
  
  return unaff_RSI;
}



// FUNCTION 14d9a9c02 FUN_14d9a9c02 body=146 status=ok
// SIG undefined FUN_14d9a9c02(void)

void FUN_14d9a9c02(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  *(ulonglong *)(param_2 + 0x10) = ~*(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) =
       (-~unaff_R15 - (~(~unaff_retaddr | ~unaff_R15) + 2)) - *(longlong *)(param_2 + 0x10);
  return;
}



// FUNCTION 14d9a9d3d FUN_14d9a9d3d body=107 status=ok
// SIG undefined FUN_14d9a9d3d(void)

/* WARNING: Instruction at (ram,0x000164ef112a) overlaps instruction at (ram,0x000164ef1128)
    */
/* WARNING: Removing unreachable block (ram,0x000164ef1125) */
/* WARNING: Removing unreachable block (ram,0x000164ef1131) */
/* WARNING: Removing unreachable block (ram,0x000164ef1137) */
/* WARNING: Removing unreachable block (ram,0x000164ef1127) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9da9) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e37) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e3c) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e42) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e47) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e4d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9a9d3d(void)

{
  uRam0000000160baa317 = 0xff8b0824648d48e6;
                    /* WARNING: Read-only address (ram,0x000160baa317) is written */
  return;
                    /* WARNING: Read-only address (ram,0x000160baa317) is written */
}



// FUNCTION 14d9a9da9 FUN_14d9a9da9 body=157 status=ok
// SIG undefined FUN_14d9a9da9(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a9e47) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e4d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a9e50) */

void FUN_14d9a9da9(void)

{
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -0x58) != 0) {
    FUN_14da80685();
    return;
  }
  FUN_14da80685();
  return;
}



// FUNCTION 14d9a9e47 FUN_14d9a9e47 body=29 status=ok
// SIG undefined FUN_14d9a9e47(void)

void FUN_14d9a9e47(void)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(unaff_retaddr);
  return;
}



// FUNCTION 14d9a9fa8 FUN_14d9a9fa8 body=531 status=ok
// SIG undefined FUN_14d9a9fa8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9a9ff8) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa004) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa00a) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa084) */
/* WARNING: Removing unreachable block (ram,0x000156863959) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa090) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa1ab) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa1b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa1b6) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa1c1) */
/* WARNING: Removing unreachable block (ram,0x00014dc74742) */
/* WARNING: Removing unreachable block (ram,0x0001612a3576) */

void FUN_14d9a9fa8(undefined8 param_1,undefined8 param_2)

{
  FUN_166932d8a(param_1,param_2,FUN_166932d8a);
  return;
}



// FUNCTION 14d9aa128 FUN_14d9aa128 body=308 status=ok
// SIG undefined FUN_14d9aa128(void)

/* WARNING: Removing unreachable block (ram,0x00014d9aa1c1) */

void FUN_14d9aa128(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = *(ulonglong *)(unaff_RDI + -0x68) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2;
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_RDI + -0x88) + param_1 +
           (*(ulonglong *)(unaff_RDI + -0x88) & param_1) * -2)) {
    FUN_16689c430(param_1,lVar1);
    return;
  }
  FUN_16689c430(param_1,lVar1);
  return;
}



// FUNCTION 14d9aa4ae FUN_14d9aa4ae body=145 status=ok
// SIG undefined FUN_14d9aa4ae(void)

void FUN_14d9aa4ae(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d7aa7bd(param_1,local_res8);
  return;
}



// FUNCTION 14d9aa5f9 FUN_14d9aa5f9 body=116 status=ok
// SIG undefined FUN_14d9aa5f9(void)

/* WARNING: Removing unreachable block (ram,0x000164c4030d) */
/* WARNING: Removing unreachable block (ram,0x000156fb433b) */
/* WARNING: Removing unreachable block (ram,0x000156fb4341) */
/* WARNING: Removing unreachable block (ram,0x000156fb43c7) */
/* WARNING: Removing unreachable block (ram,0x000156fb43cc) */
/* WARNING: Removing unreachable block (ram,0x000156fb43d2) */
/* WARNING: Removing unreachable block (ram,0x000165dc5f7d) */
/* WARNING: Removing unreachable block (ram,0x000162cd3246) */
/* WARNING: Removing unreachable block (ram,0x000162cd324c) */
/* WARNING: Removing unreachable block (ram,0x000162cd3215) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa669) */
/* WARNING: Removing unreachable block (ram,0x000156fb42a8) */

undefined8 FUN_14d9aa5f9(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (~(~*(ulonglong *)(unaff_R13 + -0x48) | ~unaff_R15) * 2 <=
      *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15) {
    uVar1 = FUN_162cd31a4();
    return uVar1;
  }
  if (-1 < (longlong)(-~unaff_R15 - (~*(ulonglong *)(unaff_R13 + -0x50) + 2))) {
    uVar1 = FUN_1653d51c8();
    return uVar1;
  }
  uVar1 = FUN_1653d51c8();
  return uVar1;
}



// FUNCTION 14d9aa66f FUN_14d9aa66f body=133 status=ok
// SIG undefined FUN_14d9aa66f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9aa6f4) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa70d) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa710) */

void FUN_14d9aa66f(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x40)) &
      (~*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP)) == 0) {
    FUN_15b71f8b2();
    return;
  }
  FUN_15b71f8b2();
  return;
}



// FUNCTION 14d9aa6f4 FUN_14d9aa6f4 body=73 status=ok
// SIG undefined FUN_14d9aa6f4(void)

void FUN_14d9aa6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_res8;
  undefined1 auStackX_10 [24];
  
  puVar1 = (ulonglong *)auStackX_10;
  if (param_4 == -0x572dba77) {
    *unaff_RDI = *unaff_RSI;
    puVar1 = &local_res8;
    local_res8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                 (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
                 (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  }
  *(undefined8 *)((longlong)puVar1 + -8) = param_2;
  FUN_165e93f27(param_1,*(undefined8 *)((longlong)puVar1 + -8),param_3,0x14d7acd31);
  return;
}



// FUNCTION 14d9aa815 FUN_14d9aa815 body=301 status=ok
// SIG undefined FUN_14d9aa815(void)

/* WARNING: Removing unreachable block (ram,0x000161e1995b) */
/* WARNING: Removing unreachable block (ram,0x000161e19961) */
/* WARNING: Removing unreachable block (ram,0x000161e1993e) */
/* WARNING: Removing unreachable block (ram,0x00016164d518) */
/* WARNING: Removing unreachable block (ram,0x00016164d51e) */
/* WARNING: Removing unreachable block (ram,0x00015b41d1e7) */
/* WARNING: Removing unreachable block (ram,0x00016164d33a) */
/* WARNING: Removing unreachable block (ram,0x00016164d340) */
/* WARNING: Removing unreachable block (ram,0x00016164d45e) */
/* WARNING: Removing unreachable block (ram,0x00016164d466) */
/* WARNING: Removing unreachable block (ram,0x00016164d483) */
/* WARNING: Removing unreachable block (ram,0x00016164d48f) */
/* WARNING: Removing unreachable block (ram,0x00016164d49c) */
/* WARNING: Removing unreachable block (ram,0x00016164d4a8) */
/* WARNING: Removing unreachable block (ram,0x00016164d4ba) */
/* WARNING: Removing unreachable block (ram,0x00016164d4b5) */
/* WARNING: Removing unreachable block (ram,0x00016164d503) */
/* WARNING: Removing unreachable block (ram,0x000166ac98c2) */
/* WARNING: Removing unreachable block (ram,0x000166ac98d7) */
/* WARNING: Removing unreachable block (ram,0x000166ac990f) */
/* WARNING: Removing unreachable block (ram,0x000166ac9930) */
/* WARNING: Removing unreachable block (ram,0x000166ac994e) */
/* WARNING: Removing unreachable block (ram,0x000166ac9953) */
/* WARNING: Removing unreachable block (ram,0x000166ac9959) */
/* WARNING: Removing unreachable block (ram,0x000166ac995e) */
/* WARNING: Removing unreachable block (ram,0x000166ac9964) */
/* WARNING: Removing unreachable block (ram,0x000166ac996f) */
/* WARNING: Removing unreachable block (ram,0x000166ac99e9) */
/* WARNING: Removing unreachable block (ram,0x000166ac99ee) */
/* WARNING: Removing unreachable block (ram,0x000166ac99fa) */
/* WARNING: Removing unreachable block (ram,0x000160eda7a0) */
/* WARNING: Removing unreachable block (ram,0x00015b41d060) */
/* WARNING: Removing unreachable block (ram,0x000161591f77) */
/* WARNING: Removing unreachable block (ram,0x000161591ff9) */
/* WARNING: Removing unreachable block (ram,0x000161591ff4) */
/* WARNING: Removing unreachable block (ram,0x000161591ffc) */
/* WARNING: Removing unreachable block (ram,0x00015b41d1dc) */
/* WARNING: Removing unreachable block (ram,0x00015b41d1e2) */
/* WARNING: Removing unreachable block (ram,0x000166ac9a8f) */
/* WARNING: Removing unreachable block (ram,0x000166ac9a95) */
/* WARNING: Removing unreachable block (ram,0x000166ac9ae0) */
/* WARNING: Removing unreachable block (ram,0x00016602efda) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa940) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa946) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa8b1) */
/* WARNING: Removing unreachable block (ram,0x00016164d28a) */
/* WARNING: Removing unreachable block (ram,0x00016164d28f) */
/* WARNING: Removing unreachable block (ram,0x000161e198ef) */
/* WARNING: Removing unreachable block (ram,0x000161e198fa) */
/* WARNING: Removing unreachable block (ram,0x000161e19904) */
/* WARNING: Removing unreachable block (ram,0x000161e19907) */
/* WARNING: Removing unreachable block (ram,0x000161e1990a) */

undefined8 FUN_14d9aa815(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  uint unaff_R12D;
  bool bVar2;
  
  if ((int)(-1 - ((~((unaff_R12D ^ 0xffffffff) & 0x5b8e1291) + 0x5b8e1291) -
                 ~(unaff_R12D ^ 0xffffffff))) < 0) {
    uVar1 = FUN_16483150e();
    return uVar1;
  }
  bVar2 = *(longlong *)(unaff_RDI + -0x28) == param_1;
  FUN_166636aa6(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  if (bVar2) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  uVar1 = (*(code *)0x16214d327)(param_1);
  return uVar1;
}



// FUNCTION 14d9aa946 FUN_14d9aa946 body=155 status=ok
// SIG undefined FUN_14d9aa946(void)

void FUN_14d9aa946(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff2103b13 + unaff_retaddr) = param_1;
  uVar1 = 0x59f22b01;
  *(undefined8 *)(&stack0xfffffffff2103b13 + unaff_retaddr) = 0x14d9aa9cf;
  FUN_1668aab6a();
  *(undefined8 *)(&stack0xfffffffff2103b1b + unaff_retaddr) = uVar1;
  *(undefined8 *)(&stack0xfffffffff2103b13 + unaff_retaddr) = uVar1;
  *(undefined1 **)(&stack0xfffffffff2103b1b + unaff_retaddr) = &LAB_14d9aa9e2;
  return;
}



// FUNCTION 14d9aaaf9 FUN_14d9aaaf9 body=469 status=ok
// SIG undefined FUN_14d9aaaf9(void)

/* WARNING: Removing unreachable block (ram,0x00014d9aab80) */
/* WARNING: Removing unreachable block (ram,0x00014d9aab86) */
/* WARNING: Removing unreachable block (ram,0x00015b487cb9) */
/* WARNING: Removing unreachable block (ram,0x00015b487d3e) */
/* WARNING: Removing unreachable block (ram,0x00015b487d44) */
/* WARNING: Removing unreachable block (ram,0x000161b9ccf5) */
/* WARNING: Removing unreachable block (ram,0x00014d9aac01) */
/* WARNING: Removing unreachable block (ram,0x00014d9aac07) */
/* WARNING: Removing unreachable block (ram,0x00014d9aac2a) */
/* WARNING: Removing unreachable block (ram,0x00014d9aac2e) */

void FUN_14d9aaaf9(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong unaff_RDI;
  longlong unaff_R14;
  longlong in_stack_00000008;
  undefined8 local_res10;
  
  FUN_161b288c4(param_1,local_res10,param_3);
  puVar1 = (ulonglong *)(&stack0xfffffffffffffff8 + unaff_R14);
  *(undefined4 *)puVar1 = 0xac312a02;
  *(undefined4 *)(&stack0xfffffffffffffffc + unaff_R14) = 0xffffffff;
  param_1 = *(ulonglong *)((in_stack_00000008 - unaff_RDI) + -0x58) ^ param_1;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(&stack0xfffffffffffffffc + unaff_R14) = 0;
  *(undefined4 *)(&stack0xfffffffffffffffc + unaff_R14) =
       *(undefined4 *)(&stack0xfffffffffffffffc + unaff_R14);
  *puVar1 = param_1;
  *(ulonglong *)(&stack0xfffffffffffffff0 + unaff_R14) = param_1;
  *puVar1 = (ulonglong)&LAB_160daa76b;
  FUN_14dbd1bf9();
  return;
}



// FUNCTION 14d9aafb9 FUN_14d9aafb9 body=144 status=ok
// SIG undefined FUN_14d9aafb9(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ab03f) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab04a) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab045) */

void FUN_14d9aafb9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14d7aaac2(local_res10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9ab04a FUN_14d9ab04a body=161 status=ok
// SIG undefined FUN_14d9ab04a(void)

void FUN_14d9ab04a(void)

{
  return;
}



// FUNCTION 14d9ab0eb FUN_14d9ab0eb body=169 status=ok
// SIG undefined FUN_14d9ab0eb(void)

void FUN_14d9ab0eb(void)

{
  undefined8 local_res18;
  
  (*(code *)&LAB_160efc890)(CONCAT62(0xff0000,ActiveRpcHandle._4_2_),local_res18);
  return;
}



// FUNCTION 14d9ab221 FUN_14d9ab221 body=151 status=ok
// SIG undefined FUN_14d9ab221(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ab24f) */

void FUN_14d9ab221(undefined8 param_1,undefined8 param_2)

{
  FUN_16642c341(FUN_16642c341,param_2);
  return;
}



// FUNCTION 14d9ab352 thunk_FUN_14d9ab358 body=5 status=ok
// SIG undefined thunk_FUN_14d9ab358(void)

ulonglong thunk_FUN_14d9ab358(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~param_1 | *(ulonglong *)(unaff_RDI + -0x60);
}



// FUNCTION 14d9ab358 FUN_14d9ab358 body=130 status=ok
// SIG undefined FUN_14d9ab358(void)

ulonglong FUN_14d9ab358(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~param_1 | *(ulonglong *)(unaff_RDI + -0x60);
}



// FUNCTION 14d9ab474 FUN_14d9ab474 body=189 status=ok
// SIG undefined FUN_14d9ab474(void)

undefined8 FUN_14d9ab474(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d9ab534 FUN_14d9ab534 body=10 status=ok
// SIG undefined FUN_14d9ab534(void)

void FUN_14d9ab534(void)

{
  return;
}



// FUNCTION 14d9ab53e FUN_14d9ab53e body=148 status=ok
// SIG undefined FUN_14d9ab53e(void)

void FUN_14d9ab53e(void)

{
  longlong in_R9;
  
  if (in_R9 != 0xc0e08) {
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14d9ab5d4 FUN_14d9ab5d4 body=593 status=ok
// SIG undefined FUN_14d9ab5d4(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ab6de) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab6d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab6e3) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab668) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab673) */
/* WARNING: Removing unreachable block (ram,0x000165e0edd1) */
/* WARNING: Removing unreachable block (ram,0x00015b871c9b) */
/* WARNING: Removing unreachable block (ram,0x000165e0eef8) */
/* WARNING: Removing unreachable block (ram,0x000165e0eefe) */
/* WARNING: Removing unreachable block (ram,0x000165e0ef03) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab66e) */
/* WARNING: Removing unreachable block (ram,0x00015b4dbb16) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9ab5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x166776c1a)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9ab6e3 FUN_14d9ab6e3 body=15 status=ok
// SIG undefined FUN_14d9ab6e3(void)

void FUN_14d9ab6e3(void)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(local_res8);
  return;
}



// FUNCTION 14d9ab825 FUN_14d9ab825 body=460 status=ok
// SIG undefined FUN_14d9ab825(void)

/* WARNING: Removing unreachable block (ram,0x000156eebd8b) */
/* WARNING: Removing unreachable block (ram,0x00014d9ab8cb) */

void FUN_14d9ab825(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16697f6c5(param_1,param_2,param_3,&stack0xfffffffffffffff0);
  return;
}



// FUNCTION 14d9aba16 FUN_14d9aba16 body=266 status=ok
// SIG undefined FUN_14d9aba16(void)

void FUN_14d9aba16(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 unaff_SIL;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  ulonglong in_R11;
  undefined8 unaff_retaddr;
  
  FUN_161baa830(param_1,unaff_SIL,(param_4 - (in_R11 | param_4)) + in_R11,
                *(ulonglong *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x60) ^ param_1);
  FUN_14dddad9b(unaff_retaddr);
  return;
}



// FUNCTION 14d9abb8d FUN_14d9abb8d body=296 status=ok
// SIG undefined FUN_14d9abb8d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9abc1f) */
/* WARNING: Removing unreachable block (ram,0x00014d9abc2a) */
/* WARNING: Removing unreachable block (ram,0x00014d9abcb9) */
/* WARNING: Removing unreachable block (ram,0x00014d9abcbf) */
/* WARNING: Removing unreachable block (ram,0x00014e0a50ff) */
/* WARNING: Removing unreachable block (ram,0x00014d9abc25) */

void FUN_14d9abb8d(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  ulonglong in_R11;
  ulonglong local_res18;
  
  uVar2 = local_res18 ^ in_RAX;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ in_R11;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *puVar1 = (ulonglong)&LAB_165307dc0;
  uVar3 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x10) = uVar3;
  *(undefined8 *)(uVar2 - 0x18) = uVar3;
  *(undefined **)(uVar2 - 0x10) = &DAT_14d7a8303;
  return;
}



// FUNCTION 14d9abcbf thunk_FUN_14d9abcc5 body=5 status=ok
// SIG undefined thunk_FUN_14d9abcc5(void)

void thunk_FUN_14d9abcc5(void)

{
  return;
}



// FUNCTION 14d9abcc5 FUN_14d9abcc5 body=127 status=ok
// SIG undefined FUN_14d9abcc5(void)

void FUN_14d9abcc5(void)

{
  return;
}



// FUNCTION 14d9abd45 FUN_14d9abd45 body=172 status=ok
// SIG undefined FUN_14d9abd45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9abd45(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  ulonglong uStackX_18;
  undefined1 auStackX_20 [8];
  
  *(ulonglong *)((longlong)&uStackX_18 + param_2) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  uVar10 = *(ulonglong *)((longlong)&uStackX_18 + param_2);
  *(undefined1 **)((longlong)&uStackX_18 + param_2) = auStackX_20 + param_2;
  puVar1 = *(ulonglong **)((longlong)&uStackX_18 + param_2);
  puVar1[-1] = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar10 = puVar1[-1];
  bVar7 = (uVar10 & 0x4000) != 0;
  bVar6 = (uVar10 & 0x400) != 0;
  bVar5 = (uVar10 & 0x200) != 0;
  bVar4 = (uVar10 & 0x100) != 0;
  bVar3 = (uVar10 & 0x10) != 0;
  bVar9 = (uVar10 & 0x200000) != 0;
  bVar8 = (uVar10 & 0x40000) != 0;
  *puVar1 = (ulonglong)bVar7 * 0x4000 | (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
            (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar4 * 0x100 |
            (ulonglong)((uVar10 & 0x80) != 0) * 0x80 | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 |
            (ulonglong)bVar3 * 0x10 | (ulonglong)((uVar10 & 4) != 0) * 4 |
            (ulonglong)((uVar10 & 1) != 0) | (ulonglong)bVar9 * 0x200000 |
            (ulonglong)bVar8 * 0x40000;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0xbb264c60;
  uVar10 = puVar1[-1];
  uVar2 = puVar1[-1];
  *(int *)(puVar1 + -1) = (int)puVar1[-1] + 0x72a34114;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  puVar1[-2] = (ulonglong)bVar7 * 0x4000 | (ulonglong)SCARRY4((int)uVar2,0x72a34114) * 0x800 |
               (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar4 * 0x100 |
               (ulonglong)((int)puVar1[-1] < 0) * 0x80 | (ulonglong)((int)puVar1[-1] == 0) * 0x40 |
               (ulonglong)bVar3 * 0x10 |
               (ulonglong)((POPCOUNT((uint)puVar1[-1] & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(0x8d5cbeeb < (uint)uVar10) | (ulonglong)bVar9 * 0x200000 |
               (ulonglong)bVar8 * 0x40000;
  uVar10 = puVar1[-2];
  puVar1[-2] = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  (*(code *)&LAB_161bfbb3b)(param_1,&LAB_161bfbb3b);
  return;
}



// FUNCTION 14d9abdf4 FUN_14d9abdf4 body=122 status=ok
// SIG undefined FUN_14d9abdf4(void)

undefined8 FUN_14d9abdf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  *(undefined8 *)(local_res8 + -8) = param_2;
  *(undefined8 *)(local_res8 + -0x10) = param_2;
  *(ulonglong *)(local_res8 + -0x18) =
       (ulonglong)((unaff_retaddr & 0x4000) != 0) * 0x4000 |
       (ulonglong)((unaff_retaddr & 0x800) != 0) * 0x800 |
       (ulonglong)((unaff_retaddr & 0x400) != 0) * 0x400 |
       (ulonglong)((unaff_retaddr & 0x200) != 0) * 0x200 |
       (ulonglong)((unaff_retaddr & 0x100) != 0) * 0x100 |
       (ulonglong)((unaff_retaddr & 0x80) != 0) * 0x80 |
       (ulonglong)((unaff_retaddr & 0x40) != 0) * 0x40 |
       (ulonglong)((unaff_retaddr & 0x10) != 0) * 0x10 | (ulonglong)((unaff_retaddr & 4) != 0) * 4 |
       (ulonglong)((unaff_retaddr & 1) != 0) |
       (ulonglong)((unaff_retaddr & 0x200000) != 0) * 0x200000 |
       (ulonglong)((unaff_retaddr & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res8 + -0x20) = 0x2db717b;
  *(longlong *)(local_res8 + -0x20) = *(longlong *)(local_res8 + -0x20) + -0x2031ff7;
  uVar3 = *(ulonglong *)(local_res8 + -0x18);
  *(undefined8 *)(local_res8 + -0x18) = in_RAX;
  *(ulonglong *)(local_res8 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res8 + -8) = 0xd85184;
  uVar2 = *(undefined8 *)(local_res8 + -0x18);
  uVar1 = *(undefined8 *)(local_res8 + -0x10);
  *(undefined8 *)(local_res8 + -0x10) = uVar1;
  *(undefined8 *)(local_res8 + -0x18) = uVar1;
  *(undefined8 *)(local_res8 + -0x10) = 0x156ef2e25;
  return uVar2;
}



// FUNCTION 14d9ac18d FUN_14d9ac18d body=354 status=ok
// SIG undefined FUN_14d9ac18d(void)

/* WARNING: Removing unreachable block (ram,0x000156efb5c4) */
/* WARNING: Removing unreachable block (ram,0x00014d9ac28b) */

void FUN_14d9ac18d(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined1 auStack_7b80 [31584];
  
  FUN_16602d645(param_1,param_2);
  FUN_1573936ca();
  uVar1 = *(ulonglong *)
           (0x7aea - (((ulonglong)(auStack_7b80 + ~-unaff_R13) ^ 0xffffffffffffffff) + 2));
  if (((unaff_R15 ^ 0xffffffffffffffff | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1) !=
      0xffffffffffffffff) {
    FUN_166887c57();
    return;
  }
  FUN_1611733c3();
  return;
}



// FUNCTION 14d9ac65e FUN_14d9ac65e body=185 status=ok
// SIG undefined FUN_14d9ac65e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ac6f2) */

void FUN_14d9ac65e(undefined8 param_1,undefined8 param_2)

{
  FUN_15af816f9(param_1,param_2);
  return;
}



// FUNCTION 14d9ac895 FUN_14d9ac895 body=276 status=ok
// SIG undefined FUN_14d9ac895(void)

/* WARNING: Removing unreachable block (ram,0x000160e72d79) */
/* WARNING: Removing unreachable block (ram,0x00016129ae98) */
/* WARNING: Removing unreachable block (ram,0x00016129ae7f) */
/* WARNING: Removing unreachable block (ram,0x00016129ae85) */
/* WARNING: Removing unreachable block (ram,0x00016129ae93) */
/* WARNING: Removing unreachable block (ram,0x00016129aeb1) */
/* WARNING: Removing unreachable block (ram,0x00016129aef7) */
/* WARNING: Removing unreachable block (ram,0x00016129af02) */
/* WARNING: Removing unreachable block (ram,0x00016129aeb6) */
/* WARNING: Removing unreachable block (ram,0x000160e72f09) */
/* WARNING: Removing unreachable block (ram,0x00016129ad5c) */
/* WARNING: Removing unreachable block (ram,0x000162a79b76) */
/* WARNING: Removing unreachable block (ram,0x00014d9ac92b) */

undefined8 FUN_14d9ac895(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong uVar6;
  ulonglong uStackX_8;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R12 + -0x48) ^ in_RAX)) {
    uVar5 = FUN_160e72d66();
    return uVar5;
  }
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  uVar3 = FUN_15b6df169();
  uVar6 = *(ulonglong *)(unaff_R12 + -8);
  uVar2 = *(ulonglong *)(unaff_R12 + -0xa0);
  uVar5 = FUN_156cb3089();
  uVar6 = uVar6 ^ uVar3 ^ unaff_R15;
  lVar4 = (-unaff_R15 - (uStackX_8 ^ uVar3)) + (uStackX_8 ^ uVar3 | unaff_R15) * 2;
  *(undefined8 *)(lVar4 + -8) = param_3;
  *(undefined8 *)(lVar4 + -0x10) = param_3;
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x80) != 0) * 0x80 | (ulonglong)((uVar6 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar6 & 0x10) != 0) * 0x10 | (ulonglong)((uVar6 & 4) != 0) * 4 |
       (ulonglong)((uVar6 & 1) != 0) | (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -0x20) = 0xe37aff5;
  *(longlong *)(lVar4 + -0x20) = *(longlong *)(lVar4 + -0x20) + -0x97c4b23;
  uVar6 = *(ulonglong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       ~(((~(0xffffffffffffffff - in_RAX) | ~uVar1) + uVar1) - ~(0xffffffffffffffff - in_RAX) &
        (uVar1 ^ 0xffffffffffffffff | in_RAX));
  *(ulonglong *)(lVar4 + -0x20) = uVar2 ^ uVar3;
  *(ulonglong *)(lVar4 + -0x28) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -8) = 0x4bb64d2;
                    /* WARNING: Read-only address (ram,0x00014d7a4d7a) is written */
  *(undefined8 *)(lVar4 + -0x28cf) = 0xffffffffffffff70;
  *(undefined8 *)(lVar4 + -0x28d7) = 0xffffffffffffff70;
  *(undefined **)(lVar4 + -0x28cf) = &DAT_156ef2e4a;
  return uVar5;
}



// FUNCTION 14d9acae7 FUN_14d9acae7 body=140 status=ok
// SIG undefined FUN_14d9acae7(void)

/* WARNING: Removing unreachable block (ram,0x00014d9acb74) */

ulonglong FUN_14d9acae7(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  lVar2 = *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  if (*(longlong *)(unaff_RDI + -0x70) != 0) {
    return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
  }
  uVar1 = FUN_15b4397be(param_1,lVar2,-*(longlong *)(unaff_RDI + -0x70),lVar2);
  return uVar1;
}



// FUNCTION 14d9acb74 FUN_14d9acb74 body=14 status=ok
// SIG undefined FUN_14d9acb74(void)

void FUN_14d9acb74(void)

{
  return;
}



// FUNCTION 14d9acc0f FUN_14d9acc0f body=13 status=ok
// SIG undefined FUN_14d9acc0f(void)

void FUN_14d9acc0f(void)

{
  return;
}



// FUNCTION 14d9acd4f FUN_14d9acd4f body=142 status=ok
// SIG undefined FUN_14d9acd4f(void)

void FUN_14d9acd4f(undefined8 param_1,undefined8 param_2)

{
  FUN_16187289b(param_1,param_2,FUN_16187289b);
  return;
}



// FUNCTION 14d9acdde FUN_14d9acdde body=168 status=ok
// SIG undefined FUN_14d9acdde(void)

void FUN_14d9acdde(void)

{
  undefined8 unaff_RBP;
  undefined4 in_stack_00000008;
  undefined8 uStackX_20;
  
  *(undefined8 *)(&stack0x5f01d158 + CONCAT44(0xffffffff,in_stack_00000008)) = unaff_RBP;
  (*(code *)&LAB_165bbe698)(uStackX_20);
  return;
}



// FUNCTION 14d9acf3a FUN_14d9acf3a body=149 status=ok
// SIG undefined FUN_14d9acf3a(void)

void FUN_14d9acf3a(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_R11;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)
           (unaff_R12 + ~(~(in_R11 & 0xffffffffc8924ffe) & (in_R11 | 0xffffffffc8924ffe)));
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | param_1;
  *(ulonglong *)(unaff_R12 + 8) =
       ~(0xffffffffffffffff - (~param_2 & ~uVar1) & *(ulonglong *)(unaff_R12 + 8));
  FUN_16101fde7(param_1,FUN_16101fde7);
  return;
}



// FUNCTION 14d9acfd0 thunk_FUN_14d9acfd6 body=5 status=ok
// SIG undefined thunk_FUN_14d9acfd6(void)

void thunk_FUN_14d9acfd6(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(unaff_R12 + 8) = (in_RAX - (unaff_R15 | in_RAX)) + *(longlong *)(unaff_R12 + 8);
  FUN_160f51352(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9acfd6 FUN_14d9acfd6 body=134 status=ok
// SIG undefined FUN_14d9acfd6(void)

void FUN_14d9acfd6(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(unaff_R12 + 8) = (in_RAX - (unaff_R15 | in_RAX)) + *(longlong *)(unaff_R12 + 8);
  FUN_160f51352(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9ad176 FUN_14d9ad176 body=77 status=ok
// SIG undefined FUN_14d9ad176(void)

void FUN_14d9ad176(void)

{
  return;
}



// FUNCTION 14d9ad216 FUN_14d9ad216 body=293 status=ok
// SIG undefined FUN_14d9ad216(void)

void FUN_14d9ad216(ulonglong param_1)

{
  undefined8 unaff_RBP;
  undefined8 in_R10;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  undefined2 local_res18;
  undefined8 local_res20;
  
  local_res18 = local_res18 ^ (ushort)param_1;
  FUN_1578a5488(in_stack_00000010,0xff - ~(0xffff - local_res18));
  *(undefined8 *)((local_res20 ^ param_1 ^ unaff_R15) - 8) = in_R10;
  (*(code *)0x161ade94f)(unaff_RBP);
  return;
}



// FUNCTION 14d9ad46b FUN_14d9ad46b body=170 status=ok
// SIG undefined FUN_14d9ad46b(void)

void FUN_14d9ad46b(undefined8 param_1,undefined8 param_2)

{
  FUN_157342e0f(param_1,param_2);
  return;
}



// FUNCTION 14d9ad59e FUN_14d9ad59e body=395 status=ok
// SIG undefined FUN_14d9ad59e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad62e) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6a2) */
/* WARNING: Removing unreachable block (ram,0x00016272a3c1) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6ae) */
/* WARNING: Removing unreachable block (ram,0x000165f13f28) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad618) */

void FUN_14d9ad59e(void)

{
  FUN_156dd5163();
  return;
}



// FUNCTION 14d9ad6ae FUN_14d9ad6ae body=274 status=ok
// SIG undefined FUN_14d9ad6ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */

void FUN_14d9ad6ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14dfead3d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9add92 FUN_14d9add92 body=257 status=ok
// SIG undefined FUN_14d9add92(void)

/* WARNING: Removing unreachable block (ram,0x00014d9addc4) */

void FUN_14d9add92(void)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_156474d63(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),uVar1);
  FUN_166bb6a91(-unaff_R15,~uVar1 & unaff_RSI);
  return;
}



// FUNCTION 14d9ade95 FUN_14d9ade95 body=139 status=ok
// SIG undefined FUN_14d9ade95(void)

void FUN_14d9ade95(undefined8 param_1,undefined8 param_2)

{
  longlong in_R10;
  ulonglong unaff_R15;
  ulonglong local_res8 [2];
  ushort local_res18;
  ulonglong local_res20;
  
  local_res20 = ~(local_res20 & unaff_R15) &
                (*(ulonglong *)((longlong)local_res8 + in_R10) | unaff_R15);
  local_res18 = (~(~local_res18 & 0x100) + 0x100) - local_res18;
  local_res8[1] = param_1;
  FUN_16173f274(FUN_16173f274,param_2);
  return;
}



// FUNCTION 14d9adf20 FUN_14d9adf20 body=32 status=ok
// SIG undefined FUN_14d9adf20(void)

void FUN_14d9adf20(void)

{
  return;
}



// FUNCTION 14d9adf9c FUN_14d9adf9c body=48 status=ok
// SIG undefined FUN_14d9adf9c(void)

void FUN_14d9adf9c(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBX;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + (unaff_RBX & param_2)) = param_1;
  return;
}



// FUNCTION 14d9ae17a FUN_14d9ae17a body=133 status=ok
// SIG undefined FUN_14d9ae17a(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ae2a9) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae2b4) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae32e) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae334) */
/* WARNING: Removing unreachable block (ram,0x0001648e7576) */
/* WARNING: Removing unreachable block (ram,0x0001648e75fd) */
/* WARNING: Removing unreachable block (ram,0x0001648e7603) */
/* WARNING: Removing unreachable block (ram,0x0001618126e5) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae2af) */

undefined8 FUN_14d9ae17a(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  
  FUN_15653f9a8(param_1,~((~(~unaff_R15 | param_2) & ~(~param_2 | unaff_R15) | ~unaff_R15 | param_2)
                          + (~param_2 | unaff_R15) + 1));
  uVar1 = FUN_1567ac7a0();
  return uVar1;
}



// FUNCTION 14d9ae200 FUN_14d9ae200 body=180 status=ok
// SIG undefined FUN_14d9ae200(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ae2a9) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae2b4) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae32e) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae334) */
/* WARNING: Removing unreachable block (ram,0x0001648e7576) */
/* WARNING: Removing unreachable block (ram,0x0001648e75fd) */
/* WARNING: Removing unreachable block (ram,0x0001648e7603) */
/* WARNING: Removing unreachable block (ram,0x0001618126e5) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae2af) */

undefined8 FUN_14d9ae200(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1567ac7a0();
  return uVar1;
}



// FUNCTION 14d9ae2b4 FUN_14d9ae2b4 body=126 status=ok
// SIG undefined FUN_14d9ae2b4(void)

/* WARNING: Removing unreachable block (ram,0x0001648e7603) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae334) */

undefined8 FUN_14d9ae2b4(void)

{
  return 0x1663df9c0;
}



// FUNCTION 14d9ae334 FUN_14d9ae334 body=160 status=ok
// SIG undefined FUN_14d9ae334(void)

void FUN_14d9ae334(void)

{
  FUN_160cc5ed1();
  return;
}



// FUNCTION 14d9ae3d6 FUN_14d9ae3d6 body=135 status=ok
// SIG undefined FUN_14d9ae3d6(void)

void FUN_14d9ae3d6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  bool bVar4;
  bool bVar5;
  undefined8 unaff_retaddr;
  byte local_res18;
  longlong local_res20;
  
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  uVar1 = 0xffffffffffffffffU - local_res20 & in_R11;
  param_5 = param_5 ^ param_1;
  LOCK();
  bVar3 = (byte)in_RAX;
  bVar4 = bVar3 < DAT_14d7abf3d;
  bVar5 = SBORROW1(bVar3,DAT_14d7abf3d);
  cVar2 = bVar3 - DAT_14d7abf3d;
  if (cVar2 == '\0') {
    DAT_14d7abf3d = local_res18;
  }
  else {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7abf3d);
  }
  UNLOCK();
  *(undefined8 *)(param_5 - 8) = in_RAX;
  *(undefined8 *)(param_5 - 0x18) = unaff_R14;
  *(undefined8 *)(param_5 - 0x10) = in_RAX;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x28) = unaff_retaddr;
  *(undefined8 *)(param_5 - 0x20) = 0x1389f76e;
  *(undefined8 *)(param_5 - 0x28) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x30) = param_2;
  *(longlong *)(param_5 - 0x20) = *(longlong *)(param_5 - 0x20) + -0xfe120a8;
  *(undefined1 **)(param_5 - 0x30) = &LAB_16237fd4e;
  return;
}



// FUNCTION 14d9ae45f FUN_14d9ae45f body=239 status=ok
// SIG undefined FUN_14d9ae45f(void)

void FUN_14d9ae45f(undefined8 param_1)

{
  FUN_1663ebf3a(param_1);
  (*(code *)0x1668b7081)();
  return;
}



// FUNCTION 14d9ae6a2 FUN_14d9ae6a2 body=143 status=ok
// SIG undefined FUN_14d9ae6a2(void)

void FUN_14d9ae6a2(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  *(ulonglong *)(in_R11 + 0x18) = ~*(ulonglong *)(in_R11 + 0x18);
  *(ulonglong *)(in_R11 + 0x18) = *(ulonglong *)(in_R11 + 0x18) | ~in_R10;
  *(ulonglong *)(in_R11 + 0x18) = ~*(ulonglong *)(in_R11 + 0x18);
  return;
}



// FUNCTION 14d9ae90f FUN_14d9ae90f body=260 status=ok
// SIG undefined FUN_14d9ae90f(void)

/* WARNING: Removing unreachable block (ram,0x00016182826b) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae98c) */
/* WARNING: Removing unreachable block (ram,0x00014d9ae992) */
/* WARNING: Removing unreachable block (ram,0x00016182820c) */
/* WARNING: Removing unreachable block (ram,0x000161828206) */
/* WARNING: Removing unreachable block (ram,0x0001647245e7) */
/* WARNING: Removing unreachable block (ram,0x000161828198) */

void FUN_14d9ae90f(void)

{
  FUN_166829d8c();
  FUN_1662f7c13();
  FUN_1647245e7();
  return;
}



// FUNCTION 14d9aec12 FUN_14d9aec12 body=155 status=ok
// SIG undefined FUN_14d9aec12(void)

undefined8 FUN_14d9aec12(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9aecae FUN_14d9aecae body=295 status=ok
// SIG undefined FUN_14d9aecae(void)

/* WARNING: Removing unreachable block (ram,0x00014d9aecd4) */
/* WARNING: Removing unreachable block (ram,0x00014d9aed41) */

void FUN_14d9aecae(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_165813402(~(~*(ulonglong *)(unaff_R13 + -0x48) & ~unaff_R15),
                -*(ulonglong *)(unaff_R13 + -0x48),
                ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1,
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14d9aef3b FUN_14d9aef3b body=126 status=ok
// SIG undefined FUN_14d9aef3b(void)

undefined8 FUN_14d9aef3b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9af061 FUN_14d9af061 body=132 status=ok
// SIG undefined FUN_14d9af061(void)

void FUN_14d9af061(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  longlong unaff_retaddr;
  
  uVar1 = *(undefined8 *)(&stack0xfffffffff6b53901 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff6b53901 + unaff_retaddr) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff6b538f9 + unaff_retaddr) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff6b53901 + unaff_retaddr) = uVar1;
  *(undefined8 *)(&stack0xfffffffff6b538f9 + unaff_retaddr) = param_1;
  FUN_160fbb486(&stack0xfffffffff6b53909 + unaff_retaddr,
                ~((0xffffffffffffffff - in_R10 | param_2) &
                 ~(~(param_2 ^ 0xffffffffffffffff) & ~in_R10)));
  return;
}



// FUNCTION 14d9af187 FUN_14d9af187 body=270 status=ok
// SIG undefined FUN_14d9af187(void)

/* WARNING: Removing unreachable block (ram,0x00014d9af1ac) */
/* WARNING: Removing unreachable block (ram,0x00014d9af1d0) */
/* WARNING: Removing unreachable block (ram,0x00014d9af1fb) */

void FUN_14d9af187(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  int unaff_EBP;
  int in_R10D;
  
  if (-1 < (int)((-(-1 - unaff_EBP) - (in_R10D + 2)) - ~in_EAX)) {
    FUN_1628926cc(FUN_1628926cc,param_2);
    return;
  }
  FUN_16504de8d();
  return;
}



// FUNCTION 14d9af296 FUN_14d9af296 body=297 status=ok
// SIG undefined FUN_14d9af296(void)

void FUN_14d9af296(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  undefined8 uStackX_10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | param_1;
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~((0xffffffffffffffff - (unaff_retaddr ^ param_1) | uVar1) & *(ulonglong *)(unaff_RDI + 0x10)
        );
  FUN_15b2d235e(uStackX_10);
  return;
}



// FUNCTION 14d9af3c1 FUN_14d9af3c1 body=155 status=ok
// SIG undefined FUN_14d9af3c1(void)

void FUN_14d9af3c1(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156c7b009(param_1,~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                         (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)));
  return;
}



// FUNCTION 14d9af45c FUN_14d9af45c body=158 status=ok
// SIG undefined FUN_14d9af45c(void)

void FUN_14d9af45c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161702301(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14d9af4fa FUN_14d9af4fa body=133 status=ok
// SIG undefined FUN_14d9af4fa(void)

void FUN_14d9af4fa(void)

{
  undefined8 *puVar1;
  short unaff_BX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ushort *unaff_R15;
  short local_res8;
  longlong in_stack_00000030;
  
  *unaff_R15 = -~*unaff_R15 - (~(unaff_BX + local_res8 + -0x300e) + 2U);
  puVar1 = (undefined8 *)(in_stack_00000030 + -8);
  *puVar1 = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *puVar1;
  *puVar1 = FUN_156a71923;
  *(undefined8 *)(in_stack_00000030 + -0x18) = in_R11;
  *(undefined8 *)(in_stack_00000030 + -0x20) = in_R11;
  *(code **)(in_stack_00000030 + -0x18) = FUN_14d9af581;
  FUN_156a71903();
  return;
}



// FUNCTION 14d9af581 FUN_14d9af581 body=1217 status=ok
// SIG undefined FUN_14d9af581(void)

/* WARNING: Removing unreachable block (ram,0x00015b1af771) */
/* WARNING: Removing unreachable block (ram,0x00015b1af777) */
/* WARNING: Removing unreachable block (ram,0x00016247aeb2) */
/* WARNING: Removing unreachable block (ram,0x000156772c51) */
/* WARNING: Removing unreachable block (ram,0x000156772c57) */
/* WARNING: Removing unreachable block (ram,0x0001620e0927) */
/* WARNING: Removing unreachable block (ram,0x00015b258db5) */
/* WARNING: Removing unreachable block (ram,0x00015b258e35) */
/* WARNING: Removing unreachable block (ram,0x00015b258e50) */
/* WARNING: Removing unreachable block (ram,0x0001622084df) */
/* WARNING: Removing unreachable block (ram,0x000156936a9a) */
/* WARNING: Removing unreachable block (ram,0x000156936aa0) */
/* WARNING: Removing unreachable block (ram,0x0001615a7759) */
/* WARNING: Removing unreachable block (ram,0x0001615a77e3) */
/* WARNING: Removing unreachable block (ram,0x0001615a77e9) */
/* WARNING: Removing unreachable block (ram,0x0001615a77ee) */
/* WARNING: Removing unreachable block (ram,0x000162b06d9b) */
/* WARNING: Removing unreachable block (ram,0x000162b06e30) */
/* WARNING: Removing unreachable block (ram,0x000162b06e2b) */
/* WARNING: Removing unreachable block (ram,0x000162b06e5e) */
/* WARNING: Removing unreachable block (ram,0x000162b06e8e) */
/* WARNING: Removing unreachable block (ram,0x000156593432) */
/* WARNING: Removing unreachable block (ram,0x000162b06e63) */
/* WARNING: Removing unreachable block (ram,0x00015b1af78d) */
/* WARNING: Removing unreachable block (ram,0x00015b1af790) */
/* WARNING: Removing unreachable block (ram,0x00015b1af6e5) */
/* WARNING: Removing unreachable block (ram,0x000161224916) */
/* WARNING: Removing unreachable block (ram,0x00015b258da9) */
/* WARNING: Removing unreachable block (ram,0x00015b258d77) */
/* WARNING: Removing unreachable block (ram,0x000161c9314e) */
/* WARNING: Removing unreachable block (ram,0x0001620e0880) */
/* WARNING: Removing unreachable block (ram,0x0001620e08ed) */
/* WARNING: Removing unreachable block (ram,0x000162208472) */
/* WARNING: Removing unreachable block (ram,0x000162208478) */
/* WARNING: Removing unreachable block (ram,0x0001569368b1) */
/* WARNING: Removing unreachable block (ram,0x000156936944) */
/* WARNING: Removing unreachable block (ram,0x000156936949) */
/* WARNING: Removing unreachable block (ram,0x00014dda4b1a) */
/* WARNING: Removing unreachable block (ram,0x00014dda4bae) */
/* WARNING: Removing unreachable block (ram,0x00014dda4bb4) */
/* WARNING: Removing unreachable block (ram,0x00014dda4bb9) */
/* WARNING: Removing unreachable block (ram,0x00014dda4e5a) */
/* WARNING: Removing unreachable block (ram,0x00014dda4e65) */
/* WARNING: Removing unreachable block (ram,0x00014dda4e60) */
/* WARNING: Removing unreachable block (ram,0x00014dda4e55) */
/* WARNING: Removing unreachable block (ram,0x000162637279) */
/* WARNING: Removing unreachable block (ram,0x0001610473e4) */
/* WARNING: Removing unreachable block (ram,0x0001626372ef) */
/* WARNING: Removing unreachable block (ram,0x0001626372f5) */
/* WARNING: Removing unreachable block (ram,0x0001626372fa) */
/* WARNING: Removing unreachable block (ram,0x00015693694f) */
/* WARNING: Removing unreachable block (ram,0x000156936962) */
/* WARNING: Removing unreachable block (ram,0x00015693695d) */
/* WARNING: Removing unreachable block (ram,0x00015693697b) */
/* WARNING: Removing unreachable block (ram,0x000156936987) */
/* WARNING: Removing unreachable block (ram,0x0001569369a0) */
/* WARNING: Removing unreachable block (ram,0x00015693699b) */
/* WARNING: Removing unreachable block (ram,0x0001569369d6) */
/* WARNING: Removing unreachable block (ram,0x0001569369d1) */
/* WARNING: Removing unreachable block (ram,0x00014d9af5fe) */
/* WARNING: Removing unreachable block (ram,0x00014d9af69b) */
/* WARNING: Removing unreachable block (ram,0x0001620e074c) */
/* WARNING: Removing unreachable block (ram,0x0001620e0779) */
/* WARNING: Removing unreachable block (ram,0x0001620e077d) */
/* WARNING: Removing unreachable block (ram,0x0001620e0870) */
/* WARNING: Removing unreachable block (ram,0x0001620e0875) */
/* WARNING: Removing unreachable block (ram,0x0001620e087b) */
/* WARNING: Removing unreachable block (ram,0x00014d9af6a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d9af581(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  byte in_stack_00000008;
  ushort uStackX_18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | unaff_RBP;
  *(ulonglong *)(unaff_RBX + 8) =
       ~((0xffffffffffffffff - unaff_RBP | uVar1) & *(ulonglong *)(unaff_RBX + 8));
  local_res20 = local_res20 ^ 0xffffffffffffffff | unaff_RBP;
  if (local_res20 != 0) {
    uVar3 = FUN_15b1af64b();
    return uVar3;
  }
  local_res20 = 0xffffffffffffffff;
  if (-1 < (longlong)&uStackX_18) {
    uVar3 = FUN_16122488b();
    return uVar3;
  }
  uStackX_18 = ~(~uStackX_18 | 0x100);
  LOCK();
  bVar4 = in_stack_00000008 < DAT_14d7a7db9;
  bVar5 = SBORROW1(in_stack_00000008,DAT_14d7a7db9);
  cVar2 = in_stack_00000008 - DAT_14d7a7db9;
  if (cVar2 == '\0') {
    DAT_14d7a7db9 = (byte)param_1;
  }
  UNLOCK();
  _DAT_ffffffffffffffe7 = 0x8b51bb8;
  _DAT_ffffffffffffffef = unaff_R12;
  if (bVar4) {
    _DAT_fffffffffffffff7 = 0x699a38;
    _DAT_ffffffffffffffdf =
         (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
         (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
         (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
         (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
         (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | 1 |
         (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
         (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
    _DAT_ffffffffffffffe7 = unaff_R15;
    uVar3 = FUN_15b3d5987(param_1,param_2);
    return uVar3;
  }
  _DAT_fffffffffffffff7 = unaff_R12;
  uVar3 = FUN_14dd459e5();
  return uVar3;
}



// FUNCTION 14d9af74e FUN_14d9af74e body=98 status=ok
// SIG undefined FUN_14d9af74e(void)

void FUN_14d9af74e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156e72bf6(param_1,FUN_156e72bf6,
                (*(ulonglong *)(unaff_RDI + -0x70) - param_1) +
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) * -2 + -2);
  return;
}



// FUNCTION 14d9af85d FUN_14d9af85d body=476 status=ok
// SIG undefined FUN_14d9af85d(void)

/* WARNING: Removing unreachable block (ram,0x000165145641) */
/* WARNING: Removing unreachable block (ram,0x0001571a10ad) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa60) */
/* WARNING: Removing unreachable block (ram,0x00014d9af9a7) */
/* WARNING: Removing unreachable block (ram,0x0001573dfa8f) */
/* WARNING: Removing unreachable block (ram,0x0001573dfb04) */
/* WARNING: Removing unreachable block (ram,0x0001573dfb09) */
/* WARNING: Removing unreachable block (ram,0x0001573dfb15) */
/* WARNING: Removing unreachable block (ram,0x00014dc008a7) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa31) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa37) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa3c) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa64) */
/* WARNING: Removing unreachable block (ram,0x00014d9afac2) */
/* WARNING: Removing unreachable block (ram,0x00014d9aface) */
/* WARNING: Removing unreachable block (ram,0x0001571a1052) */
/* WARNING: Removing unreachable block (ram,0x0001571a10a2) */
/* WARNING: Removing unreachable block (ram,0x0001571a10a8) */
/* WARNING: Removing unreachable block (ram,0x0001666e412b) */
/* WARNING: Removing unreachable block (ram,0x0001666e4192) */
/* WARNING: Removing unreachable block (ram,0x0001666e4197) */
/* WARNING: Removing unreachable block (ram,0x0001666e419d) */
/* WARNING: Removing unreachable block (ram,0x00016521f4bc) */
/* WARNING: Removing unreachable block (ram,0x0001573dfb42) */
/* WARNING: Removing unreachable block (ram,0x0001573dfb46) */

undefined8 FUN_14d9af85d(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1564ca39e(param_1,*(ulonglong *)(unaff_RDI + -0x28) | param_1,
                        ~(~(~param_3 | ~param_1) | ~(param_2 | param_1)));
  return uVar1;
}



// FUNCTION 14d9afa3c FUN_14d9afa3c body=573 status=ok
// SIG undefined FUN_14d9afa3c(void)

/* WARNING: Removing unreachable block (ram,0x0001571a10ad) */
/* WARNING: Removing unreachable block (ram,0x00014d9afa60) */
/* WARNING: Removing unreachable block (ram,0x00014d9afac2) */
/* WARNING: Removing unreachable block (ram,0x00014d9aface) */
/* WARNING: Removing unreachable block (ram,0x0001666e419d) */

undefined8 FUN_14d9afa3c(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)
      (*(ulonglong *)(unaff_R13 + -0x30) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) * -2) < 0) {
    uVar1 = FUN_16521f4bc();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14d9afe75 FUN_14d9afe75 body=474 status=ok
// SIG undefined FUN_14d9afe75(void)

/* WARNING: Removing unreachable block (ram,0x00014d9aff0e) */
/* WARNING: Removing unreachable block (ram,0x00014d9aff14) */
/* WARNING: Removing unreachable block (ram,0x00014d9aff1f) */
/* WARNING: Removing unreachable block (ram,0x00014d9aff9f) */
/* WARNING: Removing unreachable block (ram,0x00014d9affa3) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0049) */
/* WARNING: Removing unreachable block (ram,0x00014d9b004e) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0054) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0059) */

void FUN_14d9afe75(void)

{
  FUN_161ab7df7();
  return;
}



// FUNCTION 14d9b0059 FUN_14d9b0059 body=645 status=ok
// SIG undefined FUN_14d9b0059(void)

void FUN_14d9b0059(undefined8 param_1,undefined8 param_2)

{
  FUN_16141ca19();
  (*(code *)0x1568fa258)(param_1,param_2);
  return;
}



// FUNCTION 14d9b039e FUN_14d9b039e body=136 status=ok
// SIG undefined FUN_14d9b039e(void)

void FUN_14d9b039e(undefined2 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_164a70e4d(param_1,param_2,
                ~((*(ulonglong *)(unaff_R12 + -0x90) ^ 0xffffffffffffffff) & ~in_RAX),unaff_retaddr)
  ;
  return;
}



// FUNCTION 14d9b0426 FUN_14d9b0426 body=146 status=ok
// SIG undefined FUN_14d9b0426(void)

/* WARNING: Removing unreachable block (ram,0x000166cdc4ff) */
/* WARNING: Removing unreachable block (ram,0x000166cdc505) */
/* WARNING: Removing unreachable block (ram,0x00014dc22f82) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba07) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba0d) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba18) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0568) */
/* WARNING: Removing unreachable block (ram,0x00014d9b05ef) */
/* WARNING: Removing unreachable block (ram,0x000160c1b84c) */
/* WARNING: Removing unreachable block (ram,0x000160c1b8dd) */
/* WARNING: Removing unreachable block (ram,0x000160c1b8e3) */
/* WARNING: Removing unreachable block (ram,0x000161790405) */
/* WARNING: Removing unreachable block (ram,0x00014d9b05f5) */

ulonglong FUN_14d9b0426(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 uStackX_18;
  
  FUN_156ff5116(param_1,unaff_retaddr,param_3);
  uVar3 = *(ulonglong *)(unaff_RDI + -0x38);
  if (-1 < (longlong)-(~*(ulonglong *)(unaff_RDI + -0x50) + 2)) {
    uVar3 = FUN_1566c55f6();
    return uVar3;
  }
  uVar4 = FUN_165e8f2c2();
  puVar1 = (ushort *)
           (&stack0x000165e8f2d2 + -(~((~param_1 | uVar3) & (~uVar3 | param_1)) ^ 0x4b3b23d3));
  *puVar1 = ~*puVar1;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0x100) + 0x100) - *puVar1;
  *puVar1 = ~*puVar1;
                    /* WARNING: Read-only address (ram,0x00014d7c3394) is written */
  LOCK();
  uRam000000014d7c3394 = (undefined1)uVar4;
  UNLOCK();
  *(longlong *)(param_5 + -0x10) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x18) = 0x35e8766;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x28cf) = uStackX_18;
  *(undefined8 *)(param_5 + -0x28d7) = uStackX_18;
  *(undefined **)(param_5 + -0x28cf) = &DAT_156ef2e4a;
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14d9b04b8 FUN_14d9b04b8 body=176 status=ok
// SIG undefined FUN_14d9b04b8(void)

/* WARNING: Removing unreachable block (ram,0x000166cdc4ff) */
/* WARNING: Removing unreachable block (ram,0x000166cdc505) */
/* WARNING: Removing unreachable block (ram,0x00014dc22f82) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba07) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba0d) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba18) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0568) */
/* WARNING: Removing unreachable block (ram,0x00014d9b05ef) */
/* WARNING: Removing unreachable block (ram,0x000160c1b84c) */
/* WARNING: Removing unreachable block (ram,0x000160c1b8dd) */
/* WARNING: Removing unreachable block (ram,0x000160c1b8e3) */
/* WARNING: Removing unreachable block (ram,0x000161790405) */
/* WARNING: Removing unreachable block (ram,0x00014d9b05f5) */

ulonglong FUN_14d9b04b8(ulonglong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 uStackX_20;
  longlong in_stack_00000030;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x38);
  if (-1 < (longlong)-(~*(ulonglong *)(unaff_RDI + -0x50) + 2)) {
    uVar3 = FUN_1566c55f6();
    return uVar3;
  }
  uVar4 = FUN_165e8f2c2();
  puVar1 = (ushort *)
           (&stack0x000165e8f2da + -(~((~param_1 | uVar3) & (~uVar3 | param_1)) ^ 0x4b3b23d3));
  *puVar1 = ~*puVar1;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0x100) + 0x100) - *puVar1;
  *puVar1 = ~*puVar1;
                    /* WARNING: Read-only address (ram,0x00014d7c3394) is written */
  LOCK();
  uRam000000014d7c3394 = (undefined1)uVar4;
  UNLOCK();
  *(longlong *)(in_stack_00000030 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x18) = 0x35e8766;
  *(undefined8 *)(in_stack_00000030 + -8) = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x28cf) = uStackX_20;
  *(undefined8 *)(in_stack_00000030 + -0x28d7) = uStackX_20;
  *(undefined **)(in_stack_00000030 + -0x28cf) = &DAT_156ef2e4a;
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14d9b0568 FUN_14d9b0568 body=957 status=ok
// SIG undefined FUN_14d9b0568(void)

/* WARNING: Removing unreachable block (ram,0x000166cdc4ff) */
/* WARNING: Removing unreachable block (ram,0x000166cdc505) */
/* WARNING: Removing unreachable block (ram,0x00014dc22f82) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba07) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba0d) */
/* WARNING: Removing unreachable block (ram,0x000160c1ba18) */
/* WARNING: Removing unreachable block (ram,0x00014d9b05f5) */

undefined8 FUN_14d9b0568(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar12;
  ulonglong unaff_retaddr;
  ulonglong local_res10;
  ulonglong uStackX_18;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar11 = ~((~(0xffffffffffffffff - unaff_R15 & local_res10) + local_res10) -
             ~(0xffffffffffffffff - unaff_R15) & (local_res10 ^ 0xffffffffffffffff | unaff_R15));
  puVar2 = (undefined8 *)(~(uStackX_18 & unaff_R15) & (uStackX_18 | unaff_R15));
  bVar12 = (uVar11 & 1) != 0;
  puVar2[-1] = unaff_RBP;
  bVar8 = (byte)param_1 & 0x3f;
  bVar6 = (param_1 & 0x3f) != 0;
  bVar7 = unaff_RBP << bVar8 - 1 < 0;
  bVar5 = (param_1 & 0x3f) != 0;
  if ((!bVar6 && bVar12 || bVar6 && bVar7) &&
     (((bVar6 || !bVar12) && (!bVar6 || !bVar7)) &&
      ((bVar5 || (uVar11 & 0x40) == 0) && (!bVar5 || unaff_RBP << bVar8 != 0)))) {
    *puVar2 = unaff_RBX;
    plVar1 = puVar2 + -1;
    *plVar1 = 0;
    *plVar1 = *plVar1 + param_1;
    puVar2[-2] = param_3;
    iVar3 = *(int *)(puVar2 + -2);
    puVar2[-2] = ~((unaff_R15 - (uVar4 | unaff_R15)) + uVar4) & (uVar4 | unaff_R15);
    puVar2[-3] = unaff_R14;
    uVar9 = puVar2[-1];
    puVar2[-2] = unaff_RSI;
    puVar2[-3] = puVar2[-3];
    uVar4 = puVar2[-2];
    puVar2[-1] = 0x160c1b96b;
    FUN_15b642de7(uVar9,param_2,iVar3 + (int)unaff_retaddr);
    lVar10 = -(~uVar4 & (unaff_retaddr | 0xfffffffff5bcb1b9));
    *(undefined8 *)((longlong)puVar2 + lVar10 + -0x7fc8082) = 0xffffffffffffffa0;
    *(undefined4 *)((longlong)puVar2 + lVar10 + -0x7fc8082) = 0xcbf5301f;
    *(undefined4 *)((longlong)puVar2 + lVar10 + -0x7fc807e) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + lVar10 + -0x7fc8082) = uVar9;
    uVar4 = *(ulonglong *)((longlong)puVar2 + lVar10 + -0x7fc8082);
    uVar11 = 0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x28) | uVar4;
    uVar9 = FUN_14dc22f82(uVar4,~((~uVar11 | ~uVar4 | *(ulonglong *)(unaff_RDI + -0x28)) + uVar11 +
                                 1));
    return uVar9;
  }
  puVar2[-2] = unaff_retaddr;
  puVar2[-2] = puVar2[-1];
  puVar2[-1] = 0;
  puVar2[-1] = puVar2[-1] + -0x161790460;
  puVar2[-1] = -puVar2[-1];
  uVar9 = FUN_14d7c32fa(param_1,param_2);
  return uVar9;
}



// FUNCTION 14d9b0716 FUN_14d9b0716 body=147 status=ok
// SIG undefined FUN_14d9b0716(void)

void FUN_14d9b0716(void)

{
  FUN_14dc6ecea();
  return;
}



// FUNCTION 14d9b07a9 FUN_14d9b07a9 body=121 status=ok
// SIG undefined FUN_14d9b07a9(void)

void FUN_14d9b07a9(void)

{
  return;
}



// FUNCTION 14d9b0823 FUN_14d9b0823 body=130 status=ok
// SIG undefined FUN_14d9b0823(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b0852) */

int FUN_14d9b0823(void)

{
  int in_EAX;
  undefined4 local_res18;
  
  return in_EAX + local_res18;
}



// FUNCTION 14d9b0aa7 FUN_14d9b0aa7 body=146 status=ok
// SIG undefined FUN_14d9b0aa7(void)

void FUN_14d9b0aa7(void)

{
  FUN_15b655273();
  return;
}



// FUNCTION 14d9b0c7c FUN_14d9b0c7c body=173 status=ok
// SIG undefined FUN_14d9b0c7c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b0c8f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9b0c7c(void)

{
  return;
}



// FUNCTION 14d9b0d2a FUN_14d9b0d2a body=149 status=ok
// SIG undefined FUN_14d9b0d2a(void)

undefined8 FUN_14d9b0d2a(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong in_RAX;
  ushort *puVar1;
  ulonglong unaff_R12;
  undefined8 unaff_R15;
  undefined8 in_stack_00000018;
  longlong in_stack_00000038;
  
  puVar1 = (ushort *)
           (in_RAX + ~(~((-0x68dd7b06 - (param_3 | 0xffffffff972284fa)) + param_3) &
                      (unaff_R12 | 0xffffffff972284fa)));
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & 0xfeff | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(in_stack_00000038 + -8) = unaff_R15;
  *(undefined1 **)(in_stack_00000038 + -0x10) = &LAB_165b9c305;
  return in_stack_00000018;
}



// FUNCTION 14d9b0fea FUN_14d9b0fea body=100 status=ok
// SIG undefined FUN_14d9b0fea(void)

void FUN_14d9b0fea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R11;
  undefined8 unaff_R12;
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
  byte bVar15;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  undefined8 *local_res10;
  
  bVar11 = (local_res8 & 0x4000) != 0;
  bVar10 = (local_res8 & 0x800) != 0;
  bVar9 = (local_res8 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (local_res8 & 0x80) != 0;
  bVar6 = (local_res8 & 0x40) != 0;
  bVar5 = (local_res8 & 0x10) != 0;
  bVar4 = (local_res8 & 4) != 0;
  bVar3 = (local_res8 & 1) != 0;
  bVar15 = (uStackX_a & 0x20) != 0;
  bVar12 = (uStackX_a & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res10 = unaff_R12;
  local_res10[-1] = unaff_R12;
  local_res10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res10[-3] = unaff_retaddr;
  local_res10[-4] = param_4;
  local_res10[-5] = uVar2;
  local_res10[-2] = in_R11;
  *local_res10 = 0x2839c38;
  FUN_165c7153c(local_res10[-3],param_2,param_3,local_res10[-4]);
  return;
}



// FUNCTION 14d9b1076 FUN_14d9b1076 body=298 status=ok
// SIG undefined FUN_14d9b1076(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b1114) */

undefined8
FUN_14d9b1076(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -8) != 0) {
    uVar1 = FUN_1565bd4d5(FUN_1565bd4d5,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
    return uVar1;
  }
  uVar1 = FUN_15642d4d4();
  return uVar1;
}



// FUNCTION 14d9b1432 FUN_14d9b1432 body=692 status=ok
// SIG undefined FUN_14d9b1432(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b14e1) */
/* WARNING: Removing unreachable block (ram,0x00014d9b1570) */
/* WARNING: Removing unreachable block (ram,0x00016273779b) */
/* WARNING: Removing unreachable block (ram,0x00014d9b1576) */
/* WARNING: Removing unreachable block (ram,0x00015687c27f) */

undefined8 FUN_14d9b1432(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9b1813 FUN_14d9b1813 body=111 status=ok
// SIG undefined FUN_14d9b1813(void)

void FUN_14d9b1813(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156e3b42d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9b1887 FUN_14d9b1887 body=108 status=ok
// SIG undefined FUN_14d9b1887(void)

void FUN_14d9b1887(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  (*(code *)0x15b7b3da5)
            ((char)param_1,*(undefined8 *)(unaff_RDI + -0x28),
             *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
             (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,param_4 & unaff_RBX);
  return;
}



// FUNCTION 14d9b1a38 FUN_14d9b1a38 body=143 status=ok
// SIG undefined FUN_14d9b1a38(void)

void FUN_14d9b1a38(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)
           (CONCAT62(unaff_000000aa,unaff_R13W) + unaff_RBP + param_2 + (unaff_RBP & param_2) * -2);
  FUN_165390fbe(uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,
                *(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x28),param_3);
  return;
}



// FUNCTION 14d9b1b66 FUN_14d9b1b66 body=463 status=ok
// SIG undefined FUN_14d9b1b66(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b1dc1) */
/* WARNING: Removing unreachable block (ram,0x00016266fb51) */

void FUN_14d9b1b66(void)

{
  longlong lVar1;
  longlong unaff_R12;
  uint uVar2;
  longlong local_8;
  
  FUN_156da02e0();
  uVar2 = (uint)*(undefined8 *)(unaff_R12 + -0x38) ^ 0x5869ffff;
  FUN_161c469ca();
  FUN_1576512d7();
  if ((uVar2 << 0x10 | uVar2 >> 0x10) == 0x70) {
    FUN_16266fa1f();
    return;
  }
  lVar1 = FUN_160f1e06f();
  if (*(longlong *)(local_8 + -0x60) + lVar1 < 0) {
    thunk_FUN_1616f0ba9();
    return;
  }
  thunk_FUN_1616f0ba9();
  return;
}



// FUNCTION 14d9b1d3a FUN_14d9b1d3a body=149 status=ok
// SIG undefined FUN_14d9b1d3a(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b1dc1) */
/* WARNING: Removing unreachable block (ram,0x00016266fb51) */

void FUN_14d9b1d3a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  
  if (unaff_R13 == 0x70) {
    FUN_16266fa1f();
    return;
  }
  lVar1 = FUN_160f1e06f(param_1,param_2);
  if (*(longlong *)(unaff_R12 + -0x60) + lVar1 < 0) {
    thunk_FUN_1616f0ba9();
    return;
  }
  thunk_FUN_1616f0ba9();
  return;
}



// FUNCTION 14d9b1e70 FUN_14d9b1e70 body=309 status=ok
// SIG undefined FUN_14d9b1e70(void)

void FUN_14d9b1e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x164b3e6c4)(param_1,param_2,0x164b3e6c4,local_res8);
  return;
}



// FUNCTION 14d9b1fb6 FUN_14d9b1fb6 body=309 status=ok
// SIG undefined FUN_14d9b1fb6(void)

void FUN_14d9b1fb6(ulonglong param_1)

{
  uint6 unaff_0000002a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_1563b9556(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x70),
                ~*(ulonglong *)(unaff_RDI + -0x70) | param_1,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  FUN_1646ef089(0xffffffffbc987922,0x56,0xffffffffffffffd8,
                *(ulonglong *)(unaff_RSI + -0x28) ^ (ulonglong)unaff_0000002a << 0x10);
  return;
}



// FUNCTION 14d9b228d thunk_FUN_14d9b2293 body=5 status=ok
// SIG undefined thunk_FUN_14d9b2293(void)

undefined8 thunk_FUN_14d9b2293(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d9b2293 FUN_14d9b2293 body=170 status=ok
// SIG undefined FUN_14d9b2293(void)

undefined8 FUN_14d9b2293(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d9b233e FUN_14d9b233e body=146 status=ok
// SIG undefined FUN_14d9b233e(void)

void FUN_14d9b233e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b6488ac(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9b25a6 FUN_14d9b25a6 body=289 status=ok
// SIG undefined FUN_14d9b25a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b2638) */

void FUN_14d9b25a6(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) & ~param_1;
  if ((uVar1 | ~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + ~uVar1 != -1) {
    FUN_164b83099();
    return;
  }
  FUN_164b83099();
  return;
}



// FUNCTION 14d9b26ca FUN_14d9b26ca body=161 status=ok
// SIG undefined FUN_14d9b26ca(void)

void FUN_14d9b26ca(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  
  FUN_156b2c764(param_1,(*(ulonglong *)(unaff_R13 + -0xa0) + unaff_retaddr) -
                        (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_retaddr));
  return;
}



// FUNCTION 14d9b2800 FUN_14d9b2800 body=437 status=ok
// SIG undefined FUN_14d9b2800(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b282b) */
/* WARNING: Removing unreachable block (ram,0x00014d9b2892) */
/* WARNING: Removing unreachable block (ram,0x00014d9b28c6) */

void FUN_14d9b2800(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_retaddr;
  ulonglong local_res8;
  
  FUN_16648fef8(param_1,param_2 ^ unaff_retaddr + 0x1f7b5798U ^ local_res8 ^ in_RAX,param_3,param_4)
  ;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d9b2a72 FUN_14d9b2a72 body=129 status=ok
// SIG undefined FUN_14d9b2a72(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b2a93) */

void FUN_14d9b2a72(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  ulonglong local_res18;
  
  param_1 = local_res18 ^ param_1;
  uVar4 = (-0x101 - (local_res10 | 0xfeff)) + local_res10;
  *(undefined8 *)(param_1 - 8) = unaff_RDI;
  *(undefined8 *)(param_1 - 0x10) = unaff_RDI;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 0x20) = unaff_RSI;
  *(code **)(param_1 - 0x28) = FUN_14d9b2af5;
  uVar3 = FUN_166de7ad4(local_res8);
  *(undefined8 *)(param_1 - 0x18) = uVar3;
  plVar1 = (longlong *)(param_1 - 0x20);
  *plVar1 = (longlong)&DAT_14fee7ca8;
  *plVar1 = *plVar1 + -0x2536cca;
  lVar2 = *plVar1;
  *(longlong *)(param_1 - 0x18) = *(longlong *)(param_1 - 0x10);
  *(longlong *)(param_1 - 0x10) = lVar2 + 0x1b87;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9b2af5 FUN_14d9b2af5 body=85 status=ok
// SIG undefined FUN_14d9b2af5(void)

void FUN_14d9b2af5(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9b2ba8 FUN_14d9b2ba8 body=464 status=ok
// SIG undefined FUN_14d9b2ba8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b2c42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9b2ba8(void)

{
  FUN_14dc9431d();
  return;
}



// FUNCTION 14d9b2db7 FUN_14d9b2db7 body=173 status=ok
// SIG undefined FUN_14d9b2db7(void)

void FUN_14d9b2db7(void)

{
  FUN_166cb8a0e(0xdfb8942);
  return;
}



// FUNCTION 14d9b2ee6 FUN_14d9b2ee6 body=140 status=ok
// SIG undefined FUN_14d9b2ee6(void)

void FUN_14d9b2ee6(undefined8 param_1)

{
  uint unaff_EBX;
  undefined8 unaff_retaddr;
  
  FUN_165170b37(param_1,~-~unaff_EBX + 1,FUN_165170b37,unaff_retaddr);
  return;
}



// FUNCTION 14d9b3014 FUN_14d9b3014 body=168 status=ok
// SIG undefined FUN_14d9b3014(void)

/* WARNING: Removing unreachable block (ram,0x00015b2e40ea) */
/* WARNING: Removing unreachable block (ram,0x00015b2e3ffc) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4007) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4071) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4076) */
/* WARNING: Removing unreachable block (ram,0x00015b2e407c) */
/* WARNING: Removing unreachable block (ram,0x00015b2e40ed) */
/* WARNING: Removing unreachable block (ram,0x00015b2e411e) */
/* WARNING: Removing unreachable block (ram,0x000162bb8fa6) */
/* WARNING: Removing unreachable block (ram,0x00015725bce1) */
/* WARNING: Removing unreachable block (ram,0x000162bb90b7) */
/* WARNING: Removing unreachable block (ram,0x000162bb90bd) */
/* WARNING: Removing unreachable block (ram,0x000162bb90c2) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4123) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4129) */
/* WARNING: Removing unreachable block (ram,0x00015b2e412e) */
/* WARNING: Removing unreachable block (ram,0x000156ba41e5) */
/* WARNING: Removing unreachable block (ram,0x000156ba41eb) */
/* WARNING: Removing unreachable block (ram,0x000156ba4252) */
/* WARNING: Removing unreachable block (ram,0x000156ba4256) */
/* WARNING: Removing unreachable block (ram,0x00015b2e4002) */
/* WARNING: Removing unreachable block (ram,0x000165661498) */
/* WARNING: Removing unreachable block (ram,0x00014d9b30bc) */
/* WARNING: Removing unreachable block (ram,0x00014d9b314b) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3141) */
/* WARNING: Removing unreachable block (ram,0x000161141a8d) */

undefined8 FUN_14d9b3014(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_R9;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x78) & (unaff_R15 ^ 0xffffffffffffffff);
  uVar3 = (uVar3 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + ~uVar3 + 1 ^ 0xffffffffffffffff
  ;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  if (&stack0x00000000 == &DAT_00000008) {
    uVar1 = FUN_1611419ec();
    return uVar1;
  }
  uVar2 = FUN_14e148cd3();
  if ((longlong)-(*(ulonglong *)(unaff_R12 + -8) & uVar2) < 0) {
    uVar1 = FUN_156a62976();
    return uVar1;
  }
  uVar1 = FUN_16109577b(uVar3,uVar4,FUN_16109577b,in_R9);
  return uVar1;
}



// FUNCTION 14d9b30bc FUN_14d9b30bc body=150 status=ok
// SIG undefined FUN_14d9b30bc(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b3141) */

void FUN_14d9b30bc(void)

{
  FUN_1661746a6();
  return;
}



// FUNCTION 14d9b31ee FUN_14d9b31ee body=107 status=ok
// SIG undefined FUN_14d9b31ee(void)

void FUN_14d9b31ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d9b32b6 FUN_14d9b32b6 body=372 status=ok
// SIG undefined FUN_14d9b32b6(void)

void FUN_14d9b32b6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + ~(~unaff_RDI & (param_1 | 0xffffffffd4ba3436)));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15;
  FUN_161e19e38(uVar2,-1 - uVar2,~(uVar1 & unaff_R15) & (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14d9b33ce FUN_14d9b33ce body=145 status=ok
// SIG undefined FUN_14d9b33ce(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b345f) */
/* WARNING: Removing unreachable block (ram,0x00014d9b34e7) */
/* WARNING: Removing unreachable block (ram,0x00014d9b34e2) */
/* WARNING: Removing unreachable block (ram,0x000162b21d56) */
/* WARNING: Removing unreachable block (ram,0x00014d9b34ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3568) */
/* WARNING: Removing unreachable block (ram,0x00014d9b356c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9b33ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R14;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined **)(uVar1 - 8) = &DAT_16678dfbb;
  FUN_14d7a982b(param_1,uVar3,param_3,uVar2);
  return;
}



// FUNCTION 14d9b345f FUN_14d9b345f body=278 status=ok
// SIG undefined FUN_14d9b345f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b34ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3568) */
/* WARNING: Removing unreachable block (ram,0x00014d9b356c) */

void FUN_14d9b345f(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
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
  byte bVar15;
  ulonglong uVar16;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar16 = *(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) | param_1;
  *(ulonglong *)(unaff_R12 + 0x10) = ~((~param_2 | uVar16) & *(ulonglong *)(unaff_R12 + 0x10));
  bVar11 = (param_5 & 0x4000) != 0;
  bVar10 = (param_5 & 0x800) != 0;
  bVar9 = (param_5 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (param_5 & 0x80) != 0;
  bVar6 = (param_5 & 0x40) != 0;
  bVar5 = (param_5 & 0x10) != 0;
  bVar4 = (param_5 & 4) != 0;
  bVar3 = (param_5 & 1) != 0;
  bVar15 = (param_5 & 0x200000) != 0;
  bVar12 = (param_5 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(in_stack_00000020,in_stack_00000018);
  *param_6 = unaff_R13;
  param_6[-1] = unaff_R13;
  param_6[-2] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
                (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
                (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
                (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
                (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
                (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
                (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  param_6[-3] = uVar2;
  param_6[-4] = local_res10;
  uVar16 = param_6[-2];
  param_6[-2] = param_3;
  param_6[-3] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar16 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar16 & 0x80) != 0) * 0x80 | (ulonglong)((uVar16 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 | (ulonglong)((uVar16 & 4) != 0) * 4 |
                (ulonglong)((uVar16 & 1) != 0) | (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  param_6[-4] = in_R11;
  *param_6 = 0x38627dc;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9b3678 FUN_14d9b3678 body=697 status=ok
// SIG undefined FUN_14d9b3678(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b36d9) */
/* WARNING: Removing unreachable block (ram,0x00014d9b36df) */
/* WARNING: Removing unreachable block (ram,0x000166df6e77) */
/* WARNING: Removing unreachable block (ram,0x000166df6e83) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3712) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3716) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3776) */
/* WARNING: Removing unreachable block (ram,0x00014d9b377c) */
/* WARNING: Removing unreachable block (ram,0x00014d9b37fc) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3802) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3807) */
/* WARNING: Removing unreachable block (ram,0x000166591247) */
/* WARNING: Removing unreachable block (ram,0x0001665912ce) */
/* WARNING: Removing unreachable block (ram,0x0001665912d3) */
/* WARNING: Removing unreachable block (ram,0x0001665912d9) */
/* WARNING: Removing unreachable block (ram,0x00015706bfc5) */
/* WARNING: Removing unreachable block (ram,0x00015706c054) */
/* WARNING: Removing unreachable block (ram,0x00015706c05a) */
/* WARNING: Removing unreachable block (ram,0x00014d9b0238) */
/* WARNING: Removing unreachable block (ram,0x0001626bc29b) */
/* WARNING: Removing unreachable block (ram,0x000161483adf) */

undefined8 FUN_14d9b3678(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_166cbab76(param_1,param_2,
                        (-(param_3 ^ 0xffffffff) - (((uint)param_2 ^ 0xffffffff) + 2)) +
                        unaff_retaddr);
  return uVar1;
}



// FUNCTION 14d9b3807 FUN_14d9b3807 body=30 status=ok
// SIG undefined FUN_14d9b3807(void)

undefined8 FUN_14d9b3807(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14d9b3888 FUN_14d9b3888 body=237 status=ok
// SIG undefined FUN_14d9b3888(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b392a) */

longlong FUN_14d9b3888(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14d9b39b3 FUN_14d9b39b3 body=102 status=ok
// SIG undefined FUN_14d9b39b3(void)

undefined8 FUN_14d9b39b3(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14d9b3a2e FUN_14d9b3a2e body=390 status=ok
// SIG undefined FUN_14d9b3a2e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b3ac3) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3ac9) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3ace) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3b5f) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3b64) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3b6a) */
/* WARNING: Removing unreachable block (ram,0x0001649de9f0) */
/* WARNING: Removing unreachable block (ram,0x0001649dea19) */

void FUN_14d9b3a2e(void)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  FUN_14dd3acb0(*(longlong *)(unaff_R12 + -0x60) + in_RAX);
  return;
}



// FUNCTION 14d9b3e86 FUN_14d9b3e86 body=942 status=ok
// SIG undefined FUN_14d9b3e86(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f19) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f24) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f2c) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f3f) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f4c) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f74) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f86) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f81) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3fcc) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3fd2) */
/* WARNING: Removing unreachable block (ram,0x00016497b330) */
/* WARNING: Removing unreachable block (ram,0x00016497b346) */
/* WARNING: Removing unreachable block (ram,0x00016497b34b) */
/* WARNING: Removing unreachable block (ram,0x00016497b397) */
/* WARNING: Removing unreachable block (ram,0x000162755596) */
/* WARNING: Removing unreachable block (ram,0x0001627555b4) */
/* WARNING: Removing unreachable block (ram,0x0001627555c0) */
/* WARNING: Removing unreachable block (ram,0x000162755601) */
/* WARNING: Removing unreachable block (ram,0x000166ae032d) */
/* WARNING: Removing unreachable block (ram,0x000166ae03c4) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d7a813d) */
/* WARNING: Removing unreachable block (ram,0x00016275569f) */
/* WARNING: Removing unreachable block (ram,0x0001627556a5) */
/* WARNING: Removing unreachable block (ram,0x0001627556aa) */
/* WARNING: Removing unreachable block (ram,0x00016275572d) */
/* WARNING: Removing unreachable block (ram,0x000162755732) */
/* WARNING: Removing unreachable block (ram,0x000162755738) */
/* WARNING: Removing unreachable block (ram,0x00016275573d) */
/* WARNING: Removing unreachable block (ram,0x00016208b5a5) */
/* WARNING: Removing unreachable block (ram,0x00016208b621) */
/* WARNING: Removing unreachable block (ram,0x00016154ac00) */
/* WARNING: Removing unreachable block (ram,0x00016154ac25) */
/* WARNING: Removing unreachable block (ram,0x00016154ac5b) */
/* WARNING: Removing unreachable block (ram,0x00016154ac74) */
/* WARNING: Removing unreachable block (ram,0x00016154ac6f) */
/* WARNING: Removing unreachable block (ram,0x00016154ac7f) */
/* WARNING: Removing unreachable block (ram,0x00016154ac85) */
/* WARNING: Removing unreachable block (ram,0x000164886533) */
/* WARNING: Removing unreachable block (ram,0x00014d9b3f1f) */

void FUN_14d9b3e86(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + unaff_RDI) = 0xb85a4d9b;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x70);
  FUN_166c3431a(param_1,*(undefined8 *)(unaff_R12 + -0x38),
                ~((-~uVar1 - ((~unaff_retaddr & uVar1) + 2)) - unaff_retaddr &
                 (~uVar1 | unaff_retaddr)),&stack0x00000000);
  return;
}



// FUNCTION 14d9b4069 FUN_14d9b4069 body=155 status=ok
// SIG undefined FUN_14d9b4069(void)

void FUN_14d9b4069(undefined8 param_1)

{
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *(undefined8 *)(in_stack_00000028 + -0x10) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R14;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_14d9b4107;
  FUN_1571cb1aa(param_1,uStackX_10);
  return;
}



// FUNCTION 14d9b4198 FUN_14d9b4198 body=307 status=ok
// SIG undefined FUN_14d9b4198(void)

/* WARNING: Removing unreachable block (ram,0x00014d9b42cc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014d9b4262 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9b4198(void)

{
  FUN_15750f192();
  FUN_1612c687d();
  return;
}



// FUNCTION 14d9b42cc FUN_14d9b42cc body=157 status=ok
// SIG undefined FUN_14d9b42cc(void)

void FUN_14d9b42cc(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  *(ulonglong *)(param_4 + 0x10) =
       ((*(longlong *)(param_4 + 0x10) - (param_3 & *(ulonglong *)(param_4 + 0x10))) -
       *(longlong *)(param_4 + 0x10)) + -1;
  return;
}



// FUNCTION 14d9b43ee FUN_14d9b43ee body=133 status=ok
// SIG undefined FUN_14d9b43ee(void)

void FUN_14d9b43ee(void)

{
  FUN_161c938c7(FUN_161c938c7);
  return;
}


