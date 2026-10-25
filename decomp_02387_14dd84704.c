// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd84704 FUN_14dd84704 body=124 status=ok
// SIG undefined FUN_14dd84704(void)

void FUN_14dd84704(void)

{
  return;
}



// FUNCTION 14dd84822 FUN_14dd84822 body=340 status=ok
// SIG undefined FUN_14dd84822(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015b355c26) overlaps instruction at (ram,0x00015b355c25)
    */
/* WARNING: Removing unreachable block (ram,0x00015b355c1f) */
/* WARNING: Removing unreachable block (ram,0x00015b9d853b) */
/* WARNING: Removing unreachable block (ram,0x00014dd8489d) */

undefined1 FUN_14dd84822(ulonglong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char in_R11B;
  byte unaff_R12B;
  byte unaff_retaddr;
  ulonglong local_res10;
  undefined8 uStackX_20;
  longlong in_stack_00000038;
  
  if ((char)(-1 - ~((~unaff_R12B | unaff_retaddr) + unaff_R12B + 1 |
                   ~(0xff - (0xffU - in_R11B & 0x51)))) < '\0') {
    uVar1 = FUN_15b9d84a6();
    return uVar1;
  }
  *(byte *)(local_res10 + 0x109) = *(byte *)(local_res10 + 0x109) | 0x82;
  if (*(char *)(local_res10 + 0x109) == '\0') {
    uVar1 = thunk_FUN_15b355bf4();
    return uVar1;
  }
  local_res10 = param_1 & 0xffffffffffffff00;
  uVar3 = 0x1611dcbca;
  (*(code *)0x1611dcbca)();
  uVar1 = FUN_1615539c5(uVar3);
  *(ushort *)(local_res10 + 0x18) = (*(ushort *)(local_res10 + 0x18) | 0x100) - 0x100;
  LOCK();
  uVar2 = FUN_14d7a4fa6;
  UNLOCK();
  FUN_14d7a4fa6 = uVar1;
  *(undefined8 *)(in_stack_00000038 + -8) = 0x49f1498;
  *(undefined8 *)(in_stack_00000038 + -0x28cf) = uStackX_20;
  *(undefined8 *)(in_stack_00000038 + -0x28d7) = uStackX_20;
  *(undefined **)(in_stack_00000038 + -0x28cf) = &DAT_156ef2e4a;
  return uVar2;
}



// FUNCTION 14dd84979 FUN_14dd84979 body=151 status=ok
// SIG undefined FUN_14dd84979(void)

void FUN_14dd84979(void)

{
  FUN_165bd22c7();
  return;
}



// FUNCTION 14dd84acb FUN_14dd84acb body=228 status=ok
// SIG undefined FUN_14dd84acb(void)

void FUN_14dd84acb(void)

{
  FUN_16111f9bd();
  return;
}



// FUNCTION 14dd84b6b thunk_FUN_14dd84b71 body=5 status=ok
// SIG undefined thunk_FUN_14dd84b71(void)

void thunk_FUN_14dd84b71(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_156cf9dbe(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14dd84b71 FUN_14dd84b71 body=156 status=ok
// SIG undefined FUN_14dd84b71(void)

void FUN_14dd84b71(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_156cf9dbe(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14dd84cac FUN_14dd84cac body=126 status=ok
// SIG undefined FUN_14dd84cac(void)

void FUN_14dd84cac(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1618d7643(param_1,param_2,FUN_1618d7643,*(undefined8 *)(unaff_RDI + -0x98));
  return;
}



// FUNCTION 14dd84dd0 FUN_14dd84dd0 body=136 status=ok
// SIG undefined FUN_14dd84dd0(void)

void FUN_14dd84dd0(void)

{
  (*(code *)0x162522186)();
  return;
}



// FUNCTION 14dd84f6f FUN_14dd84f6f body=169 status=ok
// SIG undefined FUN_14dd84f6f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd84f6f(undefined8 param_1,undefined8 param_2)

{
  FUN_161d2c78d(param_1,param_2);
  return;
}



// FUNCTION 14dd850ad FUN_14dd850ad body=117 status=ok
// SIG undefined FUN_14dd850ad(void)

void FUN_14dd850ad(void)

{
  FUN_16646ba24();
  return;
}



// FUNCTION 14dd852c1 FUN_14dd852c1 body=818 status=ok
// SIG undefined FUN_14dd852c1(void)

/* WARNING: Removing unreachable block (ram,0x00014e0435b6) */
/* WARNING: Removing unreachable block (ram,0x00014e043630) */
/* WARNING: Removing unreachable block (ram,0x00014e043635) */
/* WARNING: Removing unreachable block (ram,0x00015b64b0fd) */
/* WARNING: Removing unreachable block (ram,0x00014e04363b) */

void FUN_14dd852c1(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  uint in_R11D;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -8);
  uVar3 = *(undefined8 *)(unaff_RDI + -0x98);
  param_1 = (uint)*(undefined8 *)(unaff_RDI + -0xa0) | param_1;
  uVar5 = FUN_1624c91cc();
  bVar4 = (byte)*(undefined8 *)(unaff_R12 + -0x98);
  if ((&DAT_fffffffffffffff7 < &stack0xfffffffffffffff8) &&
     (&stack0xfffffffffffffff8 < &DAT_fffffffffffffff8)) {
    (*(code *)0x14e0c49cf)(uVar3,((int)uVar5 + in_R11D) - ~(~param_1 | ~in_R11D));
    return;
  }
  uVar1 = 0xffffffffffffffff - uVar2 | uVar5;
  LOCK();
  UNLOCK();
  DAT_14d7a880b = 0xff - (bVar4 & (byte)uVar5) & (bVar4 | (byte)uVar5);
  *(undefined8 *)(~((~uVar1 | ~uVar5 | uVar2) + uVar1 + 1) - 8) = 0x88e1ba;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd854fc FUN_14dd854fc body=200 status=ok
// SIG undefined FUN_14dd854fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c0af9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd854fc(ulonglong param_1)

{
  ushort unaff_SI;
  longlong unaff_RDI;
  
  if (unaff_SI < 0x766c) {
    FUN_16160fb11(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                  *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
    (*(code *)0x160c8cc49)(param_1);
    return;
  }
  FUN_15645e1fe();
  return;
}



// FUNCTION 14dd85755 FUN_14dd85755 body=22 status=ok
// SIG undefined FUN_14dd85755(void)

void FUN_14dd85755(void)

{
  return;
}



// FUNCTION 14dd85af4 FUN_14dd85af4 body=174 status=ok
// SIG undefined FUN_14dd85af4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd85b7a) */

void FUN_14dd85af4(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  FUN_161d1a8a0(param_1,~((~in_RAX | param_2) & (~param_2 | in_RAX)));
  return;
}



// FUNCTION 14dd85c9f FUN_14dd85c9f body=174 status=ok
// SIG undefined FUN_14dd85c9f(void)

void FUN_14dd85c9f(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (*(code *)0x14dcfd844)(param_1,in_stack_00000018,in_stack_00000010);
  return;
}



// FUNCTION 14dd85d55 FUN_14dd85d55 body=235 status=ok
// SIG undefined FUN_14dd85d55(void)

void FUN_14dd85d55(void)

{
  FUN_164f00630(1);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd85f26 FUN_14dd85f26 body=145 status=ok
// SIG undefined FUN_14dd85f26(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd85fda) overlaps instruction at (ram,0x00014dd85fd9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd85fd7) */
/* WARNING: Removing unreachable block (ram,0x000160faae40) */
/* WARNING: Removing unreachable block (ram,0x000160faae46) */
/* WARNING: Removing unreachable block (ram,0x00014dd85fb7) */
/* WARNING: Removing unreachable block (ram,0x00014dd85fed) */

void FUN_14dd85f26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI) = *(undefined8 *)(unaff_R13 + -0x68);
  uVar6 = *(ulonglong *)(&stack0xfffffffff1058dc3 + unaff_RDI);
  uVar9 = ~uVar6 | unaff_R15;
  *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI) = param_1;
  uVar7 = *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI);
  *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI) = in_RAX;
  *(ulonglong *)(&stack0xfffffffff1058dbb + unaff_RDI) = unaff_RSI ^ unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar4 = *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI);
  *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI) = unaff_R12;
  if (0xffffffffffffdf72 < unaff_R13 - 0x20ddU) {
    uVar5 = *(ulonglong *)(&stack0xfffffffff1058dc3 + unaff_RDI);
    *(undefined8 *)(&stack0xfffffffff1058dc3 + unaff_RDI) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff1058dbb + unaff_RDI) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff1058db3 + unaff_RDI) = uVar4;
    *(undefined4 *)(&stack0xfffffffff1058db3 + unaff_RDI) = 0xa5985bc;
    *(undefined4 *)(&stack0xfffffffff1058db7 + unaff_RDI) = 0;
    puVar1 = (ulonglong *)
             (&stack0xffffffffe6ac07f7 +
             *(longlong *)(&stack0xfffffffff1058db3 + unaff_RDI) + unaff_RDI);
    *puVar1 = ~((~uVar9 | ~unaff_R15 | uVar6) + uVar9 + 1);
    puVar1[-1] = uVar4;
    *(undefined4 *)(puVar1 + -1) = 0xbdfb28a8;
    *(undefined4 *)((longlong)puVar1 + -4) = 0xc77f239e;
    *(uint *)((longlong)puVar1 + -4) = *(uint *)((longlong)puVar1 + -4) ^ 0x3880dc61;
    uVar6 = puVar1[-1];
    *(undefined4 *)(puVar1 + -1) = 0x30a3074c;
    *(undefined4 *)((longlong)puVar1 + -4) = 0;
    uVar9 = puVar1[-1];
    puVar1[-1] = unaff_R13;
    uVar4 = *(undefined8 *)(puVar1[-1] + (uVar6 ^ 0x1161cfed - (~uVar9 + 2)));
    *puVar1 = uVar5;
    puVar2 = puVar1 + -1;
    *(uint *)puVar2 = 0;
    *(uint *)puVar2 = (uint)*puVar2 ^ 0x3836fcaa;
    puVar1[-2] = uVar7;
    *(uint *)puVar2 = (uint)*puVar2 + 0x615d1035;
    uVar7 = puVar1[-2];
    *(undefined4 *)((longlong)puVar1 + -4) = 0xc885271a;
    *(uint *)((longlong)puVar1 + -4) = *(uint *)((longlong)puVar1 + -4) ^ 0x377ad8e5;
    uVar6 = *puVar2;
    puVar1[-1] = param_3;
    uVar8 = puVar1[-1];
    *(undefined8 *)((longlong)puVar1 + uVar6 + 0x666bf331) = uVar4;
    uVar4 = puVar1[1];
    puVar1[1] = *puVar1;
    *puVar1 = *puVar1;
    puVar1[-1] = ~(uVar3 & unaff_R15) & (uVar3 | unaff_R15);
    puVar1[-1] = uVar8;
    puVar1[-2] = uVar4;
    puVar1[-3] = uVar4;
    puVar1[-2] = (ulonglong)FUN_16177e6f0;
    FUN_165ee073e(uVar7,param_2,FUN_165ee073e);
    return;
  }
  FUN_160faadb0();
  return;
}



// FUNCTION 14dd85fb7 FUN_14dd85fb7 body=43 status=ok
// SIG undefined FUN_14dd85fb7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd85fda) overlaps instruction at (ram,0x00014dd85fd9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd85fd7) */

void FUN_14dd85fb7(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x161ab5e06)
            ((~(~*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) + unaff_R15) -
             (~*(ulonglong *)(unaff_R13 + -0x38) ^ 0xffffffffffffffff),param_2,~unaff_RBX);
  return;
}



// FUNCTION 14dd86175 FUN_14dd86175 body=85 status=ok
// SIG undefined FUN_14dd86175(void)

void FUN_14dd86175(HANDLE param_1,DWORD param_2,LPVOID param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_retaddr;
  ulonglong uStackX_20;
  
  param_4 = param_4 + unaff_retaddr +
                      ~(~(unaff_RBX & 0xffffffffcf216baf) & (unaff_RBX | 0xffffffffcf216baf));
  *(undefined8 *)((longlong)&uStackX_20 + param_4) = 0;
  puVar1 = (ulonglong *)((longlong)&uStackX_20 + param_4);
  *puVar1 = *puVar1 ^ unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x00014dd861c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd862c5 FUN_14dd862c5 body=80 status=ok
// SIG undefined FUN_14dd862c5(void)

void FUN_14dd862c5(void)

{
  return;
}



// FUNCTION 14dd86553 FUN_14dd86553 body=576 status=ok
// SIG undefined FUN_14dd86553(void)

/* WARNING: Removing unreachable block (ram,0x00014dd865e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd86553(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar2;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x90)) &
           (~*(ulonglong *)(unaff_RDI + -0x90) | param_1));
  *(undefined8 *)(uVar2 - 8) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 0x14d829bc8;
  *(undefined8 *)(uVar2 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RBX;
  *(undefined **)(uVar2 - 0x20) = &DAT_16272e08b;
  FUN_14d829b92((0xffffffffffffffff - param_1 | uVar1) & (~uVar1 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dd8696c FUN_14dd8696c body=124 status=ok
// SIG undefined FUN_14dd8696c(void)

undefined1 FUN_14dd8696c(void)

{
  longlong lVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  LOCK();
  uVar2 = DAT_14d7a4f01;
  UNLOCK();
  DAT_14d7a4f01 = in_AL;
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined4 *)(local_res18 + -0x18) = 0x690c1a7;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x1e8690f;
  *(undefined8 *)(local_res18 + -0x28cf) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x28d7) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined **)(local_res18 + -0x28cf) = &DAT_156ef2e4a;
  return uVar2;
}



// FUNCTION 14dd86b24 FUN_14dd86b24 body=127 status=ok
// SIG undefined FUN_14dd86b24(void)

void FUN_14dd86b24(undefined8 param_1,undefined8 param_2)

{
  FUN_160dbc64e(param_1,param_2,FUN_160dbc64e);
  return;
}



// FUNCTION 14dd86ba4 FUN_14dd86ba4 body=154 status=ok
// SIG undefined FUN_14dd86ba4(void)

void FUN_14dd86ba4(void)

{
  FUN_164879a21();
  return;
}



// FUNCTION 14dd86cdd FUN_14dd86cdd body=136 status=ok
// SIG undefined FUN_14dd86cdd(void)

void FUN_14dd86cdd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort unaff_BP;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ushort *unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  *unaff_R15 = -~*unaff_R15 - (~unaff_BP + 2);
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = 0x17495f41c;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(longlong *)(local_res20 + -0x10) = *(longlong *)(local_res20 + -0x10) + -0xf2030db;
  FUN_156475c8c(param_1,param_2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dd86e08 FUN_14dd86e08 body=315 status=ok
// SIG undefined FUN_14dd86e08(void)

void FUN_14dd86e08(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x38);
  FUN_156d2f16c();
  *(undefined8 *)(local_res10 + -8) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + 0x28);
  *(ulonglong *)(local_res10 + -0x18) = uVar1 ^ param_1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x28) = 4;
  *(undefined4 *)(local_res10 + -0x10 + *(longlong *)(local_res10 + -0x28)) = 0;
  *(undefined4 *)(local_res10 + -0x10) = *(undefined4 *)(local_res10 + -0x10);
  if (*(int *)(local_res10 + -0x10) < 0) {
    *(undefined4 *)(local_res10 + -0xc) = 0xffffffff;
  }
  *(undefined8 *)(local_res10 + -0x18) = 0x14dd86f43;
  FUN_16628aec7();
  return;
}



// FUNCTION 14dd86fbe FUN_14dd86fbe body=135 status=ok
// SIG undefined FUN_14dd86fbe(void)

void FUN_14dd86fbe(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_15b854f2a(param_1,unaff_retaddr,FUN_15b854f2a);
  return;
}



// FUNCTION 14dd872b8 FUN_14dd872b8 body=28 status=ok
// SIG undefined FUN_14dd872b8(void)

void FUN_14dd872b8(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd87368 FUN_14dd87368 body=26 status=ok
// SIG undefined FUN_14dd87368(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c5715) overlaps instruction at (ram,0x00014d7c5714)
    */
/* WARNING: Removing unreachable block (ram,0x85def100) */

void FUN_14dd87368(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  do {
  } while (&stack0x00000000 == &DAT_fffffffffffffff0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd87499 FUN_14dd87499 body=313 status=ok
// SIG undefined FUN_14dd87499(void)

void FUN_14dd87499(void)

{
  uint *unaff_R15;
  
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = 0x682e2285 - *unaff_R15;
  FUN_161151455();
  return;
}



// FUNCTION 14dd875db FUN_14dd875db body=183 status=ok
// SIG undefined FUN_14dd875db(void)

void FUN_14dd875db(void)

{
  FUN_1628b934f();
  return;
}



// FUNCTION 14dd8784c FUN_14dd8784c body=483 status=ok
// SIG undefined FUN_14dd8784c(void)

void FUN_14dd8784c(undefined8 param_1)

{
  FUN_157204f7b(param_1,FUN_157204f7b);
  return;
}



// FUNCTION 14dd8797f FUN_14dd8797f body=463 status=ok
// SIG undefined FUN_14dd8797f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd87a35) */
/* WARNING: Removing unreachable block (ram,0x00014dd87a3b) */

void FUN_14dd8797f(ulonglong param_1)

{
  ulonglong local_res10;
  
  FUN_15708acbd(param_1,FUN_15708acbd,local_res10 | param_1);
  return;
}



// FUNCTION 14dd87bef FUN_14dd87bef body=194 status=ok
// SIG undefined FUN_14dd87bef(void)

void FUN_14dd87bef(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_1626f9646;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x28) = param_1;
  *(undefined8 *)(uVar1 - 0x30) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x38) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x40) = unaff_R13;
  *(code **)(uVar1 - 0x30) = FUN_14dd87cb1;
  *(undefined1 **)(uVar1 - 0x38) = &LAB_1626f95f2;
  return;
}



// FUNCTION 14dd87cb1 FUN_14dd87cb1 body=195 status=ok
// SIG undefined FUN_14dd87cb1(void)

void FUN_14dd87cb1(undefined8 param_1,undefined8 param_2)

{
  FUN_162b19b51(FUN_162b19b51,param_2);
  return;
}



// FUNCTION 14dd8830b FUN_14dd8830b body=347 status=ok
// SIG undefined FUN_14dd8830b(void)

/* WARNING: Removing unreachable block (ram,0x000160c84e03) */
/* WARNING: Removing unreachable block (ram,0x000160c84d55) */
/* WARNING: Removing unreachable block (ram,0x000160c84dda) */
/* WARNING: Removing unreachable block (ram,0x000160c84dde) */
/* WARNING: Removing unreachable block (ram,0x000160c84dfd) */
/* WARNING: Removing unreachable block (ram,0x000165a77255) */
/* WARNING: Removing unreachable block (ram,0x00014dd883a6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x000160c84d27 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd8830b(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong in_RAX;
  undefined1 *puVar10;
  longlong unaff_RSI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  int iVar2;
  
  *(byte *)(unaff_RSI + 0x110) = ~param_4;
  bVar4 = (in_NT & 1) != 0;
  bVar5 = (in_IF & 1) != 0;
  bVar6 = (in_TF & 1) != 0;
  bVar7 = (in_AF & 1) != 0;
  bVar8 = (in_ID & 1) != 0;
  bVar9 = (in_AC & 1) != 0;
  puVar3 = local_res10;
  if (!bVar6) {
    puVar3 = local_res18;
  }
  *(undefined8 *)(puVar3 + -8) = 0;
  *(longlong *)(puVar3 + -8) = *(longlong *)(puVar3 + -8) + in_RAX;
  *(undefined4 *)(puVar3 + -8) = 0xcc4b4bfc;
  uVar1 = *(uint *)(puVar3 + -8);
  iVar2 = *(int *)(puVar3 + -8);
  *(int *)(puVar3 + -8) = *(int *)(puVar3 + -8) + 0x7ddcd6c7;
  *(undefined4 *)(puVar3 + -4) = 0;
  puVar10 = puVar3 + -0x10;
  *(ulonglong *)(puVar3 + -0x10) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)SCARRY4(iVar2,0x7ddcd6c7) * 0x800 |
       (ulonglong)bVar5 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)(*(int *)(puVar3 + -8) < 0) * 0x80 |
       (ulonglong)(*(int *)(puVar3 + -8) == 0) * 0x40 | (ulonglong)bVar7 * 0x10 |
       (ulonglong)((POPCOUNT(*(uint *)(puVar3 + -8) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0x82232938 < uVar1) | (ulonglong)bVar8 * 0x200000 | (ulonglong)bVar9 * 0x40000;
  *(ushort *)(puVar3 + -0x10) = *(ushort *)(puVar3 + -0x10) & 0x100;
  *(ulonglong *)(puVar3 + -0x18) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)(*(short *)(puVar3 + -0x10) < 0) * 0x80 |
       (ulonglong)(*(short *)(puVar3 + -0x10) == 0) * 0x40 | (ulonglong)bVar7 * 0x10 |
       (ulonglong)((POPCOUNT(*(ushort *)(puVar3 + -0x10) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)bVar8 * 0x200000 | (ulonglong)bVar9 * 0x40000;
  *(int *)(puVar3 + -0x18) = *(int *)(puVar3 + -0x18) << 0x19;
  *(uint *)(puVar3 + -0x18) = *(uint *)(puVar3 + -0x18) >> 0x1f;
  if (*(int *)(puVar3 + -0x18) != 0) {
    puVar10 = puVar3 + -8;
  }
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar10 + 4);
  FUN_1576457af(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dd8859f FUN_14dd8859f body=285 status=ok
// SIG undefined FUN_14dd8859f(void)

longlong FUN_14dd8859f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15653e0b0();
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dd886c4 FUN_14dd886c4 body=187 status=ok
// SIG undefined FUN_14dd886c4(void)

void FUN_14dd886c4(void)

{
  FUN_1624d0f10();
  return;
}



// FUNCTION 14dd888b6 FUN_14dd888b6 body=325 status=ok
// SIG undefined FUN_14dd888b6(void)

/* WARNING: Instruction at (ram,0x00014dd888d1) overlaps instruction at (ram,0x00014dd888d0)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd888ca) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dd888de */
/* WARNING: Removing unreachable block (ram,0x00014dd8895e) */
/* WARNING: Removing unreachable block (ram,0x00016281539f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd888b6(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  int unaff_R15D;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  
  uVar1 = param_4 + unaff_R15D + 0x6bdf2cd7;
  if ((int)uVar1 < 0) {
    uVar1 = (~uVar1 + 1) - (-1 - param_3);
    FUN_165ff94fc(in_stack_00000010,in_stack_00000008,uStackX_18,uVar1 * 0x400000 | uVar1 >> 10);
    return;
  }
  FUN_1628152e3();
  return;
}



// FUNCTION 14dd88a07 FUN_14dd88a07 body=150 status=ok
// SIG undefined FUN_14dd88a07(void)

void FUN_14dd88a07(void)

{
  ushort *puVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  longlong local_res20;
  
  puVar1 = (ushort *)(&stack0xfffffffff1207b4d + unaff_RBP);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
                    /* WARNING: Read-only address (ram,0x00014d7a8da8) is written */
  LOCK();
  uRam000000014d7a8da8 = (undefined1)in_RAX;
  uVar2 = in_RAX & 0xffffffffffffff00;
  UNLOCK();
  *(ulonglong *)(local_res20 + -8) = uVar2;
  *(ulonglong *)(local_res20 + -0x10) = uVar2;
  *(ulonglong *)(local_res20 + -0x18) = uVar2;
  *(undefined4 *)(local_res20 + -0x18) = 0xf72b66e;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  uVar2 = *(ulonglong *)(local_res20 + -0x28);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  FUN_161a866e2(uStackX_10);
  return;
}



// FUNCTION 14dd88a9e FUN_14dd88a9e body=21 status=ok
// SIG undefined FUN_14dd88a9e(void)

void FUN_14dd88a9e(void)

{
  return;
}



// FUNCTION 14dd88bf6 FUN_14dd88bf6 body=420 status=ok
// SIG undefined FUN_14dd88bf6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd88c48) */
/* WARNING: Removing unreachable block (ram,0x00014dd88c85) */

undefined8 FUN_14dd88bf6(void)

{
  longlong unaff_R12;
  
  return *(undefined8 *)(unaff_R12 + -8);
}



// FUNCTION 14dd88d0c FUN_14dd88d0c body=136 status=ok
// SIG undefined FUN_14dd88d0c(void)

void FUN_14dd88d0c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_R11;
  
  FUN_15b68f907(FUN_15b68f907,param_2,param_3 & in_R11 ^ 0xffffffffffffffff);
  FUN_164bfa6d2(FUN_164bfa6d2,param_2);
  return;
}



// FUNCTION 14dd88d96 FUN_14dd88d96 body=155 status=ok
// SIG undefined FUN_14dd88d96(void)

void FUN_14dd88d96(undefined8 param_1,undefined8 param_2)

{
  FUN_164bfa6d2(FUN_164bfa6d2,param_2);
  return;
}



// FUNCTION 14dd88ee9 thunk_FUN_14dd88ef9 body=10 status=ok
// SIG undefined thunk_FUN_14dd88ef9(void)

void thunk_FUN_14dd88ef9(void)

{
  FUN_14dd88ef9();
  return;
}



// FUNCTION 14dd88ef9 FUN_14dd88ef9 body=393 status=ok
// SIG undefined FUN_14dd88ef9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd88f96) */
/* WARNING: Removing unreachable block (ram,0x00014dd88fa2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd88ef9(void)

{
  return;
}



// FUNCTION 14dd8901f FUN_14dd8901f body=64 status=ok
// SIG undefined FUN_14dd8901f(void)

/* WARNING: Instruction at (ram,0x00014dd8903f) overlaps instruction at (ram,0x00014dd8903e)
    */

void FUN_14dd8901f(void)

{
  longlong unaff_RDI;
  undefined8 in_R10;
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
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 auStackX_8 [8];
  undefined8 uStack_8;
  
  *(undefined4 *)((longlong)auStackX_8 + unaff_RDI) = 0x2aab9490;
  *(ulonglong *)((longlong)auStackX_8 + unaff_RDI + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)auStackX_8 + unaff_RDI + -8) =
       *(ulonglong *)((longlong)auStackX_8 + unaff_RDI + -8) & 0xfffffffffffffffb;
  *(undefined8 *)((longlong)auStackX_8 + unaff_RDI + -8) = in_R10;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RDI) = in_R10;
  *(undefined **)((longlong)auStackX_8 + unaff_RDI + -8) = &DAT_14dd89067;
  return;
}



// FUNCTION 14dd8920a FUN_14dd8920a body=186 status=ok
// SIG undefined FUN_14dd8920a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd892ba) */
/* WARNING: Removing unreachable block (ram,0x00014dd892c0) */
/* WARNING: Removing unreachable block (ram,0x00014dd892c5) */

void FUN_14dd8920a(void)

{
  int in_stack_00000028;
  
  if (in_stack_00000028 < 0) {
    FUN_15af6f7a7();
    return;
  }
  FUN_15af6f7a7();
  return;
}



// FUNCTION 14dd892c5 FUN_14dd892c5 body=128 status=ok
// SIG undefined FUN_14dd892c5(void)

void FUN_14dd892c5(void)

{
  FUN_16531e61d();
  return;
}



// FUNCTION 14dd893d0 FUN_14dd893d0 body=101 status=ok
// SIG undefined FUN_14dd893d0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd89431) overlaps instruction at (ram,0x00014dd89430)
    */

void FUN_14dd893d0(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong in_R11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar4;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff04b0814 + in_R11);
  *(uint *)puVar1 = 0xa69b6a89;
  *(uint *)puVar1 = (uint)*puVar1 + 0xe4e9b33;
  *(uint *)puVar1 = ~(uint)*puVar1;
  *(uint *)puVar1 = (uint)*puVar1 + 2;
  uVar4 = *puVar1;
  uVar3 = *puVar1;
  *(uint *)puVar1 = -(uint)*puVar1;
  puVar1[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(0,(uint)uVar3) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((int)(uint)*puVar1 < 0) * 0x80 | (ulonglong)((uint)*puVar1 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT((uint)*puVar1 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)((uint)uVar4 != 0) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[-1] = puVar1[-1] | 0x80;
  uVar4 = puVar1[-1];
  if ((uVar4 & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)puVar1 = (uint)*puVar1 + 0x598d5612;
  *(uint *)(puVar1 + 1) = 0;
  uVar3 = puVar1[1];
  *(uint *)(puVar1 + 1) = (uint)puVar1[1] & (uint)*puVar1;
  *(uint *)(puVar1 + 1) = (uint)puVar1[1] << 1;
  *(uint *)(puVar1 + 1) = ((uint)uVar3 + (uint)*puVar1) - (uint)puVar1[1];
  puVar2 = puVar1 + 1;
  *(uint *)((longlong)puVar1 + 0xc) = 0;
  *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc);
  uVar3 = -*puVar2;
  *puVar1 = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)SBORROW8(0,*puVar2) * 0x800 |
            (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar3 < 0) * 0x80 |
            (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
            (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)(*puVar2 != 0) |
            (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  (*(code *)0x1657541f4)(param_1,param_2,&stack0x00000000);
  return;
}



// FUNCTION 14dd897d0 FUN_14dd897d0 body=147 status=ok
// SIG undefined FUN_14dd897d0(void)

void FUN_14dd897d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1663f103c(param_1,param_2,param_3,0xffffffffeffb59f1);
  return;
}



// FUNCTION 14dd89ac0 FUN_14dd89ac0 body=224 status=ok
// SIG undefined FUN_14dd89ac0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd89b64) */

void FUN_14dd89ac0(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar7 = ~(uVar7 & param_1) & (~(uVar7 & param_1) + param_1) - ~uVar7;
  if (-1 < (longlong)uVar7) {
    uVar6 = *(ulonglong *)(unaff_RDI + -0x28) ^ param_1;
    uVar2 = FUN_14da150f8(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                                  (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,uVar7,
                          ~(unaff_RBP + param_4 + unaff_RBX));
    uVar5 = uVar2 ^ 0xffffffffffffffff | uVar6;
    uVar4 = *(undefined8 *)(unaff_R12 + -0x58);
    lVar3 = FUN_1574735ab(uVar4,(~uVar5 - ~(uVar5 & (~uVar6 | uVar2))) + uVar5 ^ 0xffffffffffffffff)
    ;
    puVar1 = (ulonglong *)(&LAB_1574735a2 + lVar3);
    *puVar1 = 0;
    *puVar1 = *puVar1 + 0x3760a5df;
    *puVar1 = *puVar1 ^ 0x3760a5df;
    *(uint *)puVar1 = 0xebcc3d4c;
    *(undefined8 *)(&DAT_15747359a + lVar3) = unaff_R13;
    uVar2 = *puVar1;
    *(uint *)puVar1 = (uint)*puVar1 | 0x86f6a045;
    *(uint *)puVar1 = ~(~((uint)uVar2 & 0x86f6a045) & (uint)*puVar1);
    uVar2 = *puVar1;
    *(undefined8 *)(&LAB_1574735a2 + lVar3) = uVar4;
    *(ulonglong *)(&DAT_15747359a + lVar3) = uVar7;
    *(undefined8 *)(&DAT_15747359a + lVar3) = unaff_R15;
    uVar7 = (ulonglong)((uint)uVar2 | 0xffcbe066);
    *(code **)(&DAT_157473592 + lVar3) = FUN_1667f7e34;
    FUN_14df20306(~(uint)uVar2 | 0x341f99);
    *(undefined8 *)(&DAT_15747359a + lVar3) = *(undefined8 *)(unaff_R12 + -0x50);
    *(ulonglong *)(&DAT_15747359a + lVar3) = uVar7;
    *(ulonglong *)(&DAT_157473592 + lVar3) = uVar7;
    *(undefined **)(&DAT_15747359a + lVar3) = &DAT_1667f7e68;
    return;
  }
  FUN_1667f7c5a();
  return;
}



// FUNCTION 14dd89be0 FUN_14dd89be0 body=229 status=ok
// SIG undefined FUN_14dd89be0(void)

/* WARNING: Removing unreachable block (ram,0x00016518b71c) */
/* WARNING: Removing unreachable block (ram,0x00016518b72d) */
/* WARNING: Removing unreachable block (ram,0x00016518b789) */
/* WARNING: Removing unreachable block (ram,0x00016518b78c) */
/* WARNING: Removing unreachable block (ram,0x00016518b722) */
/* WARNING: Removing unreachable block (ram,0x00014dd89c6b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd89be0(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong *in_R11;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  ulonglong in_stack_00000030;
  
  uVar1 = *in_R11;
  *in_R11 = ~*in_R11;
  *in_R11 = (~(uVar1 & param_1) + param_1) - *in_R11;
  *in_R11 = unaff_RBP & *in_R11 ^ 0xffffffffffffffff;
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(in_stack_00000030 + param_1 + (in_stack_00000030 & param_1) * -2 + -8) = 0x432ceb8
  ;
  FUN_164efae34(local_res20,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dd89cf2 FUN_14dd89cf2 body=126 status=ok
// SIG undefined FUN_14dd89cf2(void)

void FUN_14dd89cf2(void)

{
  FUN_162ce26fa();
  return;
}



// FUNCTION 14dd89d74 FUN_14dd89d74 body=139 status=ok
// SIG undefined FUN_14dd89d74(void)

void FUN_14dd89d74(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *in_RAX;
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | unaff_R15;
  *in_RAX = ~((-~uVar1 - (~unaff_R13 + 2)) - ~unaff_RBP & *in_RAX);
  FUN_14dbd9767(param_1,param_2,FUN_14dbd9767);
  return;
}



// FUNCTION 14dd8a242 FUN_14dd8a242 body=276 status=ok
// SIG undefined FUN_14dd8a242(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd8a2c1) */

void FUN_14dd8a242(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 uStackX_8;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  puVar3 = *(uint **)(uVar1 - 0x18);
  uVar4 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar4;
  *(undefined8 *)(uVar1 - 0x18) = uVar4;
  uVar4 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_165a27a48;
  *(undefined8 *)(uVar1 - 0x10) = uVar4;
  uVar5 = *(ulonglong *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 0x18) = uStackX_8;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & uVar5;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) << 1;
  *(ulonglong *)(uVar1 - 8) = (lVar2 + uVar5) - *(longlong *)(uVar1 - 8);
  *puVar3 = *puVar3 | 0xffffffd4;
  if ((int)*puVar3 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd8a74e FUN_14dd8a74e body=188 status=ok
// SIG undefined FUN_14dd8a74e(void)

void FUN_14dd8a74e(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined4 unaff_retaddr;
  
  puVar1 = (undefined8 *)
           (&stack0xfffffffff12fcd20 +
           ~(~(CONCAT44(unaff_retaddr,0x38d97c59) & 0xffffffffc9f6b14e) & 0xfffffffff9fffd5f));
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0x3eca1a2;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0x4c4a71e8;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  *(undefined4 *)((longlong)puVar1 + (puVar1[-1] ^ 0x4c4a71ec)) = 0;
  *puVar1 = &LAB_16657bf84;
  return;
}



// FUNCTION 14dd8aa83 FUN_14dd8aa83 body=125 status=ok
// SIG undefined FUN_14dd8aa83(void)

void FUN_14dd8aa83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1647b915f(param_1,param_2,param_3);
  FUN_14dd8ab03();
  return;
}



// FUNCTION 14dd8ab03 FUN_14dd8ab03 body=135 status=ok
// SIG undefined FUN_14dd8ab03(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ad86) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ac29) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ac2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd8ab03(undefined8 param_1,undefined8 param_2)

{
  undefined4 unaff_ESI;
  
  FUN_160c1aee4(unaff_ESI,param_2,0);
  return;
}



// FUNCTION 14dd8ab8e FUN_14dd8ab8e body=160 status=ok
// SIG undefined FUN_14dd8ab8e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ad86) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ac29) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ac2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd8ab8e(void)

{
  return;
}



// FUNCTION 14dd8ac2f FUN_14dd8ac2f body=165 status=ok
// SIG undefined FUN_14dd8ac2f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ad86) */

void FUN_14dd8ac2f(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_1566abfc7(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~(~(in_RAX & ~uVar1) & (~uVar1 + in_RAX) - ~(uVar1 | ~in_RAX)));
  thunk_FUN_161258533(*(ulonglong *)(0x2dd7 - (~(in_R11 - 0x2e4eU) + 2)) | in_R10,
                      thunk_FUN_161258533,
                      ~((~in_R10 | *(ulonglong *)(in_R11 + -0x68)) + in_R10 + 1) &
                      (*(ulonglong *)(in_R11 + -0x68) | in_R10));
  return;
}



// FUNCTION 14dd8acd4 FUN_14dd8acd4 body=320 status=ok
// SIG undefined FUN_14dd8acd4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ad86) */

void FUN_14dd8acd4(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  thunk_FUN_161258533(*(ulonglong *)(0x2dd7 - (~(in_R11 - 0x2e4eU) + 2)) | in_R10,
                      thunk_FUN_161258533,
                      ~((~in_R10 | *(ulonglong *)(in_R11 + -0x68)) + in_R10 + 1) &
                      (*(ulonglong *)(in_R11 + -0x68) | in_R10));
  return;
}



// FUNCTION 14dd8ae20 FUN_14dd8ae20 body=150 status=ok
// SIG undefined FUN_14dd8ae20(void)

void FUN_14dd8ae20(undefined8 param_1)

{
  FUN_16283130c(param_1);
  return;
}



// FUNCTION 14dd8afea FUN_14dd8afea body=171 status=ok
// SIG undefined FUN_14dd8afea(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8b130) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b136) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b097) */

undefined8 FUN_14dd8afea(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  longlong lVar5;
  ulonglong unaff_R12;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x30) ^ param_1) < 0) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
    uVar3 = FUN_165c6b1cf(param_1,0xffffffffffffffa0,0x3fcf1b71,
                          ~(~param_1 | uVar1) | ~(((-1 - (~uVar1 & param_1)) + param_1) - uVar1));
    uVar1 = *(ulonglong *)(~((~param_1 | unaff_R12) & (~unaff_R12 | param_1)) - 0x30);
    uVar4 = uVar1 | uVar3;
    lVar5 = (~uVar4 | ~uVar1 | ~uVar3) + uVar4 + 1;
    uVar2 = FUN_165b2ba4e(uVar4,FUN_165b2ba4e,lVar5,lVar5);
    return uVar2;
  }
  uVar2 = thunk_FUN_15745a192();
  return uVar2;
}



// FUNCTION 14dd8b097 FUN_14dd8b097 body=303 status=ok
// SIG undefined FUN_14dd8b097(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8b130) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b136) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd8b097(ulonglong param_1)

{
  undefined8 in_RAX;
  ulonglong unaff_R12;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(&stack0x00000020 + ~(-~param_1 - (~(unaff_R12 - (param_1 | unaff_R12)) + 2))) =
       in_RAX;
  return in_stack_00000020;
}



// FUNCTION 14dd8b136 FUN_14dd8b136 body=168 status=ok
// SIG undefined FUN_14dd8b136(void)

void FUN_14dd8b136(void)

{
  return;
}



// FUNCTION 14dd8b1de FUN_14dd8b1de body=135 status=ok
// SIG undefined FUN_14dd8b1de(void)

void FUN_14dd8b1de(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong *unaff_RBP;
  undefined8 uStackX_10;
  ulonglong in_stack_00000028;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = 0x4fc085c0;
  uVar2 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP | 0xffffffffb03f7a3f;
  *unaff_RBP = ~(~(uVar2 & 0xffffffffb03f7a3f) & *unaff_RBP);
  *unaff_RBP = *unaff_RBP - (param_1 & uVar1 ^ 0xffffffffffffffff);
  *unaff_RBP = -*unaff_RBP;
  FUN_161da0f1c(uStackX_10,FUN_161da0f1c,
                in_stack_00000028 + in_RAX + (in_stack_00000028 & in_RAX) * -2);
  return;
}



// FUNCTION 14dd8b326 FUN_14dd8b326 body=175 status=ok
// SIG undefined FUN_14dd8b326(void)

void FUN_14dd8b326(void)

{
  return;
}



// FUNCTION 14dd8b505 FUN_14dd8b505 body=141 status=ok
// SIG undefined FUN_14dd8b505(void)

void FUN_14dd8b505(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161886924(FUN_161886924,*(undefined8 *)(unaff_R12 + -0x80),*(undefined8 *)(unaff_R12 + -0x80),
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  FUN_14dd8b593();
  return;
}



// FUNCTION 14dd8b593 FUN_14dd8b593 body=276 status=ok
// SIG undefined FUN_14dd8b593(void)

void FUN_14dd8b593(void)

{
  longlong in_RAX;
  
  FUN_162d4ce9e(-1 - in_RAX);
  return;
}



// FUNCTION 14dd8b63f FUN_14dd8b63f body=6 status=ok
// SIG undefined FUN_14dd8b63f(void)

void FUN_14dd8b63f(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dd8b645 FUN_14dd8b645 body=126 status=ok
// SIG undefined FUN_14dd8b645(void)

void ** FUN_14dd8b645(void)

{
  void **in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong in_R9;
  longlong unaff_R12;
  
  if (in_R9 == 0xcc502) {
    return in_RAX;
  }
  if (in_R9 != 0xcc503) {
    return in_RAX;
  }
  FUN_166098270();
  *(undefined8 *)(unaff_R12 + -8) = 0x45ae87a;
  *(undefined8 *)(unaff_R12 + -0x10) = unaff_RSI;
  *(undefined8 *)(unaff_R12 + -0x18) = unaff_RSI;
  *(undefined8 *)(unaff_R12 + -0x20) = unaff_RBP;
  *(undefined8 *)(unaff_R12 + -0x10) = 0x156ef2e25;
  return &ExceptionList;
}



// FUNCTION 14dd8b775 FUN_14dd8b775 body=71 status=ok
// SIG undefined FUN_14dd8b775(void)

void FUN_14dd8b775(void)

{
  return;
}



// FUNCTION 14dd8b7be FUN_14dd8b7be body=79 status=ok
// SIG undefined FUN_14dd8b7be(void)

undefined8 FUN_14dd8b7be(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 != 0x62c23) {
    return in_RAX;
  }
  uVar1 = FUN_166c264b0(param_1,FUN_166c264b0);
  return uVar1;
}



// FUNCTION 14dd8b8c1 FUN_14dd8b8c1 body=146 status=ok
// SIG undefined FUN_14dd8b8c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd8b9df) overlaps instruction at (ram,0x00014dd8b9de)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba83) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba8e) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba89) */
/* WARNING: Removing unreachable block (ram,0x000165ba410b) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b954) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b9df) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b9d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd8b9de) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9751) */

void FUN_14dd8b8c1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1572e183c(param_1,FUN_1572e183c,0,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd8b954 FUN_14dd8b954 body=314 status=ok
// SIG undefined FUN_14dd8b954(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd8b9df) overlaps instruction at (ram,0x00014dd8b9de)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba83) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba8e) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ba89) */

void FUN_14dd8b954(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  unkbyte10 Var1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R15;
  unkbyte10 in_ST0;
  undefined8 local_res8;
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  undefined8 local_8;
  
  uVar4 = unaff_RBX - param_3;
  local_8 = CONCAT44(local_8._4_4_,0xd44b21c7);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_8._4_4_ = 0xffffffff;
  if ((local_8 != 0x764fb593) || (param_1 = param_1 + -1, param_1 == 0)) {
    param_2 = uVar4 | unaff_R15;
  }
  uVar3 = FUN_14df3bdba(param_1,param_2);
  uVar3 = local_res20 ^ uVar3;
  *(undefined8 *)(uVar3 - 8) = param_4;
  *(ulonglong *)(uVar3 - 0x10) = uVar4;
  *(ulonglong *)(uVar3 - 0x18) = uVar4;
  *(undefined8 *)(uVar3 - 0x20) = unaff_RDI;
  uVar2 = *(undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 0x20) = *(undefined8 *)(uVar3 - 0x20);
  *(undefined8 *)(uVar3 - 0x10) = uVar2;
  *(undefined8 *)(uVar3 - 0x18) = in_R10;
  *(undefined8 *)(uVar3 - 0x20) = local_res8;
  uVar2 = *(undefined8 *)(uVar3 - 0x20);
  *(undefined1 **)(uVar3 - 8) = &LAB_15b7f7895;
  Var1 = to_bcd(in_ST0);
  *(unkbyte10 *)((in_stack_00000010 & 0xffffffff) + 0x68) = Var1;
  *(char *)(param_1 + -0x6e) = *(char *)(param_1 + -0x6e) + (char)((ulonglong)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd8bb10 FUN_14dd8bb10 body=262 status=ok
// SIG undefined FUN_14dd8bb10(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8bb9b) */

void FUN_14dd8bb10(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15730eb7a(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  return;
}



// FUNCTION 14dd8bb9b FUN_14dd8bb9b body=109 status=ok
// SIG undefined FUN_14dd8bb9b(void)

void FUN_14dd8bb9b(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  param_1 = param_1 + ((in_RAX - param_3) + param_4) * -2;
  FUN_1617c60be(param_1,param_2,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) + in_RAX + 1) &
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),param_1);
  return;
}



// FUNCTION 14dd8be3d FUN_14dd8be3d body=76 status=ok
// SIG undefined FUN_14dd8be3d(void)

void FUN_14dd8be3d(void)

{
  return;
}



// FUNCTION 14dd8c221 FUN_14dd8c221 body=147 status=ok
// SIG undefined FUN_14dd8c221(void)

undefined8 FUN_14dd8c221(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -0x20) = &LAB_165485172;
  return uStackX_8;
}



// FUNCTION 14dd8c2b4 FUN_14dd8c2b4 body=142 status=ok
// SIG undefined FUN_14dd8c2b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8c3d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd8c2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong in_stack_00000020;
  ulonglong uVar2;
  
  uVar1 = 0x1568f9324;
  (*(code *)0x1568f9324)();
  uVar2 = ~in_stack_00000020 | unaff_RBP;
  FUN_165d747cf(uVar1,param_2);
  (*(code *)&LAB_1625e7302)
            (uVar1,0xfffffffe9a28b830,&LAB_1625e7302,param_4 << 1 | param_4 >> 7,uVar2);
  return;
}



// FUNCTION 14dd8c3d8 FUN_14dd8c3d8 body=85 status=ok
// SIG undefined FUN_14dd8c3d8(void)

void FUN_14dd8c3d8(void)

{
  return;
}



// FUNCTION 14dd8c75a FUN_14dd8c75a body=287 status=ok
// SIG undefined FUN_14dd8c75a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8c880) */
/* WARNING: Removing unreachable block (ram,0x00014dd8c870) */
/* WARNING: Removing unreachable block (ram,0x00014dd8c7bd) */

void FUN_14dd8c75a(void)

{
  byte in_CF;
  
  if ((in_CF & 1) != 0) {
    FUN_156a1441d();
    return;
  }
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd8c880 FUN_14dd8c880 body=111 status=ok
// SIG undefined FUN_14dd8c880(void)

void FUN_14dd8c880(void)

{
  FUN_14e214604();
  return;
}



// FUNCTION 14dd8cb44 FUN_14dd8cb44 body=132 status=ok
// SIG undefined FUN_14dd8cb44(void)

void FUN_14dd8cb44(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x14dd8cbd9;
  *plVar1 = -*plVar1;
  *(undefined4 *)(local_res18 + -0x18) = 0;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = &DAT_14d7ac52b;
  return;
}



// FUNCTION 14dd8cc8f FUN_14dd8cc8f body=12 status=ok
// SIG undefined FUN_14dd8cc8f(void)

void FUN_14dd8cc8f(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd8cc9b FUN_14dd8cc9b body=142 status=ok
// SIG undefined FUN_14dd8cc9b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ccf6) */
/* WARNING: Removing unreachable block (ram,0x000162a23b6a) */
/* WARNING: Removing unreachable block (ram,0x000165c0cfd6) */
/* WARNING: Removing unreachable block (ram,0x00014dd8cd16) */

void FUN_14dd8cc9b(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RSI;
  
  if (unaff_RSI == 0x12532b) {
    FUN_16131bb16();
    return;
  }
  if ((longlong)(unaff_RSI - 0x12532b) < 0) {
    if (unaff_RSI == (CONCAT44((int)((ulonglong)in_RAX >> 0x20),0x74454a51) ^ 0x7457197d)) {
      FUN_162a23b6a();
      return;
    }
    FUN_162a23b76();
    return;
  }
  FUN_165c0cf3e();
  return;
}



// FUNCTION 14dd8cf0d FUN_14dd8cf0d body=772 status=ok
// SIG undefined FUN_14dd8cf0d(void)

void FUN_14dd8cf0d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong in_RAX;
  undefined4 unaff_EDI;
  ulonglong in_R11;
  longlong unaff_retaddr;
  
  *(undefined4 *)(&stack0x30a5d859 + -(~in_R11 + 2)) = unaff_EDI;
  *(undefined8 *)(&stack0xfffffffff67dd26b + unaff_retaddr) = param_1;
  (&stack0xfffffffff67dd263)[unaff_retaddr] = 0x2f;
  (&stack0xfffffffff67dd26b)[unaff_retaddr] = (&stack0xfffffffff67dd263)[unaff_retaddr];
  uVar1 = *(undefined8 *)(&stack0xfffffffff67dd26b + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff67dd26b + unaff_retaddr) = in_RAX << 1 | (ulonglong)(in_RAX < 0);
  (*(code *)0x164b1bbcc)(CONCAT71((int7)((ulonglong)uVar1 >> 8),~(~(byte)uVar1 & 0xe7)),0);
  return;
}



// FUNCTION 14dd8d02c FUN_14dd8d02c body=40 status=ok
// SIG undefined FUN_14dd8d02c(void)

void FUN_14dd8d02c(void)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 *local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res18 = unaff_RBX;
  local_res18[-1] = unaff_RBX;
  local_res18[-2] = unaff_R14;
  local_res18[-3] = unaff_R14;
  local_res18[-2] = &LAB_14dd8d056;
  return;
}



// FUNCTION 14dd8d286 FUN_14dd8d286 body=126 status=ok
// SIG undefined FUN_14dd8d286(void)

undefined8 FUN_14dd8d286(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  
  uVar6 = (in_R10 & unaff_RBP | unaff_R12) & (~(~unaff_R12 & unaff_R15) + unaff_R15) - unaff_R12;
  lVar5 = -uVar6;
  uVar3 = FUN_156d4611c(param_1,~((int)lVar5 - 1U));
  *(undefined8 *)(&stack0xfffffffea92b9ee4 + unaff_RDI) = *(undefined8 *)(lVar5 + -0x79);
  *(ulonglong *)(&stack0xfffffffea92b9eec + unaff_RDI) =
       *(ulonglong *)(&stack0xfffffffea92b9ee4 + unaff_RDI);
  uVar1 = *(ulonglong *)(&stack0xfffffffea92b9eec + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffea92b9eec + unaff_RDI) = uVar3;
  uVar2 = *(ulonglong *)(&stack0xfffffffea92b9eec + unaff_RDI);
  *(undefined8 *)(&stack0xfffffffea92b9eec + unaff_RDI) = *(undefined8 *)(lVar5 + -0x91);
  *(undefined8 *)(&stack0xfffffffea92b9ee4 + unaff_RDI) = 0x14dd8d396;
  uVar4 = FUN_15706cd1c(param_1,0xffffffffffffffff - (uVar1 & uVar3) & ~(~uVar1 & ~uVar2));
  *(ulonglong *)(&stack0xfffffffea92b9efc + unaff_RDI) = ~uVar6;
  *(longlong *)(&stack0xfffffffea92b9f0c + unaff_RDI) = param_3 + -0xce04fc4;
  *(undefined8 *)(&stack0xfffffffea92b9f04 + unaff_RDI) = uVar4;
  *(undefined8 *)(&stack0xfffffffea92b9efc + unaff_RDI) = uVar4;
  *(undefined8 *)(&stack0xfffffffea92b9f04 + unaff_RDI) = 0x156ef2e25;
  return *(undefined8 *)(&stack0xfffffffea92b9efc + unaff_RDI);
}



// FUNCTION 14dd8d305 FUN_14dd8d305 body=230 status=ok
// SIG undefined FUN_14dd8d305(void)

undefined8 FUN_14dd8d305(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong lVar4;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong local_res8 [4];
  
  lVar4 = unaff_RDI - unaff_RBP;
  *(undefined8 *)((longlong)local_res8 + lVar4 + -8) = *(undefined8 *)(unaff_R12 + -0x78);
  *(ulonglong *)((longlong)local_res8 + lVar4) = *(ulonglong *)((longlong)local_res8 + lVar4 + -8);
  uVar1 = *(ulonglong *)((longlong)local_res8 + lVar4);
  *(ulonglong *)((longlong)local_res8 + lVar4) = in_RAX;
  uVar2 = *(ulonglong *)((longlong)local_res8 + lVar4);
  *(undefined8 *)((longlong)local_res8 + lVar4) = *(undefined8 *)(unaff_R12 + -0x90);
  *(undefined8 *)((longlong)local_res8 + lVar4 + -8) = 0x14dd8d396;
  uVar3 = FUN_15706cd1c(param_1,0xffffffffffffffff - (uVar1 & in_RAX) & ~(~uVar1 & ~uVar2));
  *(undefined8 *)((longlong)local_res8 + lVar4 + 0x10) = unaff_RBX;
  *(longlong *)(&stack0x00000028 + lVar4) = param_3 + -0xce04fc4;
  *(undefined8 *)((longlong)local_res8 + lVar4 + 0x18) = uVar3;
  *(undefined8 *)((longlong)local_res8 + lVar4 + 0x10) = uVar3;
  *(undefined8 *)((longlong)local_res8 + lVar4 + 0x18) = 0x156ef2e25;
  return *(undefined8 *)((longlong)local_res8 + lVar4 + 0x10);
}



// FUNCTION 14dd8d538 FUN_14dd8d538 body=181 status=ok
// SIG undefined FUN_14dd8d538(void)

void FUN_14dd8d538(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  
  FUN_16282f28b(param_1,~param_1,unaff_R12 + param_3 + 0xec22710,
                *(longlong *)(unaff_RDI + -0x30) + param_1);
  return;
}



// FUNCTION 14dd8d86f FUN_14dd8d86f body=49 status=ok
// SIG undefined FUN_14dd8d86f(void)

void FUN_14dd8d86f(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 unaff_R15;
  
  *param_3 = unaff_R15;
  return;
}



// FUNCTION 14dd8da32 FUN_14dd8da32 body=27 status=ok
// SIG undefined FUN_14dd8da32(void)

void FUN_14dd8da32(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd8dab7 FUN_14dd8dab7 body=169 status=ok
// SIG undefined FUN_14dd8dab7(void)

void FUN_14dd8dab7(void)

{
  return;
}



// FUNCTION 14dd8dc98 FUN_14dd8dc98 body=150 status=ok
// SIG undefined FUN_14dd8dc98(void)

void FUN_14dd8dc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R10;
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
  *local_res10 = uVar2;
  local_res10[-1] = uVar2;
  local_res10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res10[-3] = in_R10;
  local_res10[-2] = param_3;
  *local_res10 = 0x101e38e;
  uVar2 = local_res10[-2];
  local_res10[-2] = uVar2;
  local_res10[-3] = uVar2;
  local_res10[-4] = uVar2;
  local_res10[-2] = &LAB_14dd8dd33;
  local_res10[-3] = &LAB_16643a0fe;
  return;
}



// FUNCTION 14dd8dd3f FUN_14dd8dd3f body=127 status=ok
// SIG undefined FUN_14dd8dd3f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166057f10) */
/* WARNING: Removing unreachable block (ram,0x000166057fb7) */
/* WARNING: Removing unreachable block (ram,0x000166057fbd) */
/* WARNING: Removing unreachable block (ram,0x000166057fc2) */
/* WARNING: Removing unreachable block (ram,0x00014dd8de4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd8de51) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ded2) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ded8) */
/* WARNING: Removing unreachable block (ram,0x00014dd8dedd) */
/* WARNING: Removing unreachable block (ram,0x000157607e24) */
/* WARNING: Removing unreachable block (ram,0x000157607c09) */
/* WARNING: Removing unreachable block (ram,0x000166057e82) */
/* WARNING: Removing unreachable block (ram,0x000166057f0a) */
/* WARNING: Removing unreachable block (ram,0x000157607afc) */
/* WARNING: Removing unreachable block (ram,0x000157607b8c) */
/* WARNING: Removing unreachable block (ram,0x0001664de791) */
/* WARNING: Removing unreachable block (ram,0x0001664de822) */
/* WARNING: Removing unreachable block (ram,0x0001664de82e) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd124) */
/* WARNING: Removing unreachable block (ram,0x000157607b92) */
/* WARNING: Removing unreachable block (ram,0x000157607c0c) */
/* WARNING: Removing unreachable block (ram,0x000157607c9f) */
/* WARNING: Removing unreachable block (ram,0x000157607ca5) */
/* WARNING: Removing unreachable block (ram,0x000157607caa) */
/* WARNING: Removing unreachable block (ram,0x000157607e27) */
/* WARNING: Removing unreachable block (ram,0x00016604ce73) */
/* WARNING: Removing unreachable block (ram,0x000157607e86) */
/* WARNING: Removing unreachable block (ram,0x000157607e91) */
/* WARNING: Removing unreachable block (ram,0x000157607e8c) */
/* WARNING: Removing unreachable block (ram,0x000157265fba) */
/* WARNING: Removing unreachable block (ram,0x0001572660bf) */
/* WARNING: Removing unreachable block (ram,0x0001572660c5) */
/* WARNING: Removing unreachable block (ram,0x000162218c3a) */
/* WARNING: Removing unreachable block (ram,0x000166d7e95f) */

void FUN_14dd8dd3f(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  short unaff_BX;
  undefined8 unaff_RDI;
  short *in_R10;
  undefined8 unaff_R15;
  longlong local_res8;
  ulonglong *local_res20;
  
  *in_R10 = unaff_BX + -0x100;
  puVar1 = local_res20 + -1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + local_res8;
  local_res20[-2] = unaff_RDI;
  local_res20[-3] = unaff_RDI;
  uVar2 = local_res20[-1];
  local_res20[-4] = unaff_R15;
  local_res20[-5] = in_RAX;
  *(undefined4 *)(local_res20 + -5) = 0xca8a22ab;
  ((ushort *)((longlong)local_res20 + -0x24))[0] = 0xffff;
  ((ushort *)((longlong)local_res20 + -0x24))[1] = 0xffff;
  *(ulonglong *)((longlong)local_res20 + local_res20[-5] + 0x3575dd45) = uVar2;
  local_res20[-4] = (ulonglong)FUN_14dd8ddbe;
  uVar4 = FUN_16488a08c();
  uVar2 = local_res20[-1];
  local_res20[-1] = local_res20[-1] & param_1;
  local_res20[-1] = ~local_res20[-1];
  local_res20[-1] = local_res20[-1] & (uVar2 | param_1);
  *local_res20 = *local_res20 ^ param_1;
  local_res20[1] = local_res20[1] ^ param_1;
  *(ushort *)local_res20 = (ushort)*local_res20 & 0xfeff;
  lVar3 = local_res20[1];
  *(ulonglong *)(lVar3 + -8) = local_res20[-2];
  *(undefined8 *)(lVar3 + -0x10) = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + -0x10);
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined1 **)(lVar3 + -8) = &LAB_157006b8a;
  *(undefined8 *)(lVar3 + -0x10) = uVar4;
  return;
}



// FUNCTION 14dd8ddbe FUN_14dd8ddbe body=284 status=ok
// SIG undefined FUN_14dd8ddbe(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166057f10) */
/* WARNING: Removing unreachable block (ram,0x000166057fb7) */
/* WARNING: Removing unreachable block (ram,0x000166057fbd) */
/* WARNING: Removing unreachable block (ram,0x000166057fc2) */
/* WARNING: Removing unreachable block (ram,0x00014dd8de4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd8de51) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ded2) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ded8) */
/* WARNING: Removing unreachable block (ram,0x00014dd8dedd) */
/* WARNING: Removing unreachable block (ram,0x000157607e24) */
/* WARNING: Removing unreachable block (ram,0x000157607c09) */
/* WARNING: Removing unreachable block (ram,0x000166057e82) */
/* WARNING: Removing unreachable block (ram,0x000166057f0a) */
/* WARNING: Removing unreachable block (ram,0x000157607afc) */
/* WARNING: Removing unreachable block (ram,0x000157607b8c) */
/* WARNING: Removing unreachable block (ram,0x0001664de791) */
/* WARNING: Removing unreachable block (ram,0x0001664de822) */
/* WARNING: Removing unreachable block (ram,0x0001664de82e) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd124) */
/* WARNING: Removing unreachable block (ram,0x000157607b92) */
/* WARNING: Removing unreachable block (ram,0x000157607c0c) */
/* WARNING: Removing unreachable block (ram,0x000157607c9f) */
/* WARNING: Removing unreachable block (ram,0x000157607ca5) */
/* WARNING: Removing unreachable block (ram,0x000157607caa) */
/* WARNING: Removing unreachable block (ram,0x000157607e27) */
/* WARNING: Removing unreachable block (ram,0x00016604ce73) */
/* WARNING: Removing unreachable block (ram,0x000157607e86) */
/* WARNING: Removing unreachable block (ram,0x000157607e91) */
/* WARNING: Removing unreachable block (ram,0x000157607e8c) */
/* WARNING: Removing unreachable block (ram,0x000157265fba) */
/* WARNING: Removing unreachable block (ram,0x0001572660bf) */
/* WARNING: Removing unreachable block (ram,0x0001572660c5) */
/* WARNING: Removing unreachable block (ram,0x000162218c3a) */
/* WARNING: Removing unreachable block (ram,0x000166d7e95f) */

void FUN_14dd8ddbe(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uStackX_8;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = uStackX_8;
  *(undefined8 *)(param_1 - 0x10) = in_RAX;
  uVar1 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined1 **)(param_1 - 8) = &LAB_157006b8a;
  *(undefined8 *)(param_1 - 0x10) = uVar1;
  return;
}



// FUNCTION 14dd8dedd FUN_14dd8dedd body=131 status=ok
// SIG undefined FUN_14dd8dedd(void)

void FUN_14dd8dedd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15b46e442(FUN_15b46e442,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd8df60 FUN_14dd8df60 body=141 status=ok
// SIG undefined FUN_14dd8df60(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8dfbb) */

void FUN_14dd8df60(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined8 local_res20;
  
  FUN_156cf01eb(param_1,local_res20,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd8e3b9 FUN_14dd8e3b9 body=174 status=ok
// SIG undefined FUN_14dd8e3b9(void)

void FUN_14dd8e3b9(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) - lVar2;
  *(longlong *)(uVar1 - 0x10) = -*(longlong *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x160bdb5ab;
  FUN_160bdb57a(param_1,uVar3);
  return;
}



// FUNCTION 14dd8e467 FUN_14dd8e467 body=155 status=ok
// SIG undefined FUN_14dd8e467(void)

void FUN_14dd8e467(ulonglong param_1)

{
  ulonglong uVar1;
  short in_AX;
  short unaff_BX;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_15731f478(param_1,CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_RDI + -0x50) >> 0x10),
                                 in_AX + unaff_BX),uVar1,uVar1 + param_1 + (uVar1 & param_1) * -2);
  return;
}



// FUNCTION 14dd8e61f FUN_14dd8e61f body=186 status=ok
// SIG undefined FUN_14dd8e61f(void)

void FUN_14dd8e61f(void)

{
  char in_stack_00000040;
  
  if (-1 < in_stack_00000040) {
    FUN_166cf8e03();
    return;
  }
  thunk_FUN_166cf8e03();
  return;
}



// FUNCTION 14dd8e782 FUN_14dd8e782 body=250 status=ok
// SIG undefined FUN_14dd8e782(void)

ulonglong FUN_14dd8e782(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  
  uVar1 = ~param_1;
  uVar2 = ~(~(0xffffffffffffffff - unaff_RDI) & ~param_1) + ~param_1 + 1 | param_1;
  FUN_164a5ebd2();
  if ((longlong)(*(ulonglong *)(uVar2 - 0xa0) ^ param_1) < 0) {
    uVar1 = FUN_161bc9bcb();
    return uVar1;
  }
  return ~unaff_RDI & uVar1 | unaff_RDI;
}



// FUNCTION 14dd8e91f FUN_14dd8e91f body=256 status=ok
// SIG undefined FUN_14dd8e91f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ec26) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ec2c) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ea19) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ea1f) */
/* WARNING: Removing unreachable block (ram,0x00014dd8eb5a) */
/* WARNING: Removing unreachable block (ram,0x0001651dd1e6) */
/* WARNING: Removing unreachable block (ram,0x00014dd8eb66) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ec1b) */
/* WARNING: Removing unreachable block (ram,0x00014dcd9080) */
/* WARNING: Removing unreachable block (ram,0x00014dd8e9a2) */
/* WARNING: Removing unreachable block (ram,0x00014dd8e9de) */
/* WARNING: Removing unreachable block (ram,0x000165c84c7b) */

void FUN_14dd8e91f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_R11;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_retaddr ^ 0x56ef36df)) = in_R11;
  if (~((param_1 ^ 0xffffffffffffffff) & local_res18) + local_res18 ==
      ~(param_1 ^ 0xffffffffffffffff)) {
    FUN_157016be4(0xffffffffffffffff,param_2,param_3,param_4);
    FUN_1616bd1d0(FUN_1616bd1d0,0x3e7ca5c4);
    return;
  }
  FUN_162f0fa6b();
  return;
}



// FUNCTION 14dd8ea1f FUN_14dd8ea1f body=325 status=ok
// SIG undefined FUN_14dd8ea1f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ec26) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ec2c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd9080) */
/* WARNING: Removing unreachable block (ram,0x00014dd8eb66) */

void FUN_14dd8ea1f(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 unaff_R12W;
  undefined8 unaff_R13;
  undefined2 *unaff_R14;
  longlong local_res10;
  undefined8 uStackX_18;
  longlong local_res20;
  
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  uVar6 = (undefined1)param_1;
  *unaff_R14 = unaff_R12W;
  *(undefined8 *)(param_6 + -8) = unaff_RSI;
  *(undefined8 *)(param_6 + -0x10) = param_3;
  *(undefined8 *)(param_6 + -0x18) = param_3;
  *(undefined8 *)(param_6 + -0x20) = in_RAX;
  *(undefined4 *)(param_6 + -0x20) = 0x3cb2b268;
  *(undefined4 *)(param_6 + -0x1c) = 0;
  *(ulonglong *)(param_6 + -0x10) =
       -((*(ulonglong *)(param_6 + -0x20) ^ 0x3cb2b268) - *(longlong *)(param_6 + -8));
  *(undefined8 *)(param_6 + -8) = 0;
  *(longlong *)(param_6 + -8) = *(longlong *)(param_6 + -8) + -0x161ce715a;
  *(ulonglong *)(param_6 + -8) = ~*(ulonglong *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x18) = 0x14dd8eace;
  uVar5 = FUN_161ce7119();
  puVar1 = (ulonglong *)(param_6 + local_res10 + -0xa769b4f);
  *puVar1 = param_2;
  uVar9 = (~(*puVar1 & uVar5) + uVar5) - ~*puVar1;
  uVar8 = (param_2 & uVar5 ^ 0xffffffffffffffff) & uVar9;
  *puVar1 = uVar5;
  puVar1[-1] = (ulonglong)FUN_161ce7119;
  lVar10 = *(longlong *)(local_res20 + -0x48);
  puVar1[-1] = lVar10;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar2 = puVar1[-1];
  puVar1[-1] = *puVar1;
  *(undefined4 *)(puVar1 + -1) = 0xfe91f22;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar3 = puVar1[-1];
  lVar10 = lVar2 + lVar10 + *puVar1;
  *(ulonglong *)((longlong)puVar1 + lVar3 + -0xfe91f22) = CONCAT71(uVar7,uVar6);
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f2a) = unaff_R13;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f32) = uStackX_18;
  *(ulonglong *)((longlong)puVar1 + lVar3 + -0xfe91f3a) = uVar9;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f3a) =
       *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f3a);
  uVar6 = 0xe5;
  uVar4 = *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f32);
  *(code **)((longlong)puVar1 + lVar3 + -0xfe91f32) = FUN_1651dd252;
  FUN_1611bc5b8();
  uVar5 = ~uVar8 | CONCAT71(uVar7,uVar6);
  *(ulonglong *)((longlong)puVar1 + lVar3 + -0xfe91f32) =
       (uVar5 ^ 0xffffffffffffffff | ~CONCAT71(uVar7,uVar6) | uVar8) + uVar5 + 1;
  uVar5 = *(ulonglong *)(lVar10 + -0x48) ^ CONCAT71(uVar7,uVar6);
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f32) = *(undefined8 *)(lVar10 + -0x90);
  *(ulonglong *)((longlong)puVar1 + lVar3 + -0xfe91f3a) = uVar5;
  *(ulonglong *)((longlong)puVar1 + lVar3 + -0xfe91f42) = uVar5;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f3a) = *(undefined8 *)(lVar10 + -8);
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f42) = uVar4;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0xfe91f4a) = uVar4;
  (*(code *)&LAB_1612c7869)();
  return;
}



// FUNCTION 14dd8eb66 FUN_14dd8eb66 body=200 status=ok
// SIG undefined FUN_14dd8eb66(void)

/* WARNING: Removing unreachable block (ram,0x00014dd8ec26) */
/* WARNING: Removing unreachable block (ram,0x00014dd8ec2c) */
/* WARNING: Removing unreachable block (ram,0x00014dcd9080) */

void FUN_14dd8eb66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_R10;
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  plVar1 = (longlong *)(local_res10 + -0x10);
  *plVar1 = (longlong)&DAT_15898c871;
  *plVar1 = *plVar1 + -0xacb37cd;
  lVar2 = *plVar1;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x655ff240;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x655ff240;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + lVar2;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  uVar3 = *(undefined8 *)(local_res10 + -0x18);
  uVar4 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(code **)(local_res10 + -0x10) = thunk_FUN_161178fac;
  thunk_FUN_14dcd9086(param_1,param_2,uVar4,uVar3);
  return;
}



// FUNCTION 14dd8ee89 FUN_14dd8ee89 body=151 status=ok
// SIG undefined FUN_14dd8ee89(void)

void FUN_14dd8ee89(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165cee0eb(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0x19439c4b);
  (*(code *)0x16117b121)();
  return;
}



// FUNCTION 14dd8ef21 FUN_14dd8ef21 body=149 status=ok
// SIG undefined FUN_14dd8ef21(void)

void FUN_14dd8ef21(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x16117b121)
            (param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                     (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3,param_4);
  return;
}



// FUNCTION 14dd8f183 FUN_14dd8f183 body=137 status=ok
// SIG undefined FUN_14dd8f183(void)

void FUN_14dd8f183(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = (~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) + in_RAX + 1;
  FUN_164b9708a(FUN_164b9708a,-(int)lVar1,*(ulonglong *)(unaff_R12 + -0x80) + in_RAX + lVar1 * -2,
                param_4 + param_2 ^ in_RAX);
  return;
}



// FUNCTION 14dd8f215 FUN_14dd8f215 body=29 status=ok
// SIG undefined FUN_14dd8f215(void)

void FUN_14dd8f215(void)

{
  return;
}



// FUNCTION 14dd8f2a3 FUN_14dd8f2a3 body=157 status=ok
// SIG undefined FUN_14dd8f2a3(void)

void FUN_14dd8f2a3(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16246a2fe(1,(unaff_RBP + -1) - ~*(ulonglong *)(unaff_RSI + -0x90));
  return;
}



// FUNCTION 14dd8f557 FUN_14dd8f557 body=3 status=ok
// SIG undefined FUN_14dd8f557(void)

void FUN_14dd8f557(void)

{
  return;
}



// FUNCTION 14dd8f5ea FUN_14dd8f5ea body=20 status=ok
// SIG undefined FUN_14dd8f5ea(void)

void FUN_14dd8f5ea(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_14d7bd50c(param_1,local_res10);
  return;
}



// FUNCTION 14dd8f6ac FUN_14dd8f6ac body=137 status=ok
// SIG undefined FUN_14dd8f6ac(void)

void FUN_14dd8f6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  longlong unaff_R12;
  longlong local_res8;
  undefined8 uStackX_10;
  
  uVar1 = *(undefined8 *)(unaff_R12 + -8);
  uVar3 = FUN_16217565b(param_1,param_2,param_3);
  lVar2 = *(longlong *)
           (&stack0xffffffffefefcf8b +
           -~(~((uVar3 | 0x517ffeaf) - 0x517ffeaf) & (in_R10 | 0xffffffffae800150)));
  *(undefined8 *)((local_res8 - lVar2) + -8) = uStackX_10;
  *(undefined8 *)((local_res8 - lVar2) + -0x10) = param_4;
  FUN_164a985c9(param_1,uVar1);
  return;
}



// FUNCTION 14dd8f735 FUN_14dd8f735 body=155 status=ok
// SIG undefined FUN_14dd8f735(void)

void FUN_14dd8f735(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 uStackX_18;
  longlong lStackX_20;
  longlong lStack0000000000000038;
  
  lStack0000000000000038 =
       unaff_R13 -
       *(longlong *)
        ((longlong)&lStackX_20 +
        (unaff_R15 - ~(~((in_RAX | 0x517ffeaf) - 0x517ffeaf) & (in_R10 | 0xffffffffae800150))));
  *(longlong *)(lStack0000000000000038 + -8) = lStackX_20;
  *(undefined8 *)(lStack0000000000000038 + -0x10) = param_4;
  FUN_164a985c9(param_1,uStackX_18,param_3,FUN_164a985c9);
  return;
}



// FUNCTION 14dd8f7d1 FUN_14dd8f7d1 body=189 status=ok
// SIG undefined FUN_14dd8f7d1(void)

/* WARNING: Removing unreachable block (ram,0x00014e0719e5) */
/* WARNING: Removing unreachable block (ram,0x00014e0719eb) */
/* WARNING: Removing unreachable block (ram,0x00014e071a81) */
/* WARNING: Removing unreachable block (ram,0x00014e071a87) */
/* WARNING: Removing unreachable block (ram,0x00016684d012) */
/* WARNING: Removing unreachable block (ram,0x00016684d093) */
/* WARNING: Removing unreachable block (ram,0x00016684d097) */
/* WARNING: Removing unreachable block (ram,0x00015b17a6dd) */
/* WARNING: Removing unreachable block (ram,0x00015afdbcfa) */
/* WARNING: Removing unreachable block (ram,0x00015b17a881) */
/* WARNING: Removing unreachable block (ram,0x00015b17a88d) */
/* WARNING: Removing unreachable block (ram,0x00014dd8f88f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014e07191f */
/* WARNING: Removing unreachable block (ram,0x00014e07195c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dd8f7d1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  if (CARRY8(*(ulonglong *)(param_3 + -0xa0),in_R10)) {
    return ~in_R10 & param_5;
  }
  uVar1 = FUN_14e0718c9();
  return uVar1;
}



// FUNCTION 14dd8f88f FUN_14dd8f88f body=697 status=ok
// SIG undefined FUN_14dd8f88f(void)

void FUN_14dd8f88f(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  code *pcVar11;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 uVar12;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  undefined8 local_res10;
  ulonglong *local_res20;
  
  puVar2 = local_res20 + -1;
  *puVar2 = unaff_RDI;
  local_res20[-2] = unaff_R14;
  local_res20[-2] = *puVar2;
  *puVar2 = 0;
  *puVar2 = *puVar2;
  local_res20[-3] = unaff_R13;
  local_res20[-4] = unaff_RBP;
  uVar3 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | 0x1623c0b88;
  *puVar2 = ~((uVar3 | 0xfffffffe9dc3f477) & *puVar2);
  lVar4 = local_res20[-3];
  local_res20[-3] = 0x14dd8f925;
  uVar7 = FUN_1623c0b63();
  local_res20[-2] = local_res20[-2];
  local_res20[-3] = unaff_RSI;
  *(undefined4 *)(local_res20 + -4) = 0xad74f33e;
  *(undefined4 *)((longlong)local_res20 + -0x1c) = 0xffffffff;
  uVar3 = *(ulonglong *)((longlong)local_res20 + local_res20[-4] + 0x528b0cba);
  local_res20[-1] = local_res20[-1] & param_1;
  local_res20[-1] = ~local_res20[-1];
  local_res20[-1] = local_res20[-1] & (uVar3 | param_1);
  uVar12 = local_res20[-2];
  local_res20[-2] = uVar7;
  local_res20[-3] = local_res10;
  uVar3 = *local_res20;
  uVar7 = local_res20[-3];
  *local_res20 = *local_res20 & param_1;
  *local_res20 = ~*local_res20;
  *local_res20 = *local_res20 & (uVar3 | param_1);
  local_res20[1] = local_res20[1] ^ param_1;
  uVar5 = local_res20[-1];
  local_res20[-1] = uVar7;
  local_res20[-2] = param_2;
  pcVar11 = FUN_165f64a9b;
  local_res20[-3] = 0x14dd8f9cb;
  uVar8 = FUN_165f64a9b(uVar5);
  uVar3 = *local_res20;
  puVar1 = (undefined8 *)((longlong)local_res20 + (unaff_R12 - unaff_R15) + 8);
  uVar5 = *puVar1;
  *puVar1 = uVar12;
  *(undefined4 *)(puVar1 + -1) = 0xd201e6a1;
  *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
  lVar6 = puVar1[-1];
  puVar1[-1] = pcVar11;
  iVar10 = (int)puVar1[-1];
  *(undefined8 *)((longlong)puVar1 + lVar6 + 0x2dfe196f) = uVar8;
  puVar1[1] = *(undefined8 *)(lVar4 + -8);
  *puVar1 = *(undefined8 *)(lVar4 + -0x98);
  puVar1[-1] = uVar7;
  puVar1[-1] = uVar5;
  puVar1[-2] = 0x14dd8fa74;
  uVar9 = FUN_16649395b();
  puVar1[-2] = -~uVar9 - (~(uVar3 ^ 0x427cc685) + 2);
  *(undefined4 *)(puVar1 + -2) = 0x554a9296;
  *(uint *)(puVar1 + -2) = *(uint *)(puVar1 + -2) ^ 0xd236d69;
  *(undefined4 *)((longlong)puVar1 + -0xc) = 0xc29fd292;
  *(int *)((longlong)puVar1 + -0xc) = *(int *)((longlong)puVar1 + -0xc) + 0x3d602d6e;
  *(uint *)((longlong)puVar1 + -0xc) = *(uint *)((longlong)puVar1 + -0xc) ^ 0xb85a4d9b;
  FUN_1623c900b(4,iVar10 + 0x62abcfc1);
  return;
}



// FUNCTION 14dd8fd33 FUN_14dd8fd33 body=300 status=ok
// SIG undefined FUN_14dd8fd33(void)

/* WARNING: Removing unreachable block (ram,0x000156edff20) */
/* WARNING: Removing unreachable block (ram,0x00014dd8fe63) */

undefined8
FUN_14dd8fd33(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 in_R10;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  bool bVar10;
  ulonglong unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong local_res18;
  ushort local_res20;
  
  *(undefined8 *)(unaff_RBX + 8) = 0;
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) ^ unaff_R13;
  puVar9 = (ulonglong *)(~(0xffffffffffffffff - param_1 | param_5) | ~(~param_5 | param_1));
  bVar10 = (local_res20 & 1) != 0;
  puVar9[-1] = param_2;
  if ((!bVar10) || (bVar10 || (local_res20 & 0x40) != 0)) {
    puVar9[-2] = in_R10;
    puVar9[-2] = unaff_RDI;
    puVar9[-3] = unaff_RDI;
    puVar9[-2] = puVar9[-1];
    puVar9[-1] = 0x4caca785;
    puVar9[-3] = param_3;
    puVar9[-4] = uStackX_8;
    uVar2 = puVar9[-1];
    puVar9[-1] = puVar9[-1] | 0xffffffffb353587a;
    puVar9[-1] = ~(~(uVar2 & 0xffffffffb353587a) & puVar9[-1]);
    puVar9[-1] = puVar9[-1] + 0x1623077f6;
    puVar9[-3] = puVar9[-4];
    puVar1 = puVar9 + -4;
    *(undefined4 *)puVar1 = 0x3ec41c2e;
    *(int *)puVar1 = (int)*puVar1 + 0x49f6e5ec;
    *(undefined4 *)(puVar9 + -5) = 0xffffffff;
    puVar9[-6] = param_4;
    puVar9[-7] = param_4;
    puVar9[-8] = param_4;
    puVar9[-6] = (ulonglong)FUN_160e1bdae;
    puVar9[-7] = 0x162307789;
    return in_RAX;
  }
  puVar9[-1] = puVar9[-1];
  puVar9[-1] = puVar9[-1] - ~unaff_R15;
  *puVar9 = puVar9[-1] + (unaff_retaddr & local_res18) * -2;
  uVar7 = puVar9[1];
  puVar9[1] = param_2;
  *puVar9 = param_2;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90);
  puVar9[-1] = unaff_RDI;
  puVar9[1] = uVar2;
  lVar8 = puVar9[-1];
  uVar2 = *puVar9;
  *puVar9 = *(ulonglong *)(lVar8 + -8);
  puVar9[-1] = uVar2;
  puVar9[-2] = uVar2;
  puVar9[-1] = *(undefined8 *)(lVar8 + -0x98);
  uVar6 = puVar9[-2];
  uVar3 = *(ulonglong *)(lVar8 + -0xa0);
  puVar9[-2] = param_3;
  puVar9[-3] = uVar3;
  if (uVar2 != 0) {
    uVar6 = FUN_156edfea3();
    return uVar6;
  }
  lVar8 = puVar9[-3];
  puVar9[-3] = local_res18;
  puVar9[-4] = uVar6;
  puVar9[-5] = unaff_RSI;
  uVar6 = puVar9[-4];
  uVar4 = puVar9[-3];
  lVar8 = lVar8 + local_res18 + (uVar3 & local_res18) * -2;
  uVar5 = puVar9[-2];
  puVar1 = puVar9 + -2;
  *puVar1 = 0;
  *puVar1 = *puVar1 + uVar7;
  puVar9[-3] = uStackX_8;
  puVar1 = puVar9 + -1;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | uVar4;
  puVar9[-4] = in_RAX;
  if (-1 < (longlong)*puVar1) {
    *puVar1 = (~*puVar1 | ~uVar4 | uVar2) + *puVar1 + 1 ^ 0xffffffffffffffff;
    uVar3 = puVar9[-2];
    *puVar9 = *puVar9 ^ uVar4;
    puVar9[-2] = puVar9[-4];
    uVar2 = puVar9[1];
    puVar9[1] = puVar9[1] & uVar4;
    puVar9[1] = puVar9[1] << 1;
    puVar9[1] = (uVar2 + uVar4) - puVar9[1];
    uVar2 = puVar9[-1];
    puVar9[-1] = uVar5;
    puVar9[-2] = uVar3;
    puVar9[-3] = uVar6;
    puVar9[-4] = uVar2;
    uVar7 = puVar9[-4];
    puVar9[-4] = 0x156d6a5ff;
    FUN_15722e9b9(uVar7,0x10);
    uVar2 = *(ulonglong *)(lVar8 + -0x60);
    uVar3 = *(ulonglong *)(lVar8 + -0x70);
    puVar9[-4] = uVar7;
    uVar4 = puVar9[-4];
    uVar6 = FUN_15b5a37ab(uVar4,*(ulonglong *)(lVar8 + -0x80) + uVar4 +
                                (*(ulonglong *)(lVar8 + -0x80) & uVar4) * -2,uVar3 ^ uVar4,
                          uVar2 ^ uVar7);
    return uVar6;
  }
  uVar6 = FUN_156d6a568();
  return uVar6;
}



// FUNCTION 14dd9000b FUN_14dd9000b body=335 status=ok
// SIG undefined FUN_14dd9000b(void)

/* WARNING: Removing unreachable block (ram,0x00015b85d686) */
/* WARNING: Removing unreachable block (ram,0x00015b85d68c) */
/* WARNING: Removing unreachable block (ram,0x00015b85d691) */
/* WARNING: Removing unreachable block (ram,0x00014dd9009f) */
/* WARNING: Removing unreachable block (ram,0x00014dd900a5) */
/* WARNING: Removing unreachable block (ram,0x00014dd90135) */
/* WARNING: Removing unreachable block (ram,0x00014dd9013a) */
/* WARNING: Removing unreachable block (ram,0x00014dd90140) */
/* WARNING: Removing unreachable block (ram,0x00015b85d4ba) */
/* WARNING: Removing unreachable block (ram,0x00015b85d554) */
/* WARNING: Removing unreachable block (ram,0x00015b85d559) */
/* WARNING: Removing unreachable block (ram,0x0001664baee9) */
/* WARNING: Removing unreachable block (ram,0x00015b85d55f) */
/* WARNING: Removing unreachable block (ram,0x00015b85d681) */
/* WARNING: Removing unreachable block (ram,0x000161905070) */

void FUN_14dd9000b(void)

{
  FUN_161905070();
  return;
}



// FUNCTION 14dd901d3 FUN_14dd901d3 body=155 status=ok
// SIG undefined FUN_14dd901d3(void)

void FUN_14dd901d3(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  undefined8 local_res8;
  longlong lStackX_20;
  
  *(undefined4 *)((longlong)&local_res8 + param_2 + (param_3 ^ 0x43451400)) = 0xac91427a;
  uVar3 = local_res8;
  uVar1 = *(undefined8 *)(unaff_RDI + -0x58);
  local_res8 = 0x14dd90280;
  uVar2 = FUN_15684de48();
  *(undefined8 *)(lStackX_20 + -8) = uVar1;
  *(longlong *)(lStackX_20 + -0x10) = unaff_RDI;
  *(longlong *)(lStackX_20 + -0x18) = unaff_RDI;
  *(undefined8 *)(lStackX_20 + -0x20) = uVar2;
  *(undefined **)(lStackX_20 + -0x28) = &DAT_161088108;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -0x28) = 0x14dd90312;
  local_res8 = uVar1;
  FUN_1610880b4();
  *(undefined8 *)(lStackX_20 + -0x28) = uVar3;
  *(undefined8 *)(lStackX_20 + -0x30) = uVar3;
  *(code **)(lStackX_20 + -0x28) = FUN_14dd90323;
  return;
}



// FUNCTION 14dd90323 FUN_14dd90323 body=1113 status=ok
// SIG undefined FUN_14dd90323(void)

/* WARNING: Removing unreachable block (ram,0x00015713a588) */
/* WARNING: Removing unreachable block (ram,0x00015713a58e) */
/* WARNING: Removing unreachable block (ram,0x0001657bac5d) */
/* WARNING: Removing unreachable block (ram,0x0001657bace3) */
/* WARNING: Removing unreachable block (ram,0x0001657bace9) */
/* WARNING: Removing unreachable block (ram,0x00015713a509) */
/* WARNING: Removing unreachable block (ram,0x0001657baba4) */
/* WARNING: Removing unreachable block (ram,0x0001657babe9) */
/* WARNING: Removing unreachable block (ram,0x0001657bac57) */
/* WARNING: Removing unreachable block (ram,0x00016141e9bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd903d5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd90323(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) == 0) {
    uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
    FUN_15b7aeb63((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar1 + 1,
                  ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) + unaff_R15
                   + 1) & (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),FUN_15b7aeb63);
    return;
  }
  FUN_1657bab10();
  return;
}



// FUNCTION 14dd904f8 FUN_14dd904f8 body=163 status=ok
// SIG undefined FUN_14dd904f8(void)

void FUN_14dd904f8(void)

{
  FUN_15b70b2d5();
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd9059f FUN_14dd9059f body=129 status=ok
// SIG undefined FUN_14dd9059f(void)

void FUN_14dd9059f(undefined8 param_1)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0x12cb99) {
    FUN_161cfe841(param_1);
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd90826 FUN_14dd90826 body=132 status=ok
// SIG undefined FUN_14dd90826(void)

void FUN_14dd90826(undefined8 param_1,undefined8 param_2,undefined8 param_3,short *param_4,
                  longlong param_5)

{
  short in_R10W;
  ushort in_R11W;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *param_4 = (-0x100 - (~(~(in_R10W - (in_R11W ^ 0xffff)) + 1) + 2)) + *param_4;
  *(undefined8 *)(param_5 + -8) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x10) = unaff_retaddr;
  (*(code *)&LAB_1646f3c54)(param_1,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14dd90957 FUN_14dd90957 body=70 status=ok
// SIG undefined FUN_14dd90957(void)

void FUN_14dd90957(void)

{
  return;
}



// FUNCTION 14dd909fc FUN_14dd909fc body=143 status=ok
// SIG undefined FUN_14dd909fc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd90a7a) */

void FUN_14dd909fc(void)

{
  return;
}



// FUNCTION 14dd90b53 FUN_14dd90b53 body=28 status=ok
// SIG undefined FUN_14dd90b53(void)

void FUN_14dd90b53(void)

{
  return;
}



// FUNCTION 14dd90bff FUN_14dd90bff body=152 status=ok
// SIG undefined FUN_14dd90bff(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd90bff(undefined4 param_1,undefined8 param_2)

{
  undefined4 *in_R11;
  undefined8 in_stack_00000018;
  
  *in_R11 = param_1;
  FUN_14df3f918(in_stack_00000018,param_2,FUN_14df3f918);
  return;
}



// FUNCTION 14dd90c99 FUN_14dd90c99 body=135 status=ok
// SIG undefined FUN_14dd90c99(void)

/* WARNING: Removing unreachable block (ram,0x00014dd90e62) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e67) */
/* WARNING: Removing unreachable block (ram,0x000161b2a053) */
/* WARNING: Removing unreachable block (ram,0x000161b2a059) */
/* WARNING: Removing unreachable block (ram,0x000161b2a064) */
/* WARNING: Removing unreachable block (ram,0x000161b2a156) */
/* WARNING: Removing unreachable block (ram,0x000161b2a14c) */
/* WARNING: Removing unreachable block (ram,0x000161b2a15b) */
/* WARNING: Removing unreachable block (ram,0x000161b29f24) */
/* WARNING: Removing unreachable block (ram,0x000161b29fbc) */
/* WARNING: Removing unreachable block (ram,0x000161b29fc1) */
/* WARNING: Removing unreachable block (ram,0x000162b878ec) */
/* WARNING: Removing unreachable block (ram,0x000161b29fc7) */
/* WARNING: Removing unreachable block (ram,0x0001625f47af) */
/* WARNING: Removing unreachable block (ram,0x0001625f47dd) */
/* WARNING: Removing unreachable block (ram,0x000161b29f19) */
/* WARNING: Removing unreachable block (ram,0x00014dd90d1e) */
/* WARNING: Removing unreachable block (ram,0x00014dd90d24) */
/* WARNING: Removing unreachable block (ram,0x00014dc41c45) */
/* WARNING: Removing unreachable block (ram,0x00014dc41cdb) */
/* WARNING: Removing unreachable block (ram,0x000156880fd0) */
/* WARNING: Removing unreachable block (ram,0x00014dc41ce1) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d02) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d3c) */
/* WARNING: Removing unreachable block (ram,0x000164af66be) */
/* WARNING: Removing unreachable block (ram,0x000164af66bf) */
/* WARNING: Removing unreachable block (ram,0x000164af66cb) */
/* WARNING: Removing unreachable block (ram,0x000164af66d4) */
/* WARNING: Removing unreachable block (ram,0x000164af66d8) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d52) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d58) */
/* WARNING: Removing unreachable block (ram,0x000164af66b9) */
/* WARNING: Removing unreachable block (ram,0x000164af66e0) */
/* WARNING: Removing unreachable block (ram,0x000164af66eb) */
/* WARNING: Removing unreachable block (ram,0x000164af66ee) */
/* WARNING: Removing unreachable block (ram,0x000164af6702) */
/* WARNING: Removing unreachable block (ram,0x000164af6707) */
/* WARNING: Removing unreachable block (ram,0x0001619b3185) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd90c99(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
  uVar8 = *(undefined8 *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 0x20) = unaff_R13 + param_1 + (unaff_R13 & param_1) * -2;
  *(undefined8 *)(uVar2 - 0x10) = uVar8;
  uVar8 = *(undefined8 *)(uVar2 - 0x20);
  uVar5 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = uVar5;
  *(code **)(uVar2 - 0x28) = FUN_161b29e7e;
  uVar9 = FUN_1611294b2();
  uVar6 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(unaff_R13 - 0x98);
  uVar3 = *(ulonglong *)(unaff_R13 - 0xa0);
  *(undefined8 *)(uVar2 - 0x20) = param_3;
  *(undefined8 *)(uVar2 - 0x28) = in_R11;
  *(ulonglong *)(uVar2 - 0x30) = uVar3 | 0x1611294b2;
  uVar5 = *(undefined8 *)(uVar2 - 0x28);
  uVar7 = *(undefined8 *)(uVar2 - 0x20);
  *(ulonglong *)(uVar2 - 0x18) = *(ulonglong *)(uVar2 - 0x18) ^ 0x1611294b2;
  *(undefined8 *)(uVar2 - 0x20) = uVar8;
  *(code **)(uVar2 - 0x28) = FUN_1611294b2;
  *(undefined8 *)(uVar2 - 0x30) = uVar6;
  uVar4 = *(ulonglong *)(uVar2 - 0x28);
  *(undefined8 *)(uVar2 - 0x28) = uVar9;
  *(undefined8 *)(uVar2 - 0x30) = in_R10;
  uVar3 = *(ulonglong *)(uVar2 - 0x10);
  *(ulonglong *)(uVar2 - 0x10) = *(ulonglong *)(uVar2 - 0x10) & uVar4;
  *(ulonglong *)(uVar2 - 0x10) = ~*(ulonglong *)(uVar2 - 0x10);
  *(ulonglong *)(uVar2 - 0x10) = *(ulonglong *)(uVar2 - 0x10) & (uVar3 | uVar4);
  uVar8 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x20) = uVar7;
  *(undefined8 *)(uVar2 - 0x28) = uVar5;
  uVar3 = *(ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 0x30) = 0xffffffffffffffff - uVar4 | uVar3;
  *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) & ~uVar4;
  *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
  uVar8 = FUN_1623c5ddc(uVar8);
  return uVar8;
}



// FUNCTION 14dd90d24 FUN_14dd90d24 body=166 status=ok
// SIG undefined FUN_14dd90d24(void)

/* WARNING: Removing unreachable block (ram,0x00014dd90e62) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e67) */
/* WARNING: Removing unreachable block (ram,0x00014dc41ce1) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d02) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d3c) */
/* WARNING: Removing unreachable block (ram,0x000164af66be) */
/* WARNING: Removing unreachable block (ram,0x000164af66bf) */
/* WARNING: Removing unreachable block (ram,0x000164af66cb) */
/* WARNING: Removing unreachable block (ram,0x000164af66d4) */
/* WARNING: Removing unreachable block (ram,0x000164af66d8) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d52) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d58) */
/* WARNING: Removing unreachable block (ram,0x000164af66b9) */
/* WARNING: Removing unreachable block (ram,0x000164af66e0) */
/* WARNING: Removing unreachable block (ram,0x000164af66eb) */
/* WARNING: Removing unreachable block (ram,0x000164af66ee) */
/* WARNING: Removing unreachable block (ram,0x000164af6702) */
/* WARNING: Removing unreachable block (ram,0x000164af6707) */

undefined8 FUN_14dd90d24(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  
  lVar3 = (-param_1 - *(ulonglong *)(unaff_RDI + -0x50)) +
          (*(ulonglong *)(unaff_RDI + -0x50) | param_1) * 2;
  uVar2 = FUN_156600347();
  uVar2 = (in_stack_00000030 & uVar2 ^ 0xffffffffffffffff) & (in_stack_00000030 | uVar2);
  *(ulonglong *)(uVar2 - 8) = (in_R11 - param_1) + (~param_1 | unaff_R12) * -2 + -2;
  *(longlong *)(uVar2 - 0x10) = lVar3;
  *(longlong *)(uVar2 - 0x18) = lVar3;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x20) = in_stack_00000010;
  *(undefined8 *)(uVar2 - 0x20) = *(undefined8 *)(uVar2 - 0x20);
  *(code **)(uVar2 - 0x28) = FUN_15688103c;
  *(undefined8 *)(uVar2 - 8) = 0;
  uVar1 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x18) = uVar1;
  *(undefined8 *)(uVar2 - 0x20) = uVar1;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_156880ffe;
  return uStackX_20;
}



// FUNCTION 14dd90dca FUN_14dd90dca body=281 status=ok
// SIG undefined FUN_14dd90dca(void)

/* WARNING: Removing unreachable block (ram,0x00014dd90e62) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd90e67) */
/* WARNING: Removing unreachable block (ram,0x00014dc41ce1) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d02) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d3c) */
/* WARNING: Removing unreachable block (ram,0x000164af66be) */
/* WARNING: Removing unreachable block (ram,0x000164af66bf) */
/* WARNING: Removing unreachable block (ram,0x000164af66cb) */
/* WARNING: Removing unreachable block (ram,0x000164af66d4) */
/* WARNING: Removing unreachable block (ram,0x000164af66d8) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d52) */
/* WARNING: Removing unreachable block (ram,0x00014dc41d58) */
/* WARNING: Removing unreachable block (ram,0x000164af66b9) */
/* WARNING: Removing unreachable block (ram,0x000164af66e0) */
/* WARNING: Removing unreachable block (ram,0x000164af66eb) */
/* WARNING: Removing unreachable block (ram,0x000164af66ee) */
/* WARNING: Removing unreachable block (ram,0x000164af6702) */
/* WARNING: Removing unreachable block (ram,0x000164af6707) */

undefined8 FUN_14dd90dca(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  ulonglong in_stack_00000030;
  
  uVar1 = (in_stack_00000030 & in_RAX ^ 0xffffffffffffffff) & (in_stack_00000030 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(uVar1 - 0x20);
  *(code **)(uVar1 - 0x28) = FUN_15688103c;
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = uVar2;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_156880ffe;
  return local_res20;
}



// FUNCTION 14dd90f8a FUN_14dd90f8a body=139 status=ok
// SIG undefined FUN_14dd90f8a(void)

void FUN_14dd90f8a(void)

{
  FUN_166b614a6(FUN_166b614a6);
  return;
}



// FUNCTION 14dd9101c FUN_14dd9101c body=99 status=ok
// SIG undefined FUN_14dd9101c(void)

void FUN_14dd9101c(void)

{
  return;
}



// FUNCTION 14dd91164 FUN_14dd91164 body=155 status=ok
// SIG undefined FUN_14dd91164(void)

void FUN_14dd91164(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165254d35(param_1,~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88),
                ~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd91290 FUN_14dd91290 body=251 status=ok
// SIG undefined FUN_14dd91290(void)

void FUN_14dd91290(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  
  FUN_14e15d322();
  FUN_16476266b(param_2,~((~param_2 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_2)));
  return;
}



// FUNCTION 14dd9160f FUN_14dd9160f body=324 status=ok
// SIG undefined FUN_14dd9160f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd916a4) */

longlong FUN_14dd9160f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + param_1 + 1) + param_1;
}



// FUNCTION 14dd91b28 FUN_14dd91b28 body=113 status=ok
// SIG undefined FUN_14dd91b28(void)

void FUN_14dd91b28(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_162153b00(&DAT_ac91427a73ca2b2b,param_2,*(ulonglong *)(unaff_RDI + -0x78) | 0xac91427a73ca2b2b
               );
  return;
}



// FUNCTION 14dd91c30 FUN_14dd91c30 body=193 status=ok
// SIG undefined FUN_14dd91c30(void)

/* WARNING: Removing unreachable block (ram,0x00014dd91cc4) */
/* WARNING: Removing unreachable block (ram,0x00014dd91cca) */

void FUN_14dd91c30(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined4 *)(local_res10 + -0x20) = 0x173eb61d;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(local_res10 + -0x20);
  *(undefined **)(local_res10 + -0x20) = &DAT_14dcc28fd;
  uVar1 = *(ulonglong *)(local_res10 + -0x20);
  *(undefined8 *)
   (local_res10 + -0x10 + ~(~(uVar2 & 0xffffffffe8c149ea) & (uVar2 | 0xffffffffe8c149ea))) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014dcc28e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd91cca FUN_14dd91cca body=147 status=ok
// SIG undefined FUN_14dd91cca(void)

void FUN_14dd91cca(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  (*(code *)&LAB_161e348b8)(8,param_2,*(ulonglong *)(param_2 + -0x88) ^ in_R10);
  return;
}



// FUNCTION 14dd91d61 FUN_14dd91d61 body=141 status=ok
// SIG undefined FUN_14dd91d61(void)

void FUN_14dd91d61(undefined8 param_1)

{
  FUN_1569030c9(param_1);
  return;
}



// FUNCTION 14dd91e87 thunk_FUN_14dd91e8d body=5 status=ok
// SIG undefined thunk_FUN_14dd91e8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd91f60) */
/* WARNING: Removing unreachable block (ram,0x00014dd91f51) */
/* WARNING: Removing unreachable block (ram,0x000160fd24de) */
/* WARNING: Removing unreachable block (ram,0x000160fd24e4) */
/* WARNING: Removing unreachable block (ram,0x000160fd24e9) */
/* WARNING: Removing unreachable block (ram,0x00014dd92051) */
/* WARNING: Removing unreachable block (ram,0x0001629c2cca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
thunk_FUN_14dd91e8d(ulonglong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar11;
  char cVar12;
  longlong lVar13;
  longlong in_R10;
  code *pcVar14;
  undefined8 in_R11;
  ulonglong uVar15;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  ulonglong uVar25;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  
  lVar13 = *(longlong *)(unaff_RDI + -8);
  uVar11 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  uVar15 = *(ulonglong *)(unaff_RDI + -0x98) + param_1 +
           (*(ulonglong *)(unaff_RDI + -0x98) & param_1) * -2;
  pcVar14 = FUN_165cfd71e;
  uVar6 = FUN_165cfd71e();
  uStackX_10 = in_R10 - param_3;
  uVar6 = uStackX_18 ^ uVar6;
  uVar7 = lVar13 - param_4;
  if ((&DAT_ffffffffffffffef < &stack0x00000000) && (&stack0x00000000 < &DAT_fffffffffffffff0)) {
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) =
         *(undefined8 *)(unaff_R12 + -0x58);
    uVar6 = *(ulonglong *)(unaff_R12 + -0x48);
    *(undefined4 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = 0x45500410;
    *(undefined4 *)(&stack0x00000004 + (longlong)&stack0xfffffffff189a68e) = 0;
    uVar15 = *(ulonglong *)(unaff_R12 + -0x50);
    *(ulonglong *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = unaff_retaddr;
    if ((~uVar15 & ~uVar7) != 0 || uVar15 != 0) {
      uVar8 = FUN_1629c2c45();
      return uVar8;
    }
    uVar2 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = unaff_RBX;
    uVar3 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = in_stack_00000008;
    uVar4 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = in_R11;
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) =
         0xffffffffffffffff;
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = unaff_R14;
    uVar8 = *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = uVar4;
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) = uVar4;
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) =
         *(undefined8 *)(unaff_R12 + -0x68);
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) =
         *(undefined8 *)(unaff_R12 + -8);
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = uVar2;
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar2;
    lVar13 = *(longlong *)(unaff_R12 + -0x98);
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = 0;
    *(longlong *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) =
         *(longlong *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) + lVar13;
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar3;
    *(code **)(&stack0xffffffffffffffd8 + (longlong)&stack0xfffffffff189a68e) = pcVar14;
    *(undefined8 *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e) =
         *(undefined8 *)(unaff_R12 + -0xa0);
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar8;
    *(ulonglong *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e) = uVar7;
    *(undefined4 *)(&stack0xffffffffffffffd8 + (longlong)&stack0xfffffffff189a68e) = 0x2c403057;
    *(undefined4 *)((longlong)&stack0x00000000 * 2 + -0xe765996) = 0;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e);
    *(ulonglong *)((longlong)&stack0x00000000 * 2 + -0xe765992) =
         uVar6 + uVar7 + (uVar6 & uVar7) * -2;
    *(undefined1 **)((longlong)&stack0x00000000 * 2 + -0xe76599a) = &LAB_156ef242b;
    return uVar8;
  }
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = ~(ushort)uStackX_10;
  uStackX_10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = uVar1 | 0x100;
  uStackX_10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uStackX_10._0_2_ = ~uVar1;
  *(code **)(uVar6 - 8) = pcVar14;
  *(code **)(uVar6 - 0x10) = pcVar14;
  *(ulonglong *)(uVar6 - 0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  uVar7 = *(ulonglong *)(uVar6 - 0x18);
  *(ulonglong *)(uVar6 - 0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar6 - 0x20) = in_stack_00000008;
  uVar7 = *(ulonglong *)(uVar6 - 0x18);
  *(undefined8 *)(uVar6 - 8) = 0x34c9cfe;
  *(undefined8 *)(uVar6 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar6 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar6 - 0x28) = in_R11;
  *(ulonglong *)(uVar6 - 0x30) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(uVar6 - 0x18) = &LAB_1619ccf3b;
  uVar25 = *(ulonglong *)(uVar6 - 0x30);
  bVar20 = (uVar25 & 0x4000) != 0;
  bVar19 = (uVar25 & 0x200) != 0;
  bVar18 = (uVar25 & 0x100) != 0;
  bVar17 = (uVar25 & 0x10) != 0;
  bVar24 = (uVar25 & 0x200000) != 0;
  bVar21 = (uVar25 & 0x40000) != 0;
  bVar23 = 0;
  bVar22 = 0;
  *(undefined8 *)(uVar6 - 0x30) = 0x1652c4742;
  uVar9 = FUN_1619ccf2e();
  uVar16 = ~unaff_retaddr | uVar15;
  uVar7 = *(ulonglong *)(uVar11 - 0x58);
  *(ulonglong *)(uVar6 - 0x28) = uVar7;
  uVar5 = *(ulonglong *)(uVar6 - 0x28);
  lVar13 = uVar5 + uVar15 + (uVar5 & uVar15) * -2;
  uVar11 = *(ulonglong *)(uVar11 - 0x38);
  uVar11 = ~((~uVar15 | uVar11) & (~uVar11 | uVar15));
  uVar8 = 0xffffffffffffffc0;
  *(ulonglong *)(uVar6 - 0x28) = uVar7;
  cVar12 = -9;
  *(undefined8 *)(uVar6 - 0x30) = 0x1652c47d8;
  FUN_1663a50f7();
  *(ulonglong *)(uVar6 - 0x28) = -1 - (uVar9 & uVar16);
  *(ulonglong *)(uVar6 - 0x30) = uVar11;
  *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(uVar6 - 0x20);
  *(undefined8 *)(uVar6 - 0x20) = uVar8;
  bVar10 = (char)uVar15 - (cVar12 + (char)uVar11) ^ 0x52;
  *(longlong *)(uVar6 - 0x20) = lVar13;
  *(longlong *)(uVar6 - 0x28) = lVar13;
  *(undefined8 *)(uVar6 - 0x30) = unaff_RBX;
  *(ulonglong *)(uVar6 - 0x38) =
       (ulonglong)(bVar20 & 1) * 0x4000 | (ulonglong)((uVar25 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar19 & 1) * 0x200 | (ulonglong)(bVar18 & 1) * 0x100 |
       (ulonglong)((char)bVar10 < '\0') * 0x80 | (ulonglong)(bVar10 == 0) * 0x40 |
       (ulonglong)(bVar17 & 1) * 0x10 | (ulonglong)((POPCOUNT(bVar10) & 1U) == 0) * 4 |
       (ulonglong)(bVar24 & 1) * 0x200000 | (ulonglong)(bVar23 & 1) * 0x100000 |
       (ulonglong)(bVar22 & 1) * 0x80000 | (ulonglong)(bVar21 & 1) * 0x40000;
  *(code **)(uVar6 - 0x20) = FUN_1652c4880;
  uVar8 = FUN_1622a5c8c();
  return uVar8;
}



// FUNCTION 14dd91e8d FUN_14dd91e8d body=892 status=ok
// SIG undefined FUN_14dd91e8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd91f60) */
/* WARNING: Removing unreachable block (ram,0x00014dd91f51) */
/* WARNING: Removing unreachable block (ram,0x000160fd24de) */
/* WARNING: Removing unreachable block (ram,0x000160fd24e4) */
/* WARNING: Removing unreachable block (ram,0x000160fd24e9) */
/* WARNING: Removing unreachable block (ram,0x00014dd92051) */
/* WARNING: Removing unreachable block (ram,0x0001629c2cca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd91e8d(ulonglong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar11;
  char cVar12;
  longlong lVar13;
  longlong in_R10;
  code *pcVar14;
  undefined8 in_R11;
  ulonglong uVar15;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  ulonglong uVar25;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res18;
  
  lVar13 = *(longlong *)(unaff_RDI + -8);
  uVar11 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  uVar15 = *(ulonglong *)(unaff_RDI + -0x98) + param_1 +
           (*(ulonglong *)(unaff_RDI + -0x98) & param_1) * -2;
  pcVar14 = FUN_165cfd71e;
  uVar6 = FUN_165cfd71e();
  local_res10 = in_R10 - param_3;
  uVar6 = local_res18 ^ uVar6;
  uVar7 = lVar13 - param_4;
  if ((&DAT_ffffffffffffffef < &stack0x00000000) && (&stack0x00000000 < &DAT_fffffffffffffff0)) {
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) =
         *(undefined8 *)(unaff_R12 + -0x58);
    uVar6 = *(ulonglong *)(unaff_R12 + -0x48);
    *(undefined4 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = 0x45500410;
    *(undefined4 *)(&stack0x00000004 + (longlong)&stack0xfffffffff189a68e) = 0;
    uVar15 = *(ulonglong *)(unaff_R12 + -0x50);
    *(ulonglong *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = unaff_retaddr;
    if ((~uVar15 & ~uVar7) != 0 || uVar15 != 0) {
      uVar8 = FUN_1629c2c45();
      return uVar8;
    }
    uVar2 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = unaff_RBX;
    uVar3 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = in_stack_00000008;
    uVar4 = *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = in_R11;
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) =
         0xffffffffffffffff;
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = unaff_R14;
    uVar8 = *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e);
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) = uVar4;
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) = uVar4;
    *(undefined8 *)(&stack0xfffffffff189a68e + (longlong)&stack0x00000000) =
         *(undefined8 *)(unaff_R12 + -0x68);
    *(undefined8 *)(&stack0xfffffffffffffff8 + (longlong)&stack0xfffffffff189a68e) =
         *(undefined8 *)(unaff_R12 + -8);
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = uVar2;
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar2;
    lVar13 = *(longlong *)(unaff_R12 + -0x98);
    *(undefined8 *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) = 0;
    *(longlong *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) =
         *(longlong *)(&stack0xfffffffffffffff0 + (longlong)&stack0xfffffffff189a68e) + lVar13;
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar3;
    *(code **)(&stack0xffffffffffffffd8 + (longlong)&stack0xfffffffff189a68e) = pcVar14;
    *(undefined8 *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e) =
         *(undefined8 *)(unaff_R12 + -0xa0);
    *(undefined8 *)(&stack0xffffffffffffffe8 + (longlong)&stack0xfffffffff189a68e) = uVar8;
    *(ulonglong *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e) = uVar7;
    *(undefined4 *)(&stack0xffffffffffffffd8 + (longlong)&stack0xfffffffff189a68e) = 0x2c403057;
    *(undefined4 *)((longlong)&stack0x00000000 * 2 + -0xe765996) = 0;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffe0 + (longlong)&stack0xfffffffff189a68e);
    *(ulonglong *)((longlong)&stack0x00000000 * 2 + -0xe765992) =
         uVar6 + uVar7 + (uVar6 & uVar7) * -2;
    *(undefined1 **)((longlong)&stack0x00000000 * 2 + -0xe76599a) = &LAB_156ef242b;
    return uVar8;
  }
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
  *(code **)(uVar6 - 8) = pcVar14;
  *(code **)(uVar6 - 0x10) = pcVar14;
  *(ulonglong *)(uVar6 - 0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  uVar7 = *(ulonglong *)(uVar6 - 0x18);
  *(ulonglong *)(uVar6 - 0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar6 - 0x20) = in_stack_00000008;
  uVar7 = *(ulonglong *)(uVar6 - 0x18);
  *(undefined8 *)(uVar6 - 8) = 0x34c9cfe;
  *(undefined8 *)(uVar6 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar6 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar6 - 0x28) = in_R11;
  *(ulonglong *)(uVar6 - 0x30) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(uVar6 - 0x18) = &LAB_1619ccf3b;
  uVar25 = *(ulonglong *)(uVar6 - 0x30);
  bVar20 = (uVar25 & 0x4000) != 0;
  bVar19 = (uVar25 & 0x200) != 0;
  bVar18 = (uVar25 & 0x100) != 0;
  bVar17 = (uVar25 & 0x10) != 0;
  bVar24 = (uVar25 & 0x200000) != 0;
  bVar21 = (uVar25 & 0x40000) != 0;
  bVar23 = 0;
  bVar22 = 0;
  *(undefined8 *)(uVar6 - 0x30) = 0x1652c4742;
  uVar9 = FUN_1619ccf2e();
  uVar16 = ~unaff_retaddr | uVar15;
  uVar7 = *(ulonglong *)(uVar11 - 0x58);
  *(ulonglong *)(uVar6 - 0x28) = uVar7;
  uVar5 = *(ulonglong *)(uVar6 - 0x28);
  lVar13 = uVar5 + uVar15 + (uVar5 & uVar15) * -2;
  uVar11 = *(ulonglong *)(uVar11 - 0x38);
  uVar11 = ~((~uVar15 | uVar11) & (~uVar11 | uVar15));
  uVar8 = 0xffffffffffffffc0;
  *(ulonglong *)(uVar6 - 0x28) = uVar7;
  cVar12 = -9;
  *(undefined8 *)(uVar6 - 0x30) = 0x1652c47d8;
  FUN_1663a50f7();
  *(ulonglong *)(uVar6 - 0x28) = -1 - (uVar9 & uVar16);
  *(ulonglong *)(uVar6 - 0x30) = uVar11;
  *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(uVar6 - 0x20);
  *(undefined8 *)(uVar6 - 0x20) = uVar8;
  bVar10 = (char)uVar15 - (cVar12 + (char)uVar11) ^ 0x52;
  *(longlong *)(uVar6 - 0x20) = lVar13;
  *(longlong *)(uVar6 - 0x28) = lVar13;
  *(undefined8 *)(uVar6 - 0x30) = unaff_RBX;
  *(ulonglong *)(uVar6 - 0x38) =
       (ulonglong)(bVar20 & 1) * 0x4000 | (ulonglong)((uVar25 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar19 & 1) * 0x200 | (ulonglong)(bVar18 & 1) * 0x100 |
       (ulonglong)((char)bVar10 < '\0') * 0x80 | (ulonglong)(bVar10 == 0) * 0x40 |
       (ulonglong)(bVar17 & 1) * 0x10 | (ulonglong)((POPCOUNT(bVar10) & 1U) == 0) * 4 |
       (ulonglong)(bVar24 & 1) * 0x200000 | (ulonglong)(bVar23 & 1) * 0x100000 |
       (ulonglong)(bVar22 & 1) * 0x80000 | (ulonglong)(bVar21 & 1) * 0x40000;
  *(code **)(uVar6 - 0x20) = FUN_1652c4880;
  uVar8 = FUN_1622a5c8c();
  return uVar8;
}



// FUNCTION 14dd920d5 FUN_14dd920d5 body=148 status=ok
// SIG undefined FUN_14dd920d5(void)

void FUN_14dd920d5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_157519af3(in_stack_00000010,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd9216b FUN_14dd9216b body=337 status=ok
// SIG undefined FUN_14dd9216b(void)

void FUN_14dd9216b(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x50);
  FUN_162747ee4();
  FUN_160fa23f5(param_1,*(undefined8 *)
                         (((unaff_RBP ^ 0xffffffffffffffff | uVar1) & (~uVar1 | unaff_RBP) ^
                          0xffffffffffffffff) - 0x68));
  return;
}



// FUNCTION 14dd923d9 FUN_14dd923d9 body=14 status=ok
// SIG undefined FUN_14dd923d9(void)

void FUN_14dd923d9(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd923e7 FUN_14dd923e7 body=140 status=ok
// SIG undefined FUN_14dd923e7(void)

undefined8 FUN_14dd923e7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd9247c FUN_14dd9247c body=110 status=ok
// SIG undefined FUN_14dd9247c(void)

void FUN_14dd9247c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd924e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcessHeap();
  return;
}



// FUNCTION 14dd92527 FUN_14dd92527 body=163 status=ok
// SIG undefined FUN_14dd92527(void)

longlong FUN_14dd92527(char param_1)

{
  longlong in_RAX;
  char unaff_SIL;
  longlong unaff_RDI;
  
  return unaff_RDI - (in_RAX << (param_1 + unaff_SIL & 0x3fU));
}



// FUNCTION 14dd925cd FUN_14dd925cd body=145 status=ok
// SIG undefined FUN_14dd925cd(void)

void FUN_14dd925cd(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_164af093c(param_1,local_res10);
  return;
}



// FUNCTION 14dd92660 FUN_14dd92660 body=126 status=ok
// SIG undefined FUN_14dd92660(void)

void FUN_14dd92660(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint in_R11D;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&local_8;
  (*(code *)0x1664aa520)(param_1,(~(~param_2 + 2) + 1) - ~in_R11D,param_3);
  return;
}



// FUNCTION 14dd92786 FUN_14dd92786 body=112 status=ok
// SIG undefined FUN_14dd92786(void)

void FUN_14dd92786(void)

{
  return;
}



// FUNCTION 14dd9281e FUN_14dd9281e body=136 status=ok
// SIG undefined FUN_14dd9281e(void)

void FUN_14dd9281e(undefined8 param_1)

{
  FUN_1566597b1(param_1,0xffffffffffffffff);
  return;
}



// FUNCTION 14dd928a8 FUN_14dd928a8 body=507 status=ok
// SIG undefined FUN_14dd928a8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd92935) */

void FUN_14dd928a8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined8 in_R10;
  ulonglong unaff_R15;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar2 = 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = ~*(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | unaff_R15;
  *(ulonglong *)(param_2 + 0x10) =
       ~((*(longlong *)(param_2 + 0x10) - (uVar2 | *(ulonglong *)(param_2 + 0x10))) + uVar2);
  *(undefined8 *)(param_5 + -8) = param_4;
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(undefined4 *)(param_5 + -0x18) = 0x13548e6b;
  *(undefined4 *)(param_5 + -0x14) = 0;
  lVar1 = *(longlong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_RDI;
  uVar2 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = in_R10;
  *(ulonglong *)(param_5 + -0x28) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(longlong *)(param_5 + -8) = lVar1 + -0xf4119cb;
  *(undefined8 *)(param_5 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = unaff_RBX;
  *(code **)(param_5 + -0x18) = FUN_165e44d20;
  *(undefined1 **)(param_5 + -0x20) = &LAB_156682aa7;
  return;
}



// FUNCTION 14dd9320e FUN_14dd9320e body=161 status=ok
// SIG undefined FUN_14dd9320e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd932a5) */
/* WARNING: Removing unreachable block (ram,0x00014dd932ab) */
/* WARNING: Removing unreachable block (ram,0x0001615125b5) */

void FUN_14dd9320e(void)

{
  FUN_1615125b5();
  return;
}



// FUNCTION 14dd932b1 FUN_14dd932b1 body=140 status=ok
// SIG undefined FUN_14dd932b1(void)

void FUN_14dd932b1(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  undefined8 local_10;
  
  local_10 = CONCAT71((int7)((ulonglong)param_1 >> 8),0xc5);
  FUN_1662af435(local_10 | 0x21,unaff_R15 & ~param_2 | ~(0xffffffffffffffff - param_2 | unaff_R15));
  return;
}



// FUNCTION 14dd933dc thunk_FUN_14dd933e2 body=5 status=ok
// SIG undefined thunk_FUN_14dd933e2(void)

/* WARNING: Removing unreachable block (ram,0x000164867c53) */
/* WARNING: Removing unreachable block (ram,0x000164867c59) */
/* WARNING: Removing unreachable block (ram,0x000164867c67) */
/* WARNING: Removing unreachable block (ram,0x00014dd9348d) */
/* WARNING: Removing unreachable block (ram,0x00014dd934e6) */
/* WARNING: Removing unreachable block (ram,0x00014dd9352a) */
/* WARNING: Removing unreachable block (ram,0x00014dd93530) */
/* WARNING: Removing unreachable block (ram,0x00014dd935c2) */
/* WARNING: Removing unreachable block (ram,0x00014dd935c8) */
/* WARNING: Removing unreachable block (ram,0x000161228772) */
/* WARNING: Removing unreachable block (ram,0x000164867b2a) */
/* WARNING: Removing unreachable block (ram,0x000164867b2f) */
/* WARNING: Removing unreachable block (ram,0x0001577e8608) */
/* WARNING: Removing unreachable block (ram,0x00014dd9347d) */

undefined8 thunk_FUN_14dd933e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166bd2593(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dd933e2 FUN_14dd933e2 body=333 status=ok
// SIG undefined FUN_14dd933e2(void)

/* WARNING: Removing unreachable block (ram,0x000164867c53) */
/* WARNING: Removing unreachable block (ram,0x000164867c59) */
/* WARNING: Removing unreachable block (ram,0x000164867c67) */
/* WARNING: Removing unreachable block (ram,0x00014dd9348d) */
/* WARNING: Removing unreachable block (ram,0x00014dd934e6) */
/* WARNING: Removing unreachable block (ram,0x00014dd9352a) */
/* WARNING: Removing unreachable block (ram,0x00014dd93530) */
/* WARNING: Removing unreachable block (ram,0x00014dd935c2) */
/* WARNING: Removing unreachable block (ram,0x00014dd935c8) */
/* WARNING: Removing unreachable block (ram,0x000161228772) */
/* WARNING: Removing unreachable block (ram,0x000164867b2a) */
/* WARNING: Removing unreachable block (ram,0x000164867b2f) */
/* WARNING: Removing unreachable block (ram,0x0001577e8608) */
/* WARNING: Removing unreachable block (ram,0x00014dd9347d) */

undefined8 FUN_14dd933e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166bd2593(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dd93530 FUN_14dd93530 body=315 status=ok
// SIG undefined FUN_14dd93530(void)

/* WARNING: Removing unreachable block (ram,0x00014dd935c8) */

undefined8 FUN_14dd93530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  uVar1 = FUN_1664825e1(0x83,param_2,param_3,*(longlong *)(unaff_R13 + -0xa0) + unaff_R15,
                        *(undefined8 *)(unaff_R13 + -0x70));
  return uVar1;
}



// FUNCTION 14dd9366c FUN_14dd9366c body=163 status=ok
// SIG undefined FUN_14dd9366c(void)

undefined8 FUN_14dd9366c(undefined8 param_1)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ushort *unaff_R14;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(undefined8 *)(local_res20 + -0x20) = param_1;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_15b12e6cd;
  return 0xfffffffea4ed18cd;
}



// FUNCTION 14dd93710 FUN_14dd93710 body=303 status=ok
// SIG undefined FUN_14dd93710(void)

void FUN_14dd93710(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined1 **)(local_res10 + -0x10) = &LAB_1624c0d83;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_1624c0d83;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(ulonglong *)(local_res10 + -0x10) =
       *(ulonglong *)(local_res10 + -0x10) ^ *(ulonglong *)(local_res10 + -8);
  lVar5 = *(longlong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = 0x420da09f;
  *(undefined8 *)(local_res10 + -8) = *(undefined8 *)(local_res10 + -0x20);
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x420da09f;
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = *plVar1 + lVar5;
  bVar3 = (param_1 & 0x1f) != 0;
  bVar4 = (int)*(undefined8 *)(local_res10 + -8) >> ((byte)param_1 & 0x1f) < 0;
  if (!bVar3 && *plVar1 < 0 || bVar3 && bVar4) {
    FUN_1624c0d60();
    return;
  }
  if ((bVar3 || *plVar1 >= 0) && (!bVar3 || !bVar4)) {
    FUN_1624c0d60();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x60);
  *(ulonglong *)(local_res10 + -0x10) = param_1;
  FUN_157668f6c(*(undefined8 *)(local_res10 + -0x10),FUN_157668f6c,
                uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd938d4 FUN_14dd938d4 body=126 status=ok
// SIG undefined FUN_14dd938d4(void)

void FUN_14dd938d4(void)

{
  return;
}



// FUNCTION 14dd93952 FUN_14dd93952 body=143 status=ok
// SIG undefined FUN_14dd93952(void)

void FUN_14dd93952(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1655c8e76(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd93bdf FUN_14dd93bdf body=7 status=ok
// SIG undefined FUN_14dd93bdf(void)

void FUN_14dd93bdf(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd93d08 FUN_14dd93d08 body=114 status=ok
// SIG undefined FUN_14dd93d08(void)

void FUN_14dd93d08(void)

{
  FUN_16132de1f(FUN_16132de1f);
  return;
}



// FUNCTION 14dd93ed0 FUN_14dd93ed0 body=170 status=ok
// SIG undefined FUN_14dd93ed0(void)

undefined8 FUN_14dd93ed0(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dd94018 FUN_14dd94018 body=250 status=ok
// SIG undefined FUN_14dd94018(void)

/* WARNING: Removing unreachable block (ram,0x00014dd940ab) */

void FUN_14dd94018(void)

{
  ulonglong uVar1;
  undefined8 unaff_R13;
  ulonglong *unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res20;
  ulonglong in_stack_00000028;
  
  uVar1 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | unaff_R15;
  *unaff_R14 = ~((~unaff_R15 | uVar1) & *unaff_R14);
  uVar1 = (in_stack_00000028 & unaff_R15 ^ 0xffffffffffffffff) & ~(~in_stack_00000028 & ~unaff_R15);
  *(undefined8 *)(uVar1 - 0x10) = local_res8;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  if (((local_res20 ^ unaff_R15) & 1) != 0) {
    FUN_1565b6bf8();
    return;
  }
  FUN_1565b6bf8();
  return;
}



// FUNCTION 14dd9412f FUN_14dd9412f body=140 status=ok
// SIG undefined FUN_14dd9412f(void)

void FUN_14dd9412f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong auStackX_8 [4];
  
  *(ulonglong *)((longlong)auStackX_8 + param_4) = *(ulonglong *)(unaff_RSI + -0xa0);
  uVar2 = *(ulonglong *)((longlong)auStackX_8 + param_4);
  uVar3 = *(undefined8 *)((longlong)auStackX_8 + param_4 + 8);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_4 + 0x10);
  *(undefined8 *)((longlong)auStackX_8 + param_4 + 8) = unaff_R15;
  *puVar1 = *puVar1 ^ unaff_RBP;
  *(undefined8 *)((longlong)auStackX_8 + param_4 + 8) = in_R10;
  *(ulonglong *)((longlong)auStackX_8 + param_4) = ~((~unaff_RBP | uVar2) & (~uVar2 | unaff_RBP));
  uVar2 = *(ulonglong *)((longlong)auStackX_8 + param_4 + 0x18);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_4 + 0x18);
  *puVar1 = ~*puVar1;
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_4 + 0x18);
  *puVar1 = *puVar1 | unaff_RBP;
  *(ulonglong *)((longlong)auStackX_8 + param_4 + 0x18) =
       ~((~unaff_RBP | uVar2) & *(ulonglong *)((longlong)auStackX_8 + param_4 + 0x18));
  (*(code *)0x1564a3a9a)(param_1,param_2,unaff_retaddr,uVar3);
  return;
}



// FUNCTION 14dd94429 FUN_14dd94429 body=152 status=ok
// SIG undefined FUN_14dd94429(void)

void FUN_14dd94429(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0xcb163) {
    return;
  }
  return;
}



// FUNCTION 14dd944c8 FUN_14dd944c8 body=65 status=ok
// SIG undefined FUN_14dd944c8(void)

void FUN_14dd944c8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd94508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd94573 FUN_14dd94573 body=62 status=ok
// SIG undefined FUN_14dd94573(void)

void FUN_14dd94573(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd94626 FUN_14dd94626 body=137 status=ok
// SIG undefined FUN_14dd94626(void)

void FUN_14dd94626(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBP;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 ^ unaff_R15) - 8) = unaff_RBP;
  (*(code *)0x1610b6b0e)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd9474c FUN_14dd9474c body=498 status=ok
// SIG undefined FUN_14dd9474c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016535a8d0) overlaps instruction at (ram,0x00016535a8cf)
    */
/* WARNING: Removing unreachable block (ram,0x000166ba5e19) */
/* WARNING: Removing unreachable block (ram,0x000166ba5e24) */
/* WARNING: Removing unreachable block (ram,0x000166ba5ed6) */
/* WARNING: Removing unreachable block (ram,0x00016599d7a8) */
/* WARNING: Removing unreachable block (ram,0x000166ba5edc) */
/* WARNING: Removing unreachable block (ram,0x000166ba5f83) */
/* WARNING: Removing unreachable block (ram,0x000166ba5f89) */
/* WARNING: Removing unreachable block (ram,0x000166ba6075) */
/* WARNING: Removing unreachable block (ram,0x000166ba6081) */
/* WARNING: Removing unreachable block (ram,0x0001620c5599) */
/* WARNING: Removing unreachable block (ram,0x0001620c55a8) */
/* WARNING: Removing unreachable block (ram,0x0001620c55ad) */
/* WARNING: Removing unreachable block (ram,0x000166ba5f7e) */
/* WARNING: Removing unreachable block (ram,0x000160ba2d98) */
/* WARNING: Removing unreachable block (ram,0x000162be6c3b) */
/* WARNING: Removing unreachable block (ram,0x000166ba5e1f) */

undefined8 FUN_14dd9474c(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 *puVar16;
  undefined8 in_RAX;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 unaff_RBX;
  undefined1 *puVar19;
  undefined8 unaff_RBP;
  longlong lVar20;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  bool bVar21;
  byte in_AF;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte in_TF;
  bool bVar25;
  byte in_IF;
  bool bVar26;
  bool bVar27;
  byte in_NT;
  bool bVar28;
  byte in_AC;
  bool bVar29;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint unaff_retaddr;
  undefined4 local_res8;
  uint local_resc;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  uint uVar4;
  
  lVar14 = CONCAT44(~((~(unaff_retaddr ^ 0x2f241590) | local_resc) &
                     (~local_resc | unaff_retaddr ^ 0x2f241590)),local_res8);
  lVar20 = lVar14 + -0xd72993b;
  _fxrstor(&stack0xfffffffff28d66c5 + lVar14);
  *(undefined8 *)(&stack0xfffffffff28d66bd + lVar14) = param_1;
  *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14) = in_R10;
  *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14) = param_4;
  plVar1 = (longlong *)(&stack0xfffffffff28d66ad + lVar14);
  lVar7 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  *plVar1 = lVar7;
  lVar8 = *plVar1;
  if ((lVar7 == 0) || (lVar7 != 0)) {
    uVar11 = *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14);
    uVar17 = *(undefined8 *)(&stack0xfffffffff28d66bd + lVar14);
    *(undefined8 *)(&stack0xfffffffff28d66bd + lVar14) = in_R11;
    *(ulonglong *)(&stack0xfffffffff28d66b5 + lVar14) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(ulonglong *)(&stack0xfffffffff28d66b5 + lVar14) =
         *(ulonglong *)(&stack0xfffffffff28d66b5 + lVar14) & 0xfffffffffffff7ff;
    if ((*(ulonglong *)(&stack0xfffffffff28d66b5 + lVar14) & 0x800) != 0) {
      *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14) = 0x16535a8d4;
      func_0x000135292a1d(uVar17,param_2,param_3,uVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(longlong *)(&stack0xfffffffff28d66b5 + lVar14) = unaff_R13;
    *(undefined8 *)(&stack0xfffffffff28d66ad + lVar14) = *(undefined8 *)(lVar8 + 0x20);
    puVar9 = (undefined8 *)**(undefined8 **)(&stack0xfffffffff28d66ad + lVar14);
    *(undefined8 *)(&stack0xfffffffff28d66bd + lVar14) = in_RAX;
    *(undefined8 **)(&stack0xfffffffff28d66b5 + lVar14) = puVar9;
    uVar17 = *puVar9;
    *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff28d66ad + lVar14) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff28d66a5 + lVar14) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff28d66b5 + lVar14) = 0x16535a930;
    *(undefined8 *)(&stack0xfffffffff28d66ad + lVar14) = 0x166cf178a;
    return uVar17;
  }
  lVar7 = *plVar1;
  *(undefined8 *)(&stack0xfffffffff28d66ad + lVar14) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff28d66a5 + lVar14) = 0;
  puVar9 = (undefined8 *)(&stack0xfffffffff28d669d + lVar14);
  *puVar9 = 0;
  *(undefined1 *)puVar9 = 0x78;
  uVar11 = *puVar9;
  *(undefined8 *)(&stack0xfffffffff28d669d + lVar14) = unaff_RDI;
  uVar12 = *(undefined8 *)(&stack0xfffffffff28d669d + lVar14);
  uVar17 = *(undefined8 *)(&stack0xfffffffff28d66a5 + lVar14);
  *(ulonglong *)(&stack0xfffffffff28d66a5 + lVar14) =
       (ulonglong)(byte)(((byte)uVar11 ^ 0xbc) - 0x30);
  puVar2 = (uint *)(&stack0xfffffffff28d669d + lVar14);
  *(undefined8 *)puVar2 = in_RAX;
  *puVar2 = 0x3a2b3a7;
  uVar3 = *puVar2;
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + 0x5a4b08a4;
  *(undefined4 *)(&stack0xfffffffff28d66a1 + lVar14) = 0;
  *(ulonglong *)(&stack0xfffffffff28d6695 + lVar14) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar4,0x5a4b08a4) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)*puVar2 < 0) * 0x80 | (ulonglong)(*puVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0xa5b4f75b < uVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff28d668d + lVar14) = uVar12;
  *(undefined8 *)(&stack0xfffffffff28d6685 + lVar14) = unaff_RBP;
  if ((*(ushort *)(&stack0xfffffffff28d6695 + lVar14) & 1) == 0) {
    uVar17 = FUN_166dcfa5b();
    return uVar17;
  }
  uVar31 = *(ulonglong *)(&stack0xfffffffff28d6695 + lVar14);
  bVar28 = (uVar31 & 0x4000) != 0;
  bVar27 = (uVar31 & 0x400) != 0;
  bVar26 = (uVar31 & 0x200) != 0;
  bVar25 = (uVar31 & 0x100) != 0;
  bVar22 = (uVar31 & 0x10) != 0;
  bVar30 = (uVar31 & 0x200000) != 0;
  bVar29 = (uVar31 & 0x40000) != 0;
  if ((uVar31 & 1) == 0 && (uVar31 & 0x40) == 0) {
    uVar31 = *(ulonglong *)(&stack0xfffffffff28d669d + lVar14);
    uVar32 = *(ulonglong *)(&stack0xfffffffff28d66a5 + lVar14);
    *(ulonglong *)(&stack0xfffffffff28d66a5 + lVar14) =
         (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar32 & 0x400) != 0) * 0x400 | (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar32 & 0x100) != 0) * 0x100 | (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar32 & 0x40) != 0) * 0x40 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
         (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
    uVar32 = *(ulonglong *)(&stack0xfffffffff28d66a5 + lVar14);
    *(undefined8 *)(&stack0xfffffffff28d66a5 + lVar14) = param_3;
    *(ulonglong *)(&stack0xfffffffff28d669d + lVar14) =
         (ulonglong)((uVar32 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar32 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar32 & 0x400) != 0) * 0x400 | (ulonglong)((uVar32 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar32 & 0x100) != 0) * 0x100 | (ulonglong)((uVar32 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar32 & 0x40) != 0) * 0x40 | (ulonglong)((uVar32 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar32 & 4) != 0) * 4 | (ulonglong)((uVar32 & 1) != 0) |
         (ulonglong)((uVar32 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar32 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(&stack0xfffffffff28d6695 + lVar14) = uVar17;
    *(ulonglong *)(&stack0xfffffffff28d66b5 + lVar14) = (uVar31 ^ 0x68955ac4) - 0x6bb89d8;
    *(longlong *)(&stack0xfffffffff28d66ad + lVar14) = unaff_R13;
    *(longlong *)(&stack0xfffffffff28d66a5 + lVar14) = unaff_R13;
    *(code **)(&stack0xfffffffff28d66ad + lVar14) = FUN_165c7153c;
    return in_RAX;
  }
  uVar31 = *(ulonglong *)(&stack0xfffffffff28d669d + lVar14);
  *(longlong *)(&stack0xfffffffff28d669d + lVar14) = unaff_R13;
  uVar31 = uVar31 ^ 0x5dedbd5a;
  lVar18 = *(longlong *)(&stack0xfffffffff28d669d + lVar14);
  cVar5 = (&stack0xfffffffff28d66ad)[uVar31 + lVar20 + 0xd72993b];
  puVar16 = auStack_28;
  puVar19 = puVar16 + lVar20;
  *(ulonglong *)(puVar16 + lVar20) =
       (ulonglong)bVar28 * 0x4000 | (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 |
       (ulonglong)bVar25 * 0x100 | (ulonglong)((longlong)uVar31 < 0) * 0x80 |
       (ulonglong)(uVar31 == 0) * 0x40 | (ulonglong)bVar22 * 0x10 |
       (ulonglong)((POPCOUNT(uVar31 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar30 * 0x200000 |
       (ulonglong)bVar29 * 0x40000;
  *(undefined8 *)(&stack0xfffffffff28d6695 + lVar14) = in_RAX;
  *(ushort *)(puVar16 + lVar20) =
       (0x100 - (*(ushort *)(puVar16 + lVar20) | 0x100)) + *(short *)(puVar16 + lVar20);
  uVar6 = *(ushort *)(puVar16 + lVar20);
  uVar11 = *(undefined8 *)(&stack0xfffffffff28d6695 + lVar14);
  *(ulonglong *)(&stack0xfffffffff28d6695 + lVar14) =
       (ulonglong)bVar28 * 0x4000 | (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 |
       (ulonglong)bVar25 * 0x100 | (ulonglong)((short)uVar6 < 0) * 0x80 |
       (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)bVar22 * 0x10 |
       (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar30 * 0x200000 |
       (ulonglong)bVar29 * 0x40000;
  *(int *)(&stack0xfffffffff28d6695 + lVar14) = *(int *)(&stack0xfffffffff28d6695 + lVar14) << 0x19;
  uVar3 = *(uint *)(&stack0xfffffffff28d6695 + lVar14);
  *(uint *)(&stack0xfffffffff28d6695 + lVar14) =
       *(uint *)(&stack0xfffffffff28d6695 + lVar14) >> 0x1f;
  bVar21 = (uVar3 >> 0x1e & 1) != 0;
  bVar24 = *(int *)(&stack0xfffffffff28d6695 + lVar14) < 0;
  bVar23 = *(int *)(&stack0xfffffffff28d6695 + lVar14) == 0;
  bVar10 = POPCOUNT(*(uint *)(&stack0xfffffffff28d6695 + lVar14) & 0xff);
  bVar15 = !bVar23;
  if (bVar15) {
    bVar21 = &DAT_fffffffffffffff7 < puVar16 + lVar20;
    puVar16 = auStack_20;
    bVar24 = (longlong)(puVar16 + lVar20) < 0;
    bVar23 = puVar16 + lVar20 == (undefined1 *)0x0;
    bVar10 = POPCOUNT((ulonglong)(puVar16 + lVar20) & 0xff);
  }
  if (bVar23) {
    *(ulonglong *)(puVar16 + lVar14 + -0xd729943) =
         (ulonglong)bVar28 * 0x4000 | (ulonglong)(bVar15 && SCARRY8((longlong)puVar19,8)) * 0x800 |
         (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 | (ulonglong)bVar25 * 0x100 |
         (ulonglong)bVar24 * 0x80 | 0x40 | (ulonglong)bVar22 * 0x10 |
         (ulonglong)((bVar10 & 1) == 0) * 4 | (ulonglong)bVar21 | (ulonglong)bVar30 * 0x200000 |
         (ulonglong)bVar29 * 0x40000;
    *(undefined8 *)(puVar16 + lVar14 + -0xd72994b) = unaff_RBX;
    if ((*(ushort *)(puVar16 + lVar14 + -0xd729943) & 0x40) != 0) {
      uVar17 = FUN_162be6c28();
      return uVar17;
    }
    *(undefined1 **)(puVar16 + lVar14 + -0xd729943) = &LAB_166dcfafc;
    return uVar11;
  }
  uVar12 = *(undefined8 *)(puVar16 + lVar20);
  *(longlong *)(puVar16 + lVar20) = lVar7;
  uVar31 = *(ulonglong *)(puVar16 + lVar20);
  puVar16[lVar14 + -0xd729822] = 0;
  *(undefined8 *)(puVar16 + lVar20) = unaff_R12;
  *(undefined8 *)(puVar16 + lVar14 + -0xd729943) = in_R11;
  puVar16[lVar14 + -0xd729822] = ~puVar16[lVar14 + -0xd729822];
  puVar16[lVar14 + -0xd729822] = puVar16[lVar14 + -0xd729822] + '\x02';
  puVar16[lVar14 + -0xd729822] = -puVar16[lVar14 + -0xd729822];
  puVar16[lVar14 + -0xd729822] = puVar16[lVar14 + -0xd729822] - ~(cVar5 - (char)uVar12);
  *(undefined8 *)(puVar16 + lVar14 + -0xd729933) = uVar11;
  *(undefined8 *)(puVar16 + lVar20) = unaff_RBX;
  if (puVar16 + lVar14 + -0xd729933 < &DAT_00000008) {
    *(undefined8 *)(puVar16 + lVar14 + -0xd729943) = param_3;
    lVar7 = *(longlong *)(puVar16 + lVar20);
    *(undefined8 *)(puVar16 + lVar20) = *(undefined8 *)(puVar16 + lVar14 + -0xd729943);
    *(undefined4 *)(puVar16 + lVar14 + -0xd729943) = 0xdc720122;
    *(int *)(puVar16 + lVar14 + -0xd729943) = *(int *)(puVar16 + lVar14 + -0xd729943) + 0x238e8012;
    *(undefined4 *)(puVar16 + lVar14 + -0xd729933) = *(undefined4 *)(puVar16 + lVar14 + -0xd729943);
    uVar12 = *(undefined8 *)(puVar16 + lVar20);
    *(longlong *)(puVar16 + lVar20) = lVar18;
    *(undefined8 *)(puVar16 + lVar14 + -0xd729943) = uVar17;
    *(ulonglong *)(puVar16 + lVar14 + -0xd72994b) = uVar31;
    uVar17 = *(undefined8 *)(puVar16 + lVar14 + -0xd729943);
    *(uint *)(puVar16 + lVar14 + -0xd729933) = *(uint *)(puVar16 + lVar14 + -0xd729933) ^ 0x10b5834;
    uVar13 = *(undefined8 *)(puVar16 + lVar20);
    *(undefined8 *)(puVar16 + lVar20) = uVar11;
    *(undefined4 *)(puVar16 + lVar20) = 0x7a52001;
    *(undefined4 *)(puVar16 + lVar14 + -0xd729937) = 0;
    lVar14 = *(longlong *)(puVar16 + lVar20);
    lVar18 = lVar14 + -0x7a52009;
    *(undefined8 *)(puVar16 + lVar14 + -0x7a52001 + lVar20) = 0;
    *(longlong *)(puVar16 + lVar14 + -0x7a52001 + lVar20) =
         *(longlong *)(puVar16 + lVar14 + -0x7a52001 + lVar20) + lVar7;
    *(undefined8 *)(puVar16 + lVar18 + lVar20) = uVar11;
    *(undefined4 *)(puVar16 + lVar18 + lVar20) = 0x650e5fdd;
    *(uint *)(puVar16 + lVar18 + lVar20) = *(uint *)(puVar16 + lVar18 + lVar20) ^ 0x6162edc3;
    *(undefined4 *)(puVar16 + lVar14 + -0x7a52005 + lVar20) = 0;
    *(undefined8 *)(puVar16 + lVar18 + lVar20) = uVar13;
    *(longlong *)(puVar16 + lVar14 + -0x7a52011 + lVar20) = lVar8;
    uVar17 = FUN_166477a63(0x46cb21a,param_2,uVar12,uVar17);
    return uVar17;
  }
  *(ulonglong *)(puVar16 + lVar14 + -0xd729943) =
       (ulonglong)bVar28 * 0x4000 |
       (ulonglong)SCARRY8((longlong)(puVar16 + lVar14 + -0xd729933),-8) * 0x800 |
       (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 | (ulonglong)bVar25 * 0x100 |
       (ulonglong)((longlong)(puVar16 + lVar20) < 0) * 0x80 |
       (ulonglong)(puVar16 + lVar20 == (undefined1 *)0x0) * 0x40 | (ulonglong)bVar22 * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)(puVar16 + lVar20) & 0xff) & 1U) == 0) * 4 | 1 |
       (ulonglong)bVar30 * 0x200000 | (ulonglong)bVar29 * 0x40000;
  if (((*(uint *)(puVar16 + lVar14 + -0xd729943) & 1) == 0) &&
     ((*(uint *)(puVar16 + lVar14 + -0xd729943) >> 6 & 1) == 0)) {
    *(undefined8 *)(puVar16 + lVar20) = uVar11;
    *(undefined4 *)(puVar16 + lVar20) = 0x55dd1ecf;
    *(undefined4 *)(puVar16 + lVar14 + -0xd729937) = 0xf8d890b3;
    *(int *)(puVar16 + lVar14 + -0xd729937) = *(int *)(puVar16 + lVar14 + -0xd729937) + 0x7276f4d;
    uVar32 = *(ulonglong *)(lVar18 + -0x68);
    *(undefined8 *)(puVar16 + lVar20) = unaff_RBX;
    *(ulonglong *)(puVar16 + lVar14 + -0xd729943) = ~uVar31;
    *(ulonglong *)(puVar16 + lVar14 + -0xd729943) =
         *(longlong *)(puVar16 + lVar14 + -0xd729943) + uVar32;
    *(ulonglong *)(puVar16 + lVar14 + -0xd729943) =
         *(longlong *)(puVar16 + lVar14 + -0xd729943) - (~uVar31 & uVar32);
    uVar17 = *(undefined8 *)(puVar16 + lVar20);
    *(ulonglong *)(puVar16 + lVar20) = param_2 ^ uVar31;
    *(undefined8 *)(puVar16 + lVar14 + -0xd729943) = uVar17;
    *(undefined8 *)(puVar16 + lVar14 + -0xd72994b) = uVar17;
    *(undefined8 *)(puVar16 + lVar14 + -0xd729953) = uVar17;
    *(code **)(puVar16 + lVar14 + -0xd729943) = FUN_162be6d6e;
    *(undefined8 *)(puVar16 + lVar14 + -0xd72994b) = 0x166252af7;
    return uVar11;
  }
  uVar17 = FUN_166ba5d7f();
  return uVar17;
}



// FUNCTION 14dd94929 FUN_14dd94929 body=137 status=ok
// SIG undefined FUN_14dd94929(void)

void FUN_14dd94929(void)

{
  longlong unaff_R13;
  undefined8 unaff_R15;
  
  (*(code *)0x16510d2a3)(*(undefined8 *)(unaff_R13 + -0x78),unaff_R15);
  return;
}



// FUNCTION 14dd949b3 FUN_14dd949b3 body=53 status=ok
// SIG undefined FUN_14dd949b3(void)

void FUN_14dd949b3(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0x00000010 + param_3) = unaff_R15;
  return;
}



// FUNCTION 14dd94cce FUN_14dd94cce body=34 status=ok
// SIG undefined FUN_14dd94cce(void)

void FUN_14dd94cce(void)

{
  thunk_FUN_15b7ddc7c();
  return;
}



// FUNCTION 14dd94cf0 thunk_FUN_15b7ddc7c body=5 status=ok
// SIG undefined thunk_FUN_15b7ddc7c(void)

void thunk_FUN_15b7ddc7c(void)

{
  FUN_15b7ddc7c();
  return;
}



// FUNCTION 14dd94d5b FUN_14dd94d5b body=151 status=ok
// SIG undefined FUN_14dd94d5b(void)

ulonglong FUN_14dd94d5b(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  return *(ulonglong *)(in_R11 + -0x78) ^ in_R10;
}



// FUNCTION 14dd94e9e FUN_14dd94e9e body=287 status=ok
// SIG undefined FUN_14dd94e9e(void)

/* WARNING: Removing unreachable block (ram,0x0001617fd2ad) */
/* WARNING: Removing unreachable block (ram,0x0001617fd319) */
/* WARNING: Removing unreachable block (ram,0x0001617fd314) */
/* WARNING: Removing unreachable block (ram,0x0001617fd31c) */
/* WARNING: Removing unreachable block (ram,0x0001617fd353) */
/* WARNING: Removing unreachable block (ram,0x0001617fd359) */
/* WARNING: Removing unreachable block (ram,0x0001617fd35e) */
/* WARNING: Removing unreachable block (ram,0x0001617fd3db) */
/* WARNING: Removing unreachable block (ram,0x0001617fd416) */
/* WARNING: Removing unreachable block (ram,0x0001617fd41e) */
/* WARNING: Removing unreachable block (ram,0x000162c34ae4) */
/* WARNING: Removing unreachable block (ram,0x00014dd94f33) */
/* WARNING: Removing unreachable block (ram,0x00014dd94f39) */
/* WARNING: Removing unreachable block (ram,0x00014dd94fb8) */
/* WARNING: Removing unreachable block (ram,0x00014dd94fbe) */
/* WARNING: Removing unreachable block (ram,0x000161b55191) */
/* WARNING: Removing unreachable block (ram,0x0001617fd34e) */

undefined8 FUN_14dd94e9e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1617fd2ad();
  return uVar1;
}



// FUNCTION 14dd94fbe FUN_14dd94fbe body=128 status=ok
// SIG undefined FUN_14dd94fbe(void)

void FUN_14dd94fbe(undefined8 param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  undefined8 in_R10;
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
  ulonglong uVar16;
  ulonglong uStackX_8;
  longlong *local_res10;
  
  bVar11 = (uStackX_8 & 0x4000) != 0;
  bVar10 = (uStackX_8 & 0x800) != 0;
  bVar9 = (uStackX_8 & 0x200) != 0;
  bVar8 = (uStackX_8 & 0x100) != 0;
  bVar7 = (uStackX_8 & 0x80) != 0;
  bVar6 = (uStackX_8 & 0x40) != 0;
  bVar5 = (uStackX_8 & 0x10) != 0;
  bVar4 = (uStackX_8 & 4) != 0;
  bVar3 = (uStackX_8 & 1) != 0;
  bVar15 = (uStackX_8 & 0x200000) != 0;
  bVar12 = (uStackX_8 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res10 = unaff_RBP;
  local_res10[-1] = unaff_RBP;
  local_res10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  *(undefined4 *)(local_res10 + -3) = 0x6250468f;
  *(undefined4 *)((longlong)local_res10 + -0x14) = 0;
  uVar2 = local_res10[-3];
  uVar16 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  uVar16 = local_res10[-2];
  local_res10[-2] = in_R10;
  local_res10[-3] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  local_res10[-4] = unaff_R12;
  *local_res10 = (uVar2 ^ 0x6c759221) - 0xe0c3b64;
  local_res10[-1] = param_1;
  local_res10[-2] = param_1;
  local_res10[-1] = 0x161e11808;
  return;
}



// FUNCTION 14dd95048 FUN_14dd95048 body=158 status=ok
// SIG undefined FUN_14dd95048(void)

void FUN_14dd95048(void)

{
  return;
}



// FUNCTION 14dd950ed FUN_14dd950ed body=189 status=ok
// SIG undefined FUN_14dd950ed(void)

void FUN_14dd950ed(void)

{
  return;
}



// FUNCTION 14dd951ab FUN_14dd951ab body=168 status=ok
// SIG undefined FUN_14dd951ab(void)

void FUN_14dd951ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)0x165cc2a58)(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dd95254 FUN_14dd95254 body=232 status=ok
// SIG undefined FUN_14dd95254(void)

void FUN_14dd95254(void)

{
  FUN_161197681();
  return;
}



// FUNCTION 14dd952ca FUN_14dd952ca body=78 status=ok
// SIG undefined FUN_14dd952ca(void)

void FUN_14dd952ca(void)

{
  return;
}



// FUNCTION 14dd953f8 FUN_14dd953f8 body=130 status=ok
// SIG undefined FUN_14dd953f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9542f) */

void FUN_14dd953f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1663a1f2d(param_1,param_2,param_3,FUN_1663a1f2d);
  return;
}



// FUNCTION 14dd9559e FUN_14dd9559e body=154 status=ok
// SIG undefined FUN_14dd9559e(void)

void FUN_14dd9559e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 local_res10;
  ulonglong in_stack_00000020;
  
  FUN_161e1bda1(param_1,param_2,local_res10,param_4,~(in_stack_00000020 & in_RAX));
  return;
}



// FUNCTION 14dd95638 FUN_14dd95638 body=155 status=ok
// SIG undefined FUN_14dd95638(void)

undefined8 FUN_14dd95638(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd95789 FUN_14dd95789 body=135 status=ok
// SIG undefined FUN_14dd95789(void)

void FUN_14dd95789(void)

{
  ulonglong uVar1;
  longlong *unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined4 *)unaff_RSI = 0;
  *(undefined4 *)((longlong)unaff_RSI + 4) = 0;
  uVar1 = *unaff_RSI + *(longlong *)(unaff_R13 + -0x78);
  FUN_165c3f9a2(~(uVar1 & unaff_R15) & (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14dd95975 FUN_14dd95975 body=48 status=ok
// SIG undefined FUN_14dd95975(void)

void FUN_14dd95975(void)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 *in_R9;
  undefined8 *in_stack_00000030;
  
  *in_R9 = unaff_RBX;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *in_stack_00000030 = 0x2948e76;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd95a9c FUN_14dd95a9c body=124 status=ok
// SIG undefined FUN_14dd95a9c(void)

void FUN_14dd95a9c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int unaff_retaddr;
  
  FUN_162dadf1d(param_1,param_2,-1 - (~param_3 | ~(unaff_retaddr + 0x5a1b4838U)),param_4,param_4);
  return;
}



// FUNCTION 14dd95b19 FUN_14dd95b19 body=160 status=ok
// SIG undefined FUN_14dd95b19(void)

void FUN_14dd95b19(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined8 in_R11;
  longlong local_res20;
  
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  FUN_165245093(param_1,FUN_165245093,param_3,param_4);
  return;
}



// FUNCTION 14dd95cf8 FUN_14dd95cf8 body=169 status=ok
// SIG undefined FUN_14dd95cf8(void)

void FUN_14dd95cf8(void)

{
  return;
}



// FUNCTION 14dd95e55 FUN_14dd95e55 body=143 status=ok
// SIG undefined FUN_14dd95e55(void)

void FUN_14dd95e55(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_157069fec(param_1,local_res8,0xfeff);
  return;
}



// FUNCTION 14dd95ee5 FUN_14dd95ee5 body=166 status=ok
// SIG undefined FUN_14dd95ee5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd95f86) */
/* WARNING: Removing unreachable block (ram,0x00014dd95f8c) */
/* WARNING: Removing unreachable block (ram,0x00014dd96016) */
/* WARNING: Removing unreachable block (ram,0x00014dd9601c) */
/* WARNING: Removing unreachable block (ram,0x00014dd9607c) */
/* WARNING: Removing unreachable block (ram,0x00014dd96082) */
/* WARNING: Removing unreachable block (ram,0x00016119a942) */
/* WARNING: Removing unreachable block (ram,0x000161047ad0) */

void FUN_14dd95ee5(void)

{
  FUN_161047ad0();
  return;
}



// FUNCTION 14dd95f8c FUN_14dd95f8c body=452 status=ok
// SIG undefined FUN_14dd95f8c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9601c) */
/* WARNING: Removing unreachable block (ram,0x00014dd9607c) */
/* WARNING: Removing unreachable block (ram,0x00014dd96082) */

void FUN_14dd95f8c(char param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156e4334f(-param_1,FUN_156e4334f,
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                ~(~*(ulonglong *)(unaff_R12 + -0x80) | ~in_RAX) * -2,
                ~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  FUN_15661acdd();
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd9601c FUN_14dd9601c body=165 status=ok
// SIG undefined FUN_14dd9601c(void)

void FUN_14dd9601c(undefined8 param_1)

{
  longlong in_RAX;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (in_RAX < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_162a13f44(param_1,uVar1);
  return;
}



// FUNCTION 14dd960c1 FUN_14dd960c1 body=2 status=ok
// SIG undefined FUN_14dd960c1(void)

void FUN_14dd960c1(void)

{
  return;
}



// FUNCTION 14dd9614c FUN_14dd9614c body=127 status=ok
// SIG undefined FUN_14dd9614c(void)

void FUN_14dd9614c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1613e2a77(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14dd962fa FUN_14dd962fa body=120 status=ok
// SIG undefined FUN_14dd962fa(void)

/* WARNING: Removing unreachable block (ram,0x00014dd96373) */

void FUN_14dd962fa(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  if (CARRY8(~unaff_RBX + unaff_RBX + 1,*(ulonglong *)(unaff_R12 + -0x28))) {
    FUN_1651588c6(*(undefined8 *)(unaff_R12 + -0x58),~in_RAX ^ 0xffffffffffffffff,
                  ~((~param_3 | ~in_RAX) ^ 0xffffffffffffffff | ~unaff_retaddr));
    return;
  }
  FUN_15b627264();
  return;
}



// FUNCTION 14dd96373 FUN_14dd96373 body=191 status=ok
// SIG undefined FUN_14dd96373(void)

void FUN_14dd96373(void)

{
  return;
}



// FUNCTION 14dd96433 FUN_14dd96433 body=11 status=ok
// SIG undefined FUN_14dd96433(void)

void FUN_14dd96433(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd9643c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dd9656a FUN_14dd9656a body=15 status=ok
// SIG undefined FUN_14dd9656a(void)

void FUN_14dd9656a(void)

{
  return;
}



// FUNCTION 14dd96579 FUN_14dd96579 body=129 status=ok
// SIG undefined FUN_14dd96579(void)

void FUN_14dd96579(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x122282) {
    FUN_165e93f27(param_1,param_2,param_3,&DAT_14d7ad626);
    return;
  }
  if (param_4 == 0x122283) {
    FUN_15b25b3dd();
    return;
  }
  FUN_15b25b3e9();
  return;
}



// FUNCTION 14dd965fb FUN_14dd965fb body=204 status=ok
// SIG undefined FUN_14dd965fb(void)

/* WARNING: Removing unreachable block (ram,0x00014dd966a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd966ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd966b2) */

void FUN_14dd965fb(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  FUN_15b2a0e86();
                    /* WARNING: Could not recover jumptable at 0x0001574f6657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_RSI - param_2))(param_1);
  return;
}



// FUNCTION 14dd96a98 FUN_14dd96a98 body=18 status=ok
// SIG undefined FUN_14dd96a98(void)

void FUN_14dd96a98(void)

{
  return;
}



// FUNCTION 14dd96c44 FUN_14dd96c44 body=96 status=ok
// SIG undefined FUN_14dd96c44(void)

void FUN_14dd96c44(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined4 *)(local_res18 + -0x18) = 0x9cdf8d9;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x18);
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
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x71018d3;
  FUN_14d85d504(param_1,*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14dd96f8f FUN_14dd96f8f body=224 status=ok
// SIG undefined FUN_14dd96f8f(void)

void FUN_14dd96f8f(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ param_1;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dd9700b;
  FUN_156f10362(~((~param_1 | local_res8) & (~local_res8 | param_1)),unaff_retaddr);
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  *(undefined **)(uVar1 - 0x28) = &DAT_14dd97073;
  return;
}



// FUNCTION 14dd9708e FUN_14dd9708e body=163 status=ok
// SIG undefined FUN_14dd9708e(void)

/* WARNING: Instruction at (ram,0x00014dd971f9) overlaps instruction at (ram,0x00014dd971f8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd9712d) */
/* WARNING: Removing unreachable block (ram,0x000165cda0fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd97133) */
/* WARNING: Removing unreachable block (ram,0x00014dd971c5) */
/* WARNING: Removing unreachable block (ram,0x00014dd971ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd971d0) */
/* WARNING: Removing unreachable block (ram,0x00014dd971d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd971f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd971f8) */

void FUN_14dd9708e(int param_1)

{
  longlong unaff_R14;
  undefined1 uStack000000000000012c;
  
  *(int *)(unaff_R14 + 0x108) = *(int *)(unaff_R14 + 0x108) - (-1 - param_1);
  uStack000000000000012c = 0;
  FUN_165cda0fe();
  return;
}



// FUNCTION 14dd97133 FUN_14dd97133 body=160 status=ok
// SIG undefined FUN_14dd97133(void)

/* WARNING: Instruction at (ram,0x00014dd971f9) overlaps instruction at (ram,0x00014dd971f8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd971ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd971d0) */
/* WARNING: Removing unreachable block (ram,0x00014dd971d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd971f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd971f8) */

void FUN_14dd97133(void)

{
  FUN_15b7d6752();
  return;
}



// FUNCTION 14dd971d5 FUN_14dd971d5 body=82 status=ok
// SIG undefined FUN_14dd971d5(void)

/* WARNING: Instruction at (ram,0x00014dd971f9) overlaps instruction at (ram,0x00014dd971f8)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014dd97214 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd971d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_162d6b5ad(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dd972ad FUN_14dd972ad body=538 status=ok
// SIG undefined FUN_14dd972ad(void)

void FUN_14dd972ad(void)

{
  FUN_161c7e552();
  (*(code *)0x1665bd85c)();
  return;
}



// FUNCTION 14dd97472 FUN_14dd97472 body=139 status=ok
// SIG undefined FUN_14dd97472(void)

void FUN_14dd97472(ushort *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *param_1 = (-0x101 - (*param_1 | 0xfeff)) + *param_1;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  *(undefined4 *)(local_res20 + -0x20) = 0xe72c6da8;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  lVar2 = *(longlong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + lVar2 + 0x18d39250) = 0;
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x18);
  uVar1 = *(ulonglong *)(local_res20 + -8);
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) & 0x16507d1e4;
  *(ulonglong *)(local_res20 + -8) = ~*(ulonglong *)(local_res20 + -8);
  FUN_16507d16e(uStackX_8,uVar1 | 0x16507d1e4);
  return;
}



// FUNCTION 14dd974fe FUN_14dd974fe body=488 status=ok
// SIG undefined FUN_14dd974fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd974fe(void)

{
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = CONCAT71((int7)((ulonglong)*(undefined8 *)(unaff_R12 + -0x38) >> 8),0x7d);
  FUN_166a88af5(0x26d1ba);
  *(undefined4 *)(&stack0x6bd17b75 + lVar1) = 0;
  *(uint *)(&stack0x6bd17b75 + lVar1) = *(uint *)(&stack0x6bd17b75 + lVar1) ^ 0xffffffff;
  FUN_156a5162d();
  FUN_1651d695e();
  return;
}



// FUNCTION 14dd977a0 FUN_14dd977a0 body=173 status=ok
// SIG undefined FUN_14dd977a0(void)

void FUN_14dd977a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  (*(code *)0x16514b0e3)(local_res10,local_res18,param_3);
  return;
}



// FUNCTION 14dd978d4 FUN_14dd978d4 body=315 status=ok
// SIG undefined FUN_14dd978d4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd979af) */

void FUN_14dd978d4(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)
           (unaff_RSI + ~(~(in_RAX & 0xffffffffc81f24af) & (unaff_RBP | 0xffffffffc81f24af)));
  FUN_166588ae4();
  (*(code *)0x165ee875e)
            ((*(ulonglong *)((param_1 - ~uVar1) + (uVar1 & param_1) * -2 + -0x89) &
             0xb85a4d9b5869ffff) << 1);
  return;
}



// FUNCTION 14dd97a0f FUN_14dd97a0f body=182 status=ok
// SIG undefined FUN_14dd97a0f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd97ac6) */

void FUN_14dd97a0f(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 in_AL;
  undefined8 unaff_R14;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  uVar1 = ~(~local_res10 & 0xfeff);
  LOCK();
  UNLOCK();
  DAT_14d7a8283 = in_AL;
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined4 *)(local_res18 + -0x18) = 0xffaa97d;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  if ((*(ulonglong *)(local_res18 + -0x28) & 0x40) != 0) {
    FUN_1570fec6a();
    return;
  }
  FUN_1570fec6a();
  return;
}



// FUNCTION 14dd97ac6 FUN_14dd97ac6 body=138 status=ok
// SIG undefined FUN_14dd97ac6(void)

void FUN_14dd97ac6(undefined8 param_1,undefined8 param_2)

{
  FUN_1567149bc(param_1,param_2,FUN_1567149bc);
  return;
}



// FUNCTION 14dd97b50 FUN_14dd97b50 body=426 status=ok
// SIG undefined FUN_14dd97b50(void)

/* WARNING: Removing unreachable block (ram,0x00014dd97bec) */
/* WARNING: Removing unreachable block (ram,0x00014dd97bf2) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cc1) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cba) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd97ccf) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cc9) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cd9) */
/* WARNING: Removing unreachable block (ram,0x00014dd97ced) */
/* WARNING: Removing unreachable block (ram,0x00014dd97cf5) */
/* WARNING: Removing unreachable block (ram,0x000166441d98) */

void FUN_14dd97b50(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x98)) == 0xffffffffffffffff &&
      (~*(ulonglong *)(unaff_R12 + -0x98) | in_RAX) == 0xffffffffffffffff) {
    FUN_16155abe9();
    return;
  }
  FUN_16155abe9();
  return;
}



// FUNCTION 14dd980fe FUN_14dd980fe body=177 status=ok
// SIG undefined FUN_14dd980fe(void)

void FUN_14dd980fe(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_1657a1cdb)
            (0x7c42b5dd,0xffffffffffffffd8,
             ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
              (~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),
             ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
              (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14dd981b1 FUN_14dd981b1 body=134 status=ok
// SIG undefined FUN_14dd981b1(void)

void FUN_14dd981b1(void)

{
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined4 *)(local_res10 + -0x20) = 0x3499890d;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *(undefined8 *)(local_res10 + -0x10 + (*(ulonglong *)(local_res10 + -0x20) ^ 0x34998905)) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x14dd9824a;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  FUN_14d7a9f18();
  return;
}



// FUNCTION 14dd982f6 FUN_14dd982f6 body=44 status=ok
// SIG undefined FUN_14dd982f6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd98381) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd982f6(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16589f5ad(~in_RAX | *(ulonglong *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX,FUN_16589f5ad,
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14dd98381 FUN_14dd98381 body=172 status=ok
// SIG undefined FUN_14dd98381(void)

void FUN_14dd98381(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = param_3 + *(longlong *)(unaff_RDI + -0x70);
  FUN_14daf50d5(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                (-uVar1 - param_1) + (uVar1 | param_1) * 2);
  return;
}



// FUNCTION 14dd9842d FUN_14dd9842d body=28 status=ok
// SIG undefined FUN_14dd9842d(void)

void FUN_14dd9842d(void)

{
  return;
}



// FUNCTION 14dd986b3 FUN_14dd986b3 body=144 status=ok
// SIG undefined FUN_14dd986b3(void)

void FUN_14dd986b3(undefined8 param_1)

{
  FUN_15afd1b09(param_1,FUN_15afd1b09);
  return;
}



// FUNCTION 14dd98743 thunk_FUN_14dd98749 body=5 status=ok
// SIG undefined thunk_FUN_14dd98749(void)

void thunk_FUN_14dd98749(void)

{
  return;
}



// FUNCTION 14dd98749 FUN_14dd98749 body=146 status=ok
// SIG undefined FUN_14dd98749(void)

void FUN_14dd98749(void)

{
  return;
}



// FUNCTION 14dd98857 thunk_FUN_14dd9885d body=5 status=ok
// SIG undefined thunk_FUN_14dd9885d(void)

void thunk_FUN_14dd9885d(void)

{
  return;
}



// FUNCTION 14dd9885d FUN_14dd9885d body=139 status=ok
// SIG undefined FUN_14dd9885d(void)

void FUN_14dd9885d(void)

{
  return;
}



// FUNCTION 14dd98a14 FUN_14dd98a14 body=155 status=ok
// SIG undefined FUN_14dd98a14(void)

/* WARNING: Removing unreachable block (ram,0x00014dd98a48) */

void FUN_14dd98a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  undefined8 local_res18;
  undefined2 local_res20;
  
  FUN_161137e66(local_res18,param_2,param_3,
                CONCAT62((int6)((ulonglong)uStackX_8 >> 0x10),local_res20) | 0xfeff);
  return;
}



// FUNCTION 14dd98ab0 FUN_14dd98ab0 body=36 status=ok
// SIG undefined FUN_14dd98ab0(void)

void FUN_14dd98ab0(void)

{
  return;
}



// FUNCTION 14dd98c67 FUN_14dd98c67 body=629 status=ok
// SIG undefined FUN_14dd98c67(void)

/* WARNING: Removing unreachable block (ram,0x000162ab389a) */
/* WARNING: Removing unreachable block (ram,0x000162ab38a6) */
/* WARNING: Removing unreachable block (ram,0x00014dd98cd6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd98c67(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(ulonglong *)(unaff_RSI + 0x10) = ~param_1;
  *(undefined8 *)(param_6 + -0x10) = param_4;
  *(undefined8 *)(param_6 + -8) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x10) = in_stack_00000018;
  *(undefined8 *)(param_6 + -0x18) = in_stack_00000018;
  *(undefined8 *)(param_6 + -0x20) = unaff_R15;
  *(undefined8 *)(param_6 + -0x28) = unaff_R12;
  *(undefined8 *)(param_6 + -0x30) = in_stack_00000010;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -8) = FUN_16222b9f2;
                    /* WARNING: Could not recover jumptable at 0x00016222b9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_6 + -0x10) + 0xe0))();
  return;
}



// FUNCTION 14dd98d85 FUN_14dd98d85 body=314 status=ok
// SIG undefined FUN_14dd98d85(void)

/* WARNING: Removing unreachable block (ram,0x00014dd98e1d) */
/* WARNING: Removing unreachable block (ram,0x00014dd98e29) */

void FUN_14dd98d85(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + unaff_RDI);
  FUN_157349d87(param_1,~((~(0xffffffffffffffff - in_RAX & uVar1) + uVar1) -
                          ~(0xffffffffffffffff - in_RAX) & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14dd98e29 FUN_14dd98e29 body=134 status=ok
// SIG undefined FUN_14dd98e29(void)

void FUN_14dd98e29(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  ulonglong *unaff_R14;
  
  uVar1 = *unaff_R14;
  uVar2 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | in_RAX;
  *unaff_R14 = ~((~(unaff_RDI & uVar1) + uVar2) - ~unaff_RDI & *unaff_R14);
  FUN_162e7168d();
  return;
}



// FUNCTION 14dd98eb3 FUN_14dd98eb3 body=52 status=ok
// SIG undefined FUN_14dd98eb3(void)

void FUN_14dd98eb3(void)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr);
  *local_res10 = unaff_RBX;
  local_res10[-2] = unaff_R13;
  local_res10[-3] = unaff_R13;
  local_res10[-2] = &DAT_14dd98ee9;
  return;
}



// FUNCTION 14dd98fe1 FUN_14dd98fe1 body=58 status=ok
// SIG undefined FUN_14dd98fe1(void)

void FUN_14dd98fe1(void)

{
  return;
}



// FUNCTION 14dd99070 FUN_14dd99070 body=340 status=ok
// SIG undefined FUN_14dd99070(void)

void FUN_14dd99070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162a30832(FUN_162a30832,param_2,param_3);
  return;
}



// FUNCTION 14dd991c4 FUN_14dd991c4 body=192 status=ok
// SIG undefined FUN_14dd991c4(void)

undefined8 FUN_14dd991c4(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd99614 FUN_14dd99614 body=310 status=ok
// SIG undefined FUN_14dd99614(void)

void FUN_14dd99614(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  byte in_CF;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x68) ^ param_1;
  FUN_1617b76dd((char)param_1,uVar1,(in_RAX - param_3) - (ulonglong)in_CF,param_4);
  if ((char)uVar1 != '\0') {
    FUN_16128c1ed();
    return;
  }
  return;
}



// FUNCTION 14dd99914 FUN_14dd99914 body=113 status=ok
// SIG undefined FUN_14dd99914(void)

undefined8 FUN_14dd99914(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined **)(local_res20 + -8) = &DAT_14dd999a4;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7a8018;
  return uVar1;
}



// FUNCTION 14dd99c46 FUN_14dd99c46 body=151 status=ok
// SIG undefined FUN_14dd99c46(void)

void FUN_14dd99c46(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0xa0);
  FUN_166951cea((~(uVar1 & unaff_RBP) + unaff_RBP) - ~uVar1 & uVar1 & unaff_RBP);
  return;
}



// FUNCTION 14dd99cde FUN_14dd99cde body=483 status=ok
// SIG undefined FUN_14dd99cde(void)

/* WARNING: Removing unreachable block (ram,0x00014dd99d81) */

void FUN_14dd99cde(void)

{
  return;
}



// FUNCTION 14dd99e22 FUN_14dd99e22 body=162 status=ok
// SIG undefined FUN_14dd99e22(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd99e22(undefined8 param_1)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x130) = 0x39dd2c3;
  FUN_1617e91b2(param_1,FUN_1617e91b2);
  return;
}



// FUNCTION 14dd99f60 FUN_14dd99f60 body=162 status=ok
// SIG undefined FUN_14dd99f60(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd99f60(void)

{
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~(~unaff_R12 | ~*(ulonglong *)(unaff_RDI + 0x10)) ^ 0xffffffffffffffff;
  return;
}



// FUNCTION 14dd9a218 FUN_14dd9a218 body=153 status=ok
// SIG undefined FUN_14dd9a218(void)

void FUN_14dd9a218(void)

{
  return;
}



// FUNCTION 14dd9a500 FUN_14dd9a500 body=71 status=ok
// SIG undefined FUN_14dd9a500(void)

void FUN_14dd9a500(void)

{
  return;
}



// FUNCTION 14dd9a6b8 FUN_14dd9a6b8 body=247 status=ok
// SIG undefined FUN_14dd9a6b8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9a738) */
/* WARNING: Removing unreachable block (ram,0x00014dd9a73e) */
/* WARNING: Removing unreachable block (ram,0x00014deed367) */
/* WARNING: Removing unreachable block (ram,0x00014deed482) */
/* WARNING: Removing unreachable block (ram,0x00014deed488) */
/* WARNING: Removing unreachable block (ram,0x000160ef5401) */
/* WARNING: Removing unreachable block (ram,0x000160ef549f) */
/* WARNING: Removing unreachable block (ram,0x000160ef54a5) */
/* WARNING: Removing unreachable block (ram,0x000160ef5533) */
/* WARNING: Removing unreachable block (ram,0x000165538ca2) */
/* WARNING: Removing unreachable block (ram,0x000160ef5539) */
/* WARNING: Removing unreachable block (ram,0x000160ef55be) */
/* WARNING: Removing unreachable block (ram,0x000160ef55c3) */
/* WARNING: Removing unreachable block (ram,0x000160ef55c9) */
/* WARNING: Removing unreachable block (ram,0x000160ef55ce) */
/* WARNING: Removing unreachable block (ram,0x00016665b309) */

undefined8 FUN_14dd9a6b8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14deed367();
  return uVar1;
}



// FUNCTION 14dd9a829 FUN_14dd9a829 body=604 status=ok
// SIG undefined FUN_14dd9a829(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9a941) */
/* WARNING: Removing unreachable block (ram,0x00014dd9a947) */
/* WARNING: Removing unreachable block (ram,0x00014dd9a9e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd9a9f2) */
/* WARNING: Removing unreachable block (ram,0x00014dd9aa7d) */
/* WARNING: Removing unreachable block (ram,0x00014dd9aa83) */
/* WARNING: Removing unreachable block (ram,0x00015aff2de2) */
/* WARNING: Removing unreachable block (ram,0x00014dd9a9ed) */
/* WARNING: Removing unreachable block (ram,0x000165c6e1e6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd9a829(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar4 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x50);
  FUN_14dd46436();
  uVar2 = *(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | param_1;
  *(ulonglong *)(unaff_R15 + 0x10) = -1 - ((~param_1 | uVar2) & *(ulonglong *)(unaff_R15 + 0x10));
  *(ulonglong *)(uStackX_10 + -8) = ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15);
  *(ulonglong *)(uStackX_10 + -0x10) = *(ulonglong *)(uStackX_10 + -8);
  *(undefined8 *)(uStackX_10 + -0x18) = unaff_R14;
  *(undefined8 *)(uStackX_10 + -8) = 0;
  *(longlong *)(uStackX_10 + -8) = *(longlong *)(uStackX_10 + -8) + -0x165a5aa2c;
  *(longlong *)(uStackX_10 + -8) = -*(longlong *)(uStackX_10 + -8);
  uVar3 = FUN_165a5a9fc(unaff_retaddr,param_2,param_3,uVar4);
  return uVar3;
}



// FUNCTION 14dd9aa89 FUN_14dd9aa89 body=173 status=ok
// SIG undefined FUN_14dd9aa89(void)

/* WARNING: Removing unreachable block (ram,0x00014dd9ab29) */
/* WARNING: Removing unreachable block (ram,0x00014dd9ab34) */
/* WARNING: Removing unreachable block (ram,0x00014dd9ab00) */
/* WARNING: Removing unreachable block (ram,0x00014dd9ab2f) */

void FUN_14dd9aa89(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *in_RAX;
  ulonglong unaff_RDI;
  
  *(undefined4 *)in_RAX = 0x808c3076;
  *(undefined4 *)((longlong)in_RAX + 4) = 0xf19157cb;
  *(uint *)((longlong)in_RAX + 4) = *(uint *)((longlong)in_RAX + 4) ^ 0xe6ea834;
  uVar2 = *in_RAX;
  *in_RAX = *(ulonglong *)(unaff_RDI + (uVar2 ^ 0x7f73cfd6));
  uVar3 = *in_RAX;
  *in_RAX = uVar2 ^ 0x7f73cfd6;
  *(undefined4 *)in_RAX = 0;
  *(undefined4 *)((longlong)in_RAX + 4) = 0;
  *in_RAX = unaff_RDI;
  uVar2 = *(ulonglong *)(*in_RAX - 0x70);
  uVar1 = *(ulonglong *)(*in_RAX - 0x80);
  *in_RAX = ~((~uVar1 - ~(uVar1 & param_1)) + uVar1) & (uVar1 | param_1);
  in_RAX[-1] = uVar1 | param_1;
  uVar1 = *in_RAX;
  *in_RAX = uVar1;
  in_RAX[-1] = uVar1;
  *in_RAX = (ulonglong)FUN_165af62a6;
  FUN_1656602c6(param_1,FUN_1656602c6,uVar2 + param_1 + (uVar2 & param_1) * -2,uVar3 ^ param_1);
  return;
}



// FUNCTION 14dd9adf7 FUN_14dd9adf7 body=144 status=ok
// SIG undefined FUN_14dd9adf7(void)

ulonglong FUN_14dd9adf7(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RBP);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = *puVar1;
  *puVar1 = (ulonglong)&LAB_16648064c;
  return uVar2 ^ unaff_R15;
}


