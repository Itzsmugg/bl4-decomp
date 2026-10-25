// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd41e0e FUN_14dd41e0e body=290 status=ok
// SIG undefined FUN_14dd41e0e(void)

void FUN_14dd41e0e(void)

{
  ulonglong uVar1;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  FUN_1574c4922();
  FUN_161a1d8bd(in_R11,uVar1,0x18,FUN_161a1d8bd);
  return;
}



// FUNCTION 14dd41f35 FUN_14dd41f35 body=136 status=ok
// SIG undefined FUN_14dd41f35(void)

void FUN_14dd41f35(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1565a5a47(param_1,param_2,
                0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                (~*(ulonglong *)(unaff_RDI + -0x60) | ~param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dd420e6 thunk_FUN_14dd420ec body=5 status=ok
// SIG undefined thunk_FUN_14dd420ec(void)

void thunk_FUN_14dd420ec(undefined8 param_1)

{
  FUN_16156c130(param_1,FUN_16156c130);
  return;
}



// FUNCTION 14dd420ec FUN_14dd420ec body=157 status=ok
// SIG undefined FUN_14dd420ec(void)

void FUN_14dd420ec(undefined8 param_1)

{
  FUN_16156c130(param_1,FUN_16156c130);
  return;
}



// FUNCTION 14dd421a0 FUN_14dd421a0 body=163 status=ok
// SIG undefined FUN_14dd421a0(void)

void FUN_14dd421a0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&LAB_162352aae)(param_1,param_2,&LAB_162352aae);
  return;
}



// FUNCTION 14dd42244 FUN_14dd42244 body=136 status=ok
// SIG undefined FUN_14dd42244(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b6a51a2) */
/* WARNING: Removing unreachable block (ram,0x00015727f9b2) */
/* WARNING: Removing unreachable block (ram,0x00015b6a512e) */
/* WARNING: Removing unreachable block (ram,0x00014dd422c7) */

void FUN_14dd42244(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) == param_1) {
    FUN_14dc41545();
    return;
  }
  FUN_166c103cc(FUN_166c103cc,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                -~param_1 - (~*(ulonglong *)(unaff_RDI + -0xa0) + 2),param_4,
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dd422cd FUN_14dd422cd body=183 status=ok
// SIG undefined FUN_14dd422cd(void)

void FUN_14dd422cd(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  byte bVar5;
  byte bVar6;
  byte in_AF;
  byte bVar7;
  byte bVar8;
  byte in_TF;
  byte in_IF;
  byte bVar9;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  lVar4 = (param_1 - (uVar1 | param_1)) + uVar1;
  bVar5 = lVar4 < 0;
  uVar3 = lVar4 * 2;
  bVar9 = (bool)bVar5 != (longlong)uVar3 < 0;
  bVar8 = (longlong)uVar3 < 0;
  bVar7 = uVar3 == 0;
  bVar6 = (POPCOUNT(uVar3 & 0xff) & 1U) == 0;
  *unaff_RSI = 0x14dd42362;
  uVar2 = FUN_1669afc8f();
  lVar4 = unaff_RSI[1];
  unaff_RSI[1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
                 (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                 (ulonglong)(bVar8 & 1) * 0x80 | (ulonglong)(bVar7 & 1) * 0x40 |
                 (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1)
                 | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *unaff_RSI = uVar2;
  unaff_RSI[-1] = uVar1 + param_1;
  unaff_RSI[1] = *unaff_RSI;
  unaff_RSI[3] = lVar4 + -0xd9a24c9;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd4248a FUN_14dd4248a body=49 status=ok
// SIG undefined FUN_14dd4248a(void)

void FUN_14dd4248a(char param_1)

{
  char cVar1;
  char in_AL;
  undefined8 in_R10;
  longlong local_res10;
  
  LOCK();
  cVar1 = param_1;
  if (in_AL != DAT_14d7c0f86) {
    cVar1 = DAT_14d7c0f86;
  }
  DAT_14d7c0f86 = cVar1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x2031a24;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(code **)(local_res10 + -0x10) = FUN_14d85d504;
  return;
}



// FUNCTION 14dd4268a FUN_14dd4268a body=104 status=ok
// SIG undefined FUN_14dd4268a(void)

void FUN_14dd4268a(HMODULE param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd426f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeLibrary(param_1);
  return;
}



// FUNCTION 14dd428d3 FUN_14dd428d3 body=16 status=ok
// SIG undefined FUN_14dd428d3(void)

void FUN_14dd428d3(void)

{
  char *unaff_retaddr;
  
  *unaff_retaddr =
       *unaff_retaddr + (char)((ulonglong)unaff_retaddr >> 8) +
       (&DAT_fffffffffffffff7 < &stack0x00000000);
  return;
}



// FUNCTION 14dd42a8d FUN_14dd42a8d body=173 status=ok
// SIG undefined FUN_14dd42a8d(void)

void FUN_14dd42a8d(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_2;
  *plVar1 = -*plVar1;
  puVar2 = (ulonglong *)(local_res18 + -0x10);
  *puVar2 = 0x947fcb5;
  *puVar2 = *puVar2 ^ 0x947fcb5;
  *(undefined4 *)puVar2 = 0x88157659;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  thunk_FUN_15730dd4a(param_1,thunk_FUN_15730dd4a,*(undefined8 *)(local_res18 + -0x10),unaff_retaddr
                     );
  return;
}



// FUNCTION 14dd42b3b FUN_14dd42b3b body=204 status=ok
// SIG undefined FUN_14dd42b3b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd42bde) */

void FUN_14dd42b3b(void)

{
  return;
}



// FUNCTION 14dd42c0d FUN_14dd42c0d body=104 status=ok
// SIG undefined FUN_14dd42c0d(void)

void FUN_14dd42c0d(void)

{
  (*(code *)&LAB_14dcf1092)(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14dd42d13 FUN_14dd42d13 body=295 status=ok
// SIG undefined FUN_14dd42d13(void)

/* WARNING: Removing unreachable block (ram,0x00014dd42e0d) */

void FUN_14dd42d13(undefined8 param_1,undefined8 param_2,undefined8 param_3,short param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  local_20 = 0x14dd42db2;
  FUN_1574cde9e(param_1);
  local_20 = *(ulonglong *)(unaff_R13 + -0x40);
  FUN_16513759f(FUN_16513759f,&local_20,local_20 | unaff_R15,param_4 + -0x34be);
  return;
}



// FUNCTION 14dd42e42 FUN_14dd42e42 body=135 status=ok
// SIG undefined FUN_14dd42e42(void)

/* WARNING: Removing unreachable block (ram,0x00015b45d263) */
/* WARNING: Removing unreachable block (ram,0x00015b45d269) */
/* WARNING: Removing unreachable block (ram,0x000165974c03) */
/* WARNING: Removing unreachable block (ram,0x00014dd42eca) */

void FUN_14dd42e42(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x70) | param_1;
  FUN_15b593289(param_1,param_2,
                -1 - ((~uVar1 | ~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + uVar1 + 1),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd42eca FUN_14dd42eca body=55 status=ok
// SIG undefined FUN_14dd42eca(void)

void FUN_14dd42eca(void)

{
  return;
}



// FUNCTION 14dd42f44 FUN_14dd42f44 body=159 status=ok
// SIG undefined FUN_14dd42f44(void)

void FUN_14dd42f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar2;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  lVar2 = local_res20 + in_RAX + (local_res20 & in_RAX) * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x10) = param_4;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RDI;
  uVar1 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined1 **)(lVar2 + -8) = &LAB_166b56f56;
  FUN_166b56f34(param_1,param_2,in_stack_00000008,uVar1);
  return;
}



// FUNCTION 14dd42fe6 FUN_14dd42fe6 body=89 status=ok
// SIG undefined FUN_14dd42fe6(void)

void FUN_14dd42fe6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_R12;
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
  ulonglong local_res10;
  ulonglong *local_res18;
  
  bVar10 = (local_res10 & 0x4000) != 0;
  bVar9 = (local_res10 & 0x800) != 0;
  bVar8 = (local_res10 & 0x200) != 0;
  bVar7 = (local_res10 & 0x100) != 0;
  bVar6 = (local_res10 & 0x80) != 0;
  bVar5 = (local_res10 & 0x40) != 0;
  bVar4 = (local_res10 & 0x10) != 0;
  bVar3 = (local_res10 & 4) != 0;
  bVar2 = (local_res10 & 1) != 0;
  bVar14 = (local_res10 & 0x200000) != 0;
  bVar11 = (local_res10 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,unaff_retaddr);
  local_res18[-1] = param_4;
  local_res18[-2] = unaff_R12;
  local_res18[-3] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  uVar15 = local_res18[-3];
  local_res18[-2] =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  *local_res18 = 0x2f15df1;
  *local_res18 = *local_res18 ^ 0x3a34f7f;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dd43067 FUN_14dd43067 body=507 status=ok
// SIG undefined FUN_14dd43067(void)

/* WARNING: Removing unreachable block (ram,0x00014dd430f1) */
/* WARNING: Removing unreachable block (ram,0x00014dd43230) */
/* WARNING: Removing unreachable block (ram,0x000156fc83c3) */
/* WARNING: Removing unreachable block (ram,0x000156fc842a) */
/* WARNING: Removing unreachable block (ram,0x0001616c7162) */
/* WARNING: Removing unreachable block (ram,0x00015b8f8c79) */

void FUN_14dd43067(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50);
  FUN_166c71ecf();
  lVar2 = ~(((unaff_R15 - 1) - ~uVar1) + (uVar1 & unaff_R15) * -2) + 2;
  if (lVar2 < 0) {
    FUN_156a4805a();
    return;
  }
  FUN_16639c658(param_1,-~*(ulonglong *)(in_stack_00000008 + -0x50) - lVar2);
  return;
}



// FUNCTION 14dd433ad FUN_14dd433ad body=869 status=ok
// SIG undefined FUN_14dd433ad(void)

/* WARNING: Removing unreachable block (ram,0x00014dd434cc) */
/* WARNING: Removing unreachable block (ram,0x00014dd434d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd4352d) */
/* WARNING: Removing unreachable block (ram,0x00014dd43462) */
/* WARNING: Removing unreachable block (ram,0x00014dd434d2) */

void FUN_14dd433ad(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_166469e5d();
  FUN_16552cf99(~(*(ulonglong *)(unaff_R12 + -0x58) & uVar1) &
                (*(ulonglong *)(unaff_R12 + -0x58) | uVar1),
                ~-*(longlong *)(unaff_R12 + -0x78) + 1U ^ uVar1);
  return;
}



// FUNCTION 14dd437cf FUN_14dd437cf body=191 status=ok
// SIG undefined FUN_14dd437cf(void)

void FUN_14dd437cf(void)

{
  return;
}



// FUNCTION 14dd439c9 FUN_14dd439c9 body=176 status=ok
// SIG undefined FUN_14dd439c9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd43a24) */

undefined8 FUN_14dd439c9(void)

{
  undefined8 local_res8;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res8._4_4_ = 0xb85a4d9b;
  return local_res8;
}



// FUNCTION 14dd43a7b FUN_14dd43a7b body=41 status=ok
// SIG undefined FUN_14dd43a7b(void)

void FUN_14dd43a7b(void)

{
  return;
}



// FUNCTION 14dd43b2b FUN_14dd43b2b body=162 status=ok
// SIG undefined FUN_14dd43b2b(void)

undefined8 FUN_14dd43b2b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd43c54 thunk_FUN_14dd43c64 body=5 status=ok
// SIG undefined thunk_FUN_14dd43c64(void)

/* WARNING: Removing unreachable block (ram,0x00014dd43ca1) */

void thunk_FUN_14dd43c64(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166b89e0a(param_1,~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                         (*(ulonglong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffff | in_RAX)));
  return;
}



// FUNCTION 14dd43c64 FUN_14dd43c64 body=145 status=ok
// SIG undefined FUN_14dd43c64(void)

/* WARNING: Removing unreachable block (ram,0x00014dd43ca1) */

void FUN_14dd43c64(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166b89e0a(param_1,~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                         (*(ulonglong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffff | in_RAX)));
  return;
}



// FUNCTION 14dd43d7e FUN_14dd43d7e body=167 status=ok
// SIG undefined FUN_14dd43d7e(void)

void FUN_14dd43d7e(void)

{
  FUN_15b6ccb76(FUN_15b6ccb76);
  return;
}



// FUNCTION 14dd43eb7 FUN_14dd43eb7 body=146 status=ok
// SIG undefined FUN_14dd43eb7(void)

/* WARNING: Removing unreachable block (ram,0x00014e2319cd) */
/* WARNING: Removing unreachable block (ram,0x00014dd43f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd43ff4) */
/* WARNING: Removing unreachable block (ram,0x00015b08831d) */
/* WARNING: Removing unreachable block (ram,0x00015b0883a3) */
/* WARNING: Removing unreachable block (ram,0x00015b0883a9) */
/* WARNING: Removing unreachable block (ram,0x00014e2319ad) */
/* WARNING: Removing unreachable block (ram,0x0001614c6a86) */
/* WARNING: Removing unreachable block (ram,0x0001614c6b19) */
/* WARNING: Removing unreachable block (ram,0x0001614c6b1e) */
/* WARNING: Removing unreachable block (ram,0x000162790dfc) */
/* WARNING: Removing unreachable block (ram,0x0001614c6b24) */
/* WARNING: Removing unreachable block (ram,0x00014dd43ffa) */
/* WARNING: Removing unreachable block (ram,0x00016517de58) */
/* WARNING: Removing unreachable block (ram,0x00016517de72) */
/* WARNING: Removing unreachable block (ram,0x00016517de6b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd43eb7(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong *puVar4;
  ulonglong in_R11;
  ulonglong uStack_18;
  
  lVar3 = unaff_RBX + param_2 + 1;
  if (param_1 == 0) {
    uStack_18 = ~(-~(0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x48)) - 1);
    lVar2 = *(longlong *)(unaff_RDI + -0x88);
    FUN_162c57c3a();
    puVar4 = (ulonglong *)((longlong)&uStack_18 + lVar3);
    *puVar4 = *puVar4 ^ 0xffffffffffffffff;
    *puVar4 = *puVar4 + 2;
    *puVar4 = ~*puVar4;
    *puVar4 = *puVar4 + 1;
    *puVar4 = *puVar4 - ~in_R11;
    *(undefined4 *)(lVar2 + 0x130) = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x130);
    *puVar1 = *puVar1;
    uStack_18 = 0xfb950355;
    FUN_156caa701();
    return;
  }
  FUN_1614c697e();
  return;
}



// FUNCTION 14dd43f4b FUN_14dd43f4b body=457 status=ok
// SIG undefined FUN_14dd43f4b(void)

/* WARNING: Removing unreachable block (ram,0x00014e2319cd) */
/* WARNING: Removing unreachable block (ram,0x00015b0883a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd43ffa) */

void FUN_14dd43f4b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165dfb054(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  FUN_14e231a2c();
  return;
}



// FUNCTION 14dd44097 FUN_14dd44097 body=123 status=ok
// SIG undefined FUN_14dd44097(void)

void FUN_14dd44097(void)

{
  FUN_164b02ef5();
  return;
}



// FUNCTION 14dd44246 FUN_14dd44246 body=82 status=ok
// SIG undefined FUN_14dd44246(void)

void FUN_14dd44246(void)

{
  FUN_161253001();
  return;
}



// FUNCTION 14dd443dc FUN_14dd443dc body=143 status=ok
// SIG undefined FUN_14dd443dc(void)

void FUN_14dd443dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d97aae6(FUN_14d97aae6,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd44471 FUN_14dd44471 body=132 status=ok
// SIG undefined FUN_14dd44471(void)

void FUN_14dd44471(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_1571385b2)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd444f6 FUN_14dd444f6 body=56 status=ok
// SIG undefined FUN_14dd444f6(void)

void FUN_14dd444f6(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd4452f FUN_14dd4452f body=96 status=ok
// SIG undefined FUN_14dd4452f(void)

void FUN_14dd4452f(void)

{
  return;
}



// FUNCTION 14dd44596 FUN_14dd44596 body=173 status=ok
// SIG undefined FUN_14dd44596(void)

void FUN_14dd44596(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  *(undefined4 *)(uVar1 - 0x28) = 0xaa8968e0;
  *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
  lVar3 = *(longlong *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(longlong *)(uVar1 - 0x30) = lVar3;
  *(undefined4 *)(uVar1 - 0x30) = 0x25575fe7;
  *(undefined4 *)(uVar1 - 0x2c) = 0;
  *(undefined8 *)((uVar1 - 0x18) + lVar3 + (*(ulonglong *)(uVar1 - 0x30) ^ 0x7021c8cf)) = uVar2;
  *(undefined **)(uVar1 - 0x28) = &DAT_15b4e40ef;
  return;
}



// FUNCTION 14dd4483f FUN_14dd4483f body=327 status=ok
// SIG undefined FUN_14dd4483f(void)

/* WARNING: Removing unreachable block (ram,0x000166b6db99) */
/* WARNING: Removing unreachable block (ram,0x00014dd4490c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4483f(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 uVar3;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x38);
  if (*(ulonglong *)(unaff_RDI + -0x40) != param_1) {
    FUN_166b6db09();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + -0x30);
  if ((~(~(~uVar2 & ~param_1) & ~uVar2) & (~uVar2 | param_1)) != 0) {
    uVar3 = 0;
    FUN_156fc5e99();
    FUN_16181c384(*(ulonglong *)
                   (-0x79 - ((param_1 ^ 0xffffffffffffffff | uVar1) & (~uVar1 | param_1))) ^
                  unaff_R15,0,uVar3);
    return;
  }
  FUN_1615fa94d();
  return;
}



// FUNCTION 14dd44a51 FUN_14dd44a51 body=356 status=ok
// SIG undefined FUN_14dd44a51(void)

/* WARNING: Removing unreachable block (ram,0x00014dd44ade) */
/* WARNING: Removing unreachable block (ram,0x00014dd44ae4) */

void FUN_14dd44a51(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_retaddr;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar1 = ~((~unaff_retaddr | local_res18) & (~local_res18 | unaff_retaddr));
  uVar2 = ~((~unaff_retaddr | local_res20) & ~(local_res20 & ~unaff_retaddr));
  *(undefined8 *)(uVar2 - 8) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R12;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  (*(code *)0x16138a51c)(param_1,param_2);
  return;
}



// FUNCTION 14dd44ae4 FUN_14dd44ae4 body=2 status=ok
// SIG undefined FUN_14dd44ae4(void)

void FUN_14dd44ae4(void)

{
  return;
}



// FUNCTION 14dd44b88 FUN_14dd44b88 body=159 status=ok
// SIG undefined FUN_14dd44b88(void)

void FUN_14dd44b88(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16100017a(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,FUN_16100017a,
                ~(param_3 & unaff_R15) & (~unaff_R15 & param_3 | unaff_R15));
  return;
}



// FUNCTION 14dd44e6d FUN_14dd44e6d body=337 status=ok
// SIG undefined FUN_14dd44e6d(void)

/* WARNING: Removing unreachable block (ram,0x000165b053a1) */
/* WARNING: Removing unreachable block (ram,0x000165b05385) */
/* WARNING: Removing unreachable block (ram,0x000165b05396) */
/* WARNING: Removing unreachable block (ram,0x000165b0539c) */
/* WARNING: Removing unreachable block (ram,0x000164b27eca) */

void FUN_14dd44e6d(undefined8 param_1)

{
  FUN_156499e4e();
  FUN_165c3529e(param_1);
  return;
}



// FUNCTION 14dd44fbf FUN_14dd44fbf body=784 status=ok
// SIG undefined FUN_14dd44fbf(void)

/* WARNING: Removing unreachable block (ram,0x00014dd450ed) */
/* WARNING: Removing unreachable block (ram,0x00014dd450f3) */
/* WARNING: Removing unreachable block (ram,0x00014dd450f8) */
/* WARNING: Removing unreachable block (ram,0x00014dd452a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd452ce) */
/* WARNING: Removing unreachable block (ram,0x00014dd452b7) */
/* WARNING: Removing unreachable block (ram,0x00016256e316) */
/* WARNING: Removing unreachable block (ram,0x00016256e392) */
/* WARNING: Removing unreachable block (ram,0x00016256e39d) */
/* WARNING: Removing unreachable block (ram,0x00016256e3a9) */
/* WARNING: Removing unreachable block (ram,0x0001661bf511) */

void FUN_14dd44fbf(void)

{
  FUN_15af75baa();
  FUN_1615337ea();
  return;
}



// FUNCTION 14dd452d4 FUN_14dd452d4 body=136 status=ok
// SIG undefined FUN_14dd452d4(void)

void FUN_14dd452d4(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = local_res8;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x10) = uVar3;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) - lVar2;
  *(longlong *)(uVar1 - 0x10) = -*(longlong *)(uVar1 - 0x10);
  FUN_16649e26f(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd4535d FUN_14dd4535d body=120 status=ok
// SIG undefined FUN_14dd4535d(void)

void FUN_14dd4535d(undefined8 param_1,undefined8 param_2)

{
  FUN_160df4af0(param_1,param_2);
  return;
}



// FUNCTION 14dd453d5 FUN_14dd453d5 body=12 status=ok
// SIG undefined FUN_14dd453d5(void)

void FUN_14dd453d5(void)

{
  return;
}



// FUNCTION 14dd455d7 FUN_14dd455d7 body=383 status=ok
// SIG undefined FUN_14dd455d7(void)

void FUN_14dd455d7(void)

{
  longlong unaff_RDI;
  ulonglong in_stack_00000010;
  
  FUN_166136dcf();
  FUN_157497f3d(in_stack_00000010,0x5d,(*(ulonglong *)(unaff_RDI + -0x70) & in_stack_00000010) << 1)
  ;
  return;
}



// FUNCTION 14dd45781 FUN_14dd45781 body=533 status=ok
// SIG undefined FUN_14dd45781(void)

/* WARNING: Instruction at (ram,0x00014dd458d4) overlaps instruction at (ram,0x00014dd458d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001614eae39) */
/* WARNING: Removing unreachable block (ram,0x0001614eaec7) */
/* WARNING: Removing unreachable block (ram,0x0001658de944) */
/* WARNING: Removing unreachable block (ram,0x0001614eaecc) */
/* WARNING: Removing unreachable block (ram,0x0001614eaed2) */
/* WARNING: Removing unreachable block (ram,0x0001614eaed7) */
/* WARNING: Removing unreachable block (ram,0x0001658de9ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd4580f) */
/* WARNING: Removing unreachable block (ram,0x00014dd4588d) */
/* WARNING: Removing unreachable block (ram,0x0001658de922) */
/* WARNING: Removing unreachable block (ram,0x0001658de9a3) */
/* WARNING: Removing unreachable block (ram,0x0001658de9a8) */
/* WARNING: Removing unreachable block (ram,0x0001614eada9) */
/* WARNING: Removing unreachable block (ram,0x0001614eadde) */
/* WARNING: Removing unreachable block (ram,0x0001611a96b8) */
/* WARNING: Removing unreachable block (ram,0x00014dd45893) */
/* WARNING: Removing unreachable block (ram,0x00014dd458bd) */
/* WARNING: Removing unreachable block (ram,0x00014dd458bc) */
/* WARNING: Removing unreachable block (ram,0x00014dd4591a) */
/* WARNING: Removing unreachable block (ram,0x00014dd458c3) */
/* WARNING: Removing unreachable block (ram,0x00014dd458d4) */
/* WARNING: Removing unreachable block (ram,0x00014dd458d3) */
/* WARNING: Removing unreachable block (ram,0x00014dd458db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd45781(ulonglong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 local_res20;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(unaff_R15 + 0x10) = unaff_R13 + param_1 + 1;
  uVar3 = ~((~(~param_1 & in_stack_00000030) + in_stack_00000030) - param_1 &
           (~in_stack_00000030 | param_1));
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(local_res20,param_2);
  *(undefined8 *)(uVar3 - 8) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RSI;
  *(undefined1 **)(uVar3 - 0x18) = &LAB_1565da25c;
  return uVar2;
}



// FUNCTION 14dd45893 FUN_14dd45893 body=159 status=ok
// SIG undefined FUN_14dd45893(void)

/* WARNING: Instruction at (ram,0x00014dd458d4) overlaps instruction at (ram,0x00014dd458d3)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd458bc) */
/* WARNING: Removing unreachable block (ram,0x00014dd4591a) */
/* WARNING: Removing unreachable block (ram,0x00014dd458d3) */

void FUN_14dd45893(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  undefined8 in_stack_00000010;
  longlong lVar1;
  undefined1 auStackX_18 [16];
  
  *(undefined4 *)(&stack0x00000010 + unaff_R12) = 0xfea21daa;
  lVar1 = CONCAT44(0x15de257 - (~(uint)((ulonglong)in_stack_00000010 >> 0x20) + 2),
                   (int)in_stack_00000010);
  *(ulonglong *)(&stack0xfffffffffaa25962 + lVar1) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 |
       (ulonglong)SCARRY8((longlong)auStackX_18,lVar1 - 0x55da6aeU) * 0x800 |
       (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((longlong)(&stack0xfffffffffaa2596a + lVar1) < 0) * 0x80 |
       (ulonglong)(&stack0xfffffffffaa2596a + lVar1 == (undefined1 *)0x0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)(&stack0xfffffffffaa2596a + lVar1) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)auStackX_18,lVar1 - 0x55da6aeU) |
       (ulonglong)((in_ID & 1) != 0) * 0x200000 | (ulonglong)((in_AC & 1) != 0) * 0x40000;
  FUN_1628faa6e(param_1,param_2);
  return;
}



// FUNCTION 14dd459e5 FUN_14dd459e5 body=50 status=ok
// SIG undefined FUN_14dd459e5(void)

void FUN_14dd459e5(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dd45b8b FUN_14dd45b8b body=120 status=ok
// SIG undefined FUN_14dd45b8b(void)

/* WARNING: Instruction at (ram,0x00014dd45caa) overlaps instruction at (ram,0x00014dd45ca9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd45ca9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000030 : 0x00014dd45cb8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd45b8b(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong unaff_RBP;
  longlong in_stack_00000020;
  
  uVar1 = *(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = ~*(ulonglong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) | unaff_RBP;
  *(ulonglong *)(param_4 + 0x10) = ~((param_2 | uVar1) & *(ulonglong *)(param_4 + 0x10));
  FUN_161431d6f();
  bVar2 = FUN_1613a2d43();
  FUN_1651e9535(-1 - (~(&stack0x00000040)[in_stack_00000020] | ~bVar2));
  return;
}



// FUNCTION 14dd45c04 FUN_14dd45c04 body=256 status=ok
// SIG undefined FUN_14dd45c04(void)

/* WARNING: Instruction at (ram,0x00014dd45caa) overlaps instruction at (ram,0x00014dd45ca9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd45ca9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014dd45cb8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd45c04(undefined1 param_1,int param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint in_R10D;
  longlong unaff_R12;
  uint unaff_retaddr;
  undefined8 in_stack_00000010;
  
  uVar2 = param_4 + ~(~(unaff_retaddr & 0x95cce028) & (unaff_retaddr | 0x95cce028));
  bVar1 = FUN_1613a2d43(param_1,param_2 + in_R10D + uVar2 + ~(~in_R10D | ~uVar2) * -2,param_3,
                        in_stack_00000010);
  FUN_1651e9535(-1 - (~(&stack0x00000028)[unaff_R12] | ~bVar1));
  return;
}



// FUNCTION 14dd45d07 FUN_14dd45d07 body=148 status=ok
// SIG undefined FUN_14dd45d07(void)

void FUN_14dd45d07(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x165f0bcef)(param_1,unaff_retaddr,0x165f0bcef);
  return;
}



// FUNCTION 14dd45ed1 FUN_14dd45ed1 body=166 status=ok
// SIG undefined FUN_14dd45ed1(void)

void FUN_14dd45ed1(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  
  (*(code *)0x15b4d32fe)(unaff_RDI,param_2,param_3,*(undefined8 *)(param_2 + -0x28));
  return;
}



// FUNCTION 14dd460ec FUN_14dd460ec body=121 status=ok
// SIG undefined FUN_14dd460ec(void)

void FUN_14dd460ec(void)

{
  return;
}



// FUNCTION 14dd4618c FUN_14dd4618c body=159 status=ok
// SIG undefined FUN_14dd4618c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd462e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd462f0) */
/* WARNING: Removing unreachable block (ram,0x00014dd46301) */
/* WARNING: Removing unreachable block (ram,0x00014dd4630c) */
/* WARNING: Removing unreachable block (ram,0x00014dd46221) */
/* WARNING: Removing unreachable block (ram,0x00014dd4622c) */
/* WARNING: Removing unreachable block (ram,0x00014dd462df) */
/* WARNING: Removing unreachable block (ram,0x00014dd46227) */

void FUN_14dd4618c(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_166a9a206();
  (*(code *)0x161972270)(~((~in_RAX | uVar1) & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14dd4622c FUN_14dd4622c body=366 status=ok
// SIG undefined FUN_14dd4622c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd462e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd462f0) */
/* WARNING: Removing unreachable block (ram,0x00014dd46301) */
/* WARNING: Removing unreachable block (ram,0x00014dd4630c) */

void FUN_14dd4622c(void)

{
  FUN_164f139be(0xfffffffffffffff8);
  return;
}



// FUNCTION 14dd463a8 FUN_14dd463a8 body=106 status=ok
// SIG undefined FUN_14dd463a8(void)

void FUN_14dd463a8(ushort *param_1)

{
  char cVar1;
  byte in_AL;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  bool bVar2;
  bool bVar3;
  byte bStackX_10;
  ulonglong uStackX_20;
  longlong in_stack_00000028;
  
  *param_1 = (*param_1 | 0x100) - 0x100;
  LOCK();
  bVar2 = in_AL < DAT_14d7ac31f;
  bVar3 = SBORROW1(in_AL,DAT_14d7ac31f);
  cVar1 = in_AL - DAT_14d7ac31f;
  if (cVar1 == '\0') {
    DAT_14d7ac31f = bStackX_10;
  }
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar3 * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar2 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x20b2f3a;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R12;
  *(code **)(in_stack_00000028 + -0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14dd46436 FUN_14dd46436 body=141 status=ok
// SIG undefined FUN_14dd46436(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd46436(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  FUN_165e84985(FUN_165e84985,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14dd464c5 FUN_14dd464c5 body=198 status=ok
// SIG undefined FUN_14dd464c5(void)

undefined8 FUN_14dd464c5(void)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  ushort *in_R10;
  undefined8 unaff_R14;
  undefined8 local_res10;
  longlong local_res20;
  
  *in_R10 = ~*in_R10;
  uVar2 = *in_R10;
  *in_R10 = *in_R10 & 0x100;
  *in_R10 = (uVar2 + 0x100) - *in_R10;
  *in_R10 = ~*in_R10;
  puVar1 = (undefined8 *)(local_res20 + -8);
  *puVar1 = local_res10;
  *(undefined8 *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0x366c69d1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) | 0xffffffff9027e5c5;
  *(undefined8 *)(local_res20 + -0x28) = in_R9;
  *(undefined8 *)(local_res20 + -0x30) = in_RAX;
  *(undefined8 *)(local_res20 + -0x38) = in_RAX;
  *(undefined8 *)(local_res20 + -0x40) = in_RAX;
  *(code **)(local_res20 + -0x30) = FUN_14dd4658e;
  *(undefined1 **)(local_res20 + -0x38) = &LAB_1665e37ce;
  return *(undefined8 *)(local_res20 + -0x40);
}



// FUNCTION 14dd4658e FUN_14dd4658e body=169 status=ok
// SIG undefined FUN_14dd4658e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4662c) */
/* WARNING: Removing unreachable block (ram,0x00014dd46637) */
/* WARNING: Removing unreachable block (ram,0x00014dd4674a) */
/* WARNING: Removing unreachable block (ram,0x00014dd4674f) */
/* WARNING: Removing unreachable block (ram,0x00014dd46755) */
/* WARNING: Removing unreachable block (ram,0x0001626fe7aa) */
/* WARNING: Removing unreachable block (ram,0x0001626fe82f) */
/* WARNING: Removing unreachable block (ram,0x0001626fe835) */
/* WARNING: Removing unreachable block (ram,0x00016619749a) */
/* WARNING: Removing unreachable block (ram,0x0001661974a7) */
/* WARNING: Removing unreachable block (ram,0x0001661974b6) */
/* WARNING: Removing unreachable block (ram,0x000161b77e71) */
/* WARNING: Removing unreachable block (ram,0x000161b77e7c) */
/* WARNING: Removing unreachable block (ram,0x000161b77e8b) */
/* WARNING: Removing unreachable block (ram,0x000161b77e77) */
/* WARNING: Removing unreachable block (ram,0x00014dd46632) */

void FUN_14dd4658e(void)

{
  uint7 uVar1;
  uint7 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (uint7)((ulonglong)*(undefined8 *)(unaff_R13 + -0x78) >> 8);
  uVar2 = (uint7)(unaff_R15 >> 8);
  FUN_1570ee6e3(CONCAT71(~(uVar1 & uVar2) & (uVar1 | uVar2),0x9a),
                *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15);
  return;
}



// FUNCTION 14dd46637 FUN_14dd46637 body=563 status=ok
// SIG undefined FUN_14dd46637(void)

/* WARNING: Removing unreachable block (ram,0x00014dd46755) */
/* WARNING: Removing unreachable block (ram,0x0001626fe835) */

void FUN_14dd46637(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong unaff_R13;
  ulonglong local_res8;
  ulonglong uStackX_10;
  
  uVar2 = *(ulonglong *)(param_2 + -0x70);
  UNRECOVERED_JUMPTABLE = (code *)FUN_15b0b3e9f();
  if (-1 < (longlong)(~(local_res8 & param_1) & (local_res8 | param_1))) {
    uVar3 = ~((~param_1 + uStackX_10) - (~param_1 & uStackX_10) &
             (0xffffffffffffffff - uStackX_10 | param_1));
    puVar1 = (undefined8 *)(uVar3 - 8);
    *puVar1 = param_3;
    *(undefined8 *)(uVar3 - 0x10) = *puVar1;
    *puVar1 = &LAB_1661974de;
    *(ulonglong *)(uVar3 - 0x18) = uVar2 + in_R10 + (uVar2 & in_R10) * -2;
                    /* WARNING: Could not recover jumptable at 0x0001661974bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_R13 ^ param_1,param_2,*(undefined8 *)(uVar3 - 0x10));
    return;
  }
  FUN_1626fe7aa();
  return;
}



// FUNCTION 14dd4686c FUN_14dd4686c body=114 status=ok
// SIG undefined FUN_14dd4686c(void)

undefined8 FUN_14dd4686c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd46b5f FUN_14dd46b5f body=32 status=ok
// SIG undefined FUN_14dd46b5f(void)

undefined8 FUN_14dd46b5f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd46c5b FUN_14dd46c5b body=147 status=ok
// SIG undefined FUN_14dd46c5b(void)

/* WARNING: Removing unreachable block (ram,0x00015b239b42) */
/* WARNING: Removing unreachable block (ram,0x00014dbde376) */
/* WARNING: Removing unreachable block (ram,0x00014dd46cef) */
/* WARNING: Removing unreachable block (ram,0x00014dd46d84) */
/* WARNING: Removing unreachable block (ram,0x00014dd46d8a) */
/* WARNING: Removing unreachable block (ram,0x00014dd46d8f) */
/* WARNING: Removing unreachable block (ram,0x00015b914108) */
/* WARNING: Removing unreachable block (ram,0x00015b914159) */
/* WARNING: Removing unreachable block (ram,0x00015b91415d) */
/* WARNING: Removing unreachable block (ram,0x00015b239b48) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

undefined8 FUN_14dd46c5b(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if ((longlong)
      ((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x80)) &
      (~*(ulonglong *)(unaff_RSI + -0x80) | unaff_RBP)) < 0) {
    uVar1 = FUN_14dbde376();
    return uVar1;
  }
  uVar1 = FUN_15b239abb();
  return uVar1;
}



// FUNCTION 14dd46cef FUN_14dd46cef body=182 status=ok
// SIG undefined FUN_14dd46cef(void)

/* WARNING: Removing unreachable block (ram,0x00015b914159) */

undefined8 FUN_14dd46cef(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = ~*(ulonglong *)(unaff_RDI + -0xa0) | param_1;
  uVar3 = ~uVar2 | ~param_1 | *(ulonglong *)(unaff_RDI + -0xa0);
  if (!CARRY8(uVar3,uVar2)) {
    return 0x54db226;
  }
  if (!CARRY8(uVar3,uVar2)) {
    *(ulonglong *)(uVar3 + uVar2) = in_RAX ^ 0xac91427a73ca2b2b;
    uVar1 = thunk_FUN_160f41655();
    return uVar1;
  }
  uVar1 = FUN_15b914108();
  return uVar1;
}



// FUNCTION 14dd46da6 FUN_14dd46da6 body=663 status=ok
// SIG undefined FUN_14dd46da6(void)

/* WARNING: Removing unreachable block (ram,0x000166b0e8f7) */
/* WARNING: Removing unreachable block (ram,0x00014dd46ea5) */

void FUN_14dd46da6(void)

{
  FUN_15696a7a9();
  FUN_14d8693a8();
  return;
}



// FUNCTION 14dd46eab FUN_14dd46eab body=305 status=ok
// SIG undefined FUN_14dd46eab(void)

/* WARNING: Removing unreachable block (ram,0x00014dd46f48) */
/* WARNING: Removing unreachable block (ram,0x00014dd46f53) */
/* WARNING: Removing unreachable block (ram,0x00014dd46f4e) */

void FUN_14dd46eab(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  short unaff_R13W;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  sVar1 = *param_3;
  *param_3 = -0x3d93;
  *param_3 = *param_3 + 0x3d93;
  *param_3 = *param_3 + (-0x101 - unaff_R13W) + sVar1;
  *(undefined8 *)(local_res20 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(code **)(local_res20 + -0x28) = UNRECOVERED_JUMPTABLE;
  *(undefined4 *)(local_res20 + -0x28) = 0x216471df;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(undefined4 *)(local_res20 + -0x24) = *(undefined4 *)(local_res20 + -0x24);
  uVar2 = *(ulonglong *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18 + (uVar2 ^ 0x216471d7)) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0x46057cde;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x46057cde;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x16476c3a7;
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + 0x10);
  *(undefined4 *)(local_res20 + -0x14) = 0;
  *(undefined4 *)(local_res20 + -0x18) = *(undefined4 *)(local_res20 + -0x18);
  if (*(int *)(local_res20 + -0x18) < 0) {
    *(undefined4 *)(local_res20 + -0x14) = 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00016476c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd47093 FUN_14dd47093 body=184 status=ok
// SIG undefined FUN_14dd47093(void)

void FUN_14dd47093(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ in_R10;
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_14dd4714f;
  FUN_1616017a6(uVar2,param_2,*(undefined8 *)(local_res18 + -0x20));
  return;
}



// FUNCTION 14dd471fd thunk_FUN_14dd47203 body=5 status=ok
// SIG undefined thunk_FUN_14dd47203(void)

void thunk_FUN_14dd47203(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  (*(code *)0x15b4886b6)(param_1,param_2 ^ in_RAX);
  return;
}



// FUNCTION 14dd47203 FUN_14dd47203 body=138 status=ok
// SIG undefined FUN_14dd47203(void)

void FUN_14dd47203(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  (*(code *)0x15b4886b6)(param_1,param_2 ^ in_RAX);
  return;
}



// FUNCTION 14dd4728d FUN_14dd4728d body=287 status=ok
// SIG undefined FUN_14dd4728d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4737c) */
/* WARNING: Removing unreachable block (ram,0x00014dd473c9) */
/* WARNING: Removing unreachable block (ram,0x00014dd473cf) */
/* WARNING: Removing unreachable block (ram,0x00014dd4742e) */
/* WARNING: Removing unreachable block (ram,0x00016607ad1f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4728d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_R10;
  
  FUN_15b23545d();
  if ((in_R10 & 0x80000000) != 0) {
    FUN_16607ad1f();
    return;
  }
  FUN_15b307fe3(&DAT_ac91427a73ca2b2b,param_2,param_3,2);
  return;
}



// FUNCTION 14dd4746d FUN_14dd4746d body=148 status=ok
// SIG undefined FUN_14dd4746d(void)

void FUN_14dd4746d(undefined8 param_1,int param_2)

{
  int in_R10D;
  int in_stack_00000008;
  
  if (SCARRY4(in_stack_00000008,-0x3c3fd239)) {
    in_R10D = in_stack_00000008 + -0x3c3fd239;
  }
  FUN_14dfad966(0,param_2 + in_R10D,ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14dd475c8 FUN_14dd475c8 body=136 status=ok
// SIG undefined FUN_14dd475c8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd476c4) */
/* WARNING: Removing unreachable block (ram,0x00014dd4764b) */
/* WARNING: Removing unreachable block (ram,0x000165c70fd9) */
/* WARNING: Removing unreachable block (ram,0x00014dd47651) */
/* WARNING: Removing unreachable block (ram,0x00014dd476c7) */
/* WARNING: Removing unreachable block (ram,0x00014dd476d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd476e1) */
/* WARNING: Removing unreachable block (ram,0x00014dd476ec) */
/* WARNING: Removing unreachable block (ram,0x00014dd4780c) */
/* WARNING: Removing unreachable block (ram,0x00014dd47812) */
/* WARNING: Removing unreachable block (ram,0x000165f7a6e9) */
/* WARNING: Removing unreachable block (ram,0x000161aeecc3) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000161aeed41) */
/* WARNING: Removing unreachable block (ram,0x000161aeed47) */
/* WARNING: Removing unreachable block (ram,0x000161aeed4c) */
/* WARNING: Removing unreachable block (ram,0x000161aeed7c) */
/* WARNING: Removing unreachable block (ram,0x000161aeed83) */
/* WARNING: Removing unreachable block (ram,0x000166300966) */
/* WARNING: Removing unreachable block (ram,0x000166300a91) */
/* WARNING: Removing unreachable block (ram,0x000166300a97) */
/* WARNING: Removing unreachable block (ram,0x000166300a8c) */
/* WARNING: Removing unreachable block (ram,0x00014dc4c76a) */
/* WARNING: Removing unreachable block (ram,0x000161aeedc7) */
/* WARNING: Removing unreachable block (ram,0x000161aeedcd) */
/* WARNING: Removing unreachable block (ram,0x000161aeedd2) */

void FUN_14dd475c8(void)

{
  FUN_165c70fd9();
  return;
}



// FUNCTION 14dd47651 FUN_14dd47651 body=153 status=ok
// SIG undefined FUN_14dd47651(void)

/* WARNING: Removing unreachable block (ram,0x00014dd476c4) */
/* WARNING: Removing unreachable block (ram,0x000161aeedc7) */
/* WARNING: Removing unreachable block (ram,0x000161aeedcd) */
/* WARNING: Removing unreachable block (ram,0x000161aeedd2) */
/* WARNING: Removing unreachable block (ram,0x000161aeed4c) */
/* WARNING: Removing unreachable block (ram,0x000161aeed7c) */
/* WARNING: Removing unreachable block (ram,0x000161aeed83) */
/* WARNING: Removing unreachable block (ram,0x000166300a91) */
/* WARNING: Removing unreachable block (ram,0x000166300a8c) */
/* WARNING: Removing unreachable block (ram,0x00014dc4c76a) */
/* WARNING: Removing unreachable block (ram,0x00014dd476ec) */
/* WARNING: Removing unreachable block (ram,0x00014dd4780c) */
/* WARNING: Removing unreachable block (ram,0x000165f7a6e9) */
/* WARNING: Removing unreachable block (ram,0x00014dd47812) */
/* WARNING: Removing unreachable block (ram,0x000166300a97) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd47651(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = ~(~(param_3 & 0xffffffffe6176b9c) & (param_3 | 0xffffffffe6176b9c)) ^
          *(ulonglong *)(unaff_R12 + -0x80);
  if (-1 < (longlong)(*(longlong *)(unaff_R12 + -0x28) + in_RAX)) {
    FUN_161aeecc3();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78) & in_RAX;
  if ((longlong)uVar1 < 0) {
    FUN_161c708bd();
    return;
  }
  FUN_1568bd65a((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                ~(*(ulonglong *)(unaff_R12 + -0x58) & ~in_RAX) ^ 0xffffffffffffffff,
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX + uVar1 * -2,
                ~((in_RAX ^ 0xffffffffffffffff) + (-1 - (~uVar2 | in_RAX ^ 0xffffffffffffffff)) &
                 (uVar2 ^ 0xffffffffffffffff | in_RAX)));
  return;
}



// FUNCTION 14dd476ec FUN_14dd476ec body=294 status=ok
// SIG undefined FUN_14dd476ec(void)

/* WARNING: Removing unreachable block (ram,0x00014dd47812) */

void FUN_14dd476ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16687a01b(unaff_retaddr,CONCAT71((int7)((ulonglong)param_2 >> 8),0x98) ^ 0xe0);
  FUN_1660e02a0();
  return;
}



// FUNCTION 14dd47812 FUN_14dd47812 body=330 status=ok
// SIG undefined FUN_14dd47812(void)

void FUN_14dd47812(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  longlong unaff_RDI;
  undefined8 local_res18;
  
  bVar1 = (byte)param_1 & 0x3f;
  FUN_1659b3d7b(param_1,*(ulonglong *)(unaff_RDI + -0x40) | param_1,
                param_3 >> bVar1 | param_3 << 0x40 - bVar1);
  FUN_161184a8e(local_res18,0xfffffffffffffff8,FUN_161184a8e,0x97ea6a);
  return;
}



// FUNCTION 14dd4795c FUN_14dd4795c body=147 status=ok
// SIG undefined FUN_14dd4795c(void)

void FUN_14dd4795c(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  ulonglong uVar1;
  undefined8 local_8;
  
  uVar1 = unaff_R13 ^ -~in_R10 - (~param_2 + 2) ^ *(ulonglong *)(unaff_RDI + -0x38);
  uVar1 = (uVar1 - (~param_1 | uVar1)) + ~param_1 | param_1;
  local_8 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),0x98dd);
  FUN_166b4f53e(param_1,uVar1,local_8 ^ 0x98dd,uVar1);
  return;
}



// FUNCTION 14dd47b1b FUN_14dd47b1b body=140 status=ok
// SIG undefined FUN_14dd47b1b(void)

void FUN_14dd47b1b(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  FUN_162cf51cb(param_1,*(ulonglong *)
                         (unaff_RSI +
                         ~(~(param_4 & 0xffffffffa6faf7fd) & (param_4 | 0xffffffffa6faf7fd))) ^
                        unaff_RBP,FUN_162cf51cb,unaff_retaddr);
  return;
}



// FUNCTION 14dd47ced FUN_14dd47ced body=162 status=ok
// SIG undefined FUN_14dd47ced(void)

/* WARNING: Removing unreachable block (ram,0x00014dd47d8b) */
/* WARNING: Removing unreachable block (ram,0x00014dd47d7a) */

void FUN_14dd47ced(void)

{
  return;
}



// FUNCTION 14dd47d91 FUN_14dd47d91 body=356 status=ok
// SIG undefined FUN_14dd47d91(void)

/* WARNING: Removing unreachable block (ram,0x00014dd47e29) */
/* WARNING: Removing unreachable block (ram,0x00014dd47e34) */
/* WARNING: Removing unreachable block (ram,0x00014dd47e2f) */

void FUN_14dd47d91(void)

{
  FUN_16178d065();
  return;
}



// FUNCTION 14dd47f90 FUN_14dd47f90 body=520 status=ok
// SIG undefined FUN_14dd47f90(void)

/* WARNING: Removing unreachable block (ram,0x00014dd48032) */
/* WARNING: Removing unreachable block (ram,0x00014dd480cc) */
/* WARNING: Removing unreachable block (ram,0x0001629d6741) */
/* WARNING: Removing unreachable block (ram,0x000161346f54) */
/* WARNING: Removing unreachable block (ram,0x000161346fa4) */
/* WARNING: Removing unreachable block (ram,0x000161346f34) */
/* WARNING: Removing unreachable block (ram,0x000161346f4f) */
/* WARNING: Removing unreachable block (ram,0x000161346f9a) */
/* WARNING: Removing unreachable block (ram,0x000161346fa9) */
/* WARNING: Removing unreachable block (ram,0x000161346faf) */
/* WARNING: Removing unreachable block (ram,0x000161346fb4) */
/* WARNING: Removing unreachable block (ram,0x000157475f0a) */
/* WARNING: Removing unreachable block (ram,0x00014dd480d2) */

undefined8 FUN_14dd47f90(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  longlong lVar2;
  
  lVar2 = unaff_RSI - (param_2 ^ 0x1765bab);
  if (unaff_RSI == (param_2 ^ 0x1765bab)) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (lVar2 == 1) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (lVar2 != 2) {
    uVar1 = thunk_FUN_161346f1a();
    return uVar1;
  }
  uVar1 = FUN_16131bb16();
  return uVar1;
}



// FUNCTION 14dd48226 FUN_14dd48226 body=78 status=ok
// SIG undefined FUN_14dd48226(void)

void FUN_14dd48226(void)

{
  return;
}



// FUNCTION 14dd484b2 FUN_14dd484b2 body=90 status=ok
// SIG undefined FUN_14dd484b2(void)

void FUN_14dd484b2(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd48744 FUN_14dd48744 body=148 status=ok
// SIG undefined FUN_14dd48744(void)

void FUN_14dd48744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166a597f3(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd4886d FUN_14dd4886d body=302 status=ok
// SIG undefined FUN_14dd4886d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd48910) */
/* WARNING: Removing unreachable block (ram,0x00014dd4891c) */

void FUN_14dd4886d(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = ~-*(longlong *)(unaff_RDI + -0x60) + 1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  FUN_166cbd9ec(param_1,FUN_166cbd9ec,
                ~((param_1 - ~(~uVar1 & ~param_1)) + uVar1) & (uVar1 | param_1),
                ~(uVar2 & param_1) & (uVar2 | param_1));
  return;
}



// FUNCTION 14dd48afc FUN_14dd48afc body=550 status=ok
// SIG undefined FUN_14dd48afc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd48b67) */
/* WARNING: Removing unreachable block (ram,0x00014dd48b6d) */
/* WARNING: Removing unreachable block (ram,0x00014dd48bc9) */
/* WARNING: Removing unreachable block (ram,0x00014dd48bcb) */

void FUN_14dd48afc(undefined8 param_1)

{
  FUN_161deb771(param_1,0x11fff02f,FUN_161deb771);
  return;
}



// FUNCTION 14dd48c9c FUN_14dd48c9c body=319 status=ok
// SIG undefined FUN_14dd48c9c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dd48c9c(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_161388344();
  uVar1 = -((longlong)uVar2 >> 0x3f);
  if (uVar1 == 0) {
    return uVar2 << 1 | uVar1;
  }
  return uVar2 & 0x7fffffffffffffff | uVar1 << 0x3f;
}



// FUNCTION 14dd48ddc FUN_14dd48ddc body=110 status=ok
// SIG undefined FUN_14dd48ddc(void)

void FUN_14dd48ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R13;
  
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_R13 + 8) =
       (~((in_RAX - (uVar1 | in_RAX)) + uVar1) + in_RAX) - *(longlong *)(unaff_R13 + 8);
  FUN_15729753b(FUN_15729753b,param_2,param_3);
  return;
}



// FUNCTION 14dd48e4b FUN_14dd48e4b body=138 status=ok
// SIG undefined FUN_14dd48e4b(void)

void FUN_14dd48e4b(void)

{
  return;
}



// FUNCTION 14dd48edc FUN_14dd48edc body=103 status=ok
// SIG undefined FUN_14dd48edc(void)

void FUN_14dd48edc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_166abb803(0x1f,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd48fc3 FUN_14dd48fc3 body=89 status=ok
// SIG undefined FUN_14dd48fc3(void)

undefined8 FUN_14dd48fc3(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dd4905c FUN_14dd4905c body=318 status=ok
// SIG undefined FUN_14dd4905c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4919e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd4905c(void)

{
  undefined4 uVar1;
  undefined4 unaff_R12D;
  bool in_ZF;
  
  if (!in_ZF) {
    FUN_15b133705();
    return;
  }
  uVar1 = SystemReserved1[0x1d]._4_4_;
  FUN_1649fae12();
  if (-1 < (longlong)(_LAB_1649fadb1_1 ^ CONCAT44(uVar1,unaff_R12D))) {
    return;
  }
  FUN_165cf8a0d();
  return;
}



// FUNCTION 14dd4919e FUN_14dd4919e body=136 status=ok
// SIG undefined FUN_14dd4919e(void)

void FUN_14dd4919e(void)

{
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ushort *unaff_R15;
  undefined8 in_stack_00000008;
  longlong in_stack_00000028;
  
  *unaff_R15 = (-0x101 - ((*unaff_R15 - 0x101) - (*unaff_R15 & 0xfeff))) + *unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_stack_00000008;
  *(undefined **)(in_stack_00000028 + -8) = &DAT_164b7eb95;
  FUN_164b7eb70();
  return;
}



// FUNCTION 14dd4937b FUN_14dd4937b body=528 status=ok
// SIG undefined FUN_14dd4937b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd49481) */
/* WARNING: Removing unreachable block (ram,0x00014dd49487) */
/* WARNING: Removing unreachable block (ram,0x00014dd4948c) */
/* WARNING: Removing unreachable block (ram,0x00014dd49404) */
/* WARNING: Removing unreachable block (ram,0x00014dd4940f) */
/* WARNING: Removing unreachable block (ram,0x00014dd4947c) */
/* WARNING: Removing unreachable block (ram,0x00014dd4940a) */

void FUN_14dd4937b(ulonglong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  ulonglong local_res20;
  
  puVar1 = (undefined8 *)(local_res20 ^ param_1);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  puVar1[-1] = unaff_RBP;
  puVar1[-2] = 0x4f87c6a;
  *puVar1 = puVar1[-2];
  puVar1[-1] = in_R10;
  puVar1[-2] = in_R10;
  puVar1[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14dd4958c FUN_14dd4958c body=5 status=ok
// SIG undefined FUN_14dd4958c(void)

void FUN_14dd4958c(void)

{
  return;
}



// FUNCTION 14dd4969c FUN_14dd4969c body=160 status=ok
// SIG undefined FUN_14dd4969c(void)

void FUN_14dd4969c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165528bfb(FUN_165528bfb,0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dd4973c FUN_14dd4973c body=68 status=ok
// SIG undefined FUN_14dd4973c(void)

void FUN_14dd4973c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_R13) = param_2;
  return;
}



// FUNCTION 14dd497c3 FUN_14dd497c3 body=314 status=ok
// SIG undefined FUN_14dd497c3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd49930) */
/* WARNING: Removing unreachable block (ram,0x00014dd498e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd49865) */
/* WARNING: Removing unreachable block (ram,0x00014dd498dd) */
/* WARNING: Removing unreachable block (ram,0x00014dd498d8) */

void FUN_14dd497c3(undefined8 param_1,undefined8 param_2)

{
  short unaff_BX;
  short *unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *unaff_RBP = unaff_BX + *unaff_RBP;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x20) = in_R11;
  *(undefined8 *)(local_res20 + -0x28) = 0;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x28);
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) + *(longlong *)(local_res20 + -8);
  *(undefined **)(local_res20 + -8) = &DAT_1660cb14a;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_1660cb12b;
  return;
}



// FUNCTION 14dd498e3 FUN_14dd498e3 body=169 status=ok
// SIG undefined FUN_14dd498e3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd49930) */

void FUN_14dd498e3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 0x1646e4dad;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(longlong *)(local_res18 + -0x10) =
       (longlong)(&DAT_14d7c3a14 + *(longlong *)(local_res18 + -0x10));
  FUN_1646e4d6d(uVar1);
  return;
}



// FUNCTION 14dd49a26 FUN_14dd49a26 body=580 status=ok
// SIG undefined FUN_14dd49a26(void)

void FUN_14dd49a26(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong unaff_R14;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uStack_20;
  
  uStack_20 = 0x14dd49abe;
  uVar1 = FUN_160e2177e(param_1);
  lVar3 = unaff_R14 - (param_2 + 1);
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar1;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar3) = 0x3ad3ae4b;
  *(undefined4 *)(&stack0xffffffffffffffec + lVar3) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar3) = 0x310bfb9f;
  *(undefined4 *)(&stack0xffffffffffffffec + lVar3) = 0;
  if ((~(*(ulonglong *)(&stack0xffffffffffffffe8 + lVar3) & 0xffffffffcef40470) &
      (*(ulonglong *)(&stack0xffffffffffffffe8 + lVar3) | 0xffffffffcef40470)) != 0) {
    *(undefined1 **)(&stack0xffffffffffffffe8 + lVar3) = &LAB_161ad4f5a;
    return;
  }
  *(ulonglong *)(&stack0xffffffffffffffe8 + lVar3) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if ((*(uint *)(&stack0xffffffffffffffe8 + lVar3) >> 6 & 1) == 0) {
    uVar2 = -~*(ulonglong *)(unaff_RSI + -0x58) - 1;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = unaff_R15;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = 0x452a51b5;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0x14dd49bf0;
    FUN_1620c7588(unaff_RDI + param_1 * -2,
                  ~((uVar2 | 0xffffffffbad5ae4a) & (~uVar2 & 0xffffffffbad5ae4a | 0x452a51b5)));
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    FUN_165a3ac20();
    return;
  }
  FUN_161ad4f40();
  return;
}



// FUNCTION 14dd49d1f FUN_14dd49d1f body=815 status=ok
// SIG undefined FUN_14dd49d1f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd49dab) */
/* WARNING: Removing unreachable block (ram,0x00014dd49da2) */
/* WARNING: Removing unreachable block (ram,0x00014dd49daf) */
/* WARNING: Removing unreachable block (ram,0x00014dd49e2f) */
/* WARNING: Removing unreachable block (ram,0x0001652dc498) */
/* WARNING: Removing unreachable block (ram,0x00014dd49e35) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a04a) */

void FUN_14dd49d1f(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  undefined8 local_res10;
  
  if (*(longlong *)(unaff_RDI + -0x48) == 0) {
    FUN_15674f122(param_1,~(unaff_RBP & (in_stack_00000008 + param_1) - (param_2 & param_1)));
    *(ulonglong *)(local_res10 + 8) = ~*(ulonglong *)(local_res10 + 8);
    *(ulonglong *)(local_res10 + 8) = *(ulonglong *)(local_res10 + 8) | 0x15674f122;
    FUN_161c2d426();
    return;
  }
  FUN_156765636();
  return;
}



// FUNCTION 14dd4a054 FUN_14dd4a054 body=131 status=ok
// SIG undefined FUN_14dd4a054(void)

void FUN_14dd4a054(void)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  FUN_1625beff5(CONCAT71((int7)((ulonglong)(*(longlong *)(unaff_R12 + -0x90) + in_RAX) >> 8),1));
  return;
}



// FUNCTION 14dd4a49c FUN_14dd4a49c body=134 status=ok
// SIG undefined FUN_14dd4a49c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4a522) */
/* WARNING: Removing unreachable block (ram,0x00015733ff4c) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a65c) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a662) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a667) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a6fb) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d6bb) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d6aa) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d700) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d70c) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d712) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a700) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a706) */
/* WARNING: Removing unreachable block (ram,0x0001574de1a5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4a49c(undefined8 param_1)

{
  FUN_15b890612(param_1,0,FUN_15b890612);
  return;
}



// FUNCTION 14dd4a522 FUN_14dd4a522 body=495 status=ok
// SIG undefined FUN_14dd4a522(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4a700) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a706) */
/* WARNING: Removing unreachable block (ram,0x0001574de1a5) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a667) */

void FUN_14dd4a522(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar1;
  
  lVar1 = (*(ulonglong *)(unaff_RDI + -0x70) & param_1) << 1;
  FUN_165ef1827(param_1,CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                 ~((ushort)param_2 & 0xe045) & ((ushort)param_2 & 0x1fba | 0xe045))
                        ^ 0xffff,lVar1,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  if (*(longlong *)(unaff_RSI + -0x80) != 0) {
    FUN_15733ff4c();
    return;
  }
  FUN_160e2a6c5(param_1,*(ulonglong *)(unaff_RSI + -0x58) ^ 0x165ef1827,lVar1);
  return;
}



// FUNCTION 14dd4a815 FUN_14dd4a815 body=122 status=ok
// SIG undefined FUN_14dd4a815(void)

void FUN_14dd4a815(undefined8 param_1)

{
  undefined8 in_R10;
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined1 **)(local_res10 + -8) = &LAB_14dd4a8ab;
  FUN_14d7ab21a(*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dd4a95f thunk_FUN_14dd4a965 body=5 status=ok
// SIG undefined thunk_FUN_14dd4a965(void)

/* WARNING: Removing unreachable block (ram,0x000156b613ce) */
/* WARNING: Removing unreachable block (ram,0x000156b612a5) */
/* WARNING: Removing unreachable block (ram,0x000156b61343) */
/* WARNING: Removing unreachable block (ram,0x000156b6134f) */
/* WARNING: Removing unreachable block (ram,0x000160d6038a) */
/* WARNING: Removing unreachable block (ram,0x000156b6123a) */
/* WARNING: Removing unreachable block (ram,0x000156b6129a) */
/* WARNING: Removing unreachable block (ram,0x000156b6129f) */
/* WARNING: Removing unreachable block (ram,0x000160e7ee70) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thunk_FUN_14dd4a965(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  char unaff_SIL;
  
  if (unaff_SIL == -1) {
    return in_RAX;
  }
  uVar1 = FUN_156b6121c();
  return uVar1;
}



// FUNCTION 14dd4a965 FUN_14dd4a965 body=396 status=ok
// SIG undefined FUN_14dd4a965(void)

/* WARNING: Removing unreachable block (ram,0x000156b613ce) */
/* WARNING: Removing unreachable block (ram,0x000156b612a5) */
/* WARNING: Removing unreachable block (ram,0x000156b61343) */
/* WARNING: Removing unreachable block (ram,0x000156b6134f) */
/* WARNING: Removing unreachable block (ram,0x000160d6038a) */
/* WARNING: Removing unreachable block (ram,0x000156b6123a) */
/* WARNING: Removing unreachable block (ram,0x000156b6129a) */
/* WARNING: Removing unreachable block (ram,0x000156b6129f) */
/* WARNING: Removing unreachable block (ram,0x000160e7ee70) */
/* WARNING: Removing unreachable block (ram,0x00014dd4a9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd4a965(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  char unaff_SIL;
  
  if (unaff_SIL == -1) {
    return in_RAX;
  }
  uVar1 = FUN_156b6121c();
  return uVar1;
}



// FUNCTION 14dd4ab22 FUN_14dd4ab22 body=162 status=ok
// SIG undefined FUN_14dd4ab22(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4ac5b) */

void FUN_14dd4ab22(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_156a2d851(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                (param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x88));
  FUN_16573e9aa(DAT_156a2d7d9 + unaff_R15 + (DAT_156a2d7d9 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd4abc5 FUN_14dd4abc5 body=285 status=ok
// SIG undefined FUN_14dd4abc5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4ac5b) */

void FUN_14dd4abc5(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16573e9aa(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd4adee FUN_14dd4adee body=58 status=ok
// SIG undefined FUN_14dd4adee(void)

void FUN_14dd4adee(void)

{
  return;
}



// FUNCTION 14dd4b12d FUN_14dd4b12d body=177 status=ok
// SIG undefined FUN_14dd4b12d(void)

void FUN_14dd4b12d(undefined8 param_1)

{
  FUN_1669c1628(param_1);
  return;
}



// FUNCTION 14dd4b718 FUN_14dd4b718 body=141 status=ok
// SIG undefined FUN_14dd4b718(void)

void FUN_14dd4b718(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_R13;
  longlong unaff_R15;
  longlong alStack_10 [2];
  
  lVar2 = unaff_RSI - ~(~(unaff_RBP & 0xffffffffca131699) & (unaff_RBP | 0xffffffffca131699));
  *(ulonglong *)(&stack0x00000008 + lVar2) = *(ulonglong *)(unaff_R13 + -0x30);
  puVar1 = (undefined8 *)(&stack0x00000000 + lVar2);
  lVar3 = (unaff_R15 + -1) - ~*(ulonglong *)(&stack0x00000008 + lVar2);
  *(undefined8 *)(&stack0x00000008 + lVar2) = param_1;
  *puVar1 = param_1;
  *(undefined1 *)puVar1 = 10;
  puVar1[-1] = lVar3;
  puVar1[-2] = lVar3;
  puVar1[-1] = &DAT_14dd4b7a7;
  return;
}



// FUNCTION 14dd4b7a9 FUN_14dd4b7a9 body=175 status=ok
// SIG undefined FUN_14dd4b7a9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4b836) */

undefined8 FUN_14dd4b7a9(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  undefined2 local_res20;
  
  *(longlong *)(unaff_RBP + 8) = unaff_R13 - in_RAX;
  if (-1 < (short)(~local_res20 | 0x100)) {
    uVar1 = FUN_15b6ed9eb();
    return uVar1;
  }
  uVar1 = FUN_15b6ed9eb();
  return uVar1;
}



// FUNCTION 14dd4ba27 FUN_14dd4ba27 body=11 status=ok
// SIG undefined FUN_14dd4ba27(void)

void FUN_14dd4ba27(void)

{
  return;
}



// FUNCTION 14dd4bc08 FUN_14dd4bc08 body=272 status=ok
// SIG undefined FUN_14dd4bc08(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4bcb5) */

void FUN_14dd4bc08(void)

{
  return;
}



// FUNCTION 14dd4c01e FUN_14dd4c01e body=135 status=ok
// SIG undefined FUN_14dd4c01e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4c076) */

void FUN_14dd4c01e(void)

{
  return;
}



// FUNCTION 14dd4c0b4 FUN_14dd4c0b4 body=82 status=ok
// SIG undefined FUN_14dd4c0b4(void)

void FUN_14dd4c0b4(void)

{
  return;
}



// FUNCTION 14dd4c159 FUN_14dd4c159 body=423 status=ok
// SIG undefined FUN_14dd4c159(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000162ec76a3) */
/* WARNING: Removing unreachable block (ram,0x000162ec76a9) */
/* WARNING: Removing unreachable block (ram,0x000156d32a5a) */
/* WARNING: Removing unreachable block (ram,0x000162ec773c) */
/* WARNING: Removing unreachable block (ram,0x000162ec7742) */
/* WARNING: Removing unreachable block (ram,0x000162ec7747) */
/* WARNING: Removing unreachable block (ram,0x00014d7abd12) */
/* WARNING: Removing unreachable block (ram,0x000162ec7621) */
/* WARNING: Removing unreachable block (ram,0x0001660fdbb5) */
/* WARNING: Removing unreachable block (ram,0x0001660fdbb8) */
/* WARNING: Removing unreachable block (ram,0x0001660fdc2d) */
/* WARNING: Removing unreachable block (ram,0x0001660fdc33) */
/* WARNING: Removing unreachable block (ram,0x0001660fdc28) */
/* WARNING: Removing unreachable block (ram,0x000164b0537b) */
/* WARNING: Removing unreachable block (ram,0x00014dd4c270) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd4c159(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  int in_R10D;
  longlong unaff_R13;
  ulonglong unaff_R15;
  int unaff_retaddr;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  FUN_1565161d2(param_1,uVar3,param_3);
  uVar4 = ~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  if ((~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x38)) == 0 && unaff_R15 == 0) {
    uVar2 = FUN_162ec74e3();
    return uVar2;
  }
  FUN_1658f0974(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28),
                ~(uVar4 - ~(~uVar4 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88))),
                ~(param_4 & unaff_R15) & uVar3);
  iVar1 = unaff_retaddr + in_R10D + 0x1a4db5a9;
  if (*(longlong *)(unaff_R13 + -0x80) == 0) {
    uVar2 = FUN_1629c0e0a(4,iVar1);
    return uVar2;
  }
  uVar2 = FUN_1629c0e0a(4,iVar1);
  return uVar2;
}



// FUNCTION 14dd4c42f FUN_14dd4c42f body=280 status=ok
// SIG undefined FUN_14dd4c42f(void)

void FUN_14dd4c42f(void)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong in_R11;
  ulonglong unaff_retaddr;
  
  uVar2 = (*(longlong *)(unaff_RDI + -0x50) + -1) - ~(0xffffffffffffffff - in_R11 & in_R11);
  uVar1 = ~unaff_retaddr | uVar2;
  uVar2 = ~uVar2 | unaff_retaddr;
  FUN_161de807d();
  uVar1 = *(ulonglong *)(~((uVar2 - (uVar1 | uVar2)) + uVar1) - 0x58);
  FUN_14d8e0cfc(unaff_retaddr ^ unaff_RBP,(-~unaff_RBP - (~uVar1 + 2)) + (uVar1 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14dd4c73d FUN_14dd4c73d body=142 status=ok
// SIG undefined FUN_14dd4c73d(void)

void FUN_14dd4c73d(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  (*(code *)0x16112d89a)
            (param_1,param_2,
             ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  return;
}



// FUNCTION 14dd4c7cb FUN_14dd4c7cb body=619 status=ok
// SIG undefined FUN_14dd4c7cb(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4c85c) */
/* WARNING: Removing unreachable block (ram,0x00014dd4c868) */
/* WARNING: Removing unreachable block (ram,0x00014dd4c908) */
/* WARNING: Removing unreachable block (ram,0x0001655bdf97) */
/* WARNING: Removing unreachable block (ram,0x0001655bdfa3) */
/* WARNING: Removing unreachable block (ram,0x0001655bdfb3) */
/* WARNING: Removing unreachable block (ram,0x0001655be023) */
/* WARNING: Removing unreachable block (ram,0x00014dd4c913) */
/* WARNING: Removing unreachable block (ram,0x00014dd4c919) */
/* WARNING: Removing unreachable block (ram,0x000156adae69) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ca1d) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ca29) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ca2f) */
/* WARNING: Removing unreachable block (ram,0x0001655bde84) */
/* WARNING: Removing unreachable block (ram,0x0001655bdf09) */
/* WARNING: Removing unreachable block (ram,0x000160f2ce60) */
/* WARNING: Removing unreachable block (ram,0x000160f2ceda) */
/* WARNING: Removing unreachable block (ram,0x000160f2cee0) */
/* WARNING: Removing unreachable block (ram,0x0001664fcfa0) */
/* WARNING: Removing unreachable block (ram,0x0001655bdf0f) */
/* WARNING: Removing unreachable block (ram,0x0001655bdf19) */
/* WARNING: Removing unreachable block (ram,0x00015b6e2a05) */
/* WARNING: Removing unreachable block (ram,0x00015b8fecdf) */

void FUN_14dd4c7cb(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 0x10);
  *(longlong *)(unaff_R14 + 0x10) = -*(longlong *)(unaff_R14 + 0x10);
  *(longlong *)(unaff_R14 + 0x10) = *(longlong *)(unaff_R14 + 0x10) + -1;
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) | unaff_RDI;
  *(ulonglong *)(unaff_R14 + 0x10) = -1 - ((~param_1 | uVar1) & *(ulonglong *)(unaff_R14 + 0x10));
  FUN_15b8fecdf();
  return;
}



// FUNCTION 14dd4cb5e FUN_14dd4cb5e body=329 status=ok
// SIG undefined FUN_14dd4cb5e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4cc15) */
/* WARNING: Removing unreachable block (ram,0x00014dd4cc26) */
/* WARNING: Removing unreachable block (ram,0x00014dd4cc2a) */

void FUN_14dd4cb5e(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15)) {
    FUN_14db191f5(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                  ~(~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) * -2,
                  *(undefined8 *)(unaff_R13 + -0x28),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                  param_4 & param_1);
    return;
  }
  FUN_165e59d27();
  return;
}



// FUNCTION 14dd4ccb0 FUN_14dd4ccb0 body=405 status=ok
// SIG undefined FUN_14dd4ccb0(void)

void FUN_14dd4ccb0(void)

{
  FUN_1625df11b();
  FUN_1564cfa3f();
  FUN_14dd4cda6();
  return;
}



// FUNCTION 14dd4cda6 FUN_14dd4cda6 body=313 status=ok
// SIG undefined FUN_14dd4cda6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4ce49) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ce58) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ce6f) */

ulonglong FUN_14dd4cda6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dd4cee1 FUN_14dd4cee1 body=188 status=ok
// SIG undefined FUN_14dd4cee1(void)

void FUN_14dd4cee1(void)

{
  return;
}



// FUNCTION 14dd4d032 FUN_14dd4d032 body=97 status=ok
// SIG undefined FUN_14dd4d032(void)

void FUN_14dd4d032(void)

{
  return;
}



// FUNCTION 14dd4d0cf FUN_14dd4d0cf body=114 status=ok
// SIG undefined FUN_14dd4d0cf(void)

void FUN_14dd4d0cf(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&LAB_162b20898)(param_1,param_2);
  return;
}



// FUNCTION 14dd4d1e1 FUN_14dd4d1e1 body=351 status=ok
// SIG undefined FUN_14dd4d1e1(void)

void FUN_14dd4d1e1(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong lVar1;
  undefined8 local_res10;
  ulonglong local_res18;
  
  lVar1 = local_res18 + param_1 + (local_res18 & param_1) * -2;
  local_res18._0_2_ = (ushort)lVar1;
  local_res18 = CONCAT62((int6)((ulonglong)lVar1 >> 0x10),~(~(ushort)local_res18 | 0x100));
  FUN_166a686e9(local_res10);
  FUN_156c264b8(local_res18,*(undefined8 *)(unaff_RDI + -0x70),FUN_156c264b8,
                0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x60) & local_res18) &
                (*(ulonglong *)(unaff_RDI + -0x60) | local_res18));
  return;
}



// FUNCTION 14dd4d341 FUN_14dd4d341 body=149 status=ok
// SIG undefined FUN_14dd4d341(void)

undefined8 FUN_14dd4d341(void)

{
  ulonglong *in_RAX;
  ulonglong uVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  *in_RAX = (~unaff_R15 | *in_RAX) + unaff_R15 + 1;
  uVar1 = (0xffffffffffffffff - unaff_R15 | local_res20) & (~local_res20 | unaff_R15) ^
          0xffffffffffffffff;
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(code **)(uVar1 - 8) = FUN_14dd4d3d8;
  *(undefined **)(uVar1 - 0x10) = &DAT_16109d4df;
  return unaff_retaddr;
}



// FUNCTION 14dd4d3d8 FUN_14dd4d3d8 body=148 status=ok
// SIG undefined FUN_14dd4d3d8(void)

void FUN_14dd4d3d8(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x165213c59)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78),
             ~(param_2 + 1U));
  return;
}



// FUNCTION 14dd4d46d FUN_14dd4d46d body=164 status=ok
// SIG undefined FUN_14dd4d46d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4d46d(void)

{
  return;
}



// FUNCTION 14dd4d511 FUN_14dd4d511 body=467 status=ok
// SIG undefined FUN_14dd4d511(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4d6e6) */
/* WARNING: Removing unreachable block (ram,0x00014dd4d583) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd4d511(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int unaff_EBP;
  ulonglong unaff_RDI;
  
  if (unaff_EBP == 1) {
    uVar1 = FUN_161e474c7(param_1,param_2 & unaff_RDI);
    return uVar1;
  }
  uVar1 = FUN_165d13961();
  return uVar1;
}



// FUNCTION 14dd4d6e6 FUN_14dd4d6e6 body=26 status=ok
// SIG undefined FUN_14dd4d6e6(void)

undefined8 FUN_14dd4d6e6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd4d749 FUN_14dd4d749 body=299 status=ok
// SIG undefined FUN_14dd4d749(void)

void FUN_14dd4d749(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15b97e808)(param_1,param_2,param_3,0x15b97e808);
  return;
}



// FUNCTION 14dd4d91b FUN_14dd4d91b body=151 status=ok
// SIG undefined FUN_14dd4d91b(void)

void FUN_14dd4d91b(void)

{
  byte unaff_BL;
  byte unaff_R14B;
  undefined8 in_stack_00000008;
  
  FUN_156e94fc1(in_stack_00000008,unaff_BL | unaff_R14B,FUN_156e94fc1,unaff_BL | unaff_R14B);
  return;
}



// FUNCTION 14dd4d9b6 FUN_14dd4d9b6 body=363 status=ok
// SIG undefined FUN_14dd4d9b6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4daea) */
/* WARNING: Removing unreachable block (ram,0x00014dd4db18) */
/* WARNING: Removing unreachable block (ram,0x00014dd4db20) */
/* WARNING: Removing unreachable block (ram,0x00014dd4da55) */

void FUN_14dd4d9b6(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  if (uVar1 == 0) {
    FUN_16254c327();
    return;
  }
  (*(code *)&LAB_1660293a4)
            (local_res8,0,(-local_res8 - uVar1) + (uVar1 | local_res8) * 2,&LAB_1660293a4);
  return;
}



// FUNCTION 14dd4db23 FUN_14dd4db23 body=357 status=ok
// SIG undefined FUN_14dd4db23(void)

void FUN_14dd4db23(void)

{
  undefined4 in_stack_00000128;
  
  FUN_1662f737d(in_stack_00000128);
  return;
}



// FUNCTION 14dd4dc7d FUN_14dd4dc7d body=52 status=ok
// SIG undefined FUN_14dd4dc7d(void)

void FUN_14dd4dc7d(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  *param_2 = param_3 + 0xab9f8da33fe72828 + (param_3 & 0xab9f8da33fe72828) * -2;
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dd4dcb2 FUN_14dd4dcb2 body=112 status=ok
// SIG undefined FUN_14dd4dcb2(void)

undefined8 FUN_14dd4dcb2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint in_R11D;
  undefined8 unaff_retaddr;
  undefined8 *puStackX_8;
  undefined8 local_res10;
  
  if (((longlong)&puStackX_8 >= 0) && ((longlong)&puStackX_8 < 0)) {
    local_res10 = CONCAT44(0xb85a4d9b,in_R11D ^ 0x3bc2a5dd);
    return local_res10;
  }
  if (((ulonglong)puStackX_8 & 0x8000000000000000) != 0) {
    puStackX_8 = param_1;
    uVar1 = (*(code *)0x14d9d5af7)(0x14d9d5af7);
    return uVar1;
  }
  *puStackX_8 = unaff_retaddr;
  uVar1 = thunk_FUN_156b249bc(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dd4dd9c FUN_14dd4dd9c body=280 status=ok
// SIG undefined FUN_14dd4dd9c(void)

void FUN_14dd4dd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res10;
  
  FUN_16639d71e(param_1);
  uVar1 = param_5 & unaff_retaddr ^ local_res10;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined4 *)(uVar1 - 0x18) = 0xd4b12c9;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  FUN_1615e841b();
  return;
}



// FUNCTION 14dd4deb7 FUN_14dd4deb7 body=304 status=ok
// SIG undefined FUN_14dd4deb7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4df54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4deb7(void)

{
  undefined8 local_res8;
  
  if (local_res8 == 0) {
    FUN_165473f2e();
    return;
  }
  FUN_165473f2e();
  return;
}



// FUNCTION 14dd4e065 FUN_14dd4e065 body=173 status=ok
// SIG undefined FUN_14dd4e065(void)

/* WARNING: Removing unreachable block (ram,0x00016282ea1b) */
/* WARNING: Removing unreachable block (ram,0x000161893788) */
/* WARNING: Removing unreachable block (ram,0x000162e28854) */
/* WARNING: Removing unreachable block (ram,0x000161893824) */
/* WARNING: Removing unreachable block (ram,0x00016189382a) */
/* WARNING: Removing unreachable block (ram,0x00016189382f) */
/* WARNING: Removing unreachable block (ram,0x00016282ea21) */
/* WARNING: Removing unreachable block (ram,0x00016282eace) */
/* WARNING: Removing unreachable block (ram,0x00016282ead3) */
/* WARNING: Removing unreachable block (ram,0x00016282ead9) */
/* WARNING: Removing unreachable block (ram,0x000162daf8f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e107) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e112) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e193) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e1c8) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e1d5) */
/* WARNING: Removing unreachable block (ram,0x00016282e94b) */
/* WARNING: Removing unreachable block (ram,0x0001649e5736) */
/* WARNING: Removing unreachable block (ram,0x0001649e575b) */
/* WARNING: Removing unreachable block (ram,0x0001649e5754) */
/* WARNING: Removing unreachable block (ram,0x0001649e575d) */
/* WARNING: Removing unreachable block (ram,0x0001649e5763) */
/* WARNING: Removing unreachable block (ram,0x00015b0f467d) */
/* WARNING: Removing unreachable block (ram,0x0001649e5777) */
/* WARNING: Removing unreachable block (ram,0x0001649e57f4) */
/* WARNING: Removing unreachable block (ram,0x0001649e589e) */
/* WARNING: Removing unreachable block (ram,0x0001649e58ad) */
/* WARNING: Removing unreachable block (ram,0x0001649e580e) */
/* WARNING: Removing unreachable block (ram,0x00016282e964) */
/* WARNING: Removing unreachable block (ram,0x00016282ea16) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e10d) */

undefined8 FUN_14dd4e065(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16183c227();
  return uVar1;
}



// FUNCTION 14dd4e112 FUN_14dd4e112 body=338 status=ok
// SIG undefined FUN_14dd4e112(void)

/* WARNING: Removing unreachable block (ram,0x00016282ea1b) */
/* WARNING: Removing unreachable block (ram,0x000161893788) */
/* WARNING: Removing unreachable block (ram,0x000162e28854) */
/* WARNING: Removing unreachable block (ram,0x000161893824) */
/* WARNING: Removing unreachable block (ram,0x00016189382a) */
/* WARNING: Removing unreachable block (ram,0x00016189382f) */
/* WARNING: Removing unreachable block (ram,0x00016282ea21) */
/* WARNING: Removing unreachable block (ram,0x00016282eace) */
/* WARNING: Removing unreachable block (ram,0x00016282ead3) */
/* WARNING: Removing unreachable block (ram,0x00016282ead9) */
/* WARNING: Removing unreachable block (ram,0x000162daf8f9) */
/* WARNING: Removing unreachable block (ram,0x0001649e5754) */
/* WARNING: Removing unreachable block (ram,0x00015b0f467d) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e1d5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x0001649e590a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dd4e112(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  longlong in_RAX;
  longlong lVar4;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  uint local_res8;
  ushort in_stack_fffffffffffffff8;
  
  uVar3 = (uint)((in_CF & 1) != 0);
  local_res8 = (uint)((in_NT & 1) != 0) * 0x4000 | (uint)((in_OF & 1) != 0) * 0x800 |
               (uint)((in_IF & 1) != 0) * 0x200 | (uint)((in_TF & 1) != 0) * 0x100 |
               (uint)((in_SF & 1) != 0) * 0x80 | (uint)((in_ZF & 1) != 0) * 0x40 |
               (uint)((in_ID & 1) != 0) * 0x200000 | (uint)((in_AC & 1) != 0) * 0x40000;
  uVar2 = local_res8 >> 6 ^ uVar3 << 0x1a;
  if ((int)(uVar2 << 5) < 0) {
    lVar4 = FUN_16282e94b();
    return lVar4;
  }
  uVar3 = (local_res8 >> 6) << 6 ^ uVar3;
  if ((uVar2 & 1) != 0) {
    FUN_1649e572a();
    lVar4 = FUN_161893788();
    return lVar4;
  }
  if ((ushort)(0xffff - ((ushort)((uVar3 & 0x4000) != 0) * 0x4000 |
                         (ushort)((uVar3 & 0x800) != 0) * 0x800 |
                         (ushort)((uVar3 & 0x200) != 0) * 0x200 |
                         (ushort)((uVar3 & 0x100) != 0) * 0x100 |
                         (ushort)((uVar3 & 0x80) != 0) * 0x80 | (ushort)((uVar3 & 0x40) != 0) * 0x40
                         | (ushort)((in_AF & 1) != 0) * 0x10 | (ushort)((in_PF & 1) != 0) * 4 |
                        (ushort)((uVar3 & 1) != 0)) | 0xffbf) == 0xffff) {
    return in_RAX;
  }
  if ((in_stack_fffffffffffffff8 & 0x40) == 0) {
    pcVar1 = (char *)(in_RAX + 4 + param_3);
    *pcVar1 = *pcVar1 - param_4;
    lVar4 = FUN_16497dbbe(0x156e8cc73,FUN_16497dbbe,param_3,*(undefined1 *)(in_RAX + 4 + param_3));
    return lVar4;
  }
  lVar4 = FUN_15b0f4657();
  return lVar4;
}



// FUNCTION 14dd4e2fd FUN_14dd4e2fd body=149 status=ok
// SIG undefined FUN_14dd4e2fd(void)

void FUN_14dd4e2fd(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_161b899c2(FUN_161b899c2,param_2,
                (-~unaff_RBX -
                (unaff_RBP + ~(~(param_1 & 0xffffffff917a2bf8) & (param_1 | 0xffffffff917a2bf8)))) +
                ((unaff_R15 - (param_3 | unaff_R15)) + param_3) * -2);
  FUN_165b2e626();
  return;
}



// FUNCTION 14dd4e393 FUN_14dd4e393 body=136 status=ok
// SIG undefined FUN_14dd4e393(void)

void FUN_14dd4e393(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + param_2);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x38) & 0xffffffff;
  FUN_165b2e626(param_1,(uint)(uVar3 >> 0x1c) | (uint)(uVar3 << 5),
                (~unaff_R15 + uVar2) - (~unaff_R15 & uVar2) & (~uVar2 | unaff_R15) ^
                0xffffffffffffffff,
                ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14dd4e41c FUN_14dd4e41c body=890 status=ok
// SIG undefined FUN_14dd4e41c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4e4c2) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e4c8) */
/* WARNING: Removing unreachable block (ram,0x000156d2feb9) */

void FUN_14dd4e41c(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_R9;
  longlong unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar3 = ~(((-1 - (~in_RAX & uVar3)) + uVar3) - in_RAX & (~uVar3 | in_RAX));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  FUN_161dc7e96();
  FUN_15b8f88d8();
  lVar1 = *(longlong *)(-0x79 - (in_R9 + uVar2 & (unaff_R13 ^ 0xffffffffffffffff | uVar3)));
  if (lVar1 == 0 && unaff_R15 == 0) {
    FUN_162525502(-unaff_R15 - lVar1,FUN_162525502);
    return;
  }
  FUN_1663ba020();
  return;
}



// FUNCTION 14dd4e619 FUN_14dd4e619 body=291 status=ok
// SIG undefined FUN_14dd4e619(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4e6a6) */

void FUN_14dd4e619(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  
  lVar1 = CONCAT62(uStackX_1a,local_res18);
  *(undefined8 *)(lVar1 + -8) = unaff_RSI;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x10) = 0;
  *(ulonglong *)(lVar1 + -0x10) = *(ulonglong *)(lVar1 + -0x10) ^ *(ulonglong *)(lVar1 + -8);
  *(undefined **)(lVar1 + -8) = &DAT_1659f8742;
  *(undefined8 *)(lVar1 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14dd4e744 FUN_14dd4e744 body=130 status=ok
// SIG undefined FUN_14dd4e744(void)

void FUN_14dd4e744(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_15b753a20(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dd4e7cd FUN_14dd4e7cd body=317 status=ok
// SIG undefined FUN_14dd4e7cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4e86a) */
/* WARNING: Removing unreachable block (ram,0x000164a689cc) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9af) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9bf) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea14) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea0f) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea49) */

void FUN_14dd4e7cd(longlong param_1)

{
  ulonglong in_stack_00000008;
  ulonglong local_res10 [3];
  ulonglong in_stack_00000028;
  
  local_res10[2] =
       (local_res10[2] & in_stack_00000008 ^ 0xffffffffffffffff) &
       (*(ulonglong *)((longlong)local_res10 + param_1) | in_stack_00000008);
  if ((in_stack_00000028 & in_stack_00000008) == 0) {
    FUN_15b941334();
    return;
  }
  return;
}



// FUNCTION 14dd4e90a FUN_14dd4e90a body=331 status=ok
// SIG undefined FUN_14dd4e90a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4e9b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd4e9bf) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea14) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea0f) */
/* WARNING: Removing unreachable block (ram,0x00014dd4ea49) */

void FUN_14dd4e90a(short param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  short sVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  short *unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 uStackX_18;
  
  sVar1 = *unaff_R14;
  *unaff_R14 = 0;
  *unaff_R14 = *unaff_R14 + (-0x101 - param_1) + sVar1;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28) = in_RAX;
  *(undefined4 *)(param_5 + -0x28) = 0x91e94dae;
  *(undefined4 *)(param_5 + -0x24) = 0;
  *(int *)(param_5 + -0x24) = *(int *)(param_5 + -0x24) + -1;
  *(undefined8 *)(param_5 + -0x10) =
       *(undefined8 *)(param_5 + *(ulonglong *)(param_5 + -0x28) + 0x6e16b24a);
  if (0xffffffff91e94d9d < *(ulonglong *)(param_5 + -0x28)) {
    FUN_164a689cc();
    return;
  }
  *(undefined1 **)(param_5 + -8) = &LAB_164a689ec;
  thunk_FUN_15b642ca5(uStackX_18,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dd4ebca FUN_14dd4ebca body=112 status=ok
// SIG undefined FUN_14dd4ebca(void)

void FUN_14dd4ebca(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_14dd4ec3d;
  return;
}



// FUNCTION 14dd4eddc FUN_14dd4eddc body=49 status=ok
// SIG undefined FUN_14dd4eddc(void)

void FUN_14dd4eddc(void)

{
  return;
}



// FUNCTION 14dd4ee70 FUN_14dd4ee70 body=355 status=ok
// SIG undefined FUN_14dd4ee70(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4ef0b) */
/* WARNING: Removing unreachable block (ram,0x000162f23c67) */
/* WARNING: Removing unreachable block (ram,0x00014dd4efa0) */
/* WARNING: Removing unreachable block (ram,0x00014dd4efa6) */
/* WARNING: Removing unreachable block (ram,0x00015b923e95) */
/* WARNING: Removing unreachable block (ram,0x000162115929) */
/* WARNING: Removing unreachable block (ram,0x00014dd4efb1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd4ee70(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if (-1 < (longlong)((~uVar1 & ~param_1 | uVar1) & ~(uVar1 & ~param_1))) {
    return *(undefined8 *)(unaff_RDI + -0xa0);
  }
  uVar2 = FUN_15b923e08();
  return uVar2;
}



// FUNCTION 14dd4f0af FUN_14dd4f0af body=175 status=ok
// SIG undefined FUN_14dd4f0af(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd4f0af(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_R13;
  ulonglong uVar2;
  
  uVar1 = (~in_RAX | unaff_R13) + in_RAX + 1;
  uVar2 = ~(uVar1 ^ 0xffffffffffffffff);
  (*(code *)0x16128ca7d)
            (uVar1,8,&stack0x00000000,
             (uVar2 + ~(unaff_R13 | in_RAX)) - (uVar2 & ~(unaff_R13 | in_RAX)));
  return;
}



// FUNCTION 14dd4f15e FUN_14dd4f15e body=148 status=ok
// SIG undefined FUN_14dd4f15e(void)

void FUN_14dd4f15e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -8) = 0x519ad4e;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x519ad4e;
  FUN_156783e37(param_1,uVar1);
  return;
}



// FUNCTION 14dd4f28e FUN_14dd4f28e body=447 status=ok
// SIG undefined FUN_14dd4f28e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd4f28e(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_RDI + -0x70);
  FUN_161a9c8c6(param_1,lVar1,lVar1,
                (*(ulonglong *)(unaff_RDI + -0x60) - param_1) +
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) * -2 + -2);
  FUN_1572fbaf8(*(undefined8 *)(unaff_R13 + -0x80),lVar1 + (unaff_R14 & unaff_R15) * -2,
                0xfffffffffffffff8,0x108b0a0);
  (*(code *)0x14df70c74)
            (&DAT_ac91427a73ca2b2b,~(ulonglong)&stack0x00000000,
             (_DAT_fffffffffe350030 | 0x536ebd858c35d4d4) &
             (~_DAT_fffffffffe350030 | 0xac91427a73ca2b2b),0x14df70c74);
  return;
}



// FUNCTION 14dd4f57b FUN_14dd4f57b body=252 status=ok
// SIG undefined FUN_14dd4f57b(void)

/* WARNING: Instruction at (ram,0x000162e7a3aa) overlaps instruction at (ram,0x000162e7a3a9)
    */
/* WARNING: Removing unreachable block (ram,0x000162e7a3a9) */

void FUN_14dd4f57b(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 unaff_RDI;
  int unaff_R14D;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  uVar1 = *param_4;
  *param_4 = *param_4 | 0xffffffffc4c2aef6;
  *param_4 = ~(~(uVar1 & 0xffffffffc4c2aef6) & *param_4);
  if (-1 < unaff_R14D + 0x762721a8) {
    return;
  }
  if (unaff_R14D == -0x762721a8) {
    param_2 = unaff_RDI;
  }
  FUN_15725d08c(param_1,param_2,local_res10,unaff_retaddr);
  return;
}



// FUNCTION 14dd4f76c FUN_14dd4f76c body=107 status=ok
// SIG undefined FUN_14dd4f76c(void)

void FUN_14dd4f76c(undefined8 param_1)

{
  thunk_FUN_15b642ca5(param_1);
  return;
}



// FUNCTION 14dd4f955 FUN_14dd4f955 body=169 status=ok
// SIG undefined FUN_14dd4f955(void)

void FUN_14dd4f955(void)

{
  return;
}



// FUNCTION 14dd4fa9b FUN_14dd4fa9b body=146 status=ok
// SIG undefined FUN_14dd4fa9b(void)

void FUN_14dd4fa9b(undefined8 param_1,undefined8 param_2)

{
  bool in_ZF;
  longlong local_res8;
  
  if (in_ZF) {
    return;
  }
  if (local_res8 != 1) {
    FUN_161d75291();
    return;
  }
  FUN_161d75274(0x84,param_2,FUN_161d75274);
  return;
}



// FUNCTION 14dd4fb2d FUN_14dd4fb2d body=168 status=ok
// SIG undefined FUN_14dd4fb2d(void)

void FUN_14dd4fb2d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  FUN_160f88358(param_1,param_2,param_3,param_4,
                ~((~(~unaff_R15 & in_stack_00000018) + in_stack_00000018) - unaff_R15 &
                 (in_stack_00000018 ^ 0xffffffffffffffff | unaff_R15)));
  return;
}



// FUNCTION 14dd4fbd7 FUN_14dd4fbd7 body=291 status=ok
// SIG undefined FUN_14dd4fbd7(void)

void FUN_14dd4fbd7(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    uVar3 = FUN_15b99787f(param_1,&DAT_14d7bf360,param_3);
    uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
    uVar2 = *(ulonglong *)(unaff_RBP + 0x10);
    *(undefined8 *)(unaff_RBP + 0x10) = *(undefined8 *)(unaff_RBP + 0x10);
    *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
    *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | uVar3;
    uVar3 = *(ulonglong *)(unaff_RBP + 0x10);
    *(undefined8 *)(unaff_RBP + 0x10) = 0;
    *(longlong *)(unaff_RBP + 0x10) =
         *(longlong *)(unaff_RBP + 0x10) + ~((~uVar1 & unaff_RSI | uVar2) & uVar3);
    return;
  }
  FUN_15b9978a4(param_1,param_2 + 0x61447);
  return;
}



// FUNCTION 14dd4fcfd FUN_14dd4fcfd body=274 status=ok
// SIG undefined FUN_14dd4fcfd(void)

ulonglong FUN_14dd4fcfd(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_161b9d240(param_1,~((~(~param_2 | param_1) |
                          ((param_2 - 1) - (unaff_RSI & param_2)) - (-1 - unaff_RSI)) +
                          (~param_2 | param_1) + 1),param_3,param_4);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~(~((~(~param_1 & uVar1) + uVar1) - param_1) | ~(~uVar1 | param_1)) ^ 0xffffffffffffffff;
}



// FUNCTION 14dd4fe11 FUN_14dd4fe11 body=553 status=ok
// SIG undefined FUN_14dd4fe11(void)

/* WARNING: Removing unreachable block (ram,0x00014dd4ff43) */
/* WARNING: Removing unreachable block (ram,0x00014dd4feaa) */

void FUN_14dd4fe11(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x88) != 0) {
    thunk_FUN_1646ea176();
    return;
  }
  thunk_FUN_1646ea176();
  return;
}



// FUNCTION 14dd4ffba FUN_14dd4ffba body=144 status=ok
// SIG undefined FUN_14dd4ffba(void)

void FUN_14dd4ffba(void)

{
  undefined8 local_res8;
  
  FUN_156ed5b6b(0xffffffffaf9d71e3,local_res8);
  return;
}



// FUNCTION 14dd500f9 FUN_14dd500f9 body=8 status=ok
// SIG undefined FUN_14dd500f9(void)

undefined8 FUN_14dd500f9(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dd501a5 FUN_14dd501a5 body=519 status=ok
// SIG undefined FUN_14dd501a5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5021d) */
/* WARNING: Removing unreachable block (ram,0x00014dd50223) */
/* WARNING: Removing unreachable block (ram,0x00014dd50265) */
/* WARNING: Removing unreachable block (ram,0x00014dd5026f) */

void FUN_14dd501a5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_RBP;
  ushort unaff_R12W;
  ushort uVar3;
  undefined8 unaff_R13;
  ushort unaff_R14W;
  ushort uVar4;
  byte in_AF;
  bool in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  puVar2 = (undefined8 *)local_res10;
  if (in_ZF) {
    puVar2 = (undefined8 *)local_res18;
  }
  puVar2[-1] = param_3;
  uVar4 = unaff_R14W ^ 0x2f43;
  uVar1 = *puVar2;
  *puVar2 = unaff_RBP;
  *puVar2 = *puVar2;
  puVar2[-1] = unaff_R13;
  uVar3 = unaff_R12W + uVar4;
  puVar2[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY2(unaff_R12W,uVar4) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((short)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)CARRY2(unaff_R12W,uVar4) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar2[-2] = puVar2[-2] | 0x40;
  if ((puVar2[-2] & 0x40) == 0) {
    puVar2[-2] = &DAT_156c8cfd9;
    return;
  }
  FUN_162324dcb(param_1,uVar1,puVar2[1]);
  return;
}



// FUNCTION 14dd50346 FUN_14dd50346 body=164 status=ok
// SIG undefined FUN_14dd50346(void)

/* WARNING: Removing unreachable block (ram,0x000157212263) */
/* WARNING: Removing unreachable block (ram,0x0001572122d4) */
/* WARNING: Removing unreachable block (ram,0x00014dd503db) */
/* WARNING: Removing unreachable block (ram,0x00014dd503e1) */
/* WARNING: Removing unreachable block (ram,0x0001572122cf) */

undefined8 FUN_14dd50346(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_157212263();
  return uVar1;
}



// FUNCTION 14dd503ed FUN_14dd503ed body=257 status=ok
// SIG undefined FUN_14dd503ed(void)

/* WARNING: Removing unreachable block (ram,0x00014dd504f7) */

void FUN_14dd503ed(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_157297804(param_1,param_2,param_3,param_4);
  FUN_161c46f6f(param_1 + -0x14fbedb8,&LAB_14dd504f1,*(ulonglong *)(unaff_R12 + -0x80) ^ uVar1,
                *(ulonglong *)(unaff_R12 + -0x30) ^ uVar1);
  return;
}



// FUNCTION 14dd505d1 thunk_FUN_14dd505d7 body=5 status=ok
// SIG undefined thunk_FUN_14dd505d7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166006ad8) */
/* WARNING: Removing unreachable block (ram,0x000166006ade) */
/* WARNING: Removing unreachable block (ram,0x000156be437b) */
/* WARNING: Removing unreachable block (ram,0x000166006947) */
/* WARNING: Removing unreachable block (ram,0x00016600696d) */
/* WARNING: Removing unreachable block (ram,0x000166006974) */
/* WARNING: Removing unreachable block (ram,0x000165d79c32) */
/* WARNING: Removing unreachable block (ram,0x000166006a21) */
/* WARNING: Removing unreachable block (ram,0x000166006a33) */
/* WARNING: Removing unreachable block (ram,0x000166006a39) */
/* WARNING: Removing unreachable block (ram,0x000166006ad3) */
/* WARNING: Removing unreachable block (ram,0x00014d7a97d2) */
/* WARNING: Removing unreachable block (ram,0x00014dd50640) */
/* WARNING: Removing unreachable block (ram,0x00014dd5065d) */
/* WARNING: Removing unreachable block (ram,0x00014dd15d59) */

void thunk_FUN_14dd505d7(longlong param_1)

{
  ulonglong unaff_RBX;
  
  if (-1 < (longlong)(*(ulonglong *)(param_1 + -0x48) ^ unaff_RBX)) {
    FUN_14dd15c41();
    return;
  }
  FUN_1648978a4();
  return;
}



// FUNCTION 14dd505d7 FUN_14dd505d7 body=398 status=ok
// SIG undefined FUN_14dd505d7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166006ad8) */
/* WARNING: Removing unreachable block (ram,0x000166006ade) */
/* WARNING: Removing unreachable block (ram,0x000156be437b) */
/* WARNING: Removing unreachable block (ram,0x000166006947) */
/* WARNING: Removing unreachable block (ram,0x00016600696d) */
/* WARNING: Removing unreachable block (ram,0x000166006974) */
/* WARNING: Removing unreachable block (ram,0x000165d79c32) */
/* WARNING: Removing unreachable block (ram,0x000166006a21) */
/* WARNING: Removing unreachable block (ram,0x000166006a33) */
/* WARNING: Removing unreachable block (ram,0x000166006a39) */
/* WARNING: Removing unreachable block (ram,0x000166006ad3) */
/* WARNING: Removing unreachable block (ram,0x00014d7a97d2) */
/* WARNING: Removing unreachable block (ram,0x00014dd50640) */
/* WARNING: Removing unreachable block (ram,0x00014dd5065d) */
/* WARNING: Removing unreachable block (ram,0x00014dd15d59) */

void FUN_14dd505d7(longlong param_1)

{
  ulonglong unaff_RBX;
  
  if (-1 < (longlong)(*(ulonglong *)(param_1 + -0x48) ^ unaff_RBX)) {
    FUN_14dd15c41();
    return;
  }
  FUN_1648978a4();
  return;
}



// FUNCTION 14dd5065d FUN_14dd5065d body=178 status=ok
// SIG undefined FUN_14dd5065d(void)

void FUN_14dd5065d(void)

{
  return;
}



// FUNCTION 14dd507a0 FUN_14dd507a0 body=21 status=ok
// SIG undefined FUN_14dd507a0(void)

void FUN_14dd507a0(void)

{
  return;
}



// FUNCTION 14dd50844 FUN_14dd50844 body=154 status=ok
// SIG undefined FUN_14dd50844(void)

void FUN_14dd50844(ulonglong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R12;
  
  uVar1 = ~(~param_1 | unaff_R12) | ~(unaff_R12 ^ 0xffffffffffffffff | param_1);
  uVar2 = uVar1 & 0xffffffffffff0000;
  if (param_4 < '\0') {
    uVar2 = CONCAT62((int6)(uVar1 >> 0x10),0xffff);
  }
  FUN_161c01e71(param_1,CONCAT71((int7)(uVar2 >> 8),param_4),4,0x426b3cde);
  return;
}



// FUNCTION 14dd50b33 FUN_14dd50b33 body=157 status=ok
// SIG undefined FUN_14dd50b33(void)

void FUN_14dd50b33(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  *(longlong *)(unaff_RBX + 8) = -*(longlong *)(unaff_RBX + 8);
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + -1;
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | unaff_R15;
  *(ulonglong *)(unaff_RBX + 8) =
       (~unaff_R15 | uVar1) & *(ulonglong *)(unaff_RBX + 8) ^ 0xffffffffffffffff;
  FUN_1614e88cd(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14dd50c92 FUN_14dd50c92 body=131 status=ok
// SIG undefined FUN_14dd50c92(void)

/* WARNING: Removing unreachable block (ram,0x000162f031d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd50d11) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd50c92(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong lStackX_18;
  
  puVar1 = (ulonglong *)(lStackX_18 + -8);
  *puVar1 = unaff_RDI;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_R12;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R12;
  *(ulonglong *)(lStackX_18 + -0x10) = *puVar1;
  *puVar1 = 0x5ba99c00;
  *puVar1 = *puVar1 ^ 0x5ba99c00;
  *puVar1 = (ulonglong)(&DAT_14da6407b + *puVar1);
  uVar2 = thunk_FUN_15b642ca5();
  return uVar2;
}



// FUNCTION 14dd50d17 FUN_14dd50d17 body=530 status=ok
// SIG undefined FUN_14dd50d17(void)

/* WARNING: Removing unreachable block (ram,0x00014dd50dc8) */
/* WARNING: Removing unreachable block (ram,0x00014dd50e26) */
/* WARNING: Removing unreachable block (ram,0x00014dd50e2c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f90fe) */

void FUN_14dd50d17(void)

{
  FUN_16180e93e();
  FUN_162866a20();
  return;
}



// FUNCTION 14dd50eb6 FUN_14dd50eb6 body=164 status=ok
// SIG undefined FUN_14dd50eb6(void)

void FUN_14dd50eb6(undefined1 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_166697d6d(param_1,FUN_166697d6d,*(ulonglong *)(unaff_RSI + -0x68),
                *(ulonglong *)(unaff_RSI + -0x68) | unaff_RBP);
  return;
}



// FUNCTION 14dd50f62 FUN_14dd50f62 body=81 status=ok
// SIG undefined FUN_14dd50f62(void)

void FUN_14dd50f62(void)

{
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = unaff_RSI;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R12;
  *(undefined1 **)(lStackX_18 + -8) = &LAB_14dd50fce;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -0x18) = *(undefined8 *)(lStackX_18 + -0x18);
  *(code **)(lStackX_18 + -0x10) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14dd51015 thunk_FUN_14dd5101b body=5 status=ok
// SIG undefined thunk_FUN_14dd5101b(void)

void thunk_FUN_14dd5101b(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *unaff_RBX;
  longlong unaff_R13;
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  undefined8 uStackX_20;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0x49238981;
  *unaff_RBX = *unaff_RBX ^ 0x49238981;
  *unaff_RBX = *unaff_RBX - ~(param_1 + uVar1 + 1);
  *unaff_RBX = -*unaff_RBX;
  uVar1 = ~unaff_retaddr;
  FUN_1610eabb8();
  FUN_15b91517a(unaff_retaddr,uVar1 | uStackX_20,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70))
  ;
  return;
}



// FUNCTION 14dd5101b FUN_14dd5101b body=290 status=ok
// SIG undefined FUN_14dd5101b(void)

void FUN_14dd5101b(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *unaff_RBX;
  longlong unaff_R13;
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res20;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0x49238981;
  *unaff_RBX = *unaff_RBX ^ 0x49238981;
  *unaff_RBX = *unaff_RBX - ~(param_1 + uVar1 + 1);
  *unaff_RBX = -*unaff_RBX;
  uVar1 = ~unaff_retaddr;
  FUN_1610eabb8();
  FUN_15b91517a(unaff_retaddr,uVar1 | local_res20,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70)
               );
  return;
}



// FUNCTION 14dd511c9 FUN_14dd511c9 body=128 status=ok
// SIG undefined FUN_14dd511c9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd51243) */
/* WARNING: Removing unreachable block (ram,0x00014dd51249) */
/* WARNING: Removing unreachable block (ram,0x000162445acc) */
/* WARNING: Removing unreachable block (ram,0x000162445b54) */
/* WARNING: Removing unreachable block (ram,0x000162445b59) */
/* WARNING: Removing unreachable block (ram,0x000162445b5f) */
/* WARNING: Removing unreachable block (ram,0x000162445b70) */

undefined8 FUN_14dd511c9(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  longlong unaff_retaddr;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff47df99c + unaff_retaddr);
  puVar1[-1] = in_R10;
  *puVar1 = *(undefined8 *)(unaff_R12 + -0xa0);
  puVar1[1] = unaff_RDI;
  puVar1[2] = puVar1[2] ^ in_RAX;
  puVar1[1] = unaff_R13;
  *puVar1 = param_1;
  uVar2 = FUN_162445acc();
  return uVar2;
}



// FUNCTION 14dd51249 FUN_14dd51249 body=143 status=ok
// SIG undefined FUN_14dd51249(void)

void FUN_14dd51249(void)

{
  return;
}



// FUNCTION 14dd512d9 FUN_14dd512d9 body=160 status=ok
// SIG undefined FUN_14dd512d9(void)

void FUN_14dd512d9(undefined8 param_1,undefined8 param_2)

{
  FUN_15634a1ba(param_1,param_2,FUN_15634a1ba);
  return;
}



// FUNCTION 14dd5148f FUN_14dd5148f body=35 status=ok
// SIG undefined FUN_14dd5148f(void)

void FUN_14dd5148f(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd51543 FUN_14dd51543 body=300 status=ok
// SIG undefined FUN_14dd51543(void)

undefined8
FUN_14dd51543(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  
  FUN_162d166f5(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  return 0xffffffffffffff90;
}



// FUNCTION 14dd51677 FUN_14dd51677 body=298 status=ok
// SIG undefined FUN_14dd51677(void)

void FUN_14dd51677(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b453a79(param_1,(~(~*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15) + unaff_R15) -
                        *(ulonglong *)(unaff_R13 + -0x68));
  return;
}



// FUNCTION 14dd5184e FUN_14dd5184e body=154 status=ok
// SIG undefined FUN_14dd5184e(void)

void FUN_14dd5184e(char param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  longlong param_5)

{
  ushort uVar1;
  char cVar2;
  char in_AL;
  undefined7 in_register_00000001;
  undefined8 in_R10;
  
  uVar1 = *param_4;
  *param_4 = 0;
  *param_4 = *param_4 - ((uVar1 | 0x100) - 0x100);
  *param_4 = -*param_4;
  LOCK();
  cVar2 = param_1;
  if (in_AL != DAT_14d7bdc29) {
    in_AL = DAT_14d7bdc29;
    cVar2 = DAT_14d7bdc29;
  }
  DAT_14d7bdc29 = cVar2;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(ulonglong *)(param_5 + -0x18) = CONCAT71(in_register_00000001,in_AL);
  *(undefined4 *)(param_5 + -0x18) = 0x3dc95d8;
  *(undefined8 *)(param_5 + -0x20) = 0x14dd518e4;
  FUN_160ee56c2();
  FUN_14dd518ea();
  return;
}



// FUNCTION 14dd518ea FUN_14dd518ea body=220 status=ok
// SIG undefined FUN_14dd518ea(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14dd518ea(undefined8 param_1,undefined8 param_2,ushort *param_3,undefined8 param_4,
                       longlong param_5)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  byte unaff_BL;
  undefined4 *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  longlong lStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  *param_3 = -*param_3;
  *param_3 = *param_3 - 1;
  *param_3 = *param_3 & 0xfeff | 0x100;
  *param_3 = *param_3 ^ 0xffff;
                    /* WARNING: Read-only address (ram,0x00014d7c1643) is written */
  LOCK();
  uRam000000014d7c1643 = (undefined1)in_RAX;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = in_R10;
  puVar1 = (undefined8 *)(param_5 + -0x10);
  *puVar1 = in_R10;
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
  uVar7 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = 0xcde8a7c;
  *(longlong *)(param_5 + -0x20) = *(longlong *)(param_5 + -0x20) + -0xc5b3d42;
  uVar7 = *(ulonglong *)(param_5 + -0x18);
  bVar6 = (uVar7 & 0x40) != 0;
  bVar5 = (uVar7 & 1) != 0;
  *(undefined8 *)(param_5 + -0x18) = unaff_R12;
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *(ulonglong *)(param_5 + -0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)bVar6 * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  if (!bVar5) {
    *(undefined8 *)(param_5 + -8) = 0x834d3a;
    *puVar1 = local_res8;
    *(undefined8 *)(param_5 + -0x18) = local_res8;
    *puVar1 = FUN_14d85d504;
    return in_RAX & 0xffffffffffffff00;
  }
  if (bVar5 || bVar6) {
    uVar7 = FUN_1622a8da9();
    return uVar7;
  }
  *(undefined8 *)(param_5 + -0x20) = uStackX_18;
  *(undefined8 *)(param_5 + -0x28) = unaff_RDI;
  *(ulonglong *)((longlong)puVar1 + lStackX_10) = ~*(ulonglong *)((longlong)puVar1 + lStackX_10);
  *(longlong *)((longlong)puVar1 + lStackX_10) =
       (unaff_R13 + -1) - *(longlong *)((longlong)puVar1 + lStackX_10);
  **(undefined4 **)(param_5 + -0x28) = *unaff_RSI;
  cVar2 = (byte)param_1 + unaff_BL;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + cVar3 + CARRY1((byte)param_1,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd51b6a FUN_14dd51b6a body=292 status=ok
// SIG undefined FUN_14dd51b6a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd51c10) */
/* WARNING: Removing unreachable block (ram,0x00014dd51c05) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd51b6a(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  
  if (CONCAT44((int)((ulonglong)in_RAX >> 0x20),0xa24e2f98) != 0x68eca748) {
    FUN_15af61287();
    return;
  }
  FUN_15af6127d(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3);
  return;
}



// FUNCTION 14dd51c91 FUN_14dd51c91 body=73 status=ok
// SIG undefined FUN_14dd51c91(void)

void FUN_14dd51c91(void)

{
  return;
}



// FUNCTION 14dd51e82 FUN_14dd51e82 body=118 status=ok
// SIG undefined FUN_14dd51e82(void)

void FUN_14dd51e82(void)

{
  return;
}



// FUNCTION 14dd51f6a FUN_14dd51f6a body=336 status=ok
// SIG undefined FUN_14dd51f6a(void)

void FUN_14dd51f6a(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156899769(FUN_156899769,*(ulonglong *)(unaff_R12 + -0x80) | in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dd520aa FUN_14dd520aa body=269 status=ok
// SIG undefined FUN_14dd520aa(void)

void FUN_14dd520aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff - (in_stack_00000020 & unaff_R15) & in_R11;
  FUN_164968e4d();
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) | in_stack_00000018;
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x78) & in_stack_00000018);
  FUN_16667f15d((uVar2 - (uVar1 | uVar2)) + uVar1,
                *(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | in_stack_00000018,
                FUN_16667f15d,param_4,param_1,uVar3);
  return;
}



// FUNCTION 14dd5231f FUN_14dd5231f body=265 status=ok
// SIG undefined FUN_14dd5231f(void)

void FUN_14dd5231f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  longlong alStackX_18 [2];
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50);
  FUN_16288555d();
  *(undefined8 *)
   ((longlong)alStackX_18 +
   (~(unaff_R15 & 0xffffffffc1be8534) & (unaff_R15 | 0xffffffffc1be8534) ^ 0xfffffffff35b7f32)) =
       unaff_R12;
  alStackX_18[0] = (uVar1 - unaff_R15) + (~unaff_R15 | uVar1) * -2 + -2;
  (*(code *)&LAB_15b051e2a)(alStackX_18[1],&LAB_15b051e2a,param_3,local_res8);
  return;
}



// FUNCTION 14dd5242a FUN_14dd5242a body=327 status=ok
// SIG undefined FUN_14dd5242a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd524b1) */

undefined8 FUN_14dd5242a(ulonglong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  
  if (CONCAT44((uint)((ulonglong)unaff_retaddr >> 0x20) ^ param_3,(int)unaff_retaddr) == 0x18d4b9da)
  {
    param_1 = CONCAT71((int7)(param_1 >> 8),0x9f);
  }
  uVar3 = *(ulonglong *)(0x7ddb - ~(unaff_RDI - 0x7e1cU));
  uVar2 = ~param_1 | uVar3;
  uVar3 = ~uVar3 | param_1;
  uVar1 = FUN_1625da85a(param_1,~((uVar3 - (uVar2 | uVar3)) + uVar2),param_3,0);
  return uVar1;
}



// FUNCTION 14dd52544 FUN_14dd52544 body=113 status=ok
// SIG undefined FUN_14dd52544(void)

void FUN_14dd52544(undefined8 param_1)

{
  ulonglong unaff_R15;
  
  FUN_162201cb8(param_1,~unaff_R15);
  return;
}



// FUNCTION 14dd52661 FUN_14dd52661 body=604 status=ok
// SIG undefined FUN_14dd52661(void)

/* WARNING: Removing unreachable block (ram,0x00014dd526f1) */
/* WARNING: Removing unreachable block (ram,0x00014dd526f7) */

void FUN_14dd52661(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000018;
  
  FUN_16593aef3(param_1,param_2,in_stack_00000018,param_4);
  return;
}



// FUNCTION 14dd528cf FUN_14dd528cf body=180 status=ok
// SIG undefined FUN_14dd528cf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd528cf(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1563bace5(FUN_1563bace5,0x4e2f1510,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14dd52984 FUN_14dd52984 body=285 status=ok
// SIG undefined FUN_14dd52984(void)

void FUN_14dd52984(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  short *unaff_R14;
  longlong local_res10;
  
  uRam000000014d7bda8d =
       FUN_162bb2fa9(FUN_162bb2fa9,param_2 ^ param_1,*(undefined8 *)(unaff_RDI + -0x90));
  *unaff_R14 = (-0x102 - ~-(short)unaff_RDI) + *unaff_R14;
                    /* WARNING: Read-only address (ram,0x00014d7bda8d) is written */
  LOCK();
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x2bce6da;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd52acd thunk_FUN_14dd52ad3 body=5 status=ok
// SIG undefined thunk_FUN_14dd52ad3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd52b30) */

undefined8 thunk_FUN_14dd52ad3(void)

{
  undefined8 uVar1;
  
  FUN_161a88dd5();
  FUN_166de2555();
  uVar1 = FUN_14df40e94();
  return uVar1;
}



// FUNCTION 14dd52ad3 FUN_14dd52ad3 body=128 status=ok
// SIG undefined FUN_14dd52ad3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd52b30) */

undefined8 FUN_14dd52ad3(void)

{
  undefined8 uVar1;
  
  FUN_161a88dd5();
  FUN_166de2555();
  uVar1 = FUN_14df40e94();
  return uVar1;
}



// FUNCTION 14dd52b55 FUN_14dd52b55 body=452 status=ok
// SIG undefined FUN_14dd52b55(void)

undefined8 FUN_14dd52b55(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong in_RAX;
  undefined8 uVar2;
  longlong local_res10 [2];
  undefined1 local_res20 [8];
  longlong lStack0000000000000028;
  
  lVar1 = local_res10[0];
  lStack0000000000000028 = param_3 - *(longlong *)((longlong)local_res10 + in_RAX);
  local_res10[0] = param_4;
  local_res10[1] = param_1;
  FUN_166de2555((char)param_1,param_2,lVar1,local_res20);
  uVar2 = FUN_14df40e94();
  return uVar2;
}



// FUNCTION 14dd52eb0 FUN_14dd52eb0 body=127 status=ok
// SIG undefined FUN_14dd52eb0(void)

void FUN_14dd52eb0(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b348a49(param_1,*(undefined8 *)(unaff_RSI + -0x60),0,
                *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2);
  return;
}



// FUNCTION 14dd52f32 FUN_14dd52f32 body=298 status=ok
// SIG undefined FUN_14dd52f32(void)

/* WARNING: Removing unreachable block (ram,0x000166bf36dd) */
/* WARNING: Removing unreachable block (ram,0x0001660dd613) */
/* WARNING: Removing unreachable block (ram,0x00014dd53044) */
/* WARNING: Removing unreachable block (ram,0x00014dd5304a) */
/* WARNING: Removing unreachable block (ram,0x000166bf376a) */
/* WARNING: Removing unreachable block (ram,0x000166bf3770) */
/* WARNING: Removing unreachable block (ram,0x000166bf3775) */
/* WARNING: Removing unreachable block (ram,0x00014dd52fbb) */

undefined8 FUN_14dd52f32(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_stack_00000010;
  ulonglong local_res20;
  
  lVar1 = ((in_RAX - 1) - (*(ulonglong *)(&stack0x5f3f5fee + unaff_RBP) ^ 0xffffffffffffffff)) +
          ~(((local_res20 ^ 0xffffffffffffffff) + ~in_RAX) -
           ((local_res20 ^ 0xffffffffffffffff) & ~in_RAX)) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined1 **)(lVar1 + -0x18) = &LAB_1669f8adb;
  return in_stack_00000010;
}



// FUNCTION 14dd52fbb FUN_14dd52fbb body=411 status=ok
// SIG undefined FUN_14dd52fbb(void)

/* WARNING: Removing unreachable block (ram,0x000166bf36dd) */
/* WARNING: Removing unreachable block (ram,0x0001660dd613) */
/* WARNING: Removing unreachable block (ram,0x00014dd53044) */
/* WARNING: Removing unreachable block (ram,0x00014dd5304a) */
/* WARNING: Removing unreachable block (ram,0x000166bf376a) */
/* WARNING: Removing unreachable block (ram,0x000166bf3770) */
/* WARNING: Removing unreachable block (ram,0x000166bf3775) */

undefined8 FUN_14dd52fbb(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166bf36dd();
  return uVar1;
}



// FUNCTION 14dd532b9 FUN_14dd532b9 body=55 status=ok
// SIG undefined FUN_14dd532b9(void)

void FUN_14dd532b9(void)

{
  ulonglong in_R9;
  longlong unaff_R12;
  longlong alStackX_10 [3];
  
  in_R9 = in_R9 ^ 0x24c7d2d;
  *(undefined8 *)((longlong)alStackX_10 + in_R9) = 0;
  *(longlong *)((longlong)alStackX_10 + in_R9) =
       *(longlong *)((longlong)alStackX_10 + in_R9) - unaff_R12;
  *(longlong *)((longlong)alStackX_10 + in_R9) = -*(longlong *)((longlong)alStackX_10 + in_R9);
  return;
}



// FUNCTION 14dd535aa FUN_14dd535aa body=158 status=ok
// SIG undefined FUN_14dd535aa(void)

void FUN_14dd535aa(void)

{
  (*(code *)0x14dda61a9)();
  return;
}



// FUNCTION 14dd53648 FUN_14dd53648 body=245 status=ok
// SIG undefined FUN_14dd53648(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd53648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ushort in_R10W;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined1 unaff_R15B;
  undefined7 unaff_000000b9;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98) ^ CONCAT71(unaff_000000b9,unaff_R15B);
  uVar2 = FUN_16559216c(FUN_16559216c);
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  if ((in_R10W & 1) == 0) {
    *(undefined8 *)(uVar1 - 0x18) = uVar2;
    *(undefined8 *)(uVar1 - 0x20) = uVar2;
    *(undefined8 *)(uVar1 - 0x18) = 0x14dd53723;
    return *(undefined8 *)(uVar1 - 0x20);
  }
  uVar2 = (*(code *)0x14de146f7)(*(undefined8 *)(uVar1 - 0x10),param_2,param_3);
  return uVar2;
}



// FUNCTION 14dd5373f FUN_14dd5373f body=52 status=ok
// SIG undefined FUN_14dd5373f(void)

void FUN_14dd5373f(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1622a5acf)
            (param_1,param_2 ^ *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14dd5388b FUN_14dd5388b body=165 status=ok
// SIG undefined FUN_14dd5388b(void)

void FUN_14dd5388b(void)

{
  longlong unaff_RSI;
  
  FUN_15b106907(*(undefined8 *)(unaff_RSI + -0x68),FUN_15b106907);
  return;
}



// FUNCTION 14dd53c2d FUN_14dd53c2d body=444 status=ok
// SIG undefined FUN_14dd53c2d(void)

/* WARNING: Removing unreachable block (ram,0x000156b1560e) */
/* WARNING: Removing unreachable block (ram,0x00015b63905a) */
/* WARNING: Removing unreachable block (ram,0x00015b639060) */
/* WARNING: Removing unreachable block (ram,0x00015b639065) */
/* WARNING: Removing unreachable block (ram,0x000165342df2) */
/* WARNING: Removing unreachable block (ram,0x00016602b840) */
/* WARNING: Removing unreachable block (ram,0x00016602b8bf) */
/* WARNING: Removing unreachable block (ram,0x00016602b8cb) */
/* WARNING: Removing unreachable block (ram,0x000156b154cc) */
/* WARNING: Removing unreachable block (ram,0x000156b15551) */
/* WARNING: Removing unreachable block (ram,0x000156b15556) */
/* WARNING: Removing unreachable block (ram,0x0001614eb128) */
/* WARNING: Removing unreachable block (ram,0x0001614eb27f) */
/* WARNING: Removing unreachable block (ram,0x000156b1555c) */
/* WARNING: Removing unreachable block (ram,0x000156b1557b) */
/* WARNING: Removing unreachable block (ram,0x000156b15582) */
/* WARNING: Removing unreachable block (ram,0x000156b15613) */
/* WARNING: Removing unreachable block (ram,0x00015b638fe3) */
/* WARNING: Removing unreachable block (ram,0x0001564707ae) */
/* WARNING: Removing unreachable block (ram,0x000156470839) */
/* WARNING: Removing unreachable block (ram,0x000156470844) */
/* WARNING: Removing unreachable block (ram,0x00015647084a) */
/* WARNING: Removing unreachable block (ram,0x000156b15619) */
/* WARNING: Removing unreachable block (ram,0x000156b156c5) */
/* WARNING: Removing unreachable block (ram,0x000156b156ca) */
/* WARNING: Removing unreachable block (ram,0x000165f8a5b3) */
/* WARNING: Removing unreachable block (ram,0x000165f8a65d) */
/* WARNING: Removing unreachable block (ram,0x000165f8a663) */
/* WARNING: Removing unreachable block (ram,0x00016511e461) */
/* WARNING: Removing unreachable block (ram,0x00016511e470) */
/* WARNING: Removing unreachable block (ram,0x00016511e475) */
/* WARNING: Removing unreachable block (ram,0x000156b156d0) */
/* WARNING: Removing unreachable block (ram,0x000156b15756) */
/* WARNING: Removing unreachable block (ram,0x000156b1575c) */
/* WARNING: Removing unreachable block (ram,0x000156796fa3) */
/* WARNING: Removing unreachable block (ram,0x000156797025) */
/* WARNING: Removing unreachable block (ram,0x00015679702b) */
/* WARNING: Removing unreachable block (ram,0x000156797030) */
/* WARNING: Removing unreachable block (ram,0x00016631e3c2) */
/* WARNING: Removing unreachable block (ram,0x00016631e44c) */
/* WARNING: Removing unreachable block (ram,0x00016631e451) */
/* WARNING: Removing unreachable block (ram,0x00016631e457) */
/* WARNING: Removing unreachable block (ram,0x00016631e462) */
/* WARNING: Removing unreachable block (ram,0x0001614eb284) */
/* WARNING: Removing unreachable block (ram,0x0001614eb28f) */
/* WARNING: Removing unreachable block (ram,0x0001614eb333) */
/* WARNING: Removing unreachable block (ram,0x0001614eb338) */
/* WARNING: Removing unreachable block (ram,0x0001614eb33e) */
/* WARNING: Removing unreachable block (ram,0x0001614eb346) */
/* WARNING: Removing unreachable block (ram,0x0001614eb34e) */
/* WARNING: Removing unreachable block (ram,0x000156f04719) */
/* WARNING: Removing unreachable block (ram,0x000156f047e7) */
/* WARNING: Removing unreachable block (ram,0x0001614eb28a) */
/* WARNING: Removing unreachable block (ram,0x00014dd53cc7) */

void FUN_14dd53c2d(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong lVar5;
  undefined8 in_R10;
  undefined8 unaff_R15;
  longlong in_stack_00000028;
  
  lVar5 = *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2;
  uVar4 = FUN_161533f2d();
  *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + -1;
  lVar2 = *(longlong *)(lVar5 + 0x18);
  *(ulonglong *)(lVar5 + 0x18) = *(ulonglong *)(lVar5 + 0x18) & ~uVar4;
  *(ulonglong *)(lVar5 + 0x18) = (lVar2 + ~uVar4) - *(longlong *)(lVar5 + 0x18);
  *(ulonglong *)(lVar5 + 0x18) = ~*(ulonglong *)(lVar5 + 0x18);
  *(undefined8 *)(in_stack_00000028 + -8) = in_R10;
  plVar1 = (longlong *)(in_stack_00000028 + -0x10);
  *plVar1 = 0x168dd2992;
  *plVar1 = *plVar1 + -0xdc3e979;
  lVar2 = *plVar1;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R15;
  uVar3 = *(undefined8 *)(in_stack_00000028 + -0x10);
  *(ulonglong *)(in_stack_00000028 + -0x10) = param_1;
  *(ulonglong *)(in_stack_00000028 + -0x18) = param_1;
  *(ulonglong *)(in_stack_00000028 + -0x20) =
       CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),
                (short)unaff_RBP << 1 | (ushort)(0xffffffffffff8072 < unaff_RDI - 0x800dU));
  *(undefined8 *)(in_stack_00000028 + -0x20) = uVar3;
  *(undefined4 *)(in_stack_00000028 + -0x28) = 0x295d2a31;
  *(undefined4 *)(in_stack_00000028 + -0x24) = 0;
  *(undefined8 *)
   (in_stack_00000028 + -0x18 + (*(ulonglong *)(in_stack_00000028 + -0x28) ^ 0x295d2a39)) =
       *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = *(undefined8 *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) - (lVar2 + 0xbed);
  *(longlong *)(in_stack_00000028 + -8) = -*(longlong *)(in_stack_00000028 + -8);
  thunk_FUN_15b642ca5(*(undefined8 *)(in_stack_00000028 + -0x18));
  return;
}



// FUNCTION 14dd53d65 FUN_14dd53d65 body=278 status=ok
// SIG undefined FUN_14dd53d65(void)

/* WARNING: Removing unreachable block (ram,0x00014dd53e75) */
/* WARNING: Removing unreachable block (ram,0x00014dd53e80) */
/* WARNING: Removing unreachable block (ram,0x00014dd53e7b) */

undefined8 FUN_14dd53d65(void)

{
  undefined8 uVar1;
  
  FUN_15728ca02();
  FUN_14e14782e();
  uVar1 = FUN_14d7be7c8();
  return uVar1;
}



// FUNCTION 14dd53e80 FUN_14dd53e80 body=140 status=ok
// SIG undefined FUN_14dd53e80(void)

void FUN_14dd53e80(void)

{
  return;
}



// FUNCTION 14dd53f0d FUN_14dd53f0d body=158 status=ok
// SIG undefined FUN_14dd53f0d(void)

void FUN_14dd53f0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_166433d5f(unaff_retaddr,param_2,param_3,0x70c3fc54,param_4);
  return;
}



// FUNCTION 14dd54029 FUN_14dd54029 body=146 status=ok
// SIG undefined FUN_14dd54029(void)

void FUN_14dd54029(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_1566e1b34(in_stack_00000008,param_2,FUN_1566e1b34,param_4,*(undefined8 *)(param_3 + -0x88));
  return;
}



// FUNCTION 14dd5413f FUN_14dd5413f body=2 status=ok
// SIG undefined FUN_14dd5413f(void)

void FUN_14dd5413f(void)

{
  return;
}



// FUNCTION 14dd541bc FUN_14dd541bc body=1138 status=ok
// SIG undefined FUN_14dd541bc(void)

/* WARNING: Removing unreachable block (ram,0x00016483a931) */
/* WARNING: Removing unreachable block (ram,0x00016483a9b9) */
/* WARNING: Removing unreachable block (ram,0x00016483a9bf) */
/* WARNING: Removing unreachable block (ram,0x00016483a9c4) */
/* WARNING: Removing unreachable block (ram,0x0001616cbdb4) */
/* WARNING: Removing unreachable block (ram,0x00014dd5457d) */
/* WARNING: Removing unreachable block (ram,0x00014dd54583) */
/* WARNING: Removing unreachable block (ram,0x000165175d38) */
/* WARNING: Removing unreachable block (ram,0x00014dd543a2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd541bc(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_14d81bb87(param_1,in_stack_00000008);
  FUN_164be1bd3();
  FUN_16586c7b2();
  FUN_162f32b54();
  return;
}



// FUNCTION 14dd54589 FUN_14dd54589 body=57 status=ok
// SIG undefined FUN_14dd54589(void)

void FUN_14dd54589(void)

{
  return;
}



// FUNCTION 14dd546d2 FUN_14dd546d2 body=309 status=ok
// SIG undefined FUN_14dd546d2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd54762) */

void FUN_14dd546d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1612699fe)(param_1,param_2,0x1612699fe,param_4);
  return;
}



// FUNCTION 14dd54809 FUN_14dd54809 body=515 status=ok
// SIG undefined FUN_14dd54809(void)

/* WARNING: Removing unreachable block (ram,0x0001649bbb2a) */
/* WARNING: Removing unreachable block (ram,0x0001649bbb3a) */
/* WARNING: Removing unreachable block (ram,0x00015784c5d0) */
/* WARNING: Removing unreachable block (ram,0x00015784c5d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd548b2) */
/* WARNING: Removing unreachable block (ram,0x00014dd54946) */
/* WARNING: Removing unreachable block (ram,0x0001649bbaa2) */
/* WARNING: Removing unreachable block (ram,0x00014dd5494c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd54809(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  ulonglong local_res8;
  
  if ((~unaff_RBP & *(ulonglong *)(unaff_RSI + -0x28)) == 0 && unaff_RBP == 0) {
    FUN_14dce9787(*(undefined8 *)(unaff_RSI + -0x38),FUN_14dce9787,
                  *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,0);
    uVar3 = ~local_res8 | ~-_DAT_ffffffffffffff40 + 1U;
    uVar2 = ~(~-_DAT_ffffffffffffff40 + 1U) | local_res8;
    uVar1 = FUN_162dcd89d((~(~uVar2 & uVar3) + uVar3) - uVar2);
    return uVar1;
  }
  uVar1 = FUN_15784c53d();
  return uVar1;
}



// FUNCTION 14dd54afa FUN_14dd54afa body=147 status=ok
// SIG undefined FUN_14dd54afa(void)

void FUN_14dd54afa(void)

{
  FUN_166738cb8();
  return;
}



// FUNCTION 14dd54dc3 FUN_14dd54dc3 body=160 status=ok
// SIG undefined FUN_14dd54dc3(void)

void FUN_14dd54dc3(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_161bfd422(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd54e63 FUN_14dd54e63 body=46 status=ok
// SIG undefined FUN_14dd54e63(void)

void FUN_14dd54e63(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd54fbc FUN_14dd54fbc body=346 status=ok
// SIG undefined FUN_14dd54fbc(void)

/* WARNING: Removing unreachable block (ram,0x000156521e88) */
/* WARNING: Removing unreachable block (ram,0x000156521e94) */
/* WARNING: Removing unreachable block (ram,0x0001653c69f3) */
/* WARNING: Removing unreachable block (ram,0x0001653c69f9) */
/* WARNING: Removing unreachable block (ram,0x0001653c6952) */
/* WARNING: Removing unreachable block (ram,0x0001653c6958) */
/* WARNING: Removing unreachable block (ram,0x000160d2e2a2) */
/* WARNING: Removing unreachable block (ram,0x0001653c6810) */
/* WARNING: Removing unreachable block (ram,0x0001653c6816) */
/* WARNING: Removing unreachable block (ram,0x0001653c681b) */
/* WARNING: Removing unreachable block (ram,0x0001653c68c1) */
/* WARNING: Removing unreachable block (ram,0x0001653c68c7) */
/* WARNING: Removing unreachable block (ram,0x0001653c68d2) */
/* WARNING: Removing unreachable block (ram,0x000156e9dd05) */
/* WARNING: Removing unreachable block (ram,0x0001656c1e96) */
/* WARNING: Removing unreachable block (ram,0x0001656c1f34) */
/* WARNING: Removing unreachable block (ram,0x0001656c1f39) */
/* WARNING: Removing unreachable block (ram,0x0001656c1f3f) */
/* WARNING: Removing unreachable block (ram,0x0001656c1f44) */
/* WARNING: Removing unreachable block (ram,0x000165ad9b56) */
/* WARNING: Removing unreachable block (ram,0x0001656c1fca) */
/* WARNING: Removing unreachable block (ram,0x0001656c1fd0) */
/* WARNING: Removing unreachable block (ram,0x0001656c1fd5) */
/* WARNING: Removing unreachable block (ram,0x00014dd55051) */
/* WARNING: Removing unreachable block (ram,0x00014dd55084) */
/* WARNING: Removing unreachable block (ram,0x00014dd55113) */
/* WARNING: Removing unreachable block (ram,0x00014dd5511d) */
/* WARNING: Removing unreachable block (ram,0x00014dd5517d) */
/* WARNING: Removing unreachable block (ram,0x00014dd55188) */
/* WARNING: Removing unreachable block (ram,0x00014dd55194) */
/* WARNING: Removing unreachable block (ram,0x000162eefdbe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dd54fbc(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x10) = in_R11;
  *(undefined8 *)(param_5 - 0x18) = in_R11;
  uVar3 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x10) = uVar3;
  *(undefined8 *)(param_5 - 0x18) = unaff_RBX;
  *(undefined8 *)(param_5 - 0x20) = in_stack_00000008;
  *(undefined4 *)(param_5 - 0x20) = 0;
  *(int *)(param_5 - 0x20) = *(int *)(param_5 - 0x20) + 0x4428bda2;
  *(undefined4 *)(param_5 - 0x1c) = 0;
  uVar1 = *(ulonglong *)(param_5 - 0x20);
  *(ulonglong *)(param_5 - 0x20) = param_3 + unaff_R15 + (local_res18 & unaff_R15) * -2;
  *(undefined8 *)(param_5 - 0x28) = param_1;
  uVar3 = *(undefined8 *)(param_5 - 0x28);
  uVar2 = *(ulonglong *)(param_5 - 0x20);
  *(undefined8 *)((param_5 - 0x10) + (uVar1 ^ 0x4428bdaa)) = 0;
  *(longlong *)(param_5 - 8) = (longlong)(&LAB_164b79428 + *(longlong *)(param_5 - 8));
  *(undefined8 *)(param_5 - 0x18) = in_stack_00000008;
  *(undefined8 *)(param_5 - 0x20) = 0x1653c677f;
  FUN_164b793ad(uVar3);
  *(undefined8 *)(param_5 - 0x20) = *(undefined8 *)(unaff_R13 + -0x90);
  *(ulonglong *)(param_5 - 0x20) = *(ulonglong *)(unaff_R13 + -0x60);
  *(ulonglong *)(param_5 - 0x20) =
       ~((~uVar2 | unaff_R12) & (unaff_R12 ^ 0xffffffffffffffff | uVar2));
  uVar3 = FUN_166bdcb1f();
  return uVar3;
}



// FUNCTION 14dd552b4 FUN_14dd552b4 body=202 status=ok
// SIG undefined FUN_14dd552b4(void)

/* WARNING: Removing unreachable block (ram,0x000165011b32) */
/* WARNING: Removing unreachable block (ram,0x000165011990) */
/* WARNING: Removing unreachable block (ram,0x000165011996) */
/* WARNING: Removing unreachable block (ram,0x0001650119e1) */
/* WARNING: Removing unreachable block (ram,0x0001650119e5) */
/* WARNING: Removing unreachable block (ram,0x000165011a46) */
/* WARNING: Removing unreachable block (ram,0x000165011a51) */
/* WARNING: Removing unreachable block (ram,0x00014dfd2575) */
/* WARNING: Removing unreachable block (ram,0x000165011a5d) */
/* WARNING: Removing unreachable block (ram,0x000165011aeb) */
/* WARNING: Removing unreachable block (ram,0x000165011af6) */
/* WARNING: Removing unreachable block (ram,0x00015b869784) */
/* WARNING: Removing unreachable block (ram,0x000165011afc) */
/* WARNING: Removing unreachable block (ram,0x000165011b35) */
/* WARNING: Removing unreachable block (ram,0x000165507c86) */
/* WARNING: Removing unreachable block (ram,0x000165011b73) */
/* WARNING: Removing unreachable block (ram,0x000165011b79) */
/* WARNING: Removing unreachable block (ram,0x000165011b7e) */
/* WARNING: Removing unreachable block (ram,0x00014dd5537e) */
/* WARNING: Removing unreachable block (ram,0x00014dd5539f) */
/* WARNING: Removing unreachable block (ram,0x00014dd55426) */
/* WARNING: Removing unreachable block (ram,0x000165011901) */

undefined8 FUN_14dd552b4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165011901();
  return uVar1;
}



// FUNCTION 14dd5537e FUN_14dd5537e body=369 status=ok
// SIG undefined FUN_14dd5537e(void)

void FUN_14dd5537e(undefined8 param_1,undefined8 param_2)

{
  byte unaff_DIL;
  byte in_stack_00000058;
  
  FUN_16620aea9(FUN_16620aea9,param_2,unaff_DIL | in_stack_00000058);
  return;
}



// FUNCTION 14dd55501 FUN_14dd55501 body=301 status=ok
// SIG undefined FUN_14dd55501(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5558a) */
/* WARNING: Removing unreachable block (ram,0x00014dd55596) */

void FUN_14dd55501(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  uVar1 = (~(unaff_R14 & 0xffffffffbbe6d28f) - 0x44192d71) - ~unaff_R14;
  (*(code *)0x15af8a221)
            (param_1,unaff_retaddr,param_3,*(undefined8 *)(unaff_RDI + -8),
             *(undefined8 *)(unaff_RDI + ~((uVar1 - (unaff_R12 | uVar1)) + unaff_R12)));
  return;
}



// FUNCTION 14dd556be FUN_14dd556be body=337 status=ok
// SIG undefined FUN_14dd556be(void)

/* WARNING: Removing unreachable block (ram,0x00014df9286b) */
/* WARNING: Removing unreachable block (ram,0x00014df92871) */
/* WARNING: Removing unreachable block (ram,0x000162a040af) */
/* WARNING: Removing unreachable block (ram,0x000162a040b5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5576f) */
/* WARNING: Removing unreachable block (ram,0x00014df9273f) */
/* WARNING: Removing unreachable block (ram,0x00016194939d) */
/* WARNING: Removing unreachable block (ram,0x00014dd55800) */
/* WARNING: Removing unreachable block (ram,0x00014dd55806) */
/* WARNING: Removing unreachable block (ram,0x00014dd5580b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd556be(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  if (*(ulonglong *)(param_2 + -0x88) + in_R10 + (*(ulonglong *)(param_2 + -0x88) & in_R10) * -2 !=
      0) {
    FUN_162a03fa4();
    return;
  }
  FUN_1662e60ea(FUN_1662e60ea,param_2,0,
                (-in_R10 - *(ulonglong *)(param_2 + -0x60)) +
                (*(ulonglong *)(param_2 + -0x60) | in_R10) * 2);
  thunk_FUN_14d8c805f();
  return;
}



// FUNCTION 14dd55811 FUN_14dd55811 body=332 status=ok
// SIG undefined FUN_14dd55811(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5589b) */
/* WARNING: Removing unreachable block (ram,0x00014dd558a6) */
/* WARNING: Removing unreachable block (ram,0x00014dd55944) */
/* WARNING: Removing unreachable block (ram,0x00014dd55949) */
/* WARNING: Removing unreachable block (ram,0x00014dd5594f) */
/* WARNING: Removing unreachable block (ram,0x00016516a3d0) */
/* WARNING: Removing unreachable block (ram,0x00016516a547) */
/* WARNING: Removing unreachable block (ram,0x00016516a552) */
/* WARNING: Removing unreachable block (ram,0x00016516a564) */
/* WARNING: Removing unreachable block (ram,0x000164fed752) */
/* WARNING: Removing unreachable block (ram,0x000164fed778) */
/* WARNING: Removing unreachable block (ram,0x000164fed768) */
/* WARNING: Removing unreachable block (ram,0x000164fed781) */
/* WARNING: Removing unreachable block (ram,0x00014dd558a1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd55811(void)

{
  FUN_166507112();
  FUN_1650d4a2c();
  return;
}



// FUNCTION 14dd55a0b FUN_14dd55a0b body=147 status=ok
// SIG undefined FUN_14dd55a0b(void)

void FUN_14dd55a0b(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = (in_RAX & unaff_R15) << 1 | (in_RAX & unaff_R15) >> 0x3f;
  uVar1 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
          (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15) ^ 0xffffffffffffffff;
  FUN_162a266ca(uVar1,uVar1,(in_RAX + unaff_R15) - ((-2 - (uVar2 | 0xfffffffffffffffe)) + uVar2));
  return;
}



// FUNCTION 14dd55aa0 FUN_14dd55aa0 body=14 status=ok
// SIG undefined FUN_14dd55aa0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd55aa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd55d42 FUN_14dd55d42 body=118 status=ok
// SIG undefined FUN_14dd55d42(void)

void FUN_14dd55d42(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_14dd55dd6;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_14dd55dd6;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x20) = in_R9;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00014dd55db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd55e78 FUN_14dd55e78 body=142 status=ok
// SIG undefined FUN_14dd55e78(void)

void FUN_14dd55e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  
  FUN_15b361faf(uStackX_10,param_2,FUN_15b361faf);
  return;
}



// FUNCTION 14dd55f06 FUN_14dd55f06 body=101 status=ok
// SIG undefined FUN_14dd55f06(void)

void FUN_14dd55f06(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_R12;
  longlong unaff_R15;
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
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong *local_res10;
  
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
  uVar2 = (*pcVar1)(unaff_retaddr);
  *local_res10 = unaff_R15;
  local_res10[-1] = unaff_R15;
  local_res10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res10[-3] = uVar2;
  *(undefined4 *)(local_res10 + -3) = 0xb0bfd9f;
  *(undefined4 *)((longlong)local_res10 + -0x14) = 0;
  uVar16 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  local_res10[-2] = unaff_R12;
  *local_res10 = (local_res10[-3] ^ 0xf2a006bU) - 0x1c53820;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd55f8e FUN_14dd55f8e body=149 status=ok
// SIG undefined FUN_14dd55f8e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd56023) */

void FUN_14dd55f8e(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x50);
  if (-1 < (longlong)
           (((uVar1 ^ 0xffffffffffffffff) & ~param_1 | uVar1) &
           (0xffffffffffffffff - uVar1 | param_1))) {
    FUN_14e0bc6ca();
    return;
  }
  FUN_14e0bc6ca();
  return;
}



// FUNCTION 14dd56023 FUN_14dd56023 body=143 status=ok
// SIG undefined FUN_14dd56023(void)

void FUN_14dd56023(ulonglong param_1)

{
  undefined1 in_AL;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | ~param_1;
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  LOCK();
  UNLOCK();
  DAT_14d7be53c = in_AL;
  *(undefined8 *)((in_stack_00000028 ^ param_1) - 0x10) = unaff_R15;
  *(undefined8 *)((in_stack_00000028 ^ param_1) - 8) = unaff_RDI;
  (*(code *)0x16500f535)(~(~(local_res18 ^ 0xffffffffffffffff) | ~unaff_R14));
  return;
}



// FUNCTION 14dd560b2 FUN_14dd560b2 body=282 status=ok
// SIG undefined FUN_14dd560b2(void)

void FUN_14dd560b2(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  uVar1 = ~(param_1 & unaff_retaddr) & (param_1 | unaff_retaddr);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_162e538db(uVar1,-1 - (~(~(~uVar2 & ~unaff_retaddr) & ~uVar2) &
                           (~(~uVar2 & unaff_retaddr) + unaff_retaddr) - uVar2));
  uVar2 = ~uVar1 | *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | uVar1;
  *(ulonglong *)(unaff_R13 + 8) =
       (*(longlong *)(unaff_R13 + 8) - (uVar2 | *(ulonglong *)(unaff_R13 + 8))) + uVar2 ^
       0xffffffffffffffff;
  in_stack_00000028 = in_stack_00000028 ^ uVar1;
  *(ulonglong *)(in_stack_00000028 - 8) =
       CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0x3a3f) ^ 0x3a3f;
  *(ulonglong *)(in_stack_00000028 - 0x10) = *(ulonglong *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = local_res8;
  FUN_16618f067(local_res18);
  return;
}



// FUNCTION 14dd563b6 FUN_14dd563b6 body=162 status=ok
// SIG undefined FUN_14dd563b6(void)

void FUN_14dd563b6(undefined8 param_1)

{
  FUN_1623a1f43(param_1);
  return;
}



// FUNCTION 14dd5645b FUN_14dd5645b body=143 status=ok
// SIG undefined FUN_14dd5645b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd56514) */
/* WARNING: Removing unreachable block (ram,0x00014dd5651f) */
/* WARNING: Removing unreachable block (ram,0x00014dd5651a) */

void FUN_14dd5645b(void)

{
  FUN_1624a6ec8();
  return;
}



// FUNCTION 14dd565a3 FUN_14dd565a3 body=116 status=ok
// SIG undefined FUN_14dd565a3(void)

void FUN_14dd565a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  short *unaff_R13;
  ushort unaff_R15W;
  ulonglong uVar1;
  undefined8 uStackX_20;
  
  *unaff_R13 = (~unaff_R15W - 0x100) + *unaff_R13;
  syscall();
  *(undefined8 *)(param_5 + -8) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = unaff_RBP;
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
  uVar1 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  *(undefined8 *)(param_5 + -0x28) = in_RAX;
  *(undefined4 *)(param_5 + -0x28) = 0x17d4a403;
  *(undefined4 *)(param_5 + -0x24) = 0;
  *(undefined8 *)(param_5 + -0x18) = in_R10;
  *(ulonglong *)(param_5 + -8) = 0x9adde56 - (*(ulonglong *)(param_5 + -0x28) ^ 0x14325f39);
  FUN_165c7153c(0x14dd565cc,param_2,param_3,*(undefined8 *)(param_5 + -0x20));
  return;
}



// FUNCTION 14dd5680a FUN_14dd5680a body=142 status=ok
// SIG undefined FUN_14dd5680a(void)

void FUN_14dd5680a(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  FUN_1610656d8(param_1,~((~in_RAX | param_2) & (~param_2 | in_RAX)));
  return;
}



// FUNCTION 14dd56b4d FUN_14dd56b4d body=59 status=ok
// SIG undefined FUN_14dd56b4d(void)

void FUN_14dd56b4d(void)

{
  return;
}



// FUNCTION 14dd56bf2 FUN_14dd56bf2 body=208 status=ok
// SIG undefined FUN_14dd56bf2(void)

void FUN_14dd56bf2(void)

{
  return;
}



// FUNCTION 14dd56cc5 FUN_14dd56cc5 body=171 status=ok
// SIG undefined FUN_14dd56cc5(void)

void FUN_14dd56cc5(int param_1,uint param_2)

{
  int iVar1;
  undefined8 local_res8;
  
  iVar1 = (-~param_2 ^ 0xffffffff) + ~-param_1 + 2U;
  (*(code *)0x15678148c)(iVar1,~param_2,iVar1,local_res8);
  return;
}



// FUNCTION 14dd56dfa FUN_14dd56dfa body=34 status=ok
// SIG undefined FUN_14dd56dfa(void)

void FUN_14dd56dfa(void)

{
  return;
}



// FUNCTION 14dd570a0 FUN_14dd570a0 body=156 status=ok
// SIG undefined FUN_14dd570a0(void)

void FUN_14dd570a0(void)

{
  return;
}



// FUNCTION 14dd5713c FUN_14dd5713c body=34 status=ok
// SIG undefined FUN_14dd5713c(void)

void FUN_14dd5713c(void)

{
  return;
}



// FUNCTION 14dd57277 FUN_14dd57277 body=146 status=ok
// SIG undefined FUN_14dd57277(void)

void FUN_14dd57277(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dd79f13(param_1,param_2,param_3,FUN_14dd79f13);
  return;
}



// FUNCTION 14dd5730b FUN_14dd5730b body=163 status=ok
// SIG undefined FUN_14dd5730b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd573ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd5739e) */

void FUN_14dd5730b(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1620bad38(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~((param_1 | param_4) & (~param_4 | in_RAX)));
  return;
}


