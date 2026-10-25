// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14ddb060d FUN_14ddb060d body=283 status=ok
// SIG undefined FUN_14ddb060d(void)

void FUN_14ddb060d(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (unaff_RSI ^ 0x124eaa74) + *(longlong *)(unaff_R12 + -0x48);
  FUN_160ed007e();
  uVar1 = *(ulonglong *)(unaff_R13 + ~((~in_RAX | uVar1) & (~uVar1 | in_RAX)));
  (*(code *)0x1610813de)(param_1,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2);
  return;
}



// FUNCTION 14ddb07e2 FUN_14ddb07e2 body=140 status=ok
// SIG undefined FUN_14ddb07e2(void)

void FUN_14ddb07e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1568a2fea(param_1,param_2,param_3);
  return;
}



// FUNCTION 14ddb0870 FUN_14ddb0870 body=135 status=ok
// SIG undefined FUN_14ddb0870(void)

void FUN_14ddb0870(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x165a44d6d)(param_1,param_2);
  return;
}



// FUNCTION 14ddb08f8 FUN_14ddb08f8 body=179 status=ok
// SIG undefined FUN_14ddb08f8(void)

void FUN_14ddb08f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x38) = unaff_R14;
  *(code **)(local_res18 + -0x28) = FUN_14ddb09af;
  *(undefined8 *)(local_res18 + -0x30) = 0x15658a3f3;
  return;
}



// FUNCTION 14ddb09af FUN_14ddb09af body=140 status=ok
// SIG undefined FUN_14ddb09af(void)

void FUN_14ddb09af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162d51e8a(FUN_162d51e8a,param_2,param_3);
  return;
}



// FUNCTION 14ddb0ae5 FUN_14ddb0ae5 body=397 status=ok
// SIG undefined FUN_14ddb0ae5(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb0b67) */
/* WARNING: Removing unreachable block (ram,0x00014ddb0b6d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb0ae5(void)

{
  FUN_156fe2ea4();
  return;
}



// FUNCTION 14ddb0c1d FUN_14ddb0c1d body=120 status=ok
// SIG undefined FUN_14ddb0c1d(void)

void FUN_14ddb0c1d(undefined8 param_1)

{
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_1614ed48a(param_1,*(undefined8 *)(unaff_R12 + -0x68),unaff_retaddr);
  FUN_14ddb0c97();
  return;
}



// FUNCTION 14ddb0c97 FUN_14ddb0c97 body=147 status=ok
// SIG undefined FUN_14ddb0c97(void)

void FUN_14ddb0c97(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b895e41(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,~*(ulonglong *)(unaff_R13 + -0x28),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14ddb0db9 FUN_14ddb0db9 body=115 status=ok
// SIG undefined FUN_14ddb0db9(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb0e2d) */
/* WARNING: Removing unreachable block (ram,0x00014ddb0ed6) */
/* WARNING: Removing unreachable block (ram,0x00014ddb0edc) */
/* WARNING: Removing unreachable block (ram,0x0001573d2be4) */
/* WARNING: Removing unreachable block (ram,0x0001626d7769) */
/* WARNING: Removing unreachable block (ram,0x0001626d78c8) */
/* WARNING: Removing unreachable block (ram,0x0001626d78d2) */

void FUN_14ddb0db9(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res10 + -8) = param_2;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  if (-1 < (int)((uint)*(undefined8 *)(local_res10 + -0x20) | 0x6d4b9d78)) {
    FUN_1626d76d1();
    return;
  }
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x1613781bc;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  FUN_14d7c172f(uVar2,*(undefined8 *)(local_res10 + -0x10),uVar1);
  return;
}



// FUNCTION 14ddb0e2d FUN_14ddb0e2d body=181 status=ok
// SIG undefined FUN_14ddb0e2d(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb0edc) */

void FUN_14ddb0e2d(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_161509312(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14ddb0f7c FUN_14ddb0f7c body=322 status=ok
// SIG undefined FUN_14ddb0f7c(void)

void FUN_14ddb0f7c(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  (*(code *)0x165b167eb)
            (param_1,0xffffffffffffffff,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~in_RAX | ~(~param_1 & ~param_4 | param_1));
  return;
}



// FUNCTION 14ddb1159 FUN_14ddb1159 body=121 status=ok
// SIG undefined FUN_14ddb1159(void)

void FUN_14ddb1159(HMODULE param_1,LPCSTR param_2)

{
  undefined8 unaff_R12;
  uint in_stack_00000008;
  
  *(undefined8 *)(&stack0xfffffffffb9218be + in_stack_00000008) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00014ddb11cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14ddb135b FUN_14ddb135b body=12 status=ok
// SIG undefined FUN_14ddb135b(void)

void FUN_14ddb135b(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14ddb13fe FUN_14ddb13fe body=143 status=ok
// SIG undefined FUN_14ddb13fe(void)

void FUN_14ddb13fe(void)

{
  FUN_156b7f76a();
  return;
}



// FUNCTION 14ddb1513 FUN_14ddb1513 body=40 status=ok
// SIG undefined FUN_14ddb1513(void)

void FUN_14ddb1513(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14ddb1654 FUN_14ddb1654 body=142 status=ok
// SIG undefined FUN_14ddb1654(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015745827e) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1763) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1769) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1888) */
/* WARNING: Removing unreachable block (ram,0x00014ddb188e) */
/* WARNING: Removing unreachable block (ram,0x000156422f56) */
/* WARNING: Removing unreachable block (ram,0x00015642304c) */
/* WARNING: Removing unreachable block (ram,0x00015642304e) */
/* WARNING: Removing unreachable block (ram,0x000156423095) */
/* WARNING: Removing unreachable block (ram,0x000156423098) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1893) */
/* WARNING: Removing unreachable block (ram,0x00014ddb16d9) */
/* WARNING: Removing unreachable block (ram,0x00014ddb16e4) */
/* WARNING: Removing unreachable block (ram,0x00014ddb175e) */
/* WARNING: Removing unreachable block (ram,0x00014ddb16df) */

undefined8 FUN_14ddb1654(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160c2ab21();
  return uVar1;
}



// FUNCTION 14ddb16e4 FUN_14ddb16e4 body=283 status=ok
// SIG undefined FUN_14ddb16e4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014ddb1893) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1763) */
/* WARNING: Removing unreachable block (ram,0x000156422f56) */
/* WARNING: Removing unreachable block (ram,0x00015642304c) */
/* WARNING: Removing unreachable block (ram,0x00015642304e) */
/* WARNING: Removing unreachable block (ram,0x000156423095) */
/* WARNING: Removing unreachable block (ram,0x000156423098) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1769) */
/* WARNING: Removing unreachable block (ram,0x00014ddb1888) */
/* WARNING: Removing unreachable block (ram,0x00014ddb188e) */
/* WARNING: Removing unreachable block (ram,0x00015745827e) */

undefined8 FUN_14ddb16e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156422f56();
  return uVar1;
}



// FUNCTION 14ddb17ff FUN_14ddb17ff body=163 status=ok
// SIG undefined FUN_14ddb17ff(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb1893) */
/* WARNING: Removing unreachable block (ram,0x00015745827e) */

undefined8 FUN_14ddb17ff(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_15745827e(in_stack_00000008);
  return uVar1;
}



// FUNCTION 14ddb18a4 FUN_14ddb18a4 body=159 status=ok
// SIG undefined FUN_14ddb18a4(void)

void FUN_14ddb18a4(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d9e3124(param_1,*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15);
  return;
}



// FUNCTION 14ddb1a50 FUN_14ddb1a50 body=155 status=ok
// SIG undefined FUN_14ddb1a50(void)

void FUN_14ddb1a50(void)

{
  return;
}



// FUNCTION 14ddb1da6 FUN_14ddb1da6 body=289 status=ok
// SIG undefined FUN_14ddb1da6(void)

void FUN_14ddb1da6(undefined8 param_1,undefined8 param_2)

{
  FUN_14d8c7974(param_1,param_2);
  FUN_156ad4bbf();
  FUN_14ddb1ec9();
  return;
}



// FUNCTION 14ddb1ec9 FUN_14ddb1ec9 body=124 status=ok
// SIG undefined FUN_14ddb1ec9(void)

void FUN_14ddb1ec9(void)

{
  FUN_162355d24(0xfe);
  return;
}



// FUNCTION 14ddb1fcc FUN_14ddb1fcc body=8 status=ok
// SIG undefined FUN_14ddb1fcc(void)

void FUN_14ddb1fcc(HDEVINFO param_1,PSP_DEVINFO_DATA param_2,DEVPROPKEY *param_3,
                  DEVPROPTYPE *param_4,undefined8 param_5,PBYTE param_6,DWORD param_7,PDWORD param_8
                  ,DWORD param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00014ddb1fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetupDiGetDevicePropertyW(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9);
  return;
}



// FUNCTION 14ddb20c4 FUN_14ddb20c4 body=602 status=ok
// SIG undefined FUN_14ddb20c4(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb2166) */
/* WARNING: Removing unreachable block (ram,0x00014ddb216c) */
/* WARNING: Removing unreachable block (ram,0x00014ddb21fe) */
/* WARNING: Removing unreachable block (ram,0x00014ddb2204) */
/* WARNING: Removing unreachable block (ram,0x000164735386) */

void FUN_14ddb20c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1572f5d89(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddb23bc FUN_14ddb23bc body=457 status=ok
// SIG undefined FUN_14ddb23bc(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb24dc) */
/* WARNING: Removing unreachable block (ram,0x00014dc891ac) */
/* WARNING: Removing unreachable block (ram,0x00014ddb2468) */
/* WARNING: Removing unreachable block (ram,0x00014ddb24d6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8915d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8916c) */
/* WARNING: Removing unreachable block (ram,0x00014dc891b8) */
/* WARNING: Removing unreachable block (ram,0x00014dc891f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc891ff) */
/* WARNING: Removing unreachable block (ram,0x00014dc89205) */
/* WARNING: Removing unreachable block (ram,0x000166564461) */
/* WARNING: Removing unreachable block (ram,0x000166564480) */
/* WARNING: Removing unreachable block (ram,0x000166564504) */
/* WARNING: Removing unreachable block (ram,0x000166564509) */
/* WARNING: Removing unreachable block (ram,0x00014dc89171) */
/* WARNING: Removing unreachable block (ram,0x00014ddb244d) */
/* WARNING: Removing unreachable block (ram,0x00014ddb2463) */
/* WARNING: Removing unreachable block (ram,0x00014ddb24d1) */

void FUN_14ddb23bc(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if ((~*(ulonglong *)(unaff_RDI + -0x80) & ~param_1) == 0) {
    FUN_1616266e0();
    return;
  }
  FUN_16281dd0f(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,FUN_16281dd0f);
  return;
}



// FUNCTION 14ddb244d FUN_14ddb244d body=143 status=ok
// SIG undefined FUN_14ddb244d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc891ff) */
/* WARNING: Removing unreachable block (ram,0x00014dc89205) */

void FUN_14ddb244d(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar4;
  ushort *in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  bool in_ZF;
  undefined8 uStackX_18;
  
  uVar3 = unaff_RSI + 0x12b41c;
  if (in_ZF) {
    return;
  }
  if (0x12b41c < uVar3) {
    FUN_14dc8915d();
    return;
  }
  if (0x12b41d < uVar3) {
    *in_R10 = (~(ushort)param_2 | *in_R10) - 0x100;
    plVar2 = param_5 + -1;
    *plVar2 = 0;
    *plVar2 = *plVar2 + param_1;
    param_5[-2] = *plVar2;
    *plVar2 = 0;
    *plVar2 = (longlong)(&LAB_1621543df + *plVar2);
    param_5[-3] = (longlong)thunk_FUN_14ddb2558;
    uVar3 = FUN_1621543ad(FUN_1621543ad,uStackX_18);
    *(ulonglong *)(param_3 + 8) = ~in_R11;
    param_5[3] = param_5[3] ^ uVar3;
    param_5[1] = param_5[1];
    *param_5 = unaff_RBP;
    param_5[-1] = unaff_R14;
    *(short *)(param_5 + -2) = (short)param_5[2];
    plVar2 = param_5 + -3;
    *(undefined4 *)plVar2 = 0xbe113e3;
    *(undefined4 *)((longlong)param_5 + -0x14) = 0;
    puVar1 = (undefined8 *)((longlong)plVar2 + *plVar2 + -0xbe113d3);
    *puVar1 = *puVar1;
    FUN_1571cdd12();
    return;
  }
  if (uVar3 == 0x12b41d) {
    FUN_16131bb16();
    return;
  }
  if (uVar3 == 0x12b41e) {
    FUN_16131bb16();
    return;
  }
  if (uVar3 == 0x12b41f) {
    uVar3 = FUN_162b0ebe9();
    if (unaff_RBP + param_2 == 0x705e7795) {
      uVar4 = *(ulonglong *)(unaff_R12 + -0x48) ^ 0xffffffffffffffff;
      FUN_1668061e8((uVar4 + ~uVar3) - (uVar4 & ~uVar3),*(ulonglong *)(unaff_R12 + -0x78) ^ uVar3);
      return;
    }
    FUN_156a27a1c();
    return;
  }
  return;
}



// FUNCTION 14ddb24dc FUN_14ddb24dc body=115 status=ok
// SIG undefined FUN_14ddb24dc(void)

void FUN_14ddb24dc(longlong param_1,ushort param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  ushort *in_R10;
  ulonglong in_R11;
  undefined8 unaff_R14;
  undefined8 uStackX_18;
  
  *in_R10 = (~param_2 | *in_R10) - 0x100;
  plVar2 = param_5 + -1;
  *plVar2 = 0;
  *plVar2 = *plVar2 + param_1;
  param_5[-2] = *plVar2;
  *plVar2 = 0;
  *plVar2 = (longlong)(&LAB_1621543df + *plVar2);
  param_5[-3] = thunk_FUN_14ddb2558;
  uVar3 = FUN_1621543ad(FUN_1621543ad,uStackX_18);
  *(ulonglong *)(param_3 + 8) = ~in_R11;
  param_5[3] = param_5[3] ^ uVar3;
  param_5[1] = param_5[1];
  *param_5 = unaff_RBP;
  param_5[-1] = unaff_R14;
  *(undefined2 *)(param_5 + -2) = *(undefined2 *)(param_5 + 2);
  plVar2 = param_5 + -3;
  *(undefined4 *)plVar2 = 0xbe113e3;
  *(undefined4 *)((longlong)param_5 + -0x14) = 0;
  puVar1 = (undefined8 *)((longlong)plVar2 + *plVar2 + -0xbe113d3);
  *puVar1 = *puVar1;
  FUN_1571cdd12();
  return;
}



// FUNCTION 14ddb2552 thunk_FUN_14ddb2558 body=5 status=ok
// SIG undefined thunk_FUN_14ddb2558(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14ddb2558(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R11;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(param_3 + 8) = ~in_R11;
  FUN_1571cdd12(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14ddb2558 FUN_14ddb2558 body=152 status=ok
// SIG undefined FUN_14ddb2558(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb2558(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R11;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(param_3 + 8) = ~in_R11;
  FUN_1571cdd12(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14ddb25f0 FUN_14ddb25f0 body=483 status=ok
// SIG undefined FUN_14ddb25f0(void)

void FUN_14ddb25f0(undefined1 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  lVar2 = *(longlong *)(local_res20 + -8);
  uVar3 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined1 **)(local_res20 + -0x20) = &LAB_1612abd9b;
  *(undefined8 *)(local_res20 + -0x28) = in_RAX;
  *(undefined4 *)(local_res20 + -0x28) = 0x7906f521;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  uVar7 = *(ulonglong *)(local_res20 + -0x28) ^ 0x7906f529;
  *(undefined8 *)(local_res20 + -0x18 + uVar7) = 0;
  plVar1 = (longlong *)(local_res20 + -0x18 + uVar7);
  *plVar1 = *plVar1 - lVar2;
  plVar1 = (longlong *)(local_res20 + -0x18 + uVar7);
  *plVar1 = -*plVar1;
  uVar7 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -8) = *(undefined8 *)(local_res20 + -0x20);
  uVar6 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(code **)(local_res20 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(local_res20 + -0x20) = 0x14ddb2683;
  uVar5 = FUN_1612abd72(param_1,uVar6,param_3,uVar3);
  uVar7 = (~(uVar7 & uVar5) + uVar5) - ~uVar7;
  uVar8 = uVar7 & 0xffffffffffffff00;
  *(undefined8 *)(local_res20 + -0x18) = 0x14ddb2721;
  uVar6 = FUN_162726955(0,uVar8,(uVar5 - uVar7) + param_3);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  plVar1 = (longlong *)(local_res20 + -0x18);
  *(undefined4 *)plVar1 = 0;
  *(undefined4 *)(local_res20 + -0x14) = 0xa9dd7f90;
  *(int *)(local_res20 + -0x14) = *(int *)(local_res20 + -0x14) + 0x56228070;
  lVar4 = *plVar1;
  lVar2 = *(longlong *)(unaff_R13 + -0x68);
  *plVar1 = unaff_R12;
  *(longlong *)(local_res20 + -0x20) = lVar4 + lVar2;
  *(undefined8 *)(local_res20 + -0x28) = uVar6;
  *(undefined4 *)(local_res20 + -0x28) = 0x28db06ea;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(undefined8 *)(local_res20 + -0x28) = uVar6;
  *(ulonglong *)(local_res20 + -0x30) = uVar8;
  *(ulonglong *)(local_res20 + -0x38) = uVar8;
  *(ulonglong *)(local_res20 + -0x40) = uVar8;
  *(code **)(local_res20 + -0x30) = FUN_14ddb27d5;
  *(undefined8 *)(local_res20 + -0x38) = 0x15b268029;
  return;
}



// FUNCTION 14ddb27d5 FUN_14ddb27d5 body=271 status=ok
// SIG undefined FUN_14ddb27d5(void)

void FUN_14ddb27d5(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_15681f698();
  FUN_166b5eed6(param_1,param_2,*(ulonglong *)(unaff_R12 + -0xa0) | uVar1,FUN_166b5eed6);
  return;
}



// FUNCTION 14ddb294f FUN_14ddb294f body=285 status=ok
// SIG undefined FUN_14ddb294f(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb29e1) */
/* WARNING: Removing unreachable block (ram,0x00014ddb29e7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb294f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong in_R11;
  undefined4 local_res10 [2];
  
  *(undefined4 *)((longlong)local_res10 + in_R11) = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_14db1d147(1,param_2,FUN_14db1d147,param_4);
  return;
}



// FUNCTION 14ddb2cd0 FUN_14ddb2cd0 body=117 status=ok
// SIG undefined FUN_14ddb2cd0(void)

void FUN_14ddb2cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1654f4977(param_1,param_2);
  return;
}



// FUNCTION 14ddb2def FUN_14ddb2def body=24 status=ok
// SIG undefined FUN_14ddb2def(void)

void FUN_14ddb2def(void)

{
  return;
}



// FUNCTION 14ddb2fe6 FUN_14ddb2fe6 body=404 status=ok
// SIG undefined FUN_14ddb2fe6(void)

/* WARNING: Removing unreachable block (ram,0x000162b85905) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3184) */
/* WARNING: Removing unreachable block (ram,0x00014ddb30f3) */
/* WARNING: Removing unreachable block (ram,0x00014ddb317e) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3179) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb2fe6(void)

{
  ushort *in_R10;
  
  *in_R10 = (-0x101 - (*in_R10 | 0xfeff)) + *in_R10;
  FUN_14dabcaf8();
  return;
}



// FUNCTION 14ddb30f3 FUN_14ddb30f3 body=149 status=ok
// SIG undefined FUN_14ddb30f3(void)

/* WARNING: Removing unreachable block (ram,0x000162b85905) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3184) */

void FUN_14ddb30f3(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)) +
      *(ulonglong *)(unaff_R13 + -0x28) == 0) {
    FUN_156f94249();
    FUN_156a4b15b();
    FUN_165a7a42d();
    return;
  }
  FUN_162b858d0();
  return;
}



// FUNCTION 14ddb318a FUN_14ddb318a body=299 status=ok
// SIG undefined FUN_14ddb318a(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb3227) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14ddb318a(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14ddb334e FUN_14ddb334e body=158 status=ok
// SIG undefined FUN_14ddb334e(void)

/* WARNING: Instruction at (ram,0x00016136d5cf) overlaps instruction at (ram,0x00016136d5ce)
    */
/* WARNING: Removing unreachable block (ram,0x000165495849) */
/* WARNING: Removing unreachable block (ram,0x000162722ac8) */
/* WARNING: Removing unreachable block (ram,0x0001654958c7) */
/* WARNING: Removing unreachable block (ram,0x0001654958cd) */
/* WARNING: Removing unreachable block (ram,0x0001654958d2) */
/* WARNING: Removing unreachable block (ram,0x000165bb6862) */
/* WARNING: Removing unreachable block (ram,0x000165bb68da) */
/* WARNING: Removing unreachable block (ram,0x000165bb68df) */
/* WARNING: Removing unreachable block (ram,0x000165bb68e5) */
/* WARNING: Removing unreachable block (ram,0x000165bb6903) */
/* WARNING: Removing unreachable block (ram,0x000165bb6906) */
/* WARNING: Removing unreachable block (ram,0x000165cdbd2a) */
/* WARNING: Removing unreachable block (ram,0x000165cdbdc2) */
/* WARNING: Removing unreachable block (ram,0x0001654957d7) */
/* WARNING: Removing unreachable block (ram,0x00016549595d) */
/* WARNING: Removing unreachable block (ram,0x000165495951) */
/* WARNING: Removing unreachable block (ram,0x000165495962) */
/* WARNING: Removing unreachable block (ram,0x000165ef55a9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0ba9) */
/* WARNING: Removing unreachable block (ram,0x000165ef5513) */
/* WARNING: Removing unreachable block (ram,0x000165ef556a) */
/* WARNING: Removing unreachable block (ram,0x000165ef556e) */
/* WARNING: Removing unreachable block (ram,0x00016136d582) */
/* WARNING: Removing unreachable block (ram,0x00016136d5cf) */
/* WARNING: Removing unreachable block (ram,0x00016136d5c8) */
/* WARNING: Removing unreachable block (ram,0x00016136d5ce) */
/* WARNING: Removing unreachable block (ram,0x00016136d618) */
/* WARNING: Removing unreachable block (ram,0x00016136d620) */
/* WARNING: Removing unreachable block (ram,0x00016136d634) */
/* WARNING: Removing unreachable block (ram,0x00016136d63b) */
/* WARNING: Removing unreachable block (ram,0x00016136d67f) */
/* WARNING: Removing unreachable block (ram,0x00016136d682) */
/* WARNING: Removing unreachable block (ram,0x00016136d6da) */
/* WARNING: Removing unreachable block (ram,0x00016136d6e0) */
/* WARNING: Removing unreachable block (ram,0x00016136d79e) */
/* WARNING: Removing unreachable block (ram,0x00016235a80d) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3502) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3508) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3645) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3651) */
/* WARNING: Removing unreachable block (ram,0x000165aba963) */
/* WARNING: Removing unreachable block (ram,0x000165aba9c5) */
/* WARNING: Removing unreachable block (ram,0x000165aba9ca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14ddb334e(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *unaff_R15;
  
  FUN_1563872b5();
  uVar2 = ~(unaff_RDI & 0xffffffffffff0000) | param_1;
  FUN_161122598();
  uVar2 = *(ulonglong *)((~(unaff_RBP | unaff_RDI & 0xffffffffffff0000) | ~uVar2) - 0x70);
  uVar3 = ~(uVar2 & param_1) & (uVar2 | param_1);
  FUN_162b35282();
  uVar2 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = (~(uVar2 & uVar3) + uVar3) - *unaff_R15;
  uVar1 = FUN_165ef5513();
  return uVar1;
}



// FUNCTION 14ddb33ed FUN_14ddb33ed body=605 status=ok
// SIG undefined FUN_14ddb33ed(void)

/* WARNING: Instruction at (ram,0x00016136d5cf) overlaps instruction at (ram,0x00016136d5ce)
    */
/* WARNING: Removing unreachable block (ram,0x000165495849) */
/* WARNING: Removing unreachable block (ram,0x000162722ac8) */
/* WARNING: Removing unreachable block (ram,0x0001654958c7) */
/* WARNING: Removing unreachable block (ram,0x0001654958cd) */
/* WARNING: Removing unreachable block (ram,0x0001654958d2) */
/* WARNING: Removing unreachable block (ram,0x000165bb6862) */
/* WARNING: Removing unreachable block (ram,0x000165bb68da) */
/* WARNING: Removing unreachable block (ram,0x000165bb68df) */
/* WARNING: Removing unreachable block (ram,0x000165bb68e5) */
/* WARNING: Removing unreachable block (ram,0x000165bb6903) */
/* WARNING: Removing unreachable block (ram,0x000165bb6906) */
/* WARNING: Removing unreachable block (ram,0x000165cdbd2a) */
/* WARNING: Removing unreachable block (ram,0x000165cdbdc2) */
/* WARNING: Removing unreachable block (ram,0x0001654957d7) */
/* WARNING: Removing unreachable block (ram,0x00016549595d) */
/* WARNING: Removing unreachable block (ram,0x000165495951) */
/* WARNING: Removing unreachable block (ram,0x000165495962) */
/* WARNING: Removing unreachable block (ram,0x000165ef55a9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0ba9) */
/* WARNING: Removing unreachable block (ram,0x000165ef5513) */
/* WARNING: Removing unreachable block (ram,0x000165ef556a) */
/* WARNING: Removing unreachable block (ram,0x000165ef556e) */
/* WARNING: Removing unreachable block (ram,0x00016136d582) */
/* WARNING: Removing unreachable block (ram,0x00016136d5cf) */
/* WARNING: Removing unreachable block (ram,0x00016136d5c8) */
/* WARNING: Removing unreachable block (ram,0x00016136d5ce) */
/* WARNING: Removing unreachable block (ram,0x00016136d618) */
/* WARNING: Removing unreachable block (ram,0x00016136d620) */
/* WARNING: Removing unreachable block (ram,0x00016136d634) */
/* WARNING: Removing unreachable block (ram,0x00016136d63b) */
/* WARNING: Removing unreachable block (ram,0x00016136d67f) */
/* WARNING: Removing unreachable block (ram,0x00016136d682) */
/* WARNING: Removing unreachable block (ram,0x00016136d6da) */
/* WARNING: Removing unreachable block (ram,0x00016136d6e0) */
/* WARNING: Removing unreachable block (ram,0x00016136d79e) */
/* WARNING: Removing unreachable block (ram,0x00016235a80d) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3502) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3508) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3645) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3651) */
/* WARNING: Removing unreachable block (ram,0x000165aba963) */
/* WARNING: Removing unreachable block (ram,0x000165aba9c5) */
/* WARNING: Removing unreachable block (ram,0x000165aba9ca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14ddb33ed(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong *unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = ~unaff_RDI | param_1;
  FUN_161122598(param_1,param_2,unaff_retaddr);
  uVar2 = *(ulonglong *)((~(in_R10 | unaff_RDI) | ~uVar2) - 0x70);
  uVar3 = ~(uVar2 & param_1) & (uVar2 | param_1);
  FUN_162b35282();
  uVar2 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = (~(uVar2 & uVar3) + uVar3) - *unaff_R15;
  uVar1 = FUN_165ef5513();
  return uVar1;
}



// FUNCTION 14ddb3651 FUN_14ddb3651 body=196 status=ok
// SIG undefined FUN_14ddb3651(void)

void FUN_14ddb3651(void)

{
  ulonglong *unaff_RSI;
  ulonglong unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  *unaff_RSI = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 5 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *unaff_RSI = unaff_R13;
  unaff_RSI[-1] = unaff_R13;
  unaff_RSI[-2] = unaff_R13;
  *unaff_RSI = (ulonglong)FUN_14ddb3716;
  unaff_RSI[-1] = (ulonglong)&LAB_161aee6f2;
  return;
}



// FUNCTION 14ddb3716 FUN_14ddb3716 body=811 status=ok
// SIG undefined FUN_14ddb3716(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb3857) */
/* WARNING: Removing unreachable block (ram,0x00014ddb37ec) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3840) */
/* WARNING: Removing unreachable block (ram,0x000156ff2556) */
/* WARNING: Removing unreachable block (ram,0x00014ddb37b8) */
/* WARNING: Removing unreachable block (ram,0x0001667c2f87) */
/* WARNING: Removing unreachable block (ram,0x0001667c2f8a) */

undefined8 FUN_14ddb3716(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  uVar4 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x28) = param_2;
  *(undefined8 *)(uVar1 - 0x30) = 0x3d807fb1;
  *(longlong *)(uVar1 - 0x30) = *(longlong *)(uVar1 - 0x30) + -0x3d807fa9;
  uVar3 = *(undefined8 *)(uVar1 - 0x28);
  *(undefined8 *)((uVar1 - 0x18) + *(longlong *)(uVar1 - 0x30)) = uVar4;
  *(undefined8 *)(uVar1 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 8) = 0x6ea096a4;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x6ea096a4;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x14df1a9cf;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
  uVar4 = FUN_14df1a9af((uVar2 & param_1 ^ 0xffffffffffffffff) & (uVar2 | param_1),uVar3,param_3,
                        param_4);
  return uVar4;
}



// FUNCTION 14ddb3d8f FUN_14ddb3d8f body=179 status=ok
// SIG undefined FUN_14ddb3d8f(void)

void FUN_14ddb3d8f(void)

{
  return;
}



// FUNCTION 14ddb3e42 FUN_14ddb3e42 body=682 status=ok
// SIG undefined FUN_14ddb3e42(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb3f78) */
/* WARNING: Removing unreachable block (ram,0x0001613aa651) */
/* WARNING: Removing unreachable block (ram,0x0001613aa489) */
/* WARNING: Removing unreachable block (ram,0x000165338cfb) */
/* WARNING: Removing unreachable block (ram,0x0001613aa646) */
/* WARNING: Removing unreachable block (ram,0x0001613aa64c) */
/* WARNING: Removing unreachable block (ram,0x00014ddb3f64) */

undefined8 FUN_14ddb3e42(void)

{
  undefined8 uVar1;
  longlong in_R11;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_1665c5278();
  if (*(longlong *)(unaff_R13 + in_R11 + 0xb9ffaa7) == unaff_R15) {
    uVar1 = FUN_14d8a7768();
    return uVar1;
  }
  return unaff_retaddr;
}



// FUNCTION 14ddb41c7 FUN_14ddb41c7 body=152 status=ok
// SIG undefined FUN_14ddb41c7(void)

void FUN_14ddb41c7(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong in_R11;
  undefined8 unaff_retaddr;
  longlong alStackX_8 [4];
  
  lVar1 = alStackX_8[0] -
          (-1 - (~((-0x20fd782f - (in_R11 | 0xffffffffdf0287d1)) + in_R11) &
                (unaff_RBX | 0xffffffffdf0287d1)));
  *(undefined8 *)((longlong)alStackX_8 + lVar1) = unaff_retaddr;
  uVar2 = *(undefined8 *)((longlong)alStackX_8 + lVar1);
  *(undefined8 *)((longlong)alStackX_8 + lVar1) = in_RAX;
  thunk_FUN_1649dca2d(param_1,param_2,uVar2);
  return;
}



// FUNCTION 14ddb437f FUN_14ddb437f body=121 status=ok
// SIG undefined FUN_14ddb437f(void)

void FUN_14ddb437f(void)

{
  (*(code *)0x1620fd497)();
  return;
}



// FUNCTION 14ddb4548 FUN_14ddb4548 body=143 status=ok
// SIG undefined FUN_14ddb4548(void)

void FUN_14ddb4548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165448b82(param_1,param_2,param_3);
  return;
}



// FUNCTION 14ddb4680 FUN_14ddb4680 body=310 status=ok
// SIG undefined FUN_14ddb4680(void)

void FUN_14ddb4680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d96e813(param_1,param_2,param_3,param_4);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_166cb16f7(0x4308e5e3,*(undefined8 *)(unaff_R13 + -0x38),
                ~(((unaff_R15 ^ 0xffffffffffffffff) + uVar1) -
                  ((unaff_R15 ^ 0xffffffffffffffff) & uVar1) &
                 (~uVar1 + unaff_R15) - (~uVar1 & unaff_R15)));
  return;
}



// FUNCTION 14ddb47b6 FUN_14ddb47b6 body=168 status=ok
// SIG undefined FUN_14ddb47b6(void)

void FUN_14ddb47b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lStackX_8;
  ulonglong uVar3;
  
  *(undefined8 *)(&stack0xfffffffff14d38db + lStackX_8) = param_3;
  *(undefined8 *)(&stack0xfffffffff14d38d3 + lStackX_8) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff14d38d3 + lStackX_8) = 0x2770684d;
  *(undefined4 *)(&stack0xfffffffff14d38d7 + lStackX_8) = 0;
  lVar5 = *(longlong *)(&stack0xfffffffff14d38d3 + lStackX_8);
  *(undefined8 *)(&stack0xfffffffff14d38d3 + lStackX_8) = in_RAX;
  lVar5 = ((lVar5 + 0x409cb951U ^ 0x680d2634) - 1) -
          ~*(ulonglong *)(&stack0xfffffffff14d38d3 + lStackX_8);
  uVar4 = *(undefined8 *)(&stack0xfffffffff14d38db + lStackX_8);
  puVar1 = (ulonglong *)(&stack0xfffffffff14d38e3 + lStackX_8);
  uVar6 = -lVar5;
  *puVar1 = 0;
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + lVar5;
  *(ulonglong *)(&stack0xfffffffff14d38db + lStackX_8) = *puVar1;
  *(undefined4 *)(&stack0xfffffffff14d38db + lStackX_8) = 0xda540d8e;
  *(undefined4 *)(&stack0xfffffffff14d38df + lStackX_8) = 0xffffffff;
  *(ulonglong *)(&stack0xfffffffff14d38d3 + lStackX_8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar3,uVar6) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)*puVar1 < 0) * 0x80 | (ulonglong)(*puVar1 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar2 < uVar6) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  (*(code *)0x15b65efd6)(param_1,param_2,uVar4);
  return;
}



// FUNCTION 14ddb48e4 FUN_14ddb48e4 body=146 status=ok
// SIG undefined FUN_14ddb48e4(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4960) */

void FUN_14ddb48e4(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar1 = in_stack_00000008 ^ *(ulonglong *)(unaff_RDI + -0x68);
  FUN_16291ba4f(param_1,~(uVar1 & param_1) & (uVar1 | param_1));
  return;
}



// FUNCTION 14ddb4a08 FUN_14ddb4a08 body=138 status=ok
// SIG undefined FUN_14ddb4a08(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4b0a) */

void FUN_14ddb4a08(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong local_res10;
  undefined1 auStackX_18 [16];
  
  uVar1 = ~((~(~param_1 | unaff_RBP) | ~param_1 & ~unaff_RBP | param_1) + (~param_1 | unaff_RBP) + 1
           );
  FUN_165f0b9d8(uVar1,*(undefined8 *)(unaff_RSI + -0x58),param_3,param_4);
  local_res10 = (ulonglong)(uint)local_res10;
  puVar2 = (ulonglong *)auStackX_18;
  if (local_res10 != 0x75db30a5) {
    if (uVar1 != 1) {
      return;
    }
    local_res10 = 0x1e37a82c;
    puVar2 = &local_res10;
  }
  puVar2[-1] = *(ulonglong *)(unaff_RDI + -0x80);
  (*(code *)0x14d9347fe)();
  return;
}



// FUNCTION 14ddb4a93 FUN_14ddb4a93 body=170 status=ok
// SIG undefined FUN_14ddb4a93(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4b0a) */

void FUN_14ddb4a93(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong unaff_RDI;
  ulonglong local_res8;
  undefined1 local_res10 [24];
  
  local_res8 = (ulonglong)(uint)local_res8;
  puVar3 = (ulonglong *)local_res10;
  if (local_res8 != 0x75db30a5) {
    if (param_1 != 1) {
      return;
    }
    puVar3 = &local_res8;
    local_res8 = 0x1e37a82c;
    param_1 = 0;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70);
  *(undefined8 *)((longlong)puVar3 + -8) = *(undefined8 *)(unaff_RDI + -0x80);
  (*(code *)0x14d9347fe)(param_1,0x14d9347fe,uVar2 ^ param_1,uVar1 ^ param_1);
  return;
}



// FUNCTION 14ddb4b3e FUN_14ddb4b3e body=15 status=ok
// SIG undefined FUN_14ddb4b3e(void)

void FUN_14ddb4b3e(void)

{
  return;
}



// FUNCTION 14ddb4bd9 FUN_14ddb4bd9 body=186 status=ok
// SIG undefined FUN_14ddb4bd9(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4c6e) */

undefined8 FUN_14ddb4bd9(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  
  lVar2 = (~unaff_RSI | param_2) + unaff_RSI + 1;
  if (-1 < *(longlong *)(unaff_R13 + -0x68)) {
    uVar1 = FUN_161b2c209(param_1,lVar2);
    return uVar1;
  }
  uVar1 = FUN_161b2c209(param_1,lVar2);
  return uVar1;
}



// FUNCTION 14ddb4e34 FUN_14ddb4e34 body=302 status=ok
// SIG undefined FUN_14ddb4e34(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4ecd) */
/* WARNING: Removing unreachable block (ram,0x00014ddb4ed8) */
/* WARNING: Removing unreachable block (ram,0x00014ddb4ed3) */
/* WARNING: Removing unreachable block (ram,0x00015afd50ba) */
/* WARNING: Removing unreachable block (ram,0x00015afd5039) */
/* WARNING: Removing unreachable block (ram,0x00015afd50aa) */
/* WARNING: Removing unreachable block (ram,0x00015afd50af) */

undefined8 FUN_14ddb4e34(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = 0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x88);
  if (-1 < (longlong)
           ((~param_1 | *(ulonglong *)(unaff_RDI + -0x88)) & (uVar2 + param_1) - (uVar2 & param_1)))
  {
    uVar1 = FUN_164946ba4();
    return uVar1;
  }
  uVar1 = FUN_164946ba4();
  return uVar1;
}



// FUNCTION 14ddb4f65 FUN_14ddb4f65 body=463 status=ok
// SIG undefined FUN_14ddb4f65(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb4fe6) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5090) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5095) */
/* WARNING: Removing unreachable block (ram,0x00014ddb509b) */
/* WARNING: Removing unreachable block (ram,0x000166331beb) */
/* WARNING: Removing unreachable block (ram,0x000166331ce7) */
/* WARNING: Removing unreachable block (ram,0x000166331cea) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5122) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5128) */
/* WARNING: Removing unreachable block (ram,0x00014ddb512d) */
/* WARNING: Removing unreachable block (ram,0x00014d9b79a2) */

void FUN_14ddb4f65(void)

{
  return;
}



// FUNCTION 14ddb512d FUN_14ddb512d body=184 status=ok
// SIG undefined FUN_14ddb512d(void)

void FUN_14ddb512d(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RDI;
  longlong in_R11;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  ulonglong auStackX_10 [3];
  undefined8 uStack_8;
  
  lVar1 = in_R11 - (0xffffffffffffffff - (unaff_RDI & 0xffffffffb6677085) &
                    (unaff_RDI - 0x49988f7b) - (unaff_RDI & 0xffffffffb6677085) ^ 0xffffffffffffffff
                   );
  uVar9 = *(ulonglong *)((longlong)auStackX_10 + lVar1);
  bVar6 = (uVar9 & 0x4000) != 0;
  bVar5 = (uVar9 & 0x400) != 0;
  bVar4 = (uVar9 & 0x200) != 0;
  bVar3 = (uVar9 & 0x100) != 0;
  bVar2 = (uVar9 & 0x10) != 0;
  bVar8 = (uVar9 & 0x200000) != 0;
  bVar7 = (uVar9 & 0x40000) != 0;
  *(ulonglong *)((longlong)auStackX_10 + lVar1) =
       (ulonglong)bVar6 * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar5 * 0x400 | (ulonglong)bVar4 * 0x200 | (ulonglong)bVar3 * 0x100 |
       (ulonglong)((uVar9 & 0x80) != 0) * 0x80 | (ulonglong)((uVar9 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar2 * 0x10 | (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
       (ulonglong)bVar8 * 0x200000 | (ulonglong)bVar7 * 0x40000;
  *(undefined8 *)((longlong)&local_res8 + lVar1) = in_RAX;
  *(undefined4 *)((longlong)&local_res8 + lVar1) = 0x14948992;
  *(undefined4 *)((longlong)auStackX_10 + lVar1 + -4) = 0;
  uVar9 = (*(ulonglong *)((longlong)&local_res8 + lVar1) ^ 0x3d3baa7a) + 0x18848ad0 ^ 0x4233b2c0;
  *(ulonglong *)((longlong)&local_res8 + lVar1) =
       (ulonglong)bVar6 * 0x4000 | (ulonglong)bVar5 * 0x400 | (ulonglong)bVar4 * 0x200 |
       (ulonglong)bVar3 * 0x100 | (ulonglong)((longlong)uVar9 < 0) * 0x80 |
       (ulonglong)(uVar9 == 0) * 0x40 | (ulonglong)bVar2 * 0x10 |
       (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar8 * 0x200000 |
       (ulonglong)bVar7 * 0x40000;
  *(undefined8 *)((longlong)&local_res8 + lVar1) = unaff_RBX;
  *(undefined8 *)((longlong)auStackX_10 + lVar1 + -0x10) = unaff_RBX;
  *(undefined8 *)((longlong)&uStack_8 + lVar1) = unaff_RBX;
  *(undefined1 **)((longlong)&local_res8 + lVar1) = &LAB_14ddb51e9;
  *(undefined1 **)((longlong)auStackX_10 + lVar1 + -0x10) = &LAB_1664ddac7;
  return;
}



// FUNCTION 14ddb5291 FUN_14ddb5291 body=153 status=ok
// SIG undefined FUN_14ddb5291(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb5325) */
/* WARNING: Removing unreachable block (ram,0x00014ddb532b) */

void FUN_14ddb5291(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_161b35629(~(uVar1 & unaff_R15) & (uVar1 + unaff_R15) - (uVar1 & unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14ddb532b FUN_14ddb532b body=136 status=ok
// SIG undefined FUN_14ddb532b(void)

void FUN_14ddb532b(undefined8 param_1,undefined8 param_2)

{
  FUN_162d6e0df(param_1,param_2,FUN_162d6e0df);
  return;
}



// FUNCTION 14ddb53b3 FUN_14ddb53b3 body=151 status=ok
// SIG undefined FUN_14ddb53b3(void)

void FUN_14ddb53b3(void)

{
  return;
}



// FUNCTION 14ddb5966 FUN_14ddb5966 body=168 status=ok
// SIG undefined FUN_14ddb5966(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb5a09) */

void FUN_14ddb5966(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    FUN_1662eee07(param_1,0x14d7bf7b5,param_3,unaff_retaddr);
    return;
  }
  if (param_2 == 0x133) {
    return;
  }
  if (param_2 + -0x134 < 0) {
    FUN_162bc26e5();
    return;
  }
  if (param_2 != 0x134) {
    if (param_2 == 0x135) {
      FUN_1662eee07(param_1,&DAT_14d7ae6a2,param_3,unaff_retaddr);
      return;
    }
    if (param_2 == 0x136) {
      FUN_1662eee07(param_1,0x14d7c94c7,param_3,unaff_retaddr);
      return;
    }
    (*(code *)0x160f66387)();
    return;
  }
  FUN_1662eee07(param_1,&DAT_14d7c307f,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14ddb5a0f FUN_14ddb5a0f body=141 status=ok
// SIG undefined FUN_14ddb5a0f(void)

void FUN_14ddb5a0f(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  FUN_164b52d7f(param_1,~(param_2 & in_RAX) & (unaff_RBP + in_RAX) - (unaff_RBP & in_RAX));
  return;
}



// FUNCTION 14ddb5a9c FUN_14ddb5a9c body=88 status=ok
// SIG undefined FUN_14ddb5a9c(void)

void FUN_14ddb5a9c(void)

{
  return;
}



// FUNCTION 14ddb5b42 FUN_14ddb5b42 body=46 status=ok
// SIG undefined FUN_14ddb5b42(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb5c57) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5c26) */
/* WARNING: Removing unreachable block (ram,0x000156e7ba85) */

void FUN_14ddb5b42(void)

{
  FUN_15735da5b();
  FUN_156e7ba85();
  return;
}



// FUNCTION 14ddb5d71 FUN_14ddb5d71 body=128 status=ok
// SIG undefined FUN_14ddb5d71(void)

void FUN_14ddb5d71(void)

{
  FUN_1613b3005();
  FUN_165b2214c();
  return;
}



// FUNCTION 14ddb5df2 FUN_14ddb5df2 body=311 status=ok
// SIG undefined FUN_14ddb5df2(void)

void FUN_14ddb5df2(void)

{
  FUN_165b2214c();
  return;
}



// FUNCTION 14ddb5f2e FUN_14ddb5f2e body=178 status=ok
// SIG undefined FUN_14ddb5f2e(void)

void FUN_14ddb5f2e(undefined8 param_1)

{
  undefined8 in_RAX;
  code *pcVar1;
  undefined8 unaff_RBX;
  ushort uVar2;
  undefined8 in_R11;
  ulonglong uVar3;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar2 = (local_res8 | 0x100) - 0x100;
  _fxsave(local_res10);
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0xaf88b6c;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  pcVar1 = FUN_162a1deec;
  *(undefined8 *)(local_res10 + -0x30) = 0x14ddb5fc5;
  FUN_162a1deec();
  *(code **)(local_res10 + -0x30) = pcVar1;
  *(code **)(local_res10 + -0x38) = pcVar1;
  *(code **)(local_res10 + -0x30) = FUN_165e93f27;
  return;
}



// FUNCTION 14ddb6153 FUN_14ddb6153 body=174 status=ok
// SIG undefined FUN_14ddb6153(void)

void FUN_14ddb6153(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong local_res10;
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  FUN_164c163ba(local_res10 ^ param_1,param_2,param_3,local_res18,in_stack_00000020 ^ param_1);
  return;
}



// FUNCTION 14ddb64ca FUN_14ddb64ca body=143 status=ok
// SIG undefined FUN_14ddb64ca(void)

void FUN_14ddb64ca(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  FUN_166876819(~(in_RAX & unaff_RBX) & (in_RAX | unaff_RBX));
  return;
}



// FUNCTION 14ddb66b6 FUN_14ddb66b6 body=276 status=ok
// SIG undefined FUN_14ddb66b6(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb6742) */
/* WARNING: Removing unreachable block (ram,0x00014ddb674e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb66b6(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1666838a5(FUN_1666838a5,
                *(ulonglong *)(unaff_R12 + -0x60) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x60) & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14ddb674e FUN_14ddb674e body=73 status=ok
// SIG undefined FUN_14ddb674e(void)

void FUN_14ddb674e(void)

{
  return;
}



// FUNCTION 14ddb67e8 FUN_14ddb67e8 body=165 status=ok
// SIG undefined FUN_14ddb67e8(void)

void FUN_14ddb67e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_160be51b0(param_1,param_2,*(undefined8 *)(unaff_R13 + -0x98),param_4);
  return;
}



// FUNCTION 14ddb6910 FUN_14ddb6910 body=154 status=ok
// SIG undefined FUN_14ddb6910(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb69a0) */
/* WARNING: Removing unreachable block (ram,0x00014ddb69ab) */
/* WARNING: Removing unreachable block (ram,0x00014ddb69a6) */
/* WARNING: Removing unreachable block (ram,0x00016516a0cc) */

void FUN_14ddb6910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar4;
  undefined8 unaff_R15;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x28) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  uVar2 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined4 *)(local_res10 + -0x28) = 0xf1cb9354;
  *(undefined8 *)(local_res10 + -0x30) = in_RAX;
  *(undefined4 *)(local_res10 + -0x20) = *(undefined4 *)(local_res10 + -0x28);
  uVar3 = *(undefined8 *)(local_res10 + -0x30);
  *(int *)(local_res10 + -0x20) = *(int *)(local_res10 + -0x20) + 0x334975c7;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar4 = *(ulonglong *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = uVar2;
  uVar4 = ~(~(uVar4 & 0xffffffffdaeaf6ec) & (uVar4 | 0xffffffffdaeaf6ec));
  *(undefined8 *)(local_res10 + -0x10 + uVar4) = 0x6c348b00;
  puVar1 = (ulonglong *)(local_res10 + -0x10 + uVar4);
  *puVar1 = *puVar1 ^ 0x6c348b00;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x14dcee39a;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = uVar3;
  return;
}



// FUNCTION 14ddb69ab FUN_14ddb69ab body=11 status=ok
// SIG undefined FUN_14ddb69ab(void)

void FUN_14ddb69ab(void)

{
  FUN_14d7c2195();
  return;
}



// FUNCTION 14ddb6b9c FUN_14ddb6b9c body=582 status=ok
// SIG undefined FUN_14ddb6b9c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014ddb6c29) */
/* WARNING: Removing unreachable block (ram,0x00014ddb6c2f) */
/* WARNING: Removing unreachable block (ram,0x00014ddb6cc6) */
/* WARNING: Removing unreachable block (ram,0x000165027542) */
/* WARNING: Removing unreachable block (ram,0x00015b159585) */

void FUN_14ddb6b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1624cb35e(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14ddb6d4b FUN_14ddb6d4b body=30 status=ok
// SIG undefined FUN_14ddb6d4b(void)

void FUN_14ddb6d4b(void)

{
  undefined8 local_res10;
  
  FUN_14d7c3da7(local_res10);
  return;
}



// FUNCTION 14ddb6e0b thunk_FUN_14ddb6e11 body=5 status=ok
// SIG undefined thunk_FUN_14ddb6e11(void)

void thunk_FUN_14ddb6e11(void)

{
  return;
}



// FUNCTION 14ddb6e11 FUN_14ddb6e11 body=152 status=ok
// SIG undefined FUN_14ddb6e11(void)

void FUN_14ddb6e11(void)

{
  return;
}



// FUNCTION 14ddb6f50 FUN_14ddb6f50 body=164 status=ok
// SIG undefined FUN_14ddb6f50(void)

void FUN_14ddb6f50(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong unaff_R14;
  undefined8 uStackX_8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & in_RAX;
  *(ulonglong *)(param_1 + 0x10) = (lVar1 + in_RAX) - *(longlong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = ~(unaff_R14 & *(ulonglong *)(param_1 + 0x10));
  FUN_156f06fbf(uStackX_8);
  return;
}



// FUNCTION 14ddb7383 FUN_14ddb7383 body=134 status=ok
// SIG undefined FUN_14ddb7383(void)

void FUN_14ddb7383(char param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong unaff_R14;
  bool in_CF;
  undefined8 unaff_retaddr;
  
  if (in_CF) {
    param_4 = param_4 + '\x01';
  }
  FUN_1626cd907(unaff_retaddr,param_2,param_3,
                unaff_R14 << (~(~(param_1 + param_4 & 0x89U) & (param_1 + param_4 | 0x89U)) & 0x3f))
  ;
  return;
}



// FUNCTION 14ddb74b1 FUN_14ddb74b1 body=8 status=ok
// SIG undefined FUN_14ddb74b1(void)

void FUN_14ddb74b1(void)

{
  return;
}



// FUNCTION 14ddb76a8 FUN_14ddb76a8 body=464 status=ok
// SIG undefined FUN_14ddb76a8(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb77e8) */
/* WARNING: Removing unreachable block (ram,0x00014ddb77ee) */
/* WARNING: Removing unreachable block (ram,0x000165e8eede) */
/* WARNING: Removing unreachable block (ram,0x00014ddb773f) */

undefined8
FUN_14ddb76a8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  *unaff_R13 = ~(param_2 & *unaff_R13);
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = in_stack_00000010;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined8 *)(param_5 - 0x20) = in_RAX;
  *(undefined1 **)(param_5 - 0x18) = &LAB_162cefad7;
  return *(undefined8 *)(param_5 - 0x20);
}



// FUNCTION 14ddb79b0 FUN_14ddb79b0 body=145 status=ok
// SIG undefined FUN_14ddb79b0(void)

void FUN_14ddb79b0(undefined1 param_1)

{
  (*(code *)0x162e428fb)(param_1,0x162e428fb);
  return;
}



// FUNCTION 14ddb7b85 FUN_14ddb7b85 body=142 status=ok
// SIG undefined FUN_14ddb7b85(void)

void FUN_14ddb7b85(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R12;
  
  (*(code *)0x165df6e95)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,0x165df6e95,
             ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),in_R9 ^ in_RAX);
  return;
}



// FUNCTION 14ddb7c13 FUN_14ddb7c13 body=165 status=ok
// SIG undefined FUN_14ddb7c13(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014ddb7d62 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb7c13(ulonglong param_1,ulonglong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 *unaff_R12;
  undefined8 uStackX_20;
  
  param_2 = param_2 & 0xffffffffffff0000;
  if ((in_RAX + unaff_RSI * -2 & 0x8000U) != 0) {
    FUN_156d6f2ea(param_1,FUN_156d6f2ea,
                  ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x70)) &
                   (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
                  ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                  (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
    return;
  }
  lVar1 = FUN_156ee4ce0();
  if (lVar1 + -0x14ddb7c92 + param_2 == 0) {
    *unaff_R12 = uStackX_20;
    FUN_162e911a6();
    return;
  }
  FUN_15b341961(param_1);
  return;
}



// FUNCTION 14ddb7cb7 FUN_14ddb7cb7 body=127 status=ok
// SIG undefined FUN_14ddb7cb7(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000030 : 0x00014ddb7d6b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb7cb7(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  undefined8 *unaff_R12;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  if ((in_RAX - unaff_RBX) + param_2 != 0) {
    FUN_15b341961(param_1);
    return;
  }
  *unaff_R12 = local_res18;
  FUN_162e911a6(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14ddb7d36 FUN_14ddb7d36 body=182 status=ok
// SIG undefined FUN_14ddb7d36(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddb7d36(void)

{
  return;
}



// FUNCTION 14ddb7f00 FUN_14ddb7f00 body=140 status=ok
// SIG undefined FUN_14ddb7f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14ddb7f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165c7153c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddb8032 FUN_14ddb8032 body=429 status=ok
// SIG undefined FUN_14ddb8032(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb814c) */
/* WARNING: Removing unreachable block (ram,0x00014ddb8152) */

undefined8 FUN_14ddb8032(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_stack_00000010;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FUN_156dd74fd(local_res18,param_2,in_stack_00000010);
  uVar1 = FUN_162e36a84(local_res20,
                        ~(0xffffffffffffffff - local_res20 | *(ulonglong *)(unaff_RDI + -0x88)) |
                        ~(~*(ulonglong *)(unaff_RDI + -0x88) | local_res20),
                        unaff_RBP - (in_stack_00000010 << ((char)local_res18 + 0x79U & 0x3f)));
  return uVar1;
}



// FUNCTION 14ddb8152 FUN_14ddb8152 body=180 status=ok
// SIG undefined FUN_14ddb8152(void)

undefined8 FUN_14ddb8152(void)

{
  return 0;
}



// FUNCTION 14ddb8325 FUN_14ddb8325 body=153 status=ok
// SIG undefined FUN_14ddb8325(void)

void FUN_14ddb8325(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char unaff_R13B;
  ulonglong in_stack_00000010;
  char local_res18 [16];
  
  uVar1 = ~((~in_stack_00000010 | 0x6a298a46) & (in_stack_00000010 | 0xffffffff95d675b9));
  local_res18[uVar1] = '\0';
  local_res18[uVar1] = local_res18[uVar1] + unaff_R13B;
  FUN_16572a52d(*(undefined8 *)
                 (**(longlong **)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20) +
                 0x4b),param_2,FUN_16572a52d);
  return;
}



// FUNCTION 14ddb8594 FUN_14ddb8594 body=143 status=ok
// SIG undefined FUN_14ddb8594(void)

/* WARNING: Instruction at (ram,0x00014ddb85b8) overlaps instruction at (ram,0x00014ddb85b5)
    */
/* WARNING: Removing unreachable block (ram,0x00014ddb8614) */
/* WARNING: Removing unreachable block (ram,0x00014ddb861a) */
/* WARNING: Removing unreachable block (ram,0x00014ddb861f) */

void FUN_14ddb8594(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_162cbdaa8(~((~(~unaff_R15 & uVar1) + uVar1) - (~unaff_R15 ^ 0xffffffffffffffff) &
                 (0xffffffffffffffff - uVar1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14ddb8625 FUN_14ddb8625 body=138 status=ok
// SIG undefined FUN_14ddb8625(void)

void FUN_14ddb8625(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBP;
  ulonglong in_R10;
  longlong unaff_R14;
  
  FUN_166405f8b(param_1,0xffffffffffffffb0,FUN_166405f8b,
                (unaff_RBP - ~(param_4 & in_R10)) + unaff_R14);
  return;
}



// FUNCTION 14ddb86b1 FUN_14ddb86b1 body=40 status=ok
// SIG undefined FUN_14ddb86b1(void)

void FUN_14ddb86b1(void)

{
  return;
}



// FUNCTION 14ddb87e6 FUN_14ddb87e6 body=180 status=ok
// SIG undefined FUN_14ddb87e6(void)

void FUN_14ddb87e6(void)

{
  undefined8 unaff_retaddr;
  
  FUN_14da3e53c(unaff_retaddr);
  return;
}



// FUNCTION 14ddb89c2 FUN_14ddb89c2 body=180 status=ok
// SIG undefined FUN_14ddb89c2(void)

void FUN_14ddb89c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  uint unaff_retaddr;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(&stack0x2f9efcb9 + CONCAT44(0xffffffff,unaff_retaddr ^ 0x6170a24b)) = param_1;
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = in_R11;
  *(undefined8 *)(local_res20 + -0x28) = in_RAX;
  *(undefined4 *)(local_res20 + -0x28) = 0x365667ad;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(undefined8 *)(local_res20 + -0x28) = param_4;
  *(undefined8 *)(local_res20 + -0x30) = param_4;
  *(code **)(local_res20 + -0x28) = FUN_14ddb8a76;
  FUN_161256b4c(local_res8,param_2,param_3,*(undefined8 *)(local_res20 + -0x30));
  return;
}



// FUNCTION 14ddb8a76 FUN_14ddb8a76 body=174 status=ok
// SIG undefined FUN_14ddb8a76(void)

void FUN_14ddb8a76(void)

{
  FUN_156564e8a();
  FUN_165c7153c();
  return;
}



// FUNCTION 14ddb8bb0 FUN_14ddb8bb0 body=159 status=ok
// SIG undefined FUN_14ddb8bb0(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb8c44) */
/* WARNING: Removing unreachable block (ram,0x00014ddb8c4a) */

void FUN_14ddb8bb0(void)

{
  FUN_1653e2eb1();
  return;
}



// FUNCTION 14ddb8d79 FUN_14ddb8d79 body=116 status=ok
// SIG undefined FUN_14ddb8d79(void)

void FUN_14ddb8d79(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1659e4760)
            (param_1,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
              (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14ddb8e92 FUN_14ddb8e92 body=315 status=ok
// SIG undefined FUN_14ddb8e92(void)

void FUN_14ddb8e92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  FUN_165e3579a(0x10,in_stack_00000008,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  FUN_15788d11d();
  return;
}



// FUNCTION 14ddb943c FUN_14ddb943c body=191 status=ok
// SIG undefined FUN_14ddb943c(void)

void FUN_14ddb943c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R14;
  longlong local_res8;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff6ecaf7d + local_res8);
  puVar1[-1] = unaff_RBX;
  *puVar1 = *(undefined8 *)(unaff_R12 + -0xa0);
  uVar2 = *puVar1;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0x322f3a4;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  uVar3 = puVar1[-1];
  puVar1[-1] = unaff_RDI;
  puVar1[-2] = unaff_R14;
  puVar1[-2] = uVar3;
  puVar1[-2] = puVar1[-2] + -0x322f39c;
  puVar1 = (undefined8 *)((longlong)puVar1 + puVar1[-2] + -8);
  puVar1[1] = param_2;
  *puVar1 = param_4;
  puVar1[-1] = uVar2;
  puVar1[-2] = uVar2;
  puVar1[-3] = uVar2;
  puVar1[-1] = &LAB_14ddb94fc;
  puVar1[-2] = &LAB_162f1a541;
  return;
}



// FUNCTION 14ddb96c3 FUN_14ddb96c3 body=65 status=ok
// SIG undefined FUN_14ddb96c3(void)

void FUN_14ddb96c3(void)

{
  undefined1 in_AL;
  undefined8 local_res18;
  
  LOCK();
  UNLOCK();
  DAT_14d7a7f6d = in_AL;
  *(undefined8 *)(local_res18 + -8) = 0x14c480;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14ddb9956 FUN_14ddb9956 body=131 status=ok
// SIG undefined FUN_14ddb9956(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb9982) */

void FUN_14ddb9956(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e1e50d4(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15,0xbf177a1c,
                ~(unaff_RDI + param_3) & unaff_RSI);
  return;
}



// FUNCTION 14ddb9aeb FUN_14ddb9aeb body=449 status=ok
// SIG undefined FUN_14ddb9aeb(void)

/* WARNING: Removing unreachable block (ram,0x00015b9011c2) */
/* WARNING: Removing unreachable block (ram,0x000157521338) */
/* WARNING: Removing unreachable block (ram,0x00014ddb9c09) */
/* WARNING: Removing unreachable block (ram,0x00014ddb9c0f) */
/* WARNING: Removing unreachable block (ram,0x00016522f8f7) */
/* WARNING: Removing unreachable block (ram,0x0001628691cf) */
/* WARNING: Removing unreachable block (ram,0x00014ddb9b80) */
/* WARNING: Removing unreachable block (ram,0x00015b1253c8) */

void FUN_14ddb9aeb(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R13;
  uint unaff_retaddr;
  
  if (0xffff27b9 < (unaff_retaddr ^ 0x6a330315)) {
    unaff_RDI = unaff_R13;
  }
  uVar4 = ~((~param_1 | unaff_RSI) & (~unaff_RSI | param_1));
  if (unaff_RDI - 0x5eacU < 0xffffffffffffa1dc) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
    uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
    if (&stack0xffffffffffffffe8 < &DAT_00000008) {
      lVar3 = (*(ulonglong *)(unaff_RDI + -0x90) - param_1) +
              (~param_1 | *(ulonglong *)(unaff_RDI + -0x90)) * -2 + -2;
      *(undefined8 *)(lVar3 + -8) = in_R10;
      *(longlong *)(lVar3 + -0x10) = unaff_R13;
      *(ulonglong *)(lVar3 + -0x10) = uVar4;
      *(ulonglong *)(lVar3 + -0x18) = uVar4;
      *(undefined8 *)(lVar3 + -0x20) = in_RAX;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + -0x20);
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(ulonglong *)(lVar3 + -0x10) = *(ulonglong *)(lVar3 + -0x10) ^ *(ulonglong *)(lVar3 + -8);
      *(ulonglong *)(lVar3 + -0x18) = uVar1 ^ param_1;
      *(ulonglong *)(lVar3 + -0x20) = ~((~param_1 | uVar2) & (uVar2 ^ 0xffffffffffffffff | param_1))
      ;
      *(undefined8 *)(lVar3 + -0x28) = unaff_RBX;
      *(undefined **)(lVar3 + -8) = &DAT_15649e7f4;
                    /* WARNING: Could not recover jumptable at 0x00015649e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + -0x18));
      return;
    }
    FUN_15b125338();
    return;
  }
  FUN_15b90113d();
  return;
}



// FUNCTION 14ddb9cb3 FUN_14ddb9cb3 body=319 status=ok
// SIG undefined FUN_14ddb9cb3(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb9d57) */

void FUN_14ddb9cb3(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0xa0) == 0) {
    return;
  }
  FUN_15786555e();
  return;
}



// FUNCTION 14ddb9df4 FUN_14ddb9df4 body=153 status=ok
// SIG undefined FUN_14ddb9df4(void)

void FUN_14ddb9df4(void)

{
  undefined8 in_R9;
  longlong lVar1;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  lVar1 = local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = in_R9;
  *(undefined **)(lVar1 + -0x10) = &DAT_165b362db;
  return;
}



// FUNCTION 14ddb9f36 FUN_14ddb9f36 body=153 status=ok
// SIG undefined FUN_14ddb9f36(void)

void FUN_14ddb9f36(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  (*(code *)&LAB_14db3f1a3)
            ((char)param_1,
             *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
             (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2,
             ~(uVar1 & param_1) & (uVar1 + param_1) - (uVar1 & param_1),
             *(ulonglong *)(unaff_RDI + in_RAX) + param_1 +
             (*(ulonglong *)(unaff_RDI + in_RAX) & param_1) * -2);
  return;
}



// FUNCTION 14ddb9fd0 FUN_14ddb9fd0 body=17 status=ok
// SIG undefined FUN_14ddb9fd0(void)

void FUN_14ddb9fd0(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14ddba069 FUN_14ddba069 body=472 status=ok
// SIG undefined FUN_14ddba069(void)

/* WARNING: Removing unreachable block (ram,0x00014ddba0fd) */
/* WARNING: Removing unreachable block (ram,0x00014ddba109) */
/* WARNING: Removing unreachable block (ram,0x00014ddba16a) */
/* WARNING: Removing unreachable block (ram,0x00014ddba16d) */

undefined8 FUN_14ddba069(void)

{
  return 0x341c4e5e;
}



// FUNCTION 14ddba35e FUN_14ddba35e body=567 status=ok
// SIG undefined FUN_14ddba35e(void)

/* WARNING: Removing unreachable block (ram,0x00014ddba3db) */
/* WARNING: Removing unreachable block (ram,0x00014ddba3e1) */
/* WARNING: Removing unreachable block (ram,0x00016196b054) */

undefined8
FUN_14ddba35e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong *puVar5;
  ulonglong local_res10;
  
  puVar5 = (ulonglong *)
           (*(ulonglong *)(unaff_RDI + -0xa0) + local_res10 +
           (*(ulonglong *)(unaff_RDI + -0xa0) & local_res10) * -2);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98) ^ local_res10;
  lVar3 = -uVar1;
  if ((lVar3 >= 0) && (lVar3 < 0)) {
    FUN_157139199(lVar3,uVar1,param_2);
    uVar1 = *puVar5;
    uVar2 = *puVar5;
    *puVar5 = ~*puVar5;
    *puVar5 = *puVar5 | param_1 ^ local_res10;
    *puVar5 = ~((unaff_RBX + uVar1) - (unaff_RBX & uVar2) & *puVar5);
    uVar4 = FUN_157383a74(FUN_157383a74,param_5);
    return uVar4;
  }
  uVar4 = FUN_162b53c82(uVar1,param_2);
  return uVar4;
}



// FUNCTION 14ddba487 thunk_FUN_14ddba48d body=5 status=ok
// SIG undefined thunk_FUN_14ddba48d(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14ddba48d(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  uint *unaff_retaddr;
  
  pcVar1 = (char *)(param_2 + -0x7fcabd70);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + '\x01';
  if (SCARRY1(cVar2,'\x01')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT(*pcVar1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *(undefined1 *)(unaff_RSI + 1);
  *(uint *)(param_2 + -0x682e0a) =
       *(uint *)(param_2 + -0x682e0a) & (int)(undefined1 *)(unaff_RSI + 1) + 1U;
  *unaff_retaddr = *unaff_retaddr & (int)unaff_RDI + 1U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14ddba48d FUN_14ddba48d body=15 status=ok
// SIG undefined FUN_14ddba48d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14ddba48d(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  uint *unaff_retaddr;
  
  pcVar1 = (char *)(param_2 + -0x7fcabd70);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + '\x01';
  if (SCARRY1(cVar2,'\x01')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT(*pcVar1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *(undefined1 *)(unaff_RSI + 1);
  *(uint *)(param_2 + -0x682e0a) =
       *(uint *)(param_2 + -0x682e0a) & (int)(undefined1 *)(unaff_RSI + 1) + 1U;
  *unaff_retaddr = *unaff_retaddr & (int)unaff_RDI + 1U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14ddba7b5 FUN_14ddba7b5 body=144 status=ok
// SIG undefined FUN_14ddba7b5(void)

/* WARNING: Instruction at (ram,0x00014ddba899) overlaps instruction at (ram,0x00014ddba898)
    */
/* WARNING: Removing unreachable block (ram,0x000165747665) */
/* WARNING: Removing unreachable block (ram,0x00014ddba950) */
/* WARNING: Removing unreachable block (ram,0x00016540e546) */
/* WARNING: Removing unreachable block (ram,0x00016566f6ac) */
/* WARNING: Removing unreachable block (ram,0x00016566f775) */
/* WARNING: Removing unreachable block (ram,0x00014ddba846) */
/* WARNING: Removing unreachable block (ram,0x00014ddba899) */
/* WARNING: Removing unreachable block (ram,0x00014ddba898) */
/* WARNING: Removing unreachable block (ram,0x00014ddba945) */
/* WARNING: Removing unreachable block (ram,0x0001657475fd) */
/* WARNING: Removing unreachable block (ram,0x0001657476d3) */
/* WARNING: Removing unreachable block (ram,0x0001657476ce) */
/* WARNING: Removing unreachable block (ram,0x0001657476db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14ddba7b5(void)

{
  ushort uVar1;
  uint in_EAX;
  uint uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  if ((in_EAX & 0x8000) == 0) {
    uVar2 = ~(in_EAX & 0xffff0000) + in_EAX + 1;
  }
  else {
    uVar2 = in_EAX | 0xffff0000;
  }
  if (-1 < (int)uVar2) {
    FUN_16566f62c();
    return;
  }
  uVar1 = (ushort)*(undefined8 *)(unaff_RSI + -0x50);
  uVar3 = ~*(ulonglong *)(unaff_RSI + -0x30) | unaff_RBP;
  if ((longlong)uVar3 < 0) {
    FUN_1647a25c8();
    return;
  }
  FUN_15b409846(CONCAT62((int6)(-1 - uVar3 >> 0x10),
                         (((ushort)unaff_RBP - 1) - ~uVar1) + (uVar1 & (ushort)unaff_RBP) * -2));
  FUN_1570e4c83();
  return;
}



// FUNCTION 14ddba846 FUN_14ddba846 body=116 status=ok
// SIG undefined FUN_14ddba846(void)

/* WARNING: Instruction at (ram,0x00014ddba899) overlaps instruction at (ram,0x00014ddba898)
    */
/* WARNING: Removing unreachable block (ram,0x000165747665) */
/* WARNING: Removing unreachable block (ram,0x00014ddba950) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000020 : 0x00014ddba91a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddba846(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int *in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 local_res10;
  longlong local_res18;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar2 = FUN_160e4f483(0xe959f98b,FUN_160e4f483,param_3,local_res10);
  lVar3 = *(ulonglong *)(local_res18 + -0x80) + uVar2 +
          (*(ulonglong *)(local_res18 + -0x80) & uVar2) * -2;
  uVar1 = *(ulonglong *)(local_res18 + -0x28);
  FUN_1653d2549(*(ulonglong *)(local_res18 + -0x58) ^ uVar2,
                (~((uVar2 - (uVar1 | uVar2)) + uVar1) + uVar2) - ~uVar1);
  *(undefined4 *)(&stack0x420f43de + lVar3) = 0xffffffff;
  return;
}



// FUNCTION 14ddba8bb FUN_14ddba8bb body=149 status=ok
// SIG undefined FUN_14ddba8bb(void)

/* WARNING: Removing unreachable block (ram,0x000165747665) */
/* WARNING: Removing unreachable block (ram,0x00014ddba950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14ddba8bb(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong unaff_R12;
  
  lVar2 = *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x28);
  FUN_1653d2549(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (~((in_RAX - (uVar1 | in_RAX)) + uVar1) + in_RAX) - ~uVar1);
  *(undefined4 *)(&stack0x420f43b6 + lVar2) = 0xffffffff;
  return;
}



// FUNCTION 14ddba950 FUN_14ddba950 body=171 status=ok
// SIG undefined FUN_14ddba950(void)

void FUN_14ddba950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_15b8a9f96(param_1,in_stack_00000008,param_3,param_4,*(undefined8 *)(unaff_RDI + -8),
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14ddbaa75 FUN_14ddbaa75 body=139 status=ok
// SIG undefined FUN_14ddbaa75(void)

void FUN_14ddbaa75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  puVar2 = (undefined8 *)(local_res18 ^ unaff_R15);
  puVar2[-1] = FUN_14ddbab01;
  FUN_1621465ca(FUN_1621465ca,param_2,param_3,param_4);
  puVar1 = puVar2 + 1;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & 0xb85a4d9b5869ffff;
  *puVar1 = *puVar1 << 1;
  *puVar1 = (ulonglong)(&DAT_b85a4d9b5869ffff + (uVar3 - *puVar1));
  *(ulonglong *)(unaff_R12 + -0x10) = *puVar1;
  puVar2[1] = unaff_RBX;
  *puVar2 = unaff_RBX;
  puVar2[1] = 0;
  puVar2[1] = puVar2[1] + -0x165306916;
  puVar2[1] = -puVar2[1];
  return;
}



// FUNCTION 14ddbab01 FUN_14ddbab01 body=116 status=ok
// SIG undefined FUN_14ddbab01(void)

void FUN_14ddbab01(void)

{
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  
  *(undefined1 **)(unaff_R12 + -0x10) =
       &DAT_b85a4d9b5869ffff + (in_stack_00000008 & 0xb85a4d9b5869ffff) * -2 + in_stack_00000008;
  return;
}



// FUNCTION 14ddbabbb FUN_14ddbabbb body=135 status=ok
// SIG undefined FUN_14ddbabbb(void)

void FUN_14ddbabbb(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_16185d3f0(0xf9,0xfa,param_1,param_3 + param_1);
  FUN_14ddbac44();
  return;
}



// FUNCTION 14ddbac44 FUN_14ddbac44 body=188 status=ok
// SIG undefined FUN_14ddbac44(void)

void FUN_14ddbac44(void)

{
  return;
}



// FUNCTION 14ddbaf12 thunk_FUN_14ddbaf18 body=5 status=ok
// SIG undefined thunk_FUN_14ddbaf18(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbaf29) */
/* WARNING: Removing unreachable block (ram,0x00014e1802cd) */
/* WARNING: Removing unreachable block (ram,0x00014e1802d3) */

void thunk_FUN_14ddbaf18(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48) + param_1;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x48) & param_1;
  if ((uVar1 < uVar3) && (uVar3 < uVar1)) {
    *(undefined8 *)(&stack0x7722d2c3 + param_3) = 0;
    *(ulonglong *)(&stack0x7722d2c3 + param_3) =
         *(ulonglong *)(&stack0x7722d2c3 + param_3) ^ unaff_R12;
    FUN_164b0fcbc(param_1,uVar2,unaff_retaddr);
    return;
  }
  FUN_161430991(param_1,uVar2,param_3);
  return;
}



// FUNCTION 14ddbaf18 FUN_14ddbaf18 body=456 status=ok
// SIG undefined FUN_14ddbaf18(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbaf29) */
/* WARNING: Removing unreachable block (ram,0x00014e1802cd) */
/* WARNING: Removing unreachable block (ram,0x00014e1802d3) */

void FUN_14ddbaf18(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48) + param_1;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x48) & param_1;
  if ((uVar1 < uVar3) && (uVar3 < uVar1)) {
    *(undefined8 *)(&stack0x7722d2c3 + param_3) = 0;
    *(ulonglong *)(&stack0x7722d2c3 + param_3) =
         *(ulonglong *)(&stack0x7722d2c3 + param_3) ^ unaff_R12;
    FUN_164b0fcbc(param_1,uVar2,unaff_retaddr);
    return;
  }
  FUN_161430991(param_1,uVar2,param_3);
  return;
}



// FUNCTION 14ddbb0c9 FUN_14ddbb0c9 body=148 status=ok
// SIG undefined FUN_14ddbb0c9(void)

void FUN_14ddbb0c9(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = (~unaff_RBX | *(ulonglong *)(param_1 + -0x88)) + unaff_RBX + 1;
  FUN_160f31460(param_1,uVar1,
                (uVar1 ^ 0xffffffffffffffff) & (*(ulonglong *)(param_1 + -0x88) | unaff_RBX),
                param_2 + (-1 - ~((unaff_RBX - (in_RAX | unaff_RBX)) + param_4)) * -2);
  FUN_14d7a8761(param_1);
  return;
}



// FUNCTION 14ddbb15d FUN_14ddbb15d body=99 status=ok
// SIG undefined FUN_14ddbb15d(void)

void FUN_14ddbb15d(undefined8 param_1)

{
  FUN_14d7a8761(param_1);
  return;
}



// FUNCTION 14ddbb213 FUN_14ddbb213 body=158 status=ok
// SIG undefined FUN_14ddbb213(void)

undefined8 FUN_14ddbb213(void)

{
  return 0x165989bad;
}



// FUNCTION 14ddbb2bb FUN_14ddbb2bb body=46 status=ok
// SIG undefined FUN_14ddbb2bb(void)

void FUN_14ddbb2bb(void)

{
  return;
}



// FUNCTION 14ddbb33e FUN_14ddbb33e body=154 status=ok
// SIG undefined FUN_14ddbb33e(void)

void FUN_14ddbb33e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16161b8f9(FUN_16161b8f9,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddbb470 FUN_14ddbb470 body=175 status=ok
// SIG undefined FUN_14ddbb470(void)

void FUN_14ddbb470(void)

{
  FUN_14e1e94fa();
  FUN_14d7c4788();
  return;
}



// FUNCTION 14ddbb825 FUN_14ddbb825 body=80 status=ok
// SIG undefined FUN_14ddbb825(void)

void FUN_14ddbb825(void)

{
  FUN_161b595ff();
  return;
}



// FUNCTION 14ddbb89b FUN_14ddbb89b body=62 status=ok
// SIG undefined FUN_14ddbb89b(void)

void FUN_14ddbb89b(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x89243) {
    FUN_166a62797(param_1,&DAT_14d7b680e);
    return;
  }
  return;
}



// FUNCTION 14ddbbca2 FUN_14ddbbca2 body=300 status=ok
// SIG undefined FUN_14ddbbca2(void)

void FUN_14ddbbca2(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161331f8e();
  FUN_1626b789e(unaff_retaddr,param_2,FUN_1626b789e);
  return;
}



// FUNCTION 14ddbbdd1 FUN_14ddbbdd1 body=341 status=ok
// SIG undefined FUN_14ddbbdd1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014ddbbf21) overlaps instruction at (ram,0x00014ddbbf20)
    */
/* WARNING: Removing unreachable block (ram,0x00014ddbbefd) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf26) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf39) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf13) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf20) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf21) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf3a) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf3e) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf6c) */
/* WARNING: Removing unreachable block (ram,0x00015722f21e) */
/* WARNING: Removing unreachable block (ram,0x00014ddbbf72) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddbbdd1(void)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2;
  FUN_161178882();
  FUN_15b662b90(lVar1);
  return;
}



// FUNCTION 14ddbc15c FUN_14ddbc15c body=314 status=ok
// SIG undefined FUN_14ddbc15c(void)

void FUN_14ddbc15c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  uVar1 = FUN_165550db3(param_1 + unaff_R15 + (param_1 & unaff_R15) * -2,
                        -1 - ((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + uVar1 + 1)
                       );
  FUN_16472a087((*(ulonglong *)(unaff_R12 + -0x60) & uVar1) << 1,
                *(ulonglong *)(unaff_R12 + -0x40) | uVar1);
  return;
}



// FUNCTION 14ddbc298 FUN_14ddbc298 body=155 status=ok
// SIG undefined FUN_14ddbc298(void)

void FUN_14ddbc298(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  (*(code *)0x166b2a7d6)
            ((*(ulonglong *)(param_3 + -0x58) - in_R10) +
             (~in_R10 | *(ulonglong *)(param_3 + -0x58)) * -2 + -2,*(undefined8 *)(param_3 + -0x48))
  ;
  return;
}



// FUNCTION 14ddbc333 FUN_14ddbc333 body=283 status=ok
// SIG undefined FUN_14ddbc333(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014ddbc3c5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddbc333(void)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong in_stack_00000008;
  undefined8 local_res10;
  longlong in_stack_00000040;
  
  *(longlong *)(unaff_R13 + 0x18) =
       local_res10 + *(longlong *)(unaff_R13 + (in_stack_00000008 ^ 0x229571d5));
  if (in_stack_00000040 < 0) {
    lVar1 = unaff_RSI + in_stack_00000040 * -2;
    *(undefined8 *)(lVar1 + -8) = unaff_R12;
    *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
    *(undefined8 *)(lVar1 + -0x18) = unaff_RBP;
    *(undefined8 *)(lVar1 + -8) = 0x371003a9;
    *(ulonglong *)(lVar1 + -8) = *(ulonglong *)(lVar1 + -8) ^ 0x371003a9;
    *(longlong *)(lVar1 + -8) = *(longlong *)(lVar1 + -8) + -0x15675f1b9;
    *(longlong *)(lVar1 + -8) = -*(longlong *)(lVar1 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_15675f122();
  return;
}



// FUNCTION 14ddbc44f FUN_14ddbc44f body=140 status=ok
// SIG undefined FUN_14ddbc44f(void)

void FUN_14ddbc44f(void)

{
  return;
}



// FUNCTION 14ddbc4dc FUN_14ddbc4dc body=147 status=ok
// SIG undefined FUN_14ddbc4dc(void)

void FUN_14ddbc4dc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1564ca526(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                (~unaff_R15 & (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff) | unaff_R15)
                ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14ddbc56f FUN_14ddbc56f body=166 status=ok
// SIG undefined FUN_14ddbc56f(void)

undefined8 FUN_14ddbc56f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong local_res20;
  
  uVar2 = ~*(ulonglong *)(unaff_RDI + -0xa0) | param_1;
  uVar1 = local_res20 ^ param_1;
  *(ulonglong *)(uVar1 - 8) = ~((~uVar2 | ~param_1 | *(ulonglong *)(unaff_RDI + -0xa0)) + uVar2 + 1)
  ;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined8 *)(uVar1 - 0x28) = param_4;
  *(undefined8 *)(uVar1 - 0x30) = param_4;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14ddbc617;
  *(undefined8 *)(uVar1 - 0x28) = 0x161269a90;
  return in_RAX;
}



// FUNCTION 14ddbc7ce FUN_14ddbc7ce body=158 status=ok
// SIG undefined FUN_14ddbc7ce(void)

void FUN_14ddbc7ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156c4bc81(param_1,param_2,param_3);
  return;
}



// FUNCTION 14ddbc926 FUN_14ddbc926 body=156 status=ok
// SIG undefined FUN_14ddbc926(void)

void FUN_14ddbc926(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  
  FUN_1568b71be(uStackX_8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddbc9c3 FUN_14ddbc9c3 body=149 status=ok
// SIG undefined FUN_14ddbc9c3(void)

void FUN_14ddbc9c3(void)

{
  FUN_15b47d446();
  return;
}



// FUNCTION 14ddbca5a FUN_14ddbca5a body=167 status=ok
// SIG undefined FUN_14ddbca5a(void)

void FUN_14ddbca5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_161d7067d(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14ddbcb83 FUN_14ddbcb83 body=14 status=ok
// SIG undefined FUN_14ddbcb83(void)

void FUN_14ddbcb83(void)

{
  ulonglong uVar1;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 0x18);
  *(ulonglong *)(unaff_R14 + 0x18) = ~*(ulonglong *)(unaff_R14 + 0x18);
  *(ulonglong *)(unaff_R14 + 0x18) = ~*(ulonglong *)(unaff_R14 + 0x18);
  *(ulonglong *)(unaff_R14 + 0x18) = (unaff_R15 | *(ulonglong *)(unaff_R14 + 0x18)) + ~unaff_R15 + 1
  ;
  *(ulonglong *)(unaff_R14 + 0x18) = ~*(ulonglong *)(unaff_R14 + 0x18);
  *(ulonglong *)(unaff_R14 + 0x18) =
       -2 - ~-((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_R14 + 0x18));
  FUN_165fdc6f1();
  return;
}



// FUNCTION 14ddbcd28 FUN_14ddbcd28 body=152 status=ok
// SIG undefined FUN_14ddbcd28(void)

void FUN_14ddbcd28(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_R12;
  
  uVar1 = unaff_RBX ^ unaff_RBP + 0x3dff5765U;
  *(undefined4 *)(&stack0xfffffffff4f2cb09 + uVar1) = 0;
  *(undefined4 *)(&stack0xfffffffff4f2cb0d + uVar1) = 0;
  (*(code *)0x1614ab982)(param_1,param_2,~*(ulonglong *)(unaff_R12 + -0x30),0xffffffffffffffff);
  return;
}



// FUNCTION 14ddbcdc1 FUN_14ddbcdc1 body=71 status=ok
// SIG undefined FUN_14ddbcdc1(void)

void FUN_14ddbcdc1(void)

{
  (*(code *)0x1617d548e)();
  return;
}



// FUNCTION 14ddbce33 FUN_14ddbce33 body=154 status=ok
// SIG undefined FUN_14ddbce33(void)

void FUN_14ddbce33(void)

{
  ulonglong unaff_RDI;
  longlong in_R11;
  longlong unaff_R15;
  int iStackX_10;
  
  *(longlong *)(in_R11 + -0x48) =
       *(longlong *)
        (in_R11 + ~(~(unaff_RDI & 0xfffffffff993ef1f) & (unaff_RDI | 0xfffffffff993ef1f))) -
       unaff_R15;
  FUN_161a0e657();
  if (iStackX_10 < 0) {
    return;
  }
  FUN_14dac1845(1);
  return;
}



// FUNCTION 14ddbcecd FUN_14ddbcecd body=146 status=ok
// SIG undefined FUN_14ddbcecd(void)

void FUN_14ddbcecd(void)

{
  int iStackX_10;
  
  if (iStackX_10 < 0) {
    return;
  }
  FUN_14dac1845(1);
  return;
}



// FUNCTION 14ddbcffb FUN_14ddbcffb body=154 status=ok
// SIG undefined FUN_14ddbcffb(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbd07b) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd081) */
/* WARNING: Removing unreachable block (ram,0x00014db0da78) */
/* WARNING: Removing unreachable block (ram,0x00014db0dab7) */
/* WARNING: Removing unreachable block (ram,0x00014db0daca) */

void FUN_14ddbcffb(undefined8 param_1)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R15;
  
  if (unaff_RBX != ~(~(unaff_R15 & 0xffffffffd03f3d5c) & (unaff_R15 | 0xffffffffd03f3d5c))) {
    FUN_14db0da78();
    return;
  }
  FUN_165dc09fc(param_1);
  return;
}



// FUNCTION 14ddbd1da FUN_14ddbd1da body=132 status=ok
// SIG undefined FUN_14ddbd1da(void)

void FUN_14ddbd1da(byte param_1)

{
  FUN_16695ac0a(param_1 ^ 0x12,(param_1 ^ 0x12) - 1);
  return;
}



// FUNCTION 14ddbd24b FUN_14ddbd24b body=727 status=ok
// SIG undefined FUN_14ddbd24b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b911baa) */
/* WARNING: Removing unreachable block (ram,0x00015b911bbb) */
/* WARNING: Removing unreachable block (ram,0x00015b911bb6) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd373) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd4a1) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd4a6) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf3d3) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd4ac) */

void FUN_14ddbd24b(void)

{
  FUN_1569670b3();
  FUN_14d862391();
  return;
}



// FUNCTION 14ddbd411 FUN_14ddbd411 body=186 status=ok
// SIG undefined FUN_14ddbd411(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014ddbd4ac) */

void FUN_14ddbd411(undefined8 param_1,undefined2 param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined4 *unaff_RDI;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = local_res8;
  *(undefined8 *)(uVar2 - 8) = param_1;
  if (-1 < (longlong)(uVar2 - 8)) {
    uVar5 = *(ulonglong *)(uVar2 - 0x10);
    *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
    *(undefined **)(uVar2 - 8) = &DAT_15b8287b5;
    uVar4 = *(undefined8 *)(uVar2 - 0x10);
    uVar3 = in(param_2);
    *unaff_RDI = uVar3;
    puVar1 = (ulonglong *)(param_3 * 2 + -0x50);
    bVar6 = ((byte)uVar4 & 0x1f) % 9;
    bRam00000000f940615c =
         (byte)(CONCAT11(uVar5 < *puVar1 ||
                         uVar5 - *puVar1 <
                         (ulonglong)(&DAT_fffffffffffffff7 < (undefined1 *)(uVar2 - 0x10)),
                         bRam00000000f940615c) >> bVar6) | bRam00000000f940615c << 9 - bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_15b82876f();
  return;
}



// FUNCTION 14ddbd557 FUN_14ddbd557 body=154 status=ok
// SIG undefined FUN_14ddbd557(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbd5ef) */

undefined8 FUN_14ddbd557(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15) != 0) {
    uVar1 = FUN_15b4b188d();
    return uVar1;
  }
  FUN_1654d88d7(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),0xffffffffffffffff,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                ~(param_1 & ((~unaff_RBP | ~unaff_R15) + unaff_R15) - ~param_4));
  uVar1 = FUN_15b4b1913();
  return uVar1;
}



// FUNCTION 14ddbd684 thunk_FUN_14ddbd68a body=5 status=ok
// SIG undefined thunk_FUN_14ddbd68a(void)

/* WARNING: Instruction at (ram,0x00014ddbd7d3) overlaps instruction at (ram,0x00014ddbd7d2)
    */
/* WARNING: Removing unreachable block (ram,0x00014ddbd7d2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14ddbd68a(void)

{
  FUN_165eebd48();
  FUN_15b233685();
  return;
}



// FUNCTION 14ddbd68a FUN_14ddbd68a body=348 status=ok
// SIG undefined FUN_14ddbd68a(void)

/* WARNING: Instruction at (ram,0x00014ddbd7d3) overlaps instruction at (ram,0x00014ddbd7d2)
    */
/* WARNING: Removing unreachable block (ram,0x00014ddbd7d2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddbd68a(void)

{
  FUN_165eebd48();
  FUN_15b233685();
  return;
}



// FUNCTION 14ddbd880 FUN_14ddbd880 body=261 status=ok
// SIG undefined FUN_14ddbd880(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbd905) */
/* WARNING: Removing unreachable block (ram,0x00014ddbd90b) */

void FUN_14ddbd880(undefined8 param_1)

{
  FUN_156d8410a(param_1);
  return;
}



// FUNCTION 14ddbd98e FUN_14ddbd98e body=153 status=ok
// SIG undefined FUN_14ddbd98e(void)

void FUN_14ddbd98e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15aff8adc(0xffffffffffffffb8,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                 (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14ddbda28 FUN_14ddbda28 body=150 status=ok
// SIG undefined FUN_14ddbda28(void)

/* WARNING: Removing unreachable block (ram,0x00015b48e12d) */
/* WARNING: Removing unreachable block (ram,0x00015b48e064) */
/* WARNING: Removing unreachable block (ram,0x00015b48e06f) */
/* WARNING: Removing unreachable block (ram,0x00015b48e11c) */
/* WARNING: Removing unreachable block (ram,0x00015b48e122) */
/* WARNING: Removing unreachable block (ram,0x00015b48e111) */
/* WARNING: Removing unreachable block (ram,0x00015b48e06a) */
/* WARNING: Removing unreachable block (ram,0x00014ddbdabe) */

void FUN_14ddbda28(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)(*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) < 0) {
    FUN_15b48dfec();
    return;
  }
  return;
}



// FUNCTION 14ddbdabe FUN_14ddbdabe body=139 status=ok
// SIG undefined FUN_14ddbdabe(void)

void FUN_14ddbdabe(void)

{
  return;
}



// FUNCTION 14ddbdc87 FUN_14ddbdc87 body=145 status=ok
// SIG undefined FUN_14ddbdc87(void)

void FUN_14ddbdc87(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  *(undefined8 *)(local_res10 + -0x28) = param_3;
  *(undefined **)(local_res10 + -0x30) = &DAT_1617e8db1;
  return;
}



// FUNCTION 14ddbdd19 FUN_14ddbdd19 body=153 status=ok
// SIG undefined FUN_14ddbdd19(void)

undefined8 FUN_14ddbdd19(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14ddbddb3 FUN_14ddbddb3 body=134 status=ok
// SIG undefined FUN_14ddbddb3(void)

/* WARNING: Instruction at (ram,0x00016489faca) overlaps instruction at (ram,0x00016489fac7)
    */
/* WARNING: Removing unreachable block (ram,0x00015741e77b) */
/* WARNING: Removing unreachable block (ram,0x00015741e781) */
/* WARNING: Removing unreachable block (ram,0x00014ddbde3b) */
/* WARNING: Removing unreachable block (ram,0x00014ddbdee8) */
/* WARNING: Removing unreachable block (ram,0x00014ddbdeee) */
/* WARNING: Removing unreachable block (ram,0x00015741e655) */
/* WARNING: Removing unreachable block (ram,0x000160e7178e) */
/* WARNING: Removing unreachable block (ram,0x000160e71810) */
/* WARNING: Removing unreachable block (ram,0x000160e71816) */
/* WARNING: Removing unreachable block (ram,0x000160e71851) */
/* WARNING: Removing unreachable block (ram,0x00016489fabb) */
/* WARNING: Removing unreachable block (ram,0x00016489faca) */
/* WARNING: Removing unreachable block (ram,0x00016489fac7) */
/* WARNING: Removing unreachable block (ram,0x00016489fbb5) */
/* WARNING: Removing unreachable block (ram,0x00016489fbc1) */
/* WARNING: Removing unreachable block (ram,0x00016489fbcd) */
/* WARNING: Removing unreachable block (ram,0x000166dc9255) */
/* WARNING: Removing unreachable block (ram,0x00015b05489f) */

undefined8 FUN_14ddbddb3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong in_R10;
  longlong in_R11;
  ulonglong local_res10 [3];
  
  puVar1 = (ulonglong *)((longlong)local_res10 + (in_R11 - in_R10));
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xfffffffffffffffe;
  *puVar1 = 0xffffffffffffffff - ((uVar2 & 0xfffffffffffffffe ^ 0xffffffffffffffff) & *puVar1);
  local_res10[1] = param_3;
  uVar3 = FUN_15b05489f();
  return uVar3;
}



// FUNCTION 14ddbde3b FUN_14ddbde3b body=1167 status=ok
// SIG undefined FUN_14ddbde3b(void)

/* WARNING: Instruction at (ram,0x00016489faca) overlaps instruction at (ram,0x00016489fac7)
    */
/* WARNING: Removing unreachable block (ram,0x00015741e77b) */
/* WARNING: Removing unreachable block (ram,0x00015741e781) */
/* WARNING: Removing unreachable block (ram,0x000160e71816) */
/* WARNING: Removing unreachable block (ram,0x000160e71851) */
/* WARNING: Removing unreachable block (ram,0x00014ddbdeee) */
/* WARNING: Removing unreachable block (ram,0x000160e71810) */
/* WARNING: Removing unreachable block (ram,0x00016489fbb5) */
/* WARNING: Removing unreachable block (ram,0x00016489fbc1) */
/* WARNING: Removing unreachable block (ram,0x00016489fbcd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00015741e69a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14ddbde3b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  FUN_16142be08(in_stack_00000008,param_2,param_3,param_4);
  pbVar1 = (byte *)((*(ulonglong *)(unaff_RDI + -0x80) ^ in_stack_00000008) - 0xa7c30);
  bVar3 = ((byte)in_stack_00000008 & 0x1f) % 9;
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 << bVar3 | bVar2 >> 9 - bVar3;
  FUN_1566195c5();
  uVar4 = FUN_1616aa16b(0x2d8);
  return uVar4;
}



// FUNCTION 14ddbdf77 FUN_14ddbdf77 body=154 status=ok
// SIG undefined FUN_14ddbdf77(void)

void FUN_14ddbdf77(void)

{
  return;
}



// FUNCTION 14ddbe289 FUN_14ddbe289 body=282 status=ok
// SIG undefined FUN_14ddbe289(void)

void FUN_14ddbe289(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong local_res8 [4];
  
  *(ulonglong *)((longlong)local_res8 + unaff_RBX) = *(ulonglong *)(unaff_RDI + -0x80);
  uVar9 = *(ulonglong *)((longlong)local_res8 + unaff_RBX);
  plVar3 = (longlong *)((longlong)local_res8 + unaff_RBX + -8);
  *(undefined4 *)plVar3 = 0x4d3ee7a;
  *(undefined4 *)((longlong)plVar3 + 4) = 0;
  lVar5 = *plVar3;
  *(ulonglong *)((longlong)plVar3 + lVar5 + -0x4d3ee72) = uVar9 + param_1;
  *(ulonglong *)((longlong)plVar3 + lVar5 + -0x4d3ee72) =
       *(longlong *)((longlong)plVar3 + lVar5 + -0x4d3ee72) + (uVar9 & param_1) * -2;
  puVar1 = (undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee7a);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x28);
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee72) = *puVar1;
  lVar4 = *(longlong *)((longlong)plVar3 + lVar5 + -0x4d3ee72);
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee72) = 0x14ddbe34c;
  FUN_165f33041(param_1,lVar4 + param_1);
  *(ulonglong *)((longlong)plVar3 + lVar5 + -0x4d3ee72) = param_1;
  uVar8 = 0x9d4df0e;
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee72) = *(undefined8 *)(unaff_R13 + -0x40);
  *(undefined1 **)((longlong)plVar3 + lVar5 + -0x4d3ee7a) = &LAB_14ddbe3e0;
  uVar9 = uVar8;
  uVar7 = (*(code *)0x166156800)();
  *(ulonglong *)((longlong)plVar3 + lVar5 + -0x4d3ee7a) = uVar8;
  plVar2 = (longlong *)((longlong)plVar3 + lVar5 + -0x4d3ee82);
  *plVar2 = *(longlong *)(unaff_RDI + -0x48);
  lVar4 = *plVar2;
  lVar6 = *(longlong *)((longlong)plVar3 + lVar5 + -0x4d3ee7a);
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee7a) = param_4;
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee7a) = unaff_R14;
  *(undefined8 *)((longlong)plVar3 + lVar5 + -0x4d3ee82) = uVar7;
  *(longlong *)((longlong)plVar3 + lVar5 + -0x4d3ee82) = lVar4 + lVar6;
  FUN_1655a1271(lVar6,uVar9 ^ uVar8);
  return;
}



// FUNCTION 14ddbe470 FUN_14ddbe470 body=72 status=ok
// SIG undefined FUN_14ddbe470(void)

void FUN_14ddbe470(HANDLE param_1,undefined8 param_2,LPVOID param_3)

{
  undefined4 local_res10;
  
                    /* WARNING: Could not recover jumptable at 0x00014ddbe4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,local_res10,param_3);
  return;
}



// FUNCTION 14ddbe5b0 FUN_14ddbe5b0 body=136 status=ok
// SIG undefined FUN_14ddbe5b0(void)

void ** FUN_14ddbe5b0(void)

{
  longlong lVar1;
  short in_AX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  short *unaff_retaddr;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *unaff_retaddr = in_AX + 1;
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined4 *)(local_res18 + -0x18) = 0x220e093;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x6db4e1;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_14ddbe63d;
  *(undefined8 *)(local_res18 + -0x20) = 0x14db2f925;
  return &ExceptionList;
}



// FUNCTION 14ddbe776 FUN_14ddbe776 body=491 status=ok
// SIG undefined FUN_14ddbe776(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbe947) */

void FUN_14ddbe776(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  FUN_166610f0d(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x80);
  uVar5 = ~uVar2;
  uVar3 = ~((~unaff_R15 + uVar2) - ~(unaff_R15 | uVar5)) | ~(0xffffffffffffffff - uVar2 | unaff_R15)
  ;
  uVar2 = FUN_166d1d5d7(uVar3,*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15);
  uVar4 = (uVar2 - (0xffffffffffffffffU - param_5 | uVar2)) + (0xffffffffffffffffU - param_5);
  uVar2 = 0xffffffffffffffff - (param_6 & unaff_R15) & (param_6 | unaff_R15);
  *(undefined8 *)(uVar2 - 8) = param_4;
  *(undefined8 *)(uVar2 - 0x10) = param_4;
  *(undefined8 *)(uVar2 - 0x18) = local_res18;
  *(undefined4 *)(uVar2 - 0x18) = 0xef65f61;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  lVar1 = *(longlong *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x80) != 0) * 0x80 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((uVar4 & 4) != 0) * 4 |
       (ulonglong)((uVar4 & 1) != 0) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar2 - 0x20) = uVar3;
  *(longlong *)(uVar2 - 0x18) = unaff_R13;
  *(longlong *)(uVar2 - 8) = lVar1 + -0xe36c2a3;
  *(ulonglong *)(uVar2 - 0x18) = uVar5;
  *(ulonglong *)(uVar2 - 0x20) = uVar5;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_16553fbec;
  *(undefined1 **)(uVar2 - 0x28) = &LAB_16553fbe8;
  return;
}



// FUNCTION 14ddbea98 FUN_14ddbea98 body=2 status=ok
// SIG undefined FUN_14ddbea98(void)

void FUN_14ddbea98(void)

{
  return;
}



// FUNCTION 14ddbeb0f FUN_14ddbeb0f body=559 status=ok
// SIG undefined FUN_14ddbeb0f(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbec34) */
/* WARNING: Removing unreachable block (ram,0x00014ddbec3a) */

void FUN_14ddbeb0f(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar4 = in_R9 + unaff_R15 + (in_R9 & unaff_R15) * -2;
  lVar1 = *(longlong *)(unaff_R13 + -0x88);
  uVar3 = ~unaff_R15;
  FUN_1565ee079(uVar3,uVar3);
  uVar2 = *(ulonglong *)(~-lVar1 - 0x6f);
  (*(code *)0x156a576c3)
            (uVar3,0x156a576c3,~(uVar2 & uVar3) & (uVar2 | uVar3),
             uVar4 + uVar3 + (uVar4 & uVar3) * -2);
  return;
}



// FUNCTION 14ddbecc4 FUN_14ddbecc4 body=301 status=ok
// SIG undefined FUN_14ddbecc4(void)

void FUN_14ddbecc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 *local_res20;
  
  local_res20[-1] = local_res8;
  local_res20[-2] = param_1;
  puVar5 = &LAB_14d806b14;
  pcVar3 = FUN_14d806ab2;
  local_res20[-3] = 0x14ddbed65;
  uVar1 = FUN_14d806ab2(FUN_14d806ab2,&LAB_14d806b14,param_3,param_4);
  local_res20[-2] = *(undefined8 *)(unaff_R12 + -0x60);
  local_res20[-2] = local_res20[-2];
  uVar1 = local_res20[-2] | uVar1;
  local_res20[-2] = FUN_14ddbedf2;
  uVar2 = FUN_164986344();
  local_res20[-2] = unaff_R14;
  uVar4 = *(undefined8 *)(unaff_R12 + -0x98);
  local_res20[-2] = 0;
  local_res20[-2] = local_res20[-2] ^ uVar1;
  *local_res20 = uVar4;
  uVar1 = *(ulonglong *)(unaff_R12 + -0xa0);
  local_res20[-1] = pcVar3;
  local_res20[-2] = local_res20[-2];
  local_res20[-3] = uVar2;
  uVar4 = local_res20[-1];
  local_res20[-1] = ~(uVar1 & uVar2) & (~local_res20[-3] & uVar1 | uVar2);
  local_res20[-2] = uVar2;
  local_res20[-3] = 0x14ddbee8f;
  uVar1 = FUN_16238aca7();
  local_res20[-2] = uVar4;
  local_res20[-3] = uVar4;
  local_res20[-2] = &LAB_14ddbef28;
  FUN_165243af0(local_res20[-3],(ulonglong)puVar5 ^ uVar1);
  return;
}



// FUNCTION 14ddbedf2 FUN_14ddbedf2 body=308 status=ok
// SIG undefined FUN_14ddbedf2(void)

void FUN_14ddbedf2(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_16238aca7();
  FUN_165243af0(param_1,param_2 ^ uVar1);
  return;
}



// FUNCTION 14ddbefb6 FUN_14ddbefb6 body=300 status=ok
// SIG undefined FUN_14ddbefb6(void)

/* WARNING: Removing unreachable block (ram,0x00014dfbe364) */
/* WARNING: Removing unreachable block (ram,0x000162543896) */
/* WARNING: Removing unreachable block (ram,0x0001626c1305) */
/* WARNING: Removing unreachable block (ram,0x0001626c12ff) */
/* WARNING: Removing unreachable block (ram,0x0001626c130a) */
/* WARNING: Removing unreachable block (ram,0x0001626c1362) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe35e) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe369) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe407) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe40c) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe412) */
/* WARNING: Removing unreachable block (ram,0x0001610f399f) */
/* WARNING: Removing unreachable block (ram,0x0001610f39cd) */
/* WARNING: Removing unreachable block (ram,0x0001610f39d4) */
/* WARNING: Removing unreachable block (ram,0x0001626c11f2) */
/* WARNING: Removing unreachable block (ram,0x0001626c1209) */
/* WARNING: Removing unreachable block (ram,0x0001611c0926) */
/* WARNING: Removing unreachable block (ram,0x0001610f3a4b) */
/* WARNING: Removing unreachable block (ram,0x0001610f3a51) */
/* WARNING: Removing unreachable block (ram,0x0001620e89d8) */
/* WARNING: Removing unreachable block (ram,0x0001620e89e3) */
/* WARNING: Removing unreachable block (ram,0x0001620e89fb) */
/* WARNING: Removing unreachable block (ram,0x0001620e8a64) */
/* WARNING: Removing unreachable block (ram,0x0001620e8a70) */
/* WARNING: Removing unreachable block (ram,0x0001620e8a76) */
/* WARNING: Removing unreachable block (ram,0x00014df7081b) */
/* WARNING: Removing unreachable block (ram,0x00014df708b8) */
/* WARNING: Removing unreachable block (ram,0x00014df708be) */
/* WARNING: Removing unreachable block (ram,0x00016107a057) */
/* WARNING: Removing unreachable block (ram,0x00016107a0de) */
/* WARNING: Removing unreachable block (ram,0x00016107a0e4) */
/* WARNING: Removing unreachable block (ram,0x000165e3dc60) */
/* WARNING: Removing unreachable block (ram,0x000165e3dcc2) */
/* WARNING: Removing unreachable block (ram,0x000165e3dcc7) */
/* WARNING: Removing unreachable block (ram,0x0001620e89de) */
/* WARNING: Removing unreachable block (ram,0x0001564d8e25) */
/* WARNING: Removing unreachable block (ram,0x00014ddbf03c) */
/* WARNING: Removing unreachable block (ram,0x00014dfbe2a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14ddbefb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1617b1aaf(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14ddbf177 FUN_14ddbf177 body=15 status=ok
// SIG undefined FUN_14ddbf177(void)

void FUN_14ddbf177(void)

{
  return;
}



// FUNCTION 14ddbf4f7 FUN_14ddbf4f7 body=79 status=ok
// SIG undefined FUN_14ddbf4f7(void)

/* WARNING: Removing unreachable block (ram,0x00014ddbf586) */

void FUN_14ddbf4f7(void)

{
  return;
}



// FUNCTION 14ddbf6c9 FUN_14ddbf6c9 body=131 status=ok
// SIG undefined FUN_14ddbf6c9(void)

void FUN_14ddbf6c9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161372765(~-*(longlong *)(unaff_R13 + -0x78) + 1U ^ unaff_R15);
  return;
}



// FUNCTION 14ddbfa52 FUN_14ddbfa52 body=187 status=ok
// SIG undefined FUN_14ddbfa52(void)

void FUN_14ddbfa52(void)

{
  FUN_14d7ed64c();
  return;
}



// FUNCTION 14ddbfb0e FUN_14ddbfb0e body=150 status=ok
// SIG undefined FUN_14ddbfb0e(void)

void FUN_14ddbfb0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165e26135(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14ddbfba4 FUN_14ddbfba4 body=17 status=ok
// SIG undefined FUN_14ddbfba4(void)

void FUN_14ddbfba4(void)

{
  return;
}



// FUNCTION 14ddbfc55 FUN_14ddbfc55 body=140 status=ok
// SIG undefined FUN_14ddbfc55(void)

void FUN_14ddbfc55(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_14db2f075(~(~param_1 & (unaff_RBP ^ 0xffffffffffffffff) | param_1) | ~(~param_1 | in_RAX),
                -1 - ((~uVar1 & ~in_RAX | uVar1) & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14ddbfd89 FUN_14ddbfd89 body=160 status=ok
// SIG undefined FUN_14ddbfd89(void)

void FUN_14ddbfd89(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  undefined8 unaff_RBX;
  longlong unaff_R14;
  longlong local_res20;
  
  puVar1 = (ushort *)(&stack0xfffffffff589fa68 + unaff_R14);
  *puVar1 = (-0x101 - ((~(*puVar1 & 0xfeff) - 0x101) - (-1 - *puVar1))) + *puVar1;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined **)(local_res20 + -0x20) = &DAT_157225335;
  return;
}



// FUNCTION 14ddbfe29 FUN_14ddbfe29 body=155 status=ok
// SIG undefined FUN_14ddbfe29(void)

void FUN_14ddbfe29(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) | param_1;
  FUN_1618c70bf(param_1,uVar1,
                0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x70) & param_1) & uVar1,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14ddbfec5 FUN_14ddbfec5 body=62 status=ok
// SIG undefined FUN_14ddbfec5(void)

void FUN_14ddbfec5(void)

{
  return;
}



// FUNCTION 14ddbffe5 FUN_14ddbffe5 body=25 status=ok
// SIG undefined FUN_14ddbffe5(void)

void FUN_14ddbffe5(void)

{
  return;
}



// FUNCTION 14ddc0062 FUN_14ddc0062 body=154 status=ok
// SIG undefined FUN_14ddc0062(void)

longlong FUN_14ddc0062(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return (*(ulonglong *)(unaff_RDI + -0x80) & param_1) << 1;
}



// FUNCTION 14ddc0196 FUN_14ddc0196 body=459 status=ok
// SIG undefined FUN_14ddc0196(void)

void FUN_14ddc0196(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b67922b(param_1,CONCAT71(~(uint7)((ulonglong)param_1 >> 8),0x1e) ^ 0x42,param_3,
                FUN_15b67922b);
  return;
}



// FUNCTION 14ddc0389 FUN_14ddc0389 body=104 status=ok
// SIG undefined FUN_14ddc0389(void)

void FUN_14ddc0389(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014ddc03f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14ddc04c8 FUN_14ddc04c8 body=119 status=ok
// SIG undefined FUN_14ddc04c8(void)

void FUN_14ddc04c8(void)

{
  return;
}



// FUNCTION 14ddc0543 FUN_14ddc0543 body=9 status=ok
// SIG undefined FUN_14ddc0543(void)

void FUN_14ddc0543(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  uVar1 = ~(~param_4 | param_1);
  FUN_16127db54(param_1,~param_4 | param_1,8,
                -1 - ~((~(~(~in_RAX | param_4) & uVar1) + uVar1) - (~in_RAX | param_4)));
  return;
}



// FUNCTION 14ddc06b3 FUN_14ddc06b3 body=189 status=ok
// SIG undefined FUN_14ddc06b3(void)

void FUN_14ddc06b3(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1628119c5(*(undefined8 *)(unaff_R13 + -0x88),FUN_1628119c5,*(undefined8 *)(unaff_R13 + -0x88),
                (in_RAX | in_R9) & ~(in_R9 & ~unaff_R15) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14ddc08b0 FUN_14ddc08b0 body=129 status=ok
// SIG undefined FUN_14ddc08b0(void)

void FUN_14ddc08b0(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68);
  uVar1 = (uVar1 + param_1) - (uVar1 & param_1);
  (*(code *)0x1570aa9b5)
            (param_1,~(~-((~uVar1 | ~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) + uVar1 + 1) + 1))
  ;
  return;
}



// FUNCTION 14ddc0c75 FUN_14ddc0c75 body=217 status=ok
// SIG undefined FUN_14ddc0c75(void)

/* WARNING: Instruction at (ram,0x00014ddc0c84) overlaps instruction at (ram,0x00014ddc0c83)
    */

void FUN_14ddc0c75(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  bool bVar8;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar9;
  undefined8 uStackX_18;
  undefined1 auStackX_20 [8];
  ulonglong uStack_8;
  uint uVar5;
  
  if (in_OF) {
    unaff_R14 = unaff_R13 + unaff_RBP;
  }
  param_4 = param_4 - (unaff_R14 + (unaff_R13 & unaff_RBP) * -2);
  puVar1 = (ulonglong *)(&stack0x00000008 + param_4);
  puVar2 = (ulonglong *)(&stack0x00000010 + param_4);
  uVar6 = *puVar2;
  *(undefined4 *)((longlong)&uStackX_18 + param_4) = 0;
  *(undefined4 *)(auStackX_20 + param_4 + -4) = 0;
  puVar3 = (uint *)(auStackX_20 + param_4 + -4);
  *puVar3 = *puVar3;
  uVar4 = *puVar3;
  uVar5 = *puVar3;
  bVar8 = (POPCOUNT(*puVar3 & 0xff) & 1U) == 0;
  *puVar2 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
            (ulonglong)(uVar5 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar8 * 4 |
            (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
            (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *puVar1 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
            (ulonglong)(uVar5 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar8 * 4 |
            (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
            (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)puVar1 = (int)*puVar1 << 0x1f;
  *(uint *)puVar1 = (uint)*puVar1 >> 0x1f;
  if ((int)*puVar1 != 0) {
    uVar9 = *puVar2;
    *puVar2 = (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar9 & 0x800) != 0) * 0x800 | (ulonglong)((uVar9 & 0x400) != 0) * 0x400
              | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
              (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
              (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
              (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
    if ((*puVar2 & 1) == 0) {
      *(undefined8 *)((longlong)&uStackX_18 + param_4) = *(undefined8 *)(uVar6 - 0x70);
      *puVar2 = *(ulonglong *)(uVar6 - 8);
      *puVar1 = unaff_RBX;
      *(ulonglong *)(auStackX_20 + param_4 + -0x20) = unaff_RBX;
      *(ulonglong *)((longlong)&uStack_8 + param_4) = unaff_R15;
      lVar7 = *(longlong *)(uVar6 - 0x98);
      *puVar1 = 0x21bb392e;
      *puVar1 = *puVar1 ^ 0x21bb392e;
      *puVar1 = *puVar1 - lVar7;
      *puVar1 = -*puVar1;
      *(undefined8 *)(auStackX_20 + param_4 + -0x20) = *(undefined8 *)(uVar6 - 0xa0);
      *(ulonglong *)(auStackX_20 + param_4 + -0x20) = unaff_RBP ^ unaff_R15;
      *(undefined8 *)((longlong)&uStack_8 + param_4) = 8;
      *(undefined8 *)((longlong)&uStack_8 + param_4) = 0x14ddc0de1;
      FUN_1610a2a9f(param_1,auStackX_20 + param_4,puVar1);
      FUN_14ddc0de7();
      return;
    }
    FUN_16235d2fd();
    return;
  }
  FUN_16235d2fd();
  return;
}



// FUNCTION 14ddc0d4e FUN_14ddc0d4e body=151 status=ok
// SIG undefined FUN_14ddc0d4e(void)

void FUN_14ddc0d4e(void)

{
  FUN_1610a2a9f();
  FUN_14ddc0de7();
  return;
}



// FUNCTION 14ddc0de7 FUN_14ddc0de7 body=140 status=ok
// SIG undefined FUN_14ddc0de7(void)

undefined8 FUN_14ddc0de7(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(longlong *)(local_res18 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = (longlong)(&LAB_14ddc0e88 + *plVar1);
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(ulonglong *)(local_res18 + -0x10) = *(ulonglong *)(local_res18 + -0x10) ^ 0x14d7bff80;
  return uVar2;
}



// FUNCTION 14ddc0fc4 FUN_14ddc0fc4 body=31 status=ok
// SIG undefined FUN_14ddc0fc4(void)

void FUN_14ddc0fc4(HANDLE param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ddc0fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadPriority(param_1,param_2);
  return;
}



// FUNCTION 14ddc1337 FUN_14ddc1337 body=133 status=ok
// SIG undefined FUN_14ddc1337(void)

void FUN_14ddc1337(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = uVar1 | unaff_R15;
  FUN_1666e8d04(uVar1,~unaff_R15 & uVar1);
  FUN_166415263(-1 - ((uVar2 | uVar1) & (~uVar1 | unaff_R15)),
                ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14ddc13bd FUN_14ddc13bd body=155 status=ok
// SIG undefined FUN_14ddc13bd(void)

void FUN_14ddc13bd(ulonglong param_1)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166415263(-1 - ((unaff_RSI | param_1) & (~param_1 | unaff_R15)),
                ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14ddc1458 FUN_14ddc1458 body=133 status=ok
// SIG undefined FUN_14ddc1458(void)

void FUN_14ddc1458(undefined8 param_1)

{
  FUN_15ba337c3(param_1,0x10);
  return;
}



// FUNCTION 14ddc14dd FUN_14ddc14dd body=3 status=ok
// SIG undefined FUN_14ddc14dd(void)

void FUN_14ddc14dd(void)

{
  return;
}



// FUNCTION 14ddc1766 FUN_14ddc1766 body=260 status=ok
// SIG undefined FUN_14ddc1766(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc17ed) */

void FUN_14ddc1766(void)

{
  return;
}



// FUNCTION 14ddc17f3 FUN_14ddc17f3 body=27 status=ok
// SIG undefined FUN_14ddc17f3(void)

void FUN_14ddc17f3(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_14d7c0cc0(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14ddc18b7 FUN_14ddc18b7 body=138 status=ok
// SIG undefined FUN_14ddc18b7(void)

void FUN_14ddc18b7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14db22971(0xfffffffffffffff8,FUN_14db22971,0,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14ddc19bc FUN_14ddc19bc body=462 status=ok
// SIG undefined FUN_14ddc19bc(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc1a60) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1bfa) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1c00) */
/* WARNING: Removing unreachable block (ram,0x000156fc350b) */
/* WARNING: Removing unreachable block (ram,0x000156fc3627) */
/* WARNING: Removing unreachable block (ram,0x000165744b06) */
/* WARNING: Removing unreachable block (ram,0x000156fc362d) */
/* WARNING: Removing unreachable block (ram,0x000156fc37ea) */
/* WARNING: Removing unreachable block (ram,0x000156fc37ef) */
/* WARNING: Removing unreachable block (ram,0x000156fc37f5) */
/* WARNING: Removing unreachable block (ram,0x000156fc37fa) */

void FUN_14ddc19bc(void)

{
  return;
}



// FUNCTION 14ddc1b7b FUN_14ddc1b7b body=270 status=ok
// SIG undefined FUN_14ddc1b7b(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc1bfa) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1c00) */
/* WARNING: Removing unreachable block (ram,0x000156fc362d) */
/* WARNING: Removing unreachable block (ram,0x000156fc37ea) */
/* WARNING: Removing unreachable block (ram,0x000156fc37ef) */
/* WARNING: Removing unreachable block (ram,0x000156fc37fa) */
/* WARNING: Removing unreachable block (ram,0x000156fc37f5) */

void FUN_14ddc1b7b(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  
  uVar7 = ~(*(ulonglong *)(unaff_R12 + -0x60) & unaff_retaddr) &
          (*(ulonglong *)(unaff_R12 + -0x60) | unaff_retaddr);
  uVar4 = ~((~unaff_retaddr | *(ulonglong *)(unaff_R12 + -0x40)) &
           (~*(ulonglong *)(unaff_R12 + -0x40) | unaff_retaddr));
  uVar5 = uVar4;
  FUN_160d3f5bd(FUN_160d3f5bd,uVar4,
                *(ulonglong *)(unaff_R12 + -0x80) + unaff_retaddr +
                (*(ulonglong *)(unaff_R12 + -0x80) & unaff_retaddr) * -2);
  uVar6 = ~*(ulonglong *)(uVar7 - 0x68);
  uVar5 = ~((uVar5 ^ 0xffffffffffffffff | *(ulonglong *)(uVar7 - 0x68)) &
           (uVar6 + uVar5) - (uVar6 & uVar5));
  lVar3 = FUN_156cfd6ae(FUN_156cfd6ae,(uint)uVar4 >> 5);
  plVar2 = (longlong *)CONCAT62(uStackX_1a,local_res18);
  plVar2[-2] = uVar5;
  plVar2[-1] = lVar3;
  plVar2[-2] = unaff_R12;
  plVar2[-3] = unaff_R12;
  plVar2[-4] = uVar7;
  plVar2[-2] = 0;
  plVar2[-2] = plVar2[-2] + 0x3bf6f707;
  plVar2[-4] = plVar2[-1];
  plVar2[-5] = unaff_R13;
  uVar5 = plVar2[-2];
  plVar2[-2] = plVar2[-2] | 0xffffffffc40908f8;
  plVar2[-2] = ~(~(uVar5 & 0xffffffffc40908f8) & plVar2[-2]);
  plVar2[-2] = plVar2[-2] ^ plVar2[-4];
  plVar2[-4] = 0x165744c41;
  FUN_14dc64c7a();
  uVar5 = plVar2[-2];
  plVar2[-2] = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar5 & 0x800) != 0) * 0x800 | (ulonglong)((uVar5 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
               (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *plVar2 = (plVar2[-3] ^ 0x1d4aef92U) - 0xfce2a8c;
  uVar1 = plVar2[-1];
  plVar2[-1] = uVar1;
  plVar2[-2] = uVar1;
  plVar2[-1] = (longlong)FUN_165c7153c;
  return;
}



// FUNCTION 14ddc1c8a FUN_14ddc1c8a body=161 status=ok
// SIG undefined FUN_14ddc1c8a(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc1d2e) */

undefined8 FUN_14ddc1c8a(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  *(ulonglong *)(&stack0xfffffffff04cf44c + unaff_retaddr) = *(ulonglong *)(unaff_R13 + -0x88);
  uVar3 = *(ulonglong *)(&stack0xfffffffff04cf44c + unaff_retaddr) ^ unaff_R15;
  *(undefined8 *)(&stack0xfffffffff04cf44c + unaff_retaddr) = unaff_RSI;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48) | unaff_R15;
  if (-1 < (longlong)uVar2) {
    uVar1 = FUN_14dce1524(uVar2,unaff_retaddr + -0xfb30bbc,uVar3);
    return uVar1;
  }
  uVar1 = FUN_14dce1524(uVar2,unaff_retaddr + -0xfb30bbc,uVar3);
  return uVar1;
}



// FUNCTION 14ddc1d2e FUN_14ddc1d2e body=21 status=ok
// SIG undefined FUN_14ddc1d2e(void)

undefined8 FUN_14ddc1d2e(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14ddc1dd9 FUN_14ddc1dd9 body=263 status=ok
// SIG undefined FUN_14ddc1dd9(void)

void FUN_14ddc1dd9(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  longlong lVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  
  lVar2 = (0xffffffffffffffff - unaff_R15) + local_res8;
  uVar1 = 0xffffffffffffffff - unaff_R15 & local_res8;
  local_res8 = ~local_res8 | unaff_R15;
  uVar1 = (~local_res8 | lVar2 - uVar1) + local_res8 + 1;
  FUN_165dd5d59();
  local_res8 = local_res8 ^ uVar1;
  local_res10 = local_res10 ^ uVar1;
  FUN_156fcdb79(param_1 ^ uVar1,&local_res8);
  return;
}



// FUNCTION 14ddc2086 FUN_14ddc2086 body=177 status=ok
// SIG undefined FUN_14ddc2086(void)

void FUN_14ddc2086(void)

{
  FUN_162829177();
  return;
}



// FUNCTION 14ddc2137 FUN_14ddc2137 body=328 status=ok
// SIG undefined FUN_14ddc2137(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc21d4) */

void FUN_14ddc2137(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_R13;
  ulonglong local_res8;
  ushort local_res10;
  ulonglong local_res18;
  
  local_res10 = local_res10 ^ (ushort)in_RAX;
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = param_2;
  if ((-~local_res10 - (~(0xfeff - (local_res10 | 0xfeff)) + 2) & 1) != 0) {
    *(undefined8 *)(uVar1 - 0x10) = unaff_R13;
    *(undefined8 *)(uVar1 - 0x18) = unaff_R13;
    *(ulonglong *)(uVar1 - 0x20) = local_res8 ^ in_RAX;
    uVar2 = *(undefined8 *)(uVar1 - 8);
    UNRECOVERED_JUMPTABLE = *(code **)(uVar1 - 0x20);
    *(undefined8 *)(uVar1 - 0x20) = param_3;
    *(undefined8 *)(uVar1 - 0x28) = param_1;
    uVar3 = *(undefined8 *)(uVar1 - 0x28);
    *(undefined8 *)(uVar1 - 0x10) = uVar2;
    uVar2 = *(undefined8 *)(uVar1 - 0x20);
    *(undefined8 *)(uVar1 - 8) = 0;
    *(longlong *)(uVar1 - 8) = (longlong)(&LAB_15b665757 + *(longlong *)(uVar1 - 8));
                    /* WARNING: Could not recover jumptable at 0x00015b665741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar3,*(undefined8 *)(uVar1 - 0x10),uVar2);
    return;
  }
  FUN_15b6656cf();
  return;
}



// FUNCTION 14ddc2282 FUN_14ddc2282 body=130 status=ok
// SIG undefined FUN_14ddc2282(void)

void FUN_14ddc2282(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  longlong alStackX_10 [3];
  
  *(undefined8 *)((longlong)alStackX_10 + unaff_R12) = param_3;
  lVar3 = alStackX_10[0];
  lVar1 = *(longlong *)(unaff_RDI + -0xa0);
  alStackX_10[0] = *(longlong *)(unaff_RDI + -0x98);
  bVar2 = FUN_14de6ddf9(param_1,param_2,lVar3,unaff_retaddr);
  FUN_15afa645c(0x59,*(longlong *)(lVar1 + -0x28) + unaff_RSI,
                param_2 - (lVar3 << (~(~bVar2 & ((byte)param_1 | 0xb5)) + 0xb7 & 0x3f)));
  return;
}



// FUNCTION 14ddc2305 FUN_14ddc2305 body=148 status=ok
// SIG undefined FUN_14ddc2305(void)

void FUN_14ddc2305(byte param_1,longlong param_2,longlong param_3)

{
  byte in_AL;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  
  FUN_15afa645c(0x59,*(longlong *)(unaff_RDI + -0x28) + in_stack_00000008,
                param_2 - (param_3 << (~(~in_AL & (param_1 | 0xb5)) + 0xb7 & 0x3f)));
  return;
}



// FUNCTION 14ddc2467 FUN_14ddc2467 body=594 status=ok
// SIG undefined FUN_14ddc2467(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc2606) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2611) */
/* WARNING: Removing unreachable block (ram,0x000161837717) */
/* WARNING: Removing unreachable block (ram,0x000161837722) */
/* WARNING: Removing unreachable block (ram,0x0001618377a5) */
/* WARNING: Removing unreachable block (ram,0x0001618377b1) */
/* WARNING: Removing unreachable block (ram,0x000160ce9dc5) */
/* WARNING: Removing unreachable block (ram,0x000160ce9deb) */
/* WARNING: Removing unreachable block (ram,0x00016183771d) */
/* WARNING: Removing unreachable block (ram,0x000160ce9e59) */
/* WARNING: Removing unreachable block (ram,0x000160ce9e5f) */
/* WARNING: Removing unreachable block (ram,0x000160ce9e81) */
/* WARNING: Removing unreachable block (ram,0x000161754c00) */
/* WARNING: Removing unreachable block (ram,0x00014ddc260c) */
/* WARNING: Removing unreachable block (ram,0x000164ad7e1d) */

undefined8 FUN_14ddc2467(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong unaff_R15;
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
  
  FUN_157671ceb();
  uVar4 = 0x12f97470;
  FUN_165d673a4();
  uVar1 = unaff_R15 ^ 0xf11ef448820ff11e;
  puVar2 = (undefined8 *)(unaff_R15 ^ 0x48243c8b489875ff);
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar12 = (uVar1 & 0x800) != 0;
  bVar11 = (uVar1 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (uVar1 & 0x80) != 0;
  bVar8 = (uVar1 & 0x40) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar6 = (uVar1 & 4) != 0;
  bVar5 = (uVar1 & 1) != 0;
  bVar17 = (uVar1 & 0x200000) != 0;
  bVar14 = (uVar1 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar2 = 0x3c5f1f7d;
  puVar2[-1] = 0x3c5f1f7d;
  puVar2[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar2[-3] = uVar4;
  puVar2[-4] = uVar4;
  puVar2[-3] = FUN_1669fec57;
  uVar4 = FUN_156aafd68();
  return uVar4;
}



// FUNCTION 14ddc2750 FUN_14ddc2750 body=312 status=ok
// SIG undefined FUN_14ddc2750(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc277e) */

void FUN_14ddc2750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160e1cb9c(FUN_160e1cb9c,param_2,param_3,0x12b313fb);
  return;
}



// FUNCTION 14ddc29e7 FUN_14ddc29e7 body=475 status=ok
// SIG undefined FUN_14ddc29e7(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc2a63) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2a69) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b0a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b0f) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b15) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b1a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b45) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2b74) */
/* WARNING: Removing unreachable block (ram,0x0001623533b0) */
/* WARNING: Removing unreachable block (ram,0x0001623533b6) */
/* WARNING: Removing unreachable block (ram,0x000164a6f106) */
/* WARNING: Removing unreachable block (ram,0x000162c9e1a1) */
/* WARNING: Removing unreachable block (ram,0x000162c9e219) */
/* WARNING: Removing unreachable block (ram,0x000162c9e21d) */
/* WARNING: Removing unreachable block (ram,0x0001623533bb) */
/* WARNING: Removing unreachable block (ram,0x000162353465) */
/* WARNING: Removing unreachable block (ram,0x00015691e2bb) */
/* WARNING: Removing unreachable block (ram,0x000162353471) */
/* WARNING: Removing unreachable block (ram,0x00016235345a) */

undefined8 FUN_14ddc29e7(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165a0eac6();
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  lVar3 = (~uVar1 & unaff_R15) + 2;
  if (lVar3 == 0) {
    uVar2 = FUN_162c9e116();
    return uVar2;
  }
  uVar4 = ~(~*(ulonglong *)(unaff_R13 + -0x78) & ~unaff_R15);
  uVar2 = FUN_166399504((uVar4 ^ 0xffffffffffffffff |
                        ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar4 + 1,
                        *(undefined8 *)(unaff_R13 + -0x28),
                        -1 - ((0xffffffffffffffff - unaff_R15 | uVar1) &
                             (-lVar3 - ~unaff_R15) - uVar1),
                        unaff_RBX + unaff_R15 + (unaff_RBX & unaff_R15) * -2);
  return uVar2;
}



// FUNCTION 14ddc2d08 FUN_14ddc2d08 body=3 status=ok
// SIG undefined FUN_14ddc2d08(void)

void FUN_14ddc2d08(void)

{
  return;
}



// FUNCTION 14ddc2e52 FUN_14ddc2e52 body=131 status=ok
// SIG undefined FUN_14ddc2e52(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc2f5e) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2f5a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2ed7) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2f54) */
/* WARNING: Removing unreachable block (ram,0x00015b0929b2) */

undefined8
FUN_14ddc2e52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  longlong lVar4;
  undefined8 unaff_R12;
  ulonglong *unaff_R14;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  undefined8 local_res8;
  undefined1 in_stack_00000010;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = *unaff_R14;
  *unaff_R14 = -*unaff_R14;
  *unaff_R14 = *unaff_R14 - 1;
  *unaff_R14 = *unaff_R14 | in_RAX;
  *unaff_R14 = ~((~in_RAX | uVar1) & *unaff_R14);
  uVar1 = local_res18 ^ in_RAX;
  lVar3 = local_res20 + in_RAX + (local_res20 & in_RAX) * -2;
  local_res18._0_2_ = (ushort)uVar1 ^ 0xffff;
  local_res18._0_2_ = ~(ushort)local_res18;
  LOCK();
  UNLOCK();
  LAB_14d7a9a28 = in_stack_00000010;
  *(undefined8 *)(lVar3 + -8) = param_4;
  *(undefined8 *)(lVar3 + -0x10) = param_4;
  *(undefined4 *)(lVar3 + -0x18) = 0x1019ed5a;
  *(undefined8 *)(lVar3 + -0x20) = in_R11;
  *(ulonglong *)(lVar3 + -0x28) =
       (ulonglong)(((ushort)local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res18 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)local_res18 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)local_res18 & 4) != 0) * 4 | (ulonglong)(((ushort)local_res18 & 1) != 0)
       | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar3 + -0x14) = 0;
  lVar4 = *(longlong *)(lVar3 + -0x20);
  *(undefined8 *)(lVar3 + -0x20) = 0x1656388ec;
  FUN_16568b320();
  *(undefined4 *)(lVar3 + -0x14) = 0;
  *(longlong *)(lVar3 + 8) =
       lVar4 - *(longlong *)(lVar3 + ((*(ulonglong *)(lVar3 + -0x18) ^ 0x6ec18b05) - 0x431fd78));
  uVar2 = *(undefined8 *)(lVar3 + -8);
  *(ulonglong *)(lVar3 + -8) = CONCAT62(unaff_000000ba,unaff_R15W);
  *(undefined8 *)(lVar3 + -0x10) = param_2;
  *(undefined8 *)(lVar3 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar3 + -0x20) = local_res8;
  *(undefined8 *)(lVar3 + -0x18) = unaff_R12;
  *(longlong *)(lVar3 + -0x20) = lVar3;
  *(undefined1 **)(lVar3 + -0x28) = &LAB_165bed0f8;
  return uVar2;
}



// FUNCTION 14ddc2ed7 FUN_14ddc2ed7 body=238 status=ok
// SIG undefined FUN_14ddc2ed7(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc2f5a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc2f5e) */

void FUN_14ddc2ed7(void)

{
  uRam000000014d7be1c4 = 0;
  return;
}



// FUNCTION 14ddc308f FUN_14ddc308f body=223 status=ok
// SIG undefined FUN_14ddc308f(void)

undefined8 FUN_14ddc308f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b6b7154();
  return uVar1;
}



// FUNCTION 14ddc31d2 FUN_14ddc31d2 body=144 status=ok
// SIG undefined FUN_14ddc31d2(void)

void FUN_14ddc31d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16531e4f9(param_1,param_2,param_3);
  return;
}



// FUNCTION 14ddc3303 FUN_14ddc3303 body=326 status=ok
// SIG undefined FUN_14ddc3303(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc3343) */
/* WARNING: Removing unreachable block (ram,0x00016170b55b) */
/* WARNING: Removing unreachable block (ram,0x00016170b567) */
/* WARNING: Removing unreachable block (ram,0x00016170b572) */
/* WARNING: Removing unreachable block (ram,0x00016170b603) */
/* WARNING: Removing unreachable block (ram,0x00016170b609) */
/* WARNING: Removing unreachable block (ram,0x0001624c58b6) */
/* WARNING: Removing unreachable block (ram,0x00016170b577) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3399) */
/* WARNING: Removing unreachable block (ram,0x00014ddc33b9) */
/* WARNING: Removing unreachable block (ram,0x00014ddc33ae) */

void FUN_14ddc3303(void)

{
  byte in_ZF;
  
  if ((in_ZF & 1) != 0) {
    FUN_16170b4b6();
    return;
  }
  FUN_160ca7308(0);
  return;
}



// FUNCTION 14ddc3454 FUN_14ddc3454 body=109 status=ok
// SIG undefined FUN_14ddc3454(void)

/* WARNING: Removing unreachable block (ram,0x00016241e29a) */
/* WARNING: Removing unreachable block (ram,0x00016241e2a5) */
/* WARNING: Removing unreachable block (ram,0x00014ddc348f) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3557) */
/* WARNING: Removing unreachable block (ram,0x00014ddc355d) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35e3) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35f4) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35fa) */
/* WARNING: Removing unreachable block (ram,0x0001621d4c5a) */
/* WARNING: Removing unreachable block (ram,0x0001621d4cfe) */
/* WARNING: Removing unreachable block (ram,0x0001621d4d0a) */
/* WARNING: Removing unreachable block (ram,0x0001621d4d0f) */
/* WARNING: Removing unreachable block (ram,0x0001618ee215) */
/* WARNING: Removing unreachable block (ram,0x0001618ee28c) */
/* WARNING: Removing unreachable block (ram,0x0001618ee298) */
/* WARNING: Removing unreachable block (ram,0x0001618ee2bd) */
/* WARNING: Removing unreachable block (ram,0x0001622db189) */
/* WARNING: Removing unreachable block (ram,0x00016241e223) */
/* WARNING: Removing unreachable block (ram,0x000162d4f830) */
/* WARNING: Removing unreachable block (ram,0x00016241e2a0) */
/* WARNING: Removing unreachable block (ram,0x00014ddc34c9) */
/* WARNING: Removing unreachable block (ram,0x0001613a84f5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14ddc3454(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1613a84f5();
  return uVar1;
}



// FUNCTION 14ddc34c9 FUN_14ddc34c9 body=433 status=ok
// SIG undefined FUN_14ddc34c9(void)

/* WARNING: Removing unreachable block (ram,0x00016241e29a) */
/* WARNING: Removing unreachable block (ram,0x00016241e2a5) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3557) */
/* WARNING: Removing unreachable block (ram,0x00014ddc355d) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35e3) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35f4) */
/* WARNING: Removing unreachable block (ram,0x00014ddc35fa) */
/* WARNING: Removing unreachable block (ram,0x0001621d4c5a) */
/* WARNING: Removing unreachable block (ram,0x0001621d4cfe) */
/* WARNING: Removing unreachable block (ram,0x0001621d4d0a) */
/* WARNING: Removing unreachable block (ram,0x0001621d4d0f) */
/* WARNING: Removing unreachable block (ram,0x0001618ee215) */
/* WARNING: Removing unreachable block (ram,0x0001618ee28c) */
/* WARNING: Removing unreachable block (ram,0x0001618ee298) */
/* WARNING: Removing unreachable block (ram,0x0001618ee2bd) */
/* WARNING: Removing unreachable block (ram,0x0001622db189) */
/* WARNING: Removing unreachable block (ram,0x00016241e223) */
/* WARNING: Removing unreachable block (ram,0x000162d4f830) */
/* WARNING: Removing unreachable block (ram,0x00016241e2a0) */

undefined8 FUN_14ddc34c9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14ddc3683 FUN_14ddc3683 body=638 status=ok
// SIG undefined FUN_14ddc3683(void)

/* WARNING: Removing unreachable block (ram,0x00015666ba55) */
/* WARNING: Removing unreachable block (ram,0x00015666bab5) */
/* WARNING: Removing unreachable block (ram,0x00015666b91f) */
/* WARNING: Removing unreachable block (ram,0x00015666b93b) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3723) */

undefined8 FUN_14ddc3683(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  undefined8 unaff_R14;
  
  FUN_15b38e17a(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~(~(in_RAX & 0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78)) &
                 (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)),param_3);
  if (param_4 == 0x12a07b) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (param_4 == 0x12a07c) {
    return unaff_R14;
  }
  if (param_4 == 0x12a112) {
    uVar1 = FUN_166cb9339();
    return uVar1;
  }
  if (param_4 == 0x12a113) {
    return unaff_R14;
  }
  uVar1 = FUN_1618f42e0();
  return uVar1;
}



// FUNCTION 14ddc384a FUN_14ddc384a body=102 status=ok
// SIG undefined FUN_14ddc384a(void)

void FUN_14ddc384a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong auStackX_8 [4];
  
  puVar1 = (ulonglong *)((longlong)auStackX_8 + (unaff_R14 - unaff_R15));
  uVar2 = *puVar1;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  *puVar1 = *puVar1 | param_1;
  *puVar1 = (param_1 ^ 0xffffffffffffffff | uVar2) & *puVar1 ^ 0xffffffffffffffff;
  param_5 = param_5 ^ param_1;
  auStackX_8[3] = (auStackX_8[3] ^ param_1) & 0xfffffffffffffeff;
  *(undefined8 *)(param_5 - 8) = in_RAX;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined **)(param_5 - 8) = &DAT_14ddc38cd;
  thunk_FUN_15b642ca5(auStackX_8[2],param_2,unaff_retaddr);
  return;
}



// FUNCTION 14ddc3c13 FUN_14ddc3c13 body=145 status=ok
// SIG undefined FUN_14ddc3c13(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc3c9b) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3ca6) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3ca1) */
/* WARNING: Removing unreachable block (ram,0x00014dfc9230) */

undefined8 FUN_14ddc3c13(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar2 = ~(*(ulonglong *)(unaff_RDI + -0x68) & unaff_retaddr) &
          (*(ulonglong *)(unaff_RDI + -0x68) | unaff_retaddr);
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_RDI + -0x48) + unaff_retaddr +
           (*(ulonglong *)(unaff_RDI + -0x48) & unaff_retaddr) * -2)) {
    uVar1 = FUN_161154bed(unaff_retaddr,uVar2);
    return uVar1;
  }
  uVar1 = FUN_161154bed(unaff_retaddr,uVar2);
  return uVar1;
}



// FUNCTION 14ddc3ca6 FUN_14ddc3ca6 body=87 status=ok
// SIG undefined FUN_14ddc3ca6(void)

undefined8 FUN_14ddc3ca6(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14ddc3de6 FUN_14ddc3de6 body=315 status=ok
// SIG undefined FUN_14ddc3de6(void)

/* WARNING: Removing unreachable block (ram,0x0001652c7c90) */
/* WARNING: Removing unreachable block (ram,0x0001652c7c96) */
/* WARNING: Removing unreachable block (ram,0x0001565e950f) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3f22) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3e7d) */
/* WARNING: Removing unreachable block (ram,0x00014dc32b31) */
/* WARNING: Removing unreachable block (ram,0x00014ddc3f17) */

undefined8 FUN_14ddc3de6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1565e950f();
  return uVar1;
}



// FUNCTION 14ddc3f22 FUN_14ddc3f22 body=172 status=ok
// SIG undefined FUN_14ddc3f22(void)

void FUN_14ddc3f22(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 local_res10;
  
  FUN_160e01d09(param_1,in_RAX ^ local_res10);
  return;
}



// FUNCTION 14ddc4079 FUN_14ddc4079 body=127 status=ok
// SIG undefined FUN_14ddc4079(void)

void FUN_14ddc4079(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_1623a61d5)(param_1,unaff_RDI + -1);
  return;
}



// FUNCTION 14ddc40f8 FUN_14ddc40f8 body=295 status=ok
// SIG undefined FUN_14ddc40f8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa964) */
/* WARNING: Removing unreachable block (ram,0x00014ddc417a) */

void FUN_14ddc40f8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 in_RAX;
  uint unaff_EBX;
  int unaff_EDI;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined **)(local_res10 + -8) = &DAT_1655164f2;
  puVar1 = (uint *)((ulonglong)(uint)(unaff_EDI - param_2) + 0x3100b578);
  *puVar1 = *puVar1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14ddc420c FUN_14ddc420c body=119 status=ok
// SIG undefined FUN_14ddc420c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_14ddc420c(void)

{
  undefined8 local_res8;
  
  return *(undefined1 *)(0x1f5 - (~local_res8 + 2));
}



// FUNCTION 14ddc42a7 FUN_14ddc42a7 body=193 status=ok
// SIG undefined FUN_14ddc42a7(void)

void FUN_14ddc42a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ushort uVar4;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined8 unaff_retaddr;
  longlong local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  uVar4 = (~(local_res10 | 0xfeff) - 0x100) + local_res10;
  bVar8 = (uVar4 & 0x4000) != 0;
  bVar7 = (uVar4 & 0x200) != 0;
  bVar6 = (uVar4 & 0x100) != 0;
  bVar5 = (uVar4 & 0x10) != 0;
  bVar12 = (uStackX_12 & 0x20) != 0;
  bVar9 = (uStackX_12 & 4) != 0;
  bVar11 = 0;
  bVar10 = 0;
  local_res18[-1] = 0;
  local_res18[-1] = local_res18[-1] + local_res8;
  local_res18[-2] = unaff_R13;
  local_res18[-3] = param_1;
  uVar3 = local_res18[-3];
  local_res18[-3] = 0x14ddc4332;
  FUN_16540a1e6(uVar3);
  local_res18[-3] = unaff_retaddr;
  local_res18[-4] = param_4;
  *local_res18 = local_res18[-3];
  uVar2 = local_res18[-1];
  local_res18[-1] = 0;
  *(ulonglong *)((longlong)local_res18 + -0x21ef) =
       (ulonglong)(bVar8 & 1) * 0x4000 | (ulonglong)((uVar4 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar7 & 1) * 0x200 | (ulonglong)(bVar6 & 1) * 0x100 |
       (ulonglong)((longlong)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar12 & 1) * 0x200000 | (ulonglong)(bVar11 & 1) * 0x100000 |
       (ulonglong)(bVar10 & 1) * 0x80000 | (ulonglong)(bVar9 & 1) * 0x40000;
  *(undefined8 *)((longlong)local_res18 + -0x21f7) = unaff_RDI;
  *(undefined8 *)((longlong)local_res18 + -0x21ff) = unaff_R12;
  *(undefined8 *)((longlong)local_res18 + -0x2207) = unaff_RBX;
  *(undefined4 *)((longlong)local_res18 + -0x220f) = 0xce5eece;
  *(undefined4 *)((longlong)local_res18 + -0x220b) = 0;
  puVar1 = (ushort *)
           ((longlong)local_res18 + *(longlong *)((longlong)local_res18 + -0x220f) + -0xce610bd);
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  *(undefined8 *)((longlong)local_res18 + -0x2207) = unaff_RBP;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & 0xfeff;
  *puVar1 = ~*puVar1;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  *(undefined8 *)((longlong)local_res18 + -0x2207) = param_3;
  *(undefined8 *)((longlong)local_res18 + -0x220f) = param_3;
  *(undefined8 *)((longlong)local_res18 + -0x2217) = param_3;
  *(undefined **)((longlong)local_res18 + -0x2207) = &DAT_15b642d62;
  *(undefined **)((longlong)local_res18 + -0x220f) = &DAT_1656252c2;
  return;
}



// FUNCTION 14ddc43eb FUN_14ddc43eb body=67 status=ok
// SIG undefined FUN_14ddc43eb(void)

void FUN_14ddc43eb(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14ddc4532 FUN_14ddc4532 body=144 status=ok
// SIG undefined FUN_14ddc4532(void)

undefined8 FUN_14ddc4532(void)

{
  return 0x1ca9f03;
}



// FUNCTION 14ddc45d3 FUN_14ddc45d3 body=240 status=ok
// SIG undefined FUN_14ddc45d3(void)

void FUN_14ddc45d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162acbbb6(param_1,param_2,param_3);
  FUN_166bc0a2f();
  return;
}



// FUNCTION 14ddc46c6 FUN_14ddc46c6 body=135 status=ok
// SIG undefined FUN_14ddc46c6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddc46c6(void)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_160d3d9a9(in_stack_00000008,in_stack_00000010,unaff_retaddr);
  FUN_14d7be84d();
  return;
}



// FUNCTION 14ddc474d FUN_14ddc474d body=90 status=ok
// SIG undefined FUN_14ddc474d(void)

void FUN_14ddc474d(undefined8 param_1,undefined8 param_2)

{
  FUN_14d7be84d(param_1,param_2);
  return;
}



// FUNCTION 14ddc47f9 FUN_14ddc47f9 body=160 status=ok
// SIG undefined FUN_14ddc47f9(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc48ec) */
/* WARNING: Removing unreachable block (ram,0x00014ddc489a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc48ef) */
/* WARNING: Removing unreachable block (ram,0x00014ddc49be) */
/* WARNING: Removing unreachable block (ram,0x00014ddc49c3) */
/* WARNING: Removing unreachable block (ram,0x00014ddc49c9) */
/* WARNING: Removing unreachable block (ram,0x000165330ebb) */
/* WARNING: Removing unreachable block (ram,0x0001572f5701) */
/* WARNING: Removing unreachable block (ram,0x0001572f5759) */
/* WARNING: Removing unreachable block (ram,0x0001572f575d) */

void FUN_14ddc47f9(void)

{
  FUN_1572f5701();
  return;
}



// FUNCTION 14ddc489a FUN_14ddc489a body=137 status=ok
// SIG undefined FUN_14ddc489a(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc48ec) */
/* WARNING: Removing unreachable block (ram,0x00014ddc49c9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddc489a(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBX;
  char unaff_BPL;
  longlong in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  
  FUN_165da6448(unaff_BPL + -0x42,~(*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15),
                ((param_2 - in_R10) + unaff_RBX) - (param_2 - in_R10 & unaff_RBX));
  if (uStackX_10 == 0xffffffffffffffff) {
    FUN_15af8ab0e(FUN_15af8ab0e,*(ulonglong *)(unaff_R12 + -0x78) ^ uStackX_10);
    return;
  }
  FUN_165330ebb();
  return;
}



// FUNCTION 14ddc4923 FUN_14ddc4923 body=305 status=ok
// SIG undefined FUN_14ddc4923(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc49c9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddc4923(void)

{
  longlong unaff_R12;
  ulonglong local_res8;
  
  if (local_res8 == 0xffffffffffffffff) {
    FUN_15af8ab0e(FUN_15af8ab0e,*(ulonglong *)(unaff_R12 + -0x78) ^ local_res8);
    return;
  }
  FUN_165330ebb();
  return;
}



// FUNCTION 14ddc4a8d FUN_14ddc4a8d body=1083 status=ok
// SIG undefined FUN_14ddc4a8d(void)

/* WARNING: Removing unreachable block (ram,0x00014d87c116) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4c38) */
/* WARNING: Removing unreachable block (ram,0x00014d81ff84) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4c3e) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4ce7) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4cec) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4cf2) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4d81) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4d87) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4e77) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4e8d) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4e9d) */
/* WARNING: Removing unreachable block (ram,0x0001655a2184) */
/* WARNING: Removing unreachable block (ram,0x00016278dbe0) */
/* WARNING: Removing unreachable block (ram,0x00016278dc77) */
/* WARNING: Removing unreachable block (ram,0x00016278dc7d) */
/* WARNING: Removing unreachable block (ram,0x00015b4bd9a7) */
/* WARNING: Removing unreachable block (ram,0x00015b4bda17) */
/* WARNING: Removing unreachable block (ram,0x00015b4bda22) */
/* WARNING: Removing unreachable block (ram,0x00015b4bda44) */
/* WARNING: Removing unreachable block (ram,0x00015b4bda1d) */
/* WARNING: Removing unreachable block (ram,0x0001624ba63d) */
/* WARNING: Removing unreachable block (ram,0x00014d87c0ff) */
/* WARNING: Removing unreachable block (ram,0x00014d87c11a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4b9e) */
/* WARNING: Removing unreachable block (ram,0x0001624f3673) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4baa) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4c33) */
/* WARNING: Removing unreachable block (ram,0x0001655a2216) */
/* WARNING: Removing unreachable block (ram,0x0001655a221c) */
/* WARNING: Removing unreachable block (ram,0x00014ddc4b1c) */

void FUN_14ddc4a8d(void)

{
  return;
}



// FUNCTION 14ddc4f4b FUN_14ddc4f4b body=104 status=ok
// SIG undefined FUN_14ddc4f4b(void)

void FUN_14ddc4f4b(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  *(ulonglong *)(&stack0xfffffffffd48d399 + in_RAX) =
       (0xffffffffffffffffU - unaff_RBP | *(ulonglong *)(&stack0xfffffffffd48d399 + in_RAX)) +
       unaff_RBP + 1;
  FUN_1565c2d14();
  return;
}



// FUNCTION 14ddc4fb3 FUN_14ddc4fb3 body=300 status=ok
// SIG undefined FUN_14ddc4fb3(void)

/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00014ddc5050) */
/* WARNING: Removing unreachable block (ram,0x00014ddc5061) */
/* WARNING: Removing unreachable block (ram,0x00014ddc5056) */

void FUN_14ddc4fb3(void)

{
  FUN_162ad062e();
  return;
}



// FUNCTION 14ddc518d FUN_14ddc518d body=246 status=ok
// SIG undefined FUN_14ddc518d(void)

/* WARNING: Removing unreachable block (ram,0x000156ae9e8b) */
/* WARNING: Removing unreachable block (ram,0x000156ae9e91) */

void FUN_14ddc518d(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x8d8bc) {
    return;
  }
  if (param_2 == 0x8d96a) {
    FUN_156ae9df7();
    return;
  }
  if (param_2 == 0x8d96b) {
    FUN_15751fa1b(param_1,&DAT_14d7bc455);
    return;
  }
  if (param_2 == 0x8da3f) {
    return;
  }
  FUN_165046d4e(param_1,param_2);
  return;
}



// FUNCTION 14ddc5204 FUN_14ddc5204 body=2 status=ok
// SIG undefined FUN_14ddc5204(void)

void FUN_14ddc5204(void)

{
  return;
}



// FUNCTION 14ddc5277 FUN_14ddc5277 body=137 status=ok
// SIG undefined FUN_14ddc5277(void)

void FUN_14ddc5277(void)

{
  undefined1 unaff_retaddr;
  
  FUN_156c7df0e(unaff_retaddr,FUN_156c7df0e);
  return;
}



// FUNCTION 14ddc5301 FUN_14ddc5301 body=41 status=ok
// SIG undefined FUN_14ddc5301(void)

void FUN_14ddc5301(void)

{
  return;
}



// FUNCTION 14ddc5406 FUN_14ddc5406 body=322 status=ok
// SIG undefined FUN_14ddc5406(void)

/* WARNING: Removing unreachable block (ram,0x00014dfb4414) */
/* WARNING: Removing unreachable block (ram,0x00014dfb441f) */
/* WARNING: Removing unreachable block (ram,0x00014dfb4468) */
/* WARNING: Removing unreachable block (ram,0x00014dfb4463) */
/* WARNING: Removing unreachable block (ram,0x00014dfb446b) */
/* WARNING: Removing unreachable block (ram,0x00014ddc54a4) */
/* WARNING: Removing unreachable block (ram,0x00014ddc54aa) */
/* WARNING: Removing unreachable block (ram,0x00014dfb441a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14ddc5406(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res20;
  
  lVar3 = unaff_R13 + in_RAX + (local_res10 & in_RAX) * -2;
  puVar4 = (undefined8 *)~((~in_RAX | local_res20) & (~local_res20 | in_RAX));
  puVar4[-1] = in_stack_00000008;
  puVar4[-2] = lVar3;
  puVar4[-3] = lVar3;
  puVar4[-4] = &LAB_1629464c9;
  uVar1 = puVar4[-4];
  puVar4[-4] = in_R11;
  puVar4[-2] = puVar4[-1];
  puVar4[-3] = param_2;
  puVar4[-1] = uVar1;
  uVar1 = puVar4[-3];
  puVar4[-3] = 0x166c1f3fb;
  FUN_162946498(param_1,uVar1);
  uVar1 = puVar4[-2];
  puVar4[-2] = param_1;
  puVar4[-3] = unaff_RDI;
  puVar4[-4] = unaff_RBX;
  lVar3 = puVar4[-3];
  uVar2 = puVar4[-2];
  puVar4[-2] = uVar1;
  *(undefined4 *)(puVar4 + -2) = 0xa2a8faff;
  *(int *)(puVar4 + -2) = *(int *)(puVar4 + -2) + 0x702abbc4;
  *(undefined4 *)((longlong)puVar4 + -0xc) = 0xc33fbe67;
  *(int *)((longlong)puVar4 + -0xc) = *(int *)((longlong)puVar4 + -0xc) + 0x3cc04199;
  puVar4[-2] = param_3;
  puVar4[-3] = param_3;
  puVar4[-2] = *(undefined8 *)(lVar3 + -0x90);
  puVar4[-4] = 0x166c1f482;
  FUN_1662d4dce(uVar2);
  *(undefined8 *)
   ((longlong)puVar4 +
   ~(~(unaff_retaddr & 0xffffffffa986781a) & (unaff_retaddr | 0xffffffffa986781a))) = param_4;
  uVar1 = puVar4[-1];
  *puVar4 = DAT_162946400;
  puVar4[-1] = in_R10;
  puVar4[-2] = uVar1;
  uVar1 = puVar4[-2];
  puVar4[-1] = lVar3;
  puVar4[-2] = uVar1;
  puVar4[-2] = uVar1;
  puVar4[-3] = uVar1;
  puVar4[-2] = FUN_166c1f530;
  (*(code *)0x15b4aa7e8)();
  return;
}



// FUNCTION 14ddc55f2 FUN_14ddc55f2 body=155 status=ok
// SIG undefined FUN_14ddc55f2(void)

void FUN_14ddc55f2(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_R10;
  longlong alStackX_8 [4];
  
  uVar1 = alStackX_8[1] & param_1;
  alStackX_8[1] = uVar1 * 2;
  FUN_166068e97(param_1,((~(1U - *(longlong *)
                                  ((longlong)alStackX_8 +
                                  ~(~(in_R10 & 0xffffffff8ea17086) & (in_R10 | 0xffffffff8ea17086)))
                           ) + 1) - ~param_1) + uVar1 * -2,FUN_166068e97);
  return;
}



// FUNCTION 14ddc5727 FUN_14ddc5727 body=439 status=ok
// SIG undefined FUN_14ddc5727(void)

/* WARNING: Removing unreachable block (ram,0x00014ddc57c5) */

void FUN_14ddc5727(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166547e36(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14ddc5856 FUN_14ddc5856 body=154 status=ok
// SIG undefined FUN_14ddc5856(void)

void FUN_14ddc5856(void)

{
  return;
}



// FUNCTION 14ddc58f7 FUN_14ddc58f7 body=3 status=ok
// SIG undefined FUN_14ddc58f7(void)

void FUN_14ddc58f7(void)

{
  return;
}


